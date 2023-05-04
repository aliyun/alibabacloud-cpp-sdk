// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CAPTCHA20230305_H_
#define ALIBABACLOUD_CAPTCHA20230305_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Captcha20230305 {
class VerifyCaptchaRequest : public Darabonba::Model {
public:
  shared_ptr<string> captchaVerifyParam{};

  VerifyCaptchaRequest() {}

  explicit VerifyCaptchaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (captchaVerifyParam) {
      res["CaptchaVerifyParam"] = boost::any(*captchaVerifyParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaptchaVerifyParam") != m.end() && !m["CaptchaVerifyParam"].empty()) {
      captchaVerifyParam = make_shared<string>(boost::any_cast<string>(m["CaptchaVerifyParam"]));
    }
  }


  virtual ~VerifyCaptchaRequest() = default;
};
class VerifyCaptchaResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> verifyResult{};

  VerifyCaptchaResponseBodyResult() {}

  explicit VerifyCaptchaResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<bool>(boost::any_cast<bool>(m["VerifyResult"]));
    }
  }


  virtual ~VerifyCaptchaResponseBodyResult() = default;
};
class VerifyCaptchaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<VerifyCaptchaResponseBodyResult> result{};
  shared_ptr<bool> success{};

  VerifyCaptchaResponseBody() {}

  explicit VerifyCaptchaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        VerifyCaptchaResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<VerifyCaptchaResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~VerifyCaptchaResponseBody() = default;
};
class VerifyCaptchaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyCaptchaResponseBody> body{};

  VerifyCaptchaResponse() {}

  explicit VerifyCaptchaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyCaptchaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyCaptchaResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyCaptchaResponse() = default;
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
  VerifyCaptchaResponse verifyCaptchaWithOptions(shared_ptr<VerifyCaptchaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyCaptchaResponse verifyCaptcha(shared_ptr<VerifyCaptchaRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Captcha20230305

#endif
