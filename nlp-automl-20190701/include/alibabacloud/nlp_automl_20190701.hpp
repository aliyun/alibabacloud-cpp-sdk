// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_NLP-AUTOML20190701_H_
#define ALIBABACLOUD_NLP-AUTOML20190701_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Nlp-automl20190701 {
class AddMTInterveneWordRequest : public Darabonba::Model {
public:
  shared_ptr<string> packageId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> sourceText{};
  shared_ptr<string> targetText{};

  AddMTInterveneWordRequest() {}

  explicit AddMTInterveneWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (packageId) {
      res["PackageId"] = boost::any(*packageId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sourceText) {
      res["SourceText"] = boost::any(*sourceText);
    }
    if (targetText) {
      res["TargetText"] = boost::any(*targetText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PackageId") != m.end() && !m["PackageId"].empty()) {
      packageId = make_shared<string>(boost::any_cast<string>(m["PackageId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SourceText") != m.end() && !m["SourceText"].empty()) {
      sourceText = make_shared<string>(boost::any_cast<string>(m["SourceText"]));
    }
    if (m.find("TargetText") != m.end() && !m["TargetText"].empty()) {
      targetText = make_shared<string>(boost::any_cast<string>(m["TargetText"]));
    }
  }


  virtual ~AddMTInterveneWordRequest() = default;
};
class AddMTInterveneWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> wordId{};

  AddMTInterveneWordResponseBody() {}

  explicit AddMTInterveneWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (wordId) {
      res["WordId"] = boost::any(*wordId);
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
    if (m.find("WordId") != m.end() && !m["WordId"].empty()) {
      wordId = make_shared<long>(boost::any_cast<long>(m["WordId"]));
    }
  }


  virtual ~AddMTInterveneWordResponseBody() = default;
};
class AddMTInterveneWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddMTInterveneWordResponseBody> body{};

  AddMTInterveneWordResponse() {}

  explicit AddMTInterveneWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddMTInterveneWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddMTInterveneWordResponseBody>(model1);
      }
    }
  }


  virtual ~AddMTInterveneWordResponse() = default;
};
class GetPredictDocRequest : public Darabonba::Model {
public:
  shared_ptr<long> docId{};
  shared_ptr<string> product{};

  GetPredictDocRequest() {}

  explicit GetPredictDocRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["DocId"] = boost::any(*docId);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocId") != m.end() && !m["DocId"].empty()) {
      docId = make_shared<long>(boost::any_cast<long>(m["DocId"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
  }


  virtual ~GetPredictDocRequest() = default;
};
class GetPredictDocResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resultContent{};
  shared_ptr<long> status{};
  shared_ptr<string> XLIFFInfo{};

  GetPredictDocResponseBody() {}

  explicit GetPredictDocResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultContent) {
      res["ResultContent"] = boost::any(*resultContent);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (XLIFFInfo) {
      res["XLIFFInfo"] = boost::any(*XLIFFInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultContent") != m.end() && !m["ResultContent"].empty()) {
      resultContent = make_shared<string>(boost::any_cast<string>(m["ResultContent"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("XLIFFInfo") != m.end() && !m["XLIFFInfo"].empty()) {
      XLIFFInfo = make_shared<string>(boost::any_cast<string>(m["XLIFFInfo"]));
    }
  }


  virtual ~GetPredictDocResponseBody() = default;
};
class GetPredictDocResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPredictDocResponseBody> body{};

  GetPredictDocResponse() {}

  explicit GetPredictDocResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPredictDocResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPredictDocResponseBody>(model1);
      }
    }
  }


  virtual ~GetPredictDocResponse() = default;
};
class PredictMTModelByDocRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileContent{};
  shared_ptr<string> fileType{};
  shared_ptr<long> modelId{};
  shared_ptr<string> modelVersion{};
  shared_ptr<bool> needXLIFF{};

  PredictMTModelByDocRequest() {}

  explicit PredictMTModelByDocRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileContent) {
      res["FileContent"] = boost::any(*fileContent);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelVersion) {
      res["ModelVersion"] = boost::any(*modelVersion);
    }
    if (needXLIFF) {
      res["NeedXLIFF"] = boost::any(*needXLIFF);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileContent") != m.end() && !m["FileContent"].empty()) {
      fileContent = make_shared<string>(boost::any_cast<string>(m["FileContent"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
    if (m.find("ModelVersion") != m.end() && !m["ModelVersion"].empty()) {
      modelVersion = make_shared<string>(boost::any_cast<string>(m["ModelVersion"]));
    }
    if (m.find("NeedXLIFF") != m.end() && !m["NeedXLIFF"].empty()) {
      needXLIFF = make_shared<bool>(boost::any_cast<bool>(m["NeedXLIFF"]));
    }
  }


  virtual ~PredictMTModelByDocRequest() = default;
};
class PredictMTModelByDocResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<string> requestId{};

  PredictMTModelByDocResponseBody() {}

  explicit PredictMTModelByDocResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["DocId"] = boost::any(*docId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocId") != m.end() && !m["DocId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["DocId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PredictMTModelByDocResponseBody() = default;
};
class PredictMTModelByDocResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PredictMTModelByDocResponseBody> body{};

  PredictMTModelByDocResponse() {}

  explicit PredictMTModelByDocResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PredictMTModelByDocResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PredictMTModelByDocResponseBody>(model1);
      }
    }
  }


  virtual ~PredictMTModelByDocResponse() = default;
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
  AddMTInterveneWordResponse addMTInterveneWordWithOptions(shared_ptr<AddMTInterveneWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddMTInterveneWordResponse addMTInterveneWord(shared_ptr<AddMTInterveneWordRequest> request);
  GetPredictDocResponse getPredictDocWithOptions(shared_ptr<GetPredictDocRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPredictDocResponse getPredictDoc(shared_ptr<GetPredictDocRequest> request);
  PredictMTModelByDocResponse predictMTModelByDocWithOptions(shared_ptr<PredictMTModelByDocRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PredictMTModelByDocResponse predictMTModelByDoc(shared_ptr<PredictMTModelByDocRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Nlp-automl20190701

#endif
