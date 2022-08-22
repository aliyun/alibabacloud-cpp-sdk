// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALIGENIEIP10_H_
#define ALIBABACLOUD_ALIGENIEIP10_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_AliGenieip10 {
class DeviceControlHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  DeviceControlHeaders() {}

  explicit DeviceControlHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeviceControlHeaders() = default;
};
class DeviceControlRequestPayload : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> cmd{};
  shared_ptr<string> current{};
  shared_ptr<string> device{};
  shared_ptr<string> deviceNumber{};
  shared_ptr<string> extendInfo{};
  shared_ptr<string> location{};
  shared_ptr<map<string, string>> properties{};

  DeviceControlRequestPayload() {}

  explicit DeviceControlRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (cmd) {
      res["Cmd"] = boost::any(*cmd);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (deviceNumber) {
      res["DeviceNumber"] = boost::any(*deviceNumber);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Cmd") != m.end() && !m["Cmd"].empty()) {
      cmd = make_shared<string>(boost::any_cast<string>(m["Cmd"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<string>(boost::any_cast<string>(m["Current"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("DeviceNumber") != m.end() && !m["DeviceNumber"].empty()) {
      deviceNumber = make_shared<string>(boost::any_cast<string>(m["DeviceNumber"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      extendInfo = make_shared<string>(boost::any_cast<string>(m["ExtendInfo"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Properties"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~DeviceControlRequestPayload() = default;
};
class DeviceControlRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  DeviceControlRequestUserInfo() {}

  explicit DeviceControlRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeviceControlRequestUserInfo() = default;
};
class DeviceControlRequest : public Darabonba::Model {
public:
  shared_ptr<DeviceControlRequestPayload> payload{};
  shared_ptr<DeviceControlRequestUserInfo> userInfo{};

  DeviceControlRequest() {}

  explicit DeviceControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        DeviceControlRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<DeviceControlRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        DeviceControlRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<DeviceControlRequestUserInfo>(model1);
      }
    }
  }


  virtual ~DeviceControlRequest() = default;
};
class DeviceControlShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  DeviceControlShrinkRequest() {}

  explicit DeviceControlShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~DeviceControlShrinkRequest() = default;
};
class DeviceControlResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> status{};

  DeviceControlResponseBodyResult() {}

  explicit DeviceControlResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DeviceControlResponseBodyResult() = default;
};
class DeviceControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DeviceControlResponseBodyResult> result{};

  DeviceControlResponseBody() {}

  explicit DeviceControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DeviceControlResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeviceControlResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeviceControlResponseBody() = default;
};
class DeviceControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeviceControlResponseBody> body{};

  DeviceControlResponse() {}

  explicit DeviceControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeviceControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeviceControlResponseBody>(model1);
      }
    }
  }


  virtual ~DeviceControlResponse() = default;
};
class GetHotelHomeBackImageAndModesHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetHotelHomeBackImageAndModesHeaders() {}

  explicit GetHotelHomeBackImageAndModesHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetHotelHomeBackImageAndModesHeaders() = default;
};
class GetHotelHomeBackImageAndModesRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetHotelHomeBackImageAndModesRequestUserInfo() {}

  explicit GetHotelHomeBackImageAndModesRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetHotelHomeBackImageAndModesRequestUserInfo() = default;
};
class GetHotelHomeBackImageAndModesRequest : public Darabonba::Model {
public:
  shared_ptr<GetHotelHomeBackImageAndModesRequestUserInfo> userInfo{};

  GetHotelHomeBackImageAndModesRequest() {}

  explicit GetHotelHomeBackImageAndModesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        GetHotelHomeBackImageAndModesRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<GetHotelHomeBackImageAndModesRequestUserInfo>(model1);
      }
    }
  }


  virtual ~GetHotelHomeBackImageAndModesRequest() = default;
};
class GetHotelHomeBackImageAndModesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> userInfoShrink{};

  GetHotelHomeBackImageAndModesShrinkRequest() {}

  explicit GetHotelHomeBackImageAndModesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~GetHotelHomeBackImageAndModesShrinkRequest() = default;
};
class GetHotelHomeBackImageAndModesResponseBodyResultModeList : public Darabonba::Model {
public:
  shared_ptr<string> cnName{};
  shared_ptr<string> code{};
  shared_ptr<string> icon{};

  GetHotelHomeBackImageAndModesResponseBodyResultModeList() {}

