// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MINDLIVE20210301_H_
#define ALIBABACLOUD_MINDLIVE20210301_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_MindLive20210301 {
class LoginDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userSource{};

  LoginDeviceRequest() {}

  explicit LoginDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userSource) {
      res["UserSource"] = boost::any(*userSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserSource") != m.end() && !m["UserSource"].empty()) {
      userSource = make_shared<string>(boost::any_cast<string>(m["UserSource"]));
    }
  }


  virtual ~LoginDeviceRequest() = default;
};
class LoginDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  LoginDeviceResponseBody() {}

  explicit LoginDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~LoginDeviceResponseBody() = default;
};
class LoginDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LoginDeviceResponseBody> body{};

  LoginDeviceResponse() {}

  explicit LoginDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LoginDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LoginDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~LoginDeviceResponse() = default;
};
class LogoutDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> userSource{};

  LogoutDeviceRequest() {}

  explicit LogoutDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userSource) {
      res["UserSource"] = boost::any(*userSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserSource") != m.end() && !m["UserSource"].empty()) {
      userSource = make_shared<string>(boost::any_cast<string>(m["UserSource"]));
    }
  }


  virtual ~LogoutDeviceRequest() = default;
};
class LogoutDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  LogoutDeviceResponseBody() {}

  explicit LogoutDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~LogoutDeviceResponseBody() = default;
};
class LogoutDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LogoutDeviceResponseBody> body{};

  LogoutDeviceResponse() {}

  explicit LogoutDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LogoutDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogoutDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~LogoutDeviceResponse() = default;
};
class QueryItemBackgroundsRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> itemIds{};

  QueryItemBackgroundsRequest() {}

  explicit QueryItemBackgroundsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemIds) {
      res["ItemIds"] = boost::any(*itemIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemIds") != m.end() && !m["ItemIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ItemIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      itemIds = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~QueryItemBackgroundsRequest() = default;
};
class QueryItemBackgroundsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> itemIdsShrink{};

  QueryItemBackgroundsShrinkRequest() {}

  explicit QueryItemBackgroundsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemIdsShrink) {
      res["ItemIds"] = boost::any(*itemIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemIds") != m.end() && !m["ItemIds"].empty()) {
      itemIdsShrink = make_shared<string>(boost::any_cast<string>(m["ItemIds"]));
    }
  }


  virtual ~QueryItemBackgroundsShrinkRequest() = default;
};
class QueryItemBackgroundsResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryItemBackgroundsResponseBody() {}

  explicit QueryItemBackgroundsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryItemBackgroundsResponseBody() = default;
};
class QueryItemBackgroundsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryItemBackgroundsResponseBody> body{};

  QueryItemBackgroundsResponse() {}

  explicit QueryItemBackgroundsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryItemBackgroundsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryItemBackgroundsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryItemBackgroundsResponse() = default;
};
class ReportCurrentBackgroundRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> bgConfig{};
  shared_ptr<string> mode{};
  shared_ptr<bool> open{};
  shared_ptr<string> resourceUuid{};

  ReportCurrentBackgroundRequest() {}

  explicit ReportCurrentBackgroundRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bgConfig) {
      res["BgConfig"] = boost::any(*bgConfig);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (open) {
      res["Open"] = boost::any(*open);
    }
    if (resourceUuid) {
      res["ResourceUuid"] = boost::any(*resourceUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BgConfig") != m.end() && !m["BgConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BgConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bgConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Open") != m.end() && !m["Open"].empty()) {
      open = make_shared<bool>(boost::any_cast<bool>(m["Open"]));
    }
    if (m.find("ResourceUuid") != m.end() && !m["ResourceUuid"].empty()) {
      resourceUuid = make_shared<string>(boost::any_cast<string>(m["ResourceUuid"]));
    }
  }


  virtual ~ReportCurrentBackgroundRequest() = default;
};
class ReportCurrentBackgroundShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bgConfigShrink{};
  shared_ptr<string> mode{};
  shared_ptr<bool> open{};
  shared_ptr<string> resourceUuid{};

  ReportCurrentBackgroundShrinkRequest() {}

  explicit ReportCurrentBackgroundShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bgConfigShrink) {
      res["BgConfig"] = boost::any(*bgConfigShrink);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (open) {
      res["Open"] = boost::any(*open);
    }
    if (resourceUuid) {
      res["ResourceUuid"] = boost::any(*resourceUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BgConfig") != m.end() && !m["BgConfig"].empty()) {
      bgConfigShrink = make_shared<string>(boost::any_cast<string>(m["BgConfig"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Open") != m.end() && !m["Open"].empty()) {
      open = make_shared<bool>(boost::any_cast<bool>(m["Open"]));
    }
    if (m.find("ResourceUuid") != m.end() && !m["ResourceUuid"].empty()) {
      resourceUuid = make_shared<string>(boost::any_cast<string>(m["ResourceUuid"]));
    }
  }


  virtual ~ReportCurrentBackgroundShrinkRequest() = default;
};
class ReportCurrentBackgroundResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReportCurrentBackgroundResponseBody() {}

  explicit ReportCurrentBackgroundResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReportCurrentBackgroundResponseBody() = default;
};
class ReportCurrentBackgroundResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportCurrentBackgroundResponseBody> body{};

  ReportCurrentBackgroundResponse() {}

  explicit ReportCurrentBackgroundResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportCurrentBackgroundResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportCurrentBackgroundResponseBody>(model1);
      }
    }
  }


  virtual ~ReportCurrentBackgroundResponse() = default;
};
class ReportDevConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> configs{};

  ReportDevConfigRequest() {}

  explicit ReportDevConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      res["Configs"] = boost::any(*configs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      configs = make_shared<string>(boost::any_cast<string>(m["Configs"]));
    }
  }


  virtual ~ReportDevConfigRequest() = default;
};
class ReportDevConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReportDevConfigResponseBody() {}

  explicit ReportDevConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReportDevConfigResponseBody() = default;
};
class ReportDevConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportDevConfigResponseBody> body{};

  ReportDevConfigResponse() {}

  explicit ReportDevConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportDevConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportDevConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ReportDevConfigResponse() = default;
};
class ReportLiveStateRequest : public Darabonba::Model {
public:
  shared_ptr<string> anchorId{};
  shared_ptr<string> id{};
  shared_ptr<string> liveMode{};
  shared_ptr<string> liveState{};
  shared_ptr<long> startTime{};
  shared_ptr<string> type{};

