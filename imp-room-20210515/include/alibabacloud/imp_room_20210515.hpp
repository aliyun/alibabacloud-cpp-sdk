// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMP-ROOM20210515_H_
#define ALIBABACLOUD_IMP-ROOM20210515_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Imp-room20210515 {
class GetLoginTokenRequestRequestParams : public Darabonba::Model {
public:
  shared_ptr<string> appUid{};
  shared_ptr<string> appKey{};
  shared_ptr<string> deviceId{};

  GetLoginTokenRequestRequestParams() {}

  explicit GetLoginTokenRequestRequestParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appUid) {
      res["AppUid"] = boost::any(*appUid);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppUid") != m.end() && !m["AppUid"].empty()) {
      appUid = make_shared<string>(boost::any_cast<string>(m["AppUid"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
  }


  virtual ~GetLoginTokenRequestRequestParams() = default;
};
class GetLoginTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<GetLoginTokenRequestRequestParams> requestParams{};

  GetLoginTokenRequest() {}

  explicit GetLoginTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParams) {
      res["RequestParams"] = requestParams ? boost::any(requestParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParams"].type()) {
        GetLoginTokenRequestRequestParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParams"]));
        requestParams = make_shared<GetLoginTokenRequestRequestParams>(model1);
      }
    }
  }


  virtual ~GetLoginTokenRequest() = default;
};
class GetLoginTokenShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestParamsShrink{};

  GetLoginTokenShrinkRequest() {}

  explicit GetLoginTokenShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestParamsShrink) {
      res["RequestParams"] = boost::any(*requestParamsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestParams") != m.end() && !m["RequestParams"].empty()) {
      requestParamsShrink = make_shared<string>(boost::any_cast<string>(m["RequestParams"]));
    }
  }


  virtual ~GetLoginTokenShrinkRequest() = default;
};
class GetLoginTokenResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> refreshToken{};
  shared_ptr<long> accessTokenExpiredTime{};

  GetLoginTokenResponseBodyResult() {}

  explicit GetLoginTokenResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (refreshToken) {
      res["RefreshToken"] = boost::any(*refreshToken);
    }
    if (accessTokenExpiredTime) {
      res["AccessTokenExpiredTime"] = boost::any(*accessTokenExpiredTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("RefreshToken") != m.end() && !m["RefreshToken"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["RefreshToken"]));
    }
    if (m.find("AccessTokenExpiredTime") != m.end() && !m["AccessTokenExpiredTime"].empty()) {
      accessTokenExpiredTime = make_shared<long>(boost::any_cast<long>(m["AccessTokenExpiredTime"]));
    }
  }


  virtual ~GetLoginTokenResponseBodyResult() = default;
};
class GetLoginTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<GetLoginTokenResponseBodyResult> result{};

  GetLoginTokenResponseBody() {}

  explicit GetLoginTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetLoginTokenResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetLoginTokenResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetLoginTokenResponseBody() = default;
};
class GetLoginTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLoginTokenResponseBody> body{};

  GetLoginTokenResponse() {}

  explicit GetLoginTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetLoginTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLoginTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetLoginTokenResponse() = default;
};
class CreateRoomRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> bizType{};
  shared_ptr<string> templateId{};
  shared_ptr<string> roomId{};
  shared_ptr<string> title{};
  shared_ptr<string> notice{};
  shared_ptr<string> ownerId{};
  shared_ptr<map<string, string>> extension{};

  CreateRoomRequestRequest() {}

  explicit CreateRoomRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~CreateRoomRequestRequest() = default;
};
class CreateRoomRequest : public Darabonba::Model {
public:
  shared_ptr<CreateRoomRequestRequest> request{};

  CreateRoomRequest() {}

  explicit CreateRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        CreateRoomRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<CreateRoomRequestRequest>(model1);
      }
    }
  }


  virtual ~CreateRoomRequest() = default;
};
class CreateRoomResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> roomId{};

  CreateRoomResponseBodyResult() {}

  explicit CreateRoomResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~CreateRoomResponseBodyResult() = default;
};
class CreateRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateRoomResponseBodyResult> result{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};

  CreateRoomResponseBody() {}

  explicit CreateRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateRoomResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateRoomResponseBodyResult>(model1);
      }
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
  }


  virtual ~CreateRoomResponseBody() = default;
};
class CreateRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRoomResponseBody> body{};

  CreateRoomResponse() {}

  explicit CreateRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRoomResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRoomResponse() = default;
};
class DestroyRoomRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> roomId{};

  DestroyRoomRequestRequest() {}

  explicit DestroyRoomRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~DestroyRoomRequestRequest() = default;
};
class DestroyRoomRequest : public Darabonba::Model {
public:
  shared_ptr<DestroyRoomRequestRequest> request{};