  explicit GetHotelHomeBackImageAndModesResponseBodyResultModeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cnName) {
      res["CnName"] = boost::any(*cnName);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CnName") != m.end() && !m["CnName"].empty()) {
      cnName = make_shared<string>(boost::any_cast<string>(m["CnName"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
  }


  virtual ~GetHotelHomeBackImageAndModesResponseBodyResultModeList() = default;
};
class GetHotelHomeBackImageAndModesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> backgroundImage{};
  shared_ptr<string> hotelName{};
  shared_ptr<vector<GetHotelHomeBackImageAndModesResponseBodyResultModeList>> modeList{};

  GetHotelHomeBackImageAndModesResponseBodyResult() {}

  explicit GetHotelHomeBackImageAndModesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backgroundImage) {
      res["BackgroundImage"] = boost::any(*backgroundImage);
    }
    if (hotelName) {
      res["HotelName"] = boost::any(*hotelName);
    }
    if (modeList) {
      vector<boost::any> temp1;
      for(auto item1:*modeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackgroundImage") != m.end() && !m["BackgroundImage"].empty()) {
      backgroundImage = make_shared<string>(boost::any_cast<string>(m["BackgroundImage"]));
    }
    if (m.find("HotelName") != m.end() && !m["HotelName"].empty()) {
      hotelName = make_shared<string>(boost::any_cast<string>(m["HotelName"]));
    }
    if (m.find("ModeList") != m.end() && !m["ModeList"].empty()) {
      if (typeid(vector<boost::any>) == m["ModeList"].type()) {
        vector<GetHotelHomeBackImageAndModesResponseBodyResultModeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHotelHomeBackImageAndModesResponseBodyResultModeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modeList = make_shared<vector<GetHotelHomeBackImageAndModesResponseBodyResultModeList>>(expect1);
      }
    }
  }


  virtual ~GetHotelHomeBackImageAndModesResponseBodyResult() = default;
};
class GetHotelHomeBackImageAndModesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetHotelHomeBackImageAndModesResponseBodyResult> result{};

  GetHotelHomeBackImageAndModesResponseBody() {}

  explicit GetHotelHomeBackImageAndModesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetHotelHomeBackImageAndModesResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetHotelHomeBackImageAndModesResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetHotelHomeBackImageAndModesResponseBody() = default;
};
class GetHotelHomeBackImageAndModesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHotelHomeBackImageAndModesResponseBody> body{};

  GetHotelHomeBackImageAndModesResponse() {}

  explicit GetHotelHomeBackImageAndModesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHotelHomeBackImageAndModesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotelHomeBackImageAndModesResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotelHomeBackImageAndModesResponse() = default;
};
class GetHotelOrderDetailHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetHotelOrderDetailHeaders() {}

  explicit GetHotelOrderDetailHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetHotelOrderDetailHeaders() = default;
};
class GetHotelOrderDetailRequestPayload : public Darabonba::Model {
public:
  shared_ptr<string> orderNo{};

  GetHotelOrderDetailRequestPayload() {}

  explicit GetHotelOrderDetailRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderNo) {
      res["OrderNo"] = boost::any(*orderNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderNo") != m.end() && !m["OrderNo"].empty()) {
      orderNo = make_shared<string>(boost::any_cast<string>(m["OrderNo"]));
    }
  }


  virtual ~GetHotelOrderDetailRequestPayload() = default;
};
class GetHotelOrderDetailRequest : public Darabonba::Model {
public:
  shared_ptr<GetHotelOrderDetailRequestPayload> payload{};

  GetHotelOrderDetailRequest() {}

  explicit GetHotelOrderDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        GetHotelOrderDetailRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<GetHotelOrderDetailRequestPayload>(model1);
      }
    }
  }


  virtual ~GetHotelOrderDetailRequest() = default;
};
class GetHotelOrderDetailShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> payloadShrink{};

  GetHotelOrderDetailShrinkRequest() {}

  explicit GetHotelOrderDetailShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
  }


  virtual ~GetHotelOrderDetailShrinkRequest() = default;
};
class GetHotelOrderDetailResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> applyAmt{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> itemUrl{};
  shared_ptr<string> name{};
  shared_ptr<long> quantity{};

  GetHotelOrderDetailResponseBodyResult() {}

