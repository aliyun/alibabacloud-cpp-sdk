// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDAUTH-INTL20220809_H_
#define ALIBABACLOUD_CLOUDAUTH-INTL20220809_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Cloudauth-intl20220809 {
class CardOcrRequest : public Darabonba::Model {
public:
  shared_ptr<string> docType{};
  shared_ptr<string> idFaceQuality{};
  shared_ptr<string> idOcrPictureBase64{};
  shared_ptr<string> idOcrPictureUrl{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> merchantUserId{};
  shared_ptr<string> ocr{};
  shared_ptr<string> productCode{};
  shared_ptr<string> spoof{};

  CardOcrRequest() {}

  explicit CardOcrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (idFaceQuality) {
      res["IdFaceQuality"] = boost::any(*idFaceQuality);
    }
    if (idOcrPictureBase64) {
      res["IdOcrPictureBase64"] = boost::any(*idOcrPictureBase64);
    }
    if (idOcrPictureUrl) {
      res["IdOcrPictureUrl"] = boost::any(*idOcrPictureUrl);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (merchantUserId) {
      res["MerchantUserId"] = boost::any(*merchantUserId);
    }
    if (ocr) {
      res["Ocr"] = boost::any(*ocr);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (spoof) {
      res["Spoof"] = boost::any(*spoof);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("IdFaceQuality") != m.end() && !m["IdFaceQuality"].empty()) {
      idFaceQuality = make_shared<string>(boost::any_cast<string>(m["IdFaceQuality"]));
    }
    if (m.find("IdOcrPictureBase64") != m.end() && !m["IdOcrPictureBase64"].empty()) {
      idOcrPictureBase64 = make_shared<string>(boost::any_cast<string>(m["IdOcrPictureBase64"]));
    }
    if (m.find("IdOcrPictureUrl") != m.end() && !m["IdOcrPictureUrl"].empty()) {
      idOcrPictureUrl = make_shared<string>(boost::any_cast<string>(m["IdOcrPictureUrl"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("MerchantUserId") != m.end() && !m["MerchantUserId"].empty()) {
      merchantUserId = make_shared<string>(boost::any_cast<string>(m["MerchantUserId"]));
    }
    if (m.find("Ocr") != m.end() && !m["Ocr"].empty()) {
      ocr = make_shared<string>(boost::any_cast<string>(m["Ocr"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Spoof") != m.end() && !m["Spoof"].empty()) {
      spoof = make_shared<string>(boost::any_cast<string>(m["Spoof"]));
    }
  }


  virtual ~CardOcrRequest() = default;
};
class CardOcrResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> extCardInfo{};
  shared_ptr<string> extIdInfo{};
  shared_ptr<string> passed{};
  shared_ptr<string> subCode{};
  shared_ptr<string> transactionId{};

  CardOcrResponseBodyResult() {}

  explicit CardOcrResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extCardInfo) {
      res["ExtCardInfo"] = boost::any(*extCardInfo);
    }
    if (extIdInfo) {
      res["ExtIdInfo"] = boost::any(*extIdInfo);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtCardInfo") != m.end() && !m["ExtCardInfo"].empty()) {
      extCardInfo = make_shared<string>(boost::any_cast<string>(m["ExtCardInfo"]));
    }
    if (m.find("ExtIdInfo") != m.end() && !m["ExtIdInfo"].empty()) {
      extIdInfo = make_shared<string>(boost::any_cast<string>(m["ExtIdInfo"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~CardOcrResponseBodyResult() = default;
};
class CardOcrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CardOcrResponseBodyResult> result{};

  CardOcrResponseBody() {}

  explicit CardOcrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CardOcrResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CardOcrResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CardOcrResponseBody() = default;
};
class CardOcrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CardOcrResponseBody> body{};

  CardOcrResponse() {}

  explicit CardOcrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CardOcrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CardOcrResponseBody>(model1);
      }
    }
  }


  virtual ~CardOcrResponse() = default;
};
class CheckResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> extraImageControlList{};
  shared_ptr<string> isReturnImage{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> returnFiveCategorySpoofResult{};
  shared_ptr<string> transactionId{};

  CheckResultRequest() {}

  explicit CheckResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraImageControlList) {
      res["ExtraImageControlList"] = boost::any(*extraImageControlList);
    }
    if (isReturnImage) {
      res["IsReturnImage"] = boost::any(*isReturnImage);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (returnFiveCategorySpoofResult) {
      res["ReturnFiveCategorySpoofResult"] = boost::any(*returnFiveCategorySpoofResult);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraImageControlList") != m.end() && !m["ExtraImageControlList"].empty()) {
      extraImageControlList = make_shared<string>(boost::any_cast<string>(m["ExtraImageControlList"]));
    }
    if (m.find("IsReturnImage") != m.end() && !m["IsReturnImage"].empty()) {
      isReturnImage = make_shared<string>(boost::any_cast<string>(m["IsReturnImage"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("ReturnFiveCategorySpoofResult") != m.end() && !m["ReturnFiveCategorySpoofResult"].empty()) {
      returnFiveCategorySpoofResult = make_shared<string>(boost::any_cast<string>(m["ReturnFiveCategorySpoofResult"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~CheckResultRequest() = default;
};
class CheckResultResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> ekycResult{};
  shared_ptr<string> extBasicInfo{};
  shared_ptr<string> extFaceInfo{};
  shared_ptr<string> extIdInfo{};
  shared_ptr<string> extInfo{};
  shared_ptr<string> extRiskInfo{};
  shared_ptr<string> passed{};
  shared_ptr<string> subCode{};

  CheckResultResponseBodyResult() {}

  explicit CheckResultResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ekycResult) {
      res["EkycResult"] = boost::any(*ekycResult);
    }
    if (extBasicInfo) {
      res["ExtBasicInfo"] = boost::any(*extBasicInfo);
    }
    if (extFaceInfo) {
      res["ExtFaceInfo"] = boost::any(*extFaceInfo);
    }
    if (extIdInfo) {
      res["ExtIdInfo"] = boost::any(*extIdInfo);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (extRiskInfo) {
      res["ExtRiskInfo"] = boost::any(*extRiskInfo);
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
    if (m.find("EkycResult") != m.end() && !m["EkycResult"].empty()) {
      ekycResult = make_shared<string>(boost::any_cast<string>(m["EkycResult"]));
    }
    if (m.find("ExtBasicInfo") != m.end() && !m["ExtBasicInfo"].empty()) {
      extBasicInfo = make_shared<string>(boost::any_cast<string>(m["ExtBasicInfo"]));
    }
    if (m.find("ExtFaceInfo") != m.end() && !m["ExtFaceInfo"].empty()) {
      extFaceInfo = make_shared<string>(boost::any_cast<string>(m["ExtFaceInfo"]));
    }
    if (m.find("ExtIdInfo") != m.end() && !m["ExtIdInfo"].empty()) {
      extIdInfo = make_shared<string>(boost::any_cast<string>(m["ExtIdInfo"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("ExtRiskInfo") != m.end() && !m["ExtRiskInfo"].empty()) {
      extRiskInfo = make_shared<string>(boost::any_cast<string>(m["ExtRiskInfo"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
  }


  virtual ~CheckResultResponseBodyResult() = default;
};
class CheckResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CheckResultResponseBodyResult> result{};

  CheckResultResponseBody() {}

  explicit CheckResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckResultResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CheckResultResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CheckResultResponseBody() = default;
};
class CheckResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckResultResponseBody> body{};

  CheckResultResponse() {}

  explicit CheckResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckResultResponseBody>(model1);
      }
    }
  }


  virtual ~CheckResultResponse() = default;
};
class DeleteVerifyResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> deleteAfterQuery{};
  shared_ptr<string> deleteType{};
  shared_ptr<string> transactionId{};

  DeleteVerifyResultRequest() {}

  explicit DeleteVerifyResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleteAfterQuery) {
      res["DeleteAfterQuery"] = boost::any(*deleteAfterQuery);
    }
    if (deleteType) {
      res["DeleteType"] = boost::any(*deleteType);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeleteAfterQuery") != m.end() && !m["DeleteAfterQuery"].empty()) {
      deleteAfterQuery = make_shared<string>(boost::any_cast<string>(m["DeleteAfterQuery"]));
    }
    if (m.find("DeleteType") != m.end() && !m["DeleteType"].empty()) {
      deleteType = make_shared<string>(boost::any_cast<string>(m["DeleteType"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~DeleteVerifyResultRequest() = default;
};
class DeleteVerifyResultResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> deleteResult{};
  shared_ptr<string> transactionId{};

  DeleteVerifyResultResponseBodyResult() {}

  explicit DeleteVerifyResultResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleteResult) {
      res["DeleteResult"] = boost::any(*deleteResult);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeleteResult") != m.end() && !m["DeleteResult"].empty()) {
      deleteResult = make_shared<string>(boost::any_cast<string>(m["DeleteResult"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~DeleteVerifyResultResponseBodyResult() = default;
};
class DeleteVerifyResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DeleteVerifyResultResponseBodyResult> result{};

  DeleteVerifyResultResponseBody() {}

  explicit DeleteVerifyResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVerifyResultResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DeleteVerifyResultResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DeleteVerifyResultResponseBody() = default;
};
class DeleteVerifyResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVerifyResultResponseBody> body{};

  DeleteVerifyResultResponse() {}

  explicit DeleteVerifyResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVerifyResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVerifyResultResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVerifyResultResponse() = default;
};
class DocOcrRequest : public Darabonba::Model {
public:
  shared_ptr<string> cardSide{};
  shared_ptr<string> docType{};
  shared_ptr<string> idFaceQuality{};
  shared_ptr<string> idOcrPictureBase64{};
  shared_ptr<string> idOcrPictureUrl{};
  shared_ptr<string> idThreshold{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> merchantUserId{};
  shared_ptr<string> ocr{};
  shared_ptr<string> productCode{};
  shared_ptr<string> spoof{};

  DocOcrRequest() {}

  explicit DocOcrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardSide) {
      res["CardSide"] = boost::any(*cardSide);
    }
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (idFaceQuality) {
      res["IdFaceQuality"] = boost::any(*idFaceQuality);
    }
    if (idOcrPictureBase64) {
      res["IdOcrPictureBase64"] = boost::any(*idOcrPictureBase64);
    }
    if (idOcrPictureUrl) {
      res["IdOcrPictureUrl"] = boost::any(*idOcrPictureUrl);
    }
    if (idThreshold) {
      res["IdThreshold"] = boost::any(*idThreshold);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (merchantUserId) {
      res["MerchantUserId"] = boost::any(*merchantUserId);
    }
    if (ocr) {
      res["Ocr"] = boost::any(*ocr);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (spoof) {
      res["Spoof"] = boost::any(*spoof);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardSide") != m.end() && !m["CardSide"].empty()) {
      cardSide = make_shared<string>(boost::any_cast<string>(m["CardSide"]));
    }
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("IdFaceQuality") != m.end() && !m["IdFaceQuality"].empty()) {
      idFaceQuality = make_shared<string>(boost::any_cast<string>(m["IdFaceQuality"]));
    }
    if (m.find("IdOcrPictureBase64") != m.end() && !m["IdOcrPictureBase64"].empty()) {
      idOcrPictureBase64 = make_shared<string>(boost::any_cast<string>(m["IdOcrPictureBase64"]));
    }
    if (m.find("IdOcrPictureUrl") != m.end() && !m["IdOcrPictureUrl"].empty()) {
      idOcrPictureUrl = make_shared<string>(boost::any_cast<string>(m["IdOcrPictureUrl"]));
    }
    if (m.find("IdThreshold") != m.end() && !m["IdThreshold"].empty()) {
      idThreshold = make_shared<string>(boost::any_cast<string>(m["IdThreshold"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("MerchantUserId") != m.end() && !m["MerchantUserId"].empty()) {
      merchantUserId = make_shared<string>(boost::any_cast<string>(m["MerchantUserId"]));
    }
    if (m.find("Ocr") != m.end() && !m["Ocr"].empty()) {
      ocr = make_shared<string>(boost::any_cast<string>(m["Ocr"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Spoof") != m.end() && !m["Spoof"].empty()) {
      spoof = make_shared<string>(boost::any_cast<string>(m["Spoof"]));
    }
  }


  virtual ~DocOcrRequest() = default;
};
class DocOcrResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> extIdInfo{};
  shared_ptr<string> passed{};
  shared_ptr<string> subCode{};
  shared_ptr<string> transactionId{};

  DocOcrResponseBodyResult() {}

  explicit DocOcrResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extIdInfo) {
      res["ExtIdInfo"] = boost::any(*extIdInfo);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtIdInfo") != m.end() && !m["ExtIdInfo"].empty()) {
      extIdInfo = make_shared<string>(boost::any_cast<string>(m["ExtIdInfo"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~DocOcrResponseBodyResult() = default;
};
class DocOcrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DocOcrResponseBodyResult> result{};

  DocOcrResponseBody() {}

  explicit DocOcrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DocOcrResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DocOcrResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DocOcrResponseBody() = default;
};
class DocOcrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DocOcrResponseBody> body{};

  DocOcrResponse() {}

  explicit DocOcrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DocOcrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DocOcrResponseBody>(model1);
      }
    }
  }


  virtual ~DocOcrResponse() = default;
};
class EkycVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> authorize{};
  shared_ptr<string> crop{};
  shared_ptr<string> docName{};
  shared_ptr<string> docNo{};
  shared_ptr<string> docType{};
  shared_ptr<string> facePictureBase64{};
  shared_ptr<string> facePictureUrl{};
  shared_ptr<string> idOcrPictureBase64{};
  shared_ptr<string> idOcrPictureUrl{};
  shared_ptr<string> idThreshold{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> merchantUserId{};
  shared_ptr<string> productCode{};

  EkycVerifyRequest() {}

  explicit EkycVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorize) {
      res["Authorize"] = boost::any(*authorize);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    if (docName) {
      res["DocName"] = boost::any(*docName);
    }
    if (docNo) {
      res["DocNo"] = boost::any(*docNo);
    }
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (facePictureBase64) {
      res["FacePictureBase64"] = boost::any(*facePictureBase64);
    }
    if (facePictureUrl) {
      res["FacePictureUrl"] = boost::any(*facePictureUrl);
    }
    if (idOcrPictureBase64) {
      res["IdOcrPictureBase64"] = boost::any(*idOcrPictureBase64);
    }
    if (idOcrPictureUrl) {
      res["IdOcrPictureUrl"] = boost::any(*idOcrPictureUrl);
    }
    if (idThreshold) {
      res["IdThreshold"] = boost::any(*idThreshold);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (merchantUserId) {
      res["MerchantUserId"] = boost::any(*merchantUserId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Authorize") != m.end() && !m["Authorize"].empty()) {
      authorize = make_shared<string>(boost::any_cast<string>(m["Authorize"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
    if (m.find("DocName") != m.end() && !m["DocName"].empty()) {
      docName = make_shared<string>(boost::any_cast<string>(m["DocName"]));
    }
    if (m.find("DocNo") != m.end() && !m["DocNo"].empty()) {
      docNo = make_shared<string>(boost::any_cast<string>(m["DocNo"]));
    }
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("FacePictureBase64") != m.end() && !m["FacePictureBase64"].empty()) {
      facePictureBase64 = make_shared<string>(boost::any_cast<string>(m["FacePictureBase64"]));
    }
    if (m.find("FacePictureUrl") != m.end() && !m["FacePictureUrl"].empty()) {
      facePictureUrl = make_shared<string>(boost::any_cast<string>(m["FacePictureUrl"]));
    }
    if (m.find("IdOcrPictureBase64") != m.end() && !m["IdOcrPictureBase64"].empty()) {
      idOcrPictureBase64 = make_shared<string>(boost::any_cast<string>(m["IdOcrPictureBase64"]));
    }
    if (m.find("IdOcrPictureUrl") != m.end() && !m["IdOcrPictureUrl"].empty()) {
      idOcrPictureUrl = make_shared<string>(boost::any_cast<string>(m["IdOcrPictureUrl"]));
    }
    if (m.find("IdThreshold") != m.end() && !m["IdThreshold"].empty()) {
      idThreshold = make_shared<string>(boost::any_cast<string>(m["IdThreshold"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("MerchantUserId") != m.end() && !m["MerchantUserId"].empty()) {
      merchantUserId = make_shared<string>(boost::any_cast<string>(m["MerchantUserId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~EkycVerifyRequest() = default;
};
class EkycVerifyResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> extFaceInfo{};
  shared_ptr<string> extIdInfo{};
  shared_ptr<string> passed{};
  shared_ptr<string> subCode{};
  shared_ptr<string> transactionId{};

  EkycVerifyResponseBodyResult() {}

  explicit EkycVerifyResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extFaceInfo) {
      res["ExtFaceInfo"] = boost::any(*extFaceInfo);
    }
    if (extIdInfo) {
      res["ExtIdInfo"] = boost::any(*extIdInfo);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtFaceInfo") != m.end() && !m["ExtFaceInfo"].empty()) {
      extFaceInfo = make_shared<string>(boost::any_cast<string>(m["ExtFaceInfo"]));
    }
    if (m.find("ExtIdInfo") != m.end() && !m["ExtIdInfo"].empty()) {
      extIdInfo = make_shared<string>(boost::any_cast<string>(m["ExtIdInfo"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~EkycVerifyResponseBodyResult() = default;
};
class EkycVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<EkycVerifyResponseBodyResult> result{};

  EkycVerifyResponseBody() {}

  explicit EkycVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EkycVerifyResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<EkycVerifyResponseBodyResult>(model1);
      }
    }
  }


  virtual ~EkycVerifyResponseBody() = default;
};
class EkycVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EkycVerifyResponseBody> body{};

  EkycVerifyResponse() {}

  explicit EkycVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EkycVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EkycVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~EkycVerifyResponse() = default;
};
class FaceCompareRequest : public Darabonba::Model {
public:
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> sourceFacePicture{};
  shared_ptr<string> sourceFacePictureUrl{};
  shared_ptr<string> targetFacePicture{};
  shared_ptr<string> targetFacePictureUrl{};

  FaceCompareRequest() {}

  explicit FaceCompareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (sourceFacePicture) {
      res["SourceFacePicture"] = boost::any(*sourceFacePicture);
    }
    if (sourceFacePictureUrl) {
      res["SourceFacePictureUrl"] = boost::any(*sourceFacePictureUrl);
    }
    if (targetFacePicture) {
      res["TargetFacePicture"] = boost::any(*targetFacePicture);
    }
    if (targetFacePictureUrl) {
      res["TargetFacePictureUrl"] = boost::any(*targetFacePictureUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("SourceFacePicture") != m.end() && !m["SourceFacePicture"].empty()) {
      sourceFacePicture = make_shared<string>(boost::any_cast<string>(m["SourceFacePicture"]));
    }
    if (m.find("SourceFacePictureUrl") != m.end() && !m["SourceFacePictureUrl"].empty()) {
      sourceFacePictureUrl = make_shared<string>(boost::any_cast<string>(m["SourceFacePictureUrl"]));
    }
    if (m.find("TargetFacePicture") != m.end() && !m["TargetFacePicture"].empty()) {
      targetFacePicture = make_shared<string>(boost::any_cast<string>(m["TargetFacePicture"]));
    }
    if (m.find("TargetFacePictureUrl") != m.end() && !m["TargetFacePictureUrl"].empty()) {
      targetFacePictureUrl = make_shared<string>(boost::any_cast<string>(m["TargetFacePictureUrl"]));
    }
  }


  virtual ~FaceCompareRequest() = default;
};
class FaceCompareResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<double> faceComparisonScore{};
  shared_ptr<string> passed{};
  shared_ptr<string> transactionId{};

  FaceCompareResponseBodyResult() {}

  explicit FaceCompareResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceComparisonScore) {
      res["FaceComparisonScore"] = boost::any(*faceComparisonScore);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceComparisonScore") != m.end() && !m["FaceComparisonScore"].empty()) {
      faceComparisonScore = make_shared<double>(boost::any_cast<double>(m["FaceComparisonScore"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~FaceCompareResponseBodyResult() = default;
};
class FaceCompareResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<FaceCompareResponseBodyResult> result{};

  FaceCompareResponseBody() {}

  explicit FaceCompareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceCompareResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<FaceCompareResponseBodyResult>(model1);
      }
    }
  }


  virtual ~FaceCompareResponseBody() = default;
};
class FaceCompareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FaceCompareResponseBody> body{};

  FaceCompareResponse() {}

  explicit FaceCompareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceCompareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FaceCompareResponseBody>(model1);
      }
    }
  }


  virtual ~FaceCompareResponse() = default;
};
class FaceGuardRiskRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> productCode{};

  FaceGuardRiskRequest() {}

  explicit FaceGuardRiskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
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
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~FaceGuardRiskRequest() = default;
};
class FaceGuardRiskResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> riskExtends{};
  shared_ptr<string> riskTags{};
  shared_ptr<string> transactionId{};

  FaceGuardRiskResponseBodyResult() {}

  explicit FaceGuardRiskResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskExtends) {
      res["RiskExtends"] = boost::any(*riskExtends);
    }
    if (riskTags) {
      res["RiskTags"] = boost::any(*riskTags);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RiskExtends") != m.end() && !m["RiskExtends"].empty()) {
      riskExtends = make_shared<string>(boost::any_cast<string>(m["RiskExtends"]));
    }
    if (m.find("RiskTags") != m.end() && !m["RiskTags"].empty()) {
      riskTags = make_shared<string>(boost::any_cast<string>(m["RiskTags"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~FaceGuardRiskResponseBodyResult() = default;
};
class FaceGuardRiskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<FaceGuardRiskResponseBodyResult> result{};

  FaceGuardRiskResponseBody() {}

  explicit FaceGuardRiskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceGuardRiskResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<FaceGuardRiskResponseBodyResult>(model1);
      }
    }
  }


  virtual ~FaceGuardRiskResponseBody() = default;
};
class FaceGuardRiskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FaceGuardRiskResponseBody> body{};

  FaceGuardRiskResponse() {}

  explicit FaceGuardRiskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceGuardRiskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FaceGuardRiskResponseBody>(model1);
      }
    }
  }


  virtual ~FaceGuardRiskResponse() = default;
};
class FaceLivenessRequest : public Darabonba::Model {
public:
  shared_ptr<string> crop{};
  shared_ptr<string> facePictureBase64{};
  shared_ptr<string> facePictureUrl{};
  shared_ptr<string> faceQuality{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> merchantUserId{};
  shared_ptr<string> occlusion{};
  shared_ptr<string> productCode{};

  FaceLivenessRequest() {}

  explicit FaceLivenessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    if (facePictureBase64) {
      res["FacePictureBase64"] = boost::any(*facePictureBase64);
    }
    if (facePictureUrl) {
      res["FacePictureUrl"] = boost::any(*facePictureUrl);
    }
    if (faceQuality) {
      res["FaceQuality"] = boost::any(*faceQuality);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (merchantUserId) {
      res["MerchantUserId"] = boost::any(*merchantUserId);
    }
    if (occlusion) {
      res["Occlusion"] = boost::any(*occlusion);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
    if (m.find("FacePictureBase64") != m.end() && !m["FacePictureBase64"].empty()) {
      facePictureBase64 = make_shared<string>(boost::any_cast<string>(m["FacePictureBase64"]));
    }
    if (m.find("FacePictureUrl") != m.end() && !m["FacePictureUrl"].empty()) {
      facePictureUrl = make_shared<string>(boost::any_cast<string>(m["FacePictureUrl"]));
    }
    if (m.find("FaceQuality") != m.end() && !m["FaceQuality"].empty()) {
      faceQuality = make_shared<string>(boost::any_cast<string>(m["FaceQuality"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("MerchantUserId") != m.end() && !m["MerchantUserId"].empty()) {
      merchantUserId = make_shared<string>(boost::any_cast<string>(m["MerchantUserId"]));
    }
    if (m.find("Occlusion") != m.end() && !m["Occlusion"].empty()) {
      occlusion = make_shared<string>(boost::any_cast<string>(m["Occlusion"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~FaceLivenessRequest() = default;
};
class FaceLivenessResponseBodyResultExtFaceInfo : public Darabonba::Model {
public:
  shared_ptr<long> faceAge{};
  shared_ptr<string> faceAttack{};
  shared_ptr<string> faceGender{};
  shared_ptr<double> faceQualityScore{};
  shared_ptr<string> occlusionResult{};

  FaceLivenessResponseBodyResultExtFaceInfo() {}

  explicit FaceLivenessResponseBodyResultExtFaceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceAge) {
      res["FaceAge"] = boost::any(*faceAge);
    }
    if (faceAttack) {
      res["FaceAttack"] = boost::any(*faceAttack);
    }
    if (faceGender) {
      res["FaceGender"] = boost::any(*faceGender);
    }
    if (faceQualityScore) {
      res["FaceQualityScore"] = boost::any(*faceQualityScore);
    }
    if (occlusionResult) {
      res["OcclusionResult"] = boost::any(*occlusionResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceAge") != m.end() && !m["FaceAge"].empty()) {
      faceAge = make_shared<long>(boost::any_cast<long>(m["FaceAge"]));
    }
    if (m.find("FaceAttack") != m.end() && !m["FaceAttack"].empty()) {
      faceAttack = make_shared<string>(boost::any_cast<string>(m["FaceAttack"]));
    }
    if (m.find("FaceGender") != m.end() && !m["FaceGender"].empty()) {
      faceGender = make_shared<string>(boost::any_cast<string>(m["FaceGender"]));
    }
    if (m.find("FaceQualityScore") != m.end() && !m["FaceQualityScore"].empty()) {
      faceQualityScore = make_shared<double>(boost::any_cast<double>(m["FaceQualityScore"]));
    }
    if (m.find("OcclusionResult") != m.end() && !m["OcclusionResult"].empty()) {
      occlusionResult = make_shared<string>(boost::any_cast<string>(m["OcclusionResult"]));
    }
  }


  virtual ~FaceLivenessResponseBodyResultExtFaceInfo() = default;
};
class FaceLivenessResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<FaceLivenessResponseBodyResultExtFaceInfo> extFaceInfo{};
  shared_ptr<string> passed{};
  shared_ptr<string> subCode{};
  shared_ptr<string> transactionId{};

  FaceLivenessResponseBodyResult() {}

  explicit FaceLivenessResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extFaceInfo) {
      res["ExtFaceInfo"] = extFaceInfo ? boost::any(extFaceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtFaceInfo") != m.end() && !m["ExtFaceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtFaceInfo"].type()) {
        FaceLivenessResponseBodyResultExtFaceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtFaceInfo"]));
        extFaceInfo = make_shared<FaceLivenessResponseBodyResultExtFaceInfo>(model1);
      }
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~FaceLivenessResponseBodyResult() = default;
};
class FaceLivenessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<FaceLivenessResponseBodyResult> result{};

  FaceLivenessResponseBody() {}

  explicit FaceLivenessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceLivenessResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<FaceLivenessResponseBodyResult>(model1);
      }
    }
  }


  virtual ~FaceLivenessResponseBody() = default;
};
class FaceLivenessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FaceLivenessResponseBody> body{};

  FaceLivenessResponse() {}

  explicit FaceLivenessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FaceLivenessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FaceLivenessResponseBody>(model1);
      }
    }
  }


  virtual ~FaceLivenessResponse() = default;
};
class FraudResultCallBackRequest : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> extParams{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> verifyDeployEnv{};

  FraudResultCallBackRequest() {}

  explicit FraudResultCallBackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (extParams) {
      res["ExtParams"] = boost::any(*extParams);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (verifyDeployEnv) {
      res["VerifyDeployEnv"] = boost::any(*verifyDeployEnv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("ExtParams") != m.end() && !m["ExtParams"].empty()) {
      extParams = make_shared<string>(boost::any_cast<string>(m["ExtParams"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("VerifyDeployEnv") != m.end() && !m["VerifyDeployEnv"].empty()) {
      verifyDeployEnv = make_shared<string>(boost::any_cast<string>(m["VerifyDeployEnv"]));
    }
  }


  virtual ~FraudResultCallBackRequest() = default;
};
class FraudResultCallBackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FraudResultCallBackResponseBody() {}

  explicit FraudResultCallBackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FraudResultCallBackResponseBody() = default;
};
class FraudResultCallBackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FraudResultCallBackResponseBody> body{};

  FraudResultCallBackResponse() {}

  explicit FraudResultCallBackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FraudResultCallBackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FraudResultCallBackResponseBody>(model1);
      }
    }
  }


  virtual ~FraudResultCallBackResponse() = default;
};
class Id2MetaPeriodVerifyIntlRequest : public Darabonba::Model {
public:
  shared_ptr<string> docName{};
  shared_ptr<string> docNo{};
  shared_ptr<string> docType{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> merchantUserId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> sceneCode{};
  shared_ptr<string> validityEndDate{};
  shared_ptr<string> validityStartDate{};

  Id2MetaPeriodVerifyIntlRequest() {}

  explicit Id2MetaPeriodVerifyIntlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docName) {
      res["DocName"] = boost::any(*docName);
    }
    if (docNo) {
      res["DocNo"] = boost::any(*docNo);
    }
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (merchantUserId) {
      res["MerchantUserId"] = boost::any(*merchantUserId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (sceneCode) {
      res["SceneCode"] = boost::any(*sceneCode);
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
    if (m.find("DocName") != m.end() && !m["DocName"].empty()) {
      docName = make_shared<string>(boost::any_cast<string>(m["DocName"]));
    }
    if (m.find("DocNo") != m.end() && !m["DocNo"].empty()) {
      docNo = make_shared<string>(boost::any_cast<string>(m["DocNo"]));
    }
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("MerchantUserId") != m.end() && !m["MerchantUserId"].empty()) {
      merchantUserId = make_shared<string>(boost::any_cast<string>(m["MerchantUserId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("SceneCode") != m.end() && !m["SceneCode"].empty()) {
      sceneCode = make_shared<string>(boost::any_cast<string>(m["SceneCode"]));
    }
    if (m.find("ValidityEndDate") != m.end() && !m["ValidityEndDate"].empty()) {
      validityEndDate = make_shared<string>(boost::any_cast<string>(m["ValidityEndDate"]));
    }
    if (m.find("ValidityStartDate") != m.end() && !m["ValidityStartDate"].empty()) {
      validityStartDate = make_shared<string>(boost::any_cast<string>(m["ValidityStartDate"]));
    }
  }


  virtual ~Id2MetaPeriodVerifyIntlRequest() = default;
};
class Id2MetaPeriodVerifyIntlResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> passed{};
  shared_ptr<string> subCode{};

  Id2MetaPeriodVerifyIntlResponseBodyResult() {}

  explicit Id2MetaPeriodVerifyIntlResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
  }


  virtual ~Id2MetaPeriodVerifyIntlResponseBodyResult() = default;
};
class Id2MetaPeriodVerifyIntlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<Id2MetaPeriodVerifyIntlResponseBodyResult> result{};

  Id2MetaPeriodVerifyIntlResponseBody() {}

  explicit Id2MetaPeriodVerifyIntlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Id2MetaPeriodVerifyIntlResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<Id2MetaPeriodVerifyIntlResponseBodyResult>(model1);
      }
    }
  }


  virtual ~Id2MetaPeriodVerifyIntlResponseBody() = default;
};
class Id2MetaPeriodVerifyIntlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Id2MetaPeriodVerifyIntlResponseBody> body{};

  Id2MetaPeriodVerifyIntlResponse() {}

  explicit Id2MetaPeriodVerifyIntlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Id2MetaPeriodVerifyIntlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Id2MetaPeriodVerifyIntlResponseBody>(model1);
      }
    }
  }


  virtual ~Id2MetaPeriodVerifyIntlResponse() = default;
};
class Id2MetaVerifyIntlRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifyNum{};
  shared_ptr<string> paramType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> userName{};

  Id2MetaVerifyIntlRequest() {}

  explicit Id2MetaVerifyIntlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
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
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~Id2MetaVerifyIntlRequest() = default;
};
class Id2MetaVerifyIntlResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};

  Id2MetaVerifyIntlResponseBodyResult() {}

  explicit Id2MetaVerifyIntlResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~Id2MetaVerifyIntlResponseBodyResult() = default;
};
class Id2MetaVerifyIntlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<Id2MetaVerifyIntlResponseBodyResult> result{};

  Id2MetaVerifyIntlResponseBody() {}

  explicit Id2MetaVerifyIntlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Id2MetaVerifyIntlResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<Id2MetaVerifyIntlResponseBodyResult>(model1);
      }
    }
  }


