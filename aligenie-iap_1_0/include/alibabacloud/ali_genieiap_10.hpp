// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALIGENIEIAP10_H_
#define ALIBABACLOUD_ALIGENIEIAP10_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_AliGenieiap10 {
class AppUseTimeReportHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  AppUseTimeReportHeaders() {}

  explicit AppUseTimeReportHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
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
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~AppUseTimeReportHeaders() = default;
};
class AppUseTimeReportRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  AppUseTimeReportRequestDeviceInfo() {}

  explicit AppUseTimeReportRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~AppUseTimeReportRequestDeviceInfo() = default;
};
class AppUseTimeReportRequestPayload : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<long> isPrivilege{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> resourceType{};
  shared_ptr<string> stepCode{};
  shared_ptr<long> vipType{};
  shared_ptr<string> originUuid{};

  AppUseTimeReportRequestPayload() {}

  explicit AppUseTimeReportRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (isPrivilege) {
      res["IsPrivilege"] = boost::any(*isPrivilege);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (stepCode) {
      res["StepCode"] = boost::any(*stepCode);
    }
    if (vipType) {
      res["VipType"] = boost::any(*vipType);
    }
    if (originUuid) {
      res["originUuid"] = boost::any(*originUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("IsPrivilege") != m.end() && !m["IsPrivilege"].empty()) {
      isPrivilege = make_shared<long>(boost::any_cast<long>(m["IsPrivilege"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
    if (m.find("StepCode") != m.end() && !m["StepCode"].empty()) {
      stepCode = make_shared<string>(boost::any_cast<string>(m["StepCode"]));
    }
    if (m.find("VipType") != m.end() && !m["VipType"].empty()) {
      vipType = make_shared<long>(boost::any_cast<long>(m["VipType"]));
    }
    if (m.find("originUuid") != m.end() && !m["originUuid"].empty()) {
      originUuid = make_shared<string>(boost::any_cast<string>(m["originUuid"]));
    }
  }


  virtual ~AppUseTimeReportRequestPayload() = default;
};
class AppUseTimeReportRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  AppUseTimeReportRequestUserInfo() {}

  explicit AppUseTimeReportRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~AppUseTimeReportRequestUserInfo() = default;
};
class AppUseTimeReportRequest : public Darabonba::Model {
public:
  shared_ptr<AppUseTimeReportRequestDeviceInfo> deviceInfo{};
  shared_ptr<AppUseTimeReportRequestPayload> payload{};
  shared_ptr<AppUseTimeReportRequestUserInfo> userInfo{};

  AppUseTimeReportRequest() {}

  explicit AppUseTimeReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        AppUseTimeReportRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<AppUseTimeReportRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        AppUseTimeReportRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<AppUseTimeReportRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        AppUseTimeReportRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<AppUseTimeReportRequestUserInfo>(model1);
      }
    }
  }


  virtual ~AppUseTimeReportRequest() = default;
};
class AppUseTimeReportShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  AppUseTimeReportShrinkRequest() {}

  explicit AppUseTimeReportShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~AppUseTimeReportShrinkRequest() = default;
};
class AppUseTimeReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> retCode{};
  shared_ptr<string> retMsg{};
  shared_ptr<bool> retValue{};

  AppUseTimeReportResponseBody() {}

  explicit AppUseTimeReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (retCode) {
      res["RetCode"] = boost::any(*retCode);
    }
    if (retMsg) {
      res["RetMsg"] = boost::any(*retMsg);
    }
    if (retValue) {
      res["RetValue"] = boost::any(*retValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RetCode") != m.end() && !m["RetCode"].empty()) {
      retCode = make_shared<long>(boost::any_cast<long>(m["RetCode"]));
    }
    if (m.find("RetMsg") != m.end() && !m["RetMsg"].empty()) {
      retMsg = make_shared<string>(boost::any_cast<string>(m["RetMsg"]));
    }
    if (m.find("RetValue") != m.end() && !m["RetValue"].empty()) {
      retValue = make_shared<bool>(boost::any_cast<bool>(m["RetValue"]));
    }
  }


  virtual ~AppUseTimeReportResponseBody() = default;
};
class AppUseTimeReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AppUseTimeReportResponseBody> body{};

  AppUseTimeReportResponse() {}

  explicit AppUseTimeReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AppUseTimeReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AppUseTimeReportResponseBody>(model1);
      }
    }
  }


  virtual ~AppUseTimeReportResponse() = default;
};
class CreateReminderHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  CreateReminderHeaders() {}

  explicit CreateReminderHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
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
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~CreateReminderHeaders() = default;
};
class CreateReminderRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  CreateReminderRequestDeviceInfo() {}

  explicit CreateReminderRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~CreateReminderRequestDeviceInfo() = default;
};
class CreateReminderRequestPayloadRecurrenceRule : public Darabonba::Model {
public:
  shared_ptr<long> day{};
  shared_ptr<vector<long>> daysOfMonth{};
  shared_ptr<vector<long>> daysOfWeek{};
  shared_ptr<long> endDateTime{};
  shared_ptr<string> freq{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};
  shared_ptr<long> month{};
  shared_ptr<long> second{};
  shared_ptr<long> startDateTime{};
  shared_ptr<long> year{};

  CreateReminderRequestPayloadRecurrenceRule() {}

  explicit CreateReminderRequestPayloadRecurrenceRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (daysOfMonth) {
      res["DaysOfMonth"] = boost::any(*daysOfMonth);
    }
    if (daysOfWeek) {
      res["DaysOfWeek"] = boost::any(*daysOfWeek);
    }
    if (endDateTime) {
      res["EndDateTime"] = boost::any(*endDateTime);
    }
    if (freq) {
      res["Freq"] = boost::any(*freq);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    if (second) {
      res["Second"] = boost::any(*second);
    }
    if (startDateTime) {
      res["StartDateTime"] = boost::any(*startDateTime);
    }
    if (year) {
      res["Year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<long>(boost::any_cast<long>(m["Day"]));
    }
    if (m.find("DaysOfMonth") != m.end() && !m["DaysOfMonth"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfMonth"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfMonth"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfMonth = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DaysOfWeek") != m.end() && !m["DaysOfWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EndDateTime") != m.end() && !m["EndDateTime"].empty()) {
      endDateTime = make_shared<long>(boost::any_cast<long>(m["EndDateTime"]));
    }
    if (m.find("Freq") != m.end() && !m["Freq"].empty()) {
      freq = make_shared<string>(boost::any_cast<string>(m["Freq"]));
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["Month"]));
    }
    if (m.find("Second") != m.end() && !m["Second"].empty()) {
      second = make_shared<long>(boost::any_cast<long>(m["Second"]));
    }
    if (m.find("StartDateTime") != m.end() && !m["StartDateTime"].empty()) {
      startDateTime = make_shared<long>(boost::any_cast<long>(m["StartDateTime"]));
    }
    if (m.find("Year") != m.end() && !m["Year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["Year"]));
    }
  }


  virtual ~CreateReminderRequestPayloadRecurrenceRule() = default;
};
class CreateReminderRequestPayload : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<bool> isDebug{};
  shared_ptr<CreateReminderRequestPayloadRecurrenceRule> recurrenceRule{};

  CreateReminderRequestPayload() {}

  explicit CreateReminderRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (isDebug) {
      res["IsDebug"] = boost::any(*isDebug);
    }
    if (recurrenceRule) {
      res["RecurrenceRule"] = recurrenceRule ? boost::any(recurrenceRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("IsDebug") != m.end() && !m["IsDebug"].empty()) {
      isDebug = make_shared<bool>(boost::any_cast<bool>(m["IsDebug"]));
    }
    if (m.find("RecurrenceRule") != m.end() && !m["RecurrenceRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["RecurrenceRule"].type()) {
        CreateReminderRequestPayloadRecurrenceRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RecurrenceRule"]));
        recurrenceRule = make_shared<CreateReminderRequestPayloadRecurrenceRule>(model1);
      }
    }
  }