  DestroyRoomRequest() {}

  explicit DestroyRoomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        DestroyRoomRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<DestroyRoomRequestRequest>(model1);
      }
    }
  }


  virtual ~DestroyRoomRequest() = default;
};
class DestroyRoomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};

  DestroyRoomResponseBody() {}

  explicit DestroyRoomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
  }


  virtual ~DestroyRoomResponseBody() = default;
};
class DestroyRoomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DestroyRoomResponseBody> body{};

  DestroyRoomResponse() {}

  explicit DestroyRoomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DestroyRoomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DestroyRoomResponseBody>(model1);
      }
    }
  }


  virtual ~DestroyRoomResponse() = default;
};
class CreateInstanceRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> roomId{};
  shared_ptr<string> pluginId{};
  shared_ptr<map<string, string>> extension{};

  CreateInstanceRequestRequest() {}

  explicit CreateInstanceRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (pluginId) {
      res["PluginId"] = boost::any(*pluginId);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("PluginId") != m.end() && !m["PluginId"].empty()) {
      pluginId = make_shared<string>(boost::any_cast<string>(m["PluginId"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~CreateInstanceRequestRequest() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<CreateInstanceRequestRequest> request{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        CreateInstanceRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<CreateInstanceRequestRequest>(model1);
      }
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<map<string, string>> extension{};

  CreateInstanceResponseBodyResult() {}

  explicit CreateInstanceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~CreateInstanceResponseBodyResult() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateInstanceResponseBodyResult> result{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        CreateInstanceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CreateInstanceResponseBodyResult>(model1);
      }
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
  }


  virtual ~CreateInstanceResponseBody() = default;
};
class CreateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateInstanceResponseBody> body{};

  CreateInstanceResponse() {}

  explicit CreateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class GetRoomDetailRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> roomId{};

  GetRoomDetailRequestRequest() {}

  explicit GetRoomDetailRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
  }


  virtual ~GetRoomDetailRequestRequest() = default;
};
class GetRoomDetailRequest : public Darabonba::Model {
public:
  shared_ptr<GetRoomDetailRequestRequest> request{};

  GetRoomDetailRequest() {}

  explicit GetRoomDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        GetRoomDetailRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<GetRoomDetailRequestRequest>(model1);
      }
    }
  }


  virtual ~GetRoomDetailRequest() = default;
};
class GetRoomDetailResponseBodyResultPluginInstanceInfoList : public Darabonba::Model {
public:
  shared_ptr<string> pluginId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> createTime{};
  shared_ptr<map<string, string>> extension{};

  GetRoomDetailResponseBodyResultPluginInstanceInfoList() {}

