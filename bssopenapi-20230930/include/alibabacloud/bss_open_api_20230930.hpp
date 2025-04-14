// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BSSOPENAPI20230930_H_
#define ALIBABACLOUD_BSSOPENAPI20230930_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_BssOpenApi20230930 {
class AddCouponDeductTagRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  AddCouponDeductTagRequestEcIdAccountIds() {}

  explicit AddCouponDeductTagRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~AddCouponDeductTagRequestEcIdAccountIds() = default;
};
class AddCouponDeductTagRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  AddCouponDeductTagRequestTags() {}

  explicit AddCouponDeductTagRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddCouponDeductTagRequestTags() = default;
};
class AddCouponDeductTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponId{};
  shared_ptr<vector<AddCouponDeductTagRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> nbid{};
  shared_ptr<vector<AddCouponDeductTagRequestTags>> tags{};

  AddCouponDeductTagRequest() {}

  explicit AddCouponDeductTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
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
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<AddCouponDeductTagRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddCouponDeductTagRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<AddCouponDeductTagRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<AddCouponDeductTagRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddCouponDeductTagRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<AddCouponDeductTagRequestTags>>(expect1);
      }
    }
  }


  virtual ~AddCouponDeductTagRequest() = default;
};
class AddCouponDeductTagShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponId{};
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> nbid{};
  shared_ptr<string> tagsShrink{};

  AddCouponDeductTagShrinkRequest() {}

  explicit AddCouponDeductTagShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~AddCouponDeductTagShrinkRequest() = default;
};
class AddCouponDeductTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  AddCouponDeductTagResponseBody() {}

  explicit AddCouponDeductTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddCouponDeductTagResponseBody() = default;
};
class AddCouponDeductTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddCouponDeductTagResponseBody> body{};

  AddCouponDeductTagResponse() {}

  explicit AddCouponDeductTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddCouponDeductTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddCouponDeductTagResponseBody>(model1);
      }
    }
  }


  virtual ~AddCouponDeductTagResponse() = default;
};
class CancelFundAccountLowAvailableAmountAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<long> fundAccountId{};

  CancelFundAccountLowAvailableAmountAlarmRequest() {}

  explicit CancelFundAccountLowAvailableAmountAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
  }


  virtual ~CancelFundAccountLowAvailableAmountAlarmRequest() = default;
};
class CancelFundAccountLowAvailableAmountAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  CancelFundAccountLowAvailableAmountAlarmResponseBody() {}

  explicit CancelFundAccountLowAvailableAmountAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
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
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelFundAccountLowAvailableAmountAlarmResponseBody() = default;
};
class CancelFundAccountLowAvailableAmountAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelFundAccountLowAvailableAmountAlarmResponseBody> body{};

  CancelFundAccountLowAvailableAmountAlarmResponse() {}

  explicit CancelFundAccountLowAvailableAmountAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelFundAccountLowAvailableAmountAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelFundAccountLowAvailableAmountAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~CancelFundAccountLowAvailableAmountAlarmResponse() = default;
};
class CreateFundAccountTransferRequest : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<string> currency{};
  shared_ptr<string> financeType{};
  shared_ptr<long> fromFundAccountId{};
  shared_ptr<string> remark{};
  shared_ptr<long> toFundAccountId{};
  shared_ptr<string> transferType{};

  CreateFundAccountTransferRequest() {}

  explicit CreateFundAccountTransferRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (financeType) {
      res["FinanceType"] = boost::any(*financeType);
    }
    if (fromFundAccountId) {
      res["FromFundAccountId"] = boost::any(*fromFundAccountId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (toFundAccountId) {
      res["ToFundAccountId"] = boost::any(*toFundAccountId);
    }
    if (transferType) {
      res["TransferType"] = boost::any(*transferType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("FinanceType") != m.end() && !m["FinanceType"].empty()) {
      financeType = make_shared<string>(boost::any_cast<string>(m["FinanceType"]));
    }
    if (m.find("FromFundAccountId") != m.end() && !m["FromFundAccountId"].empty()) {
      fromFundAccountId = make_shared<long>(boost::any_cast<long>(m["FromFundAccountId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ToFundAccountId") != m.end() && !m["ToFundAccountId"].empty()) {
      toFundAccountId = make_shared<long>(boost::any_cast<long>(m["ToFundAccountId"]));
    }
    if (m.find("TransferType") != m.end() && !m["TransferType"].empty()) {
      transferType = make_shared<string>(boost::any_cast<string>(m["TransferType"]));
    }
  }


  virtual ~CreateFundAccountTransferRequest() = default;
};
class CreateFundAccountTransferResponseBody : public Darabonba::Model {
public:
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  CreateFundAccountTransferResponseBody() {}

  explicit CreateFundAccountTransferResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFundAccountTransferResponseBody() = default;
};
class CreateFundAccountTransferResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFundAccountTransferResponseBody> body{};

  CreateFundAccountTransferResponse() {}

  explicit CreateFundAccountTransferResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateFundAccountTransferResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFundAccountTransferResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFundAccountTransferResponse() = default;
};
class DeleteCouponDeductTagRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  DeleteCouponDeductTagRequestEcIdAccountIds() {}

  explicit DeleteCouponDeductTagRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~DeleteCouponDeductTagRequestEcIdAccountIds() = default;
};
class DeleteCouponDeductTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponId{};
  shared_ptr<vector<DeleteCouponDeductTagRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> nbid{};
  shared_ptr<vector<string>> tagKeys{};

  DeleteCouponDeductTagRequest() {}

  explicit DeleteCouponDeductTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (tagKeys) {
      res["TagKeys"] = boost::any(*tagKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<DeleteCouponDeductTagRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteCouponDeductTagRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<DeleteCouponDeductTagRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
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


  virtual ~DeleteCouponDeductTagRequest() = default;
};
class DeleteCouponDeductTagShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponId{};
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> nbid{};
  shared_ptr<string> tagKeysShrink{};

  DeleteCouponDeductTagShrinkRequest() {}

  explicit DeleteCouponDeductTagShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (tagKeysShrink) {
      res["TagKeys"] = boost::any(*tagKeysShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("TagKeys") != m.end() && !m["TagKeys"].empty()) {
      tagKeysShrink = make_shared<string>(boost::any_cast<string>(m["TagKeys"]));
    }
  }


  virtual ~DeleteCouponDeductTagShrinkRequest() = default;
};
class DeleteCouponDeductTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  DeleteCouponDeductTagResponseBody() {}

  explicit DeleteCouponDeductTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteCouponDeductTagResponseBody() = default;
};
class DeleteCouponDeductTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCouponDeductTagResponseBody> body{};

  DeleteCouponDeductTagResponse() {}

  explicit DeleteCouponDeductTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteCouponDeductTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCouponDeductTagResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCouponDeductTagResponse() = default;
};
class DescribeCouponRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  DescribeCouponRequestEcIdAccountIds() {}

  explicit DescribeCouponRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~DescribeCouponRequestEcIdAccountIds() = default;
};
class DescribeCouponRequest : public Darabonba::Model {
public:
  shared_ptr<long> couponId{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> couponType{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeCouponRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<long> effectiveEndTime{};
  shared_ptr<long> effectiveStartTime{};
  shared_ptr<long> expireEndDate{};
  shared_ptr<long> expireStartDate{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  DescribeCouponRequest() {}

  explicit DescribeCouponRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (couponType) {
      res["CouponType"] = boost::any(*couponType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (effectiveEndTime) {
      res["EffectiveEndTime"] = boost::any(*effectiveEndTime);
    }
    if (effectiveStartTime) {
      res["EffectiveStartTime"] = boost::any(*effectiveStartTime);
    }
    if (expireEndDate) {
      res["ExpireEndDate"] = boost::any(*expireEndDate);
    }
    if (expireStartDate) {
      res["ExpireStartDate"] = boost::any(*expireStartDate);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<long>(boost::any_cast<long>(m["CouponId"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("CouponType") != m.end() && !m["CouponType"].empty()) {
      couponType = make_shared<string>(boost::any_cast<string>(m["CouponType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<DescribeCouponRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCouponRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<DescribeCouponRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("EffectiveEndTime") != m.end() && !m["EffectiveEndTime"].empty()) {
      effectiveEndTime = make_shared<long>(boost::any_cast<long>(m["EffectiveEndTime"]));
    }
    if (m.find("EffectiveStartTime") != m.end() && !m["EffectiveStartTime"].empty()) {
      effectiveStartTime = make_shared<long>(boost::any_cast<long>(m["EffectiveStartTime"]));
    }
    if (m.find("ExpireEndDate") != m.end() && !m["ExpireEndDate"].empty()) {
      expireEndDate = make_shared<long>(boost::any_cast<long>(m["ExpireEndDate"]));
    }
    if (m.find("ExpireStartDate") != m.end() && !m["ExpireStartDate"].empty()) {
      expireStartDate = make_shared<long>(boost::any_cast<long>(m["ExpireStartDate"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCouponRequest() = default;
};
class DescribeCouponShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> couponId{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> couponType{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<long> effectiveEndTime{};
  shared_ptr<long> effectiveStartTime{};
  shared_ptr<long> expireEndDate{};
  shared_ptr<long> expireStartDate{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  DescribeCouponShrinkRequest() {}

  explicit DescribeCouponShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (couponType) {
      res["CouponType"] = boost::any(*couponType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (effectiveEndTime) {
      res["EffectiveEndTime"] = boost::any(*effectiveEndTime);
    }
    if (effectiveStartTime) {
      res["EffectiveStartTime"] = boost::any(*effectiveStartTime);
    }
    if (expireEndDate) {
      res["ExpireEndDate"] = boost::any(*expireEndDate);
    }
    if (expireStartDate) {
      res["ExpireStartDate"] = boost::any(*expireStartDate);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<long>(boost::any_cast<long>(m["CouponId"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("CouponType") != m.end() && !m["CouponType"].empty()) {
      couponType = make_shared<string>(boost::any_cast<string>(m["CouponType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("EffectiveEndTime") != m.end() && !m["EffectiveEndTime"].empty()) {
      effectiveEndTime = make_shared<long>(boost::any_cast<long>(m["EffectiveEndTime"]));
    }
    if (m.find("EffectiveStartTime") != m.end() && !m["EffectiveStartTime"].empty()) {
      effectiveStartTime = make_shared<long>(boost::any_cast<long>(m["EffectiveStartTime"]));
    }
    if (m.find("ExpireEndDate") != m.end() && !m["ExpireEndDate"].empty()) {
      expireEndDate = make_shared<long>(boost::any_cast<long>(m["ExpireEndDate"]));
    }
    if (m.find("ExpireStartDate") != m.end() && !m["ExpireStartDate"].empty()) {
      expireStartDate = make_shared<long>(boost::any_cast<long>(m["ExpireStartDate"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeCouponShrinkRequest() = default;
};
class DescribeCouponResponseBodyDataShareUidList : public Darabonba::Model {
public:
  shared_ptr<string> uid{};
  shared_ptr<string> userNick{};

  DescribeCouponResponseBodyDataShareUidList() {}

  explicit DescribeCouponResponseBodyDataShareUidList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (userNick) {
      res["UserNick"] = boost::any(*userNick);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("UserNick") != m.end() && !m["UserNick"].empty()) {
      userNick = make_shared<string>(boost::any_cast<string>(m["UserNick"]));
    }
  }


  virtual ~DescribeCouponResponseBodyDataShareUidList() = default;
};
class DescribeCouponResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<long> couponId{};
  shared_ptr<string> couponNo{};
  shared_ptr<string> couponType{};
  shared_ptr<string> couponTypeName{};
  shared_ptr<string> currency{};
  shared_ptr<string> endTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<vector<string>> itemNames{};
  shared_ptr<string> moneyLimit{};
  shared_ptr<string> orderTimeRule{};
  shared_ptr<string> remainAmount{};
  shared_ptr<string> remark{};
  shared_ptr<vector<DescribeCouponResponseBodyDataShareUidList>> shareUidList{};
  shared_ptr<bool> showSetDeductTagButton{};
  shared_ptr<string> site{};
  shared_ptr<string> siteName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> suitAccount{};
  shared_ptr<string> suitItemType{};
  shared_ptr<string> universalType{};
  shared_ptr<vector<string>> yhOrderTypes{};

  DescribeCouponResponseBodyData() {}

  explicit DescribeCouponResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (couponNo) {
      res["CouponNo"] = boost::any(*couponNo);
    }
    if (couponType) {
      res["CouponType"] = boost::any(*couponType);
    }
    if (couponTypeName) {
      res["CouponTypeName"] = boost::any(*couponTypeName);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (itemNames) {
      res["ItemNames"] = boost::any(*itemNames);
    }
    if (moneyLimit) {
      res["MoneyLimit"] = boost::any(*moneyLimit);
    }
    if (orderTimeRule) {
      res["OrderTimeRule"] = boost::any(*orderTimeRule);
    }
    if (remainAmount) {
      res["RemainAmount"] = boost::any(*remainAmount);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (shareUidList) {
      vector<boost::any> temp1;
      for(auto item1:*shareUidList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ShareUidList"] = boost::any(temp1);
    }
    if (showSetDeductTagButton) {
      res["ShowSetDeductTagButton"] = boost::any(*showSetDeductTagButton);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    if (siteName) {
      res["SiteName"] = boost::any(*siteName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (suitAccount) {
      res["SuitAccount"] = boost::any(*suitAccount);
    }
    if (suitItemType) {
      res["SuitItemType"] = boost::any(*suitItemType);
    }
    if (universalType) {
      res["UniversalType"] = boost::any(*universalType);
    }
    if (yhOrderTypes) {
      res["YhOrderTypes"] = boost::any(*yhOrderTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<long>(boost::any_cast<long>(m["CouponId"]));
    }
    if (m.find("CouponNo") != m.end() && !m["CouponNo"].empty()) {
      couponNo = make_shared<string>(boost::any_cast<string>(m["CouponNo"]));
    }
    if (m.find("CouponType") != m.end() && !m["CouponType"].empty()) {
      couponType = make_shared<string>(boost::any_cast<string>(m["CouponType"]));
    }
    if (m.find("CouponTypeName") != m.end() && !m["CouponTypeName"].empty()) {
      couponTypeName = make_shared<string>(boost::any_cast<string>(m["CouponTypeName"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("ItemNames") != m.end() && !m["ItemNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ItemNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ItemNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      itemNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MoneyLimit") != m.end() && !m["MoneyLimit"].empty()) {
      moneyLimit = make_shared<string>(boost::any_cast<string>(m["MoneyLimit"]));
    }
    if (m.find("OrderTimeRule") != m.end() && !m["OrderTimeRule"].empty()) {
      orderTimeRule = make_shared<string>(boost::any_cast<string>(m["OrderTimeRule"]));
    }
    if (m.find("RemainAmount") != m.end() && !m["RemainAmount"].empty()) {
      remainAmount = make_shared<string>(boost::any_cast<string>(m["RemainAmount"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ShareUidList") != m.end() && !m["ShareUidList"].empty()) {
      if (typeid(vector<boost::any>) == m["ShareUidList"].type()) {
        vector<DescribeCouponResponseBodyDataShareUidList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ShareUidList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCouponResponseBodyDataShareUidList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        shareUidList = make_shared<vector<DescribeCouponResponseBodyDataShareUidList>>(expect1);
      }
    }
    if (m.find("ShowSetDeductTagButton") != m.end() && !m["ShowSetDeductTagButton"].empty()) {
      showSetDeductTagButton = make_shared<bool>(boost::any_cast<bool>(m["ShowSetDeductTagButton"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
    if (m.find("SiteName") != m.end() && !m["SiteName"].empty()) {
      siteName = make_shared<string>(boost::any_cast<string>(m["SiteName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SuitAccount") != m.end() && !m["SuitAccount"].empty()) {
      suitAccount = make_shared<string>(boost::any_cast<string>(m["SuitAccount"]));
    }
    if (m.find("SuitItemType") != m.end() && !m["SuitItemType"].empty()) {
      suitItemType = make_shared<string>(boost::any_cast<string>(m["SuitItemType"]));
    }
    if (m.find("UniversalType") != m.end() && !m["UniversalType"].empty()) {
      universalType = make_shared<string>(boost::any_cast<string>(m["UniversalType"]));
    }
    if (m.find("YhOrderTypes") != m.end() && !m["YhOrderTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["YhOrderTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["YhOrderTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      yhOrderTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCouponResponseBodyData() = default;
};
class DescribeCouponResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeCouponResponseBodyData>> data{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCouponResponseBody() {}

  explicit DescribeCouponResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeCouponResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCouponResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeCouponResponseBodyData>>(expect1);
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


  virtual ~DescribeCouponResponseBody() = default;
};
class DescribeCouponResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCouponResponseBody> body{};

  DescribeCouponResponse() {}

  explicit DescribeCouponResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCouponResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCouponResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCouponResponse() = default;
};
class DescribeCouponItemListRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  DescribeCouponItemListRequestEcIdAccountIds() {}

  explicit DescribeCouponItemListRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~DescribeCouponItemListRequestEcIdAccountIds() = default;
};
class DescribeCouponItemListRequest : public Darabonba::Model {
public:
  shared_ptr<long> couponId{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeCouponItemListRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> name{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};

  DescribeCouponItemListRequest() {}

  explicit DescribeCouponItemListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<long>(boost::any_cast<long>(m["CouponId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<DescribeCouponItemListRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCouponItemListRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<DescribeCouponItemListRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeCouponItemListRequest() = default;
};
class DescribeCouponItemListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> couponId{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> name{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};

  DescribeCouponItemListShrinkRequest() {}

  explicit DescribeCouponItemListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<long>(boost::any_cast<long>(m["CouponId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeCouponItemListShrinkRequest() = default;
};
class DescribeCouponItemListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeCouponItemListResponseBodyData() {}

  explicit DescribeCouponItemListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeCouponItemListResponseBodyData() = default;
};
class DescribeCouponItemListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeCouponItemListResponseBodyData>> data{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCouponItemListResponseBody() {}

  explicit DescribeCouponItemListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeCouponItemListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCouponItemListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeCouponItemListResponseBodyData>>(expect1);
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


  virtual ~DescribeCouponItemListResponseBody() = default;
};
class DescribeCouponItemListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCouponItemListResponseBody> body{};

  DescribeCouponItemListResponse() {}

  explicit DescribeCouponItemListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCouponItemListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCouponItemListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCouponItemListResponse() = default;
};
class GetFundAccountAvailableAmountRequest : public Darabonba::Model {
public:
  shared_ptr<string> fundAccountId{};

  GetFundAccountAvailableAmountRequest() {}

  explicit GetFundAccountAvailableAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
  }


  virtual ~GetFundAccountAvailableAmountRequest() = default;
};
class GetFundAccountAvailableAmountResponseBodyExtendLedgerList : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<string> ledgerName{};
  shared_ptr<string> originalAmount{};

  GetFundAccountAvailableAmountResponseBodyExtendLedgerList() {}

  explicit GetFundAccountAvailableAmountResponseBodyExtendLedgerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (ledgerName) {
      res["LedgerName"] = boost::any(*ledgerName);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("LedgerName") != m.end() && !m["LedgerName"].empty()) {
      ledgerName = make_shared<string>(boost::any_cast<string>(m["LedgerName"]));
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<string>(boost::any_cast<string>(m["OriginalAmount"]));
    }
  }


  virtual ~GetFundAccountAvailableAmountResponseBodyExtendLedgerList() = default;
};
class GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<string> currency{};

  GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList() {}

  explicit GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
  }


  virtual ~GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList() = default;
};
class GetFundAccountAvailableAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> availableAmount{};
  shared_ptr<string> availableCreditAmount{};
  shared_ptr<string> bankAcceptanceAmount{};
  shared_ptr<string> cashAmount{};
  shared_ptr<string> creditAmount{};
  shared_ptr<string> creditRefundAmount{};
  shared_ptr<bool> creditUser{};
  shared_ptr<string> currency{};
  shared_ptr<string> currentMonthUnclearedAmount{};
  shared_ptr<vector<GetFundAccountAvailableAmountResponseBodyExtendLedgerList>> extendLedgerList{};
  shared_ptr<string> fundAccountId{};
  shared_ptr<string> fundAccountOwnerAccountId{};
  shared_ptr<string> fundAccountStatus{};
  shared_ptr<string> fundAccountType{};
  shared_ptr<string> historyMonthUnclearedAmount{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> negativeBillAmount{};
  shared_ptr<vector<GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList>> originalCashAmountList{};
  shared_ptr<string> quotaAmount{};
  shared_ptr<string> quotaConsumedAmount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> unclearedAmount{};

  GetFundAccountAvailableAmountResponseBody() {}

  explicit GetFundAccountAvailableAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableAmount) {
      res["AvailableAmount"] = boost::any(*availableAmount);
    }
    if (availableCreditAmount) {
      res["AvailableCreditAmount"] = boost::any(*availableCreditAmount);
    }
    if (bankAcceptanceAmount) {
      res["BankAcceptanceAmount"] = boost::any(*bankAcceptanceAmount);
    }
    if (cashAmount) {
      res["CashAmount"] = boost::any(*cashAmount);
    }
    if (creditAmount) {
      res["CreditAmount"] = boost::any(*creditAmount);
    }
    if (creditRefundAmount) {
      res["CreditRefundAmount"] = boost::any(*creditRefundAmount);
    }
    if (creditUser) {
      res["CreditUser"] = boost::any(*creditUser);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (currentMonthUnclearedAmount) {
      res["CurrentMonthUnclearedAmount"] = boost::any(*currentMonthUnclearedAmount);
    }
    if (extendLedgerList) {
      vector<boost::any> temp1;
      for(auto item1:*extendLedgerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExtendLedgerList"] = boost::any(temp1);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (fundAccountOwnerAccountId) {
      res["FundAccountOwnerAccountId"] = boost::any(*fundAccountOwnerAccountId);
    }
    if (fundAccountStatus) {
      res["FundAccountStatus"] = boost::any(*fundAccountStatus);
    }
    if (fundAccountType) {
      res["FundAccountType"] = boost::any(*fundAccountType);
    }
    if (historyMonthUnclearedAmount) {
      res["HistoryMonthUnclearedAmount"] = boost::any(*historyMonthUnclearedAmount);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (negativeBillAmount) {
      res["NegativeBillAmount"] = boost::any(*negativeBillAmount);
    }
    if (originalCashAmountList) {
      vector<boost::any> temp1;
      for(auto item1:*originalCashAmountList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OriginalCashAmountList"] = boost::any(temp1);
    }
    if (quotaAmount) {
      res["QuotaAmount"] = boost::any(*quotaAmount);
    }
    if (quotaConsumedAmount) {
      res["QuotaConsumedAmount"] = boost::any(*quotaConsumedAmount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (unclearedAmount) {
      res["UnclearedAmount"] = boost::any(*unclearedAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableAmount") != m.end() && !m["AvailableAmount"].empty()) {
      availableAmount = make_shared<string>(boost::any_cast<string>(m["AvailableAmount"]));
    }
    if (m.find("AvailableCreditAmount") != m.end() && !m["AvailableCreditAmount"].empty()) {
      availableCreditAmount = make_shared<string>(boost::any_cast<string>(m["AvailableCreditAmount"]));
    }
    if (m.find("BankAcceptanceAmount") != m.end() && !m["BankAcceptanceAmount"].empty()) {
      bankAcceptanceAmount = make_shared<string>(boost::any_cast<string>(m["BankAcceptanceAmount"]));
    }
    if (m.find("CashAmount") != m.end() && !m["CashAmount"].empty()) {
      cashAmount = make_shared<string>(boost::any_cast<string>(m["CashAmount"]));
    }
    if (m.find("CreditAmount") != m.end() && !m["CreditAmount"].empty()) {
      creditAmount = make_shared<string>(boost::any_cast<string>(m["CreditAmount"]));
    }
    if (m.find("CreditRefundAmount") != m.end() && !m["CreditRefundAmount"].empty()) {
      creditRefundAmount = make_shared<string>(boost::any_cast<string>(m["CreditRefundAmount"]));
    }
    if (m.find("CreditUser") != m.end() && !m["CreditUser"].empty()) {
      creditUser = make_shared<bool>(boost::any_cast<bool>(m["CreditUser"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("CurrentMonthUnclearedAmount") != m.end() && !m["CurrentMonthUnclearedAmount"].empty()) {
      currentMonthUnclearedAmount = make_shared<string>(boost::any_cast<string>(m["CurrentMonthUnclearedAmount"]));
    }
    if (m.find("ExtendLedgerList") != m.end() && !m["ExtendLedgerList"].empty()) {
      if (typeid(vector<boost::any>) == m["ExtendLedgerList"].type()) {
        vector<GetFundAccountAvailableAmountResponseBodyExtendLedgerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExtendLedgerList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFundAccountAvailableAmountResponseBodyExtendLedgerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extendLedgerList = make_shared<vector<GetFundAccountAvailableAmountResponseBodyExtendLedgerList>>(expect1);
      }
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
    if (m.find("FundAccountOwnerAccountId") != m.end() && !m["FundAccountOwnerAccountId"].empty()) {
      fundAccountOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountOwnerAccountId"]));
    }
    if (m.find("FundAccountStatus") != m.end() && !m["FundAccountStatus"].empty()) {
      fundAccountStatus = make_shared<string>(boost::any_cast<string>(m["FundAccountStatus"]));
    }
    if (m.find("FundAccountType") != m.end() && !m["FundAccountType"].empty()) {
      fundAccountType = make_shared<string>(boost::any_cast<string>(m["FundAccountType"]));
    }
    if (m.find("HistoryMonthUnclearedAmount") != m.end() && !m["HistoryMonthUnclearedAmount"].empty()) {
      historyMonthUnclearedAmount = make_shared<string>(boost::any_cast<string>(m["HistoryMonthUnclearedAmount"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("NegativeBillAmount") != m.end() && !m["NegativeBillAmount"].empty()) {
      negativeBillAmount = make_shared<string>(boost::any_cast<string>(m["NegativeBillAmount"]));
    }
    if (m.find("OriginalCashAmountList") != m.end() && !m["OriginalCashAmountList"].empty()) {
      if (typeid(vector<boost::any>) == m["OriginalCashAmountList"].type()) {
        vector<GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OriginalCashAmountList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        originalCashAmountList = make_shared<vector<GetFundAccountAvailableAmountResponseBodyOriginalCashAmountList>>(expect1);
      }
    }
    if (m.find("QuotaAmount") != m.end() && !m["QuotaAmount"].empty()) {
      quotaAmount = make_shared<string>(boost::any_cast<string>(m["QuotaAmount"]));
    }
    if (m.find("QuotaConsumedAmount") != m.end() && !m["QuotaConsumedAmount"].empty()) {
      quotaConsumedAmount = make_shared<string>(boost::any_cast<string>(m["QuotaConsumedAmount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UnclearedAmount") != m.end() && !m["UnclearedAmount"].empty()) {
      unclearedAmount = make_shared<string>(boost::any_cast<string>(m["UnclearedAmount"]));
    }
  }


  virtual ~GetFundAccountAvailableAmountResponseBody() = default;
};
class GetFundAccountAvailableAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFundAccountAvailableAmountResponseBody> body{};

  GetFundAccountAvailableAmountResponse() {}

  explicit GetFundAccountAvailableAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFundAccountAvailableAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFundAccountAvailableAmountResponseBody>(model1);
      }
    }
  }


  virtual ~GetFundAccountAvailableAmountResponse() = default;
};
class GetFundAccountCanAllocateCreditAmountRequest : public Darabonba::Model {
public:
  shared_ptr<long> fundAccountId{};

  GetFundAccountCanAllocateCreditAmountRequest() {}

  explicit GetFundAccountCanAllocateCreditAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
  }


  virtual ~GetFundAccountCanAllocateCreditAmountRequest() = default;
};
class GetFundAccountCanAllocateCreditAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ecid{};
  shared_ptr<string> ecidAllocatedCreditAmount{};
  shared_ptr<string> ecidCreditAmount{};
  shared_ptr<string> fundAccountEcid{};
  shared_ptr<long> fundAccountId{};
  shared_ptr<string> fundAccountName{};
  shared_ptr<long> fundAccountOwnerAccountId{};
  shared_ptr<string> maxCanAllocateCreditAmount{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> minCanAllocateCreditAmount{};
  shared_ptr<string> nbid{};
  shared_ptr<string> requestId{};
  shared_ptr<string> site{};

  GetFundAccountCanAllocateCreditAmountResponseBody() {}

  explicit GetFundAccountCanAllocateCreditAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecid) {
      res["Ecid"] = boost::any(*ecid);
    }
    if (ecidAllocatedCreditAmount) {
      res["EcidAllocatedCreditAmount"] = boost::any(*ecidAllocatedCreditAmount);
    }
    if (ecidCreditAmount) {
      res["EcidCreditAmount"] = boost::any(*ecidCreditAmount);
    }
    if (fundAccountEcid) {
      res["FundAccountEcid"] = boost::any(*fundAccountEcid);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (fundAccountName) {
      res["FundAccountName"] = boost::any(*fundAccountName);
    }
    if (fundAccountOwnerAccountId) {
      res["FundAccountOwnerAccountId"] = boost::any(*fundAccountOwnerAccountId);
    }
    if (maxCanAllocateCreditAmount) {
      res["MaxCanAllocateCreditAmount"] = boost::any(*maxCanAllocateCreditAmount);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (minCanAllocateCreditAmount) {
      res["MinCanAllocateCreditAmount"] = boost::any(*minCanAllocateCreditAmount);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ecid") != m.end() && !m["Ecid"].empty()) {
      ecid = make_shared<string>(boost::any_cast<string>(m["Ecid"]));
    }
    if (m.find("EcidAllocatedCreditAmount") != m.end() && !m["EcidAllocatedCreditAmount"].empty()) {
      ecidAllocatedCreditAmount = make_shared<string>(boost::any_cast<string>(m["EcidAllocatedCreditAmount"]));
    }
    if (m.find("EcidCreditAmount") != m.end() && !m["EcidCreditAmount"].empty()) {
      ecidCreditAmount = make_shared<string>(boost::any_cast<string>(m["EcidCreditAmount"]));
    }
    if (m.find("FundAccountEcid") != m.end() && !m["FundAccountEcid"].empty()) {
      fundAccountEcid = make_shared<string>(boost::any_cast<string>(m["FundAccountEcid"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
    if (m.find("FundAccountName") != m.end() && !m["FundAccountName"].empty()) {
      fundAccountName = make_shared<string>(boost::any_cast<string>(m["FundAccountName"]));
    }
    if (m.find("FundAccountOwnerAccountId") != m.end() && !m["FundAccountOwnerAccountId"].empty()) {
      fundAccountOwnerAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountOwnerAccountId"]));
    }
    if (m.find("MaxCanAllocateCreditAmount") != m.end() && !m["MaxCanAllocateCreditAmount"].empty()) {
      maxCanAllocateCreditAmount = make_shared<string>(boost::any_cast<string>(m["MaxCanAllocateCreditAmount"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("MinCanAllocateCreditAmount") != m.end() && !m["MinCanAllocateCreditAmount"].empty()) {
      minCanAllocateCreditAmount = make_shared<string>(boost::any_cast<string>(m["MinCanAllocateCreditAmount"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
  }


  virtual ~GetFundAccountCanAllocateCreditAmountResponseBody() = default;
};
class GetFundAccountCanAllocateCreditAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFundAccountCanAllocateCreditAmountResponseBody> body{};

  GetFundAccountCanAllocateCreditAmountResponse() {}

  explicit GetFundAccountCanAllocateCreditAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFundAccountCanAllocateCreditAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFundAccountCanAllocateCreditAmountResponseBody>(model1);
      }
    }
  }


  virtual ~GetFundAccountCanAllocateCreditAmountResponse() = default;
};
class GetFundAccountCanRecycleAmountRequest : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<string> recycleFromFundAccountId{};

  GetFundAccountCanRecycleAmountRequest() {}

  explicit GetFundAccountCanRecycleAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (recycleFromFundAccountId) {
      res["RecycleFromFundAccountId"] = boost::any(*recycleFromFundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("RecycleFromFundAccountId") != m.end() && !m["RecycleFromFundAccountId"].empty()) {
      recycleFromFundAccountId = make_shared<string>(boost::any_cast<string>(m["RecycleFromFundAccountId"]));
    }
  }


  virtual ~GetFundAccountCanRecycleAmountRequest() = default;
};
class GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList : public Darabonba::Model {
public:
  shared_ptr<string> fundAccountId{};
  shared_ptr<string> fundAccountName{};
  shared_ptr<string> fundAccountOwnerAccountId{};
  shared_ptr<string> maxRecyclableAmount{};
  shared_ptr<string> originalTransferRemainAmount{};

  GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList() {}

  explicit GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (fundAccountName) {
      res["FundAccountName"] = boost::any(*fundAccountName);
    }
    if (fundAccountOwnerAccountId) {
      res["FundAccountOwnerAccountId"] = boost::any(*fundAccountOwnerAccountId);
    }
    if (maxRecyclableAmount) {
      res["MaxRecyclableAmount"] = boost::any(*maxRecyclableAmount);
    }
    if (originalTransferRemainAmount) {
      res["OriginalTransferRemainAmount"] = boost::any(*originalTransferRemainAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
    if (m.find("FundAccountName") != m.end() && !m["FundAccountName"].empty()) {
      fundAccountName = make_shared<string>(boost::any_cast<string>(m["FundAccountName"]));
    }
    if (m.find("FundAccountOwnerAccountId") != m.end() && !m["FundAccountOwnerAccountId"].empty()) {
      fundAccountOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountOwnerAccountId"]));
    }
    if (m.find("MaxRecyclableAmount") != m.end() && !m["MaxRecyclableAmount"].empty()) {
      maxRecyclableAmount = make_shared<string>(boost::any_cast<string>(m["MaxRecyclableAmount"]));
    }
    if (m.find("OriginalTransferRemainAmount") != m.end() && !m["OriginalTransferRemainAmount"].empty()) {
      originalTransferRemainAmount = make_shared<string>(boost::any_cast<string>(m["OriginalTransferRemainAmount"]));
    }
  }


  virtual ~GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList() = default;
};
class GetFundAccountCanRecycleAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> availableAmount{};
  shared_ptr<string> currency{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> recycleFromFundAccountId{};
  shared_ptr<vector<GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList>> recycleToFundAccountList{};
  shared_ptr<string> requestId{};
  shared_ptr<string> transferAmount{};

  GetFundAccountCanRecycleAmountResponseBody() {}

  explicit GetFundAccountCanRecycleAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableAmount) {
      res["AvailableAmount"] = boost::any(*availableAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (recycleFromFundAccountId) {
      res["RecycleFromFundAccountId"] = boost::any(*recycleFromFundAccountId);
    }
    if (recycleToFundAccountList) {
      vector<boost::any> temp1;
      for(auto item1:*recycleToFundAccountList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RecycleToFundAccountList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (transferAmount) {
      res["TransferAmount"] = boost::any(*transferAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableAmount") != m.end() && !m["AvailableAmount"].empty()) {
      availableAmount = make_shared<string>(boost::any_cast<string>(m["AvailableAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RecycleFromFundAccountId") != m.end() && !m["RecycleFromFundAccountId"].empty()) {
      recycleFromFundAccountId = make_shared<string>(boost::any_cast<string>(m["RecycleFromFundAccountId"]));
    }
    if (m.find("RecycleToFundAccountList") != m.end() && !m["RecycleToFundAccountList"].empty()) {
      if (typeid(vector<boost::any>) == m["RecycleToFundAccountList"].type()) {
        vector<GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RecycleToFundAccountList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recycleToFundAccountList = make_shared<vector<GetFundAccountCanRecycleAmountResponseBodyRecycleToFundAccountList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TransferAmount") != m.end() && !m["TransferAmount"].empty()) {
      transferAmount = make_shared<string>(boost::any_cast<string>(m["TransferAmount"]));
    }
  }


  virtual ~GetFundAccountCanRecycleAmountResponseBody() = default;
};
class GetFundAccountCanRecycleAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFundAccountCanRecycleAmountResponseBody> body{};

  GetFundAccountCanRecycleAmountResponse() {}

  explicit GetFundAccountCanRecycleAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFundAccountCanRecycleAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFundAccountCanRecycleAmountResponseBody>(model1);
      }
    }
  }


  virtual ~GetFundAccountCanRecycleAmountResponse() = default;
};
class GetFundAccountCanTransferAmountRequest : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<string> fundAccountId{};

  GetFundAccountCanTransferAmountRequest() {}

  explicit GetFundAccountCanTransferAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
  }


  virtual ~GetFundAccountCanTransferAmountRequest() = default;
};
class GetFundAccountCanTransferAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> availableAmount{};
  shared_ptr<string> cashAmount{};
  shared_ptr<string> currency{};
  shared_ptr<string> fundAccountEcid{};
  shared_ptr<long> fundAccountId{};
  shared_ptr<string> fundAccountName{};
  shared_ptr<long> fundAccountOwnerAccountId{};
  shared_ptr<string> maxTransferableAmount{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> nbid{};
  shared_ptr<string> requestId{};
  shared_ptr<string> site{};
  shared_ptr<string> transferAmount{};

  GetFundAccountCanTransferAmountResponseBody() {}

  explicit GetFundAccountCanTransferAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableAmount) {
      res["AvailableAmount"] = boost::any(*availableAmount);
    }
    if (cashAmount) {
      res["CashAmount"] = boost::any(*cashAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (fundAccountEcid) {
      res["FundAccountEcid"] = boost::any(*fundAccountEcid);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (fundAccountName) {
      res["FundAccountName"] = boost::any(*fundAccountName);
    }
    if (fundAccountOwnerAccountId) {
      res["FundAccountOwnerAccountId"] = boost::any(*fundAccountOwnerAccountId);
    }
    if (maxTransferableAmount) {
      res["MaxTransferableAmount"] = boost::any(*maxTransferableAmount);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    if (transferAmount) {
      res["TransferAmount"] = boost::any(*transferAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableAmount") != m.end() && !m["AvailableAmount"].empty()) {
      availableAmount = make_shared<string>(boost::any_cast<string>(m["AvailableAmount"]));
    }
    if (m.find("CashAmount") != m.end() && !m["CashAmount"].empty()) {
      cashAmount = make_shared<string>(boost::any_cast<string>(m["CashAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("FundAccountEcid") != m.end() && !m["FundAccountEcid"].empty()) {
      fundAccountEcid = make_shared<string>(boost::any_cast<string>(m["FundAccountEcid"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
    if (m.find("FundAccountName") != m.end() && !m["FundAccountName"].empty()) {
      fundAccountName = make_shared<string>(boost::any_cast<string>(m["FundAccountName"]));
    }
    if (m.find("FundAccountOwnerAccountId") != m.end() && !m["FundAccountOwnerAccountId"].empty()) {
      fundAccountOwnerAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountOwnerAccountId"]));
    }
    if (m.find("MaxTransferableAmount") != m.end() && !m["MaxTransferableAmount"].empty()) {
      maxTransferableAmount = make_shared<string>(boost::any_cast<string>(m["MaxTransferableAmount"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
    if (m.find("TransferAmount") != m.end() && !m["TransferAmount"].empty()) {
      transferAmount = make_shared<string>(boost::any_cast<string>(m["TransferAmount"]));
    }
  }


  virtual ~GetFundAccountCanTransferAmountResponseBody() = default;
};
class GetFundAccountCanTransferAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFundAccountCanTransferAmountResponseBody> body{};

  GetFundAccountCanTransferAmountResponse() {}

  explicit GetFundAccountCanTransferAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFundAccountCanTransferAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFundAccountCanTransferAmountResponseBody>(model1);
      }
    }
  }


  virtual ~GetFundAccountCanTransferAmountResponse() = default;
};
class GetFundAccountCanWithdrawAmountRequest : public Darabonba::Model {
public:
  shared_ptr<long> fundAccountId{};

  GetFundAccountCanWithdrawAmountRequest() {}

  explicit GetFundAccountCanWithdrawAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
  }


  virtual ~GetFundAccountCanWithdrawAmountRequest() = default;
};
class GetFundAccountCanWithdrawAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> canOriginalWithdrawAmount{};
  shared_ptr<string> canWithdrawAmount{};
  shared_ptr<string> cannotOriginalWithdrawAmount{};
  shared_ptr<string> cashAmount{};
  shared_ptr<string> creditMemoAmount{};
  shared_ptr<string> currentMonthUnclearedAmount{};
  shared_ptr<string> historyMonthUnclearedAmount{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> payAsYouGoReversedAmount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> transferAmount{};

  GetFundAccountCanWithdrawAmountResponseBody() {}

  explicit GetFundAccountCanWithdrawAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canOriginalWithdrawAmount) {
      res["CanOriginalWithdrawAmount"] = boost::any(*canOriginalWithdrawAmount);
    }
    if (canWithdrawAmount) {
      res["CanWithdrawAmount"] = boost::any(*canWithdrawAmount);
    }
    if (cannotOriginalWithdrawAmount) {
      res["CannotOriginalWithdrawAmount"] = boost::any(*cannotOriginalWithdrawAmount);
    }
    if (cashAmount) {
      res["CashAmount"] = boost::any(*cashAmount);
    }
    if (creditMemoAmount) {
      res["CreditMemoAmount"] = boost::any(*creditMemoAmount);
    }
    if (currentMonthUnclearedAmount) {
      res["CurrentMonthUnclearedAmount"] = boost::any(*currentMonthUnclearedAmount);
    }
    if (historyMonthUnclearedAmount) {
      res["HistoryMonthUnclearedAmount"] = boost::any(*historyMonthUnclearedAmount);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (payAsYouGoReversedAmount) {
      res["PayAsYouGoReversedAmount"] = boost::any(*payAsYouGoReversedAmount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (transferAmount) {
      res["TransferAmount"] = boost::any(*transferAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanOriginalWithdrawAmount") != m.end() && !m["CanOriginalWithdrawAmount"].empty()) {
      canOriginalWithdrawAmount = make_shared<string>(boost::any_cast<string>(m["CanOriginalWithdrawAmount"]));
    }
    if (m.find("CanWithdrawAmount") != m.end() && !m["CanWithdrawAmount"].empty()) {
      canWithdrawAmount = make_shared<string>(boost::any_cast<string>(m["CanWithdrawAmount"]));
    }
    if (m.find("CannotOriginalWithdrawAmount") != m.end() && !m["CannotOriginalWithdrawAmount"].empty()) {
      cannotOriginalWithdrawAmount = make_shared<string>(boost::any_cast<string>(m["CannotOriginalWithdrawAmount"]));
    }
    if (m.find("CashAmount") != m.end() && !m["CashAmount"].empty()) {
      cashAmount = make_shared<string>(boost::any_cast<string>(m["CashAmount"]));
    }
    if (m.find("CreditMemoAmount") != m.end() && !m["CreditMemoAmount"].empty()) {
      creditMemoAmount = make_shared<string>(boost::any_cast<string>(m["CreditMemoAmount"]));
    }
    if (m.find("CurrentMonthUnclearedAmount") != m.end() && !m["CurrentMonthUnclearedAmount"].empty()) {
      currentMonthUnclearedAmount = make_shared<string>(boost::any_cast<string>(m["CurrentMonthUnclearedAmount"]));
    }
    if (m.find("HistoryMonthUnclearedAmount") != m.end() && !m["HistoryMonthUnclearedAmount"].empty()) {
      historyMonthUnclearedAmount = make_shared<string>(boost::any_cast<string>(m["HistoryMonthUnclearedAmount"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("PayAsYouGoReversedAmount") != m.end() && !m["PayAsYouGoReversedAmount"].empty()) {
      payAsYouGoReversedAmount = make_shared<string>(boost::any_cast<string>(m["PayAsYouGoReversedAmount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TransferAmount") != m.end() && !m["TransferAmount"].empty()) {
      transferAmount = make_shared<string>(boost::any_cast<string>(m["TransferAmount"]));
    }
  }


  virtual ~GetFundAccountCanWithdrawAmountResponseBody() = default;
};
class GetFundAccountCanWithdrawAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFundAccountCanWithdrawAmountResponseBody> body{};

  GetFundAccountCanWithdrawAmountResponse() {}

  explicit GetFundAccountCanWithdrawAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFundAccountCanWithdrawAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFundAccountCanWithdrawAmountResponseBody>(model1);
      }
    }
  }


  virtual ~GetFundAccountCanWithdrawAmountResponse() = default;
};
class GetFundAccountLowAvailableAmountAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<long> fundAccountId{};

  GetFundAccountLowAvailableAmountAlarmRequest() {}

  explicit GetFundAccountLowAvailableAmountAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
  }


  virtual ~GetFundAccountLowAvailableAmountAlarmRequest() = default;
};
class GetFundAccountLowAvailableAmountAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> alarmEnabled{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};
  shared_ptr<string> thresholdAmount{};

  GetFundAccountLowAvailableAmountAlarmResponseBody() {}

  explicit GetFundAccountLowAvailableAmountAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmEnabled) {
      res["AlarmEnabled"] = boost::any(*alarmEnabled);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (thresholdAmount) {
      res["ThresholdAmount"] = boost::any(*thresholdAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmEnabled") != m.end() && !m["AlarmEnabled"].empty()) {
      alarmEnabled = make_shared<bool>(boost::any_cast<bool>(m["AlarmEnabled"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ThresholdAmount") != m.end() && !m["ThresholdAmount"].empty()) {
      thresholdAmount = make_shared<string>(boost::any_cast<string>(m["ThresholdAmount"]));
    }
  }


  virtual ~GetFundAccountLowAvailableAmountAlarmResponseBody() = default;
};
class GetFundAccountLowAvailableAmountAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFundAccountLowAvailableAmountAlarmResponseBody> body{};

  GetFundAccountLowAvailableAmountAlarmResponse() {}

  explicit GetFundAccountLowAvailableAmountAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFundAccountLowAvailableAmountAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFundAccountLowAvailableAmountAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~GetFundAccountLowAvailableAmountAlarmResponse() = default;
};
class GetFundAccountTransactionDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> billNumber{};
  shared_ptr<string> channelTransactionNumber{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<long> fundAccountId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTime{};
  shared_ptr<vector<string>> transactionChannelList{};
  shared_ptr<string> transactionDirection{};
  shared_ptr<long> transactionNumber{};
  shared_ptr<string> transactionType{};
  shared_ptr<vector<string>> transactionTypeList{};

  GetFundAccountTransactionDetailsRequest() {}

  explicit GetFundAccountTransactionDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billNumber) {
      res["BillNumber"] = boost::any(*billNumber);
    }
    if (channelTransactionNumber) {
      res["ChannelTransactionNumber"] = boost::any(*channelTransactionNumber);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (transactionChannelList) {
      res["TransactionChannelList"] = boost::any(*transactionChannelList);
    }
    if (transactionDirection) {
      res["TransactionDirection"] = boost::any(*transactionDirection);
    }
    if (transactionNumber) {
      res["TransactionNumber"] = boost::any(*transactionNumber);
    }
    if (transactionType) {
      res["TransactionType"] = boost::any(*transactionType);
    }
    if (transactionTypeList) {
      res["TransactionTypeList"] = boost::any(*transactionTypeList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillNumber") != m.end() && !m["BillNumber"].empty()) {
      billNumber = make_shared<string>(boost::any_cast<string>(m["BillNumber"]));
    }
    if (m.find("ChannelTransactionNumber") != m.end() && !m["ChannelTransactionNumber"].empty()) {
      channelTransactionNumber = make_shared<string>(boost::any_cast<string>(m["ChannelTransactionNumber"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TransactionChannelList") != m.end() && !m["TransactionChannelList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TransactionChannelList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TransactionChannelList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      transactionChannelList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TransactionDirection") != m.end() && !m["TransactionDirection"].empty()) {
      transactionDirection = make_shared<string>(boost::any_cast<string>(m["TransactionDirection"]));
    }
    if (m.find("TransactionNumber") != m.end() && !m["TransactionNumber"].empty()) {
      transactionNumber = make_shared<long>(boost::any_cast<long>(m["TransactionNumber"]));
    }
    if (m.find("TransactionType") != m.end() && !m["TransactionType"].empty()) {
      transactionType = make_shared<string>(boost::any_cast<string>(m["TransactionType"]));
    }
    if (m.find("TransactionTypeList") != m.end() && !m["TransactionTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TransactionTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TransactionTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      transactionTypeList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetFundAccountTransactionDetailsRequest() = default;
};
class GetFundAccountTransactionDetailsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> billNumber{};
  shared_ptr<string> channelTransactionNumber{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<long> fundAccountId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTime{};
  shared_ptr<string> transactionChannelListShrink{};
  shared_ptr<string> transactionDirection{};
  shared_ptr<long> transactionNumber{};
  shared_ptr<string> transactionType{};
  shared_ptr<string> transactionTypeListShrink{};

  GetFundAccountTransactionDetailsShrinkRequest() {}

  explicit GetFundAccountTransactionDetailsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billNumber) {
      res["BillNumber"] = boost::any(*billNumber);
    }
    if (channelTransactionNumber) {
      res["ChannelTransactionNumber"] = boost::any(*channelTransactionNumber);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (transactionChannelListShrink) {
      res["TransactionChannelList"] = boost::any(*transactionChannelListShrink);
    }
    if (transactionDirection) {
      res["TransactionDirection"] = boost::any(*transactionDirection);
    }
    if (transactionNumber) {
      res["TransactionNumber"] = boost::any(*transactionNumber);
    }
    if (transactionType) {
      res["TransactionType"] = boost::any(*transactionType);
    }
    if (transactionTypeListShrink) {
      res["TransactionTypeList"] = boost::any(*transactionTypeListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillNumber") != m.end() && !m["BillNumber"].empty()) {
      billNumber = make_shared<string>(boost::any_cast<string>(m["BillNumber"]));
    }
    if (m.find("ChannelTransactionNumber") != m.end() && !m["ChannelTransactionNumber"].empty()) {
      channelTransactionNumber = make_shared<string>(boost::any_cast<string>(m["ChannelTransactionNumber"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("TransactionChannelList") != m.end() && !m["TransactionChannelList"].empty()) {
      transactionChannelListShrink = make_shared<string>(boost::any_cast<string>(m["TransactionChannelList"]));
    }
    if (m.find("TransactionDirection") != m.end() && !m["TransactionDirection"].empty()) {
      transactionDirection = make_shared<string>(boost::any_cast<string>(m["TransactionDirection"]));
    }
    if (m.find("TransactionNumber") != m.end() && !m["TransactionNumber"].empty()) {
      transactionNumber = make_shared<long>(boost::any_cast<long>(m["TransactionNumber"]));
    }
    if (m.find("TransactionType") != m.end() && !m["TransactionType"].empty()) {
      transactionType = make_shared<string>(boost::any_cast<string>(m["TransactionType"]));
    }
    if (m.find("TransactionTypeList") != m.end() && !m["TransactionTypeList"].empty()) {
      transactionTypeListShrink = make_shared<string>(boost::any_cast<string>(m["TransactionTypeList"]));
    }
  }


  virtual ~GetFundAccountTransactionDetailsShrinkRequest() = default;
};
class GetFundAccountTransactionDetailsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> balance{};
  shared_ptr<string> billNumber{};
  shared_ptr<string> channelTransactionNumber{};
  shared_ptr<string> currency{};
  shared_ptr<string> fundAccountEcid{};
  shared_ptr<long> fundAccountId{};
  shared_ptr<string> fundAccountName{};
  shared_ptr<long> fundAccountOwnerAccountId{};
  shared_ptr<string> fundType{};
  shared_ptr<string> nbid{};
  shared_ptr<string> remark{};
  shared_ptr<string> site{};
  shared_ptr<string> transactionAccount{};
  shared_ptr<string> transactionAmount{};
  shared_ptr<string> transactionChannel{};
  shared_ptr<string> transactionDirection{};
  shared_ptr<long> transactionNumber{};
  shared_ptr<string> transactionTime{};
  shared_ptr<string> transactionType{};

  GetFundAccountTransactionDetailsResponseBodyData() {}

  explicit GetFundAccountTransactionDetailsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (balance) {
      res["Balance"] = boost::any(*balance);
    }
    if (billNumber) {
      res["BillNumber"] = boost::any(*billNumber);
    }
    if (channelTransactionNumber) {
      res["ChannelTransactionNumber"] = boost::any(*channelTransactionNumber);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (fundAccountEcid) {
      res["FundAccountEcid"] = boost::any(*fundAccountEcid);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (fundAccountName) {
      res["FundAccountName"] = boost::any(*fundAccountName);
    }
    if (fundAccountOwnerAccountId) {
      res["FundAccountOwnerAccountId"] = boost::any(*fundAccountOwnerAccountId);
    }
    if (fundType) {
      res["FundType"] = boost::any(*fundType);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    if (transactionAccount) {
      res["TransactionAccount"] = boost::any(*transactionAccount);
    }
    if (transactionAmount) {
      res["TransactionAmount"] = boost::any(*transactionAmount);
    }
    if (transactionChannel) {
      res["TransactionChannel"] = boost::any(*transactionChannel);
    }
    if (transactionDirection) {
      res["TransactionDirection"] = boost::any(*transactionDirection);
    }
    if (transactionNumber) {
      res["TransactionNumber"] = boost::any(*transactionNumber);
    }
    if (transactionTime) {
      res["TransactionTime"] = boost::any(*transactionTime);
    }
    if (transactionType) {
      res["TransactionType"] = boost::any(*transactionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Balance") != m.end() && !m["Balance"].empty()) {
      balance = make_shared<string>(boost::any_cast<string>(m["Balance"]));
    }
    if (m.find("BillNumber") != m.end() && !m["BillNumber"].empty()) {
      billNumber = make_shared<string>(boost::any_cast<string>(m["BillNumber"]));
    }
    if (m.find("ChannelTransactionNumber") != m.end() && !m["ChannelTransactionNumber"].empty()) {
      channelTransactionNumber = make_shared<string>(boost::any_cast<string>(m["ChannelTransactionNumber"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("FundAccountEcid") != m.end() && !m["FundAccountEcid"].empty()) {
      fundAccountEcid = make_shared<string>(boost::any_cast<string>(m["FundAccountEcid"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
    if (m.find("FundAccountName") != m.end() && !m["FundAccountName"].empty()) {
      fundAccountName = make_shared<string>(boost::any_cast<string>(m["FundAccountName"]));
    }
    if (m.find("FundAccountOwnerAccountId") != m.end() && !m["FundAccountOwnerAccountId"].empty()) {
      fundAccountOwnerAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountOwnerAccountId"]));
    }
    if (m.find("FundType") != m.end() && !m["FundType"].empty()) {
      fundType = make_shared<string>(boost::any_cast<string>(m["FundType"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
    if (m.find("TransactionAccount") != m.end() && !m["TransactionAccount"].empty()) {
      transactionAccount = make_shared<string>(boost::any_cast<string>(m["TransactionAccount"]));
    }
    if (m.find("TransactionAmount") != m.end() && !m["TransactionAmount"].empty()) {
      transactionAmount = make_shared<string>(boost::any_cast<string>(m["TransactionAmount"]));
    }
    if (m.find("TransactionChannel") != m.end() && !m["TransactionChannel"].empty()) {
      transactionChannel = make_shared<string>(boost::any_cast<string>(m["TransactionChannel"]));
    }
    if (m.find("TransactionDirection") != m.end() && !m["TransactionDirection"].empty()) {
      transactionDirection = make_shared<string>(boost::any_cast<string>(m["TransactionDirection"]));
    }
    if (m.find("TransactionNumber") != m.end() && !m["TransactionNumber"].empty()) {
      transactionNumber = make_shared<long>(boost::any_cast<long>(m["TransactionNumber"]));
    }
    if (m.find("TransactionTime") != m.end() && !m["TransactionTime"].empty()) {
      transactionTime = make_shared<string>(boost::any_cast<string>(m["TransactionTime"]));
    }
    if (m.find("TransactionType") != m.end() && !m["TransactionType"].empty()) {
      transactionType = make_shared<string>(boost::any_cast<string>(m["TransactionType"]));
    }
  }


  virtual ~GetFundAccountTransactionDetailsResponseBodyData() = default;
};
class GetFundAccountTransactionDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<GetFundAccountTransactionDetailsResponseBodyData>> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetFundAccountTransactionDetailsResponseBody() {}

  explicit GetFundAccountTransactionDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetFundAccountTransactionDetailsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFundAccountTransactionDetailsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetFundAccountTransactionDetailsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
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


  virtual ~GetFundAccountTransactionDetailsResponseBody() = default;
};
class GetFundAccountTransactionDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFundAccountTransactionDetailsResponseBody> body{};

  GetFundAccountTransactionDetailsResponse() {}

  explicit GetFundAccountTransactionDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFundAccountTransactionDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFundAccountTransactionDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~GetFundAccountTransactionDetailsResponse() = default;
};
class ListCouponDeductTagRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  ListCouponDeductTagRequestEcIdAccountIds() {}

  explicit ListCouponDeductTagRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~ListCouponDeductTagRequestEcIdAccountIds() = default;
};
class ListCouponDeductTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponId{};
  shared_ptr<vector<ListCouponDeductTagRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> nbid{};

  ListCouponDeductTagRequest() {}

  explicit ListCouponDeductTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<ListCouponDeductTagRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCouponDeductTagRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<ListCouponDeductTagRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~ListCouponDeductTagRequest() = default;
};
class ListCouponDeductTagShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> couponId{};
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> nbid{};

  ListCouponDeductTagShrinkRequest() {}

  explicit ListCouponDeductTagShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (couponId) {
      res["CouponId"] = boost::any(*couponId);
    }
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CouponId") != m.end() && !m["CouponId"].empty()) {
      couponId = make_shared<string>(boost::any_cast<string>(m["CouponId"]));
    }
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
  }


  virtual ~ListCouponDeductTagShrinkRequest() = default;
};
class ListCouponDeductTagResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListCouponDeductTagResponseBodyData() {}

  explicit ListCouponDeductTagResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListCouponDeductTagResponseBodyData() = default;
};
class ListCouponDeductTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCouponDeductTagResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListCouponDeductTagResponseBody() {}

  explicit ListCouponDeductTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListCouponDeductTagResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCouponDeductTagResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCouponDeductTagResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCouponDeductTagResponseBody() = default;
};
class ListCouponDeductTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCouponDeductTagResponseBody> body{};

  ListCouponDeductTagResponse() {}

  explicit ListCouponDeductTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCouponDeductTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCouponDeductTagResponseBody>(model1);
      }
    }
  }


  virtual ~ListCouponDeductTagResponse() = default;
};
class ListFundAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> nbid{};
  shared_ptr<bool> queryOnlyInUse{};
  shared_ptr<bool> queryOnlyManage{};

  ListFundAccountRequest() {}

  explicit ListFundAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (queryOnlyInUse) {
      res["QueryOnlyInUse"] = boost::any(*queryOnlyInUse);
    }
    if (queryOnlyManage) {
      res["QueryOnlyManage"] = boost::any(*queryOnlyManage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("QueryOnlyInUse") != m.end() && !m["QueryOnlyInUse"].empty()) {
      queryOnlyInUse = make_shared<bool>(boost::any_cast<bool>(m["QueryOnlyInUse"]));
    }
    if (m.find("QueryOnlyManage") != m.end() && !m["QueryOnlyManage"].empty()) {
      queryOnlyManage = make_shared<bool>(boost::any_cast<bool>(m["QueryOnlyManage"]));
    }
  }


  virtual ~ListFundAccountRequest() = default;
};
class ListFundAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> fundAccountAdminAccountId{};
  shared_ptr<string> fundAccountAdminAccountName{};
  shared_ptr<string> fundAccountId{};
  shared_ptr<string> fundAccountName{};
  shared_ptr<string> fundAccountOwnerAccountId{};
  shared_ptr<string> fundAccountStatus{};
  shared_ptr<string> fundAccountType{};
  shared_ptr<string> nbid{};
  shared_ptr<vector<string>> permissions{};
  shared_ptr<string> site{};

  ListFundAccountResponseBodyData() {}

  explicit ListFundAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (fundAccountAdminAccountId) {
      res["FundAccountAdminAccountId"] = boost::any(*fundAccountAdminAccountId);
    }
    if (fundAccountAdminAccountName) {
      res["FundAccountAdminAccountName"] = boost::any(*fundAccountAdminAccountName);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (fundAccountName) {
      res["FundAccountName"] = boost::any(*fundAccountName);
    }
    if (fundAccountOwnerAccountId) {
      res["FundAccountOwnerAccountId"] = boost::any(*fundAccountOwnerAccountId);
    }
    if (fundAccountStatus) {
      res["FundAccountStatus"] = boost::any(*fundAccountStatus);
    }
    if (fundAccountType) {
      res["FundAccountType"] = boost::any(*fundAccountType);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (permissions) {
      res["Permissions"] = boost::any(*permissions);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("FundAccountAdminAccountId") != m.end() && !m["FundAccountAdminAccountId"].empty()) {
      fundAccountAdminAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountAdminAccountId"]));
    }
    if (m.find("FundAccountAdminAccountName") != m.end() && !m["FundAccountAdminAccountName"].empty()) {
      fundAccountAdminAccountName = make_shared<string>(boost::any_cast<string>(m["FundAccountAdminAccountName"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
    if (m.find("FundAccountName") != m.end() && !m["FundAccountName"].empty()) {
      fundAccountName = make_shared<string>(boost::any_cast<string>(m["FundAccountName"]));
    }
    if (m.find("FundAccountOwnerAccountId") != m.end() && !m["FundAccountOwnerAccountId"].empty()) {
      fundAccountOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountOwnerAccountId"]));
    }
    if (m.find("FundAccountStatus") != m.end() && !m["FundAccountStatus"].empty()) {
      fundAccountStatus = make_shared<string>(boost::any_cast<string>(m["FundAccountStatus"]));
    }
    if (m.find("FundAccountType") != m.end() && !m["FundAccountType"].empty()) {
      fundAccountType = make_shared<string>(boost::any_cast<string>(m["FundAccountType"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Permissions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Permissions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      permissions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
  }


  virtual ~ListFundAccountResponseBodyData() = default;
};
class ListFundAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFundAccountResponseBodyData>> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  ListFundAccountResponseBody() {}

  explicit ListFundAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListFundAccountResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFundAccountResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListFundAccountResponseBodyData>>(expect1);
      }
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFundAccountResponseBody() = default;
};
class ListFundAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFundAccountResponseBody> body{};

  ListFundAccountResponse() {}

  explicit ListFundAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListFundAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFundAccountResponseBody>(model1);
      }
    }
  }


  virtual ~ListFundAccountResponse() = default;
};
class ListFundAccountPayRelationRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> fundAccountId{};
  shared_ptr<string> nbid{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};

  ListFundAccountPayRelationRequest() {}

  explicit ListFundAccountPayRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListFundAccountPayRelationRequest() = default;
};
class ListFundAccountPayRelationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> ecid{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> fundAccountId{};
  shared_ptr<string> fundAccountOwnerAccountId{};
  shared_ptr<string> ineffectiveTime{};
  shared_ptr<string> nbid{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> operatorNo{};
  shared_ptr<string> operatorType{};
  shared_ptr<string> relationType{};
  shared_ptr<string> site{};
  shared_ptr<string> status{};

  ListFundAccountPayRelationResponseBodyData() {}

  explicit ListFundAccountPayRelationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (ecid) {
      res["Ecid"] = boost::any(*ecid);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (fundAccountOwnerAccountId) {
      res["FundAccountOwnerAccountId"] = boost::any(*fundAccountOwnerAccountId);
    }
    if (ineffectiveTime) {
      res["IneffectiveTime"] = boost::any(*ineffectiveTime);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    if (operatorNo) {
      res["OperatorNo"] = boost::any(*operatorNo);
    }
    if (operatorType) {
      res["OperatorType"] = boost::any(*operatorType);
    }
    if (relationType) {
      res["RelationType"] = boost::any(*relationType);
    }
    if (site) {
      res["Site"] = boost::any(*site);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("Ecid") != m.end() && !m["Ecid"].empty()) {
      ecid = make_shared<string>(boost::any_cast<string>(m["Ecid"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountId"]));
    }
    if (m.find("FundAccountOwnerAccountId") != m.end() && !m["FundAccountOwnerAccountId"].empty()) {
      fundAccountOwnerAccountId = make_shared<string>(boost::any_cast<string>(m["FundAccountOwnerAccountId"]));
    }
    if (m.find("IneffectiveTime") != m.end() && !m["IneffectiveTime"].empty()) {
      ineffectiveTime = make_shared<string>(boost::any_cast<string>(m["IneffectiveTime"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
    if (m.find("OperatorNo") != m.end() && !m["OperatorNo"].empty()) {
      operatorNo = make_shared<string>(boost::any_cast<string>(m["OperatorNo"]));
    }
    if (m.find("OperatorType") != m.end() && !m["OperatorType"].empty()) {
      operatorType = make_shared<string>(boost::any_cast<string>(m["OperatorType"]));
    }
    if (m.find("RelationType") != m.end() && !m["RelationType"].empty()) {
      relationType = make_shared<string>(boost::any_cast<string>(m["RelationType"]));
    }
    if (m.find("Site") != m.end() && !m["Site"].empty()) {
      site = make_shared<string>(boost::any_cast<string>(m["Site"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListFundAccountPayRelationResponseBodyData() = default;
};
class ListFundAccountPayRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<ListFundAccountPayRelationResponseBodyData>> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListFundAccountPayRelationResponseBody() {}

  explicit ListFundAccountPayRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListFundAccountPayRelationResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFundAccountPayRelationResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListFundAccountPayRelationResponseBodyData>>(expect1);
      }
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
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


  virtual ~ListFundAccountPayRelationResponseBody() = default;
};
class ListFundAccountPayRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFundAccountPayRelationResponseBody> body{};

  ListFundAccountPayRelationResponse() {}

  explicit ListFundAccountPayRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListFundAccountPayRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFundAccountPayRelationResponseBody>(model1);
      }
    }
  }


  virtual ~ListFundAccountPayRelationResponse() = default;
};
class SetFundAccountCreditAmountRequest : public Darabonba::Model {
public:
  shared_ptr<string> creditAmount{};
  shared_ptr<string> currency{};
  shared_ptr<long> fundAccountId{};

  SetFundAccountCreditAmountRequest() {}

  explicit SetFundAccountCreditAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creditAmount) {
      res["CreditAmount"] = boost::any(*creditAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreditAmount") != m.end() && !m["CreditAmount"].empty()) {
      creditAmount = make_shared<string>(boost::any_cast<string>(m["CreditAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
  }


  virtual ~SetFundAccountCreditAmountRequest() = default;
};
class SetFundAccountCreditAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  SetFundAccountCreditAmountResponseBody() {}

  explicit SetFundAccountCreditAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetFundAccountCreditAmountResponseBody() = default;
};
class SetFundAccountCreditAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetFundAccountCreditAmountResponseBody> body{};

  SetFundAccountCreditAmountResponse() {}

  explicit SetFundAccountCreditAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetFundAccountCreditAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetFundAccountCreditAmountResponseBody>(model1);
      }
    }
  }


  virtual ~SetFundAccountCreditAmountResponse() = default;
};
class SetFundAccountLowAvailableAmountAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<long> fundAccountId{};
  shared_ptr<string> thresholdAmount{};

  SetFundAccountLowAvailableAmountAlarmRequest() {}

  explicit SetFundAccountLowAvailableAmountAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAccountId) {
      res["FundAccountId"] = boost::any(*fundAccountId);
    }
    if (thresholdAmount) {
      res["ThresholdAmount"] = boost::any(*thresholdAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAccountId") != m.end() && !m["FundAccountId"].empty()) {
      fundAccountId = make_shared<long>(boost::any_cast<long>(m["FundAccountId"]));
    }
    if (m.find("ThresholdAmount") != m.end() && !m["ThresholdAmount"].empty()) {
      thresholdAmount = make_shared<string>(boost::any_cast<string>(m["ThresholdAmount"]));
    }
  }


  virtual ~SetFundAccountLowAvailableAmountAlarmRequest() = default;
};
class SetFundAccountLowAvailableAmountAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<boost::any> metadata{};
  shared_ptr<string> requestId{};

  SetFundAccountLowAvailableAmountAlarmResponseBody() {}

  explicit SetFundAccountLowAvailableAmountAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
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
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetFundAccountLowAvailableAmountAlarmResponseBody() = default;
};
class SetFundAccountLowAvailableAmountAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetFundAccountLowAvailableAmountAlarmResponseBody> body{};

  SetFundAccountLowAvailableAmountAlarmResponse() {}

  explicit SetFundAccountLowAvailableAmountAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetFundAccountLowAvailableAmountAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetFundAccountLowAvailableAmountAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~SetFundAccountLowAvailableAmountAlarmResponse() = default;
};
class SetSavingPlanUserDeductRuleRequestEcIdAccountIds : public Darabonba::Model {
public:
  shared_ptr<vector<long>> accountIds{};
  shared_ptr<string> ecId{};

  SetSavingPlanUserDeductRuleRequestEcIdAccountIds() {}

  explicit SetSavingPlanUserDeductRuleRequestEcIdAccountIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountIds) {
      res["AccountIds"] = boost::any(*accountIds);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountIds") != m.end() && !m["AccountIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AccountIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccountIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      accountIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
  }


  virtual ~SetSavingPlanUserDeductRuleRequestEcIdAccountIds() = default;
};
class SetSavingPlanUserDeductRuleRequestUserDeductRules : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> moduleCode{};
  shared_ptr<bool> skipDeduct{};

  SetSavingPlanUserDeductRuleRequestUserDeductRules() {}

  explicit SetSavingPlanUserDeductRuleRequestUserDeductRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (moduleCode) {
      res["ModuleCode"] = boost::any(*moduleCode);
    }
    if (skipDeduct) {
      res["SkipDeduct"] = boost::any(*skipDeduct);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ModuleCode") != m.end() && !m["ModuleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["ModuleCode"]));
    }
    if (m.find("SkipDeduct") != m.end() && !m["SkipDeduct"].empty()) {
      skipDeduct = make_shared<bool>(boost::any_cast<bool>(m["SkipDeduct"]));
    }
  }


  virtual ~SetSavingPlanUserDeductRuleRequestUserDeductRules() = default;
};
class SetSavingPlanUserDeductRuleRequest : public Darabonba::Model {
public:
  shared_ptr<vector<SetSavingPlanUserDeductRuleRequestEcIdAccountIds>> ecIdAccountIds{};
  shared_ptr<string> nbid{};
  shared_ptr<string> spnInstanceCode{};
  shared_ptr<vector<SetSavingPlanUserDeductRuleRequestUserDeductRules>> userDeductRules{};

  SetSavingPlanUserDeductRuleRequest() {}

  explicit SetSavingPlanUserDeductRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecIdAccountIds) {
      vector<boost::any> temp1;
      for(auto item1:*ecIdAccountIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcIdAccountIds"] = boost::any(temp1);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (spnInstanceCode) {
      res["SpnInstanceCode"] = boost::any(*spnInstanceCode);
    }
    if (userDeductRules) {
      vector<boost::any> temp1;
      for(auto item1:*userDeductRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserDeductRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      if (typeid(vector<boost::any>) == m["EcIdAccountIds"].type()) {
        vector<SetSavingPlanUserDeductRuleRequestEcIdAccountIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcIdAccountIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetSavingPlanUserDeductRuleRequestEcIdAccountIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecIdAccountIds = make_shared<vector<SetSavingPlanUserDeductRuleRequestEcIdAccountIds>>(expect1);
      }
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("SpnInstanceCode") != m.end() && !m["SpnInstanceCode"].empty()) {
      spnInstanceCode = make_shared<string>(boost::any_cast<string>(m["SpnInstanceCode"]));
    }
    if (m.find("UserDeductRules") != m.end() && !m["UserDeductRules"].empty()) {
      if (typeid(vector<boost::any>) == m["UserDeductRules"].type()) {
        vector<SetSavingPlanUserDeductRuleRequestUserDeductRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserDeductRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetSavingPlanUserDeductRuleRequestUserDeductRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userDeductRules = make_shared<vector<SetSavingPlanUserDeductRuleRequestUserDeductRules>>(expect1);
      }
    }
  }


  virtual ~SetSavingPlanUserDeductRuleRequest() = default;
};
class SetSavingPlanUserDeductRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ecIdAccountIdsShrink{};
  shared_ptr<string> nbid{};
  shared_ptr<string> spnInstanceCode{};
  shared_ptr<string> userDeductRulesShrink{};

  SetSavingPlanUserDeductRuleShrinkRequest() {}

  explicit SetSavingPlanUserDeductRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecIdAccountIdsShrink) {
      res["EcIdAccountIds"] = boost::any(*ecIdAccountIdsShrink);
    }
    if (nbid) {
      res["Nbid"] = boost::any(*nbid);
    }
    if (spnInstanceCode) {
      res["SpnInstanceCode"] = boost::any(*spnInstanceCode);
    }
    if (userDeductRulesShrink) {
      res["UserDeductRules"] = boost::any(*userDeductRulesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcIdAccountIds") != m.end() && !m["EcIdAccountIds"].empty()) {
      ecIdAccountIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcIdAccountIds"]));
    }
    if (m.find("Nbid") != m.end() && !m["Nbid"].empty()) {
      nbid = make_shared<string>(boost::any_cast<string>(m["Nbid"]));
    }
    if (m.find("SpnInstanceCode") != m.end() && !m["SpnInstanceCode"].empty()) {
      spnInstanceCode = make_shared<string>(boost::any_cast<string>(m["SpnInstanceCode"]));
    }
    if (m.find("UserDeductRules") != m.end() && !m["UserDeductRules"].empty()) {
      userDeductRulesShrink = make_shared<string>(boost::any_cast<string>(m["UserDeductRules"]));
    }
  }


  virtual ~SetSavingPlanUserDeductRuleShrinkRequest() = default;
};
class SetSavingPlanUserDeductRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  SetSavingPlanUserDeductRuleResponseBody() {}

  explicit SetSavingPlanUserDeductRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetSavingPlanUserDeductRuleResponseBody() = default;
};
class SetSavingPlanUserDeductRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetSavingPlanUserDeductRuleResponseBody> body{};

  SetSavingPlanUserDeductRuleResponse() {}

  explicit SetSavingPlanUserDeductRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetSavingPlanUserDeductRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetSavingPlanUserDeductRuleResponseBody>(model1);
      }
    }
  }


  virtual ~SetSavingPlanUserDeductRuleResponse() = default;
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
  AddCouponDeductTagResponse addCouponDeductTagWithOptions(shared_ptr<AddCouponDeductTagRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddCouponDeductTagResponse addCouponDeductTag(shared_ptr<AddCouponDeductTagRequest> request);
  CancelFundAccountLowAvailableAmountAlarmResponse cancelFundAccountLowAvailableAmountAlarmWithOptions(shared_ptr<CancelFundAccountLowAvailableAmountAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelFundAccountLowAvailableAmountAlarmResponse cancelFundAccountLowAvailableAmountAlarm(shared_ptr<CancelFundAccountLowAvailableAmountAlarmRequest> request);
  CreateFundAccountTransferResponse createFundAccountTransferWithOptions(shared_ptr<CreateFundAccountTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFundAccountTransferResponse createFundAccountTransfer(shared_ptr<CreateFundAccountTransferRequest> request);
  DeleteCouponDeductTagResponse deleteCouponDeductTagWithOptions(shared_ptr<DeleteCouponDeductTagRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCouponDeductTagResponse deleteCouponDeductTag(shared_ptr<DeleteCouponDeductTagRequest> request);
  DescribeCouponResponse describeCouponWithOptions(shared_ptr<DescribeCouponRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCouponResponse describeCoupon(shared_ptr<DescribeCouponRequest> request);
  DescribeCouponItemListResponse describeCouponItemListWithOptions(shared_ptr<DescribeCouponItemListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCouponItemListResponse describeCouponItemList(shared_ptr<DescribeCouponItemListRequest> request);
  GetFundAccountAvailableAmountResponse getFundAccountAvailableAmountWithOptions(shared_ptr<GetFundAccountAvailableAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFundAccountAvailableAmountResponse getFundAccountAvailableAmount(shared_ptr<GetFundAccountAvailableAmountRequest> request);
  GetFundAccountCanAllocateCreditAmountResponse getFundAccountCanAllocateCreditAmountWithOptions(shared_ptr<GetFundAccountCanAllocateCreditAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFundAccountCanAllocateCreditAmountResponse getFundAccountCanAllocateCreditAmount(shared_ptr<GetFundAccountCanAllocateCreditAmountRequest> request);
  GetFundAccountCanRecycleAmountResponse getFundAccountCanRecycleAmountWithOptions(shared_ptr<GetFundAccountCanRecycleAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFundAccountCanRecycleAmountResponse getFundAccountCanRecycleAmount(shared_ptr<GetFundAccountCanRecycleAmountRequest> request);
  GetFundAccountCanTransferAmountResponse getFundAccountCanTransferAmountWithOptions(shared_ptr<GetFundAccountCanTransferAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFundAccountCanTransferAmountResponse getFundAccountCanTransferAmount(shared_ptr<GetFundAccountCanTransferAmountRequest> request);
  GetFundAccountCanWithdrawAmountResponse getFundAccountCanWithdrawAmountWithOptions(shared_ptr<GetFundAccountCanWithdrawAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFundAccountCanWithdrawAmountResponse getFundAccountCanWithdrawAmount(shared_ptr<GetFundAccountCanWithdrawAmountRequest> request);
  GetFundAccountLowAvailableAmountAlarmResponse getFundAccountLowAvailableAmountAlarmWithOptions(shared_ptr<GetFundAccountLowAvailableAmountAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFundAccountLowAvailableAmountAlarmResponse getFundAccountLowAvailableAmountAlarm(shared_ptr<GetFundAccountLowAvailableAmountAlarmRequest> request);
  GetFundAccountTransactionDetailsResponse getFundAccountTransactionDetailsWithOptions(shared_ptr<GetFundAccountTransactionDetailsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFundAccountTransactionDetailsResponse getFundAccountTransactionDetails(shared_ptr<GetFundAccountTransactionDetailsRequest> request);
  ListCouponDeductTagResponse listCouponDeductTagWithOptions(shared_ptr<ListCouponDeductTagRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCouponDeductTagResponse listCouponDeductTag(shared_ptr<ListCouponDeductTagRequest> request);
  ListFundAccountResponse listFundAccountWithOptions(shared_ptr<ListFundAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFundAccountResponse listFundAccount(shared_ptr<ListFundAccountRequest> request);
  ListFundAccountPayRelationResponse listFundAccountPayRelationWithOptions(shared_ptr<ListFundAccountPayRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFundAccountPayRelationResponse listFundAccountPayRelation(shared_ptr<ListFundAccountPayRelationRequest> request);
  SetFundAccountCreditAmountResponse setFundAccountCreditAmountWithOptions(shared_ptr<SetFundAccountCreditAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetFundAccountCreditAmountResponse setFundAccountCreditAmount(shared_ptr<SetFundAccountCreditAmountRequest> request);
  SetFundAccountLowAvailableAmountAlarmResponse setFundAccountLowAvailableAmountAlarmWithOptions(shared_ptr<SetFundAccountLowAvailableAmountAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetFundAccountLowAvailableAmountAlarmResponse setFundAccountLowAvailableAmountAlarm(shared_ptr<SetFundAccountLowAvailableAmountAlarmRequest> request);
  SetSavingPlanUserDeductRuleResponse setSavingPlanUserDeductRuleWithOptions(shared_ptr<SetSavingPlanUserDeductRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetSavingPlanUserDeductRuleResponse setSavingPlanUserDeductRule(shared_ptr<SetSavingPlanUserDeductRuleRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_BssOpenApi20230930

#endif