  explicit GetHotelOrderDetailResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyAmt) {
      res["ApplyAmt"] = boost::any(*applyAmt);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (itemUrl) {
      res["ItemUrl"] = boost::any(*itemUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyAmt") != m.end() && !m["ApplyAmt"].empty()) {
      applyAmt = make_shared<long>(boost::any_cast<long>(m["ApplyAmt"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("ItemUrl") != m.end() && !m["ItemUrl"].empty()) {
      itemUrl = make_shared<string>(boost::any_cast<string>(m["ItemUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
  }


  virtual ~GetHotelOrderDetailResponseBodyResult() = default;
};
class GetHotelOrderDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetHotelOrderDetailResponseBodyResult>> result{};

  GetHotelOrderDetailResponseBody() {}

  explicit GetHotelOrderDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<GetHotelOrderDetailResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHotelOrderDetailResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<GetHotelOrderDetailResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~GetHotelOrderDetailResponseBody() = default;
};
class GetHotelOrderDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHotelOrderDetailResponseBody> body{};

  GetHotelOrderDetailResponse() {}

  explicit GetHotelOrderDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHotelOrderDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotelOrderDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotelOrderDetailResponse() = default;
};
class GetHotelSampleUtterancesHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetHotelSampleUtterancesHeaders() {}

  explicit GetHotelSampleUtterancesHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetHotelSampleUtterancesHeaders() = default;
};
class GetHotelSampleUtterancesRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetHotelSampleUtterancesRequestUserInfo() {}

  explicit GetHotelSampleUtterancesRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetHotelSampleUtterancesRequestUserInfo() = default;
};
class GetHotelSampleUtterancesRequest : public Darabonba::Model {
public:
  shared_ptr<GetHotelSampleUtterancesRequestUserInfo> userInfo{};

  GetHotelSampleUtterancesRequest() {}

  explicit GetHotelSampleUtterancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        GetHotelSampleUtterancesRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<GetHotelSampleUtterancesRequestUserInfo>(model1);
      }
    }
  }


  virtual ~GetHotelSampleUtterancesRequest() = default;
};
class GetHotelSampleUtterancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> userInfoShrink{};

  GetHotelSampleUtterancesShrinkRequest() {}

  explicit GetHotelSampleUtterancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~GetHotelSampleUtterancesShrinkRequest() = default;
};
class GetHotelSampleUtterancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> result{};

  GetHotelSampleUtterancesResponseBody() {}

  explicit GetHotelSampleUtterancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Result"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      result = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetHotelSampleUtterancesResponseBody() = default;
};
class GetHotelSampleUtterancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHotelSampleUtterancesResponseBody> body{};

  GetHotelSampleUtterancesResponse() {}

  explicit GetHotelSampleUtterancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHotelSampleUtterancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotelSampleUtterancesResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotelSampleUtterancesResponse() = default;
};
class GetHotelScreenSaverHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  GetHotelScreenSaverHeaders() {}

  explicit GetHotelScreenSaverHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetHotelScreenSaverHeaders() = default;
};
class GetHotelScreenSaverRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  GetHotelScreenSaverRequestUserInfo() {}

  explicit GetHotelScreenSaverRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetHotelScreenSaverRequestUserInfo() = default;
};
class GetHotelScreenSaverRequest : public Darabonba::Model {
public:
  shared_ptr<GetHotelScreenSaverRequestUserInfo> userInfo{};

  GetHotelScreenSaverRequest() {}

  explicit GetHotelScreenSaverRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        GetHotelScreenSaverRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<GetHotelScreenSaverRequestUserInfo>(model1);
      }
    }
  }


  virtual ~GetHotelScreenSaverRequest() = default;
};
class GetHotelScreenSaverShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> userInfoShrink{};

  GetHotelScreenSaverShrinkRequest() {}

  explicit GetHotelScreenSaverShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~GetHotelScreenSaverShrinkRequest() = default;
};
class GetHotelScreenSaverResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> picUrl{};
  shared_ptr<string> styleCode{};

  GetHotelScreenSaverResponseBodyResult() {}

  explicit GetHotelScreenSaverResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (styleCode) {
      res["StyleCode"] = boost::any(*styleCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("StyleCode") != m.end() && !m["StyleCode"].empty()) {
      styleCode = make_shared<string>(boost::any_cast<string>(m["StyleCode"]));
    }
  }


  virtual ~GetHotelScreenSaverResponseBodyResult() = default;
};
class GetHotelScreenSaverResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetHotelScreenSaverResponseBodyResult> result{};

  GetHotelScreenSaverResponseBody() {}

  explicit GetHotelScreenSaverResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetHotelScreenSaverResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetHotelScreenSaverResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetHotelScreenSaverResponseBody() = default;
};
class GetHotelScreenSaverResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHotelScreenSaverResponseBody> body{};

  GetHotelScreenSaverResponse() {}

  explicit GetHotelScreenSaverResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHotelScreenSaverResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotelScreenSaverResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotelScreenSaverResponse() = default;
};
class ListHotelControlDeviceHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListHotelControlDeviceHeaders() {}

  explicit ListHotelControlDeviceHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListHotelControlDeviceHeaders() = default;
};
class ListHotelControlDeviceRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListHotelControlDeviceRequestUserInfo() {}

  explicit ListHotelControlDeviceRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListHotelControlDeviceRequestUserInfo() = default;
};
class ListHotelControlDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<ListHotelControlDeviceRequestUserInfo> userInfo{};

  ListHotelControlDeviceRequest() {}

  explicit ListHotelControlDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListHotelControlDeviceRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListHotelControlDeviceRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ListHotelControlDeviceRequest() = default;
};
class ListHotelControlDeviceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> userInfoShrink{};

  ListHotelControlDeviceShrinkRequest() {}

  explicit ListHotelControlDeviceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ListHotelControlDeviceShrinkRequest() = default;
};
class ListHotelControlDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, string>>> result{};

  ListHotelControlDeviceResponseBody() {}

  explicit ListHotelControlDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Result"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      result = make_shared<vector<map<string, string>>>(toVec1);
    }
  }


  virtual ~ListHotelControlDeviceResponseBody() = default;
};
class ListHotelControlDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHotelControlDeviceResponseBody> body{};

  ListHotelControlDeviceResponse() {}

  explicit ListHotelControlDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListHotelControlDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHotelControlDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~ListHotelControlDeviceResponse() = default;
};
class ListHotelOrderHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListHotelOrderHeaders() {}

  explicit ListHotelOrderHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListHotelOrderHeaders() = default;
};
class ListHotelOrderRequestPayloadPage : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListHotelOrderRequestPayloadPage() {}

  explicit ListHotelOrderRequestPayloadPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListHotelOrderRequestPayloadPage() = default;
};
class ListHotelOrderRequestPayload : public Darabonba::Model {
public:
  shared_ptr<ListHotelOrderRequestPayloadPage> page{};

