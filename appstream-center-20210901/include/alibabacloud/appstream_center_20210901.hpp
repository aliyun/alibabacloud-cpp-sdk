// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_APPSTREAM-CENTER20210901_H_
#define ALIBABACLOUD_APPSTREAM-CENTER20210901_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Appstream-center20210901 {
class AccessPageSetAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessMode{};
  shared_ptr<string> accessPageId{};
  shared_ptr<string> accessPageName{};
  shared_ptr<long> effectTime{};
  shared_ptr<string> unit{};

  AccessPageSetAclRequest() {}

  explicit AccessPageSetAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessMode) {
      res["AccessMode"] = boost::any(*accessMode);
    }
    if (accessPageId) {
      res["AccessPageId"] = boost::any(*accessPageId);
    }
    if (accessPageName) {
      res["AccessPageName"] = boost::any(*accessPageName);
    }
    if (effectTime) {
      res["EffectTime"] = boost::any(*effectTime);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessMode") != m.end() && !m["AccessMode"].empty()) {
      accessMode = make_shared<string>(boost::any_cast<string>(m["AccessMode"]));
    }
    if (m.find("AccessPageId") != m.end() && !m["AccessPageId"].empty()) {
      accessPageId = make_shared<string>(boost::any_cast<string>(m["AccessPageId"]));
    }
    if (m.find("AccessPageName") != m.end() && !m["AccessPageName"].empty()) {
      accessPageName = make_shared<string>(boost::any_cast<string>(m["AccessPageName"]));
    }
    if (m.find("EffectTime") != m.end() && !m["EffectTime"].empty()) {
      effectTime = make_shared<long>(boost::any_cast<long>(m["EffectTime"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
  }


  virtual ~AccessPageSetAclRequest() = default;
};
class AccessPageSetAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  AccessPageSetAclResponseBody() {}

  explicit AccessPageSetAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~AccessPageSetAclResponseBody() = default;
};
class AccessPageSetAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AccessPageSetAclResponseBody> body{};

  AccessPageSetAclResponse() {}

  explicit AccessPageSetAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AccessPageSetAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AccessPageSetAclResponseBody>(model1);
      }
    }
  }


  virtual ~AccessPageSetAclResponse() = default;
};
class ApproveOtaTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> otaType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskId{};

  ApproveOtaTaskRequest() {}

  explicit ApproveOtaTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (otaType) {
      res["OtaType"] = boost::any(*otaType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("OtaType") != m.end() && !m["OtaType"].empty()) {
      otaType = make_shared<string>(boost::any_cast<string>(m["OtaType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ApproveOtaTaskRequest() = default;
};
class ApproveOtaTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ApproveOtaTaskResponseBody() {}

  explicit ApproveOtaTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~ApproveOtaTaskResponseBody() = default;
};
class ApproveOtaTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApproveOtaTaskResponseBody> body{};

  ApproveOtaTaskResponse() {}

  explicit ApproveOtaTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApproveOtaTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApproveOtaTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ApproveOtaTaskResponse() = default;
};
class AskSessionPackagePriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<long> maxSessions{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> region{};
  shared_ptr<string> sessionPackageType{};
  shared_ptr<string> sessionSpec{};
  shared_ptr<string> sessionType{};

  AskSessionPackagePriceRequest() {}

  explicit AskSessionPackagePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (maxSessions) {
      res["MaxSessions"] = boost::any(*maxSessions);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (sessionPackageType) {
      res["SessionPackageType"] = boost::any(*sessionPackageType);
    }
    if (sessionSpec) {
      res["SessionSpec"] = boost::any(*sessionSpec);
    }
    if (sessionType) {
      res["SessionType"] = boost::any(*sessionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("MaxSessions") != m.end() && !m["MaxSessions"].empty()) {
      maxSessions = make_shared<long>(boost::any_cast<long>(m["MaxSessions"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("SessionPackageType") != m.end() && !m["SessionPackageType"].empty()) {
      sessionPackageType = make_shared<string>(boost::any_cast<string>(m["SessionPackageType"]));
    }
    if (m.find("SessionSpec") != m.end() && !m["SessionSpec"].empty()) {
      sessionSpec = make_shared<string>(boost::any_cast<string>(m["SessionSpec"]));
    }
    if (m.find("SessionType") != m.end() && !m["SessionType"].empty()) {
      sessionType = make_shared<string>(boost::any_cast<string>(m["SessionType"]));
    }
  }


  virtual ~AskSessionPackagePriceRequest() = default;
};
class AskSessionPackagePriceResponseBodyDataPrice : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<double> discountPrice{};
  shared_ptr<double> originalPrice{};
  shared_ptr<double> tradePrice{};

  AskSessionPackagePriceResponseBodyDataPrice() {}

  explicit AskSessionPackagePriceResponseBodyDataPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~AskSessionPackagePriceResponseBodyDataPrice() = default;
};
class AskSessionPackagePriceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<AskSessionPackagePriceResponseBodyDataPrice> price{};

  AskSessionPackagePriceResponseBodyData() {}

  explicit AskSessionPackagePriceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (price) {
      res["Price"] = price ? boost::any(price->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      if (typeid(map<string, boost::any>) == m["Price"].type()) {
        AskSessionPackagePriceResponseBodyDataPrice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Price"]));
        price = make_shared<AskSessionPackagePriceResponseBodyDataPrice>(model1);
      }
    }
  }


  virtual ~AskSessionPackagePriceResponseBodyData() = default;
};
class AskSessionPackagePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<AskSessionPackagePriceResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  AskSessionPackagePriceResponseBody() {}

  explicit AskSessionPackagePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<AskSessionPackagePriceResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AskSessionPackagePriceResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<AskSessionPackagePriceResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AskSessionPackagePriceResponseBody() = default;
};
class AskSessionPackagePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AskSessionPackagePriceResponseBody> body{};

  AskSessionPackagePriceResponse() {}

  explicit AskSessionPackagePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AskSessionPackagePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AskSessionPackagePriceResponseBody>(model1);
      }
    }
  }


  virtual ~AskSessionPackagePriceResponse() = default;
};
class AuthorizeInstanceGroupRequestUserMeta : public Darabonba::Model {
public:
  shared_ptr<string> adDomain{};
  shared_ptr<string> type{};

  AuthorizeInstanceGroupRequestUserMeta() {}

  explicit AuthorizeInstanceGroupRequestUserMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adDomain) {
      res["AdDomain"] = boost::any(*adDomain);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdDomain") != m.end() && !m["AdDomain"].empty()) {
      adDomain = make_shared<string>(boost::any_cast<string>(m["AdDomain"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~AuthorizeInstanceGroupRequestUserMeta() = default;
};
class AuthorizeInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstancePersistentId{};
  shared_ptr<vector<string>> authorizeUserIds{};
  shared_ptr<string> productType{};
  shared_ptr<vector<string>> unAuthorizeUserIds{};
  shared_ptr<AuthorizeInstanceGroupRequestUserMeta> userMeta{};

  AuthorizeInstanceGroupRequest() {}

  explicit AuthorizeInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstancePersistentId) {
      res["AppInstancePersistentId"] = boost::any(*appInstancePersistentId);
    }
    if (authorizeUserIds) {
      res["AuthorizeUserIds"] = boost::any(*authorizeUserIds);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (unAuthorizeUserIds) {
      res["UnAuthorizeUserIds"] = boost::any(*unAuthorizeUserIds);
    }
    if (userMeta) {
      res["UserMeta"] = userMeta ? boost::any(userMeta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstancePersistentId") != m.end() && !m["AppInstancePersistentId"].empty()) {
      appInstancePersistentId = make_shared<string>(boost::any_cast<string>(m["AppInstancePersistentId"]));
    }
    if (m.find("AuthorizeUserIds") != m.end() && !m["AuthorizeUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorizeUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorizeUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizeUserIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("UnAuthorizeUserIds") != m.end() && !m["UnAuthorizeUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnAuthorizeUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnAuthorizeUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unAuthorizeUserIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserMeta") != m.end() && !m["UserMeta"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserMeta"].type()) {
        AuthorizeInstanceGroupRequestUserMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserMeta"]));
        userMeta = make_shared<AuthorizeInstanceGroupRequestUserMeta>(model1);
      }
    }
  }


  virtual ~AuthorizeInstanceGroupRequest() = default;
};
class AuthorizeInstanceGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstancePersistentId{};
  shared_ptr<vector<string>> authorizeUserIds{};
  shared_ptr<string> productType{};
  shared_ptr<vector<string>> unAuthorizeUserIds{};
  shared_ptr<string> userMetaShrink{};

  AuthorizeInstanceGroupShrinkRequest() {}

  explicit AuthorizeInstanceGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstancePersistentId) {
      res["AppInstancePersistentId"] = boost::any(*appInstancePersistentId);
    }
    if (authorizeUserIds) {
      res["AuthorizeUserIds"] = boost::any(*authorizeUserIds);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (unAuthorizeUserIds) {
      res["UnAuthorizeUserIds"] = boost::any(*unAuthorizeUserIds);
    }
    if (userMetaShrink) {
      res["UserMeta"] = boost::any(*userMetaShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstancePersistentId") != m.end() && !m["AppInstancePersistentId"].empty()) {
      appInstancePersistentId = make_shared<string>(boost::any_cast<string>(m["AppInstancePersistentId"]));
    }
    if (m.find("AuthorizeUserIds") != m.end() && !m["AuthorizeUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorizeUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorizeUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizeUserIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("UnAuthorizeUserIds") != m.end() && !m["UnAuthorizeUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UnAuthorizeUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UnAuthorizeUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      unAuthorizeUserIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserMeta") != m.end() && !m["UserMeta"].empty()) {
      userMetaShrink = make_shared<string>(boost::any_cast<string>(m["UserMeta"]));
    }
  }


  virtual ~AuthorizeInstanceGroupShrinkRequest() = default;
};
class AuthorizeInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AuthorizeInstanceGroupResponseBody() {}

  explicit AuthorizeInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AuthorizeInstanceGroupResponseBody() = default;
};
class AuthorizeInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuthorizeInstanceGroupResponseBody> body{};

  AuthorizeInstanceGroupResponse() {}

  explicit AuthorizeInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AuthorizeInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuthorizeInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AuthorizeInstanceGroupResponse() = default;
};
class BuySessionPackageRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> maxSessions{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> projectId{};
  shared_ptr<string> region{};
  shared_ptr<string> sessionPackageName{};
  shared_ptr<string> sessionPackageType{};
  shared_ptr<string> sessionSpec{};
  shared_ptr<string> sessionType{};

  BuySessionPackageRequest() {}

  explicit BuySessionPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (maxSessions) {
      res["MaxSessions"] = boost::any(*maxSessions);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (sessionPackageName) {
      res["SessionPackageName"] = boost::any(*sessionPackageName);
    }
    if (sessionPackageType) {
      res["SessionPackageType"] = boost::any(*sessionPackageType);
    }
    if (sessionSpec) {
      res["SessionSpec"] = boost::any(*sessionSpec);
    }
    if (sessionType) {
      res["SessionType"] = boost::any(*sessionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("MaxSessions") != m.end() && !m["MaxSessions"].empty()) {
      maxSessions = make_shared<long>(boost::any_cast<long>(m["MaxSessions"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("SessionPackageName") != m.end() && !m["SessionPackageName"].empty()) {
      sessionPackageName = make_shared<string>(boost::any_cast<string>(m["SessionPackageName"]));
    }
    if (m.find("SessionPackageType") != m.end() && !m["SessionPackageType"].empty()) {
      sessionPackageType = make_shared<string>(boost::any_cast<string>(m["SessionPackageType"]));
    }
    if (m.find("SessionSpec") != m.end() && !m["SessionSpec"].empty()) {
      sessionSpec = make_shared<string>(boost::any_cast<string>(m["SessionSpec"]));
    }
    if (m.find("SessionType") != m.end() && !m["SessionType"].empty()) {
      sessionType = make_shared<string>(boost::any_cast<string>(m["SessionType"]));
    }
  }


  virtual ~BuySessionPackageRequest() = default;
};
class BuySessionPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> sessionPackageId{};
  shared_ptr<string> success{};

  BuySessionPackageResponseBody() {}

  explicit BuySessionPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (sessionPackageId) {
      res["SessionPackageId"] = boost::any(*sessionPackageId);
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
    if (m.find("SessionPackageId") != m.end() && !m["SessionPackageId"].empty()) {
      sessionPackageId = make_shared<long>(boost::any_cast<long>(m["SessionPackageId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~BuySessionPackageResponseBody() = default;
};
class BuySessionPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BuySessionPackageResponseBody> body{};

  BuySessionPackageResponse() {}

  explicit BuySessionPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BuySessionPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BuySessionPackageResponseBody>(model1);
      }
    }
  }


  virtual ~BuySessionPackageResponse() = default;
};
class CreateAccessPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessPageName{};
  shared_ptr<string> cloudEnvId{};
  shared_ptr<long> effectTime{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> unit{};

  CreateAccessPageRequest() {}

  explicit CreateAccessPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPageName) {
      res["AccessPageName"] = boost::any(*accessPageName);
    }
    if (cloudEnvId) {
      res["CloudEnvId"] = boost::any(*cloudEnvId);
    }
    if (effectTime) {
      res["EffectTime"] = boost::any(*effectTime);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessPageName") != m.end() && !m["AccessPageName"].empty()) {
      accessPageName = make_shared<string>(boost::any_cast<string>(m["AccessPageName"]));
    }
    if (m.find("CloudEnvId") != m.end() && !m["CloudEnvId"].empty()) {
      cloudEnvId = make_shared<string>(boost::any_cast<string>(m["CloudEnvId"]));
    }
    if (m.find("EffectTime") != m.end() && !m["EffectTime"].empty()) {
      effectTime = make_shared<long>(boost::any_cast<long>(m["EffectTime"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
  }


  virtual ~CreateAccessPageRequest() = default;
};
class CreateAccessPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  CreateAccessPageResponseBody() {}

  explicit CreateAccessPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~CreateAccessPageResponseBody() = default;
};
class CreateAccessPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccessPageResponseBody> body{};

  CreateAccessPageResponse() {}

  explicit CreateAccessPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccessPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccessPageResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccessPageResponse() = default;
};
class CreateAppInstanceGroupRequestNetworkDomainRules : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> policy{};

  CreateAppInstanceGroupRequestNetworkDomainRules() {}

  explicit CreateAppInstanceGroupRequestNetworkDomainRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
  }


  virtual ~CreateAppInstanceGroupRequestNetworkDomainRules() = default;
};
class CreateAppInstanceGroupRequestNetworkRoutes : public Darabonba::Model {
public:
  shared_ptr<string> destination{};
  shared_ptr<string> mode{};

  CreateAppInstanceGroupRequestNetworkRoutes() {}

  explicit CreateAppInstanceGroupRequestNetworkRoutes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
  }


  virtual ~CreateAppInstanceGroupRequestNetworkRoutes() = default;
};
class CreateAppInstanceGroupRequestNetwork : public Darabonba::Model {
public:
  shared_ptr<vector<CreateAppInstanceGroupRequestNetworkDomainRules>> domainRules{};
  shared_ptr<long> ipExpireMinutes{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<vector<CreateAppInstanceGroupRequestNetworkRoutes>> routes{};
  shared_ptr<string> strategyType{};
  shared_ptr<vector<string>> vSwitchIds{};

  CreateAppInstanceGroupRequestNetwork() {}

  explicit CreateAppInstanceGroupRequestNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainRules) {
      vector<boost::any> temp1;
      for(auto item1:*domainRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainRules"] = boost::any(temp1);
    }
    if (ipExpireMinutes) {
      res["IpExpireMinutes"] = boost::any(*ipExpireMinutes);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (routes) {
      vector<boost::any> temp1;
      for(auto item1:*routes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Routes"] = boost::any(temp1);
    }
    if (strategyType) {
      res["StrategyType"] = boost::any(*strategyType);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainRules") != m.end() && !m["DomainRules"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainRules"].type()) {
        vector<CreateAppInstanceGroupRequestNetworkDomainRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppInstanceGroupRequestNetworkDomainRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainRules = make_shared<vector<CreateAppInstanceGroupRequestNetworkDomainRules>>(expect1);
      }
    }
    if (m.find("IpExpireMinutes") != m.end() && !m["IpExpireMinutes"].empty()) {
      ipExpireMinutes = make_shared<long>(boost::any_cast<long>(m["IpExpireMinutes"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("Routes") != m.end() && !m["Routes"].empty()) {
      if (typeid(vector<boost::any>) == m["Routes"].type()) {
        vector<CreateAppInstanceGroupRequestNetworkRoutes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Routes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppInstanceGroupRequestNetworkRoutes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routes = make_shared<vector<CreateAppInstanceGroupRequestNetworkRoutes>>(expect1);
      }
    }
    if (m.find("StrategyType") != m.end() && !m["StrategyType"].empty()) {
      strategyType = make_shared<string>(boost::any_cast<string>(m["StrategyType"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateAppInstanceGroupRequestNetwork() = default;
};
class CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods() {}

  explicit CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
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
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods() = default;
};
class CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules : public Darabonba::Model {
public:
  shared_ptr<string> recurrenceType{};
  shared_ptr<vector<long>> recurrenceValues{};
  shared_ptr<vector<CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods>> timerPeriods{};

  CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules() {}

  explicit CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (recurrenceValues) {
      res["RecurrenceValues"] = boost::any(*recurrenceValues);
    }
    if (timerPeriods) {
      vector<boost::any> temp1;
      for(auto item1:*timerPeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimerPeriods"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("RecurrenceValues") != m.end() && !m["RecurrenceValues"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RecurrenceValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecurrenceValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      recurrenceValues = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TimerPeriods") != m.end() && !m["TimerPeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["TimerPeriods"].type()) {
        vector<CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimerPeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timerPeriods = make_shared<vector<CreateAppInstanceGroupRequestNodePoolRecurrenceSchedulesTimerPeriods>>(expect1);
      }
    }
  }


  virtual ~CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules() = default;
};
class CreateAppInstanceGroupRequestNodePool : public Darabonba::Model {
public:
  shared_ptr<long> maxIdleAppInstanceAmount{};
  shared_ptr<long> maxScalingAmount{};
  shared_ptr<long> nodeAmount{};
  shared_ptr<long> nodeCapacity{};
  shared_ptr<string> nodeInstanceType{};
  shared_ptr<vector<CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules>> recurrenceSchedules{};
  shared_ptr<long> scalingDownAfterIdleMinutes{};
  shared_ptr<long> scalingStep{};
  shared_ptr<string> scalingUsageThreshold{};
  shared_ptr<string> strategyDisableDate{};
  shared_ptr<string> strategyEnableDate{};
  shared_ptr<string> strategyType{};
  shared_ptr<bool> warmUp{};

  CreateAppInstanceGroupRequestNodePool() {}

  explicit CreateAppInstanceGroupRequestNodePool(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxIdleAppInstanceAmount) {
      res["MaxIdleAppInstanceAmount"] = boost::any(*maxIdleAppInstanceAmount);
    }
    if (maxScalingAmount) {
      res["MaxScalingAmount"] = boost::any(*maxScalingAmount);
    }
    if (nodeAmount) {
      res["NodeAmount"] = boost::any(*nodeAmount);
    }
    if (nodeCapacity) {
      res["NodeCapacity"] = boost::any(*nodeCapacity);
    }
    if (nodeInstanceType) {
      res["NodeInstanceType"] = boost::any(*nodeInstanceType);
    }
    if (recurrenceSchedules) {
      vector<boost::any> temp1;
      for(auto item1:*recurrenceSchedules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RecurrenceSchedules"] = boost::any(temp1);
    }
    if (scalingDownAfterIdleMinutes) {
      res["ScalingDownAfterIdleMinutes"] = boost::any(*scalingDownAfterIdleMinutes);
    }
    if (scalingStep) {
      res["ScalingStep"] = boost::any(*scalingStep);
    }
    if (scalingUsageThreshold) {
      res["ScalingUsageThreshold"] = boost::any(*scalingUsageThreshold);
    }
    if (strategyDisableDate) {
      res["StrategyDisableDate"] = boost::any(*strategyDisableDate);
    }
    if (strategyEnableDate) {
      res["StrategyEnableDate"] = boost::any(*strategyEnableDate);
    }
    if (strategyType) {
      res["StrategyType"] = boost::any(*strategyType);
    }
    if (warmUp) {
      res["WarmUp"] = boost::any(*warmUp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxIdleAppInstanceAmount") != m.end() && !m["MaxIdleAppInstanceAmount"].empty()) {
      maxIdleAppInstanceAmount = make_shared<long>(boost::any_cast<long>(m["MaxIdleAppInstanceAmount"]));
    }
    if (m.find("MaxScalingAmount") != m.end() && !m["MaxScalingAmount"].empty()) {
      maxScalingAmount = make_shared<long>(boost::any_cast<long>(m["MaxScalingAmount"]));
    }
    if (m.find("NodeAmount") != m.end() && !m["NodeAmount"].empty()) {
      nodeAmount = make_shared<long>(boost::any_cast<long>(m["NodeAmount"]));
    }
    if (m.find("NodeCapacity") != m.end() && !m["NodeCapacity"].empty()) {
      nodeCapacity = make_shared<long>(boost::any_cast<long>(m["NodeCapacity"]));
    }
    if (m.find("NodeInstanceType") != m.end() && !m["NodeInstanceType"].empty()) {
      nodeInstanceType = make_shared<string>(boost::any_cast<string>(m["NodeInstanceType"]));
    }
    if (m.find("RecurrenceSchedules") != m.end() && !m["RecurrenceSchedules"].empty()) {
      if (typeid(vector<boost::any>) == m["RecurrenceSchedules"].type()) {
        vector<CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RecurrenceSchedules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recurrenceSchedules = make_shared<vector<CreateAppInstanceGroupRequestNodePoolRecurrenceSchedules>>(expect1);
      }
    }
    if (m.find("ScalingDownAfterIdleMinutes") != m.end() && !m["ScalingDownAfterIdleMinutes"].empty()) {
      scalingDownAfterIdleMinutes = make_shared<long>(boost::any_cast<long>(m["ScalingDownAfterIdleMinutes"]));
    }
    if (m.find("ScalingStep") != m.end() && !m["ScalingStep"].empty()) {
      scalingStep = make_shared<long>(boost::any_cast<long>(m["ScalingStep"]));
    }
    if (m.find("ScalingUsageThreshold") != m.end() && !m["ScalingUsageThreshold"].empty()) {
      scalingUsageThreshold = make_shared<string>(boost::any_cast<string>(m["ScalingUsageThreshold"]));
    }
    if (m.find("StrategyDisableDate") != m.end() && !m["StrategyDisableDate"].empty()) {
      strategyDisableDate = make_shared<string>(boost::any_cast<string>(m["StrategyDisableDate"]));
    }
    if (m.find("StrategyEnableDate") != m.end() && !m["StrategyEnableDate"].empty()) {
      strategyEnableDate = make_shared<string>(boost::any_cast<string>(m["StrategyEnableDate"]));
    }
    if (m.find("StrategyType") != m.end() && !m["StrategyType"].empty()) {
      strategyType = make_shared<string>(boost::any_cast<string>(m["StrategyType"]));
    }
    if (m.find("WarmUp") != m.end() && !m["WarmUp"].empty()) {
      warmUp = make_shared<bool>(boost::any_cast<bool>(m["WarmUp"]));
    }
  }


  virtual ~CreateAppInstanceGroupRequestNodePool() = default;
};
class CreateAppInstanceGroupRequestRuntimePolicy : public Darabonba::Model {
public:
  shared_ptr<string> debugMode{};
  shared_ptr<bool> perSessionPerApp{};
  shared_ptr<string> persistentAppInstanceScheduleMode{};
  shared_ptr<string> sessionPreOpen{};
  shared_ptr<string> sessionType{};
  shared_ptr<string> sessionUserGenerationMode{};

  CreateAppInstanceGroupRequestRuntimePolicy() {}

  explicit CreateAppInstanceGroupRequestRuntimePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debugMode) {
      res["DebugMode"] = boost::any(*debugMode);
    }
    if (perSessionPerApp) {
      res["PerSessionPerApp"] = boost::any(*perSessionPerApp);
    }
    if (persistentAppInstanceScheduleMode) {
      res["PersistentAppInstanceScheduleMode"] = boost::any(*persistentAppInstanceScheduleMode);
    }
    if (sessionPreOpen) {
      res["SessionPreOpen"] = boost::any(*sessionPreOpen);
    }
    if (sessionType) {
      res["SessionType"] = boost::any(*sessionType);
    }
    if (sessionUserGenerationMode) {
      res["SessionUserGenerationMode"] = boost::any(*sessionUserGenerationMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DebugMode") != m.end() && !m["DebugMode"].empty()) {
      debugMode = make_shared<string>(boost::any_cast<string>(m["DebugMode"]));
    }
    if (m.find("PerSessionPerApp") != m.end() && !m["PerSessionPerApp"].empty()) {
      perSessionPerApp = make_shared<bool>(boost::any_cast<bool>(m["PerSessionPerApp"]));
    }
    if (m.find("PersistentAppInstanceScheduleMode") != m.end() && !m["PersistentAppInstanceScheduleMode"].empty()) {
      persistentAppInstanceScheduleMode = make_shared<string>(boost::any_cast<string>(m["PersistentAppInstanceScheduleMode"]));
    }
    if (m.find("SessionPreOpen") != m.end() && !m["SessionPreOpen"].empty()) {
      sessionPreOpen = make_shared<string>(boost::any_cast<string>(m["SessionPreOpen"]));
    }
    if (m.find("SessionType") != m.end() && !m["SessionType"].empty()) {
      sessionType = make_shared<string>(boost::any_cast<string>(m["SessionType"]));
    }
    if (m.find("SessionUserGenerationMode") != m.end() && !m["SessionUserGenerationMode"].empty()) {
      sessionUserGenerationMode = make_shared<string>(boost::any_cast<string>(m["SessionUserGenerationMode"]));
    }
  }


  virtual ~CreateAppInstanceGroupRequestRuntimePolicy() = default;
};
class CreateAppInstanceGroupRequestSecurityPolicy : public Darabonba::Model {
public:
  shared_ptr<bool> resetAfterUnbind{};
  shared_ptr<bool> skipUserAuthCheck{};

  CreateAppInstanceGroupRequestSecurityPolicy() {}

  explicit CreateAppInstanceGroupRequestSecurityPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resetAfterUnbind) {
      res["ResetAfterUnbind"] = boost::any(*resetAfterUnbind);
    }
    if (skipUserAuthCheck) {
      res["SkipUserAuthCheck"] = boost::any(*skipUserAuthCheck);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResetAfterUnbind") != m.end() && !m["ResetAfterUnbind"].empty()) {
      resetAfterUnbind = make_shared<bool>(boost::any_cast<bool>(m["ResetAfterUnbind"]));
    }
    if (m.find("SkipUserAuthCheck") != m.end() && !m["SkipUserAuthCheck"].empty()) {
      skipUserAuthCheck = make_shared<bool>(boost::any_cast<bool>(m["SkipUserAuthCheck"]));
    }
  }


  virtual ~CreateAppInstanceGroupRequestSecurityPolicy() = default;
};
class CreateAppInstanceGroupRequestStoragePolicyUserProfile : public Darabonba::Model {
public:
  shared_ptr<string> remoteStoragePath{};
  shared_ptr<string> remoteStorageType{};
  shared_ptr<bool> userProfileSwitch{};

  CreateAppInstanceGroupRequestStoragePolicyUserProfile() {}

  explicit CreateAppInstanceGroupRequestStoragePolicyUserProfile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (remoteStoragePath) {
      res["RemoteStoragePath"] = boost::any(*remoteStoragePath);
    }
    if (remoteStorageType) {
      res["RemoteStorageType"] = boost::any(*remoteStorageType);
    }
    if (userProfileSwitch) {
      res["UserProfileSwitch"] = boost::any(*userProfileSwitch);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RemoteStoragePath") != m.end() && !m["RemoteStoragePath"].empty()) {
      remoteStoragePath = make_shared<string>(boost::any_cast<string>(m["RemoteStoragePath"]));
    }
    if (m.find("RemoteStorageType") != m.end() && !m["RemoteStorageType"].empty()) {
      remoteStorageType = make_shared<string>(boost::any_cast<string>(m["RemoteStorageType"]));
    }
    if (m.find("UserProfileSwitch") != m.end() && !m["UserProfileSwitch"].empty()) {
      userProfileSwitch = make_shared<bool>(boost::any_cast<bool>(m["UserProfileSwitch"]));
    }
  }


  virtual ~CreateAppInstanceGroupRequestStoragePolicyUserProfile() = default;
};
class CreateAppInstanceGroupRequestStoragePolicy : public Darabonba::Model {
public:
  shared_ptr<vector<string>> storageTypeList{};
  shared_ptr<CreateAppInstanceGroupRequestStoragePolicyUserProfile> userProfile{};

  CreateAppInstanceGroupRequestStoragePolicy() {}

  explicit CreateAppInstanceGroupRequestStoragePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storageTypeList) {
      res["StorageTypeList"] = boost::any(*storageTypeList);
    }
    if (userProfile) {
      res["UserProfile"] = userProfile ? boost::any(userProfile->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StorageTypeList") != m.end() && !m["StorageTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StorageTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StorageTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      storageTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserProfile") != m.end() && !m["UserProfile"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserProfile"].type()) {
        CreateAppInstanceGroupRequestStoragePolicyUserProfile model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserProfile"]));
        userProfile = make_shared<CreateAppInstanceGroupRequestStoragePolicyUserProfile>(model1);
      }
    }
  }


