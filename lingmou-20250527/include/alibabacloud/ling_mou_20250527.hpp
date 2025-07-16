// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_LINGMOU20250527_H_
#define ALIBABACLOUD_LINGMOU20250527_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_LingMou20250527 {
class CreateChatSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> license{};
  shared_ptr<string> platform{};

  CreateChatSessionRequest() {}

  explicit CreateChatSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (license) {
      res["license"] = boost::any(*license);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("license") != m.end() && !m["license"].empty()) {
      license = make_shared<string>(boost::any_cast<string>(m["license"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
  }


  virtual ~CreateChatSessionRequest() = default;
};
class CreateChatSessionResponseBodyDataAvatarAssets : public Darabonba::Model {
public:
  shared_ptr<string> md5{};
  shared_ptr<string> minRequiredVersion{};
  shared_ptr<string> secret{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  CreateChatSessionResponseBodyDataAvatarAssets() {}

  explicit CreateChatSessionResponseBodyDataAvatarAssets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (md5) {
      res["md5"] = boost::any(*md5);
    }
    if (minRequiredVersion) {
      res["minRequiredVersion"] = boost::any(*minRequiredVersion);
    }
    if (secret) {
      res["secret"] = boost::any(*secret);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("md5") != m.end() && !m["md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["md5"]));
    }
    if (m.find("minRequiredVersion") != m.end() && !m["minRequiredVersion"].empty()) {
      minRequiredVersion = make_shared<string>(boost::any_cast<string>(m["minRequiredVersion"]));
    }
    if (m.find("secret") != m.end() && !m["secret"].empty()) {
      secret = make_shared<string>(boost::any_cast<string>(m["secret"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~CreateChatSessionResponseBodyDataAvatarAssets() = default;
};
class CreateChatSessionResponseBodyDataRtcParams : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> avatarUserId{};
  shared_ptr<string> channel{};
  shared_ptr<string> clientUserId{};
  shared_ptr<string> gslb{};
  shared_ptr<string> nonce{};
  shared_ptr<string> serverUserId{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> token{};

  CreateChatSessionResponseBodyDataRtcParams() {}

  explicit CreateChatSessionResponseBodyDataRtcParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (avatarUserId) {
      res["avatarUserId"] = boost::any(*avatarUserId);
    }
    if (channel) {
      res["channel"] = boost::any(*channel);
    }
    if (clientUserId) {
      res["clientUserId"] = boost::any(*clientUserId);
    }
    if (gslb) {
      res["gslb"] = boost::any(*gslb);
    }
    if (nonce) {
      res["nonce"] = boost::any(*nonce);
    }
    if (serverUserId) {
      res["serverUserId"] = boost::any(*serverUserId);
    }
    if (timestamp) {
      res["timestamp"] = boost::any(*timestamp);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("avatarUserId") != m.end() && !m["avatarUserId"].empty()) {
      avatarUserId = make_shared<string>(boost::any_cast<string>(m["avatarUserId"]));
    }
    if (m.find("channel") != m.end() && !m["channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["channel"]));
    }
    if (m.find("clientUserId") != m.end() && !m["clientUserId"].empty()) {
      clientUserId = make_shared<string>(boost::any_cast<string>(m["clientUserId"]));
    }
    if (m.find("gslb") != m.end() && !m["gslb"].empty()) {
      gslb = make_shared<string>(boost::any_cast<string>(m["gslb"]));
    }
    if (m.find("nonce") != m.end() && !m["nonce"].empty()) {
      nonce = make_shared<string>(boost::any_cast<string>(m["nonce"]));
    }
    if (m.find("serverUserId") != m.end() && !m["serverUserId"].empty()) {
      serverUserId = make_shared<string>(boost::any_cast<string>(m["serverUserId"]));
    }
    if (m.find("timestamp") != m.end() && !m["timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["timestamp"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~CreateChatSessionResponseBodyDataRtcParams() = default;
};
class CreateChatSessionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<CreateChatSessionResponseBodyDataAvatarAssets> avatarAssets{};
  shared_ptr<CreateChatSessionResponseBodyDataRtcParams> rtcParams{};
  shared_ptr<string> sessionId{};

  CreateChatSessionResponseBodyData() {}

  explicit CreateChatSessionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatarAssets) {
      res["avatarAssets"] = avatarAssets ? boost::any(avatarAssets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rtcParams) {
      res["rtcParams"] = rtcParams ? boost::any(rtcParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("avatarAssets") != m.end() && !m["avatarAssets"].empty()) {
      if (typeid(map<string, boost::any>) == m["avatarAssets"].type()) {
        CreateChatSessionResponseBodyDataAvatarAssets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["avatarAssets"]));
        avatarAssets = make_shared<CreateChatSessionResponseBodyDataAvatarAssets>(model1);
      }
    }
    if (m.find("rtcParams") != m.end() && !m["rtcParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["rtcParams"].type()) {
        CreateChatSessionResponseBodyDataRtcParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["rtcParams"]));
        rtcParams = make_shared<CreateChatSessionResponseBodyDataRtcParams>(model1);
      }
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
  }


  virtual ~CreateChatSessionResponseBodyData() = default;
};
class CreateChatSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateChatSessionResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateChatSessionResponseBody() {}

  explicit CreateChatSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
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
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateChatSessionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateChatSessionResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateChatSessionResponseBody() = default;
};
class CreateChatSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateChatSessionResponseBody> body{};

  CreateChatSessionResponse() {}

  explicit CreateChatSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateChatSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateChatSessionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateChatSessionResponse() = default;
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
  CreateChatSessionResponse createChatSessionWithOptions(shared_ptr<string> id,
                                                         shared_ptr<CreateChatSessionRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChatSessionResponse createChatSession(shared_ptr<string> id, shared_ptr<CreateChatSessionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_LingMou20250527

#endif