  ListHotelOrderRequestPayload() {}

  explicit ListHotelOrderRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        ListHotelOrderRequestPayloadPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<ListHotelOrderRequestPayloadPage>(model1);
      }
    }
  }


  virtual ~ListHotelOrderRequestPayload() = default;
};
class ListHotelOrderRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListHotelOrderRequestUserInfo() {}

  explicit ListHotelOrderRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListHotelOrderRequestUserInfo() = default;
};
class ListHotelOrderRequest : public Darabonba::Model {
public:
  shared_ptr<ListHotelOrderRequestPayload> payload{};
  shared_ptr<ListHotelOrderRequestUserInfo> userInfo{};

  ListHotelOrderRequest() {}

  explicit ListHotelOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        ListHotelOrderRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<ListHotelOrderRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListHotelOrderRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListHotelOrderRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ListHotelOrderRequest() = default;
};
class ListHotelOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  ListHotelOrderShrinkRequest() {}

  explicit ListHotelOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ListHotelOrderShrinkRequest() = default;
};
class ListHotelOrderResponseBodyPage : public Darabonba::Model {
public:
  shared_ptr<bool> hasNext{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<long> totalPage{};

  ListHotelOrderResponseBodyPage() {}

  explicit ListHotelOrderResponseBodyPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasNext) {
      res["HasNext"] = boost::any(*hasNext);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasNext") != m.end() && !m["HasNext"].empty()) {
      hasNext = make_shared<bool>(boost::any_cast<bool>(m["HasNext"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~ListHotelOrderResponseBodyPage() = default;
};
class ListHotelOrderResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> applyAmt{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> orderNo{};
  shared_ptr<long> quantity{};
  shared_ptr<string> roomNo{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> typeIconUrl{};
  shared_ptr<string> typeName_{};

  ListHotelOrderResponseBodyResult() {}

  explicit ListHotelOrderResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyAmt) {
      res["ApplyAmt"] = boost::any(*applyAmt);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (orderNo) {
      res["OrderNo"] = boost::any(*orderNo);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (roomNo) {
      res["RoomNo"] = boost::any(*roomNo);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (typeIconUrl) {
      res["TypeIconUrl"] = boost::any(*typeIconUrl);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyAmt") != m.end() && !m["ApplyAmt"].empty()) {
      applyAmt = make_shared<long>(boost::any_cast<long>(m["ApplyAmt"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("OrderNo") != m.end() && !m["OrderNo"].empty()) {
      orderNo = make_shared<string>(boost::any_cast<string>(m["OrderNo"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("RoomNo") != m.end() && !m["RoomNo"].empty()) {
      roomNo = make_shared<string>(boost::any_cast<string>(m["RoomNo"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("TypeIconUrl") != m.end() && !m["TypeIconUrl"].empty()) {
      typeIconUrl = make_shared<string>(boost::any_cast<string>(m["TypeIconUrl"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
  }


  virtual ~ListHotelOrderResponseBodyResult() = default;
};
class ListHotelOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<ListHotelOrderResponseBodyPage> page{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListHotelOrderResponseBodyResult>> result{};

  ListHotelOrderResponseBody() {}

  explicit ListHotelOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        ListHotelOrderResponseBodyPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<ListHotelOrderResponseBodyPage>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListHotelOrderResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotelOrderResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListHotelOrderResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListHotelOrderResponseBody() = default;
};
class ListHotelOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHotelOrderResponseBody> body{};

  ListHotelOrderResponse() {}

  explicit ListHotelOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListHotelOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHotelOrderResponseBody>(model1);
      }
    }
  }


  virtual ~ListHotelOrderResponse() = default;
};
class ListHotelSceneItemHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListHotelSceneItemHeaders() {}

  explicit ListHotelSceneItemHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListHotelSceneItemHeaders() = default;
};
class ListHotelSceneItemRequestPayload : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  ListHotelSceneItemRequestPayload() {}

  explicit ListHotelSceneItemRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListHotelSceneItemRequestPayload() = default;
};
class ListHotelSceneItemRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  ListHotelSceneItemRequestUserInfo() {}

  explicit ListHotelSceneItemRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListHotelSceneItemRequestUserInfo() = default;
};
class ListHotelSceneItemRequest : public Darabonba::Model {
public:
  shared_ptr<ListHotelSceneItemRequestPayload> payload{};
  shared_ptr<ListHotelSceneItemRequestUserInfo> userInfo{};

  ListHotelSceneItemRequest() {}

  explicit ListHotelSceneItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        ListHotelSceneItemRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<ListHotelSceneItemRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListHotelSceneItemRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListHotelSceneItemRequestUserInfo>(model1);
      }
    }
  }


  virtual ~ListHotelSceneItemRequest() = default;
};
class ListHotelSceneItemShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  ListHotelSceneItemShrinkRequest() {}

  explicit ListHotelSceneItemShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~ListHotelSceneItemShrinkRequest() = default;
};
class ListHotelSceneItemResponseBodyPage : public Darabonba::Model {
public:
  shared_ptr<bool> hasNext{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<long> totalPage{};

  ListHotelSceneItemResponseBodyPage() {}

  explicit ListHotelSceneItemResponseBodyPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasNext) {
      res["HasNext"] = boost::any(*hasNext);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasNext") != m.end() && !m["HasNext"].empty()) {
      hasNext = make_shared<bool>(boost::any_cast<bool>(m["HasNext"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~ListHotelSceneItemResponseBodyPage() = default;
};
class ListHotelSceneItemResponseBodyResultSecondCategoryListItemList : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> icon{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> price{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListHotelSceneItemResponseBodyResultSecondCategoryListItemList() {}

  explicit ListHotelSceneItemResponseBodyResultSecondCategoryListItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["Price"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListHotelSceneItemResponseBodyResultSecondCategoryListItemList() = default;
};
class ListHotelSceneItemResponseBodyResultSecondCategoryList : public Darabonba::Model {
public:
  shared_ptr<vector<ListHotelSceneItemResponseBodyResultSecondCategoryListItemList>> itemList{};
  shared_ptr<string> secondCategoryName{};

  ListHotelSceneItemResponseBodyResultSecondCategoryList() {}

  explicit ListHotelSceneItemResponseBodyResultSecondCategoryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemList) {
      vector<boost::any> temp1;
      for(auto item1:*itemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ItemList"] = boost::any(temp1);
    }
    if (secondCategoryName) {
      res["SecondCategoryName"] = boost::any(*secondCategoryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemList") != m.end() && !m["ItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["ItemList"].type()) {
        vector<ListHotelSceneItemResponseBodyResultSecondCategoryListItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotelSceneItemResponseBodyResultSecondCategoryListItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itemList = make_shared<vector<ListHotelSceneItemResponseBodyResultSecondCategoryListItemList>>(expect1);
      }
    }
    if (m.find("SecondCategoryName") != m.end() && !m["SecondCategoryName"].empty()) {
      secondCategoryName = make_shared<string>(boost::any_cast<string>(m["SecondCategoryName"]));
    }
  }


  virtual ~ListHotelSceneItemResponseBodyResultSecondCategoryList() = default;
};
class ListHotelSceneItemResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListHotelSceneItemResponseBodyResultSecondCategoryList>> secondCategoryList{};

  ListHotelSceneItemResponseBodyResult() {}

  explicit ListHotelSceneItemResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secondCategoryList) {
      vector<boost::any> temp1;
      for(auto item1:*secondCategoryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecondCategoryList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecondCategoryList") != m.end() && !m["SecondCategoryList"].empty()) {
      if (typeid(vector<boost::any>) == m["SecondCategoryList"].type()) {
        vector<ListHotelSceneItemResponseBodyResultSecondCategoryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecondCategoryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotelSceneItemResponseBodyResultSecondCategoryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        secondCategoryList = make_shared<vector<ListHotelSceneItemResponseBodyResultSecondCategoryList>>(expect1);
      }
    }
  }


  virtual ~ListHotelSceneItemResponseBodyResult() = default;
};
class ListHotelSceneItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<ListHotelSceneItemResponseBodyPage> page{};
  shared_ptr<string> requestId{};
  shared_ptr<ListHotelSceneItemResponseBodyResult> result{};

  ListHotelSceneItemResponseBody() {}

  explicit ListHotelSceneItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        ListHotelSceneItemResponseBodyPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<ListHotelSceneItemResponseBodyPage>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListHotelSceneItemResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListHotelSceneItemResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListHotelSceneItemResponseBody() = default;
};
class ListHotelSceneItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHotelSceneItemResponseBody> body{};

  ListHotelSceneItemResponse() {}

  explicit ListHotelSceneItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListHotelSceneItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHotelSceneItemResponseBody>(model1);
      }
    }
  }


  virtual ~ListHotelSceneItemResponse() = default;
};
class ListHotelServiceCategoryHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  ListHotelServiceCategoryHeaders() {}

  explicit ListHotelServiceCategoryHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListHotelServiceCategoryHeaders() = default;
};
class ListHotelServiceCategoryRequestPayload : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  ListHotelServiceCategoryRequestPayload() {}

  explicit ListHotelServiceCategoryRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListHotelServiceCategoryRequestPayload() = default;
};
class ListHotelServiceCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<ListHotelServiceCategoryRequestPayload> payload{};

  ListHotelServiceCategoryRequest() {}

  explicit ListHotelServiceCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        ListHotelServiceCategoryRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<ListHotelServiceCategoryRequestPayload>(model1);
      }
    }
  }


