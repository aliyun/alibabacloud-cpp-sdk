// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALIMT20181012_H_
#define ALIBABACLOUD_ALIMT20181012_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Alimt20181012 {
class CreateAsyncTranslateRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<string> formatType{};
  shared_ptr<string> scene{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> sourceText{};
  shared_ptr<string> targetLanguage{};

  CreateAsyncTranslateRequest() {}

  explicit CreateAsyncTranslateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
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
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
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


  virtual ~CreateAsyncTranslateRequest() = default;
};
class CreateAsyncTranslateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> status{};

  CreateAsyncTranslateResponseBodyData() {}

  explicit CreateAsyncTranslateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateAsyncTranslateResponseBodyData() = default;
};
class CreateAsyncTranslateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateAsyncTranslateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateAsyncTranslateResponseBody() {}

  explicit CreateAsyncTranslateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAsyncTranslateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateAsyncTranslateResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAsyncTranslateResponseBody() = default;
};
class CreateAsyncTranslateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAsyncTranslateResponseBody> body{};

  CreateAsyncTranslateResponse() {}

  explicit CreateAsyncTranslateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAsyncTranslateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAsyncTranslateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAsyncTranslateResponse() = default;
};
class CreateDocTranslateTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> scene{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> targetLanguage{};

  CreateDocTranslateTaskRequest() {}

  explicit CreateDocTranslateTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (sourceLanguage) {
      res["SourceLanguage"] = boost::any(*sourceLanguage);
    }
    if (targetLanguage) {
      res["TargetLanguage"] = boost::any(*targetLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SourceLanguage") != m.end() && !m["SourceLanguage"].empty()) {
      sourceLanguage = make_shared<string>(boost::any_cast<string>(m["SourceLanguage"]));
    }
    if (m.find("TargetLanguage") != m.end() && !m["TargetLanguage"].empty()) {
      targetLanguage = make_shared<string>(boost::any_cast<string>(m["TargetLanguage"]));
    }
  }


  virtual ~CreateDocTranslateTaskRequest() = default;
};
class CreateDocTranslateTaskAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> clientToken{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<string> scene{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> targetLanguage{};

  CreateDocTranslateTaskAdvanceRequest() {}

  explicit CreateDocTranslateTaskAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (fileUrlObject) {
      res["FileUrl"] = boost::any(*fileUrlObject);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (sourceLanguage) {
      res["SourceLanguage"] = boost::any(*sourceLanguage);
    }
    if (targetLanguage) {
      res["TargetLanguage"] = boost::any(*targetLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileUrl"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SourceLanguage") != m.end() && !m["SourceLanguage"].empty()) {
      sourceLanguage = make_shared<string>(boost::any_cast<string>(m["SourceLanguage"]));
    }
    if (m.find("TargetLanguage") != m.end() && !m["TargetLanguage"].empty()) {
      targetLanguage = make_shared<string>(boost::any_cast<string>(m["TargetLanguage"]));
    }
  }


  virtual ~CreateDocTranslateTaskAdvanceRequest() = default;
};
class CreateDocTranslateTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};

  CreateDocTranslateTaskResponseBody() {}

  explicit CreateDocTranslateTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateDocTranslateTaskResponseBody() = default;
};
class CreateDocTranslateTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDocTranslateTaskResponseBody> body{};

  CreateDocTranslateTaskResponse() {}

  explicit CreateDocTranslateTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDocTranslateTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDocTranslateTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDocTranslateTaskResponse() = default;
};
class CreateImageTranslateTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> extra{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> targetLanguage{};
  shared_ptr<string> urlList{};

  CreateImageTranslateTaskRequest() {}

  explicit CreateImageTranslateTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (sourceLanguage) {
      res["SourceLanguage"] = boost::any(*sourceLanguage);
    }
    if (targetLanguage) {
      res["TargetLanguage"] = boost::any(*targetLanguage);
    }
    if (urlList) {
      res["UrlList"] = boost::any(*urlList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("SourceLanguage") != m.end() && !m["SourceLanguage"].empty()) {
      sourceLanguage = make_shared<string>(boost::any_cast<string>(m["SourceLanguage"]));
    }
    if (m.find("TargetLanguage") != m.end() && !m["TargetLanguage"].empty()) {
      targetLanguage = make_shared<string>(boost::any_cast<string>(m["TargetLanguage"]));
    }
    if (m.find("UrlList") != m.end() && !m["UrlList"].empty()) {
      urlList = make_shared<string>(boost::any_cast<string>(m["UrlList"]));
    }
  }