  virtual ~CreateAppInstanceGroupRequestStoragePolicy() = default;
};
class CreateAppInstanceGroupRequestUserDefinePolicy : public Darabonba::Model {
public:
  shared_ptr<string> customConfig{};

  CreateAppInstanceGroupRequestUserDefinePolicy() {}

  explicit CreateAppInstanceGroupRequestUserDefinePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customConfig) {
      res["CustomConfig"] = boost::any(*customConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomConfig") != m.end() && !m["CustomConfig"].empty()) {
      customConfig = make_shared<string>(boost::any_cast<string>(m["CustomConfig"]));
    }
  }


  virtual ~CreateAppInstanceGroupRequestUserDefinePolicy() = default;
};
class CreateAppInstanceGroupRequestUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  CreateAppInstanceGroupRequestUserInfo() {}

  explicit CreateAppInstanceGroupRequestUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateAppInstanceGroupRequestUserInfo() = default;
};
class CreateAppInstanceGroupRequestVideoPolicy : public Darabonba::Model {
public:
  shared_ptr<long> frameRate{};
  shared_ptr<long> sessionResolutionHeight{};
  shared_ptr<long> sessionResolutionWidth{};
  shared_ptr<string> streamingMode{};
  shared_ptr<bool> terminalResolutionAdaptive{};
  shared_ptr<bool> webrtc{};

  CreateAppInstanceGroupRequestVideoPolicy() {}

  explicit CreateAppInstanceGroupRequestVideoPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (sessionResolutionHeight) {
      res["SessionResolutionHeight"] = boost::any(*sessionResolutionHeight);
    }
    if (sessionResolutionWidth) {
      res["SessionResolutionWidth"] = boost::any(*sessionResolutionWidth);
    }
    if (streamingMode) {
      res["StreamingMode"] = boost::any(*streamingMode);
    }
    if (terminalResolutionAdaptive) {
      res["TerminalResolutionAdaptive"] = boost::any(*terminalResolutionAdaptive);
    }
    if (webrtc) {
      res["Webrtc"] = boost::any(*webrtc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<long>(boost::any_cast<long>(m["FrameRate"]));
    }
    if (m.find("SessionResolutionHeight") != m.end() && !m["SessionResolutionHeight"].empty()) {
      sessionResolutionHeight = make_shared<long>(boost::any_cast<long>(m["SessionResolutionHeight"]));
    }
    if (m.find("SessionResolutionWidth") != m.end() && !m["SessionResolutionWidth"].empty()) {
      sessionResolutionWidth = make_shared<long>(boost::any_cast<long>(m["SessionResolutionWidth"]));
    }
    if (m.find("StreamingMode") != m.end() && !m["StreamingMode"].empty()) {
      streamingMode = make_shared<string>(boost::any_cast<string>(m["StreamingMode"]));
    }
    if (m.find("TerminalResolutionAdaptive") != m.end() && !m["TerminalResolutionAdaptive"].empty()) {
      terminalResolutionAdaptive = make_shared<bool>(boost::any_cast<bool>(m["TerminalResolutionAdaptive"]));
    }
    if (m.find("Webrtc") != m.end() && !m["Webrtc"].empty()) {
      webrtc = make_shared<bool>(boost::any_cast<bool>(m["Webrtc"]));
    }
  }