  virtual ~CreateReminderRequestPayload() = default;
};
class CreateReminderRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  CreateReminderRequestUserInfo() {}

  explicit CreateReminderRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~CreateReminderRequestUserInfo() = default;
};
class CreateReminderRequest : public Darabonba::Model {
public:
  shared_ptr<CreateReminderRequestDeviceInfo> deviceInfo{};
  shared_ptr<CreateReminderRequestPayload> payload{};
  shared_ptr<CreateReminderRequestUserInfo> userInfo{};

  CreateReminderRequest() {}

  explicit CreateReminderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        CreateReminderRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<CreateReminderRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        CreateReminderRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<CreateReminderRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        CreateReminderRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<CreateReminderRequestUserInfo>(model1);
      }
    }
  }


  virtual ~CreateReminderRequest() = default;
};
class CreateReminderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  CreateReminderShrinkRequest() {}

  explicit CreateReminderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~CreateReminderShrinkRequest() = default;
};
class CreateReminderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> model{};
  shared_ptr<bool> success{};

  CreateReminderResponseBody() {}

  explicit CreateReminderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<long>(boost::any_cast<long>(m["Model"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateReminderResponseBody() = default;
};
class CreateReminderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateReminderResponseBody> body{};

  CreateReminderResponse() {}

  explicit CreateReminderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateReminderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateReminderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateReminderResponse() = default;
};
class DeleteReminderHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  DeleteReminderHeaders() {}

  explicit DeleteReminderHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
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
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~DeleteReminderHeaders() = default;
};
class DeleteReminderRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  DeleteReminderRequestDeviceInfo() {}

  explicit DeleteReminderRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~DeleteReminderRequestDeviceInfo() = default;
};
class DeleteReminderRequestPayload : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<bool> isDebug{};

  DeleteReminderRequestPayload() {}

  explicit DeleteReminderRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isDebug) {
      res["IsDebug"] = boost::any(*isDebug);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsDebug") != m.end() && !m["IsDebug"].empty()) {
      isDebug = make_shared<bool>(boost::any_cast<bool>(m["IsDebug"]));
    }
  }


  virtual ~DeleteReminderRequestPayload() = default;
};
class DeleteReminderRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  DeleteReminderRequestUserInfo() {}

  explicit DeleteReminderRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~DeleteReminderRequestUserInfo() = default;
};
class DeleteReminderRequest : public Darabonba::Model {
public:
  shared_ptr<DeleteReminderRequestDeviceInfo> deviceInfo{};
  shared_ptr<DeleteReminderRequestPayload> payload{};
  shared_ptr<DeleteReminderRequestUserInfo> userInfo{};

  DeleteReminderRequest() {}

  explicit DeleteReminderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        DeleteReminderRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<DeleteReminderRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        DeleteReminderRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<DeleteReminderRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        DeleteReminderRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<DeleteReminderRequestUserInfo>(model1);
      }
    }
  }


  virtual ~DeleteReminderRequest() = default;
};
class DeleteReminderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  DeleteReminderShrinkRequest() {}

  explicit DeleteReminderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~DeleteReminderShrinkRequest() = default;
};
class DeleteReminderResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<bool> success{};

  DeleteReminderResponseBody() {}

  explicit DeleteReminderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteReminderResponseBody() = default;
};
class DeleteReminderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteReminderResponseBody> body{};

  DeleteReminderResponse() {}

  explicit DeleteReminderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteReminderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteReminderResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteReminderResponse() = default;
};
class GetAccountForAppHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetAccountForAppHeaders() {}

  explicit GetAccountForAppHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
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
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetAccountForAppHeaders() = default;
};
class GetAccountForAppRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetAccountForAppRequestDeviceInfo() {}

  explicit GetAccountForAppRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetAccountForAppRequestDeviceInfo() = default;
};
class GetAccountForAppRequestPayload : public Darabonba::Model {
public:
  shared_ptr<string> phone{};
  shared_ptr<string> originUuid{};

  GetAccountForAppRequestPayload() {}

  explicit GetAccountForAppRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (originUuid) {
      res["originUuid"] = boost::any(*originUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("originUuid") != m.end() && !m["originUuid"].empty()) {
      originUuid = make_shared<string>(boost::any_cast<string>(m["originUuid"]));
    }
  }


  virtual ~GetAccountForAppRequestPayload() = default;
};
class GetAccountForAppRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetAccountForAppRequestUserInfo() {}

  explicit GetAccountForAppRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetAccountForAppRequestUserInfo() = default;
};
class GetAccountForAppRequest : public Darabonba::Model {
public:
  shared_ptr<GetAccountForAppRequestDeviceInfo> deviceInfo{};
  shared_ptr<GetAccountForAppRequestPayload> payload{};
  shared_ptr<GetAccountForAppRequestUserInfo> userInfo{};

  GetAccountForAppRequest() {}

  explicit GetAccountForAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        GetAccountForAppRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<GetAccountForAppRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        GetAccountForAppRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<GetAccountForAppRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        GetAccountForAppRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<GetAccountForAppRequestUserInfo>(model1);
      }
    }
  }


  virtual ~GetAccountForAppRequest() = default;
};
class GetAccountForAppShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  GetAccountForAppShrinkRequest() {}

  explicit GetAccountForAppShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~GetAccountForAppShrinkRequest() = default;
};
class GetAccountForAppResponseBodyRetValue : public Darabonba::Model {
public:
  shared_ptr<bool> isVip{};
  shared_ptr<string> strVipExpire{};
  shared_ptr<long> vipExpireAt{};

  GetAccountForAppResponseBodyRetValue() {}

  explicit GetAccountForAppResponseBodyRetValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isVip) {
      res["IsVip"] = boost::any(*isVip);
    }
    if (strVipExpire) {
      res["StrVipExpire"] = boost::any(*strVipExpire);
    }
    if (vipExpireAt) {
      res["VipExpireAt"] = boost::any(*vipExpireAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsVip") != m.end() && !m["IsVip"].empty()) {
      isVip = make_shared<bool>(boost::any_cast<bool>(m["IsVip"]));
    }
    if (m.find("StrVipExpire") != m.end() && !m["StrVipExpire"].empty()) {
      strVipExpire = make_shared<string>(boost::any_cast<string>(m["StrVipExpire"]));
    }
    if (m.find("VipExpireAt") != m.end() && !m["VipExpireAt"].empty()) {
      vipExpireAt = make_shared<long>(boost::any_cast<long>(m["VipExpireAt"]));
    }
  }


  virtual ~GetAccountForAppResponseBodyRetValue() = default;
};
class GetAccountForAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> retCode{};
  shared_ptr<string> retMsg{};
  shared_ptr<GetAccountForAppResponseBodyRetValue> retValue{};

  GetAccountForAppResponseBody() {}

  explicit GetAccountForAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (retCode) {
      res["RetCode"] = boost::any(*retCode);
    }
    if (retMsg) {
      res["RetMsg"] = boost::any(*retMsg);
    }
    if (retValue) {
      res["RetValue"] = retValue ? boost::any(retValue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RetCode") != m.end() && !m["RetCode"].empty()) {
      retCode = make_shared<long>(boost::any_cast<long>(m["RetCode"]));
    }
    if (m.find("RetMsg") != m.end() && !m["RetMsg"].empty()) {
      retMsg = make_shared<string>(boost::any_cast<string>(m["RetMsg"]));
    }
    if (m.find("RetValue") != m.end() && !m["RetValue"].empty()) {
      if (typeid(map<string, boost::any>) == m["RetValue"].type()) {
        GetAccountForAppResponseBodyRetValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RetValue"]));
        retValue = make_shared<GetAccountForAppResponseBodyRetValue>(model1);
      }
    }
  }


  virtual ~GetAccountForAppResponseBody() = default;
};
class GetAccountForAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccountForAppResponseBody> body{};

  GetAccountForAppResponse() {}

  explicit GetAccountForAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccountForAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountForAppResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountForAppResponse() = default;
};
class GetPhoneNumberHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetPhoneNumberHeaders() {}

  explicit GetPhoneNumberHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
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
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetPhoneNumberHeaders() = default;
};
class GetPhoneNumberRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetPhoneNumberRequestDeviceInfo() {}

  explicit GetPhoneNumberRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetPhoneNumberRequestDeviceInfo() = default;
};
class GetPhoneNumberRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetPhoneNumberRequestUserInfo() {}

  explicit GetPhoneNumberRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetPhoneNumberRequestUserInfo() = default;
};
class GetPhoneNumberRequest : public Darabonba::Model {
public:
  shared_ptr<GetPhoneNumberRequestDeviceInfo> deviceInfo{};
  shared_ptr<GetPhoneNumberRequestUserInfo> userInfo{};

