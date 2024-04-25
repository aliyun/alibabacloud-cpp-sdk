// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDAUTH-INTL20220809_H_
#define ALIBABACLOUD_CLOUDAUTH-INTL20220809_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

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
class DescribeAddressLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> coin{};
  shared_ptr<string> merchantBizId{};

  DescribeAddressLabelsRequest() {}

  explicit DescribeAddressLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (coin) {
      res["Coin"] = boost::any(*coin);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Coin") != m.end() && !m["Coin"].empty()) {
      coin = make_shared<string>(boost::any_cast<string>(m["Coin"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
  }


  virtual ~DescribeAddressLabelsRequest() = default;
};
class DescribeAddressLabelsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> labelList{};

  DescribeAddressLabelsResponseBodyData() {}

  explicit DescribeAddressLabelsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelList) {
      res["LabelList"] = boost::any(*labelList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelList") != m.end() && !m["LabelList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LabelList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LabelList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labelList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAddressLabelsResponseBodyData() = default;
};
class DescribeAddressLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeAddressLabelsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAddressLabelsResponseBody() {}

  explicit DescribeAddressLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAddressLabelsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAddressLabelsResponseBodyData>(model1);
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


  virtual ~DescribeAddressLabelsResponseBody() = default;
};
class DescribeAddressLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAddressLabelsResponseBody> body{};

  DescribeAddressLabelsResponse() {}

  explicit DescribeAddressLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAddressLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAddressLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAddressLabelsResponse() = default;
};
class DescribeAddressOverviewRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> coin{};
  shared_ptr<string> merchantBizId{};

  DescribeAddressOverviewRequest() {}

  explicit DescribeAddressOverviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (coin) {
      res["Coin"] = boost::any(*coin);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Coin") != m.end() && !m["Coin"].empty()) {
      coin = make_shared<string>(boost::any_cast<string>(m["Coin"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
  }


  virtual ~DescribeAddressOverviewRequest() = default;
};
class DescribeAddressOverviewResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> balance{};
  shared_ptr<long> firstSeen{};
  shared_ptr<long> lastSeen{};
  shared_ptr<long> receivedTxsCount{};
  shared_ptr<long> spentTxsCount{};
  shared_ptr<double> totalReceived{};
  shared_ptr<double> totalSpent{};
  shared_ptr<long> txsCount{};

  DescribeAddressOverviewResponseBodyData() {}

  explicit DescribeAddressOverviewResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (balance) {
      res["Balance"] = boost::any(*balance);
    }
    if (firstSeen) {
      res["FirstSeen"] = boost::any(*firstSeen);
    }
    if (lastSeen) {
      res["LastSeen"] = boost::any(*lastSeen);
    }
    if (receivedTxsCount) {
      res["ReceivedTxsCount"] = boost::any(*receivedTxsCount);
    }
    if (spentTxsCount) {
      res["SpentTxsCount"] = boost::any(*spentTxsCount);
    }
    if (totalReceived) {
      res["TotalReceived"] = boost::any(*totalReceived);
    }
    if (totalSpent) {
      res["TotalSpent"] = boost::any(*totalSpent);
    }
    if (txsCount) {
      res["TxsCount"] = boost::any(*txsCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Balance") != m.end() && !m["Balance"].empty()) {
      balance = make_shared<double>(boost::any_cast<double>(m["Balance"]));
    }
    if (m.find("FirstSeen") != m.end() && !m["FirstSeen"].empty()) {
      firstSeen = make_shared<long>(boost::any_cast<long>(m["FirstSeen"]));
    }
    if (m.find("LastSeen") != m.end() && !m["LastSeen"].empty()) {
      lastSeen = make_shared<long>(boost::any_cast<long>(m["LastSeen"]));
    }
    if (m.find("ReceivedTxsCount") != m.end() && !m["ReceivedTxsCount"].empty()) {
      receivedTxsCount = make_shared<long>(boost::any_cast<long>(m["ReceivedTxsCount"]));
    }
    if (m.find("SpentTxsCount") != m.end() && !m["SpentTxsCount"].empty()) {
      spentTxsCount = make_shared<long>(boost::any_cast<long>(m["SpentTxsCount"]));
    }
    if (m.find("TotalReceived") != m.end() && !m["TotalReceived"].empty()) {
      totalReceived = make_shared<double>(boost::any_cast<double>(m["TotalReceived"]));
    }
    if (m.find("TotalSpent") != m.end() && !m["TotalSpent"].empty()) {
      totalSpent = make_shared<double>(boost::any_cast<double>(m["TotalSpent"]));
    }
    if (m.find("TxsCount") != m.end() && !m["TxsCount"].empty()) {
      txsCount = make_shared<long>(boost::any_cast<long>(m["TxsCount"]));
    }
  }


  virtual ~DescribeAddressOverviewResponseBodyData() = default;
};
class DescribeAddressOverviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeAddressOverviewResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAddressOverviewResponseBody() {}

  explicit DescribeAddressOverviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAddressOverviewResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAddressOverviewResponseBodyData>(model1);
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


  virtual ~DescribeAddressOverviewResponseBody() = default;
};
class DescribeAddressOverviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAddressOverviewResponseBody> body{};

  DescribeAddressOverviewResponse() {}

  explicit DescribeAddressOverviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAddressOverviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAddressOverviewResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAddressOverviewResponse() = default;
};
class DescribeMaliciousAddressRequest : public Darabonba::Model {
public:
  shared_ptr<string> coin{};
  shared_ptr<string> end{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> start{};

  DescribeMaliciousAddressRequest() {}

  explicit DescribeMaliciousAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coin) {
      res["Coin"] = boost::any(*coin);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Coin") != m.end() && !m["Coin"].empty()) {
      coin = make_shared<string>(boost::any_cast<string>(m["Coin"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<string>(boost::any_cast<string>(m["End"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<string>(boost::any_cast<string>(m["Start"]));
    }
  }


  virtual ~DescribeMaliciousAddressRequest() = default;
};
class DescribeMaliciousAddressResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> addTime{};
  shared_ptr<string> address{};
  shared_ptr<string> coin{};
  shared_ptr<string> detail{};
  shared_ptr<string> tag{};

  DescribeMaliciousAddressResponseBodyData() {}

  explicit DescribeMaliciousAddressResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addTime) {
      res["AddTime"] = boost::any(*addTime);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (coin) {
      res["Coin"] = boost::any(*coin);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddTime") != m.end() && !m["AddTime"].empty()) {
      addTime = make_shared<string>(boost::any_cast<string>(m["AddTime"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Coin") != m.end() && !m["Coin"].empty()) {
      coin = make_shared<string>(boost::any_cast<string>(m["Coin"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~DescribeMaliciousAddressResponseBodyData() = default;
};
class DescribeMaliciousAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeMaliciousAddressResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeMaliciousAddressResponseBody() {}

  explicit DescribeMaliciousAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeMaliciousAddressResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMaliciousAddressResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeMaliciousAddressResponseBodyData>>(expect1);
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


  virtual ~DescribeMaliciousAddressResponseBody() = default;
};
class DescribeMaliciousAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMaliciousAddressResponseBody> body{};

  DescribeMaliciousAddressResponse() {}

  explicit DescribeMaliciousAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMaliciousAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMaliciousAddressResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMaliciousAddressResponse() = default;
};
class DescribeRiskScoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> coin{};
  shared_ptr<string> merchantBizId{};

  DescribeRiskScoreRequest() {}

  explicit DescribeRiskScoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (coin) {
      res["Coin"] = boost::any(*coin);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Coin") != m.end() && !m["Coin"].empty()) {
      coin = make_shared<string>(boost::any_cast<string>(m["Coin"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
  }


  virtual ~DescribeRiskScoreRequest() = default;
};
class DescribeRiskScoreResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> detailList{};
  shared_ptr<string> hackingEvent{};
  shared_ptr<string> riskLevel{};
  shared_ptr<long> score{};

  DescribeRiskScoreResponseBodyData() {}

  explicit DescribeRiskScoreResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailList) {
      res["DetailList"] = boost::any(*detailList);
    }
    if (hackingEvent) {
      res["HackingEvent"] = boost::any(*hackingEvent);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailList") != m.end() && !m["DetailList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DetailList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DetailList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      detailList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HackingEvent") != m.end() && !m["HackingEvent"].empty()) {
      hackingEvent = make_shared<string>(boost::any_cast<string>(m["HackingEvent"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["RiskLevel"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
  }


  virtual ~DescribeRiskScoreResponseBodyData() = default;
};
class DescribeRiskScoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeRiskScoreResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeRiskScoreResponseBody() {}

  explicit DescribeRiskScoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRiskScoreResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeRiskScoreResponseBodyData>(model1);
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


  virtual ~DescribeRiskScoreResponseBody() = default;
};
class DescribeRiskScoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRiskScoreResponseBody> body{};

  DescribeRiskScoreResponse() {}

  explicit DescribeRiskScoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRiskScoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRiskScoreResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRiskScoreResponse() = default;
};
class DescribeTransactionsListRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> coin{};
  shared_ptr<long> endTimestamp{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<long> page{};
  shared_ptr<long> startTimestamp{};
  shared_ptr<string> type{};

  DescribeTransactionsListRequest() {}

  explicit DescribeTransactionsListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (coin) {
      res["Coin"] = boost::any(*coin);
    }
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Coin") != m.end() && !m["Coin"].empty()) {
      coin = make_shared<string>(boost::any_cast<string>(m["Coin"]));
    }
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<long>(boost::any_cast<long>(m["EndTimestamp"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<long>(boost::any_cast<long>(m["StartTimestamp"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeTransactionsListRequest() = default;
};
class DescribeTransactionsListResponseBodyDataIn : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<double> amount{};
  shared_ptr<string> label{};
  shared_ptr<vector<string>> txHashList{};
  shared_ptr<long> type{};

  DescribeTransactionsListResponseBodyDataIn() {}

  explicit DescribeTransactionsListResponseBodyDataIn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (txHashList) {
      res["TxHashList"] = boost::any(*txHashList);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<double>(boost::any_cast<double>(m["Amount"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("TxHashList") != m.end() && !m["TxHashList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TxHashList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TxHashList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      txHashList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~DescribeTransactionsListResponseBodyDataIn() = default;
};
class DescribeTransactionsListResponseBodyDataOut : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<double> amount{};
  shared_ptr<string> label{};
  shared_ptr<vector<string>> txHashList{};
  shared_ptr<long> type{};

  DescribeTransactionsListResponseBodyDataOut() {}

  explicit DescribeTransactionsListResponseBodyDataOut(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (txHashList) {
      res["TxHashList"] = boost::any(*txHashList);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<double>(boost::any_cast<double>(m["Amount"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("TxHashList") != m.end() && !m["TxHashList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TxHashList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TxHashList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      txHashList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~DescribeTransactionsListResponseBodyDataOut() = default;
};
class DescribeTransactionsListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTransactionsListResponseBodyDataIn>> in{};
  shared_ptr<vector<DescribeTransactionsListResponseBodyDataOut>> out{};
  shared_ptr<long> page{};
  shared_ptr<long> totalPages{};
  shared_ptr<long> transactionsOnPage{};

  DescribeTransactionsListResponseBodyData() {}

  explicit DescribeTransactionsListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (in) {
      vector<boost::any> temp1;
      for(auto item1:*in){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["In"] = boost::any(temp1);
    }
    if (out) {
      vector<boost::any> temp1;
      for(auto item1:*out){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Out"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    if (transactionsOnPage) {
      res["TransactionsOnPage"] = boost::any(*transactionsOnPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("In") != m.end() && !m["In"].empty()) {
      if (typeid(vector<boost::any>) == m["In"].type()) {
        vector<DescribeTransactionsListResponseBodyDataIn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["In"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTransactionsListResponseBodyDataIn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        in = make_shared<vector<DescribeTransactionsListResponseBodyDataIn>>(expect1);
      }
    }
    if (m.find("Out") != m.end() && !m["Out"].empty()) {
      if (typeid(vector<boost::any>) == m["Out"].type()) {
        vector<DescribeTransactionsListResponseBodyDataOut> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Out"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTransactionsListResponseBodyDataOut model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        out = make_shared<vector<DescribeTransactionsListResponseBodyDataOut>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
    if (m.find("TransactionsOnPage") != m.end() && !m["TransactionsOnPage"].empty()) {
      transactionsOnPage = make_shared<long>(boost::any_cast<long>(m["TransactionsOnPage"]));
    }
  }


  virtual ~DescribeTransactionsListResponseBodyData() = default;
};
class DescribeTransactionsListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeTransactionsListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeTransactionsListResponseBody() {}

  explicit DescribeTransactionsListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTransactionsListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeTransactionsListResponseBodyData>(model1);
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


  virtual ~DescribeTransactionsListResponseBody() = default;
};
class DescribeTransactionsListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTransactionsListResponseBody> body{};

  DescribeTransactionsListResponse() {}

  explicit DescribeTransactionsListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTransactionsListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTransactionsListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTransactionsListResponse() = default;
};
class DescribeWeb3AddressLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> chainShortName{};
  shared_ptr<string> merchantBizId{};

  DescribeWeb3AddressLabelsRequest() {}

  explicit DescribeWeb3AddressLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (chainShortName) {
      res["ChainShortName"] = boost::any(*chainShortName);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("ChainShortName") != m.end() && !m["ChainShortName"].empty()) {
      chainShortName = make_shared<string>(boost::any_cast<string>(m["ChainShortName"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
  }


  virtual ~DescribeWeb3AddressLabelsRequest() = default;
};
class DescribeWeb3AddressLabelsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> balance{};
  shared_ptr<string> balanceSymbol{};
  shared_ptr<string> chainName{};
  shared_ptr<string> chainShortName{};
  shared_ptr<string> contractAddress{};
  shared_ptr<string> createContractAddress{};
  shared_ptr<string> createContractTransactionHash{};
  shared_ptr<string> customRiskAssessment{};
  shared_ptr<string> firstTransactionTime{};
  shared_ptr<string> isProducerAddress{};
  shared_ptr<string> lastTransactionTime{};
  shared_ptr<string> receiveAmount{};
  shared_ptr<string> sendAmount{};
  shared_ptr<string> tag{};
  shared_ptr<string> token{};
  shared_ptr<long> tokenAmount{};
  shared_ptr<string> tokenList{};
  shared_ptr<long> transactionCount{};

  DescribeWeb3AddressLabelsResponseBodyData() {}

  explicit DescribeWeb3AddressLabelsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (balance) {
      res["Balance"] = boost::any(*balance);
    }
    if (balanceSymbol) {
      res["BalanceSymbol"] = boost::any(*balanceSymbol);
    }
    if (chainName) {
      res["ChainName"] = boost::any(*chainName);
    }
    if (chainShortName) {
      res["ChainShortName"] = boost::any(*chainShortName);
    }
    if (contractAddress) {
      res["ContractAddress"] = boost::any(*contractAddress);
    }
    if (createContractAddress) {
      res["CreateContractAddress"] = boost::any(*createContractAddress);
    }
    if (createContractTransactionHash) {
      res["CreateContractTransactionHash"] = boost::any(*createContractTransactionHash);
    }
    if (customRiskAssessment) {
      res["CustomRiskAssessment"] = boost::any(*customRiskAssessment);
    }
    if (firstTransactionTime) {
      res["FirstTransactionTime"] = boost::any(*firstTransactionTime);
    }
    if (isProducerAddress) {
      res["IsProducerAddress"] = boost::any(*isProducerAddress);
    }
    if (lastTransactionTime) {
      res["LastTransactionTime"] = boost::any(*lastTransactionTime);
    }
    if (receiveAmount) {
      res["ReceiveAmount"] = boost::any(*receiveAmount);
    }
    if (sendAmount) {
      res["SendAmount"] = boost::any(*sendAmount);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (tokenAmount) {
      res["TokenAmount"] = boost::any(*tokenAmount);
    }
    if (tokenList) {
      res["TokenList"] = boost::any(*tokenList);
    }
    if (transactionCount) {
      res["TransactionCount"] = boost::any(*transactionCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Balance") != m.end() && !m["Balance"].empty()) {
      balance = make_shared<string>(boost::any_cast<string>(m["Balance"]));
    }
    if (m.find("BalanceSymbol") != m.end() && !m["BalanceSymbol"].empty()) {
      balanceSymbol = make_shared<string>(boost::any_cast<string>(m["BalanceSymbol"]));
    }
    if (m.find("ChainName") != m.end() && !m["ChainName"].empty()) {
      chainName = make_shared<string>(boost::any_cast<string>(m["ChainName"]));
    }
    if (m.find("ChainShortName") != m.end() && !m["ChainShortName"].empty()) {
      chainShortName = make_shared<string>(boost::any_cast<string>(m["ChainShortName"]));
    }
    if (m.find("ContractAddress") != m.end() && !m["ContractAddress"].empty()) {
      contractAddress = make_shared<string>(boost::any_cast<string>(m["ContractAddress"]));
    }
    if (m.find("CreateContractAddress") != m.end() && !m["CreateContractAddress"].empty()) {
      createContractAddress = make_shared<string>(boost::any_cast<string>(m["CreateContractAddress"]));
    }
    if (m.find("CreateContractTransactionHash") != m.end() && !m["CreateContractTransactionHash"].empty()) {
      createContractTransactionHash = make_shared<string>(boost::any_cast<string>(m["CreateContractTransactionHash"]));
    }
    if (m.find("CustomRiskAssessment") != m.end() && !m["CustomRiskAssessment"].empty()) {
      customRiskAssessment = make_shared<string>(boost::any_cast<string>(m["CustomRiskAssessment"]));
    }
    if (m.find("FirstTransactionTime") != m.end() && !m["FirstTransactionTime"].empty()) {
      firstTransactionTime = make_shared<string>(boost::any_cast<string>(m["FirstTransactionTime"]));
    }
    if (m.find("IsProducerAddress") != m.end() && !m["IsProducerAddress"].empty()) {
      isProducerAddress = make_shared<string>(boost::any_cast<string>(m["IsProducerAddress"]));
    }
    if (m.find("LastTransactionTime") != m.end() && !m["LastTransactionTime"].empty()) {
      lastTransactionTime = make_shared<string>(boost::any_cast<string>(m["LastTransactionTime"]));
    }
    if (m.find("ReceiveAmount") != m.end() && !m["ReceiveAmount"].empty()) {
      receiveAmount = make_shared<string>(boost::any_cast<string>(m["ReceiveAmount"]));
    }
    if (m.find("SendAmount") != m.end() && !m["SendAmount"].empty()) {
      sendAmount = make_shared<string>(boost::any_cast<string>(m["SendAmount"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("TokenAmount") != m.end() && !m["TokenAmount"].empty()) {
      tokenAmount = make_shared<long>(boost::any_cast<long>(m["TokenAmount"]));
    }
    if (m.find("TokenList") != m.end() && !m["TokenList"].empty()) {
      tokenList = make_shared<string>(boost::any_cast<string>(m["TokenList"]));
    }
    if (m.find("TransactionCount") != m.end() && !m["TransactionCount"].empty()) {
      transactionCount = make_shared<long>(boost::any_cast<long>(m["TransactionCount"]));
    }
  }


  virtual ~DescribeWeb3AddressLabelsResponseBodyData() = default;
};
class DescribeWeb3AddressLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeWeb3AddressLabelsResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeWeb3AddressLabelsResponseBody() {}

  explicit DescribeWeb3AddressLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
        DescribeWeb3AddressLabelsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeWeb3AddressLabelsResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeWeb3AddressLabelsResponseBody() = default;
};
class DescribeWeb3AddressLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWeb3AddressLabelsResponseBody> body{};

  DescribeWeb3AddressLabelsResponse() {}

  explicit DescribeWeb3AddressLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWeb3AddressLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWeb3AddressLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWeb3AddressLabelsResponse() = default;
};
class DescribeWeb3RiskScoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> chainShortName{};
  shared_ptr<long> depth{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> objectId{};
  shared_ptr<string> objectType{};

  DescribeWeb3RiskScoreRequest() {}

  explicit DescribeWeb3RiskScoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chainShortName) {
      res["ChainShortName"] = boost::any(*chainShortName);
    }
    if (depth) {
      res["Depth"] = boost::any(*depth);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChainShortName") != m.end() && !m["ChainShortName"].empty()) {
      chainShortName = make_shared<string>(boost::any_cast<string>(m["ChainShortName"]));
    }
    if (m.find("Depth") != m.end() && !m["Depth"].empty()) {
      depth = make_shared<long>(boost::any_cast<long>(m["Depth"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
  }


  virtual ~DescribeWeb3RiskScoreRequest() = default;
};
class DescribeWeb3RiskScoreResponseBodyDataRiskResults : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> severity{};
  shared_ptr<string> type{};

  DescribeWeb3RiskScoreResponseBodyDataRiskResults() {}

  explicit DescribeWeb3RiskScoreResponseBodyDataRiskResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeWeb3RiskScoreResponseBodyDataRiskResults() = default;
};
class DescribeWeb3RiskScoreResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeWeb3RiskScoreResponseBodyDataRiskResults>> riskResults{};
  shared_ptr<string> score{};

  DescribeWeb3RiskScoreResponseBodyData() {}

  explicit DescribeWeb3RiskScoreResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskResults) {
      vector<boost::any> temp1;
      for(auto item1:*riskResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RiskResults"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RiskResults") != m.end() && !m["RiskResults"].empty()) {
      if (typeid(vector<boost::any>) == m["RiskResults"].type()) {
        vector<DescribeWeb3RiskScoreResponseBodyDataRiskResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RiskResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWeb3RiskScoreResponseBodyDataRiskResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        riskResults = make_shared<vector<DescribeWeb3RiskScoreResponseBodyDataRiskResults>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
  }


  virtual ~DescribeWeb3RiskScoreResponseBodyData() = default;
};
class DescribeWeb3RiskScoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeWeb3RiskScoreResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeWeb3RiskScoreResponseBody() {}

  explicit DescribeWeb3RiskScoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
        DescribeWeb3RiskScoreResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeWeb3RiskScoreResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeWeb3RiskScoreResponseBody() = default;
};
class DescribeWeb3RiskScoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWeb3RiskScoreResponseBody> body{};

  DescribeWeb3RiskScoreResponse() {}

  explicit DescribeWeb3RiskScoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWeb3RiskScoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWeb3RiskScoreResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWeb3RiskScoreResponse() = default;
};
class DescribeWeb3TransactionLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> chainShortName{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> transaction{};

  DescribeWeb3TransactionLabelsRequest() {}

  explicit DescribeWeb3TransactionLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chainShortName) {
      res["ChainShortName"] = boost::any(*chainShortName);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (transaction) {
      res["Transaction"] = boost::any(*transaction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChainShortName") != m.end() && !m["ChainShortName"].empty()) {
      chainShortName = make_shared<string>(boost::any_cast<string>(m["ChainShortName"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("Transaction") != m.end() && !m["Transaction"].empty()) {
      transaction = make_shared<string>(boost::any_cast<string>(m["Transaction"]));
    }
  }


  virtual ~DescribeWeb3TransactionLabelsRequest() = default;
};
class DescribeWeb3TransactionLabelsResponseBodyDataContractDetails : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<string> from{};
  shared_ptr<long> gasLimit{};
  shared_ptr<long> index{};
  shared_ptr<string> to{};

  DescribeWeb3TransactionLabelsResponseBodyDataContractDetails() {}

  explicit DescribeWeb3TransactionLabelsResponseBodyDataContractDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (gasLimit) {
      res["GasLimit"] = boost::any(*gasLimit);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("GasLimit") != m.end() && !m["GasLimit"].empty()) {
      gasLimit = make_shared<long>(boost::any_cast<long>(m["GasLimit"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
  }


  virtual ~DescribeWeb3TransactionLabelsResponseBodyDataContractDetails() = default;
};
class DescribeWeb3TransactionLabelsResponseBodyDataInputDetails : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> inputHash{};
  shared_ptr<string> isContract{};
  shared_ptr<string> tag{};

  DescribeWeb3TransactionLabelsResponseBodyDataInputDetails() {}

  explicit DescribeWeb3TransactionLabelsResponseBodyDataInputDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (inputHash) {
      res["InputHash"] = boost::any(*inputHash);
    }
    if (isContract) {
      res["IsContract"] = boost::any(*isContract);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("InputHash") != m.end() && !m["InputHash"].empty()) {
      inputHash = make_shared<string>(boost::any_cast<string>(m["InputHash"]));
    }
    if (m.find("IsContract") != m.end() && !m["IsContract"].empty()) {
      isContract = make_shared<string>(boost::any_cast<string>(m["IsContract"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~DescribeWeb3TransactionLabelsResponseBodyDataInputDetails() = default;
};
class DescribeWeb3TransactionLabelsResponseBodyDataOutputDetails : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> inputHash{};
  shared_ptr<string> isContract{};
  shared_ptr<string> tag{};

  DescribeWeb3TransactionLabelsResponseBodyDataOutputDetails() {}

  explicit DescribeWeb3TransactionLabelsResponseBodyDataOutputDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (inputHash) {
      res["InputHash"] = boost::any(*inputHash);
    }
    if (isContract) {
      res["IsContract"] = boost::any(*isContract);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("InputHash") != m.end() && !m["InputHash"].empty()) {
      inputHash = make_shared<string>(boost::any_cast<string>(m["InputHash"]));
    }
    if (m.find("IsContract") != m.end() && !m["IsContract"].empty()) {
      isContract = make_shared<string>(boost::any_cast<string>(m["IsContract"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~DescribeWeb3TransactionLabelsResponseBodyDataOutputDetails() = default;
};
class DescribeWeb3TransactionLabelsResponseBodyDataTokenTransferDetails : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<string> from{};
  shared_ptr<long> index{};
  shared_ptr<string> symbol{};
  shared_ptr<string> to{};
  shared_ptr<string> token{};
  shared_ptr<string> tokenContractAddress{};
  shared_ptr<string> tokenId{};

  DescribeWeb3TransactionLabelsResponseBodyDataTokenTransferDetails() {}

  explicit DescribeWeb3TransactionLabelsResponseBodyDataTokenTransferDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (symbol) {
      res["Symbol"] = boost::any(*symbol);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (tokenContractAddress) {
      res["TokenContractAddress"] = boost::any(*tokenContractAddress);
    }
    if (tokenId) {
      res["TokenId"] = boost::any(*tokenId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Symbol") != m.end() && !m["Symbol"].empty()) {
      symbol = make_shared<string>(boost::any_cast<string>(m["Symbol"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("TokenContractAddress") != m.end() && !m["TokenContractAddress"].empty()) {
      tokenContractAddress = make_shared<string>(boost::any_cast<string>(m["TokenContractAddress"]));
    }
    if (m.find("TokenId") != m.end() && !m["TokenId"].empty()) {
      tokenId = make_shared<string>(boost::any_cast<string>(m["TokenId"]));
    }
  }


  virtual ~DescribeWeb3TransactionLabelsResponseBodyDataTokenTransferDetails() = default;
};
class DescribeWeb3TransactionLabelsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<string> chainName{};
  shared_ptr<string> chainShortName{};
  shared_ptr<vector<DescribeWeb3TransactionLabelsResponseBodyDataContractDetails>> contractDetails{};
  shared_ptr<string> errorLog{};
  shared_ptr<long> gasLimit{};
  shared_ptr<string> gasPrice{};
  shared_ptr<long> gasUsed{};
  shared_ptr<long> height{};
  shared_ptr<long> index{};
  shared_ptr<string> inputData{};
  shared_ptr<vector<DescribeWeb3TransactionLabelsResponseBodyDataInputDetails>> inputDetails{};
  shared_ptr<string> methodId{};
  shared_ptr<string> nonce{};
  shared_ptr<vector<DescribeWeb3TransactionLabelsResponseBodyDataOutputDetails>> outputDetails{};
  shared_ptr<long> state{};
  shared_ptr<vector<DescribeWeb3TransactionLabelsResponseBodyDataTokenTransferDetails>> tokenTransferDetails{};
  shared_ptr<string> transactionSymbol{};
  shared_ptr<string> transactionTime{};
  shared_ptr<string> transactionType{};
  shared_ptr<string> txfee{};
  shared_ptr<string> txid{};

  DescribeWeb3TransactionLabelsResponseBodyData() {}

  explicit DescribeWeb3TransactionLabelsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (chainName) {
      res["ChainName"] = boost::any(*chainName);
    }
    if (chainShortName) {
      res["ChainShortName"] = boost::any(*chainShortName);
    }
    if (contractDetails) {
      vector<boost::any> temp1;
      for(auto item1:*contractDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ContractDetails"] = boost::any(temp1);
    }
    if (errorLog) {
      res["ErrorLog"] = boost::any(*errorLog);
    }
    if (gasLimit) {
      res["GasLimit"] = boost::any(*gasLimit);
    }
    if (gasPrice) {
      res["GasPrice"] = boost::any(*gasPrice);
    }
    if (gasUsed) {
      res["GasUsed"] = boost::any(*gasUsed);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (inputData) {
      res["InputData"] = boost::any(*inputData);
    }
    if (inputDetails) {
      vector<boost::any> temp1;
      for(auto item1:*inputDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InputDetails"] = boost::any(temp1);
    }
    if (methodId) {
      res["MethodId"] = boost::any(*methodId);
    }
    if (nonce) {
      res["Nonce"] = boost::any(*nonce);
    }
    if (outputDetails) {
      vector<boost::any> temp1;
      for(auto item1:*outputDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OutputDetails"] = boost::any(temp1);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (tokenTransferDetails) {
      vector<boost::any> temp1;
      for(auto item1:*tokenTransferDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TokenTransferDetails"] = boost::any(temp1);
    }
    if (transactionSymbol) {
      res["TransactionSymbol"] = boost::any(*transactionSymbol);
    }
    if (transactionTime) {
      res["TransactionTime"] = boost::any(*transactionTime);
    }
    if (transactionType) {
      res["TransactionType"] = boost::any(*transactionType);
    }
    if (txfee) {
      res["Txfee"] = boost::any(*txfee);
    }
    if (txid) {
      res["Txid"] = boost::any(*txid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("ChainName") != m.end() && !m["ChainName"].empty()) {
      chainName = make_shared<string>(boost::any_cast<string>(m["ChainName"]));
    }
    if (m.find("ChainShortName") != m.end() && !m["ChainShortName"].empty()) {
      chainShortName = make_shared<string>(boost::any_cast<string>(m["ChainShortName"]));
    }
    if (m.find("ContractDetails") != m.end() && !m["ContractDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["ContractDetails"].type()) {
        vector<DescribeWeb3TransactionLabelsResponseBodyDataContractDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ContractDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWeb3TransactionLabelsResponseBodyDataContractDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contractDetails = make_shared<vector<DescribeWeb3TransactionLabelsResponseBodyDataContractDetails>>(expect1);
      }
    }
    if (m.find("ErrorLog") != m.end() && !m["ErrorLog"].empty()) {
      errorLog = make_shared<string>(boost::any_cast<string>(m["ErrorLog"]));
    }
    if (m.find("GasLimit") != m.end() && !m["GasLimit"].empty()) {
      gasLimit = make_shared<long>(boost::any_cast<long>(m["GasLimit"]));
    }
    if (m.find("GasPrice") != m.end() && !m["GasPrice"].empty()) {
      gasPrice = make_shared<string>(boost::any_cast<string>(m["GasPrice"]));
    }
    if (m.find("GasUsed") != m.end() && !m["GasUsed"].empty()) {
      gasUsed = make_shared<long>(boost::any_cast<long>(m["GasUsed"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("InputData") != m.end() && !m["InputData"].empty()) {
      inputData = make_shared<string>(boost::any_cast<string>(m["InputData"]));
    }
    if (m.find("InputDetails") != m.end() && !m["InputDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["InputDetails"].type()) {
        vector<DescribeWeb3TransactionLabelsResponseBodyDataInputDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InputDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWeb3TransactionLabelsResponseBodyDataInputDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inputDetails = make_shared<vector<DescribeWeb3TransactionLabelsResponseBodyDataInputDetails>>(expect1);
      }
    }
    if (m.find("MethodId") != m.end() && !m["MethodId"].empty()) {
      methodId = make_shared<string>(boost::any_cast<string>(m["MethodId"]));
    }
    if (m.find("Nonce") != m.end() && !m["Nonce"].empty()) {
      nonce = make_shared<string>(boost::any_cast<string>(m["Nonce"]));
    }
    if (m.find("OutputDetails") != m.end() && !m["OutputDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["OutputDetails"].type()) {
        vector<DescribeWeb3TransactionLabelsResponseBodyDataOutputDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OutputDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWeb3TransactionLabelsResponseBodyDataOutputDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputDetails = make_shared<vector<DescribeWeb3TransactionLabelsResponseBodyDataOutputDetails>>(expect1);
      }
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<long>(boost::any_cast<long>(m["State"]));
    }
    if (m.find("TokenTransferDetails") != m.end() && !m["TokenTransferDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["TokenTransferDetails"].type()) {
        vector<DescribeWeb3TransactionLabelsResponseBodyDataTokenTransferDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TokenTransferDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWeb3TransactionLabelsResponseBodyDataTokenTransferDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tokenTransferDetails = make_shared<vector<DescribeWeb3TransactionLabelsResponseBodyDataTokenTransferDetails>>(expect1);
      }
    }
    if (m.find("TransactionSymbol") != m.end() && !m["TransactionSymbol"].empty()) {
      transactionSymbol = make_shared<string>(boost::any_cast<string>(m["TransactionSymbol"]));
    }
    if (m.find("TransactionTime") != m.end() && !m["TransactionTime"].empty()) {
      transactionTime = make_shared<string>(boost::any_cast<string>(m["TransactionTime"]));
    }
    if (m.find("TransactionType") != m.end() && !m["TransactionType"].empty()) {
      transactionType = make_shared<string>(boost::any_cast<string>(m["TransactionType"]));
    }
    if (m.find("Txfee") != m.end() && !m["Txfee"].empty()) {
      txfee = make_shared<string>(boost::any_cast<string>(m["Txfee"]));
    }
    if (m.find("Txid") != m.end() && !m["Txid"].empty()) {
      txid = make_shared<string>(boost::any_cast<string>(m["Txid"]));
    }
  }


  virtual ~DescribeWeb3TransactionLabelsResponseBodyData() = default;
};
class DescribeWeb3TransactionLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeWeb3TransactionLabelsResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeWeb3TransactionLabelsResponseBody() {}

  explicit DescribeWeb3TransactionLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
        DescribeWeb3TransactionLabelsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeWeb3TransactionLabelsResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeWeb3TransactionLabelsResponseBody() = default;
};
class DescribeWeb3TransactionLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWeb3TransactionLabelsResponseBody> body{};

  DescribeWeb3TransactionLabelsResponse() {}

  explicit DescribeWeb3TransactionLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWeb3TransactionLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWeb3TransactionLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWeb3TransactionLabelsResponse() = default;
};
class DocOcrRequest : public Darabonba::Model {
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

  DocOcrRequest() {}

  explicit DocOcrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> faceAttack{};
  shared_ptr<double> faceQualityScore{};
  shared_ptr<string> occlusionResult{};

  FaceLivenessResponseBodyResultExtFaceInfo() {}

  explicit FaceLivenessResponseBodyResultExtFaceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceAttack) {
      res["FaceAttack"] = boost::any(*faceAttack);
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
    if (m.find("FaceAttack") != m.end() && !m["FaceAttack"].empty()) {
      faceAttack = make_shared<string>(boost::any_cast<string>(m["FaceAttack"]));
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
  shared_ptr<string> authorize{};
  shared_ptr<string> callbackToken{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> crop{};
  shared_ptr<string> docScanMode{};
  shared_ptr<string> docType{};
  shared_ptr<string> facePictureBase64{};
  shared_ptr<string> facePictureUrl{};
  shared_ptr<string> idFaceQuality{};
  shared_ptr<string> idSpoof{};
  shared_ptr<string> languageConfig{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> merchantUserId{};
  shared_ptr<string> metaInfo{};
  shared_ptr<string> ocr{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productFlow{};
  shared_ptr<string> returnUrl{};
  shared_ptr<string> sceneCode{};
  shared_ptr<string> securityLevel{};
  shared_ptr<string> styleConfig{};

  InitializeRequest() {}

  explicit InitializeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (ocr) {
      res["Ocr"] = boost::any(*ocr);
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
    if (styleConfig) {
      res["StyleConfig"] = boost::any(*styleConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Ocr") != m.end() && !m["Ocr"].empty()) {
      ocr = make_shared<string>(boost::any_cast<string>(m["Ocr"]));
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
  DescribeAddressLabelsResponse describeAddressLabelsWithOptions(shared_ptr<DescribeAddressLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAddressLabelsResponse describeAddressLabels(shared_ptr<DescribeAddressLabelsRequest> request);
  DescribeAddressOverviewResponse describeAddressOverviewWithOptions(shared_ptr<DescribeAddressOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAddressOverviewResponse describeAddressOverview(shared_ptr<DescribeAddressOverviewRequest> request);
  DescribeMaliciousAddressResponse describeMaliciousAddressWithOptions(shared_ptr<DescribeMaliciousAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMaliciousAddressResponse describeMaliciousAddress(shared_ptr<DescribeMaliciousAddressRequest> request);
  DescribeRiskScoreResponse describeRiskScoreWithOptions(shared_ptr<DescribeRiskScoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRiskScoreResponse describeRiskScore(shared_ptr<DescribeRiskScoreRequest> request);
  DescribeTransactionsListResponse describeTransactionsListWithOptions(shared_ptr<DescribeTransactionsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTransactionsListResponse describeTransactionsList(shared_ptr<DescribeTransactionsListRequest> request);
  DescribeWeb3AddressLabelsResponse describeWeb3AddressLabelsWithOptions(shared_ptr<DescribeWeb3AddressLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWeb3AddressLabelsResponse describeWeb3AddressLabels(shared_ptr<DescribeWeb3AddressLabelsRequest> request);
  DescribeWeb3RiskScoreResponse describeWeb3RiskScoreWithOptions(shared_ptr<DescribeWeb3RiskScoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWeb3RiskScoreResponse describeWeb3RiskScore(shared_ptr<DescribeWeb3RiskScoreRequest> request);
  DescribeWeb3TransactionLabelsResponse describeWeb3TransactionLabelsWithOptions(shared_ptr<DescribeWeb3TransactionLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWeb3TransactionLabelsResponse describeWeb3TransactionLabels(shared_ptr<DescribeWeb3TransactionLabelsRequest> request);
  DocOcrResponse docOcrWithOptions(shared_ptr<DocOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DocOcrResponse docOcr(shared_ptr<DocOcrRequest> request);
  EkycVerifyResponse ekycVerifyWithOptions(shared_ptr<EkycVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EkycVerifyResponse ekycVerify(shared_ptr<EkycVerifyRequest> request);
  FaceCompareResponse faceCompareWithOptions(shared_ptr<FaceCompareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceCompareResponse faceCompare(shared_ptr<FaceCompareRequest> request);
  FaceLivenessResponse faceLivenessWithOptions(shared_ptr<FaceLivenessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FaceLivenessResponse faceLiveness(shared_ptr<FaceLivenessRequest> request);
  FraudResultCallBackResponse fraudResultCallBackWithOptions(shared_ptr<FraudResultCallBackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FraudResultCallBackResponse fraudResultCallBack(shared_ptr<FraudResultCallBackRequest> request);
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