  ReportLiveStateRequest() {}

  explicit ReportLiveStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (anchorId) {
      res["AnchorId"] = boost::any(*anchorId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (liveMode) {
      res["LiveMode"] = boost::any(*liveMode);
    }
    if (liveState) {
      res["LiveState"] = boost::any(*liveState);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnchorId") != m.end() && !m["AnchorId"].empty()) {
      anchorId = make_shared<string>(boost::any_cast<string>(m["AnchorId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LiveMode") != m.end() && !m["LiveMode"].empty()) {
      liveMode = make_shared<string>(boost::any_cast<string>(m["LiveMode"]));
    }
    if (m.find("LiveState") != m.end() && !m["LiveState"].empty()) {
      liveState = make_shared<string>(boost::any_cast<string>(m["LiveState"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ReportLiveStateRequest() = default;
};
class ReportLiveStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReportLiveStateResponseBody() {}

  explicit ReportLiveStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReportLiveStateResponseBody() = default;
};
class ReportLiveStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportLiveStateResponseBody> body{};

  ReportLiveStateResponse() {}

  explicit ReportLiveStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportLiveStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportLiveStateResponseBody>(model1);
      }
    }
  }


  virtual ~ReportLiveStateResponse() = default;
};
class ReportScreenRequest : public Darabonba::Model {
public:
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectKey{};

  ReportScreenRequest() {}

  explicit ReportScreenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectKey) {
      res["OssObjectKey"] = boost::any(*ossObjectKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssObjectKey") != m.end() && !m["OssObjectKey"].empty()) {
      ossObjectKey = make_shared<string>(boost::any_cast<string>(m["OssObjectKey"]));
    }
  }


  virtual ~ReportScreenRequest() = default;
};
class ReportScreenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReportScreenResponseBody() {}

  explicit ReportScreenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReportScreenResponseBody() = default;
};
class ReportScreenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportScreenResponseBody> body{};

  ReportScreenResponse() {}