  virtual ~ListHotelServiceCategoryRequest() = default;
};
class ListHotelServiceCategoryShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> payloadShrink{};

  ListHotelServiceCategoryShrinkRequest() {}

  explicit ListHotelServiceCategoryShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
  }


  virtual ~ListHotelServiceCategoryShrinkRequest() = default;
};
class ListHotelServiceCategoryResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> desc{};
  shared_ptr<string> icon{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListHotelServiceCategoryResponseBodyResult() {}

  explicit ListHotelServiceCategoryResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListHotelServiceCategoryResponseBodyResult() = default;
};
class ListHotelServiceCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListHotelServiceCategoryResponseBodyResult>> result{};

  ListHotelServiceCategoryResponseBody() {}

  explicit ListHotelServiceCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListHotelServiceCategoryResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHotelServiceCategoryResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListHotelServiceCategoryResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListHotelServiceCategoryResponseBody() = default;
};
class ListHotelServiceCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListHotelServiceCategoryResponseBody> body{};

  ListHotelServiceCategoryResponse() {}

  explicit ListHotelServiceCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListHotelServiceCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHotelServiceCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~ListHotelServiceCategoryResponse() = default;
};
class QueryDeviceStatusHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  QueryDeviceStatusHeaders() {}

  explicit QueryDeviceStatusHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryDeviceStatusHeaders() = default;
};
class QueryDeviceStatusRequestPayloadLocationDevices : public Darabonba::Model {
public:
  shared_ptr<string> deviceNumber{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> location{};

  QueryDeviceStatusRequestPayloadLocationDevices() {}

  explicit QueryDeviceStatusRequestPayloadLocationDevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceNumber) {
      res["DeviceNumber"] = boost::any(*deviceNumber);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceNumber") != m.end() && !m["DeviceNumber"].empty()) {
      deviceNumber = make_shared<string>(boost::any_cast<string>(m["DeviceNumber"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
  }


  virtual ~QueryDeviceStatusRequestPayloadLocationDevices() = default;
};
class QueryDeviceStatusRequestPayload : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDeviceStatusRequestPayloadLocationDevices>> locationDevices{};
  shared_ptr<map<string, string>> properties{};

  QueryDeviceStatusRequestPayload() {}

  explicit QueryDeviceStatusRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (locationDevices) {
      vector<boost::any> temp1;
      for(auto item1:*locationDevices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LocationDevices"] = boost::any(temp1);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocationDevices") != m.end() && !m["LocationDevices"].empty()) {
      if (typeid(vector<boost::any>) == m["LocationDevices"].type()) {
        vector<QueryDeviceStatusRequestPayloadLocationDevices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LocationDevices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDeviceStatusRequestPayloadLocationDevices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        locationDevices = make_shared<vector<QueryDeviceStatusRequestPayloadLocationDevices>>(expect1);
      }
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Properties"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      properties = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~QueryDeviceStatusRequestPayload() = default;
};
class QueryDeviceStatusRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  QueryDeviceStatusRequestUserInfo() {}

  explicit QueryDeviceStatusRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryDeviceStatusRequestUserInfo() = default;
};
class QueryDeviceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<QueryDeviceStatusRequestPayload> payload{};
  shared_ptr<QueryDeviceStatusRequestUserInfo> userInfo{};

  QueryDeviceStatusRequest() {}

  explicit QueryDeviceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        QueryDeviceStatusRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<QueryDeviceStatusRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        QueryDeviceStatusRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<QueryDeviceStatusRequestUserInfo>(model1);
      }
    }
  }


  virtual ~QueryDeviceStatusRequest() = default;
};
class QueryDeviceStatusShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  QueryDeviceStatusShrinkRequest() {}

  explicit QueryDeviceStatusShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~QueryDeviceStatusShrinkRequest() = default;
};
class QueryDeviceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, string>>> result{};

  QueryDeviceStatusResponseBody() {}

  explicit QueryDeviceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Result"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      result = make_shared<vector<map<string, string>>>(toVec1);
    }
  }


  virtual ~QueryDeviceStatusResponseBody() = default;
};
class QueryDeviceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDeviceStatusResponseBody> body{};

  QueryDeviceStatusResponse() {}

  explicit QueryDeviceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDeviceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDeviceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDeviceStatusResponse() = default;
};
class QueryHotelProductHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  QueryHotelProductHeaders() {}

  explicit QueryHotelProductHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryHotelProductHeaders() = default;
};
class QueryHotelProductRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  QueryHotelProductRequestUserInfo() {}

  explicit QueryHotelProductRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryHotelProductRequestUserInfo() = default;
};
class QueryHotelProductRequest : public Darabonba::Model {
public:
  shared_ptr<QueryHotelProductRequestUserInfo> userInfo{};

