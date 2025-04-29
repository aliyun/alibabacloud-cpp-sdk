// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DYTNSAPI20200217_H_
#define ALIBABACLOUD_DYTNSAPI20200217_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dytnsapi20200217 {
class CertNoThreeElementVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> certName{};
  shared_ptr<string> certNo{};
  shared_ptr<string> certPicture{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CertNoThreeElementVerificationRequest() {}

  explicit CertNoThreeElementVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (certPicture) {
      res["CertPicture"] = boost::any(*certPicture);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("CertPicture") != m.end() && !m["CertPicture"].empty()) {
      certPicture = make_shared<string>(boost::any_cast<string>(m["CertPicture"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CertNoThreeElementVerificationRequest() = default;
};
class CertNoThreeElementVerificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> isConsistent{};

  CertNoThreeElementVerificationResponseBodyData() {}

  explicit CertNoThreeElementVerificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isConsistent) {
      res["IsConsistent"] = boost::any(*isConsistent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsConsistent") != m.end() && !m["IsConsistent"].empty()) {
      isConsistent = make_shared<string>(boost::any_cast<string>(m["IsConsistent"]));
    }
  }


  virtual ~CertNoThreeElementVerificationResponseBodyData() = default;
};
class CertNoThreeElementVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<CertNoThreeElementVerificationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CertNoThreeElementVerificationResponseBody() {}

  explicit CertNoThreeElementVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CertNoThreeElementVerificationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CertNoThreeElementVerificationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CertNoThreeElementVerificationResponseBody() = default;
};
class CertNoThreeElementVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CertNoThreeElementVerificationResponseBody> body{};

  CertNoThreeElementVerificationResponse() {}

  explicit CertNoThreeElementVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CertNoThreeElementVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CertNoThreeElementVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~CertNoThreeElementVerificationResponse() = default;
};
class CertNoTwoElementVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> certName{};
  shared_ptr<string> certNo{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CertNoTwoElementVerificationRequest() {}

  explicit CertNoTwoElementVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CertNoTwoElementVerificationRequest() = default;
};
class CertNoTwoElementVerificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> isConsistent{};

  CertNoTwoElementVerificationResponseBodyData() {}

  explicit CertNoTwoElementVerificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isConsistent) {
      res["IsConsistent"] = boost::any(*isConsistent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsConsistent") != m.end() && !m["IsConsistent"].empty()) {
      isConsistent = make_shared<string>(boost::any_cast<string>(m["IsConsistent"]));
    }
  }


  virtual ~CertNoTwoElementVerificationResponseBodyData() = default;
};
class CertNoTwoElementVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<CertNoTwoElementVerificationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CertNoTwoElementVerificationResponseBody() {}

  explicit CertNoTwoElementVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CertNoTwoElementVerificationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CertNoTwoElementVerificationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CertNoTwoElementVerificationResponseBody() = default;
};
class CertNoTwoElementVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CertNoTwoElementVerificationResponseBody> body{};

  CertNoTwoElementVerificationResponse() {}

  explicit CertNoTwoElementVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CertNoTwoElementVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CertNoTwoElementVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~CertNoTwoElementVerificationResponse() = default;
};
class CompanyFourElementsVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> epCertName{};
  shared_ptr<string> epCertNo{};
  shared_ptr<string> legalPersonCertName{};
  shared_ptr<string> legalPersonCertNo{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CompanyFourElementsVerificationRequest() {}

  explicit CompanyFourElementsVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (epCertName) {
      res["EpCertName"] = boost::any(*epCertName);
    }
    if (epCertNo) {
      res["EpCertNo"] = boost::any(*epCertNo);
    }
    if (legalPersonCertName) {
      res["LegalPersonCertName"] = boost::any(*legalPersonCertName);
    }
    if (legalPersonCertNo) {
      res["LegalPersonCertNo"] = boost::any(*legalPersonCertNo);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("EpCertName") != m.end() && !m["EpCertName"].empty()) {
      epCertName = make_shared<string>(boost::any_cast<string>(m["EpCertName"]));
    }
    if (m.find("EpCertNo") != m.end() && !m["EpCertNo"].empty()) {
      epCertNo = make_shared<string>(boost::any_cast<string>(m["EpCertNo"]));
    }
    if (m.find("LegalPersonCertName") != m.end() && !m["LegalPersonCertName"].empty()) {
      legalPersonCertName = make_shared<string>(boost::any_cast<string>(m["LegalPersonCertName"]));
    }
    if (m.find("LegalPersonCertNo") != m.end() && !m["LegalPersonCertNo"].empty()) {
      legalPersonCertNo = make_shared<string>(boost::any_cast<string>(m["LegalPersonCertNo"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CompanyFourElementsVerificationRequest() = default;
};
class CompanyFourElementsVerificationResponseBodyDataDetailInfo : public Darabonba::Model {
public:
  shared_ptr<string> enterpriseStatus{};
  shared_ptr<string> openTime{};

  CompanyFourElementsVerificationResponseBodyDataDetailInfo() {}

  explicit CompanyFourElementsVerificationResponseBodyDataDetailInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enterpriseStatus) {
      res["EnterpriseStatus"] = boost::any(*enterpriseStatus);
    }
    if (openTime) {
      res["OpenTime"] = boost::any(*openTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnterpriseStatus") != m.end() && !m["EnterpriseStatus"].empty()) {
      enterpriseStatus = make_shared<string>(boost::any_cast<string>(m["EnterpriseStatus"]));
    }
    if (m.find("OpenTime") != m.end() && !m["OpenTime"].empty()) {
      openTime = make_shared<string>(boost::any_cast<string>(m["OpenTime"]));
    }
  }


  virtual ~CompanyFourElementsVerificationResponseBodyDataDetailInfo() = default;
};
class CompanyFourElementsVerificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<CompanyFourElementsVerificationResponseBodyDataDetailInfo> detailInfo{};
  shared_ptr<vector<string>> inconsistentData{};
  shared_ptr<long> reasonCode{};
  shared_ptr<string> verifyResult{};

  CompanyFourElementsVerificationResponseBodyData() {}

  explicit CompanyFourElementsVerificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailInfo) {
      res["DetailInfo"] = detailInfo ? boost::any(detailInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (inconsistentData) {
      res["InconsistentData"] = boost::any(*inconsistentData);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailInfo") != m.end() && !m["DetailInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DetailInfo"].type()) {
        CompanyFourElementsVerificationResponseBodyDataDetailInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DetailInfo"]));
        detailInfo = make_shared<CompanyFourElementsVerificationResponseBodyDataDetailInfo>(model1);
      }
    }
    if (m.find("InconsistentData") != m.end() && !m["InconsistentData"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InconsistentData"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InconsistentData"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      inconsistentData = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<long>(boost::any_cast<long>(m["ReasonCode"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
  }


  virtual ~CompanyFourElementsVerificationResponseBodyData() = default;
};
class CompanyFourElementsVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<CompanyFourElementsVerificationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CompanyFourElementsVerificationResponseBody() {}

  explicit CompanyFourElementsVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CompanyFourElementsVerificationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CompanyFourElementsVerificationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CompanyFourElementsVerificationResponseBody() = default;
};
class CompanyFourElementsVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CompanyFourElementsVerificationResponseBody> body{};

  CompanyFourElementsVerificationResponse() {}

  explicit CompanyFourElementsVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CompanyFourElementsVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CompanyFourElementsVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~CompanyFourElementsVerificationResponse() = default;
};
class CompanyThreeElementsVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> epCertName{};
  shared_ptr<string> epCertNo{};
  shared_ptr<string> legalPersonCertName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CompanyThreeElementsVerificationRequest() {}

  explicit CompanyThreeElementsVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (epCertName) {
      res["EpCertName"] = boost::any(*epCertName);
    }
    if (epCertNo) {
      res["EpCertNo"] = boost::any(*epCertNo);
    }
    if (legalPersonCertName) {
      res["LegalPersonCertName"] = boost::any(*legalPersonCertName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("EpCertName") != m.end() && !m["EpCertName"].empty()) {
      epCertName = make_shared<string>(boost::any_cast<string>(m["EpCertName"]));
    }
    if (m.find("EpCertNo") != m.end() && !m["EpCertNo"].empty()) {
      epCertNo = make_shared<string>(boost::any_cast<string>(m["EpCertNo"]));
    }
    if (m.find("LegalPersonCertName") != m.end() && !m["LegalPersonCertName"].empty()) {
      legalPersonCertName = make_shared<string>(boost::any_cast<string>(m["LegalPersonCertName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CompanyThreeElementsVerificationRequest() = default;
};
class CompanyThreeElementsVerificationResponseBodyDataDetailInfo : public Darabonba::Model {
public:
  shared_ptr<string> enterpriseStatus{};
  shared_ptr<string> openTime{};

  CompanyThreeElementsVerificationResponseBodyDataDetailInfo() {}

  explicit CompanyThreeElementsVerificationResponseBodyDataDetailInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enterpriseStatus) {
      res["EnterpriseStatus"] = boost::any(*enterpriseStatus);
    }
    if (openTime) {
      res["OpenTime"] = boost::any(*openTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnterpriseStatus") != m.end() && !m["EnterpriseStatus"].empty()) {
      enterpriseStatus = make_shared<string>(boost::any_cast<string>(m["EnterpriseStatus"]));
    }
    if (m.find("OpenTime") != m.end() && !m["OpenTime"].empty()) {
      openTime = make_shared<string>(boost::any_cast<string>(m["OpenTime"]));
    }
  }


  virtual ~CompanyThreeElementsVerificationResponseBodyDataDetailInfo() = default;
};
class CompanyThreeElementsVerificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<CompanyThreeElementsVerificationResponseBodyDataDetailInfo> detailInfo{};
  shared_ptr<vector<string>> inconsistentData{};
  shared_ptr<long> reasonCode{};
  shared_ptr<string> verifyResult{};

  CompanyThreeElementsVerificationResponseBodyData() {}

  explicit CompanyThreeElementsVerificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailInfo) {
      res["DetailInfo"] = detailInfo ? boost::any(detailInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (inconsistentData) {
      res["InconsistentData"] = boost::any(*inconsistentData);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailInfo") != m.end() && !m["DetailInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DetailInfo"].type()) {
        CompanyThreeElementsVerificationResponseBodyDataDetailInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DetailInfo"]));
        detailInfo = make_shared<CompanyThreeElementsVerificationResponseBodyDataDetailInfo>(model1);
      }
    }
    if (m.find("InconsistentData") != m.end() && !m["InconsistentData"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InconsistentData"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InconsistentData"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      inconsistentData = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<long>(boost::any_cast<long>(m["ReasonCode"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
  }


  virtual ~CompanyThreeElementsVerificationResponseBodyData() = default;
};
class CompanyThreeElementsVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<CompanyThreeElementsVerificationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CompanyThreeElementsVerificationResponseBody() {}

  explicit CompanyThreeElementsVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CompanyThreeElementsVerificationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CompanyThreeElementsVerificationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CompanyThreeElementsVerificationResponseBody() = default;
};
class CompanyThreeElementsVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CompanyThreeElementsVerificationResponseBody> body{};

  CompanyThreeElementsVerificationResponse() {}

  explicit CompanyThreeElementsVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CompanyThreeElementsVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CompanyThreeElementsVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~CompanyThreeElementsVerificationResponse() = default;
};
class CompanyTwoElementsVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> epCertName{};
  shared_ptr<string> epCertNo{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CompanyTwoElementsVerificationRequest() {}

  explicit CompanyTwoElementsVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (epCertName) {
      res["EpCertName"] = boost::any(*epCertName);
    }
    if (epCertNo) {
      res["EpCertNo"] = boost::any(*epCertNo);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("EpCertName") != m.end() && !m["EpCertName"].empty()) {
      epCertName = make_shared<string>(boost::any_cast<string>(m["EpCertName"]));
    }
    if (m.find("EpCertNo") != m.end() && !m["EpCertNo"].empty()) {
      epCertNo = make_shared<string>(boost::any_cast<string>(m["EpCertNo"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CompanyTwoElementsVerificationRequest() = default;
};
class CompanyTwoElementsVerificationResponseBodyDataDetailInfo : public Darabonba::Model {
public:
  shared_ptr<string> enterpriseStatus{};
  shared_ptr<string> openTime{};

  CompanyTwoElementsVerificationResponseBodyDataDetailInfo() {}

  explicit CompanyTwoElementsVerificationResponseBodyDataDetailInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enterpriseStatus) {
      res["EnterpriseStatus"] = boost::any(*enterpriseStatus);
    }
    if (openTime) {
      res["OpenTime"] = boost::any(*openTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnterpriseStatus") != m.end() && !m["EnterpriseStatus"].empty()) {
      enterpriseStatus = make_shared<string>(boost::any_cast<string>(m["EnterpriseStatus"]));
    }
    if (m.find("OpenTime") != m.end() && !m["OpenTime"].empty()) {
      openTime = make_shared<string>(boost::any_cast<string>(m["OpenTime"]));
    }
  }


  virtual ~CompanyTwoElementsVerificationResponseBodyDataDetailInfo() = default;
};
class CompanyTwoElementsVerificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<CompanyTwoElementsVerificationResponseBodyDataDetailInfo> detailInfo{};
  shared_ptr<vector<string>> inconsistentData{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> verifyResult{};

  CompanyTwoElementsVerificationResponseBodyData() {}

  explicit CompanyTwoElementsVerificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailInfo) {
      res["DetailInfo"] = detailInfo ? boost::any(detailInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (inconsistentData) {
      res["InconsistentData"] = boost::any(*inconsistentData);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailInfo") != m.end() && !m["DetailInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DetailInfo"].type()) {
        CompanyTwoElementsVerificationResponseBodyDataDetailInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DetailInfo"]));
        detailInfo = make_shared<CompanyTwoElementsVerificationResponseBodyDataDetailInfo>(model1);
      }
    }
    if (m.find("InconsistentData") != m.end() && !m["InconsistentData"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InconsistentData"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InconsistentData"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      inconsistentData = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
  }


  virtual ~CompanyTwoElementsVerificationResponseBodyData() = default;
};
class CompanyTwoElementsVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<CompanyTwoElementsVerificationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CompanyTwoElementsVerificationResponseBody() {}

  explicit CompanyTwoElementsVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CompanyTwoElementsVerificationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CompanyTwoElementsVerificationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CompanyTwoElementsVerificationResponseBody() = default;
};
class CompanyTwoElementsVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CompanyTwoElementsVerificationResponseBody> body{};

  CompanyTwoElementsVerificationResponse() {}

  explicit CompanyTwoElementsVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CompanyTwoElementsVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CompanyTwoElementsVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~CompanyTwoElementsVerificationResponse() = default;
};
class DescribeEmptyNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeEmptyNumberRequest() {}

  explicit DescribeEmptyNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeEmptyNumberRequest() = default;
};
class DescribeEmptyNumberResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> number{};
  shared_ptr<string> status{};

  DescribeEmptyNumberResponseBodyData() {}

  explicit DescribeEmptyNumberResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeEmptyNumberResponseBodyData() = default;
};
class DescribeEmptyNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeEmptyNumberResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeEmptyNumberResponseBody() {}

  explicit DescribeEmptyNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEmptyNumberResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeEmptyNumberResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeEmptyNumberResponseBody() = default;
};
class DescribeEmptyNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEmptyNumberResponseBody> body{};

  DescribeEmptyNumberResponse() {}

  explicit DescribeEmptyNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEmptyNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEmptyNumberResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEmptyNumberResponse() = default;
};
class DescribeMobileOperatorAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeMobileOperatorAttributeRequest() {}

  explicit DescribeMobileOperatorAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeMobileOperatorAttributeRequest() = default;
};
class DescribeMobileOperatorAttributeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> basicCarrier{};
  shared_ptr<string> carrier{};
  shared_ptr<string> city{};
  shared_ptr<bool> isNumberPortability{};
  shared_ptr<string> province{};
  shared_ptr<string> realNumber{};
  shared_ptr<string> segmentCarrier{};

  DescribeMobileOperatorAttributeResponseBodyData() {}

  explicit DescribeMobileOperatorAttributeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicCarrier) {
      res["BasicCarrier"] = boost::any(*basicCarrier);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (isNumberPortability) {
      res["IsNumberPortability"] = boost::any(*isNumberPortability);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (realNumber) {
      res["RealNumber"] = boost::any(*realNumber);
    }
    if (segmentCarrier) {
      res["SegmentCarrier"] = boost::any(*segmentCarrier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicCarrier") != m.end() && !m["BasicCarrier"].empty()) {
      basicCarrier = make_shared<string>(boost::any_cast<string>(m["BasicCarrier"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("IsNumberPortability") != m.end() && !m["IsNumberPortability"].empty()) {
      isNumberPortability = make_shared<bool>(boost::any_cast<bool>(m["IsNumberPortability"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("RealNumber") != m.end() && !m["RealNumber"].empty()) {
      realNumber = make_shared<string>(boost::any_cast<string>(m["RealNumber"]));
    }
    if (m.find("SegmentCarrier") != m.end() && !m["SegmentCarrier"].empty()) {
      segmentCarrier = make_shared<string>(boost::any_cast<string>(m["SegmentCarrier"]));
    }
  }


  virtual ~DescribeMobileOperatorAttributeResponseBodyData() = default;
};
class DescribeMobileOperatorAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<DescribeMobileOperatorAttributeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeMobileOperatorAttributeResponseBody() {}

  explicit DescribeMobileOperatorAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeMobileOperatorAttributeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeMobileOperatorAttributeResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeMobileOperatorAttributeResponseBody() = default;
};
class DescribeMobileOperatorAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMobileOperatorAttributeResponseBody> body{};

  DescribeMobileOperatorAttributeResponse() {}

  explicit DescribeMobileOperatorAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMobileOperatorAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMobileOperatorAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMobileOperatorAttributeResponse() = default;
};
class DescribePhoneNumberAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> numberType{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> rate{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePhoneNumberAnalysisRequest() {}

  explicit DescribePhoneNumberAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (numberType) {
      res["NumberType"] = boost::any(*numberType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("NumberType") != m.end() && !m["NumberType"].empty()) {
      numberType = make_shared<long>(boost::any_cast<long>(m["NumberType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<long>(boost::any_cast<long>(m["Rate"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisRequest() = default;
};
class DescribePhoneNumberAnalysisResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> number{};

  DescribePhoneNumberAnalysisResponseBodyDataList() {}

  explicit DescribePhoneNumberAnalysisResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisResponseBodyDataList() = default;
};
class DescribePhoneNumberAnalysisResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePhoneNumberAnalysisResponseBodyDataList>> list{};

  DescribePhoneNumberAnalysisResponseBodyData() {}

  explicit DescribePhoneNumberAnalysisResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<DescribePhoneNumberAnalysisResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePhoneNumberAnalysisResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<DescribePhoneNumberAnalysisResponseBodyDataList>>(expect1);
      }
    }
  }


  virtual ~DescribePhoneNumberAnalysisResponseBodyData() = default;
};
class DescribePhoneNumberAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<DescribePhoneNumberAnalysisResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberAnalysisResponseBody() {}

  explicit DescribePhoneNumberAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribePhoneNumberAnalysisResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribePhoneNumberAnalysisResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisResponseBody() = default;
};
class DescribePhoneNumberAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberAnalysisResponseBody> body{};

  DescribePhoneNumberAnalysisResponse() {}

  explicit DescribePhoneNumberAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberAnalysisResponse() = default;
};
class DescribePhoneNumberAnalysisAIRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> modelConfig{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> rate{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePhoneNumberAnalysisAIRequest() {}

  explicit DescribePhoneNumberAnalysisAIRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (modelConfig) {
      res["ModelConfig"] = boost::any(*modelConfig);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("ModelConfig") != m.end() && !m["ModelConfig"].empty()) {
      modelConfig = make_shared<string>(boost::any_cast<string>(m["ModelConfig"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<long>(boost::any_cast<long>(m["Rate"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisAIRequest() = default;
};
class DescribePhoneNumberAnalysisAIResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> number{};

  DescribePhoneNumberAnalysisAIResponseBodyData() {}

  explicit DescribePhoneNumberAnalysisAIResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisAIResponseBodyData() = default;
};
class DescribePhoneNumberAnalysisAIResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<DescribePhoneNumberAnalysisAIResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberAnalysisAIResponseBody() {}

  explicit DescribePhoneNumberAnalysisAIResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribePhoneNumberAnalysisAIResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribePhoneNumberAnalysisAIResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisAIResponseBody() = default;
};
class DescribePhoneNumberAnalysisAIResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberAnalysisAIResponseBody> body{};

  DescribePhoneNumberAnalysisAIResponse() {}

  explicit DescribePhoneNumberAnalysisAIResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberAnalysisAIResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberAnalysisAIResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberAnalysisAIResponse() = default;
};
class DescribePhoneNumberAnalysisPaiRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> modelConfig{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> rate{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePhoneNumberAnalysisPaiRequest() {}

  explicit DescribePhoneNumberAnalysisPaiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (modelConfig) {
      res["ModelConfig"] = boost::any(*modelConfig);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("ModelConfig") != m.end() && !m["ModelConfig"].empty()) {
      modelConfig = make_shared<string>(boost::any_cast<string>(m["ModelConfig"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<long>(boost::any_cast<long>(m["Rate"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisPaiRequest() = default;
};
class DescribePhoneNumberAnalysisPaiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<vector<string>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberAnalysisPaiResponseBody() {}

  explicit DescribePhoneNumberAnalysisPaiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisPaiResponseBody() = default;
};
class DescribePhoneNumberAnalysisPaiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberAnalysisPaiResponseBody> body{};

  DescribePhoneNumberAnalysisPaiResponse() {}

  explicit DescribePhoneNumberAnalysisPaiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberAnalysisPaiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberAnalysisPaiResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberAnalysisPaiResponse() = default;
};
class DescribePhoneNumberAnalysisTransparentRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> ip{};
  shared_ptr<string> numberType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePhoneNumberAnalysisTransparentRequest() {}

  explicit DescribePhoneNumberAnalysisTransparentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (numberType) {
      res["NumberType"] = boost::any(*numberType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("NumberType") != m.end() && !m["NumberType"].empty()) {
      numberType = make_shared<string>(boost::any_cast<string>(m["NumberType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisTransparentRequest() = default;
};
class DescribePhoneNumberAnalysisTransparentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deviceRisk{};
  shared_ptr<string> ipRisk{};
  shared_ptr<string> score1{};
  shared_ptr<string> score2{};
  shared_ptr<string> score3{};

  DescribePhoneNumberAnalysisTransparentResponseBodyData() {}

  explicit DescribePhoneNumberAnalysisTransparentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceRisk) {
      res["Device_risk"] = boost::any(*deviceRisk);
    }
    if (ipRisk) {
      res["Ip_risk"] = boost::any(*ipRisk);
    }
    if (score1) {
      res["Score1"] = boost::any(*score1);
    }
    if (score2) {
      res["Score2"] = boost::any(*score2);
    }
    if (score3) {
      res["Score3"] = boost::any(*score3);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Device_risk") != m.end() && !m["Device_risk"].empty()) {
      deviceRisk = make_shared<string>(boost::any_cast<string>(m["Device_risk"]));
    }
    if (m.find("Ip_risk") != m.end() && !m["Ip_risk"].empty()) {
      ipRisk = make_shared<string>(boost::any_cast<string>(m["Ip_risk"]));
    }
    if (m.find("Score1") != m.end() && !m["Score1"].empty()) {
      score1 = make_shared<string>(boost::any_cast<string>(m["Score1"]));
    }
    if (m.find("Score2") != m.end() && !m["Score2"].empty()) {
      score2 = make_shared<string>(boost::any_cast<string>(m["Score2"]));
    }
    if (m.find("Score3") != m.end() && !m["Score3"].empty()) {
      score3 = make_shared<string>(boost::any_cast<string>(m["Score3"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisTransparentResponseBodyData() = default;
};
class DescribePhoneNumberAnalysisTransparentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<DescribePhoneNumberAnalysisTransparentResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberAnalysisTransparentResponseBody() {}

  explicit DescribePhoneNumberAnalysisTransparentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribePhoneNumberAnalysisTransparentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribePhoneNumberAnalysisTransparentResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberAnalysisTransparentResponseBody() = default;
};
class DescribePhoneNumberAnalysisTransparentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberAnalysisTransparentResponseBody> body{};

  DescribePhoneNumberAnalysisTransparentResponse() {}

  explicit DescribePhoneNumberAnalysisTransparentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberAnalysisTransparentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberAnalysisTransparentResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberAnalysisTransparentResponse() = default;
};
class DescribePhoneNumberAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePhoneNumberAttributeRequest() {}

  explicit DescribePhoneNumberAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePhoneNumberAttributeRequest() = default;
};
class DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute : public Darabonba::Model {
public:
  shared_ptr<string> basicCarrier{};
  shared_ptr<string> carrier{};
  shared_ptr<string> city{};
  shared_ptr<bool> isNumberPortability{};
  shared_ptr<long> numberSegment{};
  shared_ptr<string> province{};

  DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute() {}

  explicit DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicCarrier) {
      res["BasicCarrier"] = boost::any(*basicCarrier);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (isNumberPortability) {
      res["IsNumberPortability"] = boost::any(*isNumberPortability);
    }
    if (numberSegment) {
      res["NumberSegment"] = boost::any(*numberSegment);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicCarrier") != m.end() && !m["BasicCarrier"].empty()) {
      basicCarrier = make_shared<string>(boost::any_cast<string>(m["BasicCarrier"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("IsNumberPortability") != m.end() && !m["IsNumberPortability"].empty()) {
      isNumberPortability = make_shared<bool>(boost::any_cast<bool>(m["IsNumberPortability"]));
    }
    if (m.find("NumberSegment") != m.end() && !m["NumberSegment"].empty()) {
      numberSegment = make_shared<long>(boost::any_cast<long>(m["NumberSegment"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
  }


  virtual ~DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute() = default;
};
class DescribePhoneNumberAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute> phoneNumberAttribute{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberAttributeResponseBody() {}

  explicit DescribePhoneNumberAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (phoneNumberAttribute) {
      res["PhoneNumberAttribute"] = phoneNumberAttribute ? boost::any(phoneNumberAttribute->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PhoneNumberAttribute") != m.end() && !m["PhoneNumberAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["PhoneNumberAttribute"].type()) {
        DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PhoneNumberAttribute"]));
        phoneNumberAttribute = make_shared<DescribePhoneNumberAttributeResponseBodyPhoneNumberAttribute>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberAttributeResponseBody() = default;
};
class DescribePhoneNumberAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberAttributeResponseBody> body{};

  DescribePhoneNumberAttributeResponse() {}

  explicit DescribePhoneNumberAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberAttributeResponse() = default;
};
class DescribePhoneNumberOnlineTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> carrier{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePhoneNumberOnlineTimeRequest() {}

  explicit DescribePhoneNumberOnlineTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePhoneNumberOnlineTimeRequest() = default;
};
class DescribePhoneNumberOnlineTimeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carrierCode{};
  shared_ptr<string> verifyResult{};

  DescribePhoneNumberOnlineTimeResponseBodyData() {}

  explicit DescribePhoneNumberOnlineTimeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrierCode) {
      res["CarrierCode"] = boost::any(*carrierCode);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CarrierCode") != m.end() && !m["CarrierCode"].empty()) {
      carrierCode = make_shared<string>(boost::any_cast<string>(m["CarrierCode"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
  }


  virtual ~DescribePhoneNumberOnlineTimeResponseBodyData() = default;
};
class DescribePhoneNumberOnlineTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribePhoneNumberOnlineTimeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberOnlineTimeResponseBody() {}

  explicit DescribePhoneNumberOnlineTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberOnlineTimeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribePhoneNumberOnlineTimeResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberOnlineTimeResponseBody() = default;
};
class DescribePhoneNumberOnlineTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberOnlineTimeResponseBody> body{};

  DescribePhoneNumberOnlineTimeResponse() {}

  explicit DescribePhoneNumberOnlineTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberOnlineTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberOnlineTimeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberOnlineTimeResponse() = default;
};
class DescribePhoneNumberOperatorAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> flowName{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resultCount{};

  DescribePhoneNumberOperatorAttributeRequest() {}

  explicit DescribePhoneNumberOperatorAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resultCount) {
      res["ResultCount"] = boost::any(*resultCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResultCount") != m.end() && !m["ResultCount"].empty()) {
      resultCount = make_shared<string>(boost::any_cast<string>(m["ResultCount"]));
    }
  }


  virtual ~DescribePhoneNumberOperatorAttributeRequest() = default;
};
class DescribePhoneNumberOperatorAttributeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> basicCarrier{};
  shared_ptr<string> carrier{};
  shared_ptr<string> city{};
  shared_ptr<bool> isNumberPortability{};
  shared_ptr<long> numberSegment{};
  shared_ptr<string> province{};

  DescribePhoneNumberOperatorAttributeResponseBodyData() {}

  explicit DescribePhoneNumberOperatorAttributeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicCarrier) {
      res["BasicCarrier"] = boost::any(*basicCarrier);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (isNumberPortability) {
      res["IsNumberPortability"] = boost::any(*isNumberPortability);
    }
    if (numberSegment) {
      res["NumberSegment"] = boost::any(*numberSegment);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicCarrier") != m.end() && !m["BasicCarrier"].empty()) {
      basicCarrier = make_shared<string>(boost::any_cast<string>(m["BasicCarrier"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("IsNumberPortability") != m.end() && !m["IsNumberPortability"].empty()) {
      isNumberPortability = make_shared<bool>(boost::any_cast<bool>(m["IsNumberPortability"]));
    }
    if (m.find("NumberSegment") != m.end() && !m["NumberSegment"].empty()) {
      numberSegment = make_shared<long>(boost::any_cast<long>(m["NumberSegment"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
  }


  virtual ~DescribePhoneNumberOperatorAttributeResponseBodyData() = default;
};
class DescribePhoneNumberOperatorAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<DescribePhoneNumberOperatorAttributeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberOperatorAttributeResponseBody() {}

  explicit DescribePhoneNumberOperatorAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribePhoneNumberOperatorAttributeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribePhoneNumberOperatorAttributeResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberOperatorAttributeResponseBody() = default;
};
class DescribePhoneNumberOperatorAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberOperatorAttributeResponseBody> body{};

  DescribePhoneNumberOperatorAttributeResponse() {}

  explicit DescribePhoneNumberOperatorAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberOperatorAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberOperatorAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberOperatorAttributeResponse() = default;
};
class DescribePhoneNumberOperatorAttributeAnnualRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> mask{};
  shared_ptr<string> number{};

  DescribePhoneNumberOperatorAttributeAnnualRequest() {}

  explicit DescribePhoneNumberOperatorAttributeAnnualRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
  }


  virtual ~DescribePhoneNumberOperatorAttributeAnnualRequest() = default;
};
class DescribePhoneNumberOperatorAttributeAnnualResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> basicCarrier{};
  shared_ptr<string> carrier{};
  shared_ptr<string> city{};
  shared_ptr<string> mts{};
  shared_ptr<bool> numberPortability{};
  shared_ptr<string> province{};

  DescribePhoneNumberOperatorAttributeAnnualResponseBodyData() {}

  explicit DescribePhoneNumberOperatorAttributeAnnualResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicCarrier) {
      res["BasicCarrier"] = boost::any(*basicCarrier);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (mts) {
      res["Mts"] = boost::any(*mts);
    }
    if (numberPortability) {
      res["NumberPortability"] = boost::any(*numberPortability);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicCarrier") != m.end() && !m["BasicCarrier"].empty()) {
      basicCarrier = make_shared<string>(boost::any_cast<string>(m["BasicCarrier"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Mts") != m.end() && !m["Mts"].empty()) {
      mts = make_shared<string>(boost::any_cast<string>(m["Mts"]));
    }
    if (m.find("NumberPortability") != m.end() && !m["NumberPortability"].empty()) {
      numberPortability = make_shared<bool>(boost::any_cast<bool>(m["NumberPortability"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
  }


  virtual ~DescribePhoneNumberOperatorAttributeAnnualResponseBodyData() = default;
};
class DescribePhoneNumberOperatorAttributeAnnualResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribePhoneNumberOperatorAttributeAnnualResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribePhoneNumberOperatorAttributeAnnualResponseBody() {}

  explicit DescribePhoneNumberOperatorAttributeAnnualResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberOperatorAttributeAnnualResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribePhoneNumberOperatorAttributeAnnualResponseBodyData>(model1);
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


  virtual ~DescribePhoneNumberOperatorAttributeAnnualResponseBody() = default;
};
class DescribePhoneNumberOperatorAttributeAnnualResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberOperatorAttributeAnnualResponseBody> body{};

  DescribePhoneNumberOperatorAttributeAnnualResponse() {}

  explicit DescribePhoneNumberOperatorAttributeAnnualResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberOperatorAttributeAnnualResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberOperatorAttributeAnnualResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberOperatorAttributeAnnualResponse() = default;
};
class DescribePhoneNumberOperatorAttributeAnnualUseRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};

  DescribePhoneNumberOperatorAttributeAnnualUseRequest() {}

  explicit DescribePhoneNumberOperatorAttributeAnnualUseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
  }


  virtual ~DescribePhoneNumberOperatorAttributeAnnualUseRequest() = default;
};
class DescribePhoneNumberOperatorAttributeAnnualUseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> basicCarrier{};
  shared_ptr<string> carrier{};
  shared_ptr<string> city{};
  shared_ptr<bool> isNumberPortability{};
  shared_ptr<long> numberSegment{};
  shared_ptr<string> province{};

  DescribePhoneNumberOperatorAttributeAnnualUseResponseBodyData() {}

  explicit DescribePhoneNumberOperatorAttributeAnnualUseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicCarrier) {
      res["BasicCarrier"] = boost::any(*basicCarrier);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (isNumberPortability) {
      res["IsNumberPortability"] = boost::any(*isNumberPortability);
    }
    if (numberSegment) {
      res["NumberSegment"] = boost::any(*numberSegment);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicCarrier") != m.end() && !m["BasicCarrier"].empty()) {
      basicCarrier = make_shared<string>(boost::any_cast<string>(m["BasicCarrier"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("IsNumberPortability") != m.end() && !m["IsNumberPortability"].empty()) {
      isNumberPortability = make_shared<bool>(boost::any_cast<bool>(m["IsNumberPortability"]));
    }
    if (m.find("NumberSegment") != m.end() && !m["NumberSegment"].empty()) {
      numberSegment = make_shared<long>(boost::any_cast<long>(m["NumberSegment"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
  }


  virtual ~DescribePhoneNumberOperatorAttributeAnnualUseResponseBodyData() = default;
};
class DescribePhoneNumberOperatorAttributeAnnualUseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<DescribePhoneNumberOperatorAttributeAnnualUseResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberOperatorAttributeAnnualUseResponseBody() {}

  explicit DescribePhoneNumberOperatorAttributeAnnualUseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribePhoneNumberOperatorAttributeAnnualUseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribePhoneNumberOperatorAttributeAnnualUseResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberOperatorAttributeAnnualUseResponseBody() = default;
};
class DescribePhoneNumberOperatorAttributeAnnualUseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberOperatorAttributeAnnualUseResponseBody> body{};

  DescribePhoneNumberOperatorAttributeAnnualUseResponse() {}

  explicit DescribePhoneNumberOperatorAttributeAnnualUseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberOperatorAttributeAnnualUseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberOperatorAttributeAnnualUseResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberOperatorAttributeAnnualUseResponse() = default;
};
class DescribePhoneNumberRiskRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribePhoneNumberRiskRequest() {}

  explicit DescribePhoneNumberRiskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribePhoneNumberRiskRequest() = default;
};
class DescribePhoneNumberRiskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> verifyResult{};

  DescribePhoneNumberRiskResponseBodyData() {}

  explicit DescribePhoneNumberRiskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
  }


  virtual ~DescribePhoneNumberRiskResponseBodyData() = default;
};
class DescribePhoneNumberRiskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<DescribePhoneNumberRiskResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribePhoneNumberRiskResponseBody() {}

  explicit DescribePhoneNumberRiskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribePhoneNumberRiskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribePhoneNumberRiskResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneNumberRiskResponseBody() = default;
};
class DescribePhoneNumberRiskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneNumberRiskResponseBody> body{};

  DescribePhoneNumberRiskResponse() {}

  explicit DescribePhoneNumberRiskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneNumberRiskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneNumberRiskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneNumberRiskResponse() = default;
};
class DescribePhoneTwiceTelVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  DescribePhoneTwiceTelVerifyRequest() {}

  explicit DescribePhoneTwiceTelVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribePhoneTwiceTelVerifyRequest() = default;
};
class DescribePhoneTwiceTelVerifyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> verifyResult{};

  DescribePhoneTwiceTelVerifyResponseBodyData() {}

  explicit DescribePhoneTwiceTelVerifyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<string>(boost::any_cast<string>(m["VerifyResult"]));
    }
  }


  virtual ~DescribePhoneTwiceTelVerifyResponseBodyData() = default;
};
class DescribePhoneTwiceTelVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribePhoneTwiceTelVerifyResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribePhoneTwiceTelVerifyResponseBody() {}

  explicit DescribePhoneTwiceTelVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneTwiceTelVerifyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribePhoneTwiceTelVerifyResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePhoneTwiceTelVerifyResponseBody() = default;
};
class DescribePhoneTwiceTelVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePhoneTwiceTelVerifyResponseBody> body{};

  DescribePhoneTwiceTelVerifyResponse() {}

  explicit DescribePhoneTwiceTelVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePhoneTwiceTelVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePhoneTwiceTelVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePhoneTwiceTelVerifyResponse() = default;
};
class GetUAIDApplyTokenSignRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> carrier{};
  shared_ptr<string> clientType{};
  shared_ptr<string> format{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> paramKey{};
  shared_ptr<string> paramStr{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> time{};

  GetUAIDApplyTokenSignRequest() {}

  explicit GetUAIDApplyTokenSignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (paramKey) {
      res["ParamKey"] = boost::any(*paramKey);
    }
    if (paramStr) {
      res["ParamStr"] = boost::any(*paramStr);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ParamKey") != m.end() && !m["ParamKey"].empty()) {
      paramKey = make_shared<string>(boost::any_cast<string>(m["ParamKey"]));
    }
    if (m.find("ParamStr") != m.end() && !m["ParamStr"].empty()) {
      paramStr = make_shared<string>(boost::any_cast<string>(m["ParamStr"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~GetUAIDApplyTokenSignRequest() = default;
};
class GetUAIDApplyTokenSignResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> outId{};
  shared_ptr<string> sign{};

  GetUAIDApplyTokenSignResponseBodyData() {}

  explicit GetUAIDApplyTokenSignResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
  }


  virtual ~GetUAIDApplyTokenSignResponseBodyData() = default;
};
class GetUAIDApplyTokenSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetUAIDApplyTokenSignResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetUAIDApplyTokenSignResponseBody() {}

  explicit GetUAIDApplyTokenSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetUAIDApplyTokenSignResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetUAIDApplyTokenSignResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetUAIDApplyTokenSignResponseBody() = default;
};
class GetUAIDApplyTokenSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUAIDApplyTokenSignResponseBody> body{};

  GetUAIDApplyTokenSignResponse() {}

  explicit GetUAIDApplyTokenSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUAIDApplyTokenSignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUAIDApplyTokenSignResponseBody>(model1);
      }
    }
  }


  virtual ~GetUAIDApplyTokenSignResponse() = default;
};
class GetUAIDConversionSignRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> carrier{};
  shared_ptr<string> clientType{};
  shared_ptr<string> format{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> paramKey{};
  shared_ptr<string> paramStr{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> time{};

  GetUAIDConversionSignRequest() {}

  explicit GetUAIDConversionSignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (paramKey) {
      res["ParamKey"] = boost::any(*paramKey);
    }
    if (paramStr) {
      res["ParamStr"] = boost::any(*paramStr);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ParamKey") != m.end() && !m["ParamKey"].empty()) {
      paramKey = make_shared<string>(boost::any_cast<string>(m["ParamKey"]));
    }
    if (m.find("ParamStr") != m.end() && !m["ParamStr"].empty()) {
      paramStr = make_shared<string>(boost::any_cast<string>(m["ParamStr"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~GetUAIDConversionSignRequest() = default;
};
class GetUAIDConversionSignResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> outId{};
  shared_ptr<string> sign{};

  GetUAIDConversionSignResponseBodyData() {}

  explicit GetUAIDConversionSignResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (sign) {
      res["Sign"] = boost::any(*sign);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("Sign") != m.end() && !m["Sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["Sign"]));
    }
  }


  virtual ~GetUAIDConversionSignResponseBodyData() = default;
};
class GetUAIDConversionSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetUAIDConversionSignResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetUAIDConversionSignResponseBody() {}

  explicit GetUAIDConversionSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetUAIDConversionSignResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetUAIDConversionSignResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetUAIDConversionSignResponseBody() = default;
};
class GetUAIDConversionSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUAIDConversionSignResponseBody> body{};

  GetUAIDConversionSignResponse() {}

  explicit GetUAIDConversionSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUAIDConversionSignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUAIDConversionSignResponseBody>(model1);
      }
    }
  }


  virtual ~GetUAIDConversionSignResponse() = default;
};
class InvalidPhoneNumberFilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  InvalidPhoneNumberFilterRequest() {}

  explicit InvalidPhoneNumberFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~InvalidPhoneNumberFilterRequest() = default;
};
class InvalidPhoneNumberFilterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> encryptedNumber{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> originalNumber{};

  InvalidPhoneNumberFilterResponseBodyData() {}

  explicit InvalidPhoneNumberFilterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (encryptedNumber) {
      res["EncryptedNumber"] = boost::any(*encryptedNumber);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (originalNumber) {
      res["OriginalNumber"] = boost::any(*originalNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EncryptedNumber") != m.end() && !m["EncryptedNumber"].empty()) {
      encryptedNumber = make_shared<string>(boost::any_cast<string>(m["EncryptedNumber"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("OriginalNumber") != m.end() && !m["OriginalNumber"].empty()) {
      originalNumber = make_shared<string>(boost::any_cast<string>(m["OriginalNumber"]));
    }
  }


  virtual ~InvalidPhoneNumberFilterResponseBodyData() = default;
};
class InvalidPhoneNumberFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<InvalidPhoneNumberFilterResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  InvalidPhoneNumberFilterResponseBody() {}

  explicit InvalidPhoneNumberFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<InvalidPhoneNumberFilterResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InvalidPhoneNumberFilterResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<InvalidPhoneNumberFilterResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~InvalidPhoneNumberFilterResponseBody() = default;
};
class InvalidPhoneNumberFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InvalidPhoneNumberFilterResponseBody> body{};

  InvalidPhoneNumberFilterResponse() {}

  explicit InvalidPhoneNumberFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InvalidPhoneNumberFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InvalidPhoneNumberFilterResponseBody>(model1);
      }
    }
  }


  virtual ~InvalidPhoneNumberFilterResponse() = default;
};
class PhoneNumberConvertServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PhoneNumberConvertServiceRequest() {}

  explicit PhoneNumberConvertServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PhoneNumberConvertServiceRequest() = default;
};
class PhoneNumberConvertServiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> converResult{};
  shared_ptr<string> number{};
  shared_ptr<string> numberMd5{};
  shared_ptr<string> numberSha256{};

  PhoneNumberConvertServiceResponseBodyData() {}

  explicit PhoneNumberConvertServiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (converResult) {
      res["ConverResult"] = boost::any(*converResult);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (numberMd5) {
      res["NumberMd5"] = boost::any(*numberMd5);
    }
    if (numberSha256) {
      res["NumberSha256"] = boost::any(*numberSha256);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConverResult") != m.end() && !m["ConverResult"].empty()) {
      converResult = make_shared<bool>(boost::any_cast<bool>(m["ConverResult"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("NumberMd5") != m.end() && !m["NumberMd5"].empty()) {
      numberMd5 = make_shared<string>(boost::any_cast<string>(m["NumberMd5"]));
    }
    if (m.find("NumberSha256") != m.end() && !m["NumberSha256"].empty()) {
      numberSha256 = make_shared<string>(boost::any_cast<string>(m["NumberSha256"]));
    }
  }


  virtual ~PhoneNumberConvertServiceResponseBodyData() = default;
};
class PhoneNumberConvertServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<PhoneNumberConvertServiceResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PhoneNumberConvertServiceResponseBody() {}

  explicit PhoneNumberConvertServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<PhoneNumberConvertServiceResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PhoneNumberConvertServiceResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PhoneNumberConvertServiceResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PhoneNumberConvertServiceResponseBody() = default;
};
class PhoneNumberConvertServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PhoneNumberConvertServiceResponseBody> body{};

  PhoneNumberConvertServiceResponse() {}

  explicit PhoneNumberConvertServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PhoneNumberConvertServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PhoneNumberConvertServiceResponseBody>(model1);
      }
    }
  }


  virtual ~PhoneNumberConvertServiceResponse() = default;
};
class PhoneNumberEncryptRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PhoneNumberEncryptRequest() {}

  explicit PhoneNumberEncryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PhoneNumberEncryptRequest() = default;
};
class PhoneNumberEncryptResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> encryptedNumber{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> originalNumber{};
  shared_ptr<string> outId{};

  PhoneNumberEncryptResponseBodyData() {}

  explicit PhoneNumberEncryptResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptedNumber) {
      res["EncryptedNumber"] = boost::any(*encryptedNumber);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (originalNumber) {
      res["OriginalNumber"] = boost::any(*originalNumber);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptedNumber") != m.end() && !m["EncryptedNumber"].empty()) {
      encryptedNumber = make_shared<string>(boost::any_cast<string>(m["EncryptedNumber"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("OriginalNumber") != m.end() && !m["OriginalNumber"].empty()) {
      originalNumber = make_shared<string>(boost::any_cast<string>(m["OriginalNumber"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
  }


  virtual ~PhoneNumberEncryptResponseBodyData() = default;
};
class PhoneNumberEncryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<PhoneNumberEncryptResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PhoneNumberEncryptResponseBody() {}

  explicit PhoneNumberEncryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<PhoneNumberEncryptResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PhoneNumberEncryptResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<PhoneNumberEncryptResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PhoneNumberEncryptResponseBody() = default;
};
class PhoneNumberEncryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PhoneNumberEncryptResponseBody> body{};

  PhoneNumberEncryptResponse() {}

  explicit PhoneNumberEncryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PhoneNumberEncryptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PhoneNumberEncryptResponseBody>(model1);
      }
    }
  }


  virtual ~PhoneNumberEncryptResponse() = default;
};
class PhoneNumberStatusForAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PhoneNumberStatusForAccountRequest() {}

  explicit PhoneNumberStatusForAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PhoneNumberStatusForAccountRequest() = default;
};
class PhoneNumberStatusForAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> status{};

  PhoneNumberStatusForAccountResponseBodyData() {}

  explicit PhoneNumberStatusForAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PhoneNumberStatusForAccountResponseBodyData() = default;
};
class PhoneNumberStatusForAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PhoneNumberStatusForAccountResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PhoneNumberStatusForAccountResponseBody() {}

  explicit PhoneNumberStatusForAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PhoneNumberStatusForAccountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PhoneNumberStatusForAccountResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PhoneNumberStatusForAccountResponseBody() = default;
};
class PhoneNumberStatusForAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PhoneNumberStatusForAccountResponseBody> body{};

  PhoneNumberStatusForAccountResponse() {}

  explicit PhoneNumberStatusForAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PhoneNumberStatusForAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PhoneNumberStatusForAccountResponseBody>(model1);
      }
    }
  }


  virtual ~PhoneNumberStatusForAccountResponse() = default;
};
class PhoneNumberStatusForPublicRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PhoneNumberStatusForPublicRequest() {}

  explicit PhoneNumberStatusForPublicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PhoneNumberStatusForPublicRequest() = default;
};
class PhoneNumberStatusForPublicResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> status{};

  PhoneNumberStatusForPublicResponseBodyData() {}

  explicit PhoneNumberStatusForPublicResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PhoneNumberStatusForPublicResponseBodyData() = default;
};
class PhoneNumberStatusForPublicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PhoneNumberStatusForPublicResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PhoneNumberStatusForPublicResponseBody() {}

  explicit PhoneNumberStatusForPublicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PhoneNumberStatusForPublicResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PhoneNumberStatusForPublicResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PhoneNumberStatusForPublicResponseBody() = default;
};
class PhoneNumberStatusForPublicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PhoneNumberStatusForPublicResponseBody> body{};

  PhoneNumberStatusForPublicResponse() {}

  explicit PhoneNumberStatusForPublicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PhoneNumberStatusForPublicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PhoneNumberStatusForPublicResponseBody>(model1);
      }
    }
  }


  virtual ~PhoneNumberStatusForPublicResponse() = default;
};
class PhoneNumberStatusForRealRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PhoneNumberStatusForRealRequest() {}

  explicit PhoneNumberStatusForRealRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PhoneNumberStatusForRealRequest() = default;
};
class PhoneNumberStatusForRealResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> status{};

  PhoneNumberStatusForRealResponseBodyData() {}

  explicit PhoneNumberStatusForRealResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PhoneNumberStatusForRealResponseBodyData() = default;
};
class PhoneNumberStatusForRealResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PhoneNumberStatusForRealResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PhoneNumberStatusForRealResponseBody() {}

  explicit PhoneNumberStatusForRealResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PhoneNumberStatusForRealResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PhoneNumberStatusForRealResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PhoneNumberStatusForRealResponseBody() = default;
};
class PhoneNumberStatusForRealResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PhoneNumberStatusForRealResponseBody> body{};

  PhoneNumberStatusForRealResponse() {}

  explicit PhoneNumberStatusForRealResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PhoneNumberStatusForRealResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PhoneNumberStatusForRealResponseBody>(model1);
      }
    }
  }


  virtual ~PhoneNumberStatusForRealResponse() = default;
};
class PhoneNumberStatusForSmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PhoneNumberStatusForSmsRequest() {}

  explicit PhoneNumberStatusForSmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PhoneNumberStatusForSmsRequest() = default;
};
class PhoneNumberStatusForSmsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> status{};

  PhoneNumberStatusForSmsResponseBodyData() {}

  explicit PhoneNumberStatusForSmsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PhoneNumberStatusForSmsResponseBodyData() = default;
};
class PhoneNumberStatusForSmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PhoneNumberStatusForSmsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PhoneNumberStatusForSmsResponseBody() {}

  explicit PhoneNumberStatusForSmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PhoneNumberStatusForSmsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PhoneNumberStatusForSmsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PhoneNumberStatusForSmsResponseBody() = default;
};
class PhoneNumberStatusForSmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PhoneNumberStatusForSmsResponseBody> body{};

  PhoneNumberStatusForSmsResponse() {}

  explicit PhoneNumberStatusForSmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PhoneNumberStatusForSmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PhoneNumberStatusForSmsResponseBody>(model1);
      }
    }
  }


  virtual ~PhoneNumberStatusForSmsResponse() = default;
};
class PhoneNumberStatusForVoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  PhoneNumberStatusForVoiceRequest() {}

  explicit PhoneNumberStatusForVoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~PhoneNumberStatusForVoiceRequest() = default;
};
class PhoneNumberStatusForVoiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carrier{};
  shared_ptr<string> status{};

  PhoneNumberStatusForVoiceResponseBodyData() {}

  explicit PhoneNumberStatusForVoiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PhoneNumberStatusForVoiceResponseBodyData() = default;
};
class PhoneNumberStatusForVoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PhoneNumberStatusForVoiceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  PhoneNumberStatusForVoiceResponseBody() {}

  explicit PhoneNumberStatusForVoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PhoneNumberStatusForVoiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PhoneNumberStatusForVoiceResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PhoneNumberStatusForVoiceResponseBody() = default;
};
class PhoneNumberStatusForVoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PhoneNumberStatusForVoiceResponseBody> body{};

  PhoneNumberStatusForVoiceResponse() {}

  explicit PhoneNumberStatusForVoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PhoneNumberStatusForVoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PhoneNumberStatusForVoiceResponseBody>(model1);
      }
    }
  }


  virtual ~PhoneNumberStatusForVoiceResponse() = default;
};
class QueryAvailableAuthCodeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> tagId{};

  QueryAvailableAuthCodeRequest() {}

  explicit QueryAvailableAuthCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<long>(boost::any_cast<long>(m["TagId"]));
    }
  }


  virtual ~QueryAvailableAuthCodeRequest() = default;
};
class QueryAvailableAuthCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<string>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryAvailableAuthCodeResponseBody() {}

  explicit QueryAvailableAuthCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
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


  virtual ~QueryAvailableAuthCodeResponseBody() = default;
};
class QueryAvailableAuthCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAvailableAuthCodeResponseBody> body{};

  QueryAvailableAuthCodeResponse() {}

  explicit QueryAvailableAuthCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAvailableAuthCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAvailableAuthCodeResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAvailableAuthCodeResponse() = default;
};
class QueryPhoneNumberOnlineTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryPhoneNumberOnlineTimeRequest() {}

  explicit QueryPhoneNumberOnlineTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryPhoneNumberOnlineTimeRequest() = default;
};
class QueryPhoneNumberOnlineTimeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carrierCode{};
  shared_ptr<long> verifyResult{};

  QueryPhoneNumberOnlineTimeResponseBodyData() {}

  explicit QueryPhoneNumberOnlineTimeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrierCode) {
      res["CarrierCode"] = boost::any(*carrierCode);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CarrierCode") != m.end() && !m["CarrierCode"].empty()) {
      carrierCode = make_shared<string>(boost::any_cast<string>(m["CarrierCode"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<long>(boost::any_cast<long>(m["VerifyResult"]));
    }
  }


  virtual ~QueryPhoneNumberOnlineTimeResponseBodyData() = default;
};
class QueryPhoneNumberOnlineTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<QueryPhoneNumberOnlineTimeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryPhoneNumberOnlineTimeResponseBody() {}

  explicit QueryPhoneNumberOnlineTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryPhoneNumberOnlineTimeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryPhoneNumberOnlineTimeResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryPhoneNumberOnlineTimeResponseBody() = default;
};
class QueryPhoneNumberOnlineTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPhoneNumberOnlineTimeResponseBody> body{};

  QueryPhoneNumberOnlineTimeResponse() {}

  explicit QueryPhoneNumberOnlineTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPhoneNumberOnlineTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPhoneNumberOnlineTimeResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPhoneNumberOnlineTimeResponse() = default;
};
class QueryPhoneTwiceTelVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  QueryPhoneTwiceTelVerifyRequest() {}

  explicit QueryPhoneTwiceTelVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QueryPhoneTwiceTelVerifyRequest() = default;
};
class QueryPhoneTwiceTelVerifyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carrierCode{};
  shared_ptr<long> verifyResult{};

  QueryPhoneTwiceTelVerifyResponseBodyData() {}

  explicit QueryPhoneTwiceTelVerifyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carrierCode) {
      res["CarrierCode"] = boost::any(*carrierCode);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CarrierCode") != m.end() && !m["CarrierCode"].empty()) {
      carrierCode = make_shared<string>(boost::any_cast<string>(m["CarrierCode"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<long>(boost::any_cast<long>(m["VerifyResult"]));
    }
  }


  virtual ~QueryPhoneTwiceTelVerifyResponseBodyData() = default;
};
class QueryPhoneTwiceTelVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<QueryPhoneTwiceTelVerifyResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryPhoneTwiceTelVerifyResponseBody() {}

  explicit QueryPhoneTwiceTelVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryPhoneTwiceTelVerifyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryPhoneTwiceTelVerifyResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryPhoneTwiceTelVerifyResponseBody() = default;
};
class QueryPhoneTwiceTelVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPhoneTwiceTelVerifyResponseBody> body{};

  QueryPhoneTwiceTelVerifyResponse() {}

  explicit QueryPhoneTwiceTelVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPhoneTwiceTelVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPhoneTwiceTelVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPhoneTwiceTelVerifyResponse() = default;
};
class QueryTagApplyRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> tagId{};

  QueryTagApplyRuleRequest() {}

  explicit QueryTagApplyRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<long>(boost::any_cast<long>(m["TagId"]));
    }
  }


  virtual ~QueryTagApplyRuleRequest() = default;
};
class QueryTagApplyRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> applyMaterialDesc{};
  shared_ptr<long> autoAudit{};
  shared_ptr<string> chargingStandardLink{};
  shared_ptr<long> encryptedQuery{};
  shared_ptr<long> needApplyMaterial{};
  shared_ptr<string> slaLink{};

  QueryTagApplyRuleResponseBodyData() {}

  explicit QueryTagApplyRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyMaterialDesc) {
      res["ApplyMaterialDesc"] = boost::any(*applyMaterialDesc);
    }
    if (autoAudit) {
      res["AutoAudit"] = boost::any(*autoAudit);
    }
    if (chargingStandardLink) {
      res["ChargingStandardLink"] = boost::any(*chargingStandardLink);
    }
    if (encryptedQuery) {
      res["EncryptedQuery"] = boost::any(*encryptedQuery);
    }
    if (needApplyMaterial) {
      res["NeedApplyMaterial"] = boost::any(*needApplyMaterial);
    }
    if (slaLink) {
      res["SlaLink"] = boost::any(*slaLink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyMaterialDesc") != m.end() && !m["ApplyMaterialDesc"].empty()) {
      applyMaterialDesc = make_shared<string>(boost::any_cast<string>(m["ApplyMaterialDesc"]));
    }
    if (m.find("AutoAudit") != m.end() && !m["AutoAudit"].empty()) {
      autoAudit = make_shared<long>(boost::any_cast<long>(m["AutoAudit"]));
    }
    if (m.find("ChargingStandardLink") != m.end() && !m["ChargingStandardLink"].empty()) {
      chargingStandardLink = make_shared<string>(boost::any_cast<string>(m["ChargingStandardLink"]));
    }
    if (m.find("EncryptedQuery") != m.end() && !m["EncryptedQuery"].empty()) {
      encryptedQuery = make_shared<long>(boost::any_cast<long>(m["EncryptedQuery"]));
    }
    if (m.find("NeedApplyMaterial") != m.end() && !m["NeedApplyMaterial"].empty()) {
      needApplyMaterial = make_shared<long>(boost::any_cast<long>(m["NeedApplyMaterial"]));
    }
    if (m.find("SlaLink") != m.end() && !m["SlaLink"].empty()) {
      slaLink = make_shared<string>(boost::any_cast<string>(m["SlaLink"]));
    }
  }


  virtual ~QueryTagApplyRuleResponseBodyData() = default;
};
class QueryTagApplyRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryTagApplyRuleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryTagApplyRuleResponseBody() {}

  explicit QueryTagApplyRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTagApplyRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryTagApplyRuleResponseBodyData>(model1);
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


  virtual ~QueryTagApplyRuleResponseBody() = default;
};
class QueryTagApplyRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTagApplyRuleResponseBody> body{};

  QueryTagApplyRuleResponse() {}

  explicit QueryTagApplyRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTagApplyRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTagApplyRuleResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTagApplyRuleResponse() = default;
};
class QueryTagInfoBySelectionRequest : public Darabonba::Model {
public:
  shared_ptr<long> industryId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> sceneId{};
  shared_ptr<long> tagId{};