  GetPhoneNumberRequest() {}

  explicit GetPhoneNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        GetPhoneNumberRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<GetPhoneNumberRequestDeviceInfo>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        GetPhoneNumberRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<GetPhoneNumberRequestUserInfo>(model1);
      }
    }
  }


  virtual ~GetPhoneNumberRequest() = default;
};
class GetPhoneNumberShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> userInfoShrink{};

  GetPhoneNumberShrinkRequest() {}

  explicit GetPhoneNumberShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~GetPhoneNumberShrinkRequest() = default;
};
class GetPhoneNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};

  GetPhoneNumberResponseBody() {}

  explicit GetPhoneNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["phoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("phoneNumber") != m.end() && !m["phoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["phoneNumber"]));
    }
  }


  virtual ~GetPhoneNumberResponseBody() = default;
};
class GetPhoneNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPhoneNumberResponseBody> body{};

  GetPhoneNumberResponse() {}

  explicit GetPhoneNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPhoneNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPhoneNumberResponseBody>(model1);
      }
    }
  }


  virtual ~GetPhoneNumberResponse() = default;
};
class GetReminderHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetReminderHeaders() {}

  explicit GetReminderHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
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
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetReminderHeaders() = default;
};
class GetReminderRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetReminderRequestDeviceInfo() {}

  explicit GetReminderRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetReminderRequestDeviceInfo() = default;
};
class GetReminderRequestPayload : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<bool> isDebug{};

  GetReminderRequestPayload() {}

  explicit GetReminderRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isDebug) {
      res["IsDebug"] = boost::any(*isDebug);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsDebug") != m.end() && !m["IsDebug"].empty()) {
      isDebug = make_shared<bool>(boost::any_cast<bool>(m["IsDebug"]));
    }
  }


  virtual ~GetReminderRequestPayload() = default;
};
class GetReminderRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetReminderRequestUserInfo() {}

  explicit GetReminderRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~GetReminderRequestUserInfo() = default;
};
class GetReminderRequest : public Darabonba::Model {
public:
  shared_ptr<GetReminderRequestDeviceInfo> deviceInfo{};
  shared_ptr<GetReminderRequestPayload> payload{};
  shared_ptr<GetReminderRequestUserInfo> userInfo{};

  GetReminderRequest() {}

  explicit GetReminderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        GetReminderRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<GetReminderRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        GetReminderRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<GetReminderRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        GetReminderRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<GetReminderRequestUserInfo>(model1);
      }
    }
  }


  virtual ~GetReminderRequest() = default;
};
class GetReminderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  GetReminderShrinkRequest() {}

  explicit GetReminderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~GetReminderShrinkRequest() = default;
};
class GetReminderResponseBodyModelRemindResponsesRecurrenceRule : public Darabonba::Model {
public:
  shared_ptr<long> day{};
  shared_ptr<vector<long>> daysOfMonth{};
  shared_ptr<vector<long>> daysOfWeek{};
  shared_ptr<string> endDateTime{};
  shared_ptr<string> freq{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};
  shared_ptr<long> month{};
  shared_ptr<long> second{};
  shared_ptr<string> startDateTime{};
  shared_ptr<long> year{};

  GetReminderResponseBodyModelRemindResponsesRecurrenceRule() {}

  explicit GetReminderResponseBodyModelRemindResponsesRecurrenceRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (daysOfMonth) {
      res["DaysOfMonth"] = boost::any(*daysOfMonth);
    }
    if (daysOfWeek) {
      res["DaysOfWeek"] = boost::any(*daysOfWeek);
    }
    if (endDateTime) {
      res["EndDateTime"] = boost::any(*endDateTime);
    }
    if (freq) {
      res["Freq"] = boost::any(*freq);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    if (second) {
      res["Second"] = boost::any(*second);
    }
    if (startDateTime) {
      res["StartDateTime"] = boost::any(*startDateTime);
    }
    if (year) {
      res["Year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<long>(boost::any_cast<long>(m["Day"]));
    }
    if (m.find("DaysOfMonth") != m.end() && !m["DaysOfMonth"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfMonth"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfMonth"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfMonth = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DaysOfWeek") != m.end() && !m["DaysOfWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EndDateTime") != m.end() && !m["EndDateTime"].empty()) {
      endDateTime = make_shared<string>(boost::any_cast<string>(m["EndDateTime"]));
    }
    if (m.find("Freq") != m.end() && !m["Freq"].empty()) {
      freq = make_shared<string>(boost::any_cast<string>(m["Freq"]));
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["Month"]));
    }
    if (m.find("Second") != m.end() && !m["Second"].empty()) {
      second = make_shared<long>(boost::any_cast<long>(m["Second"]));
    }
    if (m.find("StartDateTime") != m.end() && !m["StartDateTime"].empty()) {
      startDateTime = make_shared<string>(boost::any_cast<string>(m["StartDateTime"]));
    }
    if (m.find("Year") != m.end() && !m["Year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["Year"]));
    }
  }


  virtual ~GetReminderResponseBodyModelRemindResponsesRecurrenceRule() = default;
};
class GetReminderResponseBodyModelRemindResponses : public Darabonba::Model {
public:
  shared_ptr<string> actionTopic{};
  shared_ptr<string> dayDesc{};
  shared_ptr<GetReminderResponseBodyModelRemindResponsesRecurrenceRule> recurrenceRule{};
  shared_ptr<long> remindId{};
  shared_ptr<string> remindTime{};
  shared_ptr<long> repeatCount{};
  shared_ptr<string> week{};

  GetReminderResponseBodyModelRemindResponses() {}

  explicit GetReminderResponseBodyModelRemindResponses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionTopic) {
      res["ActionTopic"] = boost::any(*actionTopic);
    }
    if (dayDesc) {
      res["DayDesc"] = boost::any(*dayDesc);
    }
    if (recurrenceRule) {
      res["RecurrenceRule"] = recurrenceRule ? boost::any(recurrenceRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (remindId) {
      res["RemindId"] = boost::any(*remindId);
    }
    if (remindTime) {
      res["RemindTime"] = boost::any(*remindTime);
    }
    if (repeatCount) {
      res["RepeatCount"] = boost::any(*repeatCount);
    }
    if (week) {
      res["Week"] = boost::any(*week);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionTopic") != m.end() && !m["ActionTopic"].empty()) {
      actionTopic = make_shared<string>(boost::any_cast<string>(m["ActionTopic"]));
    }
    if (m.find("DayDesc") != m.end() && !m["DayDesc"].empty()) {
      dayDesc = make_shared<string>(boost::any_cast<string>(m["DayDesc"]));
    }
    if (m.find("RecurrenceRule") != m.end() && !m["RecurrenceRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["RecurrenceRule"].type()) {
        GetReminderResponseBodyModelRemindResponsesRecurrenceRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RecurrenceRule"]));
        recurrenceRule = make_shared<GetReminderResponseBodyModelRemindResponsesRecurrenceRule>(model1);
      }
    }
    if (m.find("RemindId") != m.end() && !m["RemindId"].empty()) {
      remindId = make_shared<long>(boost::any_cast<long>(m["RemindId"]));
    }
    if (m.find("RemindTime") != m.end() && !m["RemindTime"].empty()) {
      remindTime = make_shared<string>(boost::any_cast<string>(m["RemindTime"]));
    }
    if (m.find("RepeatCount") != m.end() && !m["RepeatCount"].empty()) {
      repeatCount = make_shared<long>(boost::any_cast<long>(m["RepeatCount"]));
    }
    if (m.find("Week") != m.end() && !m["Week"].empty()) {
      week = make_shared<string>(boost::any_cast<string>(m["Week"]));
    }
  }


  virtual ~GetReminderResponseBodyModelRemindResponses() = default;
};
class GetReminderResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<GetReminderResponseBodyModelRemindResponses>> remindResponses{};