  explicit GetRoomDetailResponseBodyResultPluginInstanceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pluginId) {
      res["PluginId"] = boost::any(*pluginId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extension) {
      res["Extension"] = boost::any(*extension);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PluginId") != m.end() && !m["PluginId"].empty()) {
      pluginId = make_shared<string>(boost::any_cast<string>(m["PluginId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Extension") != m.end() && !m["Extension"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Extension"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extension = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~GetRoomDetailResponseBodyResultPluginInstanceInfoList() = default;
};
class GetRoomDetailResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> roomId{};
  shared_ptr<string> title{};
  shared_ptr<string> notice{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> uv{};
  shared_ptr<long> onlineCount{};
  shared_ptr<vector<GetRoomDetailResponseBodyResultPluginInstanceInfoList>> pluginInstanceInfoList{};

  GetRoomDetailResponseBodyResult() {}

  explicit GetRoomDetailResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (notice) {
      res["Notice"] = boost::any(*notice);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (uv) {
      res["Uv"] = boost::any(*uv);
    }
    if (onlineCount) {
      res["OnlineCount"] = boost::any(*onlineCount);
    }
    if (pluginInstanceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*pluginInstanceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PluginInstanceInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Notice") != m.end() && !m["Notice"].empty()) {
      notice = make_shared<string>(boost::any_cast<string>(m["Notice"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Uv") != m.end() && !m["Uv"].empty()) {
      uv = make_shared<long>(boost::any_cast<long>(m["Uv"]));
    }
    if (m.find("OnlineCount") != m.end() && !m["OnlineCount"].empty()) {
      onlineCount = make_shared<long>(boost::any_cast<long>(m["OnlineCount"]));
    }
    if (m.find("PluginInstanceInfoList") != m.end() && !m["PluginInstanceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["PluginInstanceInfoList"].type()) {
        vector<GetRoomDetailResponseBodyResultPluginInstanceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PluginInstanceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoomDetailResponseBodyResultPluginInstanceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pluginInstanceInfoList = make_shared<vector<GetRoomDetailResponseBodyResultPluginInstanceInfoList>>(expect1);
      }
    }
  }


  virtual ~GetRoomDetailResponseBodyResult() = default;
};
class GetRoomDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetRoomDetailResponseBodyResult> result{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};

  GetRoomDetailResponseBody() {}

  explicit GetRoomDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetRoomDetailResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetRoomDetailResponseBodyResult>(model1);
      }
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
  }


  virtual ~GetRoomDetailResponseBody() = default;
};
class GetRoomDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRoomDetailResponseBody> body{};

  GetRoomDetailResponse() {}

  explicit GetRoomDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRoomDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRoomDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetRoomDetailResponse() = default;
};
class GetRoomListRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> bizType{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  GetRoomListRequestRequest() {}

  explicit GetRoomListRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~GetRoomListRequestRequest() = default;
};
class GetRoomListRequest : public Darabonba::Model {
public:
  shared_ptr<GetRoomListRequestRequest> request{};

  GetRoomListRequest() {}

  explicit GetRoomListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (request) {
      res["Request"] = request ? boost::any(request->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      if (typeid(map<string, boost::any>) == m["Request"].type()) {
        GetRoomListRequestRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Request"]));
        request = make_shared<GetRoomListRequestRequest>(model1);
      }
    }
  }


  virtual ~GetRoomListRequest() = default;
};
class GetRoomListResponseBodyResultRoomInfoList : public Darabonba::Model {
public:
  shared_ptr<string> roomId{};
  shared_ptr<string> title{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> domain{};

  GetRoomListResponseBodyResultRoomInfoList() {}

  explicit GetRoomListResponseBodyResultRoomInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roomId) {
      res["RoomId"] = boost::any(*roomId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoomId") != m.end() && !m["RoomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["RoomId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
  }


  virtual ~GetRoomListResponseBodyResultRoomInfoList() = default;
};
class GetRoomListResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> total{};
  shared_ptr<bool> hasMore{};
  shared_ptr<vector<GetRoomListResponseBodyResultRoomInfoList>> roomInfoList{};

  GetRoomListResponseBodyResult() {}

  explicit GetRoomListResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (hasMore) {
      res["HasMore"] = boost::any(*hasMore);
    }
    if (roomInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*roomInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoomInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("HasMore") != m.end() && !m["HasMore"].empty()) {
      hasMore = make_shared<bool>(boost::any_cast<bool>(m["HasMore"]));
    }
    if (m.find("RoomInfoList") != m.end() && !m["RoomInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["RoomInfoList"].type()) {
        vector<GetRoomListResponseBodyResultRoomInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoomInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRoomListResponseBodyResultRoomInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roomInfoList = make_shared<vector<GetRoomListResponseBodyResultRoomInfoList>>(expect1);
      }
    }
  }


  virtual ~GetRoomListResponseBodyResult() = default;
};
class GetRoomListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetRoomListResponseBodyResult> result{};
  shared_ptr<bool> responseSuccess{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};

  GetRoomListResponseBody() {}

  explicit GetRoomListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (responseSuccess) {
      res["ResponseSuccess"] = boost::any(*responseSuccess);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetRoomListResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetRoomListResponseBodyResult>(model1);
      }
    }
    if (m.find("ResponseSuccess") != m.end() && !m["ResponseSuccess"].empty()) {
      responseSuccess = make_shared<bool>(boost::any_cast<bool>(m["ResponseSuccess"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
  }


  virtual ~GetRoomListResponseBody() = default;
};
class GetRoomListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRoomListResponseBody> body{};

  GetRoomListResponse() {}

  explicit GetRoomListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRoomListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRoomListResponseBody>(model1);
      }
    }
  }


  virtual ~GetRoomListResponse() = default;
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
  GetLoginTokenResponse getLoginTokenWithOptions(shared_ptr<GetLoginTokenRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLoginTokenResponse getLoginToken(shared_ptr<GetLoginTokenRequest> request);
  CreateRoomResponse createRoomWithOptions(shared_ptr<CreateRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRoomResponse createRoom(shared_ptr<CreateRoomRequest> request);
  DestroyRoomResponse destroyRoomWithOptions(shared_ptr<DestroyRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DestroyRoomResponse destroyRoom(shared_ptr<DestroyRoomRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  GetRoomDetailResponse getRoomDetailWithOptions(shared_ptr<GetRoomDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRoomDetailResponse getRoomDetail(shared_ptr<GetRoomDetailRequest> request);
  GetRoomListResponse getRoomListWithOptions(shared_ptr<GetRoomListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRoomListResponse getRoomList(shared_ptr<GetRoomListRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Imp-room20210515

#endif
