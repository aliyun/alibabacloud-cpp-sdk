// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDAUTH-INTL20220809_H_
#define ALIBABACLOUD_CLOUDAUTH-INTL20220809_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cloudauth-intl20220809 {
class AddressVerifyIntlRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressType{};
  shared_ptr<string> defaultCity{};
  shared_ptr<string> defaultCountry{};
  shared_ptr<string> defaultDistrict{};
  shared_ptr<string> defaultProvince{};
  shared_ptr<string> latitude{};
  shared_ptr<string> longitude{};
  shared_ptr<string> mobile{};
  shared_ptr<string> productCode{};
  shared_ptr<string> text{};
  shared_ptr<string> verifyType{};

  AddressVerifyIntlRequest() {}

  explicit AddressVerifyIntlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (defaultCity) {
      res["DefaultCity"] = boost::any(*defaultCity);
    }
    if (defaultCountry) {
      res["DefaultCountry"] = boost::any(*defaultCountry);
    }
    if (defaultDistrict) {
      res["DefaultDistrict"] = boost::any(*defaultDistrict);
    }
    if (defaultProvince) {
      res["DefaultProvince"] = boost::any(*defaultProvince);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (verifyType) {
      res["VerifyType"] = boost::any(*verifyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("DefaultCity") != m.end() && !m["DefaultCity"].empty()) {
      defaultCity = make_shared<string>(boost::any_cast<string>(m["DefaultCity"]));
    }
    if (m.find("DefaultCountry") != m.end() && !m["DefaultCountry"].empty()) {
      defaultCountry = make_shared<string>(boost::any_cast<string>(m["DefaultCountry"]));
    }
    if (m.find("DefaultDistrict") != m.end() && !m["DefaultDistrict"].empty()) {
      defaultDistrict = make_shared<string>(boost::any_cast<string>(m["DefaultDistrict"]));
    }
    if (m.find("DefaultProvince") != m.end() && !m["DefaultProvince"].empty()) {
      defaultProvince = make_shared<string>(boost::any_cast<string>(m["DefaultProvince"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("VerifyType") != m.end() && !m["VerifyType"].empty()) {
      verifyType = make_shared<string>(boost::any_cast<string>(m["VerifyType"]));
    }
  }


  virtual ~AddressVerifyIntlRequest() = default;
};
class AddressVerifyIntlResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> addressInfo{};
  shared_ptr<string> ispName{};
  shared_ptr<string> passed{};
  shared_ptr<string> subCode{};
  shared_ptr<string> transactionId{};

  AddressVerifyIntlResponseBodyResultObject() {}

  explicit AddressVerifyIntlResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressInfo) {
      res["AddressInfo"] = boost::any(*addressInfo);
    }
    if (ispName) {
      res["IspName"] = boost::any(*ispName);
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
    if (m.find("AddressInfo") != m.end() && !m["AddressInfo"].empty()) {
      addressInfo = make_shared<string>(boost::any_cast<string>(m["AddressInfo"]));
    }
    if (m.find("IspName") != m.end() && !m["IspName"].empty()) {
      ispName = make_shared<string>(boost::any_cast<string>(m["IspName"]));
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


  virtual ~AddressVerifyIntlResponseBodyResultObject() = default;
};
class AddressVerifyIntlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<AddressVerifyIntlResponseBodyResultObject> resultObject{};

  AddressVerifyIntlResponseBody() {}

  explicit AddressVerifyIntlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddressVerifyIntlResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<AddressVerifyIntlResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~AddressVerifyIntlResponseBody() = default;
};
class AddressVerifyIntlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddressVerifyIntlResponseBody> body{};

  AddressVerifyIntlResponse() {}

  explicit AddressVerifyIntlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddressVerifyIntlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddressVerifyIntlResponseBody>(model1);
      }
    }
  }


  virtual ~AddressVerifyIntlResponse() = default;
};
class BankMetaVerifyIntlRequest : public Darabonba::Model {
public:
  shared_ptr<string> bankCard{};
  shared_ptr<string> identifyNum{};
  shared_ptr<string> identityType{};
  shared_ptr<string> mobile{};
  shared_ptr<string> paramType{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productType{};
  shared_ptr<string> userName{};
  shared_ptr<string> verifyMode{};

  BankMetaVerifyIntlRequest() {}

  explicit BankMetaVerifyIntlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
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
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
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


  virtual ~BankMetaVerifyIntlRequest() = default;
};
class BankMetaVerifyIntlResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> subCode{};