  GetReminderResponseBodyModel() {}

  explicit GetReminderResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (remindResponses) {
      vector<boost::any> temp1;
      for(auto item1:*remindResponses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RemindResponses"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RemindResponses") != m.end() && !m["RemindResponses"].empty()) {
      if (typeid(vector<boost::any>) == m["RemindResponses"].type()) {
        vector<GetReminderResponseBodyModelRemindResponses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RemindResponses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetReminderResponseBodyModelRemindResponses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        remindResponses = make_shared<vector<GetReminderResponseBodyModelRemindResponses>>(expect1);
      }
    }
  }


  virtual ~GetReminderResponseBodyModel() = default;
};
class GetReminderResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<GetReminderResponseBodyModel> model{};
  shared_ptr<bool> success{};

  GetReminderResponseBody() {}

  explicit GetReminderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        GetReminderResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<GetReminderResponseBodyModel>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetReminderResponseBody() = default;
};
class GetReminderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetReminderResponseBody> body{};

  GetReminderResponse() {}

  explicit GetReminderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetReminderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetReminderResponseBody>(model1);
      }
    }
  }


  virtual ~GetReminderResponse() = default;
};
class ListRemindersHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListRemindersHeaders() {}

  explicit ListRemindersHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
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
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListRemindersHeaders() = default;
};
class ListRemindersRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListRemindersRequestDeviceInfo() {}

  explicit ListRemindersRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListRemindersRequestDeviceInfo() = default;
};
class ListRemindersRequestPayload : public Darabonba::Model {
public:
  shared_ptr<bool> isDebug{};

  ListRemindersRequestPayload() {}

  explicit ListRemindersRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDebug) {
      res["IsDebug"] = boost::any(*isDebug);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsDebug") != m.end() && !m["IsDebug"].empty()) {
      isDebug = make_shared<bool>(boost::any_cast<bool>(m["IsDebug"]));
    }
  }


  virtual ~ListRemindersRequestPayload() = default;
};
class ListRemindersRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListRemindersRequestUserInfo() {}

  explicit ListRemindersRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~ListRemindersRequestUserInfo() = default;
};
class ListRemindersRequest : public Darabonba::Model {
public:
  shared_ptr<ListRemindersRequestDeviceInfo> deviceInfo{};
  shared_ptr<ListRemindersRequestPayload> payload{};
  shared_ptr<ListRemindersRequestUserInfo> userInfo{};

  ListRemindersRequest() {}

  explicit ListRemindersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        ListRemindersRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<ListRemindersRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        ListRemindersRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<ListRemindersRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListRemindersRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListRemindersRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ListRemindersRequest() = default;
};
class ListRemindersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  ListRemindersShrinkRequest() {}

  explicit ListRemindersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ListRemindersShrinkRequest() = default;
};
class ListRemindersResponseBodyModelRemindResponsesRecurrenceRule : public Darabonba::Model {
public:
  shared_ptr<long> day{};
  shared_ptr<vector<long>> daysOfMonth{};
  shared_ptr<vector<long>> daysOfWeek{};
  shared_ptr<string> endDateTime{};
  shared_ptr<string> freq{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};
  shared_ptr<long> month{};
  shared_ptr<long> second{};
  shared_ptr<string> startDateTime{};
  shared_ptr<long> year{};

  ListRemindersResponseBodyModelRemindResponsesRecurrenceRule() {}

  explicit ListRemindersResponseBodyModelRemindResponsesRecurrenceRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (daysOfMonth) {
      res["DaysOfMonth"] = boost::any(*daysOfMonth);
    }
    if (daysOfWeek) {
      res["DaysOfWeek"] = boost::any(*daysOfWeek);
    }
    if (endDateTime) {
      res["EndDateTime"] = boost::any(*endDateTime);
    }
    if (freq) {
      res["Freq"] = boost::any(*freq);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    if (second) {
      res["Second"] = boost::any(*second);
    }
    if (startDateTime) {
      res["StartDateTime"] = boost::any(*startDateTime);
    }
    if (year) {
      res["Year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<long>(boost::any_cast<long>(m["Day"]));
    }
    if (m.find("DaysOfMonth") != m.end() && !m["DaysOfMonth"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfMonth"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfMonth"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfMonth = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DaysOfWeek") != m.end() && !m["DaysOfWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EndDateTime") != m.end() && !m["EndDateTime"].empty()) {
      endDateTime = make_shared<string>(boost::any_cast<string>(m["EndDateTime"]));
    }
    if (m.find("Freq") != m.end() && !m["Freq"].empty()) {
      freq = make_shared<string>(boost::any_cast<string>(m["Freq"]));
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["Month"]));
    }
    if (m.find("Second") != m.end() && !m["Second"].empty()) {
      second = make_shared<long>(boost::any_cast<long>(m["Second"]));
    }
    if (m.find("StartDateTime") != m.end() && !m["StartDateTime"].empty()) {
      startDateTime = make_shared<string>(boost::any_cast<string>(m["StartDateTime"]));
    }
    if (m.find("Year") != m.end() && !m["Year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["Year"]));
    }
  }


  virtual ~ListRemindersResponseBodyModelRemindResponsesRecurrenceRule() = default;
};
class ListRemindersResponseBodyModelRemindResponses : public Darabonba::Model {
public:
  shared_ptr<string> actionTopic{};
  shared_ptr<string> dayDesc{};
  shared_ptr<ListRemindersResponseBodyModelRemindResponsesRecurrenceRule> recurrenceRule{};
  shared_ptr<long> remindId{};
  shared_ptr<string> remindTime{};
  shared_ptr<long> repeatCount{};
  shared_ptr<string> week{};

  ListRemindersResponseBodyModelRemindResponses() {}

  explicit ListRemindersResponseBodyModelRemindResponses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionTopic) {
      res["ActionTopic"] = boost::any(*actionTopic);
    }
    if (dayDesc) {
      res["DayDesc"] = boost::any(*dayDesc);
    }
    if (recurrenceRule) {
      res["RecurrenceRule"] = recurrenceRule ? boost::any(recurrenceRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (remindId) {
      res["RemindId"] = boost::any(*remindId);
    }
    if (remindTime) {
      res["RemindTime"] = boost::any(*remindTime);
    }
    if (repeatCount) {
      res["RepeatCount"] = boost::any(*repeatCount);
    }
    if (week) {
      res["Week"] = boost::any(*week);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionTopic") != m.end() && !m["ActionTopic"].empty()) {
      actionTopic = make_shared<string>(boost::any_cast<string>(m["ActionTopic"]));
    }
    if (m.find("DayDesc") != m.end() && !m["DayDesc"].empty()) {
      dayDesc = make_shared<string>(boost::any_cast<string>(m["DayDesc"]));
    }
    if (m.find("RecurrenceRule") != m.end() && !m["RecurrenceRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["RecurrenceRule"].type()) {
        ListRemindersResponseBodyModelRemindResponsesRecurrenceRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RecurrenceRule"]));
        recurrenceRule = make_shared<ListRemindersResponseBodyModelRemindResponsesRecurrenceRule>(model1);
      }
    }
    if (m.find("RemindId") != m.end() && !m["RemindId"].empty()) {
      remindId = make_shared<long>(boost::any_cast<long>(m["RemindId"]));
    }
    if (m.find("RemindTime") != m.end() && !m["RemindTime"].empty()) {
      remindTime = make_shared<string>(boost::any_cast<string>(m["RemindTime"]));
    }
    if (m.find("RepeatCount") != m.end() && !m["RepeatCount"].empty()) {
      repeatCount = make_shared<long>(boost::any_cast<long>(m["RepeatCount"]));
    }
    if (m.find("Week") != m.end() && !m["Week"].empty()) {
      week = make_shared<string>(boost::any_cast<string>(m["Week"]));
    }
  }


  virtual ~ListRemindersResponseBodyModelRemindResponses() = default;
};
class ListRemindersResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<ListRemindersResponseBodyModelRemindResponses>> remindResponses{};