  virtual ~CreateImageTranslateTaskRequest() = default;
};
class CreateImageTranslateTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  CreateImageTranslateTaskResponseBodyData() {}

  explicit CreateImageTranslateTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateImageTranslateTaskResponseBodyData() = default;
};
class CreateImageTranslateTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateImageTranslateTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateImageTranslateTaskResponseBody() {}

  explicit CreateImageTranslateTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateImageTranslateTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateImageTranslateTaskResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateImageTranslateTaskResponseBody() = default;
};
class CreateImageTranslateTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateImageTranslateTaskResponseBody> body{};

  CreateImageTranslateTaskResponse() {}

  explicit CreateImageTranslateTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateImageTranslateTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateImageTranslateTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateImageTranslateTaskResponse() = default;
};
class GetAsyncTranslateRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetAsyncTranslateRequest() {}

  explicit GetAsyncTranslateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetAsyncTranslateRequest() = default;
};
class GetAsyncTranslateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> detectedLanguage{};
  shared_ptr<string> status{};
  shared_ptr<string> translatedText{};
  shared_ptr<string> wordCount{};

  GetAsyncTranslateResponseBodyData() {}

  explicit GetAsyncTranslateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detectedLanguage) {
      res["DetectedLanguage"] = boost::any(*detectedLanguage);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (translatedText) {
      res["TranslatedText"] = boost::any(*translatedText);
    }
    if (wordCount) {
      res["WordCount"] = boost::any(*wordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetectedLanguage") != m.end() && !m["DetectedLanguage"].empty()) {
      detectedLanguage = make_shared<string>(boost::any_cast<string>(m["DetectedLanguage"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TranslatedText") != m.end() && !m["TranslatedText"].empty()) {
      translatedText = make_shared<string>(boost::any_cast<string>(m["TranslatedText"]));
    }
    if (m.find("WordCount") != m.end() && !m["WordCount"].empty()) {
      wordCount = make_shared<string>(boost::any_cast<string>(m["WordCount"]));
    }
  }


  virtual ~GetAsyncTranslateResponseBodyData() = default;
};
class GetAsyncTranslateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetAsyncTranslateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetAsyncTranslateResponseBody() {}

  explicit GetAsyncTranslateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsyncTranslateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAsyncTranslateResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAsyncTranslateResponseBody() = default;
};
class GetAsyncTranslateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAsyncTranslateResponseBody> body{};

  GetAsyncTranslateResponse() {}

  explicit GetAsyncTranslateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsyncTranslateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAsyncTranslateResponseBody>(model1);
      }
    }
  }


  virtual ~GetAsyncTranslateResponse() = default;
};
class GetBatchTranslateRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiType{};
  shared_ptr<string> formatType{};
  shared_ptr<string> scene{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> sourceText{};
  shared_ptr<string> targetLanguage{};

  GetBatchTranslateRequest() {}

  explicit GetBatchTranslateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
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
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
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


  virtual ~GetBatchTranslateRequest() = default;
};
class GetBatchTranslateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> translatedList{};

  GetBatchTranslateResponseBody() {}

  explicit GetBatchTranslateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (translatedList) {
      res["TranslatedList"] = boost::any(*translatedList);
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
    if (m.find("TranslatedList") != m.end() && !m["TranslatedList"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["TranslatedList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TranslatedList"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      translatedList = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~GetBatchTranslateResponseBody() = default;
};
class GetBatchTranslateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetBatchTranslateResponseBody> body{};

  GetBatchTranslateResponse() {}

  explicit GetBatchTranslateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBatchTranslateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBatchTranslateResponseBody>(model1);
      }
    }
  }


  virtual ~GetBatchTranslateResponse() = default;
};
class GetDetectLanguageRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceText{};

  GetDetectLanguageRequest() {}

  explicit GetDetectLanguageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceText) {
      res["SourceText"] = boost::any(*sourceText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceText") != m.end() && !m["SourceText"].empty()) {
      sourceText = make_shared<string>(boost::any_cast<string>(m["SourceText"]));
    }
  }


  virtual ~GetDetectLanguageRequest() = default;
};
class GetDetectLanguageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> detectedLanguage{};
  shared_ptr<string> requestId{};

  GetDetectLanguageResponseBody() {}

  explicit GetDetectLanguageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detectedLanguage) {
      res["DetectedLanguage"] = boost::any(*detectedLanguage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetectedLanguage") != m.end() && !m["DetectedLanguage"].empty()) {
      detectedLanguage = make_shared<string>(boost::any_cast<string>(m["DetectedLanguage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDetectLanguageResponseBody() = default;
};
class GetDetectLanguageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDetectLanguageResponseBody> body{};

  GetDetectLanguageResponse() {}

  explicit GetDetectLanguageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDetectLanguageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDetectLanguageResponseBody>(model1);
      }
    }
  }


  virtual ~GetDetectLanguageResponse() = default;
};
class GetDocTranslateTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetDocTranslateTaskRequest() {}

  explicit GetDocTranslateTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetDocTranslateTaskRequest() = default;
};
class GetDocTranslateTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> translateErrorCode{};
  shared_ptr<string> translateErrorMessage{};
  shared_ptr<string> translateFileUrl{};

  GetDocTranslateTaskResponseBody() {}

  explicit GetDocTranslateTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (translateErrorCode) {
      res["TranslateErrorCode"] = boost::any(*translateErrorCode);
    }
    if (translateErrorMessage) {
      res["TranslateErrorMessage"] = boost::any(*translateErrorMessage);
    }
    if (translateFileUrl) {
      res["TranslateFileUrl"] = boost::any(*translateFileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TranslateErrorCode") != m.end() && !m["TranslateErrorCode"].empty()) {
      translateErrorCode = make_shared<string>(boost::any_cast<string>(m["TranslateErrorCode"]));
    }
    if (m.find("TranslateErrorMessage") != m.end() && !m["TranslateErrorMessage"].empty()) {
      translateErrorMessage = make_shared<string>(boost::any_cast<string>(m["TranslateErrorMessage"]));
    }
    if (m.find("TranslateFileUrl") != m.end() && !m["TranslateFileUrl"].empty()) {
      translateFileUrl = make_shared<string>(boost::any_cast<string>(m["TranslateFileUrl"]));
    }
  }


  virtual ~GetDocTranslateTaskResponseBody() = default;
};
class GetDocTranslateTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDocTranslateTaskResponseBody> body{};

  GetDocTranslateTaskResponse() {}

  explicit GetDocTranslateTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocTranslateTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDocTranslateTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetDocTranslateTaskResponse() = default;
};
class GetImageDiagnoseRequest : public Darabonba::Model {
public:
  shared_ptr<string> extra{};
  shared_ptr<string> url{};

  GetImageDiagnoseRequest() {}

