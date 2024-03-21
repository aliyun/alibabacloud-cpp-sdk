// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_TRADEMARK20190902_H_
#define ALIBABACLOUD_TRADEMARK20190902_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Trademark20190902 {
class BindApplicantRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicantId{};
  shared_ptr<string> authorizationOssKey{};
  shared_ptr<string> bizId{};

  BindApplicantRequest() {}

  explicit BindApplicantRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    if (authorizationOssKey) {
      res["AuthorizationOssKey"] = boost::any(*authorizationOssKey);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<string>(boost::any_cast<string>(m["ApplicantId"]));
    }
    if (m.find("AuthorizationOssKey") != m.end() && !m["AuthorizationOssKey"].empty()) {
      authorizationOssKey = make_shared<string>(boost::any_cast<string>(m["AuthorizationOssKey"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
  }


  virtual ~BindApplicantRequest() = default;
};
class BindApplicantResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindApplicantResponseBody() {}

  explicit BindApplicantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BindApplicantResponseBody() = default;
};
class BindApplicantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindApplicantResponseBody> body{};

  BindApplicantResponse() {}

  explicit BindApplicantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindApplicantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindApplicantResponseBody>(model1);
      }
    }
  }


  virtual ~BindApplicantResponse() = default;
};
class CancelOrderRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};

  CancelOrderRequest() {}

  explicit CancelOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CancelOrderRequest() = default;
};
class CancelOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelOrderResponseBody() {}

  explicit CancelOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelOrderResponseBody() = default;
};
class CancelOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelOrderResponseBody> body{};

  CancelOrderResponse() {}

  explicit CancelOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CancelOrderResponse() = default;
};
class CheckAuthorizationLetterRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicantType{};
  shared_ptr<string> color{};
  shared_ptr<string> contactName{};
  shared_ptr<string> contactNumber{};
  shared_ptr<string> contactZipcode{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> personalType{};
  shared_ptr<string> type{};

  CheckAuthorizationLetterRequest() {}

  explicit CheckAuthorizationLetterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicantType) {
      res["ApplicantType"] = boost::any(*applicantType);
    }
    if (color) {
      res["Color"] = boost::any(*color);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (contactNumber) {
      res["ContactNumber"] = boost::any(*contactNumber);
    }
    if (contactZipcode) {
      res["ContactZipcode"] = boost::any(*contactZipcode);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (personalType) {
      res["PersonalType"] = boost::any(*personalType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicantType") != m.end() && !m["ApplicantType"].empty()) {
      applicantType = make_shared<string>(boost::any_cast<string>(m["ApplicantType"]));
    }
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("ContactNumber") != m.end() && !m["ContactNumber"].empty()) {
      contactNumber = make_shared<string>(boost::any_cast<string>(m["ContactNumber"]));
    }
    if (m.find("ContactZipcode") != m.end() && !m["ContactZipcode"].empty()) {
      contactZipcode = make_shared<string>(boost::any_cast<string>(m["ContactZipcode"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("PersonalType") != m.end() && !m["PersonalType"].empty()) {
      personalType = make_shared<string>(boost::any_cast<string>(m["PersonalType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CheckAuthorizationLetterRequest() = default;
};
class CheckAuthorizationLetterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateUrl{};
  shared_ptr<string> tips{};

  CheckAuthorizationLetterResponseBody() {}

  explicit CheckAuthorizationLetterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateUrl) {
      res["TemplateUrl"] = boost::any(*templateUrl);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateUrl") != m.end() && !m["TemplateUrl"].empty()) {
      templateUrl = make_shared<string>(boost::any_cast<string>(m["TemplateUrl"]));
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
  }


  virtual ~CheckAuthorizationLetterResponseBody() = default;
};
class CheckAuthorizationLetterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckAuthorizationLetterResponseBody> body{};

  CheckAuthorizationLetterResponse() {}

  explicit CheckAuthorizationLetterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckAuthorizationLetterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckAuthorizationLetterResponseBody>(model1);
      }
    }
  }


  virtual ~CheckAuthorizationLetterResponse() = default;
};
class CheckBizAvailableRequest : public Darabonba::Model {
public:
  shared_ptr<string> biz{};
  shared_ptr<string> scene{};

  CheckBizAvailableRequest() {}

  explicit CheckBizAvailableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (biz) {
      res["Biz"] = boost::any(*biz);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Biz") != m.end() && !m["Biz"].empty()) {
      biz = make_shared<string>(boost::any_cast<string>(m["Biz"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
  }


  virtual ~CheckBizAvailableRequest() = default;
};
class CheckBizAvailableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CheckBizAvailableResponseBody() {}

  explicit CheckBizAvailableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckBizAvailableResponseBody() = default;
};
class CheckBizAvailableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckBizAvailableResponseBody> body{};

  CheckBizAvailableResponse() {}

  explicit CheckBizAvailableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckBizAvailableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckBizAvailableResponseBody>(model1);
      }
    }
  }


  virtual ~CheckBizAvailableResponse() = default;
};
class CheckDuplicateApplicantRiskRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicantName{};
  shared_ptr<long> eventSceneType{};

  CheckDuplicateApplicantRiskRequest() {}

  explicit CheckDuplicateApplicantRiskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicantName) {
      res["ApplicantName"] = boost::any(*applicantName);
    }
    if (eventSceneType) {
      res["EventSceneType"] = boost::any(*eventSceneType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicantName") != m.end() && !m["ApplicantName"].empty()) {
      applicantName = make_shared<string>(boost::any_cast<string>(m["ApplicantName"]));
    }
    if (m.find("EventSceneType") != m.end() && !m["EventSceneType"].empty()) {
      eventSceneType = make_shared<long>(boost::any_cast<long>(m["EventSceneType"]));
    }
  }


  virtual ~CheckDuplicateApplicantRiskRequest() = default;
};
class CheckDuplicateApplicantRiskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  CheckDuplicateApplicantRiskResponseBody() {}

  explicit CheckDuplicateApplicantRiskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~CheckDuplicateApplicantRiskResponseBody() = default;
};
class CheckDuplicateApplicantRiskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDuplicateApplicantRiskResponseBody> body{};

  CheckDuplicateApplicantRiskResponse() {}

  explicit CheckDuplicateApplicantRiskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckDuplicateApplicantRiskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDuplicateApplicantRiskResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDuplicateApplicantRiskResponse() = default;
};
class CheckDuplicateClassificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> classification{};
  shared_ptr<long> eventSceneType{};
  shared_ptr<string> trademarkName{};

  CheckDuplicateClassificationRequest() {}

  explicit CheckDuplicateClassificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classification) {
      res["Classification"] = boost::any(*classification);
    }
    if (eventSceneType) {
      res["EventSceneType"] = boost::any(*eventSceneType);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classification") != m.end() && !m["Classification"].empty()) {
      classification = make_shared<string>(boost::any_cast<string>(m["Classification"]));
    }
    if (m.find("EventSceneType") != m.end() && !m["EventSceneType"].empty()) {
      eventSceneType = make_shared<long>(boost::any_cast<long>(m["EventSceneType"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
  }


  virtual ~CheckDuplicateClassificationRequest() = default;
};
class CheckDuplicateClassificationResponseBodyDataDuplicateSecondaryClassification : public Darabonba::Model {
public:
  shared_ptr<vector<string>> secondaryClassification{};

  CheckDuplicateClassificationResponseBodyDataDuplicateSecondaryClassification() {}

  explicit CheckDuplicateClassificationResponseBodyDataDuplicateSecondaryClassification(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secondaryClassification) {
      res["SecondaryClassification"] = boost::any(*secondaryClassification);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecondaryClassification") != m.end() && !m["SecondaryClassification"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecondaryClassification"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecondaryClassification"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      secondaryClassification = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CheckDuplicateClassificationResponseBodyDataDuplicateSecondaryClassification() = default;
};
class CheckDuplicateClassificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<CheckDuplicateClassificationResponseBodyDataDuplicateSecondaryClassification> duplicateSecondaryClassification{};
  shared_ptr<string> trademarkName{};

  CheckDuplicateClassificationResponseBodyData() {}

  explicit CheckDuplicateClassificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duplicateSecondaryClassification) {
      res["DuplicateSecondaryClassification"] = duplicateSecondaryClassification ? boost::any(duplicateSecondaryClassification->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DuplicateSecondaryClassification") != m.end() && !m["DuplicateSecondaryClassification"].empty()) {
      if (typeid(map<string, boost::any>) == m["DuplicateSecondaryClassification"].type()) {
        CheckDuplicateClassificationResponseBodyDataDuplicateSecondaryClassification model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DuplicateSecondaryClassification"]));
        duplicateSecondaryClassification = make_shared<CheckDuplicateClassificationResponseBodyDataDuplicateSecondaryClassification>(model1);
      }
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
  }


  virtual ~CheckDuplicateClassificationResponseBodyData() = default;
};
class CheckDuplicateClassificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CheckDuplicateClassificationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CheckDuplicateClassificationResponseBody() {}

  explicit CheckDuplicateClassificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckDuplicateClassificationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CheckDuplicateClassificationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckDuplicateClassificationResponseBody() = default;
};
class CheckDuplicateClassificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDuplicateClassificationResponseBody> body{};

  CheckDuplicateClassificationResponse() {}

  explicit CheckDuplicateClassificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckDuplicateClassificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDuplicateClassificationResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDuplicateClassificationResponse() = default;
};
class CheckDuplicateTrademarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> classification{};
  shared_ptr<long> eventSceneType{};
  shared_ptr<string> materialName{};
  shared_ptr<string> trademarkName{};

  CheckDuplicateTrademarkRequest() {}

  explicit CheckDuplicateTrademarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classification) {
      res["Classification"] = boost::any(*classification);
    }
    if (eventSceneType) {
      res["EventSceneType"] = boost::any(*eventSceneType);
    }
    if (materialName) {
      res["MaterialName"] = boost::any(*materialName);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classification") != m.end() && !m["Classification"].empty()) {
      classification = make_shared<string>(boost::any_cast<string>(m["Classification"]));
    }
    if (m.find("EventSceneType") != m.end() && !m["EventSceneType"].empty()) {
      eventSceneType = make_shared<long>(boost::any_cast<long>(m["EventSceneType"]));
    }
    if (m.find("MaterialName") != m.end() && !m["MaterialName"].empty()) {
      materialName = make_shared<string>(boost::any_cast<string>(m["MaterialName"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
  }


  virtual ~CheckDuplicateTrademarkRequest() = default;
};
class CheckDuplicateTrademarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> duplicateTrademark{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> type{};

  CheckDuplicateTrademarkResponseBody() {}

  explicit CheckDuplicateTrademarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (duplicateTrademark) {
      res["DuplicateTrademark"] = boost::any(*duplicateTrademark);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DuplicateTrademark") != m.end() && !m["DuplicateTrademark"].empty()) {
      duplicateTrademark = make_shared<string>(boost::any_cast<string>(m["DuplicateTrademark"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CheckDuplicateTrademarkResponseBody() = default;
};
class CheckDuplicateTrademarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDuplicateTrademarkResponseBody> body{};

  CheckDuplicateTrademarkResponse() {}

  explicit CheckDuplicateTrademarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckDuplicateTrademarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDuplicateTrademarkResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDuplicateTrademarkResponse() = default;
};
class CheckMaterialValidityRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessLicenseOssKey{};
  shared_ptr<string> cardNumber{};
  shared_ptr<string> idCardName{};
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> idCardOssKey{};
  shared_ptr<long> materialId{};
  shared_ptr<long> materialRegion{};
  shared_ptr<long> materialType{};
  shared_ptr<string> name{};
  shared_ptr<long> personalType{};

  CheckMaterialValidityRequest() {}

  explicit CheckMaterialValidityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessLicenseOssKey) {
      res["BusinessLicenseOssKey"] = boost::any(*businessLicenseOssKey);
    }
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (idCardName) {
      res["IdCardName"] = boost::any(*idCardName);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (idCardOssKey) {
      res["IdCardOssKey"] = boost::any(*idCardOssKey);
    }
    if (materialId) {
      res["MaterialId"] = boost::any(*materialId);
    }
    if (materialRegion) {
      res["MaterialRegion"] = boost::any(*materialRegion);
    }
    if (materialType) {
      res["MaterialType"] = boost::any(*materialType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (personalType) {
      res["PersonalType"] = boost::any(*personalType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessLicenseOssKey") != m.end() && !m["BusinessLicenseOssKey"].empty()) {
      businessLicenseOssKey = make_shared<string>(boost::any_cast<string>(m["BusinessLicenseOssKey"]));
    }
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("IdCardName") != m.end() && !m["IdCardName"].empty()) {
      idCardName = make_shared<string>(boost::any_cast<string>(m["IdCardName"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("IdCardOssKey") != m.end() && !m["IdCardOssKey"].empty()) {
      idCardOssKey = make_shared<string>(boost::any_cast<string>(m["IdCardOssKey"]));
    }
    if (m.find("MaterialId") != m.end() && !m["MaterialId"].empty()) {
      materialId = make_shared<long>(boost::any_cast<long>(m["MaterialId"]));
    }
    if (m.find("MaterialRegion") != m.end() && !m["MaterialRegion"].empty()) {
      materialRegion = make_shared<long>(boost::any_cast<long>(m["MaterialRegion"]));
    }
    if (m.find("MaterialType") != m.end() && !m["MaterialType"].empty()) {
      materialType = make_shared<long>(boost::any_cast<long>(m["MaterialType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PersonalType") != m.end() && !m["PersonalType"].empty()) {
      personalType = make_shared<long>(boost::any_cast<long>(m["PersonalType"]));
    }
  }


  virtual ~CheckMaterialValidityRequest() = default;
};
class CheckMaterialValidityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CheckMaterialValidityResponseBody() {}

  explicit CheckMaterialValidityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckMaterialValidityResponseBody() = default;
};
class CheckMaterialValidityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckMaterialValidityResponseBody> body{};

  CheckMaterialValidityResponse() {}

  explicit CheckMaterialValidityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckMaterialValidityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckMaterialValidityResponseBody>(model1);
      }
    }
  }


  virtual ~CheckMaterialValidityResponse() = default;
};
class CheckTrademarkNameRequest : public Darabonba::Model {
public:
  shared_ptr<long> eventSceneType{};
  shared_ptr<string> trademarkName{};

  CheckTrademarkNameRequest() {}

  explicit CheckTrademarkNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventSceneType) {
      res["EventSceneType"] = boost::any(*eventSceneType);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventSceneType") != m.end() && !m["EventSceneType"].empty()) {
      eventSceneType = make_shared<long>(boost::any_cast<long>(m["EventSceneType"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
  }


  virtual ~CheckTrademarkNameRequest() = default;
};
class CheckTrademarkNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  CheckTrademarkNameResponseBody() {}

  explicit CheckTrademarkNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~CheckTrademarkNameResponseBody() = default;
};
class CheckTrademarkNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckTrademarkNameResponseBody> body{};

  CheckTrademarkNameResponse() {}

  explicit CheckTrademarkNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckTrademarkNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckTrademarkNameResponseBody>(model1);
      }
    }
  }


  virtual ~CheckTrademarkNameResponse() = default;
};
class CloseTrademarkApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};

  CloseTrademarkApplicationRequest() {}

  explicit CloseTrademarkApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CloseTrademarkApplicationRequest() = default;
};
class CloseTrademarkApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CloseTrademarkApplicationResponseBody() {}

  explicit CloseTrademarkApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CloseTrademarkApplicationResponseBody() = default;
};
class CloseTrademarkApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloseTrademarkApplicationResponseBody> body{};

  CloseTrademarkApplicationResponse() {}

  explicit CloseTrademarkApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloseTrademarkApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseTrademarkApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~CloseTrademarkApplicationResponse() = default;
};
class CombineAuthorizationLetterRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> applicantType{};
  shared_ptr<string> contactName{};
  shared_ptr<string> contactPhone{};
  shared_ptr<string> contactPostcode{};
  shared_ptr<string> materialId{};
  shared_ptr<string> materialName{};
  shared_ptr<string> nationality{};
  shared_ptr<string> personalType{};
  shared_ptr<long> principalName{};
  shared_ptr<string> tmProduceType{};
  shared_ptr<string> trademarkName{};

  CombineAuthorizationLetterRequest() {}

  explicit CombineAuthorizationLetterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (applicantType) {
      res["ApplicantType"] = boost::any(*applicantType);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (contactPhone) {
      res["ContactPhone"] = boost::any(*contactPhone);
    }
    if (contactPostcode) {
      res["ContactPostcode"] = boost::any(*contactPostcode);
    }
    if (materialId) {
      res["MaterialId"] = boost::any(*materialId);
    }
    if (materialName) {
      res["MaterialName"] = boost::any(*materialName);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    if (personalType) {
      res["PersonalType"] = boost::any(*personalType);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (tmProduceType) {
      res["TmProduceType"] = boost::any(*tmProduceType);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("ApplicantType") != m.end() && !m["ApplicantType"].empty()) {
      applicantType = make_shared<string>(boost::any_cast<string>(m["ApplicantType"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("ContactPhone") != m.end() && !m["ContactPhone"].empty()) {
      contactPhone = make_shared<string>(boost::any_cast<string>(m["ContactPhone"]));
    }
    if (m.find("ContactPostcode") != m.end() && !m["ContactPostcode"].empty()) {
      contactPostcode = make_shared<string>(boost::any_cast<string>(m["ContactPostcode"]));
    }
    if (m.find("MaterialId") != m.end() && !m["MaterialId"].empty()) {
      materialId = make_shared<string>(boost::any_cast<string>(m["MaterialId"]));
    }
    if (m.find("MaterialName") != m.end() && !m["MaterialName"].empty()) {
      materialName = make_shared<string>(boost::any_cast<string>(m["MaterialName"]));
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
    if (m.find("PersonalType") != m.end() && !m["PersonalType"].empty()) {
      personalType = make_shared<string>(boost::any_cast<string>(m["PersonalType"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("TmProduceType") != m.end() && !m["TmProduceType"].empty()) {
      tmProduceType = make_shared<string>(boost::any_cast<string>(m["TmProduceType"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
  }


  virtual ~CombineAuthorizationLetterRequest() = default;
};
class CombineAuthorizationLetterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateCombineUrl{};

  CombineAuthorizationLetterResponseBody() {}

  explicit CombineAuthorizationLetterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateCombineUrl) {
      res["TemplateCombineUrl"] = boost::any(*templateCombineUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateCombineUrl") != m.end() && !m["TemplateCombineUrl"].empty()) {
      templateCombineUrl = make_shared<string>(boost::any_cast<string>(m["TemplateCombineUrl"]));
    }
  }


  virtual ~CombineAuthorizationLetterResponseBody() = default;
};
class CombineAuthorizationLetterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CombineAuthorizationLetterResponseBody> body{};

  CombineAuthorizationLetterResponse() {}

  explicit CombineAuthorizationLetterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CombineAuthorizationLetterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CombineAuthorizationLetterResponseBody>(model1);
      }
    }
  }


  virtual ~CombineAuthorizationLetterResponse() = default;
};
class ComplementTrademarkApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> agreementId{};
  shared_ptr<string> authorizationOssKey{};
  shared_ptr<string> bizId{};
  shared_ptr<bool> isBlackIcon{};
  shared_ptr<string> materialId{};
  shared_ptr<string> orderData{};
  shared_ptr<string> source{};
  shared_ptr<string> trademarkComment{};
  shared_ptr<string> trademarkIconOssKey{};
  shared_ptr<string> trademarkName{};
  shared_ptr<string> trademarkNameType{};
  shared_ptr<long> trademarkType{};

  ComplementTrademarkApplicationRequest() {}

  explicit ComplementTrademarkApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreementId) {
      res["AgreementId"] = boost::any(*agreementId);
    }
    if (authorizationOssKey) {
      res["AuthorizationOssKey"] = boost::any(*authorizationOssKey);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (isBlackIcon) {
      res["IsBlackIcon"] = boost::any(*isBlackIcon);
    }
    if (materialId) {
      res["MaterialId"] = boost::any(*materialId);
    }
    if (orderData) {
      res["OrderData"] = boost::any(*orderData);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (trademarkComment) {
      res["TrademarkComment"] = boost::any(*trademarkComment);
    }
    if (trademarkIconOssKey) {
      res["TrademarkIconOssKey"] = boost::any(*trademarkIconOssKey);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    if (trademarkNameType) {
      res["TrademarkNameType"] = boost::any(*trademarkNameType);
    }
    if (trademarkType) {
      res["TrademarkType"] = boost::any(*trademarkType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgreementId") != m.end() && !m["AgreementId"].empty()) {
      agreementId = make_shared<string>(boost::any_cast<string>(m["AgreementId"]));
    }
    if (m.find("AuthorizationOssKey") != m.end() && !m["AuthorizationOssKey"].empty()) {
      authorizationOssKey = make_shared<string>(boost::any_cast<string>(m["AuthorizationOssKey"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("IsBlackIcon") != m.end() && !m["IsBlackIcon"].empty()) {
      isBlackIcon = make_shared<bool>(boost::any_cast<bool>(m["IsBlackIcon"]));
    }
    if (m.find("MaterialId") != m.end() && !m["MaterialId"].empty()) {
      materialId = make_shared<string>(boost::any_cast<string>(m["MaterialId"]));
    }
    if (m.find("OrderData") != m.end() && !m["OrderData"].empty()) {
      orderData = make_shared<string>(boost::any_cast<string>(m["OrderData"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("TrademarkComment") != m.end() && !m["TrademarkComment"].empty()) {
      trademarkComment = make_shared<string>(boost::any_cast<string>(m["TrademarkComment"]));
    }
    if (m.find("TrademarkIconOssKey") != m.end() && !m["TrademarkIconOssKey"].empty()) {
      trademarkIconOssKey = make_shared<string>(boost::any_cast<string>(m["TrademarkIconOssKey"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
    if (m.find("TrademarkNameType") != m.end() && !m["TrademarkNameType"].empty()) {
      trademarkNameType = make_shared<string>(boost::any_cast<string>(m["TrademarkNameType"]));
    }
    if (m.find("TrademarkType") != m.end() && !m["TrademarkType"].empty()) {
      trademarkType = make_shared<long>(boost::any_cast<long>(m["TrademarkType"]));
    }
  }


  virtual ~ComplementTrademarkApplicationRequest() = default;
};
class ComplementTrademarkApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ComplementTrademarkApplicationResponseBody() {}

  explicit ComplementTrademarkApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ComplementTrademarkApplicationResponseBody() = default;
};
class ComplementTrademarkApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ComplementTrademarkApplicationResponseBody> body{};

  ComplementTrademarkApplicationResponse() {}

  explicit ComplementTrademarkApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ComplementTrademarkApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ComplementTrademarkApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~ComplementTrademarkApplicationResponse() = default;
};
class ConfirmExpertSolutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> note{};

  ConfirmExpertSolutionRequest() {}

  explicit ConfirmExpertSolutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
  }


  virtual ~ConfirmExpertSolutionRequest() = default;
};
class ConfirmExpertSolutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ConfirmExpertSolutionResponseBody() {}

  explicit ConfirmExpertSolutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ConfirmExpertSolutionResponseBody() = default;
};
class ConfirmExpertSolutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfirmExpertSolutionResponseBody> body{};

  ConfirmExpertSolutionResponse() {}

  explicit ConfirmExpertSolutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfirmExpertSolutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfirmExpertSolutionResponseBody>(model1);
      }
    }
  }


  virtual ~ConfirmExpertSolutionResponse() = default;
};
class CreateApplicantRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> applicantName{};
  shared_ptr<long> applicantRegion{};
  shared_ptr<long> applicantType{};
  shared_ptr<string> authorizationOssKey{};
  shared_ptr<string> businessLicenceOssKey{};
  shared_ptr<string> cardNumber{};
  shared_ptr<string> contactAddress{};
  shared_ptr<string> contactCity{};
  shared_ptr<string> contactCounty{};
  shared_ptr<string> contactDistrict{};
  shared_ptr<string> contactEmail{};
  shared_ptr<string> contactName{};
  shared_ptr<string> contactNumber{};
  shared_ptr<string> contactProvince{};
  shared_ptr<string> contactZipcode{};
  shared_ptr<string> country{};
  shared_ptr<string> EAddress{};
  shared_ptr<string> EName{};
  shared_ptr<string> idCardName{};
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> idCardOssKey{};
  shared_ptr<string> legalNoticeOssKey{};
  shared_ptr<string> passportOssKey{};
  shared_ptr<long> personalType{};
  shared_ptr<long> principalName{};
  shared_ptr<string> province{};

  CreateApplicantRequest() {}

  explicit CreateApplicantRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (applicantName) {
      res["ApplicantName"] = boost::any(*applicantName);
    }
    if (applicantRegion) {
      res["ApplicantRegion"] = boost::any(*applicantRegion);
    }
    if (applicantType) {
      res["ApplicantType"] = boost::any(*applicantType);
    }
    if (authorizationOssKey) {
      res["AuthorizationOssKey"] = boost::any(*authorizationOssKey);
    }
    if (businessLicenceOssKey) {
      res["BusinessLicenceOssKey"] = boost::any(*businessLicenceOssKey);
    }
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (contactAddress) {
      res["ContactAddress"] = boost::any(*contactAddress);
    }
    if (contactCity) {
      res["ContactCity"] = boost::any(*contactCity);
    }
    if (contactCounty) {
      res["ContactCounty"] = boost::any(*contactCounty);
    }
    if (contactDistrict) {
      res["ContactDistrict"] = boost::any(*contactDistrict);
    }
    if (contactEmail) {
      res["ContactEmail"] = boost::any(*contactEmail);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (contactNumber) {
      res["ContactNumber"] = boost::any(*contactNumber);
    }
    if (contactProvince) {
      res["ContactProvince"] = boost::any(*contactProvince);
    }
    if (contactZipcode) {
      res["ContactZipcode"] = boost::any(*contactZipcode);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (EAddress) {
      res["EAddress"] = boost::any(*EAddress);
    }
    if (EName) {
      res["EName"] = boost::any(*EName);
    }
    if (idCardName) {
      res["IdCardName"] = boost::any(*idCardName);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (idCardOssKey) {
      res["IdCardOssKey"] = boost::any(*idCardOssKey);
    }
    if (legalNoticeOssKey) {
      res["LegalNoticeOssKey"] = boost::any(*legalNoticeOssKey);
    }
    if (passportOssKey) {
      res["PassportOssKey"] = boost::any(*passportOssKey);
    }
    if (personalType) {
      res["PersonalType"] = boost::any(*personalType);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("ApplicantName") != m.end() && !m["ApplicantName"].empty()) {
      applicantName = make_shared<string>(boost::any_cast<string>(m["ApplicantName"]));
    }
    if (m.find("ApplicantRegion") != m.end() && !m["ApplicantRegion"].empty()) {
      applicantRegion = make_shared<long>(boost::any_cast<long>(m["ApplicantRegion"]));
    }
    if (m.find("ApplicantType") != m.end() && !m["ApplicantType"].empty()) {
      applicantType = make_shared<long>(boost::any_cast<long>(m["ApplicantType"]));
    }
    if (m.find("AuthorizationOssKey") != m.end() && !m["AuthorizationOssKey"].empty()) {
      authorizationOssKey = make_shared<string>(boost::any_cast<string>(m["AuthorizationOssKey"]));
    }
    if (m.find("BusinessLicenceOssKey") != m.end() && !m["BusinessLicenceOssKey"].empty()) {
      businessLicenceOssKey = make_shared<string>(boost::any_cast<string>(m["BusinessLicenceOssKey"]));
    }
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("ContactAddress") != m.end() && !m["ContactAddress"].empty()) {
      contactAddress = make_shared<string>(boost::any_cast<string>(m["ContactAddress"]));
    }
    if (m.find("ContactCity") != m.end() && !m["ContactCity"].empty()) {
      contactCity = make_shared<string>(boost::any_cast<string>(m["ContactCity"]));
    }
    if (m.find("ContactCounty") != m.end() && !m["ContactCounty"].empty()) {
      contactCounty = make_shared<string>(boost::any_cast<string>(m["ContactCounty"]));
    }
    if (m.find("ContactDistrict") != m.end() && !m["ContactDistrict"].empty()) {
      contactDistrict = make_shared<string>(boost::any_cast<string>(m["ContactDistrict"]));
    }
    if (m.find("ContactEmail") != m.end() && !m["ContactEmail"].empty()) {
      contactEmail = make_shared<string>(boost::any_cast<string>(m["ContactEmail"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("ContactNumber") != m.end() && !m["ContactNumber"].empty()) {
      contactNumber = make_shared<string>(boost::any_cast<string>(m["ContactNumber"]));
    }
    if (m.find("ContactProvince") != m.end() && !m["ContactProvince"].empty()) {
      contactProvince = make_shared<string>(boost::any_cast<string>(m["ContactProvince"]));
    }
    if (m.find("ContactZipcode") != m.end() && !m["ContactZipcode"].empty()) {
      contactZipcode = make_shared<string>(boost::any_cast<string>(m["ContactZipcode"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("EAddress") != m.end() && !m["EAddress"].empty()) {
      EAddress = make_shared<string>(boost::any_cast<string>(m["EAddress"]));
    }
    if (m.find("EName") != m.end() && !m["EName"].empty()) {
      EName = make_shared<string>(boost::any_cast<string>(m["EName"]));
    }
    if (m.find("IdCardName") != m.end() && !m["IdCardName"].empty()) {
      idCardName = make_shared<string>(boost::any_cast<string>(m["IdCardName"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("IdCardOssKey") != m.end() && !m["IdCardOssKey"].empty()) {
      idCardOssKey = make_shared<string>(boost::any_cast<string>(m["IdCardOssKey"]));
    }
    if (m.find("LegalNoticeOssKey") != m.end() && !m["LegalNoticeOssKey"].empty()) {
      legalNoticeOssKey = make_shared<string>(boost::any_cast<string>(m["LegalNoticeOssKey"]));
    }
    if (m.find("PassportOssKey") != m.end() && !m["PassportOssKey"].empty()) {
      passportOssKey = make_shared<string>(boost::any_cast<string>(m["PassportOssKey"]));
    }
    if (m.find("PersonalType") != m.end() && !m["PersonalType"].empty()) {
      personalType = make_shared<long>(boost::any_cast<long>(m["PersonalType"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
  }


  virtual ~CreateApplicantRequest() = default;
};
class CreateApplicantResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> applicantId{};
  shared_ptr<string> requestId{};

  CreateApplicantResponseBody() {}

  explicit CreateApplicantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<string>(boost::any_cast<string>(m["ApplicantId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateApplicantResponseBody() = default;
};
class CreateApplicantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateApplicantResponseBody> body{};

  CreateApplicantResponse() {}

  explicit CreateApplicantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateApplicantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApplicantResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApplicantResponse() = default;
};
class CreateCommodityOrderRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<string> bizType{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> commodityCode{};
  shared_ptr<map<string, boost::any>> components{};
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<map<string, boost::any>> orderParams{};
  shared_ptr<string> orderType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<long> quantity{};
  shared_ptr<string> specCode{};
  shared_ptr<string> userId{};

  CreateCommodityOrderRequest() {}

  explicit CreateCommodityOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (components) {
      res["Components"] = boost::any(*components);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderParams) {
      res["OrderParams"] = boost::any(*orderParams);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (specCode) {
      res["SpecCode"] = boost::any(*specCode);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Components"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      components = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderParams") != m.end() && !m["OrderParams"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OrderParams"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      orderParams = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("SpecCode") != m.end() && !m["SpecCode"].empty()) {
      specCode = make_shared<string>(boost::any_cast<string>(m["SpecCode"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateCommodityOrderRequest() = default;
};
class CreateCommodityOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<string> bizType{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> componentsShrink{};
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> orderParamsShrink{};
  shared_ptr<string> orderType{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<long> quantity{};
  shared_ptr<string> specCode{};
  shared_ptr<string> userId{};

  CreateCommodityOrderShrinkRequest() {}

  explicit CreateCommodityOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (componentsShrink) {
      res["Components"] = boost::any(*componentsShrink);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderParamsShrink) {
      res["OrderParams"] = boost::any(*orderParamsShrink);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (specCode) {
      res["SpecCode"] = boost::any(*specCode);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      componentsShrink = make_shared<string>(boost::any_cast<string>(m["Components"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderParams") != m.end() && !m["OrderParams"].empty()) {
      orderParamsShrink = make_shared<string>(boost::any_cast<string>(m["OrderParams"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("SpecCode") != m.end() && !m["SpecCode"].empty()) {
      specCode = make_shared<string>(boost::any_cast<string>(m["SpecCode"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateCommodityOrderShrinkRequest() = default;
};
class CreateCommodityOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<long>> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateCommodityOrderResponseBody() {}

  explicit CreateCommodityOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      data = make_shared<vector<long>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateCommodityOrderResponseBody() = default;
};
class CreateCommodityOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCommodityOrderResponseBody> body{};

  CreateCommodityOrderResponse() {}

  explicit CreateCommodityOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCommodityOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCommodityOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCommodityOrderResponse() = default;
};
class CreateOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> agreementId{};
  shared_ptr<string> applicantId{};
  shared_ptr<long> applicationType{};
  shared_ptr<string> authorizationOssKey{};
  shared_ptr<bool> autoPay{};
  shared_ptr<string> blackAndWhiteIcon{};
  shared_ptr<string> channel{};
  shared_ptr<string> classifications{};
  shared_ptr<string> idempotentId{};
  shared_ptr<string> legalNoticeKey{};
  shared_ptr<string> payType{};
  shared_ptr<string> paymentCallback{};
  shared_ptr<long> principalName{};
  shared_ptr<string> source{};
  shared_ptr<string> trademarkComment{};
  shared_ptr<string> trademarkIcon{};
  shared_ptr<string> trademarkName{};
  shared_ptr<string> trademarkNameType{};

  CreateOrderRequest() {}

  explicit CreateOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreementId) {
      res["AgreementId"] = boost::any(*agreementId);
    }
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (authorizationOssKey) {
      res["AuthorizationOssKey"] = boost::any(*authorizationOssKey);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (blackAndWhiteIcon) {
      res["BlackAndWhiteIcon"] = boost::any(*blackAndWhiteIcon);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (classifications) {
      res["Classifications"] = boost::any(*classifications);
    }
    if (idempotentId) {
      res["IdempotentId"] = boost::any(*idempotentId);
    }
    if (legalNoticeKey) {
      res["LegalNoticeKey"] = boost::any(*legalNoticeKey);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (paymentCallback) {
      res["PaymentCallback"] = boost::any(*paymentCallback);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (trademarkComment) {
      res["TrademarkComment"] = boost::any(*trademarkComment);
    }
    if (trademarkIcon) {
      res["TrademarkIcon"] = boost::any(*trademarkIcon);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    if (trademarkNameType) {
      res["TrademarkNameType"] = boost::any(*trademarkNameType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgreementId") != m.end() && !m["AgreementId"].empty()) {
      agreementId = make_shared<string>(boost::any_cast<string>(m["AgreementId"]));
    }
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<string>(boost::any_cast<string>(m["ApplicantId"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<long>(boost::any_cast<long>(m["ApplicationType"]));
    }
    if (m.find("AuthorizationOssKey") != m.end() && !m["AuthorizationOssKey"].empty()) {
      authorizationOssKey = make_shared<string>(boost::any_cast<string>(m["AuthorizationOssKey"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("BlackAndWhiteIcon") != m.end() && !m["BlackAndWhiteIcon"].empty()) {
      blackAndWhiteIcon = make_shared<string>(boost::any_cast<string>(m["BlackAndWhiteIcon"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("Classifications") != m.end() && !m["Classifications"].empty()) {
      classifications = make_shared<string>(boost::any_cast<string>(m["Classifications"]));
    }
    if (m.find("IdempotentId") != m.end() && !m["IdempotentId"].empty()) {
      idempotentId = make_shared<string>(boost::any_cast<string>(m["IdempotentId"]));
    }
    if (m.find("LegalNoticeKey") != m.end() && !m["LegalNoticeKey"].empty()) {
      legalNoticeKey = make_shared<string>(boost::any_cast<string>(m["LegalNoticeKey"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("PaymentCallback") != m.end() && !m["PaymentCallback"].empty()) {
      paymentCallback = make_shared<string>(boost::any_cast<string>(m["PaymentCallback"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("TrademarkComment") != m.end() && !m["TrademarkComment"].empty()) {
      trademarkComment = make_shared<string>(boost::any_cast<string>(m["TrademarkComment"]));
    }
    if (m.find("TrademarkIcon") != m.end() && !m["TrademarkIcon"].empty()) {
      trademarkIcon = make_shared<string>(boost::any_cast<string>(m["TrademarkIcon"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
    if (m.find("TrademarkNameType") != m.end() && !m["TrademarkNameType"].empty()) {
      trademarkNameType = make_shared<string>(boost::any_cast<string>(m["TrademarkNameType"]));
    }
  }


  virtual ~CreateOrderRequest() = default;
};
class CreateOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<map<string, boost::any>> orderIds{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateOrderResponseBody() {}

  explicit CreateOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (orderIds) {
      res["OrderIds"] = boost::any(*orderIds);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OrderIds") != m.end() && !m["OrderIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OrderIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      orderIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateOrderResponseBody() = default;
};
class CreateOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateOrderResponseBody> body{};

  CreateOrderResponse() {}

  explicit CreateOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOrderResponse() = default;
};
class CreateTrademarkApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> agreementId{};
  shared_ptr<string> applicantId{};
  shared_ptr<long> applicationType{};
  shared_ptr<string> authorizationOssKey{};
  shared_ptr<bool> autoPay{};
  shared_ptr<string> blackAndWhiteIcon{};
  shared_ptr<string> channel{};
  shared_ptr<string> classifications{};
  shared_ptr<string> idempotentId{};
  shared_ptr<string> legalNoticeKey{};
  shared_ptr<long> principalName{};
  shared_ptr<string> source{};
  shared_ptr<string> trademarkComment{};
  shared_ptr<string> trademarkIcon{};
  shared_ptr<string> trademarkName{};
  shared_ptr<string> trademarkNameType{};

  CreateTrademarkApplicationRequest() {}

  explicit CreateTrademarkApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreementId) {
      res["AgreementId"] = boost::any(*agreementId);
    }
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (authorizationOssKey) {
      res["AuthorizationOssKey"] = boost::any(*authorizationOssKey);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (blackAndWhiteIcon) {
      res["BlackAndWhiteIcon"] = boost::any(*blackAndWhiteIcon);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (classifications) {
      res["Classifications"] = boost::any(*classifications);
    }
    if (idempotentId) {
      res["IdempotentId"] = boost::any(*idempotentId);
    }
    if (legalNoticeKey) {
      res["LegalNoticeKey"] = boost::any(*legalNoticeKey);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (trademarkComment) {
      res["TrademarkComment"] = boost::any(*trademarkComment);
    }
    if (trademarkIcon) {
      res["TrademarkIcon"] = boost::any(*trademarkIcon);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    if (trademarkNameType) {
      res["TrademarkNameType"] = boost::any(*trademarkNameType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgreementId") != m.end() && !m["AgreementId"].empty()) {
      agreementId = make_shared<string>(boost::any_cast<string>(m["AgreementId"]));
    }
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<string>(boost::any_cast<string>(m["ApplicantId"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<long>(boost::any_cast<long>(m["ApplicationType"]));
    }
    if (m.find("AuthorizationOssKey") != m.end() && !m["AuthorizationOssKey"].empty()) {
      authorizationOssKey = make_shared<string>(boost::any_cast<string>(m["AuthorizationOssKey"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("BlackAndWhiteIcon") != m.end() && !m["BlackAndWhiteIcon"].empty()) {
      blackAndWhiteIcon = make_shared<string>(boost::any_cast<string>(m["BlackAndWhiteIcon"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("Classifications") != m.end() && !m["Classifications"].empty()) {
      classifications = make_shared<string>(boost::any_cast<string>(m["Classifications"]));
    }
    if (m.find("IdempotentId") != m.end() && !m["IdempotentId"].empty()) {
      idempotentId = make_shared<string>(boost::any_cast<string>(m["IdempotentId"]));
    }
    if (m.find("LegalNoticeKey") != m.end() && !m["LegalNoticeKey"].empty()) {
      legalNoticeKey = make_shared<string>(boost::any_cast<string>(m["LegalNoticeKey"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("TrademarkComment") != m.end() && !m["TrademarkComment"].empty()) {
      trademarkComment = make_shared<string>(boost::any_cast<string>(m["TrademarkComment"]));
    }
    if (m.find("TrademarkIcon") != m.end() && !m["TrademarkIcon"].empty()) {
      trademarkIcon = make_shared<string>(boost::any_cast<string>(m["TrademarkIcon"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
    if (m.find("TrademarkNameType") != m.end() && !m["TrademarkNameType"].empty()) {
      trademarkNameType = make_shared<string>(boost::any_cast<string>(m["TrademarkNameType"]));
    }
  }


  virtual ~CreateTrademarkApplicationRequest() = default;
};
class CreateTrademarkApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateTrademarkApplicationResponseBody() {}

  explicit CreateTrademarkApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateTrademarkApplicationResponseBody() = default;
};
class CreateTrademarkApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTrademarkApplicationResponseBody> body{};

  CreateTrademarkApplicationResponse() {}

  explicit CreateTrademarkApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTrademarkApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTrademarkApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTrademarkApplicationResponse() = default;
};
class DeleteSearchConditionRequest : public Darabonba::Model {
public:
  shared_ptr<long> conditionId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> umid{};

  DeleteSearchConditionRequest() {}

  explicit DeleteSearchConditionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionId) {
      res["ConditionId"] = boost::any(*conditionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (umid) {
      res["Umid"] = boost::any(*umid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionId") != m.end() && !m["ConditionId"].empty()) {
      conditionId = make_shared<long>(boost::any_cast<long>(m["ConditionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Umid") != m.end() && !m["Umid"].empty()) {
      umid = make_shared<string>(boost::any_cast<string>(m["Umid"]));
    }
  }


  virtual ~DeleteSearchConditionRequest() = default;
};
class DeleteSearchConditionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteSearchConditionResponseBody() {}

  explicit DeleteSearchConditionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSearchConditionResponseBody() = default;
};
class DeleteSearchConditionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSearchConditionResponseBody> body{};

  DeleteSearchConditionResponse() {}

  explicit DeleteSearchConditionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSearchConditionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSearchConditionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSearchConditionResponse() = default;
};
class DescribeAdminTrademarkApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};

  DescribeAdminTrademarkApplicationRequest() {}

  explicit DescribeAdminTrademarkApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAdminTrademarkApplicationRequest() = default;
};
class DescribeAdminTrademarkApplicationResponseBodyApplicant : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> applicantName{};
  shared_ptr<long> applicantRegion{};
  shared_ptr<long> applicantType{};
  shared_ptr<long> auditStatus{};
  shared_ptr<string> authorizationUrl{};
  shared_ptr<string> businessLicenceUrl{};
  shared_ptr<string> cardNumber{};
  shared_ptr<string> contactAddress{};
  shared_ptr<string> contactEmail{};
  shared_ptr<string> contactName{};
  shared_ptr<string> contactNumber{};
  shared_ptr<string> contactZipcode{};
  shared_ptr<string> country{};
  shared_ptr<string> EAddress{};
  shared_ptr<string> EName{};
  shared_ptr<string> idCardUrl{};
  shared_ptr<string> legalNoticeUrl{};
  shared_ptr<string> passportUrl{};
  shared_ptr<long> principalName{};
  shared_ptr<string> province{};

  DescribeAdminTrademarkApplicationResponseBodyApplicant() {}

  explicit DescribeAdminTrademarkApplicationResponseBodyApplicant(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (applicantName) {
      res["ApplicantName"] = boost::any(*applicantName);
    }
    if (applicantRegion) {
      res["ApplicantRegion"] = boost::any(*applicantRegion);
    }
    if (applicantType) {
      res["ApplicantType"] = boost::any(*applicantType);
    }
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (authorizationUrl) {
      res["AuthorizationUrl"] = boost::any(*authorizationUrl);
    }
    if (businessLicenceUrl) {
      res["BusinessLicenceUrl"] = boost::any(*businessLicenceUrl);
    }
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (contactAddress) {
      res["ContactAddress"] = boost::any(*contactAddress);
    }
    if (contactEmail) {
      res["ContactEmail"] = boost::any(*contactEmail);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (contactNumber) {
      res["ContactNumber"] = boost::any(*contactNumber);
    }
    if (contactZipcode) {
      res["ContactZipcode"] = boost::any(*contactZipcode);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (EAddress) {
      res["EAddress"] = boost::any(*EAddress);
    }
    if (EName) {
      res["EName"] = boost::any(*EName);
    }
    if (idCardUrl) {
      res["IdCardUrl"] = boost::any(*idCardUrl);
    }
    if (legalNoticeUrl) {
      res["LegalNoticeUrl"] = boost::any(*legalNoticeUrl);
    }
    if (passportUrl) {
      res["PassportUrl"] = boost::any(*passportUrl);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("ApplicantName") != m.end() && !m["ApplicantName"].empty()) {
      applicantName = make_shared<string>(boost::any_cast<string>(m["ApplicantName"]));
    }
    if (m.find("ApplicantRegion") != m.end() && !m["ApplicantRegion"].empty()) {
      applicantRegion = make_shared<long>(boost::any_cast<long>(m["ApplicantRegion"]));
    }
    if (m.find("ApplicantType") != m.end() && !m["ApplicantType"].empty()) {
      applicantType = make_shared<long>(boost::any_cast<long>(m["ApplicantType"]));
    }
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("AuthorizationUrl") != m.end() && !m["AuthorizationUrl"].empty()) {
      authorizationUrl = make_shared<string>(boost::any_cast<string>(m["AuthorizationUrl"]));
    }
    if (m.find("BusinessLicenceUrl") != m.end() && !m["BusinessLicenceUrl"].empty()) {
      businessLicenceUrl = make_shared<string>(boost::any_cast<string>(m["BusinessLicenceUrl"]));
    }
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("ContactAddress") != m.end() && !m["ContactAddress"].empty()) {
      contactAddress = make_shared<string>(boost::any_cast<string>(m["ContactAddress"]));
    }
    if (m.find("ContactEmail") != m.end() && !m["ContactEmail"].empty()) {
      contactEmail = make_shared<string>(boost::any_cast<string>(m["ContactEmail"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("ContactNumber") != m.end() && !m["ContactNumber"].empty()) {
      contactNumber = make_shared<string>(boost::any_cast<string>(m["ContactNumber"]));
    }
    if (m.find("ContactZipcode") != m.end() && !m["ContactZipcode"].empty()) {
      contactZipcode = make_shared<string>(boost::any_cast<string>(m["ContactZipcode"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("EAddress") != m.end() && !m["EAddress"].empty()) {
      EAddress = make_shared<string>(boost::any_cast<string>(m["EAddress"]));
    }
    if (m.find("EName") != m.end() && !m["EName"].empty()) {
      EName = make_shared<string>(boost::any_cast<string>(m["EName"]));
    }
    if (m.find("IdCardUrl") != m.end() && !m["IdCardUrl"].empty()) {
      idCardUrl = make_shared<string>(boost::any_cast<string>(m["IdCardUrl"]));
    }
    if (m.find("LegalNoticeUrl") != m.end() && !m["LegalNoticeUrl"].empty()) {
      legalNoticeUrl = make_shared<string>(boost::any_cast<string>(m["LegalNoticeUrl"]));
    }
    if (m.find("PassportUrl") != m.end() && !m["PassportUrl"].empty()) {
      passportUrl = make_shared<string>(boost::any_cast<string>(m["PassportUrl"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
  }


  virtual ~DescribeAdminTrademarkApplicationResponseBodyApplicant() = default;
};
class DescribeAdminTrademarkApplicationResponseBodyFirstClassification : public Darabonba::Model {
public:
  shared_ptr<string> classificationCode{};
  shared_ptr<string> classificationName{};

  DescribeAdminTrademarkApplicationResponseBodyFirstClassification() {}

  explicit DescribeAdminTrademarkApplicationResponseBodyFirstClassification(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classificationCode) {
      res["ClassificationCode"] = boost::any(*classificationCode);
    }
    if (classificationName) {
      res["ClassificationName"] = boost::any(*classificationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassificationCode") != m.end() && !m["ClassificationCode"].empty()) {
      classificationCode = make_shared<string>(boost::any_cast<string>(m["ClassificationCode"]));
    }
    if (m.find("ClassificationName") != m.end() && !m["ClassificationName"].empty()) {
      classificationName = make_shared<string>(boost::any_cast<string>(m["ClassificationName"]));
    }
  }


  virtual ~DescribeAdminTrademarkApplicationResponseBodyFirstClassification() = default;
};
class DescribeAdminTrademarkApplicationResponseBodySupplements : public Darabonba::Model {
public:
  shared_ptr<long> acceptExpirationDate{};
  shared_ptr<long> acceptTime{};
  shared_ptr<long> applicationType{};
  shared_ptr<string> content{};
  shared_ptr<string> officialFile{};
  shared_ptr<long> operateTime{};
  shared_ptr<string> orderId{};
  shared_ptr<long> sbjExpirationDate{};
  shared_ptr<long> sendTime{};
  shared_ptr<string> serialNumber{};
  shared_ptr<long> supplementId{};
  shared_ptr<long> supplementStatus{};
  shared_ptr<string> trademarkNumber{};
  shared_ptr<vector<string>> userFiles{};

  DescribeAdminTrademarkApplicationResponseBodySupplements() {}

  explicit DescribeAdminTrademarkApplicationResponseBodySupplements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptExpirationDate) {
      res["AcceptExpirationDate"] = boost::any(*acceptExpirationDate);
    }
    if (acceptTime) {
      res["AcceptTime"] = boost::any(*acceptTime);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (officialFile) {
      res["OfficialFile"] = boost::any(*officialFile);
    }
    if (operateTime) {
      res["OperateTime"] = boost::any(*operateTime);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (sbjExpirationDate) {
      res["SbjExpirationDate"] = boost::any(*sbjExpirationDate);
    }
    if (sendTime) {
      res["SendTime"] = boost::any(*sendTime);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (supplementId) {
      res["SupplementId"] = boost::any(*supplementId);
    }
    if (supplementStatus) {
      res["SupplementStatus"] = boost::any(*supplementStatus);
    }
    if (trademarkNumber) {
      res["TrademarkNumber"] = boost::any(*trademarkNumber);
    }
    if (userFiles) {
      res["UserFiles"] = boost::any(*userFiles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptExpirationDate") != m.end() && !m["AcceptExpirationDate"].empty()) {
      acceptExpirationDate = make_shared<long>(boost::any_cast<long>(m["AcceptExpirationDate"]));
    }
    if (m.find("AcceptTime") != m.end() && !m["AcceptTime"].empty()) {
      acceptTime = make_shared<long>(boost::any_cast<long>(m["AcceptTime"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<long>(boost::any_cast<long>(m["ApplicationType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("OfficialFile") != m.end() && !m["OfficialFile"].empty()) {
      officialFile = make_shared<string>(boost::any_cast<string>(m["OfficialFile"]));
    }
    if (m.find("OperateTime") != m.end() && !m["OperateTime"].empty()) {
      operateTime = make_shared<long>(boost::any_cast<long>(m["OperateTime"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("SbjExpirationDate") != m.end() && !m["SbjExpirationDate"].empty()) {
      sbjExpirationDate = make_shared<long>(boost::any_cast<long>(m["SbjExpirationDate"]));
    }
    if (m.find("SendTime") != m.end() && !m["SendTime"].empty()) {
      sendTime = make_shared<long>(boost::any_cast<long>(m["SendTime"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("SupplementId") != m.end() && !m["SupplementId"].empty()) {
      supplementId = make_shared<long>(boost::any_cast<long>(m["SupplementId"]));
    }
    if (m.find("SupplementStatus") != m.end() && !m["SupplementStatus"].empty()) {
      supplementStatus = make_shared<long>(boost::any_cast<long>(m["SupplementStatus"]));
    }
    if (m.find("TrademarkNumber") != m.end() && !m["TrademarkNumber"].empty()) {
      trademarkNumber = make_shared<string>(boost::any_cast<string>(m["TrademarkNumber"]));
    }
    if (m.find("UserFiles") != m.end() && !m["UserFiles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserFiles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserFiles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userFiles = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAdminTrademarkApplicationResponseBodySupplements() = default;
};
class DescribeAdminTrademarkApplicationResponseBodyThirdClassifications : public Darabonba::Model {
public:
  shared_ptr<string> classificationCode{};
  shared_ptr<string> classificationName{};

  DescribeAdminTrademarkApplicationResponseBodyThirdClassifications() {}

  explicit DescribeAdminTrademarkApplicationResponseBodyThirdClassifications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classificationCode) {
      res["ClassificationCode"] = boost::any(*classificationCode);
    }
    if (classificationName) {
      res["ClassificationName"] = boost::any(*classificationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassificationCode") != m.end() && !m["ClassificationCode"].empty()) {
      classificationCode = make_shared<string>(boost::any_cast<string>(m["ClassificationCode"]));
    }
    if (m.find("ClassificationName") != m.end() && !m["ClassificationName"].empty()) {
      classificationName = make_shared<string>(boost::any_cast<string>(m["ClassificationName"]));
    }
  }


  virtual ~DescribeAdminTrademarkApplicationResponseBodyThirdClassifications() = default;
};
class DescribeAdminTrademarkApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> acceptUrl{};
  shared_ptr<DescribeAdminTrademarkApplicationResponseBodyApplicant> applicant{};
  shared_ptr<long> applicantId{};
  shared_ptr<long> applicationStatus{};
  shared_ptr<long> applicationType{};
  shared_ptr<string> authorizationUrl{};
  shared_ptr<string> bizId{};
  shared_ptr<string> blackAndWhiteIconUrl{};
  shared_ptr<long> createTime{};
  shared_ptr<map<string, boost::any>> extendInfo{};
  shared_ptr<DescribeAdminTrademarkApplicationResponseBodyFirstClassification> firstClassification{};
  shared_ptr<vector<string>> judgeResultUrls{};
  shared_ptr<string> note{};
  shared_ptr<string> orderId{};
  shared_ptr<double> orderPrice{};
  shared_ptr<long> principalName{};
  shared_ptr<vector<string>> receiptUrls{};
  shared_ptr<string> recvUserLogistics{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sendSbjLogistics{};
  shared_ptr<string> sendUserLogistics{};
  shared_ptr<double> servicePrice{};
  shared_ptr<vector<DescribeAdminTrademarkApplicationResponseBodySupplements>> supplements{};
  shared_ptr<vector<DescribeAdminTrademarkApplicationResponseBodyThirdClassifications>> thirdClassifications{};
  shared_ptr<double> totalPrice{};
  shared_ptr<string> trademarkIcon{};
  shared_ptr<string> trademarkName{};
  shared_ptr<long> trademarkNameType{};
  shared_ptr<string> trademarkNumber{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  DescribeAdminTrademarkApplicationResponseBody() {}

  explicit DescribeAdminTrademarkApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptUrl) {
      res["AcceptUrl"] = boost::any(*acceptUrl);
    }
    if (applicant) {
      res["Applicant"] = applicant ? boost::any(applicant->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    if (applicationStatus) {
      res["ApplicationStatus"] = boost::any(*applicationStatus);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (authorizationUrl) {
      res["AuthorizationUrl"] = boost::any(*authorizationUrl);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (blackAndWhiteIconUrl) {
      res["BlackAndWhiteIconUrl"] = boost::any(*blackAndWhiteIconUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (firstClassification) {
      res["FirstClassification"] = firstClassification ? boost::any(firstClassification->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (judgeResultUrls) {
      res["JudgeResultUrls"] = boost::any(*judgeResultUrls);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderPrice) {
      res["OrderPrice"] = boost::any(*orderPrice);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (receiptUrls) {
      res["ReceiptUrls"] = boost::any(*receiptUrls);
    }
    if (recvUserLogistics) {
      res["RecvUserLogistics"] = boost::any(*recvUserLogistics);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sendSbjLogistics) {
      res["SendSbjLogistics"] = boost::any(*sendSbjLogistics);
    }
    if (sendUserLogistics) {
      res["SendUserLogistics"] = boost::any(*sendUserLogistics);
    }
    if (servicePrice) {
      res["ServicePrice"] = boost::any(*servicePrice);
    }
    if (supplements) {
      vector<boost::any> temp1;
      for(auto item1:*supplements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Supplements"] = boost::any(temp1);
    }
    if (thirdClassifications) {
      vector<boost::any> temp1;
      for(auto item1:*thirdClassifications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ThirdClassifications"] = boost::any(temp1);
    }
    if (totalPrice) {
      res["TotalPrice"] = boost::any(*totalPrice);
    }
    if (trademarkIcon) {
      res["TrademarkIcon"] = boost::any(*trademarkIcon);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    if (trademarkNameType) {
      res["TrademarkNameType"] = boost::any(*trademarkNameType);
    }
    if (trademarkNumber) {
      res["TrademarkNumber"] = boost::any(*trademarkNumber);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptUrl") != m.end() && !m["AcceptUrl"].empty()) {
      acceptUrl = make_shared<string>(boost::any_cast<string>(m["AcceptUrl"]));
    }
    if (m.find("Applicant") != m.end() && !m["Applicant"].empty()) {
      if (typeid(map<string, boost::any>) == m["Applicant"].type()) {
        DescribeAdminTrademarkApplicationResponseBodyApplicant model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Applicant"]));
        applicant = make_shared<DescribeAdminTrademarkApplicationResponseBodyApplicant>(model1);
      }
    }
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<long>(boost::any_cast<long>(m["ApplicantId"]));
    }
    if (m.find("ApplicationStatus") != m.end() && !m["ApplicationStatus"].empty()) {
      applicationStatus = make_shared<long>(boost::any_cast<long>(m["ApplicationStatus"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<long>(boost::any_cast<long>(m["ApplicationType"]));
    }
    if (m.find("AuthorizationUrl") != m.end() && !m["AuthorizationUrl"].empty()) {
      authorizationUrl = make_shared<string>(boost::any_cast<string>(m["AuthorizationUrl"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BlackAndWhiteIconUrl") != m.end() && !m["BlackAndWhiteIconUrl"].empty()) {
      blackAndWhiteIconUrl = make_shared<string>(boost::any_cast<string>(m["BlackAndWhiteIconUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtendInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FirstClassification") != m.end() && !m["FirstClassification"].empty()) {
      if (typeid(map<string, boost::any>) == m["FirstClassification"].type()) {
        DescribeAdminTrademarkApplicationResponseBodyFirstClassification model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FirstClassification"]));
        firstClassification = make_shared<DescribeAdminTrademarkApplicationResponseBodyFirstClassification>(model1);
      }
    }
    if (m.find("JudgeResultUrls") != m.end() && !m["JudgeResultUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["JudgeResultUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JudgeResultUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      judgeResultUrls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OrderPrice") != m.end() && !m["OrderPrice"].empty()) {
      orderPrice = make_shared<double>(boost::any_cast<double>(m["OrderPrice"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("ReceiptUrls") != m.end() && !m["ReceiptUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReceiptUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReceiptUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      receiptUrls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RecvUserLogistics") != m.end() && !m["RecvUserLogistics"].empty()) {
      recvUserLogistics = make_shared<string>(boost::any_cast<string>(m["RecvUserLogistics"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SendSbjLogistics") != m.end() && !m["SendSbjLogistics"].empty()) {
      sendSbjLogistics = make_shared<string>(boost::any_cast<string>(m["SendSbjLogistics"]));
    }
    if (m.find("SendUserLogistics") != m.end() && !m["SendUserLogistics"].empty()) {
      sendUserLogistics = make_shared<string>(boost::any_cast<string>(m["SendUserLogistics"]));
    }
    if (m.find("ServicePrice") != m.end() && !m["ServicePrice"].empty()) {
      servicePrice = make_shared<double>(boost::any_cast<double>(m["ServicePrice"]));
    }
    if (m.find("Supplements") != m.end() && !m["Supplements"].empty()) {
      if (typeid(vector<boost::any>) == m["Supplements"].type()) {
        vector<DescribeAdminTrademarkApplicationResponseBodySupplements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Supplements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAdminTrademarkApplicationResponseBodySupplements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supplements = make_shared<vector<DescribeAdminTrademarkApplicationResponseBodySupplements>>(expect1);
      }
    }
    if (m.find("ThirdClassifications") != m.end() && !m["ThirdClassifications"].empty()) {
      if (typeid(vector<boost::any>) == m["ThirdClassifications"].type()) {
        vector<DescribeAdminTrademarkApplicationResponseBodyThirdClassifications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ThirdClassifications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAdminTrademarkApplicationResponseBodyThirdClassifications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        thirdClassifications = make_shared<vector<DescribeAdminTrademarkApplicationResponseBodyThirdClassifications>>(expect1);
      }
    }
    if (m.find("TotalPrice") != m.end() && !m["TotalPrice"].empty()) {
      totalPrice = make_shared<double>(boost::any_cast<double>(m["TotalPrice"]));
    }
    if (m.find("TrademarkIcon") != m.end() && !m["TrademarkIcon"].empty()) {
      trademarkIcon = make_shared<string>(boost::any_cast<string>(m["TrademarkIcon"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
    if (m.find("TrademarkNameType") != m.end() && !m["TrademarkNameType"].empty()) {
      trademarkNameType = make_shared<long>(boost::any_cast<long>(m["TrademarkNameType"]));
    }
    if (m.find("TrademarkNumber") != m.end() && !m["TrademarkNumber"].empty()) {
      trademarkNumber = make_shared<string>(boost::any_cast<string>(m["TrademarkNumber"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeAdminTrademarkApplicationResponseBody() = default;
};
class DescribeAdminTrademarkApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAdminTrademarkApplicationResponseBody> body{};

  DescribeAdminTrademarkApplicationResponse() {}

  explicit DescribeAdminTrademarkApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAdminTrademarkApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAdminTrademarkApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAdminTrademarkApplicationResponse() = default;
};
class DescribeApplicantRequest : public Darabonba::Model {
public:
  shared_ptr<long> applicantId{};

  DescribeApplicantRequest() {}

  explicit DescribeApplicantRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<long>(boost::any_cast<long>(m["ApplicantId"]));
    }
  }


  virtual ~DescribeApplicantRequest() = default;
};
class DescribeApplicantResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<long> applicantId{};
  shared_ptr<string> applicantName{};
  shared_ptr<long> applicantRegion{};
  shared_ptr<long> applicantType{};
  shared_ptr<string> applicantVersion{};
  shared_ptr<long> auditStatus{};
  shared_ptr<long> authorizationAuditStatus{};
  shared_ptr<string> authorizationUrl{};
  shared_ptr<string> businessLicenceUrl{};
  shared_ptr<string> cardNumber{};
  shared_ptr<string> contactAddress{};
  shared_ptr<string> contactCity{};
  shared_ptr<string> contactCounty{};
  shared_ptr<string> contactDistrict{};
  shared_ptr<string> contactEmail{};
  shared_ptr<string> contactName{};
  shared_ptr<string> contactNumber{};
  shared_ptr<string> contactProvince{};
  shared_ptr<string> contactZipcode{};
  shared_ptr<string> country{};
  shared_ptr<string> EAddress{};
  shared_ptr<string> EName{};
  shared_ptr<string> idCardName{};
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> idCardUrl{};
  shared_ptr<string> legalNoticeUrl{};
  shared_ptr<string> note{};
  shared_ptr<string> passportUrl{};
  shared_ptr<long> personalType{};
  shared_ptr<long> principalName{};
  shared_ptr<string> province{};
  shared_ptr<string> requestId{};
  shared_ptr<long> validDate{};

  DescribeApplicantResponseBody() {}

  explicit DescribeApplicantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    if (applicantName) {
      res["ApplicantName"] = boost::any(*applicantName);
    }
    if (applicantRegion) {
      res["ApplicantRegion"] = boost::any(*applicantRegion);
    }
    if (applicantType) {
      res["ApplicantType"] = boost::any(*applicantType);
    }
    if (applicantVersion) {
      res["ApplicantVersion"] = boost::any(*applicantVersion);
    }
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (authorizationAuditStatus) {
      res["AuthorizationAuditStatus"] = boost::any(*authorizationAuditStatus);
    }
    if (authorizationUrl) {
      res["AuthorizationUrl"] = boost::any(*authorizationUrl);
    }
    if (businessLicenceUrl) {
      res["BusinessLicenceUrl"] = boost::any(*businessLicenceUrl);
    }
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (contactAddress) {
      res["ContactAddress"] = boost::any(*contactAddress);
    }
    if (contactCity) {
      res["ContactCity"] = boost::any(*contactCity);
    }
    if (contactCounty) {
      res["ContactCounty"] = boost::any(*contactCounty);
    }
    if (contactDistrict) {
      res["ContactDistrict"] = boost::any(*contactDistrict);
    }
    if (contactEmail) {
      res["ContactEmail"] = boost::any(*contactEmail);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (contactNumber) {
      res["ContactNumber"] = boost::any(*contactNumber);
    }
    if (contactProvince) {
      res["ContactProvince"] = boost::any(*contactProvince);
    }
    if (contactZipcode) {
      res["ContactZipcode"] = boost::any(*contactZipcode);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (EAddress) {
      res["EAddress"] = boost::any(*EAddress);
    }
    if (EName) {
      res["EName"] = boost::any(*EName);
    }
    if (idCardName) {
      res["IdCardName"] = boost::any(*idCardName);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (idCardUrl) {
      res["IdCardUrl"] = boost::any(*idCardUrl);
    }
    if (legalNoticeUrl) {
      res["LegalNoticeUrl"] = boost::any(*legalNoticeUrl);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (passportUrl) {
      res["PassportUrl"] = boost::any(*passportUrl);
    }
    if (personalType) {
      res["PersonalType"] = boost::any(*personalType);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (validDate) {
      res["ValidDate"] = boost::any(*validDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<long>(boost::any_cast<long>(m["ApplicantId"]));
    }
    if (m.find("ApplicantName") != m.end() && !m["ApplicantName"].empty()) {
      applicantName = make_shared<string>(boost::any_cast<string>(m["ApplicantName"]));
    }
    if (m.find("ApplicantRegion") != m.end() && !m["ApplicantRegion"].empty()) {
      applicantRegion = make_shared<long>(boost::any_cast<long>(m["ApplicantRegion"]));
    }
    if (m.find("ApplicantType") != m.end() && !m["ApplicantType"].empty()) {
      applicantType = make_shared<long>(boost::any_cast<long>(m["ApplicantType"]));
    }
    if (m.find("ApplicantVersion") != m.end() && !m["ApplicantVersion"].empty()) {
      applicantVersion = make_shared<string>(boost::any_cast<string>(m["ApplicantVersion"]));
    }
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("AuthorizationAuditStatus") != m.end() && !m["AuthorizationAuditStatus"].empty()) {
      authorizationAuditStatus = make_shared<long>(boost::any_cast<long>(m["AuthorizationAuditStatus"]));
    }
    if (m.find("AuthorizationUrl") != m.end() && !m["AuthorizationUrl"].empty()) {
      authorizationUrl = make_shared<string>(boost::any_cast<string>(m["AuthorizationUrl"]));
    }
    if (m.find("BusinessLicenceUrl") != m.end() && !m["BusinessLicenceUrl"].empty()) {
      businessLicenceUrl = make_shared<string>(boost::any_cast<string>(m["BusinessLicenceUrl"]));
    }
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("ContactAddress") != m.end() && !m["ContactAddress"].empty()) {
      contactAddress = make_shared<string>(boost::any_cast<string>(m["ContactAddress"]));
    }
    if (m.find("ContactCity") != m.end() && !m["ContactCity"].empty()) {
      contactCity = make_shared<string>(boost::any_cast<string>(m["ContactCity"]));
    }
    if (m.find("ContactCounty") != m.end() && !m["ContactCounty"].empty()) {
      contactCounty = make_shared<string>(boost::any_cast<string>(m["ContactCounty"]));
    }
    if (m.find("ContactDistrict") != m.end() && !m["ContactDistrict"].empty()) {
      contactDistrict = make_shared<string>(boost::any_cast<string>(m["ContactDistrict"]));
    }
    if (m.find("ContactEmail") != m.end() && !m["ContactEmail"].empty()) {
      contactEmail = make_shared<string>(boost::any_cast<string>(m["ContactEmail"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("ContactNumber") != m.end() && !m["ContactNumber"].empty()) {
      contactNumber = make_shared<string>(boost::any_cast<string>(m["ContactNumber"]));
    }
    if (m.find("ContactProvince") != m.end() && !m["ContactProvince"].empty()) {
      contactProvince = make_shared<string>(boost::any_cast<string>(m["ContactProvince"]));
    }
    if (m.find("ContactZipcode") != m.end() && !m["ContactZipcode"].empty()) {
      contactZipcode = make_shared<string>(boost::any_cast<string>(m["ContactZipcode"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("EAddress") != m.end() && !m["EAddress"].empty()) {
      EAddress = make_shared<string>(boost::any_cast<string>(m["EAddress"]));
    }
    if (m.find("EName") != m.end() && !m["EName"].empty()) {
      EName = make_shared<string>(boost::any_cast<string>(m["EName"]));
    }
    if (m.find("IdCardName") != m.end() && !m["IdCardName"].empty()) {
      idCardName = make_shared<string>(boost::any_cast<string>(m["IdCardName"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("IdCardUrl") != m.end() && !m["IdCardUrl"].empty()) {
      idCardUrl = make_shared<string>(boost::any_cast<string>(m["IdCardUrl"]));
    }
    if (m.find("LegalNoticeUrl") != m.end() && !m["LegalNoticeUrl"].empty()) {
      legalNoticeUrl = make_shared<string>(boost::any_cast<string>(m["LegalNoticeUrl"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("PassportUrl") != m.end() && !m["PassportUrl"].empty()) {
      passportUrl = make_shared<string>(boost::any_cast<string>(m["PassportUrl"]));
    }
    if (m.find("PersonalType") != m.end() && !m["PersonalType"].empty()) {
      personalType = make_shared<long>(boost::any_cast<long>(m["PersonalType"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ValidDate") != m.end() && !m["ValidDate"].empty()) {
      validDate = make_shared<long>(boost::any_cast<long>(m["ValidDate"]));
    }
  }


  virtual ~DescribeApplicantResponseBody() = default;
};
class DescribeApplicantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApplicantResponseBody> body{};

  DescribeApplicantResponse() {}

  explicit DescribeApplicantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeApplicantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApplicantResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApplicantResponse() = default;
};
class DescribePartnerTrademarkApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};

  DescribePartnerTrademarkApplicationRequest() {}

  explicit DescribePartnerTrademarkApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribePartnerTrademarkApplicationRequest() = default;
};
class DescribePartnerTrademarkApplicationResponseBodyApplicant : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> applicantName{};
  shared_ptr<long> applicantRegion{};
  shared_ptr<long> applicantType{};
  shared_ptr<long> auditStatus{};
  shared_ptr<string> authorizationUrl{};
  shared_ptr<string> businessLicenceUrl{};
  shared_ptr<string> cardNumber{};
  shared_ptr<string> contactAddress{};
  shared_ptr<string> contactEmail{};
  shared_ptr<string> contactName{};
  shared_ptr<string> contactNumber{};
  shared_ptr<string> contactZipcode{};
  shared_ptr<string> country{};
  shared_ptr<string> EAddress{};
  shared_ptr<string> EName{};
  shared_ptr<string> idCardUrl{};
  shared_ptr<string> legalNoticeUrl{};
  shared_ptr<string> passportUrl{};
  shared_ptr<long> principalName{};
  shared_ptr<string> province{};

  DescribePartnerTrademarkApplicationResponseBodyApplicant() {}

  explicit DescribePartnerTrademarkApplicationResponseBodyApplicant(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (applicantName) {
      res["ApplicantName"] = boost::any(*applicantName);
    }
    if (applicantRegion) {
      res["ApplicantRegion"] = boost::any(*applicantRegion);
    }
    if (applicantType) {
      res["ApplicantType"] = boost::any(*applicantType);
    }
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (authorizationUrl) {
      res["AuthorizationUrl"] = boost::any(*authorizationUrl);
    }
    if (businessLicenceUrl) {
      res["BusinessLicenceUrl"] = boost::any(*businessLicenceUrl);
    }
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (contactAddress) {
      res["ContactAddress"] = boost::any(*contactAddress);
    }
    if (contactEmail) {
      res["ContactEmail"] = boost::any(*contactEmail);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (contactNumber) {
      res["ContactNumber"] = boost::any(*contactNumber);
    }
    if (contactZipcode) {
      res["ContactZipcode"] = boost::any(*contactZipcode);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (EAddress) {
      res["EAddress"] = boost::any(*EAddress);
    }
    if (EName) {
      res["EName"] = boost::any(*EName);
    }
    if (idCardUrl) {
      res["IdCardUrl"] = boost::any(*idCardUrl);
    }
    if (legalNoticeUrl) {
      res["LegalNoticeUrl"] = boost::any(*legalNoticeUrl);
    }
    if (passportUrl) {
      res["PassportUrl"] = boost::any(*passportUrl);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("ApplicantName") != m.end() && !m["ApplicantName"].empty()) {
      applicantName = make_shared<string>(boost::any_cast<string>(m["ApplicantName"]));
    }
    if (m.find("ApplicantRegion") != m.end() && !m["ApplicantRegion"].empty()) {
      applicantRegion = make_shared<long>(boost::any_cast<long>(m["ApplicantRegion"]));
    }
    if (m.find("ApplicantType") != m.end() && !m["ApplicantType"].empty()) {
      applicantType = make_shared<long>(boost::any_cast<long>(m["ApplicantType"]));
    }
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("AuthorizationUrl") != m.end() && !m["AuthorizationUrl"].empty()) {
      authorizationUrl = make_shared<string>(boost::any_cast<string>(m["AuthorizationUrl"]));
    }
    if (m.find("BusinessLicenceUrl") != m.end() && !m["BusinessLicenceUrl"].empty()) {
      businessLicenceUrl = make_shared<string>(boost::any_cast<string>(m["BusinessLicenceUrl"]));
    }
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("ContactAddress") != m.end() && !m["ContactAddress"].empty()) {
      contactAddress = make_shared<string>(boost::any_cast<string>(m["ContactAddress"]));
    }
    if (m.find("ContactEmail") != m.end() && !m["ContactEmail"].empty()) {
      contactEmail = make_shared<string>(boost::any_cast<string>(m["ContactEmail"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("ContactNumber") != m.end() && !m["ContactNumber"].empty()) {
      contactNumber = make_shared<string>(boost::any_cast<string>(m["ContactNumber"]));
    }
    if (m.find("ContactZipcode") != m.end() && !m["ContactZipcode"].empty()) {
      contactZipcode = make_shared<string>(boost::any_cast<string>(m["ContactZipcode"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("EAddress") != m.end() && !m["EAddress"].empty()) {
      EAddress = make_shared<string>(boost::any_cast<string>(m["EAddress"]));
    }
    if (m.find("EName") != m.end() && !m["EName"].empty()) {
      EName = make_shared<string>(boost::any_cast<string>(m["EName"]));
    }
    if (m.find("IdCardUrl") != m.end() && !m["IdCardUrl"].empty()) {
      idCardUrl = make_shared<string>(boost::any_cast<string>(m["IdCardUrl"]));
    }
    if (m.find("LegalNoticeUrl") != m.end() && !m["LegalNoticeUrl"].empty()) {
      legalNoticeUrl = make_shared<string>(boost::any_cast<string>(m["LegalNoticeUrl"]));
    }
    if (m.find("PassportUrl") != m.end() && !m["PassportUrl"].empty()) {
      passportUrl = make_shared<string>(boost::any_cast<string>(m["PassportUrl"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
  }


  virtual ~DescribePartnerTrademarkApplicationResponseBodyApplicant() = default;
};
class DescribePartnerTrademarkApplicationResponseBodyFirstClassification : public Darabonba::Model {
public:
  shared_ptr<string> classificationCode{};
  shared_ptr<string> classificationName{};

  DescribePartnerTrademarkApplicationResponseBodyFirstClassification() {}

  explicit DescribePartnerTrademarkApplicationResponseBodyFirstClassification(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classificationCode) {
      res["ClassificationCode"] = boost::any(*classificationCode);
    }
    if (classificationName) {
      res["ClassificationName"] = boost::any(*classificationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassificationCode") != m.end() && !m["ClassificationCode"].empty()) {
      classificationCode = make_shared<string>(boost::any_cast<string>(m["ClassificationCode"]));
    }
    if (m.find("ClassificationName") != m.end() && !m["ClassificationName"].empty()) {
      classificationName = make_shared<string>(boost::any_cast<string>(m["ClassificationName"]));
    }
  }


  virtual ~DescribePartnerTrademarkApplicationResponseBodyFirstClassification() = default;
};
class DescribePartnerTrademarkApplicationResponseBodySupplements : public Darabonba::Model {
public:
  shared_ptr<long> acceptExpirationDate{};
  shared_ptr<long> acceptTime{};
  shared_ptr<long> applicationType{};
  shared_ptr<string> content{};
  shared_ptr<string> officialFile{};
  shared_ptr<long> operateTime{};
  shared_ptr<string> orderId{};
  shared_ptr<long> sbjExpirationDate{};
  shared_ptr<long> sendTime{};
  shared_ptr<string> serialNumber{};
  shared_ptr<long> supplementId{};
  shared_ptr<long> supplementStatus{};
  shared_ptr<string> trademarkNumber{};
  shared_ptr<vector<string>> userFiles{};

  DescribePartnerTrademarkApplicationResponseBodySupplements() {}

  explicit DescribePartnerTrademarkApplicationResponseBodySupplements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptExpirationDate) {
      res["AcceptExpirationDate"] = boost::any(*acceptExpirationDate);
    }
    if (acceptTime) {
      res["AcceptTime"] = boost::any(*acceptTime);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (officialFile) {
      res["OfficialFile"] = boost::any(*officialFile);
    }
    if (operateTime) {
      res["OperateTime"] = boost::any(*operateTime);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (sbjExpirationDate) {
      res["SbjExpirationDate"] = boost::any(*sbjExpirationDate);
    }
    if (sendTime) {
      res["SendTime"] = boost::any(*sendTime);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (supplementId) {
      res["SupplementId"] = boost::any(*supplementId);
    }
    if (supplementStatus) {
      res["SupplementStatus"] = boost::any(*supplementStatus);
    }
    if (trademarkNumber) {
      res["TrademarkNumber"] = boost::any(*trademarkNumber);
    }
    if (userFiles) {
      res["UserFiles"] = boost::any(*userFiles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptExpirationDate") != m.end() && !m["AcceptExpirationDate"].empty()) {
      acceptExpirationDate = make_shared<long>(boost::any_cast<long>(m["AcceptExpirationDate"]));
    }
    if (m.find("AcceptTime") != m.end() && !m["AcceptTime"].empty()) {
      acceptTime = make_shared<long>(boost::any_cast<long>(m["AcceptTime"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<long>(boost::any_cast<long>(m["ApplicationType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("OfficialFile") != m.end() && !m["OfficialFile"].empty()) {
      officialFile = make_shared<string>(boost::any_cast<string>(m["OfficialFile"]));
    }
    if (m.find("OperateTime") != m.end() && !m["OperateTime"].empty()) {
      operateTime = make_shared<long>(boost::any_cast<long>(m["OperateTime"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("SbjExpirationDate") != m.end() && !m["SbjExpirationDate"].empty()) {
      sbjExpirationDate = make_shared<long>(boost::any_cast<long>(m["SbjExpirationDate"]));
    }
    if (m.find("SendTime") != m.end() && !m["SendTime"].empty()) {
      sendTime = make_shared<long>(boost::any_cast<long>(m["SendTime"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("SupplementId") != m.end() && !m["SupplementId"].empty()) {
      supplementId = make_shared<long>(boost::any_cast<long>(m["SupplementId"]));
    }
    if (m.find("SupplementStatus") != m.end() && !m["SupplementStatus"].empty()) {
      supplementStatus = make_shared<long>(boost::any_cast<long>(m["SupplementStatus"]));
    }
    if (m.find("TrademarkNumber") != m.end() && !m["TrademarkNumber"].empty()) {
      trademarkNumber = make_shared<string>(boost::any_cast<string>(m["TrademarkNumber"]));
    }
    if (m.find("UserFiles") != m.end() && !m["UserFiles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserFiles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserFiles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userFiles = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribePartnerTrademarkApplicationResponseBodySupplements() = default;
};
class DescribePartnerTrademarkApplicationResponseBodyThirdClassifications : public Darabonba::Model {
public:
  shared_ptr<string> classificationCode{};
  shared_ptr<string> classificationName{};

  DescribePartnerTrademarkApplicationResponseBodyThirdClassifications() {}

  explicit DescribePartnerTrademarkApplicationResponseBodyThirdClassifications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classificationCode) {
      res["ClassificationCode"] = boost::any(*classificationCode);
    }
    if (classificationName) {
      res["ClassificationName"] = boost::any(*classificationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassificationCode") != m.end() && !m["ClassificationCode"].empty()) {
      classificationCode = make_shared<string>(boost::any_cast<string>(m["ClassificationCode"]));
    }
    if (m.find("ClassificationName") != m.end() && !m["ClassificationName"].empty()) {
      classificationName = make_shared<string>(boost::any_cast<string>(m["ClassificationName"]));
    }
  }


  virtual ~DescribePartnerTrademarkApplicationResponseBodyThirdClassifications() = default;
};
class DescribePartnerTrademarkApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> acceptUrl{};
  shared_ptr<DescribePartnerTrademarkApplicationResponseBodyApplicant> applicant{};
  shared_ptr<long> applicantId{};
  shared_ptr<long> applicationStatus{};
  shared_ptr<long> applicationType{};
  shared_ptr<string> authorizationUrl{};
  shared_ptr<string> bizId{};
  shared_ptr<string> blackAndWhiteIconUrl{};
  shared_ptr<long> createTime{};
  shared_ptr<map<string, boost::any>> extendInfo{};
  shared_ptr<DescribePartnerTrademarkApplicationResponseBodyFirstClassification> firstClassification{};
  shared_ptr<vector<string>> judgeResultUrls{};
  shared_ptr<string> note{};
  shared_ptr<string> orderId{};
  shared_ptr<double> orderPrice{};
  shared_ptr<long> principalName{};
  shared_ptr<vector<string>> receiptUrls{};
  shared_ptr<string> recvUserLogistics{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sendSbjLogistics{};
  shared_ptr<string> sendUserLogistics{};
  shared_ptr<double> servicePrice{};
  shared_ptr<vector<DescribePartnerTrademarkApplicationResponseBodySupplements>> supplements{};
  shared_ptr<vector<DescribePartnerTrademarkApplicationResponseBodyThirdClassifications>> thirdClassifications{};
  shared_ptr<double> totalPrice{};
  shared_ptr<string> trademarkIcon{};
  shared_ptr<string> trademarkName{};
  shared_ptr<long> trademarkNameType{};
  shared_ptr<string> trademarkNumber{};
  shared_ptr<long> updateTime{};

  DescribePartnerTrademarkApplicationResponseBody() {}

  explicit DescribePartnerTrademarkApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptUrl) {
      res["AcceptUrl"] = boost::any(*acceptUrl);
    }
    if (applicant) {
      res["Applicant"] = applicant ? boost::any(applicant->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    if (applicationStatus) {
      res["ApplicationStatus"] = boost::any(*applicationStatus);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (authorizationUrl) {
      res["AuthorizationUrl"] = boost::any(*authorizationUrl);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (blackAndWhiteIconUrl) {
      res["BlackAndWhiteIconUrl"] = boost::any(*blackAndWhiteIconUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (firstClassification) {
      res["FirstClassification"] = firstClassification ? boost::any(firstClassification->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (judgeResultUrls) {
      res["JudgeResultUrls"] = boost::any(*judgeResultUrls);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderPrice) {
      res["OrderPrice"] = boost::any(*orderPrice);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (receiptUrls) {
      res["ReceiptUrls"] = boost::any(*receiptUrls);
    }
    if (recvUserLogistics) {
      res["RecvUserLogistics"] = boost::any(*recvUserLogistics);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sendSbjLogistics) {
      res["SendSbjLogistics"] = boost::any(*sendSbjLogistics);
    }
    if (sendUserLogistics) {
      res["SendUserLogistics"] = boost::any(*sendUserLogistics);
    }
    if (servicePrice) {
      res["ServicePrice"] = boost::any(*servicePrice);
    }
    if (supplements) {
      vector<boost::any> temp1;
      for(auto item1:*supplements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Supplements"] = boost::any(temp1);
    }
    if (thirdClassifications) {
      vector<boost::any> temp1;
      for(auto item1:*thirdClassifications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ThirdClassifications"] = boost::any(temp1);
    }
    if (totalPrice) {
      res["TotalPrice"] = boost::any(*totalPrice);
    }
    if (trademarkIcon) {
      res["TrademarkIcon"] = boost::any(*trademarkIcon);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    if (trademarkNameType) {
      res["TrademarkNameType"] = boost::any(*trademarkNameType);
    }
    if (trademarkNumber) {
      res["TrademarkNumber"] = boost::any(*trademarkNumber);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptUrl") != m.end() && !m["AcceptUrl"].empty()) {
      acceptUrl = make_shared<string>(boost::any_cast<string>(m["AcceptUrl"]));
    }
    if (m.find("Applicant") != m.end() && !m["Applicant"].empty()) {
      if (typeid(map<string, boost::any>) == m["Applicant"].type()) {
        DescribePartnerTrademarkApplicationResponseBodyApplicant model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Applicant"]));
        applicant = make_shared<DescribePartnerTrademarkApplicationResponseBodyApplicant>(model1);
      }
    }
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<long>(boost::any_cast<long>(m["ApplicantId"]));
    }
    if (m.find("ApplicationStatus") != m.end() && !m["ApplicationStatus"].empty()) {
      applicationStatus = make_shared<long>(boost::any_cast<long>(m["ApplicationStatus"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<long>(boost::any_cast<long>(m["ApplicationType"]));
    }
    if (m.find("AuthorizationUrl") != m.end() && !m["AuthorizationUrl"].empty()) {
      authorizationUrl = make_shared<string>(boost::any_cast<string>(m["AuthorizationUrl"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BlackAndWhiteIconUrl") != m.end() && !m["BlackAndWhiteIconUrl"].empty()) {
      blackAndWhiteIconUrl = make_shared<string>(boost::any_cast<string>(m["BlackAndWhiteIconUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtendInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FirstClassification") != m.end() && !m["FirstClassification"].empty()) {
      if (typeid(map<string, boost::any>) == m["FirstClassification"].type()) {
        DescribePartnerTrademarkApplicationResponseBodyFirstClassification model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FirstClassification"]));
        firstClassification = make_shared<DescribePartnerTrademarkApplicationResponseBodyFirstClassification>(model1);
      }
    }
    if (m.find("JudgeResultUrls") != m.end() && !m["JudgeResultUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["JudgeResultUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JudgeResultUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      judgeResultUrls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OrderPrice") != m.end() && !m["OrderPrice"].empty()) {
      orderPrice = make_shared<double>(boost::any_cast<double>(m["OrderPrice"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("ReceiptUrls") != m.end() && !m["ReceiptUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReceiptUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReceiptUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      receiptUrls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RecvUserLogistics") != m.end() && !m["RecvUserLogistics"].empty()) {
      recvUserLogistics = make_shared<string>(boost::any_cast<string>(m["RecvUserLogistics"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SendSbjLogistics") != m.end() && !m["SendSbjLogistics"].empty()) {
      sendSbjLogistics = make_shared<string>(boost::any_cast<string>(m["SendSbjLogistics"]));
    }
    if (m.find("SendUserLogistics") != m.end() && !m["SendUserLogistics"].empty()) {
      sendUserLogistics = make_shared<string>(boost::any_cast<string>(m["SendUserLogistics"]));
    }
    if (m.find("ServicePrice") != m.end() && !m["ServicePrice"].empty()) {
      servicePrice = make_shared<double>(boost::any_cast<double>(m["ServicePrice"]));
    }
    if (m.find("Supplements") != m.end() && !m["Supplements"].empty()) {
      if (typeid(vector<boost::any>) == m["Supplements"].type()) {
        vector<DescribePartnerTrademarkApplicationResponseBodySupplements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Supplements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePartnerTrademarkApplicationResponseBodySupplements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supplements = make_shared<vector<DescribePartnerTrademarkApplicationResponseBodySupplements>>(expect1);
      }
    }
    if (m.find("ThirdClassifications") != m.end() && !m["ThirdClassifications"].empty()) {
      if (typeid(vector<boost::any>) == m["ThirdClassifications"].type()) {
        vector<DescribePartnerTrademarkApplicationResponseBodyThirdClassifications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ThirdClassifications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePartnerTrademarkApplicationResponseBodyThirdClassifications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        thirdClassifications = make_shared<vector<DescribePartnerTrademarkApplicationResponseBodyThirdClassifications>>(expect1);
      }
    }
    if (m.find("TotalPrice") != m.end() && !m["TotalPrice"].empty()) {
      totalPrice = make_shared<double>(boost::any_cast<double>(m["TotalPrice"]));
    }
    if (m.find("TrademarkIcon") != m.end() && !m["TrademarkIcon"].empty()) {
      trademarkIcon = make_shared<string>(boost::any_cast<string>(m["TrademarkIcon"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
    if (m.find("TrademarkNameType") != m.end() && !m["TrademarkNameType"].empty()) {
      trademarkNameType = make_shared<long>(boost::any_cast<long>(m["TrademarkNameType"]));
    }
    if (m.find("TrademarkNumber") != m.end() && !m["TrademarkNumber"].empty()) {
      trademarkNumber = make_shared<string>(boost::any_cast<string>(m["TrademarkNumber"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~DescribePartnerTrademarkApplicationResponseBody() = default;
};
class DescribePartnerTrademarkApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePartnerTrademarkApplicationResponseBody> body{};

  DescribePartnerTrademarkApplicationResponse() {}

  explicit DescribePartnerTrademarkApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePartnerTrademarkApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePartnerTrademarkApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePartnerTrademarkApplicationResponse() = default;
};
class DescribeQualificationStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> tbUid{};

  DescribeQualificationStatusRequest() {}

  explicit DescribeQualificationStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tbUid) {
      res["TbUid"] = boost::any(*tbUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TbUid") != m.end() && !m["TbUid"].empty()) {
      tbUid = make_shared<string>(boost::any_cast<string>(m["TbUid"]));
    }
  }


  virtual ~DescribeQualificationStatusRequest() = default;
};
class DescribeQualificationStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  DescribeQualificationStatusResponseBody() {}

  explicit DescribeQualificationStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeQualificationStatusResponseBody() = default;
};
class DescribeQualificationStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeQualificationStatusResponseBody> body{};

  DescribeQualificationStatusResponse() {}

  explicit DescribeQualificationStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeQualificationStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeQualificationStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeQualificationStatusResponse() = default;
};
class DescribeSupplementRequest : public Darabonba::Model {
public:
  shared_ptr<long> supplementId{};

  DescribeSupplementRequest() {}

  explicit DescribeSupplementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supplementId) {
      res["SupplementId"] = boost::any(*supplementId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupplementId") != m.end() && !m["SupplementId"].empty()) {
      supplementId = make_shared<long>(boost::any_cast<long>(m["SupplementId"]));
    }
  }


  virtual ~DescribeSupplementRequest() = default;
};
class DescribeSupplementResponseBodyUserFiles : public Darabonba::Model {
public:
  shared_ptr<vector<string>> userFile{};

  DescribeSupplementResponseBodyUserFiles() {}

  explicit DescribeSupplementResponseBodyUserFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userFile) {
      res["UserFile"] = boost::any(*userFile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserFile") != m.end() && !m["UserFile"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserFile"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserFile"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userFile = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeSupplementResponseBodyUserFiles() = default;
};
class DescribeSupplementResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> acceptExpirationDate{};
  shared_ptr<long> acceptTime{};
  shared_ptr<long> applicationType{};
  shared_ptr<string> content{};
  shared_ptr<string> officialFile{};
  shared_ptr<long> operateTime{};
  shared_ptr<string> requestId{};
  shared_ptr<long> sbjExpirationDate{};
  shared_ptr<long> sendTime{};
  shared_ptr<string> serialNumber{};
  shared_ptr<long> supplementId{};
  shared_ptr<long> supplementStatus{};
  shared_ptr<string> trademarkNumber{};
  shared_ptr<DescribeSupplementResponseBodyUserFiles> userFiles{};

  DescribeSupplementResponseBody() {}

  explicit DescribeSupplementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptExpirationDate) {
      res["AcceptExpirationDate"] = boost::any(*acceptExpirationDate);
    }
    if (acceptTime) {
      res["AcceptTime"] = boost::any(*acceptTime);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (officialFile) {
      res["OfficialFile"] = boost::any(*officialFile);
    }
    if (operateTime) {
      res["OperateTime"] = boost::any(*operateTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sbjExpirationDate) {
      res["SbjExpirationDate"] = boost::any(*sbjExpirationDate);
    }
    if (sendTime) {
      res["SendTime"] = boost::any(*sendTime);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (supplementId) {
      res["SupplementId"] = boost::any(*supplementId);
    }
    if (supplementStatus) {
      res["SupplementStatus"] = boost::any(*supplementStatus);
    }
    if (trademarkNumber) {
      res["TrademarkNumber"] = boost::any(*trademarkNumber);
    }
    if (userFiles) {
      res["UserFiles"] = userFiles ? boost::any(userFiles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptExpirationDate") != m.end() && !m["AcceptExpirationDate"].empty()) {
      acceptExpirationDate = make_shared<long>(boost::any_cast<long>(m["AcceptExpirationDate"]));
    }
    if (m.find("AcceptTime") != m.end() && !m["AcceptTime"].empty()) {
      acceptTime = make_shared<long>(boost::any_cast<long>(m["AcceptTime"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<long>(boost::any_cast<long>(m["ApplicationType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("OfficialFile") != m.end() && !m["OfficialFile"].empty()) {
      officialFile = make_shared<string>(boost::any_cast<string>(m["OfficialFile"]));
    }
    if (m.find("OperateTime") != m.end() && !m["OperateTime"].empty()) {
      operateTime = make_shared<long>(boost::any_cast<long>(m["OperateTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SbjExpirationDate") != m.end() && !m["SbjExpirationDate"].empty()) {
      sbjExpirationDate = make_shared<long>(boost::any_cast<long>(m["SbjExpirationDate"]));
    }
    if (m.find("SendTime") != m.end() && !m["SendTime"].empty()) {
      sendTime = make_shared<long>(boost::any_cast<long>(m["SendTime"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("SupplementId") != m.end() && !m["SupplementId"].empty()) {
      supplementId = make_shared<long>(boost::any_cast<long>(m["SupplementId"]));
    }
    if (m.find("SupplementStatus") != m.end() && !m["SupplementStatus"].empty()) {
      supplementStatus = make_shared<long>(boost::any_cast<long>(m["SupplementStatus"]));
    }
    if (m.find("TrademarkNumber") != m.end() && !m["TrademarkNumber"].empty()) {
      trademarkNumber = make_shared<string>(boost::any_cast<string>(m["TrademarkNumber"]));
    }
    if (m.find("UserFiles") != m.end() && !m["UserFiles"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserFiles"].type()) {
        DescribeSupplementResponseBodyUserFiles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserFiles"]));
        userFiles = make_shared<DescribeSupplementResponseBodyUserFiles>(model1);
      }
    }
  }


  virtual ~DescribeSupplementResponseBody() = default;
};
class DescribeSupplementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSupplementResponseBody> body{};

  DescribeSupplementResponse() {}

  explicit DescribeSupplementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSupplementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSupplementResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSupplementResponse() = default;
};
class DescribeTrademarkApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};

  DescribeTrademarkApplicationRequest() {}

  explicit DescribeTrademarkApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeTrademarkApplicationRequest() = default;
};
class DescribeTrademarkApplicationResponseBodyApplicant : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> applicantName{};
  shared_ptr<long> applicantRegion{};
  shared_ptr<long> applicantType{};
  shared_ptr<long> auditStatus{};
  shared_ptr<string> authorizationUrl{};
  shared_ptr<string> businessLicenceUrl{};
  shared_ptr<string> cardNumber{};
  shared_ptr<string> contactAddress{};
  shared_ptr<string> contactEmail{};
  shared_ptr<string> contactName{};
  shared_ptr<string> contactNumber{};
  shared_ptr<string> contactZipcode{};
  shared_ptr<string> country{};
  shared_ptr<string> EAddress{};
  shared_ptr<string> EName{};
  shared_ptr<string> idCardName{};
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> idCardUrl{};
  shared_ptr<string> legalNoticeUrl{};
  shared_ptr<string> passportUrl{};
  shared_ptr<long> personalType{};
  shared_ptr<long> principalName{};
  shared_ptr<string> province{};

  DescribeTrademarkApplicationResponseBodyApplicant() {}

  explicit DescribeTrademarkApplicationResponseBodyApplicant(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (applicantName) {
      res["ApplicantName"] = boost::any(*applicantName);
    }
    if (applicantRegion) {
      res["ApplicantRegion"] = boost::any(*applicantRegion);
    }
    if (applicantType) {
      res["ApplicantType"] = boost::any(*applicantType);
    }
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (authorizationUrl) {
      res["AuthorizationUrl"] = boost::any(*authorizationUrl);
    }
    if (businessLicenceUrl) {
      res["BusinessLicenceUrl"] = boost::any(*businessLicenceUrl);
    }
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (contactAddress) {
      res["ContactAddress"] = boost::any(*contactAddress);
    }
    if (contactEmail) {
      res["ContactEmail"] = boost::any(*contactEmail);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (contactNumber) {
      res["ContactNumber"] = boost::any(*contactNumber);
    }
    if (contactZipcode) {
      res["ContactZipcode"] = boost::any(*contactZipcode);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (EAddress) {
      res["EAddress"] = boost::any(*EAddress);
    }
    if (EName) {
      res["EName"] = boost::any(*EName);
    }
    if (idCardName) {
      res["IdCardName"] = boost::any(*idCardName);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (idCardUrl) {
      res["IdCardUrl"] = boost::any(*idCardUrl);
    }
    if (legalNoticeUrl) {
      res["LegalNoticeUrl"] = boost::any(*legalNoticeUrl);
    }
    if (passportUrl) {
      res["PassportUrl"] = boost::any(*passportUrl);
    }
    if (personalType) {
      res["PersonalType"] = boost::any(*personalType);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("ApplicantName") != m.end() && !m["ApplicantName"].empty()) {
      applicantName = make_shared<string>(boost::any_cast<string>(m["ApplicantName"]));
    }
    if (m.find("ApplicantRegion") != m.end() && !m["ApplicantRegion"].empty()) {
      applicantRegion = make_shared<long>(boost::any_cast<long>(m["ApplicantRegion"]));
    }
    if (m.find("ApplicantType") != m.end() && !m["ApplicantType"].empty()) {
      applicantType = make_shared<long>(boost::any_cast<long>(m["ApplicantType"]));
    }
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("AuthorizationUrl") != m.end() && !m["AuthorizationUrl"].empty()) {
      authorizationUrl = make_shared<string>(boost::any_cast<string>(m["AuthorizationUrl"]));
    }
    if (m.find("BusinessLicenceUrl") != m.end() && !m["BusinessLicenceUrl"].empty()) {
      businessLicenceUrl = make_shared<string>(boost::any_cast<string>(m["BusinessLicenceUrl"]));
    }
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("ContactAddress") != m.end() && !m["ContactAddress"].empty()) {
      contactAddress = make_shared<string>(boost::any_cast<string>(m["ContactAddress"]));
    }
    if (m.find("ContactEmail") != m.end() && !m["ContactEmail"].empty()) {
      contactEmail = make_shared<string>(boost::any_cast<string>(m["ContactEmail"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("ContactNumber") != m.end() && !m["ContactNumber"].empty()) {
      contactNumber = make_shared<string>(boost::any_cast<string>(m["ContactNumber"]));
    }
    if (m.find("ContactZipcode") != m.end() && !m["ContactZipcode"].empty()) {
      contactZipcode = make_shared<string>(boost::any_cast<string>(m["ContactZipcode"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("EAddress") != m.end() && !m["EAddress"].empty()) {
      EAddress = make_shared<string>(boost::any_cast<string>(m["EAddress"]));
    }
    if (m.find("EName") != m.end() && !m["EName"].empty()) {
      EName = make_shared<string>(boost::any_cast<string>(m["EName"]));
    }
    if (m.find("IdCardName") != m.end() && !m["IdCardName"].empty()) {
      idCardName = make_shared<string>(boost::any_cast<string>(m["IdCardName"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("IdCardUrl") != m.end() && !m["IdCardUrl"].empty()) {
      idCardUrl = make_shared<string>(boost::any_cast<string>(m["IdCardUrl"]));
    }
    if (m.find("LegalNoticeUrl") != m.end() && !m["LegalNoticeUrl"].empty()) {
      legalNoticeUrl = make_shared<string>(boost::any_cast<string>(m["LegalNoticeUrl"]));
    }
    if (m.find("PassportUrl") != m.end() && !m["PassportUrl"].empty()) {
      passportUrl = make_shared<string>(boost::any_cast<string>(m["PassportUrl"]));
    }
    if (m.find("PersonalType") != m.end() && !m["PersonalType"].empty()) {
      personalType = make_shared<long>(boost::any_cast<long>(m["PersonalType"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
  }


  virtual ~DescribeTrademarkApplicationResponseBodyApplicant() = default;
};
class DescribeTrademarkApplicationResponseBodyFirstClassification : public Darabonba::Model {
public:
  shared_ptr<string> classificationCode{};
  shared_ptr<string> classificationName{};

  DescribeTrademarkApplicationResponseBodyFirstClassification() {}

  explicit DescribeTrademarkApplicationResponseBodyFirstClassification(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classificationCode) {
      res["ClassificationCode"] = boost::any(*classificationCode);
    }
    if (classificationName) {
      res["ClassificationName"] = boost::any(*classificationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassificationCode") != m.end() && !m["ClassificationCode"].empty()) {
      classificationCode = make_shared<string>(boost::any_cast<string>(m["ClassificationCode"]));
    }
    if (m.find("ClassificationName") != m.end() && !m["ClassificationName"].empty()) {
      classificationName = make_shared<string>(boost::any_cast<string>(m["ClassificationName"]));
    }
  }


  virtual ~DescribeTrademarkApplicationResponseBodyFirstClassification() = default;
};
class DescribeTrademarkApplicationResponseBodyFlags : public Darabonba::Model {
public:
  shared_ptr<vector<long>> flag{};

  DescribeTrademarkApplicationResponseBodyFlags() {}

  explicit DescribeTrademarkApplicationResponseBodyFlags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flag) {
      res["Flag"] = boost::any(*flag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Flag") != m.end() && !m["Flag"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Flag"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Flag"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      flag = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~DescribeTrademarkApplicationResponseBodyFlags() = default;
};
class DescribeTrademarkApplicationResponseBodyJudgeResultUrls : public Darabonba::Model {
public:
  shared_ptr<vector<string>> judgeResultUrl{};

  DescribeTrademarkApplicationResponseBodyJudgeResultUrls() {}

  explicit DescribeTrademarkApplicationResponseBodyJudgeResultUrls(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (judgeResultUrl) {
      res["JudgeResultUrl"] = boost::any(*judgeResultUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JudgeResultUrl") != m.end() && !m["JudgeResultUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["JudgeResultUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JudgeResultUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      judgeResultUrl = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeTrademarkApplicationResponseBodyJudgeResultUrls() = default;
};
class DescribeTrademarkApplicationResponseBodyReceiptUrls : public Darabonba::Model {
public:
  shared_ptr<vector<string>> receiptUrl{};

  DescribeTrademarkApplicationResponseBodyReceiptUrls() {}

  explicit DescribeTrademarkApplicationResponseBodyReceiptUrls(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (receiptUrl) {
      res["ReceiptUrl"] = boost::any(*receiptUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReceiptUrl") != m.end() && !m["ReceiptUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReceiptUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReceiptUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      receiptUrl = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeTrademarkApplicationResponseBodyReceiptUrls() = default;
};
class DescribeTrademarkApplicationResponseBodySupplementsSupplementUserFiles : public Darabonba::Model {
public:
  shared_ptr<vector<string>> userFile{};

  DescribeTrademarkApplicationResponseBodySupplementsSupplementUserFiles() {}

  explicit DescribeTrademarkApplicationResponseBodySupplementsSupplementUserFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userFile) {
      res["UserFile"] = boost::any(*userFile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserFile") != m.end() && !m["UserFile"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserFile"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserFile"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userFile = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeTrademarkApplicationResponseBodySupplementsSupplementUserFiles() = default;
};
class DescribeTrademarkApplicationResponseBodySupplementsSupplement : public Darabonba::Model {
public:
  shared_ptr<long> acceptExpirationDate{};
  shared_ptr<long> acceptTime{};
  shared_ptr<long> applicationType{};
  shared_ptr<string> content{};
  shared_ptr<string> officialFile{};
  shared_ptr<long> operateTime{};
  shared_ptr<string> orderId{};
  shared_ptr<long> sbjExpirationDate{};
  shared_ptr<long> sendTime{};
  shared_ptr<string> serialNumber{};
  shared_ptr<long> supplementId{};
  shared_ptr<long> supplementStatus{};
  shared_ptr<string> trademarkNumber{};
  shared_ptr<DescribeTrademarkApplicationResponseBodySupplementsSupplementUserFiles> userFiles{};

  DescribeTrademarkApplicationResponseBodySupplementsSupplement() {}

  explicit DescribeTrademarkApplicationResponseBodySupplementsSupplement(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptExpirationDate) {
      res["AcceptExpirationDate"] = boost::any(*acceptExpirationDate);
    }
    if (acceptTime) {
      res["AcceptTime"] = boost::any(*acceptTime);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (officialFile) {
      res["OfficialFile"] = boost::any(*officialFile);
    }
    if (operateTime) {
      res["OperateTime"] = boost::any(*operateTime);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (sbjExpirationDate) {
      res["SbjExpirationDate"] = boost::any(*sbjExpirationDate);
    }
    if (sendTime) {
      res["SendTime"] = boost::any(*sendTime);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (supplementId) {
      res["SupplementId"] = boost::any(*supplementId);
    }
    if (supplementStatus) {
      res["SupplementStatus"] = boost::any(*supplementStatus);
    }
    if (trademarkNumber) {
      res["TrademarkNumber"] = boost::any(*trademarkNumber);
    }
    if (userFiles) {
      res["UserFiles"] = userFiles ? boost::any(userFiles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptExpirationDate") != m.end() && !m["AcceptExpirationDate"].empty()) {
      acceptExpirationDate = make_shared<long>(boost::any_cast<long>(m["AcceptExpirationDate"]));
    }
    if (m.find("AcceptTime") != m.end() && !m["AcceptTime"].empty()) {
      acceptTime = make_shared<long>(boost::any_cast<long>(m["AcceptTime"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<long>(boost::any_cast<long>(m["ApplicationType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("OfficialFile") != m.end() && !m["OfficialFile"].empty()) {
      officialFile = make_shared<string>(boost::any_cast<string>(m["OfficialFile"]));
    }
    if (m.find("OperateTime") != m.end() && !m["OperateTime"].empty()) {
      operateTime = make_shared<long>(boost::any_cast<long>(m["OperateTime"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("SbjExpirationDate") != m.end() && !m["SbjExpirationDate"].empty()) {
      sbjExpirationDate = make_shared<long>(boost::any_cast<long>(m["SbjExpirationDate"]));
    }
    if (m.find("SendTime") != m.end() && !m["SendTime"].empty()) {
      sendTime = make_shared<long>(boost::any_cast<long>(m["SendTime"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("SupplementId") != m.end() && !m["SupplementId"].empty()) {
      supplementId = make_shared<long>(boost::any_cast<long>(m["SupplementId"]));
    }
    if (m.find("SupplementStatus") != m.end() && !m["SupplementStatus"].empty()) {
      supplementStatus = make_shared<long>(boost::any_cast<long>(m["SupplementStatus"]));
    }
    if (m.find("TrademarkNumber") != m.end() && !m["TrademarkNumber"].empty()) {
      trademarkNumber = make_shared<string>(boost::any_cast<string>(m["TrademarkNumber"]));
    }
    if (m.find("UserFiles") != m.end() && !m["UserFiles"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserFiles"].type()) {
        DescribeTrademarkApplicationResponseBodySupplementsSupplementUserFiles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserFiles"]));
        userFiles = make_shared<DescribeTrademarkApplicationResponseBodySupplementsSupplementUserFiles>(model1);
      }
    }
  }


  virtual ~DescribeTrademarkApplicationResponseBodySupplementsSupplement() = default;
};
class DescribeTrademarkApplicationResponseBodySupplements : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTrademarkApplicationResponseBodySupplementsSupplement>> supplement{};

  DescribeTrademarkApplicationResponseBodySupplements() {}

  explicit DescribeTrademarkApplicationResponseBodySupplements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supplement) {
      vector<boost::any> temp1;
      for(auto item1:*supplement){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Supplement"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Supplement") != m.end() && !m["Supplement"].empty()) {
      if (typeid(vector<boost::any>) == m["Supplement"].type()) {
        vector<DescribeTrademarkApplicationResponseBodySupplementsSupplement> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Supplement"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrademarkApplicationResponseBodySupplementsSupplement model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supplement = make_shared<vector<DescribeTrademarkApplicationResponseBodySupplementsSupplement>>(expect1);
      }
    }
  }


  virtual ~DescribeTrademarkApplicationResponseBodySupplements() = default;
};
class DescribeTrademarkApplicationResponseBodyThirdClassificationsThirdClassification : public Darabonba::Model {
public:
  shared_ptr<string> classificationCode{};
  shared_ptr<string> classificationName{};

  DescribeTrademarkApplicationResponseBodyThirdClassificationsThirdClassification() {}

  explicit DescribeTrademarkApplicationResponseBodyThirdClassificationsThirdClassification(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classificationCode) {
      res["ClassificationCode"] = boost::any(*classificationCode);
    }
    if (classificationName) {
      res["ClassificationName"] = boost::any(*classificationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassificationCode") != m.end() && !m["ClassificationCode"].empty()) {
      classificationCode = make_shared<string>(boost::any_cast<string>(m["ClassificationCode"]));
    }
    if (m.find("ClassificationName") != m.end() && !m["ClassificationName"].empty()) {
      classificationName = make_shared<string>(boost::any_cast<string>(m["ClassificationName"]));
    }
  }


  virtual ~DescribeTrademarkApplicationResponseBodyThirdClassificationsThirdClassification() = default;
};
class DescribeTrademarkApplicationResponseBodyThirdClassifications : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTrademarkApplicationResponseBodyThirdClassificationsThirdClassification>> thirdClassification{};

  DescribeTrademarkApplicationResponseBodyThirdClassifications() {}

  explicit DescribeTrademarkApplicationResponseBodyThirdClassifications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (thirdClassification) {
      vector<boost::any> temp1;
      for(auto item1:*thirdClassification){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ThirdClassification"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ThirdClassification") != m.end() && !m["ThirdClassification"].empty()) {
      if (typeid(vector<boost::any>) == m["ThirdClassification"].type()) {
        vector<DescribeTrademarkApplicationResponseBodyThirdClassificationsThirdClassification> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ThirdClassification"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrademarkApplicationResponseBodyThirdClassificationsThirdClassification model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        thirdClassification = make_shared<vector<DescribeTrademarkApplicationResponseBodyThirdClassificationsThirdClassification>>(expect1);
      }
    }
  }


  virtual ~DescribeTrademarkApplicationResponseBodyThirdClassifications() = default;
};
class DescribeTrademarkApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> acceptUrl{};
  shared_ptr<string> agreementId{};
  shared_ptr<DescribeTrademarkApplicationResponseBodyApplicant> applicant{};
  shared_ptr<long> applicantId{};
  shared_ptr<long> applicationStatus{};
  shared_ptr<long> applicationType{};
  shared_ptr<string> authorizationUrl{};
  shared_ptr<string> bizId{};
  shared_ptr<string> blackAndWhiteIconUrl{};
  shared_ptr<long> createTime{};
  shared_ptr<map<string, boost::any>> extendInfo{};
  shared_ptr<DescribeTrademarkApplicationResponseBodyFirstClassification> firstClassification{};
  shared_ptr<DescribeTrademarkApplicationResponseBodyFlags> flags{};
  shared_ptr<DescribeTrademarkApplicationResponseBodyJudgeResultUrls> judgeResultUrls{};
  shared_ptr<string> note{};
  shared_ptr<string> orderId{};
  shared_ptr<double> orderPrice{};
  shared_ptr<long> principalName{};
  shared_ptr<DescribeTrademarkApplicationResponseBodyReceiptUrls> receiptUrls{};
  shared_ptr<string> recvUserLogistics{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sendSbjLogistics{};
  shared_ptr<string> sendUserLogistics{};
  shared_ptr<double> servicePrice{};
  shared_ptr<DescribeTrademarkApplicationResponseBodySupplements> supplements{};
  shared_ptr<DescribeTrademarkApplicationResponseBodyThirdClassifications> thirdClassifications{};
  shared_ptr<double> totalPrice{};
  shared_ptr<string> trademarkIcon{};
  shared_ptr<string> trademarkName{};
  shared_ptr<long> trademarkNameType{};
  shared_ptr<string> trademarkNumber{};
  shared_ptr<long> updateTime{};

  DescribeTrademarkApplicationResponseBody() {}

  explicit DescribeTrademarkApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptUrl) {
      res["AcceptUrl"] = boost::any(*acceptUrl);
    }
    if (agreementId) {
      res["AgreementId"] = boost::any(*agreementId);
    }
    if (applicant) {
      res["Applicant"] = applicant ? boost::any(applicant->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    if (applicationStatus) {
      res["ApplicationStatus"] = boost::any(*applicationStatus);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (authorizationUrl) {
      res["AuthorizationUrl"] = boost::any(*authorizationUrl);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (blackAndWhiteIconUrl) {
      res["BlackAndWhiteIconUrl"] = boost::any(*blackAndWhiteIconUrl);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (firstClassification) {
      res["FirstClassification"] = firstClassification ? boost::any(firstClassification->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (flags) {
      res["Flags"] = flags ? boost::any(flags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (judgeResultUrls) {
      res["JudgeResultUrls"] = judgeResultUrls ? boost::any(judgeResultUrls->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderPrice) {
      res["OrderPrice"] = boost::any(*orderPrice);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (receiptUrls) {
      res["ReceiptUrls"] = receiptUrls ? boost::any(receiptUrls->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (recvUserLogistics) {
      res["RecvUserLogistics"] = boost::any(*recvUserLogistics);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sendSbjLogistics) {
      res["SendSbjLogistics"] = boost::any(*sendSbjLogistics);
    }
    if (sendUserLogistics) {
      res["SendUserLogistics"] = boost::any(*sendUserLogistics);
    }
    if (servicePrice) {
      res["ServicePrice"] = boost::any(*servicePrice);
    }
    if (supplements) {
      res["Supplements"] = supplements ? boost::any(supplements->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (thirdClassifications) {
      res["ThirdClassifications"] = thirdClassifications ? boost::any(thirdClassifications->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalPrice) {
      res["TotalPrice"] = boost::any(*totalPrice);
    }
    if (trademarkIcon) {
      res["TrademarkIcon"] = boost::any(*trademarkIcon);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    if (trademarkNameType) {
      res["TrademarkNameType"] = boost::any(*trademarkNameType);
    }
    if (trademarkNumber) {
      res["TrademarkNumber"] = boost::any(*trademarkNumber);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptUrl") != m.end() && !m["AcceptUrl"].empty()) {
      acceptUrl = make_shared<string>(boost::any_cast<string>(m["AcceptUrl"]));
    }
    if (m.find("AgreementId") != m.end() && !m["AgreementId"].empty()) {
      agreementId = make_shared<string>(boost::any_cast<string>(m["AgreementId"]));
    }
    if (m.find("Applicant") != m.end() && !m["Applicant"].empty()) {
      if (typeid(map<string, boost::any>) == m["Applicant"].type()) {
        DescribeTrademarkApplicationResponseBodyApplicant model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Applicant"]));
        applicant = make_shared<DescribeTrademarkApplicationResponseBodyApplicant>(model1);
      }
    }
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<long>(boost::any_cast<long>(m["ApplicantId"]));
    }
    if (m.find("ApplicationStatus") != m.end() && !m["ApplicationStatus"].empty()) {
      applicationStatus = make_shared<long>(boost::any_cast<long>(m["ApplicationStatus"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<long>(boost::any_cast<long>(m["ApplicationType"]));
    }
    if (m.find("AuthorizationUrl") != m.end() && !m["AuthorizationUrl"].empty()) {
      authorizationUrl = make_shared<string>(boost::any_cast<string>(m["AuthorizationUrl"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BlackAndWhiteIconUrl") != m.end() && !m["BlackAndWhiteIconUrl"].empty()) {
      blackAndWhiteIconUrl = make_shared<string>(boost::any_cast<string>(m["BlackAndWhiteIconUrl"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtendInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("FirstClassification") != m.end() && !m["FirstClassification"].empty()) {
      if (typeid(map<string, boost::any>) == m["FirstClassification"].type()) {
        DescribeTrademarkApplicationResponseBodyFirstClassification model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FirstClassification"]));
        firstClassification = make_shared<DescribeTrademarkApplicationResponseBodyFirstClassification>(model1);
      }
    }
    if (m.find("Flags") != m.end() && !m["Flags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Flags"].type()) {
        DescribeTrademarkApplicationResponseBodyFlags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Flags"]));
        flags = make_shared<DescribeTrademarkApplicationResponseBodyFlags>(model1);
      }
    }
    if (m.find("JudgeResultUrls") != m.end() && !m["JudgeResultUrls"].empty()) {
      if (typeid(map<string, boost::any>) == m["JudgeResultUrls"].type()) {
        DescribeTrademarkApplicationResponseBodyJudgeResultUrls model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JudgeResultUrls"]));
        judgeResultUrls = make_shared<DescribeTrademarkApplicationResponseBodyJudgeResultUrls>(model1);
      }
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OrderPrice") != m.end() && !m["OrderPrice"].empty()) {
      orderPrice = make_shared<double>(boost::any_cast<double>(m["OrderPrice"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("ReceiptUrls") != m.end() && !m["ReceiptUrls"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReceiptUrls"].type()) {
        DescribeTrademarkApplicationResponseBodyReceiptUrls model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReceiptUrls"]));
        receiptUrls = make_shared<DescribeTrademarkApplicationResponseBodyReceiptUrls>(model1);
      }
    }
    if (m.find("RecvUserLogistics") != m.end() && !m["RecvUserLogistics"].empty()) {
      recvUserLogistics = make_shared<string>(boost::any_cast<string>(m["RecvUserLogistics"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SendSbjLogistics") != m.end() && !m["SendSbjLogistics"].empty()) {
      sendSbjLogistics = make_shared<string>(boost::any_cast<string>(m["SendSbjLogistics"]));
    }
    if (m.find("SendUserLogistics") != m.end() && !m["SendUserLogistics"].empty()) {
      sendUserLogistics = make_shared<string>(boost::any_cast<string>(m["SendUserLogistics"]));
    }
    if (m.find("ServicePrice") != m.end() && !m["ServicePrice"].empty()) {
      servicePrice = make_shared<double>(boost::any_cast<double>(m["ServicePrice"]));
    }
    if (m.find("Supplements") != m.end() && !m["Supplements"].empty()) {
      if (typeid(map<string, boost::any>) == m["Supplements"].type()) {
        DescribeTrademarkApplicationResponseBodySupplements model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Supplements"]));
        supplements = make_shared<DescribeTrademarkApplicationResponseBodySupplements>(model1);
      }
    }
    if (m.find("ThirdClassifications") != m.end() && !m["ThirdClassifications"].empty()) {
      if (typeid(map<string, boost::any>) == m["ThirdClassifications"].type()) {
        DescribeTrademarkApplicationResponseBodyThirdClassifications model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ThirdClassifications"]));
        thirdClassifications = make_shared<DescribeTrademarkApplicationResponseBodyThirdClassifications>(model1);
      }
    }
    if (m.find("TotalPrice") != m.end() && !m["TotalPrice"].empty()) {
      totalPrice = make_shared<double>(boost::any_cast<double>(m["TotalPrice"]));
    }
    if (m.find("TrademarkIcon") != m.end() && !m["TrademarkIcon"].empty()) {
      trademarkIcon = make_shared<string>(boost::any_cast<string>(m["TrademarkIcon"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
    if (m.find("TrademarkNameType") != m.end() && !m["TrademarkNameType"].empty()) {
      trademarkNameType = make_shared<long>(boost::any_cast<long>(m["TrademarkNameType"]));
    }
    if (m.find("TrademarkNumber") != m.end() && !m["TrademarkNumber"].empty()) {
      trademarkNumber = make_shared<string>(boost::any_cast<string>(m["TrademarkNumber"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeTrademarkApplicationResponseBody() = default;
};
class DescribeTrademarkApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTrademarkApplicationResponseBody> body{};

  DescribeTrademarkApplicationResponse() {}

  explicit DescribeTrademarkApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTrademarkApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTrademarkApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTrademarkApplicationResponse() = default;
};
class DescribeTrademarkDetailForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> uid{};
  shared_ptr<string> umid{};

  DescribeTrademarkDetailForInnerRequest() {}

  explicit DescribeTrademarkDetailForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (umid) {
      res["Umid"] = boost::any(*umid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("Umid") != m.end() && !m["Umid"].empty()) {
      umid = make_shared<string>(boost::any_cast<string>(m["Umid"]));
    }
  }


  virtual ~DescribeTrademarkDetailForInnerRequest() = default;
};
class DescribeTrademarkDetailForInnerResponseBodyFlowList : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<string> procedureCode{};
  shared_ptr<string> procedureDate{};
  shared_ptr<string> procedureName{};
  shared_ptr<string> procedureResult{};
  shared_ptr<string> procedureStep{};
  shared_ptr<string> registrationNumber{};

  DescribeTrademarkDetailForInnerResponseBodyFlowList() {}

  explicit DescribeTrademarkDetailForInnerResponseBodyFlowList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (procedureCode) {
      res["ProcedureCode"] = boost::any(*procedureCode);
    }
    if (procedureDate) {
      res["ProcedureDate"] = boost::any(*procedureDate);
    }
    if (procedureName) {
      res["ProcedureName"] = boost::any(*procedureName);
    }
    if (procedureResult) {
      res["ProcedureResult"] = boost::any(*procedureResult);
    }
    if (procedureStep) {
      res["ProcedureStep"] = boost::any(*procedureStep);
    }
    if (registrationNumber) {
      res["RegistrationNumber"] = boost::any(*registrationNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("ProcedureCode") != m.end() && !m["ProcedureCode"].empty()) {
      procedureCode = make_shared<string>(boost::any_cast<string>(m["ProcedureCode"]));
    }
    if (m.find("ProcedureDate") != m.end() && !m["ProcedureDate"].empty()) {
      procedureDate = make_shared<string>(boost::any_cast<string>(m["ProcedureDate"]));
    }
    if (m.find("ProcedureName") != m.end() && !m["ProcedureName"].empty()) {
      procedureName = make_shared<string>(boost::any_cast<string>(m["ProcedureName"]));
    }
    if (m.find("ProcedureResult") != m.end() && !m["ProcedureResult"].empty()) {
      procedureResult = make_shared<string>(boost::any_cast<string>(m["ProcedureResult"]));
    }
    if (m.find("ProcedureStep") != m.end() && !m["ProcedureStep"].empty()) {
      procedureStep = make_shared<string>(boost::any_cast<string>(m["ProcedureStep"]));
    }
    if (m.find("RegistrationNumber") != m.end() && !m["RegistrationNumber"].empty()) {
      registrationNumber = make_shared<string>(boost::any_cast<string>(m["RegistrationNumber"]));
    }
  }


  virtual ~DescribeTrademarkDetailForInnerResponseBodyFlowList() = default;
};
class DescribeTrademarkDetailForInnerResponseBodyNoticeList : public Darabonba::Model {
public:
  shared_ptr<string> annDate{};
  shared_ptr<string> annId{};
  shared_ptr<string> annNum{};
  shared_ptr<string> annTypeCode{};
  shared_ptr<string> annTypeName{};
  shared_ptr<string> applicant{};
  shared_ptr<string> date{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> originalImageUrl{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> reactNum{};
  shared_ptr<string> registrationNumber{};
  shared_ptr<string> trademarkName{};

  DescribeTrademarkDetailForInnerResponseBodyNoticeList() {}

  explicit DescribeTrademarkDetailForInnerResponseBodyNoticeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (annDate) {
      res["AnnDate"] = boost::any(*annDate);
    }
    if (annId) {
      res["AnnId"] = boost::any(*annId);
    }
    if (annNum) {
      res["AnnNum"] = boost::any(*annNum);
    }
    if (annTypeCode) {
      res["AnnTypeCode"] = boost::any(*annTypeCode);
    }
    if (annTypeName) {
      res["AnnTypeName"] = boost::any(*annTypeName);
    }
    if (applicant) {
      res["Applicant"] = boost::any(*applicant);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (originalImageUrl) {
      res["OriginalImageUrl"] = boost::any(*originalImageUrl);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (reactNum) {
      res["ReactNum"] = boost::any(*reactNum);
    }
    if (registrationNumber) {
      res["RegistrationNumber"] = boost::any(*registrationNumber);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnnDate") != m.end() && !m["AnnDate"].empty()) {
      annDate = make_shared<string>(boost::any_cast<string>(m["AnnDate"]));
    }
    if (m.find("AnnId") != m.end() && !m["AnnId"].empty()) {
      annId = make_shared<string>(boost::any_cast<string>(m["AnnId"]));
    }
    if (m.find("AnnNum") != m.end() && !m["AnnNum"].empty()) {
      annNum = make_shared<string>(boost::any_cast<string>(m["AnnNum"]));
    }
    if (m.find("AnnTypeCode") != m.end() && !m["AnnTypeCode"].empty()) {
      annTypeCode = make_shared<string>(boost::any_cast<string>(m["AnnTypeCode"]));
    }
    if (m.find("AnnTypeName") != m.end() && !m["AnnTypeName"].empty()) {
      annTypeName = make_shared<string>(boost::any_cast<string>(m["AnnTypeName"]));
    }
    if (m.find("Applicant") != m.end() && !m["Applicant"].empty()) {
      applicant = make_shared<string>(boost::any_cast<string>(m["Applicant"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("OriginalImageUrl") != m.end() && !m["OriginalImageUrl"].empty()) {
      originalImageUrl = make_shared<string>(boost::any_cast<string>(m["OriginalImageUrl"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("ReactNum") != m.end() && !m["ReactNum"].empty()) {
      reactNum = make_shared<string>(boost::any_cast<string>(m["ReactNum"]));
    }
    if (m.find("RegistrationNumber") != m.end() && !m["RegistrationNumber"].empty()) {
      registrationNumber = make_shared<string>(boost::any_cast<string>(m["RegistrationNumber"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
  }


  virtual ~DescribeTrademarkDetailForInnerResponseBodyNoticeList() = default;
};
class DescribeTrademarkDetailForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> agency{};
  shared_ptr<string> applyDate{};
  shared_ptr<string> classification{};
  shared_ptr<string> exclusiveDateLimit{};
  shared_ptr<vector<DescribeTrademarkDetailForInnerResponseBodyFlowList>> flowList{};
  shared_ptr<string> image{};
  shared_ptr<string> imageElement{};
  shared_ptr<string> intlRegDate{};
  shared_ptr<string> lastProcedureStatus{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeTrademarkDetailForInnerResponseBodyNoticeList>> noticeList{};
  shared_ptr<string> ownerAddress{};
  shared_ptr<string> ownerEnAddress{};
  shared_ptr<string> ownerEnName{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> preAnnDate{};
  shared_ptr<string> preAnnNum{};
  shared_ptr<string> priorityDate{};
  shared_ptr<string> product{};
  shared_ptr<string> productDescription{};
  shared_ptr<string> regAnnDate{};
  shared_ptr<long> regAnnNum{};
  shared_ptr<string> registrationNumber{};
  shared_ptr<string> registrationType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> share{};
  shared_ptr<string> similarGroup{};
  shared_ptr<string> status{};
  shared_ptr<string> subsequentDesignationDate{};
  shared_ptr<string> uid{};

  DescribeTrademarkDetailForInnerResponseBody() {}

  explicit DescribeTrademarkDetailForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agency) {
      res["Agency"] = boost::any(*agency);
    }
    if (applyDate) {
      res["ApplyDate"] = boost::any(*applyDate);
    }
    if (classification) {
      res["Classification"] = boost::any(*classification);
    }
    if (exclusiveDateLimit) {
      res["ExclusiveDateLimit"] = boost::any(*exclusiveDateLimit);
    }
    if (flowList) {
      vector<boost::any> temp1;
      for(auto item1:*flowList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FlowList"] = boost::any(temp1);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (imageElement) {
      res["ImageElement"] = boost::any(*imageElement);
    }
    if (intlRegDate) {
      res["IntlRegDate"] = boost::any(*intlRegDate);
    }
    if (lastProcedureStatus) {
      res["LastProcedureStatus"] = boost::any(*lastProcedureStatus);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (noticeList) {
      vector<boost::any> temp1;
      for(auto item1:*noticeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NoticeList"] = boost::any(temp1);
    }
    if (ownerAddress) {
      res["OwnerAddress"] = boost::any(*ownerAddress);
    }
    if (ownerEnAddress) {
      res["OwnerEnAddress"] = boost::any(*ownerEnAddress);
    }
    if (ownerEnName) {
      res["OwnerEnName"] = boost::any(*ownerEnName);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (preAnnDate) {
      res["PreAnnDate"] = boost::any(*preAnnDate);
    }
    if (preAnnNum) {
      res["PreAnnNum"] = boost::any(*preAnnNum);
    }
    if (priorityDate) {
      res["PriorityDate"] = boost::any(*priorityDate);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (productDescription) {
      res["ProductDescription"] = boost::any(*productDescription);
    }
    if (regAnnDate) {
      res["RegAnnDate"] = boost::any(*regAnnDate);
    }
    if (regAnnNum) {
      res["RegAnnNum"] = boost::any(*regAnnNum);
    }
    if (registrationNumber) {
      res["RegistrationNumber"] = boost::any(*registrationNumber);
    }
    if (registrationType) {
      res["RegistrationType"] = boost::any(*registrationType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (share) {
      res["Share"] = boost::any(*share);
    }
    if (similarGroup) {
      res["SimilarGroup"] = boost::any(*similarGroup);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subsequentDesignationDate) {
      res["SubsequentDesignationDate"] = boost::any(*subsequentDesignationDate);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Agency") != m.end() && !m["Agency"].empty()) {
      agency = make_shared<string>(boost::any_cast<string>(m["Agency"]));
    }
    if (m.find("ApplyDate") != m.end() && !m["ApplyDate"].empty()) {
      applyDate = make_shared<string>(boost::any_cast<string>(m["ApplyDate"]));
    }
    if (m.find("Classification") != m.end() && !m["Classification"].empty()) {
      classification = make_shared<string>(boost::any_cast<string>(m["Classification"]));
    }
    if (m.find("ExclusiveDateLimit") != m.end() && !m["ExclusiveDateLimit"].empty()) {
      exclusiveDateLimit = make_shared<string>(boost::any_cast<string>(m["ExclusiveDateLimit"]));
    }
    if (m.find("FlowList") != m.end() && !m["FlowList"].empty()) {
      if (typeid(vector<boost::any>) == m["FlowList"].type()) {
        vector<DescribeTrademarkDetailForInnerResponseBodyFlowList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FlowList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrademarkDetailForInnerResponseBodyFlowList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flowList = make_shared<vector<DescribeTrademarkDetailForInnerResponseBodyFlowList>>(expect1);
      }
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("ImageElement") != m.end() && !m["ImageElement"].empty()) {
      imageElement = make_shared<string>(boost::any_cast<string>(m["ImageElement"]));
    }
    if (m.find("IntlRegDate") != m.end() && !m["IntlRegDate"].empty()) {
      intlRegDate = make_shared<string>(boost::any_cast<string>(m["IntlRegDate"]));
    }
    if (m.find("LastProcedureStatus") != m.end() && !m["LastProcedureStatus"].empty()) {
      lastProcedureStatus = make_shared<string>(boost::any_cast<string>(m["LastProcedureStatus"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NoticeList") != m.end() && !m["NoticeList"].empty()) {
      if (typeid(vector<boost::any>) == m["NoticeList"].type()) {
        vector<DescribeTrademarkDetailForInnerResponseBodyNoticeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NoticeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrademarkDetailForInnerResponseBodyNoticeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        noticeList = make_shared<vector<DescribeTrademarkDetailForInnerResponseBodyNoticeList>>(expect1);
      }
    }
    if (m.find("OwnerAddress") != m.end() && !m["OwnerAddress"].empty()) {
      ownerAddress = make_shared<string>(boost::any_cast<string>(m["OwnerAddress"]));
    }
    if (m.find("OwnerEnAddress") != m.end() && !m["OwnerEnAddress"].empty()) {
      ownerEnAddress = make_shared<string>(boost::any_cast<string>(m["OwnerEnAddress"]));
    }
    if (m.find("OwnerEnName") != m.end() && !m["OwnerEnName"].empty()) {
      ownerEnName = make_shared<string>(boost::any_cast<string>(m["OwnerEnName"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("PreAnnDate") != m.end() && !m["PreAnnDate"].empty()) {
      preAnnDate = make_shared<string>(boost::any_cast<string>(m["PreAnnDate"]));
    }
    if (m.find("PreAnnNum") != m.end() && !m["PreAnnNum"].empty()) {
      preAnnNum = make_shared<string>(boost::any_cast<string>(m["PreAnnNum"]));
    }
    if (m.find("PriorityDate") != m.end() && !m["PriorityDate"].empty()) {
      priorityDate = make_shared<string>(boost::any_cast<string>(m["PriorityDate"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ProductDescription") != m.end() && !m["ProductDescription"].empty()) {
      productDescription = make_shared<string>(boost::any_cast<string>(m["ProductDescription"]));
    }
    if (m.find("RegAnnDate") != m.end() && !m["RegAnnDate"].empty()) {
      regAnnDate = make_shared<string>(boost::any_cast<string>(m["RegAnnDate"]));
    }
    if (m.find("RegAnnNum") != m.end() && !m["RegAnnNum"].empty()) {
      regAnnNum = make_shared<long>(boost::any_cast<long>(m["RegAnnNum"]));
    }
    if (m.find("RegistrationNumber") != m.end() && !m["RegistrationNumber"].empty()) {
      registrationNumber = make_shared<string>(boost::any_cast<string>(m["RegistrationNumber"]));
    }
    if (m.find("RegistrationType") != m.end() && !m["RegistrationType"].empty()) {
      registrationType = make_shared<string>(boost::any_cast<string>(m["RegistrationType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Share") != m.end() && !m["Share"].empty()) {
      share = make_shared<string>(boost::any_cast<string>(m["Share"]));
    }
    if (m.find("SimilarGroup") != m.end() && !m["SimilarGroup"].empty()) {
      similarGroup = make_shared<string>(boost::any_cast<string>(m["SimilarGroup"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubsequentDesignationDate") != m.end() && !m["SubsequentDesignationDate"].empty()) {
      subsequentDesignationDate = make_shared<string>(boost::any_cast<string>(m["SubsequentDesignationDate"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~DescribeTrademarkDetailForInnerResponseBody() = default;
};
class DescribeTrademarkDetailForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTrademarkDetailForInnerResponseBody> body{};

  DescribeTrademarkDetailForInnerResponse() {}

  explicit DescribeTrademarkDetailForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTrademarkDetailForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTrademarkDetailForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTrademarkDetailForInnerResponse() = default;
};
class GenerateUploadFilePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileType{};

  GenerateUploadFilePolicyRequest() {}

  explicit GenerateUploadFilePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
  }


  virtual ~GenerateUploadFilePolicyRequest() = default;
};
class GenerateUploadFilePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> encodedPolicy{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> fileDir{};
  shared_ptr<string> host{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signature{};

  GenerateUploadFilePolicyResponseBody() {}

  explicit GenerateUploadFilePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (encodedPolicy) {
      res["EncodedPolicy"] = boost::any(*encodedPolicy);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (fileDir) {
      res["FileDir"] = boost::any(*fileDir);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("EncodedPolicy") != m.end() && !m["EncodedPolicy"].empty()) {
      encodedPolicy = make_shared<string>(boost::any_cast<string>(m["EncodedPolicy"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("FileDir") != m.end() && !m["FileDir"].empty()) {
      fileDir = make_shared<string>(boost::any_cast<string>(m["FileDir"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~GenerateUploadFilePolicyResponseBody() = default;
};
class GenerateUploadFilePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateUploadFilePolicyResponseBody> body{};

  GenerateUploadFilePolicyResponse() {}

  explicit GenerateUploadFilePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateUploadFilePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateUploadFilePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateUploadFilePolicyResponse() = default;
};
class GetAlipayUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> orderId{};
  shared_ptr<string> returnUrl{};
  shared_ptr<string> type{};

  GetAlipayUrlRequest() {}

  explicit GetAlipayUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (returnUrl) {
      res["ReturnUrl"] = boost::any(*returnUrl);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("ReturnUrl") != m.end() && !m["ReturnUrl"].empty()) {
      returnUrl = make_shared<string>(boost::any_cast<string>(m["ReturnUrl"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetAlipayUrlRequest() = default;
};
class GetAlipayUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetAlipayUrlResponseBody() {}

  explicit GetAlipayUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAlipayUrlResponseBody() = default;
};
class GetAlipayUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAlipayUrlResponseBody> body{};

  GetAlipayUrlResponse() {}

  explicit GetAlipayUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAlipayUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAlipayUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetAlipayUrlResponse() = default;
};
class GetOrderConfirmUrlRequestItems : public Darabonba::Model {
public:
  shared_ptr<string> itemCode{};
  shared_ptr<long> quantity{};

  GetOrderConfirmUrlRequestItems() {}

  explicit GetOrderConfirmUrlRequestItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemCode) {
      res["ItemCode"] = boost::any(*itemCode);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemCode") != m.end() && !m["ItemCode"].empty()) {
      itemCode = make_shared<string>(boost::any_cast<string>(m["ItemCode"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
  }


  virtual ~GetOrderConfirmUrlRequestItems() = default;
};
class GetOrderConfirmUrlRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GetOrderConfirmUrlRequestItems>> items{};
  shared_ptr<string> outTraceCode{};
  shared_ptr<string> outTraceType{};

  GetOrderConfirmUrlRequest() {}

  explicit GetOrderConfirmUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (outTraceCode) {
      res["OutTraceCode"] = boost::any(*outTraceCode);
    }
    if (outTraceType) {
      res["OutTraceType"] = boost::any(*outTraceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<GetOrderConfirmUrlRequestItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOrderConfirmUrlRequestItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GetOrderConfirmUrlRequestItems>>(expect1);
      }
    }
    if (m.find("OutTraceCode") != m.end() && !m["OutTraceCode"].empty()) {
      outTraceCode = make_shared<string>(boost::any_cast<string>(m["OutTraceCode"]));
    }
    if (m.find("OutTraceType") != m.end() && !m["OutTraceType"].empty()) {
      outTraceType = make_shared<string>(boost::any_cast<string>(m["OutTraceType"]));
    }
  }


  virtual ~GetOrderConfirmUrlRequest() = default;
};
class GetOrderConfirmUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> confirmUrl{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetOrderConfirmUrlResponseBody() {}

  explicit GetOrderConfirmUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confirmUrl) {
      res["ConfirmUrl"] = boost::any(*confirmUrl);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ConfirmUrl") != m.end() && !m["ConfirmUrl"].empty()) {
      confirmUrl = make_shared<string>(boost::any_cast<string>(m["ConfirmUrl"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetOrderConfirmUrlResponseBody() = default;
};
class GetOrderConfirmUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOrderConfirmUrlResponseBody> body{};

  GetOrderConfirmUrlResponse() {}

  explicit GetOrderConfirmUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrderConfirmUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrderConfirmUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrderConfirmUrlResponse() = default;
};
class GetStsByTaobaoUidRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunUid{};
  shared_ptr<string> tbUid{};

  GetStsByTaobaoUidRequest() {}

  explicit GetStsByTaobaoUidRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunUid) {
      res["AliyunUid"] = boost::any(*aliyunUid);
    }
    if (tbUid) {
      res["TbUid"] = boost::any(*tbUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunUid") != m.end() && !m["AliyunUid"].empty()) {
      aliyunUid = make_shared<string>(boost::any_cast<string>(m["AliyunUid"]));
    }
    if (m.find("TbUid") != m.end() && !m["TbUid"].empty()) {
      tbUid = make_shared<string>(boost::any_cast<string>(m["TbUid"]));
    }
  }


  virtual ~GetStsByTaobaoUidRequest() = default;
};
class GetStsByTaobaoUidResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> expiration{};
  shared_ptr<string> requestId{};
  shared_ptr<string> securityToken{};
  shared_ptr<bool> success{};

  GetStsByTaobaoUidResponseBody() {}

  explicit GetStsByTaobaoUidResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetStsByTaobaoUidResponseBody() = default;
};
class GetStsByTaobaoUidResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStsByTaobaoUidResponseBody> body{};

  GetStsByTaobaoUidResponse() {}

  explicit GetStsByTaobaoUidResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStsByTaobaoUidResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStsByTaobaoUidResponseBody>(model1);
      }
    }
  }


  virtual ~GetStsByTaobaoUidResponse() = default;
};
class ListAdminTrademarkApplicationLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};

  ListAdminTrademarkApplicationLogsRequest() {}

  explicit ListAdminTrademarkApplicationLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAdminTrademarkApplicationLogsRequest() = default;
};
class ListAdminTrademarkApplicationLogsResponseBodyTrademarkApplicationLogs : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<long> bizStatus{};
  shared_ptr<string> note{};
  shared_ptr<long> operateTime{};
  shared_ptr<long> operateType{};

  ListAdminTrademarkApplicationLogsResponseBodyTrademarkApplicationLogs() {}

  explicit ListAdminTrademarkApplicationLogsResponseBodyTrademarkApplicationLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (bizStatus) {
      res["BizStatus"] = boost::any(*bizStatus);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (operateTime) {
      res["OperateTime"] = boost::any(*operateTime);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BizStatus") != m.end() && !m["BizStatus"].empty()) {
      bizStatus = make_shared<long>(boost::any_cast<long>(m["BizStatus"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("OperateTime") != m.end() && !m["OperateTime"].empty()) {
      operateTime = make_shared<long>(boost::any_cast<long>(m["OperateTime"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<long>(boost::any_cast<long>(m["OperateType"]));
    }
  }


  virtual ~ListAdminTrademarkApplicationLogsResponseBodyTrademarkApplicationLogs() = default;
};
class ListAdminTrademarkApplicationLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAdminTrademarkApplicationLogsResponseBodyTrademarkApplicationLogs>> trademarkApplicationLogs{};

  ListAdminTrademarkApplicationLogsResponseBody() {}

  explicit ListAdminTrademarkApplicationLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (trademarkApplicationLogs) {
      vector<boost::any> temp1;
      for(auto item1:*trademarkApplicationLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrademarkApplicationLogs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TrademarkApplicationLogs") != m.end() && !m["TrademarkApplicationLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["TrademarkApplicationLogs"].type()) {
        vector<ListAdminTrademarkApplicationLogsResponseBodyTrademarkApplicationLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrademarkApplicationLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAdminTrademarkApplicationLogsResponseBodyTrademarkApplicationLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trademarkApplicationLogs = make_shared<vector<ListAdminTrademarkApplicationLogsResponseBodyTrademarkApplicationLogs>>(expect1);
      }
    }
  }


  virtual ~ListAdminTrademarkApplicationLogsResponseBody() = default;
};
class ListAdminTrademarkApplicationLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAdminTrademarkApplicationLogsResponseBody> body{};

  ListAdminTrademarkApplicationLogsResponse() {}

  explicit ListAdminTrademarkApplicationLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAdminTrademarkApplicationLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAdminTrademarkApplicationLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAdminTrademarkApplicationLogsResponse() = default;
};
class ListAdminTrademarkApplicationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicantName{};
  shared_ptr<long> applicationStatus{};
  shared_ptr<string> applicationType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> orderId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortOrder{};
  shared_ptr<long> supplementStatus{};
  shared_ptr<string> trademarkName{};
  shared_ptr<string> trademarkNumber{};
  shared_ptr<string> userId{};

  ListAdminTrademarkApplicationsRequest() {}

  explicit ListAdminTrademarkApplicationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicantName) {
      res["ApplicantName"] = boost::any(*applicantName);
    }
    if (applicationStatus) {
      res["ApplicationStatus"] = boost::any(*applicationStatus);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (supplementStatus) {
      res["SupplementStatus"] = boost::any(*supplementStatus);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    if (trademarkNumber) {
      res["TrademarkNumber"] = boost::any(*trademarkNumber);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicantName") != m.end() && !m["ApplicantName"].empty()) {
      applicantName = make_shared<string>(boost::any_cast<string>(m["ApplicantName"]));
    }
    if (m.find("ApplicationStatus") != m.end() && !m["ApplicationStatus"].empty()) {
      applicationStatus = make_shared<long>(boost::any_cast<long>(m["ApplicationStatus"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
    if (m.find("SupplementStatus") != m.end() && !m["SupplementStatus"].empty()) {
      supplementStatus = make_shared<long>(boost::any_cast<long>(m["SupplementStatus"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
    if (m.find("TrademarkNumber") != m.end() && !m["TrademarkNumber"].empty()) {
      trademarkNumber = make_shared<string>(boost::any_cast<string>(m["TrademarkNumber"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListAdminTrademarkApplicationsRequest() = default;
};
class ListAdminTrademarkApplicationsResponseBodyTrademarkApplicationsFirstClassification : public Darabonba::Model {
public:
  shared_ptr<string> classificationCode{};
  shared_ptr<string> classificationName{};

  ListAdminTrademarkApplicationsResponseBodyTrademarkApplicationsFirstClassification() {}

  explicit ListAdminTrademarkApplicationsResponseBodyTrademarkApplicationsFirstClassification(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classificationCode) {
      res["ClassificationCode"] = boost::any(*classificationCode);
    }
    if (classificationName) {
      res["ClassificationName"] = boost::any(*classificationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassificationCode") != m.end() && !m["ClassificationCode"].empty()) {
      classificationCode = make_shared<string>(boost::any_cast<string>(m["ClassificationCode"]));
    }
    if (m.find("ClassificationName") != m.end() && !m["ClassificationName"].empty()) {
      classificationName = make_shared<string>(boost::any_cast<string>(m["ClassificationName"]));
    }
  }


  virtual ~ListAdminTrademarkApplicationsResponseBodyTrademarkApplicationsFirstClassification() = default;
};
class ListAdminTrademarkApplicationsResponseBodyTrademarkApplicationsThirdClassification : public Darabonba::Model {
public:
  shared_ptr<string> classificationCode{};
  shared_ptr<string> classificationName{};

  ListAdminTrademarkApplicationsResponseBodyTrademarkApplicationsThirdClassification() {}

  explicit ListAdminTrademarkApplicationsResponseBodyTrademarkApplicationsThirdClassification(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classificationCode) {
      res["ClassificationCode"] = boost::any(*classificationCode);
    }
    if (classificationName) {
      res["ClassificationName"] = boost::any(*classificationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassificationCode") != m.end() && !m["ClassificationCode"].empty()) {
      classificationCode = make_shared<string>(boost::any_cast<string>(m["ClassificationCode"]));
    }
    if (m.find("ClassificationName") != m.end() && !m["ClassificationName"].empty()) {
      classificationName = make_shared<string>(boost::any_cast<string>(m["ClassificationName"]));
    }
  }


  virtual ~ListAdminTrademarkApplicationsResponseBodyTrademarkApplicationsThirdClassification() = default;
};
class ListAdminTrademarkApplicationsResponseBodyTrademarkApplications : public Darabonba::Model {
public:
  shared_ptr<long> applicantId{};
  shared_ptr<string> applicantName{};
  shared_ptr<long> applicationStatus{};
  shared_ptr<long> applicationType{};
  shared_ptr<string> authorizationUrl{};
  shared_ptr<string> bizId{};
  shared_ptr<long> createTime{};
  shared_ptr<ListAdminTrademarkApplicationsResponseBodyTrademarkApplicationsFirstClassification> firstClassification{};
  shared_ptr<vector<string>> flags{};
  shared_ptr<string> note{};
  shared_ptr<string> orderId{};
  shared_ptr<double> orderPrice{};
  shared_ptr<long> principalName{};
  shared_ptr<double> servicePrice{};
  shared_ptr<long> supplementId{};
  shared_ptr<long> supplementStatus{};
  shared_ptr<string> systemVersion{};
  shared_ptr<vector<ListAdminTrademarkApplicationsResponseBodyTrademarkApplicationsThirdClassification>> thirdClassification{};
  shared_ptr<double> totalPrice{};
  shared_ptr<string> trademarkIcon{};
  shared_ptr<string> trademarkName{};
  shared_ptr<string> trademarkNumber{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  ListAdminTrademarkApplicationsResponseBodyTrademarkApplications() {}

  explicit ListAdminTrademarkApplicationsResponseBodyTrademarkApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    if (applicantName) {
      res["ApplicantName"] = boost::any(*applicantName);
    }
    if (applicationStatus) {
      res["ApplicationStatus"] = boost::any(*applicationStatus);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (authorizationUrl) {
      res["AuthorizationUrl"] = boost::any(*authorizationUrl);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (firstClassification) {
      res["FirstClassification"] = firstClassification ? boost::any(firstClassification->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (flags) {
      res["Flags"] = boost::any(*flags);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderPrice) {
      res["OrderPrice"] = boost::any(*orderPrice);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (servicePrice) {
      res["ServicePrice"] = boost::any(*servicePrice);
    }
    if (supplementId) {
      res["SupplementId"] = boost::any(*supplementId);
    }
    if (supplementStatus) {
      res["SupplementStatus"] = boost::any(*supplementStatus);
    }
    if (systemVersion) {
      res["SystemVersion"] = boost::any(*systemVersion);
    }
    if (thirdClassification) {
      vector<boost::any> temp1;
      for(auto item1:*thirdClassification){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ThirdClassification"] = boost::any(temp1);
    }
    if (totalPrice) {
      res["TotalPrice"] = boost::any(*totalPrice);
    }
    if (trademarkIcon) {
      res["TrademarkIcon"] = boost::any(*trademarkIcon);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    if (trademarkNumber) {
      res["TrademarkNumber"] = boost::any(*trademarkNumber);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<long>(boost::any_cast<long>(m["ApplicantId"]));
    }
    if (m.find("ApplicantName") != m.end() && !m["ApplicantName"].empty()) {
      applicantName = make_shared<string>(boost::any_cast<string>(m["ApplicantName"]));
    }
    if (m.find("ApplicationStatus") != m.end() && !m["ApplicationStatus"].empty()) {
      applicationStatus = make_shared<long>(boost::any_cast<long>(m["ApplicationStatus"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<long>(boost::any_cast<long>(m["ApplicationType"]));
    }
    if (m.find("AuthorizationUrl") != m.end() && !m["AuthorizationUrl"].empty()) {
      authorizationUrl = make_shared<string>(boost::any_cast<string>(m["AuthorizationUrl"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("FirstClassification") != m.end() && !m["FirstClassification"].empty()) {
      if (typeid(map<string, boost::any>) == m["FirstClassification"].type()) {
        ListAdminTrademarkApplicationsResponseBodyTrademarkApplicationsFirstClassification model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FirstClassification"]));
        firstClassification = make_shared<ListAdminTrademarkApplicationsResponseBodyTrademarkApplicationsFirstClassification>(model1);
      }
    }
    if (m.find("Flags") != m.end() && !m["Flags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Flags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Flags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      flags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OrderPrice") != m.end() && !m["OrderPrice"].empty()) {
      orderPrice = make_shared<double>(boost::any_cast<double>(m["OrderPrice"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("ServicePrice") != m.end() && !m["ServicePrice"].empty()) {
      servicePrice = make_shared<double>(boost::any_cast<double>(m["ServicePrice"]));
    }
    if (m.find("SupplementId") != m.end() && !m["SupplementId"].empty()) {
      supplementId = make_shared<long>(boost::any_cast<long>(m["SupplementId"]));
    }
    if (m.find("SupplementStatus") != m.end() && !m["SupplementStatus"].empty()) {
      supplementStatus = make_shared<long>(boost::any_cast<long>(m["SupplementStatus"]));
    }
    if (m.find("SystemVersion") != m.end() && !m["SystemVersion"].empty()) {
      systemVersion = make_shared<string>(boost::any_cast<string>(m["SystemVersion"]));
    }
    if (m.find("ThirdClassification") != m.end() && !m["ThirdClassification"].empty()) {
      if (typeid(vector<boost::any>) == m["ThirdClassification"].type()) {
        vector<ListAdminTrademarkApplicationsResponseBodyTrademarkApplicationsThirdClassification> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ThirdClassification"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAdminTrademarkApplicationsResponseBodyTrademarkApplicationsThirdClassification model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        thirdClassification = make_shared<vector<ListAdminTrademarkApplicationsResponseBodyTrademarkApplicationsThirdClassification>>(expect1);
      }
    }
    if (m.find("TotalPrice") != m.end() && !m["TotalPrice"].empty()) {
      totalPrice = make_shared<double>(boost::any_cast<double>(m["TotalPrice"]));
    }
    if (m.find("TrademarkIcon") != m.end() && !m["TrademarkIcon"].empty()) {
      trademarkIcon = make_shared<string>(boost::any_cast<string>(m["TrademarkIcon"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
    if (m.find("TrademarkNumber") != m.end() && !m["TrademarkNumber"].empty()) {
      trademarkNumber = make_shared<string>(boost::any_cast<string>(m["TrademarkNumber"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListAdminTrademarkApplicationsResponseBodyTrademarkApplications() = default;
};
class ListAdminTrademarkApplicationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListAdminTrademarkApplicationsResponseBodyTrademarkApplications>> trademarkApplications{};

  ListAdminTrademarkApplicationsResponseBody() {}

  explicit ListAdminTrademarkApplicationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (trademarkApplications) {
      vector<boost::any> temp1;
      for(auto item1:*trademarkApplications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrademarkApplications"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("TrademarkApplications") != m.end() && !m["TrademarkApplications"].empty()) {
      if (typeid(vector<boost::any>) == m["TrademarkApplications"].type()) {
        vector<ListAdminTrademarkApplicationsResponseBodyTrademarkApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrademarkApplications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAdminTrademarkApplicationsResponseBodyTrademarkApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trademarkApplications = make_shared<vector<ListAdminTrademarkApplicationsResponseBodyTrademarkApplications>>(expect1);
      }
    }
  }


  virtual ~ListAdminTrademarkApplicationsResponseBody() = default;
};
class ListAdminTrademarkApplicationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAdminTrademarkApplicationsResponseBody> body{};

  ListAdminTrademarkApplicationsResponse() {}

  explicit ListAdminTrademarkApplicationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAdminTrademarkApplicationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAdminTrademarkApplicationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAdminTrademarkApplicationsResponse() = default;
};
class ListApplicantsRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicantName{};
  shared_ptr<long> applicantRegion{};
  shared_ptr<long> applicantType{};
  shared_ptr<string> applicantVersion{};
  shared_ptr<long> auditStatus{};
  shared_ptr<string> cardNumber{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> principalName{};
  shared_ptr<string> systemVersion{};

  ListApplicantsRequest() {}

  explicit ListApplicantsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicantName) {
      res["ApplicantName"] = boost::any(*applicantName);
    }
    if (applicantRegion) {
      res["ApplicantRegion"] = boost::any(*applicantRegion);
    }
    if (applicantType) {
      res["ApplicantType"] = boost::any(*applicantType);
    }
    if (applicantVersion) {
      res["ApplicantVersion"] = boost::any(*applicantVersion);
    }
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (systemVersion) {
      res["SystemVersion"] = boost::any(*systemVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicantName") != m.end() && !m["ApplicantName"].empty()) {
      applicantName = make_shared<string>(boost::any_cast<string>(m["ApplicantName"]));
    }
    if (m.find("ApplicantRegion") != m.end() && !m["ApplicantRegion"].empty()) {
      applicantRegion = make_shared<long>(boost::any_cast<long>(m["ApplicantRegion"]));
    }
    if (m.find("ApplicantType") != m.end() && !m["ApplicantType"].empty()) {
      applicantType = make_shared<long>(boost::any_cast<long>(m["ApplicantType"]));
    }
    if (m.find("ApplicantVersion") != m.end() && !m["ApplicantVersion"].empty()) {
      applicantVersion = make_shared<string>(boost::any_cast<string>(m["ApplicantVersion"]));
    }
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("SystemVersion") != m.end() && !m["SystemVersion"].empty()) {
      systemVersion = make_shared<string>(boost::any_cast<string>(m["SystemVersion"]));
    }
  }


  virtual ~ListApplicantsRequest() = default;
};
class ListApplicantsResponseBodyApplicantsApplicant : public Darabonba::Model {
public:
  shared_ptr<long> applicantId{};
  shared_ptr<string> applicantName{};
  shared_ptr<long> applicantRegion{};
  shared_ptr<long> applicantType{};
  shared_ptr<string> applicantVersion{};
  shared_ptr<long> auditStatus{};
  shared_ptr<long> authorizationAuditStatus{};
  shared_ptr<string> authorizationUrl{};
  shared_ptr<string> cardNumber{};
  shared_ptr<string> contactName{};
  shared_ptr<long> principalName{};
  shared_ptr<string> systemVersion{};
  shared_ptr<long> validDate{};

  ListApplicantsResponseBodyApplicantsApplicant() {}

  explicit ListApplicantsResponseBodyApplicantsApplicant(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    if (applicantName) {
      res["ApplicantName"] = boost::any(*applicantName);
    }
    if (applicantRegion) {
      res["ApplicantRegion"] = boost::any(*applicantRegion);
    }
    if (applicantType) {
      res["ApplicantType"] = boost::any(*applicantType);
    }
    if (applicantVersion) {
      res["ApplicantVersion"] = boost::any(*applicantVersion);
    }
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (authorizationAuditStatus) {
      res["AuthorizationAuditStatus"] = boost::any(*authorizationAuditStatus);
    }
    if (authorizationUrl) {
      res["AuthorizationUrl"] = boost::any(*authorizationUrl);
    }
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (systemVersion) {
      res["SystemVersion"] = boost::any(*systemVersion);
    }
    if (validDate) {
      res["ValidDate"] = boost::any(*validDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<long>(boost::any_cast<long>(m["ApplicantId"]));
    }
    if (m.find("ApplicantName") != m.end() && !m["ApplicantName"].empty()) {
      applicantName = make_shared<string>(boost::any_cast<string>(m["ApplicantName"]));
    }
    if (m.find("ApplicantRegion") != m.end() && !m["ApplicantRegion"].empty()) {
      applicantRegion = make_shared<long>(boost::any_cast<long>(m["ApplicantRegion"]));
    }
    if (m.find("ApplicantType") != m.end() && !m["ApplicantType"].empty()) {
      applicantType = make_shared<long>(boost::any_cast<long>(m["ApplicantType"]));
    }
    if (m.find("ApplicantVersion") != m.end() && !m["ApplicantVersion"].empty()) {
      applicantVersion = make_shared<string>(boost::any_cast<string>(m["ApplicantVersion"]));
    }
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<long>(boost::any_cast<long>(m["AuditStatus"]));
    }
    if (m.find("AuthorizationAuditStatus") != m.end() && !m["AuthorizationAuditStatus"].empty()) {
      authorizationAuditStatus = make_shared<long>(boost::any_cast<long>(m["AuthorizationAuditStatus"]));
    }
    if (m.find("AuthorizationUrl") != m.end() && !m["AuthorizationUrl"].empty()) {
      authorizationUrl = make_shared<string>(boost::any_cast<string>(m["AuthorizationUrl"]));
    }
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("SystemVersion") != m.end() && !m["SystemVersion"].empty()) {
      systemVersion = make_shared<string>(boost::any_cast<string>(m["SystemVersion"]));
    }
    if (m.find("ValidDate") != m.end() && !m["ValidDate"].empty()) {
      validDate = make_shared<long>(boost::any_cast<long>(m["ValidDate"]));
    }
  }


  virtual ~ListApplicantsResponseBodyApplicantsApplicant() = default;
};
class ListApplicantsResponseBodyApplicants : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicantsResponseBodyApplicantsApplicant>> applicant{};

  ListApplicantsResponseBodyApplicants() {}

  explicit ListApplicantsResponseBodyApplicants(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicant) {
      vector<boost::any> temp1;
      for(auto item1:*applicant){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applicant"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Applicant") != m.end() && !m["Applicant"].empty()) {
      if (typeid(vector<boost::any>) == m["Applicant"].type()) {
        vector<ListApplicantsResponseBodyApplicantsApplicant> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applicant"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicantsResponseBodyApplicantsApplicant model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicant = make_shared<vector<ListApplicantsResponseBodyApplicantsApplicant>>(expect1);
      }
    }
  }


  virtual ~ListApplicantsResponseBodyApplicants() = default;
};
class ListApplicantsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListApplicantsResponseBodyApplicants> applicants{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListApplicantsResponseBody() {}

  explicit ListApplicantsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicants) {
      res["Applicants"] = applicants ? boost::any(applicants->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Applicants") != m.end() && !m["Applicants"].empty()) {
      if (typeid(map<string, boost::any>) == m["Applicants"].type()) {
        ListApplicantsResponseBodyApplicants model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Applicants"]));
        applicants = make_shared<ListApplicantsResponseBodyApplicants>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~ListApplicantsResponseBody() = default;
};
class ListApplicantsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListApplicantsResponseBody> body{};

  ListApplicantsResponse() {}

  explicit ListApplicantsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListApplicantsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApplicantsResponseBody>(model1);
      }
    }
  }


  virtual ~ListApplicantsResponse() = default;
};
class ListAreasRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> parentCode{};

  ListAreasRequest() {}

  explicit ListAreasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (parentCode) {
      res["ParentCode"] = boost::any(*parentCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("ParentCode") != m.end() && !m["ParentCode"].empty()) {
      parentCode = make_shared<string>(boost::any_cast<string>(m["ParentCode"]));
    }
  }


  virtual ~ListAreasRequest() = default;
};
class ListAreasResponseBodyDatasSubArea : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};
  shared_ptr<string> parentCode{};
  shared_ptr<long> sortNum{};

  ListAreasResponseBodyDatasSubArea() {}

  explicit ListAreasResponseBodyDatasSubArea(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentCode) {
      res["ParentCode"] = boost::any(*parentCode);
    }
    if (sortNum) {
      res["SortNum"] = boost::any(*sortNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentCode") != m.end() && !m["ParentCode"].empty()) {
      parentCode = make_shared<string>(boost::any_cast<string>(m["ParentCode"]));
    }
    if (m.find("SortNum") != m.end() && !m["SortNum"].empty()) {
      sortNum = make_shared<long>(boost::any_cast<long>(m["SortNum"]));
    }
  }


  virtual ~ListAreasResponseBodyDatasSubArea() = default;
};
class ListAreasResponseBodyDatas : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};
  shared_ptr<string> parentCode{};
  shared_ptr<long> sortNum{};
  shared_ptr<vector<ListAreasResponseBodyDatasSubArea>> subArea{};

  ListAreasResponseBodyDatas() {}

  explicit ListAreasResponseBodyDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentCode) {
      res["ParentCode"] = boost::any(*parentCode);
    }
    if (sortNum) {
      res["SortNum"] = boost::any(*sortNum);
    }
    if (subArea) {
      vector<boost::any> temp1;
      for(auto item1:*subArea){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubArea"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentCode") != m.end() && !m["ParentCode"].empty()) {
      parentCode = make_shared<string>(boost::any_cast<string>(m["ParentCode"]));
    }
    if (m.find("SortNum") != m.end() && !m["SortNum"].empty()) {
      sortNum = make_shared<long>(boost::any_cast<long>(m["SortNum"]));
    }
    if (m.find("SubArea") != m.end() && !m["SubArea"].empty()) {
      if (typeid(vector<boost::any>) == m["SubArea"].type()) {
        vector<ListAreasResponseBodyDatasSubArea> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubArea"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAreasResponseBodyDatasSubArea model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subArea = make_shared<vector<ListAreasResponseBodyDatasSubArea>>(expect1);
      }
    }
  }


  virtual ~ListAreasResponseBodyDatas() = default;
};
class ListAreasResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAreasResponseBodyDatas>> datas{};
  shared_ptr<string> requestId{};

  ListAreasResponseBody() {}

  explicit ListAreasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datas) {
      vector<boost::any> temp1;
      for(auto item1:*datas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Datas"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<ListAreasResponseBodyDatas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Datas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAreasResponseBodyDatas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datas = make_shared<vector<ListAreasResponseBodyDatas>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAreasResponseBody() = default;
};
class ListAreasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAreasResponseBody> body{};

  ListAreasResponse() {}

  explicit ListAreasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAreasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAreasResponseBody>(model1);
      }
    }
  }


  virtual ~ListAreasResponse() = default;
};
class ListClassificationConditionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> tagName{};
  shared_ptr<long> type{};

  ListClassificationConditionsRequest() {}

  explicit ListClassificationConditionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~ListClassificationConditionsRequest() = default;
};
class ListClassificationConditionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> conditionContent{};
  shared_ptr<long> createTime{};
  shared_ptr<long> id{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> tagName{};
  shared_ptr<long> type{};
  shared_ptr<string> umid{};
  shared_ptr<long> updateTime{};
  shared_ptr<long> userId{};

  ListClassificationConditionsResponseBodyData() {}

  explicit ListClassificationConditionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionContent) {
      res["ConditionContent"] = boost::any(*conditionContent);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (umid) {
      res["Umid"] = boost::any(*umid);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionContent") != m.end() && !m["ConditionContent"].empty()) {
      conditionContent = make_shared<string>(boost::any_cast<string>(m["ConditionContent"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Umid") != m.end() && !m["Umid"].empty()) {
      umid = make_shared<string>(boost::any_cast<string>(m["Umid"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~ListClassificationConditionsResponseBodyData() = default;
};
class ListClassificationConditionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListClassificationConditionsResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListClassificationConditionsResponseBody() {}

  explicit ListClassificationConditionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListClassificationConditionsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClassificationConditionsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListClassificationConditionsResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListClassificationConditionsResponseBody() = default;
};
class ListClassificationConditionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClassificationConditionsResponseBody> body{};

  ListClassificationConditionsResponse() {}

  explicit ListClassificationConditionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClassificationConditionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClassificationConditionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListClassificationConditionsResponse() = default;
};
class ListClassificationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> parentCode{};

  ListClassificationsRequest() {}

  explicit ListClassificationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentCode) {
      res["ParentCode"] = boost::any(*parentCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentCode") != m.end() && !m["ParentCode"].empty()) {
      parentCode = make_shared<string>(boost::any_cast<string>(m["ParentCode"]));
    }
  }


  virtual ~ListClassificationsRequest() = default;
};
class ListClassificationsResponseBodyClassificationsClassification : public Darabonba::Model {
public:
  shared_ptr<string> classificationCode{};
  shared_ptr<string> classificationName{};
  shared_ptr<long> id{};
  shared_ptr<long> level{};
  shared_ptr<string> officialCode{};
  shared_ptr<string> parentCode{};

  ListClassificationsResponseBodyClassificationsClassification() {}

  explicit ListClassificationsResponseBodyClassificationsClassification(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classificationCode) {
      res["ClassificationCode"] = boost::any(*classificationCode);
    }
    if (classificationName) {
      res["ClassificationName"] = boost::any(*classificationName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (officialCode) {
      res["OfficialCode"] = boost::any(*officialCode);
    }
    if (parentCode) {
      res["ParentCode"] = boost::any(*parentCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassificationCode") != m.end() && !m["ClassificationCode"].empty()) {
      classificationCode = make_shared<string>(boost::any_cast<string>(m["ClassificationCode"]));
    }
    if (m.find("ClassificationName") != m.end() && !m["ClassificationName"].empty()) {
      classificationName = make_shared<string>(boost::any_cast<string>(m["ClassificationName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("OfficialCode") != m.end() && !m["OfficialCode"].empty()) {
      officialCode = make_shared<string>(boost::any_cast<string>(m["OfficialCode"]));
    }
    if (m.find("ParentCode") != m.end() && !m["ParentCode"].empty()) {
      parentCode = make_shared<string>(boost::any_cast<string>(m["ParentCode"]));
    }
  }


  virtual ~ListClassificationsResponseBodyClassificationsClassification() = default;
};
class ListClassificationsResponseBodyClassifications : public Darabonba::Model {
public:
  shared_ptr<vector<ListClassificationsResponseBodyClassificationsClassification>> classification{};

  ListClassificationsResponseBodyClassifications() {}

  explicit ListClassificationsResponseBodyClassifications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classification) {
      vector<boost::any> temp1;
      for(auto item1:*classification){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Classification"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classification") != m.end() && !m["Classification"].empty()) {
      if (typeid(vector<boost::any>) == m["Classification"].type()) {
        vector<ListClassificationsResponseBodyClassificationsClassification> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Classification"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClassificationsResponseBodyClassificationsClassification model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        classification = make_shared<vector<ListClassificationsResponseBodyClassificationsClassification>>(expect1);
      }
    }
  }


  virtual ~ListClassificationsResponseBodyClassifications() = default;
};
class ListClassificationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListClassificationsResponseBodyClassifications> classifications{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListClassificationsResponseBody() {}

  explicit ListClassificationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classifications) {
      res["Classifications"] = classifications ? boost::any(classifications->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Classifications") != m.end() && !m["Classifications"].empty()) {
      if (typeid(map<string, boost::any>) == m["Classifications"].type()) {
        ListClassificationsResponseBodyClassifications model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Classifications"]));
        classifications = make_shared<ListClassificationsResponseBodyClassifications>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListClassificationsResponseBody() = default;
};
class ListClassificationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClassificationsResponseBody> body{};

  ListClassificationsResponse() {}

  explicit ListClassificationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClassificationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClassificationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListClassificationsResponse() = default;
};
class ListTrademarkApplicationLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};

  ListTrademarkApplicationLogsRequest() {}

  explicit ListTrademarkApplicationLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTrademarkApplicationLogsRequest() = default;
};
class ListTrademarkApplicationLogsResponseBodyTrademarkApplicationLogsTrademarkApplicationLog : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<long> bizStatus{};
  shared_ptr<string> note{};
  shared_ptr<long> operateTime{};
  shared_ptr<long> operateType{};

  ListTrademarkApplicationLogsResponseBodyTrademarkApplicationLogsTrademarkApplicationLog() {}

  explicit ListTrademarkApplicationLogsResponseBodyTrademarkApplicationLogsTrademarkApplicationLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (bizStatus) {
      res["BizStatus"] = boost::any(*bizStatus);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (operateTime) {
      res["OperateTime"] = boost::any(*operateTime);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BizStatus") != m.end() && !m["BizStatus"].empty()) {
      bizStatus = make_shared<long>(boost::any_cast<long>(m["BizStatus"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("OperateTime") != m.end() && !m["OperateTime"].empty()) {
      operateTime = make_shared<long>(boost::any_cast<long>(m["OperateTime"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<long>(boost::any_cast<long>(m["OperateType"]));
    }
  }


  virtual ~ListTrademarkApplicationLogsResponseBodyTrademarkApplicationLogsTrademarkApplicationLog() = default;
};
class ListTrademarkApplicationLogsResponseBodyTrademarkApplicationLogs : public Darabonba::Model {
public:
  shared_ptr<vector<ListTrademarkApplicationLogsResponseBodyTrademarkApplicationLogsTrademarkApplicationLog>> trademarkApplicationLog{};

  ListTrademarkApplicationLogsResponseBodyTrademarkApplicationLogs() {}

  explicit ListTrademarkApplicationLogsResponseBodyTrademarkApplicationLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trademarkApplicationLog) {
      vector<boost::any> temp1;
      for(auto item1:*trademarkApplicationLog){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrademarkApplicationLog"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrademarkApplicationLog") != m.end() && !m["TrademarkApplicationLog"].empty()) {
      if (typeid(vector<boost::any>) == m["TrademarkApplicationLog"].type()) {
        vector<ListTrademarkApplicationLogsResponseBodyTrademarkApplicationLogsTrademarkApplicationLog> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrademarkApplicationLog"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrademarkApplicationLogsResponseBodyTrademarkApplicationLogsTrademarkApplicationLog model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trademarkApplicationLog = make_shared<vector<ListTrademarkApplicationLogsResponseBodyTrademarkApplicationLogsTrademarkApplicationLog>>(expect1);
      }
    }
  }


  virtual ~ListTrademarkApplicationLogsResponseBodyTrademarkApplicationLogs() = default;
};
class ListTrademarkApplicationLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListTrademarkApplicationLogsResponseBodyTrademarkApplicationLogs> trademarkApplicationLogs{};

  ListTrademarkApplicationLogsResponseBody() {}

  explicit ListTrademarkApplicationLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (trademarkApplicationLogs) {
      res["TrademarkApplicationLogs"] = trademarkApplicationLogs ? boost::any(trademarkApplicationLogs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TrademarkApplicationLogs") != m.end() && !m["TrademarkApplicationLogs"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrademarkApplicationLogs"].type()) {
        ListTrademarkApplicationLogsResponseBodyTrademarkApplicationLogs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrademarkApplicationLogs"]));
        trademarkApplicationLogs = make_shared<ListTrademarkApplicationLogsResponseBodyTrademarkApplicationLogs>(model1);
      }
    }
  }


  virtual ~ListTrademarkApplicationLogsResponseBody() = default;
};
class ListTrademarkApplicationLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTrademarkApplicationLogsResponseBody> body{};

  ListTrademarkApplicationLogsResponse() {}

  explicit ListTrademarkApplicationLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTrademarkApplicationLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTrademarkApplicationLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTrademarkApplicationLogsResponse() = default;
};
class ListTrademarkApplicationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicantName{};
  shared_ptr<long> applicationStatus{};
  shared_ptr<string> applicationType{};
  shared_ptr<string> bizId{};
  shared_ptr<long> createTimeLeft{};
  shared_ptr<long> createTimeRight{};
  shared_ptr<long> flag{};
  shared_ptr<string> orderId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> productType{};
  shared_ptr<bool> queryVoucherOrderDoneFlag{};
  shared_ptr<bool> queryVoucherOrderFlag{};
  shared_ptr<string> sortFiled{};
  shared_ptr<string> sortOrder{};
  shared_ptr<long> supplementStatus{};
  shared_ptr<string> trademarkName{};
  shared_ptr<string> trademarkNumber{};

  ListTrademarkApplicationsRequest() {}

  explicit ListTrademarkApplicationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicantName) {
      res["ApplicantName"] = boost::any(*applicantName);
    }
    if (applicationStatus) {
      res["ApplicationStatus"] = boost::any(*applicationStatus);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (createTimeLeft) {
      res["CreateTimeLeft"] = boost::any(*createTimeLeft);
    }
    if (createTimeRight) {
      res["CreateTimeRight"] = boost::any(*createTimeRight);
    }
    if (flag) {
      res["Flag"] = boost::any(*flag);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (queryVoucherOrderDoneFlag) {
      res["QueryVoucherOrderDoneFlag"] = boost::any(*queryVoucherOrderDoneFlag);
    }
    if (queryVoucherOrderFlag) {
      res["QueryVoucherOrderFlag"] = boost::any(*queryVoucherOrderFlag);
    }
    if (sortFiled) {
      res["SortFiled"] = boost::any(*sortFiled);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (supplementStatus) {
      res["SupplementStatus"] = boost::any(*supplementStatus);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    if (trademarkNumber) {
      res["TrademarkNumber"] = boost::any(*trademarkNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicantName") != m.end() && !m["ApplicantName"].empty()) {
      applicantName = make_shared<string>(boost::any_cast<string>(m["ApplicantName"]));
    }
    if (m.find("ApplicationStatus") != m.end() && !m["ApplicationStatus"].empty()) {
      applicationStatus = make_shared<long>(boost::any_cast<long>(m["ApplicationStatus"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("CreateTimeLeft") != m.end() && !m["CreateTimeLeft"].empty()) {
      createTimeLeft = make_shared<long>(boost::any_cast<long>(m["CreateTimeLeft"]));
    }
    if (m.find("CreateTimeRight") != m.end() && !m["CreateTimeRight"].empty()) {
      createTimeRight = make_shared<long>(boost::any_cast<long>(m["CreateTimeRight"]));
    }
    if (m.find("Flag") != m.end() && !m["Flag"].empty()) {
      flag = make_shared<long>(boost::any_cast<long>(m["Flag"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["ProductType"]));
    }
    if (m.find("QueryVoucherOrderDoneFlag") != m.end() && !m["QueryVoucherOrderDoneFlag"].empty()) {
      queryVoucherOrderDoneFlag = make_shared<bool>(boost::any_cast<bool>(m["QueryVoucherOrderDoneFlag"]));
    }
    if (m.find("QueryVoucherOrderFlag") != m.end() && !m["QueryVoucherOrderFlag"].empty()) {
      queryVoucherOrderFlag = make_shared<bool>(boost::any_cast<bool>(m["QueryVoucherOrderFlag"]));
    }
    if (m.find("SortFiled") != m.end() && !m["SortFiled"].empty()) {
      sortFiled = make_shared<string>(boost::any_cast<string>(m["SortFiled"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
    if (m.find("SupplementStatus") != m.end() && !m["SupplementStatus"].empty()) {
      supplementStatus = make_shared<long>(boost::any_cast<long>(m["SupplementStatus"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
    if (m.find("TrademarkNumber") != m.end() && !m["TrademarkNumber"].empty()) {
      trademarkNumber = make_shared<string>(boost::any_cast<string>(m["TrademarkNumber"]));
    }
  }


  virtual ~ListTrademarkApplicationsRequest() = default;
};
class ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationFirstClassification : public Darabonba::Model {
public:
  shared_ptr<string> classificationCode{};
  shared_ptr<string> classificationName{};

  ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationFirstClassification() {}

  explicit ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationFirstClassification(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classificationCode) {
      res["ClassificationCode"] = boost::any(*classificationCode);
    }
    if (classificationName) {
      res["ClassificationName"] = boost::any(*classificationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassificationCode") != m.end() && !m["ClassificationCode"].empty()) {
      classificationCode = make_shared<string>(boost::any_cast<string>(m["ClassificationCode"]));
    }
    if (m.find("ClassificationName") != m.end() && !m["ClassificationName"].empty()) {
      classificationName = make_shared<string>(boost::any_cast<string>(m["ClassificationName"]));
    }
  }


  virtual ~ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationFirstClassification() = default;
};
class ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationFlags : public Darabonba::Model {
public:
  shared_ptr<vector<string>> flags{};

  ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationFlags() {}

  explicit ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationFlags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flags) {
      res["Flags"] = boost::any(*flags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Flags") != m.end() && !m["Flags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Flags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Flags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      flags = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationFlags() = default;
};
class ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationThirdClassificationThirdClassification : public Darabonba::Model {
public:
  shared_ptr<string> classificationCode{};
  shared_ptr<string> classificationName{};

  ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationThirdClassificationThirdClassification() {}

  explicit ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationThirdClassificationThirdClassification(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classificationCode) {
      res["ClassificationCode"] = boost::any(*classificationCode);
    }
    if (classificationName) {
      res["ClassificationName"] = boost::any(*classificationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassificationCode") != m.end() && !m["ClassificationCode"].empty()) {
      classificationCode = make_shared<string>(boost::any_cast<string>(m["ClassificationCode"]));
    }
    if (m.find("ClassificationName") != m.end() && !m["ClassificationName"].empty()) {
      classificationName = make_shared<string>(boost::any_cast<string>(m["ClassificationName"]));
    }
  }


  virtual ~ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationThirdClassificationThirdClassification() = default;
};
class ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationThirdClassification : public Darabonba::Model {
public:
  shared_ptr<vector<ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationThirdClassificationThirdClassification>> thirdClassification{};

  ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationThirdClassification() {}

  explicit ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationThirdClassification(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (thirdClassification) {
      vector<boost::any> temp1;
      for(auto item1:*thirdClassification){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ThirdClassification"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ThirdClassification") != m.end() && !m["ThirdClassification"].empty()) {
      if (typeid(vector<boost::any>) == m["ThirdClassification"].type()) {
        vector<ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationThirdClassificationThirdClassification> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ThirdClassification"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationThirdClassificationThirdClassification model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        thirdClassification = make_shared<vector<ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationThirdClassificationThirdClassification>>(expect1);
      }
    }
  }


  virtual ~ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationThirdClassification() = default;
};
class ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplication : public Darabonba::Model {
public:
  shared_ptr<string> agreementId{};
  shared_ptr<long> applicantId{};
  shared_ptr<string> applicantName{};
  shared_ptr<long> applicationStatus{};
  shared_ptr<long> applicationType{};
  shared_ptr<string> authorizationUrl{};
  shared_ptr<string> bizId{};
  shared_ptr<long> createTime{};
  shared_ptr<ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationFirstClassification> firstClassification{};
  shared_ptr<ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationFlags> flags{};
  shared_ptr<string> note{};
  shared_ptr<string> orderId{};
  shared_ptr<double> orderPrice{};
  shared_ptr<long> principalName{};
  shared_ptr<double> servicePrice{};
  shared_ptr<long> supplementId{};
  shared_ptr<long> supplementStatus{};
  shared_ptr<string> systemVersion{};
  shared_ptr<ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationThirdClassification> thirdClassification{};
  shared_ptr<double> totalPrice{};
  shared_ptr<string> trademarkIcon{};
  shared_ptr<string> trademarkName{};
  shared_ptr<string> trademarkNumber{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplication() {}

  explicit ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreementId) {
      res["AgreementId"] = boost::any(*agreementId);
    }
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    if (applicantName) {
      res["ApplicantName"] = boost::any(*applicantName);
    }
    if (applicationStatus) {
      res["ApplicationStatus"] = boost::any(*applicationStatus);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (authorizationUrl) {
      res["AuthorizationUrl"] = boost::any(*authorizationUrl);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (firstClassification) {
      res["FirstClassification"] = firstClassification ? boost::any(firstClassification->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (flags) {
      res["Flags"] = flags ? boost::any(flags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderPrice) {
      res["OrderPrice"] = boost::any(*orderPrice);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (servicePrice) {
      res["ServicePrice"] = boost::any(*servicePrice);
    }
    if (supplementId) {
      res["SupplementId"] = boost::any(*supplementId);
    }
    if (supplementStatus) {
      res["SupplementStatus"] = boost::any(*supplementStatus);
    }
    if (systemVersion) {
      res["SystemVersion"] = boost::any(*systemVersion);
    }
    if (thirdClassification) {
      res["ThirdClassification"] = thirdClassification ? boost::any(thirdClassification->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalPrice) {
      res["TotalPrice"] = boost::any(*totalPrice);
    }
    if (trademarkIcon) {
      res["TrademarkIcon"] = boost::any(*trademarkIcon);
    }
    if (trademarkName) {
      res["TrademarkName"] = boost::any(*trademarkName);
    }
    if (trademarkNumber) {
      res["TrademarkNumber"] = boost::any(*trademarkNumber);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgreementId") != m.end() && !m["AgreementId"].empty()) {
      agreementId = make_shared<string>(boost::any_cast<string>(m["AgreementId"]));
    }
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<long>(boost::any_cast<long>(m["ApplicantId"]));
    }
    if (m.find("ApplicantName") != m.end() && !m["ApplicantName"].empty()) {
      applicantName = make_shared<string>(boost::any_cast<string>(m["ApplicantName"]));
    }
    if (m.find("ApplicationStatus") != m.end() && !m["ApplicationStatus"].empty()) {
      applicationStatus = make_shared<long>(boost::any_cast<long>(m["ApplicationStatus"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<long>(boost::any_cast<long>(m["ApplicationType"]));
    }
    if (m.find("AuthorizationUrl") != m.end() && !m["AuthorizationUrl"].empty()) {
      authorizationUrl = make_shared<string>(boost::any_cast<string>(m["AuthorizationUrl"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("FirstClassification") != m.end() && !m["FirstClassification"].empty()) {
      if (typeid(map<string, boost::any>) == m["FirstClassification"].type()) {
        ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationFirstClassification model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FirstClassification"]));
        firstClassification = make_shared<ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationFirstClassification>(model1);
      }
    }
    if (m.find("Flags") != m.end() && !m["Flags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Flags"].type()) {
        ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationFlags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Flags"]));
        flags = make_shared<ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationFlags>(model1);
      }
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OrderPrice") != m.end() && !m["OrderPrice"].empty()) {
      orderPrice = make_shared<double>(boost::any_cast<double>(m["OrderPrice"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("ServicePrice") != m.end() && !m["ServicePrice"].empty()) {
      servicePrice = make_shared<double>(boost::any_cast<double>(m["ServicePrice"]));
    }
    if (m.find("SupplementId") != m.end() && !m["SupplementId"].empty()) {
      supplementId = make_shared<long>(boost::any_cast<long>(m["SupplementId"]));
    }
    if (m.find("SupplementStatus") != m.end() && !m["SupplementStatus"].empty()) {
      supplementStatus = make_shared<long>(boost::any_cast<long>(m["SupplementStatus"]));
    }
    if (m.find("SystemVersion") != m.end() && !m["SystemVersion"].empty()) {
      systemVersion = make_shared<string>(boost::any_cast<string>(m["SystemVersion"]));
    }
    if (m.find("ThirdClassification") != m.end() && !m["ThirdClassification"].empty()) {
      if (typeid(map<string, boost::any>) == m["ThirdClassification"].type()) {
        ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationThirdClassification model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ThirdClassification"]));
        thirdClassification = make_shared<ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplicationThirdClassification>(model1);
      }
    }
    if (m.find("TotalPrice") != m.end() && !m["TotalPrice"].empty()) {
      totalPrice = make_shared<double>(boost::any_cast<double>(m["TotalPrice"]));
    }
    if (m.find("TrademarkIcon") != m.end() && !m["TrademarkIcon"].empty()) {
      trademarkIcon = make_shared<string>(boost::any_cast<string>(m["TrademarkIcon"]));
    }
    if (m.find("TrademarkName") != m.end() && !m["TrademarkName"].empty()) {
      trademarkName = make_shared<string>(boost::any_cast<string>(m["TrademarkName"]));
    }
    if (m.find("TrademarkNumber") != m.end() && !m["TrademarkNumber"].empty()) {
      trademarkNumber = make_shared<string>(boost::any_cast<string>(m["TrademarkNumber"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplication() = default;
};
class ListTrademarkApplicationsResponseBodyTrademarkApplications : public Darabonba::Model {
public:
  shared_ptr<vector<ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplication>> trademarkApplication{};

  ListTrademarkApplicationsResponseBodyTrademarkApplications() {}

  explicit ListTrademarkApplicationsResponseBodyTrademarkApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trademarkApplication) {
      vector<boost::any> temp1;
      for(auto item1:*trademarkApplication){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrademarkApplication"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrademarkApplication") != m.end() && !m["TrademarkApplication"].empty()) {
      if (typeid(vector<boost::any>) == m["TrademarkApplication"].type()) {
        vector<ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplication> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrademarkApplication"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplication model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trademarkApplication = make_shared<vector<ListTrademarkApplicationsResponseBodyTrademarkApplicationsTrademarkApplication>>(expect1);
      }
    }
  }


  virtual ~ListTrademarkApplicationsResponseBodyTrademarkApplications() = default;
};
class ListTrademarkApplicationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<ListTrademarkApplicationsResponseBodyTrademarkApplications> trademarkApplications{};

  ListTrademarkApplicationsResponseBody() {}

  explicit ListTrademarkApplicationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (trademarkApplications) {
      res["TrademarkApplications"] = trademarkApplications ? boost::any(trademarkApplications->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("TrademarkApplications") != m.end() && !m["TrademarkApplications"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrademarkApplications"].type()) {
        ListTrademarkApplicationsResponseBodyTrademarkApplications model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrademarkApplications"]));
        trademarkApplications = make_shared<ListTrademarkApplicationsResponseBodyTrademarkApplications>(model1);
      }
    }
  }


  virtual ~ListTrademarkApplicationsResponseBody() = default;
};
class ListTrademarkApplicationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTrademarkApplicationsResponseBody> body{};

  ListTrademarkApplicationsResponse() {}

  explicit ListTrademarkApplicationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTrademarkApplicationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTrademarkApplicationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTrademarkApplicationsResponse() = default;
};
class ListTrademarkSearchForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> applyBeginTime{};
  shared_ptr<string> applyEndTime{};
  shared_ptr<string> classification{};
  shared_ptr<bool> ifPrecision{};
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> product{};
  shared_ptr<string> searchPreference{};
  shared_ptr<string> searchType{};
  shared_ptr<string> status{};
  shared_ptr<string> umid{};
  shared_ptr<string> userId{};

  ListTrademarkSearchForInnerRequest() {}

  explicit ListTrademarkSearchForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyBeginTime) {
      res["ApplyBeginTime"] = boost::any(*applyBeginTime);
    }
    if (applyEndTime) {
      res["ApplyEndTime"] = boost::any(*applyEndTime);
    }
    if (classification) {
      res["Classification"] = boost::any(*classification);
    }
    if (ifPrecision) {
      res["IfPrecision"] = boost::any(*ifPrecision);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (searchPreference) {
      res["SearchPreference"] = boost::any(*searchPreference);
    }
    if (searchType) {
      res["SearchType"] = boost::any(*searchType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (umid) {
      res["Umid"] = boost::any(*umid);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyBeginTime") != m.end() && !m["ApplyBeginTime"].empty()) {
      applyBeginTime = make_shared<string>(boost::any_cast<string>(m["ApplyBeginTime"]));
    }
    if (m.find("ApplyEndTime") != m.end() && !m["ApplyEndTime"].empty()) {
      applyEndTime = make_shared<string>(boost::any_cast<string>(m["ApplyEndTime"]));
    }
    if (m.find("Classification") != m.end() && !m["Classification"].empty()) {
      classification = make_shared<string>(boost::any_cast<string>(m["Classification"]));
    }
    if (m.find("IfPrecision") != m.end() && !m["IfPrecision"].empty()) {
      ifPrecision = make_shared<bool>(boost::any_cast<bool>(m["IfPrecision"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("SearchPreference") != m.end() && !m["SearchPreference"].empty()) {
      searchPreference = make_shared<string>(boost::any_cast<string>(m["SearchPreference"]));
    }
    if (m.find("SearchType") != m.end() && !m["SearchType"].empty()) {
      searchType = make_shared<string>(boost::any_cast<string>(m["SearchType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Umid") != m.end() && !m["Umid"].empty()) {
      umid = make_shared<string>(boost::any_cast<string>(m["Umid"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListTrademarkSearchForInnerRequest() = default;
};
class ListTrademarkSearchForInnerResponseBodyTrademarkSearchContents : public Darabonba::Model {
public:
  shared_ptr<string> applyDate{};
  shared_ptr<string> classification{};
  shared_ptr<string> exclusiveDateLimit{};
  shared_ptr<long> id{};
  shared_ptr<string> image{};
  shared_ptr<string> lastProcedureStatus{};
  shared_ptr<string> name{};
  shared_ptr<string> nameCharSection{};
  shared_ptr<string> nameOrigin{};
  shared_ptr<string> nameSimplifiedChinese{};
  shared_ptr<string> nameSort{};
  shared_ptr<string> onSale{};
  shared_ptr<string> ownerAddress{};
  shared_ptr<string> ownerEnAddress{};
  shared_ptr<string> ownerEnName{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> preAnnDate{};
  shared_ptr<string> preAnnNum{};
  shared_ptr<string> product{};
  shared_ptr<vector<string>> productDel{};
  shared_ptr<string> productDescription{};
  shared_ptr<string> regAnnNum{};
  shared_ptr<string> registrationNumber{};
  shared_ptr<string> share{};
  shared_ptr<vector<string>> similarGroupDel{};
  shared_ptr<string> uid{};
  shared_ptr<string> wellKnow{};

  ListTrademarkSearchForInnerResponseBodyTrademarkSearchContents() {}

  explicit ListTrademarkSearchForInnerResponseBodyTrademarkSearchContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyDate) {
      res["ApplyDate"] = boost::any(*applyDate);
    }
    if (classification) {
      res["Classification"] = boost::any(*classification);
    }
    if (exclusiveDateLimit) {
      res["ExclusiveDateLimit"] = boost::any(*exclusiveDateLimit);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (lastProcedureStatus) {
      res["LastProcedureStatus"] = boost::any(*lastProcedureStatus);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nameCharSection) {
      res["NameCharSection"] = boost::any(*nameCharSection);
    }
    if (nameOrigin) {
      res["NameOrigin"] = boost::any(*nameOrigin);
    }
    if (nameSimplifiedChinese) {
      res["NameSimplifiedChinese"] = boost::any(*nameSimplifiedChinese);
    }
    if (nameSort) {
      res["NameSort"] = boost::any(*nameSort);
    }
    if (onSale) {
      res["OnSale"] = boost::any(*onSale);
    }
    if (ownerAddress) {
      res["OwnerAddress"] = boost::any(*ownerAddress);
    }
    if (ownerEnAddress) {
      res["OwnerEnAddress"] = boost::any(*ownerEnAddress);
    }
    if (ownerEnName) {
      res["OwnerEnName"] = boost::any(*ownerEnName);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (preAnnDate) {
      res["PreAnnDate"] = boost::any(*preAnnDate);
    }
    if (preAnnNum) {
      res["PreAnnNum"] = boost::any(*preAnnNum);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (productDel) {
      res["ProductDel"] = boost::any(*productDel);
    }
    if (productDescription) {
      res["ProductDescription"] = boost::any(*productDescription);
    }
    if (regAnnNum) {
      res["RegAnnNum"] = boost::any(*regAnnNum);
    }
    if (registrationNumber) {
      res["RegistrationNumber"] = boost::any(*registrationNumber);
    }
    if (share) {
      res["Share"] = boost::any(*share);
    }
    if (similarGroupDel) {
      res["SimilarGroupDel"] = boost::any(*similarGroupDel);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (wellKnow) {
      res["WellKnow"] = boost::any(*wellKnow);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyDate") != m.end() && !m["ApplyDate"].empty()) {
      applyDate = make_shared<string>(boost::any_cast<string>(m["ApplyDate"]));
    }
    if (m.find("Classification") != m.end() && !m["Classification"].empty()) {
      classification = make_shared<string>(boost::any_cast<string>(m["Classification"]));
    }
    if (m.find("ExclusiveDateLimit") != m.end() && !m["ExclusiveDateLimit"].empty()) {
      exclusiveDateLimit = make_shared<string>(boost::any_cast<string>(m["ExclusiveDateLimit"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("LastProcedureStatus") != m.end() && !m["LastProcedureStatus"].empty()) {
      lastProcedureStatus = make_shared<string>(boost::any_cast<string>(m["LastProcedureStatus"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NameCharSection") != m.end() && !m["NameCharSection"].empty()) {
      nameCharSection = make_shared<string>(boost::any_cast<string>(m["NameCharSection"]));
    }
    if (m.find("NameOrigin") != m.end() && !m["NameOrigin"].empty()) {
      nameOrigin = make_shared<string>(boost::any_cast<string>(m["NameOrigin"]));
    }
    if (m.find("NameSimplifiedChinese") != m.end() && !m["NameSimplifiedChinese"].empty()) {
      nameSimplifiedChinese = make_shared<string>(boost::any_cast<string>(m["NameSimplifiedChinese"]));
    }
    if (m.find("NameSort") != m.end() && !m["NameSort"].empty()) {
      nameSort = make_shared<string>(boost::any_cast<string>(m["NameSort"]));
    }
    if (m.find("OnSale") != m.end() && !m["OnSale"].empty()) {
      onSale = make_shared<string>(boost::any_cast<string>(m["OnSale"]));
    }
    if (m.find("OwnerAddress") != m.end() && !m["OwnerAddress"].empty()) {
      ownerAddress = make_shared<string>(boost::any_cast<string>(m["OwnerAddress"]));
    }
    if (m.find("OwnerEnAddress") != m.end() && !m["OwnerEnAddress"].empty()) {
      ownerEnAddress = make_shared<string>(boost::any_cast<string>(m["OwnerEnAddress"]));
    }
    if (m.find("OwnerEnName") != m.end() && !m["OwnerEnName"].empty()) {
      ownerEnName = make_shared<string>(boost::any_cast<string>(m["OwnerEnName"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("PreAnnDate") != m.end() && !m["PreAnnDate"].empty()) {
      preAnnDate = make_shared<string>(boost::any_cast<string>(m["PreAnnDate"]));
    }
    if (m.find("PreAnnNum") != m.end() && !m["PreAnnNum"].empty()) {
      preAnnNum = make_shared<string>(boost::any_cast<string>(m["PreAnnNum"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ProductDel") != m.end() && !m["ProductDel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ProductDel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProductDel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      productDel = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProductDescription") != m.end() && !m["ProductDescription"].empty()) {
      productDescription = make_shared<string>(boost::any_cast<string>(m["ProductDescription"]));
    }
    if (m.find("RegAnnNum") != m.end() && !m["RegAnnNum"].empty()) {
      regAnnNum = make_shared<string>(boost::any_cast<string>(m["RegAnnNum"]));
    }
    if (m.find("RegistrationNumber") != m.end() && !m["RegistrationNumber"].empty()) {
      registrationNumber = make_shared<string>(boost::any_cast<string>(m["RegistrationNumber"]));
    }
    if (m.find("Share") != m.end() && !m["Share"].empty()) {
      share = make_shared<string>(boost::any_cast<string>(m["Share"]));
    }
    if (m.find("SimilarGroupDel") != m.end() && !m["SimilarGroupDel"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SimilarGroupDel"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SimilarGroupDel"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      similarGroupDel = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("WellKnow") != m.end() && !m["WellKnow"].empty()) {
      wellKnow = make_shared<string>(boost::any_cast<string>(m["WellKnow"]));
    }
  }


  virtual ~ListTrademarkSearchForInnerResponseBodyTrademarkSearchContents() = default;
};
class ListTrademarkSearchForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<vector<string>> products{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};
  shared_ptr<vector<ListTrademarkSearchForInnerResponseBodyTrademarkSearchContents>> trademarkSearchContents{};

  ListTrademarkSearchForInnerResponseBody() {}

  explicit ListTrademarkSearchForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (products) {
      res["Products"] = boost::any(*products);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (trademarkSearchContents) {
      vector<boost::any> temp1;
      for(auto item1:*trademarkSearchContents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrademarkSearchContents"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Products") != m.end() && !m["Products"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Products"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Products"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      products = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("TrademarkSearchContents") != m.end() && !m["TrademarkSearchContents"].empty()) {
      if (typeid(vector<boost::any>) == m["TrademarkSearchContents"].type()) {
        vector<ListTrademarkSearchForInnerResponseBodyTrademarkSearchContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrademarkSearchContents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTrademarkSearchForInnerResponseBodyTrademarkSearchContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trademarkSearchContents = make_shared<vector<ListTrademarkSearchForInnerResponseBodyTrademarkSearchContents>>(expect1);
      }
    }
  }


  virtual ~ListTrademarkSearchForInnerResponseBody() = default;
};
class ListTrademarkSearchForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTrademarkSearchForInnerResponseBody> body{};

  ListTrademarkSearchForInnerResponse() {}

  explicit ListTrademarkSearchForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTrademarkSearchForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTrademarkSearchForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~ListTrademarkSearchForInnerResponse() = default;
};
class PutMeasureDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> data{};
  shared_ptr<string> dataType{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  PutMeasureDataRequest() {}

  explicit PutMeasureDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~PutMeasureDataRequest() = default;
};
class PutMeasureDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  PutMeasureDataResponseBody() {}

  explicit PutMeasureDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PutMeasureDataResponseBody() = default;
};
class PutMeasureDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutMeasureDataResponseBody> body{};

  PutMeasureDataResponse() {}

  explicit PutMeasureDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutMeasureDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutMeasureDataResponseBody>(model1);
      }
    }
  }


  virtual ~PutMeasureDataResponse() = default;
};
class PutMeasureReadyFlagRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> dataType{};
  shared_ptr<string> endTime{};
  shared_ptr<string> readyFlag{};
  shared_ptr<string> startTime{};

  PutMeasureReadyFlagRequest() {}

  explicit PutMeasureReadyFlagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (readyFlag) {
      res["ReadyFlag"] = boost::any(*readyFlag);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ReadyFlag") != m.end() && !m["ReadyFlag"].empty()) {
      readyFlag = make_shared<string>(boost::any_cast<string>(m["ReadyFlag"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~PutMeasureReadyFlagRequest() = default;
};
class PutMeasureReadyFlagResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  PutMeasureReadyFlagResponseBody() {}

  explicit PutMeasureReadyFlagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~PutMeasureReadyFlagResponseBody() = default;
};
class PutMeasureReadyFlagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PutMeasureReadyFlagResponseBody> body{};

  PutMeasureReadyFlagResponse() {}

  explicit PutMeasureReadyFlagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutMeasureReadyFlagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutMeasureReadyFlagResponseBody>(model1);
      }
    }
  }


  virtual ~PutMeasureReadyFlagResponse() = default;
};
class QueryActivityItemsRequest : public Darabonba::Model {
public:
  shared_ptr<long> activityId{};
  shared_ptr<string> extendInfo{};
  shared_ptr<long> floorIndex{};
  shared_ptr<bool> mock{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> refresh{};
  shared_ptr<string> umId{};

  QueryActivityItemsRequest() {}

  explicit QueryActivityItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activityId) {
      res["ActivityId"] = boost::any(*activityId);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (floorIndex) {
      res["FloorIndex"] = boost::any(*floorIndex);
    }
    if (mock) {
      res["Mock"] = boost::any(*mock);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (refresh) {
      res["Refresh"] = boost::any(*refresh);
    }
    if (umId) {
      res["UmId"] = boost::any(*umId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivityId") != m.end() && !m["ActivityId"].empty()) {
      activityId = make_shared<long>(boost::any_cast<long>(m["ActivityId"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      extendInfo = make_shared<string>(boost::any_cast<string>(m["ExtendInfo"]));
    }
    if (m.find("FloorIndex") != m.end() && !m["FloorIndex"].empty()) {
      floorIndex = make_shared<long>(boost::any_cast<long>(m["FloorIndex"]));
    }
    if (m.find("Mock") != m.end() && !m["Mock"].empty()) {
      mock = make_shared<bool>(boost::any_cast<bool>(m["Mock"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Refresh") != m.end() && !m["Refresh"].empty()) {
      refresh = make_shared<bool>(boost::any_cast<bool>(m["Refresh"]));
    }
    if (m.find("UmId") != m.end() && !m["UmId"].empty()) {
      umId = make_shared<string>(boost::any_cast<string>(m["UmId"]));
    }
  }


  virtual ~QueryActivityItemsRequest() = default;
};
class QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloorSubTitlesSubFloor : public Darabonba::Model {
public:
  shared_ptr<string> icon{};
  shared_ptr<string> name{};
  shared_ptr<string> title{};
  shared_ptr<string> value{};

  QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloorSubTitlesSubFloor() {}

  explicit QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloorSubTitlesSubFloor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloorSubTitlesSubFloor() = default;
};
class QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloorSubTitles : public Darabonba::Model {
public:
  shared_ptr<vector<QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloorSubTitlesSubFloor>> subFloor{};

  QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloorSubTitles() {}

  explicit QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloorSubTitles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subFloor) {
      vector<boost::any> temp1;
      for(auto item1:*subFloor){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subFloor"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("subFloor") != m.end() && !m["subFloor"].empty()) {
      if (typeid(vector<boost::any>) == m["subFloor"].type()) {
        vector<QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloorSubTitlesSubFloor> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subFloor"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloorSubTitlesSubFloor model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subFloor = make_shared<vector<QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloorSubTitlesSubFloor>>(expect1);
      }
    }
  }


  virtual ~QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloorSubTitles() = default;
};
class QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloor : public Darabonba::Model {
public:
  shared_ptr<string> icon{};
  shared_ptr<long> index{};
  shared_ptr<string> name{};
  shared_ptr<QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloorSubTitles> subTitles{};
  shared_ptr<string> title{};

  QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloor() {}

  explicit QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (subTitles) {
      res["SubTitles"] = subTitles ? boost::any(subTitles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SubTitles") != m.end() && !m["SubTitles"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubTitles"].type()) {
        QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloorSubTitles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubTitles"]));
        subTitles = make_shared<QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloorSubTitles>(model1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloor() = default;
};
class QueryActivityItemsResponseBodyModuleFloorDisplayInfos : public Darabonba::Model {
public:
  shared_ptr<vector<QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloor>> floor{};

  QueryActivityItemsResponseBodyModuleFloorDisplayInfos() {}

  explicit QueryActivityItemsResponseBodyModuleFloorDisplayInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (floor) {
      vector<boost::any> temp1;
      for(auto item1:*floor){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["floor"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("floor") != m.end() && !m["floor"].empty()) {
      if (typeid(vector<boost::any>) == m["floor"].type()) {
        vector<QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloor> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["floor"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloor model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        floor = make_shared<vector<QueryActivityItemsResponseBodyModuleFloorDisplayInfosFloor>>(expect1);
      }
    }
  }


  virtual ~QueryActivityItemsResponseBodyModuleFloorDisplayInfos() = default;
};
class QueryActivityItemsResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<QueryActivityItemsResponseBodyModuleFloorDisplayInfos> floorDisplayInfos{};
  shared_ptr<string> floorItems{};

  QueryActivityItemsResponseBodyModule() {}

  explicit QueryActivityItemsResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (floorDisplayInfos) {
      res["FloorDisplayInfos"] = floorDisplayInfos ? boost::any(floorDisplayInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (floorItems) {
      res["FloorItems"] = boost::any(*floorItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("FloorDisplayInfos") != m.end() && !m["FloorDisplayInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["FloorDisplayInfos"].type()) {
        QueryActivityItemsResponseBodyModuleFloorDisplayInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FloorDisplayInfos"]));
        floorDisplayInfos = make_shared<QueryActivityItemsResponseBodyModuleFloorDisplayInfos>(model1);
      }
    }
    if (m.find("FloorItems") != m.end() && !m["FloorItems"].empty()) {
      floorItems = make_shared<string>(boost::any_cast<string>(m["FloorItems"]));
    }
  }


  virtual ~QueryActivityItemsResponseBodyModule() = default;
};
class QueryActivityItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryActivityItemsResponseBodyModule> module{};

  QueryActivityItemsResponseBody() {}

  explicit QueryActivityItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (module) {
      res["Module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      if (typeid(map<string, boost::any>) == m["Module"].type()) {
        QueryActivityItemsResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Module"]));
        module = make_shared<QueryActivityItemsResponseBodyModule>(model1);
      }
    }
  }


  virtual ~QueryActivityItemsResponseBody() = default;
};
class QueryActivityItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryActivityItemsResponseBody> body{};

  QueryActivityItemsResponse() {}

  explicit QueryActivityItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryActivityItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryActivityItemsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryActivityItemsResponse() = default;
};
class QueryAliyunUidRequest : public Darabonba::Model {
public:
  shared_ptr<string> tbUid{};

  QueryAliyunUidRequest() {}

  explicit QueryAliyunUidRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tbUid) {
      res["TbUid"] = boost::any(*tbUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TbUid") != m.end() && !m["TbUid"].empty()) {
      tbUid = make_shared<string>(boost::any_cast<string>(m["TbUid"]));
    }
  }


  virtual ~QueryAliyunUidRequest() = default;
};
class QueryAliyunUidResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> uid{};

  QueryAliyunUidResponseBody() {}

  explicit QueryAliyunUidResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (uid) {
      res["Uid"] = boost::any(*uid);
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
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~QueryAliyunUidResponseBody() = default;
};
class QueryAliyunUidResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAliyunUidResponseBody> body{};

  QueryAliyunUidResponse() {}

  explicit QueryAliyunUidResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAliyunUidResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAliyunUidResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAliyunUidResponse() = default;
};
class QueryDetailItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> detailConvertType{};
  shared_ptr<string> detailId{};
  shared_ptr<string> detailType{};
  shared_ptr<bool> mock{};

  QueryDetailItemRequest() {}

  explicit QueryDetailItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailConvertType) {
      res["DetailConvertType"] = boost::any(*detailConvertType);
    }
    if (detailId) {
      res["DetailId"] = boost::any(*detailId);
    }
    if (detailType) {
      res["DetailType"] = boost::any(*detailType);
    }
    if (mock) {
      res["Mock"] = boost::any(*mock);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailConvertType") != m.end() && !m["DetailConvertType"].empty()) {
      detailConvertType = make_shared<string>(boost::any_cast<string>(m["DetailConvertType"]));
    }
    if (m.find("DetailId") != m.end() && !m["DetailId"].empty()) {
      detailId = make_shared<string>(boost::any_cast<string>(m["DetailId"]));
    }
    if (m.find("DetailType") != m.end() && !m["DetailType"].empty()) {
      detailType = make_shared<string>(boost::any_cast<string>(m["DetailType"]));
    }
    if (m.find("Mock") != m.end() && !m["Mock"].empty()) {
      mock = make_shared<bool>(boost::any_cast<bool>(m["Mock"]));
    }
  }


  virtual ~QueryDetailItemRequest() = default;
};
class QueryDetailItemResponseBodyModuleAttributesAttribute : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> title{};
  shared_ptr<string> value{};

  QueryDetailItemResponseBodyModuleAttributesAttribute() {}

  explicit QueryDetailItemResponseBodyModuleAttributesAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~QueryDetailItemResponseBodyModuleAttributesAttribute() = default;
};
class QueryDetailItemResponseBodyModuleAttributes : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDetailItemResponseBodyModuleAttributesAttribute>> attribute{};

  QueryDetailItemResponseBodyModuleAttributes() {}

  explicit QueryDetailItemResponseBodyModuleAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attribute) {
      vector<boost::any> temp1;
      for(auto item1:*attribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["attribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      if (typeid(vector<boost::any>) == m["attribute"].type()) {
        vector<QueryDetailItemResponseBodyModuleAttributesAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["attribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDetailItemResponseBodyModuleAttributesAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attribute = make_shared<vector<QueryDetailItemResponseBodyModuleAttributesAttribute>>(expect1);
      }
    }
  }


  virtual ~QueryDetailItemResponseBodyModuleAttributes() = default;
};
class QueryDetailItemResponseBodyModuleDetailPicUrl : public Darabonba::Model {
public:
  shared_ptr<vector<string>> picUlr{};

  QueryDetailItemResponseBodyModuleDetailPicUrl() {}

  explicit QueryDetailItemResponseBodyModuleDetailPicUrl(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picUlr) {
      res["picUlr"] = boost::any(*picUlr);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("picUlr") != m.end() && !m["picUlr"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["picUlr"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["picUlr"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      picUlr = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryDetailItemResponseBodyModuleDetailPicUrl() = default;
};
class QueryDetailItemResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<QueryDetailItemResponseBodyModuleAttributes> attributes{};
  shared_ptr<string> detailDescription{};
  shared_ptr<string> detailObjectJson{};
  shared_ptr<string> detailPagePicUrl{};
  shared_ptr<QueryDetailItemResponseBodyModuleDetailPicUrl> detailPicUrl{};
  shared_ptr<string> label{};
  shared_ptr<string> mainPicUrl{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  QueryDetailItemResponseBodyModule() {}

  explicit QueryDetailItemResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = attributes ? boost::any(attributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (detailDescription) {
      res["DetailDescription"] = boost::any(*detailDescription);
    }
    if (detailObjectJson) {
      res["DetailObjectJson"] = boost::any(*detailObjectJson);
    }
    if (detailPagePicUrl) {
      res["DetailPagePicUrl"] = boost::any(*detailPagePicUrl);
    }
    if (detailPicUrl) {
      res["DetailPicUrl"] = detailPicUrl ? boost::any(detailPicUrl->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (mainPicUrl) {
      res["MainPicUrl"] = boost::any(*mainPicUrl);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Attributes"].type()) {
        QueryDetailItemResponseBodyModuleAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Attributes"]));
        attributes = make_shared<QueryDetailItemResponseBodyModuleAttributes>(model1);
      }
    }
    if (m.find("DetailDescription") != m.end() && !m["DetailDescription"].empty()) {
      detailDescription = make_shared<string>(boost::any_cast<string>(m["DetailDescription"]));
    }
    if (m.find("DetailObjectJson") != m.end() && !m["DetailObjectJson"].empty()) {
      detailObjectJson = make_shared<string>(boost::any_cast<string>(m["DetailObjectJson"]));
    }
    if (m.find("DetailPagePicUrl") != m.end() && !m["DetailPagePicUrl"].empty()) {
      detailPagePicUrl = make_shared<string>(boost::any_cast<string>(m["DetailPagePicUrl"]));
    }
    if (m.find("DetailPicUrl") != m.end() && !m["DetailPicUrl"].empty()) {
      if (typeid(map<string, boost::any>) == m["DetailPicUrl"].type()) {
        QueryDetailItemResponseBodyModuleDetailPicUrl model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DetailPicUrl"]));
        detailPicUrl = make_shared<QueryDetailItemResponseBodyModuleDetailPicUrl>(model1);
      }
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("MainPicUrl") != m.end() && !m["MainPicUrl"].empty()) {
      mainPicUrl = make_shared<string>(boost::any_cast<string>(m["MainPicUrl"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~QueryDetailItemResponseBodyModule() = default;
};
class QueryDetailItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryDetailItemResponseBodyModule> module{};

  QueryDetailItemResponseBody() {}

  explicit QueryDetailItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (module) {
      res["Module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      if (typeid(map<string, boost::any>) == m["Module"].type()) {
        QueryDetailItemResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Module"]));
        module = make_shared<QueryDetailItemResponseBodyModule>(model1);
      }
    }
  }


  virtual ~QueryDetailItemResponseBody() = default;
};
class QueryDetailItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDetailItemResponseBody> body{};

  QueryDetailItemResponse() {}

  explicit QueryDetailItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDetailItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDetailItemResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDetailItemResponse() = default;
};
class QueryRemainResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};

  QueryRemainResourcesRequest() {}

  explicit QueryRemainResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
  }


  virtual ~QueryRemainResourcesRequest() = default;
};
class QueryRemainResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<string> requestId{};

  QueryRemainResourcesResponseBody() {}

  explicit QueryRemainResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryRemainResourcesResponseBody() = default;
};
class QueryRemainResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRemainResourcesResponseBody> body{};

  QueryRemainResourcesResponse() {}

  explicit QueryRemainResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryRemainResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRemainResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRemainResourcesResponse() = default;
};
class RefuseSupplementRequest : public Darabonba::Model {
public:
  shared_ptr<long> supplementId{};

  RefuseSupplementRequest() {}

  explicit RefuseSupplementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supplementId) {
      res["SupplementId"] = boost::any(*supplementId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupplementId") != m.end() && !m["SupplementId"].empty()) {
      supplementId = make_shared<long>(boost::any_cast<long>(m["SupplementId"]));
    }
  }


  virtual ~RefuseSupplementRequest() = default;
};
class RefuseSupplementResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RefuseSupplementResponseBody() {}

  explicit RefuseSupplementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RefuseSupplementResponseBody() = default;
};
class RefuseSupplementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefuseSupplementResponseBody> body{};

  RefuseSupplementResponse() {}

  explicit RefuseSupplementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefuseSupplementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefuseSupplementResponseBody>(model1);
      }
    }
  }


  virtual ~RefuseSupplementResponse() = default;
};
class RejectExpertSolutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> note{};

  RejectExpertSolutionRequest() {}

  explicit RejectExpertSolutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (note) {
      res["Note"] = boost::any(*note);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
  }


  virtual ~RejectExpertSolutionRequest() = default;
};
class RejectExpertSolutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RejectExpertSolutionResponseBody() {}

  explicit RejectExpertSolutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RejectExpertSolutionResponseBody() = default;
};
class RejectExpertSolutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RejectExpertSolutionResponseBody> body{};

  RejectExpertSolutionResponse() {}

  explicit RejectExpertSolutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RejectExpertSolutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RejectExpertSolutionResponseBody>(model1);
      }
    }
  }


  virtual ~RejectExpertSolutionResponse() = default;
};
class RemoveApplicantRequest : public Darabonba::Model {
public:
  shared_ptr<long> applicantId{};

  RemoveApplicantRequest() {}

  explicit RemoveApplicantRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<long>(boost::any_cast<long>(m["ApplicantId"]));
    }
  }


  virtual ~RemoveApplicantRequest() = default;
};
class RemoveApplicantResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RemoveApplicantResponseBody() {}

  explicit RemoveApplicantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveApplicantResponseBody() = default;
};
class RemoveApplicantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveApplicantResponseBody> body{};

  RemoveApplicantResponse() {}

  explicit RemoveApplicantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveApplicantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveApplicantResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveApplicantResponse() = default;
};
class SaveSearchConditionRequest : public Darabonba::Model {
public:
  shared_ptr<string> conditionContent{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> tagName{};
  shared_ptr<long> type{};
  shared_ptr<string> umid{};

  SaveSearchConditionRequest() {}

  explicit SaveSearchConditionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionContent) {
      res["ConditionContent"] = boost::any(*conditionContent);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (umid) {
      res["Umid"] = boost::any(*umid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionContent") != m.end() && !m["ConditionContent"].empty()) {
      conditionContent = make_shared<string>(boost::any_cast<string>(m["ConditionContent"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Umid") != m.end() && !m["Umid"].empty()) {
      umid = make_shared<string>(boost::any_cast<string>(m["Umid"]));
    }
  }


  virtual ~SaveSearchConditionRequest() = default;
};
class SaveSearchConditionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> conditionContent{};
  shared_ptr<long> conditionId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};
  shared_ptr<bool> success{};
  shared_ptr<string> tagName{};
  shared_ptr<long> type{};
  shared_ptr<string> umid{};
  shared_ptr<long> userId{};

  SaveSearchConditionResponseBody() {}

  explicit SaveSearchConditionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (conditionContent) {
      res["ConditionContent"] = boost::any(*conditionContent);
    }
    if (conditionId) {
      res["ConditionId"] = boost::any(*conditionId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (umid) {
      res["Umid"] = boost::any(*umid);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ConditionContent") != m.end() && !m["ConditionContent"].empty()) {
      conditionContent = make_shared<string>(boost::any_cast<string>(m["ConditionContent"]));
    }
    if (m.find("ConditionId") != m.end() && !m["ConditionId"].empty()) {
      conditionId = make_shared<long>(boost::any_cast<long>(m["ConditionId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Umid") != m.end() && !m["Umid"].empty()) {
      umid = make_shared<string>(boost::any_cast<string>(m["Umid"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~SaveSearchConditionResponseBody() = default;
};
class SaveSearchConditionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveSearchConditionResponseBody> body{};

  SaveSearchConditionResponse() {}

  explicit SaveSearchConditionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveSearchConditionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveSearchConditionResponseBody>(model1);
      }
    }
  }


  virtual ~SaveSearchConditionResponse() = default;
};
class SaveTemporaryApplicantRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<long> applicantId{};
  shared_ptr<string> businessLicenceOssKey{};
  shared_ptr<string> cardNumber{};
  shared_ptr<string> city{};
  shared_ptr<bool> completeApplicant{};
  shared_ptr<string> contactAddress{};
  shared_ptr<string> contactCity{};
  shared_ptr<string> contactCounty{};
  shared_ptr<string> contactDistrict{};
  shared_ptr<string> contactEmail{};
  shared_ptr<string> contactName{};
  shared_ptr<string> contactNumber{};
  shared_ptr<string> contactProvince{};
  shared_ptr<string> contactZipCode{};
  shared_ptr<string> country{};
  shared_ptr<string> EAddress{};
  shared_ptr<string> EName{};
  shared_ptr<string> idCardOssKey{};
  shared_ptr<string> legalNoticeOssKey{};
  shared_ptr<string> loaOssKey{};
  shared_ptr<string> name{};
  shared_ptr<string> passportOssKey{};
  shared_ptr<long> principalName{};
  shared_ptr<string> province{};
  shared_ptr<string> region{};
  shared_ptr<string> town{};
  shared_ptr<string> type{};

  SaveTemporaryApplicantRequest() {}

  explicit SaveTemporaryApplicantRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    if (businessLicenceOssKey) {
      res["BusinessLicenceOssKey"] = boost::any(*businessLicenceOssKey);
    }
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (completeApplicant) {
      res["CompleteApplicant"] = boost::any(*completeApplicant);
    }
    if (contactAddress) {
      res["ContactAddress"] = boost::any(*contactAddress);
    }
    if (contactCity) {
      res["ContactCity"] = boost::any(*contactCity);
    }
    if (contactCounty) {
      res["ContactCounty"] = boost::any(*contactCounty);
    }
    if (contactDistrict) {
      res["ContactDistrict"] = boost::any(*contactDistrict);
    }
    if (contactEmail) {
      res["ContactEmail"] = boost::any(*contactEmail);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (contactNumber) {
      res["ContactNumber"] = boost::any(*contactNumber);
    }
    if (contactProvince) {
      res["ContactProvince"] = boost::any(*contactProvince);
    }
    if (contactZipCode) {
      res["ContactZipCode"] = boost::any(*contactZipCode);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (EAddress) {
      res["EAddress"] = boost::any(*EAddress);
    }
    if (EName) {
      res["EName"] = boost::any(*EName);
    }
    if (idCardOssKey) {
      res["IdCardOssKey"] = boost::any(*idCardOssKey);
    }
    if (legalNoticeOssKey) {
      res["LegalNoticeOssKey"] = boost::any(*legalNoticeOssKey);
    }
    if (loaOssKey) {
      res["LoaOssKey"] = boost::any(*loaOssKey);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (passportOssKey) {
      res["PassportOssKey"] = boost::any(*passportOssKey);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (town) {
      res["Town"] = boost::any(*town);
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
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<long>(boost::any_cast<long>(m["ApplicantId"]));
    }
    if (m.find("BusinessLicenceOssKey") != m.end() && !m["BusinessLicenceOssKey"].empty()) {
      businessLicenceOssKey = make_shared<string>(boost::any_cast<string>(m["BusinessLicenceOssKey"]));
    }
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("CompleteApplicant") != m.end() && !m["CompleteApplicant"].empty()) {
      completeApplicant = make_shared<bool>(boost::any_cast<bool>(m["CompleteApplicant"]));
    }
    if (m.find("ContactAddress") != m.end() && !m["ContactAddress"].empty()) {
      contactAddress = make_shared<string>(boost::any_cast<string>(m["ContactAddress"]));
    }
    if (m.find("ContactCity") != m.end() && !m["ContactCity"].empty()) {
      contactCity = make_shared<string>(boost::any_cast<string>(m["ContactCity"]));
    }
    if (m.find("ContactCounty") != m.end() && !m["ContactCounty"].empty()) {
      contactCounty = make_shared<string>(boost::any_cast<string>(m["ContactCounty"]));
    }
    if (m.find("ContactDistrict") != m.end() && !m["ContactDistrict"].empty()) {
      contactDistrict = make_shared<string>(boost::any_cast<string>(m["ContactDistrict"]));
    }
    if (m.find("ContactEmail") != m.end() && !m["ContactEmail"].empty()) {
      contactEmail = make_shared<string>(boost::any_cast<string>(m["ContactEmail"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("ContactNumber") != m.end() && !m["ContactNumber"].empty()) {
      contactNumber = make_shared<string>(boost::any_cast<string>(m["ContactNumber"]));
    }
    if (m.find("ContactProvince") != m.end() && !m["ContactProvince"].empty()) {
      contactProvince = make_shared<string>(boost::any_cast<string>(m["ContactProvince"]));
    }
    if (m.find("ContactZipCode") != m.end() && !m["ContactZipCode"].empty()) {
      contactZipCode = make_shared<string>(boost::any_cast<string>(m["ContactZipCode"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("EAddress") != m.end() && !m["EAddress"].empty()) {
      EAddress = make_shared<string>(boost::any_cast<string>(m["EAddress"]));
    }
    if (m.find("EName") != m.end() && !m["EName"].empty()) {
      EName = make_shared<string>(boost::any_cast<string>(m["EName"]));
    }
    if (m.find("IdCardOssKey") != m.end() && !m["IdCardOssKey"].empty()) {
      idCardOssKey = make_shared<string>(boost::any_cast<string>(m["IdCardOssKey"]));
    }
    if (m.find("LegalNoticeOssKey") != m.end() && !m["LegalNoticeOssKey"].empty()) {
      legalNoticeOssKey = make_shared<string>(boost::any_cast<string>(m["LegalNoticeOssKey"]));
    }
    if (m.find("LoaOssKey") != m.end() && !m["LoaOssKey"].empty()) {
      loaOssKey = make_shared<string>(boost::any_cast<string>(m["LoaOssKey"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PassportOssKey") != m.end() && !m["PassportOssKey"].empty()) {
      passportOssKey = make_shared<string>(boost::any_cast<string>(m["PassportOssKey"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<long>(boost::any_cast<long>(m["PrincipalName"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Town") != m.end() && !m["Town"].empty()) {
      town = make_shared<string>(boost::any_cast<string>(m["Town"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SaveTemporaryApplicantRequest() = default;
};
class SaveTemporaryApplicantResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> applicantId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SaveTemporaryApplicantResponseBody() {}

  explicit SaveTemporaryApplicantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<long>(boost::any_cast<long>(m["ApplicantId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SaveTemporaryApplicantResponseBody() = default;
};
class SaveTemporaryApplicantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveTemporaryApplicantResponseBody> body{};

  SaveTemporaryApplicantResponse() {}

  explicit SaveTemporaryApplicantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveTemporaryApplicantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveTemporaryApplicantResponseBody>(model1);
      }
    }
  }


  virtual ~SaveTemporaryApplicantResponse() = default;
};
class SearchItemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> excludedTags{};
  shared_ptr<string> excludedUids{};
  shared_ptr<bool> feedsType{};
  shared_ptr<string> intCls{};
  shared_ptr<string> keywords{};
  shared_ptr<bool> mock{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> priceLeft{};
  shared_ptr<string> priceRight{};
  shared_ptr<string> products{};
  shared_ptr<string> registerNumber{};
  shared_ptr<string> sort{};
  shared_ptr<long> sortType{};
  shared_ptr<string> tags{};
  shared_ptr<long> trademarkNameLength{};
  shared_ptr<string> trademarkNameType{};
  shared_ptr<string> umId{};

  SearchItemsRequest() {}

  explicit SearchItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludedTags) {
      res["ExcludedTags"] = boost::any(*excludedTags);
    }
    if (excludedUids) {
      res["ExcludedUids"] = boost::any(*excludedUids);
    }
    if (feedsType) {
      res["FeedsType"] = boost::any(*feedsType);
    }
    if (intCls) {
      res["IntCls"] = boost::any(*intCls);
    }
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (mock) {
      res["Mock"] = boost::any(*mock);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (priceLeft) {
      res["PriceLeft"] = boost::any(*priceLeft);
    }
    if (priceRight) {
      res["PriceRight"] = boost::any(*priceRight);
    }
    if (products) {
      res["Products"] = boost::any(*products);
    }
    if (registerNumber) {
      res["RegisterNumber"] = boost::any(*registerNumber);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (sortType) {
      res["SortType"] = boost::any(*sortType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (trademarkNameLength) {
      res["TrademarkNameLength"] = boost::any(*trademarkNameLength);
    }
    if (trademarkNameType) {
      res["TrademarkNameType"] = boost::any(*trademarkNameType);
    }
    if (umId) {
      res["UmId"] = boost::any(*umId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludedTags") != m.end() && !m["ExcludedTags"].empty()) {
      excludedTags = make_shared<string>(boost::any_cast<string>(m["ExcludedTags"]));
    }
    if (m.find("ExcludedUids") != m.end() && !m["ExcludedUids"].empty()) {
      excludedUids = make_shared<string>(boost::any_cast<string>(m["ExcludedUids"]));
    }
    if (m.find("FeedsType") != m.end() && !m["FeedsType"].empty()) {
      feedsType = make_shared<bool>(boost::any_cast<bool>(m["FeedsType"]));
    }
    if (m.find("IntCls") != m.end() && !m["IntCls"].empty()) {
      intCls = make_shared<string>(boost::any_cast<string>(m["IntCls"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("Mock") != m.end() && !m["Mock"].empty()) {
      mock = make_shared<bool>(boost::any_cast<bool>(m["Mock"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PriceLeft") != m.end() && !m["PriceLeft"].empty()) {
      priceLeft = make_shared<string>(boost::any_cast<string>(m["PriceLeft"]));
    }
    if (m.find("PriceRight") != m.end() && !m["PriceRight"].empty()) {
      priceRight = make_shared<string>(boost::any_cast<string>(m["PriceRight"]));
    }
    if (m.find("Products") != m.end() && !m["Products"].empty()) {
      products = make_shared<string>(boost::any_cast<string>(m["Products"]));
    }
    if (m.find("RegisterNumber") != m.end() && !m["RegisterNumber"].empty()) {
      registerNumber = make_shared<string>(boost::any_cast<string>(m["RegisterNumber"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("SortType") != m.end() && !m["SortType"].empty()) {
      sortType = make_shared<long>(boost::any_cast<long>(m["SortType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("TrademarkNameLength") != m.end() && !m["TrademarkNameLength"].empty()) {
      trademarkNameLength = make_shared<long>(boost::any_cast<long>(m["TrademarkNameLength"]));
    }
    if (m.find("TrademarkNameType") != m.end() && !m["TrademarkNameType"].empty()) {
      trademarkNameType = make_shared<string>(boost::any_cast<string>(m["TrademarkNameType"]));
    }
    if (m.find("UmId") != m.end() && !m["UmId"].empty()) {
      umId = make_shared<string>(boost::any_cast<string>(m["UmId"]));
    }
  }


  virtual ~SearchItemsRequest() = default;
};
class SearchItemsResponseBodyModuleDateItem : public Darabonba::Model {
public:
  shared_ptr<string> detailViewObjectSourceDatum{};
  shared_ptr<string> detailViewObjectSourceType{};

  SearchItemsResponseBodyModuleDateItem() {}

  explicit SearchItemsResponseBodyModuleDateItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailViewObjectSourceDatum) {
      res["DetailViewObjectSourceDatum"] = boost::any(*detailViewObjectSourceDatum);
    }
    if (detailViewObjectSourceType) {
      res["DetailViewObjectSourceType"] = boost::any(*detailViewObjectSourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailViewObjectSourceDatum") != m.end() && !m["DetailViewObjectSourceDatum"].empty()) {
      detailViewObjectSourceDatum = make_shared<string>(boost::any_cast<string>(m["DetailViewObjectSourceDatum"]));
    }
    if (m.find("DetailViewObjectSourceType") != m.end() && !m["DetailViewObjectSourceType"].empty()) {
      detailViewObjectSourceType = make_shared<string>(boost::any_cast<string>(m["DetailViewObjectSourceType"]));
    }
  }


  virtual ~SearchItemsResponseBodyModuleDateItem() = default;
};
class SearchItemsResponseBodyModuleDate : public Darabonba::Model {
public:
  shared_ptr<vector<SearchItemsResponseBodyModuleDateItem>> item{};

  SearchItemsResponseBodyModuleDate() {}

  explicit SearchItemsResponseBodyModuleDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["item"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("item") != m.end() && !m["item"].empty()) {
      if (typeid(vector<boost::any>) == m["item"].type()) {
        vector<SearchItemsResponseBodyModuleDateItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchItemsResponseBodyModuleDateItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<SearchItemsResponseBodyModuleDateItem>>(expect1);
      }
    }
  }


  virtual ~SearchItemsResponseBodyModuleDate() = default;
};
class SearchItemsResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<long> currentPageNum{};
  shared_ptr<SearchItemsResponseBodyModuleDate> date{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalItemNum{};
  shared_ptr<long> totalPageNum{};

  SearchItemsResponseBodyModule() {}

  explicit SearchItemsResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPageNum) {
      res["CurrentPageNum"] = boost::any(*currentPageNum);
    }
    if (date) {
      res["Date"] = date ? boost::any(date->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalItemNum) {
      res["TotalItemNum"] = boost::any(*totalItemNum);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPageNum") != m.end() && !m["CurrentPageNum"].empty()) {
      currentPageNum = make_shared<long>(boost::any_cast<long>(m["CurrentPageNum"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      if (typeid(map<string, boost::any>) == m["Date"].type()) {
        SearchItemsResponseBodyModuleDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Date"]));
        date = make_shared<SearchItemsResponseBodyModuleDate>(model1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalItemNum") != m.end() && !m["TotalItemNum"].empty()) {
      totalItemNum = make_shared<long>(boost::any_cast<long>(m["TotalItemNum"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~SearchItemsResponseBodyModule() = default;
};
class SearchItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<SearchItemsResponseBodyModule> module{};

  SearchItemsResponseBody() {}

  explicit SearchItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (module) {
      res["Module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      if (typeid(map<string, boost::any>) == m["Module"].type()) {
        SearchItemsResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Module"]));
        module = make_shared<SearchItemsResponseBodyModule>(model1);
      }
    }
  }


  virtual ~SearchItemsResponseBody() = default;
};
class SearchItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchItemsResponseBody> body{};

  SearchItemsResponse() {}

  explicit SearchItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchItemsResponseBody>(model1);
      }
    }
  }


  virtual ~SearchItemsResponse() = default;
};
class SearchSimilarityRequestNameUriList : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> uri{};

  SearchSimilarityRequestNameUriList() {}

  explicit SearchSimilarityRequestNameUriList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~SearchSimilarityRequestNameUriList() = default;
};
class SearchSimilarityRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> classifications{};
  shared_ptr<long> limit{};
  shared_ptr<vector<SearchSimilarityRequestNameUriList>> nameUriList{};
  shared_ptr<string> searchType{};
  shared_ptr<bool> showDetail{};
  shared_ptr<map<string, boost::any>> similarGroups{};
  shared_ptr<string> sorter{};
  shared_ptr<string> umid{};

  SearchSimilarityRequest() {}

  explicit SearchSimilarityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classifications) {
      res["Classifications"] = boost::any(*classifications);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (nameUriList) {
      vector<boost::any> temp1;
      for(auto item1:*nameUriList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NameUriList"] = boost::any(temp1);
    }
    if (searchType) {
      res["SearchType"] = boost::any(*searchType);
    }
    if (showDetail) {
      res["ShowDetail"] = boost::any(*showDetail);
    }
    if (similarGroups) {
      res["SimilarGroups"] = boost::any(*similarGroups);
    }
    if (sorter) {
      res["Sorter"] = boost::any(*sorter);
    }
    if (umid) {
      res["Umid"] = boost::any(*umid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classifications") != m.end() && !m["Classifications"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Classifications"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      classifications = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NameUriList") != m.end() && !m["NameUriList"].empty()) {
      if (typeid(vector<boost::any>) == m["NameUriList"].type()) {
        vector<SearchSimilarityRequestNameUriList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NameUriList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchSimilarityRequestNameUriList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nameUriList = make_shared<vector<SearchSimilarityRequestNameUriList>>(expect1);
      }
    }
    if (m.find("SearchType") != m.end() && !m["SearchType"].empty()) {
      searchType = make_shared<string>(boost::any_cast<string>(m["SearchType"]));
    }
    if (m.find("ShowDetail") != m.end() && !m["ShowDetail"].empty()) {
      showDetail = make_shared<bool>(boost::any_cast<bool>(m["ShowDetail"]));
    }
    if (m.find("SimilarGroups") != m.end() && !m["SimilarGroups"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["SimilarGroups"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      similarGroups = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Sorter") != m.end() && !m["Sorter"].empty()) {
      sorter = make_shared<string>(boost::any_cast<string>(m["Sorter"]));
    }
    if (m.find("Umid") != m.end() && !m["Umid"].empty()) {
      umid = make_shared<string>(boost::any_cast<string>(m["Umid"]));
    }
  }


  virtual ~SearchSimilarityRequest() = default;
};
class SearchSimilarityShrinkRequestNameUriList : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> uri{};

  SearchSimilarityShrinkRequestNameUriList() {}

  explicit SearchSimilarityShrinkRequestNameUriList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~SearchSimilarityShrinkRequestNameUriList() = default;
};
class SearchSimilarityShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> classificationsShrink{};
  shared_ptr<long> limit{};
  shared_ptr<vector<SearchSimilarityShrinkRequestNameUriList>> nameUriList{};
  shared_ptr<string> searchType{};
  shared_ptr<bool> showDetail{};
  shared_ptr<string> similarGroupsShrink{};
  shared_ptr<string> sorter{};
  shared_ptr<string> umid{};

  SearchSimilarityShrinkRequest() {}

  explicit SearchSimilarityShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classificationsShrink) {
      res["Classifications"] = boost::any(*classificationsShrink);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (nameUriList) {
      vector<boost::any> temp1;
      for(auto item1:*nameUriList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NameUriList"] = boost::any(temp1);
    }
    if (searchType) {
      res["SearchType"] = boost::any(*searchType);
    }
    if (showDetail) {
      res["ShowDetail"] = boost::any(*showDetail);
    }
    if (similarGroupsShrink) {
      res["SimilarGroups"] = boost::any(*similarGroupsShrink);
    }
    if (sorter) {
      res["Sorter"] = boost::any(*sorter);
    }
    if (umid) {
      res["Umid"] = boost::any(*umid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classifications") != m.end() && !m["Classifications"].empty()) {
      classificationsShrink = make_shared<string>(boost::any_cast<string>(m["Classifications"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("NameUriList") != m.end() && !m["NameUriList"].empty()) {
      if (typeid(vector<boost::any>) == m["NameUriList"].type()) {
        vector<SearchSimilarityShrinkRequestNameUriList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NameUriList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchSimilarityShrinkRequestNameUriList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nameUriList = make_shared<vector<SearchSimilarityShrinkRequestNameUriList>>(expect1);
      }
    }
    if (m.find("SearchType") != m.end() && !m["SearchType"].empty()) {
      searchType = make_shared<string>(boost::any_cast<string>(m["SearchType"]));
    }
    if (m.find("ShowDetail") != m.end() && !m["ShowDetail"].empty()) {
      showDetail = make_shared<bool>(boost::any_cast<bool>(m["ShowDetail"]));
    }
    if (m.find("SimilarGroups") != m.end() && !m["SimilarGroups"].empty()) {
      similarGroupsShrink = make_shared<string>(boost::any_cast<string>(m["SimilarGroups"]));
    }
    if (m.find("Sorter") != m.end() && !m["Sorter"].empty()) {
      sorter = make_shared<string>(boost::any_cast<string>(m["Sorter"]));
    }
    if (m.find("Umid") != m.end() && !m["Umid"].empty()) {
      umid = make_shared<string>(boost::any_cast<string>(m["Umid"]));
    }
  }


  virtual ~SearchSimilarityShrinkRequest() = default;
};
class SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupListDetailList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};
  shared_ptr<long> rate{};
  shared_ptr<string> tmNumber{};
  shared_ptr<string> uid{};
  shared_ptr<string> uri{};

  SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupListDetailList() {}

  explicit SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupListDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (tmNumber) {
      res["TmNumber"] = boost::any(*tmNumber);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<long>(boost::any_cast<long>(m["Rate"]));
    }
    if (m.find("TmNumber") != m.end() && !m["TmNumber"].empty()) {
      tmNumber = make_shared<string>(boost::any_cast<string>(m["TmNumber"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupListDetailList() = default;
};
class SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupList : public Darabonba::Model {
public:
  shared_ptr<vector<SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupListDetailList>> detailList{};
  shared_ptr<long> rate{};
  shared_ptr<string> similarGroup{};
  shared_ptr<string> similarGroupName{};

  SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupList() {}

  explicit SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailList) {
      vector<boost::any> temp1;
      for(auto item1:*detailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetailList"] = boost::any(temp1);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (similarGroup) {
      res["SimilarGroup"] = boost::any(*similarGroup);
    }
    if (similarGroupName) {
      res["SimilarGroupName"] = boost::any(*similarGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailList") != m.end() && !m["DetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["DetailList"].type()) {
        vector<SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupListDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupListDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detailList = make_shared<vector<SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupListDetailList>>(expect1);
      }
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<long>(boost::any_cast<long>(m["Rate"]));
    }
    if (m.find("SimilarGroup") != m.end() && !m["SimilarGroup"].empty()) {
      similarGroup = make_shared<string>(boost::any_cast<string>(m["SimilarGroup"]));
    }
    if (m.find("SimilarGroupName") != m.end() && !m["SimilarGroupName"].empty()) {
      similarGroupName = make_shared<string>(boost::any_cast<string>(m["SimilarGroupName"]));
    }
  }


  virtual ~SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupList() = default;
};
class SearchSimilarityResponseBodyDataListClassificationSimilarityList : public Darabonba::Model {
public:
  shared_ptr<long> classification{};
  shared_ptr<string> classificationName{};
  shared_ptr<long> rate{};
  shared_ptr<vector<SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupList>> similarGroupList{};

  SearchSimilarityResponseBodyDataListClassificationSimilarityList() {}

  explicit SearchSimilarityResponseBodyDataListClassificationSimilarityList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classification) {
      res["Classification"] = boost::any(*classification);
    }
    if (classificationName) {
      res["ClassificationName"] = boost::any(*classificationName);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (similarGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*similarGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SimilarGroupList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classification") != m.end() && !m["Classification"].empty()) {
      classification = make_shared<long>(boost::any_cast<long>(m["Classification"]));
    }
    if (m.find("ClassificationName") != m.end() && !m["ClassificationName"].empty()) {
      classificationName = make_shared<string>(boost::any_cast<string>(m["ClassificationName"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<long>(boost::any_cast<long>(m["Rate"]));
    }
    if (m.find("SimilarGroupList") != m.end() && !m["SimilarGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["SimilarGroupList"].type()) {
        vector<SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SimilarGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        similarGroupList = make_shared<vector<SearchSimilarityResponseBodyDataListClassificationSimilarityListSimilarGroupList>>(expect1);
      }
    }
  }


  virtual ~SearchSimilarityResponseBodyDataListClassificationSimilarityList() = default;
};
class SearchSimilarityResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<vector<SearchSimilarityResponseBodyDataListClassificationSimilarityList>> classificationSimilarityList{};
  shared_ptr<string> name{};
  shared_ptr<string> uri{};

  SearchSimilarityResponseBodyDataList() {}

  explicit SearchSimilarityResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classificationSimilarityList) {
      vector<boost::any> temp1;
      for(auto item1:*classificationSimilarityList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClassificationSimilarityList"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassificationSimilarityList") != m.end() && !m["ClassificationSimilarityList"].empty()) {
      if (typeid(vector<boost::any>) == m["ClassificationSimilarityList"].type()) {
        vector<SearchSimilarityResponseBodyDataListClassificationSimilarityList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClassificationSimilarityList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchSimilarityResponseBodyDataListClassificationSimilarityList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        classificationSimilarityList = make_shared<vector<SearchSimilarityResponseBodyDataListClassificationSimilarityList>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~SearchSimilarityResponseBodyDataList() = default;
};
class SearchSimilarityResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SearchSimilarityResponseBodyDataList>> dataList{};
  shared_ptr<string> requestId{};

  SearchSimilarityResponseBody() {}

  explicit SearchSimilarityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<SearchSimilarityResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchSimilarityResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<SearchSimilarityResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SearchSimilarityResponseBody() = default;
};
class SearchSimilarityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchSimilarityResponseBody> body{};

  SearchSimilarityResponse() {}

  explicit SearchSimilarityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchSimilarityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchSimilarityResponseBody>(model1);
      }
    }
  }


  virtual ~SearchSimilarityResponse() = default;
};
class SearchSimilarityListRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> classifications{};
  shared_ptr<string> name{};
  shared_ptr<string> orderId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<map<string, boost::any>> similarGroups{};
  shared_ptr<long> status{};
  shared_ptr<string> successSearchType{};
  shared_ptr<string> umid{};
  shared_ptr<string> uri{};

  SearchSimilarityListRequest() {}

  explicit SearchSimilarityListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classifications) {
      res["Classifications"] = boost::any(*classifications);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (similarGroups) {
      res["SimilarGroups"] = boost::any(*similarGroups);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (successSearchType) {
      res["SuccessSearchType"] = boost::any(*successSearchType);
    }
    if (umid) {
      res["Umid"] = boost::any(*umid);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classifications") != m.end() && !m["Classifications"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Classifications"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      classifications = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SimilarGroups") != m.end() && !m["SimilarGroups"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["SimilarGroups"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      similarGroups = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SuccessSearchType") != m.end() && !m["SuccessSearchType"].empty()) {
      successSearchType = make_shared<string>(boost::any_cast<string>(m["SuccessSearchType"]));
    }
    if (m.find("Umid") != m.end() && !m["Umid"].empty()) {
      umid = make_shared<string>(boost::any_cast<string>(m["Umid"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~SearchSimilarityListRequest() = default;
};
class SearchSimilarityListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> classificationsShrink{};
  shared_ptr<string> name{};
  shared_ptr<string> orderId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> similarGroupsShrink{};
  shared_ptr<long> status{};
  shared_ptr<string> successSearchType{};
  shared_ptr<string> umid{};
  shared_ptr<string> uri{};

  SearchSimilarityListShrinkRequest() {}

  explicit SearchSimilarityListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classificationsShrink) {
      res["Classifications"] = boost::any(*classificationsShrink);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (similarGroupsShrink) {
      res["SimilarGroups"] = boost::any(*similarGroupsShrink);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (successSearchType) {
      res["SuccessSearchType"] = boost::any(*successSearchType);
    }
    if (umid) {
      res["Umid"] = boost::any(*umid);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classifications") != m.end() && !m["Classifications"].empty()) {
      classificationsShrink = make_shared<string>(boost::any_cast<string>(m["Classifications"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SimilarGroups") != m.end() && !m["SimilarGroups"].empty()) {
      similarGroupsShrink = make_shared<string>(boost::any_cast<string>(m["SimilarGroups"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SuccessSearchType") != m.end() && !m["SuccessSearchType"].empty()) {
      successSearchType = make_shared<string>(boost::any_cast<string>(m["SuccessSearchType"]));
    }
    if (m.find("Umid") != m.end() && !m["Umid"].empty()) {
      umid = make_shared<string>(boost::any_cast<string>(m["Umid"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~SearchSimilarityListShrinkRequest() = default;
};
class SearchSimilarityListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> applyDate{};
  shared_ptr<string> classification{};
  shared_ptr<string> exclusiveDateLimit{};
  shared_ptr<long> id{};
  shared_ptr<string> image{};
  shared_ptr<string> lastProcedureStatus{};
  shared_ptr<string> name{};
  shared_ptr<long> onSale{};
  shared_ptr<string> ownerAddress{};
  shared_ptr<string> ownerEnAddress{};
  shared_ptr<string> ownerEnName{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> preAnnDate{};
  shared_ptr<string> preAnnNum{};
  shared_ptr<string> product{};
  shared_ptr<string> productDesc{};
  shared_ptr<string> regAnnDate{};
  shared_ptr<string> regAnnNum{};
  shared_ptr<string> registrationNumber{};
  shared_ptr<string> share{};
  shared_ptr<string> status{};
  shared_ptr<string> uid{};

  SearchSimilarityListResponseBodyData() {}

  explicit SearchSimilarityListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyDate) {
      res["ApplyDate"] = boost::any(*applyDate);
    }
    if (classification) {
      res["Classification"] = boost::any(*classification);
    }
    if (exclusiveDateLimit) {
      res["ExclusiveDateLimit"] = boost::any(*exclusiveDateLimit);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (lastProcedureStatus) {
      res["LastProcedureStatus"] = boost::any(*lastProcedureStatus);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (onSale) {
      res["OnSale"] = boost::any(*onSale);
    }
    if (ownerAddress) {
      res["OwnerAddress"] = boost::any(*ownerAddress);
    }
    if (ownerEnAddress) {
      res["OwnerEnAddress"] = boost::any(*ownerEnAddress);
    }
    if (ownerEnName) {
      res["OwnerEnName"] = boost::any(*ownerEnName);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (preAnnDate) {
      res["PreAnnDate"] = boost::any(*preAnnDate);
    }
    if (preAnnNum) {
      res["PreAnnNum"] = boost::any(*preAnnNum);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (productDesc) {
      res["ProductDesc"] = boost::any(*productDesc);
    }
    if (regAnnDate) {
      res["RegAnnDate"] = boost::any(*regAnnDate);
    }
    if (regAnnNum) {
      res["RegAnnNum"] = boost::any(*regAnnNum);
    }
    if (registrationNumber) {
      res["RegistrationNumber"] = boost::any(*registrationNumber);
    }
    if (share) {
      res["Share"] = boost::any(*share);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyDate") != m.end() && !m["ApplyDate"].empty()) {
      applyDate = make_shared<string>(boost::any_cast<string>(m["ApplyDate"]));
    }
    if (m.find("Classification") != m.end() && !m["Classification"].empty()) {
      classification = make_shared<string>(boost::any_cast<string>(m["Classification"]));
    }
    if (m.find("ExclusiveDateLimit") != m.end() && !m["ExclusiveDateLimit"].empty()) {
      exclusiveDateLimit = make_shared<string>(boost::any_cast<string>(m["ExclusiveDateLimit"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("LastProcedureStatus") != m.end() && !m["LastProcedureStatus"].empty()) {
      lastProcedureStatus = make_shared<string>(boost::any_cast<string>(m["LastProcedureStatus"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OnSale") != m.end() && !m["OnSale"].empty()) {
      onSale = make_shared<long>(boost::any_cast<long>(m["OnSale"]));
    }
    if (m.find("OwnerAddress") != m.end() && !m["OwnerAddress"].empty()) {
      ownerAddress = make_shared<string>(boost::any_cast<string>(m["OwnerAddress"]));
    }
    if (m.find("OwnerEnAddress") != m.end() && !m["OwnerEnAddress"].empty()) {
      ownerEnAddress = make_shared<string>(boost::any_cast<string>(m["OwnerEnAddress"]));
    }
    if (m.find("OwnerEnName") != m.end() && !m["OwnerEnName"].empty()) {
      ownerEnName = make_shared<string>(boost::any_cast<string>(m["OwnerEnName"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("PreAnnDate") != m.end() && !m["PreAnnDate"].empty()) {
      preAnnDate = make_shared<string>(boost::any_cast<string>(m["PreAnnDate"]));
    }
    if (m.find("PreAnnNum") != m.end() && !m["PreAnnNum"].empty()) {
      preAnnNum = make_shared<string>(boost::any_cast<string>(m["PreAnnNum"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ProductDesc") != m.end() && !m["ProductDesc"].empty()) {
      productDesc = make_shared<string>(boost::any_cast<string>(m["ProductDesc"]));
    }
    if (m.find("RegAnnDate") != m.end() && !m["RegAnnDate"].empty()) {
      regAnnDate = make_shared<string>(boost::any_cast<string>(m["RegAnnDate"]));
    }
    if (m.find("RegAnnNum") != m.end() && !m["RegAnnNum"].empty()) {
      regAnnNum = make_shared<string>(boost::any_cast<string>(m["RegAnnNum"]));
    }
    if (m.find("RegistrationNumber") != m.end() && !m["RegistrationNumber"].empty()) {
      registrationNumber = make_shared<string>(boost::any_cast<string>(m["RegistrationNumber"]));
    }
    if (m.find("Share") != m.end() && !m["Share"].empty()) {
      share = make_shared<string>(boost::any_cast<string>(m["Share"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~SearchSimilarityListResponseBodyData() = default;
};
class SearchSimilarityListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SearchSimilarityListResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  SearchSimilarityListResponseBody() {}

  explicit SearchSimilarityListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<SearchSimilarityListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchSimilarityListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<SearchSimilarityListResponseBodyData>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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


  virtual ~SearchSimilarityListResponseBody() = default;
};
class SearchSimilarityListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchSimilarityListResponseBody> body{};

  SearchSimilarityListResponse() {}

  explicit SearchSimilarityListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchSimilarityListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchSimilarityListResponseBody>(model1);
      }
    }
  }


  virtual ~SearchSimilarityListResponse() = default;
};
class SendMessageToUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> receiverNickName{};
  shared_ptr<string> senderNickName{};
  shared_ptr<map<string, boost::any>> templateData{};
  shared_ptr<string> templateId{};

  SendMessageToUserRequest() {}

  explicit SendMessageToUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (receiverNickName) {
      res["ReceiverNickName"] = boost::any(*receiverNickName);
    }
    if (senderNickName) {
      res["SenderNickName"] = boost::any(*senderNickName);
    }
    if (templateData) {
      res["TemplateData"] = boost::any(*templateData);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReceiverNickName") != m.end() && !m["ReceiverNickName"].empty()) {
      receiverNickName = make_shared<string>(boost::any_cast<string>(m["ReceiverNickName"]));
    }
    if (m.find("SenderNickName") != m.end() && !m["SenderNickName"].empty()) {
      senderNickName = make_shared<string>(boost::any_cast<string>(m["SenderNickName"]));
    }
    if (m.find("TemplateData") != m.end() && !m["TemplateData"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["TemplateData"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      templateData = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~SendMessageToUserRequest() = default;
};
class SendMessageToUserShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> receiverNickName{};
  shared_ptr<string> senderNickName{};
  shared_ptr<string> templateDataShrink{};
  shared_ptr<string> templateId{};

  SendMessageToUserShrinkRequest() {}

  explicit SendMessageToUserShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (receiverNickName) {
      res["ReceiverNickName"] = boost::any(*receiverNickName);
    }
    if (senderNickName) {
      res["SenderNickName"] = boost::any(*senderNickName);
    }
    if (templateDataShrink) {
      res["TemplateData"] = boost::any(*templateDataShrink);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReceiverNickName") != m.end() && !m["ReceiverNickName"].empty()) {
      receiverNickName = make_shared<string>(boost::any_cast<string>(m["ReceiverNickName"]));
    }
    if (m.find("SenderNickName") != m.end() && !m["SenderNickName"].empty()) {
      senderNickName = make_shared<string>(boost::any_cast<string>(m["SenderNickName"]));
    }
    if (m.find("TemplateData") != m.end() && !m["TemplateData"].empty()) {
      templateDataShrink = make_shared<string>(boost::any_cast<string>(m["TemplateData"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~SendMessageToUserShrinkRequest() = default;
};
class SendMessageToUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendMessageToUserResponseBody() {}

  explicit SendMessageToUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SendMessageToUserResponseBody() = default;
};
class SendMessageToUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendMessageToUserResponseBody> body{};

  SendMessageToUserResponse() {}

  explicit SendMessageToUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendMessageToUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendMessageToUserResponseBody>(model1);
      }
    }
  }


  virtual ~SendMessageToUserResponse() = default;
};
class SubmitSupplementRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> supplementId{};
  shared_ptr<map<string, boost::any>> userFiles{};

  SubmitSupplementRequest() {}

  explicit SubmitSupplementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (supplementId) {
      res["SupplementId"] = boost::any(*supplementId);
    }
    if (userFiles) {
      res["UserFiles"] = boost::any(*userFiles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("SupplementId") != m.end() && !m["SupplementId"].empty()) {
      supplementId = make_shared<long>(boost::any_cast<long>(m["SupplementId"]));
    }
    if (m.find("UserFiles") != m.end() && !m["UserFiles"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["UserFiles"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      userFiles = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~SubmitSupplementRequest() = default;
};
class SubmitSupplementShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> supplementId{};
  shared_ptr<string> userFilesShrink{};

  SubmitSupplementShrinkRequest() {}

  explicit SubmitSupplementShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (supplementId) {
      res["SupplementId"] = boost::any(*supplementId);
    }
    if (userFilesShrink) {
      res["UserFiles"] = boost::any(*userFilesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("SupplementId") != m.end() && !m["SupplementId"].empty()) {
      supplementId = make_shared<long>(boost::any_cast<long>(m["SupplementId"]));
    }
    if (m.find("UserFiles") != m.end() && !m["UserFiles"].empty()) {
      userFilesShrink = make_shared<string>(boost::any_cast<string>(m["UserFiles"]));
    }
  }


  virtual ~SubmitSupplementShrinkRequest() = default;
};
class SubmitSupplementResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SubmitSupplementResponseBody() {}

  explicit SubmitSupplementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SubmitSupplementResponseBody() = default;
};
class SubmitSupplementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitSupplementResponseBody> body{};

  SubmitSupplementResponse() {}

  explicit SubmitSupplementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitSupplementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitSupplementResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitSupplementResponse() = default;
};
class UpdateApplicantRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<long> applicantId{};
  shared_ptr<string> applicantName{};
  shared_ptr<string> authorizationOssKey{};
  shared_ptr<string> businessLicenceOssKey{};
  shared_ptr<string> cardNumber{};
  shared_ptr<string> contactAddress{};
  shared_ptr<string> contactCity{};
  shared_ptr<string> contactCounty{};
  shared_ptr<string> contactDistrict{};
  shared_ptr<string> contactEmail{};
  shared_ptr<string> contactName{};
  shared_ptr<string> contactNumber{};
  shared_ptr<string> contactProvince{};
  shared_ptr<string> contactZipcode{};
  shared_ptr<string> EAddress{};
  shared_ptr<string> EName{};
  shared_ptr<string> idCardName{};
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> idCardOssKey{};
  shared_ptr<string> legalNoticeOssKey{};
  shared_ptr<string> passportOssKey{};
  shared_ptr<long> personalType{};
  shared_ptr<string> province{};

  UpdateApplicantRequest() {}

  explicit UpdateApplicantRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    if (applicantName) {
      res["ApplicantName"] = boost::any(*applicantName);
    }
    if (authorizationOssKey) {
      res["AuthorizationOssKey"] = boost::any(*authorizationOssKey);
    }
    if (businessLicenceOssKey) {
      res["BusinessLicenceOssKey"] = boost::any(*businessLicenceOssKey);
    }
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (contactAddress) {
      res["ContactAddress"] = boost::any(*contactAddress);
    }
    if (contactCity) {
      res["ContactCity"] = boost::any(*contactCity);
    }
    if (contactCounty) {
      res["ContactCounty"] = boost::any(*contactCounty);
    }
    if (contactDistrict) {
      res["ContactDistrict"] = boost::any(*contactDistrict);
    }
    if (contactEmail) {
      res["ContactEmail"] = boost::any(*contactEmail);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (contactNumber) {
      res["ContactNumber"] = boost::any(*contactNumber);
    }
    if (contactProvince) {
      res["ContactProvince"] = boost::any(*contactProvince);
    }
    if (contactZipcode) {
      res["ContactZipcode"] = boost::any(*contactZipcode);
    }
    if (EAddress) {
      res["EAddress"] = boost::any(*EAddress);
    }
    if (EName) {
      res["EName"] = boost::any(*EName);
    }
    if (idCardName) {
      res["IdCardName"] = boost::any(*idCardName);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (idCardOssKey) {
      res["IdCardOssKey"] = boost::any(*idCardOssKey);
    }
    if (legalNoticeOssKey) {
      res["LegalNoticeOssKey"] = boost::any(*legalNoticeOssKey);
    }
    if (passportOssKey) {
      res["PassportOssKey"] = boost::any(*passportOssKey);
    }
    if (personalType) {
      res["PersonalType"] = boost::any(*personalType);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<long>(boost::any_cast<long>(m["ApplicantId"]));
    }
    if (m.find("ApplicantName") != m.end() && !m["ApplicantName"].empty()) {
      applicantName = make_shared<string>(boost::any_cast<string>(m["ApplicantName"]));
    }
    if (m.find("AuthorizationOssKey") != m.end() && !m["AuthorizationOssKey"].empty()) {
      authorizationOssKey = make_shared<string>(boost::any_cast<string>(m["AuthorizationOssKey"]));
    }
    if (m.find("BusinessLicenceOssKey") != m.end() && !m["BusinessLicenceOssKey"].empty()) {
      businessLicenceOssKey = make_shared<string>(boost::any_cast<string>(m["BusinessLicenceOssKey"]));
    }
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("ContactAddress") != m.end() && !m["ContactAddress"].empty()) {
      contactAddress = make_shared<string>(boost::any_cast<string>(m["ContactAddress"]));
    }
    if (m.find("ContactCity") != m.end() && !m["ContactCity"].empty()) {
      contactCity = make_shared<string>(boost::any_cast<string>(m["ContactCity"]));
    }
    if (m.find("ContactCounty") != m.end() && !m["ContactCounty"].empty()) {
      contactCounty = make_shared<string>(boost::any_cast<string>(m["ContactCounty"]));
    }
    if (m.find("ContactDistrict") != m.end() && !m["ContactDistrict"].empty()) {
      contactDistrict = make_shared<string>(boost::any_cast<string>(m["ContactDistrict"]));
    }
    if (m.find("ContactEmail") != m.end() && !m["ContactEmail"].empty()) {
      contactEmail = make_shared<string>(boost::any_cast<string>(m["ContactEmail"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("ContactNumber") != m.end() && !m["ContactNumber"].empty()) {
      contactNumber = make_shared<string>(boost::any_cast<string>(m["ContactNumber"]));
    }
    if (m.find("ContactProvince") != m.end() && !m["ContactProvince"].empty()) {
      contactProvince = make_shared<string>(boost::any_cast<string>(m["ContactProvince"]));
    }
    if (m.find("ContactZipcode") != m.end() && !m["ContactZipcode"].empty()) {
      contactZipcode = make_shared<string>(boost::any_cast<string>(m["ContactZipcode"]));
    }
    if (m.find("EAddress") != m.end() && !m["EAddress"].empty()) {
      EAddress = make_shared<string>(boost::any_cast<string>(m["EAddress"]));
    }
    if (m.find("EName") != m.end() && !m["EName"].empty()) {
      EName = make_shared<string>(boost::any_cast<string>(m["EName"]));
    }
    if (m.find("IdCardName") != m.end() && !m["IdCardName"].empty()) {
      idCardName = make_shared<string>(boost::any_cast<string>(m["IdCardName"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("IdCardOssKey") != m.end() && !m["IdCardOssKey"].empty()) {
      idCardOssKey = make_shared<string>(boost::any_cast<string>(m["IdCardOssKey"]));
    }
    if (m.find("LegalNoticeOssKey") != m.end() && !m["LegalNoticeOssKey"].empty()) {
      legalNoticeOssKey = make_shared<string>(boost::any_cast<string>(m["LegalNoticeOssKey"]));
    }
    if (m.find("PassportOssKey") != m.end() && !m["PassportOssKey"].empty()) {
      passportOssKey = make_shared<string>(boost::any_cast<string>(m["PassportOssKey"]));
    }
    if (m.find("PersonalType") != m.end() && !m["PersonalType"].empty()) {
      personalType = make_shared<long>(boost::any_cast<long>(m["PersonalType"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
  }


  virtual ~UpdateApplicantRequest() = default;
};
class UpdateApplicantResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateApplicantResponseBody() {}

  explicit UpdateApplicantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateApplicantResponseBody() = default;
};
class UpdateApplicantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateApplicantResponseBody> body{};

  UpdateApplicantResponse() {}

  explicit UpdateApplicantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateApplicantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateApplicantResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateApplicantResponse() = default;
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
  BindApplicantResponse bindApplicantWithOptions(shared_ptr<BindApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindApplicantResponse bindApplicant(shared_ptr<BindApplicantRequest> request);
  CancelOrderResponse cancelOrderWithOptions(shared_ptr<CancelOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelOrderResponse cancelOrder(shared_ptr<CancelOrderRequest> request);
  CheckAuthorizationLetterResponse checkAuthorizationLetterWithOptions(shared_ptr<CheckAuthorizationLetterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckAuthorizationLetterResponse checkAuthorizationLetter(shared_ptr<CheckAuthorizationLetterRequest> request);
  CheckBizAvailableResponse checkBizAvailableWithOptions(shared_ptr<CheckBizAvailableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckBizAvailableResponse checkBizAvailable(shared_ptr<CheckBizAvailableRequest> request);
  CheckDuplicateApplicantRiskResponse checkDuplicateApplicantRiskWithOptions(shared_ptr<CheckDuplicateApplicantRiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDuplicateApplicantRiskResponse checkDuplicateApplicantRisk(shared_ptr<CheckDuplicateApplicantRiskRequest> request);
  CheckDuplicateClassificationResponse checkDuplicateClassificationWithOptions(shared_ptr<CheckDuplicateClassificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDuplicateClassificationResponse checkDuplicateClassification(shared_ptr<CheckDuplicateClassificationRequest> request);
  CheckDuplicateTrademarkResponse checkDuplicateTrademarkWithOptions(shared_ptr<CheckDuplicateTrademarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDuplicateTrademarkResponse checkDuplicateTrademark(shared_ptr<CheckDuplicateTrademarkRequest> request);
  CheckMaterialValidityResponse checkMaterialValidityWithOptions(shared_ptr<CheckMaterialValidityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckMaterialValidityResponse checkMaterialValidity(shared_ptr<CheckMaterialValidityRequest> request);
  CheckTrademarkNameResponse checkTrademarkNameWithOptions(shared_ptr<CheckTrademarkNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckTrademarkNameResponse checkTrademarkName(shared_ptr<CheckTrademarkNameRequest> request);
  CloseTrademarkApplicationResponse closeTrademarkApplicationWithOptions(shared_ptr<CloseTrademarkApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseTrademarkApplicationResponse closeTrademarkApplication(shared_ptr<CloseTrademarkApplicationRequest> request);
  CombineAuthorizationLetterResponse combineAuthorizationLetterWithOptions(shared_ptr<CombineAuthorizationLetterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CombineAuthorizationLetterResponse combineAuthorizationLetter(shared_ptr<CombineAuthorizationLetterRequest> request);
  ComplementTrademarkApplicationResponse complementTrademarkApplicationWithOptions(shared_ptr<ComplementTrademarkApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ComplementTrademarkApplicationResponse complementTrademarkApplication(shared_ptr<ComplementTrademarkApplicationRequest> request);
  ConfirmExpertSolutionResponse confirmExpertSolutionWithOptions(shared_ptr<ConfirmExpertSolutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfirmExpertSolutionResponse confirmExpertSolution(shared_ptr<ConfirmExpertSolutionRequest> request);
  CreateApplicantResponse createApplicantWithOptions(shared_ptr<CreateApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApplicantResponse createApplicant(shared_ptr<CreateApplicantRequest> request);
  CreateCommodityOrderResponse createCommodityOrderWithOptions(shared_ptr<CreateCommodityOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCommodityOrderResponse createCommodityOrder(shared_ptr<CreateCommodityOrderRequest> request);
  CreateOrderResponse createOrderWithOptions(shared_ptr<CreateOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOrderResponse createOrder(shared_ptr<CreateOrderRequest> request);
  CreateTrademarkApplicationResponse createTrademarkApplicationWithOptions(shared_ptr<CreateTrademarkApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTrademarkApplicationResponse createTrademarkApplication(shared_ptr<CreateTrademarkApplicationRequest> request);
  DeleteSearchConditionResponse deleteSearchConditionWithOptions(shared_ptr<DeleteSearchConditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSearchConditionResponse deleteSearchCondition(shared_ptr<DeleteSearchConditionRequest> request);
  DescribeAdminTrademarkApplicationResponse describeAdminTrademarkApplicationWithOptions(shared_ptr<DescribeAdminTrademarkApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAdminTrademarkApplicationResponse describeAdminTrademarkApplication(shared_ptr<DescribeAdminTrademarkApplicationRequest> request);
  DescribeApplicantResponse describeApplicantWithOptions(shared_ptr<DescribeApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApplicantResponse describeApplicant(shared_ptr<DescribeApplicantRequest> request);
  DescribePartnerTrademarkApplicationResponse describePartnerTrademarkApplicationWithOptions(shared_ptr<DescribePartnerTrademarkApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePartnerTrademarkApplicationResponse describePartnerTrademarkApplication(shared_ptr<DescribePartnerTrademarkApplicationRequest> request);
  DescribeQualificationStatusResponse describeQualificationStatusWithOptions(shared_ptr<DescribeQualificationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeQualificationStatusResponse describeQualificationStatus(shared_ptr<DescribeQualificationStatusRequest> request);
  DescribeSupplementResponse describeSupplementWithOptions(shared_ptr<DescribeSupplementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSupplementResponse describeSupplement(shared_ptr<DescribeSupplementRequest> request);
  DescribeTrademarkApplicationResponse describeTrademarkApplicationWithOptions(shared_ptr<DescribeTrademarkApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTrademarkApplicationResponse describeTrademarkApplication(shared_ptr<DescribeTrademarkApplicationRequest> request);
  DescribeTrademarkDetailForInnerResponse describeTrademarkDetailForInnerWithOptions(shared_ptr<DescribeTrademarkDetailForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTrademarkDetailForInnerResponse describeTrademarkDetailForInner(shared_ptr<DescribeTrademarkDetailForInnerRequest> request);
  GenerateUploadFilePolicyResponse generateUploadFilePolicyWithOptions(shared_ptr<GenerateUploadFilePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateUploadFilePolicyResponse generateUploadFilePolicy(shared_ptr<GenerateUploadFilePolicyRequest> request);
  GetAlipayUrlResponse getAlipayUrlWithOptions(shared_ptr<GetAlipayUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAlipayUrlResponse getAlipayUrl(shared_ptr<GetAlipayUrlRequest> request);
  GetOrderConfirmUrlResponse getOrderConfirmUrlWithOptions(shared_ptr<GetOrderConfirmUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrderConfirmUrlResponse getOrderConfirmUrl(shared_ptr<GetOrderConfirmUrlRequest> request);
  GetStsByTaobaoUidResponse getStsByTaobaoUidWithOptions(shared_ptr<GetStsByTaobaoUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStsByTaobaoUidResponse getStsByTaobaoUid(shared_ptr<GetStsByTaobaoUidRequest> request);
  ListAdminTrademarkApplicationLogsResponse listAdminTrademarkApplicationLogsWithOptions(shared_ptr<ListAdminTrademarkApplicationLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAdminTrademarkApplicationLogsResponse listAdminTrademarkApplicationLogs(shared_ptr<ListAdminTrademarkApplicationLogsRequest> request);
  ListAdminTrademarkApplicationsResponse listAdminTrademarkApplicationsWithOptions(shared_ptr<ListAdminTrademarkApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAdminTrademarkApplicationsResponse listAdminTrademarkApplications(shared_ptr<ListAdminTrademarkApplicationsRequest> request);
  ListApplicantsResponse listApplicantsWithOptions(shared_ptr<ListApplicantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplicantsResponse listApplicants(shared_ptr<ListApplicantsRequest> request);
  ListAreasResponse listAreasWithOptions(shared_ptr<ListAreasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAreasResponse listAreas(shared_ptr<ListAreasRequest> request);
  ListClassificationConditionsResponse listClassificationConditionsWithOptions(shared_ptr<ListClassificationConditionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClassificationConditionsResponse listClassificationConditions(shared_ptr<ListClassificationConditionsRequest> request);
  ListClassificationsResponse listClassificationsWithOptions(shared_ptr<ListClassificationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClassificationsResponse listClassifications(shared_ptr<ListClassificationsRequest> request);
  ListTrademarkApplicationLogsResponse listTrademarkApplicationLogsWithOptions(shared_ptr<ListTrademarkApplicationLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTrademarkApplicationLogsResponse listTrademarkApplicationLogs(shared_ptr<ListTrademarkApplicationLogsRequest> request);
  ListTrademarkApplicationsResponse listTrademarkApplicationsWithOptions(shared_ptr<ListTrademarkApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTrademarkApplicationsResponse listTrademarkApplications(shared_ptr<ListTrademarkApplicationsRequest> request);
  ListTrademarkSearchForInnerResponse listTrademarkSearchForInnerWithOptions(shared_ptr<ListTrademarkSearchForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTrademarkSearchForInnerResponse listTrademarkSearchForInner(shared_ptr<ListTrademarkSearchForInnerRequest> request);
  PutMeasureDataResponse putMeasureDataWithOptions(shared_ptr<PutMeasureDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutMeasureDataResponse putMeasureData(shared_ptr<PutMeasureDataRequest> request);
  PutMeasureReadyFlagResponse putMeasureReadyFlagWithOptions(shared_ptr<PutMeasureReadyFlagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutMeasureReadyFlagResponse putMeasureReadyFlag(shared_ptr<PutMeasureReadyFlagRequest> request);
  QueryActivityItemsResponse queryActivityItemsWithOptions(shared_ptr<QueryActivityItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryActivityItemsResponse queryActivityItems(shared_ptr<QueryActivityItemsRequest> request);
  QueryAliyunUidResponse queryAliyunUidWithOptions(shared_ptr<QueryAliyunUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAliyunUidResponse queryAliyunUid(shared_ptr<QueryAliyunUidRequest> request);
  QueryDetailItemResponse queryDetailItemWithOptions(shared_ptr<QueryDetailItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDetailItemResponse queryDetailItem(shared_ptr<QueryDetailItemRequest> request);
  QueryRemainResourcesResponse queryRemainResourcesWithOptions(shared_ptr<QueryRemainResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRemainResourcesResponse queryRemainResources(shared_ptr<QueryRemainResourcesRequest> request);
  RefuseSupplementResponse refuseSupplementWithOptions(shared_ptr<RefuseSupplementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefuseSupplementResponse refuseSupplement(shared_ptr<RefuseSupplementRequest> request);
  RejectExpertSolutionResponse rejectExpertSolutionWithOptions(shared_ptr<RejectExpertSolutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RejectExpertSolutionResponse rejectExpertSolution(shared_ptr<RejectExpertSolutionRequest> request);
  RemoveApplicantResponse removeApplicantWithOptions(shared_ptr<RemoveApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveApplicantResponse removeApplicant(shared_ptr<RemoveApplicantRequest> request);
  SaveSearchConditionResponse saveSearchConditionWithOptions(shared_ptr<SaveSearchConditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveSearchConditionResponse saveSearchCondition(shared_ptr<SaveSearchConditionRequest> request);
  SaveTemporaryApplicantResponse saveTemporaryApplicantWithOptions(shared_ptr<SaveTemporaryApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveTemporaryApplicantResponse saveTemporaryApplicant(shared_ptr<SaveTemporaryApplicantRequest> request);
  SearchItemsResponse searchItemsWithOptions(shared_ptr<SearchItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchItemsResponse searchItems(shared_ptr<SearchItemsRequest> request);
  SearchSimilarityResponse searchSimilarityWithOptions(shared_ptr<SearchSimilarityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchSimilarityResponse searchSimilarity(shared_ptr<SearchSimilarityRequest> request);
  SearchSimilarityListResponse searchSimilarityListWithOptions(shared_ptr<SearchSimilarityListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchSimilarityListResponse searchSimilarityList(shared_ptr<SearchSimilarityListRequest> request);
  SendMessageToUserResponse sendMessageToUserWithOptions(shared_ptr<SendMessageToUserRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendMessageToUserResponse sendMessageToUser(shared_ptr<SendMessageToUserRequest> request);
  SubmitSupplementResponse submitSupplementWithOptions(shared_ptr<SubmitSupplementRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitSupplementResponse submitSupplement(shared_ptr<SubmitSupplementRequest> request);
  UpdateApplicantResponse updateApplicantWithOptions(shared_ptr<UpdateApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateApplicantResponse updateApplicant(shared_ptr<UpdateApplicantRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Trademark20190902

#endif
