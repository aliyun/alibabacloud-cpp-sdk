// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DOCMIND-API20220711_H_
#define ALIBABACLOUD_DOCMIND-API20220711_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Docmind-api20220711 {
class AyncTradeDocumentPackageExtractSmartAppRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> customExtractionRange{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> option{};
  shared_ptr<string> templateName{};

  AyncTradeDocumentPackageExtractSmartAppRequest() {}

  explicit AyncTradeDocumentPackageExtractSmartAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customExtractionRange) {
      res["CustomExtractionRange"] = boost::any(*customExtractionRange);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomExtractionRange") != m.end() && !m["CustomExtractionRange"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CustomExtractionRange"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CustomExtractionRange"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customExtractionRange = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~AyncTradeDocumentPackageExtractSmartAppRequest() = default;
};
class AyncTradeDocumentPackageExtractSmartAppShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> customExtractionRangeShrink{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> option{};
  shared_ptr<string> templateName{};

  AyncTradeDocumentPackageExtractSmartAppShrinkRequest() {}

  explicit AyncTradeDocumentPackageExtractSmartAppShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customExtractionRangeShrink) {
      res["CustomExtractionRange"] = boost::any(*customExtractionRangeShrink);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomExtractionRange") != m.end() && !m["CustomExtractionRange"].empty()) {
      customExtractionRangeShrink = make_shared<string>(boost::any_cast<string>(m["CustomExtractionRange"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~AyncTradeDocumentPackageExtractSmartAppShrinkRequest() = default;
};
class AyncTradeDocumentPackageExtractSmartAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> completed{};
  shared_ptr<string> createTime{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  AyncTradeDocumentPackageExtractSmartAppResponseBody() {}

  explicit AyncTradeDocumentPackageExtractSmartAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (completed) {
      res["Completed"] = boost::any(*completed);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AyncTradeDocumentPackageExtractSmartAppResponseBody() = default;
};
class AyncTradeDocumentPackageExtractSmartAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AyncTradeDocumentPackageExtractSmartAppResponseBody> body{};

  AyncTradeDocumentPackageExtractSmartAppResponse() {}

  explicit AyncTradeDocumentPackageExtractSmartAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AyncTradeDocumentPackageExtractSmartAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AyncTradeDocumentPackageExtractSmartAppResponseBody>(model1);
      }
    }
  }


  virtual ~AyncTradeDocumentPackageExtractSmartAppResponse() = default;
};
class GetDocParserResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<long> layoutNum{};
  shared_ptr<long> layoutStepSize{};

  GetDocParserResultRequest() {}

  explicit GetDocParserResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (layoutNum) {
      res["LayoutNum"] = boost::any(*layoutNum);
    }
    if (layoutStepSize) {
      res["LayoutStepSize"] = boost::any(*layoutStepSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LayoutNum") != m.end() && !m["LayoutNum"].empty()) {
      layoutNum = make_shared<long>(boost::any_cast<long>(m["LayoutNum"]));
    }
    if (m.find("LayoutStepSize") != m.end() && !m["LayoutStepSize"].empty()) {
      layoutStepSize = make_shared<long>(boost::any_cast<long>(m["LayoutStepSize"]));
    }
  }


  virtual ~GetDocParserResultRequest() = default;
};
class GetDocParserResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetDocParserResultResponseBody() {}

  explicit GetDocParserResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDocParserResultResponseBody() = default;
};
class GetDocParserResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDocParserResultResponseBody> body{};

  GetDocParserResultResponse() {}

  explicit GetDocParserResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocParserResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDocParserResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetDocParserResultResponse() = default;
};
class GetDocStructureResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> imageStrategy{};
  shared_ptr<bool> revealMarkdown{};
  shared_ptr<bool> useUrlResponseBody{};

  GetDocStructureResultRequest() {}

  explicit GetDocStructureResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imageStrategy) {
      res["ImageStrategy"] = boost::any(*imageStrategy);
    }
    if (revealMarkdown) {
      res["RevealMarkdown"] = boost::any(*revealMarkdown);
    }
    if (useUrlResponseBody) {
      res["UseUrlResponseBody"] = boost::any(*useUrlResponseBody);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ImageStrategy") != m.end() && !m["ImageStrategy"].empty()) {
      imageStrategy = make_shared<string>(boost::any_cast<string>(m["ImageStrategy"]));
    }
    if (m.find("RevealMarkdown") != m.end() && !m["RevealMarkdown"].empty()) {
      revealMarkdown = make_shared<bool>(boost::any_cast<bool>(m["RevealMarkdown"]));
    }
    if (m.find("UseUrlResponseBody") != m.end() && !m["UseUrlResponseBody"].empty()) {
      useUrlResponseBody = make_shared<bool>(boost::any_cast<bool>(m["UseUrlResponseBody"]));
    }
  }


  virtual ~GetDocStructureResultRequest() = default;
};
class GetDocStructureResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> completed{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetDocStructureResultResponseBody() {}

  explicit GetDocStructureResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (completed) {
      res["Completed"] = boost::any(*completed);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetDocStructureResultResponseBody() = default;
};
class GetDocStructureResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDocStructureResultResponseBody> body{};

  GetDocStructureResultResponse() {}

  explicit GetDocStructureResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocStructureResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDocStructureResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetDocStructureResultResponse() = default;
};
class GetDocumentCompareResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  GetDocumentCompareResultRequest() {}

  explicit GetDocumentCompareResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetDocumentCompareResultRequest() = default;
};
class GetDocumentCompareResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> completed{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetDocumentCompareResultResponseBody() {}

  explicit GetDocumentCompareResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (completed) {
      res["Completed"] = boost::any(*completed);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetDocumentCompareResultResponseBody() = default;
};
class GetDocumentCompareResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDocumentCompareResultResponseBody> body{};

  GetDocumentCompareResultResponse() {}

  explicit GetDocumentCompareResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocumentCompareResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDocumentCompareResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetDocumentCompareResultResponse() = default;
};
class GetDocumentConvertResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  GetDocumentConvertResultRequest() {}

  explicit GetDocumentConvertResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetDocumentConvertResultRequest() = default;
};
class GetDocumentConvertResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> md5{};
  shared_ptr<long> size{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  GetDocumentConvertResultResponseBodyData() {}

  explicit GetDocumentConvertResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetDocumentConvertResultResponseBodyData() = default;
};
class GetDocumentConvertResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> completed{};
  shared_ptr<vector<GetDocumentConvertResultResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetDocumentConvertResultResponseBody() {}

  explicit GetDocumentConvertResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (completed) {
      res["Completed"] = boost::any(*completed);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetDocumentConvertResultResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDocumentConvertResultResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetDocumentConvertResultResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetDocumentConvertResultResponseBody() = default;
};
class GetDocumentConvertResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDocumentConvertResultResponseBody> body{};

  GetDocumentConvertResultResponse() {}

  explicit GetDocumentConvertResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocumentConvertResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDocumentConvertResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetDocumentConvertResultResponse() = default;
};
class GetDocumentExtractResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  GetDocumentExtractResultRequest() {}

  explicit GetDocumentExtractResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetDocumentExtractResultRequest() = default;
};
class GetDocumentExtractResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> completed{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetDocumentExtractResultResponseBody() {}

  explicit GetDocumentExtractResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (completed) {
      res["Completed"] = boost::any(*completed);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetDocumentExtractResultResponseBody() = default;
};
class GetDocumentExtractResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDocumentExtractResultResponseBody> body{};

  GetDocumentExtractResultResponse() {}

  explicit GetDocumentExtractResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocumentExtractResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDocumentExtractResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetDocumentExtractResultResponse() = default;
};
class GetPageNumRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};

  GetPageNumRequest() {}

  explicit GetPageNumRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
  }


  virtual ~GetPageNumRequest() = default;
};
class GetPageNumResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};

  GetPageNumResponseBodyData() {}

  explicit GetPageNumResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
  }


  virtual ~GetPageNumResponseBodyData() = default;
};
class GetPageNumResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPageNumResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPageNumResponseBody() {}

  explicit GetPageNumResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
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
        GetPageNumResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPageNumResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetPageNumResponseBody() = default;
};
class GetPageNumResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPageNumResponseBody> body{};

  GetPageNumResponse() {}

  explicit GetPageNumResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPageNumResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPageNumResponseBody>(model1);
      }
    }
  }


  virtual ~GetPageNumResponse() = default;
};
class GetTableUnderstandingResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  GetTableUnderstandingResultRequest() {}

  explicit GetTableUnderstandingResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetTableUnderstandingResultRequest() = default;
};
class GetTableUnderstandingResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> completed{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetTableUnderstandingResultResponseBody() {}

  explicit GetTableUnderstandingResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (completed) {
      res["Completed"] = boost::any(*completed);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Completed") != m.end() && !m["Completed"].empty()) {
      completed = make_shared<bool>(boost::any_cast<bool>(m["Completed"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetTableUnderstandingResultResponseBody() = default;
};
class GetTableUnderstandingResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTableUnderstandingResultResponseBody> body{};

  GetTableUnderstandingResultResponse() {}

  explicit GetTableUnderstandingResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTableUnderstandingResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTableUnderstandingResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetTableUnderstandingResultResponse() = default;
};
class QueryDocParserStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  QueryDocParserStatusRequest() {}

  explicit QueryDocParserStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~QueryDocParserStatusRequest() = default;
};
class QueryDocParserStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> imageCount{};
  shared_ptr<long> numberOfSuccessfulParsing{};
  shared_ptr<long> pageCountEstimate{};
  shared_ptr<long> paragraphCount{};
  shared_ptr<double> processing{};
  shared_ptr<string> status{};
  shared_ptr<long> tableCount{};
  shared_ptr<long> tokens{};

  QueryDocParserStatusResponseBodyData() {}

  explicit QueryDocParserStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageCount) {
      res["ImageCount"] = boost::any(*imageCount);
    }
    if (numberOfSuccessfulParsing) {
      res["NumberOfSuccessfulParsing"] = boost::any(*numberOfSuccessfulParsing);
    }
    if (pageCountEstimate) {
      res["PageCountEstimate"] = boost::any(*pageCountEstimate);
    }
    if (paragraphCount) {
      res["ParagraphCount"] = boost::any(*paragraphCount);
    }
    if (processing) {
      res["Processing"] = boost::any(*processing);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tableCount) {
      res["TableCount"] = boost::any(*tableCount);
    }
    if (tokens) {
      res["Tokens"] = boost::any(*tokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageCount") != m.end() && !m["ImageCount"].empty()) {
      imageCount = make_shared<long>(boost::any_cast<long>(m["ImageCount"]));
    }
    if (m.find("NumberOfSuccessfulParsing") != m.end() && !m["NumberOfSuccessfulParsing"].empty()) {
      numberOfSuccessfulParsing = make_shared<long>(boost::any_cast<long>(m["NumberOfSuccessfulParsing"]));
    }
    if (m.find("PageCountEstimate") != m.end() && !m["PageCountEstimate"].empty()) {
      pageCountEstimate = make_shared<long>(boost::any_cast<long>(m["PageCountEstimate"]));
    }
    if (m.find("ParagraphCount") != m.end() && !m["ParagraphCount"].empty()) {
      paragraphCount = make_shared<long>(boost::any_cast<long>(m["ParagraphCount"]));
    }
    if (m.find("Processing") != m.end() && !m["Processing"].empty()) {
      processing = make_shared<double>(boost::any_cast<double>(m["Processing"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TableCount") != m.end() && !m["TableCount"].empty()) {
      tableCount = make_shared<long>(boost::any_cast<long>(m["TableCount"]));
    }
    if (m.find("Tokens") != m.end() && !m["Tokens"].empty()) {
      tokens = make_shared<long>(boost::any_cast<long>(m["Tokens"]));
    }
  }


  virtual ~QueryDocParserStatusResponseBodyData() = default;
};
class QueryDocParserStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryDocParserStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryDocParserStatusResponseBody() {}

  explicit QueryDocParserStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryDocParserStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryDocParserStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryDocParserStatusResponseBody() = default;
};
class QueryDocParserStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDocParserStatusResponseBody> body{};

  QueryDocParserStatusResponse() {}

  explicit QueryDocParserStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDocParserStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDocParserStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDocParserStatusResponse() = default;
};
class SubmitConvertImageToExcelJobRequest : public Darabonba::Model {
public:
  shared_ptr<bool> forceMergeExcel{};
  shared_ptr<string> imageNameExtension{};
  shared_ptr<vector<string>> imageNames{};
  shared_ptr<vector<string>> imageUrls{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertImageToExcelJobRequest() {}

  explicit SubmitConvertImageToExcelJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forceMergeExcel) {
      res["ForceMergeExcel"] = boost::any(*forceMergeExcel);
    }
    if (imageNameExtension) {
      res["ImageNameExtension"] = boost::any(*imageNameExtension);
    }
    if (imageNames) {
      res["ImageNames"] = boost::any(*imageNames);
    }
    if (imageUrls) {
      res["ImageUrls"] = boost::any(*imageUrls);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForceMergeExcel") != m.end() && !m["ForceMergeExcel"].empty()) {
      forceMergeExcel = make_shared<bool>(boost::any_cast<bool>(m["ForceMergeExcel"]));
    }
    if (m.find("ImageNameExtension") != m.end() && !m["ImageNameExtension"].empty()) {
      imageNameExtension = make_shared<string>(boost::any_cast<string>(m["ImageNameExtension"]));
    }
    if (m.find("ImageNames") != m.end() && !m["ImageNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ImageUrls") != m.end() && !m["ImageUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageUrls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertImageToExcelJobRequest() = default;
};
class SubmitConvertImageToExcelJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> forceMergeExcel{};
  shared_ptr<string> imageNameExtension{};
  shared_ptr<string> imageNamesShrink{};
  shared_ptr<string> imageUrlsShrink{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertImageToExcelJobShrinkRequest() {}

  explicit SubmitConvertImageToExcelJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forceMergeExcel) {
      res["ForceMergeExcel"] = boost::any(*forceMergeExcel);
    }
    if (imageNameExtension) {
      res["ImageNameExtension"] = boost::any(*imageNameExtension);
    }
    if (imageNamesShrink) {
      res["ImageNames"] = boost::any(*imageNamesShrink);
    }
    if (imageUrlsShrink) {
      res["ImageUrls"] = boost::any(*imageUrlsShrink);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForceMergeExcel") != m.end() && !m["ForceMergeExcel"].empty()) {
      forceMergeExcel = make_shared<bool>(boost::any_cast<bool>(m["ForceMergeExcel"]));
    }
    if (m.find("ImageNameExtension") != m.end() && !m["ImageNameExtension"].empty()) {
      imageNameExtension = make_shared<string>(boost::any_cast<string>(m["ImageNameExtension"]));
    }
    if (m.find("ImageNames") != m.end() && !m["ImageNames"].empty()) {
      imageNamesShrink = make_shared<string>(boost::any_cast<string>(m["ImageNames"]));
    }
    if (m.find("ImageUrls") != m.end() && !m["ImageUrls"].empty()) {
      imageUrlsShrink = make_shared<string>(boost::any_cast<string>(m["ImageUrls"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertImageToExcelJobShrinkRequest() = default;
};
class SubmitConvertImageToExcelJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  SubmitConvertImageToExcelJobResponseBodyData() {}

  explicit SubmitConvertImageToExcelJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~SubmitConvertImageToExcelJobResponseBodyData() = default;
};
class SubmitConvertImageToExcelJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitConvertImageToExcelJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitConvertImageToExcelJobResponseBody() {}

  explicit SubmitConvertImageToExcelJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitConvertImageToExcelJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitConvertImageToExcelJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitConvertImageToExcelJobResponseBody() = default;
};
class SubmitConvertImageToExcelJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitConvertImageToExcelJobResponseBody> body{};

  SubmitConvertImageToExcelJobResponse() {}

  explicit SubmitConvertImageToExcelJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitConvertImageToExcelJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitConvertImageToExcelJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitConvertImageToExcelJobResponse() = default;
};
class SubmitConvertImageToMarkdownJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageNameExtension{};
  shared_ptr<vector<string>> imageNames{};
  shared_ptr<vector<string>> imageUrls{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertImageToMarkdownJobRequest() {}

  explicit SubmitConvertImageToMarkdownJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageNameExtension) {
      res["ImageNameExtension"] = boost::any(*imageNameExtension);
    }
    if (imageNames) {
      res["ImageNames"] = boost::any(*imageNames);
    }
    if (imageUrls) {
      res["ImageUrls"] = boost::any(*imageUrls);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageNameExtension") != m.end() && !m["ImageNameExtension"].empty()) {
      imageNameExtension = make_shared<string>(boost::any_cast<string>(m["ImageNameExtension"]));
    }
    if (m.find("ImageNames") != m.end() && !m["ImageNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ImageUrls") != m.end() && !m["ImageUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageUrls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertImageToMarkdownJobRequest() = default;
};
class SubmitConvertImageToMarkdownJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageNameExtension{};
  shared_ptr<string> imageNamesShrink{};
  shared_ptr<string> imageUrlsShrink{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertImageToMarkdownJobShrinkRequest() {}

  explicit SubmitConvertImageToMarkdownJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageNameExtension) {
      res["ImageNameExtension"] = boost::any(*imageNameExtension);
    }
    if (imageNamesShrink) {
      res["ImageNames"] = boost::any(*imageNamesShrink);
    }
    if (imageUrlsShrink) {
      res["ImageUrls"] = boost::any(*imageUrlsShrink);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageNameExtension") != m.end() && !m["ImageNameExtension"].empty()) {
      imageNameExtension = make_shared<string>(boost::any_cast<string>(m["ImageNameExtension"]));
    }
    if (m.find("ImageNames") != m.end() && !m["ImageNames"].empty()) {
      imageNamesShrink = make_shared<string>(boost::any_cast<string>(m["ImageNames"]));
    }
    if (m.find("ImageUrls") != m.end() && !m["ImageUrls"].empty()) {
      imageUrlsShrink = make_shared<string>(boost::any_cast<string>(m["ImageUrls"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertImageToMarkdownJobShrinkRequest() = default;
};
class SubmitConvertImageToMarkdownJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  SubmitConvertImageToMarkdownJobResponseBodyData() {}

  explicit SubmitConvertImageToMarkdownJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~SubmitConvertImageToMarkdownJobResponseBodyData() = default;
};
class SubmitConvertImageToMarkdownJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitConvertImageToMarkdownJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitConvertImageToMarkdownJobResponseBody() {}

  explicit SubmitConvertImageToMarkdownJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitConvertImageToMarkdownJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitConvertImageToMarkdownJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitConvertImageToMarkdownJobResponseBody() = default;
};
class SubmitConvertImageToMarkdownJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitConvertImageToMarkdownJobResponseBody> body{};

  SubmitConvertImageToMarkdownJobResponse() {}

  explicit SubmitConvertImageToMarkdownJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitConvertImageToMarkdownJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitConvertImageToMarkdownJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitConvertImageToMarkdownJobResponse() = default;
};
class SubmitConvertImageToPdfJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageNameExtension{};
  shared_ptr<vector<string>> imageNames{};
  shared_ptr<vector<string>> imageUrls{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertImageToPdfJobRequest() {}

  explicit SubmitConvertImageToPdfJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageNameExtension) {
      res["ImageNameExtension"] = boost::any(*imageNameExtension);
    }
    if (imageNames) {
      res["ImageNames"] = boost::any(*imageNames);
    }
    if (imageUrls) {
      res["ImageUrls"] = boost::any(*imageUrls);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageNameExtension") != m.end() && !m["ImageNameExtension"].empty()) {
      imageNameExtension = make_shared<string>(boost::any_cast<string>(m["ImageNameExtension"]));
    }
    if (m.find("ImageNames") != m.end() && !m["ImageNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ImageUrls") != m.end() && !m["ImageUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageUrls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertImageToPdfJobRequest() = default;
};
class SubmitConvertImageToPdfJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageNameExtension{};
  shared_ptr<string> imageNamesShrink{};
  shared_ptr<string> imageUrlsShrink{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertImageToPdfJobShrinkRequest() {}

  explicit SubmitConvertImageToPdfJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageNameExtension) {
      res["ImageNameExtension"] = boost::any(*imageNameExtension);
    }
    if (imageNamesShrink) {
      res["ImageNames"] = boost::any(*imageNamesShrink);
    }
    if (imageUrlsShrink) {
      res["ImageUrls"] = boost::any(*imageUrlsShrink);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageNameExtension") != m.end() && !m["ImageNameExtension"].empty()) {
      imageNameExtension = make_shared<string>(boost::any_cast<string>(m["ImageNameExtension"]));
    }
    if (m.find("ImageNames") != m.end() && !m["ImageNames"].empty()) {
      imageNamesShrink = make_shared<string>(boost::any_cast<string>(m["ImageNames"]));
    }
    if (m.find("ImageUrls") != m.end() && !m["ImageUrls"].empty()) {
      imageUrlsShrink = make_shared<string>(boost::any_cast<string>(m["ImageUrls"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertImageToPdfJobShrinkRequest() = default;
};
class SubmitConvertImageToPdfJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  SubmitConvertImageToPdfJobResponseBodyData() {}

  explicit SubmitConvertImageToPdfJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~SubmitConvertImageToPdfJobResponseBodyData() = default;
};
class SubmitConvertImageToPdfJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitConvertImageToPdfJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitConvertImageToPdfJobResponseBody() {}

  explicit SubmitConvertImageToPdfJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitConvertImageToPdfJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitConvertImageToPdfJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitConvertImageToPdfJobResponseBody() = default;
};
class SubmitConvertImageToPdfJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitConvertImageToPdfJobResponseBody> body{};

  SubmitConvertImageToPdfJobResponse() {}

  explicit SubmitConvertImageToPdfJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitConvertImageToPdfJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitConvertImageToPdfJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitConvertImageToPdfJobResponse() = default;
};
class SubmitConvertImageToWordJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageNameExtension{};
  shared_ptr<vector<string>> imageNames{};
  shared_ptr<vector<string>> imageUrls{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertImageToWordJobRequest() {}

  explicit SubmitConvertImageToWordJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageNameExtension) {
      res["ImageNameExtension"] = boost::any(*imageNameExtension);
    }
    if (imageNames) {
      res["ImageNames"] = boost::any(*imageNames);
    }
    if (imageUrls) {
      res["ImageUrls"] = boost::any(*imageUrls);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageNameExtension") != m.end() && !m["ImageNameExtension"].empty()) {
      imageNameExtension = make_shared<string>(boost::any_cast<string>(m["ImageNameExtension"]));
    }
    if (m.find("ImageNames") != m.end() && !m["ImageNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ImageUrls") != m.end() && !m["ImageUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageUrls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertImageToWordJobRequest() = default;
};
class SubmitConvertImageToWordJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageNameExtension{};
  shared_ptr<string> imageNamesShrink{};
  shared_ptr<string> imageUrlsShrink{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertImageToWordJobShrinkRequest() {}

  explicit SubmitConvertImageToWordJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageNameExtension) {
      res["ImageNameExtension"] = boost::any(*imageNameExtension);
    }
    if (imageNamesShrink) {
      res["ImageNames"] = boost::any(*imageNamesShrink);
    }
    if (imageUrlsShrink) {
      res["ImageUrls"] = boost::any(*imageUrlsShrink);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageNameExtension") != m.end() && !m["ImageNameExtension"].empty()) {
      imageNameExtension = make_shared<string>(boost::any_cast<string>(m["ImageNameExtension"]));
    }
    if (m.find("ImageNames") != m.end() && !m["ImageNames"].empty()) {
      imageNamesShrink = make_shared<string>(boost::any_cast<string>(m["ImageNames"]));
    }
    if (m.find("ImageUrls") != m.end() && !m["ImageUrls"].empty()) {
      imageUrlsShrink = make_shared<string>(boost::any_cast<string>(m["ImageUrls"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertImageToWordJobShrinkRequest() = default;
};
class SubmitConvertImageToWordJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  SubmitConvertImageToWordJobResponseBodyData() {}

  explicit SubmitConvertImageToWordJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~SubmitConvertImageToWordJobResponseBodyData() = default;
};
class SubmitConvertImageToWordJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitConvertImageToWordJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitConvertImageToWordJobResponseBody() {}

  explicit SubmitConvertImageToWordJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitConvertImageToWordJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitConvertImageToWordJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitConvertImageToWordJobResponseBody() = default;
};
class SubmitConvertImageToWordJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitConvertImageToWordJobResponseBody> body{};

  SubmitConvertImageToWordJobResponse() {}

  explicit SubmitConvertImageToWordJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitConvertImageToWordJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitConvertImageToWordJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitConvertImageToWordJobResponse() = default;
};
class SubmitConvertPdfToExcelJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<bool> forceExportInnerImage{};
  shared_ptr<bool> forceMergeExcel{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertPdfToExcelJobRequest() {}

  explicit SubmitConvertPdfToExcelJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (forceExportInnerImage) {
      res["ForceExportInnerImage"] = boost::any(*forceExportInnerImage);
    }
    if (forceMergeExcel) {
      res["ForceMergeExcel"] = boost::any(*forceMergeExcel);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("ForceExportInnerImage") != m.end() && !m["ForceExportInnerImage"].empty()) {
      forceExportInnerImage = make_shared<bool>(boost::any_cast<bool>(m["ForceExportInnerImage"]));
    }
    if (m.find("ForceMergeExcel") != m.end() && !m["ForceMergeExcel"].empty()) {
      forceMergeExcel = make_shared<bool>(boost::any_cast<bool>(m["ForceMergeExcel"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertPdfToExcelJobRequest() = default;
};
class SubmitConvertPdfToExcelJobAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<bool> forceExportInnerImage{};
  shared_ptr<bool> forceMergeExcel{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertPdfToExcelJobAdvanceRequest() {}

  explicit SubmitConvertPdfToExcelJobAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrlObject) {
      res["FileUrl"] = boost::any(*fileUrlObject);
    }
    if (forceExportInnerImage) {
      res["ForceExportInnerImage"] = boost::any(*forceExportInnerImage);
    }
    if (forceMergeExcel) {
      res["ForceMergeExcel"] = boost::any(*forceMergeExcel);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileUrl"]));
    }
    if (m.find("ForceExportInnerImage") != m.end() && !m["ForceExportInnerImage"].empty()) {
      forceExportInnerImage = make_shared<bool>(boost::any_cast<bool>(m["ForceExportInnerImage"]));
    }
    if (m.find("ForceMergeExcel") != m.end() && !m["ForceMergeExcel"].empty()) {
      forceMergeExcel = make_shared<bool>(boost::any_cast<bool>(m["ForceMergeExcel"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertPdfToExcelJobAdvanceRequest() = default;
};
class SubmitConvertPdfToExcelJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  SubmitConvertPdfToExcelJobResponseBodyData() {}

  explicit SubmitConvertPdfToExcelJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~SubmitConvertPdfToExcelJobResponseBodyData() = default;
};
class SubmitConvertPdfToExcelJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitConvertPdfToExcelJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitConvertPdfToExcelJobResponseBody() {}

  explicit SubmitConvertPdfToExcelJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitConvertPdfToExcelJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitConvertPdfToExcelJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitConvertPdfToExcelJobResponseBody() = default;
};
class SubmitConvertPdfToExcelJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitConvertPdfToExcelJobResponseBody> body{};

  SubmitConvertPdfToExcelJobResponse() {}

  explicit SubmitConvertPdfToExcelJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitConvertPdfToExcelJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitConvertPdfToExcelJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitConvertPdfToExcelJobResponse() = default;
};
class SubmitConvertPdfToImageJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertPdfToImageJobRequest() {}

  explicit SubmitConvertPdfToImageJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertPdfToImageJobRequest() = default;
};
class SubmitConvertPdfToImageJobAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertPdfToImageJobAdvanceRequest() {}

  explicit SubmitConvertPdfToImageJobAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrlObject) {
      res["FileUrl"] = boost::any(*fileUrlObject);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileUrl"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertPdfToImageJobAdvanceRequest() = default;
};
class SubmitConvertPdfToImageJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  SubmitConvertPdfToImageJobResponseBodyData() {}

  explicit SubmitConvertPdfToImageJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~SubmitConvertPdfToImageJobResponseBodyData() = default;
};
class SubmitConvertPdfToImageJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitConvertPdfToImageJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitConvertPdfToImageJobResponseBody() {}

  explicit SubmitConvertPdfToImageJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitConvertPdfToImageJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitConvertPdfToImageJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitConvertPdfToImageJobResponseBody() = default;
};
class SubmitConvertPdfToImageJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitConvertPdfToImageJobResponseBody> body{};

  SubmitConvertPdfToImageJobResponse() {}

  explicit SubmitConvertPdfToImageJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitConvertPdfToImageJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitConvertPdfToImageJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitConvertPdfToImageJobResponse() = default;
};
class SubmitConvertPdfToMarkdownJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertPdfToMarkdownJobRequest() {}

  explicit SubmitConvertPdfToMarkdownJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertPdfToMarkdownJobRequest() = default;
};
class SubmitConvertPdfToMarkdownJobAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertPdfToMarkdownJobAdvanceRequest() {}

  explicit SubmitConvertPdfToMarkdownJobAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrlObject) {
      res["FileUrl"] = boost::any(*fileUrlObject);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileUrl"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertPdfToMarkdownJobAdvanceRequest() = default;
};
class SubmitConvertPdfToMarkdownJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  SubmitConvertPdfToMarkdownJobResponseBodyData() {}

  explicit SubmitConvertPdfToMarkdownJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~SubmitConvertPdfToMarkdownJobResponseBodyData() = default;
};
class SubmitConvertPdfToMarkdownJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitConvertPdfToMarkdownJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitConvertPdfToMarkdownJobResponseBody() {}

  explicit SubmitConvertPdfToMarkdownJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitConvertPdfToMarkdownJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitConvertPdfToMarkdownJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitConvertPdfToMarkdownJobResponseBody() = default;
};
class SubmitConvertPdfToMarkdownJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitConvertPdfToMarkdownJobResponseBody> body{};

  SubmitConvertPdfToMarkdownJobResponse() {}

  explicit SubmitConvertPdfToMarkdownJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitConvertPdfToMarkdownJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitConvertPdfToMarkdownJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitConvertPdfToMarkdownJobResponse() = default;
};
class SubmitConvertPdfToWordJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<bool> forceExportInnerImage{};
  shared_ptr<bool> formulaEnhancement{};
  shared_ptr<string> option{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertPdfToWordJobRequest() {}

  explicit SubmitConvertPdfToWordJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (forceExportInnerImage) {
      res["ForceExportInnerImage"] = boost::any(*forceExportInnerImage);
    }
    if (formulaEnhancement) {
      res["FormulaEnhancement"] = boost::any(*formulaEnhancement);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("ForceExportInnerImage") != m.end() && !m["ForceExportInnerImage"].empty()) {
      forceExportInnerImage = make_shared<bool>(boost::any_cast<bool>(m["ForceExportInnerImage"]));
    }
    if (m.find("FormulaEnhancement") != m.end() && !m["FormulaEnhancement"].empty()) {
      formulaEnhancement = make_shared<bool>(boost::any_cast<bool>(m["FormulaEnhancement"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertPdfToWordJobRequest() = default;
};
class SubmitConvertPdfToWordJobAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<bool> forceExportInnerImage{};
  shared_ptr<bool> formulaEnhancement{};
  shared_ptr<string> option{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitConvertPdfToWordJobAdvanceRequest() {}

  explicit SubmitConvertPdfToWordJobAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrlObject) {
      res["FileUrl"] = boost::any(*fileUrlObject);
    }
    if (forceExportInnerImage) {
      res["ForceExportInnerImage"] = boost::any(*forceExportInnerImage);
    }
    if (formulaEnhancement) {
      res["FormulaEnhancement"] = boost::any(*formulaEnhancement);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileUrl"]));
    }
    if (m.find("ForceExportInnerImage") != m.end() && !m["ForceExportInnerImage"].empty()) {
      forceExportInnerImage = make_shared<bool>(boost::any_cast<bool>(m["ForceExportInnerImage"]));
    }
    if (m.find("FormulaEnhancement") != m.end() && !m["FormulaEnhancement"].empty()) {
      formulaEnhancement = make_shared<bool>(boost::any_cast<bool>(m["FormulaEnhancement"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitConvertPdfToWordJobAdvanceRequest() = default;
};
class SubmitConvertPdfToWordJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  SubmitConvertPdfToWordJobResponseBodyData() {}

  explicit SubmitConvertPdfToWordJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~SubmitConvertPdfToWordJobResponseBodyData() = default;
};
class SubmitConvertPdfToWordJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitConvertPdfToWordJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitConvertPdfToWordJobResponseBody() {}

  explicit SubmitConvertPdfToWordJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitConvertPdfToWordJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitConvertPdfToWordJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitConvertPdfToWordJobResponseBody() = default;
};
class SubmitConvertPdfToWordJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitConvertPdfToWordJobResponseBody> body{};

  SubmitConvertPdfToWordJobResponse() {}

  explicit SubmitConvertPdfToWordJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitConvertPdfToWordJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitConvertPdfToWordJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitConvertPdfToWordJobResponse() = default;
};
class SubmitDigitalDocStructureJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileNameExtension{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> imageStrategy{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<bool> revealMarkdown{};
  shared_ptr<bool> useUrlResponseBody{};

  SubmitDigitalDocStructureJobRequest() {}

  explicit SubmitDigitalDocStructureJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileNameExtension) {
      res["FileNameExtension"] = boost::any(*fileNameExtension);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (imageStrategy) {
      res["ImageStrategy"] = boost::any(*imageStrategy);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (revealMarkdown) {
      res["RevealMarkdown"] = boost::any(*revealMarkdown);
    }
    if (useUrlResponseBody) {
      res["UseUrlResponseBody"] = boost::any(*useUrlResponseBody);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileNameExtension") != m.end() && !m["FileNameExtension"].empty()) {
      fileNameExtension = make_shared<string>(boost::any_cast<string>(m["FileNameExtension"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("ImageStrategy") != m.end() && !m["ImageStrategy"].empty()) {
      imageStrategy = make_shared<string>(boost::any_cast<string>(m["ImageStrategy"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("RevealMarkdown") != m.end() && !m["RevealMarkdown"].empty()) {
      revealMarkdown = make_shared<bool>(boost::any_cast<bool>(m["RevealMarkdown"]));
    }
    if (m.find("UseUrlResponseBody") != m.end() && !m["UseUrlResponseBody"].empty()) {
      useUrlResponseBody = make_shared<bool>(boost::any_cast<bool>(m["UseUrlResponseBody"]));
    }
  }


  virtual ~SubmitDigitalDocStructureJobRequest() = default;
};
class SubmitDigitalDocStructureJobAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileNameExtension{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<string> imageStrategy{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<bool> revealMarkdown{};
  shared_ptr<bool> useUrlResponseBody{};

  SubmitDigitalDocStructureJobAdvanceRequest() {}

  explicit SubmitDigitalDocStructureJobAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileNameExtension) {
      res["FileNameExtension"] = boost::any(*fileNameExtension);
    }
    if (fileUrlObject) {
      res["FileUrl"] = boost::any(*fileUrlObject);
    }
    if (imageStrategy) {
      res["ImageStrategy"] = boost::any(*imageStrategy);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (revealMarkdown) {
      res["RevealMarkdown"] = boost::any(*revealMarkdown);
    }
    if (useUrlResponseBody) {
      res["UseUrlResponseBody"] = boost::any(*useUrlResponseBody);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileNameExtension") != m.end() && !m["FileNameExtension"].empty()) {
      fileNameExtension = make_shared<string>(boost::any_cast<string>(m["FileNameExtension"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileUrl"]));
    }
    if (m.find("ImageStrategy") != m.end() && !m["ImageStrategy"].empty()) {
      imageStrategy = make_shared<string>(boost::any_cast<string>(m["ImageStrategy"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("RevealMarkdown") != m.end() && !m["RevealMarkdown"].empty()) {
      revealMarkdown = make_shared<bool>(boost::any_cast<bool>(m["RevealMarkdown"]));
    }
    if (m.find("UseUrlResponseBody") != m.end() && !m["UseUrlResponseBody"].empty()) {
      useUrlResponseBody = make_shared<bool>(boost::any_cast<bool>(m["UseUrlResponseBody"]));
    }
  }


  virtual ~SubmitDigitalDocStructureJobAdvanceRequest() = default;
};
class SubmitDigitalDocStructureJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> id{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  SubmitDigitalDocStructureJobResponseBody() {}

  explicit SubmitDigitalDocStructureJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~SubmitDigitalDocStructureJobResponseBody() = default;
};
class SubmitDigitalDocStructureJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitDigitalDocStructureJobResponseBody> body{};

  SubmitDigitalDocStructureJobResponse() {}

  explicit SubmitDigitalDocStructureJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitDigitalDocStructureJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitDigitalDocStructureJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitDigitalDocStructureJobResponse() = default;
};
class SubmitDocParserJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileNameExtension{};
  shared_ptr<string> fileUrl{};
  shared_ptr<bool> formulaEnhancement{};
  shared_ptr<bool> llmEnhancement{};
  shared_ptr<string> option{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> pageIndex{};

  SubmitDocParserJobRequest() {}

  explicit SubmitDocParserJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileNameExtension) {
      res["FileNameExtension"] = boost::any(*fileNameExtension);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (formulaEnhancement) {
      res["FormulaEnhancement"] = boost::any(*formulaEnhancement);
    }
    if (llmEnhancement) {
      res["LlmEnhancement"] = boost::any(*llmEnhancement);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileNameExtension") != m.end() && !m["FileNameExtension"].empty()) {
      fileNameExtension = make_shared<string>(boost::any_cast<string>(m["FileNameExtension"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("FormulaEnhancement") != m.end() && !m["FormulaEnhancement"].empty()) {
      formulaEnhancement = make_shared<bool>(boost::any_cast<bool>(m["FormulaEnhancement"]));
    }
    if (m.find("LlmEnhancement") != m.end() && !m["LlmEnhancement"].empty()) {
      llmEnhancement = make_shared<bool>(boost::any_cast<bool>(m["LlmEnhancement"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<string>(boost::any_cast<string>(m["PageIndex"]));
    }
  }


  virtual ~SubmitDocParserJobRequest() = default;
};
class SubmitDocParserJobAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileNameExtension{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<bool> formulaEnhancement{};
  shared_ptr<bool> llmEnhancement{};
  shared_ptr<string> option{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> pageIndex{};

  SubmitDocParserJobAdvanceRequest() {}

  explicit SubmitDocParserJobAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileNameExtension) {
      res["FileNameExtension"] = boost::any(*fileNameExtension);
    }
    if (fileUrlObject) {
      res["FileUrl"] = boost::any(*fileUrlObject);
    }
    if (formulaEnhancement) {
      res["FormulaEnhancement"] = boost::any(*formulaEnhancement);
    }
    if (llmEnhancement) {
      res["LlmEnhancement"] = boost::any(*llmEnhancement);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileNameExtension") != m.end() && !m["FileNameExtension"].empty()) {
      fileNameExtension = make_shared<string>(boost::any_cast<string>(m["FileNameExtension"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileUrl"]));
    }
    if (m.find("FormulaEnhancement") != m.end() && !m["FormulaEnhancement"].empty()) {
      formulaEnhancement = make_shared<bool>(boost::any_cast<bool>(m["FormulaEnhancement"]));
    }
    if (m.find("LlmEnhancement") != m.end() && !m["LlmEnhancement"].empty()) {
      llmEnhancement = make_shared<bool>(boost::any_cast<bool>(m["LlmEnhancement"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<string>(boost::any_cast<string>(m["PageIndex"]));
    }
  }


  virtual ~SubmitDocParserJobAdvanceRequest() = default;
};
class SubmitDocParserJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  SubmitDocParserJobResponseBodyData() {}

  explicit SubmitDocParserJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~SubmitDocParserJobResponseBodyData() = default;
};
class SubmitDocParserJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitDocParserJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitDocParserJobResponseBody() {}

  explicit SubmitDocParserJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitDocParserJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitDocParserJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitDocParserJobResponseBody() = default;
};
class SubmitDocParserJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitDocParserJobResponseBody> body{};

  SubmitDocParserJobResponse() {}

  explicit SubmitDocParserJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitDocParserJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitDocParserJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitDocParserJobResponse() = default;
};
class SubmitDocStructureJobRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allowPptFormat{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileNameExtension{};
  shared_ptr<string> fileUrl{};
  shared_ptr<bool> formulaEnhancement{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> pageIndex{};
  shared_ptr<string> structureType{};

  SubmitDocStructureJobRequest() {}

  explicit SubmitDocStructureJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowPptFormat) {
      res["AllowPptFormat"] = boost::any(*allowPptFormat);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileNameExtension) {
      res["FileNameExtension"] = boost::any(*fileNameExtension);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (formulaEnhancement) {
      res["FormulaEnhancement"] = boost::any(*formulaEnhancement);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (structureType) {
      res["StructureType"] = boost::any(*structureType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowPptFormat") != m.end() && !m["AllowPptFormat"].empty()) {
      allowPptFormat = make_shared<bool>(boost::any_cast<bool>(m["AllowPptFormat"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileNameExtension") != m.end() && !m["FileNameExtension"].empty()) {
      fileNameExtension = make_shared<string>(boost::any_cast<string>(m["FileNameExtension"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("FormulaEnhancement") != m.end() && !m["FormulaEnhancement"].empty()) {
      formulaEnhancement = make_shared<bool>(boost::any_cast<bool>(m["FormulaEnhancement"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<string>(boost::any_cast<string>(m["PageIndex"]));
    }
    if (m.find("StructureType") != m.end() && !m["StructureType"].empty()) {
      structureType = make_shared<string>(boost::any_cast<string>(m["StructureType"]));
    }
  }


  virtual ~SubmitDocStructureJobRequest() = default;
};
class SubmitDocStructureJobAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allowPptFormat{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileNameExtension{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<bool> formulaEnhancement{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> pageIndex{};
  shared_ptr<string> structureType{};

  SubmitDocStructureJobAdvanceRequest() {}

  explicit SubmitDocStructureJobAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowPptFormat) {
      res["AllowPptFormat"] = boost::any(*allowPptFormat);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileNameExtension) {
      res["FileNameExtension"] = boost::any(*fileNameExtension);
    }
    if (fileUrlObject) {
      res["FileUrl"] = boost::any(*fileUrlObject);
    }
    if (formulaEnhancement) {
      res["FormulaEnhancement"] = boost::any(*formulaEnhancement);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (structureType) {
      res["StructureType"] = boost::any(*structureType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowPptFormat") != m.end() && !m["AllowPptFormat"].empty()) {
      allowPptFormat = make_shared<bool>(boost::any_cast<bool>(m["AllowPptFormat"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileNameExtension") != m.end() && !m["FileNameExtension"].empty()) {
      fileNameExtension = make_shared<string>(boost::any_cast<string>(m["FileNameExtension"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileUrl"]));
    }
    if (m.find("FormulaEnhancement") != m.end() && !m["FormulaEnhancement"].empty()) {
      formulaEnhancement = make_shared<bool>(boost::any_cast<bool>(m["FormulaEnhancement"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<string>(boost::any_cast<string>(m["PageIndex"]));
    }
    if (m.find("StructureType") != m.end() && !m["StructureType"].empty()) {
      structureType = make_shared<string>(boost::any_cast<string>(m["StructureType"]));
    }
  }


  virtual ~SubmitDocStructureJobAdvanceRequest() = default;
};
class SubmitDocStructureJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  SubmitDocStructureJobResponseBodyData() {}

  explicit SubmitDocStructureJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~SubmitDocStructureJobResponseBodyData() = default;
};
class SubmitDocStructureJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitDocStructureJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitDocStructureJobResponseBody() {}

  explicit SubmitDocStructureJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitDocStructureJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitDocStructureJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitDocStructureJobResponseBody() = default;
};
class SubmitDocStructureJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitDocStructureJobResponseBody> body{};

  SubmitDocStructureJobResponse() {}

  explicit SubmitDocStructureJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitDocStructureJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitDocStructureJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitDocStructureJobResponse() = default;
};
class SubmitDocumentExtractJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileNameExtension{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitDocumentExtractJobRequest() {}

  explicit SubmitDocumentExtractJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileNameExtension) {
      res["FileNameExtension"] = boost::any(*fileNameExtension);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileNameExtension") != m.end() && !m["FileNameExtension"].empty()) {
      fileNameExtension = make_shared<string>(boost::any_cast<string>(m["FileNameExtension"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitDocumentExtractJobRequest() = default;
};
class SubmitDocumentExtractJobAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileNameExtension{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitDocumentExtractJobAdvanceRequest() {}

  explicit SubmitDocumentExtractJobAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileNameExtension) {
      res["FileNameExtension"] = boost::any(*fileNameExtension);
    }
    if (fileUrlObject) {
      res["FileUrl"] = boost::any(*fileUrlObject);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileNameExtension") != m.end() && !m["FileNameExtension"].empty()) {
      fileNameExtension = make_shared<string>(boost::any_cast<string>(m["FileNameExtension"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileUrl"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitDocumentExtractJobAdvanceRequest() = default;
};
class SubmitDocumentExtractJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  SubmitDocumentExtractJobResponseBodyData() {}

  explicit SubmitDocumentExtractJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~SubmitDocumentExtractJobResponseBodyData() = default;
};
class SubmitDocumentExtractJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitDocumentExtractJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitDocumentExtractJobResponseBody() {}

  explicit SubmitDocumentExtractJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitDocumentExtractJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitDocumentExtractJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitDocumentExtractJobResponseBody() = default;
};
class SubmitDocumentExtractJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitDocumentExtractJobResponseBody> body{};

  SubmitDocumentExtractJobResponse() {}

  explicit SubmitDocumentExtractJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitDocumentExtractJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitDocumentExtractJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitDocumentExtractJobResponse() = default;
};
class SubmitTableUnderstandingJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileNameExtension{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitTableUnderstandingJobRequest() {}

  explicit SubmitTableUnderstandingJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileNameExtension) {
      res["FileNameExtension"] = boost::any(*fileNameExtension);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileNameExtension") != m.end() && !m["FileNameExtension"].empty()) {
      fileNameExtension = make_shared<string>(boost::any_cast<string>(m["FileNameExtension"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitTableUnderstandingJobRequest() = default;
};
class SubmitTableUnderstandingJobAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileNameExtension{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};

  SubmitTableUnderstandingJobAdvanceRequest() {}

  explicit SubmitTableUnderstandingJobAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileNameExtension) {
      res["FileNameExtension"] = boost::any(*fileNameExtension);
    }
    if (fileUrlObject) {
      res["FileUrl"] = boost::any(*fileUrlObject);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileNameExtension") != m.end() && !m["FileNameExtension"].empty()) {
      fileNameExtension = make_shared<string>(boost::any_cast<string>(m["FileNameExtension"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileUrl"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
  }


  virtual ~SubmitTableUnderstandingJobAdvanceRequest() = default;
};
class SubmitTableUnderstandingJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  SubmitTableUnderstandingJobResponseBodyData() {}

  explicit SubmitTableUnderstandingJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~SubmitTableUnderstandingJobResponseBodyData() = default;
};
class SubmitTableUnderstandingJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitTableUnderstandingJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitTableUnderstandingJobResponseBody() {}

  explicit SubmitTableUnderstandingJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SubmitTableUnderstandingJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitTableUnderstandingJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitTableUnderstandingJobResponseBody() = default;
};
class SubmitTableUnderstandingJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitTableUnderstandingJobResponseBody> body{};

  SubmitTableUnderstandingJobResponse() {}

  explicit SubmitTableUnderstandingJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitTableUnderstandingJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitTableUnderstandingJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitTableUnderstandingJobResponse() = default;
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
  AyncTradeDocumentPackageExtractSmartAppResponse ayncTradeDocumentPackageExtractSmartAppWithOptions(shared_ptr<AyncTradeDocumentPackageExtractSmartAppRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AyncTradeDocumentPackageExtractSmartAppResponse ayncTradeDocumentPackageExtractSmartApp(shared_ptr<AyncTradeDocumentPackageExtractSmartAppRequest> request);
  GetDocParserResultResponse getDocParserResultWithOptions(shared_ptr<GetDocParserResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDocParserResultResponse getDocParserResult(shared_ptr<GetDocParserResultRequest> request);
  GetDocStructureResultResponse getDocStructureResultWithOptions(shared_ptr<GetDocStructureResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDocStructureResultResponse getDocStructureResult(shared_ptr<GetDocStructureResultRequest> request);
  GetDocumentCompareResultResponse getDocumentCompareResultWithOptions(shared_ptr<GetDocumentCompareResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDocumentCompareResultResponse getDocumentCompareResult(shared_ptr<GetDocumentCompareResultRequest> request);
  GetDocumentConvertResultResponse getDocumentConvertResultWithOptions(shared_ptr<GetDocumentConvertResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDocumentConvertResultResponse getDocumentConvertResult(shared_ptr<GetDocumentConvertResultRequest> request);
  GetDocumentExtractResultResponse getDocumentExtractResultWithOptions(shared_ptr<GetDocumentExtractResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDocumentExtractResultResponse getDocumentExtractResult(shared_ptr<GetDocumentExtractResultRequest> request);
  GetPageNumResponse getPageNumWithOptions(shared_ptr<GetPageNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPageNumResponse getPageNum(shared_ptr<GetPageNumRequest> request);
  GetTableUnderstandingResultResponse getTableUnderstandingResultWithOptions(shared_ptr<GetTableUnderstandingResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTableUnderstandingResultResponse getTableUnderstandingResult(shared_ptr<GetTableUnderstandingResultRequest> request);
  QueryDocParserStatusResponse queryDocParserStatusWithOptions(shared_ptr<QueryDocParserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDocParserStatusResponse queryDocParserStatus(shared_ptr<QueryDocParserStatusRequest> request);
  SubmitConvertImageToExcelJobResponse submitConvertImageToExcelJobWithOptions(shared_ptr<SubmitConvertImageToExcelJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitConvertImageToExcelJobResponse submitConvertImageToExcelJob(shared_ptr<SubmitConvertImageToExcelJobRequest> request);
  SubmitConvertImageToMarkdownJobResponse submitConvertImageToMarkdownJobWithOptions(shared_ptr<SubmitConvertImageToMarkdownJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitConvertImageToMarkdownJobResponse submitConvertImageToMarkdownJob(shared_ptr<SubmitConvertImageToMarkdownJobRequest> request);
  SubmitConvertImageToPdfJobResponse submitConvertImageToPdfJobWithOptions(shared_ptr<SubmitConvertImageToPdfJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitConvertImageToPdfJobResponse submitConvertImageToPdfJob(shared_ptr<SubmitConvertImageToPdfJobRequest> request);
  SubmitConvertImageToWordJobResponse submitConvertImageToWordJobWithOptions(shared_ptr<SubmitConvertImageToWordJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitConvertImageToWordJobResponse submitConvertImageToWordJob(shared_ptr<SubmitConvertImageToWordJobRequest> request);
  SubmitConvertPdfToExcelJobResponse submitConvertPdfToExcelJobWithOptions(shared_ptr<SubmitConvertPdfToExcelJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitConvertPdfToExcelJobResponse submitConvertPdfToExcelJob(shared_ptr<SubmitConvertPdfToExcelJobRequest> request);
  SubmitConvertPdfToExcelJobResponse submitConvertPdfToExcelJobAdvance(shared_ptr<SubmitConvertPdfToExcelJobAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitConvertPdfToImageJobResponse submitConvertPdfToImageJobWithOptions(shared_ptr<SubmitConvertPdfToImageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitConvertPdfToImageJobResponse submitConvertPdfToImageJob(shared_ptr<SubmitConvertPdfToImageJobRequest> request);
  SubmitConvertPdfToImageJobResponse submitConvertPdfToImageJobAdvance(shared_ptr<SubmitConvertPdfToImageJobAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitConvertPdfToMarkdownJobResponse submitConvertPdfToMarkdownJobWithOptions(shared_ptr<SubmitConvertPdfToMarkdownJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitConvertPdfToMarkdownJobResponse submitConvertPdfToMarkdownJob(shared_ptr<SubmitConvertPdfToMarkdownJobRequest> request);
  SubmitConvertPdfToMarkdownJobResponse submitConvertPdfToMarkdownJobAdvance(shared_ptr<SubmitConvertPdfToMarkdownJobAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitConvertPdfToWordJobResponse submitConvertPdfToWordJobWithOptions(shared_ptr<SubmitConvertPdfToWordJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitConvertPdfToWordJobResponse submitConvertPdfToWordJob(shared_ptr<SubmitConvertPdfToWordJobRequest> request);
  SubmitConvertPdfToWordJobResponse submitConvertPdfToWordJobAdvance(shared_ptr<SubmitConvertPdfToWordJobAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDigitalDocStructureJobResponse submitDigitalDocStructureJobWithOptions(shared_ptr<SubmitDigitalDocStructureJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDigitalDocStructureJobResponse submitDigitalDocStructureJob(shared_ptr<SubmitDigitalDocStructureJobRequest> request);
  SubmitDigitalDocStructureJobResponse submitDigitalDocStructureJobAdvance(shared_ptr<SubmitDigitalDocStructureJobAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDocParserJobResponse submitDocParserJobWithOptions(shared_ptr<SubmitDocParserJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDocParserJobResponse submitDocParserJob(shared_ptr<SubmitDocParserJobRequest> request);
  SubmitDocParserJobResponse submitDocParserJobAdvance(shared_ptr<SubmitDocParserJobAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDocStructureJobResponse submitDocStructureJobWithOptions(shared_ptr<SubmitDocStructureJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDocStructureJobResponse submitDocStructureJob(shared_ptr<SubmitDocStructureJobRequest> request);
  SubmitDocStructureJobResponse submitDocStructureJobAdvance(shared_ptr<SubmitDocStructureJobAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDocumentExtractJobResponse submitDocumentExtractJobWithOptions(shared_ptr<SubmitDocumentExtractJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDocumentExtractJobResponse submitDocumentExtractJob(shared_ptr<SubmitDocumentExtractJobRequest> request);
  SubmitDocumentExtractJobResponse submitDocumentExtractJobAdvance(shared_ptr<SubmitDocumentExtractJobAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitTableUnderstandingJobResponse submitTableUnderstandingJobWithOptions(shared_ptr<SubmitTableUnderstandingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitTableUnderstandingJobResponse submitTableUnderstandingJob(shared_ptr<SubmitTableUnderstandingJobRequest> request);
  SubmitTableUnderstandingJobResponse submitTableUnderstandingJobAdvance(shared_ptr<SubmitTableUnderstandingJobAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Docmind-api20220711

#endif
