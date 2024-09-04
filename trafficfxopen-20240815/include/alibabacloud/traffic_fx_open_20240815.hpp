// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_TRAFFICFXOPEN20240815_H_
#define ALIBABACLOUD_TRAFFICFXOPEN20240815_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_TrafficFxOpen20240815 {
class ConvertUrlHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  ConvertUrlHeaders() {}

  explicit ConvertUrlHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["xAcsAirticketAccessToken"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["xAcsAirticketLanguage"] = boost::any(*xAcsAirticketLanguage);
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
    if (m.find("xAcsAirticketAccessToken") != m.end() && !m["xAcsAirticketAccessToken"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["xAcsAirticketAccessToken"]));
    }
    if (m.find("xAcsAirticketLanguage") != m.end() && !m["xAcsAirticketLanguage"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["xAcsAirticketLanguage"]));
    }
  }


  virtual ~ConvertUrlHeaders() = default;
};
class ConvertUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> countryCallingCode{};
  shared_ptr<string> jumpUrl{};
  shared_ptr<string> phone{};
  shared_ptr<string> scene{};
  shared_ptr<string> source{};
  shared_ptr<string> thirdId{};
  shared_ptr<string> uid{};
  shared_ptr<string> xenv{};

  ConvertUrlRequest() {}

  explicit ConvertUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (countryCallingCode) {
      res["countryCallingCode"] = boost::any(*countryCallingCode);
    }
    if (jumpUrl) {
      res["jumpUrl"] = boost::any(*jumpUrl);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (thirdId) {
      res["thirdId"] = boost::any(*thirdId);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    if (xenv) {
      res["xenv"] = boost::any(*xenv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("countryCallingCode") != m.end() && !m["countryCallingCode"].empty()) {
      countryCallingCode = make_shared<string>(boost::any_cast<string>(m["countryCallingCode"]));
    }
    if (m.find("jumpUrl") != m.end() && !m["jumpUrl"].empty()) {
      jumpUrl = make_shared<string>(boost::any_cast<string>(m["jumpUrl"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("thirdId") != m.end() && !m["thirdId"].empty()) {
      thirdId = make_shared<string>(boost::any_cast<string>(m["thirdId"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
    if (m.find("xenv") != m.end() && !m["xenv"].empty()) {
      xenv = make_shared<string>(boost::any_cast<string>(m["xenv"]));
    }
  }


  virtual ~ConvertUrlRequest() = default;
};
class ConvertUrlResponseBodyDataStatus : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMsg{};

  ConvertUrlResponseBodyDataStatus() {}

  explicit ConvertUrlResponseBodyDataStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
  }


  virtual ~ConvertUrlResponseBodyDataStatus() = default;
};
class ConvertUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> authUrl{};
  shared_ptr<ConvertUrlResponseBodyDataStatus> status{};
  shared_ptr<string> version{};

  ConvertUrlResponseBodyData() {}

  explicit ConvertUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (authUrl) {
      res["authUrl"] = boost::any(*authUrl);
    }
    if (status) {
      res["status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("authUrl") != m.end() && !m["authUrl"].empty()) {
      authUrl = make_shared<string>(boost::any_cast<string>(m["authUrl"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        ConvertUrlResponseBodyDataStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<ConvertUrlResponseBodyDataStatus>(model1);
      }
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ConvertUrlResponseBodyData() = default;
};
class ConvertUrlResponseBodyErrorData : public Darabonba::Model {
public:
  shared_ptr<string> rawErrorCode{};
  shared_ptr<string> rawErrorMsg{};

  ConvertUrlResponseBodyErrorData() {}

  explicit ConvertUrlResponseBodyErrorData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rawErrorCode) {
      res["rawErrorCode"] = boost::any(*rawErrorCode);
    }
    if (rawErrorMsg) {
      res["rawErrorMsg"] = boost::any(*rawErrorMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("rawErrorCode") != m.end() && !m["rawErrorCode"].empty()) {
      rawErrorCode = make_shared<string>(boost::any_cast<string>(m["rawErrorCode"]));
    }
    if (m.find("rawErrorMsg") != m.end() && !m["rawErrorMsg"].empty()) {
      rawErrorMsg = make_shared<string>(boost::any_cast<string>(m["rawErrorMsg"]));
    }
  }


  virtual ~ConvertUrlResponseBodyErrorData() = default;
};
class ConvertUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<ConvertUrlResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<ConvertUrlResponseBodyErrorData> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ConvertUrlResponseBody() {}

  explicit ConvertUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["errorData"] = errorData ? boost::any(errorData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ConvertUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ConvertUrlResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorData") != m.end() && !m["errorData"].empty()) {
      if (typeid(map<string, boost::any>) == m["errorData"].type()) {
        ConvertUrlResponseBodyErrorData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["errorData"]));
        errorData = make_shared<ConvertUrlResponseBodyErrorData>(model1);
      }
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ConvertUrlResponseBody() = default;
};
class ConvertUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConvertUrlResponseBody> body{};

  ConvertUrlResponse() {}

  explicit ConvertUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConvertUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConvertUrlResponseBody>(model1);
      }
    }
  }


  virtual ~ConvertUrlResponse() = default;
};
class GetTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> appSecret{};

  GetTokenRequest() {}

  explicit GetTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["appKey"] = boost::any(*appKey);
    }
    if (appSecret) {
      res["appSecret"] = boost::any(*appSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appKey") != m.end() && !m["appKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["appKey"]));
    }
    if (m.find("appSecret") != m.end() && !m["appSecret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["appSecret"]));
    }
  }


  virtual ~GetTokenRequest() = default;
};
class GetTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> expireTime{};
  shared_ptr<string> generateTime{};
  shared_ptr<string> token{};

  GetTokenResponseBodyData() {}

  explicit GetTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["expireTime"] = boost::any(*expireTime);
    }
    if (generateTime) {
      res["generateTime"] = boost::any(*generateTime);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("expireTime") != m.end() && !m["expireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["expireTime"]));
    }
    if (m.find("generateTime") != m.end() && !m["generateTime"].empty()) {
      generateTime = make_shared<string>(boost::any_cast<string>(m["generateTime"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~GetTokenResponseBodyData() = default;
};
class GetTokenResponseBodyErrorData : public Darabonba::Model {
public:
  shared_ptr<string> rawErrorCode{};
  shared_ptr<string> rawErrorMsg{};

  GetTokenResponseBodyErrorData() {}

  explicit GetTokenResponseBodyErrorData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rawErrorCode) {
      res["rawErrorCode"] = boost::any(*rawErrorCode);
    }
    if (rawErrorMsg) {
      res["rawErrorMsg"] = boost::any(*rawErrorMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("rawErrorCode") != m.end() && !m["rawErrorCode"].empty()) {
      rawErrorCode = make_shared<string>(boost::any_cast<string>(m["rawErrorCode"]));
    }
    if (m.find("rawErrorMsg") != m.end() && !m["rawErrorMsg"].empty()) {
      rawErrorMsg = make_shared<string>(boost::any_cast<string>(m["rawErrorMsg"]));
    }
  }


  virtual ~GetTokenResponseBodyErrorData() = default;
};
class GetTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetTokenResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetTokenResponseBodyErrorData> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  GetTokenResponseBody() {}

  explicit GetTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["errorData"] = errorData ? boost::any(errorData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetTokenResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorData") != m.end() && !m["errorData"].empty()) {
      if (typeid(map<string, boost::any>) == m["errorData"].type()) {
        GetTokenResponseBodyErrorData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["errorData"]));
        errorData = make_shared<GetTokenResponseBodyErrorData>(model1);
      }
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetTokenResponseBody() = default;
};
class GetTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTokenResponseBody> body{};

  GetTokenResponse() {}

  explicit GetTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetTokenResponse() = default;
};
class SearchHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> xAcsAirticketAccessToken{};
  shared_ptr<string> xAcsAirticketLanguage{};

  SearchHeaders() {}

  explicit SearchHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (xAcsAirticketAccessToken) {
      res["xAcsAirticketAccessToken"] = boost::any(*xAcsAirticketAccessToken);
    }
    if (xAcsAirticketLanguage) {
      res["xAcsAirticketLanguage"] = boost::any(*xAcsAirticketLanguage);
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
    if (m.find("xAcsAirticketAccessToken") != m.end() && !m["xAcsAirticketAccessToken"].empty()) {
      xAcsAirticketAccessToken = make_shared<string>(boost::any_cast<string>(m["xAcsAirticketAccessToken"]));
    }
    if (m.find("xAcsAirticketLanguage") != m.end() && !m["xAcsAirticketLanguage"].empty()) {
      xAcsAirticketLanguage = make_shared<string>(boost::any_cast<string>(m["xAcsAirticketLanguage"]));
    }
  }


  virtual ~SearchHeaders() = default;
};
class SearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> scene{};
  shared_ptr<string> searchParam{};
  shared_ptr<string> source{};
  shared_ptr<string> terminal{};
  shared_ptr<string> userId{};

  SearchRequest() {}

  explicit SearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
    if (searchParam) {
      res["searchParam"] = boost::any(*searchParam);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (terminal) {
      res["terminal"] = boost::any(*terminal);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
    if (m.find("searchParam") != m.end() && !m["searchParam"].empty()) {
      searchParam = make_shared<string>(boost::any_cast<string>(m["searchParam"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("terminal") != m.end() && !m["terminal"].empty()) {
      terminal = make_shared<string>(boost::any_cast<string>(m["terminal"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~SearchRequest() = default;
};
class SearchResponseBodyErrorData : public Darabonba::Model {
public:
  shared_ptr<string> rawErrorCode{};
  shared_ptr<string> rawErrorMsg{};

  SearchResponseBodyErrorData() {}

  explicit SearchResponseBodyErrorData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rawErrorCode) {
      res["rawErrorCode"] = boost::any(*rawErrorCode);
    }
    if (rawErrorMsg) {
      res["rawErrorMsg"] = boost::any(*rawErrorMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("rawErrorCode") != m.end() && !m["rawErrorCode"].empty()) {
      rawErrorCode = make_shared<string>(boost::any_cast<string>(m["rawErrorCode"]));
    }
    if (m.find("rawErrorMsg") != m.end() && !m["rawErrorMsg"].empty()) {
      rawErrorMsg = make_shared<string>(boost::any_cast<string>(m["rawErrorMsg"]));
    }
  }


  virtual ~SearchResponseBodyErrorData() = default;
};
class SearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<SearchResponseBodyErrorData> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SearchResponseBody() {}

  explicit SearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["errorData"] = errorData ? boost::any(errorData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorData") != m.end() && !m["errorData"].empty()) {
      if (typeid(map<string, boost::any>) == m["errorData"].type()) {
        SearchResponseBodyErrorData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["errorData"]));
        errorData = make_shared<SearchResponseBodyErrorData>(model1);
      }
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~SearchResponseBody() = default;
};
class SearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchResponseBody> body{};

  SearchResponse() {}

  explicit SearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchResponseBody>(model1);
      }
    }
  }


  virtual ~SearchResponse() = default;
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
  ConvertUrlResponse convertUrlWithOptions(shared_ptr<ConvertUrlRequest> request, shared_ptr<ConvertUrlHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertUrlResponse convertUrl(shared_ptr<ConvertUrlRequest> request);
  GetTokenResponse getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTokenResponse getToken(shared_ptr<GetTokenRequest> request);
  SearchResponse searchWithOptions(shared_ptr<SearchRequest> request, shared_ptr<SearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchResponse search(shared_ptr<SearchRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_TrafficFxOpen20240815

#endif
