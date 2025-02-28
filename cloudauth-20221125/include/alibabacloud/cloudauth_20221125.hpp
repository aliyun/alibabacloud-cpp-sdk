// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDAUTH20221125_H_
#define ALIBABACLOUD_CLOUDAUTH20221125_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cloudauth20221125 {
class EntElementVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> entName{};
  shared_ptr<string> infoVerifyType{};
  shared_ptr<string> legalPersonCertNo{};
  shared_ptr<string> legalPersonName{};
  shared_ptr<string> licenseNo{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> merchantUserId{};
  shared_ptr<string> sceneCode{};
  shared_ptr<string> userAuthorization{};

  EntElementVerifyRequest() {}

  explicit EntElementVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (infoVerifyType) {
      res["InfoVerifyType"] = boost::any(*infoVerifyType);
    }
    if (legalPersonCertNo) {
      res["LegalPersonCertNo"] = boost::any(*legalPersonCertNo);
    }
    if (legalPersonName) {
      res["LegalPersonName"] = boost::any(*legalPersonName);
    }
    if (licenseNo) {
      res["LicenseNo"] = boost::any(*licenseNo);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (merchantUserId) {
      res["MerchantUserId"] = boost::any(*merchantUserId);
    }
    if (sceneCode) {
      res["SceneCode"] = boost::any(*sceneCode);
    }
    if (userAuthorization) {
      res["UserAuthorization"] = boost::any(*userAuthorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("InfoVerifyType") != m.end() && !m["InfoVerifyType"].empty()) {
      infoVerifyType = make_shared<string>(boost::any_cast<string>(m["InfoVerifyType"]));
    }
    if (m.find("LegalPersonCertNo") != m.end() && !m["LegalPersonCertNo"].empty()) {
      legalPersonCertNo = make_shared<string>(boost::any_cast<string>(m["LegalPersonCertNo"]));
    }
    if (m.find("LegalPersonName") != m.end() && !m["LegalPersonName"].empty()) {
      legalPersonName = make_shared<string>(boost::any_cast<string>(m["LegalPersonName"]));
    }
    if (m.find("LicenseNo") != m.end() && !m["LicenseNo"].empty()) {
      licenseNo = make_shared<string>(boost::any_cast<string>(m["LicenseNo"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("MerchantUserId") != m.end() && !m["MerchantUserId"].empty()) {
      merchantUserId = make_shared<string>(boost::any_cast<string>(m["MerchantUserId"]));
    }
    if (m.find("SceneCode") != m.end() && !m["SceneCode"].empty()) {
      sceneCode = make_shared<string>(boost::any_cast<string>(m["SceneCode"]));
    }
    if (m.find("UserAuthorization") != m.end() && !m["UserAuthorization"].empty()) {
      userAuthorization = make_shared<string>(boost::any_cast<string>(m["UserAuthorization"]));
    }
  }


  virtual ~EntElementVerifyRequest() = default;
};
class EntElementVerifyResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> openTime{};
  shared_ptr<string> reasonCode{};
  shared_ptr<string> reasonDetail{};
  shared_ptr<string> status{};

  EntElementVerifyResponseBodyResult() {}

  explicit EntElementVerifyResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (openTime) {
      res["OpenTime"] = boost::any(*openTime);
    }
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    if (reasonDetail) {
      res["ReasonDetail"] = boost::any(*reasonDetail);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("OpenTime") != m.end() && !m["OpenTime"].empty()) {
      openTime = make_shared<string>(boost::any_cast<string>(m["OpenTime"]));
    }
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
    if (m.find("ReasonDetail") != m.end() && !m["ReasonDetail"].empty()) {
      reasonDetail = make_shared<string>(boost::any_cast<string>(m["ReasonDetail"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~EntElementVerifyResponseBodyResult() = default;
};
class EntElementVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<EntElementVerifyResponseBodyResult> result{};

  EntElementVerifyResponseBody() {}

  explicit EntElementVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EntElementVerifyResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<EntElementVerifyResponseBodyResult>(model1);
      }
    }
  }


  virtual ~EntElementVerifyResponseBody() = default;
};
class EntElementVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EntElementVerifyResponseBody> body{};

  EntElementVerifyResponse() {}

  explicit EntElementVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EntElementVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EntElementVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~EntElementVerifyResponse() = default;
};
class EntElementVerifyV2Request : public Darabonba::Model {
public:
  shared_ptr<string> entName{};
  shared_ptr<string> infoVerifyType{};
  shared_ptr<string> legalPersonCertNo{};
  shared_ptr<string> legalPersonName{};
  shared_ptr<string> licenseNo{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> merchantUserId{};
  shared_ptr<string> sceneCode{};
  shared_ptr<string> userAuthorization{};

  EntElementVerifyV2Request() {}

  explicit EntElementVerifyV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (infoVerifyType) {
      res["InfoVerifyType"] = boost::any(*infoVerifyType);
    }
    if (legalPersonCertNo) {
      res["LegalPersonCertNo"] = boost::any(*legalPersonCertNo);
    }
    if (legalPersonName) {
      res["LegalPersonName"] = boost::any(*legalPersonName);
    }
    if (licenseNo) {
      res["LicenseNo"] = boost::any(*licenseNo);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (merchantUserId) {
      res["MerchantUserId"] = boost::any(*merchantUserId);
    }
    if (sceneCode) {
      res["SceneCode"] = boost::any(*sceneCode);
    }
    if (userAuthorization) {
      res["UserAuthorization"] = boost::any(*userAuthorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("InfoVerifyType") != m.end() && !m["InfoVerifyType"].empty()) {
      infoVerifyType = make_shared<string>(boost::any_cast<string>(m["InfoVerifyType"]));
    }
    if (m.find("LegalPersonCertNo") != m.end() && !m["LegalPersonCertNo"].empty()) {
      legalPersonCertNo = make_shared<string>(boost::any_cast<string>(m["LegalPersonCertNo"]));
    }
    if (m.find("LegalPersonName") != m.end() && !m["LegalPersonName"].empty()) {
      legalPersonName = make_shared<string>(boost::any_cast<string>(m["LegalPersonName"]));
    }
    if (m.find("LicenseNo") != m.end() && !m["LicenseNo"].empty()) {
      licenseNo = make_shared<string>(boost::any_cast<string>(m["LicenseNo"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("MerchantUserId") != m.end() && !m["MerchantUserId"].empty()) {
      merchantUserId = make_shared<string>(boost::any_cast<string>(m["MerchantUserId"]));
    }
    if (m.find("SceneCode") != m.end() && !m["SceneCode"].empty()) {
      sceneCode = make_shared<string>(boost::any_cast<string>(m["SceneCode"]));
    }
    if (m.find("UserAuthorization") != m.end() && !m["UserAuthorization"].empty()) {
      userAuthorization = make_shared<string>(boost::any_cast<string>(m["UserAuthorization"]));
    }
  }


  virtual ~EntElementVerifyV2Request() = default;
};
class EntElementVerifyV2ResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> openTime{};
  shared_ptr<string> reasonDetail{};
  shared_ptr<string> status{};

  EntElementVerifyV2ResponseBodyResult() {}

  explicit EntElementVerifyV2ResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (openTime) {
      res["OpenTime"] = boost::any(*openTime);
    }
    if (reasonDetail) {
      res["ReasonDetail"] = boost::any(*reasonDetail);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("OpenTime") != m.end() && !m["OpenTime"].empty()) {
      openTime = make_shared<string>(boost::any_cast<string>(m["OpenTime"]));
    }
    if (m.find("ReasonDetail") != m.end() && !m["ReasonDetail"].empty()) {
      reasonDetail = make_shared<string>(boost::any_cast<string>(m["ReasonDetail"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~EntElementVerifyV2ResponseBodyResult() = default;
};
class EntElementVerifyV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<EntElementVerifyV2ResponseBodyResult> result{};

  EntElementVerifyV2ResponseBody() {}

  explicit EntElementVerifyV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EntElementVerifyV2ResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<EntElementVerifyV2ResponseBodyResult>(model1);
      }
    }
  }


  virtual ~EntElementVerifyV2ResponseBody() = default;
};
class EntElementVerifyV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EntElementVerifyV2ResponseBody> body{};

  EntElementVerifyV2Response() {}

  explicit EntElementVerifyV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EntElementVerifyV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EntElementVerifyV2ResponseBody>(model1);
      }
    }
  }


  virtual ~EntElementVerifyV2Response() = default;
};
class EntRiskQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> merchantUserId{};
  shared_ptr<string> paramType{};
  shared_ptr<string> paramValue{};
  shared_ptr<string> sceneCode{};
  shared_ptr<string> userAuthorization{};

  EntRiskQueryRequest() {}

  explicit EntRiskQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (merchantUserId) {
      res["MerchantUserId"] = boost::any(*merchantUserId);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    if (paramValue) {
      res["ParamValue"] = boost::any(*paramValue);
    }
    if (sceneCode) {
      res["SceneCode"] = boost::any(*sceneCode);
    }
    if (userAuthorization) {
      res["UserAuthorization"] = boost::any(*userAuthorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("MerchantUserId") != m.end() && !m["MerchantUserId"].empty()) {
      merchantUserId = make_shared<string>(boost::any_cast<string>(m["MerchantUserId"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
    if (m.find("ParamValue") != m.end() && !m["ParamValue"].empty()) {
      paramValue = make_shared<string>(boost::any_cast<string>(m["ParamValue"]));
    }
    if (m.find("SceneCode") != m.end() && !m["SceneCode"].empty()) {
      sceneCode = make_shared<string>(boost::any_cast<string>(m["SceneCode"]));
    }
    if (m.find("UserAuthorization") != m.end() && !m["UserAuthorization"].empty()) {
      userAuthorization = make_shared<string>(boost::any_cast<string>(m["UserAuthorization"]));
    }
  }


  virtual ~EntRiskQueryRequest() = default;
};
class EntRiskQueryResponseBodyResultRiskList : public Darabonba::Model {
public:
  shared_ptr<string> creditCode{};
  shared_ptr<string> entName{};
  shared_ptr<string> listedDate{};
  shared_ptr<string> listedReason{};
  shared_ptr<string> operationOrg{};
  shared_ptr<string> regNo{};
  shared_ptr<string> removedDate{};
  shared_ptr<string> removedOrg{};
  shared_ptr<string> removedReason{};

  EntRiskQueryResponseBodyResultRiskList() {}

  explicit EntRiskQueryResponseBodyResultRiskList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creditCode) {
      res["CreditCode"] = boost::any(*creditCode);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (listedDate) {
      res["ListedDate"] = boost::any(*listedDate);
    }
    if (listedReason) {
      res["ListedReason"] = boost::any(*listedReason);
    }
    if (operationOrg) {
      res["OperationOrg"] = boost::any(*operationOrg);
    }
    if (regNo) {
      res["RegNo"] = boost::any(*regNo);
    }
    if (removedDate) {
      res["RemovedDate"] = boost::any(*removedDate);
    }
    if (removedOrg) {
      res["RemovedOrg"] = boost::any(*removedOrg);
    }
    if (removedReason) {
      res["RemovedReason"] = boost::any(*removedReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreditCode") != m.end() && !m["CreditCode"].empty()) {
      creditCode = make_shared<string>(boost::any_cast<string>(m["CreditCode"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("ListedDate") != m.end() && !m["ListedDate"].empty()) {
      listedDate = make_shared<string>(boost::any_cast<string>(m["ListedDate"]));
    }
    if (m.find("ListedReason") != m.end() && !m["ListedReason"].empty()) {
      listedReason = make_shared<string>(boost::any_cast<string>(m["ListedReason"]));
    }
    if (m.find("OperationOrg") != m.end() && !m["OperationOrg"].empty()) {
      operationOrg = make_shared<string>(boost::any_cast<string>(m["OperationOrg"]));
    }
    if (m.find("RegNo") != m.end() && !m["RegNo"].empty()) {
      regNo = make_shared<string>(boost::any_cast<string>(m["RegNo"]));
    }
    if (m.find("RemovedDate") != m.end() && !m["RemovedDate"].empty()) {
      removedDate = make_shared<string>(boost::any_cast<string>(m["RemovedDate"]));
    }
    if (m.find("RemovedOrg") != m.end() && !m["RemovedOrg"].empty()) {
      removedOrg = make_shared<string>(boost::any_cast<string>(m["RemovedOrg"]));
    }
    if (m.find("RemovedReason") != m.end() && !m["RemovedReason"].empty()) {
      removedReason = make_shared<string>(boost::any_cast<string>(m["RemovedReason"]));
    }
  }


  virtual ~EntRiskQueryResponseBodyResultRiskList() = default;
};
class EntRiskQueryResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<vector<EntRiskQueryResponseBodyResultRiskList>> riskList{};
  shared_ptr<string> status{};

  EntRiskQueryResponseBodyResult() {}

  explicit EntRiskQueryResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (riskList) {
      vector<boost::any> temp1;
      for(auto item1:*riskList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RiskList"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("RiskList") != m.end() && !m["RiskList"].empty()) {
      if (typeid(vector<boost::any>) == m["RiskList"].type()) {
        vector<EntRiskQueryResponseBodyResultRiskList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RiskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EntRiskQueryResponseBodyResultRiskList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        riskList = make_shared<vector<EntRiskQueryResponseBodyResultRiskList>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~EntRiskQueryResponseBodyResult() = default;
};
class EntRiskQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<EntRiskQueryResponseBodyResult> result{};

  EntRiskQueryResponseBody() {}

  explicit EntRiskQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EntRiskQueryResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<EntRiskQueryResponseBodyResult>(model1);
      }
    }
  }


  virtual ~EntRiskQueryResponseBody() = default;
};
class EntRiskQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EntRiskQueryResponseBody> body{};

  EntRiskQueryResponse() {}

  explicit EntRiskQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EntRiskQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EntRiskQueryResponseBody>(model1);
      }
    }
  }


  virtual ~EntRiskQueryResponse() = default;
};
class EntVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountNo{};
  shared_ptr<string> entName{};
  shared_ptr<string> infoVerifyType{};
  shared_ptr<string> legalPersonCertNo{};
  shared_ptr<string> legalPersonMobile{};
  shared_ptr<string> legalPersonName{};
  shared_ptr<string> licenseNo{};
  shared_ptr<string> merchantBizId{};
  shared_ptr<string> merchantUserId{};
  shared_ptr<string> riskModelVersion{};
  shared_ptr<string> riskVerifyType{};
  shared_ptr<string> sceneCode{};
  shared_ptr<string> userAuthorization{};

  EntVerifyRequest() {}

  explicit EntVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNo) {
      res["AccountNo"] = boost::any(*accountNo);
    }
    if (entName) {
      res["EntName"] = boost::any(*entName);
    }
    if (infoVerifyType) {
      res["InfoVerifyType"] = boost::any(*infoVerifyType);
    }
    if (legalPersonCertNo) {
      res["LegalPersonCertNo"] = boost::any(*legalPersonCertNo);
    }
    if (legalPersonMobile) {
      res["LegalPersonMobile"] = boost::any(*legalPersonMobile);
    }
    if (legalPersonName) {
      res["LegalPersonName"] = boost::any(*legalPersonName);
    }
    if (licenseNo) {
      res["LicenseNo"] = boost::any(*licenseNo);
    }
    if (merchantBizId) {
      res["MerchantBizId"] = boost::any(*merchantBizId);
    }
    if (merchantUserId) {
      res["MerchantUserId"] = boost::any(*merchantUserId);
    }
    if (riskModelVersion) {
      res["RiskModelVersion"] = boost::any(*riskModelVersion);
    }
    if (riskVerifyType) {
      res["RiskVerifyType"] = boost::any(*riskVerifyType);
    }
    if (sceneCode) {
      res["SceneCode"] = boost::any(*sceneCode);
    }
    if (userAuthorization) {
      res["UserAuthorization"] = boost::any(*userAuthorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountNo") != m.end() && !m["AccountNo"].empty()) {
      accountNo = make_shared<string>(boost::any_cast<string>(m["AccountNo"]));
    }
    if (m.find("EntName") != m.end() && !m["EntName"].empty()) {
      entName = make_shared<string>(boost::any_cast<string>(m["EntName"]));
    }
    if (m.find("InfoVerifyType") != m.end() && !m["InfoVerifyType"].empty()) {
      infoVerifyType = make_shared<string>(boost::any_cast<string>(m["InfoVerifyType"]));
    }
    if (m.find("LegalPersonCertNo") != m.end() && !m["LegalPersonCertNo"].empty()) {
      legalPersonCertNo = make_shared<string>(boost::any_cast<string>(m["LegalPersonCertNo"]));
    }
    if (m.find("LegalPersonMobile") != m.end() && !m["LegalPersonMobile"].empty()) {
      legalPersonMobile = make_shared<string>(boost::any_cast<string>(m["LegalPersonMobile"]));
    }
    if (m.find("LegalPersonName") != m.end() && !m["LegalPersonName"].empty()) {
      legalPersonName = make_shared<string>(boost::any_cast<string>(m["LegalPersonName"]));
    }
    if (m.find("LicenseNo") != m.end() && !m["LicenseNo"].empty()) {
      licenseNo = make_shared<string>(boost::any_cast<string>(m["LicenseNo"]));
    }
    if (m.find("MerchantBizId") != m.end() && !m["MerchantBizId"].empty()) {
      merchantBizId = make_shared<string>(boost::any_cast<string>(m["MerchantBizId"]));
    }
    if (m.find("MerchantUserId") != m.end() && !m["MerchantUserId"].empty()) {
      merchantUserId = make_shared<string>(boost::any_cast<string>(m["MerchantUserId"]));
    }
    if (m.find("RiskModelVersion") != m.end() && !m["RiskModelVersion"].empty()) {
      riskModelVersion = make_shared<string>(boost::any_cast<string>(m["RiskModelVersion"]));
    }
    if (m.find("RiskVerifyType") != m.end() && !m["RiskVerifyType"].empty()) {
      riskVerifyType = make_shared<string>(boost::any_cast<string>(m["RiskVerifyType"]));
    }
    if (m.find("SceneCode") != m.end() && !m["SceneCode"].empty()) {
      sceneCode = make_shared<string>(boost::any_cast<string>(m["SceneCode"]));
    }
    if (m.find("UserAuthorization") != m.end() && !m["UserAuthorization"].empty()) {
      userAuthorization = make_shared<string>(boost::any_cast<string>(m["UserAuthorization"]));
    }
  }


  virtual ~EntVerifyRequest() = default;
};
class EntVerifyResponseBodyResultRiskVerifyResultModelResults : public Darabonba::Model {
public:
  shared_ptr<string> modelName{};
  shared_ptr<string> result{};

  EntVerifyResponseBodyResultRiskVerifyResultModelResults() {}

  explicit EntVerifyResponseBodyResultRiskVerifyResultModelResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~EntVerifyResponseBodyResultRiskVerifyResultModelResults() = default;
};
class EntVerifyResponseBodyResultRiskVerifyResult : public Darabonba::Model {
public:
  shared_ptr<bool> found{};
  shared_ptr<vector<EntVerifyResponseBodyResultRiskVerifyResultModelResults>> modelResults{};

  EntVerifyResponseBodyResultRiskVerifyResult() {}

  explicit EntVerifyResponseBodyResultRiskVerifyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (found) {
      res["Found"] = boost::any(*found);
    }
    if (modelResults) {
      vector<boost::any> temp1;
      for(auto item1:*modelResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModelResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Found") != m.end() && !m["Found"].empty()) {
      found = make_shared<bool>(boost::any_cast<bool>(m["Found"]));
    }
    if (m.find("ModelResults") != m.end() && !m["ModelResults"].empty()) {
      if (typeid(vector<boost::any>) == m["ModelResults"].type()) {
        vector<EntVerifyResponseBodyResultRiskVerifyResultModelResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModelResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EntVerifyResponseBodyResultRiskVerifyResultModelResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modelResults = make_shared<vector<EntVerifyResponseBodyResultRiskVerifyResultModelResults>>(expect1);
      }
    }
  }


  virtual ~EntVerifyResponseBodyResultRiskVerifyResult() = default;
};
class EntVerifyResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<EntVerifyResponseBodyResultRiskVerifyResult> riskVerifyResult{};

  EntVerifyResponseBodyResult() {}

  explicit EntVerifyResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskVerifyResult) {
      res["RiskVerifyResult"] = riskVerifyResult ? boost::any(riskVerifyResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RiskVerifyResult") != m.end() && !m["RiskVerifyResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["RiskVerifyResult"].type()) {
        EntVerifyResponseBodyResultRiskVerifyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RiskVerifyResult"]));
        riskVerifyResult = make_shared<EntVerifyResponseBodyResultRiskVerifyResult>(model1);
      }
    }
  }


  virtual ~EntVerifyResponseBodyResult() = default;
};
class EntVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<EntVerifyResponseBodyResult> result{};

  EntVerifyResponseBody() {}

  explicit EntVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EntVerifyResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<EntVerifyResponseBodyResult>(model1);
      }
    }
  }


  virtual ~EntVerifyResponseBody() = default;
};
class EntVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EntVerifyResponseBody> body{};

  EntVerifyResponse() {}

  explicit EntVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EntVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EntVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~EntVerifyResponse() = default;
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
  EntElementVerifyResponse entElementVerifyWithOptions(shared_ptr<EntElementVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EntElementVerifyResponse entElementVerify(shared_ptr<EntElementVerifyRequest> request);
  EntElementVerifyV2Response entElementVerifyV2WithOptions(shared_ptr<EntElementVerifyV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EntElementVerifyV2Response entElementVerifyV2(shared_ptr<EntElementVerifyV2Request> request);
  EntRiskQueryResponse entRiskQueryWithOptions(shared_ptr<EntRiskQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EntRiskQueryResponse entRiskQuery(shared_ptr<EntRiskQueryRequest> request);
  EntVerifyResponse entVerifyWithOptions(shared_ptr<EntVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EntVerifyResponse entVerify(shared_ptr<EntVerifyRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloudauth20221125

#endif