  explicit ReportScreenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportScreenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportScreenResponseBody>(model1);
      }
    }
  }


  virtual ~ReportScreenResponse() = default;
};
class ReportUserConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ReportUserConfigRequest() {}

  explicit ReportUserConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ReportUserConfigRequest() = default;
};
class ReportUserConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReportUserConfigResponseBody() {}

  explicit ReportUserConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ReportUserConfigResponseBody() = default;
};
class ReportUserConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportUserConfigResponseBody> body{};

  ReportUserConfigResponse() {}

  explicit ReportUserConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportUserConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportUserConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ReportUserConfigResponse() = default;
};
class RequestAuthorizationDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  RequestAuthorizationDataResponseBodyData() {}

  explicit RequestAuthorizationDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~RequestAuthorizationDataResponseBodyData() = default;
};
class RequestAuthorizationDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<RequestAuthorizationDataResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RequestAuthorizationDataResponseBody() {}

  explicit RequestAuthorizationDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RequestAuthorizationDataResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RequestAuthorizationDataResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RequestAuthorizationDataResponseBody() = default;
};
class RequestAuthorizationDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestAuthorizationDataResponseBody> body{};

  RequestAuthorizationDataResponse() {}

  explicit RequestAuthorizationDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestAuthorizationDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestAuthorizationDataResponseBody>(model1);
      }
    }
  }


  virtual ~RequestAuthorizationDataResponse() = default;
};
class RequestBackgroundResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> bgConfig{};
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> fileType{};
  shared_ptr<string> mode{};
  shared_ptr<bool> open{};
  shared_ptr<string> resourceUuid{};
  shared_ptr<string> scope{};

  RequestBackgroundResponseBodyData() {}

  explicit RequestBackgroundResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bgConfig) {
      res["BgConfig"] = boost::any(*bgConfig);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (open) {
      res["Open"] = boost::any(*open);
    }
    if (resourceUuid) {
      res["ResourceUuid"] = boost::any(*resourceUuid);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BgConfig") != m.end() && !m["BgConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BgConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bgConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Open") != m.end() && !m["Open"].empty()) {
      open = make_shared<bool>(boost::any_cast<bool>(m["Open"]));
    }
    if (m.find("ResourceUuid") != m.end() && !m["ResourceUuid"].empty()) {
      resourceUuid = make_shared<string>(boost::any_cast<string>(m["ResourceUuid"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~RequestBackgroundResponseBodyData() = default;
};
class RequestBackgroundResponseBody : public Darabonba::Model {
public:
  shared_ptr<RequestBackgroundResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RequestBackgroundResponseBody() {}

  explicit RequestBackgroundResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RequestBackgroundResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RequestBackgroundResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RequestBackgroundResponseBody() = default;
};
class RequestBackgroundResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestBackgroundResponseBody> body{};

  RequestBackgroundResponse() {}

  explicit RequestBackgroundResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestBackgroundResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestBackgroundResponseBody>(model1);
      }
    }
  }


  virtual ~RequestBackgroundResponse() = default;
};
class RequestBindDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> liveSource{};

  RequestBindDataRequest() {}

  explicit RequestBindDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveSource) {
      res["LiveSource"] = boost::any(*liveSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveSource") != m.end() && !m["LiveSource"].empty()) {
      liveSource = make_shared<string>(boost::any_cast<string>(m["LiveSource"]));
    }
  }


  virtual ~RequestBindDataRequest() = default;
};
class RequestBindDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> maxKeepSeconds{};
  shared_ptr<string> shortUrl{};
  shared_ptr<string> url{};

  RequestBindDataResponseBodyData() {}

  explicit RequestBindDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (maxKeepSeconds) {
      res["MaxKeepSeconds"] = boost::any(*maxKeepSeconds);
    }
    if (shortUrl) {
      res["ShortUrl"] = boost::any(*shortUrl);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("MaxKeepSeconds") != m.end() && !m["MaxKeepSeconds"].empty()) {
      maxKeepSeconds = make_shared<long>(boost::any_cast<long>(m["MaxKeepSeconds"]));
    }
    if (m.find("ShortUrl") != m.end() && !m["ShortUrl"].empty()) {
      shortUrl = make_shared<string>(boost::any_cast<string>(m["ShortUrl"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~RequestBindDataResponseBodyData() = default;
};
class RequestBindDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<RequestBindDataResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RequestBindDataResponseBody() {}

  explicit RequestBindDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RequestBindDataResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RequestBindDataResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RequestBindDataResponseBody() = default;
};
class RequestBindDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestBindDataResponseBody> body{};

  RequestBindDataResponse() {}

  explicit RequestBindDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestBindDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestBindDataResponseBody>(model1);
      }
    }
  }


  virtual ~RequestBindDataResponse() = default;
};
class RequestBindingStateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> bindAt{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> userAvatar{};
  shared_ptr<string> userId{};
  shared_ptr<string> userNick{};
  shared_ptr<string> userSource{};

  RequestBindingStateResponseBodyData() {}