  QueryHotelProductRequest() {}

  explicit QueryHotelProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        QueryHotelProductRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<QueryHotelProductRequestUserInfo>(model1);
      }
    }
  }


  virtual ~QueryHotelProductRequest() = default;
};
class QueryHotelProductShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> userInfoShrink{};

  QueryHotelProductShrinkRequest() {}

  explicit QueryHotelProductShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~QueryHotelProductShrinkRequest() = default;
};
class QueryHotelProductResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> hotelId{};
  shared_ptr<string> hotelName{};
  shared_ptr<string> productKey{};
  shared_ptr<string> productName{};

  QueryHotelProductResponseBodyResult() {}

  explicit QueryHotelProductResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hotelId) {
      res["HotelId"] = boost::any(*hotelId);
    }
    if (hotelName) {
      res["HotelName"] = boost::any(*hotelName);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HotelId") != m.end() && !m["HotelId"].empty()) {
      hotelId = make_shared<string>(boost::any_cast<string>(m["HotelId"]));
    }
    if (m.find("HotelName") != m.end() && !m["HotelName"].empty()) {
      hotelName = make_shared<string>(boost::any_cast<string>(m["HotelName"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
  }


  virtual ~QueryHotelProductResponseBodyResult() = default;
};
class QueryHotelProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<QueryHotelProductResponseBodyResult> result{};

  QueryHotelProductResponseBody() {}

  explicit QueryHotelProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryHotelProductResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryHotelProductResponseBodyResult>(model1);
      }
    }
  }


  virtual ~QueryHotelProductResponseBody() = default;
};
class QueryHotelProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryHotelProductResponseBody> body{};

  QueryHotelProductResponse() {}

  explicit QueryHotelProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryHotelProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryHotelProductResponseBody>(model1);
      }
    }
  }


  virtual ~QueryHotelProductResponse() = default;
};
class RoomCheckOutHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  RoomCheckOutHeaders() {}

  explicit RoomCheckOutHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RoomCheckOutHeaders() = default;
};
class RoomCheckOutRequestDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  RoomCheckOutRequestDeviceInfo() {}

  explicit RoomCheckOutRequestDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RoomCheckOutRequestDeviceInfo() = default;
};
class RoomCheckOutRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  RoomCheckOutRequestUserInfo() {}

  explicit RoomCheckOutRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RoomCheckOutRequestUserInfo() = default;
};
class RoomCheckOutRequest : public Darabonba::Model {
public:
  shared_ptr<RoomCheckOutRequestDeviceInfo> deviceInfo{};
  shared_ptr<RoomCheckOutRequestUserInfo> userInfo{};