  BankMetaVerifyIntlResponseBodyResultObject() {}

  explicit BankMetaVerifyIntlResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BankMetaVerifyIntlResponseBodyResultObject() = default;
};
class BankMetaVerifyIntlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<BankMetaVerifyIntlResponseBodyResultObject> resultObject{};

  BankMetaVerifyIntlResponseBody() {}

  explicit BankMetaVerifyIntlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BankMetaVerifyIntlResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<BankMetaVerifyIntlResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~BankMetaVerifyIntlResponseBody() = default;
};
class BankMetaVerifyIntlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BankMetaVerifyIntlResponseBody> body{};

  BankMetaVerifyIntlResponse() {}

  explicit BankMetaVerifyIntlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BankMetaVerifyIntlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BankMetaVerifyIntlResponseBody>(model1);
      }
    }
  }


  virtual ~BankMetaVerifyIntlResponse() = default;
};
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
class CheckVerifyLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> transactionId{};

  CheckVerifyLogRequest() {}

  explicit CheckVerifyLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~CheckVerifyLogRequest() = default;
};
class CheckVerifyLogResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> extInfo{};
  shared_ptr<string> interruptPage{};
  shared_ptr<vector<string>> logInfo{};
  shared_ptr<string> logStatisticsInfo{};
  shared_ptr<string> passed{};
  shared_ptr<string> subCode{};
  shared_ptr<string> verifyErrorCode{};
  shared_ptr<string> verifyStatus{};

  CheckVerifyLogResponseBodyResult() {}

  explicit CheckVerifyLogResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (interruptPage) {
      res["InterruptPage"] = boost::any(*interruptPage);
    }
    if (logInfo) {
      res["LogInfo"] = boost::any(*logInfo);
    }
    if (logStatisticsInfo) {
      res["LogStatisticsInfo"] = boost::any(*logStatisticsInfo);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (verifyErrorCode) {
      res["VerifyErrorCode"] = boost::any(*verifyErrorCode);
    }
    if (verifyStatus) {
      res["VerifyStatus"] = boost::any(*verifyStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("InterruptPage") != m.end() && !m["InterruptPage"].empty()) {
      interruptPage = make_shared<string>(boost::any_cast<string>(m["InterruptPage"]));
    }
    if (m.find("LogInfo") != m.end() && !m["LogInfo"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LogInfo"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LogInfo"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logInfo = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LogStatisticsInfo") != m.end() && !m["LogStatisticsInfo"].empty()) {
      logStatisticsInfo = make_shared<string>(boost::any_cast<string>(m["LogStatisticsInfo"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("VerifyErrorCode") != m.end() && !m["VerifyErrorCode"].empty()) {
      verifyErrorCode = make_shared<string>(boost::any_cast<string>(m["VerifyErrorCode"]));
    }
    if (m.find("VerifyStatus") != m.end() && !m["VerifyStatus"].empty()) {
      verifyStatus = make_shared<string>(boost::any_cast<string>(m["VerifyStatus"]));
    }
  }


  virtual ~CheckVerifyLogResponseBodyResult() = default;
};
class CheckVerifyLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CheckVerifyLogResponseBodyResult> result{};

  CheckVerifyLogResponseBody() {}

  explicit CheckVerifyLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckVerifyLogResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<CheckVerifyLogResponseBodyResult>(model1);
      }
    }
  }


  virtual ~CheckVerifyLogResponseBody() = default;
};
class CheckVerifyLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckVerifyLogResponseBody> body{};

  CheckVerifyLogResponse() {}

  explicit CheckVerifyLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckVerifyLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckVerifyLogResponseBody>(model1);
      }
    }
  }


  virtual ~CheckVerifyLogResponse() = default;
};
class CredentialVerifyIntlRequest : public Darabonba::Model {
public:
  shared_ptr<string> credName{};
  shared_ptr<string> credType{};
  shared_ptr<string> imageFile{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> productCode{};

  CredentialVerifyIntlRequest() {}

  explicit CredentialVerifyIntlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credName) {
      res["CredName"] = boost::any(*credName);
    }
    if (credType) {
      res["CredType"] = boost::any(*credType);
    }
    if (imageFile) {
      res["ImageFile"] = boost::any(*imageFile);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredName") != m.end() && !m["CredName"].empty()) {
      credName = make_shared<string>(boost::any_cast<string>(m["CredName"]));
    }
    if (m.find("CredType") != m.end() && !m["CredType"].empty()) {
      credType = make_shared<string>(boost::any_cast<string>(m["CredType"]));
    }
    if (m.find("ImageFile") != m.end() && !m["ImageFile"].empty()) {
      imageFile = make_shared<string>(boost::any_cast<string>(m["ImageFile"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~CredentialVerifyIntlRequest() = default;
};
class CredentialVerifyIntlAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> credName{};
  shared_ptr<string> credType{};
  shared_ptr<Darabonba::Stream> imageFileObject{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> productCode{};

  CredentialVerifyIntlAdvanceRequest() {}

  explicit CredentialVerifyIntlAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credName) {
      res["CredName"] = boost::any(*credName);
    }
    if (credType) {
      res["CredType"] = boost::any(*credType);
    }
    if (imageFileObject) {
      res["ImageFile"] = boost::any(*imageFileObject);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredName") != m.end() && !m["CredName"].empty()) {
      credName = make_shared<string>(boost::any_cast<string>(m["CredName"]));
    }
    if (m.find("CredType") != m.end() && !m["CredType"].empty()) {
      credType = make_shared<string>(boost::any_cast<string>(m["CredType"]));
    }
    if (m.find("ImageFile") != m.end() && !m["ImageFile"].empty()) {
      imageFileObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageFile"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~CredentialVerifyIntlAdvanceRequest() = default;
};
class CredentialVerifyIntlResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> materialInfo{};
  shared_ptr<string> result{};
  shared_ptr<map<string, string>> riskScore{};
  shared_ptr<string> riskTag{};

  CredentialVerifyIntlResponseBodyResultObject() {}

  explicit CredentialVerifyIntlResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
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
  }


  virtual ~CredentialVerifyIntlResponseBodyResultObject() = default;
};
class CredentialVerifyIntlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CredentialVerifyIntlResponseBodyResultObject> resultObject{};

  CredentialVerifyIntlResponseBody() {}

  explicit CredentialVerifyIntlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CredentialVerifyIntlResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<CredentialVerifyIntlResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~CredentialVerifyIntlResponseBody() = default;
};
class CredentialVerifyIntlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CredentialVerifyIntlResponseBody> body{};