  explicit RequestBindingStateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindAt) {
      res["BindAt"] = boost::any(*bindAt);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (userAvatar) {
      res["UserAvatar"] = boost::any(*userAvatar);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userNick) {
      res["UserNick"] = boost::any(*userNick);
    }
    if (userSource) {
      res["UserSource"] = boost::any(*userSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindAt") != m.end() && !m["BindAt"].empty()) {
      bindAt = make_shared<long>(boost::any_cast<long>(m["BindAt"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("UserAvatar") != m.end() && !m["UserAvatar"].empty()) {
      userAvatar = make_shared<string>(boost::any_cast<string>(m["UserAvatar"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserNick") != m.end() && !m["UserNick"].empty()) {
      userNick = make_shared<string>(boost::any_cast<string>(m["UserNick"]));
    }
    if (m.find("UserSource") != m.end() && !m["UserSource"].empty()) {
      userSource = make_shared<string>(boost::any_cast<string>(m["UserSource"]));
    }
  }


  virtual ~RequestBindingStateResponseBodyData() = default;
};
class RequestBindingStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<RequestBindingStateResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RequestBindingStateResponseBody() {}

  explicit RequestBindingStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RequestBindingStateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RequestBindingStateResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RequestBindingStateResponseBody() = default;
};
class RequestBindingStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestBindingStateResponseBody> body{};

  RequestBindingStateResponse() {}

  explicit RequestBindingStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestBindingStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestBindingStateResponseBody>(model1);
      }
    }
  }


  virtual ~RequestBindingStateResponse() = default;
};
class RequestDeviceInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> deviceSn{};
  shared_ptr<string> publicIp{};

  RequestDeviceInfoResponseBodyData() {}

  explicit RequestDeviceInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (deviceSn) {
      res["DeviceSn"] = boost::any(*deviceSn);
    }
    if (publicIp) {
      res["PublicIp"] = boost::any(*publicIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("DeviceSn") != m.end() && !m["DeviceSn"].empty()) {
      deviceSn = make_shared<string>(boost::any_cast<string>(m["DeviceSn"]));
    }
    if (m.find("PublicIp") != m.end() && !m["PublicIp"].empty()) {
      publicIp = make_shared<string>(boost::any_cast<string>(m["PublicIp"]));
    }
  }


  virtual ~RequestDeviceInfoResponseBodyData() = default;
};
class RequestDeviceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<RequestDeviceInfoResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RequestDeviceInfoResponseBody() {}

  explicit RequestDeviceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RequestDeviceInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RequestDeviceInfoResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RequestDeviceInfoResponseBody() = default;
};
class RequestDeviceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestDeviceInfoResponseBody> body{};

  RequestDeviceInfoResponse() {}

  explicit RequestDeviceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestDeviceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestDeviceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~RequestDeviceInfoResponse() = default;
};
class RequestIotTriadResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> deviceSecret{};
  shared_ptr<string> productKey{};

  RequestIotTriadResponseBodyData() {}

  explicit RequestIotTriadResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (deviceSecret) {
      res["DeviceSecret"] = boost::any(*deviceSecret);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("DeviceSecret") != m.end() && !m["DeviceSecret"].empty()) {
      deviceSecret = make_shared<string>(boost::any_cast<string>(m["DeviceSecret"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~RequestIotTriadResponseBodyData() = default;
};
class RequestIotTriadResponseBody : public Darabonba::Model {
public:
  shared_ptr<RequestIotTriadResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RequestIotTriadResponseBody() {}

  explicit RequestIotTriadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RequestIotTriadResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RequestIotTriadResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RequestIotTriadResponseBody() = default;
};
class RequestIotTriadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestIotTriadResponseBody> body{};

  RequestIotTriadResponse() {}

  explicit RequestIotTriadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestIotTriadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestIotTriadResponseBody>(model1);
      }
    }
  }


  virtual ~RequestIotTriadResponse() = default;
};
class RequestLiveSellPointStateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> display{};

  RequestLiveSellPointStateResponseBodyData() {}

  explicit RequestLiveSellPointStateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<bool>(boost::any_cast<bool>(m["Display"]));
    }
  }


  virtual ~RequestLiveSellPointStateResponseBodyData() = default;
};
class RequestLiveSellPointStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<RequestLiveSellPointStateResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RequestLiveSellPointStateResponseBody() {}

  explicit RequestLiveSellPointStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RequestLiveSellPointStateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RequestLiveSellPointStateResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RequestLiveSellPointStateResponseBody() = default;
};
class RequestLiveSellPointStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestLiveSellPointStateResponseBody> body{};

  RequestLiveSellPointStateResponse() {}

  explicit RequestLiveSellPointStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestLiveSellPointStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestLiveSellPointStateResponseBody>(model1);
      }
    }
  }


  virtual ~RequestLiveSellPointStateResponse() = default;
};
class RequestLiveTeleprompterStateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> display{};

  RequestLiveTeleprompterStateResponseBodyData() {}

  explicit RequestLiveTeleprompterStateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<bool>(boost::any_cast<bool>(m["Display"]));
    }
  }


  virtual ~RequestLiveTeleprompterStateResponseBodyData() = default;
};
class RequestLiveTeleprompterStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<RequestLiveTeleprompterStateResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RequestLiveTeleprompterStateResponseBody() {}

  explicit RequestLiveTeleprompterStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RequestLiveTeleprompterStateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RequestLiveTeleprompterStateResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RequestLiveTeleprompterStateResponseBody() = default;
};
class RequestLiveTeleprompterStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestLiveTeleprompterStateResponseBody> body{};

  RequestLiveTeleprompterStateResponse() {}

  explicit RequestLiveTeleprompterStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestLiveTeleprompterStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestLiveTeleprompterStateResponseBody>(model1);
      }
    }
  }


  virtual ~RequestLiveTeleprompterStateResponse() = default;
};
class RequestOssStsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<long> expireSeconds{};

  RequestOssStsRequest() {}

  explicit RequestOssStsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (expireSeconds) {
      res["ExpireSeconds"] = boost::any(*expireSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("ExpireSeconds") != m.end() && !m["ExpireSeconds"].empty()) {
      expireSeconds = make_shared<long>(boost::any_cast<long>(m["ExpireSeconds"]));
    }
  }


  virtual ~RequestOssStsRequest() = default;
};
class RequestOssStsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> bucket{};
  shared_ptr<string> endPoint{};
  shared_ptr<string> expire{};
  shared_ptr<string> objectKeyPrefix{};
  shared_ptr<string> securityToken{};

  RequestOssStsResponseBodyData() {}

  explicit RequestOssStsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (objectKeyPrefix) {
      res["ObjectKeyPrefix"] = boost::any(*objectKeyPrefix);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("ObjectKeyPrefix") != m.end() && !m["ObjectKeyPrefix"].empty()) {
      objectKeyPrefix = make_shared<string>(boost::any_cast<string>(m["ObjectKeyPrefix"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~RequestOssStsResponseBodyData() = default;
};
class RequestOssStsResponseBody : public Darabonba::Model {
public:
  shared_ptr<RequestOssStsResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RequestOssStsResponseBody() {}

  explicit RequestOssStsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RequestOssStsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RequestOssStsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RequestOssStsResponseBody() = default;
};
class RequestOssStsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestOssStsResponseBody> body{};

  RequestOssStsResponse() {}

  explicit RequestOssStsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestOssStsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestOssStsResponseBody>(model1);
      }
    }
  }


  virtual ~RequestOssStsResponse() = default;
};
class RequestPasterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> configs{};
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> resourceUuid{};

  RequestPasterResponseBodyData() {}

  explicit RequestPasterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      res["Configs"] = boost::any(*configs);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (resourceUuid) {
      res["ResourceUuid"] = boost::any(*resourceUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Configs"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      configs = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("ResourceUuid") != m.end() && !m["ResourceUuid"].empty()) {
      resourceUuid = make_shared<string>(boost::any_cast<string>(m["ResourceUuid"]));
    }
  }


  virtual ~RequestPasterResponseBodyData() = default;
};
class RequestPasterResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<RequestPasterResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RequestPasterResponseBody() {}

  explicit RequestPasterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<RequestPasterResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RequestPasterResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<RequestPasterResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RequestPasterResponseBody() = default;
};
class RequestPasterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestPasterResponseBody> body{};

  RequestPasterResponse() {}

  explicit RequestPasterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestPasterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestPasterResponseBody>(model1);
      }
    }
  }


  virtual ~RequestPasterResponse() = default;
};
class RequestResetDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> liveSource{};

  RequestResetDataRequest() {}

  explicit RequestResetDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (liveSource) {
      res["LiveSource"] = boost::any(*liveSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LiveSource") != m.end() && !m["LiveSource"].empty()) {
      liveSource = make_shared<string>(boost::any_cast<string>(m["LiveSource"]));
    }
  }


  virtual ~RequestResetDataRequest() = default;
};
class RequestResetDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> fullUrl{};
  shared_ptr<string> url{};

  RequestResetDataResponseBodyData() {}

  explicit RequestResetDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fullUrl) {
      res["FullUrl"] = boost::any(*fullUrl);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FullUrl") != m.end() && !m["FullUrl"].empty()) {
      fullUrl = make_shared<string>(boost::any_cast<string>(m["FullUrl"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~RequestResetDataResponseBodyData() = default;
};
class RequestResetDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<RequestResetDataResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RequestResetDataResponseBody() {}

  explicit RequestResetDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RequestResetDataResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RequestResetDataResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RequestResetDataResponseBody() = default;
};
class RequestResetDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestResetDataResponseBody> body{};

  RequestResetDataResponse() {}

  explicit RequestResetDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestResetDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestResetDataResponseBody>(model1);
      }
    }
  }


  virtual ~RequestResetDataResponse() = default;
};
class RequestServiceInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> serviceEffectAt{};
  shared_ptr<long> serviceExpireAt{};
  shared_ptr<string> servicePackName{};

  RequestServiceInfoResponseBodyData() {}

  explicit RequestServiceInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceEffectAt) {
      res["ServiceEffectAt"] = boost::any(*serviceEffectAt);
    }
    if (serviceExpireAt) {
      res["ServiceExpireAt"] = boost::any(*serviceExpireAt);
    }
    if (servicePackName) {
      res["ServicePackName"] = boost::any(*servicePackName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceEffectAt") != m.end() && !m["ServiceEffectAt"].empty()) {
      serviceEffectAt = make_shared<long>(boost::any_cast<long>(m["ServiceEffectAt"]));
    }
    if (m.find("ServiceExpireAt") != m.end() && !m["ServiceExpireAt"].empty()) {
      serviceExpireAt = make_shared<long>(boost::any_cast<long>(m["ServiceExpireAt"]));
    }
    if (m.find("ServicePackName") != m.end() && !m["ServicePackName"].empty()) {
      servicePackName = make_shared<string>(boost::any_cast<string>(m["ServicePackName"]));
    }
  }


  virtual ~RequestServiceInfoResponseBodyData() = default;
};
class RequestServiceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<RequestServiceInfoResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RequestServiceInfoResponseBody() {}

  explicit RequestServiceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RequestServiceInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RequestServiceInfoResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RequestServiceInfoResponseBody() = default;
};
class RequestServiceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestServiceInfoResponseBody> body{};

  RequestServiceInfoResponse() {}

  explicit RequestServiceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestServiceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestServiceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~RequestServiceInfoResponse() = default;
};
class RequestUserConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> key{};

  RequestUserConfigRequest() {}

  explicit RequestUserConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~RequestUserConfigRequest() = default;
};
class RequestUserConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RequestUserConfigResponseBody() {}

  explicit RequestUserConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RequestUserConfigResponseBody() = default;
};
class RequestUserConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestUserConfigResponseBody> body{};

  RequestUserConfigResponse() {}

  explicit RequestUserConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestUserConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestUserConfigResponseBody>(model1);
      }
    }
  }


  virtual ~RequestUserConfigResponse() = default;
};
class RequestUserSellPointTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> displayConfig{};
  shared_ptr<map<string, boost::any>> templateConfig{};
  shared_ptr<string> templateUuid{};
  shared_ptr<string> url{};

  RequestUserSellPointTemplateResponseBodyData() {}

  explicit RequestUserSellPointTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayConfig) {
      res["DisplayConfig"] = boost::any(*displayConfig);
    }
    if (templateConfig) {
      res["TemplateConfig"] = boost::any(*templateConfig);
    }
    if (templateUuid) {
      res["TemplateUuid"] = boost::any(*templateUuid);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayConfig") != m.end() && !m["DisplayConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DisplayConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      displayConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TemplateConfig") != m.end() && !m["TemplateConfig"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TemplateConfig"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      templateConfig = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TemplateUuid") != m.end() && !m["TemplateUuid"].empty()) {
      templateUuid = make_shared<string>(boost::any_cast<string>(m["TemplateUuid"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~RequestUserSellPointTemplateResponseBodyData() = default;
};
class RequestUserSellPointTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<RequestUserSellPointTemplateResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RequestUserSellPointTemplateResponseBody() {}

  explicit RequestUserSellPointTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RequestUserSellPointTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RequestUserSellPointTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RequestUserSellPointTemplateResponseBody() = default;
};
class RequestUserSellPointTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RequestUserSellPointTemplateResponseBody> body{};

  RequestUserSellPointTemplateResponse() {}

  explicit RequestUserSellPointTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RequestUserSellPointTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RequestUserSellPointTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~RequestUserSellPointTemplateResponse() = default;
};
class ResetDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};

  ResetDeviceRequest() {}

  explicit ResetDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ResetDeviceRequest() = default;
};
class ResetDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ResetDeviceResponseBody() {}

  explicit ResetDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ResetDeviceResponseBody() = default;
};
class ResetDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetDeviceResponseBody> body{};

  ResetDeviceResponse() {}

  explicit ResetDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~ResetDeviceResponse() = default;
};
class UpdateCurrentItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> itemId{};

  UpdateCurrentItemRequest() {}

  explicit UpdateCurrentItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
  }


  virtual ~UpdateCurrentItemRequest() = default;
};
class UpdateCurrentItemResponseBodyDataItemBackground : public Darabonba::Model {
public:
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> fileType{};
  shared_ptr<string> itemId{};
  shared_ptr<string> resourceUuid{};
  shared_ptr<string> scope{};

