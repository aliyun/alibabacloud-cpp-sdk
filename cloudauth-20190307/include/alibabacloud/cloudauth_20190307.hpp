// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDAUTH20190307_H_
#define ALIBABACLOUD_CLOUDAUTH20190307_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cloudauth20190307 {
class AIGCFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> faceContrastPicture{};
  shared_ptr<string> faceContrastPictureUrl{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<long> sceneId{};

  AIGCFaceVerifyRequest() {}

  explicit AIGCFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceContrastPicture) {
      res["FaceContrastPicture"] = boost::any(*faceContrastPicture);
    }
    if (faceContrastPictureUrl) {
      res["FaceContrastPictureUrl"] = boost::any(*faceContrastPictureUrl);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["OssObjectName"] = boost::any(*ossObjectName);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceContrastPicture") != m.end() && !m["FaceContrastPicture"].empty()) {
      faceContrastPicture = make_shared<string>(boost::any_cast<string>(m["FaceContrastPicture"]));
    }
    if (m.find("FaceContrastPictureUrl") != m.end() && !m["FaceContrastPictureUrl"].empty()) {
      faceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["FaceContrastPictureUrl"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssObjectName") != m.end() && !m["OssObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["OssObjectName"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
  }


  virtual ~AIGCFaceVerifyRequest() = default;
};
class AIGCFaceVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> result{};
  shared_ptr<string> score{};

  AIGCFaceVerifyResponseBodyResultObject() {}

  explicit AIGCFaceVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
  }


  virtual ~AIGCFaceVerifyResponseBodyResultObject() = default;
};
class AIGCFaceVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<AIGCFaceVerifyResponseBodyResultObject> resultObject{};

  AIGCFaceVerifyResponseBody() {}

  explicit AIGCFaceVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        AIGCFaceVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<AIGCFaceVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~AIGCFaceVerifyResponseBody() = default;
};
class AIGCFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AIGCFaceVerifyResponseBody> body{};

  AIGCFaceVerifyResponse() {}

  explicit AIGCFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AIGCFaceVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AIGCFaceVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~AIGCFaceVerifyResponse() = default;
};
class BankMetaVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> bankCard{};
  shared_ptr<string> identifyNum{};
  shared_ptr<string> identityType{};
  shared_ptr<string> mobile{};
  shared_ptr<string> paramType{};
  shared_ptr<string> productType{};
  shared_ptr<string> userName{};
  shared_ptr<string> verifyMode{};

  BankMetaVerifyRequest() {}

  explicit BankMetaVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bankCard) {
      res["BankCard"] = boost::any(*bankCard);
    }
    if (identifyNum) {
      res["IdentifyNum"] = boost::any(*identifyNum);
    }
    if (identityType) {
      res["IdentityType"] = boost::any(*identityType);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (verifyMode) {
      res["VerifyMode"] = boost::any(*verifyMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BankCard") != m.end() && !m["BankCard"].empty()) {
      bankCard = make_shared<string>(boost::any_cast<string>(m["BankCard"]));
    }
    if (m.find("IdentifyNum") != m.end() && !m["IdentifyNum"].empty()) {
      identifyNum = make_shared<string>(boost::any_cast<string>(m["IdentifyNum"]));
    }
    if (m.find("IdentityType") != m.end() && !m["IdentityType"].empty()) {
      identityType = make_shared<string>(boost::any_cast<string>(m["IdentityType"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("VerifyMode") != m.end() && !m["VerifyMode"].empty()) {
      verifyMode = make_shared<string>(boost::any_cast<string>(m["VerifyMode"]));
    }
  }


  virtual ~BankMetaVerifyRequest() = default;
};
class BankMetaVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> subCode{};

  BankMetaVerifyResponseBodyResultObject() {}

  explicit BankMetaVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
  }


  virtual ~BankMetaVerifyResponseBodyResultObject() = default;
};
class BankMetaVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<BankMetaVerifyResponseBodyResultObject> resultObject{};

  BankMetaVerifyResponseBody() {}

  explicit BankMetaVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        BankMetaVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<BankMetaVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~BankMetaVerifyResponseBody() = default;
};
class BankMetaVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BankMetaVerifyResponseBody> body{};

  BankMetaVerifyResponse() {}

  explicit BankMetaVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BankMetaVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BankMetaVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~BankMetaVerifyResponse() = default;
};
class CompareFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> crop{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> sourceCertifyId{};
  shared_ptr<string> sourceFaceContrastPicture{};
  shared_ptr<string> sourceFaceContrastPictureUrl{};
  shared_ptr<string> sourceOssBucketName{};
  shared_ptr<string> sourceOssObjectName{};
  shared_ptr<string> targetCertifyId{};
  shared_ptr<string> targetFaceContrastPicture{};
  shared_ptr<string> targetFaceContrastPictureUrl{};
  shared_ptr<string> targetOssBucketName{};
  shared_ptr<string> targetOssObjectName{};

  CompareFaceVerifyRequest() {}