  CredentialVerifyIntlResponse() {}

  explicit CredentialVerifyIntlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CredentialVerifyIntlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CredentialVerifyIntlResponseBody>(model1);
      }
    }
  }


  virtual ~CredentialVerifyIntlResponse() = default;
};
class DeepfakeDetectIntlRequest : public Darabonba::Model {
public:
  shared_ptr<string> faceBase64{};
  shared_ptr<string> faceInputType{};
  shared_ptr<string> faceUrl{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> sceneCode{};

  DeepfakeDetectIntlRequest() {}

  explicit DeepfakeDetectIntlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (sceneCode) {
      res["SceneCode"] = boost::any(*sceneCode);
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
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("SceneCode") != m.end() && !m["SceneCode"].empty()) {
      sceneCode = make_shared<string>(boost::any_cast<string>(m["SceneCode"]));
    }
  }


  virtual ~DeepfakeDetectIntlRequest() = default;
};
class DeepfakeDetectIntlResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> result{};
  shared_ptr<map<string, string>> riskScore{};
  shared_ptr<string> riskTag{};

  DeepfakeDetectIntlResponseBodyResultObject() {}

  explicit DeepfakeDetectIntlResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeepfakeDetectIntlResponseBodyResultObject() = default;
};
class DeepfakeDetectIntlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DeepfakeDetectIntlResponseBodyResultObject> resultObject{};

  DeepfakeDetectIntlResponseBody() {}

  explicit DeepfakeDetectIntlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeepfakeDetectIntlResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<DeepfakeDetectIntlResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~DeepfakeDetectIntlResponseBody() = default;
};
class DeepfakeDetectIntlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeepfakeDetectIntlResponseBody> body{};

  DeepfakeDetectIntlResponse() {}

  explicit DeepfakeDetectIntlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeepfakeDetectIntlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeepfakeDetectIntlResponseBody>(model1);
      }
    }
  }


  virtual ~DeepfakeDetectIntlResponse() = default;
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
class DocOcrMaxRequest : public Darabonba::Model {
public:
  shared_ptr<string> docType{};
  shared_ptr<string> idOcrPictureBase64{};
  shared_ptr<string> idOcrPictureUrl{};
  shared_ptr<string> idSpoof{};
  shared_ptr<string> idThreshold{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> merchantUserId{};
  shared_ptr<string> ocrModel{};
  shared_ptr<string> productCode{};
  shared_ptr<string> prompt{};
  shared_ptr<string> sceneCode{};
  shared_ptr<string> spoof{};

  DocOcrMaxRequest() {}

  explicit DocOcrMaxRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docType) {
      res["DocType"] = boost::any(*docType);
    }
    if (idOcrPictureBase64) {
      res["IdOcrPictureBase64"] = boost::any(*idOcrPictureBase64);
    }
    if (idOcrPictureUrl) {
      res["IdOcrPictureUrl"] = boost::any(*idOcrPictureUrl);
    }
    if (idSpoof) {
      res["IdSpoof"] = boost::any(*idSpoof);
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
    if (ocrModel) {
      res["OcrModel"] = boost::any(*ocrModel);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (sceneCode) {
      res["SceneCode"] = boost::any(*sceneCode);
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
    if (m.find("IdOcrPictureBase64") != m.end() && !m["IdOcrPictureBase64"].empty()) {
      idOcrPictureBase64 = make_shared<string>(boost::any_cast<string>(m["IdOcrPictureBase64"]));
    }
    if (m.find("IdOcrPictureUrl") != m.end() && !m["IdOcrPictureUrl"].empty()) {
      idOcrPictureUrl = make_shared<string>(boost::any_cast<string>(m["IdOcrPictureUrl"]));
    }
    if (m.find("IdSpoof") != m.end() && !m["IdSpoof"].empty()) {
      idSpoof = make_shared<string>(boost::any_cast<string>(m["IdSpoof"]));
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
    if (m.find("OcrModel") != m.end() && !m["OcrModel"].empty()) {
      ocrModel = make_shared<string>(boost::any_cast<string>(m["OcrModel"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("SceneCode") != m.end() && !m["SceneCode"].empty()) {
      sceneCode = make_shared<string>(boost::any_cast<string>(m["SceneCode"]));
    }
    if (m.find("Spoof") != m.end() && !m["Spoof"].empty()) {
      spoof = make_shared<string>(boost::any_cast<string>(m["Spoof"]));
    }
  }


  virtual ~DocOcrMaxRequest() = default;
};
class DocOcrMaxResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> extIdInfo{};
  shared_ptr<string> passed{};
  shared_ptr<string> subCode{};
  shared_ptr<string> transactionId{};

  DocOcrMaxResponseBodyResult() {}

  explicit DocOcrMaxResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DocOcrMaxResponseBodyResult() = default;
};
class DocOcrMaxResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DocOcrMaxResponseBodyResult> result{};

  DocOcrMaxResponseBody() {}

  explicit DocOcrMaxResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DocOcrMaxResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DocOcrMaxResponseBodyResult>(model1);
      }
    }
  }


  virtual ~DocOcrMaxResponseBody() = default;
};
class DocOcrMaxResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DocOcrMaxResponseBody> body{};