  ListRemindersResponseBodyModel() {}

  explicit ListRemindersResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (remindResponses) {
      vector<boost::any> temp1;
      for(auto item1:*remindResponses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RemindResponses"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RemindResponses") != m.end() && !m["RemindResponses"].empty()) {
      if (typeid(vector<boost::any>) == m["RemindResponses"].type()) {
        vector<ListRemindersResponseBodyModelRemindResponses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RemindResponses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRemindersResponseBodyModelRemindResponses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        remindResponses = make_shared<vector<ListRemindersResponseBodyModelRemindResponses>>(expect1);
      }
    }
  }


  virtual ~ListRemindersResponseBodyModel() = default;
};
class ListRemindersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<ListRemindersResponseBodyModel> model{};
  shared_ptr<bool> success{};

  ListRemindersResponseBody() {}

  explicit ListRemindersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        ListRemindersResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<ListRemindersResponseBodyModel>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListRemindersResponseBody() = default;
};
class ListRemindersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRemindersResponseBody> body{};

  ListRemindersResponse() {}

  explicit ListRemindersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRemindersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRemindersResponseBody>(model1);
      }
    }
  }


  virtual ~ListRemindersResponse() = default;
};
class PullCashierHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  PullCashierHeaders() {}

  explicit PullCashierHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
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
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~PullCashierHeaders() = default;
};
class PullCashierRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  PullCashierRequestDeviceInfo() {}

  explicit PullCashierRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~PullCashierRequestDeviceInfo() = default;
};
class PullCashierRequestPayload : public Darabonba::Model {
public:
  shared_ptr<string> originUuid{};

  PullCashierRequestPayload() {}

  explicit PullCashierRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originUuid) {
      res["originUuid"] = boost::any(*originUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("originUuid") != m.end() && !m["originUuid"].empty()) {
      originUuid = make_shared<string>(boost::any_cast<string>(m["originUuid"]));
    }
  }


  virtual ~PullCashierRequestPayload() = default;
};
class PullCashierRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  PullCashierRequestUserInfo() {}

  explicit PullCashierRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~PullCashierRequestUserInfo() = default;
};
class PullCashierRequest : public Darabonba::Model {
public:
  shared_ptr<PullCashierRequestDeviceInfo> deviceInfo{};
  shared_ptr<PullCashierRequestPayload> payload{};
  shared_ptr<PullCashierRequestUserInfo> userInfo{};

  PullCashierRequest() {}

  explicit PullCashierRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        PullCashierRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<PullCashierRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        PullCashierRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<PullCashierRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        PullCashierRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<PullCashierRequestUserInfo>(model1);
      }
    }
  }


  virtual ~PullCashierRequest() = default;
};
class PullCashierShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  PullCashierShrinkRequest() {}

  explicit PullCashierShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~PullCashierShrinkRequest() = default;
};
class PullCashierResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> retCode{};
  shared_ptr<string> retMsg{};
  shared_ptr<bool> retValue{};

  PullCashierResponseBody() {}

  explicit PullCashierResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (retCode) {
      res["RetCode"] = boost::any(*retCode);
    }
    if (retMsg) {
      res["RetMsg"] = boost::any(*retMsg);
    }
    if (retValue) {
      res["RetValue"] = boost::any(*retValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RetCode") != m.end() && !m["RetCode"].empty()) {
      retCode = make_shared<long>(boost::any_cast<long>(m["RetCode"]));
    }
    if (m.find("RetMsg") != m.end() && !m["RetMsg"].empty()) {
      retMsg = make_shared<string>(boost::any_cast<string>(m["RetMsg"]));
    }
    if (m.find("RetValue") != m.end() && !m["RetValue"].empty()) {
      retValue = make_shared<bool>(boost::any_cast<bool>(m["RetValue"]));
    }
  }


  virtual ~PullCashierResponseBody() = default;
};
class PullCashierResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PullCashierResponseBody> body{};

  PullCashierResponse() {}

  explicit PullCashierResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PullCashierResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PullCashierResponseBody>(model1);
      }
    }
  }


  virtual ~PullCashierResponse() = default;
};
class PushNotificationsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  PushNotificationsHeaders() {}

  explicit PushNotificationsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
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
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~PushNotificationsHeaders() = default;
};
class PushNotificationsRequestNotificationUnicastRequestSendTarget : public Darabonba::Model {
public:
  shared_ptr<string> targetIdentity{};
  shared_ptr<string> targetType{};

  PushNotificationsRequestNotificationUnicastRequestSendTarget() {}