  virtual ~Id2MetaVerifyIntlResponseBody() = default;
};
class Id2MetaVerifyIntlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Id2MetaVerifyIntlResponseBody> body{};

  Id2MetaVerifyIntlResponse() {}

  explicit Id2MetaVerifyIntlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Id2MetaVerifyIntlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Id2MetaVerifyIntlResponseBody>(model1);
      }
    }
  }


  virtual ~Id2MetaVerifyIntlResponse() = default;
};
class InitializeRequest : public Darabonba::Model {
public:
  shared_ptr<string> appQualityCheck{};
  shared_ptr<string> authorize{};
  shared_ptr<string> callbackToken{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> crop{};
  shared_ptr<string> docScanMode{};
  shared_ptr<string> docType{};
  shared_ptr<string> docVideo{};
  shared_ptr<string> experienceCode{};
  shared_ptr<string> facePictureBase64{};
  shared_ptr<string> facePictureUrl{};
  shared_ptr<string> idFaceQuality{};
  shared_ptr<string> idSpoof{};
  shared_ptr<string> idThreshold{};
  shared_ptr<string> languageConfig{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> merchantUserId{};
  shared_ptr<string> metaInfo{};
  shared_ptr<string> model{};
  shared_ptr<string> ocr{};
  shared_ptr<string> procedurePriority{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productFlow{};
  shared_ptr<string> returnUrl{};
  shared_ptr<string> sceneCode{};
  shared_ptr<string> securityLevel{};
  shared_ptr<string> showAlbumIcon{};
  shared_ptr<string> showGuidePage{};
  shared_ptr<string> showOcrResult{};
  shared_ptr<string> styleConfig{};

  InitializeRequest() {}

  explicit InitializeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appQualityCheck) {
      res["AppQualityCheck"] = boost::any(*appQualityCheck);
    }
    if (authorize) {
      res["Authorize"] = boost::any(*authorize);
    }
    if (callbackToken) {
      res["CallbackToken"] = boost::any(*callbackToken);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    if (docScanMode) {
      res["DocScanMode"] = boost::any(*docScanMode);
    }
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (docVideo) {
      res["DocVideo"] = boost::any(*docVideo);
    }
    if (experienceCode) {
      res["ExperienceCode"] = boost::any(*experienceCode);
    }
    if (facePictureBase64) {
      res["FacePictureBase64"] = boost::any(*facePictureBase64);
    }
    if (facePictureUrl) {
      res["FacePictureUrl"] = boost::any(*facePictureUrl);
    }
    if (idFaceQuality) {
      res["IdFaceQuality"] = boost::any(*idFaceQuality);
    }
    if (idSpoof) {
      res["IdSpoof"] = boost::any(*idSpoof);
    }
    if (idThreshold) {
      res["IdThreshold"] = boost::any(*idThreshold);
    }
    if (languageConfig) {
      res["LanguageConfig"] = boost::any(*languageConfig);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (merchantUserId) {
      res["MerchantUserId"] = boost::any(*merchantUserId);
    }
    if (metaInfo) {
      res["MetaInfo"] = boost::any(*metaInfo);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (ocr) {
      res["Ocr"] = boost::any(*ocr);
    }
    if (procedurePriority) {
      res["ProcedurePriority"] = boost::any(*procedurePriority);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productFlow) {
      res["ProductFlow"] = boost::any(*productFlow);
    }
    if (returnUrl) {
      res["ReturnUrl"] = boost::any(*returnUrl);
    }
    if (sceneCode) {
      res["SceneCode"] = boost::any(*sceneCode);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    if (showAlbumIcon) {
      res["ShowAlbumIcon"] = boost::any(*showAlbumIcon);
    }
    if (showGuidePage) {
      res["ShowGuidePage"] = boost::any(*showGuidePage);
    }
    if (showOcrResult) {
      res["ShowOcrResult"] = boost::any(*showOcrResult);
    }
    if (styleConfig) {
      res["StyleConfig"] = boost::any(*styleConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppQualityCheck") != m.end() && !m["AppQualityCheck"].empty()) {
      appQualityCheck = make_shared<string>(boost::any_cast<string>(m["AppQualityCheck"]));
    }
    if (m.find("Authorize") != m.end() && !m["Authorize"].empty()) {
      authorize = make_shared<string>(boost::any_cast<string>(m["Authorize"]));
    }
    if (m.find("CallbackToken") != m.end() && !m["CallbackToken"].empty()) {
      callbackToken = make_shared<string>(boost::any_cast<string>(m["CallbackToken"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
    if (m.find("DocScanMode") != m.end() && !m["DocScanMode"].empty()) {
      docScanMode = make_shared<string>(boost::any_cast<string>(m["DocScanMode"]));
    }
    if (m.find("DocType") != m.end() && !m["DocType"].empty()) {
      docType = make_shared<string>(boost::any_cast<string>(m["DocType"]));
    }
    if (m.find("DocVideo") != m.end() && !m["DocVideo"].empty()) {
      docVideo = make_shared<string>(boost::any_cast<string>(m["DocVideo"]));
    }
    if (m.find("ExperienceCode") != m.end() && !m["ExperienceCode"].empty()) {
      experienceCode = make_shared<string>(boost::any_cast<string>(m["ExperienceCode"]));
    }
    if (m.find("FacePictureBase64") != m.end() && !m["FacePictureBase64"].empty()) {
      facePictureBase64 = make_shared<string>(boost::any_cast<string>(m["FacePictureBase64"]));
    }
    if (m.find("FacePictureUrl") != m.end() && !m["FacePictureUrl"].empty()) {
      facePictureUrl = make_shared<string>(boost::any_cast<string>(m["FacePictureUrl"]));
    }
    if (m.find("IdFaceQuality") != m.end() && !m["IdFaceQuality"].empty()) {
      idFaceQuality = make_shared<string>(boost::any_cast<string>(m["IdFaceQuality"]));
    }
    if (m.find("IdSpoof") != m.end() && !m["IdSpoof"].empty()) {
      idSpoof = make_shared<string>(boost::any_cast<string>(m["IdSpoof"]));
    }
    if (m.find("IdThreshold") != m.end() && !m["IdThreshold"].empty()) {
      idThreshold = make_shared<string>(boost::any_cast<string>(m["IdThreshold"]));
    }
    if (m.find("LanguageConfig") != m.end() && !m["LanguageConfig"].empty()) {
      languageConfig = make_shared<string>(boost::any_cast<string>(m["LanguageConfig"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("MerchantUserId") != m.end() && !m["MerchantUserId"].empty()) {
      merchantUserId = make_shared<string>(boost::any_cast<string>(m["MerchantUserId"]));
    }
    if (m.find("MetaInfo") != m.end() && !m["MetaInfo"].empty()) {
      metaInfo = make_shared<string>(boost::any_cast<string>(m["MetaInfo"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Ocr") != m.end() && !m["Ocr"].empty()) {
      ocr = make_shared<string>(boost::any_cast<string>(m["Ocr"]));
    }
    if (m.find("ProcedurePriority") != m.end() && !m["ProcedurePriority"].empty()) {
      procedurePriority = make_shared<string>(boost::any_cast<string>(m["ProcedurePriority"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductFlow") != m.end() && !m["ProductFlow"].empty()) {
      productFlow = make_shared<string>(boost::any_cast<string>(m["ProductFlow"]));
    }
    if (m.find("ReturnUrl") != m.end() && !m["ReturnUrl"].empty()) {
      returnUrl = make_shared<string>(boost::any_cast<string>(m["ReturnUrl"]));
    }
    if (m.find("SceneCode") != m.end() && !m["SceneCode"].empty()) {
      sceneCode = make_shared<string>(boost::any_cast<string>(m["SceneCode"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<string>(boost::any_cast<string>(m["SecurityLevel"]));
    }
    if (m.find("ShowAlbumIcon") != m.end() && !m["ShowAlbumIcon"].empty()) {
      showAlbumIcon = make_shared<string>(boost::any_cast<string>(m["ShowAlbumIcon"]));
    }
    if (m.find("ShowGuidePage") != m.end() && !m["ShowGuidePage"].empty()) {
      showGuidePage = make_shared<string>(boost::any_cast<string>(m["ShowGuidePage"]));
    }
    if (m.find("ShowOcrResult") != m.end() && !m["ShowOcrResult"].empty()) {
      showOcrResult = make_shared<string>(boost::any_cast<string>(m["ShowOcrResult"]));
    }
    if (m.find("StyleConfig") != m.end() && !m["StyleConfig"].empty()) {
      styleConfig = make_shared<string>(boost::any_cast<string>(m["StyleConfig"]));
    }
  }


  virtual ~InitializeRequest() = default;
};
class InitializeResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> clientCfg{};
  shared_ptr<string> transactionId{};
  shared_ptr<string> transactionUrl{};

  InitializeResponseBodyResult() {}

  explicit InitializeResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientCfg) {
      res["ClientCfg"] = boost::any(*clientCfg);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    if (transactionUrl) {
      res["TransactionUrl"] = boost::any(*transactionUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientCfg") != m.end() && !m["ClientCfg"].empty()) {
      clientCfg = make_shared<string>(boost::any_cast<string>(m["ClientCfg"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
    if (m.find("TransactionUrl") != m.end() && !m["TransactionUrl"].empty()) {
      transactionUrl = make_shared<string>(boost::any_cast<string>(m["TransactionUrl"]));
    }
  }


  virtual ~InitializeResponseBodyResult() = default;
};
class InitializeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<InitializeResponseBodyResult> result{};

  InitializeResponseBody() {}

  explicit InitializeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitializeResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<InitializeResponseBodyResult>(model1);
      }
    }
  }


  virtual ~InitializeResponseBody() = default;
};
class InitializeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitializeResponseBody> body{};

  InitializeResponse() {}

  explicit InitializeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitializeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitializeResponseBody>(model1);
      }
    }
  }


  virtual ~InitializeResponse() = default;
};
class Mobile3MetaVerifyIntlRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifyNum{};
  shared_ptr<string> mobile{};
  shared_ptr<string> paramType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> userName{};

  Mobile3MetaVerifyIntlRequest() {}

  explicit Mobile3MetaVerifyIntlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
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
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~Mobile3MetaVerifyIntlRequest() = default;
};
class Mobile3MetaVerifyIntlResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> ispName{};
  shared_ptr<string> subCode{};

  Mobile3MetaVerifyIntlResponseBodyResult() {}

  explicit Mobile3MetaVerifyIntlResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~Mobile3MetaVerifyIntlResponseBodyResult() = default;
};
class Mobile3MetaVerifyIntlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<Mobile3MetaVerifyIntlResponseBodyResult> result{};

  Mobile3MetaVerifyIntlResponseBody() {}

  explicit Mobile3MetaVerifyIntlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Mobile3MetaVerifyIntlResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<Mobile3MetaVerifyIntlResponseBodyResult>(model1);
      }
    }
  }


  virtual ~Mobile3MetaVerifyIntlResponseBody() = default;
};
class Mobile3MetaVerifyIntlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Mobile3MetaVerifyIntlResponseBody> body{};

  Mobile3MetaVerifyIntlResponse() {}

  explicit Mobile3MetaVerifyIntlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Mobile3MetaVerifyIntlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Mobile3MetaVerifyIntlResponseBody>(model1);
      }
    }
  }


  virtual ~Mobile3MetaVerifyIntlResponse() = default;
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
  CardOcrResponse cardOcrWithOptions(shared_ptr<CardOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CardOcrResponse cardOcr(shared_ptr<CardOcrRequest> request);
  CheckResultResponse checkResultWithOptions(shared_ptr<CheckResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckResultResponse checkResult(shared_ptr<CheckResultRequest> request);
  DeleteVerifyResultResponse deleteVerifyResultWithOptions(shared_ptr<DeleteVerifyResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVerifyResultResponse deleteVerifyResult(shared_ptr<DeleteVerifyResultRequest> request);
  DocOcrResponse docOcrWithOptions(shared_ptr<DocOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DocOcrResponse docOcr(shared_ptr<DocOcrRequest> request);
  EkycVerifyResponse ekycVerifyWithOptions(shared_ptr<EkycVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EkycVerifyResponse ekycVerify(shared_ptr<EkycVerifyRequest> request);
  FaceCompareResponse faceCompareWithOptions(shared_ptr<FaceCompareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceCompareResponse faceCompare(shared_ptr<FaceCompareRequest> request);
  FaceGuardRiskResponse faceGuardRiskWithOptions(shared_ptr<FaceGuardRiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceGuardRiskResponse faceGuardRisk(shared_ptr<FaceGuardRiskRequest> request);
  FaceLivenessResponse faceLivenessWithOptions(shared_ptr<FaceLivenessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceLivenessResponse faceLiveness(shared_ptr<FaceLivenessRequest> request);
  FraudResultCallBackResponse fraudResultCallBackWithOptions(shared_ptr<FraudResultCallBackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FraudResultCallBackResponse fraudResultCallBack(shared_ptr<FraudResultCallBackRequest> request);
  Id2MetaPeriodVerifyIntlResponse id2MetaPeriodVerifyIntlWithOptions(shared_ptr<Id2MetaPeriodVerifyIntlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Id2MetaPeriodVerifyIntlResponse id2MetaPeriodVerifyIntl(shared_ptr<Id2MetaPeriodVerifyIntlRequest> request);
  Id2MetaVerifyIntlResponse id2MetaVerifyIntlWithOptions(shared_ptr<Id2MetaVerifyIntlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Id2MetaVerifyIntlResponse id2MetaVerifyIntl(shared_ptr<Id2MetaVerifyIntlRequest> request);
  InitializeResponse initializeWithOptions(shared_ptr<InitializeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitializeResponse initialize(shared_ptr<InitializeRequest> request);
  Mobile3MetaVerifyIntlResponse mobile3MetaVerifyIntlWithOptions(shared_ptr<Mobile3MetaVerifyIntlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Mobile3MetaVerifyIntlResponse mobile3MetaVerifyIntl(shared_ptr<Mobile3MetaVerifyIntlRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloudauth-intl20220809

#endif