  explicit GetImageDiagnoseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetImageDiagnoseRequest() = default;
};
class GetImageDiagnoseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> language{};

  GetImageDiagnoseResponseBodyData() {}

  explicit GetImageDiagnoseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~GetImageDiagnoseResponseBodyData() = default;
};
class GetImageDiagnoseResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetImageDiagnoseResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetImageDiagnoseResponseBody() {}

  explicit GetImageDiagnoseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetImageDiagnoseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetImageDiagnoseResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetImageDiagnoseResponseBody() = default;
};
class GetImageDiagnoseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetImageDiagnoseResponseBody> body{};

  GetImageDiagnoseResponse() {}

  explicit GetImageDiagnoseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetImageDiagnoseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImageDiagnoseResponseBody>(model1);
      }
    }
  }


  virtual ~GetImageDiagnoseResponse() = default;
};
class GetImageTranslateRequest : public Darabonba::Model {
public:
  shared_ptr<string> extra{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> targetLanguage{};
  shared_ptr<string> url{};

  GetImageTranslateRequest() {}

  explicit GetImageTranslateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (sourceLanguage) {
      res["SourceLanguage"] = boost::any(*sourceLanguage);
    }
    if (targetLanguage) {
      res["TargetLanguage"] = boost::any(*targetLanguage);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("SourceLanguage") != m.end() && !m["SourceLanguage"].empty()) {
      sourceLanguage = make_shared<string>(boost::any_cast<string>(m["SourceLanguage"]));
    }
    if (m.find("TargetLanguage") != m.end() && !m["TargetLanguage"].empty()) {
      targetLanguage = make_shared<string>(boost::any_cast<string>(m["TargetLanguage"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetImageTranslateRequest() = default;
};
class GetImageTranslateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> orc{};
  shared_ptr<string> pictureEditor{};
  shared_ptr<string> url{};

  GetImageTranslateResponseBodyData() {}

  explicit GetImageTranslateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orc) {
      res["Orc"] = boost::any(*orc);
    }
    if (pictureEditor) {
      res["PictureEditor"] = boost::any(*pictureEditor);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Orc") != m.end() && !m["Orc"].empty()) {
      orc = make_shared<string>(boost::any_cast<string>(m["Orc"]));
    }
    if (m.find("PictureEditor") != m.end() && !m["PictureEditor"].empty()) {
      pictureEditor = make_shared<string>(boost::any_cast<string>(m["PictureEditor"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetImageTranslateResponseBodyData() = default;
};
class GetImageTranslateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetImageTranslateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetImageTranslateResponseBody() {}

  explicit GetImageTranslateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetImageTranslateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetImageTranslateResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetImageTranslateResponseBody() = default;
};
class GetImageTranslateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetImageTranslateResponseBody> body{};

  GetImageTranslateResponse() {}

  explicit GetImageTranslateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetImageTranslateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImageTranslateResponseBody>(model1);
      }
    }
  }


  virtual ~GetImageTranslateResponse() = default;
};
class GetImageTranslateTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetImageTranslateTaskRequest() {}

  explicit GetImageTranslateTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetImageTranslateTaskRequest() = default;
};
class GetImageTranslateTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageData{};

  GetImageTranslateTaskResponseBodyData() {}

  explicit GetImageTranslateTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageData) {
      res["ImageData"] = boost::any(*imageData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageData") != m.end() && !m["ImageData"].empty()) {
      imageData = make_shared<string>(boost::any_cast<string>(m["ImageData"]));
    }
  }


  virtual ~GetImageTranslateTaskResponseBodyData() = default;
};
class GetImageTranslateTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetImageTranslateTaskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetImageTranslateTaskResponseBody() {}

  explicit GetImageTranslateTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetImageTranslateTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetImageTranslateTaskResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetImageTranslateTaskResponseBody() = default;
};
class GetImageTranslateTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetImageTranslateTaskResponseBody> body{};

  GetImageTranslateTaskResponse() {}

  explicit GetImageTranslateTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetImageTranslateTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImageTranslateTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetImageTranslateTaskResponse() = default;
};
class GetTitleDiagnoseRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> extra{};
  shared_ptr<string> language{};
  shared_ptr<string> platform{};
  shared_ptr<string> title{};

  GetTitleDiagnoseRequest() {}

  explicit GetTitleDiagnoseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetTitleDiagnoseRequest() = default;
};
class GetTitleDiagnoseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> allUppercaseWords{};
  shared_ptr<string> containCoreClasses{};
  shared_ptr<string> disableWords{};
  shared_ptr<string> duplicateWords{};
  shared_ptr<string> languageQualityScore{};
  shared_ptr<string> noFirstUppercaseList{};
  shared_ptr<string> overLengthLimit{};
  shared_ptr<string> totalScore{};
  shared_ptr<string> wordCount{};
  shared_ptr<string> wordSpelledCorrectError{};

  GetTitleDiagnoseResponseBodyData() {}

  explicit GetTitleDiagnoseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allUppercaseWords) {
      res["AllUppercaseWords"] = boost::any(*allUppercaseWords);
    }
    if (containCoreClasses) {
      res["ContainCoreClasses"] = boost::any(*containCoreClasses);
    }
    if (disableWords) {
      res["DisableWords"] = boost::any(*disableWords);
    }
    if (duplicateWords) {
      res["DuplicateWords"] = boost::any(*duplicateWords);
    }
    if (languageQualityScore) {
      res["LanguageQualityScore"] = boost::any(*languageQualityScore);
    }
    if (noFirstUppercaseList) {
      res["NoFirstUppercaseList"] = boost::any(*noFirstUppercaseList);
    }
    if (overLengthLimit) {
      res["OverLengthLimit"] = boost::any(*overLengthLimit);
    }
    if (totalScore) {
      res["TotalScore"] = boost::any(*totalScore);
    }
    if (wordCount) {
      res["WordCount"] = boost::any(*wordCount);
    }
    if (wordSpelledCorrectError) {
      res["WordSpelledCorrectError"] = boost::any(*wordSpelledCorrectError);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllUppercaseWords") != m.end() && !m["AllUppercaseWords"].empty()) {
      allUppercaseWords = make_shared<string>(boost::any_cast<string>(m["AllUppercaseWords"]));
    }
    if (m.find("ContainCoreClasses") != m.end() && !m["ContainCoreClasses"].empty()) {
      containCoreClasses = make_shared<string>(boost::any_cast<string>(m["ContainCoreClasses"]));
    }
    if (m.find("DisableWords") != m.end() && !m["DisableWords"].empty()) {
      disableWords = make_shared<string>(boost::any_cast<string>(m["DisableWords"]));
    }
    if (m.find("DuplicateWords") != m.end() && !m["DuplicateWords"].empty()) {
      duplicateWords = make_shared<string>(boost::any_cast<string>(m["DuplicateWords"]));
    }
    if (m.find("LanguageQualityScore") != m.end() && !m["LanguageQualityScore"].empty()) {
      languageQualityScore = make_shared<string>(boost::any_cast<string>(m["LanguageQualityScore"]));
    }
    if (m.find("NoFirstUppercaseList") != m.end() && !m["NoFirstUppercaseList"].empty()) {
      noFirstUppercaseList = make_shared<string>(boost::any_cast<string>(m["NoFirstUppercaseList"]));
    }
    if (m.find("OverLengthLimit") != m.end() && !m["OverLengthLimit"].empty()) {
      overLengthLimit = make_shared<string>(boost::any_cast<string>(m["OverLengthLimit"]));
    }
    if (m.find("TotalScore") != m.end() && !m["TotalScore"].empty()) {
      totalScore = make_shared<string>(boost::any_cast<string>(m["TotalScore"]));
    }
    if (m.find("WordCount") != m.end() && !m["WordCount"].empty()) {
      wordCount = make_shared<string>(boost::any_cast<string>(m["WordCount"]));
    }
    if (m.find("WordSpelledCorrectError") != m.end() && !m["WordSpelledCorrectError"].empty()) {
      wordSpelledCorrectError = make_shared<string>(boost::any_cast<string>(m["WordSpelledCorrectError"]));
    }
  }


  virtual ~GetTitleDiagnoseResponseBodyData() = default;
};
class GetTitleDiagnoseResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetTitleDiagnoseResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetTitleDiagnoseResponseBody() {}

  explicit GetTitleDiagnoseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTitleDiagnoseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTitleDiagnoseResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetTitleDiagnoseResponseBody() = default;
};
class GetTitleDiagnoseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTitleDiagnoseResponseBody> body{};

  GetTitleDiagnoseResponse() {}

  explicit GetTitleDiagnoseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTitleDiagnoseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTitleDiagnoseResponseBody>(model1);
      }
    }
  }


  virtual ~GetTitleDiagnoseResponse() = default;
};
class GetTitleGenerateRequest : public Darabonba::Model {
public:
  shared_ptr<string> attributes{};
  shared_ptr<string> categoryId{};
  shared_ptr<string> extra{};
  shared_ptr<string> hotWords{};
  shared_ptr<string> language{};
  shared_ptr<string> platform{};
  shared_ptr<string> title{};