  QueryTagInfoBySelectionRequest() {}

  explicit QueryTagInfoBySelectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (industryId) {
      res["IndustryId"] = boost::any(*industryId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IndustryId") != m.end() && !m["IndustryId"].empty()) {
      industryId = make_shared<long>(boost::any_cast<long>(m["IndustryId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<long>(boost::any_cast<long>(m["TagId"]));
    }
  }


  virtual ~QueryTagInfoBySelectionRequest() = default;
};
class QueryTagInfoBySelectionResponseBodyDataParamListValueDict : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> desc{};

  QueryTagInfoBySelectionResponseBodyDataParamListValueDict() {}

  explicit QueryTagInfoBySelectionResponseBodyDataParamListValueDict(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
  }


  virtual ~QueryTagInfoBySelectionResponseBodyDataParamListValueDict() = default;
};
class QueryTagInfoBySelectionResponseBodyDataParamList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> hint{};
  shared_ptr<bool> must{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<vector<QueryTagInfoBySelectionResponseBodyDataParamListValueDict>> valueDict{};

  QueryTagInfoBySelectionResponseBodyDataParamList() {}

  explicit QueryTagInfoBySelectionResponseBodyDataParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (hint) {
      res["Hint"] = boost::any(*hint);
    }
    if (must) {
      res["Must"] = boost::any(*must);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (valueDict) {
      vector<boost::any> temp1;
      for(auto item1:*valueDict){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ValueDict"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Hint") != m.end() && !m["Hint"].empty()) {
      hint = make_shared<string>(boost::any_cast<string>(m["Hint"]));
    }
    if (m.find("Must") != m.end() && !m["Must"].empty()) {
      must = make_shared<bool>(boost::any_cast<bool>(m["Must"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ValueDict") != m.end() && !m["ValueDict"].empty()) {
      if (typeid(vector<boost::any>) == m["ValueDict"].type()) {
        vector<QueryTagInfoBySelectionResponseBodyDataParamListValueDict> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ValueDict"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTagInfoBySelectionResponseBodyDataParamListValueDict model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        valueDict = make_shared<vector<QueryTagInfoBySelectionResponseBodyDataParamListValueDict>>(expect1);
      }
    }
  }


  virtual ~QueryTagInfoBySelectionResponseBodyDataParamList() = default;
};
class QueryTagInfoBySelectionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> authCodeList{};
  shared_ptr<string> complexityType{};
  shared_ptr<string> demoAddress{};
  shared_ptr<string> docAddress{};
  shared_ptr<string> enumDefinitionAddress{};
  shared_ptr<string> flowName{};
  shared_ptr<long> industryId{};
  shared_ptr<string> industryName{};
  shared_ptr<vector<QueryTagInfoBySelectionResponseBodyDataParamList>> paramList{};
  shared_ptr<string> richTextDescription{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> sceneName{};
  shared_ptr<long> tagId{};
  shared_ptr<string> tagName{};

  QueryTagInfoBySelectionResponseBodyData() {}

  explicit QueryTagInfoBySelectionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCodeList) {
      res["AuthCodeList"] = boost::any(*authCodeList);
    }
    if (complexityType) {
      res["ComplexityType"] = boost::any(*complexityType);
    }
    if (demoAddress) {
      res["DemoAddress"] = boost::any(*demoAddress);
    }
    if (docAddress) {
      res["DocAddress"] = boost::any(*docAddress);
    }
    if (enumDefinitionAddress) {
      res["EnumDefinitionAddress"] = boost::any(*enumDefinitionAddress);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (industryId) {
      res["IndustryId"] = boost::any(*industryId);
    }
    if (industryName) {
      res["IndustryName"] = boost::any(*industryName);
    }
    if (paramList) {
      vector<boost::any> temp1;
      for(auto item1:*paramList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParamList"] = boost::any(temp1);
    }
    if (richTextDescription) {
      res["RichTextDescription"] = boost::any(*richTextDescription);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCodeList") != m.end() && !m["AuthCodeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthCodeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthCodeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authCodeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ComplexityType") != m.end() && !m["ComplexityType"].empty()) {
      complexityType = make_shared<string>(boost::any_cast<string>(m["ComplexityType"]));
    }
    if (m.find("DemoAddress") != m.end() && !m["DemoAddress"].empty()) {
      demoAddress = make_shared<string>(boost::any_cast<string>(m["DemoAddress"]));
    }
    if (m.find("DocAddress") != m.end() && !m["DocAddress"].empty()) {
      docAddress = make_shared<string>(boost::any_cast<string>(m["DocAddress"]));
    }
    if (m.find("EnumDefinitionAddress") != m.end() && !m["EnumDefinitionAddress"].empty()) {
      enumDefinitionAddress = make_shared<string>(boost::any_cast<string>(m["EnumDefinitionAddress"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("IndustryId") != m.end() && !m["IndustryId"].empty()) {
      industryId = make_shared<long>(boost::any_cast<long>(m["IndustryId"]));
    }
    if (m.find("IndustryName") != m.end() && !m["IndustryName"].empty()) {
      industryName = make_shared<string>(boost::any_cast<string>(m["IndustryName"]));
    }
    if (m.find("ParamList") != m.end() && !m["ParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamList"].type()) {
        vector<QueryTagInfoBySelectionResponseBodyDataParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParamList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTagInfoBySelectionResponseBodyDataParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramList = make_shared<vector<QueryTagInfoBySelectionResponseBodyDataParamList>>(expect1);
      }
    }
    if (m.find("RichTextDescription") != m.end() && !m["RichTextDescription"].empty()) {
      richTextDescription = make_shared<string>(boost::any_cast<string>(m["RichTextDescription"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<long>(boost::any_cast<long>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~QueryTagInfoBySelectionResponseBodyData() = default;
};
class QueryTagInfoBySelectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<QueryTagInfoBySelectionResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryTagInfoBySelectionResponseBody() {}

  explicit QueryTagInfoBySelectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<QueryTagInfoBySelectionResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTagInfoBySelectionResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryTagInfoBySelectionResponseBodyData>>(expect1);
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


  virtual ~QueryTagInfoBySelectionResponseBody() = default;
};
class QueryTagInfoBySelectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTagInfoBySelectionResponseBody> body{};

  QueryTagInfoBySelectionResponse() {}

  explicit QueryTagInfoBySelectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTagInfoBySelectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTagInfoBySelectionResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTagInfoBySelectionResponse() = default;
};
class QueryTagListPageRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryTagListPageRequest() {}

  explicit QueryTagListPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryTagListPageRequest() = default;
};
class QueryTagListPageResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> code{};
  shared_ptr<string> docAddress{};
  shared_ptr<long> id{};
  shared_ptr<long> industryId{};
  shared_ptr<string> industryName{};
  shared_ptr<string> introduction{};
  shared_ptr<long> isOpen{};
  shared_ptr<string> name{};
  shared_ptr<string> saleStatusStr{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> sceneName{};

  QueryTagListPageResponseBodyDataRecords() {}

  explicit QueryTagListPageResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (docAddress) {
      res["DocAddress"] = boost::any(*docAddress);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (industryId) {
      res["IndustryId"] = boost::any(*industryId);
    }
    if (industryName) {
      res["IndustryName"] = boost::any(*industryName);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (isOpen) {
      res["IsOpen"] = boost::any(*isOpen);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (saleStatusStr) {
      res["SaleStatusStr"] = boost::any(*saleStatusStr);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DocAddress") != m.end() && !m["DocAddress"].empty()) {
      docAddress = make_shared<string>(boost::any_cast<string>(m["DocAddress"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IndustryId") != m.end() && !m["IndustryId"].empty()) {
      industryId = make_shared<long>(boost::any_cast<long>(m["IndustryId"]));
    }
    if (m.find("IndustryName") != m.end() && !m["IndustryName"].empty()) {
      industryName = make_shared<string>(boost::any_cast<string>(m["IndustryName"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("IsOpen") != m.end() && !m["IsOpen"].empty()) {
      isOpen = make_shared<long>(boost::any_cast<long>(m["IsOpen"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SaleStatusStr") != m.end() && !m["SaleStatusStr"].empty()) {
      saleStatusStr = make_shared<string>(boost::any_cast<string>(m["SaleStatusStr"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
  }


  virtual ~QueryTagListPageResponseBodyDataRecords() = default;
};
class QueryTagListPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<QueryTagListPageResponseBodyDataRecords>> records{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  QueryTagListPageResponseBodyData() {}

  explicit QueryTagListPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
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
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<QueryTagListPageResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTagListPageResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<QueryTagListPageResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~QueryTagListPageResponseBodyData() = default;
};
class QueryTagListPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryTagListPageResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryTagListPageResponseBody() {}

  explicit QueryTagListPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTagListPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryTagListPageResponseBodyData>(model1);
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


  virtual ~QueryTagListPageResponseBody() = default;
};
class QueryTagListPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTagListPageResponseBody> body{};

  QueryTagListPageResponse() {}

  explicit QueryTagListPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTagListPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTagListPageResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTagListPageResponse() = default;
};
class QueryUsageStatisticsByTagIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> beginTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> tagId{};

  QueryUsageStatisticsByTagIdRequest() {}

  explicit QueryUsageStatisticsByTagIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<long>(boost::any_cast<long>(m["TagId"]));
    }
  }


  virtual ~QueryUsageStatisticsByTagIdRequest() = default;
};
class QueryUsageStatisticsByTagIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> authorizationCode{};
  shared_ptr<long> failTotal{};
  shared_ptr<string> gmtDateStr{};
  shared_ptr<long> id{};
  shared_ptr<string> industryName{};
  shared_ptr<long> partnerId{};
  shared_ptr<string> sceneName{};
  shared_ptr<long> successTotal{};
  shared_ptr<long> tagId{};
  shared_ptr<string> tagName{};
  shared_ptr<long> total{};

  QueryUsageStatisticsByTagIdResponseBodyData() {}

  explicit QueryUsageStatisticsByTagIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorizationCode) {
      res["AuthorizationCode"] = boost::any(*authorizationCode);
    }
    if (failTotal) {
      res["FailTotal"] = boost::any(*failTotal);
    }
    if (gmtDateStr) {
      res["GmtDateStr"] = boost::any(*gmtDateStr);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (industryName) {
      res["IndustryName"] = boost::any(*industryName);
    }
    if (partnerId) {
      res["PartnerId"] = boost::any(*partnerId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (successTotal) {
      res["SuccessTotal"] = boost::any(*successTotal);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorizationCode") != m.end() && !m["AuthorizationCode"].empty()) {
      authorizationCode = make_shared<string>(boost::any_cast<string>(m["AuthorizationCode"]));
    }
    if (m.find("FailTotal") != m.end() && !m["FailTotal"].empty()) {
      failTotal = make_shared<long>(boost::any_cast<long>(m["FailTotal"]));
    }
    if (m.find("GmtDateStr") != m.end() && !m["GmtDateStr"].empty()) {
      gmtDateStr = make_shared<string>(boost::any_cast<string>(m["GmtDateStr"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IndustryName") != m.end() && !m["IndustryName"].empty()) {
      industryName = make_shared<string>(boost::any_cast<string>(m["IndustryName"]));
    }
    if (m.find("PartnerId") != m.end() && !m["PartnerId"].empty()) {
      partnerId = make_shared<long>(boost::any_cast<long>(m["PartnerId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("SuccessTotal") != m.end() && !m["SuccessTotal"].empty()) {
      successTotal = make_shared<long>(boost::any_cast<long>(m["SuccessTotal"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<long>(boost::any_cast<long>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryUsageStatisticsByTagIdResponseBodyData() = default;
};
class QueryUsageStatisticsByTagIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<QueryUsageStatisticsByTagIdResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryUsageStatisticsByTagIdResponseBody() {}

  explicit QueryUsageStatisticsByTagIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<QueryUsageStatisticsByTagIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryUsageStatisticsByTagIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryUsageStatisticsByTagIdResponseBodyData>>(expect1);
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


  virtual ~QueryUsageStatisticsByTagIdResponseBody() = default;
};
class QueryUsageStatisticsByTagIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUsageStatisticsByTagIdResponseBody> body{};

  QueryUsageStatisticsByTagIdResponse() {}

  explicit QueryUsageStatisticsByTagIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryUsageStatisticsByTagIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUsageStatisticsByTagIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUsageStatisticsByTagIdResponse() = default;
};
class ThreeElementsVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> certCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ThreeElementsVerificationRequest() {}

  explicit ThreeElementsVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (certCode) {
      res["CertCode"] = boost::any(*certCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("CertCode") != m.end() && !m["CertCode"].empty()) {
      certCode = make_shared<string>(boost::any_cast<string>(m["CertCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ThreeElementsVerificationRequest() = default;
};
class ThreeElementsVerificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> basicCarrier{};
  shared_ptr<long> isConsistent{};

  ThreeElementsVerificationResponseBodyData() {}

  explicit ThreeElementsVerificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicCarrier) {
      res["BasicCarrier"] = boost::any(*basicCarrier);
    }
    if (isConsistent) {
      res["IsConsistent"] = boost::any(*isConsistent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicCarrier") != m.end() && !m["BasicCarrier"].empty()) {
      basicCarrier = make_shared<string>(boost::any_cast<string>(m["BasicCarrier"]));
    }
    if (m.find("IsConsistent") != m.end() && !m["IsConsistent"].empty()) {
      isConsistent = make_shared<long>(boost::any_cast<long>(m["IsConsistent"]));
    }
  }


  virtual ~ThreeElementsVerificationResponseBodyData() = default;
};
class ThreeElementsVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ThreeElementsVerificationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ThreeElementsVerificationResponseBody() {}

  explicit ThreeElementsVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ThreeElementsVerificationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ThreeElementsVerificationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ThreeElementsVerificationResponseBody() = default;
};
class ThreeElementsVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ThreeElementsVerificationResponseBody> body{};

  ThreeElementsVerificationResponse() {}

  explicit ThreeElementsVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ThreeElementsVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ThreeElementsVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~ThreeElementsVerificationResponse() = default;
};
class TwoElementsVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> inputNumber{};
  shared_ptr<string> mask{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  TwoElementsVerificationRequest() {}

  explicit TwoElementsVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (inputNumber) {
      res["InputNumber"] = boost::any(*inputNumber);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("InputNumber") != m.end() && !m["InputNumber"].empty()) {
      inputNumber = make_shared<string>(boost::any_cast<string>(m["InputNumber"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~TwoElementsVerificationRequest() = default;
};
class TwoElementsVerificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> basicCarrier{};
  shared_ptr<long> isConsistent{};

  TwoElementsVerificationResponseBodyData() {}

  explicit TwoElementsVerificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basicCarrier) {
      res["BasicCarrier"] = boost::any(*basicCarrier);
    }
    if (isConsistent) {
      res["IsConsistent"] = boost::any(*isConsistent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasicCarrier") != m.end() && !m["BasicCarrier"].empty()) {
      basicCarrier = make_shared<string>(boost::any_cast<string>(m["BasicCarrier"]));
    }
    if (m.find("IsConsistent") != m.end() && !m["IsConsistent"].empty()) {
      isConsistent = make_shared<long>(boost::any_cast<long>(m["IsConsistent"]));
    }
  }


  virtual ~TwoElementsVerificationResponseBodyData() = default;
};
class TwoElementsVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<TwoElementsVerificationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  TwoElementsVerificationResponseBody() {}

  explicit TwoElementsVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TwoElementsVerificationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TwoElementsVerificationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TwoElementsVerificationResponseBody() = default;
};
class TwoElementsVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TwoElementsVerificationResponseBody> body{};

  TwoElementsVerificationResponse() {}

  explicit TwoElementsVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TwoElementsVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TwoElementsVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~TwoElementsVerificationResponse() = default;
};
class UAIDCollectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> carrier{};
  shared_ptr<string> ip{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> province{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> token{};
  shared_ptr<string> userGrantId{};

  UAIDCollectionRequest() {}

  explicit UAIDCollectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (userGrantId) {
      res["UserGrantId"] = boost::any(*userGrantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("UserGrantId") != m.end() && !m["UserGrantId"].empty()) {
      userGrantId = make_shared<string>(boost::any_cast<string>(m["UserGrantId"]));
    }
  }


  virtual ~UAIDCollectionRequest() = default;
};
class UAIDCollectionResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> uaid{};

  UAIDCollectionResponseBodyModel() {}

  explicit UAIDCollectionResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uaid) {
      res["Uaid"] = boost::any(*uaid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Uaid") != m.end() && !m["Uaid"].empty()) {
      uaid = make_shared<string>(boost::any_cast<string>(m["Uaid"]));
    }
  }


  virtual ~UAIDCollectionResponseBodyModel() = default;
};
class UAIDCollectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<UAIDCollectionResponseBodyModel> model{};
  shared_ptr<string> requestId{};

  UAIDCollectionResponseBody() {}

  explicit UAIDCollectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        UAIDCollectionResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<UAIDCollectionResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UAIDCollectionResponseBody() = default;
};
class UAIDCollectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UAIDCollectionResponseBody> body{};

  UAIDCollectionResponse() {}

  explicit UAIDCollectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UAIDCollectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UAIDCollectionResponseBody>(model1);
      }
    }
  }


  virtual ~UAIDCollectionResponse() = default;
};
class UAIDConversionRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> carrier{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> uaidList{};

  UAIDConversionRequest() {}

  explicit UAIDConversionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (uaidList) {
      res["UaidList"] = boost::any(*uaidList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("UaidList") != m.end() && !m["UaidList"].empty()) {
      uaidList = make_shared<string>(boost::any_cast<string>(m["UaidList"]));
    }
  }


  virtual ~UAIDConversionRequest() = default;
};
class UAIDConversionResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> phoneList{};

  UAIDConversionResponseBodyModel() {}

  explicit UAIDConversionResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneList) {
      res["PhoneList"] = boost::any(*phoneList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneList") != m.end() && !m["PhoneList"].empty()) {
      phoneList = make_shared<string>(boost::any_cast<string>(m["PhoneList"]));
    }
  }


  virtual ~UAIDConversionResponseBodyModel() = default;
};
class UAIDConversionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<UAIDConversionResponseBodyModel> model{};
  shared_ptr<string> requestId{};

  UAIDConversionResponseBody() {}

  explicit UAIDConversionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        UAIDConversionResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<UAIDConversionResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UAIDConversionResponseBody() = default;
};
class UAIDConversionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UAIDConversionResponseBody> body{};

  UAIDConversionResponse() {}

  explicit UAIDConversionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UAIDConversionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UAIDConversionResponseBody>(model1);
      }
    }
  }


  virtual ~UAIDConversionResponse() = default;
};
class UAIDVerificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> carrier{};
  shared_ptr<string> ip{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> province{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> token{};
  shared_ptr<string> userGrantId{};

  UAIDVerificationRequest() {}

  explicit UAIDVerificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (carrier) {
      res["Carrier"] = boost::any(*carrier);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (userGrantId) {
      res["UserGrantId"] = boost::any(*userGrantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("Carrier") != m.end() && !m["Carrier"].empty()) {
      carrier = make_shared<string>(boost::any_cast<string>(m["Carrier"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("UserGrantId") != m.end() && !m["UserGrantId"].empty()) {
      userGrantId = make_shared<string>(boost::any_cast<string>(m["UserGrantId"]));
    }
  }


  virtual ~UAIDVerificationRequest() = default;
};
class UAIDVerificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> uaid{};

  UAIDVerificationResponseBodyData() {}

  explicit UAIDVerificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uaid) {
      res["Uaid"] = boost::any(*uaid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Uaid") != m.end() && !m["Uaid"].empty()) {
      uaid = make_shared<string>(boost::any_cast<string>(m["Uaid"]));
    }
  }


  virtual ~UAIDVerificationResponseBodyData() = default;
};
class UAIDVerificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<UAIDVerificationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UAIDVerificationResponseBody() {}

  explicit UAIDVerificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UAIDVerificationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UAIDVerificationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UAIDVerificationResponseBody() = default;
};
class UAIDVerificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UAIDVerificationResponseBody> body{};

  UAIDVerificationResponse() {}

  explicit UAIDVerificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UAIDVerificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UAIDVerificationResponseBody>(model1);
      }
    }
  }


  virtual ~UAIDVerificationResponse() = default;
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
  CertNoThreeElementVerificationResponse certNoThreeElementVerificationWithOptions(shared_ptr<CertNoThreeElementVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CertNoThreeElementVerificationResponse certNoThreeElementVerification(shared_ptr<CertNoThreeElementVerificationRequest> request);
  CertNoTwoElementVerificationResponse certNoTwoElementVerificationWithOptions(shared_ptr<CertNoTwoElementVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CertNoTwoElementVerificationResponse certNoTwoElementVerification(shared_ptr<CertNoTwoElementVerificationRequest> request);
  CompanyFourElementsVerificationResponse companyFourElementsVerificationWithOptions(shared_ptr<CompanyFourElementsVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompanyFourElementsVerificationResponse companyFourElementsVerification(shared_ptr<CompanyFourElementsVerificationRequest> request);
  CompanyThreeElementsVerificationResponse companyThreeElementsVerificationWithOptions(shared_ptr<CompanyThreeElementsVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompanyThreeElementsVerificationResponse companyThreeElementsVerification(shared_ptr<CompanyThreeElementsVerificationRequest> request);
  CompanyTwoElementsVerificationResponse companyTwoElementsVerificationWithOptions(shared_ptr<CompanyTwoElementsVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompanyTwoElementsVerificationResponse companyTwoElementsVerification(shared_ptr<CompanyTwoElementsVerificationRequest> request);
  DescribeEmptyNumberResponse describeEmptyNumberWithOptions(shared_ptr<DescribeEmptyNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEmptyNumberResponse describeEmptyNumber(shared_ptr<DescribeEmptyNumberRequest> request);
  DescribeMobileOperatorAttributeResponse describeMobileOperatorAttributeWithOptions(shared_ptr<DescribeMobileOperatorAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMobileOperatorAttributeResponse describeMobileOperatorAttribute(shared_ptr<DescribeMobileOperatorAttributeRequest> request);
  DescribePhoneNumberAnalysisResponse describePhoneNumberAnalysisWithOptions(shared_ptr<DescribePhoneNumberAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberAnalysisResponse describePhoneNumberAnalysis(shared_ptr<DescribePhoneNumberAnalysisRequest> request);
  DescribePhoneNumberAnalysisAIResponse describePhoneNumberAnalysisAIWithOptions(shared_ptr<DescribePhoneNumberAnalysisAIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberAnalysisAIResponse describePhoneNumberAnalysisAI(shared_ptr<DescribePhoneNumberAnalysisAIRequest> request);
  DescribePhoneNumberAnalysisPaiResponse describePhoneNumberAnalysisPaiWithOptions(shared_ptr<DescribePhoneNumberAnalysisPaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberAnalysisPaiResponse describePhoneNumberAnalysisPai(shared_ptr<DescribePhoneNumberAnalysisPaiRequest> request);
  DescribePhoneNumberAnalysisTransparentResponse describePhoneNumberAnalysisTransparentWithOptions(shared_ptr<DescribePhoneNumberAnalysisTransparentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberAnalysisTransparentResponse describePhoneNumberAnalysisTransparent(shared_ptr<DescribePhoneNumberAnalysisTransparentRequest> request);
  DescribePhoneNumberAttributeResponse describePhoneNumberAttributeWithOptions(shared_ptr<DescribePhoneNumberAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberAttributeResponse describePhoneNumberAttribute(shared_ptr<DescribePhoneNumberAttributeRequest> request);
  DescribePhoneNumberOnlineTimeResponse describePhoneNumberOnlineTimeWithOptions(shared_ptr<DescribePhoneNumberOnlineTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberOnlineTimeResponse describePhoneNumberOnlineTime(shared_ptr<DescribePhoneNumberOnlineTimeRequest> request);
  DescribePhoneNumberOperatorAttributeResponse describePhoneNumberOperatorAttributeWithOptions(shared_ptr<DescribePhoneNumberOperatorAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberOperatorAttributeResponse describePhoneNumberOperatorAttribute(shared_ptr<DescribePhoneNumberOperatorAttributeRequest> request);
  DescribePhoneNumberOperatorAttributeAnnualResponse describePhoneNumberOperatorAttributeAnnualWithOptions(shared_ptr<DescribePhoneNumberOperatorAttributeAnnualRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberOperatorAttributeAnnualResponse describePhoneNumberOperatorAttributeAnnual(shared_ptr<DescribePhoneNumberOperatorAttributeAnnualRequest> request);
  DescribePhoneNumberOperatorAttributeAnnualUseResponse describePhoneNumberOperatorAttributeAnnualUseWithOptions(shared_ptr<DescribePhoneNumberOperatorAttributeAnnualUseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberOperatorAttributeAnnualUseResponse describePhoneNumberOperatorAttributeAnnualUse(shared_ptr<DescribePhoneNumberOperatorAttributeAnnualUseRequest> request);
  DescribePhoneNumberRiskResponse describePhoneNumberRiskWithOptions(shared_ptr<DescribePhoneNumberRiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneNumberRiskResponse describePhoneNumberRisk(shared_ptr<DescribePhoneNumberRiskRequest> request);
  DescribePhoneTwiceTelVerifyResponse describePhoneTwiceTelVerifyWithOptions(shared_ptr<DescribePhoneTwiceTelVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePhoneTwiceTelVerifyResponse describePhoneTwiceTelVerify(shared_ptr<DescribePhoneTwiceTelVerifyRequest> request);
  GetUAIDApplyTokenSignResponse getUAIDApplyTokenSignWithOptions(shared_ptr<GetUAIDApplyTokenSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUAIDApplyTokenSignResponse getUAIDApplyTokenSign(shared_ptr<GetUAIDApplyTokenSignRequest> request);
  GetUAIDConversionSignResponse getUAIDConversionSignWithOptions(shared_ptr<GetUAIDConversionSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUAIDConversionSignResponse getUAIDConversionSign(shared_ptr<GetUAIDConversionSignRequest> request);
  InvalidPhoneNumberFilterResponse invalidPhoneNumberFilterWithOptions(shared_ptr<InvalidPhoneNumberFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvalidPhoneNumberFilterResponse invalidPhoneNumberFilter(shared_ptr<InvalidPhoneNumberFilterRequest> request);
  PhoneNumberConvertServiceResponse phoneNumberConvertServiceWithOptions(shared_ptr<PhoneNumberConvertServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PhoneNumberConvertServiceResponse phoneNumberConvertService(shared_ptr<PhoneNumberConvertServiceRequest> request);
  PhoneNumberEncryptResponse phoneNumberEncryptWithOptions(shared_ptr<PhoneNumberEncryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PhoneNumberEncryptResponse phoneNumberEncrypt(shared_ptr<PhoneNumberEncryptRequest> request);
  PhoneNumberStatusForAccountResponse phoneNumberStatusForAccountWithOptions(shared_ptr<PhoneNumberStatusForAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PhoneNumberStatusForAccountResponse phoneNumberStatusForAccount(shared_ptr<PhoneNumberStatusForAccountRequest> request);
  PhoneNumberStatusForPublicResponse phoneNumberStatusForPublicWithOptions(shared_ptr<PhoneNumberStatusForPublicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PhoneNumberStatusForPublicResponse phoneNumberStatusForPublic(shared_ptr<PhoneNumberStatusForPublicRequest> request);
  PhoneNumberStatusForRealResponse phoneNumberStatusForRealWithOptions(shared_ptr<PhoneNumberStatusForRealRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PhoneNumberStatusForRealResponse phoneNumberStatusForReal(shared_ptr<PhoneNumberStatusForRealRequest> request);
  PhoneNumberStatusForSmsResponse phoneNumberStatusForSmsWithOptions(shared_ptr<PhoneNumberStatusForSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PhoneNumberStatusForSmsResponse phoneNumberStatusForSms(shared_ptr<PhoneNumberStatusForSmsRequest> request);
  PhoneNumberStatusForVoiceResponse phoneNumberStatusForVoiceWithOptions(shared_ptr<PhoneNumberStatusForVoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PhoneNumberStatusForVoiceResponse phoneNumberStatusForVoice(shared_ptr<PhoneNumberStatusForVoiceRequest> request);
  QueryAvailableAuthCodeResponse queryAvailableAuthCodeWithOptions(shared_ptr<QueryAvailableAuthCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAvailableAuthCodeResponse queryAvailableAuthCode(shared_ptr<QueryAvailableAuthCodeRequest> request);
  QueryPhoneNumberOnlineTimeResponse queryPhoneNumberOnlineTimeWithOptions(shared_ptr<QueryPhoneNumberOnlineTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPhoneNumberOnlineTimeResponse queryPhoneNumberOnlineTime(shared_ptr<QueryPhoneNumberOnlineTimeRequest> request);
  QueryPhoneTwiceTelVerifyResponse queryPhoneTwiceTelVerifyWithOptions(shared_ptr<QueryPhoneTwiceTelVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPhoneTwiceTelVerifyResponse queryPhoneTwiceTelVerify(shared_ptr<QueryPhoneTwiceTelVerifyRequest> request);
  QueryTagApplyRuleResponse queryTagApplyRuleWithOptions(shared_ptr<QueryTagApplyRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTagApplyRuleResponse queryTagApplyRule(shared_ptr<QueryTagApplyRuleRequest> request);
  QueryTagInfoBySelectionResponse queryTagInfoBySelectionWithOptions(shared_ptr<QueryTagInfoBySelectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTagInfoBySelectionResponse queryTagInfoBySelection(shared_ptr<QueryTagInfoBySelectionRequest> request);
  QueryTagListPageResponse queryTagListPageWithOptions(shared_ptr<QueryTagListPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTagListPageResponse queryTagListPage(shared_ptr<QueryTagListPageRequest> request);
  QueryUsageStatisticsByTagIdResponse queryUsageStatisticsByTagIdWithOptions(shared_ptr<QueryUsageStatisticsByTagIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUsageStatisticsByTagIdResponse queryUsageStatisticsByTagId(shared_ptr<QueryUsageStatisticsByTagIdRequest> request);
  ThreeElementsVerificationResponse threeElementsVerificationWithOptions(shared_ptr<ThreeElementsVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ThreeElementsVerificationResponse threeElementsVerification(shared_ptr<ThreeElementsVerificationRequest> request);
  TwoElementsVerificationResponse twoElementsVerificationWithOptions(shared_ptr<TwoElementsVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TwoElementsVerificationResponse twoElementsVerification(shared_ptr<TwoElementsVerificationRequest> request);
  UAIDCollectionResponse uAIDCollectionWithOptions(shared_ptr<UAIDCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UAIDCollectionResponse uAIDCollection(shared_ptr<UAIDCollectionRequest> request);
  UAIDConversionResponse uAIDConversionWithOptions(shared_ptr<UAIDConversionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UAIDConversionResponse uAIDConversion(shared_ptr<UAIDConversionRequest> request);
  UAIDVerificationResponse uAIDVerificationWithOptions(shared_ptr<UAIDVerificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UAIDVerificationResponse uAIDVerification(shared_ptr<UAIDVerificationRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dytnsapi20200217

#endif