  DocOcrMaxResponse() {}

  explicit DocOcrMaxResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DocOcrMaxResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DocOcrMaxResponseBody>(model1);
      }
    }
  }


  virtual ~DocOcrMaxResponse() = default;
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
  shared_ptr<double> guardRiskScore{};
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
    if (guardRiskScore) {
      res["GuardRiskScore"] = boost::any(*guardRiskScore);
    }
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
    if (m.find("GuardRiskScore") != m.end() && !m["GuardRiskScore"].empty()) {
      guardRiskScore = make_shared<double>(boost::any_cast<double>(m["GuardRiskScore"]));
    }
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
  shared_ptr<string> chameleonFrameEnable{};
  shared_ptr<string> crop{};
  shared_ptr<string> dateOfBirth{};
  shared_ptr<string> dateOfExpiry{};
  shared_ptr<string> docName{};
  shared_ptr<string> docNo{};
  shared_ptr<vector<string>> docPageConfig{};
  shared_ptr<string> docScanMode{};
  shared_ptr<string> docType{};
  shared_ptr<string> docVideo{};
  shared_ptr<string> documentNumber{};
  shared_ptr<string> experienceCode{};
  shared_ptr<string> facePictureBase64{};
  shared_ptr<string> facePictureUrl{};
  shared_ptr<string> idFaceQuality{};
  shared_ptr<string> idSpoof{};
  shared_ptr<string> idThreshold{};
  shared_ptr<string> languageConfig{};
  shared_ptr<string> MRTDInput{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> merchantUserId{};
  shared_ptr<string> metaInfo{};
  shared_ptr<string> model{};
  shared_ptr<string> ocr{};
  shared_ptr<string> pages{};
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
  shared_ptr<string> useNFC{};

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
    if (chameleonFrameEnable) {
      res["ChameleonFrameEnable"] = boost::any(*chameleonFrameEnable);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    if (dateOfBirth) {
      res["DateOfBirth"] = boost::any(*dateOfBirth);
    }
    if (dateOfExpiry) {
      res["DateOfExpiry"] = boost::any(*dateOfExpiry);
    }
    if (docName) {
      res["DocName"] = boost::any(*docName);
    }
    if (docNo) {
      res["DocNo"] = boost::any(*docNo);
    }
    if (docPageConfig) {
      res["DocPageConfig"] = boost::any(*docPageConfig);
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
    if (documentNumber) {
      res["DocumentNumber"] = boost::any(*documentNumber);
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
    if (MRTDInput) {
      res["MRTDInput"] = boost::any(*MRTDInput);
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
    if (pages) {
      res["Pages"] = boost::any(*pages);
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
    if (useNFC) {
      res["UseNFC"] = boost::any(*useNFC);
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
    if (m.find("ChameleonFrameEnable") != m.end() && !m["ChameleonFrameEnable"].empty()) {
      chameleonFrameEnable = make_shared<string>(boost::any_cast<string>(m["ChameleonFrameEnable"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
    if (m.find("DateOfBirth") != m.end() && !m["DateOfBirth"].empty()) {
      dateOfBirth = make_shared<string>(boost::any_cast<string>(m["DateOfBirth"]));
    }
    if (m.find("DateOfExpiry") != m.end() && !m["DateOfExpiry"].empty()) {
      dateOfExpiry = make_shared<string>(boost::any_cast<string>(m["DateOfExpiry"]));
    }
    if (m.find("DocName") != m.end() && !m["DocName"].empty()) {
      docName = make_shared<string>(boost::any_cast<string>(m["DocName"]));
    }
    if (m.find("DocNo") != m.end() && !m["DocNo"].empty()) {
      docNo = make_shared<string>(boost::any_cast<string>(m["DocNo"]));
    }
    if (m.find("DocPageConfig") != m.end() && !m["DocPageConfig"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DocPageConfig"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocPageConfig"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      docPageConfig = make_shared<vector<string>>(toVec1);
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
    if (m.find("DocumentNumber") != m.end() && !m["DocumentNumber"].empty()) {
      documentNumber = make_shared<string>(boost::any_cast<string>(m["DocumentNumber"]));
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
    if (m.find("MRTDInput") != m.end() && !m["MRTDInput"].empty()) {
      MRTDInput = make_shared<string>(boost::any_cast<string>(m["MRTDInput"]));
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
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<string>(boost::any_cast<string>(m["Pages"]));
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
    if (m.find("UseNFC") != m.end() && !m["UseNFC"].empty()) {
      useNFC = make_shared<string>(boost::any_cast<string>(m["UseNFC"]));
    }
  }


  virtual ~InitializeRequest() = default;
};
class InitializeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appQualityCheck{};
  shared_ptr<string> authorize{};
  shared_ptr<string> callbackToken{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> chameleonFrameEnable{};
  shared_ptr<string> crop{};
  shared_ptr<string> dateOfBirth{};
  shared_ptr<string> dateOfExpiry{};
  shared_ptr<string> docName{};
  shared_ptr<string> docNo{};
  shared_ptr<string> docPageConfigShrink{};
  shared_ptr<string> docScanMode{};
  shared_ptr<string> docType{};
  shared_ptr<string> docVideo{};
  shared_ptr<string> documentNumber{};
  shared_ptr<string> experienceCode{};
  shared_ptr<string> facePictureBase64{};
  shared_ptr<string> facePictureUrl{};
  shared_ptr<string> idFaceQuality{};
  shared_ptr<string> idSpoof{};
  shared_ptr<string> idThreshold{};
  shared_ptr<string> languageConfig{};
  shared_ptr<string> MRTDInput{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> merchantUserId{};
  shared_ptr<string> metaInfo{};
  shared_ptr<string> model{};
  shared_ptr<string> ocr{};
  shared_ptr<string> pages{};
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
  shared_ptr<string> useNFC{};

  InitializeShrinkRequest() {}

  explicit InitializeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (chameleonFrameEnable) {
      res["ChameleonFrameEnable"] = boost::any(*chameleonFrameEnable);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    if (dateOfBirth) {
      res["DateOfBirth"] = boost::any(*dateOfBirth);
    }
    if (dateOfExpiry) {
      res["DateOfExpiry"] = boost::any(*dateOfExpiry);
    }
    if (docName) {
      res["DocName"] = boost::any(*docName);
    }
    if (docNo) {
      res["DocNo"] = boost::any(*docNo);
    }
    if (docPageConfigShrink) {
      res["DocPageConfig"] = boost::any(*docPageConfigShrink);
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
    if (documentNumber) {
      res["DocumentNumber"] = boost::any(*documentNumber);
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
    if (MRTDInput) {
      res["MRTDInput"] = boost::any(*MRTDInput);
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
    if (pages) {
      res["Pages"] = boost::any(*pages);
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
    if (useNFC) {
      res["UseNFC"] = boost::any(*useNFC);
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
    if (m.find("ChameleonFrameEnable") != m.end() && !m["ChameleonFrameEnable"].empty()) {
      chameleonFrameEnable = make_shared<string>(boost::any_cast<string>(m["ChameleonFrameEnable"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
    if (m.find("DateOfBirth") != m.end() && !m["DateOfBirth"].empty()) {
      dateOfBirth = make_shared<string>(boost::any_cast<string>(m["DateOfBirth"]));
    }
    if (m.find("DateOfExpiry") != m.end() && !m["DateOfExpiry"].empty()) {
      dateOfExpiry = make_shared<string>(boost::any_cast<string>(m["DateOfExpiry"]));
    }
    if (m.find("DocName") != m.end() && !m["DocName"].empty()) {
      docName = make_shared<string>(boost::any_cast<string>(m["DocName"]));
    }
    if (m.find("DocNo") != m.end() && !m["DocNo"].empty()) {
      docNo = make_shared<string>(boost::any_cast<string>(m["DocNo"]));
    }
    if (m.find("DocPageConfig") != m.end() && !m["DocPageConfig"].empty()) {
      docPageConfigShrink = make_shared<string>(boost::any_cast<string>(m["DocPageConfig"]));
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
    if (m.find("DocumentNumber") != m.end() && !m["DocumentNumber"].empty()) {
      documentNumber = make_shared<string>(boost::any_cast<string>(m["DocumentNumber"]));
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
    if (m.find("MRTDInput") != m.end() && !m["MRTDInput"].empty()) {
      MRTDInput = make_shared<string>(boost::any_cast<string>(m["MRTDInput"]));
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
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<string>(boost::any_cast<string>(m["Pages"]));
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
    if (m.find("UseNFC") != m.end() && !m["UseNFC"].empty()) {
      useNFC = make_shared<string>(boost::any_cast<string>(m["UseNFC"]));
    }
  }


  virtual ~InitializeShrinkRequest() = default;
};
class InitializeResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> clientCfg{};
  shared_ptr<string> protocol{};
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
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
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
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
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
  map<string, boost::any> _postOSSObject(shared_ptr<string> bucketName, shared_ptr<map<string, boost::any>> data);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  AddressVerifyIntlResponse addressVerifyIntlWithOptions(shared_ptr<AddressVerifyIntlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddressVerifyIntlResponse addressVerifyIntl(shared_ptr<AddressVerifyIntlRequest> request);
  BankMetaVerifyIntlResponse bankMetaVerifyIntlWithOptions(shared_ptr<BankMetaVerifyIntlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BankMetaVerifyIntlResponse bankMetaVerifyIntl(shared_ptr<BankMetaVerifyIntlRequest> request);
  CardOcrResponse cardOcrWithOptions(shared_ptr<CardOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CardOcrResponse cardOcr(shared_ptr<CardOcrRequest> request);
  CheckResultResponse checkResultWithOptions(shared_ptr<CheckResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckResultResponse checkResult(shared_ptr<CheckResultRequest> request);
  CheckVerifyLogResponse checkVerifyLogWithOptions(shared_ptr<CheckVerifyLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckVerifyLogResponse checkVerifyLog(shared_ptr<CheckVerifyLogRequest> request);
  CredentialVerifyIntlResponse credentialVerifyIntlWithOptions(shared_ptr<CredentialVerifyIntlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CredentialVerifyIntlResponse credentialVerifyIntl(shared_ptr<CredentialVerifyIntlRequest> request);
  CredentialVerifyIntlResponse credentialVerifyIntlAdvance(shared_ptr<CredentialVerifyIntlAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeepfakeDetectIntlResponse deepfakeDetectIntlWithOptions(shared_ptr<DeepfakeDetectIntlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeepfakeDetectIntlResponse deepfakeDetectIntl(shared_ptr<DeepfakeDetectIntlRequest> request);
  DeleteVerifyResultResponse deleteVerifyResultWithOptions(shared_ptr<DeleteVerifyResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVerifyResultResponse deleteVerifyResult(shared_ptr<DeleteVerifyResultRequest> request);
  DocOcrResponse docOcrWithOptions(shared_ptr<DocOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DocOcrResponse docOcr(shared_ptr<DocOcrRequest> request);
  DocOcrMaxResponse docOcrMaxWithOptions(shared_ptr<DocOcrMaxRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DocOcrMaxResponse docOcrMax(shared_ptr<DocOcrMaxRequest> request);
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
  InitializeResponse initializeWithOptions(shared_ptr<InitializeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitializeResponse initialize(shared_ptr<InitializeRequest> request);
  Mobile3MetaVerifyIntlResponse mobile3MetaVerifyIntlWithOptions(shared_ptr<Mobile3MetaVerifyIntlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Mobile3MetaVerifyIntlResponse mobile3MetaVerifyIntl(shared_ptr<Mobile3MetaVerifyIntlRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloudauth-intl20220809

#endif