  GetTitleGenerateRequest() {}

  explicit GetTitleGenerateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (hotWords) {
      res["HotWords"] = boost::any(*hotWords);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      attributes = make_shared<string>(boost::any_cast<string>(m["Attributes"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("HotWords") != m.end() && !m["HotWords"].empty()) {
      hotWords = make_shared<string>(boost::any_cast<string>(m["HotWords"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetTitleGenerateRequest() = default;
};
class GetTitleGenerateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> titles{};

  GetTitleGenerateResponseBodyData() {}

  explicit GetTitleGenerateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (titles) {
      res["Titles"] = boost::any(*titles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Titles") != m.end() && !m["Titles"].empty()) {
      titles = make_shared<string>(boost::any_cast<string>(m["Titles"]));
    }
  }


  virtual ~GetTitleGenerateResponseBodyData() = default;
};
class GetTitleGenerateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetTitleGenerateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetTitleGenerateResponseBody() {}

  explicit GetTitleGenerateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTitleGenerateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTitleGenerateResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetTitleGenerateResponseBody() = default;
};
class GetTitleGenerateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTitleGenerateResponseBody> body{};

  GetTitleGenerateResponse() {}

  explicit GetTitleGenerateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTitleGenerateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTitleGenerateResponseBody>(model1);
      }
    }
  }


  virtual ~GetTitleGenerateResponse() = default;
};
class GetTitleIntelligenceRequest : public Darabonba::Model {
public:
  shared_ptr<long> catLevelThreeId{};
  shared_ptr<long> catLevelTwoId{};
  shared_ptr<string> extra{};
  shared_ptr<string> keywords{};
  shared_ptr<string> platform{};

  GetTitleIntelligenceRequest() {}

  explicit GetTitleIntelligenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (catLevelThreeId) {
      res["CatLevelThreeId"] = boost::any(*catLevelThreeId);
    }
    if (catLevelTwoId) {
      res["CatLevelTwoId"] = boost::any(*catLevelTwoId);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CatLevelThreeId") != m.end() && !m["CatLevelThreeId"].empty()) {
      catLevelThreeId = make_shared<long>(boost::any_cast<long>(m["CatLevelThreeId"]));
    }
    if (m.find("CatLevelTwoId") != m.end() && !m["CatLevelTwoId"].empty()) {
      catLevelTwoId = make_shared<long>(boost::any_cast<long>(m["CatLevelTwoId"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
  }


  virtual ~GetTitleIntelligenceRequest() = default;
};
class GetTitleIntelligenceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> titles{};

  GetTitleIntelligenceResponseBodyData() {}

  explicit GetTitleIntelligenceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (titles) {
      res["Titles"] = boost::any(*titles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Titles") != m.end() && !m["Titles"].empty()) {
      titles = make_shared<string>(boost::any_cast<string>(m["Titles"]));
    }
  }


  virtual ~GetTitleIntelligenceResponseBodyData() = default;
};
class GetTitleIntelligenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetTitleIntelligenceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetTitleIntelligenceResponseBody() {}

  explicit GetTitleIntelligenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTitleIntelligenceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTitleIntelligenceResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetTitleIntelligenceResponseBody() = default;
};
class GetTitleIntelligenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTitleIntelligenceResponseBody> body{};

  GetTitleIntelligenceResponse() {}

  explicit GetTitleIntelligenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTitleIntelligenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTitleIntelligenceResponseBody>(model1);
      }
    }
  }


  virtual ~GetTitleIntelligenceResponse() = default;
};
class GetTranslateImageBatchResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetTranslateImageBatchResultRequest() {}

  explicit GetTranslateImageBatchResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetTranslateImageBatchResultRequest() = default;
};
class GetTranslateImageBatchResultResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> finalImageUrl{};
  shared_ptr<string> inPaintingUrl{};
  shared_ptr<string> message{};
  shared_ptr<string> sourceImageUrl{};
  shared_ptr<bool> success{};
  shared_ptr<string> templateJson{};

  GetTranslateImageBatchResultResponseBodyDataResult() {}

  explicit GetTranslateImageBatchResultResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (finalImageUrl) {
      res["FinalImageUrl"] = boost::any(*finalImageUrl);
    }
    if (inPaintingUrl) {
      res["InPaintingUrl"] = boost::any(*inPaintingUrl);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (sourceImageUrl) {
      res["SourceImageUrl"] = boost::any(*sourceImageUrl);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (templateJson) {
      res["TemplateJson"] = boost::any(*templateJson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("FinalImageUrl") != m.end() && !m["FinalImageUrl"].empty()) {
      finalImageUrl = make_shared<string>(boost::any_cast<string>(m["FinalImageUrl"]));
    }
    if (m.find("InPaintingUrl") != m.end() && !m["InPaintingUrl"].empty()) {
      inPaintingUrl = make_shared<string>(boost::any_cast<string>(m["InPaintingUrl"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("SourceImageUrl") != m.end() && !m["SourceImageUrl"].empty()) {
      sourceImageUrl = make_shared<string>(boost::any_cast<string>(m["SourceImageUrl"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TemplateJson") != m.end() && !m["TemplateJson"].empty()) {
      templateJson = make_shared<string>(boost::any_cast<string>(m["TemplateJson"]));
    }
  }


  virtual ~GetTranslateImageBatchResultResponseBodyDataResult() = default;
};
class GetTranslateImageBatchResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetTranslateImageBatchResultResponseBodyDataResult>> result{};
  shared_ptr<string> status{};

  GetTranslateImageBatchResultResponseBodyData() {}

  explicit GetTranslateImageBatchResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<GetTranslateImageBatchResultResponseBodyDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTranslateImageBatchResultResponseBodyDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<GetTranslateImageBatchResultResponseBodyDataResult>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetTranslateImageBatchResultResponseBodyData() = default;
};
class GetTranslateImageBatchResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetTranslateImageBatchResultResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetTranslateImageBatchResultResponseBody() {}

  explicit GetTranslateImageBatchResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTranslateImageBatchResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTranslateImageBatchResultResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetTranslateImageBatchResultResponseBody() = default;
};
class GetTranslateImageBatchResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTranslateImageBatchResultResponseBody> body{};

  GetTranslateImageBatchResultResponse() {}

  explicit GetTranslateImageBatchResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTranslateImageBatchResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTranslateImageBatchResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetTranslateImageBatchResultResponse() = default;
};
class GetTranslateReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> beginTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> group{};

  GetTranslateReportRequest() {}

  explicit GetTranslateReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
  }


  virtual ~GetTranslateReportRequest() = default;
};
class GetTranslateReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetTranslateReportResponseBody() {}

  explicit GetTranslateReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetTranslateReportResponseBody() = default;
};
class GetTranslateReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTranslateReportResponseBody> body{};

  GetTranslateReportResponse() {}

  explicit GetTranslateReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTranslateReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTranslateReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetTranslateReportResponse() = default;
};
class OpenAlimtServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> type{};

  OpenAlimtServiceRequest() {}

  explicit OpenAlimtServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~OpenAlimtServiceRequest() = default;
};
class OpenAlimtServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenAlimtServiceResponseBody() {}

  explicit OpenAlimtServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OpenAlimtServiceResponseBody() = default;
};
class OpenAlimtServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenAlimtServiceResponseBody> body{};

  OpenAlimtServiceResponse() {}

  explicit OpenAlimtServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenAlimtServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenAlimtServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenAlimtServiceResponse() = default;
};
class TranslateRequest : public Darabonba::Model {
public:
  shared_ptr<string> context{};
  shared_ptr<string> formatType{};
  shared_ptr<string> scene{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> sourceText{};
  shared_ptr<string> targetLanguage{};

  TranslateRequest() {}

  explicit TranslateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (context) {
      res["Context"] = boost::any(*context);
    }
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
    if (m.find("Context") != m.end() && !m["Context"].empty()) {
      context = make_shared<string>(boost::any_cast<string>(m["Context"]));
    }
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


  virtual ~TranslateRequest() = default;
};
class TranslateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> detectedLanguage{};
  shared_ptr<string> translated{};
  shared_ptr<string> wordCount{};

  TranslateResponseBodyData() {}

  explicit TranslateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detectedLanguage) {
      res["DetectedLanguage"] = boost::any(*detectedLanguage);
    }
    if (translated) {
      res["Translated"] = boost::any(*translated);
    }
    if (wordCount) {
      res["WordCount"] = boost::any(*wordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetectedLanguage") != m.end() && !m["DetectedLanguage"].empty()) {
      detectedLanguage = make_shared<string>(boost::any_cast<string>(m["DetectedLanguage"]));
    }
    if (m.find("Translated") != m.end() && !m["Translated"].empty()) {
      translated = make_shared<string>(boost::any_cast<string>(m["Translated"]));
    }
    if (m.find("WordCount") != m.end() && !m["WordCount"].empty()) {
      wordCount = make_shared<string>(boost::any_cast<string>(m["WordCount"]));
    }
  }


  virtual ~TranslateResponseBodyData() = default;
};
class TranslateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<TranslateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  TranslateResponseBody() {}

  explicit TranslateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TranslateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TranslateResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TranslateResponseBody() = default;
};
class TranslateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TranslateResponseBody> body{};

  TranslateResponse() {}

  explicit TranslateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TranslateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TranslateResponseBody>(model1);
      }
    }
  }


  virtual ~TranslateResponse() = default;
};
class TranslateCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateType{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> resultType{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> targetLanguage{};