  RoomCheckOutRequest() {}

  explicit RoomCheckOutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RoomCheckOutRequestDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfo"]));
        deviceInfo = make_shared<RoomCheckOutRequestDeviceInfo>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        RoomCheckOutRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<RoomCheckOutRequestUserInfo>(model1);
      }
    }
  }


  virtual ~RoomCheckOutRequest() = default;
};
class RoomCheckOutShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceInfoShrink{};
  shared_ptr<string> userInfoShrink{};

  RoomCheckOutShrinkRequest() {}

  explicit RoomCheckOutShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RoomCheckOutShrinkRequest() = default;
};
class RoomCheckOutResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  RoomCheckOutResponseBody() {}

  explicit RoomCheckOutResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~RoomCheckOutResponseBody() = default;
};
class RoomCheckOutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RoomCheckOutResponseBody> body{};

  RoomCheckOutResponse() {}

  explicit RoomCheckOutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RoomCheckOutResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RoomCheckOutResponseBody>(model1);
      }
    }
  }


  virtual ~RoomCheckOutResponse() = default;
};
class SubmitHotelOrderHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAligenieAccessToken{};
  shared_ptr<string> authorization{};

  SubmitHotelOrderHeaders() {}

  explicit SubmitHotelOrderHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitHotelOrderHeaders() = default;
};
class SubmitHotelOrderRequestPayloadItemList : public Darabonba::Model {
public:
  shared_ptr<long> itemId{};
  shared_ptr<long> quantity{};

  SubmitHotelOrderRequestPayloadItemList() {}

  explicit SubmitHotelOrderRequestPayloadItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
  }


  virtual ~SubmitHotelOrderRequestPayloadItemList() = default;
};
class SubmitHotelOrderRequestPayload : public Darabonba::Model {
public:
  shared_ptr<vector<SubmitHotelOrderRequestPayloadItemList>> itemList{};
  shared_ptr<string> type{};

  SubmitHotelOrderRequestPayload() {}

