// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALIMT20190107_H_
#define ALIBABACLOUD_ALIMT20190107_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Alimt20190107 {
class TranslateECommerceRequest : public Darabonba::Model {
public:
  shared_ptr<string> formatType{};
  shared_ptr<string> scene{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> sourceText{};
  shared_ptr<string> targetLanguage{};

  TranslateECommerceRequest() {}

  explicit TranslateECommerceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (formatType) {
      res["FormatType"] = boost::any(*formatType);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
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
    if (m.find("FormatType") != m.end() && !m["FormatType"].empty()) {
      formatType = make_shared<string>(boost::any_cast<string>(m["FormatType"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
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


  virtual ~TranslateECommerceRequest() = default;
};
class TranslateECommerceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> translated{};

  TranslateECommerceResponseBodyData() {}

  explicit TranslateECommerceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (translated) {
      res["Translated"] = boost::any(*translated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Translated") != m.end() && !m["Translated"].empty()) {
      translated = make_shared<string>(boost::any_cast<string>(m["Translated"]));
    }
  }


  virtual ~TranslateECommerceResponseBodyData() = default;
};
class TranslateECommerceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<TranslateECommerceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  TranslateECommerceResponseBody() {}

  explicit TranslateECommerceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        TranslateECommerceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TranslateECommerceResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TranslateECommerceResponseBody() = default;
};
class TranslateECommerceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TranslateECommerceResponseBody> body{};

  TranslateECommerceResponse() {}

  explicit TranslateECommerceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TranslateECommerceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TranslateECommerceResponseBody>(model1);
      }
    }
  }


  virtual ~TranslateECommerceResponse() = default;
};
class TranslateGeneralRequest : public Darabonba::Model {
public:
  shared_ptr<string> formatType{};
  shared_ptr<string> scene{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> sourceText{};
  shared_ptr<string> targetLanguage{};

  TranslateGeneralRequest() {}

  explicit TranslateGeneralRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (formatType) {
      res["FormatType"] = boost::any(*formatType);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
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
    if (m.find("FormatType") != m.end() && !m["FormatType"].empty()) {
      formatType = make_shared<string>(boost::any_cast<string>(m["FormatType"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
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


  virtual ~TranslateGeneralRequest() = default;
};
class TranslateGeneralResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> translated{};

  TranslateGeneralResponseBodyData() {}

  explicit TranslateGeneralResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (translated) {
      res["Translated"] = boost::any(*translated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Translated") != m.end() && !m["Translated"].empty()) {
      translated = make_shared<string>(boost::any_cast<string>(m["Translated"]));
    }
  }


  virtual ~TranslateGeneralResponseBodyData() = default;
};
class TranslateGeneralResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<TranslateGeneralResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  TranslateGeneralResponseBody() {}

  explicit TranslateGeneralResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        TranslateGeneralResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TranslateGeneralResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TranslateGeneralResponseBody() = default;
};
class TranslateGeneralResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TranslateGeneralResponseBody> body{};

  TranslateGeneralResponse() {}

  explicit TranslateGeneralResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TranslateGeneralResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TranslateGeneralResponseBody>(model1);
      }
    }
  }


  virtual ~TranslateGeneralResponse() = default;
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
  TranslateECommerceResponse translateECommerceWithOptions(shared_ptr<TranslateECommerceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TranslateECommerceResponse translateECommerce(shared_ptr<TranslateECommerceRequest> request);
  TranslateGeneralResponse translateGeneralWithOptions(shared_ptr<TranslateGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TranslateGeneralResponse translateGeneral(shared_ptr<TranslateGeneralRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Alimt20190107

#endif