  TranslateCertificateRequest() {}

  explicit TranslateCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateType) {
      res["CertificateType"] = boost::any(*certificateType);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (resultType) {
      res["ResultType"] = boost::any(*resultType);
    }
    if (sourceLanguage) {
      res["SourceLanguage"] = boost::any(*sourceLanguage);
    }
    if (targetLanguage) {
      res["TargetLanguage"] = boost::any(*targetLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateType") != m.end() && !m["CertificateType"].empty()) {
      certificateType = make_shared<string>(boost::any_cast<string>(m["CertificateType"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("ResultType") != m.end() && !m["ResultType"].empty()) {
      resultType = make_shared<string>(boost::any_cast<string>(m["ResultType"]));
    }
    if (m.find("SourceLanguage") != m.end() && !m["SourceLanguage"].empty()) {
      sourceLanguage = make_shared<string>(boost::any_cast<string>(m["SourceLanguage"]));
    }
    if (m.find("TargetLanguage") != m.end() && !m["TargetLanguage"].empty()) {
      targetLanguage = make_shared<string>(boost::any_cast<string>(m["TargetLanguage"]));
    }
  }


  virtual ~TranslateCertificateRequest() = default;
};
class TranslateCertificateAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateType{};
  shared_ptr<Darabonba::Stream> imageUrlObject{};
  shared_ptr<string> resultType{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> targetLanguage{};

  TranslateCertificateAdvanceRequest() {}

  explicit TranslateCertificateAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateType) {
      res["CertificateType"] = boost::any(*certificateType);
    }
    if (imageUrlObject) {
      res["ImageUrl"] = boost::any(*imageUrlObject);
    }
    if (resultType) {
      res["ResultType"] = boost::any(*resultType);
    }
    if (sourceLanguage) {
      res["SourceLanguage"] = boost::any(*sourceLanguage);
    }
    if (targetLanguage) {
      res["TargetLanguage"] = boost::any(*targetLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateType") != m.end() && !m["CertificateType"].empty()) {
      certificateType = make_shared<string>(boost::any_cast<string>(m["CertificateType"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrl"]));
    }
    if (m.find("ResultType") != m.end() && !m["ResultType"].empty()) {
      resultType = make_shared<string>(boost::any_cast<string>(m["ResultType"]));
    }
    if (m.find("SourceLanguage") != m.end() && !m["SourceLanguage"].empty()) {
      sourceLanguage = make_shared<string>(boost::any_cast<string>(m["SourceLanguage"]));
    }
    if (m.find("TargetLanguage") != m.end() && !m["TargetLanguage"].empty()) {
      targetLanguage = make_shared<string>(boost::any_cast<string>(m["TargetLanguage"]));
    }
  }


  virtual ~TranslateCertificateAdvanceRequest() = default;
};
class TranslateCertificateResponseBodyDataTranslatedValues : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> keyTranslation{};
  shared_ptr<string> value{};
  shared_ptr<string> valueTranslation{};

  TranslateCertificateResponseBodyDataTranslatedValues() {}

  explicit TranslateCertificateResponseBodyDataTranslatedValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (keyTranslation) {
      res["KeyTranslation"] = boost::any(*keyTranslation);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (valueTranslation) {
      res["ValueTranslation"] = boost::any(*valueTranslation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("KeyTranslation") != m.end() && !m["KeyTranslation"].empty()) {
      keyTranslation = make_shared<string>(boost::any_cast<string>(m["KeyTranslation"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("ValueTranslation") != m.end() && !m["ValueTranslation"].empty()) {
      valueTranslation = make_shared<string>(boost::any_cast<string>(m["ValueTranslation"]));
    }
  }


  virtual ~TranslateCertificateResponseBodyDataTranslatedValues() = default;
};
class TranslateCertificateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<TranslateCertificateResponseBodyDataTranslatedValues>> translatedValues{};

  TranslateCertificateResponseBodyData() {}

  explicit TranslateCertificateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (translatedValues) {
      vector<boost::any> temp1;
      for(auto item1:*translatedValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TranslatedValues"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TranslatedValues") != m.end() && !m["TranslatedValues"].empty()) {
      if (typeid(vector<boost::any>) == m["TranslatedValues"].type()) {
        vector<TranslateCertificateResponseBodyDataTranslatedValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TranslatedValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TranslateCertificateResponseBodyDataTranslatedValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        translatedValues = make_shared<vector<TranslateCertificateResponseBodyDataTranslatedValues>>(expect1);
      }
    }
  }


  virtual ~TranslateCertificateResponseBodyData() = default;
};
class TranslateCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<TranslateCertificateResponseBodyData> data{};
  shared_ptr<string> requestId{};

  TranslateCertificateResponseBody() {}

  explicit TranslateCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        TranslateCertificateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TranslateCertificateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TranslateCertificateResponseBody() = default;
};
class TranslateCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TranslateCertificateResponseBody> body{};

  TranslateCertificateResponse() {}

  explicit TranslateCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TranslateCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TranslateCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~TranslateCertificateResponse() = default;
};
class TranslateECommerceRequest : public Darabonba::Model {
public:
  shared_ptr<string> context{};
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
    if (context) {
      res["Context"] = boost::any(*context);
    }
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
    if (m.find("Context") != m.end() && !m["Context"].empty()) {
      context = make_shared<string>(boost::any_cast<string>(m["Context"]));
    }
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
  shared_ptr<string> wordCount{};

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
    if (wordCount) {
      res["WordCount"] = boost::any(*wordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Translated") != m.end() && !m["Translated"].empty()) {
      translated = make_shared<string>(boost::any_cast<string>(m["Translated"]));
    }
    if (m.find("WordCount") != m.end() && !m["WordCount"].empty()) {
      wordCount = make_shared<string>(boost::any_cast<string>(m["WordCount"]));
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
  shared_ptr<string> context{};
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
    if (context) {
      res["Context"] = boost::any(*context);
    }
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
    if (m.find("Context") != m.end() && !m["Context"].empty()) {
      context = make_shared<string>(boost::any_cast<string>(m["Context"]));
    }
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
  shared_ptr<string> detectedLanguage{};
  shared_ptr<string> translated{};
  shared_ptr<string> wordCount{};

  TranslateGeneralResponseBodyData() {}

  explicit TranslateGeneralResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detectedLanguage) {
      res["DetectedLanguage"] = boost::any(*detectedLanguage);
    }
    if (translated) {
      res["Translated"] = boost::any(*translated);
    }
    if (wordCount) {
      res["WordCount"] = boost::any(*wordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetectedLanguage") != m.end() && !m["DetectedLanguage"].empty()) {
      detectedLanguage = make_shared<string>(boost::any_cast<string>(m["DetectedLanguage"]));
    }
    if (m.find("Translated") != m.end() && !m["Translated"].empty()) {
      translated = make_shared<string>(boost::any_cast<string>(m["Translated"]));
    }
    if (m.find("WordCount") != m.end() && !m["WordCount"].empty()) {
      wordCount = make_shared<string>(boost::any_cast<string>(m["WordCount"]));
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
        TranslateGeneralResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TranslateGeneralResponseBody>(model1);
      }
    }
  }


  virtual ~TranslateGeneralResponse() = default;
};
class TranslateImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> ext{};
  shared_ptr<string> field{};
  shared_ptr<string> imageBase64{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> targetLanguage{};

  TranslateImageRequest() {}

  explicit TranslateImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (imageBase64) {
      res["ImageBase64"] = boost::any(*imageBase64);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (sourceLanguage) {
      res["SourceLanguage"] = boost::any(*sourceLanguage);
    }
    if (targetLanguage) {
      res["TargetLanguage"] = boost::any(*targetLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("ImageBase64") != m.end() && !m["ImageBase64"].empty()) {
      imageBase64 = make_shared<string>(boost::any_cast<string>(m["ImageBase64"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("SourceLanguage") != m.end() && !m["SourceLanguage"].empty()) {
      sourceLanguage = make_shared<string>(boost::any_cast<string>(m["SourceLanguage"]));
    }
    if (m.find("TargetLanguage") != m.end() && !m["TargetLanguage"].empty()) {
      targetLanguage = make_shared<string>(boost::any_cast<string>(m["TargetLanguage"]));
    }
  }


  virtual ~TranslateImageRequest() = default;
};
class TranslateImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> finalImageUrl{};
  shared_ptr<string> inPaintingUrl{};
  shared_ptr<string> templateJson{};

  TranslateImageResponseBodyData() {}

  explicit TranslateImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finalImageUrl) {
      res["FinalImageUrl"] = boost::any(*finalImageUrl);
    }
    if (inPaintingUrl) {
      res["InPaintingUrl"] = boost::any(*inPaintingUrl);
    }
    if (templateJson) {
      res["TemplateJson"] = boost::any(*templateJson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FinalImageUrl") != m.end() && !m["FinalImageUrl"].empty()) {
      finalImageUrl = make_shared<string>(boost::any_cast<string>(m["FinalImageUrl"]));
    }
    if (m.find("InPaintingUrl") != m.end() && !m["InPaintingUrl"].empty()) {
      inPaintingUrl = make_shared<string>(boost::any_cast<string>(m["InPaintingUrl"]));
    }
    if (m.find("TemplateJson") != m.end() && !m["TemplateJson"].empty()) {
      templateJson = make_shared<string>(boost::any_cast<string>(m["TemplateJson"]));
    }
  }


  virtual ~TranslateImageResponseBodyData() = default;
};
class TranslateImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<TranslateImageResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  TranslateImageResponseBody() {}

  explicit TranslateImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TranslateImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TranslateImageResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TranslateImageResponseBody() = default;
};
class TranslateImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TranslateImageResponseBody> body{};

  TranslateImageResponse() {}

  explicit TranslateImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TranslateImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TranslateImageResponseBody>(model1);
      }
    }
  }


  virtual ~TranslateImageResponse() = default;
};
class TranslateImageBatchRequest : public Darabonba::Model {
public:
  shared_ptr<string> customTaskId{};
  shared_ptr<string> ext{};
  shared_ptr<string> field{};
  shared_ptr<string> imageUrls{};
  shared_ptr<string> sourceLanguage{};
  shared_ptr<string> targetLanguage{};

  TranslateImageBatchRequest() {}

  explicit TranslateImageBatchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customTaskId) {
      res["CustomTaskId"] = boost::any(*customTaskId);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (imageUrls) {
      res["ImageUrls"] = boost::any(*imageUrls);
    }
    if (sourceLanguage) {
      res["SourceLanguage"] = boost::any(*sourceLanguage);
    }
    if (targetLanguage) {
      res["TargetLanguage"] = boost::any(*targetLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomTaskId") != m.end() && !m["CustomTaskId"].empty()) {
      customTaskId = make_shared<string>(boost::any_cast<string>(m["CustomTaskId"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("ImageUrls") != m.end() && !m["ImageUrls"].empty()) {
      imageUrls = make_shared<string>(boost::any_cast<string>(m["ImageUrls"]));
    }
    if (m.find("SourceLanguage") != m.end() && !m["SourceLanguage"].empty()) {
      sourceLanguage = make_shared<string>(boost::any_cast<string>(m["SourceLanguage"]));
    }
    if (m.find("TargetLanguage") != m.end() && !m["TargetLanguage"].empty()) {
      targetLanguage = make_shared<string>(boost::any_cast<string>(m["TargetLanguage"]));
    }
  }


  virtual ~TranslateImageBatchRequest() = default;
};
class TranslateImageBatchResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  TranslateImageBatchResponseBodyData() {}

  explicit TranslateImageBatchResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~TranslateImageBatchResponseBodyData() = default;
};
class TranslateImageBatchResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<TranslateImageBatchResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  TranslateImageBatchResponseBody() {}

  explicit TranslateImageBatchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TranslateImageBatchResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TranslateImageBatchResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TranslateImageBatchResponseBody() = default;
};
class TranslateImageBatchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TranslateImageBatchResponseBody> body{};

  TranslateImageBatchResponse() {}

  explicit TranslateImageBatchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TranslateImageBatchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TranslateImageBatchResponseBody>(model1);
      }
    }
  }


  virtual ~TranslateImageBatchResponse() = default;
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
  CreateAsyncTranslateResponse createAsyncTranslateWithOptions(shared_ptr<CreateAsyncTranslateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAsyncTranslateResponse createAsyncTranslate(shared_ptr<CreateAsyncTranslateRequest> request);
  CreateDocTranslateTaskResponse createDocTranslateTaskWithOptions(shared_ptr<CreateDocTranslateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDocTranslateTaskResponse createDocTranslateTask(shared_ptr<CreateDocTranslateTaskRequest> request);
  CreateDocTranslateTaskResponse createDocTranslateTaskAdvance(shared_ptr<CreateDocTranslateTaskAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateImageTranslateTaskResponse createImageTranslateTaskWithOptions(shared_ptr<CreateImageTranslateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateImageTranslateTaskResponse createImageTranslateTask(shared_ptr<CreateImageTranslateTaskRequest> request);
  GetAsyncTranslateResponse getAsyncTranslateWithOptions(shared_ptr<GetAsyncTranslateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncTranslateResponse getAsyncTranslate(shared_ptr<GetAsyncTranslateRequest> request);
  GetBatchTranslateResponse getBatchTranslateWithOptions(shared_ptr<GetBatchTranslateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBatchTranslateResponse getBatchTranslate(shared_ptr<GetBatchTranslateRequest> request);
  GetDetectLanguageResponse getDetectLanguageWithOptions(shared_ptr<GetDetectLanguageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDetectLanguageResponse getDetectLanguage(shared_ptr<GetDetectLanguageRequest> request);
  GetDocTranslateTaskResponse getDocTranslateTaskWithOptions(shared_ptr<GetDocTranslateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDocTranslateTaskResponse getDocTranslateTask(shared_ptr<GetDocTranslateTaskRequest> request);
  GetImageDiagnoseResponse getImageDiagnoseWithOptions(shared_ptr<GetImageDiagnoseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImageDiagnoseResponse getImageDiagnose(shared_ptr<GetImageDiagnoseRequest> request);
  GetImageTranslateResponse getImageTranslateWithOptions(shared_ptr<GetImageTranslateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImageTranslateResponse getImageTranslate(shared_ptr<GetImageTranslateRequest> request);
  GetImageTranslateTaskResponse getImageTranslateTaskWithOptions(shared_ptr<GetImageTranslateTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImageTranslateTaskResponse getImageTranslateTask(shared_ptr<GetImageTranslateTaskRequest> request);
  GetTitleDiagnoseResponse getTitleDiagnoseWithOptions(shared_ptr<GetTitleDiagnoseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTitleDiagnoseResponse getTitleDiagnose(shared_ptr<GetTitleDiagnoseRequest> request);
  GetTitleGenerateResponse getTitleGenerateWithOptions(shared_ptr<GetTitleGenerateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTitleGenerateResponse getTitleGenerate(shared_ptr<GetTitleGenerateRequest> request);
  GetTitleIntelligenceResponse getTitleIntelligenceWithOptions(shared_ptr<GetTitleIntelligenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTitleIntelligenceResponse getTitleIntelligence(shared_ptr<GetTitleIntelligenceRequest> request);
  GetTranslateImageBatchResultResponse getTranslateImageBatchResultWithOptions(shared_ptr<GetTranslateImageBatchResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTranslateImageBatchResultResponse getTranslateImageBatchResult(shared_ptr<GetTranslateImageBatchResultRequest> request);
  GetTranslateReportResponse getTranslateReportWithOptions(shared_ptr<GetTranslateReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTranslateReportResponse getTranslateReport(shared_ptr<GetTranslateReportRequest> request);
  OpenAlimtServiceResponse openAlimtServiceWithOptions(shared_ptr<OpenAlimtServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenAlimtServiceResponse openAlimtService(shared_ptr<OpenAlimtServiceRequest> request);
  TranslateResponse translateWithOptions(shared_ptr<TranslateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TranslateResponse translate(shared_ptr<TranslateRequest> request);
  TranslateCertificateResponse translateCertificateWithOptions(shared_ptr<TranslateCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TranslateCertificateResponse translateCertificate(shared_ptr<TranslateCertificateRequest> request);
  TranslateCertificateResponse translateCertificateAdvance(shared_ptr<TranslateCertificateAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TranslateECommerceResponse translateECommerceWithOptions(shared_ptr<TranslateECommerceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TranslateECommerceResponse translateECommerce(shared_ptr<TranslateECommerceRequest> request);
  TranslateGeneralResponse translateGeneralWithOptions(shared_ptr<TranslateGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TranslateGeneralResponse translateGeneral(shared_ptr<TranslateGeneralRequest> request);
  TranslateImageResponse translateImageWithOptions(shared_ptr<TranslateImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TranslateImageResponse translateImage(shared_ptr<TranslateImageRequest> request);
  TranslateImageBatchResponse translateImageBatchWithOptions(shared_ptr<TranslateImageBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TranslateImageBatchResponse translateImageBatch(shared_ptr<TranslateImageBatchRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Alimt20181012

#endif