  explicit SubmitHotelOrderRequestPayload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemList) {
      vector<boost::any> temp1;
      for(auto item1:*itemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ItemList"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemList") != m.end() && !m["ItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["ItemList"].type()) {
        vector<SubmitHotelOrderRequestPayloadItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitHotelOrderRequestPayloadItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itemList = make_shared<vector<SubmitHotelOrderRequestPayloadItemList>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SubmitHotelOrderRequestPayload() = default;
};
class SubmitHotelOrderRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> encodeKey{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> id{};
  shared_ptr<string> idType{};
  shared_ptr<string> organizationId{};

  SubmitHotelOrderRequestUserInfo() {}

  explicit SubmitHotelOrderRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitHotelOrderRequestUserInfo() = default;
};
class SubmitHotelOrderRequest : public Darabonba::Model {
public:
  shared_ptr<SubmitHotelOrderRequestPayload> payload{};
  shared_ptr<SubmitHotelOrderRequestUserInfo> userInfo{};

  SubmitHotelOrderRequest() {}

  explicit SubmitHotelOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payload) {
      res["Payload"] = payload ? boost::any(payload->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      if (typeid(map<string, boost::any>) == m["Payload"].type()) {
        SubmitHotelOrderRequestPayload model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Payload"]));
        payload = make_shared<SubmitHotelOrderRequestPayload>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        SubmitHotelOrderRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<SubmitHotelOrderRequestUserInfo>(model1);
      }
    }
  }


  virtual ~SubmitHotelOrderRequest() = default;
};
class SubmitHotelOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> userInfoShrink{};

  SubmitHotelOrderShrinkRequest() {}

  explicit SubmitHotelOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~SubmitHotelOrderShrinkRequest() = default;
};
class SubmitHotelOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  SubmitHotelOrderResponseBody() {}

  explicit SubmitHotelOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~SubmitHotelOrderResponseBody() = default;
};
class SubmitHotelOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitHotelOrderResponseBody> body{};

  SubmitHotelOrderResponse() {}

  explicit SubmitHotelOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitHotelOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitHotelOrderResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitHotelOrderResponse() = default;
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
  DeviceControlResponse deviceControl(shared_ptr<DeviceControlRequest> request);
  DeviceControlResponse deviceControlWithOptions(shared_ptr<DeviceControlRequest> tmpReq, shared_ptr<DeviceControlHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotelHomeBackImageAndModesResponse getHotelHomeBackImageAndModes(shared_ptr<GetHotelHomeBackImageAndModesRequest> request);
  GetHotelHomeBackImageAndModesResponse getHotelHomeBackImageAndModesWithOptions(shared_ptr<GetHotelHomeBackImageAndModesRequest> tmpReq, shared_ptr<GetHotelHomeBackImageAndModesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotelOrderDetailResponse getHotelOrderDetail(shared_ptr<GetHotelOrderDetailRequest> request);
  GetHotelOrderDetailResponse getHotelOrderDetailWithOptions(shared_ptr<GetHotelOrderDetailRequest> tmpReq, shared_ptr<GetHotelOrderDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotelSampleUtterancesResponse getHotelSampleUtterances(shared_ptr<GetHotelSampleUtterancesRequest> request);
  GetHotelSampleUtterancesResponse getHotelSampleUtterancesWithOptions(shared_ptr<GetHotelSampleUtterancesRequest> tmpReq, shared_ptr<GetHotelSampleUtterancesHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotelScreenSaverResponse getHotelScreenSaver(shared_ptr<GetHotelScreenSaverRequest> request);
  GetHotelScreenSaverResponse getHotelScreenSaverWithOptions(shared_ptr<GetHotelScreenSaverRequest> tmpReq, shared_ptr<GetHotelScreenSaverHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHotelControlDeviceResponse listHotelControlDevice(shared_ptr<ListHotelControlDeviceRequest> request);
  ListHotelControlDeviceResponse listHotelControlDeviceWithOptions(shared_ptr<ListHotelControlDeviceRequest> tmpReq, shared_ptr<ListHotelControlDeviceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHotelOrderResponse listHotelOrder(shared_ptr<ListHotelOrderRequest> request);
  ListHotelOrderResponse listHotelOrderWithOptions(shared_ptr<ListHotelOrderRequest> tmpReq, shared_ptr<ListHotelOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHotelSceneItemResponse listHotelSceneItem(shared_ptr<ListHotelSceneItemRequest> request);
  ListHotelSceneItemResponse listHotelSceneItemWithOptions(shared_ptr<ListHotelSceneItemRequest> tmpReq, shared_ptr<ListHotelSceneItemHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHotelServiceCategoryResponse listHotelServiceCategory(shared_ptr<ListHotelServiceCategoryRequest> request);
  ListHotelServiceCategoryResponse listHotelServiceCategoryWithOptions(shared_ptr<ListHotelServiceCategoryRequest> tmpReq, shared_ptr<ListHotelServiceCategoryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDeviceStatusResponse queryDeviceStatus(shared_ptr<QueryDeviceStatusRequest> request);
  QueryDeviceStatusResponse queryDeviceStatusWithOptions(shared_ptr<QueryDeviceStatusRequest> tmpReq, shared_ptr<QueryDeviceStatusHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryHotelProductResponse queryHotelProduct(shared_ptr<QueryHotelProductRequest> request);
  QueryHotelProductResponse queryHotelProductWithOptions(shared_ptr<QueryHotelProductRequest> tmpReq, shared_ptr<QueryHotelProductHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RoomCheckOutResponse roomCheckOut(shared_ptr<RoomCheckOutRequest> request);
  RoomCheckOutResponse roomCheckOutWithOptions(shared_ptr<RoomCheckOutRequest> tmpReq, shared_ptr<RoomCheckOutHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitHotelOrderResponse submitHotelOrder(shared_ptr<SubmitHotelOrderRequest> request);
  SubmitHotelOrderResponse submitHotelOrderWithOptions(shared_ptr<SubmitHotelOrderRequest> tmpReq, shared_ptr<SubmitHotelOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AliGenieip10

#endif
