// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_RETAILADVQA20230417_H_
#define ALIBABACLOUD_RETAILADVQA20230417_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Retailadvqa20230417 {
class AddMemberBasicInfoRequestBodyChannels : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelCode{};
  shared_ptr<string> channelOpenId{};
  shared_ptr<string> channelUnionId{};
  shared_ptr<string> scene{};

  AddMemberBasicInfoRequestBodyChannels() {}

  explicit AddMemberBasicInfoRequestBodyChannels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelCode) {
      res["ChannelCode"] = boost::any(*channelCode);
    }
    if (channelOpenId) {
      res["ChannelOpenId"] = boost::any(*channelOpenId);
    }
    if (channelUnionId) {
      res["ChannelUnionId"] = boost::any(*channelUnionId);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelCode") != m.end() && !m["ChannelCode"].empty()) {
      channelCode = make_shared<string>(boost::any_cast<string>(m["ChannelCode"]));
    }
    if (m.find("ChannelOpenId") != m.end() && !m["ChannelOpenId"].empty()) {
      channelOpenId = make_shared<string>(boost::any_cast<string>(m["ChannelOpenId"]));
    }
    if (m.find("ChannelUnionId") != m.end() && !m["ChannelUnionId"].empty()) {
      channelUnionId = make_shared<string>(boost::any_cast<string>(m["ChannelUnionId"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
  }


  virtual ~AddMemberBasicInfoRequestBodyChannels() = default;
};
class AddMemberBasicInfoRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> area{};
  shared_ptr<string> avatar{};
  shared_ptr<string> birthday{};
  shared_ptr<vector<AddMemberBasicInfoRequestBodyChannels>> channels{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> email{};
  shared_ptr<string> extra{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> memberName{};
  shared_ptr<string> memberNickName{};
  shared_ptr<string> mixMobile{};
  shared_ptr<string> mobile{};
  shared_ptr<string> openMerchantId{};
  shared_ptr<string> platFormType{};
  shared_ptr<string> province{};
  shared_ptr<string> sex{};

  AddMemberBasicInfoRequestBody() {}

  explicit AddMemberBasicInfoRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (area) {
      res["Area"] = boost::any(*area);
    }
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (birthday) {
      res["Birthday"] = boost::any(*birthday);
    }
    if (channels) {
      vector<boost::any> temp1;
      for(auto item1:*channels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Channels"] = boost::any(temp1);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (memberNickName) {
      res["MemberNickName"] = boost::any(*memberNickName);
    }
    if (mixMobile) {
      res["MixMobile"] = boost::any(*mixMobile);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (openMerchantId) {
      res["OpenMerchantId"] = boost::any(*openMerchantId);
    }
    if (platFormType) {
      res["PlatFormType"] = boost::any(*platFormType);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (sex) {
      res["Sex"] = boost::any(*sex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Area") != m.end() && !m["Area"].empty()) {
      area = make_shared<string>(boost::any_cast<string>(m["Area"]));
    }
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("Birthday") != m.end() && !m["Birthday"].empty()) {
      birthday = make_shared<string>(boost::any_cast<string>(m["Birthday"]));
    }
    if (m.find("Channels") != m.end() && !m["Channels"].empty()) {
      if (typeid(vector<boost::any>) == m["Channels"].type()) {
        vector<AddMemberBasicInfoRequestBodyChannels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Channels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddMemberBasicInfoRequestBodyChannels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        channels = make_shared<vector<AddMemberBasicInfoRequestBodyChannels>>(expect1);
      }
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("MemberNickName") != m.end() && !m["MemberNickName"].empty()) {
      memberNickName = make_shared<string>(boost::any_cast<string>(m["MemberNickName"]));
    }
    if (m.find("MixMobile") != m.end() && !m["MixMobile"].empty()) {
      mixMobile = make_shared<string>(boost::any_cast<string>(m["MixMobile"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("OpenMerchantId") != m.end() && !m["OpenMerchantId"].empty()) {
      openMerchantId = make_shared<string>(boost::any_cast<string>(m["OpenMerchantId"]));
    }
    if (m.find("PlatFormType") != m.end() && !m["PlatFormType"].empty()) {
      platFormType = make_shared<string>(boost::any_cast<string>(m["PlatFormType"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("Sex") != m.end() && !m["Sex"].empty()) {
      sex = make_shared<string>(boost::any_cast<string>(m["Sex"]));
    }
  }


  virtual ~AddMemberBasicInfoRequestBody() = default;
};
class AddMemberBasicInfoRequest : public Darabonba::Model {
public:
  shared_ptr<AddMemberBasicInfoRequestBody> body{};

  AddMemberBasicInfoRequest() {}

  explicit AddMemberBasicInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddMemberBasicInfoRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddMemberBasicInfoRequestBody>(model1);
      }
    }
  }


  virtual ~AddMemberBasicInfoRequest() = default;
};
class AddMemberBasicInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyShrink{};

  AddMemberBasicInfoShrinkRequest() {}

  explicit AddMemberBasicInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyShrink) {
      res["body"] = boost::any(*bodyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      bodyShrink = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~AddMemberBasicInfoShrinkRequest() = default;
};
class AddMemberBasicInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> outerMemberId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddMemberBasicInfoResponseBody() {}

  explicit AddMemberBasicInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (outerMemberId) {
      res["OuterMemberId"] = boost::any(*outerMemberId);
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
    if (m.find("OuterMemberId") != m.end() && !m["OuterMemberId"].empty()) {
      outerMemberId = make_shared<string>(boost::any_cast<string>(m["OuterMemberId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddMemberBasicInfoResponseBody() = default;
};
class AddMemberBasicInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddMemberBasicInfoResponseBody> body{};

  AddMemberBasicInfoResponse() {}

  explicit AddMemberBasicInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddMemberBasicInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddMemberBasicInfoResponseBody>(model1);
      }
    }
  }


  virtual ~AddMemberBasicInfoResponse() = default;
};
class BatchSaveOrderPopRequestOrdersSubOrderModelList : public Darabonba::Model {
public:
  shared_ptr<string> feature{};
  shared_ptr<string> openSubOrderId{};
  shared_ptr<string> orderPayment{};
  shared_ptr<string> outProductId{};
  shared_ptr<string> productAmount{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<string> refundStatus{};
  shared_ptr<string> status{};
  shared_ptr<string> totalFee{};

  BatchSaveOrderPopRequestOrdersSubOrderModelList() {}

  explicit BatchSaveOrderPopRequestOrdersSubOrderModelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feature) {
      res["Feature"] = boost::any(*feature);
    }
    if (openSubOrderId) {
      res["OpenSubOrderId"] = boost::any(*openSubOrderId);
    }
    if (orderPayment) {
      res["OrderPayment"] = boost::any(*orderPayment);
    }
    if (outProductId) {
      res["OutProductId"] = boost::any(*outProductId);
    }
    if (productAmount) {
      res["ProductAmount"] = boost::any(*productAmount);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (refundStatus) {
      res["RefundStatus"] = boost::any(*refundStatus);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalFee) {
      res["TotalFee"] = boost::any(*totalFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Feature") != m.end() && !m["Feature"].empty()) {
      feature = make_shared<string>(boost::any_cast<string>(m["Feature"]));
    }
    if (m.find("OpenSubOrderId") != m.end() && !m["OpenSubOrderId"].empty()) {
      openSubOrderId = make_shared<string>(boost::any_cast<string>(m["OpenSubOrderId"]));
    }
    if (m.find("OrderPayment") != m.end() && !m["OrderPayment"].empty()) {
      orderPayment = make_shared<string>(boost::any_cast<string>(m["OrderPayment"]));
    }
    if (m.find("OutProductId") != m.end() && !m["OutProductId"].empty()) {
      outProductId = make_shared<string>(boost::any_cast<string>(m["OutProductId"]));
    }
    if (m.find("ProductAmount") != m.end() && !m["ProductAmount"].empty()) {
      productAmount = make_shared<string>(boost::any_cast<string>(m["ProductAmount"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("RefundStatus") != m.end() && !m["RefundStatus"].empty()) {
      refundStatus = make_shared<string>(boost::any_cast<string>(m["RefundStatus"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalFee") != m.end() && !m["TotalFee"].empty()) {
      totalFee = make_shared<string>(boost::any_cast<string>(m["TotalFee"]));
    }
  }


  virtual ~BatchSaveOrderPopRequestOrdersSubOrderModelList() = default;
};
class BatchSaveOrderPopRequestOrders : public Darabonba::Model {
public:
  shared_ptr<string> channelCode{};
  shared_ptr<string> channelOpenId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> feature{};
  shared_ptr<string> openMerchantId{};
  shared_ptr<string> openOrderId{};
  shared_ptr<string> orderCreateTime{};
  shared_ptr<string> orderPayment{};
  shared_ptr<string> payTime{};
  shared_ptr<string> platformType{};
  shared_ptr<string> shopId{};
  shared_ptr<string> status{};
  shared_ptr<vector<BatchSaveOrderPopRequestOrdersSubOrderModelList>> subOrderModelList{};
  shared_ptr<string> totalFee{};
  shared_ptr<string> buyerOpenUid{};

  BatchSaveOrderPopRequestOrders() {}

  explicit BatchSaveOrderPopRequestOrders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelCode) {
      res["ChannelCode"] = boost::any(*channelCode);
    }
    if (channelOpenId) {
      res["ChannelOpenId"] = boost::any(*channelOpenId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (feature) {
      res["Feature"] = boost::any(*feature);
    }
    if (openMerchantId) {
      res["OpenMerchantId"] = boost::any(*openMerchantId);
    }
    if (openOrderId) {
      res["OpenOrderId"] = boost::any(*openOrderId);
    }
    if (orderCreateTime) {
      res["OrderCreateTime"] = boost::any(*orderCreateTime);
    }
    if (orderPayment) {
      res["OrderPayment"] = boost::any(*orderPayment);
    }
    if (payTime) {
      res["PayTime"] = boost::any(*payTime);
    }
    if (platformType) {
      res["PlatformType"] = boost::any(*platformType);
    }
    if (shopId) {
      res["ShopId"] = boost::any(*shopId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subOrderModelList) {
      vector<boost::any> temp1;
      for(auto item1:*subOrderModelList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubOrderModelList"] = boost::any(temp1);
    }
    if (totalFee) {
      res["TotalFee"] = boost::any(*totalFee);
    }
    if (buyerOpenUid) {
      res["buyerOpenUid"] = boost::any(*buyerOpenUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelCode") != m.end() && !m["ChannelCode"].empty()) {
      channelCode = make_shared<string>(boost::any_cast<string>(m["ChannelCode"]));
    }
    if (m.find("ChannelOpenId") != m.end() && !m["ChannelOpenId"].empty()) {
      channelOpenId = make_shared<string>(boost::any_cast<string>(m["ChannelOpenId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Feature") != m.end() && !m["Feature"].empty()) {
      feature = make_shared<string>(boost::any_cast<string>(m["Feature"]));
    }
    if (m.find("OpenMerchantId") != m.end() && !m["OpenMerchantId"].empty()) {
      openMerchantId = make_shared<string>(boost::any_cast<string>(m["OpenMerchantId"]));
    }
    if (m.find("OpenOrderId") != m.end() && !m["OpenOrderId"].empty()) {
      openOrderId = make_shared<string>(boost::any_cast<string>(m["OpenOrderId"]));
    }
    if (m.find("OrderCreateTime") != m.end() && !m["OrderCreateTime"].empty()) {
      orderCreateTime = make_shared<string>(boost::any_cast<string>(m["OrderCreateTime"]));
    }
    if (m.find("OrderPayment") != m.end() && !m["OrderPayment"].empty()) {
      orderPayment = make_shared<string>(boost::any_cast<string>(m["OrderPayment"]));
    }
    if (m.find("PayTime") != m.end() && !m["PayTime"].empty()) {
      payTime = make_shared<string>(boost::any_cast<string>(m["PayTime"]));
    }
    if (m.find("PlatformType") != m.end() && !m["PlatformType"].empty()) {
      platformType = make_shared<string>(boost::any_cast<string>(m["PlatformType"]));
    }
    if (m.find("ShopId") != m.end() && !m["ShopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["ShopId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubOrderModelList") != m.end() && !m["SubOrderModelList"].empty()) {
      if (typeid(vector<boost::any>) == m["SubOrderModelList"].type()) {
        vector<BatchSaveOrderPopRequestOrdersSubOrderModelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubOrderModelList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchSaveOrderPopRequestOrdersSubOrderModelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subOrderModelList = make_shared<vector<BatchSaveOrderPopRequestOrdersSubOrderModelList>>(expect1);
      }
    }
    if (m.find("TotalFee") != m.end() && !m["TotalFee"].empty()) {
      totalFee = make_shared<string>(boost::any_cast<string>(m["TotalFee"]));
    }
    if (m.find("buyerOpenUid") != m.end() && !m["buyerOpenUid"].empty()) {
      buyerOpenUid = make_shared<string>(boost::any_cast<string>(m["buyerOpenUid"]));
    }
  }


  virtual ~BatchSaveOrderPopRequestOrders() = default;
};
class BatchSaveOrderPopRequest : public Darabonba::Model {
public:
  shared_ptr<vector<BatchSaveOrderPopRequestOrders>> orders{};

  BatchSaveOrderPopRequest() {}

  explicit BatchSaveOrderPopRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orders) {
      vector<boost::any> temp1;
      for(auto item1:*orders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Orders"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Orders") != m.end() && !m["Orders"].empty()) {
      if (typeid(vector<boost::any>) == m["Orders"].type()) {
        vector<BatchSaveOrderPopRequestOrders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Orders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchSaveOrderPopRequestOrders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orders = make_shared<vector<BatchSaveOrderPopRequestOrders>>(expect1);
      }
    }
  }


  virtual ~BatchSaveOrderPopRequest() = default;
};
class BatchSaveOrderPopShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> ordersShrink{};

  BatchSaveOrderPopShrinkRequest() {}

  explicit BatchSaveOrderPopShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ordersShrink) {
      res["Orders"] = boost::any(*ordersShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Orders") != m.end() && !m["Orders"].empty()) {
      ordersShrink = make_shared<string>(boost::any_cast<string>(m["Orders"]));
    }
  }


  virtual ~BatchSaveOrderPopShrinkRequest() = default;
};
class BatchSaveOrderPopResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchSaveOrderPopResponseBody() {}

  explicit BatchSaveOrderPopResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BatchSaveOrderPopResponseBody() = default;
};
class BatchSaveOrderPopResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchSaveOrderPopResponseBody> body{};

  BatchSaveOrderPopResponse() {}

  explicit BatchSaveOrderPopResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchSaveOrderPopResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchSaveOrderPopResponseBody>(model1);
      }
    }
  }


  virtual ~BatchSaveOrderPopResponse() = default;
};
class CalculateMemberLevelRequestBody : public Darabonba::Model {
public:
  shared_ptr<long> currentGrade{};
  shared_ptr<string> currentGradeName{};
  shared_ptr<string> memberId{};
  shared_ptr<string> openMerchantId{};
  shared_ptr<string> platformType{};
  shared_ptr<string> score{};
  shared_ptr<string> serialNo{};

  CalculateMemberLevelRequestBody() {}

  explicit CalculateMemberLevelRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentGrade) {
      res["CurrentGrade"] = boost::any(*currentGrade);
    }
    if (currentGradeName) {
      res["CurrentGradeName"] = boost::any(*currentGradeName);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (openMerchantId) {
      res["OpenMerchantId"] = boost::any(*openMerchantId);
    }
    if (platformType) {
      res["PlatformType"] = boost::any(*platformType);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentGrade") != m.end() && !m["CurrentGrade"].empty()) {
      currentGrade = make_shared<long>(boost::any_cast<long>(m["CurrentGrade"]));
    }
    if (m.find("CurrentGradeName") != m.end() && !m["CurrentGradeName"].empty()) {
      currentGradeName = make_shared<string>(boost::any_cast<string>(m["CurrentGradeName"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("OpenMerchantId") != m.end() && !m["OpenMerchantId"].empty()) {
      openMerchantId = make_shared<string>(boost::any_cast<string>(m["OpenMerchantId"]));
    }
    if (m.find("PlatformType") != m.end() && !m["PlatformType"].empty()) {
      platformType = make_shared<string>(boost::any_cast<string>(m["PlatformType"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
  }


  virtual ~CalculateMemberLevelRequestBody() = default;
};
class CalculateMemberLevelRequest : public Darabonba::Model {
public:
  shared_ptr<CalculateMemberLevelRequestBody> body{};

  CalculateMemberLevelRequest() {}

  explicit CalculateMemberLevelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        CalculateMemberLevelRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<CalculateMemberLevelRequestBody>(model1);
      }
    }
  }


  virtual ~CalculateMemberLevelRequest() = default;
};
class CalculateMemberLevelShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyShrink{};

  CalculateMemberLevelShrinkRequest() {}

  explicit CalculateMemberLevelShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyShrink) {
      res["Body"] = boost::any(*bodyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      bodyShrink = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
  }


  virtual ~CalculateMemberLevelShrinkRequest() = default;
};
class CalculateMemberLevelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> grade{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> outerMemberId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CalculateMemberLevelResponseBody() {}

  explicit CalculateMemberLevelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (grade) {
      res["Grade"] = boost::any(*grade);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (outerMemberId) {
      res["OuterMemberId"] = boost::any(*outerMemberId);
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
    if (m.find("Grade") != m.end() && !m["Grade"].empty()) {
      grade = make_shared<string>(boost::any_cast<string>(m["Grade"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OuterMemberId") != m.end() && !m["OuterMemberId"].empty()) {
      outerMemberId = make_shared<string>(boost::any_cast<string>(m["OuterMemberId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CalculateMemberLevelResponseBody() = default;
};
class CalculateMemberLevelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CalculateMemberLevelResponseBody> body{};

  CalculateMemberLevelResponse() {}

  explicit CalculateMemberLevelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CalculateMemberLevelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CalculateMemberLevelResponseBody>(model1);
      }
    }
  }


  virtual ~CalculateMemberLevelResponse() = default;
};
class EditMemberBasicInfoRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> area{};
  shared_ptr<string> avatar{};
  shared_ptr<string> birthday{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> email{};
  shared_ptr<string> memberName{};
  shared_ptr<string> memberNickName{};
  shared_ptr<string> mobile{};
  shared_ptr<string> openMerchantId{};
  shared_ptr<string> platformType{};
  shared_ptr<string> province{};
  shared_ptr<string> sex{};

  EditMemberBasicInfoRequestBody() {}

  explicit EditMemberBasicInfoRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (area) {
      res["Area"] = boost::any(*area);
    }
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (birthday) {
      res["Birthday"] = boost::any(*birthday);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (memberNickName) {
      res["MemberNickName"] = boost::any(*memberNickName);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (openMerchantId) {
      res["OpenMerchantId"] = boost::any(*openMerchantId);
    }
    if (platformType) {
      res["PlatformType"] = boost::any(*platformType);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (sex) {
      res["Sex"] = boost::any(*sex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Area") != m.end() && !m["Area"].empty()) {
      area = make_shared<string>(boost::any_cast<string>(m["Area"]));
    }
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("Birthday") != m.end() && !m["Birthday"].empty()) {
      birthday = make_shared<string>(boost::any_cast<string>(m["Birthday"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("MemberNickName") != m.end() && !m["MemberNickName"].empty()) {
      memberNickName = make_shared<string>(boost::any_cast<string>(m["MemberNickName"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("OpenMerchantId") != m.end() && !m["OpenMerchantId"].empty()) {
      openMerchantId = make_shared<string>(boost::any_cast<string>(m["OpenMerchantId"]));
    }
    if (m.find("PlatformType") != m.end() && !m["PlatformType"].empty()) {
      platformType = make_shared<string>(boost::any_cast<string>(m["PlatformType"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("Sex") != m.end() && !m["Sex"].empty()) {
      sex = make_shared<string>(boost::any_cast<string>(m["Sex"]));
    }
  }


  virtual ~EditMemberBasicInfoRequestBody() = default;
};
class EditMemberBasicInfoRequest : public Darabonba::Model {
public:
  shared_ptr<EditMemberBasicInfoRequestBody> body{};

  EditMemberBasicInfoRequest() {}

  explicit EditMemberBasicInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      if (typeid(map<string, boost::any>) == m["Body"].type()) {
        EditMemberBasicInfoRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Body"]));
        body = make_shared<EditMemberBasicInfoRequestBody>(model1);
      }
    }
  }


  virtual ~EditMemberBasicInfoRequest() = default;
};
class EditMemberBasicInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyShrink{};

  EditMemberBasicInfoShrinkRequest() {}

  explicit EditMemberBasicInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyShrink) {
      res["Body"] = boost::any(*bodyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      bodyShrink = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
  }


  virtual ~EditMemberBasicInfoShrinkRequest() = default;
};
class EditMemberBasicInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EditMemberBasicInfoResponseBody() {}

  explicit EditMemberBasicInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
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


  virtual ~EditMemberBasicInfoResponseBody() = default;
};
class EditMemberBasicInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EditMemberBasicInfoResponseBody> body{};

  EditMemberBasicInfoResponse() {}

  explicit EditMemberBasicInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EditMemberBasicInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EditMemberBasicInfoResponseBody>(model1);
      }
    }
  }


  virtual ~EditMemberBasicInfoResponse() = default;
};
class MemberAccountDetailPageQueryRequestBody : public Darabonba::Model {
public:
  shared_ptr<long> accountType{};
  shared_ptr<string> endTime{};
  shared_ptr<string> openMerchantId{};
  shared_ptr<string> outerMemberId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> platFormType{};
  shared_ptr<string> startTime{};

  MemberAccountDetailPageQueryRequestBody() {}

  explicit MemberAccountDetailPageQueryRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (openMerchantId) {
      res["OpenMerchantId"] = boost::any(*openMerchantId);
    }
    if (outerMemberId) {
      res["OuterMemberId"] = boost::any(*outerMemberId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (platFormType) {
      res["PlatFormType"] = boost::any(*platFormType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<long>(boost::any_cast<long>(m["AccountType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OpenMerchantId") != m.end() && !m["OpenMerchantId"].empty()) {
      openMerchantId = make_shared<string>(boost::any_cast<string>(m["OpenMerchantId"]));
    }
    if (m.find("OuterMemberId") != m.end() && !m["OuterMemberId"].empty()) {
      outerMemberId = make_shared<string>(boost::any_cast<string>(m["OuterMemberId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PlatFormType") != m.end() && !m["PlatFormType"].empty()) {
      platFormType = make_shared<string>(boost::any_cast<string>(m["PlatFormType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~MemberAccountDetailPageQueryRequestBody() = default;
};
class MemberAccountDetailPageQueryRequest : public Darabonba::Model {
public:
  shared_ptr<MemberAccountDetailPageQueryRequestBody> body{};

  MemberAccountDetailPageQueryRequest() {}

  explicit MemberAccountDetailPageQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MemberAccountDetailPageQueryRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MemberAccountDetailPageQueryRequestBody>(model1);
      }
    }
  }


  virtual ~MemberAccountDetailPageQueryRequest() = default;
};
class MemberAccountDetailPageQueryShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyShrink{};

  MemberAccountDetailPageQueryShrinkRequest() {}

  explicit MemberAccountDetailPageQueryShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyShrink) {
      res["body"] = boost::any(*bodyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      bodyShrink = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~MemberAccountDetailPageQueryShrinkRequest() = default;
};
class MemberAccountDetailPageQueryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountBalance{};
  shared_ptr<long> accountType{};
  shared_ptr<string> activityType{};
  shared_ptr<string> channelCode{};
  shared_ptr<string> detailValue{};
  shared_ptr<string> extra{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> openMerchantId{};
  shared_ptr<string> operateType{};
  shared_ptr<string> outerMemberId{};
  shared_ptr<string> remark{};

  MemberAccountDetailPageQueryResponseBodyData() {}

  explicit MemberAccountDetailPageQueryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountBalance) {
      res["AccountBalance"] = boost::any(*accountBalance);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (activityType) {
      res["ActivityType"] = boost::any(*activityType);
    }
    if (channelCode) {
      res["ChannelCode"] = boost::any(*channelCode);
    }
    if (detailValue) {
      res["DetailValue"] = boost::any(*detailValue);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (openMerchantId) {
      res["OpenMerchantId"] = boost::any(*openMerchantId);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (outerMemberId) {
      res["OuterMemberId"] = boost::any(*outerMemberId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountBalance") != m.end() && !m["AccountBalance"].empty()) {
      accountBalance = make_shared<string>(boost::any_cast<string>(m["AccountBalance"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<long>(boost::any_cast<long>(m["AccountType"]));
    }
    if (m.find("ActivityType") != m.end() && !m["ActivityType"].empty()) {
      activityType = make_shared<string>(boost::any_cast<string>(m["ActivityType"]));
    }
    if (m.find("ChannelCode") != m.end() && !m["ChannelCode"].empty()) {
      channelCode = make_shared<string>(boost::any_cast<string>(m["ChannelCode"]));
    }
    if (m.find("DetailValue") != m.end() && !m["DetailValue"].empty()) {
      detailValue = make_shared<string>(boost::any_cast<string>(m["DetailValue"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("OpenMerchantId") != m.end() && !m["OpenMerchantId"].empty()) {
      openMerchantId = make_shared<string>(boost::any_cast<string>(m["OpenMerchantId"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("OuterMemberId") != m.end() && !m["OuterMemberId"].empty()) {
      outerMemberId = make_shared<string>(boost::any_cast<string>(m["OuterMemberId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~MemberAccountDetailPageQueryResponseBodyData() = default;
};
class MemberAccountDetailPageQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<MemberAccountDetailPageQueryResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<long> totalCount{};

  MemberAccountDetailPageQueryResponseBody() {}

  explicit MemberAccountDetailPageQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<MemberAccountDetailPageQueryResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            MemberAccountDetailPageQueryResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<MemberAccountDetailPageQueryResponseBodyData>>(expect1);
      }
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
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~MemberAccountDetailPageQueryResponseBody() = default;
};
class MemberAccountDetailPageQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MemberAccountDetailPageQueryResponseBody> body{};

  MemberAccountDetailPageQueryResponse() {}

  explicit MemberAccountDetailPageQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MemberAccountDetailPageQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MemberAccountDetailPageQueryResponseBody>(model1);
      }
    }
  }


  virtual ~MemberAccountDetailPageQueryResponse() = default;
};
class MemberPointChangeRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> accountType{};
  shared_ptr<string> channelCode{};
  shared_ptr<string> extra{};
  shared_ptr<string> openMerchantId{};
  shared_ptr<string> operateType{};
  shared_ptr<string> outerMemberId{};
  shared_ptr<string> platFormType{};
  shared_ptr<string> quantity{};
  shared_ptr<string> serialNo{};

  MemberPointChangeRequestBody() {}

  explicit MemberPointChangeRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (channelCode) {
      res["ChannelCode"] = boost::any(*channelCode);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (openMerchantId) {
      res["OpenMerchantId"] = boost::any(*openMerchantId);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (outerMemberId) {
      res["OuterMemberId"] = boost::any(*outerMemberId);
    }
    if (platFormType) {
      res["PlatFormType"] = boost::any(*platFormType);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("ChannelCode") != m.end() && !m["ChannelCode"].empty()) {
      channelCode = make_shared<string>(boost::any_cast<string>(m["ChannelCode"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("OpenMerchantId") != m.end() && !m["OpenMerchantId"].empty()) {
      openMerchantId = make_shared<string>(boost::any_cast<string>(m["OpenMerchantId"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("OuterMemberId") != m.end() && !m["OuterMemberId"].empty()) {
      outerMemberId = make_shared<string>(boost::any_cast<string>(m["OuterMemberId"]));
    }
    if (m.find("PlatFormType") != m.end() && !m["PlatFormType"].empty()) {
      platFormType = make_shared<string>(boost::any_cast<string>(m["PlatFormType"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<string>(boost::any_cast<string>(m["Quantity"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
  }


  virtual ~MemberPointChangeRequestBody() = default;
};
class MemberPointChangeRequest : public Darabonba::Model {
public:
  shared_ptr<MemberPointChangeRequestBody> body{};

  MemberPointChangeRequest() {}

  explicit MemberPointChangeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MemberPointChangeRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MemberPointChangeRequestBody>(model1);
      }
    }
  }


  virtual ~MemberPointChangeRequest() = default;
};
class MemberPointChangeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyShrink{};

  MemberPointChangeShrinkRequest() {}

  explicit MemberPointChangeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyShrink) {
      res["body"] = boost::any(*bodyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      bodyShrink = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~MemberPointChangeShrinkRequest() = default;
};
class MemberPointChangeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accountBalance{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> levelName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  MemberPointChangeResponseBody() {}

  explicit MemberPointChangeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountBalance) {
      res["AccountBalance"] = boost::any(*accountBalance);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (levelName) {
      res["LevelName"] = boost::any(*levelName);
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
    if (m.find("AccountBalance") != m.end() && !m["AccountBalance"].empty()) {
      accountBalance = make_shared<string>(boost::any_cast<string>(m["AccountBalance"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LevelName") != m.end() && !m["LevelName"].empty()) {
      levelName = make_shared<string>(boost::any_cast<string>(m["LevelName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~MemberPointChangeResponseBody() = default;
};
class MemberPointChangeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MemberPointChangeResponseBody> body{};

  MemberPointChangeResponse() {}

  explicit MemberPointChangeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MemberPointChangeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MemberPointChangeResponseBody>(model1);
      }
    }
  }


  virtual ~MemberPointChangeResponse() = default;
};
class QueryMemberBasicInfoRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> channelCode{};
  shared_ptr<string> channelOpenId{};
  shared_ptr<string> mobile{};
  shared_ptr<string> openMerchantId{};
  shared_ptr<string> outerMemberId{};
  shared_ptr<string> platFormType{};
  shared_ptr<string> type{};

  QueryMemberBasicInfoRequestBody() {}

  explicit QueryMemberBasicInfoRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelCode) {
      res["ChannelCode"] = boost::any(*channelCode);
    }
    if (channelOpenId) {
      res["ChannelOpenId"] = boost::any(*channelOpenId);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (openMerchantId) {
      res["OpenMerchantId"] = boost::any(*openMerchantId);
    }
    if (outerMemberId) {
      res["OuterMemberId"] = boost::any(*outerMemberId);
    }
    if (platFormType) {
      res["PlatFormType"] = boost::any(*platFormType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelCode") != m.end() && !m["ChannelCode"].empty()) {
      channelCode = make_shared<string>(boost::any_cast<string>(m["ChannelCode"]));
    }
    if (m.find("ChannelOpenId") != m.end() && !m["ChannelOpenId"].empty()) {
      channelOpenId = make_shared<string>(boost::any_cast<string>(m["ChannelOpenId"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("OpenMerchantId") != m.end() && !m["OpenMerchantId"].empty()) {
      openMerchantId = make_shared<string>(boost::any_cast<string>(m["OpenMerchantId"]));
    }
    if (m.find("OuterMemberId") != m.end() && !m["OuterMemberId"].empty()) {
      outerMemberId = make_shared<string>(boost::any_cast<string>(m["OuterMemberId"]));
    }
    if (m.find("PlatFormType") != m.end() && !m["PlatFormType"].empty()) {
      platFormType = make_shared<string>(boost::any_cast<string>(m["PlatFormType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~QueryMemberBasicInfoRequestBody() = default;
};
class QueryMemberBasicInfoRequest : public Darabonba::Model {
public:
  shared_ptr<QueryMemberBasicInfoRequestBody> body{};

  QueryMemberBasicInfoRequest() {}

  explicit QueryMemberBasicInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryMemberBasicInfoRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMemberBasicInfoRequestBody>(model1);
      }
    }
  }


  virtual ~QueryMemberBasicInfoRequest() = default;
};
class QueryMemberBasicInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyShrink{};

  QueryMemberBasicInfoShrinkRequest() {}

  explicit QueryMemberBasicInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyShrink) {
      res["body"] = boost::any(*bodyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      bodyShrink = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~QueryMemberBasicInfoShrinkRequest() = default;
};
class QueryMemberBasicInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> area{};
  shared_ptr<string> avatar{};
  shared_ptr<string> birthday{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> email{};
  shared_ptr<string> extra{};
  shared_ptr<string> levelName{};
  shared_ptr<string> levelNum{};
  shared_ptr<string> memberName{};
  shared_ptr<string> memberNickName{};
  shared_ptr<string> mobile{};
  shared_ptr<string> nearExpiredScore{};
  shared_ptr<string> openMerchantId{};
  shared_ptr<string> outerMemberId{};
  shared_ptr<string> points{};
  shared_ptr<string> province{};
  shared_ptr<string> score{};
  shared_ptr<string> sex{};

  QueryMemberBasicInfoResponseBodyData() {}

  explicit QueryMemberBasicInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (area) {
      res["Area"] = boost::any(*area);
    }
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (birthday) {
      res["Birthday"] = boost::any(*birthday);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (levelName) {
      res["LevelName"] = boost::any(*levelName);
    }
    if (levelNum) {
      res["LevelNum"] = boost::any(*levelNum);
    }
    if (memberName) {
      res["MemberName"] = boost::any(*memberName);
    }
    if (memberNickName) {
      res["MemberNickName"] = boost::any(*memberNickName);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (nearExpiredScore) {
      res["NearExpiredScore"] = boost::any(*nearExpiredScore);
    }
    if (openMerchantId) {
      res["OpenMerchantId"] = boost::any(*openMerchantId);
    }
    if (outerMemberId) {
      res["OuterMemberId"] = boost::any(*outerMemberId);
    }
    if (points) {
      res["Points"] = boost::any(*points);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (sex) {
      res["Sex"] = boost::any(*sex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Area") != m.end() && !m["Area"].empty()) {
      area = make_shared<string>(boost::any_cast<string>(m["Area"]));
    }
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("Birthday") != m.end() && !m["Birthday"].empty()) {
      birthday = make_shared<string>(boost::any_cast<string>(m["Birthday"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("LevelName") != m.end() && !m["LevelName"].empty()) {
      levelName = make_shared<string>(boost::any_cast<string>(m["LevelName"]));
    }
    if (m.find("LevelNum") != m.end() && !m["LevelNum"].empty()) {
      levelNum = make_shared<string>(boost::any_cast<string>(m["LevelNum"]));
    }
    if (m.find("MemberName") != m.end() && !m["MemberName"].empty()) {
      memberName = make_shared<string>(boost::any_cast<string>(m["MemberName"]));
    }
    if (m.find("MemberNickName") != m.end() && !m["MemberNickName"].empty()) {
      memberNickName = make_shared<string>(boost::any_cast<string>(m["MemberNickName"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("NearExpiredScore") != m.end() && !m["NearExpiredScore"].empty()) {
      nearExpiredScore = make_shared<string>(boost::any_cast<string>(m["NearExpiredScore"]));
    }
    if (m.find("OpenMerchantId") != m.end() && !m["OpenMerchantId"].empty()) {
      openMerchantId = make_shared<string>(boost::any_cast<string>(m["OpenMerchantId"]));
    }
    if (m.find("OuterMemberId") != m.end() && !m["OuterMemberId"].empty()) {
      outerMemberId = make_shared<string>(boost::any_cast<string>(m["OuterMemberId"]));
    }
    if (m.find("Points") != m.end() && !m["Points"].empty()) {
      points = make_shared<string>(boost::any_cast<string>(m["Points"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Sex") != m.end() && !m["Sex"].empty()) {
      sex = make_shared<string>(boost::any_cast<string>(m["Sex"]));
    }
  }


  virtual ~QueryMemberBasicInfoResponseBodyData() = default;
};
class QueryMemberBasicInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryMemberBasicInfoResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryMemberBasicInfoResponseBody() {}

  explicit QueryMemberBasicInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryMemberBasicInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryMemberBasicInfoResponseBodyData>(model1);
      }
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


  virtual ~QueryMemberBasicInfoResponseBody() = default;
};
class QueryMemberBasicInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMemberBasicInfoResponseBody> body{};

  QueryMemberBasicInfoResponse() {}

  explicit QueryMemberBasicInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryMemberBasicInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMemberBasicInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMemberBasicInfoResponse() = default;
};
class SyncCardInfoRequestBodyGifters : public Darabonba::Model {
public:
  shared_ptr<string> headerImg{};
  shared_ptr<string> id{};
  shared_ptr<string> nickname{};
  shared_ptr<string> openId{};
  shared_ptr<string> phone{};

  SyncCardInfoRequestBodyGifters() {}

  explicit SyncCardInfoRequestBodyGifters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headerImg) {
      res["HeaderImg"] = boost::any(*headerImg);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (nickname) {
      res["Nickname"] = boost::any(*nickname);
    }
    if (openId) {
      res["OpenId"] = boost::any(*openId);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HeaderImg") != m.end() && !m["HeaderImg"].empty()) {
      headerImg = make_shared<string>(boost::any_cast<string>(m["HeaderImg"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Nickname") != m.end() && !m["Nickname"].empty()) {
      nickname = make_shared<string>(boost::any_cast<string>(m["Nickname"]));
    }
    if (m.find("OpenId") != m.end() && !m["OpenId"].empty()) {
      openId = make_shared<string>(boost::any_cast<string>(m["OpenId"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
  }


  virtual ~SyncCardInfoRequestBodyGifters() = default;
};
class SyncCardInfoRequestBodyPresentDetail : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> itemId{};
  shared_ptr<string> name{};
  shared_ptr<double> price{};
  shared_ptr<string> skuId{};

  SyncCardInfoRequestBodyPresentDetail() {}

  explicit SyncCardInfoRequestBodyPresentDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["Price"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
  }


  virtual ~SyncCardInfoRequestBodyPresentDetail() = default;
};
class SyncCardInfoRequestBodyRecipient : public Darabonba::Model {
public:
  shared_ptr<string> headerImg{};
  shared_ptr<string> id{};
  shared_ptr<string> nickname{};
  shared_ptr<string> openId{};
  shared_ptr<string> phone{};

  SyncCardInfoRequestBodyRecipient() {}

  explicit SyncCardInfoRequestBodyRecipient(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headerImg) {
      res["HeaderImg"] = boost::any(*headerImg);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (nickname) {
      res["Nickname"] = boost::any(*nickname);
    }
    if (openId) {
      res["OpenId"] = boost::any(*openId);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HeaderImg") != m.end() && !m["HeaderImg"].empty()) {
      headerImg = make_shared<string>(boost::any_cast<string>(m["HeaderImg"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Nickname") != m.end() && !m["Nickname"].empty()) {
      nickname = make_shared<string>(boost::any_cast<string>(m["Nickname"]));
    }
    if (m.find("OpenId") != m.end() && !m["OpenId"].empty()) {
      openId = make_shared<string>(boost::any_cast<string>(m["OpenId"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
  }


  virtual ~SyncCardInfoRequestBodyRecipient() = default;
};
class SyncCardInfoRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> buyerId{};
  shared_ptr<string> extra{};
  shared_ptr<SyncCardInfoRequestBodyGifters> gifters{};
  shared_ptr<string> occurredAt{};
  shared_ptr<string> openMerchantId{};
  shared_ptr<string> orderId{};
  shared_ptr<vector<SyncCardInfoRequestBodyPresentDetail>> presentDetail{};
  shared_ptr<string> receivedAt{};
  shared_ptr<SyncCardInfoRequestBodyRecipient> recipient{};
  shared_ptr<string> status{};
  shared_ptr<string> theme{};
  shared_ptr<string> transferId{};
  shared_ptr<string> transferredAt{};

  SyncCardInfoRequestBody() {}

  explicit SyncCardInfoRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyerId) {
      res["BuyerId"] = boost::any(*buyerId);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (gifters) {
      res["Gifters"] = gifters ? boost::any(gifters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (occurredAt) {
      res["OccurredAt"] = boost::any(*occurredAt);
    }
    if (openMerchantId) {
      res["OpenMerchantId"] = boost::any(*openMerchantId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (presentDetail) {
      vector<boost::any> temp1;
      for(auto item1:*presentDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PresentDetail"] = boost::any(temp1);
    }
    if (receivedAt) {
      res["ReceivedAt"] = boost::any(*receivedAt);
    }
    if (recipient) {
      res["Recipient"] = recipient ? boost::any(recipient->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (theme) {
      res["Theme"] = boost::any(*theme);
    }
    if (transferId) {
      res["TransferId"] = boost::any(*transferId);
    }
    if (transferredAt) {
      res["TransferredAt"] = boost::any(*transferredAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyerId") != m.end() && !m["BuyerId"].empty()) {
      buyerId = make_shared<string>(boost::any_cast<string>(m["BuyerId"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("Gifters") != m.end() && !m["Gifters"].empty()) {
      if (typeid(map<string, boost::any>) == m["Gifters"].type()) {
        SyncCardInfoRequestBodyGifters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Gifters"]));
        gifters = make_shared<SyncCardInfoRequestBodyGifters>(model1);
      }
    }
    if (m.find("OccurredAt") != m.end() && !m["OccurredAt"].empty()) {
      occurredAt = make_shared<string>(boost::any_cast<string>(m["OccurredAt"]));
    }
    if (m.find("OpenMerchantId") != m.end() && !m["OpenMerchantId"].empty()) {
      openMerchantId = make_shared<string>(boost::any_cast<string>(m["OpenMerchantId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PresentDetail") != m.end() && !m["PresentDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["PresentDetail"].type()) {
        vector<SyncCardInfoRequestBodyPresentDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PresentDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SyncCardInfoRequestBodyPresentDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        presentDetail = make_shared<vector<SyncCardInfoRequestBodyPresentDetail>>(expect1);
      }
    }
    if (m.find("ReceivedAt") != m.end() && !m["ReceivedAt"].empty()) {
      receivedAt = make_shared<string>(boost::any_cast<string>(m["ReceivedAt"]));
    }
    if (m.find("Recipient") != m.end() && !m["Recipient"].empty()) {
      if (typeid(map<string, boost::any>) == m["Recipient"].type()) {
        SyncCardInfoRequestBodyRecipient model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Recipient"]));
        recipient = make_shared<SyncCardInfoRequestBodyRecipient>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Theme") != m.end() && !m["Theme"].empty()) {
      theme = make_shared<string>(boost::any_cast<string>(m["Theme"]));
    }
    if (m.find("TransferId") != m.end() && !m["TransferId"].empty()) {
      transferId = make_shared<string>(boost::any_cast<string>(m["TransferId"]));
    }
    if (m.find("TransferredAt") != m.end() && !m["TransferredAt"].empty()) {
      transferredAt = make_shared<string>(boost::any_cast<string>(m["TransferredAt"]));
    }
  }


  virtual ~SyncCardInfoRequestBody() = default;
};
class SyncCardInfoRequest : public Darabonba::Model {
public:
  shared_ptr<SyncCardInfoRequestBody> body{};

  SyncCardInfoRequest() {}

  explicit SyncCardInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SyncCardInfoRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncCardInfoRequestBody>(model1);
      }
    }
  }


  virtual ~SyncCardInfoRequest() = default;
};
class SyncCardInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyShrink{};

  SyncCardInfoShrinkRequest() {}

  explicit SyncCardInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyShrink) {
      res["body"] = boost::any(*bodyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      bodyShrink = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~SyncCardInfoShrinkRequest() = default;
};
class SyncCardInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  SyncCardInfoResponseBody() {}

  explicit SyncCardInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
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


  virtual ~SyncCardInfoResponseBody() = default;
};
class SyncCardInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncCardInfoResponseBody> body{};

  SyncCardInfoResponse() {}

  explicit SyncCardInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SyncCardInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncCardInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SyncCardInfoResponse() = default;
};
class SyncMemberBehaviorInfoRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> actionDuration{};
  shared_ptr<string> actionEndDate{};
  shared_ptr<bool> actionResult{};
  shared_ptr<string> actionStartDate{};
  shared_ptr<string> actionSubType{};
  shared_ptr<string> actionType{};
  shared_ptr<string> extra{};
  shared_ptr<string> openMerchantId{};
  shared_ptr<string> outerMemberId{};
  shared_ptr<string> platFormType{};

  SyncMemberBehaviorInfoRequestBody() {}

  explicit SyncMemberBehaviorInfoRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionDuration) {
      res["ActionDuration"] = boost::any(*actionDuration);
    }
    if (actionEndDate) {
      res["ActionEndDate"] = boost::any(*actionEndDate);
    }
    if (actionResult) {
      res["ActionResult"] = boost::any(*actionResult);
    }
    if (actionStartDate) {
      res["ActionStartDate"] = boost::any(*actionStartDate);
    }
    if (actionSubType) {
      res["ActionSubType"] = boost::any(*actionSubType);
    }
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (openMerchantId) {
      res["OpenMerchantId"] = boost::any(*openMerchantId);
    }
    if (outerMemberId) {
      res["OuterMemberId"] = boost::any(*outerMemberId);
    }
    if (platFormType) {
      res["PlatFormType"] = boost::any(*platFormType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionDuration") != m.end() && !m["ActionDuration"].empty()) {
      actionDuration = make_shared<string>(boost::any_cast<string>(m["ActionDuration"]));
    }
    if (m.find("ActionEndDate") != m.end() && !m["ActionEndDate"].empty()) {
      actionEndDate = make_shared<string>(boost::any_cast<string>(m["ActionEndDate"]));
    }
    if (m.find("ActionResult") != m.end() && !m["ActionResult"].empty()) {
      actionResult = make_shared<bool>(boost::any_cast<bool>(m["ActionResult"]));
    }
    if (m.find("ActionStartDate") != m.end() && !m["ActionStartDate"].empty()) {
      actionStartDate = make_shared<string>(boost::any_cast<string>(m["ActionStartDate"]));
    }
    if (m.find("ActionSubType") != m.end() && !m["ActionSubType"].empty()) {
      actionSubType = make_shared<string>(boost::any_cast<string>(m["ActionSubType"]));
    }
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["Extra"]));
    }
    if (m.find("OpenMerchantId") != m.end() && !m["OpenMerchantId"].empty()) {
      openMerchantId = make_shared<string>(boost::any_cast<string>(m["OpenMerchantId"]));
    }
    if (m.find("OuterMemberId") != m.end() && !m["OuterMemberId"].empty()) {
      outerMemberId = make_shared<string>(boost::any_cast<string>(m["OuterMemberId"]));
    }
    if (m.find("PlatFormType") != m.end() && !m["PlatFormType"].empty()) {
      platFormType = make_shared<string>(boost::any_cast<string>(m["PlatFormType"]));
    }
  }


  virtual ~SyncMemberBehaviorInfoRequestBody() = default;
};
class SyncMemberBehaviorInfoRequest : public Darabonba::Model {
public:
  shared_ptr<SyncMemberBehaviorInfoRequestBody> body{};

  SyncMemberBehaviorInfoRequest() {}

  explicit SyncMemberBehaviorInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SyncMemberBehaviorInfoRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncMemberBehaviorInfoRequestBody>(model1);
      }
    }
  }


  virtual ~SyncMemberBehaviorInfoRequest() = default;
};
class SyncMemberBehaviorInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyShrink{};

  SyncMemberBehaviorInfoShrinkRequest() {}

  explicit SyncMemberBehaviorInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyShrink) {
      res["body"] = boost::any(*bodyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      bodyShrink = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~SyncMemberBehaviorInfoShrinkRequest() = default;
};
class SyncMemberBehaviorInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SyncMemberBehaviorInfoResponseBody() {}

  explicit SyncMemberBehaviorInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SyncMemberBehaviorInfoResponseBody() = default;
};
class SyncMemberBehaviorInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncMemberBehaviorInfoResponseBody> body{};

  SyncMemberBehaviorInfoResponse() {}

  explicit SyncMemberBehaviorInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SyncMemberBehaviorInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncMemberBehaviorInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SyncMemberBehaviorInfoResponse() = default;
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
  AddMemberBasicInfoResponse addMemberBasicInfoWithOptions(shared_ptr<AddMemberBasicInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddMemberBasicInfoResponse addMemberBasicInfo(shared_ptr<AddMemberBasicInfoRequest> request);
  BatchSaveOrderPopResponse batchSaveOrderPopWithOptions(shared_ptr<BatchSaveOrderPopRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchSaveOrderPopResponse batchSaveOrderPop(shared_ptr<BatchSaveOrderPopRequest> request);
  CalculateMemberLevelResponse calculateMemberLevelWithOptions(shared_ptr<CalculateMemberLevelRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CalculateMemberLevelResponse calculateMemberLevel(shared_ptr<CalculateMemberLevelRequest> request);
  EditMemberBasicInfoResponse editMemberBasicInfoWithOptions(shared_ptr<EditMemberBasicInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EditMemberBasicInfoResponse editMemberBasicInfo(shared_ptr<EditMemberBasicInfoRequest> request);
  MemberAccountDetailPageQueryResponse memberAccountDetailPageQueryWithOptions(shared_ptr<MemberAccountDetailPageQueryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MemberAccountDetailPageQueryResponse memberAccountDetailPageQuery(shared_ptr<MemberAccountDetailPageQueryRequest> request);
  MemberPointChangeResponse memberPointChangeWithOptions(shared_ptr<MemberPointChangeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MemberPointChangeResponse memberPointChange(shared_ptr<MemberPointChangeRequest> request);
  QueryMemberBasicInfoResponse queryMemberBasicInfoWithOptions(shared_ptr<QueryMemberBasicInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMemberBasicInfoResponse queryMemberBasicInfo(shared_ptr<QueryMemberBasicInfoRequest> request);
  SyncCardInfoResponse syncCardInfoWithOptions(shared_ptr<SyncCardInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncCardInfoResponse syncCardInfo(shared_ptr<SyncCardInfoRequest> request);
  SyncMemberBehaviorInfoResponse syncMemberBehaviorInfoWithOptions(shared_ptr<SyncMemberBehaviorInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncMemberBehaviorInfoResponse syncMemberBehaviorInfo(shared_ptr<SyncMemberBehaviorInfoRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Retailadvqa20230417

#endif