  UpdateCurrentItemResponseBodyDataItemBackground() {}

  explicit UpdateCurrentItemResponseBodyDataItemBackground(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (resourceUuid) {
      res["ResourceUuid"] = boost::any(*resourceUuid);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("ResourceUuid") != m.end() && !m["ResourceUuid"].empty()) {
      resourceUuid = make_shared<string>(boost::any_cast<string>(m["ResourceUuid"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~UpdateCurrentItemResponseBodyDataItemBackground() = default;
};
class UpdateCurrentItemResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<UpdateCurrentItemResponseBodyDataItemBackground> itemBackground{};

  UpdateCurrentItemResponseBodyData() {}

  explicit UpdateCurrentItemResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemBackground) {
      res["ItemBackground"] = itemBackground ? boost::any(itemBackground->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemBackground") != m.end() && !m["ItemBackground"].empty()) {
      if (typeid(map<string, boost::any>) == m["ItemBackground"].type()) {
        UpdateCurrentItemResponseBodyDataItemBackground model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ItemBackground"]));
        itemBackground = make_shared<UpdateCurrentItemResponseBodyDataItemBackground>(model1);
      }
    }
  }


  virtual ~UpdateCurrentItemResponseBodyData() = default;
};
class UpdateCurrentItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateCurrentItemResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateCurrentItemResponseBody() {}

  explicit UpdateCurrentItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateCurrentItemResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateCurrentItemResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateCurrentItemResponseBody() = default;
};
class UpdateCurrentItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCurrentItemResponseBody> body{};

  UpdateCurrentItemResponse() {}

  explicit UpdateCurrentItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCurrentItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCurrentItemResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCurrentItemResponse() = default;
};
class UpdateLiveSellPointStateRequest : public Darabonba::Model {
public:
  shared_ptr<bool> display{};