  explicit PushNotificationsRequestNotificationUnicastRequestSendTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetIdentity) {
      res["TargetIdentity"] = boost::any(*targetIdentity);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetIdentity") != m.end() && !m["TargetIdentity"].empty()) {
      targetIdentity = make_shared<string>(boost::any_cast<string>(m["TargetIdentity"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~PushNotificationsRequestNotificationUnicastRequestSendTarget() = default;
};
class PushNotificationsRequestNotificationUnicastRequest : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<bool> isDebug{};
  shared_ptr<string> messageTemplateId{};
  shared_ptr<string> organizationId{};
  shared_ptr<map<string, string>> placeHolder{};
  shared_ptr<PushNotificationsRequestNotificationUnicastRequestSendTarget> sendTarget{};

  PushNotificationsRequestNotificationUnicastRequest() {}

  explicit PushNotificationsRequestNotificationUnicastRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (isDebug) {
      res["IsDebug"] = boost::any(*isDebug);
    }
    if (messageTemplateId) {
      res["MessageTemplateId"] = boost::any(*messageTemplateId);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (placeHolder) {
      res["PlaceHolder"] = boost::any(*placeHolder);
    }
    if (sendTarget) {
      res["SendTarget"] = sendTarget ? boost::any(sendTarget->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("IsDebug") != m.end() && !m["IsDebug"].empty()) {
      isDebug = make_shared<bool>(boost::any_cast<bool>(m["IsDebug"]));
    }
    if (m.find("MessageTemplateId") != m.end() && !m["MessageTemplateId"].empty()) {
      messageTemplateId = make_shared<string>(boost::any_cast<string>(m["MessageTemplateId"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("PlaceHolder") != m.end() && !m["PlaceHolder"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["PlaceHolder"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      placeHolder = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("SendTarget") != m.end() && !m["SendTarget"].empty()) {
      if (typeid(map<string, boost::any>) == m["SendTarget"].type()) {
        PushNotificationsRequestNotificationUnicastRequestSendTarget model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SendTarget"]));
        sendTarget = make_shared<PushNotificationsRequestNotificationUnicastRequestSendTarget>(model1);
      }
    }
  }


  virtual ~PushNotificationsRequestNotificationUnicastRequest() = default;
};
class PushNotificationsRequestTenantInfo : public Darabonba::Model {
public:

  PushNotificationsRequestTenantInfo() {}

  explicit PushNotificationsRequestTenantInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
  }


  virtual ~PushNotificationsRequestTenantInfo() = default;
};
class PushNotificationsRequest : public Darabonba::Model {
public:
  shared_ptr<PushNotificationsRequestNotificationUnicastRequest> notificationUnicastRequest{};
  shared_ptr<PushNotificationsRequestTenantInfo> tenantInfo{};

  PushNotificationsRequest() {}

  explicit PushNotificationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notificationUnicastRequest) {
      res["NotificationUnicastRequest"] = notificationUnicastRequest ? boost::any(notificationUnicastRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tenantInfo) {
      res["TenantInfo"] = tenantInfo ? boost::any(tenantInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NotificationUnicastRequest") != m.end() && !m["NotificationUnicastRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["NotificationUnicastRequest"].type()) {
        PushNotificationsRequestNotificationUnicastRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NotificationUnicastRequest"]));
        notificationUnicastRequest = make_shared<PushNotificationsRequestNotificationUnicastRequest>(model1);
      }
    }
    if (m.find("TenantInfo") != m.end() && !m["TenantInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantInfo"].type()) {
        PushNotificationsRequestTenantInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantInfo"]));
        tenantInfo = make_shared<PushNotificationsRequestTenantInfo>(model1);
      }
    }
  }


  virtual ~PushNotificationsRequest() = default;
};
class PushNotificationsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> notificationUnicastRequestShrink{};
  shared_ptr<string> tenantInfoShrink{};

  PushNotificationsShrinkRequest() {}

  explicit PushNotificationsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notificationUnicastRequestShrink) {
      res["NotificationUnicastRequest"] = boost::any(*notificationUnicastRequestShrink);
    }
    if (tenantInfoShrink) {
      res["TenantInfo"] = boost::any(*tenantInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NotificationUnicastRequest") != m.end() && !m["NotificationUnicastRequest"].empty()) {
      notificationUnicastRequestShrink = make_shared<string>(boost::any_cast<string>(m["NotificationUnicastRequest"]));
    }
    if (m.find("TenantInfo") != m.end() && !m["TenantInfo"].empty()) {
      tenantInfoShrink = make_shared<string>(boost::any_cast<string>(m["TenantInfo"]));
    }
  }


  virtual ~PushNotificationsShrinkRequest() = default;
};
class PushNotificationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  PushNotificationsResponse() {}

  explicit PushNotificationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

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
  }


  virtual ~PushNotificationsResponse() = default;
};
class SendNotificationsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  SendNotificationsHeaders() {}

  explicit SendNotificationsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
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
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~SendNotificationsHeaders() = default;
};
class SendNotificationsRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  SendNotificationsRequestDeviceInfo() {}

  explicit SendNotificationsRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~SendNotificationsRequestDeviceInfo() = default;
};
class SendNotificationsRequestNotificationUnicastRequestSendTarget : public Darabonba::Model {
public:

  SendNotificationsRequestNotificationUnicastRequestSendTarget() {}

  explicit SendNotificationsRequestNotificationUnicastRequestSendTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
  }


  virtual ~SendNotificationsRequestNotificationUnicastRequestSendTarget() = default;
};
class SendNotificationsRequestNotificationUnicastRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isDebug{};
  shared_ptr<string> messageTemplateId{};
  shared_ptr<map<string, string>> placeHolder{};
  shared_ptr<SendNotificationsRequestNotificationUnicastRequestSendTarget> sendTarget{};

  SendNotificationsRequestNotificationUnicastRequest() {}

  explicit SendNotificationsRequestNotificationUnicastRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDebug) {
      res["IsDebug"] = boost::any(*isDebug);
    }
    if (messageTemplateId) {
      res["MessageTemplateId"] = boost::any(*messageTemplateId);
    }
    if (placeHolder) {
      res["PlaceHolder"] = boost::any(*placeHolder);
    }
    if (sendTarget) {
      res["SendTarget"] = sendTarget ? boost::any(sendTarget->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsDebug") != m.end() && !m["IsDebug"].empty()) {
      isDebug = make_shared<bool>(boost::any_cast<bool>(m["IsDebug"]));
    }
    if (m.find("MessageTemplateId") != m.end() && !m["MessageTemplateId"].empty()) {
      messageTemplateId = make_shared<string>(boost::any_cast<string>(m["MessageTemplateId"]));
    }
    if (m.find("PlaceHolder") != m.end() && !m["PlaceHolder"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["PlaceHolder"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      placeHolder = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("SendTarget") != m.end() && !m["SendTarget"].empty()) {
      if (typeid(map<string, boost::any>) == m["SendTarget"].type()) {
        SendNotificationsRequestNotificationUnicastRequestSendTarget model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SendTarget"]));
        sendTarget = make_shared<SendNotificationsRequestNotificationUnicastRequestSendTarget>(model1);
      }
    }
  }


  virtual ~SendNotificationsRequestNotificationUnicastRequest() = default;
};
class SendNotificationsRequestTenantInfo : public Darabonba::Model {
public:

  SendNotificationsRequestTenantInfo() {}

  explicit SendNotificationsRequestTenantInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
  }


  virtual ~SendNotificationsRequestTenantInfo() = default;
};
class SendNotificationsRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  SendNotificationsRequestUserInfo() {}

  explicit SendNotificationsRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~SendNotificationsRequestUserInfo() = default;
};
class SendNotificationsRequest : public Darabonba::Model {
public:
  shared_ptr<SendNotificationsRequestDeviceInfo> deviceInfo{};
  shared_ptr<SendNotificationsRequestNotificationUnicastRequest> notificationUnicastRequest{};
  shared_ptr<SendNotificationsRequestTenantInfo> tenantInfo{};
  shared_ptr<SendNotificationsRequestUserInfo> userInfo{};

  SendNotificationsRequest() {}

  explicit SendNotificationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (notificationUnicastRequest) {
      res["NotificationUnicastRequest"] = notificationUnicastRequest ? boost::any(notificationUnicastRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tenantInfo) {
      res["TenantInfo"] = tenantInfo ? boost::any(tenantInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        SendNotificationsRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<SendNotificationsRequestDeviceInfo>(model1);
      }
    }
    if (m.find("NotificationUnicastRequest") != m.end() && !m["NotificationUnicastRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["NotificationUnicastRequest"].type()) {
        SendNotificationsRequestNotificationUnicastRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NotificationUnicastRequest"]));
        notificationUnicastRequest = make_shared<SendNotificationsRequestNotificationUnicastRequest>(model1);
      }
    }
    if (m.find("TenantInfo") != m.end() && !m["TenantInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantInfo"].type()) {
        SendNotificationsRequestTenantInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantInfo"]));
        tenantInfo = make_shared<SendNotificationsRequestTenantInfo>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        SendNotificationsRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<SendNotificationsRequestUserInfo>(model1);
      }
    }
  }


  virtual ~SendNotificationsRequest() = default;
};
class SendNotificationsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> notificationUnicastRequestShrink{};
  shared_ptr<string> tenantInfoShrink{};
  shared_ptr<string> userInfoShrink{};

  SendNotificationsShrinkRequest() {}

  explicit SendNotificationsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (notificationUnicastRequestShrink) {
      res["NotificationUnicastRequest"] = boost::any(*notificationUnicastRequestShrink);
    }
    if (tenantInfoShrink) {
      res["TenantInfo"] = boost::any(*tenantInfoShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("NotificationUnicastRequest") != m.end() && !m["NotificationUnicastRequest"].empty()) {
      notificationUnicastRequestShrink = make_shared<string>(boost::any_cast<string>(m["NotificationUnicastRequest"]));
    }
    if (m.find("TenantInfo") != m.end() && !m["TenantInfo"].empty()) {
      tenantInfoShrink = make_shared<string>(boost::any_cast<string>(m["TenantInfo"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~SendNotificationsShrinkRequest() = default;
};
class SendNotificationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  SendNotificationsResponse() {}

  explicit SendNotificationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

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
  }


  virtual ~SendNotificationsResponse() = default;
};
class UpdateReminderHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  UpdateReminderHeaders() {}

  explicit UpdateReminderHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
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
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~UpdateReminderHeaders() = default;
};
class UpdateReminderRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  UpdateReminderRequestDeviceInfo() {}

  explicit UpdateReminderRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~UpdateReminderRequestDeviceInfo() = default;
};
class UpdateReminderRequestPayloadRecurrenceRule : public Darabonba::Model {
public:
  shared_ptr<long> day{};
  shared_ptr<vector<long>> daysOfMonth{};
  shared_ptr<vector<long>> daysOfWeek{};
  shared_ptr<long> endDateTime{};
  shared_ptr<string> freq{};
  shared_ptr<long> hour{};
  shared_ptr<long> minute{};
  shared_ptr<long> month{};
  shared_ptr<long> second{};
  shared_ptr<long> startDateTime{};
  shared_ptr<long> year{};