  virtual ~CreateAppInstanceGroupRequestVideoPolicy() = default;
};
class CreateAppInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCenterImageId{};
  shared_ptr<string> appInstanceGroupName{};
  shared_ptr<string> appPackageType{};
  shared_ptr<string> appPolicyId{};
  shared_ptr<string> authMode{};
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> chargeResourceMode{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clusterId{};
  shared_ptr<CreateAppInstanceGroupRequestNetwork> network{};
  shared_ptr<CreateAppInstanceGroupRequestNodePool> nodePool{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> preOpenAppId{};
  shared_ptr<string> productType{};
  shared_ptr<string> promotionId{};
  shared_ptr<CreateAppInstanceGroupRequestRuntimePolicy> runtimePolicy{};
  shared_ptr<CreateAppInstanceGroupRequestSecurityPolicy> securityPolicy{};
  shared_ptr<long> sessionTimeout{};
  shared_ptr<CreateAppInstanceGroupRequestStoragePolicy> storagePolicy{};
  shared_ptr<string> subPayType{};
  shared_ptr<CreateAppInstanceGroupRequestUserDefinePolicy> userDefinePolicy{};
  shared_ptr<CreateAppInstanceGroupRequestUserInfo> userInfo{};
  shared_ptr<vector<string>> users{};
  shared_ptr<CreateAppInstanceGroupRequestVideoPolicy> videoPolicy{};

  CreateAppInstanceGroupRequest() {}

  explicit CreateAppInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCenterImageId) {
      res["AppCenterImageId"] = boost::any(*appCenterImageId);
    }
    if (appInstanceGroupName) {
      res["AppInstanceGroupName"] = boost::any(*appInstanceGroupName);
    }
    if (appPackageType) {
      res["AppPackageType"] = boost::any(*appPackageType);
    }
    if (appPolicyId) {
      res["AppPolicyId"] = boost::any(*appPolicyId);
    }
    if (authMode) {
      res["AuthMode"] = boost::any(*authMode);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (chargeResourceMode) {
      res["ChargeResourceMode"] = boost::any(*chargeResourceMode);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (network) {
      res["Network"] = network ? boost::any(network->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodePool) {
      res["NodePool"] = nodePool ? boost::any(nodePool->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (preOpenAppId) {
      res["PreOpenAppId"] = boost::any(*preOpenAppId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (runtimePolicy) {
      res["RuntimePolicy"] = runtimePolicy ? boost::any(runtimePolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityPolicy) {
      res["SecurityPolicy"] = securityPolicy ? boost::any(securityPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    if (storagePolicy) {
      res["StoragePolicy"] = storagePolicy ? boost::any(storagePolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subPayType) {
      res["SubPayType"] = boost::any(*subPayType);
    }
    if (userDefinePolicy) {
      res["UserDefinePolicy"] = userDefinePolicy ? boost::any(userDefinePolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    if (videoPolicy) {
      res["VideoPolicy"] = videoPolicy ? boost::any(videoPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCenterImageId") != m.end() && !m["AppCenterImageId"].empty()) {
      appCenterImageId = make_shared<string>(boost::any_cast<string>(m["AppCenterImageId"]));
    }
    if (m.find("AppInstanceGroupName") != m.end() && !m["AppInstanceGroupName"].empty()) {
      appInstanceGroupName = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupName"]));
    }
    if (m.find("AppPackageType") != m.end() && !m["AppPackageType"].empty()) {
      appPackageType = make_shared<string>(boost::any_cast<string>(m["AppPackageType"]));
    }
    if (m.find("AppPolicyId") != m.end() && !m["AppPolicyId"].empty()) {
      appPolicyId = make_shared<string>(boost::any_cast<string>(m["AppPolicyId"]));
    }
    if (m.find("AuthMode") != m.end() && !m["AuthMode"].empty()) {
      authMode = make_shared<string>(boost::any_cast<string>(m["AuthMode"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ChargeResourceMode") != m.end() && !m["ChargeResourceMode"].empty()) {
      chargeResourceMode = make_shared<string>(boost::any_cast<string>(m["ChargeResourceMode"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      if (typeid(map<string, boost::any>) == m["Network"].type()) {
        CreateAppInstanceGroupRequestNetwork model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Network"]));
        network = make_shared<CreateAppInstanceGroupRequestNetwork>(model1);
      }
    }
    if (m.find("NodePool") != m.end() && !m["NodePool"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodePool"].type()) {
        CreateAppInstanceGroupRequestNodePool model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodePool"]));
        nodePool = make_shared<CreateAppInstanceGroupRequestNodePool>(model1);
      }
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PreOpenAppId") != m.end() && !m["PreOpenAppId"].empty()) {
      preOpenAppId = make_shared<string>(boost::any_cast<string>(m["PreOpenAppId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("RuntimePolicy") != m.end() && !m["RuntimePolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuntimePolicy"].type()) {
        CreateAppInstanceGroupRequestRuntimePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuntimePolicy"]));
        runtimePolicy = make_shared<CreateAppInstanceGroupRequestRuntimePolicy>(model1);
      }
    }
    if (m.find("SecurityPolicy") != m.end() && !m["SecurityPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityPolicy"].type()) {
        CreateAppInstanceGroupRequestSecurityPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityPolicy"]));
        securityPolicy = make_shared<CreateAppInstanceGroupRequestSecurityPolicy>(model1);
      }
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<long>(boost::any_cast<long>(m["SessionTimeout"]));
    }
    if (m.find("StoragePolicy") != m.end() && !m["StoragePolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["StoragePolicy"].type()) {
        CreateAppInstanceGroupRequestStoragePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StoragePolicy"]));
        storagePolicy = make_shared<CreateAppInstanceGroupRequestStoragePolicy>(model1);
      }
    }
    if (m.find("SubPayType") != m.end() && !m["SubPayType"].empty()) {
      subPayType = make_shared<string>(boost::any_cast<string>(m["SubPayType"]));
    }
    if (m.find("UserDefinePolicy") != m.end() && !m["UserDefinePolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserDefinePolicy"].type()) {
        CreateAppInstanceGroupRequestUserDefinePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserDefinePolicy"]));
        userDefinePolicy = make_shared<CreateAppInstanceGroupRequestUserDefinePolicy>(model1);
      }
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        CreateAppInstanceGroupRequestUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<CreateAppInstanceGroupRequestUserInfo>(model1);
      }
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Users"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      users = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VideoPolicy") != m.end() && !m["VideoPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["VideoPolicy"].type()) {
        CreateAppInstanceGroupRequestVideoPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VideoPolicy"]));
        videoPolicy = make_shared<CreateAppInstanceGroupRequestVideoPolicy>(model1);
      }
    }
  }


  virtual ~CreateAppInstanceGroupRequest() = default;
};
class CreateAppInstanceGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCenterImageId{};
  shared_ptr<string> appInstanceGroupName{};
  shared_ptr<string> appPackageType{};
  shared_ptr<string> appPolicyId{};
  shared_ptr<string> authMode{};
  shared_ptr<bool> autoPay{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> chargeResourceMode{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> networkShrink{};
  shared_ptr<string> nodePoolShrink{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> preOpenAppId{};
  shared_ptr<string> productType{};
  shared_ptr<string> promotionId{};
  shared_ptr<string> runtimePolicyShrink{};
  shared_ptr<string> securityPolicyShrink{};
  shared_ptr<long> sessionTimeout{};
  shared_ptr<string> storagePolicyShrink{};
  shared_ptr<string> subPayType{};
  shared_ptr<string> userDefinePolicyShrink{};
  shared_ptr<string> userInfoShrink{};
  shared_ptr<vector<string>> users{};
  shared_ptr<string> videoPolicyShrink{};

  CreateAppInstanceGroupShrinkRequest() {}

  explicit CreateAppInstanceGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCenterImageId) {
      res["AppCenterImageId"] = boost::any(*appCenterImageId);
    }
    if (appInstanceGroupName) {
      res["AppInstanceGroupName"] = boost::any(*appInstanceGroupName);
    }
    if (appPackageType) {
      res["AppPackageType"] = boost::any(*appPackageType);
    }
    if (appPolicyId) {
      res["AppPolicyId"] = boost::any(*appPolicyId);
    }
    if (authMode) {
      res["AuthMode"] = boost::any(*authMode);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (chargeResourceMode) {
      res["ChargeResourceMode"] = boost::any(*chargeResourceMode);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (networkShrink) {
      res["Network"] = boost::any(*networkShrink);
    }
    if (nodePoolShrink) {
      res["NodePool"] = boost::any(*nodePoolShrink);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (preOpenAppId) {
      res["PreOpenAppId"] = boost::any(*preOpenAppId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (runtimePolicyShrink) {
      res["RuntimePolicy"] = boost::any(*runtimePolicyShrink);
    }
    if (securityPolicyShrink) {
      res["SecurityPolicy"] = boost::any(*securityPolicyShrink);
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    if (storagePolicyShrink) {
      res["StoragePolicy"] = boost::any(*storagePolicyShrink);
    }
    if (subPayType) {
      res["SubPayType"] = boost::any(*subPayType);
    }
    if (userDefinePolicyShrink) {
      res["UserDefinePolicy"] = boost::any(*userDefinePolicyShrink);
    }
    if (userInfoShrink) {
      res["UserInfo"] = boost::any(*userInfoShrink);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    if (videoPolicyShrink) {
      res["VideoPolicy"] = boost::any(*videoPolicyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCenterImageId") != m.end() && !m["AppCenterImageId"].empty()) {
      appCenterImageId = make_shared<string>(boost::any_cast<string>(m["AppCenterImageId"]));
    }
    if (m.find("AppInstanceGroupName") != m.end() && !m["AppInstanceGroupName"].empty()) {
      appInstanceGroupName = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupName"]));
    }
    if (m.find("AppPackageType") != m.end() && !m["AppPackageType"].empty()) {
      appPackageType = make_shared<string>(boost::any_cast<string>(m["AppPackageType"]));
    }
    if (m.find("AppPolicyId") != m.end() && !m["AppPolicyId"].empty()) {
      appPolicyId = make_shared<string>(boost::any_cast<string>(m["AppPolicyId"]));
    }
    if (m.find("AuthMode") != m.end() && !m["AuthMode"].empty()) {
      authMode = make_shared<string>(boost::any_cast<string>(m["AuthMode"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ChargeResourceMode") != m.end() && !m["ChargeResourceMode"].empty()) {
      chargeResourceMode = make_shared<string>(boost::any_cast<string>(m["ChargeResourceMode"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      networkShrink = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("NodePool") != m.end() && !m["NodePool"].empty()) {
      nodePoolShrink = make_shared<string>(boost::any_cast<string>(m["NodePool"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PreOpenAppId") != m.end() && !m["PreOpenAppId"].empty()) {
      preOpenAppId = make_shared<string>(boost::any_cast<string>(m["PreOpenAppId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("RuntimePolicy") != m.end() && !m["RuntimePolicy"].empty()) {
      runtimePolicyShrink = make_shared<string>(boost::any_cast<string>(m["RuntimePolicy"]));
    }
    if (m.find("SecurityPolicy") != m.end() && !m["SecurityPolicy"].empty()) {
      securityPolicyShrink = make_shared<string>(boost::any_cast<string>(m["SecurityPolicy"]));
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<long>(boost::any_cast<long>(m["SessionTimeout"]));
    }
    if (m.find("StoragePolicy") != m.end() && !m["StoragePolicy"].empty()) {
      storagePolicyShrink = make_shared<string>(boost::any_cast<string>(m["StoragePolicy"]));
    }
    if (m.find("SubPayType") != m.end() && !m["SubPayType"].empty()) {
      subPayType = make_shared<string>(boost::any_cast<string>(m["SubPayType"]));
    }
    if (m.find("UserDefinePolicy") != m.end() && !m["UserDefinePolicy"].empty()) {
      userDefinePolicyShrink = make_shared<string>(boost::any_cast<string>(m["UserDefinePolicy"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfoShrink = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Users"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      users = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VideoPolicy") != m.end() && !m["VideoPolicy"].empty()) {
      videoPolicyShrink = make_shared<string>(boost::any_cast<string>(m["VideoPolicy"]));
    }
  }


  virtual ~CreateAppInstanceGroupShrinkRequest() = default;
};
class CreateAppInstanceGroupResponseBodyAppInstanceGroupModel : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> nodePoolId{};
  shared_ptr<string> orderId{};

  CreateAppInstanceGroupResponseBodyAppInstanceGroupModel() {}

  explicit CreateAppInstanceGroupResponseBodyAppInstanceGroupModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (nodePoolId) {
      res["NodePoolId"] = boost::any(*nodePoolId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("NodePoolId") != m.end() && !m["NodePoolId"].empty()) {
      nodePoolId = make_shared<string>(boost::any_cast<string>(m["NodePoolId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~CreateAppInstanceGroupResponseBodyAppInstanceGroupModel() = default;
};
class CreateAppInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateAppInstanceGroupResponseBodyAppInstanceGroupModel> appInstanceGroupModel{};
  shared_ptr<string> requestId{};

  CreateAppInstanceGroupResponseBody() {}

  explicit CreateAppInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupModel) {
      res["AppInstanceGroupModel"] = appInstanceGroupModel ? boost::any(appInstanceGroupModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupModel") != m.end() && !m["AppInstanceGroupModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppInstanceGroupModel"].type()) {
        CreateAppInstanceGroupResponseBodyAppInstanceGroupModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppInstanceGroupModel"]));
        appInstanceGroupModel = make_shared<CreateAppInstanceGroupResponseBodyAppInstanceGroupModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppInstanceGroupResponseBody() = default;
};
class CreateAppInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppInstanceGroupResponseBody> body{};

  CreateAppInstanceGroupResponse() {}

  explicit CreateAppInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppInstanceGroupResponse() = default;
};
class CreateImageFromAppInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCenterImageName{};
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> productType{};

  CreateImageFromAppInstanceGroupRequest() {}

  explicit CreateImageFromAppInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCenterImageName) {
      res["AppCenterImageName"] = boost::any(*appCenterImageName);
    }
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCenterImageName") != m.end() && !m["AppCenterImageName"].empty()) {
      appCenterImageName = make_shared<string>(boost::any_cast<string>(m["AppCenterImageName"]));
    }
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~CreateImageFromAppInstanceGroupRequest() = default;
};
class CreateImageFromAppInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> requestId{};

  CreateImageFromAppInstanceGroupResponseBody() {}

  explicit CreateImageFromAppInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateImageFromAppInstanceGroupResponseBody() = default;
};
class CreateImageFromAppInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateImageFromAppInstanceGroupResponseBody> body{};

  CreateImageFromAppInstanceGroupResponse() {}

  explicit CreateImageFromAppInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateImageFromAppInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateImageFromAppInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateImageFromAppInstanceGroupResponse() = default;
};
class DeleteAccessPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessPageId{};

  DeleteAccessPageRequest() {}

  explicit DeleteAccessPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPageId) {
      res["AccessPageId"] = boost::any(*accessPageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessPageId") != m.end() && !m["AccessPageId"].empty()) {
      accessPageId = make_shared<string>(boost::any_cast<string>(m["AccessPageId"]));
    }
  }


  virtual ~DeleteAccessPageRequest() = default;
};
class DeleteAccessPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DeleteAccessPageResponseBody() {}

  explicit DeleteAccessPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~DeleteAccessPageResponseBody() = default;
};
class DeleteAccessPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAccessPageResponseBody> body{};

  DeleteAccessPageResponse() {}

  explicit DeleteAccessPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccessPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccessPageResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccessPageResponse() = default;
};
class DeleteAppInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> productType{};

  DeleteAppInstanceGroupRequest() {}

  explicit DeleteAppInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~DeleteAppInstanceGroupRequest() = default;
};
class DeleteAppInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAppInstanceGroupResponseBody() {}

  explicit DeleteAppInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAppInstanceGroupResponseBody() = default;
};
class DeleteAppInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppInstanceGroupResponseBody> body{};

  DeleteAppInstanceGroupResponse() {}

  explicit DeleteAppInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppInstanceGroupResponse() = default;
};
class DeleteAppInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<vector<string>> appInstanceIds{};
  shared_ptr<string> productType{};

  DeleteAppInstancesRequest() {}

  explicit DeleteAppInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceIds) {
      res["AppInstanceIds"] = boost::any(*appInstanceIds);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceIds") != m.end() && !m["AppInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~DeleteAppInstancesRequest() = default;
};
class DeleteAppInstancesResponseBodyDeleteAppInstanceModels : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  DeleteAppInstancesResponseBodyDeleteAppInstanceModels() {}

  explicit DeleteAppInstancesResponseBodyDeleteAppInstanceModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteAppInstancesResponseBodyDeleteAppInstanceModels() = default;
};
class DeleteAppInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteAppInstancesResponseBodyDeleteAppInstanceModels>> deleteAppInstanceModels{};
  shared_ptr<string> requestId{};

  DeleteAppInstancesResponseBody() {}

  explicit DeleteAppInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleteAppInstanceModels) {
      vector<boost::any> temp1;
      for(auto item1:*deleteAppInstanceModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeleteAppInstanceModels"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeleteAppInstanceModels") != m.end() && !m["DeleteAppInstanceModels"].empty()) {
      if (typeid(vector<boost::any>) == m["DeleteAppInstanceModels"].type()) {
        vector<DeleteAppInstancesResponseBodyDeleteAppInstanceModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeleteAppInstanceModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteAppInstancesResponseBodyDeleteAppInstanceModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deleteAppInstanceModels = make_shared<vector<DeleteAppInstancesResponseBodyDeleteAppInstanceModels>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAppInstancesResponseBody() = default;
};
class DeleteAppInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppInstancesResponseBody> body{};

  DeleteAppInstancesResponse() {}

  explicit DeleteAppInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppInstancesResponse() = default;
};
class GetAccessPageSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessPageId{};
  shared_ptr<string> accessPageToken{};
  shared_ptr<string> externalUserId{};

  GetAccessPageSessionRequest() {}

  explicit GetAccessPageSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPageId) {
      res["AccessPageId"] = boost::any(*accessPageId);
    }
    if (accessPageToken) {
      res["AccessPageToken"] = boost::any(*accessPageToken);
    }
    if (externalUserId) {
      res["ExternalUserId"] = boost::any(*externalUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessPageId") != m.end() && !m["AccessPageId"].empty()) {
      accessPageId = make_shared<string>(boost::any_cast<string>(m["AccessPageId"]));
    }
    if (m.find("AccessPageToken") != m.end() && !m["AccessPageToken"].empty()) {
      accessPageToken = make_shared<string>(boost::any_cast<string>(m["AccessPageToken"]));
    }
    if (m.find("ExternalUserId") != m.end() && !m["ExternalUserId"].empty()) {
      externalUserId = make_shared<string>(boost::any_cast<string>(m["ExternalUserId"]));
    }
  }


  virtual ~GetAccessPageSessionRequest() = default;
};
class GetAccessPageSessionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> connectTicket{};
  shared_ptr<string> flowId{};

  GetAccessPageSessionResponseBodyData() {}

  explicit GetAccessPageSessionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectTicket) {
      res["ConnectTicket"] = boost::any(*connectTicket);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectTicket") != m.end() && !m["ConnectTicket"].empty()) {
      connectTicket = make_shared<string>(boost::any_cast<string>(m["ConnectTicket"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
  }


  virtual ~GetAccessPageSessionResponseBodyData() = default;
};
class GetAccessPageSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetAccessPageSessionResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  GetAccessPageSessionResponseBody() {}

  explicit GetAccessPageSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccessPageSessionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAccessPageSessionResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~GetAccessPageSessionResponseBody() = default;
};
class GetAccessPageSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccessPageSessionResponseBody> body{};

  GetAccessPageSessionResponse() {}

  explicit GetAccessPageSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccessPageSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccessPageSessionResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccessPageSessionResponse() = default;
};
class GetAppInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> productType{};

  GetAppInstanceGroupRequest() {}

  explicit GetAppInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~GetAppInstanceGroupRequest() = default;
};
class GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps : public Darabonba::Model {
public:
  shared_ptr<string> appIcon{};
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> appVersionName{};

  GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps() {}

  explicit GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appIcon) {
      res["AppIcon"] = boost::any(*appIcon);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (appVersionName) {
      res["AppVersionName"] = boost::any(*appVersionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppIcon") != m.end() && !m["AppIcon"].empty()) {
      appIcon = make_shared<string>(boost::any_cast<string>(m["AppIcon"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("AppVersionName") != m.end() && !m["AppVersionName"].empty()) {
      appVersionName = make_shared<string>(boost::any_cast<string>(m["AppVersionName"]));
    }
  }


  virtual ~GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps() = default;
};
class GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods() {}

  explicit GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
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
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods() = default;
};
class GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules : public Darabonba::Model {
public:
  shared_ptr<string> recurrenceType{};
  shared_ptr<vector<long>> recurrenceValues{};
  shared_ptr<vector<GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods>> timerPeriods{};

  GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules() {}

  explicit GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (recurrenceValues) {
      res["RecurrenceValues"] = boost::any(*recurrenceValues);
    }
    if (timerPeriods) {
      vector<boost::any> temp1;
      for(auto item1:*timerPeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimerPeriods"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("RecurrenceValues") != m.end() && !m["RecurrenceValues"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RecurrenceValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecurrenceValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      recurrenceValues = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TimerPeriods") != m.end() && !m["TimerPeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["TimerPeriods"].type()) {
        vector<GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimerPeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timerPeriods = make_shared<vector<GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods>>(expect1);
      }
    }
  }


  virtual ~GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules() = default;
};
class GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<long> maxIdleAppInstanceAmount{};
  shared_ptr<long> maxScalingAmount{};
  shared_ptr<long> nodeAmount{};
  shared_ptr<long> nodeCapacity{};
  shared_ptr<string> nodeInstanceType{};
  shared_ptr<string> nodePoolId{};
  shared_ptr<string> nodeTypeName{};
  shared_ptr<long> nodeUsed{};
  shared_ptr<vector<GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules>> recurrenceSchedules{};
  shared_ptr<long> scalingDownAfterIdleMinutes{};
  shared_ptr<long> scalingNodeAmount{};
  shared_ptr<long> scalingNodeUsed{};
  shared_ptr<long> scalingStep{};
  shared_ptr<string> scalingUsageThreshold{};
  shared_ptr<string> strategyDisableDate{};
  shared_ptr<string> strategyEnableDate{};
  shared_ptr<string> strategyType{};
  shared_ptr<bool> warmUp{};

  GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool() {}

  explicit GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (maxIdleAppInstanceAmount) {
      res["MaxIdleAppInstanceAmount"] = boost::any(*maxIdleAppInstanceAmount);
    }
    if (maxScalingAmount) {
      res["MaxScalingAmount"] = boost::any(*maxScalingAmount);
    }
    if (nodeAmount) {
      res["NodeAmount"] = boost::any(*nodeAmount);
    }
    if (nodeCapacity) {
      res["NodeCapacity"] = boost::any(*nodeCapacity);
    }
    if (nodeInstanceType) {
      res["NodeInstanceType"] = boost::any(*nodeInstanceType);
    }
    if (nodePoolId) {
      res["NodePoolId"] = boost::any(*nodePoolId);
    }
    if (nodeTypeName) {
      res["NodeTypeName"] = boost::any(*nodeTypeName);
    }
    if (nodeUsed) {
      res["NodeUsed"] = boost::any(*nodeUsed);
    }
    if (recurrenceSchedules) {
      vector<boost::any> temp1;
      for(auto item1:*recurrenceSchedules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RecurrenceSchedules"] = boost::any(temp1);
    }
    if (scalingDownAfterIdleMinutes) {
      res["ScalingDownAfterIdleMinutes"] = boost::any(*scalingDownAfterIdleMinutes);
    }
    if (scalingNodeAmount) {
      res["ScalingNodeAmount"] = boost::any(*scalingNodeAmount);
    }
    if (scalingNodeUsed) {
      res["ScalingNodeUsed"] = boost::any(*scalingNodeUsed);
    }
    if (scalingStep) {
      res["ScalingStep"] = boost::any(*scalingStep);
    }
    if (scalingUsageThreshold) {
      res["ScalingUsageThreshold"] = boost::any(*scalingUsageThreshold);
    }
    if (strategyDisableDate) {
      res["StrategyDisableDate"] = boost::any(*strategyDisableDate);
    }
    if (strategyEnableDate) {
      res["StrategyEnableDate"] = boost::any(*strategyEnableDate);
    }
    if (strategyType) {
      res["StrategyType"] = boost::any(*strategyType);
    }
    if (warmUp) {
      res["WarmUp"] = boost::any(*warmUp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("MaxIdleAppInstanceAmount") != m.end() && !m["MaxIdleAppInstanceAmount"].empty()) {
      maxIdleAppInstanceAmount = make_shared<long>(boost::any_cast<long>(m["MaxIdleAppInstanceAmount"]));
    }
    if (m.find("MaxScalingAmount") != m.end() && !m["MaxScalingAmount"].empty()) {
      maxScalingAmount = make_shared<long>(boost::any_cast<long>(m["MaxScalingAmount"]));
    }
    if (m.find("NodeAmount") != m.end() && !m["NodeAmount"].empty()) {
      nodeAmount = make_shared<long>(boost::any_cast<long>(m["NodeAmount"]));
    }
    if (m.find("NodeCapacity") != m.end() && !m["NodeCapacity"].empty()) {
      nodeCapacity = make_shared<long>(boost::any_cast<long>(m["NodeCapacity"]));
    }
    if (m.find("NodeInstanceType") != m.end() && !m["NodeInstanceType"].empty()) {
      nodeInstanceType = make_shared<string>(boost::any_cast<string>(m["NodeInstanceType"]));
    }
    if (m.find("NodePoolId") != m.end() && !m["NodePoolId"].empty()) {
      nodePoolId = make_shared<string>(boost::any_cast<string>(m["NodePoolId"]));
    }
    if (m.find("NodeTypeName") != m.end() && !m["NodeTypeName"].empty()) {
      nodeTypeName = make_shared<string>(boost::any_cast<string>(m["NodeTypeName"]));
    }
    if (m.find("NodeUsed") != m.end() && !m["NodeUsed"].empty()) {
      nodeUsed = make_shared<long>(boost::any_cast<long>(m["NodeUsed"]));
    }
    if (m.find("RecurrenceSchedules") != m.end() && !m["RecurrenceSchedules"].empty()) {
      if (typeid(vector<boost::any>) == m["RecurrenceSchedules"].type()) {
        vector<GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RecurrenceSchedules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recurrenceSchedules = make_shared<vector<GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules>>(expect1);
      }
    }
    if (m.find("ScalingDownAfterIdleMinutes") != m.end() && !m["ScalingDownAfterIdleMinutes"].empty()) {
      scalingDownAfterIdleMinutes = make_shared<long>(boost::any_cast<long>(m["ScalingDownAfterIdleMinutes"]));
    }
    if (m.find("ScalingNodeAmount") != m.end() && !m["ScalingNodeAmount"].empty()) {
      scalingNodeAmount = make_shared<long>(boost::any_cast<long>(m["ScalingNodeAmount"]));
    }
    if (m.find("ScalingNodeUsed") != m.end() && !m["ScalingNodeUsed"].empty()) {
      scalingNodeUsed = make_shared<long>(boost::any_cast<long>(m["ScalingNodeUsed"]));
    }
    if (m.find("ScalingStep") != m.end() && !m["ScalingStep"].empty()) {
      scalingStep = make_shared<long>(boost::any_cast<long>(m["ScalingStep"]));
    }
    if (m.find("ScalingUsageThreshold") != m.end() && !m["ScalingUsageThreshold"].empty()) {
      scalingUsageThreshold = make_shared<string>(boost::any_cast<string>(m["ScalingUsageThreshold"]));
    }
    if (m.find("StrategyDisableDate") != m.end() && !m["StrategyDisableDate"].empty()) {
      strategyDisableDate = make_shared<string>(boost::any_cast<string>(m["StrategyDisableDate"]));
    }
    if (m.find("StrategyEnableDate") != m.end() && !m["StrategyEnableDate"].empty()) {
      strategyEnableDate = make_shared<string>(boost::any_cast<string>(m["StrategyEnableDate"]));
    }
    if (m.find("StrategyType") != m.end() && !m["StrategyType"].empty()) {
      strategyType = make_shared<string>(boost::any_cast<string>(m["StrategyType"]));
    }
    if (m.find("WarmUp") != m.end() && !m["WarmUp"].empty()) {
      warmUp = make_shared<bool>(boost::any_cast<bool>(m["WarmUp"]));
    }
  }


  virtual ~GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool() = default;
};
class GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo : public Darabonba::Model {
public:
  shared_ptr<string> newOtaVersion{};
  shared_ptr<string> otaVersion{};
  shared_ptr<string> taskId{};

  GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo() {}

  explicit GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newOtaVersion) {
      res["NewOtaVersion"] = boost::any(*newOtaVersion);
    }
    if (otaVersion) {
      res["OtaVersion"] = boost::any(*otaVersion);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewOtaVersion") != m.end() && !m["NewOtaVersion"].empty()) {
      newOtaVersion = make_shared<string>(boost::any_cast<string>(m["NewOtaVersion"]));
    }
    if (m.find("OtaVersion") != m.end() && !m["OtaVersion"].empty()) {
      otaVersion = make_shared<string>(boost::any_cast<string>(m["OtaVersion"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo() = default;
};
class GetAppInstanceGroupResponseBodyAppInstanceGroupModels : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> appCenterImageId{};
  shared_ptr<string> appCenterImageName{};
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceGroupName{};
  shared_ptr<string> appInstanceType{};
  shared_ptr<string> appInstanceTypeName{};
  shared_ptr<string> appPolicyId{};
  shared_ptr<vector<GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps>> apps{};
  shared_ptr<string> chargeResourceMode{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<long> maxAmount{};
  shared_ptr<long> minAmount{};
  shared_ptr<vector<GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool>> nodePool{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> osType{};
  shared_ptr<GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo> otaInfo{};
  shared_ptr<string> productType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> reserveAmountRatio{};
  shared_ptr<long> reserveMaxAmount{};
  shared_ptr<long> reserveMinAmount{};
  shared_ptr<string> resourceStatus{};
  shared_ptr<long> scalingDownAfterIdleMinutes{};
  shared_ptr<long> scalingStep{};
  shared_ptr<string> scalingUsageThreshold{};
  shared_ptr<string> sessionTimeout{};
  shared_ptr<string> sessionType{};
  shared_ptr<bool> skipUserAuthCheck{};
  shared_ptr<string> specId{};
  shared_ptr<string> status{};

  GetAppInstanceGroupResponseBodyAppInstanceGroupModels() {}

  explicit GetAppInstanceGroupResponseBodyAppInstanceGroupModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (appCenterImageId) {
      res["AppCenterImageId"] = boost::any(*appCenterImageId);
    }
    if (appCenterImageName) {
      res["AppCenterImageName"] = boost::any(*appCenterImageName);
    }
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceGroupName) {
      res["AppInstanceGroupName"] = boost::any(*appInstanceGroupName);
    }
    if (appInstanceType) {
      res["AppInstanceType"] = boost::any(*appInstanceType);
    }
    if (appInstanceTypeName) {
      res["AppInstanceTypeName"] = boost::any(*appInstanceTypeName);
    }
    if (appPolicyId) {
      res["AppPolicyId"] = boost::any(*appPolicyId);
    }
    if (apps) {
      vector<boost::any> temp1;
      for(auto item1:*apps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Apps"] = boost::any(temp1);
    }
    if (chargeResourceMode) {
      res["ChargeResourceMode"] = boost::any(*chargeResourceMode);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (maxAmount) {
      res["MaxAmount"] = boost::any(*maxAmount);
    }
    if (minAmount) {
      res["MinAmount"] = boost::any(*minAmount);
    }
    if (nodePool) {
      vector<boost::any> temp1;
      for(auto item1:*nodePool){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodePool"] = boost::any(temp1);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (otaInfo) {
      res["OtaInfo"] = otaInfo ? boost::any(otaInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (reserveAmountRatio) {
      res["ReserveAmountRatio"] = boost::any(*reserveAmountRatio);
    }
    if (reserveMaxAmount) {
      res["ReserveMaxAmount"] = boost::any(*reserveMaxAmount);
    }
    if (reserveMinAmount) {
      res["ReserveMinAmount"] = boost::any(*reserveMinAmount);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
    }
    if (scalingDownAfterIdleMinutes) {
      res["ScalingDownAfterIdleMinutes"] = boost::any(*scalingDownAfterIdleMinutes);
    }
    if (scalingStep) {
      res["ScalingStep"] = boost::any(*scalingStep);
    }
    if (scalingUsageThreshold) {
      res["ScalingUsageThreshold"] = boost::any(*scalingUsageThreshold);
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    if (sessionType) {
      res["SessionType"] = boost::any(*sessionType);
    }
    if (skipUserAuthCheck) {
      res["SkipUserAuthCheck"] = boost::any(*skipUserAuthCheck);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("AppCenterImageId") != m.end() && !m["AppCenterImageId"].empty()) {
      appCenterImageId = make_shared<string>(boost::any_cast<string>(m["AppCenterImageId"]));
    }
    if (m.find("AppCenterImageName") != m.end() && !m["AppCenterImageName"].empty()) {
      appCenterImageName = make_shared<string>(boost::any_cast<string>(m["AppCenterImageName"]));
    }
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceGroupName") != m.end() && !m["AppInstanceGroupName"].empty()) {
      appInstanceGroupName = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupName"]));
    }
    if (m.find("AppInstanceType") != m.end() && !m["AppInstanceType"].empty()) {
      appInstanceType = make_shared<string>(boost::any_cast<string>(m["AppInstanceType"]));
    }
    if (m.find("AppInstanceTypeName") != m.end() && !m["AppInstanceTypeName"].empty()) {
      appInstanceTypeName = make_shared<string>(boost::any_cast<string>(m["AppInstanceTypeName"]));
    }
    if (m.find("AppPolicyId") != m.end() && !m["AppPolicyId"].empty()) {
      appPolicyId = make_shared<string>(boost::any_cast<string>(m["AppPolicyId"]));
    }
    if (m.find("Apps") != m.end() && !m["Apps"].empty()) {
      if (typeid(vector<boost::any>) == m["Apps"].type()) {
        vector<GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Apps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apps = make_shared<vector<GetAppInstanceGroupResponseBodyAppInstanceGroupModelsApps>>(expect1);
      }
    }
    if (m.find("ChargeResourceMode") != m.end() && !m["ChargeResourceMode"].empty()) {
      chargeResourceMode = make_shared<string>(boost::any_cast<string>(m["ChargeResourceMode"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("MaxAmount") != m.end() && !m["MaxAmount"].empty()) {
      maxAmount = make_shared<long>(boost::any_cast<long>(m["MaxAmount"]));
    }
    if (m.find("MinAmount") != m.end() && !m["MinAmount"].empty()) {
      minAmount = make_shared<long>(boost::any_cast<long>(m["MinAmount"]));
    }
    if (m.find("NodePool") != m.end() && !m["NodePool"].empty()) {
      if (typeid(vector<boost::any>) == m["NodePool"].type()) {
        vector<GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodePool"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodePool = make_shared<vector<GetAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool>>(expect1);
      }
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("OtaInfo") != m.end() && !m["OtaInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["OtaInfo"].type()) {
        GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OtaInfo"]));
        otaInfo = make_shared<GetAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo>(model1);
      }
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReserveAmountRatio") != m.end() && !m["ReserveAmountRatio"].empty()) {
      reserveAmountRatio = make_shared<string>(boost::any_cast<string>(m["ReserveAmountRatio"]));
    }
    if (m.find("ReserveMaxAmount") != m.end() && !m["ReserveMaxAmount"].empty()) {
      reserveMaxAmount = make_shared<long>(boost::any_cast<long>(m["ReserveMaxAmount"]));
    }
    if (m.find("ReserveMinAmount") != m.end() && !m["ReserveMinAmount"].empty()) {
      reserveMinAmount = make_shared<long>(boost::any_cast<long>(m["ReserveMinAmount"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<string>(boost::any_cast<string>(m["ResourceStatus"]));
    }
    if (m.find("ScalingDownAfterIdleMinutes") != m.end() && !m["ScalingDownAfterIdleMinutes"].empty()) {
      scalingDownAfterIdleMinutes = make_shared<long>(boost::any_cast<long>(m["ScalingDownAfterIdleMinutes"]));
    }
    if (m.find("ScalingStep") != m.end() && !m["ScalingStep"].empty()) {
      scalingStep = make_shared<long>(boost::any_cast<long>(m["ScalingStep"]));
    }
    if (m.find("ScalingUsageThreshold") != m.end() && !m["ScalingUsageThreshold"].empty()) {
      scalingUsageThreshold = make_shared<string>(boost::any_cast<string>(m["ScalingUsageThreshold"]));
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<string>(boost::any_cast<string>(m["SessionTimeout"]));
    }
    if (m.find("SessionType") != m.end() && !m["SessionType"].empty()) {
      sessionType = make_shared<string>(boost::any_cast<string>(m["SessionType"]));
    }
    if (m.find("SkipUserAuthCheck") != m.end() && !m["SkipUserAuthCheck"].empty()) {
      skipUserAuthCheck = make_shared<bool>(boost::any_cast<bool>(m["SkipUserAuthCheck"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<string>(boost::any_cast<string>(m["SpecId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetAppInstanceGroupResponseBodyAppInstanceGroupModels() = default;
};
class GetAppInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAppInstanceGroupResponseBodyAppInstanceGroupModels> appInstanceGroupModels{};
  shared_ptr<string> requestId{};

  GetAppInstanceGroupResponseBody() {}

  explicit GetAppInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupModels) {
      res["AppInstanceGroupModels"] = appInstanceGroupModels ? boost::any(appInstanceGroupModels->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupModels") != m.end() && !m["AppInstanceGroupModels"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppInstanceGroupModels"].type()) {
        GetAppInstanceGroupResponseBodyAppInstanceGroupModels model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppInstanceGroupModels"]));
        appInstanceGroupModels = make_shared<GetAppInstanceGroupResponseBodyAppInstanceGroupModels>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAppInstanceGroupResponseBody() = default;
};
class GetAppInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppInstanceGroupResponseBody> body{};

  GetAppInstanceGroupResponse() {}

  explicit GetAppInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppInstanceGroupResponse() = default;
};
class GetConnectionTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessType{};
  shared_ptr<string> appId{};
  shared_ptr<vector<string>> appInstanceGroupIdList{};
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> appInstancePersistentId{};
  shared_ptr<string> appStartParam{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> productType{};
  shared_ptr<string> taskId{};

  GetConnectionTicketRequest() {}

  explicit GetConnectionTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appInstanceGroupIdList) {
      res["AppInstanceGroupIdList"] = boost::any(*appInstanceGroupIdList);
    }
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (appInstancePersistentId) {
      res["AppInstancePersistentId"] = boost::any(*appInstancePersistentId);
    }
    if (appStartParam) {
      res["AppStartParam"] = boost::any(*appStartParam);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppInstanceGroupIdList") != m.end() && !m["AppInstanceGroupIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppInstanceGroupIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppInstanceGroupIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appInstanceGroupIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("AppInstancePersistentId") != m.end() && !m["AppInstancePersistentId"].empty()) {
      appInstancePersistentId = make_shared<string>(boost::any_cast<string>(m["AppInstancePersistentId"]));
    }
    if (m.find("AppStartParam") != m.end() && !m["AppStartParam"].empty()) {
      appStartParam = make_shared<string>(boost::any_cast<string>(m["AppStartParam"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetConnectionTicketRequest() = default;
};
class GetConnectionTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> appInstancePersistentId{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> osType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> ticket{};

  GetConnectionTicketResponseBody() {}

  explicit GetConnectionTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (appInstancePersistentId) {
      res["AppInstancePersistentId"] = boost::any(*appInstancePersistentId);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (ticket) {
      res["Ticket"] = boost::any(*ticket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("AppInstancePersistentId") != m.end() && !m["AppInstancePersistentId"].empty()) {
      appInstancePersistentId = make_shared<string>(boost::any_cast<string>(m["AppInstancePersistentId"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Ticket") != m.end() && !m["Ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["Ticket"]));
    }
  }


  virtual ~GetConnectionTicketResponseBody() = default;
};
class GetConnectionTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConnectionTicketResponseBody> body{};

  GetConnectionTicketResponse() {}

  explicit GetConnectionTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConnectionTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConnectionTicketResponseBody>(model1);
      }
    }
  }


  virtual ~GetConnectionTicketResponse() = default;
};
class GetDebugAppInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> productType{};

  GetDebugAppInstanceRequest() {}

  explicit GetDebugAppInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~GetDebugAppInstanceRequest() = default;
};
class GetDebugAppInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> authCode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> userId{};

  GetDebugAppInstanceResponseBody() {}

  explicit GetDebugAppInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetDebugAppInstanceResponseBody() = default;
};
class GetDebugAppInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDebugAppInstanceResponseBody> body{};

  GetDebugAppInstanceResponse() {}

  explicit GetDebugAppInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDebugAppInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDebugAppInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetDebugAppInstanceResponse() = default;
};
class GetOtaTaskByTaskIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetOtaTaskByTaskIdRequest() {}

  explicit GetOtaTaskByTaskIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetOtaTaskByTaskIdRequest() = default;
};
class GetOtaTaskByTaskIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> otaVersion{};
  shared_ptr<string> releaseNote{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskStartTime{};

  GetOtaTaskByTaskIdResponseBody() {}

  explicit GetOtaTaskByTaskIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (otaVersion) {
      res["OtaVersion"] = boost::any(*otaVersion);
    }
    if (releaseNote) {
      res["ReleaseNote"] = boost::any(*releaseNote);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskStartTime) {
      res["TaskStartTime"] = boost::any(*taskStartTime);
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
    if (m.find("OtaVersion") != m.end() && !m["OtaVersion"].empty()) {
      otaVersion = make_shared<string>(boost::any_cast<string>(m["OtaVersion"]));
    }
    if (m.find("ReleaseNote") != m.end() && !m["ReleaseNote"].empty()) {
      releaseNote = make_shared<string>(boost::any_cast<string>(m["ReleaseNote"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskStartTime") != m.end() && !m["TaskStartTime"].empty()) {
      taskStartTime = make_shared<string>(boost::any_cast<string>(m["TaskStartTime"]));
    }
  }


  virtual ~GetOtaTaskByTaskIdResponseBody() = default;
};
class GetOtaTaskByTaskIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOtaTaskByTaskIdResponseBody> body{};

  GetOtaTaskByTaskIdResponse() {}

  explicit GetOtaTaskByTaskIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOtaTaskByTaskIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOtaTaskByTaskIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetOtaTaskByTaskIdResponse() = default;
};
class GetResourcePriceRequest : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> appInstanceType{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> nodeInstanceType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> productType{};

  GetResourcePriceRequest() {}

  explicit GetResourcePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (appInstanceType) {
      res["AppInstanceType"] = boost::any(*appInstanceType);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (nodeInstanceType) {
      res["NodeInstanceType"] = boost::any(*nodeInstanceType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("AppInstanceType") != m.end() && !m["AppInstanceType"].empty()) {
      appInstanceType = make_shared<string>(boost::any_cast<string>(m["AppInstanceType"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("NodeInstanceType") != m.end() && !m["NodeInstanceType"].empty()) {
      nodeInstanceType = make_shared<string>(boost::any_cast<string>(m["NodeInstanceType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~GetResourcePriceRequest() = default;
};
class GetResourcePriceResponseBodyPriceListPricePromotions : public Darabonba::Model {
public:
  shared_ptr<string> optionCode{};
  shared_ptr<string> promotionDesc{};
  shared_ptr<string> promotionId{};
  shared_ptr<string> promotionName{};
  shared_ptr<bool> selected{};

  GetResourcePriceResponseBodyPriceListPricePromotions() {}

  explicit GetResourcePriceResponseBodyPriceListPricePromotions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (optionCode) {
      res["OptionCode"] = boost::any(*optionCode);
    }
    if (promotionDesc) {
      res["PromotionDesc"] = boost::any(*promotionDesc);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OptionCode") != m.end() && !m["OptionCode"].empty()) {
      optionCode = make_shared<string>(boost::any_cast<string>(m["OptionCode"]));
    }
    if (m.find("PromotionDesc") != m.end() && !m["PromotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["PromotionDesc"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
  }


  virtual ~GetResourcePriceResponseBodyPriceListPricePromotions() = default;
};
class GetResourcePriceResponseBodyPriceListPrice : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<string> discountPrice{};
  shared_ptr<string> originalPrice{};
  shared_ptr<vector<GetResourcePriceResponseBodyPriceListPricePromotions>> promotions{};
  shared_ptr<string> tradePrice{};

  GetResourcePriceResponseBodyPriceListPrice() {}

  explicit GetResourcePriceResponseBodyPriceListPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (promotions) {
      vector<boost::any> temp1;
      for(auto item1:*promotions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Promotions"] = boost::any(temp1);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<string>(boost::any_cast<string>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<string>(boost::any_cast<string>(m["OriginalPrice"]));
    }
    if (m.find("Promotions") != m.end() && !m["Promotions"].empty()) {
      if (typeid(vector<boost::any>) == m["Promotions"].type()) {
        vector<GetResourcePriceResponseBodyPriceListPricePromotions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Promotions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourcePriceResponseBodyPriceListPricePromotions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promotions = make_shared<vector<GetResourcePriceResponseBodyPriceListPricePromotions>>(expect1);
      }
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<string>(boost::any_cast<string>(m["TradePrice"]));
    }
  }


  virtual ~GetResourcePriceResponseBodyPriceListPrice() = default;
};
class GetResourcePriceResponseBodyPriceListRules : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> ruleId{};

  GetResourcePriceResponseBodyPriceListRules() {}

  explicit GetResourcePriceResponseBodyPriceListRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~GetResourcePriceResponseBodyPriceListRules() = default;
};
class GetResourcePriceResponseBodyPriceList : public Darabonba::Model {
public:
  shared_ptr<GetResourcePriceResponseBodyPriceListPrice> price{};
  shared_ptr<string> priceType{};
  shared_ptr<vector<GetResourcePriceResponseBodyPriceListRules>> rules{};

  GetResourcePriceResponseBodyPriceList() {}

  explicit GetResourcePriceResponseBodyPriceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (price) {
      res["Price"] = price ? boost::any(price->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (priceType) {
      res["PriceType"] = boost::any(*priceType);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      if (typeid(map<string, boost::any>) == m["Price"].type()) {
        GetResourcePriceResponseBodyPriceListPrice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Price"]));
        price = make_shared<GetResourcePriceResponseBodyPriceListPrice>(model1);
      }
    }
    if (m.find("PriceType") != m.end() && !m["PriceType"].empty()) {
      priceType = make_shared<string>(boost::any_cast<string>(m["PriceType"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<GetResourcePriceResponseBodyPriceListRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourcePriceResponseBodyPriceListRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<GetResourcePriceResponseBodyPriceListRules>>(expect1);
      }
    }
  }


  virtual ~GetResourcePriceResponseBodyPriceList() = default;
};
class GetResourcePriceResponseBodyPriceModelPricePromotions : public Darabonba::Model {
public:
  shared_ptr<string> optionCode{};
  shared_ptr<string> promotionDesc{};
  shared_ptr<string> promotionId{};
  shared_ptr<string> promotionName{};
  shared_ptr<bool> selected{};

  GetResourcePriceResponseBodyPriceModelPricePromotions() {}

  explicit GetResourcePriceResponseBodyPriceModelPricePromotions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (optionCode) {
      res["OptionCode"] = boost::any(*optionCode);
    }
    if (promotionDesc) {
      res["PromotionDesc"] = boost::any(*promotionDesc);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OptionCode") != m.end() && !m["OptionCode"].empty()) {
      optionCode = make_shared<string>(boost::any_cast<string>(m["OptionCode"]));
    }
    if (m.find("PromotionDesc") != m.end() && !m["PromotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["PromotionDesc"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
  }


  virtual ~GetResourcePriceResponseBodyPriceModelPricePromotions() = default;
};
class GetResourcePriceResponseBodyPriceModelPrice : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<string> discountPrice{};
  shared_ptr<string> originalPrice{};
  shared_ptr<vector<GetResourcePriceResponseBodyPriceModelPricePromotions>> promotions{};
  shared_ptr<string> tradePrice{};

  GetResourcePriceResponseBodyPriceModelPrice() {}

  explicit GetResourcePriceResponseBodyPriceModelPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (promotions) {
      vector<boost::any> temp1;
      for(auto item1:*promotions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Promotions"] = boost::any(temp1);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<string>(boost::any_cast<string>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<string>(boost::any_cast<string>(m["OriginalPrice"]));
    }
    if (m.find("Promotions") != m.end() && !m["Promotions"].empty()) {
      if (typeid(vector<boost::any>) == m["Promotions"].type()) {
        vector<GetResourcePriceResponseBodyPriceModelPricePromotions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Promotions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourcePriceResponseBodyPriceModelPricePromotions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promotions = make_shared<vector<GetResourcePriceResponseBodyPriceModelPricePromotions>>(expect1);
      }
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<string>(boost::any_cast<string>(m["TradePrice"]));
    }
  }


  virtual ~GetResourcePriceResponseBodyPriceModelPrice() = default;
};
class GetResourcePriceResponseBodyPriceModelRules : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> ruleId{};

  GetResourcePriceResponseBodyPriceModelRules() {}

  explicit GetResourcePriceResponseBodyPriceModelRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~GetResourcePriceResponseBodyPriceModelRules() = default;
};
class GetResourcePriceResponseBodyPriceModel : public Darabonba::Model {
public:
  shared_ptr<GetResourcePriceResponseBodyPriceModelPrice> price{};
  shared_ptr<vector<GetResourcePriceResponseBodyPriceModelRules>> rules{};

  GetResourcePriceResponseBodyPriceModel() {}

  explicit GetResourcePriceResponseBodyPriceModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (price) {
      res["Price"] = price ? boost::any(price->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      if (typeid(map<string, boost::any>) == m["Price"].type()) {
        GetResourcePriceResponseBodyPriceModelPrice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Price"]));
        price = make_shared<GetResourcePriceResponseBodyPriceModelPrice>(model1);
      }
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<GetResourcePriceResponseBodyPriceModelRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourcePriceResponseBodyPriceModelRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<GetResourcePriceResponseBodyPriceModelRules>>(expect1);
      }
    }
  }


  virtual ~GetResourcePriceResponseBodyPriceModel() = default;
};
class GetResourcePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<GetResourcePriceResponseBodyPriceList>> priceList{};
  shared_ptr<GetResourcePriceResponseBodyPriceModel> priceModel{};
  shared_ptr<string> requestId{};

  GetResourcePriceResponseBody() {}

  explicit GetResourcePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (priceList) {
      vector<boost::any> temp1;
      for(auto item1:*priceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PriceList"] = boost::any(temp1);
    }
    if (priceModel) {
      res["PriceModel"] = priceModel ? boost::any(priceModel->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("PriceList") != m.end() && !m["PriceList"].empty()) {
      if (typeid(vector<boost::any>) == m["PriceList"].type()) {
        vector<GetResourcePriceResponseBodyPriceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PriceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourcePriceResponseBodyPriceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        priceList = make_shared<vector<GetResourcePriceResponseBodyPriceList>>(expect1);
      }
    }
    if (m.find("PriceModel") != m.end() && !m["PriceModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["PriceModel"].type()) {
        GetResourcePriceResponseBodyPriceModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PriceModel"]));
        priceModel = make_shared<GetResourcePriceResponseBodyPriceModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetResourcePriceResponseBody() = default;
};
class GetResourcePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourcePriceResponseBody> body{};

  GetResourcePriceResponse() {}

  explicit GetResourcePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourcePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourcePriceResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourcePriceResponse() = default;
};
class GetResourceRenewPriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> productType{};

  GetResourceRenewPriceRequest() {}

  explicit GetResourceRenewPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~GetResourceRenewPriceRequest() = default;
};
class GetResourceRenewPriceResponseBodyDataPricePromotions : public Darabonba::Model {
public:
  shared_ptr<string> optionCode{};
  shared_ptr<string> promotionDesc{};
  shared_ptr<string> promotionId{};
  shared_ptr<string> promotionName{};
  shared_ptr<bool> selected{};

  GetResourceRenewPriceResponseBodyDataPricePromotions() {}

  explicit GetResourceRenewPriceResponseBodyDataPricePromotions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (optionCode) {
      res["OptionCode"] = boost::any(*optionCode);
    }
    if (promotionDesc) {
      res["PromotionDesc"] = boost::any(*promotionDesc);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OptionCode") != m.end() && !m["OptionCode"].empty()) {
      optionCode = make_shared<string>(boost::any_cast<string>(m["OptionCode"]));
    }
    if (m.find("PromotionDesc") != m.end() && !m["PromotionDesc"].empty()) {
      promotionDesc = make_shared<string>(boost::any_cast<string>(m["PromotionDesc"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
  }


  virtual ~GetResourceRenewPriceResponseBodyDataPricePromotions() = default;
};
class GetResourceRenewPriceResponseBodyDataPrice : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<string> discountPrice{};
  shared_ptr<string> originalPrice{};
  shared_ptr<vector<GetResourceRenewPriceResponseBodyDataPricePromotions>> promotions{};
  shared_ptr<string> tradePrice{};

  GetResourceRenewPriceResponseBodyDataPrice() {}

  explicit GetResourceRenewPriceResponseBodyDataPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (promotions) {
      vector<boost::any> temp1;
      for(auto item1:*promotions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Promotions"] = boost::any(temp1);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<string>(boost::any_cast<string>(m["DiscountPrice"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<string>(boost::any_cast<string>(m["OriginalPrice"]));
    }
    if (m.find("Promotions") != m.end() && !m["Promotions"].empty()) {
      if (typeid(vector<boost::any>) == m["Promotions"].type()) {
        vector<GetResourceRenewPriceResponseBodyDataPricePromotions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Promotions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceRenewPriceResponseBodyDataPricePromotions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promotions = make_shared<vector<GetResourceRenewPriceResponseBodyDataPricePromotions>>(expect1);
      }
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<string>(boost::any_cast<string>(m["TradePrice"]));
    }
  }


  virtual ~GetResourceRenewPriceResponseBodyDataPrice() = default;
};
class GetResourceRenewPriceResponseBodyDataRules : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> ruleId{};

  GetResourceRenewPriceResponseBodyDataRules() {}

  explicit GetResourceRenewPriceResponseBodyDataRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~GetResourceRenewPriceResponseBodyDataRules() = default;
};
class GetResourceRenewPriceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetResourceRenewPriceResponseBodyDataPrice> price{};
  shared_ptr<vector<GetResourceRenewPriceResponseBodyDataRules>> rules{};

  GetResourceRenewPriceResponseBodyData() {}

  explicit GetResourceRenewPriceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (price) {
      res["Price"] = price ? boost::any(price->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      if (typeid(map<string, boost::any>) == m["Price"].type()) {
        GetResourceRenewPriceResponseBodyDataPrice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Price"]));
        price = make_shared<GetResourceRenewPriceResponseBodyDataPrice>(model1);
      }
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<GetResourceRenewPriceResponseBodyDataRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourceRenewPriceResponseBodyDataRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<GetResourceRenewPriceResponseBodyDataRules>>(expect1);
      }
    }
  }


  virtual ~GetResourceRenewPriceResponseBodyData() = default;
};
class GetResourceRenewPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetResourceRenewPriceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetResourceRenewPriceResponseBody() {}

  explicit GetResourceRenewPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceRenewPriceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetResourceRenewPriceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetResourceRenewPriceResponseBody() = default;
};
class GetResourceRenewPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceRenewPriceResponseBody> body{};

  GetResourceRenewPriceResponse() {}

  explicit GetResourceRenewPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceRenewPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceRenewPriceResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceRenewPriceResponse() = default;
};
class ListAccessPagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessPageId{};
  shared_ptr<string> accessPageName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> sortType{};

  ListAccessPagesRequest() {}

  explicit ListAccessPagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessPageId) {
      res["AccessPageId"] = boost::any(*accessPageId);
    }
    if (accessPageName) {
      res["AccessPageName"] = boost::any(*accessPageName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sortType) {
      res["SortType"] = boost::any(*sortType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessPageId") != m.end() && !m["AccessPageId"].empty()) {
      accessPageId = make_shared<string>(boost::any_cast<string>(m["AccessPageId"]));
    }
    if (m.find("AccessPageName") != m.end() && !m["AccessPageName"].empty()) {
      accessPageName = make_shared<string>(boost::any_cast<string>(m["AccessPageName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SortType") != m.end() && !m["SortType"].empty()) {
      sortType = make_shared<string>(boost::any_cast<string>(m["SortType"]));
    }
  }


  virtual ~ListAccessPagesRequest() = default;
};
class ListAccessPagesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessMode{};
  shared_ptr<string> accessPageId{};
  shared_ptr<string> accessPageName{};
  shared_ptr<string> accessPageState{};
  shared_ptr<string> accessUrl{};
  shared_ptr<string> contentId{};
  shared_ptr<string> contentName{};
  shared_ptr<long> effectTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> unit{};
  shared_ptr<string> urlExpireTime{};

  ListAccessPagesResponseBodyData() {}

  explicit ListAccessPagesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessMode) {
      res["AccessMode"] = boost::any(*accessMode);
    }
    if (accessPageId) {
      res["AccessPageId"] = boost::any(*accessPageId);
    }
    if (accessPageName) {
      res["AccessPageName"] = boost::any(*accessPageName);
    }
    if (accessPageState) {
      res["AccessPageState"] = boost::any(*accessPageState);
    }
    if (accessUrl) {
      res["AccessUrl"] = boost::any(*accessUrl);
    }
    if (contentId) {
      res["ContentId"] = boost::any(*contentId);
    }
    if (contentName) {
      res["ContentName"] = boost::any(*contentName);
    }
    if (effectTime) {
      res["EffectTime"] = boost::any(*effectTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    if (urlExpireTime) {
      res["UrlExpireTime"] = boost::any(*urlExpireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessMode") != m.end() && !m["AccessMode"].empty()) {
      accessMode = make_shared<string>(boost::any_cast<string>(m["AccessMode"]));
    }
    if (m.find("AccessPageId") != m.end() && !m["AccessPageId"].empty()) {
      accessPageId = make_shared<string>(boost::any_cast<string>(m["AccessPageId"]));
    }
    if (m.find("AccessPageName") != m.end() && !m["AccessPageName"].empty()) {
      accessPageName = make_shared<string>(boost::any_cast<string>(m["AccessPageName"]));
    }
    if (m.find("AccessPageState") != m.end() && !m["AccessPageState"].empty()) {
      accessPageState = make_shared<string>(boost::any_cast<string>(m["AccessPageState"]));
    }
    if (m.find("AccessUrl") != m.end() && !m["AccessUrl"].empty()) {
      accessUrl = make_shared<string>(boost::any_cast<string>(m["AccessUrl"]));
    }
    if (m.find("ContentId") != m.end() && !m["ContentId"].empty()) {
      contentId = make_shared<string>(boost::any_cast<string>(m["ContentId"]));
    }
    if (m.find("ContentName") != m.end() && !m["ContentName"].empty()) {
      contentName = make_shared<string>(boost::any_cast<string>(m["ContentName"]));
    }
    if (m.find("EffectTime") != m.end() && !m["EffectTime"].empty()) {
      effectTime = make_shared<long>(boost::any_cast<long>(m["EffectTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
    if (m.find("UrlExpireTime") != m.end() && !m["UrlExpireTime"].empty()) {
      urlExpireTime = make_shared<string>(boost::any_cast<string>(m["UrlExpireTime"]));
    }
  }


  virtual ~ListAccessPagesResponseBodyData() = default;
};
class ListAccessPagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> count{};
  shared_ptr<vector<ListAccessPagesResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ListAccessPagesResponseBody() {}

  explicit ListAccessPagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAccessPagesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccessPagesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAccessPagesResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
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
  }


  virtual ~ListAccessPagesResponseBody() = default;
};
class ListAccessPagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccessPagesResponseBody> body{};

  ListAccessPagesResponse() {}

  explicit ListAccessPagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccessPagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccessPagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccessPagesResponse() = default;
};
class ListAppInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCenterImageId{};
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceGroupName{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> nodeInstanceType{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productType{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> status{};

  ListAppInstanceGroupRequest() {}

  explicit ListAppInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCenterImageId) {
      res["AppCenterImageId"] = boost::any(*appCenterImageId);
    }
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceGroupName) {
      res["AppInstanceGroupName"] = boost::any(*appInstanceGroupName);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (nodeInstanceType) {
      res["NodeInstanceType"] = boost::any(*nodeInstanceType);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCenterImageId") != m.end() && !m["AppCenterImageId"].empty()) {
      appCenterImageId = make_shared<string>(boost::any_cast<string>(m["AppCenterImageId"]));
    }
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceGroupName") != m.end() && !m["AppInstanceGroupName"].empty()) {
      appInstanceGroupName = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupName"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("NodeInstanceType") != m.end() && !m["NodeInstanceType"].empty()) {
      nodeInstanceType = make_shared<string>(boost::any_cast<string>(m["NodeInstanceType"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      status = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListAppInstanceGroupRequest() = default;
};
class ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps : public Darabonba::Model {
public:
  shared_ptr<string> appIcon{};
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> appVersionName{};

  ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps() {}

  explicit ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appIcon) {
      res["AppIcon"] = boost::any(*appIcon);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (appVersionName) {
      res["AppVersionName"] = boost::any(*appVersionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppIcon") != m.end() && !m["AppIcon"].empty()) {
      appIcon = make_shared<string>(boost::any_cast<string>(m["AppIcon"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("AppVersionName") != m.end() && !m["AppVersionName"].empty()) {
      appVersionName = make_shared<string>(boost::any_cast<string>(m["AppVersionName"]));
    }
  }


  virtual ~ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps() = default;
};
class ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods() {}

  explicit ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
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
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods() = default;
};
class ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules : public Darabonba::Model {
public:
  shared_ptr<string> recurrenceType{};
  shared_ptr<vector<long>> recurrenceValues{};
  shared_ptr<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods>> timerPeriods{};

  ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules() {}

  explicit ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (recurrenceValues) {
      res["RecurrenceValues"] = boost::any(*recurrenceValues);
    }
    if (timerPeriods) {
      vector<boost::any> temp1;
      for(auto item1:*timerPeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimerPeriods"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("RecurrenceValues") != m.end() && !m["RecurrenceValues"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RecurrenceValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecurrenceValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      recurrenceValues = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TimerPeriods") != m.end() && !m["TimerPeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["TimerPeriods"].type()) {
        vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimerPeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timerPeriods = make_shared<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedulesTimerPeriods>>(expect1);
      }
    }
  }


  virtual ~ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules() = default;
};
class ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<long> maxIdleAppInstanceAmount{};
  shared_ptr<long> maxScalingAmount{};
  shared_ptr<long> nodeAmount{};
  shared_ptr<long> nodeCapacity{};
  shared_ptr<string> nodeInstanceType{};
  shared_ptr<string> nodePoolId{};
  shared_ptr<string> nodeTypeName{};
  shared_ptr<long> nodeUsed{};
  shared_ptr<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules>> recurrenceSchedules{};
  shared_ptr<long> scalingDownAfterIdleMinutes{};
  shared_ptr<long> scalingNodeAmount{};
  shared_ptr<long> scalingNodeUsed{};
  shared_ptr<long> scalingStep{};
  shared_ptr<string> scalingUsageThreshold{};
  shared_ptr<string> strategyDisableDate{};
  shared_ptr<string> strategyEnableDate{};
  shared_ptr<string> strategyType{};
  shared_ptr<bool> warmUp{};

  ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool() {}

  explicit ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (maxIdleAppInstanceAmount) {
      res["MaxIdleAppInstanceAmount"] = boost::any(*maxIdleAppInstanceAmount);
    }
    if (maxScalingAmount) {
      res["MaxScalingAmount"] = boost::any(*maxScalingAmount);
    }
    if (nodeAmount) {
      res["NodeAmount"] = boost::any(*nodeAmount);
    }
    if (nodeCapacity) {
      res["NodeCapacity"] = boost::any(*nodeCapacity);
    }
    if (nodeInstanceType) {
      res["NodeInstanceType"] = boost::any(*nodeInstanceType);
    }
    if (nodePoolId) {
      res["NodePoolId"] = boost::any(*nodePoolId);
    }
    if (nodeTypeName) {
      res["NodeTypeName"] = boost::any(*nodeTypeName);
    }
    if (nodeUsed) {
      res["NodeUsed"] = boost::any(*nodeUsed);
    }
    if (recurrenceSchedules) {
      vector<boost::any> temp1;
      for(auto item1:*recurrenceSchedules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RecurrenceSchedules"] = boost::any(temp1);
    }
    if (scalingDownAfterIdleMinutes) {
      res["ScalingDownAfterIdleMinutes"] = boost::any(*scalingDownAfterIdleMinutes);
    }
    if (scalingNodeAmount) {
      res["ScalingNodeAmount"] = boost::any(*scalingNodeAmount);
    }
    if (scalingNodeUsed) {
      res["ScalingNodeUsed"] = boost::any(*scalingNodeUsed);
    }
    if (scalingStep) {
      res["ScalingStep"] = boost::any(*scalingStep);
    }
    if (scalingUsageThreshold) {
      res["ScalingUsageThreshold"] = boost::any(*scalingUsageThreshold);
    }
    if (strategyDisableDate) {
      res["StrategyDisableDate"] = boost::any(*strategyDisableDate);
    }
    if (strategyEnableDate) {
      res["StrategyEnableDate"] = boost::any(*strategyEnableDate);
    }
    if (strategyType) {
      res["StrategyType"] = boost::any(*strategyType);
    }
    if (warmUp) {
      res["WarmUp"] = boost::any(*warmUp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("MaxIdleAppInstanceAmount") != m.end() && !m["MaxIdleAppInstanceAmount"].empty()) {
      maxIdleAppInstanceAmount = make_shared<long>(boost::any_cast<long>(m["MaxIdleAppInstanceAmount"]));
    }
    if (m.find("MaxScalingAmount") != m.end() && !m["MaxScalingAmount"].empty()) {
      maxScalingAmount = make_shared<long>(boost::any_cast<long>(m["MaxScalingAmount"]));
    }
    if (m.find("NodeAmount") != m.end() && !m["NodeAmount"].empty()) {
      nodeAmount = make_shared<long>(boost::any_cast<long>(m["NodeAmount"]));
    }
    if (m.find("NodeCapacity") != m.end() && !m["NodeCapacity"].empty()) {
      nodeCapacity = make_shared<long>(boost::any_cast<long>(m["NodeCapacity"]));
    }
    if (m.find("NodeInstanceType") != m.end() && !m["NodeInstanceType"].empty()) {
      nodeInstanceType = make_shared<string>(boost::any_cast<string>(m["NodeInstanceType"]));
    }
    if (m.find("NodePoolId") != m.end() && !m["NodePoolId"].empty()) {
      nodePoolId = make_shared<string>(boost::any_cast<string>(m["NodePoolId"]));
    }
    if (m.find("NodeTypeName") != m.end() && !m["NodeTypeName"].empty()) {
      nodeTypeName = make_shared<string>(boost::any_cast<string>(m["NodeTypeName"]));
    }
    if (m.find("NodeUsed") != m.end() && !m["NodeUsed"].empty()) {
      nodeUsed = make_shared<long>(boost::any_cast<long>(m["NodeUsed"]));
    }
    if (m.find("RecurrenceSchedules") != m.end() && !m["RecurrenceSchedules"].empty()) {
      if (typeid(vector<boost::any>) == m["RecurrenceSchedules"].type()) {
        vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RecurrenceSchedules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recurrenceSchedules = make_shared<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePoolRecurrenceSchedules>>(expect1);
      }
    }
    if (m.find("ScalingDownAfterIdleMinutes") != m.end() && !m["ScalingDownAfterIdleMinutes"].empty()) {
      scalingDownAfterIdleMinutes = make_shared<long>(boost::any_cast<long>(m["ScalingDownAfterIdleMinutes"]));
    }
    if (m.find("ScalingNodeAmount") != m.end() && !m["ScalingNodeAmount"].empty()) {
      scalingNodeAmount = make_shared<long>(boost::any_cast<long>(m["ScalingNodeAmount"]));
    }
    if (m.find("ScalingNodeUsed") != m.end() && !m["ScalingNodeUsed"].empty()) {
      scalingNodeUsed = make_shared<long>(boost::any_cast<long>(m["ScalingNodeUsed"]));
    }
    if (m.find("ScalingStep") != m.end() && !m["ScalingStep"].empty()) {
      scalingStep = make_shared<long>(boost::any_cast<long>(m["ScalingStep"]));
    }
    if (m.find("ScalingUsageThreshold") != m.end() && !m["ScalingUsageThreshold"].empty()) {
      scalingUsageThreshold = make_shared<string>(boost::any_cast<string>(m["ScalingUsageThreshold"]));
    }
    if (m.find("StrategyDisableDate") != m.end() && !m["StrategyDisableDate"].empty()) {
      strategyDisableDate = make_shared<string>(boost::any_cast<string>(m["StrategyDisableDate"]));
    }
    if (m.find("StrategyEnableDate") != m.end() && !m["StrategyEnableDate"].empty()) {
      strategyEnableDate = make_shared<string>(boost::any_cast<string>(m["StrategyEnableDate"]));
    }
    if (m.find("StrategyType") != m.end() && !m["StrategyType"].empty()) {
      strategyType = make_shared<string>(boost::any_cast<string>(m["StrategyType"]));
    }
    if (m.find("WarmUp") != m.end() && !m["WarmUp"].empty()) {
      warmUp = make_shared<bool>(boost::any_cast<bool>(m["WarmUp"]));
    }
  }


  virtual ~ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool() = default;
};
class ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo : public Darabonba::Model {
public:
  shared_ptr<string> newOtaVersion{};
  shared_ptr<string> otaVersion{};
  shared_ptr<string> taskId{};

  ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo() {}

  explicit ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newOtaVersion) {
      res["NewOtaVersion"] = boost::any(*newOtaVersion);
    }
    if (otaVersion) {
      res["OtaVersion"] = boost::any(*otaVersion);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewOtaVersion") != m.end() && !m["NewOtaVersion"].empty()) {
      newOtaVersion = make_shared<string>(boost::any_cast<string>(m["NewOtaVersion"]));
    }
    if (m.find("OtaVersion") != m.end() && !m["OtaVersion"].empty()) {
      otaVersion = make_shared<string>(boost::any_cast<string>(m["OtaVersion"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo() = default;
};
class ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> scope{};
  shared_ptr<string> value{};

  ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags() {}

  explicit ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
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
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags() = default;
};
class ListAppInstanceGroupResponseBodyAppInstanceGroupModels : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> appCenterImageId{};
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceGroupName{};
  shared_ptr<string> appInstanceType{};
  shared_ptr<string> appPolicyId{};
  shared_ptr<bool> appPolicyImageCheck{};
  shared_ptr<string> appPolicyVersion{};
  shared_ptr<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps>> apps{};
  shared_ptr<string> chargeResourceMode{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<long> maxAmount{};
  shared_ptr<long> minAmount{};
  shared_ptr<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool>> nodePool{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> osType{};
  shared_ptr<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo> otaInfo{};
  shared_ptr<string> productType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> reserveAmountRatio{};
  shared_ptr<long> reserveMaxAmount{};
  shared_ptr<long> reserveMinAmount{};
  shared_ptr<string> resourceStatus{};
  shared_ptr<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags>> resourceTags{};
  shared_ptr<long> scalingDownAfterIdleMinutes{};
  shared_ptr<long> scalingStep{};
  shared_ptr<string> scalingUsageThreshold{};
  shared_ptr<string> sessionTimeout{};
  shared_ptr<bool> skipUserAuthCheck{};
  shared_ptr<string> specId{};
  shared_ptr<string> status{};

  ListAppInstanceGroupResponseBodyAppInstanceGroupModels() {}

  explicit ListAppInstanceGroupResponseBodyAppInstanceGroupModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (appCenterImageId) {
      res["AppCenterImageId"] = boost::any(*appCenterImageId);
    }
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceGroupName) {
      res["AppInstanceGroupName"] = boost::any(*appInstanceGroupName);
    }
    if (appInstanceType) {
      res["AppInstanceType"] = boost::any(*appInstanceType);
    }
    if (appPolicyId) {
      res["AppPolicyId"] = boost::any(*appPolicyId);
    }
    if (appPolicyImageCheck) {
      res["AppPolicyImageCheck"] = boost::any(*appPolicyImageCheck);
    }
    if (appPolicyVersion) {
      res["AppPolicyVersion"] = boost::any(*appPolicyVersion);
    }
    if (apps) {
      vector<boost::any> temp1;
      for(auto item1:*apps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Apps"] = boost::any(temp1);
    }
    if (chargeResourceMode) {
      res["ChargeResourceMode"] = boost::any(*chargeResourceMode);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (maxAmount) {
      res["MaxAmount"] = boost::any(*maxAmount);
    }
    if (minAmount) {
      res["MinAmount"] = boost::any(*minAmount);
    }
    if (nodePool) {
      vector<boost::any> temp1;
      for(auto item1:*nodePool){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodePool"] = boost::any(temp1);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (otaInfo) {
      res["OtaInfo"] = otaInfo ? boost::any(otaInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (reserveAmountRatio) {
      res["ReserveAmountRatio"] = boost::any(*reserveAmountRatio);
    }
    if (reserveMaxAmount) {
      res["ReserveMaxAmount"] = boost::any(*reserveMaxAmount);
    }
    if (reserveMinAmount) {
      res["ReserveMinAmount"] = boost::any(*reserveMinAmount);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
    }
    if (resourceTags) {
      vector<boost::any> temp1;
      for(auto item1:*resourceTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceTags"] = boost::any(temp1);
    }
    if (scalingDownAfterIdleMinutes) {
      res["ScalingDownAfterIdleMinutes"] = boost::any(*scalingDownAfterIdleMinutes);
    }
    if (scalingStep) {
      res["ScalingStep"] = boost::any(*scalingStep);
    }
    if (scalingUsageThreshold) {
      res["ScalingUsageThreshold"] = boost::any(*scalingUsageThreshold);
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    if (skipUserAuthCheck) {
      res["SkipUserAuthCheck"] = boost::any(*skipUserAuthCheck);
    }
    if (specId) {
      res["SpecId"] = boost::any(*specId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("AppCenterImageId") != m.end() && !m["AppCenterImageId"].empty()) {
      appCenterImageId = make_shared<string>(boost::any_cast<string>(m["AppCenterImageId"]));
    }
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceGroupName") != m.end() && !m["AppInstanceGroupName"].empty()) {
      appInstanceGroupName = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupName"]));
    }
    if (m.find("AppInstanceType") != m.end() && !m["AppInstanceType"].empty()) {
      appInstanceType = make_shared<string>(boost::any_cast<string>(m["AppInstanceType"]));
    }
    if (m.find("AppPolicyId") != m.end() && !m["AppPolicyId"].empty()) {
      appPolicyId = make_shared<string>(boost::any_cast<string>(m["AppPolicyId"]));
    }
    if (m.find("AppPolicyImageCheck") != m.end() && !m["AppPolicyImageCheck"].empty()) {
      appPolicyImageCheck = make_shared<bool>(boost::any_cast<bool>(m["AppPolicyImageCheck"]));
    }
    if (m.find("AppPolicyVersion") != m.end() && !m["AppPolicyVersion"].empty()) {
      appPolicyVersion = make_shared<string>(boost::any_cast<string>(m["AppPolicyVersion"]));
    }
    if (m.find("Apps") != m.end() && !m["Apps"].empty()) {
      if (typeid(vector<boost::any>) == m["Apps"].type()) {
        vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Apps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apps = make_shared<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsApps>>(expect1);
      }
    }
    if (m.find("ChargeResourceMode") != m.end() && !m["ChargeResourceMode"].empty()) {
      chargeResourceMode = make_shared<string>(boost::any_cast<string>(m["ChargeResourceMode"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("MaxAmount") != m.end() && !m["MaxAmount"].empty()) {
      maxAmount = make_shared<long>(boost::any_cast<long>(m["MaxAmount"]));
    }
    if (m.find("MinAmount") != m.end() && !m["MinAmount"].empty()) {
      minAmount = make_shared<long>(boost::any_cast<long>(m["MinAmount"]));
    }
    if (m.find("NodePool") != m.end() && !m["NodePool"].empty()) {
      if (typeid(vector<boost::any>) == m["NodePool"].type()) {
        vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodePool"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodePool = make_shared<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsNodePool>>(expect1);
      }
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("OtaInfo") != m.end() && !m["OtaInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["OtaInfo"].type()) {
        ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OtaInfo"]));
        otaInfo = make_shared<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsOtaInfo>(model1);
      }
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReserveAmountRatio") != m.end() && !m["ReserveAmountRatio"].empty()) {
      reserveAmountRatio = make_shared<string>(boost::any_cast<string>(m["ReserveAmountRatio"]));
    }
    if (m.find("ReserveMaxAmount") != m.end() && !m["ReserveMaxAmount"].empty()) {
      reserveMaxAmount = make_shared<long>(boost::any_cast<long>(m["ReserveMaxAmount"]));
    }
    if (m.find("ReserveMinAmount") != m.end() && !m["ReserveMinAmount"].empty()) {
      reserveMinAmount = make_shared<long>(boost::any_cast<long>(m["ReserveMinAmount"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<string>(boost::any_cast<string>(m["ResourceStatus"]));
    }
    if (m.find("ResourceTags") != m.end() && !m["ResourceTags"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceTags"].type()) {
        vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceTags = make_shared<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModelsResourceTags>>(expect1);
      }
    }
    if (m.find("ScalingDownAfterIdleMinutes") != m.end() && !m["ScalingDownAfterIdleMinutes"].empty()) {
      scalingDownAfterIdleMinutes = make_shared<long>(boost::any_cast<long>(m["ScalingDownAfterIdleMinutes"]));
    }
    if (m.find("ScalingStep") != m.end() && !m["ScalingStep"].empty()) {
      scalingStep = make_shared<long>(boost::any_cast<long>(m["ScalingStep"]));
    }
    if (m.find("ScalingUsageThreshold") != m.end() && !m["ScalingUsageThreshold"].empty()) {
      scalingUsageThreshold = make_shared<string>(boost::any_cast<string>(m["ScalingUsageThreshold"]));
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<string>(boost::any_cast<string>(m["SessionTimeout"]));
    }
    if (m.find("SkipUserAuthCheck") != m.end() && !m["SkipUserAuthCheck"].empty()) {
      skipUserAuthCheck = make_shared<bool>(boost::any_cast<bool>(m["SkipUserAuthCheck"]));
    }
    if (m.find("SpecId") != m.end() && !m["SpecId"].empty()) {
      specId = make_shared<string>(boost::any_cast<string>(m["SpecId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListAppInstanceGroupResponseBodyAppInstanceGroupModels() = default;
};
class ListAppInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModels>> appInstanceGroupModels{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAppInstanceGroupResponseBody() {}

  explicit ListAppInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupModels) {
      vector<boost::any> temp1;
      for(auto item1:*appInstanceGroupModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppInstanceGroupModels"] = boost::any(temp1);
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
    if (m.find("AppInstanceGroupModels") != m.end() && !m["AppInstanceGroupModels"].empty()) {
      if (typeid(vector<boost::any>) == m["AppInstanceGroupModels"].type()) {
        vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppInstanceGroupModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppInstanceGroupResponseBodyAppInstanceGroupModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appInstanceGroupModels = make_shared<vector<ListAppInstanceGroupResponseBodyAppInstanceGroupModels>>(expect1);
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


  virtual ~ListAppInstanceGroupResponseBody() = default;
};
class ListAppInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppInstanceGroupResponseBody> body{};

  ListAppInstanceGroupResponse() {}

  explicit ListAppInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppInstanceGroupResponse() = default;
};
class ListAppInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceId{};
  shared_ptr<vector<string>> appInstanceIdList{};
  shared_ptr<bool> includeDeleted{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> status{};
  shared_ptr<vector<string>> userIdList{};

  ListAppInstancesRequest() {}

  explicit ListAppInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (appInstanceIdList) {
      res["AppInstanceIdList"] = boost::any(*appInstanceIdList);
    }
    if (includeDeleted) {
      res["IncludeDeleted"] = boost::any(*includeDeleted);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userIdList) {
      res["UserIdList"] = boost::any(*userIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("AppInstanceIdList") != m.end() && !m["AppInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appInstanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IncludeDeleted") != m.end() && !m["IncludeDeleted"].empty()) {
      includeDeleted = make_shared<bool>(boost::any_cast<bool>(m["IncludeDeleted"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      status = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserIdList") != m.end() && !m["UserIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListAppInstancesRequest() = default;
};
class ListAppInstancesResponseBodyAppInstanceModelsBindInfo : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<long> usageDuration{};

  ListAppInstancesResponseBodyAppInstanceModelsBindInfo() {}

  explicit ListAppInstancesResponseBodyAppInstanceModelsBindInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (usageDuration) {
      res["UsageDuration"] = boost::any(*usageDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("UsageDuration") != m.end() && !m["UsageDuration"].empty()) {
      usageDuration = make_shared<long>(boost::any_cast<long>(m["UsageDuration"]));
    }
  }


  virtual ~ListAppInstancesResponseBodyAppInstanceModelsBindInfo() = default;
};
class ListAppInstancesResponseBodyAppInstanceModels : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceId{};
  shared_ptr<ListAppInstancesResponseBodyAppInstanceModelsBindInfo> bindInfo{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> mainEthPublicIp{};
  shared_ptr<string> networkInterfaceIp{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> sessionStatus{};
  shared_ptr<string> status{};

  ListAppInstancesResponseBodyAppInstanceModels() {}

  explicit ListAppInstancesResponseBodyAppInstanceModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (bindInfo) {
      res["BindInfo"] = bindInfo ? boost::any(bindInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (mainEthPublicIp) {
      res["MainEthPublicIp"] = boost::any(*mainEthPublicIp);
    }
    if (networkInterfaceIp) {
      res["NetworkInterfaceIp"] = boost::any(*networkInterfaceIp);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (sessionStatus) {
      res["SessionStatus"] = boost::any(*sessionStatus);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("BindInfo") != m.end() && !m["BindInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["BindInfo"].type()) {
        ListAppInstancesResponseBodyAppInstanceModelsBindInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BindInfo"]));
        bindInfo = make_shared<ListAppInstancesResponseBodyAppInstanceModelsBindInfo>(model1);
      }
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("MainEthPublicIp") != m.end() && !m["MainEthPublicIp"].empty()) {
      mainEthPublicIp = make_shared<string>(boost::any_cast<string>(m["MainEthPublicIp"]));
    }
    if (m.find("NetworkInterfaceIp") != m.end() && !m["NetworkInterfaceIp"].empty()) {
      networkInterfaceIp = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceIp"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("SessionStatus") != m.end() && !m["SessionStatus"].empty()) {
      sessionStatus = make_shared<string>(boost::any_cast<string>(m["SessionStatus"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListAppInstancesResponseBodyAppInstanceModels() = default;
};
class ListAppInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppInstancesResponseBodyAppInstanceModels>> appInstanceModels{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAppInstancesResponseBody() {}

  explicit ListAppInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceModels) {
      vector<boost::any> temp1;
      for(auto item1:*appInstanceModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppInstanceModels"] = boost::any(temp1);
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
    if (m.find("AppInstanceModels") != m.end() && !m["AppInstanceModels"].empty()) {
      if (typeid(vector<boost::any>) == m["AppInstanceModels"].type()) {
        vector<ListAppInstancesResponseBodyAppInstanceModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppInstanceModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppInstancesResponseBodyAppInstanceModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appInstanceModels = make_shared<vector<ListAppInstancesResponseBodyAppInstanceModels>>(expect1);
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


  virtual ~ListAppInstancesResponseBody() = default;
};
class ListAppInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppInstancesResponseBody> body{};

  ListAppInstancesResponse() {}

  explicit ListAppInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppInstancesResponse() = default;
};
class ListBindInfoRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> appIdList{};
  shared_ptr<vector<string>> appInstanceGroupIdList{};
  shared_ptr<vector<string>> appInstanceIdList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> userIdList{};
  shared_ptr<vector<string>> wyIdList{};

  ListBindInfoRequest() {}

  explicit ListBindInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appIdList) {
      res["AppIdList"] = boost::any(*appIdList);
    }
    if (appInstanceGroupIdList) {
      res["AppInstanceGroupIdList"] = boost::any(*appInstanceGroupIdList);
    }
    if (appInstanceIdList) {
      res["AppInstanceIdList"] = boost::any(*appInstanceIdList);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userIdList) {
      res["UserIdList"] = boost::any(*userIdList);
    }
    if (wyIdList) {
      res["WyIdList"] = boost::any(*wyIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppIdList") != m.end() && !m["AppIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AppInstanceGroupIdList") != m.end() && !m["AppInstanceGroupIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppInstanceGroupIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppInstanceGroupIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appInstanceGroupIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AppInstanceIdList") != m.end() && !m["AppInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appInstanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserIdList") != m.end() && !m["UserIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WyIdList") != m.end() && !m["WyIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WyIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WyIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      wyIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListBindInfoRequest() = default;
};
class ListBindInfoResponseBodyBindInfoModels : public Darabonba::Model {
public:
  shared_ptr<string> accountType{};
  shared_ptr<string> appId{};
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> productType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> userId{};
  shared_ptr<string> wyId{};

  ListBindInfoResponseBodyBindInfoModels() {}

  explicit ListBindInfoResponseBodyBindInfoModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (wyId) {
      res["WyId"] = boost::any(*wyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WyId") != m.end() && !m["WyId"].empty()) {
      wyId = make_shared<string>(boost::any_cast<string>(m["WyId"]));
    }
  }


  virtual ~ListBindInfoResponseBodyBindInfoModels() = default;
};
class ListBindInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListBindInfoResponseBodyBindInfoModels>> bindInfoModels{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListBindInfoResponseBody() {}

  explicit ListBindInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindInfoModels) {
      vector<boost::any> temp1;
      for(auto item1:*bindInfoModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BindInfoModels"] = boost::any(temp1);
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
    if (m.find("BindInfoModels") != m.end() && !m["BindInfoModels"].empty()) {
      if (typeid(vector<boost::any>) == m["BindInfoModels"].type()) {
        vector<ListBindInfoResponseBodyBindInfoModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BindInfoModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBindInfoResponseBodyBindInfoModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bindInfoModels = make_shared<vector<ListBindInfoResponseBodyBindInfoModels>>(expect1);
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


  virtual ~ListBindInfoResponseBody() = default;
};
class ListBindInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBindInfoResponseBody> body{};

  ListBindInfoResponse() {}

  explicit ListBindInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBindInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBindInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ListBindInfoResponse() = default;
};
class ListNodeInstanceTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizRegionId{};
  shared_ptr<double> cpu{};
  shared_ptr<double> gpu{};
  shared_ptr<long> gpuMemory{};
  shared_ptr<string> language{};
  shared_ptr<long> memory{};
  shared_ptr<string> nodeInstanceType{};
  shared_ptr<string> nodeInstanceTypeFamily{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> osType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productType{};
  shared_ptr<string> sortType{};

  ListNodeInstanceTypeRequest() {}

  explicit ListNodeInstanceTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (gpuMemory) {
      res["GpuMemory"] = boost::any(*gpuMemory);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nodeInstanceType) {
      res["NodeInstanceType"] = boost::any(*nodeInstanceType);
    }
    if (nodeInstanceTypeFamily) {
      res["NodeInstanceTypeFamily"] = boost::any(*nodeInstanceTypeFamily);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
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
    if (sortType) {
      res["SortType"] = boost::any(*sortType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<double>(boost::any_cast<double>(m["Cpu"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<double>(boost::any_cast<double>(m["Gpu"]));
    }
    if (m.find("GpuMemory") != m.end() && !m["GpuMemory"].empty()) {
      gpuMemory = make_shared<long>(boost::any_cast<long>(m["GpuMemory"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("NodeInstanceType") != m.end() && !m["NodeInstanceType"].empty()) {
      nodeInstanceType = make_shared<string>(boost::any_cast<string>(m["NodeInstanceType"]));
    }
    if (m.find("NodeInstanceTypeFamily") != m.end() && !m["NodeInstanceTypeFamily"].empty()) {
      nodeInstanceTypeFamily = make_shared<string>(boost::any_cast<string>(m["NodeInstanceTypeFamily"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SortType") != m.end() && !m["SortType"].empty()) {
      sortType = make_shared<string>(boost::any_cast<string>(m["SortType"]));
    }
  }


  virtual ~ListNodeInstanceTypeRequest() = default;
};
class ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels : public Darabonba::Model {
public:
  shared_ptr<string> cpu{};
  shared_ptr<string> gpu{};
  shared_ptr<long> gpuMemory{};
  shared_ptr<long> maxCapacity{};
  shared_ptr<long> memory{};
  shared_ptr<string> nodeInstanceType{};
  shared_ptr<string> nodeInstanceTypeFamily{};
  shared_ptr<string> nodeTypeName{};

  ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels() {}

  explicit ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (gpuMemory) {
      res["GpuMemory"] = boost::any(*gpuMemory);
    }
    if (maxCapacity) {
      res["MaxCapacity"] = boost::any(*maxCapacity);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nodeInstanceType) {
      res["NodeInstanceType"] = boost::any(*nodeInstanceType);
    }
    if (nodeInstanceTypeFamily) {
      res["NodeInstanceTypeFamily"] = boost::any(*nodeInstanceTypeFamily);
    }
    if (nodeTypeName) {
      res["NodeTypeName"] = boost::any(*nodeTypeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<string>(boost::any_cast<string>(m["Cpu"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<string>(boost::any_cast<string>(m["Gpu"]));
    }
    if (m.find("GpuMemory") != m.end() && !m["GpuMemory"].empty()) {
      gpuMemory = make_shared<long>(boost::any_cast<long>(m["GpuMemory"]));
    }
    if (m.find("MaxCapacity") != m.end() && !m["MaxCapacity"].empty()) {
      maxCapacity = make_shared<long>(boost::any_cast<long>(m["MaxCapacity"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("NodeInstanceType") != m.end() && !m["NodeInstanceType"].empty()) {
      nodeInstanceType = make_shared<string>(boost::any_cast<string>(m["NodeInstanceType"]));
    }
    if (m.find("NodeInstanceTypeFamily") != m.end() && !m["NodeInstanceTypeFamily"].empty()) {
      nodeInstanceTypeFamily = make_shared<string>(boost::any_cast<string>(m["NodeInstanceTypeFamily"]));
    }
    if (m.find("NodeTypeName") != m.end() && !m["NodeTypeName"].empty()) {
      nodeTypeName = make_shared<string>(boost::any_cast<string>(m["NodeTypeName"]));
    }
  }


  virtual ~ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels() = default;
};
class ListNodeInstanceTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels>> nodeInstanceTypeModels{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListNodeInstanceTypeResponseBody() {}

  explicit ListNodeInstanceTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeInstanceTypeModels) {
      vector<boost::any> temp1;
      for(auto item1:*nodeInstanceTypeModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeInstanceTypeModels"] = boost::any(temp1);
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
    if (m.find("NodeInstanceTypeModels") != m.end() && !m["NodeInstanceTypeModels"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeInstanceTypeModels"].type()) {
        vector<ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeInstanceTypeModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeInstanceTypeModels = make_shared<vector<ListNodeInstanceTypeResponseBodyNodeInstanceTypeModels>>(expect1);
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


  virtual ~ListNodeInstanceTypeResponseBody() = default;
};
class ListNodeInstanceTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodeInstanceTypeResponseBody> body{};

  ListNodeInstanceTypeResponse() {}

  explicit ListNodeInstanceTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNodeInstanceTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodeInstanceTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodeInstanceTypeResponse() = default;
};
class ListNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productType{};

  ListNodesRequest() {}

  explicit ListNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~ListNodesRequest() = default;
};
class ListNodesResponseBodyNodeModels : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> nodeId{};

  ListNodesResponseBodyNodeModels() {}

  explicit ListNodesResponseBodyNodeModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~ListNodesResponseBodyNodeModels() = default;
};
class ListNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<ListNodesResponseBodyNodeModels>> nodeModels{};
  shared_ptr<long> perPageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> toPage{};

  ListNodesResponseBody() {}

  explicit ListNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (nodeModels) {
      vector<boost::any> temp1;
      for(auto item1:*nodeModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeModels"] = boost::any(temp1);
    }
    if (perPageSize) {
      res["PerPageSize"] = boost::any(*perPageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (toPage) {
      res["ToPage"] = boost::any(*toPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("NodeModels") != m.end() && !m["NodeModels"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeModels"].type()) {
        vector<ListNodesResponseBodyNodeModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyNodeModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeModels = make_shared<vector<ListNodesResponseBodyNodeModels>>(expect1);
      }
    }
    if (m.find("PerPageSize") != m.end() && !m["PerPageSize"].empty()) {
      perPageSize = make_shared<long>(boost::any_cast<long>(m["PerPageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ToPage") != m.end() && !m["ToPage"].empty()) {
      toPage = make_shared<long>(boost::any_cast<long>(m["ToPage"]));
    }
  }


  virtual ~ListNodesResponseBody() = default;
};
class ListNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodesResponseBody> body{};

  ListNodesResponse() {}

  explicit ListNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodesResponse() = default;
};
class ListOtaTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> otaType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListOtaTaskRequest() {}

  explicit ListOtaTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (otaType) {
      res["OtaType"] = boost::any(*otaType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("OtaType") != m.end() && !m["OtaType"].empty()) {
      otaType = make_shared<string>(boost::any_cast<string>(m["OtaType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListOtaTaskRequest() = default;
};
class ListOtaTaskResponseBodyTaskList : public Darabonba::Model {
public:
  shared_ptr<string> otaVersion{};
  shared_ptr<string> taskDisplayStatus{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStartTime{};

  ListOtaTaskResponseBodyTaskList() {}

  explicit ListOtaTaskResponseBodyTaskList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (otaVersion) {
      res["OtaVersion"] = boost::any(*otaVersion);
    }
    if (taskDisplayStatus) {
      res["TaskDisplayStatus"] = boost::any(*taskDisplayStatus);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStartTime) {
      res["TaskStartTime"] = boost::any(*taskStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OtaVersion") != m.end() && !m["OtaVersion"].empty()) {
      otaVersion = make_shared<string>(boost::any_cast<string>(m["OtaVersion"]));
    }
    if (m.find("TaskDisplayStatus") != m.end() && !m["TaskDisplayStatus"].empty()) {
      taskDisplayStatus = make_shared<string>(boost::any_cast<string>(m["TaskDisplayStatus"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStartTime") != m.end() && !m["TaskStartTime"].empty()) {
      taskStartTime = make_shared<string>(boost::any_cast<string>(m["TaskStartTime"]));
    }
  }


  virtual ~ListOtaTaskResponseBodyTaskList() = default;
};
class ListOtaTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListOtaTaskResponseBodyTaskList>> taskList{};
  shared_ptr<long> totalCount{};

  ListOtaTaskResponseBody() {}

  explicit ListOtaTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskList) {
      vector<boost::any> temp1;
      for(auto item1:*taskList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("TaskList") != m.end() && !m["TaskList"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskList"].type()) {
        vector<ListOtaTaskResponseBodyTaskList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOtaTaskResponseBodyTaskList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskList = make_shared<vector<ListOtaTaskResponseBodyTaskList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListOtaTaskResponseBody() = default;
};
class ListOtaTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOtaTaskResponseBody> body{};

  ListOtaTaskResponse() {}

  explicit ListOtaTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOtaTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOtaTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ListOtaTaskResponse() = default;
};
class ListPersistentAppInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<vector<string>> appInstancePersistentIds{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productType{};

  ListPersistentAppInstancesRequest() {}

  explicit ListPersistentAppInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstancePersistentIds) {
      res["AppInstancePersistentIds"] = boost::any(*appInstancePersistentIds);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstancePersistentIds") != m.end() && !m["AppInstancePersistentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppInstancePersistentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppInstancePersistentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appInstancePersistentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~ListPersistentAppInstancesRequest() = default;
};
class ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> appInstancePersistentId{};
  shared_ptr<string> appInstancePersistentName{};
  shared_ptr<string> appInstancePersistentStatus{};
  shared_ptr<string> appInstanceStatus{};
  shared_ptr<vector<string>> authorizedUsers{};
  shared_ptr<string> gmtCreate{};

  ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels() {}

  explicit ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (appInstancePersistentId) {
      res["AppInstancePersistentId"] = boost::any(*appInstancePersistentId);
    }
    if (appInstancePersistentName) {
      res["AppInstancePersistentName"] = boost::any(*appInstancePersistentName);
    }
    if (appInstancePersistentStatus) {
      res["AppInstancePersistentStatus"] = boost::any(*appInstancePersistentStatus);
    }
    if (appInstanceStatus) {
      res["AppInstanceStatus"] = boost::any(*appInstanceStatus);
    }
    if (authorizedUsers) {
      res["AuthorizedUsers"] = boost::any(*authorizedUsers);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("AppInstancePersistentId") != m.end() && !m["AppInstancePersistentId"].empty()) {
      appInstancePersistentId = make_shared<string>(boost::any_cast<string>(m["AppInstancePersistentId"]));
    }
    if (m.find("AppInstancePersistentName") != m.end() && !m["AppInstancePersistentName"].empty()) {
      appInstancePersistentName = make_shared<string>(boost::any_cast<string>(m["AppInstancePersistentName"]));
    }
    if (m.find("AppInstancePersistentStatus") != m.end() && !m["AppInstancePersistentStatus"].empty()) {
      appInstancePersistentStatus = make_shared<string>(boost::any_cast<string>(m["AppInstancePersistentStatus"]));
    }
    if (m.find("AppInstanceStatus") != m.end() && !m["AppInstanceStatus"].empty()) {
      appInstanceStatus = make_shared<string>(boost::any_cast<string>(m["AppInstanceStatus"]));
    }
    if (m.find("AuthorizedUsers") != m.end() && !m["AuthorizedUsers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuthorizedUsers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuthorizedUsers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      authorizedUsers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
  }


  virtual ~ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels() = default;
};
class ListPersistentAppInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels>> persistentAppInstanceModels{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListPersistentAppInstancesResponseBody() {}

  explicit ListPersistentAppInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (persistentAppInstanceModels) {
      vector<boost::any> temp1;
      for(auto item1:*persistentAppInstanceModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PersistentAppInstanceModels"] = boost::any(temp1);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PersistentAppInstanceModels") != m.end() && !m["PersistentAppInstanceModels"].empty()) {
      if (typeid(vector<boost::any>) == m["PersistentAppInstanceModels"].type()) {
        vector<ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PersistentAppInstanceModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        persistentAppInstanceModels = make_shared<vector<ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListPersistentAppInstancesResponseBody() = default;
};
class ListPersistentAppInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPersistentAppInstancesResponseBody> body{};

  ListPersistentAppInstancesResponse() {}

  explicit ListPersistentAppInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPersistentAppInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPersistentAppInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPersistentAppInstancesResponse() = default;
};
class ListRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizSource{};
  shared_ptr<string> productType{};

  ListRegionsRequest() {}

  explicit ListRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizSource) {
      res["BizSource"] = boost::any(*bizSource);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizSource") != m.end() && !m["BizSource"].empty()) {
      bizSource = make_shared<string>(boost::any_cast<string>(m["BizSource"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~ListRegionsRequest() = default;
};
class ListRegionsResponseBodyRegionModels : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListRegionsResponseBodyRegionModels() {}

  explicit ListRegionsResponseBodyRegionModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~ListRegionsResponseBodyRegionModels() = default;
};
class ListRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRegionsResponseBodyRegionModels>> regionModels{};
  shared_ptr<string> requestId{};

  ListRegionsResponseBody() {}

  explicit ListRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionModels) {
      vector<boost::any> temp1;
      for(auto item1:*regionModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionModels"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionModels") != m.end() && !m["RegionModels"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionModels"].type()) {
        vector<ListRegionsResponseBodyRegionModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegionsResponseBodyRegionModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionModels = make_shared<vector<ListRegionsResponseBodyRegionModels>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRegionsResponseBody() = default;
};
class ListRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRegionsResponseBody> body{};

  ListRegionsResponse() {}

  explicit ListRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRegionsResponse() = default;
};
class ListSessionPackagesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> sessionPackageId{};
  shared_ptr<string> sessionPackageName{};
  shared_ptr<string> sortType{};
  shared_ptr<vector<long>> stateList{};

  ListSessionPackagesRequest() {}

  explicit ListSessionPackagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sessionPackageId) {
      res["SessionPackageId"] = boost::any(*sessionPackageId);
    }
    if (sessionPackageName) {
      res["SessionPackageName"] = boost::any(*sessionPackageName);
    }
    if (sortType) {
      res["SortType"] = boost::any(*sortType);
    }
    if (stateList) {
      res["StateList"] = boost::any(*stateList);
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
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SessionPackageId") != m.end() && !m["SessionPackageId"].empty()) {
      sessionPackageId = make_shared<string>(boost::any_cast<string>(m["SessionPackageId"]));
    }
    if (m.find("SessionPackageName") != m.end() && !m["SessionPackageName"].empty()) {
      sessionPackageName = make_shared<string>(boost::any_cast<string>(m["SessionPackageName"]));
    }
    if (m.find("SortType") != m.end() && !m["SortType"].empty()) {
      sortType = make_shared<string>(boost::any_cast<string>(m["SortType"]));
    }
    if (m.find("StateList") != m.end() && !m["StateList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["StateList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StateList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      stateList = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~ListSessionPackagesRequest() = default;
};
class ListSessionPackagesResponseBodyDataInstanceObject : public Darabonba::Model {
public:
  shared_ptr<string> expiredTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> startTime{};
  shared_ptr<long> totalTime{};
  shared_ptr<long> usedTime{};

  ListSessionPackagesResponseBodyDataInstanceObject() {}

  explicit ListSessionPackagesResponseBodyDataInstanceObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (totalTime) {
      res["TotalTime"] = boost::any(*totalTime);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TotalTime") != m.end() && !m["TotalTime"].empty()) {
      totalTime = make_shared<long>(boost::any_cast<long>(m["TotalTime"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
  }


  virtual ~ListSessionPackagesResponseBodyDataInstanceObject() = default;
};
class ListSessionPackagesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> availableHours{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> deleteStatus{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<ListSessionPackagesResponseBodyDataInstanceObject> instanceObject{};
  shared_ptr<long> maxHours{};
  shared_ptr<long> maxSessions{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> region{};
  shared_ptr<string> sessionPackageId{};
  shared_ptr<string> sessionPackageName{};
  shared_ptr<string> sessionPackageTypeId{};
  shared_ptr<string> sessionSpec{};
  shared_ptr<long> sessionUsageRate{};
  shared_ptr<long> state{};
  shared_ptr<long> userIdentification{};

  ListSessionPackagesResponseBodyData() {}

  explicit ListSessionPackagesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableHours) {
      res["AvailableHours"] = boost::any(*availableHours);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (deleteStatus) {
      res["DeleteStatus"] = boost::any(*deleteStatus);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (instanceObject) {
      res["InstanceObject"] = instanceObject ? boost::any(instanceObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxHours) {
      res["MaxHours"] = boost::any(*maxHours);
    }
    if (maxSessions) {
      res["MaxSessions"] = boost::any(*maxSessions);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (sessionPackageId) {
      res["SessionPackageId"] = boost::any(*sessionPackageId);
    }
    if (sessionPackageName) {
      res["SessionPackageName"] = boost::any(*sessionPackageName);
    }
    if (sessionPackageTypeId) {
      res["SessionPackageTypeId"] = boost::any(*sessionPackageTypeId);
    }
    if (sessionSpec) {
      res["SessionSpec"] = boost::any(*sessionSpec);
    }
    if (sessionUsageRate) {
      res["SessionUsageRate"] = boost::any(*sessionUsageRate);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (userIdentification) {
      res["UserIdentification"] = boost::any(*userIdentification);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableHours") != m.end() && !m["AvailableHours"].empty()) {
      availableHours = make_shared<long>(boost::any_cast<long>(m["AvailableHours"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("DeleteStatus") != m.end() && !m["DeleteStatus"].empty()) {
      deleteStatus = make_shared<long>(boost::any_cast<long>(m["DeleteStatus"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("InstanceObject") != m.end() && !m["InstanceObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceObject"].type()) {
        ListSessionPackagesResponseBodyDataInstanceObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceObject"]));
        instanceObject = make_shared<ListSessionPackagesResponseBodyDataInstanceObject>(model1);
      }
    }
    if (m.find("MaxHours") != m.end() && !m["MaxHours"].empty()) {
      maxHours = make_shared<long>(boost::any_cast<long>(m["MaxHours"]));
    }
    if (m.find("MaxSessions") != m.end() && !m["MaxSessions"].empty()) {
      maxSessions = make_shared<long>(boost::any_cast<long>(m["MaxSessions"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("SessionPackageId") != m.end() && !m["SessionPackageId"].empty()) {
      sessionPackageId = make_shared<string>(boost::any_cast<string>(m["SessionPackageId"]));
    }
    if (m.find("SessionPackageName") != m.end() && !m["SessionPackageName"].empty()) {
      sessionPackageName = make_shared<string>(boost::any_cast<string>(m["SessionPackageName"]));
    }
    if (m.find("SessionPackageTypeId") != m.end() && !m["SessionPackageTypeId"].empty()) {
      sessionPackageTypeId = make_shared<string>(boost::any_cast<string>(m["SessionPackageTypeId"]));
    }
    if (m.find("SessionSpec") != m.end() && !m["SessionSpec"].empty()) {
      sessionSpec = make_shared<string>(boost::any_cast<string>(m["SessionSpec"]));
    }
    if (m.find("SessionUsageRate") != m.end() && !m["SessionUsageRate"].empty()) {
      sessionUsageRate = make_shared<long>(boost::any_cast<long>(m["SessionUsageRate"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<long>(boost::any_cast<long>(m["State"]));
    }
    if (m.find("UserIdentification") != m.end() && !m["UserIdentification"].empty()) {
      userIdentification = make_shared<long>(boost::any_cast<long>(m["UserIdentification"]));
    }
  }


  virtual ~ListSessionPackagesResponseBodyData() = default;
};
class ListSessionPackagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListSessionPackagesResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListSessionPackagesResponseBody() {}

  explicit ListSessionPackagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListSessionPackagesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSessionPackagesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListSessionPackagesResponseBodyData>>(expect1);
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


  virtual ~ListSessionPackagesResponseBody() = default;
};
class ListSessionPackagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSessionPackagesResponseBody> body{};

  ListSessionPackagesResponse() {}

  explicit ListSessionPackagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSessionPackagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSessionPackagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSessionPackagesResponse() = default;
};
class ListTagCloudResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scope{};

  ListTagCloudResourcesRequest() {}

  explicit ListTagCloudResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~ListTagCloudResourcesRequest() = default;
};
class ListTagCloudResourcesResponseBodyResourceTagsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> scope{};
  shared_ptr<string> value{};

  ListTagCloudResourcesResponseBodyResourceTagsTags() {}

  explicit ListTagCloudResourcesResponseBodyResourceTagsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
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
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagCloudResourcesResponseBodyResourceTagsTags() = default;
};
class ListTagCloudResourcesResponseBodyResourceTags : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagCloudResourcesResponseBodyResourceTagsTags>> tags{};

  ListTagCloudResourcesResponseBodyResourceTags() {}

  explicit ListTagCloudResourcesResponseBodyResourceTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListTagCloudResourcesResponseBodyResourceTagsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagCloudResourcesResponseBodyResourceTagsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListTagCloudResourcesResponseBodyResourceTagsTags>>(expect1);
      }
    }
  }


  virtual ~ListTagCloudResourcesResponseBodyResourceTags() = default;
};
class ListTagCloudResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagCloudResourcesResponseBodyResourceTags>> resourceTags{};
  shared_ptr<long> totalCount{};

  ListTagCloudResourcesResponseBody() {}

  explicit ListTagCloudResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceTags) {
      vector<boost::any> temp1;
      for(auto item1:*resourceTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceTags"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceTags") != m.end() && !m["ResourceTags"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceTags"].type()) {
        vector<ListTagCloudResourcesResponseBodyResourceTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagCloudResourcesResponseBodyResourceTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceTags = make_shared<vector<ListTagCloudResourcesResponseBodyResourceTags>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTagCloudResourcesResponseBody() = default;
};
class ListTagCloudResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagCloudResourcesResponseBody> body{};

  ListTagCloudResourcesResponse() {}

  explicit ListTagCloudResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagCloudResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagCloudResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagCloudResourcesResponse() = default;
};
class ListTenantConfigResponseBodyTenantConfigModel : public Darabonba::Model {
public:
  shared_ptr<bool> appInstanceGroupExpireRemind{};

  ListTenantConfigResponseBodyTenantConfigModel() {}

  explicit ListTenantConfigResponseBodyTenantConfigModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupExpireRemind) {
      res["AppInstanceGroupExpireRemind"] = boost::any(*appInstanceGroupExpireRemind);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupExpireRemind") != m.end() && !m["AppInstanceGroupExpireRemind"].empty()) {
      appInstanceGroupExpireRemind = make_shared<bool>(boost::any_cast<bool>(m["AppInstanceGroupExpireRemind"]));
    }
  }


  virtual ~ListTenantConfigResponseBodyTenantConfigModel() = default;
};
class ListTenantConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListTenantConfigResponseBodyTenantConfigModel> tenantConfigModel{};

  ListTenantConfigResponseBody() {}

  explicit ListTenantConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tenantConfigModel) {
      res["TenantConfigModel"] = tenantConfigModel ? boost::any(tenantConfigModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TenantConfigModel") != m.end() && !m["TenantConfigModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantConfigModel"].type()) {
        ListTenantConfigResponseBodyTenantConfigModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantConfigModel"]));
        tenantConfigModel = make_shared<ListTenantConfigResponseBodyTenantConfigModel>(model1);
      }
    }
  }


  virtual ~ListTenantConfigResponseBody() = default;
};
class ListTenantConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTenantConfigResponseBody> body{};

  ListTenantConfigResponse() {}

  explicit ListTenantConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTenantConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTenantConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ListTenantConfigResponse() = default;
};
class LogOffAllSessionsInAppInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> productType{};

  LogOffAllSessionsInAppInstanceGroupRequest() {}

  explicit LogOffAllSessionsInAppInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~LogOffAllSessionsInAppInstanceGroupRequest() = default;
};
class LogOffAllSessionsInAppInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  LogOffAllSessionsInAppInstanceGroupResponseBody() {}

  explicit LogOffAllSessionsInAppInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~LogOffAllSessionsInAppInstanceGroupResponseBody() = default;
};
class LogOffAllSessionsInAppInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LogOffAllSessionsInAppInstanceGroupResponseBody> body{};

  LogOffAllSessionsInAppInstanceGroupResponse() {}

  explicit LogOffAllSessionsInAppInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LogOffAllSessionsInAppInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogOffAllSessionsInAppInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~LogOffAllSessionsInAppInstanceGroupResponse() = default;
};
class ModifyAppInstanceGroupAttributeRequestNetworkDomainRules : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> policy{};

  ModifyAppInstanceGroupAttributeRequestNetworkDomainRules() {}

  explicit ModifyAppInstanceGroupAttributeRequestNetworkDomainRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
  }


  virtual ~ModifyAppInstanceGroupAttributeRequestNetworkDomainRules() = default;
};
class ModifyAppInstanceGroupAttributeRequestNetwork : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyAppInstanceGroupAttributeRequestNetworkDomainRules>> domainRules{};

  ModifyAppInstanceGroupAttributeRequestNetwork() {}

  explicit ModifyAppInstanceGroupAttributeRequestNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainRules) {
      vector<boost::any> temp1;
      for(auto item1:*domainRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainRules") != m.end() && !m["DomainRules"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainRules"].type()) {
        vector<ModifyAppInstanceGroupAttributeRequestNetworkDomainRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyAppInstanceGroupAttributeRequestNetworkDomainRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainRules = make_shared<vector<ModifyAppInstanceGroupAttributeRequestNetworkDomainRules>>(expect1);
      }
    }
  }


  virtual ~ModifyAppInstanceGroupAttributeRequestNetwork() = default;
};
class ModifyAppInstanceGroupAttributeRequestNodePool : public Darabonba::Model {
public:
  shared_ptr<long> nodeCapacity{};
  shared_ptr<string> nodePoolId{};

  ModifyAppInstanceGroupAttributeRequestNodePool() {}

  explicit ModifyAppInstanceGroupAttributeRequestNodePool(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeCapacity) {
      res["NodeCapacity"] = boost::any(*nodeCapacity);
    }
    if (nodePoolId) {
      res["NodePoolId"] = boost::any(*nodePoolId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeCapacity") != m.end() && !m["NodeCapacity"].empty()) {
      nodeCapacity = make_shared<long>(boost::any_cast<long>(m["NodeCapacity"]));
    }
    if (m.find("NodePoolId") != m.end() && !m["NodePoolId"].empty()) {
      nodePoolId = make_shared<string>(boost::any_cast<string>(m["NodePoolId"]));
    }
  }


  virtual ~ModifyAppInstanceGroupAttributeRequestNodePool() = default;
};
class ModifyAppInstanceGroupAttributeRequestSecurityPolicy : public Darabonba::Model {
public:
  shared_ptr<bool> resetAfterUnbind{};
  shared_ptr<bool> skipUserAuthCheck{};

  ModifyAppInstanceGroupAttributeRequestSecurityPolicy() {}

  explicit ModifyAppInstanceGroupAttributeRequestSecurityPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resetAfterUnbind) {
      res["ResetAfterUnbind"] = boost::any(*resetAfterUnbind);
    }
    if (skipUserAuthCheck) {
      res["SkipUserAuthCheck"] = boost::any(*skipUserAuthCheck);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResetAfterUnbind") != m.end() && !m["ResetAfterUnbind"].empty()) {
      resetAfterUnbind = make_shared<bool>(boost::any_cast<bool>(m["ResetAfterUnbind"]));
    }
    if (m.find("SkipUserAuthCheck") != m.end() && !m["SkipUserAuthCheck"].empty()) {
      skipUserAuthCheck = make_shared<bool>(boost::any_cast<bool>(m["SkipUserAuthCheck"]));
    }
  }


  virtual ~ModifyAppInstanceGroupAttributeRequestSecurityPolicy() = default;
};
class ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<bool> userProfileSwitch{};

  ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile() {}

  explicit ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (userProfileSwitch) {
      res["UserProfileSwitch"] = boost::any(*userProfileSwitch);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("UserProfileSwitch") != m.end() && !m["UserProfileSwitch"].empty()) {
      userProfileSwitch = make_shared<bool>(boost::any_cast<bool>(m["UserProfileSwitch"]));
    }
  }


  virtual ~ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile() = default;
};
class ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<bool> profileFollowSwitch{};

  ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow() {}

  explicit ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (profileFollowSwitch) {
      res["ProfileFollowSwitch"] = boost::any(*profileFollowSwitch);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("ProfileFollowSwitch") != m.end() && !m["ProfileFollowSwitch"].empty()) {
      profileFollowSwitch = make_shared<bool>(boost::any_cast<bool>(m["ProfileFollowSwitch"]));
    }
  }


  virtual ~ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow() = default;
};
class ModifyAppInstanceGroupAttributeRequestStoragePolicy : public Darabonba::Model {
public:
  shared_ptr<vector<string>> storageTypeList{};
  shared_ptr<ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile> userProfile{};
  shared_ptr<ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow> userProfileFollow{};

  ModifyAppInstanceGroupAttributeRequestStoragePolicy() {}

  explicit ModifyAppInstanceGroupAttributeRequestStoragePolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storageTypeList) {
      res["StorageTypeList"] = boost::any(*storageTypeList);
    }
    if (userProfile) {
      res["UserProfile"] = userProfile ? boost::any(userProfile->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userProfileFollow) {
      res["UserProfileFollow"] = userProfileFollow ? boost::any(userProfileFollow->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StorageTypeList") != m.end() && !m["StorageTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StorageTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StorageTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      storageTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserProfile") != m.end() && !m["UserProfile"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserProfile"].type()) {
        ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserProfile"]));
        userProfile = make_shared<ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfile>(model1);
      }
    }
    if (m.find("UserProfileFollow") != m.end() && !m["UserProfileFollow"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserProfileFollow"].type()) {
        ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserProfileFollow"]));
        userProfileFollow = make_shared<ModifyAppInstanceGroupAttributeRequestStoragePolicyUserProfileFollow>(model1);
      }
    }
  }


  virtual ~ModifyAppInstanceGroupAttributeRequestStoragePolicy() = default;
};
class ModifyAppInstanceGroupAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceGroupName{};
  shared_ptr<ModifyAppInstanceGroupAttributeRequestNetwork> network{};
  shared_ptr<ModifyAppInstanceGroupAttributeRequestNodePool> nodePool{};
  shared_ptr<bool> perSessionPerApp{};
  shared_ptr<string> preOpenAppId{};
  shared_ptr<string> preOpenMode{};
  shared_ptr<string> productType{};
  shared_ptr<ModifyAppInstanceGroupAttributeRequestSecurityPolicy> securityPolicy{};
  shared_ptr<long> sessionTimeout{};
  shared_ptr<ModifyAppInstanceGroupAttributeRequestStoragePolicy> storagePolicy{};

  ModifyAppInstanceGroupAttributeRequest() {}

  explicit ModifyAppInstanceGroupAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceGroupName) {
      res["AppInstanceGroupName"] = boost::any(*appInstanceGroupName);
    }
    if (network) {
      res["Network"] = network ? boost::any(network->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodePool) {
      res["NodePool"] = nodePool ? boost::any(nodePool->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (perSessionPerApp) {
      res["PerSessionPerApp"] = boost::any(*perSessionPerApp);
    }
    if (preOpenAppId) {
      res["PreOpenAppId"] = boost::any(*preOpenAppId);
    }
    if (preOpenMode) {
      res["PreOpenMode"] = boost::any(*preOpenMode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (securityPolicy) {
      res["SecurityPolicy"] = securityPolicy ? boost::any(securityPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    if (storagePolicy) {
      res["StoragePolicy"] = storagePolicy ? boost::any(storagePolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceGroupName") != m.end() && !m["AppInstanceGroupName"].empty()) {
      appInstanceGroupName = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupName"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      if (typeid(map<string, boost::any>) == m["Network"].type()) {
        ModifyAppInstanceGroupAttributeRequestNetwork model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Network"]));
        network = make_shared<ModifyAppInstanceGroupAttributeRequestNetwork>(model1);
      }
    }
    if (m.find("NodePool") != m.end() && !m["NodePool"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodePool"].type()) {
        ModifyAppInstanceGroupAttributeRequestNodePool model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodePool"]));
        nodePool = make_shared<ModifyAppInstanceGroupAttributeRequestNodePool>(model1);
      }
    }
    if (m.find("PerSessionPerApp") != m.end() && !m["PerSessionPerApp"].empty()) {
      perSessionPerApp = make_shared<bool>(boost::any_cast<bool>(m["PerSessionPerApp"]));
    }
    if (m.find("PreOpenAppId") != m.end() && !m["PreOpenAppId"].empty()) {
      preOpenAppId = make_shared<string>(boost::any_cast<string>(m["PreOpenAppId"]));
    }
    if (m.find("PreOpenMode") != m.end() && !m["PreOpenMode"].empty()) {
      preOpenMode = make_shared<string>(boost::any_cast<string>(m["PreOpenMode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SecurityPolicy") != m.end() && !m["SecurityPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityPolicy"].type()) {
        ModifyAppInstanceGroupAttributeRequestSecurityPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityPolicy"]));
        securityPolicy = make_shared<ModifyAppInstanceGroupAttributeRequestSecurityPolicy>(model1);
      }
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<long>(boost::any_cast<long>(m["SessionTimeout"]));
    }
    if (m.find("StoragePolicy") != m.end() && !m["StoragePolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["StoragePolicy"].type()) {
        ModifyAppInstanceGroupAttributeRequestStoragePolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StoragePolicy"]));
        storagePolicy = make_shared<ModifyAppInstanceGroupAttributeRequestStoragePolicy>(model1);
      }
    }
  }


  virtual ~ModifyAppInstanceGroupAttributeRequest() = default;
};
class ModifyAppInstanceGroupAttributeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceGroupName{};
  shared_ptr<string> networkShrink{};
  shared_ptr<string> nodePoolShrink{};
  shared_ptr<bool> perSessionPerApp{};
  shared_ptr<string> preOpenAppId{};
  shared_ptr<string> preOpenMode{};
  shared_ptr<string> productType{};
  shared_ptr<string> securityPolicyShrink{};
  shared_ptr<long> sessionTimeout{};
  shared_ptr<string> storagePolicyShrink{};

  ModifyAppInstanceGroupAttributeShrinkRequest() {}

  explicit ModifyAppInstanceGroupAttributeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceGroupName) {
      res["AppInstanceGroupName"] = boost::any(*appInstanceGroupName);
    }
    if (networkShrink) {
      res["Network"] = boost::any(*networkShrink);
    }
    if (nodePoolShrink) {
      res["NodePool"] = boost::any(*nodePoolShrink);
    }
    if (perSessionPerApp) {
      res["PerSessionPerApp"] = boost::any(*perSessionPerApp);
    }
    if (preOpenAppId) {
      res["PreOpenAppId"] = boost::any(*preOpenAppId);
    }
    if (preOpenMode) {
      res["PreOpenMode"] = boost::any(*preOpenMode);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (securityPolicyShrink) {
      res["SecurityPolicy"] = boost::any(*securityPolicyShrink);
    }
    if (sessionTimeout) {
      res["SessionTimeout"] = boost::any(*sessionTimeout);
    }
    if (storagePolicyShrink) {
      res["StoragePolicy"] = boost::any(*storagePolicyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceGroupName") != m.end() && !m["AppInstanceGroupName"].empty()) {
      appInstanceGroupName = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupName"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      networkShrink = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("NodePool") != m.end() && !m["NodePool"].empty()) {
      nodePoolShrink = make_shared<string>(boost::any_cast<string>(m["NodePool"]));
    }
    if (m.find("PerSessionPerApp") != m.end() && !m["PerSessionPerApp"].empty()) {
      perSessionPerApp = make_shared<bool>(boost::any_cast<bool>(m["PerSessionPerApp"]));
    }
    if (m.find("PreOpenAppId") != m.end() && !m["PreOpenAppId"].empty()) {
      preOpenAppId = make_shared<string>(boost::any_cast<string>(m["PreOpenAppId"]));
    }
    if (m.find("PreOpenMode") != m.end() && !m["PreOpenMode"].empty()) {
      preOpenMode = make_shared<string>(boost::any_cast<string>(m["PreOpenMode"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("SecurityPolicy") != m.end() && !m["SecurityPolicy"].empty()) {
      securityPolicyShrink = make_shared<string>(boost::any_cast<string>(m["SecurityPolicy"]));
    }
    if (m.find("SessionTimeout") != m.end() && !m["SessionTimeout"].empty()) {
      sessionTimeout = make_shared<long>(boost::any_cast<long>(m["SessionTimeout"]));
    }
    if (m.find("StoragePolicy") != m.end() && !m["StoragePolicy"].empty()) {
      storagePolicyShrink = make_shared<string>(boost::any_cast<string>(m["StoragePolicy"]));
    }
  }


  virtual ~ModifyAppInstanceGroupAttributeShrinkRequest() = default;
};
class ModifyAppInstanceGroupAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ModifyAppInstanceGroupAttributeResponseBody() {}

  explicit ModifyAppInstanceGroupAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~ModifyAppInstanceGroupAttributeResponseBody() = default;
};
class ModifyAppInstanceGroupAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppInstanceGroupAttributeResponseBody> body{};

  ModifyAppInstanceGroupAttributeResponse() {}

  explicit ModifyAppInstanceGroupAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAppInstanceGroupAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppInstanceGroupAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppInstanceGroupAttributeResponse() = default;
};
class ModifyAppPolicyRequestVideoPolicy : public Darabonba::Model {
public:
  shared_ptr<long> frameRate{};
  shared_ptr<long> sessionResolutionHeight{};
  shared_ptr<long> sessionResolutionWidth{};
  shared_ptr<string> streamingMode{};
  shared_ptr<bool> terminalResolutionAdaptive{};
  shared_ptr<string> visualQualityStrategy{};
  shared_ptr<bool> webrtc{};

  ModifyAppPolicyRequestVideoPolicy() {}

  explicit ModifyAppPolicyRequestVideoPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (sessionResolutionHeight) {
      res["SessionResolutionHeight"] = boost::any(*sessionResolutionHeight);
    }
    if (sessionResolutionWidth) {
      res["SessionResolutionWidth"] = boost::any(*sessionResolutionWidth);
    }
    if (streamingMode) {
      res["StreamingMode"] = boost::any(*streamingMode);
    }
    if (terminalResolutionAdaptive) {
      res["TerminalResolutionAdaptive"] = boost::any(*terminalResolutionAdaptive);
    }
    if (visualQualityStrategy) {
      res["VisualQualityStrategy"] = boost::any(*visualQualityStrategy);
    }
    if (webrtc) {
      res["Webrtc"] = boost::any(*webrtc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<long>(boost::any_cast<long>(m["FrameRate"]));
    }
    if (m.find("SessionResolutionHeight") != m.end() && !m["SessionResolutionHeight"].empty()) {
      sessionResolutionHeight = make_shared<long>(boost::any_cast<long>(m["SessionResolutionHeight"]));
    }
    if (m.find("SessionResolutionWidth") != m.end() && !m["SessionResolutionWidth"].empty()) {
      sessionResolutionWidth = make_shared<long>(boost::any_cast<long>(m["SessionResolutionWidth"]));
    }
    if (m.find("StreamingMode") != m.end() && !m["StreamingMode"].empty()) {
      streamingMode = make_shared<string>(boost::any_cast<string>(m["StreamingMode"]));
    }
    if (m.find("TerminalResolutionAdaptive") != m.end() && !m["TerminalResolutionAdaptive"].empty()) {
      terminalResolutionAdaptive = make_shared<bool>(boost::any_cast<bool>(m["TerminalResolutionAdaptive"]));
    }
    if (m.find("VisualQualityStrategy") != m.end() && !m["VisualQualityStrategy"].empty()) {
      visualQualityStrategy = make_shared<string>(boost::any_cast<string>(m["VisualQualityStrategy"]));
    }
    if (m.find("Webrtc") != m.end() && !m["Webrtc"].empty()) {
      webrtc = make_shared<bool>(boost::any_cast<bool>(m["Webrtc"]));
    }
  }


  virtual ~ModifyAppPolicyRequestVideoPolicy() = default;
};
class ModifyAppPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> appPolicyId{};
  shared_ptr<string> productType{};
  shared_ptr<ModifyAppPolicyRequestVideoPolicy> videoPolicy{};

  ModifyAppPolicyRequest() {}

  explicit ModifyAppPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appPolicyId) {
      res["AppPolicyId"] = boost::any(*appPolicyId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (videoPolicy) {
      res["VideoPolicy"] = videoPolicy ? boost::any(videoPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppPolicyId") != m.end() && !m["AppPolicyId"].empty()) {
      appPolicyId = make_shared<string>(boost::any_cast<string>(m["AppPolicyId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("VideoPolicy") != m.end() && !m["VideoPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["VideoPolicy"].type()) {
        ModifyAppPolicyRequestVideoPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VideoPolicy"]));
        videoPolicy = make_shared<ModifyAppPolicyRequestVideoPolicy>(model1);
      }
    }
  }


  virtual ~ModifyAppPolicyRequest() = default;
};
class ModifyAppPolicyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appPolicyId{};
  shared_ptr<string> productType{};
  shared_ptr<string> videoPolicyShrink{};

  ModifyAppPolicyShrinkRequest() {}

  explicit ModifyAppPolicyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appPolicyId) {
      res["AppPolicyId"] = boost::any(*appPolicyId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (videoPolicyShrink) {
      res["VideoPolicy"] = boost::any(*videoPolicyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppPolicyId") != m.end() && !m["AppPolicyId"].empty()) {
      appPolicyId = make_shared<string>(boost::any_cast<string>(m["AppPolicyId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("VideoPolicy") != m.end() && !m["VideoPolicy"].empty()) {
      videoPolicyShrink = make_shared<string>(boost::any_cast<string>(m["VideoPolicy"]));
    }
  }


  virtual ~ModifyAppPolicyShrinkRequest() = default;
};
class ModifyAppPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAppPolicyResponseBody() {}

  explicit ModifyAppPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAppPolicyResponseBody() = default;
};
class ModifyAppPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppPolicyResponseBody> body{};

  ModifyAppPolicyResponse() {}

  explicit ModifyAppPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAppPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppPolicyResponse() = default;
};
class ModifyNodePoolAmountRequestNodePool : public Darabonba::Model {
public:
  shared_ptr<long> nodeAmount{};
  shared_ptr<string> prePaidNodeAmountModifyMode{};
  shared_ptr<vector<string>> prePaidNodeAmountModifyNodeIds{};

  ModifyNodePoolAmountRequestNodePool() {}

  explicit ModifyNodePoolAmountRequestNodePool(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeAmount) {
      res["NodeAmount"] = boost::any(*nodeAmount);
    }
    if (prePaidNodeAmountModifyMode) {
      res["PrePaidNodeAmountModifyMode"] = boost::any(*prePaidNodeAmountModifyMode);
    }
    if (prePaidNodeAmountModifyNodeIds) {
      res["PrePaidNodeAmountModifyNodeIds"] = boost::any(*prePaidNodeAmountModifyNodeIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeAmount") != m.end() && !m["NodeAmount"].empty()) {
      nodeAmount = make_shared<long>(boost::any_cast<long>(m["NodeAmount"]));
    }
    if (m.find("PrePaidNodeAmountModifyMode") != m.end() && !m["PrePaidNodeAmountModifyMode"].empty()) {
      prePaidNodeAmountModifyMode = make_shared<string>(boost::any_cast<string>(m["PrePaidNodeAmountModifyMode"]));
    }
    if (m.find("PrePaidNodeAmountModifyNodeIds") != m.end() && !m["PrePaidNodeAmountModifyNodeIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PrePaidNodeAmountModifyNodeIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PrePaidNodeAmountModifyNodeIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      prePaidNodeAmountModifyNodeIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyNodePoolAmountRequestNodePool() = default;
};
class ModifyNodePoolAmountRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<ModifyNodePoolAmountRequestNodePool> nodePool{};
  shared_ptr<string> productType{};

  ModifyNodePoolAmountRequest() {}

  explicit ModifyNodePoolAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (nodePool) {
      res["NodePool"] = nodePool ? boost::any(nodePool->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("NodePool") != m.end() && !m["NodePool"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodePool"].type()) {
        ModifyNodePoolAmountRequestNodePool model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodePool"]));
        nodePool = make_shared<ModifyNodePoolAmountRequestNodePool>(model1);
      }
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~ModifyNodePoolAmountRequest() = default;
};
class ModifyNodePoolAmountShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> nodePoolShrink{};
  shared_ptr<string> productType{};

  ModifyNodePoolAmountShrinkRequest() {}

  explicit ModifyNodePoolAmountShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (nodePoolShrink) {
      res["NodePool"] = boost::any(*nodePoolShrink);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("NodePool") != m.end() && !m["NodePool"].empty()) {
      nodePoolShrink = make_shared<string>(boost::any_cast<string>(m["NodePool"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~ModifyNodePoolAmountShrinkRequest() = default;
};
class ModifyNodePoolAmountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};

  ModifyNodePoolAmountResponseBodyData() {}

  explicit ModifyNodePoolAmountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~ModifyNodePoolAmountResponseBodyData() = default;
};
class ModifyNodePoolAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<ModifyNodePoolAmountResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ModifyNodePoolAmountResponseBody() {}

  explicit ModifyNodePoolAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyNodePoolAmountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyNodePoolAmountResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyNodePoolAmountResponseBody() = default;
};
class ModifyNodePoolAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyNodePoolAmountResponseBody> body{};

  ModifyNodePoolAmountResponse() {}

  explicit ModifyNodePoolAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyNodePoolAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNodePoolAmountResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNodePoolAmountResponse() = default;
};
class ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods() {}

  explicit ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
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
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods() = default;
};
class ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules : public Darabonba::Model {
public:
  shared_ptr<string> recurrenceType{};
  shared_ptr<vector<long>> recurrenceValues{};
  shared_ptr<vector<ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods>> timerPeriods{};

  ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules() {}

  explicit ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (recurrenceValues) {
      res["RecurrenceValues"] = boost::any(*recurrenceValues);
    }
    if (timerPeriods) {
      vector<boost::any> temp1;
      for(auto item1:*timerPeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimerPeriods"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("RecurrenceValues") != m.end() && !m["RecurrenceValues"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RecurrenceValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecurrenceValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      recurrenceValues = make_shared<vector<long>>(toVec1);
    }
    if (m.find("TimerPeriods") != m.end() && !m["TimerPeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["TimerPeriods"].type()) {
        vector<ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimerPeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timerPeriods = make_shared<vector<ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedulesTimerPeriods>>(expect1);
      }
    }
  }


  virtual ~ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules() = default;
};
class ModifyNodePoolAttributeRequestNodePoolStrategy : public Darabonba::Model {
public:
  shared_ptr<long> maxIdleAppInstanceAmount{};
  shared_ptr<long> maxScalingAmount{};
  shared_ptr<long> nodeAmount{};
  shared_ptr<vector<ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules>> recurrenceSchedules{};
  shared_ptr<long> scalingDownAfterIdleMinutes{};
  shared_ptr<long> scalingStep{};
  shared_ptr<string> scalingUsageThreshold{};
  shared_ptr<string> strategyDisableDate{};
  shared_ptr<string> strategyEnableDate{};
  shared_ptr<string> strategyType{};
  shared_ptr<bool> warmUp{};

  ModifyNodePoolAttributeRequestNodePoolStrategy() {}

  explicit ModifyNodePoolAttributeRequestNodePoolStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxIdleAppInstanceAmount) {
      res["MaxIdleAppInstanceAmount"] = boost::any(*maxIdleAppInstanceAmount);
    }
    if (maxScalingAmount) {
      res["MaxScalingAmount"] = boost::any(*maxScalingAmount);
    }
    if (nodeAmount) {
      res["NodeAmount"] = boost::any(*nodeAmount);
    }
    if (recurrenceSchedules) {
      vector<boost::any> temp1;
      for(auto item1:*recurrenceSchedules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RecurrenceSchedules"] = boost::any(temp1);
    }
    if (scalingDownAfterIdleMinutes) {
      res["ScalingDownAfterIdleMinutes"] = boost::any(*scalingDownAfterIdleMinutes);
    }
    if (scalingStep) {
      res["ScalingStep"] = boost::any(*scalingStep);
    }
    if (scalingUsageThreshold) {
      res["ScalingUsageThreshold"] = boost::any(*scalingUsageThreshold);
    }
    if (strategyDisableDate) {
      res["StrategyDisableDate"] = boost::any(*strategyDisableDate);
    }
    if (strategyEnableDate) {
      res["StrategyEnableDate"] = boost::any(*strategyEnableDate);
    }
    if (strategyType) {
      res["StrategyType"] = boost::any(*strategyType);
    }
    if (warmUp) {
      res["WarmUp"] = boost::any(*warmUp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxIdleAppInstanceAmount") != m.end() && !m["MaxIdleAppInstanceAmount"].empty()) {
      maxIdleAppInstanceAmount = make_shared<long>(boost::any_cast<long>(m["MaxIdleAppInstanceAmount"]));
    }
    if (m.find("MaxScalingAmount") != m.end() && !m["MaxScalingAmount"].empty()) {
      maxScalingAmount = make_shared<long>(boost::any_cast<long>(m["MaxScalingAmount"]));
    }
    if (m.find("NodeAmount") != m.end() && !m["NodeAmount"].empty()) {
      nodeAmount = make_shared<long>(boost::any_cast<long>(m["NodeAmount"]));
    }
    if (m.find("RecurrenceSchedules") != m.end() && !m["RecurrenceSchedules"].empty()) {
      if (typeid(vector<boost::any>) == m["RecurrenceSchedules"].type()) {
        vector<ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RecurrenceSchedules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recurrenceSchedules = make_shared<vector<ModifyNodePoolAttributeRequestNodePoolStrategyRecurrenceSchedules>>(expect1);
      }
    }
    if (m.find("ScalingDownAfterIdleMinutes") != m.end() && !m["ScalingDownAfterIdleMinutes"].empty()) {
      scalingDownAfterIdleMinutes = make_shared<long>(boost::any_cast<long>(m["ScalingDownAfterIdleMinutes"]));
    }
    if (m.find("ScalingStep") != m.end() && !m["ScalingStep"].empty()) {
      scalingStep = make_shared<long>(boost::any_cast<long>(m["ScalingStep"]));
    }
    if (m.find("ScalingUsageThreshold") != m.end() && !m["ScalingUsageThreshold"].empty()) {
      scalingUsageThreshold = make_shared<string>(boost::any_cast<string>(m["ScalingUsageThreshold"]));
    }
    if (m.find("StrategyDisableDate") != m.end() && !m["StrategyDisableDate"].empty()) {
      strategyDisableDate = make_shared<string>(boost::any_cast<string>(m["StrategyDisableDate"]));
    }
    if (m.find("StrategyEnableDate") != m.end() && !m["StrategyEnableDate"].empty()) {
      strategyEnableDate = make_shared<string>(boost::any_cast<string>(m["StrategyEnableDate"]));
    }
    if (m.find("StrategyType") != m.end() && !m["StrategyType"].empty()) {
      strategyType = make_shared<string>(boost::any_cast<string>(m["StrategyType"]));
    }
    if (m.find("WarmUp") != m.end() && !m["WarmUp"].empty()) {
      warmUp = make_shared<bool>(boost::any_cast<bool>(m["WarmUp"]));
    }
  }


  virtual ~ModifyNodePoolAttributeRequestNodePoolStrategy() = default;
};
class ModifyNodePoolAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizRegionId{};
  shared_ptr<long> nodeCapacity{};
  shared_ptr<ModifyNodePoolAttributeRequestNodePoolStrategy> nodePoolStrategy{};
  shared_ptr<string> poolId{};
  shared_ptr<string> productType{};

  ModifyNodePoolAttributeRequest() {}

  explicit ModifyNodePoolAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (nodeCapacity) {
      res["NodeCapacity"] = boost::any(*nodeCapacity);
    }
    if (nodePoolStrategy) {
      res["NodePoolStrategy"] = nodePoolStrategy ? boost::any(nodePoolStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (poolId) {
      res["PoolId"] = boost::any(*poolId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("NodeCapacity") != m.end() && !m["NodeCapacity"].empty()) {
      nodeCapacity = make_shared<long>(boost::any_cast<long>(m["NodeCapacity"]));
    }
    if (m.find("NodePoolStrategy") != m.end() && !m["NodePoolStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodePoolStrategy"].type()) {
        ModifyNodePoolAttributeRequestNodePoolStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodePoolStrategy"]));
        nodePoolStrategy = make_shared<ModifyNodePoolAttributeRequestNodePoolStrategy>(model1);
      }
    }
    if (m.find("PoolId") != m.end() && !m["PoolId"].empty()) {
      poolId = make_shared<string>(boost::any_cast<string>(m["PoolId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~ModifyNodePoolAttributeRequest() = default;
};
class ModifyNodePoolAttributeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizRegionId{};
  shared_ptr<long> nodeCapacity{};
  shared_ptr<string> nodePoolStrategyShrink{};
  shared_ptr<string> poolId{};
  shared_ptr<string> productType{};

  ModifyNodePoolAttributeShrinkRequest() {}

  explicit ModifyNodePoolAttributeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (nodeCapacity) {
      res["NodeCapacity"] = boost::any(*nodeCapacity);
    }
    if (nodePoolStrategyShrink) {
      res["NodePoolStrategy"] = boost::any(*nodePoolStrategyShrink);
    }
    if (poolId) {
      res["PoolId"] = boost::any(*poolId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("NodeCapacity") != m.end() && !m["NodeCapacity"].empty()) {
      nodeCapacity = make_shared<long>(boost::any_cast<long>(m["NodeCapacity"]));
    }
    if (m.find("NodePoolStrategy") != m.end() && !m["NodePoolStrategy"].empty()) {
      nodePoolStrategyShrink = make_shared<string>(boost::any_cast<string>(m["NodePoolStrategy"]));
    }
    if (m.find("PoolId") != m.end() && !m["PoolId"].empty()) {
      poolId = make_shared<string>(boost::any_cast<string>(m["PoolId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~ModifyNodePoolAttributeShrinkRequest() = default;
};
class ModifyNodePoolAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ModifyNodePoolAttributeResponseBody() {}

  explicit ModifyNodePoolAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~ModifyNodePoolAttributeResponseBody() = default;
};
class ModifyNodePoolAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyNodePoolAttributeResponseBody> body{};

  ModifyNodePoolAttributeResponse() {}

  explicit ModifyNodePoolAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyNodePoolAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNodePoolAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNodePoolAttributeResponse() = default;
};
class ModifyTenantConfigRequest : public Darabonba::Model {
public:
  shared_ptr<bool> appInstanceGroupExpireRemind{};

  ModifyTenantConfigRequest() {}

  explicit ModifyTenantConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupExpireRemind) {
      res["AppInstanceGroupExpireRemind"] = boost::any(*appInstanceGroupExpireRemind);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupExpireRemind") != m.end() && !m["AppInstanceGroupExpireRemind"].empty()) {
      appInstanceGroupExpireRemind = make_shared<bool>(boost::any_cast<bool>(m["AppInstanceGroupExpireRemind"]));
    }
  }


  virtual ~ModifyTenantConfigRequest() = default;
};
class ModifyTenantConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyTenantConfigResponseBody() {}

  explicit ModifyTenantConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyTenantConfigResponseBody() = default;
};
class ModifyTenantConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyTenantConfigResponseBody> body{};

  ModifyTenantConfigResponse() {}

  explicit ModifyTenantConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyTenantConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyTenantConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyTenantConfigResponse() = default;
};
class PageListAppInstanceGroupUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productType{};

  PageListAppInstanceGroupUserRequest() {}

  explicit PageListAppInstanceGroupUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~PageListAppInstanceGroupUserRequest() = default;
};
class PageListAppInstanceGroupUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> users{};

  PageListAppInstanceGroupUserResponseBody() {}

  explicit PageListAppInstanceGroupUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Users"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      users = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PageListAppInstanceGroupUserResponseBody() = default;
};
class PageListAppInstanceGroupUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PageListAppInstanceGroupUserResponseBody> body{};

  PageListAppInstanceGroupUserResponse() {}

  explicit PageListAppInstanceGroupUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PageListAppInstanceGroupUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PageListAppInstanceGroupUserResponseBody>(model1);
      }
    }
  }


  virtual ~PageListAppInstanceGroupUserResponse() = default;
};
class RenewAppInstanceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<bool> autoPay{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> productType{};
  shared_ptr<string> promotionId{};

  RenewAppInstanceGroupRequest() {}

  explicit RenewAppInstanceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    if (promotionId) {
      res["PromotionId"] = boost::any(*promotionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
    if (m.find("PromotionId") != m.end() && !m["PromotionId"].empty()) {
      promotionId = make_shared<string>(boost::any_cast<string>(m["PromotionId"]));
    }
  }


  virtual ~RenewAppInstanceGroupRequest() = default;
};
class RenewAppInstanceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  RenewAppInstanceGroupResponseBody() {}

  explicit RenewAppInstanceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RenewAppInstanceGroupResponseBody() = default;
};
class RenewAppInstanceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewAppInstanceGroupResponseBody> body{};

  RenewAppInstanceGroupResponse() {}

  explicit RenewAppInstanceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewAppInstanceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewAppInstanceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RenewAppInstanceGroupResponse() = default;
};
class TagCloudResourcesRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagCloudResourcesRequestTags() {}

  explicit TagCloudResourcesRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagCloudResourcesRequestTags() = default;
};
class TagCloudResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagCloudResourcesRequestTags>> tags{};

  TagCloudResourcesRequest() {}

  explicit TagCloudResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<TagCloudResourcesRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagCloudResourcesRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<TagCloudResourcesRequestTags>>(expect1);
      }
    }
  }


  virtual ~TagCloudResourcesRequest() = default;
};
class TagCloudResourcesResponseBodyFailedResourcesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> scope{};
  shared_ptr<string> value{};

  TagCloudResourcesResponseBodyFailedResourcesTags() {}

  explicit TagCloudResourcesResponseBodyFailedResourcesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
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
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TagCloudResourcesResponseBodyFailedResourcesTags() = default;
};
class TagCloudResourcesResponseBodyFailedResources : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagCloudResourcesResponseBodyFailedResourcesTags>> tags{};

  TagCloudResourcesResponseBodyFailedResources() {}

  explicit TagCloudResourcesResponseBodyFailedResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
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
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<TagCloudResourcesResponseBodyFailedResourcesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagCloudResourcesResponseBodyFailedResourcesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<TagCloudResourcesResponseBodyFailedResourcesTags>>(expect1);
      }
    }
  }


  virtual ~TagCloudResourcesResponseBodyFailedResources() = default;
};
class TagCloudResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<TagCloudResourcesResponseBodyFailedResources>> failedResources{};
  shared_ptr<string> requestId{};

  TagCloudResourcesResponseBody() {}

  explicit TagCloudResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedResources) {
      vector<boost::any> temp1;
      for(auto item1:*failedResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedResources"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedResources") != m.end() && !m["FailedResources"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedResources"].type()) {
        vector<TagCloudResourcesResponseBodyFailedResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagCloudResourcesResponseBodyFailedResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedResources = make_shared<vector<TagCloudResourcesResponseBodyFailedResources>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TagCloudResourcesResponseBody() = default;
};
class TagCloudResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TagCloudResourcesResponseBody> body{};

  TagCloudResourcesResponse() {}

  explicit TagCloudResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagCloudResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagCloudResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagCloudResourcesResponse() = default;
};
class UnbindRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> appInstancePersistentId{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> productType{};

  UnbindRequest() {}

  explicit UnbindRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (appInstancePersistentId) {
      res["AppInstancePersistentId"] = boost::any(*appInstancePersistentId);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("AppInstancePersistentId") != m.end() && !m["AppInstancePersistentId"].empty()) {
      appInstancePersistentId = make_shared<string>(boost::any_cast<string>(m["AppInstancePersistentId"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~UnbindRequest() = default;
};
class UnbindResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnbindResponseBody() {}

  explicit UnbindResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnbindResponseBody() = default;
};
class UnbindResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindResponseBody> body{};

  UnbindResponse() {}

  explicit UnbindResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindResponse() = default;
};
class UntagCloudResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKeys{};

  UntagCloudResourcesRequest() {}

  explicit UntagCloudResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKeys) {
      res["TagKeys"] = boost::any(*tagKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKeys = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagCloudResourcesRequest() = default;
};
class UntagCloudResourcesResponseBodyFailedResourcesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> scope{};

  UntagCloudResourcesResponseBodyFailedResourcesTags() {}

  explicit UntagCloudResourcesResponseBodyFailedResourcesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
  }


  virtual ~UntagCloudResourcesResponseBodyFailedResourcesTags() = default;
};
class UntagCloudResourcesResponseBodyFailedResources : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<UntagCloudResourcesResponseBodyFailedResourcesTags>> tags{};

  UntagCloudResourcesResponseBodyFailedResources() {}

  explicit UntagCloudResourcesResponseBodyFailedResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
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
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<UntagCloudResourcesResponseBodyFailedResourcesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UntagCloudResourcesResponseBodyFailedResourcesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<UntagCloudResourcesResponseBodyFailedResourcesTags>>(expect1);
      }
    }
  }


  virtual ~UntagCloudResourcesResponseBodyFailedResources() = default;
};
class UntagCloudResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<UntagCloudResourcesResponseBodyFailedResources>> failedResources{};
  shared_ptr<string> requestId{};

  UntagCloudResourcesResponseBody() {}

  explicit UntagCloudResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedResources) {
      vector<boost::any> temp1;
      for(auto item1:*failedResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedResources"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedResources") != m.end() && !m["FailedResources"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedResources"].type()) {
        vector<UntagCloudResourcesResponseBodyFailedResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UntagCloudResourcesResponseBodyFailedResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedResources = make_shared<vector<UntagCloudResourcesResponseBodyFailedResources>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UntagCloudResourcesResponseBody() = default;
};
class UntagCloudResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UntagCloudResourcesResponseBody> body{};

  UntagCloudResourcesResponse() {}

  explicit UntagCloudResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagCloudResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagCloudResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagCloudResourcesResponse() = default;
};
class UpdateAppInstanceGroupImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCenterImageId{};
  shared_ptr<string> appInstanceGroupId{};
  shared_ptr<string> bizRegionId{};
  shared_ptr<string> productType{};

  UpdateAppInstanceGroupImageRequest() {}

  explicit UpdateAppInstanceGroupImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCenterImageId) {
      res["AppCenterImageId"] = boost::any(*appCenterImageId);
    }
    if (appInstanceGroupId) {
      res["AppInstanceGroupId"] = boost::any(*appInstanceGroupId);
    }
    if (bizRegionId) {
      res["BizRegionId"] = boost::any(*bizRegionId);
    }
    if (productType) {
      res["ProductType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCenterImageId") != m.end() && !m["AppCenterImageId"].empty()) {
      appCenterImageId = make_shared<string>(boost::any_cast<string>(m["AppCenterImageId"]));
    }
    if (m.find("AppInstanceGroupId") != m.end() && !m["AppInstanceGroupId"].empty()) {
      appInstanceGroupId = make_shared<string>(boost::any_cast<string>(m["AppInstanceGroupId"]));
    }
    if (m.find("BizRegionId") != m.end() && !m["BizRegionId"].empty()) {
      bizRegionId = make_shared<string>(boost::any_cast<string>(m["BizRegionId"]));
    }
    if (m.find("ProductType") != m.end() && !m["ProductType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["ProductType"]));
    }
  }


  virtual ~UpdateAppInstanceGroupImageRequest() = default;
};
class UpdateAppInstanceGroupImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateAppInstanceGroupImageResponseBody() {}

  explicit UpdateAppInstanceGroupImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~UpdateAppInstanceGroupImageResponseBody() = default;
};
class UpdateAppInstanceGroupImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAppInstanceGroupImageResponseBody> body{};

  UpdateAppInstanceGroupImageResponse() {}

  explicit UpdateAppInstanceGroupImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppInstanceGroupImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppInstanceGroupImageResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppInstanceGroupImageResponse() = default;
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
  AccessPageSetAclResponse accessPageSetAclWithOptions(shared_ptr<AccessPageSetAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AccessPageSetAclResponse accessPageSetAcl(shared_ptr<AccessPageSetAclRequest> request);
  ApproveOtaTaskResponse approveOtaTaskWithOptions(shared_ptr<ApproveOtaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApproveOtaTaskResponse approveOtaTask(shared_ptr<ApproveOtaTaskRequest> request);
  AskSessionPackagePriceResponse askSessionPackagePriceWithOptions(shared_ptr<AskSessionPackagePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AskSessionPackagePriceResponse askSessionPackagePrice(shared_ptr<AskSessionPackagePriceRequest> request);
  AuthorizeInstanceGroupResponse authorizeInstanceGroupWithOptions(shared_ptr<AuthorizeInstanceGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuthorizeInstanceGroupResponse authorizeInstanceGroup(shared_ptr<AuthorizeInstanceGroupRequest> request);
  BuySessionPackageResponse buySessionPackageWithOptions(shared_ptr<BuySessionPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BuySessionPackageResponse buySessionPackage(shared_ptr<BuySessionPackageRequest> request);
  CreateAccessPageResponse createAccessPageWithOptions(shared_ptr<CreateAccessPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessPageResponse createAccessPage(shared_ptr<CreateAccessPageRequest> request);
  CreateAppInstanceGroupResponse createAppInstanceGroupWithOptions(shared_ptr<CreateAppInstanceGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppInstanceGroupResponse createAppInstanceGroup(shared_ptr<CreateAppInstanceGroupRequest> request);
  CreateImageFromAppInstanceGroupResponse createImageFromAppInstanceGroupWithOptions(shared_ptr<CreateImageFromAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateImageFromAppInstanceGroupResponse createImageFromAppInstanceGroup(shared_ptr<CreateImageFromAppInstanceGroupRequest> request);
  DeleteAccessPageResponse deleteAccessPageWithOptions(shared_ptr<DeleteAccessPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessPageResponse deleteAccessPage(shared_ptr<DeleteAccessPageRequest> request);
  DeleteAppInstanceGroupResponse deleteAppInstanceGroupWithOptions(shared_ptr<DeleteAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppInstanceGroupResponse deleteAppInstanceGroup(shared_ptr<DeleteAppInstanceGroupRequest> request);
  DeleteAppInstancesResponse deleteAppInstancesWithOptions(shared_ptr<DeleteAppInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppInstancesResponse deleteAppInstances(shared_ptr<DeleteAppInstancesRequest> request);
  GetAccessPageSessionResponse getAccessPageSessionWithOptions(shared_ptr<GetAccessPageSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccessPageSessionResponse getAccessPageSession(shared_ptr<GetAccessPageSessionRequest> request);
  GetAppInstanceGroupResponse getAppInstanceGroupWithOptions(shared_ptr<GetAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppInstanceGroupResponse getAppInstanceGroup(shared_ptr<GetAppInstanceGroupRequest> request);
  GetConnectionTicketResponse getConnectionTicketWithOptions(shared_ptr<GetConnectionTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConnectionTicketResponse getConnectionTicket(shared_ptr<GetConnectionTicketRequest> request);
  GetDebugAppInstanceResponse getDebugAppInstanceWithOptions(shared_ptr<GetDebugAppInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDebugAppInstanceResponse getDebugAppInstance(shared_ptr<GetDebugAppInstanceRequest> request);
  GetOtaTaskByTaskIdResponse getOtaTaskByTaskIdWithOptions(shared_ptr<GetOtaTaskByTaskIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOtaTaskByTaskIdResponse getOtaTaskByTaskId(shared_ptr<GetOtaTaskByTaskIdRequest> request);
  GetResourcePriceResponse getResourcePriceWithOptions(shared_ptr<GetResourcePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourcePriceResponse getResourcePrice(shared_ptr<GetResourcePriceRequest> request);
  GetResourceRenewPriceResponse getResourceRenewPriceWithOptions(shared_ptr<GetResourceRenewPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceRenewPriceResponse getResourceRenewPrice(shared_ptr<GetResourceRenewPriceRequest> request);
  ListAccessPagesResponse listAccessPagesWithOptions(shared_ptr<ListAccessPagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccessPagesResponse listAccessPages(shared_ptr<ListAccessPagesRequest> request);
  ListAppInstanceGroupResponse listAppInstanceGroupWithOptions(shared_ptr<ListAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppInstanceGroupResponse listAppInstanceGroup(shared_ptr<ListAppInstanceGroupRequest> request);
  ListAppInstancesResponse listAppInstancesWithOptions(shared_ptr<ListAppInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppInstancesResponse listAppInstances(shared_ptr<ListAppInstancesRequest> request);
  ListBindInfoResponse listBindInfoWithOptions(shared_ptr<ListBindInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBindInfoResponse listBindInfo(shared_ptr<ListBindInfoRequest> request);
  ListNodeInstanceTypeResponse listNodeInstanceTypeWithOptions(shared_ptr<ListNodeInstanceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodeInstanceTypeResponse listNodeInstanceType(shared_ptr<ListNodeInstanceTypeRequest> request);
  ListNodesResponse listNodesWithOptions(shared_ptr<ListNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodesResponse listNodes(shared_ptr<ListNodesRequest> request);
  ListOtaTaskResponse listOtaTaskWithOptions(shared_ptr<ListOtaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOtaTaskResponse listOtaTask(shared_ptr<ListOtaTaskRequest> request);
  ListPersistentAppInstancesResponse listPersistentAppInstancesWithOptions(shared_ptr<ListPersistentAppInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPersistentAppInstancesResponse listPersistentAppInstances(shared_ptr<ListPersistentAppInstancesRequest> request);
  ListRegionsResponse listRegionsWithOptions(shared_ptr<ListRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionsResponse listRegions(shared_ptr<ListRegionsRequest> request);
  ListSessionPackagesResponse listSessionPackagesWithOptions(shared_ptr<ListSessionPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSessionPackagesResponse listSessionPackages(shared_ptr<ListSessionPackagesRequest> request);
  ListTagCloudResourcesResponse listTagCloudResourcesWithOptions(shared_ptr<ListTagCloudResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagCloudResourcesResponse listTagCloudResources(shared_ptr<ListTagCloudResourcesRequest> request);
  ListTenantConfigResponse listTenantConfigWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTenantConfigResponse listTenantConfig();
  LogOffAllSessionsInAppInstanceGroupResponse logOffAllSessionsInAppInstanceGroupWithOptions(shared_ptr<LogOffAllSessionsInAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LogOffAllSessionsInAppInstanceGroupResponse logOffAllSessionsInAppInstanceGroup(shared_ptr<LogOffAllSessionsInAppInstanceGroupRequest> request);
  ModifyAppInstanceGroupAttributeResponse modifyAppInstanceGroupAttributeWithOptions(shared_ptr<ModifyAppInstanceGroupAttributeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppInstanceGroupAttributeResponse modifyAppInstanceGroupAttribute(shared_ptr<ModifyAppInstanceGroupAttributeRequest> request);
  ModifyAppPolicyResponse modifyAppPolicyWithOptions(shared_ptr<ModifyAppPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppPolicyResponse modifyAppPolicy(shared_ptr<ModifyAppPolicyRequest> request);
  ModifyNodePoolAmountResponse modifyNodePoolAmountWithOptions(shared_ptr<ModifyNodePoolAmountRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNodePoolAmountResponse modifyNodePoolAmount(shared_ptr<ModifyNodePoolAmountRequest> request);
  ModifyNodePoolAttributeResponse modifyNodePoolAttributeWithOptions(shared_ptr<ModifyNodePoolAttributeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNodePoolAttributeResponse modifyNodePoolAttribute(shared_ptr<ModifyNodePoolAttributeRequest> request);
  ModifyTenantConfigResponse modifyTenantConfigWithOptions(shared_ptr<ModifyTenantConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyTenantConfigResponse modifyTenantConfig(shared_ptr<ModifyTenantConfigRequest> request);
  PageListAppInstanceGroupUserResponse pageListAppInstanceGroupUserWithOptions(shared_ptr<PageListAppInstanceGroupUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PageListAppInstanceGroupUserResponse pageListAppInstanceGroupUser(shared_ptr<PageListAppInstanceGroupUserRequest> request);
  RenewAppInstanceGroupResponse renewAppInstanceGroupWithOptions(shared_ptr<RenewAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewAppInstanceGroupResponse renewAppInstanceGroup(shared_ptr<RenewAppInstanceGroupRequest> request);
  TagCloudResourcesResponse tagCloudResourcesWithOptions(shared_ptr<TagCloudResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagCloudResourcesResponse tagCloudResources(shared_ptr<TagCloudResourcesRequest> request);
  UnbindResponse unbindWithOptions(shared_ptr<UnbindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindResponse unbind(shared_ptr<UnbindRequest> request);
  UntagCloudResourcesResponse untagCloudResourcesWithOptions(shared_ptr<UntagCloudResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagCloudResourcesResponse untagCloudResources(shared_ptr<UntagCloudResourcesRequest> request);
  UpdateAppInstanceGroupImageResponse updateAppInstanceGroupImageWithOptions(shared_ptr<UpdateAppInstanceGroupImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppInstanceGroupImageResponse updateAppInstanceGroupImage(shared_ptr<UpdateAppInstanceGroupImageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Appstream-center20210901

#endif