  UpdateLiveSellPointStateRequest() {}

  explicit UpdateLiveSellPointStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<bool>(boost::any_cast<bool>(m["Display"]));
    }
  }


  virtual ~UpdateLiveSellPointStateRequest() = default;
};
class UpdateLiveSellPointStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateLiveSellPointStateResponseBody() {}

  explicit UpdateLiveSellPointStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateLiveSellPointStateResponseBody() = default;
};
class UpdateLiveSellPointStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLiveSellPointStateResponseBody> body{};

  UpdateLiveSellPointStateResponse() {}

  explicit UpdateLiveSellPointStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLiveSellPointStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLiveSellPointStateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLiveSellPointStateResponse() = default;
};
class UpdateLiveTeleprompterStateRequest : public Darabonba::Model {
public:
  shared_ptr<bool> display{};

  UpdateLiveTeleprompterStateRequest() {}

  explicit UpdateLiveTeleprompterStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["Display"] = boost::any(*display);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Display") != m.end() && !m["Display"].empty()) {
      display = make_shared<bool>(boost::any_cast<bool>(m["Display"]));
    }
  }


  virtual ~UpdateLiveTeleprompterStateRequest() = default;
};
class UpdateLiveTeleprompterStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateLiveTeleprompterStateResponseBody() {}

  explicit UpdateLiveTeleprompterStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateLiveTeleprompterStateResponseBody() = default;
};
class UpdateLiveTeleprompterStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLiveTeleprompterStateResponseBody> body{};

  UpdateLiveTeleprompterStateResponse() {}

  explicit UpdateLiveTeleprompterStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLiveTeleprompterStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLiveTeleprompterStateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLiveTeleprompterStateResponse() = default;
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
  LoginDeviceResponse loginDeviceWithOptions(shared_ptr<LoginDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LoginDeviceResponse loginDevice(shared_ptr<LoginDeviceRequest> request);
  LogoutDeviceResponse logoutDeviceWithOptions(shared_ptr<LogoutDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LogoutDeviceResponse logoutDevice(shared_ptr<LogoutDeviceRequest> request);
  QueryItemBackgroundsResponse queryItemBackgroundsWithOptions(shared_ptr<QueryItemBackgroundsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryItemBackgroundsResponse queryItemBackgrounds(shared_ptr<QueryItemBackgroundsRequest> request);
  ReportCurrentBackgroundResponse reportCurrentBackgroundWithOptions(shared_ptr<ReportCurrentBackgroundRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportCurrentBackgroundResponse reportCurrentBackground(shared_ptr<ReportCurrentBackgroundRequest> request);
  ReportDevConfigResponse reportDevConfigWithOptions(shared_ptr<ReportDevConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportDevConfigResponse reportDevConfig(shared_ptr<ReportDevConfigRequest> request);
  ReportLiveStateResponse reportLiveStateWithOptions(shared_ptr<ReportLiveStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportLiveStateResponse reportLiveState(shared_ptr<ReportLiveStateRequest> request);
  ReportScreenResponse reportScreenWithOptions(shared_ptr<ReportScreenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportScreenResponse reportScreen(shared_ptr<ReportScreenRequest> request);
  ReportUserConfigResponse reportUserConfigWithOptions(shared_ptr<ReportUserConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportUserConfigResponse reportUserConfig(shared_ptr<ReportUserConfigRequest> request);
  RequestAuthorizationDataResponse requestAuthorizationDataWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestAuthorizationDataResponse requestAuthorizationData();
  RequestBackgroundResponse requestBackgroundWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestBackgroundResponse requestBackground();
  RequestBindDataResponse requestBindDataWithOptions(shared_ptr<RequestBindDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestBindDataResponse requestBindData(shared_ptr<RequestBindDataRequest> request);
  RequestBindingStateResponse requestBindingStateWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestBindingStateResponse requestBindingState();
  RequestDeviceInfoResponse requestDeviceInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestDeviceInfoResponse requestDeviceInfo();
  RequestIotTriadResponse requestIotTriadWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestIotTriadResponse requestIotTriad();
  RequestLiveSellPointStateResponse requestLiveSellPointStateWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestLiveSellPointStateResponse requestLiveSellPointState();
  RequestLiveTeleprompterStateResponse requestLiveTeleprompterStateWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestLiveTeleprompterStateResponse requestLiveTeleprompterState();
  RequestOssStsResponse requestOssStsWithOptions(shared_ptr<RequestOssStsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestOssStsResponse requestOssSts(shared_ptr<RequestOssStsRequest> request);
  RequestPasterResponse requestPasterWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestPasterResponse requestPaster();
  RequestResetDataResponse requestResetDataWithOptions(shared_ptr<RequestResetDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestResetDataResponse requestResetData(shared_ptr<RequestResetDataRequest> request);
  RequestServiceInfoResponse requestServiceInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestServiceInfoResponse requestServiceInfo();
  RequestUserConfigResponse requestUserConfigWithOptions(shared_ptr<RequestUserConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestUserConfigResponse requestUserConfig(shared_ptr<RequestUserConfigRequest> request);
  RequestUserSellPointTemplateResponse requestUserSellPointTemplateWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RequestUserSellPointTemplateResponse requestUserSellPointTemplate();
  ResetDeviceResponse resetDeviceWithOptions(shared_ptr<ResetDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetDeviceResponse resetDevice(shared_ptr<ResetDeviceRequest> request);
  UpdateCurrentItemResponse updateCurrentItemWithOptions(shared_ptr<UpdateCurrentItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCurrentItemResponse updateCurrentItem(shared_ptr<UpdateCurrentItemRequest> request);
  UpdateLiveSellPointStateResponse updateLiveSellPointStateWithOptions(shared_ptr<UpdateLiveSellPointStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLiveSellPointStateResponse updateLiveSellPointState(shared_ptr<UpdateLiveSellPointStateRequest> request);
  UpdateLiveTeleprompterStateResponse updateLiveTeleprompterStateWithOptions(shared_ptr<UpdateLiveTeleprompterStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLiveTeleprompterStateResponse updateLiveTeleprompterState(shared_ptr<UpdateLiveTeleprompterStateRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_MindLive20210301

#endif