  explicit CompareFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sourceCertifyId) {
      res["SourceCertifyId"] = boost::any(*sourceCertifyId);
    }
    if (sourceFaceContrastPicture) {
      res["SourceFaceContrastPicture"] = boost::any(*sourceFaceContrastPicture);
    }
    if (sourceFaceContrastPictureUrl) {
      res["SourceFaceContrastPictureUrl"] = boost::any(*sourceFaceContrastPictureUrl);
    }
    if (sourceOssBucketName) {
      res["SourceOssBucketName"] = boost::any(*sourceOssBucketName);
    }
    if (sourceOssObjectName) {
      res["SourceOssObjectName"] = boost::any(*sourceOssObjectName);
    }
    if (targetCertifyId) {
      res["TargetCertifyId"] = boost::any(*targetCertifyId);
    }
    if (targetFaceContrastPicture) {
      res["TargetFaceContrastPicture"] = boost::any(*targetFaceContrastPicture);
    }
    if (targetFaceContrastPictureUrl) {
      res["TargetFaceContrastPictureUrl"] = boost::any(*targetFaceContrastPictureUrl);
    }
    if (targetOssBucketName) {
      res["TargetOssBucketName"] = boost::any(*targetOssBucketName);
    }
    if (targetOssObjectName) {
      res["TargetOssObjectName"] = boost::any(*targetOssObjectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("SourceCertifyId") != m.end() && !m["SourceCertifyId"].empty()) {
      sourceCertifyId = make_shared<string>(boost::any_cast<string>(m["SourceCertifyId"]));
    }
    if (m.find("SourceFaceContrastPicture") != m.end() && !m["SourceFaceContrastPicture"].empty()) {
      sourceFaceContrastPicture = make_shared<string>(boost::any_cast<string>(m["SourceFaceContrastPicture"]));
    }
    if (m.find("SourceFaceContrastPictureUrl") != m.end() && !m["SourceFaceContrastPictureUrl"].empty()) {
      sourceFaceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["SourceFaceContrastPictureUrl"]));
    }
    if (m.find("SourceOssBucketName") != m.end() && !m["SourceOssBucketName"].empty()) {
      sourceOssBucketName = make_shared<string>(boost::any_cast<string>(m["SourceOssBucketName"]));
    }
    if (m.find("SourceOssObjectName") != m.end() && !m["SourceOssObjectName"].empty()) {
      sourceOssObjectName = make_shared<string>(boost::any_cast<string>(m["SourceOssObjectName"]));
    }
    if (m.find("TargetCertifyId") != m.end() && !m["TargetCertifyId"].empty()) {
      targetCertifyId = make_shared<string>(boost::any_cast<string>(m["TargetCertifyId"]));
    }
    if (m.find("TargetFaceContrastPicture") != m.end() && !m["TargetFaceContrastPicture"].empty()) {
      targetFaceContrastPicture = make_shared<string>(boost::any_cast<string>(m["TargetFaceContrastPicture"]));
    }
    if (m.find("TargetFaceContrastPictureUrl") != m.end() && !m["TargetFaceContrastPictureUrl"].empty()) {
      targetFaceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["TargetFaceContrastPictureUrl"]));
    }
    if (m.find("TargetOssBucketName") != m.end() && !m["TargetOssBucketName"].empty()) {
      targetOssBucketName = make_shared<string>(boost::any_cast<string>(m["TargetOssBucketName"]));
    }
    if (m.find("TargetOssObjectName") != m.end() && !m["TargetOssObjectName"].empty()) {
      targetOssObjectName = make_shared<string>(boost::any_cast<string>(m["TargetOssObjectName"]));
    }
  }


  virtual ~CompareFaceVerifyRequest() = default;
};
class CompareFaceVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> passed{};
  shared_ptr<double> verifyScore{};

  CompareFaceVerifyResponseBodyResultObject() {}

  explicit CompareFaceVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (verifyScore) {
      res["VerifyScore"] = boost::any(*verifyScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("VerifyScore") != m.end() && !m["VerifyScore"].empty()) {
      verifyScore = make_shared<double>(boost::any_cast<double>(m["VerifyScore"]));
    }
  }


  virtual ~CompareFaceVerifyResponseBodyResultObject() = default;
};
class CompareFaceVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CompareFaceVerifyResponseBodyResultObject> resultObject{};

  CompareFaceVerifyResponseBody() {}

  explicit CompareFaceVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        CompareFaceVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<CompareFaceVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~CompareFaceVerifyResponseBody() = default;
};
class CompareFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CompareFaceVerifyResponseBody> body{};

  CompareFaceVerifyResponse() {}

  explicit CompareFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CompareFaceVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CompareFaceVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~CompareFaceVerifyResponse() = default;
};
class CompareFacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceImageType{};
  shared_ptr<string> sourceImageValue{};
  shared_ptr<string> targetImageType{};
  shared_ptr<string> targetImageValue{};

  CompareFacesRequest() {}

  explicit CompareFacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceImageType) {
      res["SourceImageType"] = boost::any(*sourceImageType);
    }
    if (sourceImageValue) {
      res["SourceImageValue"] = boost::any(*sourceImageValue);
    }
    if (targetImageType) {
      res["TargetImageType"] = boost::any(*targetImageType);
    }
    if (targetImageValue) {
      res["TargetImageValue"] = boost::any(*targetImageValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceImageType") != m.end() && !m["SourceImageType"].empty()) {
      sourceImageType = make_shared<string>(boost::any_cast<string>(m["SourceImageType"]));
    }
    if (m.find("SourceImageValue") != m.end() && !m["SourceImageValue"].empty()) {
      sourceImageValue = make_shared<string>(boost::any_cast<string>(m["SourceImageValue"]));
    }
    if (m.find("TargetImageType") != m.end() && !m["TargetImageType"].empty()) {
      targetImageType = make_shared<string>(boost::any_cast<string>(m["TargetImageType"]));
    }
    if (m.find("TargetImageValue") != m.end() && !m["TargetImageValue"].empty()) {
      targetImageValue = make_shared<string>(boost::any_cast<string>(m["TargetImageValue"]));
    }
  }


  virtual ~CompareFacesRequest() = default;
};
class CompareFacesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> confidenceThresholds{};
  shared_ptr<double> similarityScore{};

  CompareFacesResponseBodyData() {}

  explicit CompareFacesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidenceThresholds) {
      res["ConfidenceThresholds"] = boost::any(*confidenceThresholds);
    }
    if (similarityScore) {
      res["SimilarityScore"] = boost::any(*similarityScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfidenceThresholds") != m.end() && !m["ConfidenceThresholds"].empty()) {
      confidenceThresholds = make_shared<string>(boost::any_cast<string>(m["ConfidenceThresholds"]));
    }
    if (m.find("SimilarityScore") != m.end() && !m["SimilarityScore"].empty()) {
      similarityScore = make_shared<double>(boost::any_cast<double>(m["SimilarityScore"]));
    }
  }


  virtual ~CompareFacesResponseBodyData() = default;
};
class CompareFacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CompareFacesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CompareFacesResponseBody() {}

  explicit CompareFacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CompareFacesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CompareFacesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CompareFacesResponseBody() = default;
};
class CompareFacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CompareFacesResponseBody> body{};

  CompareFacesResponse() {}

  explicit CompareFacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CompareFacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CompareFacesResponseBody>(model1);
      }
    }
  }


  virtual ~CompareFacesResponse() = default;
};
class ContrastFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> certName{};
  shared_ptr<string> certNo{};
  shared_ptr<string> certType{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> crop{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> encryptType{};
  shared_ptr<string> faceContrastFile{};
  shared_ptr<string> faceContrastPicture{};
  shared_ptr<string> faceContrastPictureUrl{};
  shared_ptr<string> ip{};
  shared_ptr<string> mobile{};
  shared_ptr<string> model{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> userId{};

  ContrastFaceVerifyRequest() {}

  explicit ContrastFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (faceContrastFile) {
      res["FaceContrastFile"] = boost::any(*faceContrastFile);
    }
    if (faceContrastPicture) {
      res["FaceContrastPicture"] = boost::any(*faceContrastPicture);
    }
    if (faceContrastPictureUrl) {
      res["FaceContrastPictureUrl"] = boost::any(*faceContrastPictureUrl);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["OssObjectName"] = boost::any(*ossObjectName);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<string>(boost::any_cast<string>(m["EncryptType"]));
    }
    if (m.find("FaceContrastFile") != m.end() && !m["FaceContrastFile"].empty()) {
      faceContrastFile = make_shared<string>(boost::any_cast<string>(m["FaceContrastFile"]));
    }
    if (m.find("FaceContrastPicture") != m.end() && !m["FaceContrastPicture"].empty()) {
      faceContrastPicture = make_shared<string>(boost::any_cast<string>(m["FaceContrastPicture"]));
    }
    if (m.find("FaceContrastPictureUrl") != m.end() && !m["FaceContrastPictureUrl"].empty()) {
      faceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["FaceContrastPictureUrl"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssObjectName") != m.end() && !m["OssObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["OssObjectName"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ContrastFaceVerifyRequest() = default;
};
class ContrastFaceVerifyAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> certName{};
  shared_ptr<string> certNo{};
  shared_ptr<string> certType{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> crop{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> encryptType{};
  shared_ptr<Darabonba::Stream> faceContrastFileObject{};
  shared_ptr<string> faceContrastPicture{};
  shared_ptr<string> faceContrastPictureUrl{};
  shared_ptr<string> ip{};
  shared_ptr<string> mobile{};
  shared_ptr<string> model{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> userId{};

  ContrastFaceVerifyAdvanceRequest() {}

  explicit ContrastFaceVerifyAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (faceContrastFileObject) {
      res["FaceContrastFile"] = boost::any(*faceContrastFileObject);
    }
    if (faceContrastPicture) {
      res["FaceContrastPicture"] = boost::any(*faceContrastPicture);
    }
    if (faceContrastPictureUrl) {
      res["FaceContrastPictureUrl"] = boost::any(*faceContrastPictureUrl);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["OssObjectName"] = boost::any(*ossObjectName);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<string>(boost::any_cast<string>(m["EncryptType"]));
    }
    if (m.find("FaceContrastFile") != m.end() && !m["FaceContrastFile"].empty()) {
      faceContrastFileObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FaceContrastFile"]));
    }
    if (m.find("FaceContrastPicture") != m.end() && !m["FaceContrastPicture"].empty()) {
      faceContrastPicture = make_shared<string>(boost::any_cast<string>(m["FaceContrastPicture"]));
    }
    if (m.find("FaceContrastPictureUrl") != m.end() && !m["FaceContrastPictureUrl"].empty()) {
      faceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["FaceContrastPictureUrl"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssObjectName") != m.end() && !m["OssObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["OssObjectName"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ContrastFaceVerifyAdvanceRequest() = default;
};
class ContrastFaceVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> identityInfo{};
  shared_ptr<string> materialInfo{};
  shared_ptr<string> passed{};
  shared_ptr<string> subCode{};

  ContrastFaceVerifyResponseBodyResultObject() {}

  explicit ContrastFaceVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (identityInfo) {
      res["IdentityInfo"] = boost::any(*identityInfo);
    }
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("IdentityInfo") != m.end() && !m["IdentityInfo"].empty()) {
      identityInfo = make_shared<string>(boost::any_cast<string>(m["IdentityInfo"]));
    }
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
  }


  virtual ~ContrastFaceVerifyResponseBodyResultObject() = default;
};
class ContrastFaceVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ContrastFaceVerifyResponseBodyResultObject> resultObject{};

  ContrastFaceVerifyResponseBody() {}

  explicit ContrastFaceVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        ContrastFaceVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<ContrastFaceVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~ContrastFaceVerifyResponseBody() = default;
};
class ContrastFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ContrastFaceVerifyResponseBody> body{};

  ContrastFaceVerifyResponse() {}

  explicit ContrastFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ContrastFaceVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ContrastFaceVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~ContrastFaceVerifyResponse() = default;
};
class CreateAuthKeyRequest : public Darabonba::Model {
public:
  shared_ptr<long> authYears{};
  shared_ptr<string> bizType{};
  shared_ptr<bool> test{};
  shared_ptr<string> userDeviceId{};

  CreateAuthKeyRequest() {}

  explicit CreateAuthKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authYears) {
      res["AuthYears"] = boost::any(*authYears);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (test) {
      res["Test"] = boost::any(*test);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthYears") != m.end() && !m["AuthYears"].empty()) {
      authYears = make_shared<long>(boost::any_cast<long>(m["AuthYears"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Test") != m.end() && !m["Test"].empty()) {
      test = make_shared<bool>(boost::any_cast<bool>(m["Test"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
  }


  virtual ~CreateAuthKeyRequest() = default;
};
class CreateAuthKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> requestId{};

  CreateAuthKeyResponseBody() {}

  explicit CreateAuthKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAuthKeyResponseBody() = default;
};
class CreateAuthKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAuthKeyResponseBody> body{};

  CreateAuthKeyResponse() {}

  explicit CreateAuthKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAuthKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAuthKeyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAuthKeyResponse() = default;
};
class CreateVerifySettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizName{};
  shared_ptr<string> bizType{};
  shared_ptr<bool> guideStep{};
  shared_ptr<bool> privacyStep{};
  shared_ptr<bool> resultStep{};
  shared_ptr<string> solution{};

  CreateVerifySettingRequest() {}

  explicit CreateVerifySettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (guideStep) {
      res["GuideStep"] = boost::any(*guideStep);
    }
    if (privacyStep) {
      res["PrivacyStep"] = boost::any(*privacyStep);
    }
    if (resultStep) {
      res["ResultStep"] = boost::any(*resultStep);
    }
    if (solution) {
      res["Solution"] = boost::any(*solution);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("GuideStep") != m.end() && !m["GuideStep"].empty()) {
      guideStep = make_shared<bool>(boost::any_cast<bool>(m["GuideStep"]));
    }
    if (m.find("PrivacyStep") != m.end() && !m["PrivacyStep"].empty()) {
      privacyStep = make_shared<bool>(boost::any_cast<bool>(m["PrivacyStep"]));
    }
    if (m.find("ResultStep") != m.end() && !m["ResultStep"].empty()) {
      resultStep = make_shared<bool>(boost::any_cast<bool>(m["ResultStep"]));
    }
    if (m.find("Solution") != m.end() && !m["Solution"].empty()) {
      solution = make_shared<string>(boost::any_cast<string>(m["Solution"]));
    }
  }


  virtual ~CreateVerifySettingRequest() = default;
};
class CreateVerifySettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bizName{};
  shared_ptr<string> bizType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> solution{};
  shared_ptr<vector<string>> stepList{};

  CreateVerifySettingResponseBody() {}

  explicit CreateVerifySettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (solution) {
      res["Solution"] = boost::any(*solution);
    }
    if (stepList) {
      res["StepList"] = boost::any(*stepList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Solution") != m.end() && !m["Solution"].empty()) {
      solution = make_shared<string>(boost::any_cast<string>(m["Solution"]));
    }
    if (m.find("StepList") != m.end() && !m["StepList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StepList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StepList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      stepList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateVerifySettingResponseBody() = default;
};
class CreateVerifySettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVerifySettingResponseBody> body{};

  CreateVerifySettingResponse() {}

  explicit CreateVerifySettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVerifySettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVerifySettingResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVerifySettingResponse() = default;
};
class CredentialVerifyRequestMerchantDetail : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CredentialVerifyRequestMerchantDetail() {}

  explicit CredentialVerifyRequestMerchantDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CredentialVerifyRequestMerchantDetail() = default;
};
class CredentialVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> certNum{};
  shared_ptr<string> credName{};
  shared_ptr<string> credType{};
  shared_ptr<string> identifyNum{};
  shared_ptr<string> imageContext{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> isCheck{};
  shared_ptr<string> isOCR{};
  shared_ptr<vector<CredentialVerifyRequestMerchantDetail>> merchantDetail{};
  shared_ptr<string> merchantId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> prompt{};
  shared_ptr<string> promptModel{};
  shared_ptr<string> userName{};

  CredentialVerifyRequest() {}

  explicit CredentialVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certNum) {
      res["CertNum"] = boost::any(*certNum);
    }
    if (credName) {
      res["CredName"] = boost::any(*credName);
    }
    if (credType) {
      res["CredType"] = boost::any(*credType);
    }
    if (identifyNum) {
      res["IdentifyNum"] = boost::any(*identifyNum);
    }
    if (imageContext) {
      res["ImageContext"] = boost::any(*imageContext);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (isCheck) {
      res["IsCheck"] = boost::any(*isCheck);
    }
    if (isOCR) {
      res["IsOCR"] = boost::any(*isOCR);
    }
    if (merchantDetail) {
      vector<boost::any> temp1;
      for(auto item1:*merchantDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MerchantDetail"] = boost::any(temp1);
    }
    if (merchantId) {
      res["MerchantId"] = boost::any(*merchantId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (promptModel) {
      res["PromptModel"] = boost::any(*promptModel);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertNum") != m.end() && !m["CertNum"].empty()) {
      certNum = make_shared<string>(boost::any_cast<string>(m["CertNum"]));
    }
    if (m.find("CredName") != m.end() && !m["CredName"].empty()) {
      credName = make_shared<string>(boost::any_cast<string>(m["CredName"]));
    }
    if (m.find("CredType") != m.end() && !m["CredType"].empty()) {
      credType = make_shared<string>(boost::any_cast<string>(m["CredType"]));
    }
    if (m.find("IdentifyNum") != m.end() && !m["IdentifyNum"].empty()) {
      identifyNum = make_shared<string>(boost::any_cast<string>(m["IdentifyNum"]));
    }
    if (m.find("ImageContext") != m.end() && !m["ImageContext"].empty()) {
      imageContext = make_shared<string>(boost::any_cast<string>(m["ImageContext"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("IsCheck") != m.end() && !m["IsCheck"].empty()) {
      isCheck = make_shared<string>(boost::any_cast<string>(m["IsCheck"]));
    }
    if (m.find("IsOCR") != m.end() && !m["IsOCR"].empty()) {
      isOCR = make_shared<string>(boost::any_cast<string>(m["IsOCR"]));
    }
    if (m.find("MerchantDetail") != m.end() && !m["MerchantDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["MerchantDetail"].type()) {
        vector<CredentialVerifyRequestMerchantDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MerchantDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CredentialVerifyRequestMerchantDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        merchantDetail = make_shared<vector<CredentialVerifyRequestMerchantDetail>>(expect1);
      }
    }
    if (m.find("MerchantId") != m.end() && !m["MerchantId"].empty()) {
      merchantId = make_shared<string>(boost::any_cast<string>(m["MerchantId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("PromptModel") != m.end() && !m["PromptModel"].empty()) {
      promptModel = make_shared<string>(boost::any_cast<string>(m["PromptModel"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CredentialVerifyRequest() = default;
};
class CredentialVerifyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> certNum{};
  shared_ptr<string> credName{};
  shared_ptr<string> credType{};
  shared_ptr<string> identifyNum{};
  shared_ptr<string> imageContext{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> isCheck{};
  shared_ptr<string> isOCR{};
  shared_ptr<string> merchantDetailShrink{};
  shared_ptr<string> merchantId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> prompt{};
  shared_ptr<string> promptModel{};
  shared_ptr<string> userName{};

  CredentialVerifyShrinkRequest() {}

  explicit CredentialVerifyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certNum) {
      res["CertNum"] = boost::any(*certNum);
    }
    if (credName) {
      res["CredName"] = boost::any(*credName);
    }
    if (credType) {
      res["CredType"] = boost::any(*credType);
    }
    if (identifyNum) {
      res["IdentifyNum"] = boost::any(*identifyNum);
    }
    if (imageContext) {
      res["ImageContext"] = boost::any(*imageContext);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (isCheck) {
      res["IsCheck"] = boost::any(*isCheck);
    }
    if (isOCR) {
      res["IsOCR"] = boost::any(*isOCR);
    }
    if (merchantDetailShrink) {
      res["MerchantDetail"] = boost::any(*merchantDetailShrink);
    }
    if (merchantId) {
      res["MerchantId"] = boost::any(*merchantId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (promptModel) {
      res["PromptModel"] = boost::any(*promptModel);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertNum") != m.end() && !m["CertNum"].empty()) {
      certNum = make_shared<string>(boost::any_cast<string>(m["CertNum"]));
    }
    if (m.find("CredName") != m.end() && !m["CredName"].empty()) {
      credName = make_shared<string>(boost::any_cast<string>(m["CredName"]));
    }
    if (m.find("CredType") != m.end() && !m["CredType"].empty()) {
      credType = make_shared<string>(boost::any_cast<string>(m["CredType"]));
    }
    if (m.find("IdentifyNum") != m.end() && !m["IdentifyNum"].empty()) {
      identifyNum = make_shared<string>(boost::any_cast<string>(m["IdentifyNum"]));
    }
    if (m.find("ImageContext") != m.end() && !m["ImageContext"].empty()) {
      imageContext = make_shared<string>(boost::any_cast<string>(m["ImageContext"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("IsCheck") != m.end() && !m["IsCheck"].empty()) {
      isCheck = make_shared<string>(boost::any_cast<string>(m["IsCheck"]));
    }
    if (m.find("IsOCR") != m.end() && !m["IsOCR"].empty()) {
      isOCR = make_shared<string>(boost::any_cast<string>(m["IsOCR"]));
    }
    if (m.find("MerchantDetail") != m.end() && !m["MerchantDetail"].empty()) {
      merchantDetailShrink = make_shared<string>(boost::any_cast<string>(m["MerchantDetail"]));
    }
    if (m.find("MerchantId") != m.end() && !m["MerchantId"].empty()) {
      merchantId = make_shared<string>(boost::any_cast<string>(m["MerchantId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("PromptModel") != m.end() && !m["PromptModel"].empty()) {
      promptModel = make_shared<string>(boost::any_cast<string>(m["PromptModel"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CredentialVerifyShrinkRequest() = default;
};
class CredentialVerifyResponseBodyResultObjectVlResult : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> vlContent{};

  CredentialVerifyResponseBodyResultObjectVlResult() {}

  explicit CredentialVerifyResponseBodyResultObjectVlResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (vlContent) {
      res["VlContent"] = boost::any(*vlContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("VlContent") != m.end() && !m["VlContent"].empty()) {
      vlContent = make_shared<string>(boost::any_cast<string>(m["VlContent"]));
    }
  }


  virtual ~CredentialVerifyResponseBodyResultObjectVlResult() = default;
};
class CredentialVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> materialInfo{};
  shared_ptr<string> ocrInfo{};
  shared_ptr<string> result{};
  shared_ptr<map<string, string>> riskScore{};
  shared_ptr<string> riskTag{};
  shared_ptr<string> verifyDetail{};
  shared_ptr<string> verifyResult{};
  shared_ptr<CredentialVerifyResponseBodyResultObjectVlResult> vlResult{};

  CredentialVerifyResponseBodyResultObject() {}

  explicit CredentialVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (ocrInfo) {
      res["OcrInfo"] = boost::any(*ocrInfo);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (riskScore) {
      res["RiskScore"] = boost::any(*riskScore);
    }
    if (riskTag) {
      res["RiskTag"] = boost::any(*riskTag);
    }
    if (verifyDetail) {
      res["VerifyDetail"] = boost::any(*verifyDetail);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    if (vlResult) {
      res["VlResult"] = vlResult ? boost::any(vlResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("OcrInfo") != m.end() && !m["OcrInfo"].empty()) {
      ocrInfo = make_shared<string>(boost::any_cast<string>(m["OcrInfo"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("RiskScore") != m.end() && !m["RiskScore"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["RiskScore"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      riskScore = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RiskTag") != m.end() && !m["RiskTag"].empty()) {
      riskTag = make_shared<string>(boost::any_cast<string>(m["RiskTag"]));
    }
    if (m.find("VerifyDetail") != m.end() && !m["VerifyDetail"].empty()) {
      verifyDetail = make_shared<string>(boost::any_cast<string>(m["VerifyDetail"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
    if (m.find("VlResult") != m.end() && !m["VlResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["VlResult"].type()) {
        CredentialVerifyResponseBodyResultObjectVlResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VlResult"]));
        vlResult = make_shared<CredentialVerifyResponseBodyResultObjectVlResult>(model1);
      }
    }
  }


  virtual ~CredentialVerifyResponseBodyResultObject() = default;
};
class CredentialVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CredentialVerifyResponseBodyResultObject> resultObject{};

  CredentialVerifyResponseBody() {}

  explicit CredentialVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        CredentialVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<CredentialVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~CredentialVerifyResponseBody() = default;
};
class CredentialVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CredentialVerifyResponseBody> body{};

  CredentialVerifyResponse() {}

  explicit CredentialVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CredentialVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CredentialVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~CredentialVerifyResponse() = default;
};
class CredentialVerifyV2RequestMerchantDetail : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CredentialVerifyV2RequestMerchantDetail() {}

  explicit CredentialVerifyV2RequestMerchantDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CredentialVerifyV2RequestMerchantDetail() = default;
};
class CredentialVerifyV2Request : public Darabonba::Model {
public:
  shared_ptr<string> certNum{};
  shared_ptr<string> credName{};
  shared_ptr<string> credType{};
  shared_ptr<string> identifyNum{};
  shared_ptr<string> imageFile{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> isCheck{};
  shared_ptr<string> isOcr{};
  shared_ptr<vector<CredentialVerifyV2RequestMerchantDetail>> merchantDetail{};
  shared_ptr<string> merchantId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> prompt{};
  shared_ptr<string> promptModel{};
  shared_ptr<string> userName{};

  CredentialVerifyV2Request() {}

  explicit CredentialVerifyV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certNum) {
      res["CertNum"] = boost::any(*certNum);
    }
    if (credName) {
      res["CredName"] = boost::any(*credName);
    }
    if (credType) {
      res["CredType"] = boost::any(*credType);
    }
    if (identifyNum) {
      res["IdentifyNum"] = boost::any(*identifyNum);
    }
    if (imageFile) {
      res["ImageFile"] = boost::any(*imageFile);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (isCheck) {
      res["IsCheck"] = boost::any(*isCheck);
    }
    if (isOcr) {
      res["IsOcr"] = boost::any(*isOcr);
    }
    if (merchantDetail) {
      vector<boost::any> temp1;
      for(auto item1:*merchantDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MerchantDetail"] = boost::any(temp1);
    }
    if (merchantId) {
      res["MerchantId"] = boost::any(*merchantId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (promptModel) {
      res["PromptModel"] = boost::any(*promptModel);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertNum") != m.end() && !m["CertNum"].empty()) {
      certNum = make_shared<string>(boost::any_cast<string>(m["CertNum"]));
    }
    if (m.find("CredName") != m.end() && !m["CredName"].empty()) {
      credName = make_shared<string>(boost::any_cast<string>(m["CredName"]));
    }
    if (m.find("CredType") != m.end() && !m["CredType"].empty()) {
      credType = make_shared<string>(boost::any_cast<string>(m["CredType"]));
    }
    if (m.find("IdentifyNum") != m.end() && !m["IdentifyNum"].empty()) {
      identifyNum = make_shared<string>(boost::any_cast<string>(m["IdentifyNum"]));
    }
    if (m.find("ImageFile") != m.end() && !m["ImageFile"].empty()) {
      imageFile = make_shared<string>(boost::any_cast<string>(m["ImageFile"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("IsCheck") != m.end() && !m["IsCheck"].empty()) {
      isCheck = make_shared<string>(boost::any_cast<string>(m["IsCheck"]));
    }
    if (m.find("IsOcr") != m.end() && !m["IsOcr"].empty()) {
      isOcr = make_shared<string>(boost::any_cast<string>(m["IsOcr"]));
    }
    if (m.find("MerchantDetail") != m.end() && !m["MerchantDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["MerchantDetail"].type()) {
        vector<CredentialVerifyV2RequestMerchantDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MerchantDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CredentialVerifyV2RequestMerchantDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        merchantDetail = make_shared<vector<CredentialVerifyV2RequestMerchantDetail>>(expect1);
      }
    }
    if (m.find("MerchantId") != m.end() && !m["MerchantId"].empty()) {
      merchantId = make_shared<string>(boost::any_cast<string>(m["MerchantId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("PromptModel") != m.end() && !m["PromptModel"].empty()) {
      promptModel = make_shared<string>(boost::any_cast<string>(m["PromptModel"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CredentialVerifyV2Request() = default;
};
class CredentialVerifyV2AdvanceRequestMerchantDetail : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CredentialVerifyV2AdvanceRequestMerchantDetail() {}

  explicit CredentialVerifyV2AdvanceRequestMerchantDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CredentialVerifyV2AdvanceRequestMerchantDetail() = default;
};
class CredentialVerifyV2AdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> certNum{};
  shared_ptr<string> credName{};
  shared_ptr<string> credType{};
  shared_ptr<string> identifyNum{};
  shared_ptr<Darabonba::Stream> imageFileObject{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> isCheck{};
  shared_ptr<string> isOcr{};
  shared_ptr<vector<CredentialVerifyV2AdvanceRequestMerchantDetail>> merchantDetail{};
  shared_ptr<string> merchantId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> prompt{};
  shared_ptr<string> promptModel{};
  shared_ptr<string> userName{};

  CredentialVerifyV2AdvanceRequest() {}

  explicit CredentialVerifyV2AdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certNum) {
      res["CertNum"] = boost::any(*certNum);
    }
    if (credName) {
      res["CredName"] = boost::any(*credName);
    }
    if (credType) {
      res["CredType"] = boost::any(*credType);
    }
    if (identifyNum) {
      res["IdentifyNum"] = boost::any(*identifyNum);
    }
    if (imageFileObject) {
      res["ImageFile"] = boost::any(*imageFileObject);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (isCheck) {
      res["IsCheck"] = boost::any(*isCheck);
    }
    if (isOcr) {
      res["IsOcr"] = boost::any(*isOcr);
    }
    if (merchantDetail) {
      vector<boost::any> temp1;
      for(auto item1:*merchantDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MerchantDetail"] = boost::any(temp1);
    }
    if (merchantId) {
      res["MerchantId"] = boost::any(*merchantId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (promptModel) {
      res["PromptModel"] = boost::any(*promptModel);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertNum") != m.end() && !m["CertNum"].empty()) {
      certNum = make_shared<string>(boost::any_cast<string>(m["CertNum"]));
    }
    if (m.find("CredName") != m.end() && !m["CredName"].empty()) {
      credName = make_shared<string>(boost::any_cast<string>(m["CredName"]));
    }
    if (m.find("CredType") != m.end() && !m["CredType"].empty()) {
      credType = make_shared<string>(boost::any_cast<string>(m["CredType"]));
    }
    if (m.find("IdentifyNum") != m.end() && !m["IdentifyNum"].empty()) {
      identifyNum = make_shared<string>(boost::any_cast<string>(m["IdentifyNum"]));
    }
    if (m.find("ImageFile") != m.end() && !m["ImageFile"].empty()) {
      imageFileObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageFile"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("IsCheck") != m.end() && !m["IsCheck"].empty()) {
      isCheck = make_shared<string>(boost::any_cast<string>(m["IsCheck"]));
    }
    if (m.find("IsOcr") != m.end() && !m["IsOcr"].empty()) {
      isOcr = make_shared<string>(boost::any_cast<string>(m["IsOcr"]));
    }
    if (m.find("MerchantDetail") != m.end() && !m["MerchantDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["MerchantDetail"].type()) {
        vector<CredentialVerifyV2AdvanceRequestMerchantDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MerchantDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CredentialVerifyV2AdvanceRequestMerchantDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        merchantDetail = make_shared<vector<CredentialVerifyV2AdvanceRequestMerchantDetail>>(expect1);
      }
    }
    if (m.find("MerchantId") != m.end() && !m["MerchantId"].empty()) {
      merchantId = make_shared<string>(boost::any_cast<string>(m["MerchantId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("PromptModel") != m.end() && !m["PromptModel"].empty()) {
      promptModel = make_shared<string>(boost::any_cast<string>(m["PromptModel"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CredentialVerifyV2AdvanceRequest() = default;
};
class CredentialVerifyV2ShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> certNum{};
  shared_ptr<string> credName{};
  shared_ptr<string> credType{};
  shared_ptr<string> identifyNum{};
  shared_ptr<string> imageFile{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> isCheck{};
  shared_ptr<string> isOcr{};
  shared_ptr<string> merchantDetailShrink{};
  shared_ptr<string> merchantId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> prompt{};
  shared_ptr<string> promptModel{};
  shared_ptr<string> userName{};

  CredentialVerifyV2ShrinkRequest() {}

  explicit CredentialVerifyV2ShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certNum) {
      res["CertNum"] = boost::any(*certNum);
    }
    if (credName) {
      res["CredName"] = boost::any(*credName);
    }
    if (credType) {
      res["CredType"] = boost::any(*credType);
    }
    if (identifyNum) {
      res["IdentifyNum"] = boost::any(*identifyNum);
    }
    if (imageFile) {
      res["ImageFile"] = boost::any(*imageFile);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (isCheck) {
      res["IsCheck"] = boost::any(*isCheck);
    }
    if (isOcr) {
      res["IsOcr"] = boost::any(*isOcr);
    }
    if (merchantDetailShrink) {
      res["MerchantDetail"] = boost::any(*merchantDetailShrink);
    }
    if (merchantId) {
      res["MerchantId"] = boost::any(*merchantId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (promptModel) {
      res["PromptModel"] = boost::any(*promptModel);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertNum") != m.end() && !m["CertNum"].empty()) {
      certNum = make_shared<string>(boost::any_cast<string>(m["CertNum"]));
    }
    if (m.find("CredName") != m.end() && !m["CredName"].empty()) {
      credName = make_shared<string>(boost::any_cast<string>(m["CredName"]));
    }
    if (m.find("CredType") != m.end() && !m["CredType"].empty()) {
      credType = make_shared<string>(boost::any_cast<string>(m["CredType"]));
    }
    if (m.find("IdentifyNum") != m.end() && !m["IdentifyNum"].empty()) {
      identifyNum = make_shared<string>(boost::any_cast<string>(m["IdentifyNum"]));
    }
    if (m.find("ImageFile") != m.end() && !m["ImageFile"].empty()) {
      imageFile = make_shared<string>(boost::any_cast<string>(m["ImageFile"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("IsCheck") != m.end() && !m["IsCheck"].empty()) {
      isCheck = make_shared<string>(boost::any_cast<string>(m["IsCheck"]));
    }
    if (m.find("IsOcr") != m.end() && !m["IsOcr"].empty()) {
      isOcr = make_shared<string>(boost::any_cast<string>(m["IsOcr"]));
    }
    if (m.find("MerchantDetail") != m.end() && !m["MerchantDetail"].empty()) {
      merchantDetailShrink = make_shared<string>(boost::any_cast<string>(m["MerchantDetail"]));
    }
    if (m.find("MerchantId") != m.end() && !m["MerchantId"].empty()) {
      merchantId = make_shared<string>(boost::any_cast<string>(m["MerchantId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("PromptModel") != m.end() && !m["PromptModel"].empty()) {
      promptModel = make_shared<string>(boost::any_cast<string>(m["PromptModel"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CredentialVerifyV2ShrinkRequest() = default;
};
class CredentialVerifyV2ResponseBodyResultObjectVlResult : public Darabonba::Model {
public:
  shared_ptr<bool> success{};
  shared_ptr<string> vlContent{};

  CredentialVerifyV2ResponseBodyResultObjectVlResult() {}

  explicit CredentialVerifyV2ResponseBodyResultObjectVlResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (vlContent) {
      res["VlContent"] = boost::any(*vlContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("VlContent") != m.end() && !m["VlContent"].empty()) {
      vlContent = make_shared<string>(boost::any_cast<string>(m["VlContent"]));
    }
  }


  virtual ~CredentialVerifyV2ResponseBodyResultObjectVlResult() = default;
};
class CredentialVerifyV2ResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> materialInfo{};
  shared_ptr<string> ocrInfo{};
  shared_ptr<string> result{};
  shared_ptr<map<string, string>> riskScore{};
  shared_ptr<string> riskTag{};
  shared_ptr<string> verifyDetail{};
  shared_ptr<string> verifyResult{};
  shared_ptr<CredentialVerifyV2ResponseBodyResultObjectVlResult> vlResult{};

  CredentialVerifyV2ResponseBodyResultObject() {}

  explicit CredentialVerifyV2ResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (ocrInfo) {
      res["OcrInfo"] = boost::any(*ocrInfo);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (riskScore) {
      res["RiskScore"] = boost::any(*riskScore);
    }
    if (riskTag) {
      res["RiskTag"] = boost::any(*riskTag);
    }
    if (verifyDetail) {
      res["VerifyDetail"] = boost::any(*verifyDetail);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    if (vlResult) {
      res["VlResult"] = vlResult ? boost::any(vlResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("OcrInfo") != m.end() && !m["OcrInfo"].empty()) {
      ocrInfo = make_shared<string>(boost::any_cast<string>(m["OcrInfo"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("RiskScore") != m.end() && !m["RiskScore"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["RiskScore"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      riskScore = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RiskTag") != m.end() && !m["RiskTag"].empty()) {
      riskTag = make_shared<string>(boost::any_cast<string>(m["RiskTag"]));
    }
    if (m.find("VerifyDetail") != m.end() && !m["VerifyDetail"].empty()) {
      verifyDetail = make_shared<string>(boost::any_cast<string>(m["VerifyDetail"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
    if (m.find("VlResult") != m.end() && !m["VlResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["VlResult"].type()) {
        CredentialVerifyV2ResponseBodyResultObjectVlResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VlResult"]));
        vlResult = make_shared<CredentialVerifyV2ResponseBodyResultObjectVlResult>(model1);
      }
    }
  }


  virtual ~CredentialVerifyV2ResponseBodyResultObject() = default;
};
class CredentialVerifyV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CredentialVerifyV2ResponseBodyResultObject> resultObject{};

  CredentialVerifyV2ResponseBody() {}

  explicit CredentialVerifyV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        CredentialVerifyV2ResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<CredentialVerifyV2ResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~CredentialVerifyV2ResponseBody() = default;
};
class CredentialVerifyV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CredentialVerifyV2ResponseBody> body{};

  CredentialVerifyV2Response() {}

  explicit CredentialVerifyV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CredentialVerifyV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CredentialVerifyV2ResponseBody>(model1);
      }
    }
  }


  virtual ~CredentialVerifyV2Response() = default;
};
class DeepfakeDetectRequest : public Darabonba::Model {
public:
  shared_ptr<string> faceBase64{};
  shared_ptr<string> faceInputType{};
  shared_ptr<string> faceUrl{};
  shared_ptr<string> outerOrderNo{};

  DeepfakeDetectRequest() {}

  explicit DeepfakeDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceBase64) {
      res["FaceBase64"] = boost::any(*faceBase64);
    }
    if (faceInputType) {
      res["FaceInputType"] = boost::any(*faceInputType);
    }
    if (faceUrl) {
      res["FaceUrl"] = boost::any(*faceUrl);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceBase64") != m.end() && !m["FaceBase64"].empty()) {
      faceBase64 = make_shared<string>(boost::any_cast<string>(m["FaceBase64"]));
    }
    if (m.find("FaceInputType") != m.end() && !m["FaceInputType"].empty()) {
      faceInputType = make_shared<string>(boost::any_cast<string>(m["FaceInputType"]));
    }
    if (m.find("FaceUrl") != m.end() && !m["FaceUrl"].empty()) {
      faceUrl = make_shared<string>(boost::any_cast<string>(m["FaceUrl"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
  }


  virtual ~DeepfakeDetectRequest() = default;
};
class DeepfakeDetectResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> result{};
  shared_ptr<map<string, string>> riskScore{};
  shared_ptr<string> riskTag{};

  DeepfakeDetectResponseBodyResultObject() {}

  explicit DeepfakeDetectResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (riskScore) {
      res["RiskScore"] = boost::any(*riskScore);
    }
    if (riskTag) {
      res["RiskTag"] = boost::any(*riskTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("RiskScore") != m.end() && !m["RiskScore"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["RiskScore"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      riskScore = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RiskTag") != m.end() && !m["RiskTag"].empty()) {
      riskTag = make_shared<string>(boost::any_cast<string>(m["RiskTag"]));
    }
  }


  virtual ~DeepfakeDetectResponseBodyResultObject() = default;
};
class DeepfakeDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DeepfakeDetectResponseBodyResultObject> resultObject{};

  DeepfakeDetectResponseBody() {}

  explicit DeepfakeDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        DeepfakeDetectResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<DeepfakeDetectResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~DeepfakeDetectResponseBody() = default;
};
class DeepfakeDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeepfakeDetectResponseBody> body{};

  DeepfakeDetectResponse() {}

  explicit DeepfakeDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeepfakeDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeepfakeDetectResponseBody>(model1);
      }
    }
  }


  virtual ~DeepfakeDetectResponse() = default;
};
class DeleteFaceVerifyResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> deleteAfterQuery{};

  DeleteFaceVerifyResultRequest() {}

  explicit DeleteFaceVerifyResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (deleteAfterQuery) {
      res["DeleteAfterQuery"] = boost::any(*deleteAfterQuery);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("DeleteAfterQuery") != m.end() && !m["DeleteAfterQuery"].empty()) {
      deleteAfterQuery = make_shared<string>(boost::any_cast<string>(m["DeleteAfterQuery"]));
    }
  }


  virtual ~DeleteFaceVerifyResultRequest() = default;
};
class DeleteFaceVerifyResultResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> deleteResult{};
  shared_ptr<string> failReason{};

  DeleteFaceVerifyResultResponseBodyResultObject() {}

  explicit DeleteFaceVerifyResultResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (deleteResult) {
      res["DeleteResult"] = boost::any(*deleteResult);
    }
    if (failReason) {
      res["FailReason"] = boost::any(*failReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("DeleteResult") != m.end() && !m["DeleteResult"].empty()) {
      deleteResult = make_shared<string>(boost::any_cast<string>(m["DeleteResult"]));
    }
    if (m.find("FailReason") != m.end() && !m["FailReason"].empty()) {
      failReason = make_shared<string>(boost::any_cast<string>(m["FailReason"]));
    }
  }


  virtual ~DeleteFaceVerifyResultResponseBodyResultObject() = default;
};
class DeleteFaceVerifyResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DeleteFaceVerifyResultResponseBodyResultObject> resultObject{};

  DeleteFaceVerifyResultResponseBody() {}

  explicit DeleteFaceVerifyResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        DeleteFaceVerifyResultResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<DeleteFaceVerifyResultResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~DeleteFaceVerifyResultResponseBody() = default;
};
class DeleteFaceVerifyResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFaceVerifyResultResponseBody> body{};

  DeleteFaceVerifyResultResponse() {}

  explicit DeleteFaceVerifyResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFaceVerifyResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFaceVerifyResultResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFaceVerifyResultResponse() = default;
};
class DescribeDeviceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> expiredEndDay{};
  shared_ptr<string> expiredStartDay{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> userDeviceId{};

  DescribeDeviceInfoRequest() {}

  explicit DescribeDeviceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (expiredEndDay) {
      res["ExpiredEndDay"] = boost::any(*expiredEndDay);
    }
    if (expiredStartDay) {
      res["ExpiredStartDay"] = boost::any(*expiredStartDay);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("ExpiredEndDay") != m.end() && !m["ExpiredEndDay"].empty()) {
      expiredEndDay = make_shared<string>(boost::any_cast<string>(m["ExpiredEndDay"]));
    }
    if (m.find("ExpiredStartDay") != m.end() && !m["ExpiredStartDay"].empty()) {
      expiredStartDay = make_shared<string>(boost::any_cast<string>(m["ExpiredStartDay"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
  }


  virtual ~DescribeDeviceInfoRequest() = default;
};
class DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> beginDay{};
  shared_ptr<string> bizType{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> expiredDay{};
  shared_ptr<string> userDeviceId{};

  DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo() {}

  explicit DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginDay) {
      res["BeginDay"] = boost::any(*beginDay);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (expiredDay) {
      res["ExpiredDay"] = boost::any(*expiredDay);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginDay") != m.end() && !m["BeginDay"].empty()) {
      beginDay = make_shared<string>(boost::any_cast<string>(m["BeginDay"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("ExpiredDay") != m.end() && !m["ExpiredDay"].empty()) {
      expiredDay = make_shared<string>(boost::any_cast<string>(m["ExpiredDay"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
  }


  virtual ~DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo() = default;
};
class DescribeDeviceInfoResponseBodyDeviceInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo>> deviceInfo{};

  DescribeDeviceInfoResponseBodyDeviceInfoList() {}

  explicit DescribeDeviceInfoResponseBodyDeviceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*deviceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceInfo"].type()) {
        vector<DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceInfo = make_shared<vector<DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeDeviceInfoResponseBodyDeviceInfoList() = default;
};
class DescribeDeviceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<DescribeDeviceInfoResponseBodyDeviceInfoList> deviceInfoList{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDeviceInfoResponseBody() {}

  explicit DescribeDeviceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (deviceInfoList) {
      res["DeviceInfoList"] = deviceInfoList ? boost::any(deviceInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DeviceInfoList") != m.end() && !m["DeviceInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfoList"].type()) {
        DescribeDeviceInfoResponseBodyDeviceInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfoList"]));
        deviceInfoList = make_shared<DescribeDeviceInfoResponseBodyDeviceInfoList>(model1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDeviceInfoResponseBody() = default;
};
class DescribeDeviceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDeviceInfoResponseBody> body{};

  DescribeDeviceInfoResponse() {}

  explicit DescribeDeviceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDeviceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDeviceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDeviceInfoResponse() = default;
};
class DescribeFaceGuardRiskRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};

  DescribeFaceGuardRiskRequest() {}

  explicit DescribeFaceGuardRiskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~DescribeFaceGuardRiskRequest() = default;
};
class DescribeFaceGuardRiskResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> riskExtends{};
  shared_ptr<string> riskTags{};

  DescribeFaceGuardRiskResponseBodyResultObject() {}

  explicit DescribeFaceGuardRiskResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (riskExtends) {
      res["RiskExtends"] = boost::any(*riskExtends);
    }
    if (riskTags) {
      res["RiskTags"] = boost::any(*riskTags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("RiskExtends") != m.end() && !m["RiskExtends"].empty()) {
      riskExtends = make_shared<string>(boost::any_cast<string>(m["RiskExtends"]));
    }
    if (m.find("RiskTags") != m.end() && !m["RiskTags"].empty()) {
      riskTags = make_shared<string>(boost::any_cast<string>(m["RiskTags"]));
    }
  }


  virtual ~DescribeFaceGuardRiskResponseBodyResultObject() = default;
};
class DescribeFaceGuardRiskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeFaceGuardRiskResponseBodyResultObject> resultObject{};

  DescribeFaceGuardRiskResponseBody() {}

  explicit DescribeFaceGuardRiskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        DescribeFaceGuardRiskResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<DescribeFaceGuardRiskResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~DescribeFaceGuardRiskResponseBody() = default;
};
class DescribeFaceGuardRiskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFaceGuardRiskResponseBody> body{};

  DescribeFaceGuardRiskResponse() {}

  explicit DescribeFaceGuardRiskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFaceGuardRiskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFaceGuardRiskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFaceGuardRiskResponse() = default;
};
class DescribeFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> pictureReturnType{};
  shared_ptr<long> sceneId{};

  DescribeFaceVerifyRequest() {}

  explicit DescribeFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (pictureReturnType) {
      res["PictureReturnType"] = boost::any(*pictureReturnType);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("PictureReturnType") != m.end() && !m["PictureReturnType"].empty()) {
      pictureReturnType = make_shared<string>(boost::any_cast<string>(m["PictureReturnType"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
  }


  virtual ~DescribeFaceVerifyRequest() = default;
};
class DescribeFaceVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> deviceRisk{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> identityInfo{};
  shared_ptr<string> materialInfo{};
  shared_ptr<string> passed{};
  shared_ptr<string> subCode{};
  shared_ptr<string> success{};
  shared_ptr<string> userInfo{};

  DescribeFaceVerifyResponseBodyResultObject() {}

  explicit DescribeFaceVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceRisk) {
      res["DeviceRisk"] = boost::any(*deviceRisk);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (identityInfo) {
      res["IdentityInfo"] = boost::any(*identityInfo);
    }
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (userInfo) {
      res["UserInfo"] = boost::any(*userInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceRisk") != m.end() && !m["DeviceRisk"].empty()) {
      deviceRisk = make_shared<string>(boost::any_cast<string>(m["DeviceRisk"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("IdentityInfo") != m.end() && !m["IdentityInfo"].empty()) {
      identityInfo = make_shared<string>(boost::any_cast<string>(m["IdentityInfo"]));
    }
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfo = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~DescribeFaceVerifyResponseBodyResultObject() = default;
};
class DescribeFaceVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeFaceVerifyResponseBodyResultObject> resultObject{};

  DescribeFaceVerifyResponseBody() {}

  explicit DescribeFaceVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        DescribeFaceVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<DescribeFaceVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~DescribeFaceVerifyResponseBody() = default;
};
class DescribeFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFaceVerifyResponseBody> body{};

  DescribeFaceVerifyResponse() {}

  explicit DescribeFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFaceVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFaceVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFaceVerifyResponse() = default;
};
class DescribeOssUploadTokenResponseBodyOssUploadToken : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> endPoint{};
  shared_ptr<long> expired{};
  shared_ptr<string> key{};
  shared_ptr<string> path{};
  shared_ptr<string> secret{};
  shared_ptr<string> token{};

  DescribeOssUploadTokenResponseBodyOssUploadToken() {}

  explicit DescribeOssUploadTokenResponseBodyOssUploadToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (secret) {
      res["Secret"] = boost::any(*secret);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<long>(boost::any_cast<long>(m["Expired"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Secret") != m.end() && !m["Secret"].empty()) {
      secret = make_shared<string>(boost::any_cast<string>(m["Secret"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~DescribeOssUploadTokenResponseBodyOssUploadToken() = default;
};
class DescribeOssUploadTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeOssUploadTokenResponseBodyOssUploadToken> ossUploadToken{};
  shared_ptr<string> requestId{};

  DescribeOssUploadTokenResponseBody() {}

  explicit DescribeOssUploadTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossUploadToken) {
      res["OssUploadToken"] = ossUploadToken ? boost::any(ossUploadToken->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OssUploadToken") != m.end() && !m["OssUploadToken"].empty()) {
      if (typeid(map<string, boost::any>) == m["OssUploadToken"].type()) {
        DescribeOssUploadTokenResponseBodyOssUploadToken model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OssUploadToken"]));
        ossUploadToken = make_shared<DescribeOssUploadTokenResponseBodyOssUploadToken>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeOssUploadTokenResponseBody() = default;
};
class DescribeOssUploadTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOssUploadTokenResponseBody> body{};

  DescribeOssUploadTokenResponse() {}

  explicit DescribeOssUploadTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOssUploadTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOssUploadTokenResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOssUploadTokenResponse() = default;
};
class DescribePageFaceVerifyDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productCode{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> startDate{};

  DescribePageFaceVerifyDataRequest() {}

  explicit DescribePageFaceVerifyDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~DescribePageFaceVerifyDataRequest() = default;
};
class DescribePageFaceVerifyDataResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<string> productCode{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> successCount{};
  shared_ptr<string> totalCount{};

  DescribePageFaceVerifyDataResponseBodyItems() {}

  explicit DescribePageFaceVerifyDataResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<string>(boost::any_cast<string>(m["SuccessCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~DescribePageFaceVerifyDataResponseBodyItems() = default;
};
class DescribePageFaceVerifyDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> currentPage{};
  shared_ptr<vector<DescribePageFaceVerifyDataResponseBodyItems>> items{};
  shared_ptr<string> message{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<string> totalCount{};
  shared_ptr<string> totalPage{};

  DescribePageFaceVerifyDataResponseBody() {}

  explicit DescribePageFaceVerifyDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribePageFaceVerifyDataResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePageFaceVerifyDataResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribePageFaceVerifyDataResponseBodyItems>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<string>(boost::any_cast<string>(m["TotalPage"]));
    }
  }


  virtual ~DescribePageFaceVerifyDataResponseBody() = default;
};
class DescribePageFaceVerifyDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePageFaceVerifyDataResponseBody> body{};

  DescribePageFaceVerifyDataResponse() {}

  explicit DescribePageFaceVerifyDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePageFaceVerifyDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePageFaceVerifyDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePageFaceVerifyDataResponse() = default;
};
class DescribeSmartStatisticsPageListRequest : public Darabonba::Model {
public:
  shared_ptr<string> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> sceneId{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> startDate{};

  DescribeSmartStatisticsPageListRequest() {}

  explicit DescribeSmartStatisticsPageListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["SceneId"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~DescribeSmartStatisticsPageListRequest() = default;
};
class DescribeSmartStatisticsPageListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<string> passRate{};
  shared_ptr<string> productCode{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> sceneName{};
  shared_ptr<long> successCount{};
  shared_ptr<long> totalCount{};

  DescribeSmartStatisticsPageListResponseBodyItems() {}

  explicit DescribeSmartStatisticsPageListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (passRate) {
      res["PassRate"] = boost::any(*passRate);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("PassRate") != m.end() && !m["PassRate"].empty()) {
      passRate = make_shared<string>(boost::any_cast<string>(m["PassRate"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeSmartStatisticsPageListResponseBodyItems() = default;
};
class DescribeSmartStatisticsPageListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeSmartStatisticsPageListResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  DescribeSmartStatisticsPageListResponseBody() {}

  explicit DescribeSmartStatisticsPageListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeSmartStatisticsPageListResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSmartStatisticsPageListResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeSmartStatisticsPageListResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeSmartStatisticsPageListResponseBody() = default;
};
class DescribeSmartStatisticsPageListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSmartStatisticsPageListResponseBody> body{};

  DescribeSmartStatisticsPageListResponse() {}

  explicit DescribeSmartStatisticsPageListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSmartStatisticsPageListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSmartStatisticsPageListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSmartStatisticsPageListResponse() = default;
};
class DescribeVerifyResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> bizType{};

  DescribeVerifyResultRequest() {}

  explicit DescribeVerifyResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
  }


  virtual ~DescribeVerifyResultRequest() = default;
};
class DescribeVerifyResultResponseBodyMaterialIdCardInfo : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> authority{};
  shared_ptr<string> backImageUrl{};
  shared_ptr<string> birth{};
  shared_ptr<string> endDate{};
  shared_ptr<string> frontImageUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> nationality{};
  shared_ptr<string> number{};
  shared_ptr<string> startDate{};

  DescribeVerifyResultResponseBodyMaterialIdCardInfo() {}

  explicit DescribeVerifyResultResponseBodyMaterialIdCardInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (authority) {
      res["Authority"] = boost::any(*authority);
    }
    if (backImageUrl) {
      res["BackImageUrl"] = boost::any(*backImageUrl);
    }
    if (birth) {
      res["Birth"] = boost::any(*birth);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (frontImageUrl) {
      res["FrontImageUrl"] = boost::any(*frontImageUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Authority") != m.end() && !m["Authority"].empty()) {
      authority = make_shared<string>(boost::any_cast<string>(m["Authority"]));
    }
    if (m.find("BackImageUrl") != m.end() && !m["BackImageUrl"].empty()) {
      backImageUrl = make_shared<string>(boost::any_cast<string>(m["BackImageUrl"]));
    }
    if (m.find("Birth") != m.end() && !m["Birth"].empty()) {
      birth = make_shared<string>(boost::any_cast<string>(m["Birth"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("FrontImageUrl") != m.end() && !m["FrontImageUrl"].empty()) {
      frontImageUrl = make_shared<string>(boost::any_cast<string>(m["FrontImageUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~DescribeVerifyResultResponseBodyMaterialIdCardInfo() = default;
};
class DescribeVerifyResultResponseBodyMaterial : public Darabonba::Model {
public:
  shared_ptr<string> faceGlobalUrl{};
  shared_ptr<string> faceImageUrl{};
  shared_ptr<bool> faceMask{};
  shared_ptr<string> faceQuality{};
  shared_ptr<DescribeVerifyResultResponseBodyMaterialIdCardInfo> idCardInfo{};
  shared_ptr<string> idCardName{};
  shared_ptr<string> idCardNumber{};
  shared_ptr<vector<string>> videoUrls{};

  DescribeVerifyResultResponseBodyMaterial() {}

  explicit DescribeVerifyResultResponseBodyMaterial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceGlobalUrl) {
      res["FaceGlobalUrl"] = boost::any(*faceGlobalUrl);
    }
    if (faceImageUrl) {
      res["FaceImageUrl"] = boost::any(*faceImageUrl);
    }
    if (faceMask) {
      res["FaceMask"] = boost::any(*faceMask);
    }
    if (faceQuality) {
      res["FaceQuality"] = boost::any(*faceQuality);
    }
    if (idCardInfo) {
      res["IdCardInfo"] = idCardInfo ? boost::any(idCardInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (idCardName) {
      res["IdCardName"] = boost::any(*idCardName);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (videoUrls) {
      res["VideoUrls"] = boost::any(*videoUrls);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceGlobalUrl") != m.end() && !m["FaceGlobalUrl"].empty()) {
      faceGlobalUrl = make_shared<string>(boost::any_cast<string>(m["FaceGlobalUrl"]));
    }
    if (m.find("FaceImageUrl") != m.end() && !m["FaceImageUrl"].empty()) {
      faceImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceImageUrl"]));
    }
    if (m.find("FaceMask") != m.end() && !m["FaceMask"].empty()) {
      faceMask = make_shared<bool>(boost::any_cast<bool>(m["FaceMask"]));
    }
    if (m.find("FaceQuality") != m.end() && !m["FaceQuality"].empty()) {
      faceQuality = make_shared<string>(boost::any_cast<string>(m["FaceQuality"]));
    }
    if (m.find("IdCardInfo") != m.end() && !m["IdCardInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdCardInfo"].type()) {
        DescribeVerifyResultResponseBodyMaterialIdCardInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdCardInfo"]));
        idCardInfo = make_shared<DescribeVerifyResultResponseBodyMaterialIdCardInfo>(model1);
      }
    }
    if (m.find("IdCardName") != m.end() && !m["IdCardName"].empty()) {
      idCardName = make_shared<string>(boost::any_cast<string>(m["IdCardName"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("VideoUrls") != m.end() && !m["VideoUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VideoUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VideoUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      videoUrls = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeVerifyResultResponseBodyMaterial() = default;
};
class DescribeVerifyResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<double> authorityComparisionScore{};
  shared_ptr<double> faceComparisonScore{};
  shared_ptr<double> idCardFaceComparisonScore{};
  shared_ptr<DescribeVerifyResultResponseBodyMaterial> material{};
  shared_ptr<string> requestId{};
  shared_ptr<long> verifyStatus{};

  DescribeVerifyResultResponseBody() {}

  explicit DescribeVerifyResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorityComparisionScore) {
      res["AuthorityComparisionScore"] = boost::any(*authorityComparisionScore);
    }
    if (faceComparisonScore) {
      res["FaceComparisonScore"] = boost::any(*faceComparisonScore);
    }
    if (idCardFaceComparisonScore) {
      res["IdCardFaceComparisonScore"] = boost::any(*idCardFaceComparisonScore);
    }
    if (material) {
      res["Material"] = material ? boost::any(material->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (verifyStatus) {
      res["VerifyStatus"] = boost::any(*verifyStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorityComparisionScore") != m.end() && !m["AuthorityComparisionScore"].empty()) {
      authorityComparisionScore = make_shared<double>(boost::any_cast<double>(m["AuthorityComparisionScore"]));
    }
    if (m.find("FaceComparisonScore") != m.end() && !m["FaceComparisonScore"].empty()) {
      faceComparisonScore = make_shared<double>(boost::any_cast<double>(m["FaceComparisonScore"]));
    }
    if (m.find("IdCardFaceComparisonScore") != m.end() && !m["IdCardFaceComparisonScore"].empty()) {
      idCardFaceComparisonScore = make_shared<double>(boost::any_cast<double>(m["IdCardFaceComparisonScore"]));
    }
    if (m.find("Material") != m.end() && !m["Material"].empty()) {
      if (typeid(map<string, boost::any>) == m["Material"].type()) {
        DescribeVerifyResultResponseBodyMaterial model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Material"]));
        material = make_shared<DescribeVerifyResultResponseBodyMaterial>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VerifyStatus") != m.end() && !m["VerifyStatus"].empty()) {
      verifyStatus = make_shared<long>(boost::any_cast<long>(m["VerifyStatus"]));
    }
  }


  virtual ~DescribeVerifyResultResponseBody() = default;
};
class DescribeVerifyResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVerifyResultResponseBody> body{};

  DescribeVerifyResultResponse() {}

  explicit DescribeVerifyResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVerifyResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVerifyResultResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVerifyResultResponse() = default;
};
class DescribeVerifySDKRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  DescribeVerifySDKRequest() {}

  explicit DescribeVerifySDKRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeVerifySDKRequest() = default;
};
class DescribeVerifySDKResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> sdkUrl{};

  DescribeVerifySDKResponseBody() {}

  explicit DescribeVerifySDKResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sdkUrl) {
      res["SdkUrl"] = boost::any(*sdkUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SdkUrl") != m.end() && !m["SdkUrl"].empty()) {
      sdkUrl = make_shared<string>(boost::any_cast<string>(m["SdkUrl"]));
    }
  }


  virtual ~DescribeVerifySDKResponseBody() = default;
};
class DescribeVerifySDKResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVerifySDKResponseBody> body{};

  DescribeVerifySDKResponse() {}

  explicit DescribeVerifySDKResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVerifySDKResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVerifySDKResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVerifySDKResponse() = default;
};
class DescribeVerifyTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> callbackSeed{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> faceRetainedImageUrl{};
  shared_ptr<string> failedRedirectUrl{};
  shared_ptr<string> idCardBackImageUrl{};
  shared_ptr<string> idCardFrontImageUrl{};
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> name{};
  shared_ptr<string> passedRedirectUrl{};
  shared_ptr<string> userId{};
  shared_ptr<string> userIp{};
  shared_ptr<string> userPhoneNumber{};
  shared_ptr<long> userRegistTime{};

  DescribeVerifyTokenRequest() {}

  explicit DescribeVerifyTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (callbackSeed) {
      res["CallbackSeed"] = boost::any(*callbackSeed);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (faceRetainedImageUrl) {
      res["FaceRetainedImageUrl"] = boost::any(*faceRetainedImageUrl);
    }
    if (failedRedirectUrl) {
      res["FailedRedirectUrl"] = boost::any(*failedRedirectUrl);
    }
    if (idCardBackImageUrl) {
      res["IdCardBackImageUrl"] = boost::any(*idCardBackImageUrl);
    }
    if (idCardFrontImageUrl) {
      res["IdCardFrontImageUrl"] = boost::any(*idCardFrontImageUrl);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (passedRedirectUrl) {
      res["PassedRedirectUrl"] = boost::any(*passedRedirectUrl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userIp) {
      res["UserIp"] = boost::any(*userIp);
    }
    if (userPhoneNumber) {
      res["UserPhoneNumber"] = boost::any(*userPhoneNumber);
    }
    if (userRegistTime) {
      res["UserRegistTime"] = boost::any(*userRegistTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("CallbackSeed") != m.end() && !m["CallbackSeed"].empty()) {
      callbackSeed = make_shared<string>(boost::any_cast<string>(m["CallbackSeed"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("FaceRetainedImageUrl") != m.end() && !m["FaceRetainedImageUrl"].empty()) {
      faceRetainedImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceRetainedImageUrl"]));
    }
    if (m.find("FailedRedirectUrl") != m.end() && !m["FailedRedirectUrl"].empty()) {
      failedRedirectUrl = make_shared<string>(boost::any_cast<string>(m["FailedRedirectUrl"]));
    }
    if (m.find("IdCardBackImageUrl") != m.end() && !m["IdCardBackImageUrl"].empty()) {
      idCardBackImageUrl = make_shared<string>(boost::any_cast<string>(m["IdCardBackImageUrl"]));
    }
    if (m.find("IdCardFrontImageUrl") != m.end() && !m["IdCardFrontImageUrl"].empty()) {
      idCardFrontImageUrl = make_shared<string>(boost::any_cast<string>(m["IdCardFrontImageUrl"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PassedRedirectUrl") != m.end() && !m["PassedRedirectUrl"].empty()) {
      passedRedirectUrl = make_shared<string>(boost::any_cast<string>(m["PassedRedirectUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserIp") != m.end() && !m["UserIp"].empty()) {
      userIp = make_shared<string>(boost::any_cast<string>(m["UserIp"]));
    }
    if (m.find("UserPhoneNumber") != m.end() && !m["UserPhoneNumber"].empty()) {
      userPhoneNumber = make_shared<string>(boost::any_cast<string>(m["UserPhoneNumber"]));
    }
    if (m.find("UserRegistTime") != m.end() && !m["UserRegistTime"].empty()) {
      userRegistTime = make_shared<long>(boost::any_cast<long>(m["UserRegistTime"]));
    }
  }


  virtual ~DescribeVerifyTokenRequest() = default;
};
class DescribeVerifyTokenResponseBodyOssUploadToken : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> endPoint{};
  shared_ptr<long> expired{};
  shared_ptr<string> key{};
  shared_ptr<string> path{};
  shared_ptr<string> secret{};
  shared_ptr<string> token{};

  DescribeVerifyTokenResponseBodyOssUploadToken() {}

  explicit DescribeVerifyTokenResponseBodyOssUploadToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (secret) {
      res["Secret"] = boost::any(*secret);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<long>(boost::any_cast<long>(m["Expired"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Secret") != m.end() && !m["Secret"].empty()) {
      secret = make_shared<string>(boost::any_cast<string>(m["Secret"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~DescribeVerifyTokenResponseBodyOssUploadToken() = default;
};
class DescribeVerifyTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeVerifyTokenResponseBodyOssUploadToken> ossUploadToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> verifyPageUrl{};
  shared_ptr<string> verifyToken{};

  DescribeVerifyTokenResponseBody() {}

  explicit DescribeVerifyTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossUploadToken) {
      res["OssUploadToken"] = ossUploadToken ? boost::any(ossUploadToken->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (verifyPageUrl) {
      res["VerifyPageUrl"] = boost::any(*verifyPageUrl);
    }
    if (verifyToken) {
      res["VerifyToken"] = boost::any(*verifyToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OssUploadToken") != m.end() && !m["OssUploadToken"].empty()) {
      if (typeid(map<string, boost::any>) == m["OssUploadToken"].type()) {
        DescribeVerifyTokenResponseBodyOssUploadToken model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OssUploadToken"]));
        ossUploadToken = make_shared<DescribeVerifyTokenResponseBodyOssUploadToken>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VerifyPageUrl") != m.end() && !m["VerifyPageUrl"].empty()) {
      verifyPageUrl = make_shared<string>(boost::any_cast<string>(m["VerifyPageUrl"]));
    }
    if (m.find("VerifyToken") != m.end() && !m["VerifyToken"].empty()) {
      verifyToken = make_shared<string>(boost::any_cast<string>(m["VerifyToken"]));
    }
  }


  virtual ~DescribeVerifyTokenResponseBody() = default;
};
class DescribeVerifyTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVerifyTokenResponseBody> body{};

  DescribeVerifyTokenResponse() {}

  explicit DescribeVerifyTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVerifyTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVerifyTokenResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVerifyTokenResponse() = default;
};
class DetectFaceAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> materialValue{};

  DetectFaceAttributesRequest() {}

  explicit DetectFaceAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (materialValue) {
      res["MaterialValue"] = boost::any(*materialValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("MaterialValue") != m.end() && !m["MaterialValue"].empty()) {
      materialValue = make_shared<string>(boost::any_cast<string>(m["MaterialValue"]));
    }
  }


  virtual ~DetectFaceAttributesRequest() = default;
};
class DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose : public Darabonba::Model {
public:
  shared_ptr<double> pitchAngle{};
  shared_ptr<double> rollAngle{};
  shared_ptr<double> yawAngle{};

  DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose() {}

  explicit DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pitchAngle) {
      res["PitchAngle"] = boost::any(*pitchAngle);
    }
    if (rollAngle) {
      res["RollAngle"] = boost::any(*rollAngle);
    }
    if (yawAngle) {
      res["YawAngle"] = boost::any(*yawAngle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PitchAngle") != m.end() && !m["PitchAngle"].empty()) {
      pitchAngle = make_shared<double>(boost::any_cast<double>(m["PitchAngle"]));
    }
    if (m.find("RollAngle") != m.end() && !m["RollAngle"].empty()) {
      rollAngle = make_shared<double>(boost::any_cast<double>(m["RollAngle"]));
    }
    if (m.find("YawAngle") != m.end() && !m["YawAngle"].empty()) {
      yawAngle = make_shared<double>(boost::any_cast<double>(m["YawAngle"]));
    }
  }


  virtual ~DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose() = default;
};
class DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling : public Darabonba::Model {
public:
  shared_ptr<double> threshold{};
  shared_ptr<double> value{};

  DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling() {}

  explicit DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling() = default;
};
class DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes : public Darabonba::Model {
public:
  shared_ptr<double> blur{};
  shared_ptr<double> facequal{};
  shared_ptr<string> facetype{};
  shared_ptr<string> glasses{};
  shared_ptr<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose> headpose{};
  shared_ptr<long> integrity{};
  shared_ptr<string> respirator{};
  shared_ptr<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling> smiling{};

  DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes() {}

  explicit DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blur) {
      res["Blur"] = boost::any(*blur);
    }
    if (facequal) {
      res["Facequal"] = boost::any(*facequal);
    }
    if (facetype) {
      res["Facetype"] = boost::any(*facetype);
    }
    if (glasses) {
      res["Glasses"] = boost::any(*glasses);
    }
    if (headpose) {
      res["Headpose"] = headpose ? boost::any(headpose->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (integrity) {
      res["Integrity"] = boost::any(*integrity);
    }
    if (respirator) {
      res["Respirator"] = boost::any(*respirator);
    }
    if (smiling) {
      res["Smiling"] = smiling ? boost::any(smiling->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Blur") != m.end() && !m["Blur"].empty()) {
      blur = make_shared<double>(boost::any_cast<double>(m["Blur"]));
    }
    if (m.find("Facequal") != m.end() && !m["Facequal"].empty()) {
      facequal = make_shared<double>(boost::any_cast<double>(m["Facequal"]));
    }
    if (m.find("Facetype") != m.end() && !m["Facetype"].empty()) {
      facetype = make_shared<string>(boost::any_cast<string>(m["Facetype"]));
    }
    if (m.find("Glasses") != m.end() && !m["Glasses"].empty()) {
      glasses = make_shared<string>(boost::any_cast<string>(m["Glasses"]));
    }
    if (m.find("Headpose") != m.end() && !m["Headpose"].empty()) {
      if (typeid(map<string, boost::any>) == m["Headpose"].type()) {
        DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Headpose"]));
        headpose = make_shared<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose>(model1);
      }
    }
    if (m.find("Integrity") != m.end() && !m["Integrity"].empty()) {
      integrity = make_shared<long>(boost::any_cast<long>(m["Integrity"]));
    }
    if (m.find("Respirator") != m.end() && !m["Respirator"].empty()) {
      respirator = make_shared<string>(boost::any_cast<string>(m["Respirator"]));
    }
    if (m.find("Smiling") != m.end() && !m["Smiling"].empty()) {
      if (typeid(map<string, boost::any>) == m["Smiling"].type()) {
        DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Smiling"]));
        smiling = make_shared<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling>(model1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes() = default;
};
class DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect() {}

  explicit DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect() = default;
};
class DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo : public Darabonba::Model {
public:
  shared_ptr<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes> faceAttributes{};
  shared_ptr<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect> faceRect{};

  DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo() {}

  explicit DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceAttributes) {
      res["FaceAttributes"] = faceAttributes ? boost::any(faceAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceRect) {
      res["FaceRect"] = faceRect ? boost::any(faceRect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceAttributes") != m.end() && !m["FaceAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceAttributes"].type()) {
        DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceAttributes"]));
        faceAttributes = make_shared<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes>(model1);
      }
    }
    if (m.find("FaceRect") != m.end() && !m["FaceRect"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceRect"].type()) {
        DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceRect"]));
        faceRect = make_shared<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect>(model1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo() = default;
};
class DetectFaceAttributesResponseBodyDataFaceInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo>> faceAttributesDetectInfo{};

  DetectFaceAttributesResponseBodyDataFaceInfos() {}

  explicit DetectFaceAttributesResponseBodyDataFaceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceAttributesDetectInfo) {
      vector<boost::any> temp1;
      for(auto item1:*faceAttributesDetectInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceAttributesDetectInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceAttributesDetectInfo") != m.end() && !m["FaceAttributesDetectInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceAttributesDetectInfo"].type()) {
        vector<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceAttributesDetectInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceAttributesDetectInfo = make_shared<vector<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo>>(expect1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseBodyDataFaceInfos() = default;
};
class DetectFaceAttributesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<DetectFaceAttributesResponseBodyDataFaceInfos> faceInfos{};
  shared_ptr<long> imgHeight{};
  shared_ptr<long> imgWidth{};

  DetectFaceAttributesResponseBodyData() {}

  explicit DetectFaceAttributesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceInfos) {
      res["FaceInfos"] = faceInfos ? boost::any(faceInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imgHeight) {
      res["ImgHeight"] = boost::any(*imgHeight);
    }
    if (imgWidth) {
      res["ImgWidth"] = boost::any(*imgWidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceInfos") != m.end() && !m["FaceInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceInfos"].type()) {
        DetectFaceAttributesResponseBodyDataFaceInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceInfos"]));
        faceInfos = make_shared<DetectFaceAttributesResponseBodyDataFaceInfos>(model1);
      }
    }
    if (m.find("ImgHeight") != m.end() && !m["ImgHeight"].empty()) {
      imgHeight = make_shared<long>(boost::any_cast<long>(m["ImgHeight"]));
    }
    if (m.find("ImgWidth") != m.end() && !m["ImgWidth"].empty()) {
      imgWidth = make_shared<long>(boost::any_cast<long>(m["ImgWidth"]));
    }
  }


  virtual ~DetectFaceAttributesResponseBodyData() = default;
};
class DetectFaceAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DetectFaceAttributesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DetectFaceAttributesResponseBody() {}

  explicit DetectFaceAttributesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectFaceAttributesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectFaceAttributesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DetectFaceAttributesResponseBody() = default;
};
class DetectFaceAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectFaceAttributesResponseBody> body{};

  DetectFaceAttributesResponse() {}

  explicit DetectFaceAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectFaceAttributesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectFaceAttributesResponseBody>(model1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponse() = default;
};
class Id2MetaPeriodVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifyNum{};
  shared_ptr<string> paramType{};
  shared_ptr<string> userName{};
  shared_ptr<string> validityEndDate{};
  shared_ptr<string> validityStartDate{};

  Id2MetaPeriodVerifyRequest() {}

  explicit Id2MetaPeriodVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifyNum) {
      res["IdentifyNum"] = boost::any(*identifyNum);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (validityEndDate) {
      res["ValidityEndDate"] = boost::any(*validityEndDate);
    }
    if (validityStartDate) {
      res["ValidityStartDate"] = boost::any(*validityStartDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdentifyNum") != m.end() && !m["IdentifyNum"].empty()) {
      identifyNum = make_shared<string>(boost::any_cast<string>(m["IdentifyNum"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("ValidityEndDate") != m.end() && !m["ValidityEndDate"].empty()) {
      validityEndDate = make_shared<string>(boost::any_cast<string>(m["ValidityEndDate"]));
    }
    if (m.find("ValidityStartDate") != m.end() && !m["ValidityStartDate"].empty()) {
      validityStartDate = make_shared<string>(boost::any_cast<string>(m["ValidityStartDate"]));
    }
  }


  virtual ~Id2MetaPeriodVerifyRequest() = default;
};
class Id2MetaPeriodVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};

  Id2MetaPeriodVerifyResponseBodyResultObject() {}

  explicit Id2MetaPeriodVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
  }


  virtual ~Id2MetaPeriodVerifyResponseBodyResultObject() = default;
};
class Id2MetaPeriodVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<Id2MetaPeriodVerifyResponseBodyResultObject> resultObject{};

  Id2MetaPeriodVerifyResponseBody() {}

  explicit Id2MetaPeriodVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        Id2MetaPeriodVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<Id2MetaPeriodVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~Id2MetaPeriodVerifyResponseBody() = default;
};
class Id2MetaPeriodVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Id2MetaPeriodVerifyResponseBody> body{};

  Id2MetaPeriodVerifyResponse() {}

  explicit Id2MetaPeriodVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Id2MetaPeriodVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Id2MetaPeriodVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~Id2MetaPeriodVerifyResponse() = default;
};
class Id2MetaStandardVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifyNum{};
  shared_ptr<string> paramType{};
  shared_ptr<string> userName{};

  Id2MetaStandardVerifyRequest() {}

  explicit Id2MetaStandardVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifyNum) {
      res["IdentifyNum"] = boost::any(*identifyNum);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdentifyNum") != m.end() && !m["IdentifyNum"].empty()) {
      identifyNum = make_shared<string>(boost::any_cast<string>(m["IdentifyNum"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~Id2MetaStandardVerifyRequest() = default;
};
class Id2MetaStandardVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};

  Id2MetaStandardVerifyResponseBodyResultObject() {}

  explicit Id2MetaStandardVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
  }


  virtual ~Id2MetaStandardVerifyResponseBodyResultObject() = default;
};
class Id2MetaStandardVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<Id2MetaStandardVerifyResponseBodyResultObject> resultObject{};

  Id2MetaStandardVerifyResponseBody() {}

  explicit Id2MetaStandardVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        Id2MetaStandardVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<Id2MetaStandardVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~Id2MetaStandardVerifyResponseBody() = default;
};
class Id2MetaStandardVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Id2MetaStandardVerifyResponseBody> body{};

  Id2MetaStandardVerifyResponse() {}

  explicit Id2MetaStandardVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Id2MetaStandardVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Id2MetaStandardVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~Id2MetaStandardVerifyResponse() = default;
};
class Id2MetaVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifyNum{};
  shared_ptr<string> paramType{};
  shared_ptr<string> userName{};

  Id2MetaVerifyRequest() {}

  explicit Id2MetaVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifyNum) {
      res["IdentifyNum"] = boost::any(*identifyNum);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdentifyNum") != m.end() && !m["IdentifyNum"].empty()) {
      identifyNum = make_shared<string>(boost::any_cast<string>(m["IdentifyNum"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~Id2MetaVerifyRequest() = default;
};
class Id2MetaVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};

  Id2MetaVerifyResponseBodyResultObject() {}

  explicit Id2MetaVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
  }


  virtual ~Id2MetaVerifyResponseBodyResultObject() = default;
};
class Id2MetaVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<Id2MetaVerifyResponseBodyResultObject> resultObject{};

  Id2MetaVerifyResponseBody() {}

  explicit Id2MetaVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        Id2MetaVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<Id2MetaVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~Id2MetaVerifyResponseBody() = default;
};
class Id2MetaVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Id2MetaVerifyResponseBody> body{};

  Id2MetaVerifyResponse() {}

  explicit Id2MetaVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Id2MetaVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Id2MetaVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~Id2MetaVerifyResponse() = default;
};
class Id2MetaVerifyWithOCRRequest : public Darabonba::Model {
public:
  shared_ptr<string> certFile{};
  shared_ptr<string> certNationalFile{};
  shared_ptr<string> certNationalUrl{};
  shared_ptr<string> certUrl{};

  Id2MetaVerifyWithOCRRequest() {}

  explicit Id2MetaVerifyWithOCRRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certFile) {
      res["CertFile"] = boost::any(*certFile);
    }
    if (certNationalFile) {
      res["CertNationalFile"] = boost::any(*certNationalFile);
    }
    if (certNationalUrl) {
      res["CertNationalUrl"] = boost::any(*certNationalUrl);
    }
    if (certUrl) {
      res["CertUrl"] = boost::any(*certUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertFile") != m.end() && !m["CertFile"].empty()) {
      certFile = make_shared<string>(boost::any_cast<string>(m["CertFile"]));
    }
    if (m.find("CertNationalFile") != m.end() && !m["CertNationalFile"].empty()) {
      certNationalFile = make_shared<string>(boost::any_cast<string>(m["CertNationalFile"]));
    }
    if (m.find("CertNationalUrl") != m.end() && !m["CertNationalUrl"].empty()) {
      certNationalUrl = make_shared<string>(boost::any_cast<string>(m["CertNationalUrl"]));
    }
    if (m.find("CertUrl") != m.end() && !m["CertUrl"].empty()) {
      certUrl = make_shared<string>(boost::any_cast<string>(m["CertUrl"]));
    }
  }


  virtual ~Id2MetaVerifyWithOCRRequest() = default;
};
class Id2MetaVerifyWithOCRAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> certFileObject{};
  shared_ptr<Darabonba::Stream> certNationalFileObject{};
  shared_ptr<string> certNationalUrl{};
  shared_ptr<string> certUrl{};

  Id2MetaVerifyWithOCRAdvanceRequest() {}

  explicit Id2MetaVerifyWithOCRAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certFileObject) {
      res["CertFile"] = boost::any(*certFileObject);
    }
    if (certNationalFileObject) {
      res["CertNationalFile"] = boost::any(*certNationalFileObject);
    }
    if (certNationalUrl) {
      res["CertNationalUrl"] = boost::any(*certNationalUrl);
    }
    if (certUrl) {
      res["CertUrl"] = boost::any(*certUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertFile") != m.end() && !m["CertFile"].empty()) {
      certFileObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["CertFile"]));
    }
    if (m.find("CertNationalFile") != m.end() && !m["CertNationalFile"].empty()) {
      certNationalFileObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["CertNationalFile"]));
    }
    if (m.find("CertNationalUrl") != m.end() && !m["CertNationalUrl"].empty()) {
      certNationalUrl = make_shared<string>(boost::any_cast<string>(m["CertNationalUrl"]));
    }
    if (m.find("CertUrl") != m.end() && !m["CertUrl"].empty()) {
      certUrl = make_shared<string>(boost::any_cast<string>(m["CertUrl"]));
    }
  }


  virtual ~Id2MetaVerifyWithOCRAdvanceRequest() = default;
};
class Id2MetaVerifyWithOCRResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> cardInfo{};

  Id2MetaVerifyWithOCRResponseBodyResultObject() {}

  explicit Id2MetaVerifyWithOCRResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (cardInfo) {
      res["CardInfo"] = boost::any(*cardInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("CardInfo") != m.end() && !m["CardInfo"].empty()) {
      cardInfo = make_shared<string>(boost::any_cast<string>(m["CardInfo"]));
    }
  }


  virtual ~Id2MetaVerifyWithOCRResponseBodyResultObject() = default;
};
class Id2MetaVerifyWithOCRResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<Id2MetaVerifyWithOCRResponseBodyResultObject> resultObject{};

  Id2MetaVerifyWithOCRResponseBody() {}

  explicit Id2MetaVerifyWithOCRResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        Id2MetaVerifyWithOCRResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<Id2MetaVerifyWithOCRResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~Id2MetaVerifyWithOCRResponseBody() = default;
};
class Id2MetaVerifyWithOCRResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Id2MetaVerifyWithOCRResponseBody> body{};

  Id2MetaVerifyWithOCRResponse() {}

  explicit Id2MetaVerifyWithOCRResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Id2MetaVerifyWithOCRResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Id2MetaVerifyWithOCRResponseBody>(model1);
      }
    }
  }


  virtual ~Id2MetaVerifyWithOCRResponse() = default;
};
class InitFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> appQualityCheck{};
  shared_ptr<string> authId{};
  shared_ptr<string> birthday{};
  shared_ptr<string> callbackToken{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> cameraSelection{};
  shared_ptr<string> certName{};
  shared_ptr<string> certNo{};
  shared_ptr<string> certType{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> certifyUrlStyle{};
  shared_ptr<string> certifyUrlType{};
  shared_ptr<string> crop{};
  shared_ptr<string> encryptType{};
  shared_ptr<string> faceContrastPicture{};
  shared_ptr<string> faceContrastPictureUrl{};
  shared_ptr<string> faceGuardOutput{};
  shared_ptr<string> ip{};
  shared_ptr<string> metaInfo{};
  shared_ptr<string> mobile{};
  shared_ptr<string> mode{};
  shared_ptr<string> model{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> procedurePriority{};
  shared_ptr<string> productCode{};
  shared_ptr<string> rarelyCharacters{};
  shared_ptr<string> readImg{};
  shared_ptr<string> returnUrl{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> suitableType{};
  shared_ptr<string> uiCustomUrl{};
  shared_ptr<string> userId{};
  shared_ptr<string> validityDate{};
  shared_ptr<string> videoEvidence{};
  shared_ptr<string> voluntaryCustomizedContent{};

  InitFaceVerifyRequest() {}

  explicit InitFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appQualityCheck) {
      res["AppQualityCheck"] = boost::any(*appQualityCheck);
    }
    if (authId) {
      res["AuthId"] = boost::any(*authId);
    }
    if (birthday) {
      res["Birthday"] = boost::any(*birthday);
    }
    if (callbackToken) {
      res["CallbackToken"] = boost::any(*callbackToken);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (cameraSelection) {
      res["CameraSelection"] = boost::any(*cameraSelection);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (certifyUrlStyle) {
      res["CertifyUrlStyle"] = boost::any(*certifyUrlStyle);
    }
    if (certifyUrlType) {
      res["CertifyUrlType"] = boost::any(*certifyUrlType);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (faceContrastPicture) {
      res["FaceContrastPicture"] = boost::any(*faceContrastPicture);
    }
    if (faceContrastPictureUrl) {
      res["FaceContrastPictureUrl"] = boost::any(*faceContrastPictureUrl);
    }
    if (faceGuardOutput) {
      res["FaceGuardOutput"] = boost::any(*faceGuardOutput);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (metaInfo) {
      res["MetaInfo"] = boost::any(*metaInfo);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["OssObjectName"] = boost::any(*ossObjectName);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (procedurePriority) {
      res["ProcedurePriority"] = boost::any(*procedurePriority);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (rarelyCharacters) {
      res["RarelyCharacters"] = boost::any(*rarelyCharacters);
    }
    if (readImg) {
      res["ReadImg"] = boost::any(*readImg);
    }
    if (returnUrl) {
      res["ReturnUrl"] = boost::any(*returnUrl);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (suitableType) {
      res["SuitableType"] = boost::any(*suitableType);
    }
    if (uiCustomUrl) {
      res["UiCustomUrl"] = boost::any(*uiCustomUrl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (validityDate) {
      res["ValidityDate"] = boost::any(*validityDate);
    }
    if (videoEvidence) {
      res["VideoEvidence"] = boost::any(*videoEvidence);
    }
    if (voluntaryCustomizedContent) {
      res["VoluntaryCustomizedContent"] = boost::any(*voluntaryCustomizedContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppQualityCheck") != m.end() && !m["AppQualityCheck"].empty()) {
      appQualityCheck = make_shared<string>(boost::any_cast<string>(m["AppQualityCheck"]));
    }
    if (m.find("AuthId") != m.end() && !m["AuthId"].empty()) {
      authId = make_shared<string>(boost::any_cast<string>(m["AuthId"]));
    }
    if (m.find("Birthday") != m.end() && !m["Birthday"].empty()) {
      birthday = make_shared<string>(boost::any_cast<string>(m["Birthday"]));
    }
    if (m.find("CallbackToken") != m.end() && !m["CallbackToken"].empty()) {
      callbackToken = make_shared<string>(boost::any_cast<string>(m["CallbackToken"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("CameraSelection") != m.end() && !m["CameraSelection"].empty()) {
      cameraSelection = make_shared<string>(boost::any_cast<string>(m["CameraSelection"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("CertifyUrlStyle") != m.end() && !m["CertifyUrlStyle"].empty()) {
      certifyUrlStyle = make_shared<string>(boost::any_cast<string>(m["CertifyUrlStyle"]));
    }
    if (m.find("CertifyUrlType") != m.end() && !m["CertifyUrlType"].empty()) {
      certifyUrlType = make_shared<string>(boost::any_cast<string>(m["CertifyUrlType"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<string>(boost::any_cast<string>(m["EncryptType"]));
    }
    if (m.find("FaceContrastPicture") != m.end() && !m["FaceContrastPicture"].empty()) {
      faceContrastPicture = make_shared<string>(boost::any_cast<string>(m["FaceContrastPicture"]));
    }
    if (m.find("FaceContrastPictureUrl") != m.end() && !m["FaceContrastPictureUrl"].empty()) {
      faceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["FaceContrastPictureUrl"]));
    }
    if (m.find("FaceGuardOutput") != m.end() && !m["FaceGuardOutput"].empty()) {
      faceGuardOutput = make_shared<string>(boost::any_cast<string>(m["FaceGuardOutput"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("MetaInfo") != m.end() && !m["MetaInfo"].empty()) {
      metaInfo = make_shared<string>(boost::any_cast<string>(m["MetaInfo"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssObjectName") != m.end() && !m["OssObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["OssObjectName"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProcedurePriority") != m.end() && !m["ProcedurePriority"].empty()) {
      procedurePriority = make_shared<string>(boost::any_cast<string>(m["ProcedurePriority"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("RarelyCharacters") != m.end() && !m["RarelyCharacters"].empty()) {
      rarelyCharacters = make_shared<string>(boost::any_cast<string>(m["RarelyCharacters"]));
    }
    if (m.find("ReadImg") != m.end() && !m["ReadImg"].empty()) {
      readImg = make_shared<string>(boost::any_cast<string>(m["ReadImg"]));
    }
    if (m.find("ReturnUrl") != m.end() && !m["ReturnUrl"].empty()) {
      returnUrl = make_shared<string>(boost::any_cast<string>(m["ReturnUrl"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("SuitableType") != m.end() && !m["SuitableType"].empty()) {
      suitableType = make_shared<string>(boost::any_cast<string>(m["SuitableType"]));
    }
    if (m.find("UiCustomUrl") != m.end() && !m["UiCustomUrl"].empty()) {
      uiCustomUrl = make_shared<string>(boost::any_cast<string>(m["UiCustomUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("ValidityDate") != m.end() && !m["ValidityDate"].empty()) {
      validityDate = make_shared<string>(boost::any_cast<string>(m["ValidityDate"]));
    }
    if (m.find("VideoEvidence") != m.end() && !m["VideoEvidence"].empty()) {
      videoEvidence = make_shared<string>(boost::any_cast<string>(m["VideoEvidence"]));
    }
    if (m.find("VoluntaryCustomizedContent") != m.end() && !m["VoluntaryCustomizedContent"].empty()) {
      voluntaryCustomizedContent = make_shared<string>(boost::any_cast<string>(m["VoluntaryCustomizedContent"]));
    }
  }


  virtual ~InitFaceVerifyRequest() = default;
};
class InitFaceVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> certifyUrl{};

  InitFaceVerifyResponseBodyResultObject() {}

  explicit InitFaceVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (certifyUrl) {
      res["CertifyUrl"] = boost::any(*certifyUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("CertifyUrl") != m.end() && !m["CertifyUrl"].empty()) {
      certifyUrl = make_shared<string>(boost::any_cast<string>(m["CertifyUrl"]));
    }
  }


  virtual ~InitFaceVerifyResponseBodyResultObject() = default;
};
class InitFaceVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<InitFaceVerifyResponseBodyResultObject> resultObject{};

  InitFaceVerifyResponseBody() {}

  explicit InitFaceVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        InitFaceVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<InitFaceVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~InitFaceVerifyResponseBody() = default;
};
class InitFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitFaceVerifyResponseBody> body{};

  InitFaceVerifyResponse() {}

  explicit InitFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitFaceVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitFaceVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~InitFaceVerifyResponse() = default;
};
class InsertWhiteListSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> certNo{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> remark{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> serviceCode{};
  shared_ptr<long> validDay{};

  InsertWhiteListSettingRequest() {}

  explicit InsertWhiteListSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (validDay) {
      res["ValidDay"] = boost::any(*validDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("ValidDay") != m.end() && !m["ValidDay"].empty()) {
      validDay = make_shared<long>(boost::any_cast<long>(m["ValidDay"]));
    }
  }


  virtual ~InsertWhiteListSettingRequest() = default;
};
class InsertWhiteListSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> resultObject{};
  shared_ptr<bool> success{};

  InsertWhiteListSettingResponseBody() {}

  explicit InsertWhiteListSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = boost::any(*resultObject);
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      resultObject = make_shared<bool>(boost::any_cast<bool>(m["ResultObject"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~InsertWhiteListSettingResponseBody() = default;
};
class InsertWhiteListSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InsertWhiteListSettingResponseBody> body{};

  InsertWhiteListSettingResponse() {}

  explicit InsertWhiteListSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InsertWhiteListSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InsertWhiteListSettingResponseBody>(model1);
      }
    }
  }


  virtual ~InsertWhiteListSettingResponse() = default;
};
class LivenessFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> crop{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> faceContrastPicture{};
  shared_ptr<string> faceContrastPictureUrl{};
  shared_ptr<string> ip{};
  shared_ptr<string> mobile{};
  shared_ptr<string> model{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> userId{};

  LivenessFaceVerifyRequest() {}

  explicit LivenessFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (faceContrastPicture) {
      res["FaceContrastPicture"] = boost::any(*faceContrastPicture);
    }
    if (faceContrastPictureUrl) {
      res["FaceContrastPictureUrl"] = boost::any(*faceContrastPictureUrl);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["OssObjectName"] = boost::any(*ossObjectName);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("FaceContrastPicture") != m.end() && !m["FaceContrastPicture"].empty()) {
      faceContrastPicture = make_shared<string>(boost::any_cast<string>(m["FaceContrastPicture"]));
    }
    if (m.find("FaceContrastPictureUrl") != m.end() && !m["FaceContrastPictureUrl"].empty()) {
      faceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["FaceContrastPictureUrl"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssObjectName") != m.end() && !m["OssObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["OssObjectName"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~LivenessFaceVerifyRequest() = default;
};
class LivenessFaceVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> materialInfo{};
  shared_ptr<string> passed{};
  shared_ptr<string> subCode{};

  LivenessFaceVerifyResponseBodyResultObject() {}

  explicit LivenessFaceVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
  }


  virtual ~LivenessFaceVerifyResponseBodyResultObject() = default;
};
class LivenessFaceVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<LivenessFaceVerifyResponseBodyResultObject> resultObject{};

  LivenessFaceVerifyResponseBody() {}

  explicit LivenessFaceVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        LivenessFaceVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<LivenessFaceVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~LivenessFaceVerifyResponseBody() = default;
};
class LivenessFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LivenessFaceVerifyResponseBody> body{};

  LivenessFaceVerifyResponse() {}

  explicit LivenessFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LivenessFaceVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LivenessFaceVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~LivenessFaceVerifyResponse() = default;
};
class Mobile2MetaVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> mobile{};
  shared_ptr<string> paramType{};
  shared_ptr<string> userName{};

  Mobile2MetaVerifyRequest() {}

  explicit Mobile2MetaVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~Mobile2MetaVerifyRequest() = default;
};
class Mobile2MetaVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> ispName{};

  Mobile2MetaVerifyResponseBodyResultObject() {}

  explicit Mobile2MetaVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (ispName) {
      res["IspName"] = boost::any(*ispName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("IspName") != m.end() && !m["IspName"].empty()) {
      ispName = make_shared<string>(boost::any_cast<string>(m["IspName"]));
    }
  }


  virtual ~Mobile2MetaVerifyResponseBodyResultObject() = default;
};
class Mobile2MetaVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<Mobile2MetaVerifyResponseBodyResultObject> resultObject{};

  Mobile2MetaVerifyResponseBody() {}

  explicit Mobile2MetaVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        Mobile2MetaVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<Mobile2MetaVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~Mobile2MetaVerifyResponseBody() = default;
};
class Mobile2MetaVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Mobile2MetaVerifyResponseBody> body{};

  Mobile2MetaVerifyResponse() {}

  explicit Mobile2MetaVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Mobile2MetaVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Mobile2MetaVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~Mobile2MetaVerifyResponse() = default;
};
class Mobile3MetaDetailStandardVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifyNum{};
  shared_ptr<string> mobile{};
  shared_ptr<string> paramType{};
  shared_ptr<string> userName{};

  Mobile3MetaDetailStandardVerifyRequest() {}

  explicit Mobile3MetaDetailStandardVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifyNum) {
      res["IdentifyNum"] = boost::any(*identifyNum);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdentifyNum") != m.end() && !m["IdentifyNum"].empty()) {
      identifyNum = make_shared<string>(boost::any_cast<string>(m["IdentifyNum"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~Mobile3MetaDetailStandardVerifyRequest() = default;
};
class Mobile3MetaDetailStandardVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> ispName{};
  shared_ptr<string> subCode{};

  Mobile3MetaDetailStandardVerifyResponseBodyResultObject() {}

  explicit Mobile3MetaDetailStandardVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (ispName) {
      res["IspName"] = boost::any(*ispName);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("IspName") != m.end() && !m["IspName"].empty()) {
      ispName = make_shared<string>(boost::any_cast<string>(m["IspName"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
  }


  virtual ~Mobile3MetaDetailStandardVerifyResponseBodyResultObject() = default;
};
class Mobile3MetaDetailStandardVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<Mobile3MetaDetailStandardVerifyResponseBodyResultObject> resultObject{};

  Mobile3MetaDetailStandardVerifyResponseBody() {}

  explicit Mobile3MetaDetailStandardVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        Mobile3MetaDetailStandardVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<Mobile3MetaDetailStandardVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~Mobile3MetaDetailStandardVerifyResponseBody() = default;
};
class Mobile3MetaDetailStandardVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Mobile3MetaDetailStandardVerifyResponseBody> body{};

  Mobile3MetaDetailStandardVerifyResponse() {}

  explicit Mobile3MetaDetailStandardVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Mobile3MetaDetailStandardVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Mobile3MetaDetailStandardVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~Mobile3MetaDetailStandardVerifyResponse() = default;
};
class Mobile3MetaDetailVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifyNum{};
  shared_ptr<string> mobile{};
  shared_ptr<string> paramType{};
  shared_ptr<string> userName{};

  Mobile3MetaDetailVerifyRequest() {}

  explicit Mobile3MetaDetailVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifyNum) {
      res["IdentifyNum"] = boost::any(*identifyNum);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdentifyNum") != m.end() && !m["IdentifyNum"].empty()) {
      identifyNum = make_shared<string>(boost::any_cast<string>(m["IdentifyNum"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~Mobile3MetaDetailVerifyRequest() = default;
};
class Mobile3MetaDetailVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> ispName{};
  shared_ptr<string> subCode{};

  Mobile3MetaDetailVerifyResponseBodyResultObject() {}

  explicit Mobile3MetaDetailVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (ispName) {
      res["IspName"] = boost::any(*ispName);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("IspName") != m.end() && !m["IspName"].empty()) {
      ispName = make_shared<string>(boost::any_cast<string>(m["IspName"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
  }


  virtual ~Mobile3MetaDetailVerifyResponseBodyResultObject() = default;
};
class Mobile3MetaDetailVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<Mobile3MetaDetailVerifyResponseBodyResultObject> resultObject{};

  Mobile3MetaDetailVerifyResponseBody() {}

  explicit Mobile3MetaDetailVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        Mobile3MetaDetailVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<Mobile3MetaDetailVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~Mobile3MetaDetailVerifyResponseBody() = default;
};
class Mobile3MetaDetailVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Mobile3MetaDetailVerifyResponseBody> body{};

  Mobile3MetaDetailVerifyResponse() {}

  explicit Mobile3MetaDetailVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Mobile3MetaDetailVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Mobile3MetaDetailVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~Mobile3MetaDetailVerifyResponse() = default;
};
class Mobile3MetaSimpleStandardVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifyNum{};
  shared_ptr<string> mobile{};
  shared_ptr<string> paramType{};
  shared_ptr<string> userName{};

  Mobile3MetaSimpleStandardVerifyRequest() {}

  explicit Mobile3MetaSimpleStandardVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifyNum) {
      res["IdentifyNum"] = boost::any(*identifyNum);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdentifyNum") != m.end() && !m["IdentifyNum"].empty()) {
      identifyNum = make_shared<string>(boost::any_cast<string>(m["IdentifyNum"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~Mobile3MetaSimpleStandardVerifyRequest() = default;
};
class Mobile3MetaSimpleStandardVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> ispName{};

  Mobile3MetaSimpleStandardVerifyResponseBodyResultObject() {}

  explicit Mobile3MetaSimpleStandardVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (ispName) {
      res["IspName"] = boost::any(*ispName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("IspName") != m.end() && !m["IspName"].empty()) {
      ispName = make_shared<string>(boost::any_cast<string>(m["IspName"]));
    }
  }


  virtual ~Mobile3MetaSimpleStandardVerifyResponseBodyResultObject() = default;
};
class Mobile3MetaSimpleStandardVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<Mobile3MetaSimpleStandardVerifyResponseBodyResultObject> resultObject{};

  Mobile3MetaSimpleStandardVerifyResponseBody() {}

  explicit Mobile3MetaSimpleStandardVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        Mobile3MetaSimpleStandardVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<Mobile3MetaSimpleStandardVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~Mobile3MetaSimpleStandardVerifyResponseBody() = default;
};
class Mobile3MetaSimpleStandardVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Mobile3MetaSimpleStandardVerifyResponseBody> body{};

  Mobile3MetaSimpleStandardVerifyResponse() {}

  explicit Mobile3MetaSimpleStandardVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Mobile3MetaSimpleStandardVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Mobile3MetaSimpleStandardVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~Mobile3MetaSimpleStandardVerifyResponse() = default;
};
class Mobile3MetaSimpleVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifyNum{};
  shared_ptr<string> mobile{};
  shared_ptr<string> paramType{};
  shared_ptr<string> userName{};

  Mobile3MetaSimpleVerifyRequest() {}

  explicit Mobile3MetaSimpleVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifyNum) {
      res["IdentifyNum"] = boost::any(*identifyNum);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdentifyNum") != m.end() && !m["IdentifyNum"].empty()) {
      identifyNum = make_shared<string>(boost::any_cast<string>(m["IdentifyNum"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~Mobile3MetaSimpleVerifyRequest() = default;
};
class Mobile3MetaSimpleVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> ispName{};

  Mobile3MetaSimpleVerifyResponseBodyResultObject() {}

  explicit Mobile3MetaSimpleVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (ispName) {
      res["IspName"] = boost::any(*ispName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("IspName") != m.end() && !m["IspName"].empty()) {
      ispName = make_shared<string>(boost::any_cast<string>(m["IspName"]));
    }
  }


  virtual ~Mobile3MetaSimpleVerifyResponseBodyResultObject() = default;
};
class Mobile3MetaSimpleVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<Mobile3MetaSimpleVerifyResponseBodyResultObject> resultObject{};

  Mobile3MetaSimpleVerifyResponseBody() {}

  explicit Mobile3MetaSimpleVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        Mobile3MetaSimpleVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<Mobile3MetaSimpleVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~Mobile3MetaSimpleVerifyResponseBody() = default;
};
class Mobile3MetaSimpleVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Mobile3MetaSimpleVerifyResponseBody> body{};

  Mobile3MetaSimpleVerifyResponse() {}

  explicit Mobile3MetaSimpleVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Mobile3MetaSimpleVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Mobile3MetaSimpleVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~Mobile3MetaSimpleVerifyResponse() = default;
};
class MobileDetectRequest : public Darabonba::Model {
public:
  shared_ptr<string> mobiles{};
  shared_ptr<string> paramType{};

  MobileDetectRequest() {}

  explicit MobileDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mobiles) {
      res["Mobiles"] = boost::any(*mobiles);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mobiles") != m.end() && !m["Mobiles"].empty()) {
      mobiles = make_shared<string>(boost::any_cast<string>(m["Mobiles"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
  }


  virtual ~MobileDetectRequest() = default;
};
class MobileDetectResponseBodyResultObjectItems : public Darabonba::Model {
public:
  shared_ptr<string> area{};
  shared_ptr<string> bizCode{};
  shared_ptr<string> ispName{};
  shared_ptr<string> mobile{};
  shared_ptr<string> subCode{};

  MobileDetectResponseBodyResultObjectItems() {}

  explicit MobileDetectResponseBodyResultObjectItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (area) {
      res["Area"] = boost::any(*area);
    }
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (ispName) {
      res["IspName"] = boost::any(*ispName);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Area") != m.end() && !m["Area"].empty()) {
      area = make_shared<string>(boost::any_cast<string>(m["Area"]));
    }
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("IspName") != m.end() && !m["IspName"].empty()) {
      ispName = make_shared<string>(boost::any_cast<string>(m["IspName"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
  }


  virtual ~MobileDetectResponseBodyResultObjectItems() = default;
};
class MobileDetectResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> chargeCount{};
  shared_ptr<vector<MobileDetectResponseBodyResultObjectItems>> items{};

  MobileDetectResponseBodyResultObject() {}

  explicit MobileDetectResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeCount) {
      res["ChargeCount"] = boost::any(*chargeCount);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeCount") != m.end() && !m["ChargeCount"].empty()) {
      chargeCount = make_shared<string>(boost::any_cast<string>(m["ChargeCount"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<MobileDetectResponseBodyResultObjectItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MobileDetectResponseBodyResultObjectItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<MobileDetectResponseBodyResultObjectItems>>(expect1);
      }
    }
  }


  virtual ~MobileDetectResponseBodyResultObject() = default;
};
class MobileDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<MobileDetectResponseBodyResultObject> resultObject{};

  MobileDetectResponseBody() {}

  explicit MobileDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        MobileDetectResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<MobileDetectResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~MobileDetectResponseBody() = default;
};
class MobileDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MobileDetectResponseBody> body{};

  MobileDetectResponse() {}

  explicit MobileDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MobileDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MobileDetectResponseBody>(model1);
      }
    }
  }


  virtual ~MobileDetectResponse() = default;
};
class MobileOnlineStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> mobile{};
  shared_ptr<string> paramType{};

  MobileOnlineStatusRequest() {}

  explicit MobileOnlineStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
  }


  virtual ~MobileOnlineStatusRequest() = default;
};
class MobileOnlineStatusResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> ispName{};
  shared_ptr<string> subCode{};

  MobileOnlineStatusResponseBodyResultObject() {}

  explicit MobileOnlineStatusResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (ispName) {
      res["IspName"] = boost::any(*ispName);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("IspName") != m.end() && !m["IspName"].empty()) {
      ispName = make_shared<string>(boost::any_cast<string>(m["IspName"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
  }


  virtual ~MobileOnlineStatusResponseBodyResultObject() = default;
};
class MobileOnlineStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<MobileOnlineStatusResponseBodyResultObject> resultObject{};

  MobileOnlineStatusResponseBody() {}

  explicit MobileOnlineStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        MobileOnlineStatusResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<MobileOnlineStatusResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~MobileOnlineStatusResponseBody() = default;
};
class MobileOnlineStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MobileOnlineStatusResponseBody> body{};

  MobileOnlineStatusResponse() {}

  explicit MobileOnlineStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MobileOnlineStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MobileOnlineStatusResponseBody>(model1);
      }
    }
  }


  virtual ~MobileOnlineStatusResponse() = default;
};
class MobileOnlineTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> mobile{};
  shared_ptr<string> paramType{};

  MobileOnlineTimeRequest() {}

  explicit MobileOnlineTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
  }


  virtual ~MobileOnlineTimeRequest() = default;
};
class MobileOnlineTimeResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> ispName{};
  shared_ptr<string> timeCode{};

  MobileOnlineTimeResponseBodyResultObject() {}

  explicit MobileOnlineTimeResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (ispName) {
      res["IspName"] = boost::any(*ispName);
    }
    if (timeCode) {
      res["TimeCode"] = boost::any(*timeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("IspName") != m.end() && !m["IspName"].empty()) {
      ispName = make_shared<string>(boost::any_cast<string>(m["IspName"]));
    }
    if (m.find("TimeCode") != m.end() && !m["TimeCode"].empty()) {
      timeCode = make_shared<string>(boost::any_cast<string>(m["TimeCode"]));
    }
  }


  virtual ~MobileOnlineTimeResponseBodyResultObject() = default;
};
class MobileOnlineTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<MobileOnlineTimeResponseBodyResultObject> resultObject{};

  MobileOnlineTimeResponseBody() {}

  explicit MobileOnlineTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        MobileOnlineTimeResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<MobileOnlineTimeResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~MobileOnlineTimeResponseBody() = default;
};
class MobileOnlineTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MobileOnlineTimeResponseBody> body{};

  MobileOnlineTimeResponse() {}

  explicit MobileOnlineTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MobileOnlineTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MobileOnlineTimeResponseBody>(model1);
      }
    }
  }


  virtual ~MobileOnlineTimeResponse() = default;
};
class ModifyDeviceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> duration{};
  shared_ptr<string> expiredDay{};
  shared_ptr<string> userDeviceId{};

  ModifyDeviceInfoRequest() {}

  explicit ModifyDeviceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (expiredDay) {
      res["ExpiredDay"] = boost::any(*expiredDay);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("ExpiredDay") != m.end() && !m["ExpiredDay"].empty()) {
      expiredDay = make_shared<string>(boost::any_cast<string>(m["ExpiredDay"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
  }


  virtual ~ModifyDeviceInfoRequest() = default;
};
class ModifyDeviceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> beginDay{};
  shared_ptr<string> bizType{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> expiredDay{};
  shared_ptr<string> requestId{};
  shared_ptr<string> userDeviceId{};

  ModifyDeviceInfoResponseBody() {}

  explicit ModifyDeviceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginDay) {
      res["BeginDay"] = boost::any(*beginDay);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (expiredDay) {
      res["ExpiredDay"] = boost::any(*expiredDay);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginDay") != m.end() && !m["BeginDay"].empty()) {
      beginDay = make_shared<string>(boost::any_cast<string>(m["BeginDay"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("ExpiredDay") != m.end() && !m["ExpiredDay"].empty()) {
      expiredDay = make_shared<string>(boost::any_cast<string>(m["ExpiredDay"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
  }


  virtual ~ModifyDeviceInfoResponseBody() = default;
};
class ModifyDeviceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDeviceInfoResponseBody> body{};

  ModifyDeviceInfoResponse() {}

  explicit ModifyDeviceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDeviceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDeviceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDeviceInfoResponse() = default;
};
class PageQueryWhiteListSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> certNo{};
  shared_ptr<string> certifyId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> status{};
  shared_ptr<string> validEndDate{};
  shared_ptr<string> validStartDate{};

  PageQueryWhiteListSettingRequest() {}

  explicit PageQueryWhiteListSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (validEndDate) {
      res["ValidEndDate"] = boost::any(*validEndDate);
    }
    if (validStartDate) {
      res["ValidStartDate"] = boost::any(*validStartDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ValidEndDate") != m.end() && !m["ValidEndDate"].empty()) {
      validEndDate = make_shared<string>(boost::any_cast<string>(m["ValidEndDate"]));
    }
    if (m.find("ValidStartDate") != m.end() && !m["ValidStartDate"].empty()) {
      validStartDate = make_shared<string>(boost::any_cast<string>(m["ValidStartDate"]));
    }
  }


  virtual ~PageQueryWhiteListSettingRequest() = default;
};
class PageQueryWhiteListSettingResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certNo{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> remark{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> status{};
  shared_ptr<string> validEndDate{};
  shared_ptr<string> validStartDate{};

  PageQueryWhiteListSettingResponseBodyResultObject() {}

  explicit PageQueryWhiteListSettingResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (validEndDate) {
      res["ValidEndDate"] = boost::any(*validEndDate);
    }
    if (validStartDate) {
      res["ValidStartDate"] = boost::any(*validStartDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ValidEndDate") != m.end() && !m["ValidEndDate"].empty()) {
      validEndDate = make_shared<string>(boost::any_cast<string>(m["ValidEndDate"]));
    }
    if (m.find("ValidStartDate") != m.end() && !m["ValidStartDate"].empty()) {
      validStartDate = make_shared<string>(boost::any_cast<string>(m["ValidStartDate"]));
    }
  }


  virtual ~PageQueryWhiteListSettingResponseBodyResultObject() = default;
};
class PageQueryWhiteListSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<PageQueryWhiteListSettingResponseBodyResultObject>> resultObject{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalItem{};
  shared_ptr<long> totalPage{};

  PageQueryWhiteListSettingResponseBody() {}

  explicit PageQueryWhiteListSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultObject) {
      vector<boost::any> temp1;
      for(auto item1:*resultObject){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultObject"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalItem) {
      res["TotalItem"] = boost::any(*totalItem);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultObject"].type()) {
        vector<PageQueryWhiteListSettingResponseBodyResultObject> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultObject"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PageQueryWhiteListSettingResponseBodyResultObject model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultObject = make_shared<vector<PageQueryWhiteListSettingResponseBodyResultObject>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalItem") != m.end() && !m["TotalItem"].empty()) {
      totalItem = make_shared<long>(boost::any_cast<long>(m["TotalItem"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~PageQueryWhiteListSettingResponseBody() = default;
};
class PageQueryWhiteListSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PageQueryWhiteListSettingResponseBody> body{};

  PageQueryWhiteListSettingResponse() {}

  explicit PageQueryWhiteListSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PageQueryWhiteListSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PageQueryWhiteListSettingResponseBody>(model1);
      }
    }
  }


  virtual ~PageQueryWhiteListSettingResponse() = default;
};
class RemoveWhiteListSettingRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> ids{};
  shared_ptr<string> serviceCode{};

  RemoveWhiteListSettingRequest() {}

  explicit RemoveWhiteListSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ids = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~RemoveWhiteListSettingRequest() = default;
};
class RemoveWhiteListSettingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> idsShrink{};
  shared_ptr<string> serviceCode{};

  RemoveWhiteListSettingShrinkRequest() {}

  explicit RemoveWhiteListSettingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idsShrink) {
      res["Ids"] = boost::any(*idsShrink);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      idsShrink = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~RemoveWhiteListSettingShrinkRequest() = default;
};
class RemoveWhiteListSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> resultObject{};
  shared_ptr<bool> success{};

  RemoveWhiteListSettingResponseBody() {}

  explicit RemoveWhiteListSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = boost::any(*resultObject);
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      resultObject = make_shared<bool>(boost::any_cast<bool>(m["ResultObject"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RemoveWhiteListSettingResponseBody() = default;
};
class RemoveWhiteListSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveWhiteListSettingResponseBody> body{};

  RemoveWhiteListSettingResponse() {}

  explicit RemoveWhiteListSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveWhiteListSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveWhiteListSettingResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveWhiteListSettingResponse() = default;
};
class Vehicle5ItemQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> paramType{};
  shared_ptr<string> vehicleNum{};
  shared_ptr<string> vehicleType{};

  Vehicle5ItemQueryRequest() {}

  explicit Vehicle5ItemQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (vehicleNum) {
      res["VehicleNum"] = boost::any(*vehicleNum);
    }
    if (vehicleType) {
      res["VehicleType"] = boost::any(*vehicleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("VehicleNum") != m.end() && !m["VehicleNum"].empty()) {
      vehicleNum = make_shared<string>(boost::any_cast<string>(m["VehicleNum"]));
    }
    if (m.find("VehicleType") != m.end() && !m["VehicleType"].empty()) {
      vehicleType = make_shared<string>(boost::any_cast<string>(m["VehicleType"]));
    }
  }


  virtual ~Vehicle5ItemQueryRequest() = default;
};
class Vehicle5ItemQueryResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> vehicleInfo{};

  Vehicle5ItemQueryResponseBodyResultObject() {}

  explicit Vehicle5ItemQueryResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (vehicleInfo) {
      res["VehicleInfo"] = boost::any(*vehicleInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("VehicleInfo") != m.end() && !m["VehicleInfo"].empty()) {
      vehicleInfo = make_shared<string>(boost::any_cast<string>(m["VehicleInfo"]));
    }
  }


  virtual ~Vehicle5ItemQueryResponseBodyResultObject() = default;
};
class Vehicle5ItemQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<Vehicle5ItemQueryResponseBodyResultObject> resultObject{};

  Vehicle5ItemQueryResponseBody() {}

  explicit Vehicle5ItemQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        Vehicle5ItemQueryResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<Vehicle5ItemQueryResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~Vehicle5ItemQueryResponseBody() = default;
};
class Vehicle5ItemQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Vehicle5ItemQueryResponseBody> body{};

  Vehicle5ItemQueryResponse() {}

  explicit Vehicle5ItemQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Vehicle5ItemQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Vehicle5ItemQueryResponseBody>(model1);
      }
    }
  }


  virtual ~Vehicle5ItemQueryResponse() = default;
};
class VehicleInsureQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> paramType{};
  shared_ptr<string> vehicleNum{};
  shared_ptr<string> vehicleType{};
  shared_ptr<string> vin{};

  VehicleInsureQueryRequest() {}

  explicit VehicleInsureQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (vehicleNum) {
      res["VehicleNum"] = boost::any(*vehicleNum);
    }
    if (vehicleType) {
      res["VehicleType"] = boost::any(*vehicleType);
    }
    if (vin) {
      res["Vin"] = boost::any(*vin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("VehicleNum") != m.end() && !m["VehicleNum"].empty()) {
      vehicleNum = make_shared<string>(boost::any_cast<string>(m["VehicleNum"]));
    }
    if (m.find("VehicleType") != m.end() && !m["VehicleType"].empty()) {
      vehicleType = make_shared<string>(boost::any_cast<string>(m["VehicleType"]));
    }
    if (m.find("Vin") != m.end() && !m["Vin"].empty()) {
      vin = make_shared<string>(boost::any_cast<string>(m["Vin"]));
    }
  }


  virtual ~VehicleInsureQueryRequest() = default;
};
class VehicleInsureQueryResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> vehicleInfo{};

  VehicleInsureQueryResponseBodyResultObject() {}

  explicit VehicleInsureQueryResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (vehicleInfo) {
      res["VehicleInfo"] = boost::any(*vehicleInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("VehicleInfo") != m.end() && !m["VehicleInfo"].empty()) {
      vehicleInfo = make_shared<string>(boost::any_cast<string>(m["VehicleInfo"]));
    }
  }


  virtual ~VehicleInsureQueryResponseBodyResultObject() = default;
};
class VehicleInsureQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<VehicleInsureQueryResponseBodyResultObject> resultObject{};

  VehicleInsureQueryResponseBody() {}

  explicit VehicleInsureQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        VehicleInsureQueryResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<VehicleInsureQueryResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~VehicleInsureQueryResponseBody() = default;
};
class VehicleInsureQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VehicleInsureQueryResponseBody> body{};

  VehicleInsureQueryResponse() {}

  explicit VehicleInsureQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VehicleInsureQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VehicleInsureQueryResponseBody>(model1);
      }
    }
  }


  virtual ~VehicleInsureQueryResponse() = default;
};
class VehicleMetaVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifyNum{};
  shared_ptr<string> paramType{};
  shared_ptr<string> userName{};
  shared_ptr<string> vehicleNum{};
  shared_ptr<string> vehicleType{};
  shared_ptr<string> verifyMetaType{};

  VehicleMetaVerifyRequest() {}

  explicit VehicleMetaVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifyNum) {
      res["IdentifyNum"] = boost::any(*identifyNum);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (vehicleNum) {
      res["VehicleNum"] = boost::any(*vehicleNum);
    }
    if (vehicleType) {
      res["VehicleType"] = boost::any(*vehicleType);
    }
    if (verifyMetaType) {
      res["VerifyMetaType"] = boost::any(*verifyMetaType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdentifyNum") != m.end() && !m["IdentifyNum"].empty()) {
      identifyNum = make_shared<string>(boost::any_cast<string>(m["IdentifyNum"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("VehicleNum") != m.end() && !m["VehicleNum"].empty()) {
      vehicleNum = make_shared<string>(boost::any_cast<string>(m["VehicleNum"]));
    }
    if (m.find("VehicleType") != m.end() && !m["VehicleType"].empty()) {
      vehicleType = make_shared<string>(boost::any_cast<string>(m["VehicleType"]));
    }
    if (m.find("VerifyMetaType") != m.end() && !m["VerifyMetaType"].empty()) {
      verifyMetaType = make_shared<string>(boost::any_cast<string>(m["VerifyMetaType"]));
    }
  }


  virtual ~VehicleMetaVerifyRequest() = default;
};
class VehicleMetaVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};

  VehicleMetaVerifyResponseBodyResultObject() {}

  explicit VehicleMetaVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
  }


  virtual ~VehicleMetaVerifyResponseBodyResultObject() = default;
};
class VehicleMetaVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<VehicleMetaVerifyResponseBodyResultObject> resultObject{};

  VehicleMetaVerifyResponseBody() {}

  explicit VehicleMetaVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        VehicleMetaVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<VehicleMetaVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~VehicleMetaVerifyResponseBody() = default;
};
class VehicleMetaVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VehicleMetaVerifyResponseBody> body{};

  VehicleMetaVerifyResponse() {}

  explicit VehicleMetaVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VehicleMetaVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VehicleMetaVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~VehicleMetaVerifyResponse() = default;
};
class VehicleMetaVerifyV2Request : public Darabonba::Model {
public:
  shared_ptr<string> identifyNum{};
  shared_ptr<string> paramType{};
  shared_ptr<string> userName{};
  shared_ptr<string> vehicleNum{};
  shared_ptr<string> vehicleType{};
  shared_ptr<string> verifyMetaType{};

  VehicleMetaVerifyV2Request() {}

  explicit VehicleMetaVerifyV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifyNum) {
      res["IdentifyNum"] = boost::any(*identifyNum);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (vehicleNum) {
      res["VehicleNum"] = boost::any(*vehicleNum);
    }
    if (vehicleType) {
      res["VehicleType"] = boost::any(*vehicleType);
    }
    if (verifyMetaType) {
      res["VerifyMetaType"] = boost::any(*verifyMetaType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdentifyNum") != m.end() && !m["IdentifyNum"].empty()) {
      identifyNum = make_shared<string>(boost::any_cast<string>(m["IdentifyNum"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("VehicleNum") != m.end() && !m["VehicleNum"].empty()) {
      vehicleNum = make_shared<string>(boost::any_cast<string>(m["VehicleNum"]));
    }
    if (m.find("VehicleType") != m.end() && !m["VehicleType"].empty()) {
      vehicleType = make_shared<string>(boost::any_cast<string>(m["VehicleType"]));
    }
    if (m.find("VerifyMetaType") != m.end() && !m["VerifyMetaType"].empty()) {
      verifyMetaType = make_shared<string>(boost::any_cast<string>(m["VerifyMetaType"]));
    }
  }


  virtual ~VehicleMetaVerifyV2Request() = default;
};
class VehicleMetaVerifyV2ResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> vehicleInfo{};

  VehicleMetaVerifyV2ResponseBodyResultObject() {}

  explicit VehicleMetaVerifyV2ResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (vehicleInfo) {
      res["VehicleInfo"] = boost::any(*vehicleInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("VehicleInfo") != m.end() && !m["VehicleInfo"].empty()) {
      vehicleInfo = make_shared<string>(boost::any_cast<string>(m["VehicleInfo"]));
    }
  }


  virtual ~VehicleMetaVerifyV2ResponseBodyResultObject() = default;
};
class VehicleMetaVerifyV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<VehicleMetaVerifyV2ResponseBodyResultObject> resultObject{};

  VehicleMetaVerifyV2ResponseBody() {}

  explicit VehicleMetaVerifyV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        VehicleMetaVerifyV2ResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<VehicleMetaVerifyV2ResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~VehicleMetaVerifyV2ResponseBody() = default;
};
class VehicleMetaVerifyV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VehicleMetaVerifyV2ResponseBody> body{};

  VehicleMetaVerifyV2Response() {}

  explicit VehicleMetaVerifyV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VehicleMetaVerifyV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VehicleMetaVerifyV2ResponseBody>(model1);
      }
    }
  }


  virtual ~VehicleMetaVerifyV2Response() = default;
};
class VehicleQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> paramType{};
  shared_ptr<string> vehicleNum{};
  shared_ptr<string> vehicleType{};

  VehicleQueryRequest() {}

  explicit VehicleQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (vehicleNum) {
      res["VehicleNum"] = boost::any(*vehicleNum);
    }
    if (vehicleType) {
      res["VehicleType"] = boost::any(*vehicleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("VehicleNum") != m.end() && !m["VehicleNum"].empty()) {
      vehicleNum = make_shared<string>(boost::any_cast<string>(m["VehicleNum"]));
    }
    if (m.find("VehicleType") != m.end() && !m["VehicleType"].empty()) {
      vehicleType = make_shared<string>(boost::any_cast<string>(m["VehicleType"]));
    }
  }


  virtual ~VehicleQueryRequest() = default;
};
class VehicleQueryResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> vehicleInfo{};

  VehicleQueryResponseBodyResultObject() {}

  explicit VehicleQueryResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (vehicleInfo) {
      res["VehicleInfo"] = boost::any(*vehicleInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("VehicleInfo") != m.end() && !m["VehicleInfo"].empty()) {
      vehicleInfo = make_shared<string>(boost::any_cast<string>(m["VehicleInfo"]));
    }
  }


  virtual ~VehicleQueryResponseBodyResultObject() = default;
};
class VehicleQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<VehicleQueryResponseBodyResultObject> resultObject{};

  VehicleQueryResponseBody() {}

  explicit VehicleQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        VehicleQueryResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<VehicleQueryResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~VehicleQueryResponseBody() = default;
};
class VehicleQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VehicleQueryResponseBody> body{};

  VehicleQueryResponse() {}

  explicit VehicleQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VehicleQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VehicleQueryResponseBody>(model1);
      }
    }
  }


  virtual ~VehicleQueryResponse() = default;
};
class VerifyMaterialRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> faceImageUrl{};
  shared_ptr<string> idCardBackImageUrl{};
  shared_ptr<string> idCardFrontImageUrl{};
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> name{};
  shared_ptr<string> userId{};

  VerifyMaterialRequest() {}

  explicit VerifyMaterialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (faceImageUrl) {
      res["FaceImageUrl"] = boost::any(*faceImageUrl);
    }
    if (idCardBackImageUrl) {
      res["IdCardBackImageUrl"] = boost::any(*idCardBackImageUrl);
    }
    if (idCardFrontImageUrl) {
      res["IdCardFrontImageUrl"] = boost::any(*idCardFrontImageUrl);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("FaceImageUrl") != m.end() && !m["FaceImageUrl"].empty()) {
      faceImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceImageUrl"]));
    }
    if (m.find("IdCardBackImageUrl") != m.end() && !m["IdCardBackImageUrl"].empty()) {
      idCardBackImageUrl = make_shared<string>(boost::any_cast<string>(m["IdCardBackImageUrl"]));
    }
    if (m.find("IdCardFrontImageUrl") != m.end() && !m["IdCardFrontImageUrl"].empty()) {
      idCardFrontImageUrl = make_shared<string>(boost::any_cast<string>(m["IdCardFrontImageUrl"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~VerifyMaterialRequest() = default;
};
class VerifyMaterialResponseBodyMaterialIdCardInfo : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> authority{};
  shared_ptr<string> backImageUrl{};
  shared_ptr<string> birth{};
  shared_ptr<string> endDate{};
  shared_ptr<string> frontImageUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> nationality{};
  shared_ptr<string> number{};
  shared_ptr<string> startDate{};

  VerifyMaterialResponseBodyMaterialIdCardInfo() {}

  explicit VerifyMaterialResponseBodyMaterialIdCardInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (authority) {
      res["Authority"] = boost::any(*authority);
    }
    if (backImageUrl) {
      res["BackImageUrl"] = boost::any(*backImageUrl);
    }
    if (birth) {
      res["Birth"] = boost::any(*birth);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (frontImageUrl) {
      res["FrontImageUrl"] = boost::any(*frontImageUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Authority") != m.end() && !m["Authority"].empty()) {
      authority = make_shared<string>(boost::any_cast<string>(m["Authority"]));
    }
    if (m.find("BackImageUrl") != m.end() && !m["BackImageUrl"].empty()) {
      backImageUrl = make_shared<string>(boost::any_cast<string>(m["BackImageUrl"]));
    }
    if (m.find("Birth") != m.end() && !m["Birth"].empty()) {
      birth = make_shared<string>(boost::any_cast<string>(m["Birth"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("FrontImageUrl") != m.end() && !m["FrontImageUrl"].empty()) {
      frontImageUrl = make_shared<string>(boost::any_cast<string>(m["FrontImageUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~VerifyMaterialResponseBodyMaterialIdCardInfo() = default;
};
class VerifyMaterialResponseBodyMaterial : public Darabonba::Model {
public:
  shared_ptr<string> faceGlobalUrl{};
  shared_ptr<string> faceImageUrl{};
  shared_ptr<string> faceMask{};
  shared_ptr<string> faceQuality{};
  shared_ptr<VerifyMaterialResponseBodyMaterialIdCardInfo> idCardInfo{};
  shared_ptr<string> idCardName{};
  shared_ptr<string> idCardNumber{};

  VerifyMaterialResponseBodyMaterial() {}

  explicit VerifyMaterialResponseBodyMaterial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceGlobalUrl) {
      res["FaceGlobalUrl"] = boost::any(*faceGlobalUrl);
    }
    if (faceImageUrl) {
      res["FaceImageUrl"] = boost::any(*faceImageUrl);
    }
    if (faceMask) {
      res["FaceMask"] = boost::any(*faceMask);
    }
    if (faceQuality) {
      res["FaceQuality"] = boost::any(*faceQuality);
    }
    if (idCardInfo) {
      res["IdCardInfo"] = idCardInfo ? boost::any(idCardInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (idCardName) {
      res["IdCardName"] = boost::any(*idCardName);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceGlobalUrl") != m.end() && !m["FaceGlobalUrl"].empty()) {
      faceGlobalUrl = make_shared<string>(boost::any_cast<string>(m["FaceGlobalUrl"]));
    }
    if (m.find("FaceImageUrl") != m.end() && !m["FaceImageUrl"].empty()) {
      faceImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceImageUrl"]));
    }
    if (m.find("FaceMask") != m.end() && !m["FaceMask"].empty()) {
      faceMask = make_shared<string>(boost::any_cast<string>(m["FaceMask"]));
    }
    if (m.find("FaceQuality") != m.end() && !m["FaceQuality"].empty()) {
      faceQuality = make_shared<string>(boost::any_cast<string>(m["FaceQuality"]));
    }
    if (m.find("IdCardInfo") != m.end() && !m["IdCardInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdCardInfo"].type()) {
        VerifyMaterialResponseBodyMaterialIdCardInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdCardInfo"]));
        idCardInfo = make_shared<VerifyMaterialResponseBodyMaterialIdCardInfo>(model1);
      }
    }
    if (m.find("IdCardName") != m.end() && !m["IdCardName"].empty()) {
      idCardName = make_shared<string>(boost::any_cast<string>(m["IdCardName"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
  }


  virtual ~VerifyMaterialResponseBodyMaterial() = default;
};
class VerifyMaterialResponseBody : public Darabonba::Model {
public:
  shared_ptr<double> authorityComparisionScore{};
  shared_ptr<double> idCardFaceComparisonScore{};
  shared_ptr<VerifyMaterialResponseBodyMaterial> material{};
  shared_ptr<string> requestId{};
  shared_ptr<long> verifyStatus{};
  shared_ptr<string> verifyToken{};

  VerifyMaterialResponseBody() {}

  explicit VerifyMaterialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorityComparisionScore) {
      res["AuthorityComparisionScore"] = boost::any(*authorityComparisionScore);
    }
    if (idCardFaceComparisonScore) {
      res["IdCardFaceComparisonScore"] = boost::any(*idCardFaceComparisonScore);
    }
    if (material) {
      res["Material"] = material ? boost::any(material->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (verifyStatus) {
      res["VerifyStatus"] = boost::any(*verifyStatus);
    }
    if (verifyToken) {
      res["VerifyToken"] = boost::any(*verifyToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorityComparisionScore") != m.end() && !m["AuthorityComparisionScore"].empty()) {
      authorityComparisionScore = make_shared<double>(boost::any_cast<double>(m["AuthorityComparisionScore"]));
    }
    if (m.find("IdCardFaceComparisonScore") != m.end() && !m["IdCardFaceComparisonScore"].empty()) {
      idCardFaceComparisonScore = make_shared<double>(boost::any_cast<double>(m["IdCardFaceComparisonScore"]));
    }
    if (m.find("Material") != m.end() && !m["Material"].empty()) {
      if (typeid(map<string, boost::any>) == m["Material"].type()) {
        VerifyMaterialResponseBodyMaterial model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Material"]));
        material = make_shared<VerifyMaterialResponseBodyMaterial>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VerifyStatus") != m.end() && !m["VerifyStatus"].empty()) {
      verifyStatus = make_shared<long>(boost::any_cast<long>(m["VerifyStatus"]));
    }
    if (m.find("VerifyToken") != m.end() && !m["VerifyToken"].empty()) {
      verifyToken = make_shared<string>(boost::any_cast<string>(m["VerifyToken"]));
    }
  }


  virtual ~VerifyMaterialResponseBody() = default;
};
class VerifyMaterialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyMaterialResponseBody> body{};

  VerifyMaterialResponse() {}

  explicit VerifyMaterialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyMaterialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyMaterialResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyMaterialResponse() = default;
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
  AIGCFaceVerifyResponse aIGCFaceVerifyWithOptions(shared_ptr<AIGCFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AIGCFaceVerifyResponse aIGCFaceVerify(shared_ptr<AIGCFaceVerifyRequest> request);
  BankMetaVerifyResponse bankMetaVerifyWithOptions(shared_ptr<BankMetaVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BankMetaVerifyResponse bankMetaVerify(shared_ptr<BankMetaVerifyRequest> request);
  CompareFaceVerifyResponse compareFaceVerifyWithOptions(shared_ptr<CompareFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompareFaceVerifyResponse compareFaceVerify(shared_ptr<CompareFaceVerifyRequest> request);
  CompareFacesResponse compareFacesWithOptions(shared_ptr<CompareFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompareFacesResponse compareFaces(shared_ptr<CompareFacesRequest> request);
  ContrastFaceVerifyResponse contrastFaceVerifyWithOptions(shared_ptr<ContrastFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ContrastFaceVerifyResponse contrastFaceVerify(shared_ptr<ContrastFaceVerifyRequest> request);
  ContrastFaceVerifyResponse contrastFaceVerifyAdvance(shared_ptr<ContrastFaceVerifyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAuthKeyResponse createAuthKeyWithOptions(shared_ptr<CreateAuthKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAuthKeyResponse createAuthKey(shared_ptr<CreateAuthKeyRequest> request);
  CreateVerifySettingResponse createVerifySettingWithOptions(shared_ptr<CreateVerifySettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVerifySettingResponse createVerifySetting(shared_ptr<CreateVerifySettingRequest> request);
  CredentialVerifyResponse credentialVerifyWithOptions(shared_ptr<CredentialVerifyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CredentialVerifyResponse credentialVerify(shared_ptr<CredentialVerifyRequest> request);
  CredentialVerifyV2Response credentialVerifyV2WithOptions(shared_ptr<CredentialVerifyV2Request> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CredentialVerifyV2Response credentialVerifyV2(shared_ptr<CredentialVerifyV2Request> request);
  CredentialVerifyV2Response credentialVerifyV2Advance(shared_ptr<CredentialVerifyV2AdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeepfakeDetectResponse deepfakeDetectWithOptions(shared_ptr<DeepfakeDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeepfakeDetectResponse deepfakeDetect(shared_ptr<DeepfakeDetectRequest> request);
  DeleteFaceVerifyResultResponse deleteFaceVerifyResultWithOptions(shared_ptr<DeleteFaceVerifyResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceVerifyResultResponse deleteFaceVerifyResult(shared_ptr<DeleteFaceVerifyResultRequest> request);
  DescribeDeviceInfoResponse describeDeviceInfoWithOptions(shared_ptr<DescribeDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeviceInfoResponse describeDeviceInfo(shared_ptr<DescribeDeviceInfoRequest> request);
  DescribeFaceGuardRiskResponse describeFaceGuardRiskWithOptions(shared_ptr<DescribeFaceGuardRiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaceGuardRiskResponse describeFaceGuardRisk(shared_ptr<DescribeFaceGuardRiskRequest> request);
  DescribeFaceVerifyResponse describeFaceVerifyWithOptions(shared_ptr<DescribeFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaceVerifyResponse describeFaceVerify(shared_ptr<DescribeFaceVerifyRequest> request);
  DescribeOssUploadTokenResponse describeOssUploadTokenWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOssUploadTokenResponse describeOssUploadToken();
  DescribePageFaceVerifyDataResponse describePageFaceVerifyDataWithOptions(shared_ptr<DescribePageFaceVerifyDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePageFaceVerifyDataResponse describePageFaceVerifyData(shared_ptr<DescribePageFaceVerifyDataRequest> request);
  DescribeSmartStatisticsPageListResponse describeSmartStatisticsPageListWithOptions(shared_ptr<DescribeSmartStatisticsPageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSmartStatisticsPageListResponse describeSmartStatisticsPageList(shared_ptr<DescribeSmartStatisticsPageListRequest> request);
  DescribeVerifyResultResponse describeVerifyResultWithOptions(shared_ptr<DescribeVerifyResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifyResultResponse describeVerifyResult(shared_ptr<DescribeVerifyResultRequest> request);
  DescribeVerifySDKResponse describeVerifySDKWithOptions(shared_ptr<DescribeVerifySDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifySDKResponse describeVerifySDK(shared_ptr<DescribeVerifySDKRequest> request);
  DescribeVerifyTokenResponse describeVerifyTokenWithOptions(shared_ptr<DescribeVerifyTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifyTokenResponse describeVerifyToken(shared_ptr<DescribeVerifyTokenRequest> request);
  DetectFaceAttributesResponse detectFaceAttributesWithOptions(shared_ptr<DetectFaceAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectFaceAttributesResponse detectFaceAttributes(shared_ptr<DetectFaceAttributesRequest> request);
  Id2MetaPeriodVerifyResponse id2MetaPeriodVerifyWithOptions(shared_ptr<Id2MetaPeriodVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Id2MetaPeriodVerifyResponse id2MetaPeriodVerify(shared_ptr<Id2MetaPeriodVerifyRequest> request);
  Id2MetaStandardVerifyResponse id2MetaStandardVerifyWithOptions(shared_ptr<Id2MetaStandardVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Id2MetaStandardVerifyResponse id2MetaStandardVerify(shared_ptr<Id2MetaStandardVerifyRequest> request);
  Id2MetaVerifyResponse id2MetaVerifyWithOptions(shared_ptr<Id2MetaVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Id2MetaVerifyResponse id2MetaVerify(shared_ptr<Id2MetaVerifyRequest> request);
  Id2MetaVerifyWithOCRResponse id2MetaVerifyWithOCRWithOptions(shared_ptr<Id2MetaVerifyWithOCRRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Id2MetaVerifyWithOCRResponse id2MetaVerifyWithOCR(shared_ptr<Id2MetaVerifyWithOCRRequest> request);
  Id2MetaVerifyWithOCRResponse id2MetaVerifyWithOCRAdvance(shared_ptr<Id2MetaVerifyWithOCRAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitFaceVerifyResponse initFaceVerifyWithOptions(shared_ptr<InitFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitFaceVerifyResponse initFaceVerify(shared_ptr<InitFaceVerifyRequest> request);
  InsertWhiteListSettingResponse insertWhiteListSettingWithOptions(shared_ptr<InsertWhiteListSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InsertWhiteListSettingResponse insertWhiteListSetting(shared_ptr<InsertWhiteListSettingRequest> request);
  LivenessFaceVerifyResponse livenessFaceVerifyWithOptions(shared_ptr<LivenessFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LivenessFaceVerifyResponse livenessFaceVerify(shared_ptr<LivenessFaceVerifyRequest> request);
  Mobile2MetaVerifyResponse mobile2MetaVerifyWithOptions(shared_ptr<Mobile2MetaVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Mobile2MetaVerifyResponse mobile2MetaVerify(shared_ptr<Mobile2MetaVerifyRequest> request);
  Mobile3MetaDetailStandardVerifyResponse mobile3MetaDetailStandardVerifyWithOptions(shared_ptr<Mobile3MetaDetailStandardVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Mobile3MetaDetailStandardVerifyResponse mobile3MetaDetailStandardVerify(shared_ptr<Mobile3MetaDetailStandardVerifyRequest> request);
  Mobile3MetaDetailVerifyResponse mobile3MetaDetailVerifyWithOptions(shared_ptr<Mobile3MetaDetailVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Mobile3MetaDetailVerifyResponse mobile3MetaDetailVerify(shared_ptr<Mobile3MetaDetailVerifyRequest> request);
  Mobile3MetaSimpleStandardVerifyResponse mobile3MetaSimpleStandardVerifyWithOptions(shared_ptr<Mobile3MetaSimpleStandardVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Mobile3MetaSimpleStandardVerifyResponse mobile3MetaSimpleStandardVerify(shared_ptr<Mobile3MetaSimpleStandardVerifyRequest> request);
  Mobile3MetaSimpleVerifyResponse mobile3MetaSimpleVerifyWithOptions(shared_ptr<Mobile3MetaSimpleVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Mobile3MetaSimpleVerifyResponse mobile3MetaSimpleVerify(shared_ptr<Mobile3MetaSimpleVerifyRequest> request);
  MobileDetectResponse mobileDetectWithOptions(shared_ptr<MobileDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MobileDetectResponse mobileDetect(shared_ptr<MobileDetectRequest> request);
  MobileOnlineStatusResponse mobileOnlineStatusWithOptions(shared_ptr<MobileOnlineStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MobileOnlineStatusResponse mobileOnlineStatus(shared_ptr<MobileOnlineStatusRequest> request);
  MobileOnlineTimeResponse mobileOnlineTimeWithOptions(shared_ptr<MobileOnlineTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MobileOnlineTimeResponse mobileOnlineTime(shared_ptr<MobileOnlineTimeRequest> request);
  ModifyDeviceInfoResponse modifyDeviceInfoWithOptions(shared_ptr<ModifyDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDeviceInfoResponse modifyDeviceInfo(shared_ptr<ModifyDeviceInfoRequest> request);
  PageQueryWhiteListSettingResponse pageQueryWhiteListSettingWithOptions(shared_ptr<PageQueryWhiteListSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PageQueryWhiteListSettingResponse pageQueryWhiteListSetting(shared_ptr<PageQueryWhiteListSettingRequest> request);
  RemoveWhiteListSettingResponse removeWhiteListSettingWithOptions(shared_ptr<RemoveWhiteListSettingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveWhiteListSettingResponse removeWhiteListSetting(shared_ptr<RemoveWhiteListSettingRequest> request);
  Vehicle5ItemQueryResponse vehicle5ItemQueryWithOptions(shared_ptr<Vehicle5ItemQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Vehicle5ItemQueryResponse vehicle5ItemQuery(shared_ptr<Vehicle5ItemQueryRequest> request);
  VehicleInsureQueryResponse vehicleInsureQueryWithOptions(shared_ptr<VehicleInsureQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VehicleInsureQueryResponse vehicleInsureQuery(shared_ptr<VehicleInsureQueryRequest> request);
  VehicleMetaVerifyResponse vehicleMetaVerifyWithOptions(shared_ptr<VehicleMetaVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VehicleMetaVerifyResponse vehicleMetaVerify(shared_ptr<VehicleMetaVerifyRequest> request);
  VehicleMetaVerifyV2Response vehicleMetaVerifyV2WithOptions(shared_ptr<VehicleMetaVerifyV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VehicleMetaVerifyV2Response vehicleMetaVerifyV2(shared_ptr<VehicleMetaVerifyV2Request> request);
  VehicleQueryResponse vehicleQueryWithOptions(shared_ptr<VehicleQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VehicleQueryResponse vehicleQuery(shared_ptr<VehicleQueryRequest> request);
  VerifyMaterialResponse verifyMaterialWithOptions(shared_ptr<VerifyMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyMaterialResponse verifyMaterial(shared_ptr<VerifyMaterialRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloudauth20190307

#endif