  UpdateReminderRequestPayloadRecurrenceRule() {}

  explicit UpdateReminderRequestPayloadRecurrenceRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (daysOfMonth) {
      res["DaysOfMonth"] = boost::any(*daysOfMonth);
    }
    if (daysOfWeek) {
      res["DaysOfWeek"] = boost::any(*daysOfWeek);
    }
    if (endDateTime) {
      res["EndDateTime"] = boost::any(*endDateTime);
    }
    if (freq) {
      res["Freq"] = boost::any(*freq);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (minute) {
      res["Minute"] = boost::any(*minute);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    if (second) {
      res["Second"] = boost::any(*second);
    }
    if (startDateTime) {
      res["StartDateTime"] = boost::any(*startDateTime);
    }
    if (year) {
      res["Year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<long>(boost::any_cast<long>(m["Day"]));
    }
    if (m.find("DaysOfMonth") != m.end() && !m["DaysOfMonth"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfMonth"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfMonth"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfMonth = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DaysOfWeek") != m.end() && !m["DaysOfWeek"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DaysOfWeek"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DaysOfWeek"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      daysOfWeek = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EndDateTime") != m.end() && !m["EndDateTime"].empty()) {
      endDateTime = make_shared<long>(boost::any_cast<long>(m["EndDateTime"]));
    }
    if (m.find("Freq") != m.end() && !m["Freq"].empty()) {
      freq = make_shared<string>(boost::any_cast<string>(m["Freq"]));
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<long>(boost::any_cast<long>(m["Hour"]));
    }
    if (m.find("Minute") != m.end() && !m["Minute"].empty()) {
      minute = make_shared<long>(boost::any_cast<long>(m["Minute"]));
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["Month"]));
    }
    if (m.find("Second") != m.end() && !m["Second"].empty()) {
      second = make_shared<long>(boost::any_cast<long>(m["Second"]));
    }
    if (m.find("StartDateTime") != m.end() && !m["StartDateTime"].empty()) {
      startDateTime = make_shared<long>(boost::any_cast<long>(m["StartDateTime"]));
    }
    if (m.find("Year") != m.end() && !m["Year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["Year"]));
    }
  }


  virtual ~UpdateReminderRequestPayloadRecurrenceRule() = default;
};
class UpdateReminderRequestPayload : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> id{};
  shared_ptr<bool> isDebug{};
  shared_ptr<UpdateReminderRequestPayloadRecurrenceRule> recurrenceRule{};

  UpdateReminderRequestPayload() {}

  explicit UpdateReminderRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (isDebug) {
      res["IsDebug"] = boost::any(*isDebug);
    }
    if (recurrenceRule) {
      res["RecurrenceRule"] = recurrenceRule ? boost::any(recurrenceRule->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsDebug") != m.end() && !m["IsDebug"].empty()) {
      isDebug = make_shared<bool>(boost::any_cast<bool>(m["IsDebug"]));
    }
    if (m.find("RecurrenceRule") != m.end() && !m["RecurrenceRule"].empty()) {
      if (typeid(map<string, boost::any>) == m["RecurrenceRule"].type()) {
        UpdateReminderRequestPayloadRecurrenceRule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RecurrenceRule"]));
        recurrenceRule = make_shared<UpdateReminderRequestPayloadRecurrenceRule>(model1);
      }
    }
  }


