// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALIMT20180807_H_
#define ALIBABACLOUD_ALIMT20180807_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Alimt20180807 {
class MachineTranslateECommerceRequest : public Darabonba::Model {
public:
  shared_ptr<string> contentFormat{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> sourceText{};
  shared_ptr<string> targetLanguage{};

  MachineTranslateECommerceRequest() {}

  explicit MachineTranslateECommerceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentFormat) {
      res["ContentFormat"] = boost::any(*contentFormat);
    }
    if (sourceLanguage) {
      res["SourceLanguage"] = boost::any(*sourceLanguage);
    }
    if (sourceText) {
      res["SourceText"] = boost::any(*sourceText);
    }
    if (targetLanguage) {
      res["TargetLanguage"] = boost::any(*targetLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContentFormat") != m.end() && !m["ContentFormat"].empty()) {
      contentFormat = make_shared<string>(boost::any_cast<string>(m["ContentFormat"]));
    }
    if (m.find("SourceLanguage") != m.end() && !m["SourceLanguage"].empty()) {
      sourceLanguage = make_shared<string>(boost::any_cast<string>(m["SourceLanguage"]));
    }
    if (m.find("SourceText") != m.end() && !m["SourceText"].empty()) {
      sourceText = make_shared<string>(boost::any_cast<string>(m["SourceText"]));
    }
    if (m.find("TargetLanguage") != m.end() && !m["TargetLanguage"].empty()) {
      targetLanguage = make_shared<string>(boost::any_cast<string>(m["TargetLanguage"]));
    }
  }


  virtual ~MachineTranslateECommerceRequest() = default;
};
class MachineTranslateECommerceResponseBodyResultCode : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};

  MachineTranslateECommerceResponseBodyResultCode() {}

  explicit MachineTranslateECommerceResponseBodyResultCode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~MachineTranslateECommerceResponseBodyResultCode() = default;
};
class MachineTranslateECommerceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<MachineTranslateECommerceResponseBodyResultCode> resultCode{};
  shared_ptr<bool> success{};
  shared_ptr<string> translateText{};

  MachineTranslateECommerceResponseBody() {}

  explicit MachineTranslateECommerceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultCode) {
      res["ResultCode"] = resultCode ? boost::any(resultCode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (translateText) {
      res["TranslateText"] = boost::any(*translateText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultCode"].type()) {
        MachineTranslateECommerceResponseBodyResultCode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultCode"]));
        resultCode = make_shared<MachineTranslateECommerceResponseBodyResultCode>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TranslateText") != m.end() && !m["TranslateText"].empty()) {
      translateText = make_shared<string>(boost::any_cast<string>(m["TranslateText"]));
    }
  }


  virtual ~MachineTranslateECommerceResponseBody() = default;
};
class MachineTranslateECommerceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MachineTranslateECommerceResponseBody> body{};

  MachineTranslateECommerceResponse() {}

  explicit MachineTranslateECommerceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MachineTranslateECommerceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MachineTranslateECommerceResponseBody>(model1);
      }
    }
  }


  virtual ~MachineTranslateECommerceResponse() = default;
};
class MachineTranslateGeneralRequest : public Darabonba::Model {
public:
  shared_ptr<string> contentFormat{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> sourceText{};
  shared_ptr<string> targetLanguage{};

  MachineTranslateGeneralRequest() {}

  explicit MachineTranslateGeneralRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentFormat) {
      res["ContentFormat"] = boost::any(*contentFormat);
    }
    if (sourceLanguage) {
      res["SourceLanguage"] = boost::any(*sourceLanguage);
    }
    if (sourceText) {
      res["SourceText"] = boost::any(*sourceText);
    }
    if (targetLanguage) {
      res["TargetLanguage"] = boost::any(*targetLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContentFormat") != m.end() && !m["ContentFormat"].empty()) {
      contentFormat = make_shared<string>(boost::any_cast<string>(m["ContentFormat"]));
    }
    if (m.find("SourceLanguage") != m.end() && !m["SourceLanguage"].empty()) {
      sourceLanguage = make_shared<string>(boost::any_cast<string>(m["SourceLanguage"]));
    }
    if (m.find("SourceText") != m.end() && !m["SourceText"].empty()) {
      sourceText = make_shared<string>(boost::any_cast<string>(m["SourceText"]));
    }
    if (m.find("TargetLanguage") != m.end() && !m["TargetLanguage"].empty()) {
      targetLanguage = make_shared<string>(boost::any_cast<string>(m["TargetLanguage"]));
    }
  }


  virtual ~MachineTranslateGeneralRequest() = default;
};
class MachineTranslateGeneralResponseBodyResultCode : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};

  MachineTranslateGeneralResponseBodyResultCode() {}

  explicit MachineTranslateGeneralResponseBodyResultCode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~MachineTranslateGeneralResponseBodyResultCode() = default;
};
class MachineTranslateGeneralResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<MachineTranslateGeneralResponseBodyResultCode> resultCode{};
  shared_ptr<bool> success{};
  shared_ptr<string> translateText{};

  MachineTranslateGeneralResponseBody() {}

  explicit MachineTranslateGeneralResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultCode) {
      res["ResultCode"] = resultCode ? boost::any(resultCode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (translateText) {
      res["TranslateText"] = boost::any(*translateText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultCode"].type()) {
        MachineTranslateGeneralResponseBodyResultCode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultCode"]));
        resultCode = make_shared<MachineTranslateGeneralResponseBodyResultCode>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TranslateText") != m.end() && !m["TranslateText"].empty()) {
      translateText = make_shared<string>(boost::any_cast<string>(m["TranslateText"]));
    }
  }


  virtual ~MachineTranslateGeneralResponseBody() = default;
};
class MachineTranslateGeneralResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MachineTranslateGeneralResponseBody> body{};

  MachineTranslateGeneralResponse() {}

  explicit MachineTranslateGeneralResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MachineTranslateGeneralResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MachineTranslateGeneralResponseBody>(model1);
      }
    }
  }


  virtual ~MachineTranslateGeneralResponse() = default;
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
  MachineTranslateECommerceResponse machineTranslateECommerceWithOptions(shared_ptr<MachineTranslateECommerceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MachineTranslateECommerceResponse machineTranslateECommerce(shared_ptr<MachineTranslateECommerceRequest> request);
  MachineTranslateGeneralResponse machineTranslateGeneralWithOptions(shared_ptr<MachineTranslateGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MachineTranslateGeneralResponse machineTranslateGeneral(shared_ptr<MachineTranslateGeneralRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Alimt20180807

#endif