  virtual ~UpdateReminderRequestPayload() = default;
};
class UpdateReminderRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  UpdateReminderRequestUserInfo() {}

  explicit UpdateReminderRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~UpdateReminderRequestUserInfo() = default;
};
class UpdateReminderRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateReminderRequestDeviceInfo> deviceInfo{};
  shared_ptr<UpdateReminderRequestPayload> payload{};
  shared_ptr<UpdateReminderRequestUserInfo> userInfo{};

  UpdateReminderRequest() {}

  explicit UpdateReminderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        UpdateReminderRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<UpdateReminderRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        UpdateReminderRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<UpdateReminderRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        UpdateReminderRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<UpdateReminderRequestUserInfo>(model1);
      }
    }
  }


  virtual ~UpdateReminderRequest() = default;
};
class UpdateReminderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  UpdateReminderShrinkRequest() {}

  explicit UpdateReminderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~UpdateReminderShrinkRequest() = default;
};
class UpdateReminderResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> model{};
  shared_ptr<bool> success{};

  UpdateReminderResponseBody() {}

  explicit UpdateReminderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<long>(boost::any_cast<long>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<long>(boost::any_cast<long>(m["Model"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateReminderResponseBody() = default;
};
class UpdateReminderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateReminderResponseBody> body{};

  UpdateReminderResponse() {}

  explicit UpdateReminderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateReminderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateReminderResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateReminderResponse() = default;
};
class VideoAppReportHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  VideoAppReportHeaders() {}

  explicit VideoAppReportHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
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
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~VideoAppReportHeaders() = default;
};
class VideoAppReportRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  VideoAppReportRequestDeviceInfo() {}

  explicit VideoAppReportRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~VideoAppReportRequestDeviceInfo() = default;
};
class VideoAppReportRequestPayload : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<bool> isLogin{};
  shared_ptr<bool> isVip{};
  shared_ptr<string> loginNick{};
  shared_ptr<string> originUuid{};
  shared_ptr<string> phone{};
  shared_ptr<string> pkgName{};
  shared_ptr<long> startTime{};

  VideoAppReportRequestPayload() {}

  explicit VideoAppReportRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (isLogin) {
      res["isLogin"] = boost::any(*isLogin);
    }
    if (isVip) {
      res["isVip"] = boost::any(*isVip);
    }
    if (loginNick) {
      res["loginNick"] = boost::any(*loginNick);
    }
    if (originUuid) {
      res["originUuid"] = boost::any(*originUuid);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (pkgName) {
      res["pkgName"] = boost::any(*pkgName);
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
    if (m.find("isLogin") != m.end() && !m["isLogin"].empty()) {
      isLogin = make_shared<bool>(boost::any_cast<bool>(m["isLogin"]));
    }
    if (m.find("isVip") != m.end() && !m["isVip"].empty()) {
      isVip = make_shared<bool>(boost::any_cast<bool>(m["isVip"]));
    }
    if (m.find("loginNick") != m.end() && !m["loginNick"].empty()) {
      loginNick = make_shared<string>(boost::any_cast<string>(m["loginNick"]));
    }
    if (m.find("originUuid") != m.end() && !m["originUuid"].empty()) {
      originUuid = make_shared<string>(boost::any_cast<string>(m["originUuid"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("pkgName") != m.end() && !m["pkgName"].empty()) {
      pkgName = make_shared<string>(boost::any_cast<string>(m["pkgName"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
  }


  virtual ~VideoAppReportRequestPayload() = default;
};
class VideoAppReportRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  VideoAppReportRequestUserInfo() {}

  explicit VideoAppReportRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
  }


  virtual ~VideoAppReportRequestUserInfo() = default;
};
class VideoAppReportRequest : public Darabonba::Model {
public:
  shared_ptr<VideoAppReportRequestDeviceInfo> deviceInfo{};
  shared_ptr<VideoAppReportRequestPayload> payload{};
  shared_ptr<VideoAppReportRequestUserInfo> userInfo{};

  VideoAppReportRequest() {}

  explicit VideoAppReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      res["DeviceInfo"] = deviceInfo ? boost::any(deviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfo"].type()) {
        VideoAppReportRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<VideoAppReportRequestDeviceInfo>(model1);
      }
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        VideoAppReportRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<VideoAppReportRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        VideoAppReportRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<VideoAppReportRequestUserInfo>(model1);
      }
    }
  }


  virtual ~VideoAppReportRequest() = default;
};
class VideoAppReportShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  VideoAppReportShrinkRequest() {}

  explicit VideoAppReportShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoShrink) {
      res["DeviceInfo"] = boost::any(*deviceInfoShrink);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfoShrink = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~VideoAppReportShrinkRequest() = default;
};
class VideoAppReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> retCode{};
  shared_ptr<string> retMsg{};
  shared_ptr<bool> retValue{};

  VideoAppReportResponseBody() {}

  explicit VideoAppReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (retCode) {
      res["RetCode"] = boost::any(*retCode);
    }
    if (retMsg) {
      res["RetMsg"] = boost::any(*retMsg);
    }
    if (retValue) {
      res["RetValue"] = boost::any(*retValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RetCode") != m.end() && !m["RetCode"].empty()) {
      retCode = make_shared<long>(boost::any_cast<long>(m["RetCode"]));
    }
    if (m.find("RetMsg") != m.end() && !m["RetMsg"].empty()) {
      retMsg = make_shared<string>(boost::any_cast<string>(m["RetMsg"]));
    }
    if (m.find("RetValue") != m.end() && !m["RetValue"].empty()) {
      retValue = make_shared<bool>(boost::any_cast<bool>(m["RetValue"]));
    }
  }


  virtual ~VideoAppReportResponseBody() = default;
};
class VideoAppReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VideoAppReportResponseBody> body{};

  VideoAppReportResponse() {}

  explicit VideoAppReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VideoAppReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VideoAppReportResponseBody>(model1);
      }
    }
  }


  virtual ~VideoAppReportResponse() = default;
};
class WakeUpAppHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  WakeUpAppHeaders() {}

  explicit WakeUpAppHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAligenieAccessToken) {
      res["x-acs-aligenie-access-token"] = boost::any(*xAcsAligenieAccessToken);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
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
    if (m.find("x-acs-aligenie-access-token") != m.end() && !m["x-acs-aligenie-access-token"].empty()) {
      xAcsAligenieAccessToken = make_shared<string>(boost::any_cast<string>(m["x-acs-aligenie-access-token"]));
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~WakeUpAppHeaders() = default;
};
class WakeUpAppRequestTargetInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> targetIdentity{};
  shared_ptr<string> targetType{};

  WakeUpAppRequestTargetInfo() {}

  explicit WakeUpAppRequestTargetInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeKey) {
      res["EncodeKey"] = boost::any(*encodeKey);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (targetIdentity) {
      res["TargetIdentity"] = boost::any(*targetIdentity);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodeKey") != m.end() && !m["EncodeKey"].empty()) {
      encodeKey = make_shared<string>(boost::any_cast<string>(m["EncodeKey"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("TargetIdentity") != m.end() && !m["TargetIdentity"].empty()) {
      targetIdentity = make_shared<string>(boost::any_cast<string>(m["TargetIdentity"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~WakeUpAppRequestTargetInfo() = default;
};
class WakeUpAppRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isDebug{};
  shared_ptr<string> path{};
  shared_ptr<WakeUpAppRequestTargetInfo> targetInfo{};

  WakeUpAppRequest() {}

  explicit WakeUpAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDebug) {
      res["IsDebug"] = boost::any(*isDebug);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (targetInfo) {
      res["TargetInfo"] = targetInfo ? boost::any(targetInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsDebug") != m.end() && !m["IsDebug"].empty()) {
      isDebug = make_shared<bool>(boost::any_cast<bool>(m["IsDebug"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("TargetInfo") != m.end() && !m["TargetInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TargetInfo"].type()) {
        WakeUpAppRequestTargetInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TargetInfo"]));
        targetInfo = make_shared<WakeUpAppRequestTargetInfo>(model1);
      }
    }
  }


  virtual ~WakeUpAppRequest() = default;
};
class WakeUpAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  WakeUpAppResponse() {}

  explicit WakeUpAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

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
  }


  virtual ~WakeUpAppResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  AppUseTimeReportResponse appUseTimeReportWithOptions(shared_ptr<AppUseTimeReportRequest> tmpReq, shared_ptr<AppUseTimeReportHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AppUseTimeReportResponse appUseTimeReport(shared_ptr<AppUseTimeReportRequest> request);
  CreateReminderResponse createReminderWithOptions(shared_ptr<CreateReminderRequest> tmpReq, shared_ptr<CreateReminderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateReminderResponse createReminder(shared_ptr<CreateReminderRequest> request);
  DeleteReminderResponse deleteReminderWithOptions(shared_ptr<DeleteReminderRequest> tmpReq, shared_ptr<DeleteReminderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteReminderResponse deleteReminder(shared_ptr<DeleteReminderRequest> request);
  GetAccountForAppResponse getAccountForAppWithOptions(shared_ptr<GetAccountForAppRequest> tmpReq, shared_ptr<GetAccountForAppHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountForAppResponse getAccountForApp(shared_ptr<GetAccountForAppRequest> request);
  GetPhoneNumberResponse getPhoneNumberWithOptions(shared_ptr<GetPhoneNumberRequest> tmpReq, shared_ptr<GetPhoneNumberHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPhoneNumberResponse getPhoneNumber(shared_ptr<GetPhoneNumberRequest> request);
  GetReminderResponse getReminderWithOptions(shared_ptr<GetReminderRequest> tmpReq, shared_ptr<GetReminderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetReminderResponse getReminder(shared_ptr<GetReminderRequest> request);
  ListRemindersResponse listRemindersWithOptions(shared_ptr<ListRemindersRequest> tmpReq, shared_ptr<ListRemindersHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRemindersResponse listReminders(shared_ptr<ListRemindersRequest> request);
  PullCashierResponse pullCashierWithOptions(shared_ptr<PullCashierRequest> tmpReq, shared_ptr<PullCashierHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PullCashierResponse pullCashier(shared_ptr<PullCashierRequest> request);
  PushNotificationsResponse pushNotificationsWithOptions(shared_ptr<PushNotificationsRequest> tmpReq, shared_ptr<PushNotificationsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushNotificationsResponse pushNotifications(shared_ptr<PushNotificationsRequest> request);
  SendNotificationsResponse sendNotificationsWithOptions(shared_ptr<SendNotificationsRequest> tmpReq, shared_ptr<SendNotificationsHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendNotificationsResponse sendNotifications(shared_ptr<SendNotificationsRequest> request);
  UpdateReminderResponse updateReminderWithOptions(shared_ptr<UpdateReminderRequest> tmpReq, shared_ptr<UpdateReminderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateReminderResponse updateReminder(shared_ptr<UpdateReminderRequest> request);
  VideoAppReportResponse videoAppReportWithOptions(shared_ptr<VideoAppReportRequest> tmpReq, shared_ptr<VideoAppReportHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VideoAppReportResponse videoAppReport(shared_ptr<VideoAppReportRequest> request);
  WakeUpAppResponse wakeUpAppWithOptions(shared_ptr<WakeUpAppRequest> request, shared_ptr<WakeUpAppHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WakeUpAppResponse wakeUpApp(shared_ptr<WakeUpAppRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AliGenieiap10

#endif
