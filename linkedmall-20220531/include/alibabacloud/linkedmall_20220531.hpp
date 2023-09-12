// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_LINKEDMALL20220531_H_
#define ALIBABACLOUD_LINKEDMALL20220531_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Linkedmall20220531 {
class ApplyCreateDistributionOrderRequestItemInfoLists : public Darabonba::Model {
public:
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> lmItemId{};
  shared_ptr<long> price{};
  shared_ptr<long> quantity{};
  shared_ptr<string> skuId{};

  ApplyCreateDistributionOrderRequestItemInfoLists() {}

  explicit ApplyCreateDistributionOrderRequestItemInfoLists(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["Price"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
  }


  virtual ~ApplyCreateDistributionOrderRequestItemInfoLists() = default;
};
class ApplyCreateDistributionOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> buyerId{};
  shared_ptr<string> deliveryAddress{};
  shared_ptr<string> distributionOutTradeId{};
  shared_ptr<string> distributionSupplierId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> extInfo{};
  shared_ptr<vector<ApplyCreateDistributionOrderRequestItemInfoLists>> itemInfoLists{};
  shared_ptr<string> tenantId{};

  ApplyCreateDistributionOrderRequest() {}

  explicit ApplyCreateDistributionOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyerId) {
      res["BuyerId"] = boost::any(*buyerId);
    }
    if (deliveryAddress) {
      res["DeliveryAddress"] = boost::any(*deliveryAddress);
    }
    if (distributionOutTradeId) {
      res["DistributionOutTradeId"] = boost::any(*distributionOutTradeId);
    }
    if (distributionSupplierId) {
      res["DistributionSupplierId"] = boost::any(*distributionSupplierId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (itemInfoLists) {
      vector<boost::any> temp1;
      for(auto item1:*itemInfoLists){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ItemInfoLists"] = boost::any(temp1);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyerId") != m.end() && !m["BuyerId"].empty()) {
      buyerId = make_shared<string>(boost::any_cast<string>(m["BuyerId"]));
    }
    if (m.find("DeliveryAddress") != m.end() && !m["DeliveryAddress"].empty()) {
      deliveryAddress = make_shared<string>(boost::any_cast<string>(m["DeliveryAddress"]));
    }
    if (m.find("DistributionOutTradeId") != m.end() && !m["DistributionOutTradeId"].empty()) {
      distributionOutTradeId = make_shared<string>(boost::any_cast<string>(m["DistributionOutTradeId"]));
    }
    if (m.find("DistributionSupplierId") != m.end() && !m["DistributionSupplierId"].empty()) {
      distributionSupplierId = make_shared<string>(boost::any_cast<string>(m["DistributionSupplierId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("ItemInfoLists") != m.end() && !m["ItemInfoLists"].empty()) {
      if (typeid(vector<boost::any>) == m["ItemInfoLists"].type()) {
        vector<ApplyCreateDistributionOrderRequestItemInfoLists> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ItemInfoLists"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyCreateDistributionOrderRequestItemInfoLists model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itemInfoLists = make_shared<vector<ApplyCreateDistributionOrderRequestItemInfoLists>>(expect1);
      }
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ApplyCreateDistributionOrderRequest() = default;
};
class ApplyCreateDistributionOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> buyerId{};
  shared_ptr<string> deliveryAddress{};
  shared_ptr<string> distributionOutTradeId{};
  shared_ptr<string> distributionSupplierId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> extInfo{};
  shared_ptr<string> itemInfoListsShrink{};
  shared_ptr<string> tenantId{};

  ApplyCreateDistributionOrderShrinkRequest() {}

  explicit ApplyCreateDistributionOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyerId) {
      res["BuyerId"] = boost::any(*buyerId);
    }
    if (deliveryAddress) {
      res["DeliveryAddress"] = boost::any(*deliveryAddress);
    }
    if (distributionOutTradeId) {
      res["DistributionOutTradeId"] = boost::any(*distributionOutTradeId);
    }
    if (distributionSupplierId) {
      res["DistributionSupplierId"] = boost::any(*distributionSupplierId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (itemInfoListsShrink) {
      res["ItemInfoLists"] = boost::any(*itemInfoListsShrink);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyerId") != m.end() && !m["BuyerId"].empty()) {
      buyerId = make_shared<string>(boost::any_cast<string>(m["BuyerId"]));
    }
    if (m.find("DeliveryAddress") != m.end() && !m["DeliveryAddress"].empty()) {
      deliveryAddress = make_shared<string>(boost::any_cast<string>(m["DeliveryAddress"]));
    }
    if (m.find("DistributionOutTradeId") != m.end() && !m["DistributionOutTradeId"].empty()) {
      distributionOutTradeId = make_shared<string>(boost::any_cast<string>(m["DistributionOutTradeId"]));
    }
    if (m.find("DistributionSupplierId") != m.end() && !m["DistributionSupplierId"].empty()) {
      distributionSupplierId = make_shared<string>(boost::any_cast<string>(m["DistributionSupplierId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("ItemInfoLists") != m.end() && !m["ItemInfoLists"].empty()) {
      itemInfoListsShrink = make_shared<string>(boost::any_cast<string>(m["ItemInfoLists"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ApplyCreateDistributionOrderShrinkRequest() = default;
};
class ApplyCreateDistributionOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<string> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ApplyCreateDistributionOrderResponseBody() {}

  explicit ApplyCreateDistributionOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = boost::any(*model);
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ApplyCreateDistributionOrderResponseBody() = default;
};
class ApplyCreateDistributionOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyCreateDistributionOrderResponseBody> body{};

  ApplyCreateDistributionOrderResponse() {}

  explicit ApplyCreateDistributionOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ApplyCreateDistributionOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyCreateDistributionOrderResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyCreateDistributionOrderResponse() = default;
};
class ApplyRefund4DistributionRequestLeavePictureLists : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> picture{};

  ApplyRefund4DistributionRequestLeavePictureLists() {}

  explicit ApplyRefund4DistributionRequestLeavePictureLists(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (picture) {
      res["Picture"] = boost::any(*picture);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Picture") != m.end() && !m["Picture"].empty()) {
      picture = make_shared<string>(boost::any_cast<string>(m["Picture"]));
    }
  }


  virtual ~ApplyRefund4DistributionRequestLeavePictureLists() = default;
};
class ApplyRefund4DistributionRequest : public Darabonba::Model {
public:
  shared_ptr<long> applyReasonTextId{};
  shared_ptr<long> applyRefundCount{};
  shared_ptr<long> applyRefundFee{};
  shared_ptr<long> bizClaimType{};
  shared_ptr<string> distributorId{};
  shared_ptr<long> goodsStatus{};
  shared_ptr<string> leaveMessage{};
  shared_ptr<vector<ApplyRefund4DistributionRequestLeavePictureLists>> leavePictureLists{};
  shared_ptr<string> subDistributionOrderId{};
  shared_ptr<string> tenantId{};

  ApplyRefund4DistributionRequest() {}

  explicit ApplyRefund4DistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyReasonTextId) {
      res["ApplyReasonTextId"] = boost::any(*applyReasonTextId);
    }
    if (applyRefundCount) {
      res["ApplyRefundCount"] = boost::any(*applyRefundCount);
    }
    if (applyRefundFee) {
      res["ApplyRefundFee"] = boost::any(*applyRefundFee);
    }
    if (bizClaimType) {
      res["BizClaimType"] = boost::any(*bizClaimType);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (goodsStatus) {
      res["GoodsStatus"] = boost::any(*goodsStatus);
    }
    if (leaveMessage) {
      res["LeaveMessage"] = boost::any(*leaveMessage);
    }
    if (leavePictureLists) {
      vector<boost::any> temp1;
      for(auto item1:*leavePictureLists){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LeavePictureLists"] = boost::any(temp1);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyReasonTextId") != m.end() && !m["ApplyReasonTextId"].empty()) {
      applyReasonTextId = make_shared<long>(boost::any_cast<long>(m["ApplyReasonTextId"]));
    }
    if (m.find("ApplyRefundCount") != m.end() && !m["ApplyRefundCount"].empty()) {
      applyRefundCount = make_shared<long>(boost::any_cast<long>(m["ApplyRefundCount"]));
    }
    if (m.find("ApplyRefundFee") != m.end() && !m["ApplyRefundFee"].empty()) {
      applyRefundFee = make_shared<long>(boost::any_cast<long>(m["ApplyRefundFee"]));
    }
    if (m.find("BizClaimType") != m.end() && !m["BizClaimType"].empty()) {
      bizClaimType = make_shared<long>(boost::any_cast<long>(m["BizClaimType"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("GoodsStatus") != m.end() && !m["GoodsStatus"].empty()) {
      goodsStatus = make_shared<long>(boost::any_cast<long>(m["GoodsStatus"]));
    }
    if (m.find("LeaveMessage") != m.end() && !m["LeaveMessage"].empty()) {
      leaveMessage = make_shared<string>(boost::any_cast<string>(m["LeaveMessage"]));
    }
    if (m.find("LeavePictureLists") != m.end() && !m["LeavePictureLists"].empty()) {
      if (typeid(vector<boost::any>) == m["LeavePictureLists"].type()) {
        vector<ApplyRefund4DistributionRequestLeavePictureLists> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LeavePictureLists"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyRefund4DistributionRequestLeavePictureLists model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        leavePictureLists = make_shared<vector<ApplyRefund4DistributionRequestLeavePictureLists>>(expect1);
      }
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ApplyRefund4DistributionRequest() = default;
};
class ApplyRefund4DistributionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> applyReasonTextId{};
  shared_ptr<long> applyRefundCount{};
  shared_ptr<long> applyRefundFee{};
  shared_ptr<long> bizClaimType{};
  shared_ptr<string> distributorId{};
  shared_ptr<long> goodsStatus{};
  shared_ptr<string> leaveMessage{};
  shared_ptr<string> leavePictureListsShrink{};
  shared_ptr<string> subDistributionOrderId{};
  shared_ptr<string> tenantId{};

  ApplyRefund4DistributionShrinkRequest() {}

  explicit ApplyRefund4DistributionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyReasonTextId) {
      res["ApplyReasonTextId"] = boost::any(*applyReasonTextId);
    }
    if (applyRefundCount) {
      res["ApplyRefundCount"] = boost::any(*applyRefundCount);
    }
    if (applyRefundFee) {
      res["ApplyRefundFee"] = boost::any(*applyRefundFee);
    }
    if (bizClaimType) {
      res["BizClaimType"] = boost::any(*bizClaimType);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (goodsStatus) {
      res["GoodsStatus"] = boost::any(*goodsStatus);
    }
    if (leaveMessage) {
      res["LeaveMessage"] = boost::any(*leaveMessage);
    }
    if (leavePictureListsShrink) {
      res["LeavePictureLists"] = boost::any(*leavePictureListsShrink);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyReasonTextId") != m.end() && !m["ApplyReasonTextId"].empty()) {
      applyReasonTextId = make_shared<long>(boost::any_cast<long>(m["ApplyReasonTextId"]));
    }
    if (m.find("ApplyRefundCount") != m.end() && !m["ApplyRefundCount"].empty()) {
      applyRefundCount = make_shared<long>(boost::any_cast<long>(m["ApplyRefundCount"]));
    }
    if (m.find("ApplyRefundFee") != m.end() && !m["ApplyRefundFee"].empty()) {
      applyRefundFee = make_shared<long>(boost::any_cast<long>(m["ApplyRefundFee"]));
    }
    if (m.find("BizClaimType") != m.end() && !m["BizClaimType"].empty()) {
      bizClaimType = make_shared<long>(boost::any_cast<long>(m["BizClaimType"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("GoodsStatus") != m.end() && !m["GoodsStatus"].empty()) {
      goodsStatus = make_shared<long>(boost::any_cast<long>(m["GoodsStatus"]));
    }
    if (m.find("LeaveMessage") != m.end() && !m["LeaveMessage"].empty()) {
      leaveMessage = make_shared<string>(boost::any_cast<string>(m["LeaveMessage"]));
    }
    if (m.find("LeavePictureLists") != m.end() && !m["LeavePictureLists"].empty()) {
      leavePictureListsShrink = make_shared<string>(boost::any_cast<string>(m["LeavePictureLists"]));
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ApplyRefund4DistributionShrinkRequest() = default;
};
class ApplyRefund4DistributionResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<long> disputeId{};
  shared_ptr<long> disputeStatus{};
  shared_ptr<long> disputeType{};
  shared_ptr<string> subDistributionOrderId{};

  ApplyRefund4DistributionResponseBodyModel() {}

  explicit ApplyRefund4DistributionResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disputeId) {
      res["DisputeId"] = boost::any(*disputeId);
    }
    if (disputeStatus) {
      res["DisputeStatus"] = boost::any(*disputeStatus);
    }
    if (disputeType) {
      res["DisputeType"] = boost::any(*disputeType);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisputeId") != m.end() && !m["DisputeId"].empty()) {
      disputeId = make_shared<long>(boost::any_cast<long>(m["DisputeId"]));
    }
    if (m.find("DisputeStatus") != m.end() && !m["DisputeStatus"].empty()) {
      disputeStatus = make_shared<long>(boost::any_cast<long>(m["DisputeStatus"]));
    }
    if (m.find("DisputeType") != m.end() && !m["DisputeType"].empty()) {
      disputeType = make_shared<long>(boost::any_cast<long>(m["DisputeType"]));
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
  }


  virtual ~ApplyRefund4DistributionResponseBodyModel() = default;
};
class ApplyRefund4DistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<ApplyRefund4DistributionResponseBodyModel> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ApplyRefund4DistributionResponseBody() {}

  explicit ApplyRefund4DistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        ApplyRefund4DistributionResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<ApplyRefund4DistributionResponseBodyModel>(model1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ApplyRefund4DistributionResponseBody() = default;
};
class ApplyRefund4DistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyRefund4DistributionResponseBody> body{};

  ApplyRefund4DistributionResponse() {}

  explicit ApplyRefund4DistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ApplyRefund4DistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyRefund4DistributionResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyRefund4DistributionResponse() = default;
};
class CancelDistributionTradeRequest : public Darabonba::Model {
public:
  shared_ptr<string> distributionTradeId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> tenantId{};

  CancelDistributionTradeRequest() {}

  explicit CancelDistributionTradeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributionTradeId) {
      res["DistributionTradeId"] = boost::any(*distributionTradeId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributionTradeId") != m.end() && !m["DistributionTradeId"].empty()) {
      distributionTradeId = make_shared<string>(boost::any_cast<string>(m["DistributionTradeId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~CancelDistributionTradeRequest() = default;
};
class CancelDistributionTradeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  CancelDistributionTradeResponseBody() {}

  explicit CancelDistributionTradeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CancelDistributionTradeResponseBody() = default;
};
class CancelDistributionTradeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelDistributionTradeResponseBody> body{};

  CancelDistributionTradeResponse() {}

  explicit CancelDistributionTradeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelDistributionTradeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelDistributionTradeResponseBody>(model1);
      }
    }
  }


  virtual ~CancelDistributionTradeResponse() = default;
};
class CancelRefund4DistributionRequest : public Darabonba::Model {
public:
  shared_ptr<long> disputeId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> subDistributionOrderId{};
  shared_ptr<string> tenantId{};

  CancelRefund4DistributionRequest() {}

  explicit CancelRefund4DistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disputeId) {
      res["DisputeId"] = boost::any(*disputeId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisputeId") != m.end() && !m["DisputeId"].empty()) {
      disputeId = make_shared<long>(boost::any_cast<long>(m["DisputeId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~CancelRefund4DistributionRequest() = default;
};
class CancelRefund4DistributionResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<long> disputeId{};
  shared_ptr<long> disputeStatus{};
  shared_ptr<long> disputeType{};
  shared_ptr<string> subDistributionOrderId{};

  CancelRefund4DistributionResponseBodyModel() {}

  explicit CancelRefund4DistributionResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disputeId) {
      res["DisputeId"] = boost::any(*disputeId);
    }
    if (disputeStatus) {
      res["DisputeStatus"] = boost::any(*disputeStatus);
    }
    if (disputeType) {
      res["DisputeType"] = boost::any(*disputeType);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisputeId") != m.end() && !m["DisputeId"].empty()) {
      disputeId = make_shared<long>(boost::any_cast<long>(m["DisputeId"]));
    }
    if (m.find("DisputeStatus") != m.end() && !m["DisputeStatus"].empty()) {
      disputeStatus = make_shared<long>(boost::any_cast<long>(m["DisputeStatus"]));
    }
    if (m.find("DisputeType") != m.end() && !m["DisputeType"].empty()) {
      disputeType = make_shared<long>(boost::any_cast<long>(m["DisputeType"]));
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
  }


  virtual ~CancelRefund4DistributionResponseBodyModel() = default;
};
class CancelRefund4DistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<CancelRefund4DistributionResponseBodyModel> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  CancelRefund4DistributionResponseBody() {}

  explicit CancelRefund4DistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        CancelRefund4DistributionResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<CancelRefund4DistributionResponseBodyModel>(model1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~CancelRefund4DistributionResponseBody() = default;
};
class CancelRefund4DistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelRefund4DistributionResponseBody> body{};

  CancelRefund4DistributionResponse() {}

  explicit CancelRefund4DistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancelRefund4DistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelRefund4DistributionResponseBody>(model1);
      }
    }
  }


  virtual ~CancelRefund4DistributionResponse() = default;
};
class ConfirmDisburse4DistributionRequest : public Darabonba::Model {
public:
  shared_ptr<string> distributionTradeId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> mainDistributionOrderId{};
  shared_ptr<string> tenantId{};

  ConfirmDisburse4DistributionRequest() {}

  explicit ConfirmDisburse4DistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributionTradeId) {
      res["DistributionTradeId"] = boost::any(*distributionTradeId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (mainDistributionOrderId) {
      res["MainDistributionOrderId"] = boost::any(*mainDistributionOrderId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributionTradeId") != m.end() && !m["DistributionTradeId"].empty()) {
      distributionTradeId = make_shared<string>(boost::any_cast<string>(m["DistributionTradeId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("MainDistributionOrderId") != m.end() && !m["MainDistributionOrderId"].empty()) {
      mainDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["MainDistributionOrderId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ConfirmDisburse4DistributionRequest() = default;
};
class ConfirmDisburse4DistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ConfirmDisburse4DistributionResponseBody() {}

  explicit ConfirmDisburse4DistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ConfirmDisburse4DistributionResponseBody() = default;
};
class ConfirmDisburse4DistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfirmDisburse4DistributionResponseBody> body{};

  ConfirmDisburse4DistributionResponse() {}

  explicit ConfirmDisburse4DistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ConfirmDisburse4DistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfirmDisburse4DistributionResponseBody>(model1);
      }
    }
  }


  virtual ~ConfirmDisburse4DistributionResponse() = default;
};
class InitApplyRefund4DistributionRequest : public Darabonba::Model {
public:
  shared_ptr<long> bizClaimType{};
  shared_ptr<string> distributorId{};
  shared_ptr<long> goodsStatus{};
  shared_ptr<string> subDistributionOrderId{};
  shared_ptr<string> tenantId{};

  InitApplyRefund4DistributionRequest() {}

  explicit InitApplyRefund4DistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizClaimType) {
      res["BizClaimType"] = boost::any(*bizClaimType);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (goodsStatus) {
      res["GoodsStatus"] = boost::any(*goodsStatus);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizClaimType") != m.end() && !m["BizClaimType"].empty()) {
      bizClaimType = make_shared<long>(boost::any_cast<long>(m["BizClaimType"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("GoodsStatus") != m.end() && !m["GoodsStatus"].empty()) {
      goodsStatus = make_shared<long>(boost::any_cast<long>(m["GoodsStatus"]));
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~InitApplyRefund4DistributionRequest() = default;
};
class InitApplyRefund4DistributionResponseBodyModelMaxRefundFeeData : public Darabonba::Model {
public:
  shared_ptr<long> maxRefundFee{};
  shared_ptr<long> minRefundFee{};

  InitApplyRefund4DistributionResponseBodyModelMaxRefundFeeData() {}

  explicit InitApplyRefund4DistributionResponseBodyModelMaxRefundFeeData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxRefundFee) {
      res["MaxRefundFee"] = boost::any(*maxRefundFee);
    }
    if (minRefundFee) {
      res["MinRefundFee"] = boost::any(*minRefundFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxRefundFee") != m.end() && !m["MaxRefundFee"].empty()) {
      maxRefundFee = make_shared<long>(boost::any_cast<long>(m["MaxRefundFee"]));
    }
    if (m.find("MinRefundFee") != m.end() && !m["MinRefundFee"].empty()) {
      minRefundFee = make_shared<long>(boost::any_cast<long>(m["MinRefundFee"]));
    }
  }


  virtual ~InitApplyRefund4DistributionResponseBodyModelMaxRefundFeeData() = default;
};
class InitApplyRefund4DistributionResponseBodyModelRefundReasonList : public Darabonba::Model {
public:
  shared_ptr<bool> proofRequired{};
  shared_ptr<string> reasonTextId{};
  shared_ptr<string> reasonTips{};
  shared_ptr<bool> refundDescRequired{};

  InitApplyRefund4DistributionResponseBodyModelRefundReasonList() {}

  explicit InitApplyRefund4DistributionResponseBodyModelRefundReasonList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (proofRequired) {
      res["ProofRequired"] = boost::any(*proofRequired);
    }
    if (reasonTextId) {
      res["ReasonTextId"] = boost::any(*reasonTextId);
    }
    if (reasonTips) {
      res["ReasonTips"] = boost::any(*reasonTips);
    }
    if (refundDescRequired) {
      res["RefundDescRequired"] = boost::any(*refundDescRequired);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProofRequired") != m.end() && !m["ProofRequired"].empty()) {
      proofRequired = make_shared<bool>(boost::any_cast<bool>(m["ProofRequired"]));
    }
    if (m.find("ReasonTextId") != m.end() && !m["ReasonTextId"].empty()) {
      reasonTextId = make_shared<string>(boost::any_cast<string>(m["ReasonTextId"]));
    }
    if (m.find("ReasonTips") != m.end() && !m["ReasonTips"].empty()) {
      reasonTips = make_shared<string>(boost::any_cast<string>(m["ReasonTips"]));
    }
    if (m.find("RefundDescRequired") != m.end() && !m["RefundDescRequired"].empty()) {
      refundDescRequired = make_shared<bool>(boost::any_cast<bool>(m["RefundDescRequired"]));
    }
  }


  virtual ~InitApplyRefund4DistributionResponseBodyModelRefundReasonList() = default;
};
class InitApplyRefund4DistributionResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<long> bizClaimType{};
  shared_ptr<bool> mainOrderRefund{};
  shared_ptr<InitApplyRefund4DistributionResponseBodyModelMaxRefundFeeData> maxRefundFeeData{};
  shared_ptr<vector<InitApplyRefund4DistributionResponseBodyModelRefundReasonList>> refundReasonList{};
  shared_ptr<string> subDistributionOrderId{};

  InitApplyRefund4DistributionResponseBodyModel() {}

  explicit InitApplyRefund4DistributionResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizClaimType) {
      res["BizClaimType"] = boost::any(*bizClaimType);
    }
    if (mainOrderRefund) {
      res["MainOrderRefund"] = boost::any(*mainOrderRefund);
    }
    if (maxRefundFeeData) {
      res["MaxRefundFeeData"] = maxRefundFeeData ? boost::any(maxRefundFeeData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (refundReasonList) {
      vector<boost::any> temp1;
      for(auto item1:*refundReasonList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RefundReasonList"] = boost::any(temp1);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizClaimType") != m.end() && !m["BizClaimType"].empty()) {
      bizClaimType = make_shared<long>(boost::any_cast<long>(m["BizClaimType"]));
    }
    if (m.find("MainOrderRefund") != m.end() && !m["MainOrderRefund"].empty()) {
      mainOrderRefund = make_shared<bool>(boost::any_cast<bool>(m["MainOrderRefund"]));
    }
    if (m.find("MaxRefundFeeData") != m.end() && !m["MaxRefundFeeData"].empty()) {
      if (typeid(map<string, boost::any>) == m["MaxRefundFeeData"].type()) {
        InitApplyRefund4DistributionResponseBodyModelMaxRefundFeeData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MaxRefundFeeData"]));
        maxRefundFeeData = make_shared<InitApplyRefund4DistributionResponseBodyModelMaxRefundFeeData>(model1);
      }
    }
    if (m.find("RefundReasonList") != m.end() && !m["RefundReasonList"].empty()) {
      if (typeid(vector<boost::any>) == m["RefundReasonList"].type()) {
        vector<InitApplyRefund4DistributionResponseBodyModelRefundReasonList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RefundReasonList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InitApplyRefund4DistributionResponseBodyModelRefundReasonList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refundReasonList = make_shared<vector<InitApplyRefund4DistributionResponseBodyModelRefundReasonList>>(expect1);
      }
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
  }


  virtual ~InitApplyRefund4DistributionResponseBodyModel() = default;
};
class InitApplyRefund4DistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<InitApplyRefund4DistributionResponseBodyModel> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  InitApplyRefund4DistributionResponseBody() {}

  explicit InitApplyRefund4DistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        InitApplyRefund4DistributionResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<InitApplyRefund4DistributionResponseBodyModel>(model1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~InitApplyRefund4DistributionResponseBody() = default;
};
class InitApplyRefund4DistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitApplyRefund4DistributionResponseBody> body{};

  InitApplyRefund4DistributionResponse() {}

  explicit InitApplyRefund4DistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InitApplyRefund4DistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitApplyRefund4DistributionResponseBody>(model1);
      }
    }
  }


  virtual ~InitApplyRefund4DistributionResponse() = default;
};
class InitModifyRefund4DistributionRequest : public Darabonba::Model {
public:
  shared_ptr<long> bizClaimType{};
  shared_ptr<long> disputeId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> subDistributionOrderId{};
  shared_ptr<string> tenantId{};

  InitModifyRefund4DistributionRequest() {}

  explicit InitModifyRefund4DistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizClaimType) {
      res["BizClaimType"] = boost::any(*bizClaimType);
    }
    if (disputeId) {
      res["DisputeId"] = boost::any(*disputeId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizClaimType") != m.end() && !m["BizClaimType"].empty()) {
      bizClaimType = make_shared<long>(boost::any_cast<long>(m["BizClaimType"]));
    }
    if (m.find("DisputeId") != m.end() && !m["DisputeId"].empty()) {
      disputeId = make_shared<long>(boost::any_cast<long>(m["DisputeId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~InitModifyRefund4DistributionRequest() = default;
};
class InitModifyRefund4DistributionResponseBodyModelMaxRefundFeeData : public Darabonba::Model {
public:
  shared_ptr<long> maxRefundFee{};
  shared_ptr<long> minRefundFee{};

  InitModifyRefund4DistributionResponseBodyModelMaxRefundFeeData() {}

  explicit InitModifyRefund4DistributionResponseBodyModelMaxRefundFeeData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxRefundFee) {
      res["MaxRefundFee"] = boost::any(*maxRefundFee);
    }
    if (minRefundFee) {
      res["MinRefundFee"] = boost::any(*minRefundFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxRefundFee") != m.end() && !m["MaxRefundFee"].empty()) {
      maxRefundFee = make_shared<long>(boost::any_cast<long>(m["MaxRefundFee"]));
    }
    if (m.find("MinRefundFee") != m.end() && !m["MinRefundFee"].empty()) {
      minRefundFee = make_shared<long>(boost::any_cast<long>(m["MinRefundFee"]));
    }
  }


  virtual ~InitModifyRefund4DistributionResponseBodyModelMaxRefundFeeData() = default;
};
class InitModifyRefund4DistributionResponseBodyModelRefundReasonList : public Darabonba::Model {
public:
  shared_ptr<bool> proofRequired{};
  shared_ptr<string> reasonTextId{};
  shared_ptr<string> reasonTips{};
  shared_ptr<bool> refundDescRequired{};

  InitModifyRefund4DistributionResponseBodyModelRefundReasonList() {}

  explicit InitModifyRefund4DistributionResponseBodyModelRefundReasonList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (proofRequired) {
      res["ProofRequired"] = boost::any(*proofRequired);
    }
    if (reasonTextId) {
      res["ReasonTextId"] = boost::any(*reasonTextId);
    }
    if (reasonTips) {
      res["ReasonTips"] = boost::any(*reasonTips);
    }
    if (refundDescRequired) {
      res["RefundDescRequired"] = boost::any(*refundDescRequired);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProofRequired") != m.end() && !m["ProofRequired"].empty()) {
      proofRequired = make_shared<bool>(boost::any_cast<bool>(m["ProofRequired"]));
    }
    if (m.find("ReasonTextId") != m.end() && !m["ReasonTextId"].empty()) {
      reasonTextId = make_shared<string>(boost::any_cast<string>(m["ReasonTextId"]));
    }
    if (m.find("ReasonTips") != m.end() && !m["ReasonTips"].empty()) {
      reasonTips = make_shared<string>(boost::any_cast<string>(m["ReasonTips"]));
    }
    if (m.find("RefundDescRequired") != m.end() && !m["RefundDescRequired"].empty()) {
      refundDescRequired = make_shared<bool>(boost::any_cast<bool>(m["RefundDescRequired"]));
    }
  }


  virtual ~InitModifyRefund4DistributionResponseBodyModelRefundReasonList() = default;
};
class InitModifyRefund4DistributionResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<long> bizClaimType{};
  shared_ptr<bool> mainOrderRefund{};
  shared_ptr<InitModifyRefund4DistributionResponseBodyModelMaxRefundFeeData> maxRefundFeeData{};
  shared_ptr<vector<InitModifyRefund4DistributionResponseBodyModelRefundReasonList>> refundReasonList{};
  shared_ptr<string> subDistributionOrderId{};

  InitModifyRefund4DistributionResponseBodyModel() {}

  explicit InitModifyRefund4DistributionResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizClaimType) {
      res["BizClaimType"] = boost::any(*bizClaimType);
    }
    if (mainOrderRefund) {
      res["MainOrderRefund"] = boost::any(*mainOrderRefund);
    }
    if (maxRefundFeeData) {
      res["MaxRefundFeeData"] = maxRefundFeeData ? boost::any(maxRefundFeeData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (refundReasonList) {
      vector<boost::any> temp1;
      for(auto item1:*refundReasonList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RefundReasonList"] = boost::any(temp1);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizClaimType") != m.end() && !m["BizClaimType"].empty()) {
      bizClaimType = make_shared<long>(boost::any_cast<long>(m["BizClaimType"]));
    }
    if (m.find("MainOrderRefund") != m.end() && !m["MainOrderRefund"].empty()) {
      mainOrderRefund = make_shared<bool>(boost::any_cast<bool>(m["MainOrderRefund"]));
    }
    if (m.find("MaxRefundFeeData") != m.end() && !m["MaxRefundFeeData"].empty()) {
      if (typeid(map<string, boost::any>) == m["MaxRefundFeeData"].type()) {
        InitModifyRefund4DistributionResponseBodyModelMaxRefundFeeData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MaxRefundFeeData"]));
        maxRefundFeeData = make_shared<InitModifyRefund4DistributionResponseBodyModelMaxRefundFeeData>(model1);
      }
    }
    if (m.find("RefundReasonList") != m.end() && !m["RefundReasonList"].empty()) {
      if (typeid(vector<boost::any>) == m["RefundReasonList"].type()) {
        vector<InitModifyRefund4DistributionResponseBodyModelRefundReasonList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RefundReasonList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InitModifyRefund4DistributionResponseBodyModelRefundReasonList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refundReasonList = make_shared<vector<InitModifyRefund4DistributionResponseBodyModelRefundReasonList>>(expect1);
      }
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
  }


  virtual ~InitModifyRefund4DistributionResponseBodyModel() = default;
};
class InitModifyRefund4DistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<InitModifyRefund4DistributionResponseBodyModel> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  InitModifyRefund4DistributionResponseBody() {}

  explicit InitModifyRefund4DistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        InitModifyRefund4DistributionResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<InitModifyRefund4DistributionResponseBodyModel>(model1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~InitModifyRefund4DistributionResponseBody() = default;
};
class InitModifyRefund4DistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitModifyRefund4DistributionResponseBody> body{};

  InitModifyRefund4DistributionResponse() {}

  explicit InitModifyRefund4DistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InitModifyRefund4DistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitModifyRefund4DistributionResponseBody>(model1);
      }
    }
  }


  virtual ~InitModifyRefund4DistributionResponse() = default;
};
class ListDistributionItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> distributorId{};
  shared_ptr<long> itemStatus{};
  shared_ptr<string> lmItemId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> tenantId{};

  ListDistributionItemRequest() {}

  explicit ListDistributionItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (itemStatus) {
      res["ItemStatus"] = boost::any(*itemStatus);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("ItemStatus") != m.end() && !m["ItemStatus"].empty()) {
      itemStatus = make_shared<long>(boost::any_cast<long>(m["ItemStatus"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ListDistributionItemRequest() = default;
};
class ListDistributionItemResponseBodyModelCategoryChain : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<bool> leaf{};
  shared_ptr<long> level{};
  shared_ptr<string> name{};
  shared_ptr<long> parentId{};

  ListDistributionItemResponseBodyModelCategoryChain() {}

  explicit ListDistributionItemResponseBodyModelCategoryChain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (leaf) {
      res["Leaf"] = boost::any(*leaf);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Leaf") != m.end() && !m["Leaf"].empty()) {
      leaf = make_shared<bool>(boost::any_cast<bool>(m["Leaf"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<long>(boost::any_cast<long>(m["ParentId"]));
    }
  }


  virtual ~ListDistributionItemResponseBodyModelCategoryChain() = default;
};
class ListDistributionItemResponseBodyModelLmAttributeModels : public Darabonba::Model {
public:
  shared_ptr<long> attrId{};
  shared_ptr<long> category{};
  shared_ptr<string> dataType{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> restriction{};
  shared_ptr<vector<string>> scopeList{};
  shared_ptr<string> value{};

  ListDistributionItemResponseBodyModelLmAttributeModels() {}

  explicit ListDistributionItemResponseBodyModelLmAttributeModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attrId) {
      res["AttrId"] = boost::any(*attrId);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (restriction) {
      res["Restriction"] = boost::any(*restriction);
    }
    if (scopeList) {
      res["ScopeList"] = boost::any(*scopeList);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttrId") != m.end() && !m["AttrId"].empty()) {
      attrId = make_shared<long>(boost::any_cast<long>(m["AttrId"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<long>(boost::any_cast<long>(m["Category"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Restriction") != m.end() && !m["Restriction"].empty()) {
      restriction = make_shared<string>(boost::any_cast<string>(m["Restriction"]));
    }
    if (m.find("ScopeList") != m.end() && !m["ScopeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScopeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScopeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scopeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListDistributionItemResponseBodyModelLmAttributeModels() = default;
};
class ListDistributionItemResponseBodyModelSkuListLmAttributeModels : public Darabonba::Model {
public:
  shared_ptr<long> attrId{};
  shared_ptr<long> category{};
  shared_ptr<string> dataType{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> restriction{};
  shared_ptr<vector<string>> scopeList{};
  shared_ptr<string> value{};

  ListDistributionItemResponseBodyModelSkuListLmAttributeModels() {}

  explicit ListDistributionItemResponseBodyModelSkuListLmAttributeModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attrId) {
      res["AttrId"] = boost::any(*attrId);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (restriction) {
      res["Restriction"] = boost::any(*restriction);
    }
    if (scopeList) {
      res["ScopeList"] = boost::any(*scopeList);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttrId") != m.end() && !m["AttrId"].empty()) {
      attrId = make_shared<long>(boost::any_cast<long>(m["AttrId"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<long>(boost::any_cast<long>(m["Category"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Restriction") != m.end() && !m["Restriction"].empty()) {
      restriction = make_shared<string>(boost::any_cast<string>(m["Restriction"]));
    }
    if (m.find("ScopeList") != m.end() && !m["ScopeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScopeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScopeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scopeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListDistributionItemResponseBodyModelSkuListLmAttributeModels() = default;
};
class ListDistributionItemResponseBodyModelSkuList : public Darabonba::Model {
public:
  shared_ptr<bool> canSell{};
  shared_ptr<map<string, string>> customizedAttributeMap{};
  shared_ptr<string> extInfo{};
  shared_ptr<string> gmtModified{};
  shared_ptr<bool> hasQuantity{};
  shared_ptr<long> itemId{};
  shared_ptr<vector<ListDistributionItemResponseBodyModelSkuListLmAttributeModels>> lmAttributeModels{};
  shared_ptr<string> lmItemId{};
  shared_ptr<long> priceCent{};
  shared_ptr<long> quantity{};
  shared_ptr<long> reservedPrice{};
  shared_ptr<string> simpleQuantity{};
  shared_ptr<string> skuDesc{};
  shared_ptr<long> skuId{};
  shared_ptr<string> skuPicUrl{};
  shared_ptr<map<string, string>> skuProperties{};
  shared_ptr<string> skuPropertiesJson{};
  shared_ptr<string> skuTitle{};
  shared_ptr<long> status{};
  shared_ptr<string> tips{};
  shared_ptr<map<string, string>> lmSkuAttributeMap{};

  ListDistributionItemResponseBodyModelSkuList() {}

  explicit ListDistributionItemResponseBodyModelSkuList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canSell) {
      res["CanSell"] = boost::any(*canSell);
    }
    if (customizedAttributeMap) {
      res["CustomizedAttributeMap"] = boost::any(*customizedAttributeMap);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (hasQuantity) {
      res["HasQuantity"] = boost::any(*hasQuantity);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (lmAttributeModels) {
      vector<boost::any> temp1;
      for(auto item1:*lmAttributeModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LmAttributeModels"] = boost::any(temp1);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (priceCent) {
      res["PriceCent"] = boost::any(*priceCent);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (reservedPrice) {
      res["ReservedPrice"] = boost::any(*reservedPrice);
    }
    if (simpleQuantity) {
      res["SimpleQuantity"] = boost::any(*simpleQuantity);
    }
    if (skuDesc) {
      res["SkuDesc"] = boost::any(*skuDesc);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (skuPicUrl) {
      res["SkuPicUrl"] = boost::any(*skuPicUrl);
    }
    if (skuProperties) {
      res["SkuProperties"] = boost::any(*skuProperties);
    }
    if (skuPropertiesJson) {
      res["SkuPropertiesJson"] = boost::any(*skuPropertiesJson);
    }
    if (skuTitle) {
      res["SkuTitle"] = boost::any(*skuTitle);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    if (lmSkuAttributeMap) {
      res["lmSkuAttributeMap"] = boost::any(*lmSkuAttributeMap);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanSell") != m.end() && !m["CanSell"].empty()) {
      canSell = make_shared<bool>(boost::any_cast<bool>(m["CanSell"]));
    }
    if (m.find("CustomizedAttributeMap") != m.end() && !m["CustomizedAttributeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["CustomizedAttributeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customizedAttributeMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("HasQuantity") != m.end() && !m["HasQuantity"].empty()) {
      hasQuantity = make_shared<bool>(boost::any_cast<bool>(m["HasQuantity"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("LmAttributeModels") != m.end() && !m["LmAttributeModels"].empty()) {
      if (typeid(vector<boost::any>) == m["LmAttributeModels"].type()) {
        vector<ListDistributionItemResponseBodyModelSkuListLmAttributeModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LmAttributeModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDistributionItemResponseBodyModelSkuListLmAttributeModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lmAttributeModels = make_shared<vector<ListDistributionItemResponseBodyModelSkuListLmAttributeModels>>(expect1);
      }
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("PriceCent") != m.end() && !m["PriceCent"].empty()) {
      priceCent = make_shared<long>(boost::any_cast<long>(m["PriceCent"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("ReservedPrice") != m.end() && !m["ReservedPrice"].empty()) {
      reservedPrice = make_shared<long>(boost::any_cast<long>(m["ReservedPrice"]));
    }
    if (m.find("SimpleQuantity") != m.end() && !m["SimpleQuantity"].empty()) {
      simpleQuantity = make_shared<string>(boost::any_cast<string>(m["SimpleQuantity"]));
    }
    if (m.find("SkuDesc") != m.end() && !m["SkuDesc"].empty()) {
      skuDesc = make_shared<string>(boost::any_cast<string>(m["SkuDesc"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<long>(boost::any_cast<long>(m["SkuId"]));
    }
    if (m.find("SkuPicUrl") != m.end() && !m["SkuPicUrl"].empty()) {
      skuPicUrl = make_shared<string>(boost::any_cast<string>(m["SkuPicUrl"]));
    }
    if (m.find("SkuProperties") != m.end() && !m["SkuProperties"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["SkuProperties"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      skuProperties = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("SkuPropertiesJson") != m.end() && !m["SkuPropertiesJson"].empty()) {
      skuPropertiesJson = make_shared<string>(boost::any_cast<string>(m["SkuPropertiesJson"]));
    }
    if (m.find("SkuTitle") != m.end() && !m["SkuTitle"].empty()) {
      skuTitle = make_shared<string>(boost::any_cast<string>(m["SkuTitle"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
    if (m.find("lmSkuAttributeMap") != m.end() && !m["lmSkuAttributeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["lmSkuAttributeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      lmSkuAttributeMap = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~ListDistributionItemResponseBodyModelSkuList() = default;
};
class ListDistributionItemResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<vector<ListDistributionItemResponseBodyModelCategoryChain>> categoryChain{};
  shared_ptr<long> categoryId{};
  shared_ptr<string> descOption{};
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<bool> hasQuantity{};
  shared_ptr<bool> isCanSell{};
  shared_ptr<string> itemDesc{};
  shared_ptr<long> itemId{};
  shared_ptr<string> itemIdStr{};
  shared_ptr<vector<string>> itemImages{};
  shared_ptr<string> itemName{};
  shared_ptr<string> itemTitle{};
  shared_ptr<map<string, string>> lmAttributeMap{};
  shared_ptr<vector<ListDistributionItemResponseBodyModelLmAttributeModels>> lmAttributeModels{};
  shared_ptr<string> lmItemId{};
  shared_ptr<string> mainPicUrl{};
  shared_ptr<string> picUrl{};
  shared_ptr<string> priceCentScope{};
  shared_ptr<string> propertiesJson{};
  shared_ptr<long> quantity{};
  shared_ptr<long> reservedPrice{};
  shared_ptr<string> reservedPriceScope{};
  shared_ptr<string> simpleQuantity{};
  shared_ptr<string> simpleTotalSoldQuantity{};
  shared_ptr<vector<ListDistributionItemResponseBodyModelSkuList>> skuList{};
  shared_ptr<long> status{};
  shared_ptr<string> tips{};
  shared_ptr<long> totalSoldQuantity{};

  ListDistributionItemResponseBodyModel() {}

  explicit ListDistributionItemResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (categoryChain) {
      vector<boost::any> temp1;
      for(auto item1:*categoryChain){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CategoryChain"] = boost::any(temp1);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (descOption) {
      res["DescOption"] = boost::any(*descOption);
    }
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (hasQuantity) {
      res["HasQuantity"] = boost::any(*hasQuantity);
    }
    if (isCanSell) {
      res["IsCanSell"] = boost::any(*isCanSell);
    }
    if (itemDesc) {
      res["ItemDesc"] = boost::any(*itemDesc);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemIdStr) {
      res["ItemIdStr"] = boost::any(*itemIdStr);
    }
    if (itemImages) {
      res["ItemImages"] = boost::any(*itemImages);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (itemTitle) {
      res["ItemTitle"] = boost::any(*itemTitle);
    }
    if (lmAttributeMap) {
      res["LmAttributeMap"] = boost::any(*lmAttributeMap);
    }
    if (lmAttributeModels) {
      vector<boost::any> temp1;
      for(auto item1:*lmAttributeModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LmAttributeModels"] = boost::any(temp1);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (mainPicUrl) {
      res["MainPicUrl"] = boost::any(*mainPicUrl);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (priceCentScope) {
      res["PriceCentScope"] = boost::any(*priceCentScope);
    }
    if (propertiesJson) {
      res["PropertiesJson"] = boost::any(*propertiesJson);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (reservedPrice) {
      res["ReservedPrice"] = boost::any(*reservedPrice);
    }
    if (reservedPriceScope) {
      res["ReservedPriceScope"] = boost::any(*reservedPriceScope);
    }
    if (simpleQuantity) {
      res["SimpleQuantity"] = boost::any(*simpleQuantity);
    }
    if (simpleTotalSoldQuantity) {
      res["SimpleTotalSoldQuantity"] = boost::any(*simpleTotalSoldQuantity);
    }
    if (skuList) {
      vector<boost::any> temp1;
      for(auto item1:*skuList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkuList"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    if (totalSoldQuantity) {
      res["TotalSoldQuantity"] = boost::any(*totalSoldQuantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CategoryChain") != m.end() && !m["CategoryChain"].empty()) {
      if (typeid(vector<boost::any>) == m["CategoryChain"].type()) {
        vector<ListDistributionItemResponseBodyModelCategoryChain> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CategoryChain"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDistributionItemResponseBodyModelCategoryChain model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categoryChain = make_shared<vector<ListDistributionItemResponseBodyModelCategoryChain>>(expect1);
      }
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("DescOption") != m.end() && !m["DescOption"].empty()) {
      descOption = make_shared<string>(boost::any_cast<string>(m["DescOption"]));
    }
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("HasQuantity") != m.end() && !m["HasQuantity"].empty()) {
      hasQuantity = make_shared<bool>(boost::any_cast<bool>(m["HasQuantity"]));
    }
    if (m.find("IsCanSell") != m.end() && !m["IsCanSell"].empty()) {
      isCanSell = make_shared<bool>(boost::any_cast<bool>(m["IsCanSell"]));
    }
    if (m.find("ItemDesc") != m.end() && !m["ItemDesc"].empty()) {
      itemDesc = make_shared<string>(boost::any_cast<string>(m["ItemDesc"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemIdStr") != m.end() && !m["ItemIdStr"].empty()) {
      itemIdStr = make_shared<string>(boost::any_cast<string>(m["ItemIdStr"]));
    }
    if (m.find("ItemImages") != m.end() && !m["ItemImages"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ItemImages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ItemImages"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      itemImages = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("ItemTitle") != m.end() && !m["ItemTitle"].empty()) {
      itemTitle = make_shared<string>(boost::any_cast<string>(m["ItemTitle"]));
    }
    if (m.find("LmAttributeMap") != m.end() && !m["LmAttributeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["LmAttributeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      lmAttributeMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("LmAttributeModels") != m.end() && !m["LmAttributeModels"].empty()) {
      if (typeid(vector<boost::any>) == m["LmAttributeModels"].type()) {
        vector<ListDistributionItemResponseBodyModelLmAttributeModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LmAttributeModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDistributionItemResponseBodyModelLmAttributeModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lmAttributeModels = make_shared<vector<ListDistributionItemResponseBodyModelLmAttributeModels>>(expect1);
      }
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("MainPicUrl") != m.end() && !m["MainPicUrl"].empty()) {
      mainPicUrl = make_shared<string>(boost::any_cast<string>(m["MainPicUrl"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("PriceCentScope") != m.end() && !m["PriceCentScope"].empty()) {
      priceCentScope = make_shared<string>(boost::any_cast<string>(m["PriceCentScope"]));
    }
    if (m.find("PropertiesJson") != m.end() && !m["PropertiesJson"].empty()) {
      propertiesJson = make_shared<string>(boost::any_cast<string>(m["PropertiesJson"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("ReservedPrice") != m.end() && !m["ReservedPrice"].empty()) {
      reservedPrice = make_shared<long>(boost::any_cast<long>(m["ReservedPrice"]));
    }
    if (m.find("ReservedPriceScope") != m.end() && !m["ReservedPriceScope"].empty()) {
      reservedPriceScope = make_shared<string>(boost::any_cast<string>(m["ReservedPriceScope"]));
    }
    if (m.find("SimpleQuantity") != m.end() && !m["SimpleQuantity"].empty()) {
      simpleQuantity = make_shared<string>(boost::any_cast<string>(m["SimpleQuantity"]));
    }
    if (m.find("SimpleTotalSoldQuantity") != m.end() && !m["SimpleTotalSoldQuantity"].empty()) {
      simpleTotalSoldQuantity = make_shared<string>(boost::any_cast<string>(m["SimpleTotalSoldQuantity"]));
    }
    if (m.find("SkuList") != m.end() && !m["SkuList"].empty()) {
      if (typeid(vector<boost::any>) == m["SkuList"].type()) {
        vector<ListDistributionItemResponseBodyModelSkuList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkuList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDistributionItemResponseBodyModelSkuList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skuList = make_shared<vector<ListDistributionItemResponseBodyModelSkuList>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
    if (m.find("TotalSoldQuantity") != m.end() && !m["TotalSoldQuantity"].empty()) {
      totalSoldQuantity = make_shared<long>(boost::any_cast<long>(m["TotalSoldQuantity"]));
    }
  }


  virtual ~ListDistributionItemResponseBodyModel() = default;
};
class ListDistributionItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<vector<ListDistributionItemResponseBodyModel>> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListDistributionItemResponseBody() {}

  explicit ListDistributionItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      vector<boost::any> temp1;
      for(auto item1:*model){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Model"] = boost::any(temp1);
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(vector<boost::any>) == m["Model"].type()) {
        vector<ListDistributionItemResponseBodyModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Model"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDistributionItemResponseBodyModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        model = make_shared<vector<ListDistributionItemResponseBodyModel>>(expect1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDistributionItemResponseBody() = default;
};
class ListDistributionItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDistributionItemResponseBody> body{};

  ListDistributionItemResponse() {}

  explicit ListDistributionItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDistributionItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDistributionItemResponseBody>(model1);
      }
    }
  }


  virtual ~ListDistributionItemResponse() = default;
};
class ListDistributionItemWithoutCacheRequest : public Darabonba::Model {
public:
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> distributorId{};
  shared_ptr<long> itemStatus{};
  shared_ptr<string> lmItemId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> tenantId{};

  ListDistributionItemWithoutCacheRequest() {}

  explicit ListDistributionItemWithoutCacheRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (itemStatus) {
      res["ItemStatus"] = boost::any(*itemStatus);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("ItemStatus") != m.end() && !m["ItemStatus"].empty()) {
      itemStatus = make_shared<long>(boost::any_cast<long>(m["ItemStatus"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ListDistributionItemWithoutCacheRequest() = default;
};
class ListDistributionItemWithoutCacheResponseBodyModelSkuModels : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> customizedAttributeMap{};
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> extJson{};
  shared_ptr<bool> hasQuantity{};
  shared_ptr<long> invoiceType{};
  shared_ptr<string> isCanNotBeSoldCode{};
  shared_ptr<string> isCanNotBeSoldMessage{};
  shared_ptr<long> itemId{};
  shared_ptr<string> lmItemId{};
  shared_ptr<map<string, string>> lmSkuAttributeMap{};
  shared_ptr<long> priceCent{};
  shared_ptr<long> quantity{};
  shared_ptr<long> reservedPrice{};
  shared_ptr<string> simpleQuantity{};
  shared_ptr<long> skuId{};
  shared_ptr<string> skuPicUrl{};
  shared_ptr<string> skuPvs{};
  shared_ptr<string> skuTitle{};
  shared_ptr<long> status{};
  shared_ptr<long> supplierPrice{};

  ListDistributionItemWithoutCacheResponseBodyModelSkuModels() {}

  explicit ListDistributionItemWithoutCacheResponseBodyModelSkuModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customizedAttributeMap) {
      res["CustomizedAttributeMap"] = boost::any(*customizedAttributeMap);
    }
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (extJson) {
      res["ExtJson"] = boost::any(*extJson);
    }
    if (hasQuantity) {
      res["HasQuantity"] = boost::any(*hasQuantity);
    }
    if (invoiceType) {
      res["InvoiceType"] = boost::any(*invoiceType);
    }
    if (isCanNotBeSoldCode) {
      res["IsCanNotBeSoldCode"] = boost::any(*isCanNotBeSoldCode);
    }
    if (isCanNotBeSoldMessage) {
      res["IsCanNotBeSoldMessage"] = boost::any(*isCanNotBeSoldMessage);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (lmSkuAttributeMap) {
      res["LmSkuAttributeMap"] = boost::any(*lmSkuAttributeMap);
    }
    if (priceCent) {
      res["PriceCent"] = boost::any(*priceCent);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (reservedPrice) {
      res["ReservedPrice"] = boost::any(*reservedPrice);
    }
    if (simpleQuantity) {
      res["SimpleQuantity"] = boost::any(*simpleQuantity);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (skuPicUrl) {
      res["SkuPicUrl"] = boost::any(*skuPicUrl);
    }
    if (skuPvs) {
      res["SkuPvs"] = boost::any(*skuPvs);
    }
    if (skuTitle) {
      res["SkuTitle"] = boost::any(*skuTitle);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierPrice) {
      res["SupplierPrice"] = boost::any(*supplierPrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomizedAttributeMap") != m.end() && !m["CustomizedAttributeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["CustomizedAttributeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customizedAttributeMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("ExtJson") != m.end() && !m["ExtJson"].empty()) {
      extJson = make_shared<string>(boost::any_cast<string>(m["ExtJson"]));
    }
    if (m.find("HasQuantity") != m.end() && !m["HasQuantity"].empty()) {
      hasQuantity = make_shared<bool>(boost::any_cast<bool>(m["HasQuantity"]));
    }
    if (m.find("InvoiceType") != m.end() && !m["InvoiceType"].empty()) {
      invoiceType = make_shared<long>(boost::any_cast<long>(m["InvoiceType"]));
    }
    if (m.find("IsCanNotBeSoldCode") != m.end() && !m["IsCanNotBeSoldCode"].empty()) {
      isCanNotBeSoldCode = make_shared<string>(boost::any_cast<string>(m["IsCanNotBeSoldCode"]));
    }
    if (m.find("IsCanNotBeSoldMessage") != m.end() && !m["IsCanNotBeSoldMessage"].empty()) {
      isCanNotBeSoldMessage = make_shared<string>(boost::any_cast<string>(m["IsCanNotBeSoldMessage"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("LmSkuAttributeMap") != m.end() && !m["LmSkuAttributeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["LmSkuAttributeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      lmSkuAttributeMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PriceCent") != m.end() && !m["PriceCent"].empty()) {
      priceCent = make_shared<long>(boost::any_cast<long>(m["PriceCent"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("ReservedPrice") != m.end() && !m["ReservedPrice"].empty()) {
      reservedPrice = make_shared<long>(boost::any_cast<long>(m["ReservedPrice"]));
    }
    if (m.find("SimpleQuantity") != m.end() && !m["SimpleQuantity"].empty()) {
      simpleQuantity = make_shared<string>(boost::any_cast<string>(m["SimpleQuantity"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<long>(boost::any_cast<long>(m["SkuId"]));
    }
    if (m.find("SkuPicUrl") != m.end() && !m["SkuPicUrl"].empty()) {
      skuPicUrl = make_shared<string>(boost::any_cast<string>(m["SkuPicUrl"]));
    }
    if (m.find("SkuPvs") != m.end() && !m["SkuPvs"].empty()) {
      skuPvs = make_shared<string>(boost::any_cast<string>(m["SkuPvs"]));
    }
    if (m.find("SkuTitle") != m.end() && !m["SkuTitle"].empty()) {
      skuTitle = make_shared<string>(boost::any_cast<string>(m["SkuTitle"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SupplierPrice") != m.end() && !m["SupplierPrice"].empty()) {
      supplierPrice = make_shared<long>(boost::any_cast<long>(m["SupplierPrice"]));
    }
  }


  virtual ~ListDistributionItemWithoutCacheResponseBodyModelSkuModels() = default;
};
class ListDistributionItemWithoutCacheResponseBodyModelSkuPropertysValues : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> text{};

  ListDistributionItemWithoutCacheResponseBodyModelSkuPropertysValues() {}

  explicit ListDistributionItemWithoutCacheResponseBodyModelSkuPropertysValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~ListDistributionItemWithoutCacheResponseBodyModelSkuPropertysValues() = default;
};
class ListDistributionItemWithoutCacheResponseBodyModelSkuPropertys : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> text{};
  shared_ptr<vector<ListDistributionItemWithoutCacheResponseBodyModelSkuPropertysValues>> values{};

  ListDistributionItemWithoutCacheResponseBodyModelSkuPropertys() {}

  explicit ListDistributionItemWithoutCacheResponseBodyModelSkuPropertys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<ListDistributionItemWithoutCacheResponseBodyModelSkuPropertysValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDistributionItemWithoutCacheResponseBodyModelSkuPropertysValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<ListDistributionItemWithoutCacheResponseBodyModelSkuPropertysValues>>(expect1);
      }
    }
  }


  virtual ~ListDistributionItemWithoutCacheResponseBodyModelSkuPropertys() = default;
};
class ListDistributionItemWithoutCacheResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<vector<long>> categoryIds{};
  shared_ptr<string> city{};
  shared_ptr<string> current{};
  shared_ptr<map<string, string>> customizedAttributeMap{};
  shared_ptr<string> descOption{};
  shared_ptr<string> descPath{};
  shared_ptr<string> distributionMallId{};
  shared_ptr<map<string, string>> features{};
  shared_ptr<string> firstPicUrl{};
  shared_ptr<bool> hasQuantity{};
  shared_ptr<vector<map<string, string>>> iforestProps{};
  shared_ptr<long> invoiceType{};
  shared_ptr<string> isCanNotBeSoldCode{};
  shared_ptr<string> isCanNotBeSoldMessage{};
  shared_ptr<bool> isCanSell{};
  shared_ptr<bool> isSellerPayPostfee{};
  shared_ptr<long> itemId{};
  shared_ptr<vector<string>> itemImages{};
  shared_ptr<string> itemTitle{};
  shared_ptr<string> itemTotalSimpleValue{};
  shared_ptr<long> itemTotalValue{};
  shared_ptr<map<string, string>> lmItemAttributeMap{};
  shared_ptr<string> lmItemCategory{};
  shared_ptr<string> lmItemId{};
  shared_ptr<string> mainPicUrl{};
  shared_ptr<long> minPrice{};
  shared_ptr<map<string, vector<string>>> properties{};
  shared_ptr<string> prov{};
  shared_ptr<long> quantity{};
  shared_ptr<long> reservedPrice{};
  shared_ptr<long> securedTransactions{};
  shared_ptr<string> simpleQuantity{};
  shared_ptr<vector<ListDistributionItemWithoutCacheResponseBodyModelSkuModels>> skuModels{};
  shared_ptr<vector<ListDistributionItemWithoutCacheResponseBodyModelSkuPropertys>> skuPropertys{};
  shared_ptr<string> thirdPartyItemId{};
  shared_ptr<string> thirdPartyName{};
  shared_ptr<long> userType{};
  shared_ptr<string> videoPicUrl{};
  shared_ptr<string> videoUrl{};
  shared_ptr<string> virtualItemType{};

  ListDistributionItemWithoutCacheResponseBodyModel() {}

  explicit ListDistributionItemWithoutCacheResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (categoryIds) {
      res["CategoryIds"] = boost::any(*categoryIds);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (customizedAttributeMap) {
      res["CustomizedAttributeMap"] = boost::any(*customizedAttributeMap);
    }
    if (descOption) {
      res["DescOption"] = boost::any(*descOption);
    }
    if (descPath) {
      res["DescPath"] = boost::any(*descPath);
    }
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (features) {
      res["Features"] = boost::any(*features);
    }
    if (firstPicUrl) {
      res["FirstPicUrl"] = boost::any(*firstPicUrl);
    }
    if (hasQuantity) {
      res["HasQuantity"] = boost::any(*hasQuantity);
    }
    if (iforestProps) {
      res["IforestProps"] = boost::any(*iforestProps);
    }
    if (invoiceType) {
      res["InvoiceType"] = boost::any(*invoiceType);
    }
    if (isCanNotBeSoldCode) {
      res["IsCanNotBeSoldCode"] = boost::any(*isCanNotBeSoldCode);
    }
    if (isCanNotBeSoldMessage) {
      res["IsCanNotBeSoldMessage"] = boost::any(*isCanNotBeSoldMessage);
    }
    if (isCanSell) {
      res["IsCanSell"] = boost::any(*isCanSell);
    }
    if (isSellerPayPostfee) {
      res["IsSellerPayPostfee"] = boost::any(*isSellerPayPostfee);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemImages) {
      res["ItemImages"] = boost::any(*itemImages);
    }
    if (itemTitle) {
      res["ItemTitle"] = boost::any(*itemTitle);
    }
    if (itemTotalSimpleValue) {
      res["ItemTotalSimpleValue"] = boost::any(*itemTotalSimpleValue);
    }
    if (itemTotalValue) {
      res["ItemTotalValue"] = boost::any(*itemTotalValue);
    }
    if (lmItemAttributeMap) {
      res["LmItemAttributeMap"] = boost::any(*lmItemAttributeMap);
    }
    if (lmItemCategory) {
      res["LmItemCategory"] = boost::any(*lmItemCategory);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (mainPicUrl) {
      res["MainPicUrl"] = boost::any(*mainPicUrl);
    }
    if (minPrice) {
      res["MinPrice"] = boost::any(*minPrice);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (prov) {
      res["Prov"] = boost::any(*prov);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (reservedPrice) {
      res["ReservedPrice"] = boost::any(*reservedPrice);
    }
    if (securedTransactions) {
      res["SecuredTransactions"] = boost::any(*securedTransactions);
    }
    if (simpleQuantity) {
      res["SimpleQuantity"] = boost::any(*simpleQuantity);
    }
    if (skuModels) {
      vector<boost::any> temp1;
      for(auto item1:*skuModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkuModels"] = boost::any(temp1);
    }
    if (skuPropertys) {
      vector<boost::any> temp1;
      for(auto item1:*skuPropertys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkuPropertys"] = boost::any(temp1);
    }
    if (thirdPartyItemId) {
      res["ThirdPartyItemId"] = boost::any(*thirdPartyItemId);
    }
    if (thirdPartyName) {
      res["ThirdPartyName"] = boost::any(*thirdPartyName);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    if (videoPicUrl) {
      res["VideoPicUrl"] = boost::any(*videoPicUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (virtualItemType) {
      res["VirtualItemType"] = boost::any(*virtualItemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CategoryIds") != m.end() && !m["CategoryIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CategoryIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CategoryIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      categoryIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<string>(boost::any_cast<string>(m["Current"]));
    }
    if (m.find("CustomizedAttributeMap") != m.end() && !m["CustomizedAttributeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["CustomizedAttributeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customizedAttributeMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("DescOption") != m.end() && !m["DescOption"].empty()) {
      descOption = make_shared<string>(boost::any_cast<string>(m["DescOption"]));
    }
    if (m.find("DescPath") != m.end() && !m["DescPath"].empty()) {
      descPath = make_shared<string>(boost::any_cast<string>(m["DescPath"]));
    }
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Features"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      features = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("FirstPicUrl") != m.end() && !m["FirstPicUrl"].empty()) {
      firstPicUrl = make_shared<string>(boost::any_cast<string>(m["FirstPicUrl"]));
    }
    if (m.find("HasQuantity") != m.end() && !m["HasQuantity"].empty()) {
      hasQuantity = make_shared<bool>(boost::any_cast<bool>(m["HasQuantity"]));
    }
    if (m.find("IforestProps") != m.end() && !m["IforestProps"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["IforestProps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IforestProps"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      iforestProps = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("InvoiceType") != m.end() && !m["InvoiceType"].empty()) {
      invoiceType = make_shared<long>(boost::any_cast<long>(m["InvoiceType"]));
    }
    if (m.find("IsCanNotBeSoldCode") != m.end() && !m["IsCanNotBeSoldCode"].empty()) {
      isCanNotBeSoldCode = make_shared<string>(boost::any_cast<string>(m["IsCanNotBeSoldCode"]));
    }
    if (m.find("IsCanNotBeSoldMessage") != m.end() && !m["IsCanNotBeSoldMessage"].empty()) {
      isCanNotBeSoldMessage = make_shared<string>(boost::any_cast<string>(m["IsCanNotBeSoldMessage"]));
    }
    if (m.find("IsCanSell") != m.end() && !m["IsCanSell"].empty()) {
      isCanSell = make_shared<bool>(boost::any_cast<bool>(m["IsCanSell"]));
    }
    if (m.find("IsSellerPayPostfee") != m.end() && !m["IsSellerPayPostfee"].empty()) {
      isSellerPayPostfee = make_shared<bool>(boost::any_cast<bool>(m["IsSellerPayPostfee"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemImages") != m.end() && !m["ItemImages"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ItemImages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ItemImages"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      itemImages = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ItemTitle") != m.end() && !m["ItemTitle"].empty()) {
      itemTitle = make_shared<string>(boost::any_cast<string>(m["ItemTitle"]));
    }
    if (m.find("ItemTotalSimpleValue") != m.end() && !m["ItemTotalSimpleValue"].empty()) {
      itemTotalSimpleValue = make_shared<string>(boost::any_cast<string>(m["ItemTotalSimpleValue"]));
    }
    if (m.find("ItemTotalValue") != m.end() && !m["ItemTotalValue"].empty()) {
      itemTotalValue = make_shared<long>(boost::any_cast<long>(m["ItemTotalValue"]));
    }
    if (m.find("LmItemAttributeMap") != m.end() && !m["LmItemAttributeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["LmItemAttributeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      lmItemAttributeMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("LmItemCategory") != m.end() && !m["LmItemCategory"].empty()) {
      lmItemCategory = make_shared<string>(boost::any_cast<string>(m["LmItemCategory"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("MainPicUrl") != m.end() && !m["MainPicUrl"].empty()) {
      mainPicUrl = make_shared<string>(boost::any_cast<string>(m["MainPicUrl"]));
    }
    if (m.find("MinPrice") != m.end() && !m["MinPrice"].empty()) {
      minPrice = make_shared<long>(boost::any_cast<long>(m["MinPrice"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, vector<string>> map1 = boost::any_cast<map<string, vector<string>>>(m["Properties"]);
      map<string, vector<string>> toMap1;
      for (auto item:map1) {
        vector<string> toVec2;
        if (typeid(vector<boost::any>) == item.second.type()) {
          vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item.second);
          for (auto item:vec2) {
             toVec2.push_back(boost::any_cast<string>(item));
          }
        }
         toMap1[item.first] = toVec2;
      }
      properties = make_shared<map<string, vector<string>>>(toMap1);
    }
    if (m.find("Prov") != m.end() && !m["Prov"].empty()) {
      prov = make_shared<string>(boost::any_cast<string>(m["Prov"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("ReservedPrice") != m.end() && !m["ReservedPrice"].empty()) {
      reservedPrice = make_shared<long>(boost::any_cast<long>(m["ReservedPrice"]));
    }
    if (m.find("SecuredTransactions") != m.end() && !m["SecuredTransactions"].empty()) {
      securedTransactions = make_shared<long>(boost::any_cast<long>(m["SecuredTransactions"]));
    }
    if (m.find("SimpleQuantity") != m.end() && !m["SimpleQuantity"].empty()) {
      simpleQuantity = make_shared<string>(boost::any_cast<string>(m["SimpleQuantity"]));
    }
    if (m.find("SkuModels") != m.end() && !m["SkuModels"].empty()) {
      if (typeid(vector<boost::any>) == m["SkuModels"].type()) {
        vector<ListDistributionItemWithoutCacheResponseBodyModelSkuModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkuModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDistributionItemWithoutCacheResponseBodyModelSkuModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skuModels = make_shared<vector<ListDistributionItemWithoutCacheResponseBodyModelSkuModels>>(expect1);
      }
    }
    if (m.find("SkuPropertys") != m.end() && !m["SkuPropertys"].empty()) {
      if (typeid(vector<boost::any>) == m["SkuPropertys"].type()) {
        vector<ListDistributionItemWithoutCacheResponseBodyModelSkuPropertys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkuPropertys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDistributionItemWithoutCacheResponseBodyModelSkuPropertys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skuPropertys = make_shared<vector<ListDistributionItemWithoutCacheResponseBodyModelSkuPropertys>>(expect1);
      }
    }
    if (m.find("ThirdPartyItemId") != m.end() && !m["ThirdPartyItemId"].empty()) {
      thirdPartyItemId = make_shared<string>(boost::any_cast<string>(m["ThirdPartyItemId"]));
    }
    if (m.find("ThirdPartyName") != m.end() && !m["ThirdPartyName"].empty()) {
      thirdPartyName = make_shared<string>(boost::any_cast<string>(m["ThirdPartyName"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<long>(boost::any_cast<long>(m["UserType"]));
    }
    if (m.find("VideoPicUrl") != m.end() && !m["VideoPicUrl"].empty()) {
      videoPicUrl = make_shared<string>(boost::any_cast<string>(m["VideoPicUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("VirtualItemType") != m.end() && !m["VirtualItemType"].empty()) {
      virtualItemType = make_shared<string>(boost::any_cast<string>(m["VirtualItemType"]));
    }
  }


  virtual ~ListDistributionItemWithoutCacheResponseBodyModel() = default;
};
class ListDistributionItemWithoutCacheResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<vector<ListDistributionItemWithoutCacheResponseBodyModel>> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListDistributionItemWithoutCacheResponseBody() {}

  explicit ListDistributionItemWithoutCacheResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      vector<boost::any> temp1;
      for(auto item1:*model){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Model"] = boost::any(temp1);
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(vector<boost::any>) == m["Model"].type()) {
        vector<ListDistributionItemWithoutCacheResponseBodyModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Model"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDistributionItemWithoutCacheResponseBodyModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        model = make_shared<vector<ListDistributionItemWithoutCacheResponseBodyModel>>(expect1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDistributionItemWithoutCacheResponseBody() = default;
};
class ListDistributionItemWithoutCacheResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDistributionItemWithoutCacheResponseBody> body{};

  ListDistributionItemWithoutCacheResponse() {}

  explicit ListDistributionItemWithoutCacheResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDistributionItemWithoutCacheResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDistributionItemWithoutCacheResponseBody>(model1);
      }
    }
  }


  virtual ~ListDistributionItemWithoutCacheResponse() = default;
};
class ListDistributionMallRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelSupplierId{};
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> distributionMallName{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> endDate{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startDate{};
  shared_ptr<string> tenantId{};

  ListDistributionMallRequest() {}

  explicit ListDistributionMallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelSupplierId) {
      res["ChannelSupplierId"] = boost::any(*channelSupplierId);
    }
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (distributionMallName) {
      res["DistributionMallName"] = boost::any(*distributionMallName);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelSupplierId") != m.end() && !m["ChannelSupplierId"].empty()) {
      channelSupplierId = make_shared<string>(boost::any_cast<string>(m["ChannelSupplierId"]));
    }
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("DistributionMallName") != m.end() && !m["DistributionMallName"].empty()) {
      distributionMallName = make_shared<string>(boost::any_cast<string>(m["DistributionMallName"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ListDistributionMallRequest() = default;
};
class ListDistributionMallResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> channelSupplierId{};
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> distributionMallName{};
  shared_ptr<string> distributionMallType{};
  shared_ptr<string> endDate{};
  shared_ptr<string> startDate{};
  shared_ptr<string> status{};

  ListDistributionMallResponseBodyModel() {}

  explicit ListDistributionMallResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelSupplierId) {
      res["ChannelSupplierId"] = boost::any(*channelSupplierId);
    }
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (distributionMallName) {
      res["DistributionMallName"] = boost::any(*distributionMallName);
    }
    if (distributionMallType) {
      res["DistributionMallType"] = boost::any(*distributionMallType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelSupplierId") != m.end() && !m["ChannelSupplierId"].empty()) {
      channelSupplierId = make_shared<string>(boost::any_cast<string>(m["ChannelSupplierId"]));
    }
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("DistributionMallName") != m.end() && !m["DistributionMallName"].empty()) {
      distributionMallName = make_shared<string>(boost::any_cast<string>(m["DistributionMallName"]));
    }
    if (m.find("DistributionMallType") != m.end() && !m["DistributionMallType"].empty()) {
      distributionMallType = make_shared<string>(boost::any_cast<string>(m["DistributionMallType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListDistributionMallResponseBodyModel() = default;
};
class ListDistributionMallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<vector<ListDistributionMallResponseBodyModel>> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListDistributionMallResponseBody() {}

  explicit ListDistributionMallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      vector<boost::any> temp1;
      for(auto item1:*model){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Model"] = boost::any(temp1);
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(vector<boost::any>) == m["Model"].type()) {
        vector<ListDistributionMallResponseBodyModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Model"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDistributionMallResponseBodyModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        model = make_shared<vector<ListDistributionMallResponseBodyModel>>(expect1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDistributionMallResponseBody() = default;
};
class ListDistributionMallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDistributionMallResponseBody> body{};

  ListDistributionMallResponse() {}

  explicit ListDistributionMallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDistributionMallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDistributionMallResponseBody>(model1);
      }
    }
  }


  virtual ~ListDistributionMallResponse() = default;
};
class ModifyRefund4DistributionRequestLeavePictureLists : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> picture{};

  ModifyRefund4DistributionRequestLeavePictureLists() {}

  explicit ModifyRefund4DistributionRequestLeavePictureLists(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (picture) {
      res["Picture"] = boost::any(*picture);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Picture") != m.end() && !m["Picture"].empty()) {
      picture = make_shared<string>(boost::any_cast<string>(m["Picture"]));
    }
  }


  virtual ~ModifyRefund4DistributionRequestLeavePictureLists() = default;
};
class ModifyRefund4DistributionRequest : public Darabonba::Model {
public:
  shared_ptr<long> applyReasonTextId{};
  shared_ptr<long> applyRefundCount{};
  shared_ptr<long> applyRefundFee{};
  shared_ptr<long> bizClaimType{};
  shared_ptr<long> disputeId{};
  shared_ptr<string> distributorId{};
  shared_ptr<long> goodsStatus{};
  shared_ptr<string> leaveMessage{};
  shared_ptr<vector<ModifyRefund4DistributionRequestLeavePictureLists>> leavePictureLists{};
  shared_ptr<string> subDistributionOrderId{};
  shared_ptr<string> tenantId{};

  ModifyRefund4DistributionRequest() {}

  explicit ModifyRefund4DistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyReasonTextId) {
      res["ApplyReasonTextId"] = boost::any(*applyReasonTextId);
    }
    if (applyRefundCount) {
      res["ApplyRefundCount"] = boost::any(*applyRefundCount);
    }
    if (applyRefundFee) {
      res["ApplyRefundFee"] = boost::any(*applyRefundFee);
    }
    if (bizClaimType) {
      res["BizClaimType"] = boost::any(*bizClaimType);
    }
    if (disputeId) {
      res["DisputeId"] = boost::any(*disputeId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (goodsStatus) {
      res["GoodsStatus"] = boost::any(*goodsStatus);
    }
    if (leaveMessage) {
      res["LeaveMessage"] = boost::any(*leaveMessage);
    }
    if (leavePictureLists) {
      vector<boost::any> temp1;
      for(auto item1:*leavePictureLists){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LeavePictureLists"] = boost::any(temp1);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyReasonTextId") != m.end() && !m["ApplyReasonTextId"].empty()) {
      applyReasonTextId = make_shared<long>(boost::any_cast<long>(m["ApplyReasonTextId"]));
    }
    if (m.find("ApplyRefundCount") != m.end() && !m["ApplyRefundCount"].empty()) {
      applyRefundCount = make_shared<long>(boost::any_cast<long>(m["ApplyRefundCount"]));
    }
    if (m.find("ApplyRefundFee") != m.end() && !m["ApplyRefundFee"].empty()) {
      applyRefundFee = make_shared<long>(boost::any_cast<long>(m["ApplyRefundFee"]));
    }
    if (m.find("BizClaimType") != m.end() && !m["BizClaimType"].empty()) {
      bizClaimType = make_shared<long>(boost::any_cast<long>(m["BizClaimType"]));
    }
    if (m.find("DisputeId") != m.end() && !m["DisputeId"].empty()) {
      disputeId = make_shared<long>(boost::any_cast<long>(m["DisputeId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("GoodsStatus") != m.end() && !m["GoodsStatus"].empty()) {
      goodsStatus = make_shared<long>(boost::any_cast<long>(m["GoodsStatus"]));
    }
    if (m.find("LeaveMessage") != m.end() && !m["LeaveMessage"].empty()) {
      leaveMessage = make_shared<string>(boost::any_cast<string>(m["LeaveMessage"]));
    }
    if (m.find("LeavePictureLists") != m.end() && !m["LeavePictureLists"].empty()) {
      if (typeid(vector<boost::any>) == m["LeavePictureLists"].type()) {
        vector<ModifyRefund4DistributionRequestLeavePictureLists> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LeavePictureLists"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyRefund4DistributionRequestLeavePictureLists model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        leavePictureLists = make_shared<vector<ModifyRefund4DistributionRequestLeavePictureLists>>(expect1);
      }
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ModifyRefund4DistributionRequest() = default;
};
class ModifyRefund4DistributionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> applyReasonTextId{};
  shared_ptr<long> applyRefundCount{};
  shared_ptr<long> applyRefundFee{};
  shared_ptr<long> bizClaimType{};
  shared_ptr<long> disputeId{};
  shared_ptr<string> distributorId{};
  shared_ptr<long> goodsStatus{};
  shared_ptr<string> leaveMessage{};
  shared_ptr<string> leavePictureListsShrink{};
  shared_ptr<string> subDistributionOrderId{};
  shared_ptr<string> tenantId{};

  ModifyRefund4DistributionShrinkRequest() {}

  explicit ModifyRefund4DistributionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyReasonTextId) {
      res["ApplyReasonTextId"] = boost::any(*applyReasonTextId);
    }
    if (applyRefundCount) {
      res["ApplyRefundCount"] = boost::any(*applyRefundCount);
    }
    if (applyRefundFee) {
      res["ApplyRefundFee"] = boost::any(*applyRefundFee);
    }
    if (bizClaimType) {
      res["BizClaimType"] = boost::any(*bizClaimType);
    }
    if (disputeId) {
      res["DisputeId"] = boost::any(*disputeId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (goodsStatus) {
      res["GoodsStatus"] = boost::any(*goodsStatus);
    }
    if (leaveMessage) {
      res["LeaveMessage"] = boost::any(*leaveMessage);
    }
    if (leavePictureListsShrink) {
      res["LeavePictureLists"] = boost::any(*leavePictureListsShrink);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyReasonTextId") != m.end() && !m["ApplyReasonTextId"].empty()) {
      applyReasonTextId = make_shared<long>(boost::any_cast<long>(m["ApplyReasonTextId"]));
    }
    if (m.find("ApplyRefundCount") != m.end() && !m["ApplyRefundCount"].empty()) {
      applyRefundCount = make_shared<long>(boost::any_cast<long>(m["ApplyRefundCount"]));
    }
    if (m.find("ApplyRefundFee") != m.end() && !m["ApplyRefundFee"].empty()) {
      applyRefundFee = make_shared<long>(boost::any_cast<long>(m["ApplyRefundFee"]));
    }
    if (m.find("BizClaimType") != m.end() && !m["BizClaimType"].empty()) {
      bizClaimType = make_shared<long>(boost::any_cast<long>(m["BizClaimType"]));
    }
    if (m.find("DisputeId") != m.end() && !m["DisputeId"].empty()) {
      disputeId = make_shared<long>(boost::any_cast<long>(m["DisputeId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("GoodsStatus") != m.end() && !m["GoodsStatus"].empty()) {
      goodsStatus = make_shared<long>(boost::any_cast<long>(m["GoodsStatus"]));
    }
    if (m.find("LeaveMessage") != m.end() && !m["LeaveMessage"].empty()) {
      leaveMessage = make_shared<string>(boost::any_cast<string>(m["LeaveMessage"]));
    }
    if (m.find("LeavePictureLists") != m.end() && !m["LeavePictureLists"].empty()) {
      leavePictureListsShrink = make_shared<string>(boost::any_cast<string>(m["LeavePictureLists"]));
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~ModifyRefund4DistributionShrinkRequest() = default;
};
class ModifyRefund4DistributionResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<long> disputeId{};
  shared_ptr<long> disputeStatus{};
  shared_ptr<long> disputeType{};
  shared_ptr<string> subDistributionOrderId{};

  ModifyRefund4DistributionResponseBodyModel() {}

  explicit ModifyRefund4DistributionResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disputeId) {
      res["DisputeId"] = boost::any(*disputeId);
    }
    if (disputeStatus) {
      res["DisputeStatus"] = boost::any(*disputeStatus);
    }
    if (disputeType) {
      res["DisputeType"] = boost::any(*disputeType);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisputeId") != m.end() && !m["DisputeId"].empty()) {
      disputeId = make_shared<long>(boost::any_cast<long>(m["DisputeId"]));
    }
    if (m.find("DisputeStatus") != m.end() && !m["DisputeStatus"].empty()) {
      disputeStatus = make_shared<long>(boost::any_cast<long>(m["DisputeStatus"]));
    }
    if (m.find("DisputeType") != m.end() && !m["DisputeType"].empty()) {
      disputeType = make_shared<long>(boost::any_cast<long>(m["DisputeType"]));
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
  }


  virtual ~ModifyRefund4DistributionResponseBodyModel() = default;
};
class ModifyRefund4DistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<ModifyRefund4DistributionResponseBodyModel> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ModifyRefund4DistributionResponseBody() {}

  explicit ModifyRefund4DistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        ModifyRefund4DistributionResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<ModifyRefund4DistributionResponseBodyModel>(model1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ModifyRefund4DistributionResponseBody() = default;
};
class ModifyRefund4DistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyRefund4DistributionResponseBody> body{};

  ModifyRefund4DistributionResponse() {}

  explicit ModifyRefund4DistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyRefund4DistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyRefund4DistributionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyRefund4DistributionResponse() = default;
};
class QueryChildDivisionCodeByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> distributorId{};
  shared_ptr<string> divisionCode{};
  shared_ptr<string> tenantId{};

  QueryChildDivisionCodeByIdRequest() {}

  explicit QueryChildDivisionCodeByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (divisionCode) {
      res["DivisionCode"] = boost::any(*divisionCode);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("DivisionCode") != m.end() && !m["DivisionCode"].empty()) {
      divisionCode = make_shared<string>(boost::any_cast<string>(m["DivisionCode"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryChildDivisionCodeByIdRequest() = default;
};
class QueryChildDivisionCodeByIdResponseBodyModelDivisionList : public Darabonba::Model {
public:
  shared_ptr<long> divisionCode{};
  shared_ptr<long> divisionLevel{};
  shared_ptr<string> divisionName{};
  shared_ptr<long> parentId{};
  shared_ptr<string> pinyin{};

  QueryChildDivisionCodeByIdResponseBodyModelDivisionList() {}

  explicit QueryChildDivisionCodeByIdResponseBodyModelDivisionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (divisionCode) {
      res["DivisionCode"] = boost::any(*divisionCode);
    }
    if (divisionLevel) {
      res["DivisionLevel"] = boost::any(*divisionLevel);
    }
    if (divisionName) {
      res["DivisionName"] = boost::any(*divisionName);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (pinyin) {
      res["Pinyin"] = boost::any(*pinyin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DivisionCode") != m.end() && !m["DivisionCode"].empty()) {
      divisionCode = make_shared<long>(boost::any_cast<long>(m["DivisionCode"]));
    }
    if (m.find("DivisionLevel") != m.end() && !m["DivisionLevel"].empty()) {
      divisionLevel = make_shared<long>(boost::any_cast<long>(m["DivisionLevel"]));
    }
    if (m.find("DivisionName") != m.end() && !m["DivisionName"].empty()) {
      divisionName = make_shared<string>(boost::any_cast<string>(m["DivisionName"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<long>(boost::any_cast<long>(m["ParentId"]));
    }
    if (m.find("Pinyin") != m.end() && !m["Pinyin"].empty()) {
      pinyin = make_shared<string>(boost::any_cast<string>(m["Pinyin"]));
    }
  }


  virtual ~QueryChildDivisionCodeByIdResponseBodyModelDivisionList() = default;
};
class QueryChildDivisionCodeByIdResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<QueryChildDivisionCodeByIdResponseBodyModelDivisionList>> divisionList{};

  QueryChildDivisionCodeByIdResponseBodyModel() {}

  explicit QueryChildDivisionCodeByIdResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (divisionList) {
      vector<boost::any> temp1;
      for(auto item1:*divisionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DivisionList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DivisionList") != m.end() && !m["DivisionList"].empty()) {
      if (typeid(vector<boost::any>) == m["DivisionList"].type()) {
        vector<QueryChildDivisionCodeByIdResponseBodyModelDivisionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DivisionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryChildDivisionCodeByIdResponseBodyModelDivisionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        divisionList = make_shared<vector<QueryChildDivisionCodeByIdResponseBodyModelDivisionList>>(expect1);
      }
    }
  }


  virtual ~QueryChildDivisionCodeByIdResponseBodyModel() = default;
};
class QueryChildDivisionCodeByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<QueryChildDivisionCodeByIdResponseBodyModel> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  QueryChildDivisionCodeByIdResponseBody() {}

  explicit QueryChildDivisionCodeByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        QueryChildDivisionCodeByIdResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<QueryChildDivisionCodeByIdResponseBodyModel>(model1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryChildDivisionCodeByIdResponseBody() = default;
};
class QueryChildDivisionCodeByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryChildDivisionCodeByIdResponseBody> body{};

  QueryChildDivisionCodeByIdResponse() {}

  explicit QueryChildDivisionCodeByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryChildDivisionCodeByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryChildDivisionCodeByIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryChildDivisionCodeByIdResponse() = default;
};
class QueryDistributionBillDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> billPeriod{};
  shared_ptr<string> billStatus{};
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> distributionMallName{};
  shared_ptr<string> distributorId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> tenantId{};

  QueryDistributionBillDetailRequest() {}

  explicit QueryDistributionBillDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["BillId"] = boost::any(*billId);
    }
    if (billPeriod) {
      res["BillPeriod"] = boost::any(*billPeriod);
    }
    if (billStatus) {
      res["BillStatus"] = boost::any(*billStatus);
    }
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (distributionMallName) {
      res["DistributionMallName"] = boost::any(*distributionMallName);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillId") != m.end() && !m["BillId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["BillId"]));
    }
    if (m.find("BillPeriod") != m.end() && !m["BillPeriod"].empty()) {
      billPeriod = make_shared<string>(boost::any_cast<string>(m["BillPeriod"]));
    }
    if (m.find("BillStatus") != m.end() && !m["BillStatus"].empty()) {
      billStatus = make_shared<string>(boost::any_cast<string>(m["BillStatus"]));
    }
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("DistributionMallName") != m.end() && !m["DistributionMallName"].empty()) {
      distributionMallName = make_shared<string>(boost::any_cast<string>(m["DistributionMallName"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryDistributionBillDetailRequest() = default;
};
class QueryDistributionBillDetailResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<string>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryDistributionBillDetailResponseBodyModel() {}

  explicit QueryDistributionBillDetailResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryDistributionBillDetailResponseBodyModel() = default;
};
class QueryDistributionBillDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<QueryDistributionBillDetailResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};

  QueryDistributionBillDetailResponseBody() {}

  explicit QueryDistributionBillDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        QueryDistributionBillDetailResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<QueryDistributionBillDetailResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDistributionBillDetailResponseBody() = default;
};
class QueryDistributionBillDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDistributionBillDetailResponseBody> body{};

  QueryDistributionBillDetailResponse() {}

  explicit QueryDistributionBillDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDistributionBillDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDistributionBillDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDistributionBillDetailResponse() = default;
};
class QueryDistributionMallRequest : public Darabonba::Model {
public:
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> tenantId{};

  QueryDistributionMallRequest() {}

  explicit QueryDistributionMallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryDistributionMallRequest() = default;
};
class QueryDistributionMallResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> channelSupplierId{};
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> distributionMallName{};
  shared_ptr<string> distributionMallType{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> endDate{};
  shared_ptr<string> startDate{};
  shared_ptr<string> status{};

  QueryDistributionMallResponseBodyModel() {}

  explicit QueryDistributionMallResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelSupplierId) {
      res["ChannelSupplierId"] = boost::any(*channelSupplierId);
    }
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (distributionMallName) {
      res["DistributionMallName"] = boost::any(*distributionMallName);
    }
    if (distributionMallType) {
      res["DistributionMallType"] = boost::any(*distributionMallType);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelSupplierId") != m.end() && !m["ChannelSupplierId"].empty()) {
      channelSupplierId = make_shared<string>(boost::any_cast<string>(m["ChannelSupplierId"]));
    }
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("DistributionMallName") != m.end() && !m["DistributionMallName"].empty()) {
      distributionMallName = make_shared<string>(boost::any_cast<string>(m["DistributionMallName"]));
    }
    if (m.find("DistributionMallType") != m.end() && !m["DistributionMallType"].empty()) {
      distributionMallType = make_shared<string>(boost::any_cast<string>(m["DistributionMallType"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryDistributionMallResponseBodyModel() = default;
};
class QueryDistributionMallResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> bizViewData{};
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<QueryDistributionMallResponseBodyModel> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  QueryDistributionMallResponseBody() {}

  explicit QueryDistributionMallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizViewData) {
      res["BizViewData"] = boost::any(*bizViewData);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("BizViewData") != m.end() && !m["BizViewData"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizViewData"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizViewData = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        QueryDistributionMallResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<QueryDistributionMallResponseBodyModel>(model1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryDistributionMallResponseBody() = default;
};
class QueryDistributionMallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDistributionMallResponseBody> body{};

  QueryDistributionMallResponse() {}

  explicit QueryDistributionMallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDistributionMallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDistributionMallResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDistributionMallResponse() = default;
};
class QueryDistributionTradeStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> distributionSupplierId{};
  shared_ptr<string> distributionTradeId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> tenantId{};

  QueryDistributionTradeStatusRequest() {}

  explicit QueryDistributionTradeStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributionSupplierId) {
      res["DistributionSupplierId"] = boost::any(*distributionSupplierId);
    }
    if (distributionTradeId) {
      res["DistributionTradeId"] = boost::any(*distributionTradeId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributionSupplierId") != m.end() && !m["DistributionSupplierId"].empty()) {
      distributionSupplierId = make_shared<string>(boost::any_cast<string>(m["DistributionSupplierId"]));
    }
    if (m.find("DistributionTradeId") != m.end() && !m["DistributionTradeId"].empty()) {
      distributionTradeId = make_shared<string>(boost::any_cast<string>(m["DistributionTradeId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryDistributionTradeStatusRequest() = default;
};
class QueryDistributionTradeStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<string> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  QueryDistributionTradeStatusResponseBody() {}

  explicit QueryDistributionTradeStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = boost::any(*model);
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryDistributionTradeStatusResponseBody() = default;
};
class QueryDistributionTradeStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDistributionTradeStatusResponseBody> body{};

  QueryDistributionTradeStatusResponse() {}

  explicit QueryDistributionTradeStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDistributionTradeStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDistributionTradeStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDistributionTradeStatusResponse() = default;
};
class QueryItemDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> lmItemId{};
  shared_ptr<string> tenantId{};

  QueryItemDetailRequest() {}

  explicit QueryItemDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryItemDetailRequest() = default;
};
class QueryItemDetailResponseBodyModelSkuModels : public Darabonba::Model {
public:
  shared_ptr<string> canNotBeSoldCode{};
  shared_ptr<string> canNotBeSoldMessage{};
  shared_ptr<map<string, string>> customizedAttributeMap{};
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> extJson{};
  shared_ptr<bool> hasQuantity{};
  shared_ptr<long> invoiceType{};
  shared_ptr<long> itemId{};
  shared_ptr<string> lmItemId{};
  shared_ptr<map<string, string>> lmSkuAttributeMap{};
  shared_ptr<long> priceCent{};
  shared_ptr<long> quantity{};
  shared_ptr<long> reservedPrice{};
  shared_ptr<string> simpleQuantity{};
  shared_ptr<long> skuId{};
  shared_ptr<string> skuPicUrl{};
  shared_ptr<string> skuPvs{};
  shared_ptr<string> skuTitle{};
  shared_ptr<long> status{};

  QueryItemDetailResponseBodyModelSkuModels() {}

  explicit QueryItemDetailResponseBodyModelSkuModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canNotBeSoldCode) {
      res["CanNotBeSoldCode"] = boost::any(*canNotBeSoldCode);
    }
    if (canNotBeSoldMessage) {
      res["CanNotBeSoldMessage"] = boost::any(*canNotBeSoldMessage);
    }
    if (customizedAttributeMap) {
      res["CustomizedAttributeMap"] = boost::any(*customizedAttributeMap);
    }
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (extJson) {
      res["ExtJson"] = boost::any(*extJson);
    }
    if (hasQuantity) {
      res["HasQuantity"] = boost::any(*hasQuantity);
    }
    if (invoiceType) {
      res["InvoiceType"] = boost::any(*invoiceType);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (lmSkuAttributeMap) {
      res["LmSkuAttributeMap"] = boost::any(*lmSkuAttributeMap);
    }
    if (priceCent) {
      res["PriceCent"] = boost::any(*priceCent);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (reservedPrice) {
      res["ReservedPrice"] = boost::any(*reservedPrice);
    }
    if (simpleQuantity) {
      res["SimpleQuantity"] = boost::any(*simpleQuantity);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (skuPicUrl) {
      res["SkuPicUrl"] = boost::any(*skuPicUrl);
    }
    if (skuPvs) {
      res["SkuPvs"] = boost::any(*skuPvs);
    }
    if (skuTitle) {
      res["SkuTitle"] = boost::any(*skuTitle);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanNotBeSoldCode") != m.end() && !m["CanNotBeSoldCode"].empty()) {
      canNotBeSoldCode = make_shared<string>(boost::any_cast<string>(m["CanNotBeSoldCode"]));
    }
    if (m.find("CanNotBeSoldMessage") != m.end() && !m["CanNotBeSoldMessage"].empty()) {
      canNotBeSoldMessage = make_shared<string>(boost::any_cast<string>(m["CanNotBeSoldMessage"]));
    }
    if (m.find("CustomizedAttributeMap") != m.end() && !m["CustomizedAttributeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["CustomizedAttributeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customizedAttributeMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("ExtJson") != m.end() && !m["ExtJson"].empty()) {
      extJson = make_shared<string>(boost::any_cast<string>(m["ExtJson"]));
    }
    if (m.find("HasQuantity") != m.end() && !m["HasQuantity"].empty()) {
      hasQuantity = make_shared<bool>(boost::any_cast<bool>(m["HasQuantity"]));
    }
    if (m.find("InvoiceType") != m.end() && !m["InvoiceType"].empty()) {
      invoiceType = make_shared<long>(boost::any_cast<long>(m["InvoiceType"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("LmSkuAttributeMap") != m.end() && !m["LmSkuAttributeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["LmSkuAttributeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      lmSkuAttributeMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PriceCent") != m.end() && !m["PriceCent"].empty()) {
      priceCent = make_shared<long>(boost::any_cast<long>(m["PriceCent"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("ReservedPrice") != m.end() && !m["ReservedPrice"].empty()) {
      reservedPrice = make_shared<long>(boost::any_cast<long>(m["ReservedPrice"]));
    }
    if (m.find("SimpleQuantity") != m.end() && !m["SimpleQuantity"].empty()) {
      simpleQuantity = make_shared<string>(boost::any_cast<string>(m["SimpleQuantity"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<long>(boost::any_cast<long>(m["SkuId"]));
    }
    if (m.find("SkuPicUrl") != m.end() && !m["SkuPicUrl"].empty()) {
      skuPicUrl = make_shared<string>(boost::any_cast<string>(m["SkuPicUrl"]));
    }
    if (m.find("SkuPvs") != m.end() && !m["SkuPvs"].empty()) {
      skuPvs = make_shared<string>(boost::any_cast<string>(m["SkuPvs"]));
    }
    if (m.find("SkuTitle") != m.end() && !m["SkuTitle"].empty()) {
      skuTitle = make_shared<string>(boost::any_cast<string>(m["SkuTitle"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~QueryItemDetailResponseBodyModelSkuModels() = default;
};
class QueryItemDetailResponseBodyModelSkuPropertysValues : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> text{};

  QueryItemDetailResponseBodyModelSkuPropertysValues() {}

  explicit QueryItemDetailResponseBodyModelSkuPropertysValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~QueryItemDetailResponseBodyModelSkuPropertysValues() = default;
};
class QueryItemDetailResponseBodyModelSkuPropertys : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> text{};
  shared_ptr<vector<QueryItemDetailResponseBodyModelSkuPropertysValues>> values{};

  QueryItemDetailResponseBodyModelSkuPropertys() {}

  explicit QueryItemDetailResponseBodyModelSkuPropertys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<QueryItemDetailResponseBodyModelSkuPropertysValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryItemDetailResponseBodyModelSkuPropertysValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<QueryItemDetailResponseBodyModelSkuPropertysValues>>(expect1);
      }
    }
  }


  virtual ~QueryItemDetailResponseBodyModelSkuPropertys() = default;
};
class QueryItemDetailResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> canNotBeSoldCode{};
  shared_ptr<string> canNotBeSoldMessage{};
  shared_ptr<long> categoryId{};
  shared_ptr<vector<long>> categoryIds{};
  shared_ptr<string> city{};
  shared_ptr<string> current{};
  shared_ptr<map<string, string>> customizedAttributeMap{};
  shared_ptr<string> descOption{};
  shared_ptr<string> descPath{};
  shared_ptr<string> distributionMallId{};
  shared_ptr<map<string, string>> features{};
  shared_ptr<string> firstPicUrl{};
  shared_ptr<bool> hasQuantity{};
  shared_ptr<vector<map<string, string>>> iforestProps{};
  shared_ptr<long> invoiceType{};
  shared_ptr<bool> isCanSell{};
  shared_ptr<bool> isSellerPayPostfee{};
  shared_ptr<long> itemId{};
  shared_ptr<vector<string>> itemImages{};
  shared_ptr<string> itemTitle{};
  shared_ptr<string> itemTotalSimpleValue{};
  shared_ptr<long> itemTotalValue{};
  shared_ptr<map<string, string>> lmItemAttributeMap{};
  shared_ptr<string> lmItemCategory{};
  shared_ptr<string> lmItemId{};
  shared_ptr<string> mainPicUrl{};
  shared_ptr<long> minPrice{};
  shared_ptr<map<string, vector<string>>> properties{};
  shared_ptr<string> prov{};
  shared_ptr<long> quantity{};
  shared_ptr<long> reservedPrice{};
  shared_ptr<string> simpleQuantity{};
  shared_ptr<vector<QueryItemDetailResponseBodyModelSkuModels>> skuModels{};
  shared_ptr<vector<QueryItemDetailResponseBodyModelSkuPropertys>> skuPropertys{};
  shared_ptr<string> thirdPartyItemId{};
  shared_ptr<string> thirdPartyName{};
  shared_ptr<string> videoPicUrl{};
  shared_ptr<string> videoUrl{};
  shared_ptr<string> virtualItemType{};

  QueryItemDetailResponseBodyModel() {}

  explicit QueryItemDetailResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canNotBeSoldCode) {
      res["CanNotBeSoldCode"] = boost::any(*canNotBeSoldCode);
    }
    if (canNotBeSoldMessage) {
      res["CanNotBeSoldMessage"] = boost::any(*canNotBeSoldMessage);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (categoryIds) {
      res["CategoryIds"] = boost::any(*categoryIds);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (customizedAttributeMap) {
      res["CustomizedAttributeMap"] = boost::any(*customizedAttributeMap);
    }
    if (descOption) {
      res["DescOption"] = boost::any(*descOption);
    }
    if (descPath) {
      res["DescPath"] = boost::any(*descPath);
    }
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (features) {
      res["Features"] = boost::any(*features);
    }
    if (firstPicUrl) {
      res["FirstPicUrl"] = boost::any(*firstPicUrl);
    }
    if (hasQuantity) {
      res["HasQuantity"] = boost::any(*hasQuantity);
    }
    if (iforestProps) {
      res["IforestProps"] = boost::any(*iforestProps);
    }
    if (invoiceType) {
      res["InvoiceType"] = boost::any(*invoiceType);
    }
    if (isCanSell) {
      res["IsCanSell"] = boost::any(*isCanSell);
    }
    if (isSellerPayPostfee) {
      res["IsSellerPayPostfee"] = boost::any(*isSellerPayPostfee);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemImages) {
      res["ItemImages"] = boost::any(*itemImages);
    }
    if (itemTitle) {
      res["ItemTitle"] = boost::any(*itemTitle);
    }
    if (itemTotalSimpleValue) {
      res["ItemTotalSimpleValue"] = boost::any(*itemTotalSimpleValue);
    }
    if (itemTotalValue) {
      res["ItemTotalValue"] = boost::any(*itemTotalValue);
    }
    if (lmItemAttributeMap) {
      res["LmItemAttributeMap"] = boost::any(*lmItemAttributeMap);
    }
    if (lmItemCategory) {
      res["LmItemCategory"] = boost::any(*lmItemCategory);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (mainPicUrl) {
      res["MainPicUrl"] = boost::any(*mainPicUrl);
    }
    if (minPrice) {
      res["MinPrice"] = boost::any(*minPrice);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (prov) {
      res["Prov"] = boost::any(*prov);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (reservedPrice) {
      res["ReservedPrice"] = boost::any(*reservedPrice);
    }
    if (simpleQuantity) {
      res["SimpleQuantity"] = boost::any(*simpleQuantity);
    }
    if (skuModels) {
      vector<boost::any> temp1;
      for(auto item1:*skuModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkuModels"] = boost::any(temp1);
    }
    if (skuPropertys) {
      vector<boost::any> temp1;
      for(auto item1:*skuPropertys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkuPropertys"] = boost::any(temp1);
    }
    if (thirdPartyItemId) {
      res["ThirdPartyItemId"] = boost::any(*thirdPartyItemId);
    }
    if (thirdPartyName) {
      res["ThirdPartyName"] = boost::any(*thirdPartyName);
    }
    if (videoPicUrl) {
      res["VideoPicUrl"] = boost::any(*videoPicUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (virtualItemType) {
      res["VirtualItemType"] = boost::any(*virtualItemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanNotBeSoldCode") != m.end() && !m["CanNotBeSoldCode"].empty()) {
      canNotBeSoldCode = make_shared<string>(boost::any_cast<string>(m["CanNotBeSoldCode"]));
    }
    if (m.find("CanNotBeSoldMessage") != m.end() && !m["CanNotBeSoldMessage"].empty()) {
      canNotBeSoldMessage = make_shared<string>(boost::any_cast<string>(m["CanNotBeSoldMessage"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CategoryIds") != m.end() && !m["CategoryIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CategoryIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CategoryIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      categoryIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<string>(boost::any_cast<string>(m["Current"]));
    }
    if (m.find("CustomizedAttributeMap") != m.end() && !m["CustomizedAttributeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["CustomizedAttributeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customizedAttributeMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("DescOption") != m.end() && !m["DescOption"].empty()) {
      descOption = make_shared<string>(boost::any_cast<string>(m["DescOption"]));
    }
    if (m.find("DescPath") != m.end() && !m["DescPath"].empty()) {
      descPath = make_shared<string>(boost::any_cast<string>(m["DescPath"]));
    }
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Features"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      features = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("FirstPicUrl") != m.end() && !m["FirstPicUrl"].empty()) {
      firstPicUrl = make_shared<string>(boost::any_cast<string>(m["FirstPicUrl"]));
    }
    if (m.find("HasQuantity") != m.end() && !m["HasQuantity"].empty()) {
      hasQuantity = make_shared<bool>(boost::any_cast<bool>(m["HasQuantity"]));
    }
    if (m.find("IforestProps") != m.end() && !m["IforestProps"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["IforestProps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IforestProps"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      iforestProps = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("InvoiceType") != m.end() && !m["InvoiceType"].empty()) {
      invoiceType = make_shared<long>(boost::any_cast<long>(m["InvoiceType"]));
    }
    if (m.find("IsCanSell") != m.end() && !m["IsCanSell"].empty()) {
      isCanSell = make_shared<bool>(boost::any_cast<bool>(m["IsCanSell"]));
    }
    if (m.find("IsSellerPayPostfee") != m.end() && !m["IsSellerPayPostfee"].empty()) {
      isSellerPayPostfee = make_shared<bool>(boost::any_cast<bool>(m["IsSellerPayPostfee"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemImages") != m.end() && !m["ItemImages"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ItemImages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ItemImages"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      itemImages = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ItemTitle") != m.end() && !m["ItemTitle"].empty()) {
      itemTitle = make_shared<string>(boost::any_cast<string>(m["ItemTitle"]));
    }
    if (m.find("ItemTotalSimpleValue") != m.end() && !m["ItemTotalSimpleValue"].empty()) {
      itemTotalSimpleValue = make_shared<string>(boost::any_cast<string>(m["ItemTotalSimpleValue"]));
    }
    if (m.find("ItemTotalValue") != m.end() && !m["ItemTotalValue"].empty()) {
      itemTotalValue = make_shared<long>(boost::any_cast<long>(m["ItemTotalValue"]));
    }
    if (m.find("LmItemAttributeMap") != m.end() && !m["LmItemAttributeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["LmItemAttributeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      lmItemAttributeMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("LmItemCategory") != m.end() && !m["LmItemCategory"].empty()) {
      lmItemCategory = make_shared<string>(boost::any_cast<string>(m["LmItemCategory"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("MainPicUrl") != m.end() && !m["MainPicUrl"].empty()) {
      mainPicUrl = make_shared<string>(boost::any_cast<string>(m["MainPicUrl"]));
    }
    if (m.find("MinPrice") != m.end() && !m["MinPrice"].empty()) {
      minPrice = make_shared<long>(boost::any_cast<long>(m["MinPrice"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, vector<string>> map1 = boost::any_cast<map<string, vector<string>>>(m["Properties"]);
      map<string, vector<string>> toMap1;
      for (auto item:map1) {
        vector<string> toVec2;
        if (typeid(vector<boost::any>) == item.second.type()) {
          vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item.second);
          for (auto item:vec2) {
             toVec2.push_back(boost::any_cast<string>(item));
          }
        }
         toMap1[item.first] = toVec2;
      }
      properties = make_shared<map<string, vector<string>>>(toMap1);
    }
    if (m.find("Prov") != m.end() && !m["Prov"].empty()) {
      prov = make_shared<string>(boost::any_cast<string>(m["Prov"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("ReservedPrice") != m.end() && !m["ReservedPrice"].empty()) {
      reservedPrice = make_shared<long>(boost::any_cast<long>(m["ReservedPrice"]));
    }
    if (m.find("SimpleQuantity") != m.end() && !m["SimpleQuantity"].empty()) {
      simpleQuantity = make_shared<string>(boost::any_cast<string>(m["SimpleQuantity"]));
    }
    if (m.find("SkuModels") != m.end() && !m["SkuModels"].empty()) {
      if (typeid(vector<boost::any>) == m["SkuModels"].type()) {
        vector<QueryItemDetailResponseBodyModelSkuModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkuModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryItemDetailResponseBodyModelSkuModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skuModels = make_shared<vector<QueryItemDetailResponseBodyModelSkuModels>>(expect1);
      }
    }
    if (m.find("SkuPropertys") != m.end() && !m["SkuPropertys"].empty()) {
      if (typeid(vector<boost::any>) == m["SkuPropertys"].type()) {
        vector<QueryItemDetailResponseBodyModelSkuPropertys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkuPropertys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryItemDetailResponseBodyModelSkuPropertys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skuPropertys = make_shared<vector<QueryItemDetailResponseBodyModelSkuPropertys>>(expect1);
      }
    }
    if (m.find("ThirdPartyItemId") != m.end() && !m["ThirdPartyItemId"].empty()) {
      thirdPartyItemId = make_shared<string>(boost::any_cast<string>(m["ThirdPartyItemId"]));
    }
    if (m.find("ThirdPartyName") != m.end() && !m["ThirdPartyName"].empty()) {
      thirdPartyName = make_shared<string>(boost::any_cast<string>(m["ThirdPartyName"]));
    }
    if (m.find("VideoPicUrl") != m.end() && !m["VideoPicUrl"].empty()) {
      videoPicUrl = make_shared<string>(boost::any_cast<string>(m["VideoPicUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("VirtualItemType") != m.end() && !m["VirtualItemType"].empty()) {
      virtualItemType = make_shared<string>(boost::any_cast<string>(m["VirtualItemType"]));
    }
  }


  virtual ~QueryItemDetailResponseBodyModel() = default;
};
class QueryItemDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> bizViewData{};
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<QueryItemDetailResponseBodyModel> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  QueryItemDetailResponseBody() {}

  explicit QueryItemDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizViewData) {
      res["BizViewData"] = boost::any(*bizViewData);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("BizViewData") != m.end() && !m["BizViewData"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["BizViewData"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      bizViewData = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        QueryItemDetailResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<QueryItemDetailResponseBodyModel>(model1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryItemDetailResponseBody() = default;
};
class QueryItemDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryItemDetailResponseBody> body{};

  QueryItemDetailResponse() {}

  explicit QueryItemDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryItemDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryItemDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryItemDetailResponse() = default;
};
class QueryItemDetailWithDivisionRequest : public Darabonba::Model {
public:
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> divisionCode{};
  shared_ptr<string> lmItemId{};
  shared_ptr<string> tenantId{};

  QueryItemDetailWithDivisionRequest() {}

  explicit QueryItemDetailWithDivisionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (divisionCode) {
      res["DivisionCode"] = boost::any(*divisionCode);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("DivisionCode") != m.end() && !m["DivisionCode"].empty()) {
      divisionCode = make_shared<string>(boost::any_cast<string>(m["DivisionCode"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryItemDetailWithDivisionRequest() = default;
};
class QueryItemDetailWithDivisionResponseBodyModelSkuModels : public Darabonba::Model {
public:
  shared_ptr<string> canNotBeSoldCode{};
  shared_ptr<string> canNotBeSoldMassage{};
  shared_ptr<map<string, string>> customizedAttributeMap{};
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> extJson{};
  shared_ptr<bool> hasQuantity{};
  shared_ptr<long> invoiceType{};
  shared_ptr<long> itemId{};
  shared_ptr<string> lmItemId{};
  shared_ptr<map<string, string>> lmSkuAttributeMap{};
  shared_ptr<long> priceCent{};
  shared_ptr<long> quantity{};
  shared_ptr<long> reservePrice{};
  shared_ptr<string> simpleQuantity{};
  shared_ptr<long> skuId{};
  shared_ptr<string> skuPicUrl{};
  shared_ptr<string> skuPvs{};
  shared_ptr<string> skuTitle{};
  shared_ptr<long> status{};
  shared_ptr<long> supplierPrice{};

  QueryItemDetailWithDivisionResponseBodyModelSkuModels() {}

  explicit QueryItemDetailWithDivisionResponseBodyModelSkuModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canNotBeSoldCode) {
      res["CanNotBeSoldCode"] = boost::any(*canNotBeSoldCode);
    }
    if (canNotBeSoldMassage) {
      res["CanNotBeSoldMassage"] = boost::any(*canNotBeSoldMassage);
    }
    if (customizedAttributeMap) {
      res["CustomizedAttributeMap"] = boost::any(*customizedAttributeMap);
    }
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (extJson) {
      res["ExtJson"] = boost::any(*extJson);
    }
    if (hasQuantity) {
      res["HasQuantity"] = boost::any(*hasQuantity);
    }
    if (invoiceType) {
      res["InvoiceType"] = boost::any(*invoiceType);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (lmSkuAttributeMap) {
      res["LmSkuAttributeMap"] = boost::any(*lmSkuAttributeMap);
    }
    if (priceCent) {
      res["PriceCent"] = boost::any(*priceCent);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (reservePrice) {
      res["ReservePrice"] = boost::any(*reservePrice);
    }
    if (simpleQuantity) {
      res["SimpleQuantity"] = boost::any(*simpleQuantity);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (skuPicUrl) {
      res["SkuPicUrl"] = boost::any(*skuPicUrl);
    }
    if (skuPvs) {
      res["SkuPvs"] = boost::any(*skuPvs);
    }
    if (skuTitle) {
      res["SkuTitle"] = boost::any(*skuTitle);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierPrice) {
      res["SupplierPrice"] = boost::any(*supplierPrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanNotBeSoldCode") != m.end() && !m["CanNotBeSoldCode"].empty()) {
      canNotBeSoldCode = make_shared<string>(boost::any_cast<string>(m["CanNotBeSoldCode"]));
    }
    if (m.find("CanNotBeSoldMassage") != m.end() && !m["CanNotBeSoldMassage"].empty()) {
      canNotBeSoldMassage = make_shared<string>(boost::any_cast<string>(m["CanNotBeSoldMassage"]));
    }
    if (m.find("CustomizedAttributeMap") != m.end() && !m["CustomizedAttributeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["CustomizedAttributeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customizedAttributeMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("ExtJson") != m.end() && !m["ExtJson"].empty()) {
      extJson = make_shared<string>(boost::any_cast<string>(m["ExtJson"]));
    }
    if (m.find("HasQuantity") != m.end() && !m["HasQuantity"].empty()) {
      hasQuantity = make_shared<bool>(boost::any_cast<bool>(m["HasQuantity"]));
    }
    if (m.find("InvoiceType") != m.end() && !m["InvoiceType"].empty()) {
      invoiceType = make_shared<long>(boost::any_cast<long>(m["InvoiceType"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("LmSkuAttributeMap") != m.end() && !m["LmSkuAttributeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["LmSkuAttributeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      lmSkuAttributeMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PriceCent") != m.end() && !m["PriceCent"].empty()) {
      priceCent = make_shared<long>(boost::any_cast<long>(m["PriceCent"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("ReservePrice") != m.end() && !m["ReservePrice"].empty()) {
      reservePrice = make_shared<long>(boost::any_cast<long>(m["ReservePrice"]));
    }
    if (m.find("SimpleQuantity") != m.end() && !m["SimpleQuantity"].empty()) {
      simpleQuantity = make_shared<string>(boost::any_cast<string>(m["SimpleQuantity"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<long>(boost::any_cast<long>(m["SkuId"]));
    }
    if (m.find("SkuPicUrl") != m.end() && !m["SkuPicUrl"].empty()) {
      skuPicUrl = make_shared<string>(boost::any_cast<string>(m["SkuPicUrl"]));
    }
    if (m.find("SkuPvs") != m.end() && !m["SkuPvs"].empty()) {
      skuPvs = make_shared<string>(boost::any_cast<string>(m["SkuPvs"]));
    }
    if (m.find("SkuTitle") != m.end() && !m["SkuTitle"].empty()) {
      skuTitle = make_shared<string>(boost::any_cast<string>(m["SkuTitle"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SupplierPrice") != m.end() && !m["SupplierPrice"].empty()) {
      supplierPrice = make_shared<long>(boost::any_cast<long>(m["SupplierPrice"]));
    }
  }


  virtual ~QueryItemDetailWithDivisionResponseBodyModelSkuModels() = default;
};
class QueryItemDetailWithDivisionResponseBodyModelSkuPropertysValues : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> text{};

  QueryItemDetailWithDivisionResponseBodyModelSkuPropertysValues() {}

  explicit QueryItemDetailWithDivisionResponseBodyModelSkuPropertysValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~QueryItemDetailWithDivisionResponseBodyModelSkuPropertysValues() = default;
};
class QueryItemDetailWithDivisionResponseBodyModelSkuPropertys : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> text{};
  shared_ptr<vector<QueryItemDetailWithDivisionResponseBodyModelSkuPropertysValues>> values{};

  QueryItemDetailWithDivisionResponseBodyModelSkuPropertys() {}

  explicit QueryItemDetailWithDivisionResponseBodyModelSkuPropertys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<QueryItemDetailWithDivisionResponseBodyModelSkuPropertysValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryItemDetailWithDivisionResponseBodyModelSkuPropertysValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<QueryItemDetailWithDivisionResponseBodyModelSkuPropertysValues>>(expect1);
      }
    }
  }


  virtual ~QueryItemDetailWithDivisionResponseBodyModelSkuPropertys() = default;
};
class QueryItemDetailWithDivisionResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> canNotBeSoldCode{};
  shared_ptr<string> canNotBeSoldMassage{};
  shared_ptr<bool> canSell{};
  shared_ptr<long> categoryId{};
  shared_ptr<vector<long>> categoryIds{};
  shared_ptr<string> city{};
  shared_ptr<string> current{};
  shared_ptr<map<string, string>> customizedAttributeMap{};
  shared_ptr<string> descOption{};
  shared_ptr<string> descPath{};
  shared_ptr<string> distributionMallId{};
  shared_ptr<map<string, string>> features{};
  shared_ptr<string> firstPicUrl{};
  shared_ptr<bool> hasQuantity{};
  shared_ptr<vector<map<string, string>>> iforestProps{};
  shared_ptr<long> invoiceType{};
  shared_ptr<long> itemId{};
  shared_ptr<vector<string>> itemImages{};
  shared_ptr<string> itemTitle{};
  shared_ptr<string> itemTotalSimpleValue{};
  shared_ptr<long> itemTotalValue{};
  shared_ptr<map<string, string>> lmItemAttributeMap{};
  shared_ptr<string> lmItemCategory{};
  shared_ptr<string> lmItemId{};
  shared_ptr<string> mainPicUrl{};
  shared_ptr<long> minPrice{};
  shared_ptr<map<string, vector<string>>> properties{};
  shared_ptr<string> prov{};
  shared_ptr<long> quantity{};
  shared_ptr<long> reservePrice{};
  shared_ptr<long> securedTransactions{};
  shared_ptr<bool> sellerPayPostfee{};
  shared_ptr<string> simpleQuantity{};
  shared_ptr<vector<QueryItemDetailWithDivisionResponseBodyModelSkuModels>> skuModels{};
  shared_ptr<vector<QueryItemDetailWithDivisionResponseBodyModelSkuPropertys>> skuPropertys{};
  shared_ptr<string> thirdPartyItemId{};
  shared_ptr<string> thirdPartyName{};
  shared_ptr<long> userType{};
  shared_ptr<string> videoPicUrl{};
  shared_ptr<string> videoUrl{};
  shared_ptr<string> virtualItemType{};

  QueryItemDetailWithDivisionResponseBodyModel() {}

  explicit QueryItemDetailWithDivisionResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canNotBeSoldCode) {
      res["CanNotBeSoldCode"] = boost::any(*canNotBeSoldCode);
    }
    if (canNotBeSoldMassage) {
      res["CanNotBeSoldMassage"] = boost::any(*canNotBeSoldMassage);
    }
    if (canSell) {
      res["CanSell"] = boost::any(*canSell);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (categoryIds) {
      res["CategoryIds"] = boost::any(*categoryIds);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (current) {
      res["Current"] = boost::any(*current);
    }
    if (customizedAttributeMap) {
      res["CustomizedAttributeMap"] = boost::any(*customizedAttributeMap);
    }
    if (descOption) {
      res["DescOption"] = boost::any(*descOption);
    }
    if (descPath) {
      res["DescPath"] = boost::any(*descPath);
    }
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (features) {
      res["Features"] = boost::any(*features);
    }
    if (firstPicUrl) {
      res["FirstPicUrl"] = boost::any(*firstPicUrl);
    }
    if (hasQuantity) {
      res["HasQuantity"] = boost::any(*hasQuantity);
    }
    if (iforestProps) {
      res["IforestProps"] = boost::any(*iforestProps);
    }
    if (invoiceType) {
      res["InvoiceType"] = boost::any(*invoiceType);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemImages) {
      res["ItemImages"] = boost::any(*itemImages);
    }
    if (itemTitle) {
      res["ItemTitle"] = boost::any(*itemTitle);
    }
    if (itemTotalSimpleValue) {
      res["ItemTotalSimpleValue"] = boost::any(*itemTotalSimpleValue);
    }
    if (itemTotalValue) {
      res["ItemTotalValue"] = boost::any(*itemTotalValue);
    }
    if (lmItemAttributeMap) {
      res["LmItemAttributeMap"] = boost::any(*lmItemAttributeMap);
    }
    if (lmItemCategory) {
      res["LmItemCategory"] = boost::any(*lmItemCategory);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (mainPicUrl) {
      res["MainPicUrl"] = boost::any(*mainPicUrl);
    }
    if (minPrice) {
      res["MinPrice"] = boost::any(*minPrice);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (prov) {
      res["Prov"] = boost::any(*prov);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (reservePrice) {
      res["ReservePrice"] = boost::any(*reservePrice);
    }
    if (securedTransactions) {
      res["SecuredTransactions"] = boost::any(*securedTransactions);
    }
    if (sellerPayPostfee) {
      res["SellerPayPostfee"] = boost::any(*sellerPayPostfee);
    }
    if (simpleQuantity) {
      res["SimpleQuantity"] = boost::any(*simpleQuantity);
    }
    if (skuModels) {
      vector<boost::any> temp1;
      for(auto item1:*skuModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkuModels"] = boost::any(temp1);
    }
    if (skuPropertys) {
      vector<boost::any> temp1;
      for(auto item1:*skuPropertys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkuPropertys"] = boost::any(temp1);
    }
    if (thirdPartyItemId) {
      res["ThirdPartyItemId"] = boost::any(*thirdPartyItemId);
    }
    if (thirdPartyName) {
      res["ThirdPartyName"] = boost::any(*thirdPartyName);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    if (videoPicUrl) {
      res["VideoPicUrl"] = boost::any(*videoPicUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (virtualItemType) {
      res["VirtualItemType"] = boost::any(*virtualItemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanNotBeSoldCode") != m.end() && !m["CanNotBeSoldCode"].empty()) {
      canNotBeSoldCode = make_shared<string>(boost::any_cast<string>(m["CanNotBeSoldCode"]));
    }
    if (m.find("CanNotBeSoldMassage") != m.end() && !m["CanNotBeSoldMassage"].empty()) {
      canNotBeSoldMassage = make_shared<string>(boost::any_cast<string>(m["CanNotBeSoldMassage"]));
    }
    if (m.find("CanSell") != m.end() && !m["CanSell"].empty()) {
      canSell = make_shared<bool>(boost::any_cast<bool>(m["CanSell"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CategoryIds") != m.end() && !m["CategoryIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CategoryIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CategoryIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      categoryIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Current") != m.end() && !m["Current"].empty()) {
      current = make_shared<string>(boost::any_cast<string>(m["Current"]));
    }
    if (m.find("CustomizedAttributeMap") != m.end() && !m["CustomizedAttributeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["CustomizedAttributeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customizedAttributeMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("DescOption") != m.end() && !m["DescOption"].empty()) {
      descOption = make_shared<string>(boost::any_cast<string>(m["DescOption"]));
    }
    if (m.find("DescPath") != m.end() && !m["DescPath"].empty()) {
      descPath = make_shared<string>(boost::any_cast<string>(m["DescPath"]));
    }
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Features"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      features = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("FirstPicUrl") != m.end() && !m["FirstPicUrl"].empty()) {
      firstPicUrl = make_shared<string>(boost::any_cast<string>(m["FirstPicUrl"]));
    }
    if (m.find("HasQuantity") != m.end() && !m["HasQuantity"].empty()) {
      hasQuantity = make_shared<bool>(boost::any_cast<bool>(m["HasQuantity"]));
    }
    if (m.find("IforestProps") != m.end() && !m["IforestProps"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["IforestProps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IforestProps"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      iforestProps = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("InvoiceType") != m.end() && !m["InvoiceType"].empty()) {
      invoiceType = make_shared<long>(boost::any_cast<long>(m["InvoiceType"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemImages") != m.end() && !m["ItemImages"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ItemImages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ItemImages"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      itemImages = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ItemTitle") != m.end() && !m["ItemTitle"].empty()) {
      itemTitle = make_shared<string>(boost::any_cast<string>(m["ItemTitle"]));
    }
    if (m.find("ItemTotalSimpleValue") != m.end() && !m["ItemTotalSimpleValue"].empty()) {
      itemTotalSimpleValue = make_shared<string>(boost::any_cast<string>(m["ItemTotalSimpleValue"]));
    }
    if (m.find("ItemTotalValue") != m.end() && !m["ItemTotalValue"].empty()) {
      itemTotalValue = make_shared<long>(boost::any_cast<long>(m["ItemTotalValue"]));
    }
    if (m.find("LmItemAttributeMap") != m.end() && !m["LmItemAttributeMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["LmItemAttributeMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      lmItemAttributeMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("LmItemCategory") != m.end() && !m["LmItemCategory"].empty()) {
      lmItemCategory = make_shared<string>(boost::any_cast<string>(m["LmItemCategory"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("MainPicUrl") != m.end() && !m["MainPicUrl"].empty()) {
      mainPicUrl = make_shared<string>(boost::any_cast<string>(m["MainPicUrl"]));
    }
    if (m.find("MinPrice") != m.end() && !m["MinPrice"].empty()) {
      minPrice = make_shared<long>(boost::any_cast<long>(m["MinPrice"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      map<string, vector<string>> map1 = boost::any_cast<map<string, vector<string>>>(m["Properties"]);
      map<string, vector<string>> toMap1;
      for (auto item:map1) {
        vector<string> toVec2;
        if (typeid(vector<boost::any>) == item.second.type()) {
          vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item.second);
          for (auto item:vec2) {
             toVec2.push_back(boost::any_cast<string>(item));
          }
        }
         toMap1[item.first] = toVec2;
      }
      properties = make_shared<map<string, vector<string>>>(toMap1);
    }
    if (m.find("Prov") != m.end() && !m["Prov"].empty()) {
      prov = make_shared<string>(boost::any_cast<string>(m["Prov"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("ReservePrice") != m.end() && !m["ReservePrice"].empty()) {
      reservePrice = make_shared<long>(boost::any_cast<long>(m["ReservePrice"]));
    }
    if (m.find("SecuredTransactions") != m.end() && !m["SecuredTransactions"].empty()) {
      securedTransactions = make_shared<long>(boost::any_cast<long>(m["SecuredTransactions"]));
    }
    if (m.find("SellerPayPostfee") != m.end() && !m["SellerPayPostfee"].empty()) {
      sellerPayPostfee = make_shared<bool>(boost::any_cast<bool>(m["SellerPayPostfee"]));
    }
    if (m.find("SimpleQuantity") != m.end() && !m["SimpleQuantity"].empty()) {
      simpleQuantity = make_shared<string>(boost::any_cast<string>(m["SimpleQuantity"]));
    }
    if (m.find("SkuModels") != m.end() && !m["SkuModels"].empty()) {
      if (typeid(vector<boost::any>) == m["SkuModels"].type()) {
        vector<QueryItemDetailWithDivisionResponseBodyModelSkuModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkuModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryItemDetailWithDivisionResponseBodyModelSkuModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skuModels = make_shared<vector<QueryItemDetailWithDivisionResponseBodyModelSkuModels>>(expect1);
      }
    }
    if (m.find("SkuPropertys") != m.end() && !m["SkuPropertys"].empty()) {
      if (typeid(vector<boost::any>) == m["SkuPropertys"].type()) {
        vector<QueryItemDetailWithDivisionResponseBodyModelSkuPropertys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkuPropertys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryItemDetailWithDivisionResponseBodyModelSkuPropertys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skuPropertys = make_shared<vector<QueryItemDetailWithDivisionResponseBodyModelSkuPropertys>>(expect1);
      }
    }
    if (m.find("ThirdPartyItemId") != m.end() && !m["ThirdPartyItemId"].empty()) {
      thirdPartyItemId = make_shared<string>(boost::any_cast<string>(m["ThirdPartyItemId"]));
    }
    if (m.find("ThirdPartyName") != m.end() && !m["ThirdPartyName"].empty()) {
      thirdPartyName = make_shared<string>(boost::any_cast<string>(m["ThirdPartyName"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<long>(boost::any_cast<long>(m["UserType"]));
    }
    if (m.find("VideoPicUrl") != m.end() && !m["VideoPicUrl"].empty()) {
      videoPicUrl = make_shared<string>(boost::any_cast<string>(m["VideoPicUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("VirtualItemType") != m.end() && !m["VirtualItemType"].empty()) {
      virtualItemType = make_shared<string>(boost::any_cast<string>(m["VirtualItemType"]));
    }
  }


  virtual ~QueryItemDetailWithDivisionResponseBodyModel() = default;
};
class QueryItemDetailWithDivisionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<QueryItemDetailWithDivisionResponseBodyModel> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  QueryItemDetailWithDivisionResponseBody() {}

  explicit QueryItemDetailWithDivisionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        QueryItemDetailWithDivisionResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<QueryItemDetailWithDivisionResponseBodyModel>(model1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryItemDetailWithDivisionResponseBody() = default;
};
class QueryItemDetailWithDivisionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryItemDetailWithDivisionResponseBody> body{};

  QueryItemDetailWithDivisionResponse() {}

  explicit QueryItemDetailWithDivisionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryItemDetailWithDivisionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryItemDetailWithDivisionResponseBody>(model1);
      }
    }
  }


  virtual ~QueryItemDetailWithDivisionResponse() = default;
};
class QueryItemGuideRetailPriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> distributorId{};
  shared_ptr<vector<string>> lmItemIds{};
  shared_ptr<string> tenantId{};

  QueryItemGuideRetailPriceRequest() {}

  explicit QueryItemGuideRetailPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (lmItemIds) {
      res["LmItemIds"] = boost::any(*lmItemIds);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("LmItemIds") != m.end() && !m["LmItemIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LmItemIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LmItemIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      lmItemIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryItemGuideRetailPriceRequest() = default;
};
class QueryItemGuideRetailPriceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> lmItemIdsShrink{};
  shared_ptr<string> tenantId{};

  QueryItemGuideRetailPriceShrinkRequest() {}

  explicit QueryItemGuideRetailPriceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (lmItemIdsShrink) {
      res["LmItemIds"] = boost::any(*lmItemIdsShrink);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("LmItemIds") != m.end() && !m["LmItemIds"].empty()) {
      lmItemIdsShrink = make_shared<string>(boost::any_cast<string>(m["LmItemIds"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryItemGuideRetailPriceShrinkRequest() = default;
};
class QueryItemGuideRetailPriceResponseBodyModelSkuModels : public Darabonba::Model {
public:
  shared_ptr<string> distributionMallId{};
  shared_ptr<long> guideRetailPrice{};
  shared_ptr<long> itemId{};
  shared_ptr<string> lmItemId{};
  shared_ptr<long> lowGuideRetailPrice{};
  shared_ptr<long> priceCent{};
  shared_ptr<long> reservedPrice{};
  shared_ptr<long> skuId{};
  shared_ptr<string> skuTitle{};
  shared_ptr<long> status{};

  QueryItemGuideRetailPriceResponseBodyModelSkuModels() {}

  explicit QueryItemGuideRetailPriceResponseBodyModelSkuModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (guideRetailPrice) {
      res["GuideRetailPrice"] = boost::any(*guideRetailPrice);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (lowGuideRetailPrice) {
      res["LowGuideRetailPrice"] = boost::any(*lowGuideRetailPrice);
    }
    if (priceCent) {
      res["PriceCent"] = boost::any(*priceCent);
    }
    if (reservedPrice) {
      res["ReservedPrice"] = boost::any(*reservedPrice);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (skuTitle) {
      res["SkuTitle"] = boost::any(*skuTitle);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("GuideRetailPrice") != m.end() && !m["GuideRetailPrice"].empty()) {
      guideRetailPrice = make_shared<long>(boost::any_cast<long>(m["GuideRetailPrice"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("LowGuideRetailPrice") != m.end() && !m["LowGuideRetailPrice"].empty()) {
      lowGuideRetailPrice = make_shared<long>(boost::any_cast<long>(m["LowGuideRetailPrice"]));
    }
    if (m.find("PriceCent") != m.end() && !m["PriceCent"].empty()) {
      priceCent = make_shared<long>(boost::any_cast<long>(m["PriceCent"]));
    }
    if (m.find("ReservedPrice") != m.end() && !m["ReservedPrice"].empty()) {
      reservedPrice = make_shared<long>(boost::any_cast<long>(m["ReservedPrice"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<long>(boost::any_cast<long>(m["SkuId"]));
    }
    if (m.find("SkuTitle") != m.end() && !m["SkuTitle"].empty()) {
      skuTitle = make_shared<string>(boost::any_cast<string>(m["SkuTitle"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~QueryItemGuideRetailPriceResponseBodyModelSkuModels() = default;
};
class QueryItemGuideRetailPriceResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> guideRetailPriceScope{};
  shared_ptr<long> itemId{};
  shared_ptr<string> itemTitle{};
  shared_ptr<string> lmItemId{};
  shared_ptr<string> lowGuideRetailPriceScope{};
  shared_ptr<long> reservedPrice{};
  shared_ptr<string> reservedPriceScope{};
  shared_ptr<vector<QueryItemGuideRetailPriceResponseBodyModelSkuModels>> skuModels{};

  QueryItemGuideRetailPriceResponseBodyModel() {}

  explicit QueryItemGuideRetailPriceResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (guideRetailPriceScope) {
      res["GuideRetailPriceScope"] = boost::any(*guideRetailPriceScope);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemTitle) {
      res["ItemTitle"] = boost::any(*itemTitle);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (lowGuideRetailPriceScope) {
      res["LowGuideRetailPriceScope"] = boost::any(*lowGuideRetailPriceScope);
    }
    if (reservedPrice) {
      res["ReservedPrice"] = boost::any(*reservedPrice);
    }
    if (reservedPriceScope) {
      res["ReservedPriceScope"] = boost::any(*reservedPriceScope);
    }
    if (skuModels) {
      vector<boost::any> temp1;
      for(auto item1:*skuModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkuModels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("GuideRetailPriceScope") != m.end() && !m["GuideRetailPriceScope"].empty()) {
      guideRetailPriceScope = make_shared<string>(boost::any_cast<string>(m["GuideRetailPriceScope"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemTitle") != m.end() && !m["ItemTitle"].empty()) {
      itemTitle = make_shared<string>(boost::any_cast<string>(m["ItemTitle"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("LowGuideRetailPriceScope") != m.end() && !m["LowGuideRetailPriceScope"].empty()) {
      lowGuideRetailPriceScope = make_shared<string>(boost::any_cast<string>(m["LowGuideRetailPriceScope"]));
    }
    if (m.find("ReservedPrice") != m.end() && !m["ReservedPrice"].empty()) {
      reservedPrice = make_shared<long>(boost::any_cast<long>(m["ReservedPrice"]));
    }
    if (m.find("ReservedPriceScope") != m.end() && !m["ReservedPriceScope"].empty()) {
      reservedPriceScope = make_shared<string>(boost::any_cast<string>(m["ReservedPriceScope"]));
    }
    if (m.find("SkuModels") != m.end() && !m["SkuModels"].empty()) {
      if (typeid(vector<boost::any>) == m["SkuModels"].type()) {
        vector<QueryItemGuideRetailPriceResponseBodyModelSkuModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkuModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryItemGuideRetailPriceResponseBodyModelSkuModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skuModels = make_shared<vector<QueryItemGuideRetailPriceResponseBodyModelSkuModels>>(expect1);
      }
    }
  }


  virtual ~QueryItemGuideRetailPriceResponseBodyModel() = default;
};
class QueryItemGuideRetailPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<vector<QueryItemGuideRetailPriceResponseBodyModel>> model{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};

  QueryItemGuideRetailPriceResponseBody() {}

  explicit QueryItemGuideRetailPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      vector<boost::any> temp1;
      for(auto item1:*model){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Model"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(vector<boost::any>) == m["Model"].type()) {
        vector<QueryItemGuideRetailPriceResponseBodyModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Model"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryItemGuideRetailPriceResponseBodyModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        model = make_shared<vector<QueryItemGuideRetailPriceResponseBodyModel>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryItemGuideRetailPriceResponseBody() = default;
};
class QueryItemGuideRetailPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryItemGuideRetailPriceResponseBody> body{};

  QueryItemGuideRetailPriceResponse() {}

  explicit QueryItemGuideRetailPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryItemGuideRetailPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryItemGuideRetailPriceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryItemGuideRetailPriceResponse() = default;
};
class QueryLogistics4DistributionRequest : public Darabonba::Model {
public:
  shared_ptr<string> distributorId{};
  shared_ptr<string> mainDistributionOrderId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tenantId{};

  QueryLogistics4DistributionRequest() {}

  explicit QueryLogistics4DistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (mainDistributionOrderId) {
      res["MainDistributionOrderId"] = boost::any(*mainDistributionOrderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("MainDistributionOrderId") != m.end() && !m["MainDistributionOrderId"].empty()) {
      mainDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["MainDistributionOrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryLogistics4DistributionRequest() = default;
};
class QueryLogistics4DistributionResponseBodyModelGoods : public Darabonba::Model {
public:
  shared_ptr<string> goodName{};
  shared_ptr<string> itemId{};
  shared_ptr<long> quantity{};
  shared_ptr<string> skuId{};

  QueryLogistics4DistributionResponseBodyModelGoods() {}

  explicit QueryLogistics4DistributionResponseBodyModelGoods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (goodName) {
      res["GoodName"] = boost::any(*goodName);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GoodName") != m.end() && !m["GoodName"].empty()) {
      goodName = make_shared<string>(boost::any_cast<string>(m["GoodName"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
  }


  virtual ~QueryLogistics4DistributionResponseBodyModelGoods() = default;
};
class QueryLogistics4DistributionResponseBodyModelLogisticsDetailList : public Darabonba::Model {
public:
  shared_ptr<string> ocurrTimeStr{};
  shared_ptr<string> standerdDesc{};

  QueryLogistics4DistributionResponseBodyModelLogisticsDetailList() {}

  explicit QueryLogistics4DistributionResponseBodyModelLogisticsDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ocurrTimeStr) {
      res["OcurrTimeStr"] = boost::any(*ocurrTimeStr);
    }
    if (standerdDesc) {
      res["StanderdDesc"] = boost::any(*standerdDesc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OcurrTimeStr") != m.end() && !m["OcurrTimeStr"].empty()) {
      ocurrTimeStr = make_shared<string>(boost::any_cast<string>(m["OcurrTimeStr"]));
    }
    if (m.find("StanderdDesc") != m.end() && !m["StanderdDesc"].empty()) {
      standerdDesc = make_shared<string>(boost::any_cast<string>(m["StanderdDesc"]));
    }
  }


  virtual ~QueryLogistics4DistributionResponseBodyModelLogisticsDetailList() = default;
};
class QueryLogistics4DistributionResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> dataProvider{};
  shared_ptr<string> dataProviderTitle{};
  shared_ptr<vector<QueryLogistics4DistributionResponseBodyModelGoods>> goods{};
  shared_ptr<string> logisticsCompanyCode{};
  shared_ptr<string> logisticsCompanyName{};
  shared_ptr<vector<QueryLogistics4DistributionResponseBodyModelLogisticsDetailList>> logisticsDetailList{};
  shared_ptr<string> mailNo{};

  QueryLogistics4DistributionResponseBodyModel() {}

  explicit QueryLogistics4DistributionResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataProvider) {
      res["DataProvider"] = boost::any(*dataProvider);
    }
    if (dataProviderTitle) {
      res["DataProviderTitle"] = boost::any(*dataProviderTitle);
    }
    if (goods) {
      vector<boost::any> temp1;
      for(auto item1:*goods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Goods"] = boost::any(temp1);
    }
    if (logisticsCompanyCode) {
      res["LogisticsCompanyCode"] = boost::any(*logisticsCompanyCode);
    }
    if (logisticsCompanyName) {
      res["LogisticsCompanyName"] = boost::any(*logisticsCompanyName);
    }
    if (logisticsDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*logisticsDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogisticsDetailList"] = boost::any(temp1);
    }
    if (mailNo) {
      res["MailNo"] = boost::any(*mailNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataProvider") != m.end() && !m["DataProvider"].empty()) {
      dataProvider = make_shared<string>(boost::any_cast<string>(m["DataProvider"]));
    }
    if (m.find("DataProviderTitle") != m.end() && !m["DataProviderTitle"].empty()) {
      dataProviderTitle = make_shared<string>(boost::any_cast<string>(m["DataProviderTitle"]));
    }
    if (m.find("Goods") != m.end() && !m["Goods"].empty()) {
      if (typeid(vector<boost::any>) == m["Goods"].type()) {
        vector<QueryLogistics4DistributionResponseBodyModelGoods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Goods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryLogistics4DistributionResponseBodyModelGoods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        goods = make_shared<vector<QueryLogistics4DistributionResponseBodyModelGoods>>(expect1);
      }
    }
    if (m.find("LogisticsCompanyCode") != m.end() && !m["LogisticsCompanyCode"].empty()) {
      logisticsCompanyCode = make_shared<string>(boost::any_cast<string>(m["LogisticsCompanyCode"]));
    }
    if (m.find("LogisticsCompanyName") != m.end() && !m["LogisticsCompanyName"].empty()) {
      logisticsCompanyName = make_shared<string>(boost::any_cast<string>(m["LogisticsCompanyName"]));
    }
    if (m.find("LogisticsDetailList") != m.end() && !m["LogisticsDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["LogisticsDetailList"].type()) {
        vector<QueryLogistics4DistributionResponseBodyModelLogisticsDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogisticsDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryLogistics4DistributionResponseBodyModelLogisticsDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logisticsDetailList = make_shared<vector<QueryLogistics4DistributionResponseBodyModelLogisticsDetailList>>(expect1);
      }
    }
    if (m.find("MailNo") != m.end() && !m["MailNo"].empty()) {
      mailNo = make_shared<string>(boost::any_cast<string>(m["MailNo"]));
    }
  }


  virtual ~QueryLogistics4DistributionResponseBodyModel() = default;
};
class QueryLogistics4DistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<vector<QueryLogistics4DistributionResponseBodyModel>> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  QueryLogistics4DistributionResponseBody() {}

  explicit QueryLogistics4DistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      vector<boost::any> temp1;
      for(auto item1:*model){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Model"] = boost::any(temp1);
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(vector<boost::any>) == m["Model"].type()) {
        vector<QueryLogistics4DistributionResponseBodyModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Model"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryLogistics4DistributionResponseBodyModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        model = make_shared<vector<QueryLogistics4DistributionResponseBodyModel>>(expect1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryLogistics4DistributionResponseBody() = default;
};
class QueryLogistics4DistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryLogistics4DistributionResponseBody> body{};

  QueryLogistics4DistributionResponse() {}

  explicit QueryLogistics4DistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryLogistics4DistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryLogistics4DistributionResponseBody>(model1);
      }
    }
  }


  virtual ~QueryLogistics4DistributionResponse() = default;
};
class QueryMallCategoryListRequest : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> tenantId{};

  QueryMallCategoryListRequest() {}

  explicit QueryMallCategoryListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryMallCategoryListRequest() = default;
};
class QueryMallCategoryListResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<bool> leaf{};
  shared_ptr<string> name{};
  shared_ptr<long> parentId{};

  QueryMallCategoryListResponseBodyModel() {}

  explicit QueryMallCategoryListResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (leaf) {
      res["Leaf"] = boost::any(*leaf);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Leaf") != m.end() && !m["Leaf"].empty()) {
      leaf = make_shared<bool>(boost::any_cast<bool>(m["Leaf"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<long>(boost::any_cast<long>(m["ParentId"]));
    }
  }


  virtual ~QueryMallCategoryListResponseBodyModel() = default;
};
class QueryMallCategoryListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<vector<QueryMallCategoryListResponseBodyModel>> model{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};

  QueryMallCategoryListResponseBody() {}

  explicit QueryMallCategoryListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      vector<boost::any> temp1;
      for(auto item1:*model){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Model"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(vector<boost::any>) == m["Model"].type()) {
        vector<QueryMallCategoryListResponseBodyModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Model"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMallCategoryListResponseBodyModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        model = make_shared<vector<QueryMallCategoryListResponseBodyModel>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryMallCategoryListResponseBody() = default;
};
class QueryMallCategoryListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMallCategoryListResponseBody> body{};

  QueryMallCategoryListResponse() {}

  explicit QueryMallCategoryListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryMallCategoryListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMallCategoryListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMallCategoryListResponse() = default;
};
class QueryOrderDetail4DistributionRequest : public Darabonba::Model {
public:
  shared_ptr<string> distributorId{};
  shared_ptr<string> mainDistributionOrderId{};
  shared_ptr<string> tenantId{};

  QueryOrderDetail4DistributionRequest() {}

  explicit QueryOrderDetail4DistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (mainDistributionOrderId) {
      res["MainDistributionOrderId"] = boost::any(*mainDistributionOrderId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("MainDistributionOrderId") != m.end() && !m["MainDistributionOrderId"].empty()) {
      mainDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["MainDistributionOrderId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryOrderDetail4DistributionRequest() = default;
};
class QueryOrderDetail4DistributionResponseBodyModelSubOrderListItemPrice : public Darabonba::Model {
public:
  shared_ptr<string> fundAmountMoney{};

  QueryOrderDetail4DistributionResponseBodyModelSubOrderListItemPrice() {}

  explicit QueryOrderDetail4DistributionResponseBodyModelSubOrderListItemPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAmountMoney) {
      res["FundAmountMoney"] = boost::any(*fundAmountMoney);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAmountMoney") != m.end() && !m["FundAmountMoney"].empty()) {
      fundAmountMoney = make_shared<string>(boost::any_cast<string>(m["FundAmountMoney"]));
    }
  }


  virtual ~QueryOrderDetail4DistributionResponseBodyModelSubOrderListItemPrice() = default;
};
class QueryOrderDetail4DistributionResponseBodyModelSubOrderList : public Darabonba::Model {
public:
  shared_ptr<string> itemId{};
  shared_ptr<string> itemPic{};
  shared_ptr<vector<QueryOrderDetail4DistributionResponseBodyModelSubOrderListItemPrice>> itemPrice{};
  shared_ptr<string> itemTitle{};
  shared_ptr<string> logisticsStatus{};
  shared_ptr<string> mainDistributionOrderId{};
  shared_ptr<string> number{};
  shared_ptr<string> orderStatus{};
  shared_ptr<string> skuId{};
  shared_ptr<string> skuName{};
  shared_ptr<string> subDistributionOrderId{};

  QueryOrderDetail4DistributionResponseBodyModelSubOrderList() {}

  explicit QueryOrderDetail4DistributionResponseBodyModelSubOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemPic) {
      res["ItemPic"] = boost::any(*itemPic);
    }
    if (itemPrice) {
      vector<boost::any> temp1;
      for(auto item1:*itemPrice){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ItemPrice"] = boost::any(temp1);
    }
    if (itemTitle) {
      res["ItemTitle"] = boost::any(*itemTitle);
    }
    if (logisticsStatus) {
      res["LogisticsStatus"] = boost::any(*logisticsStatus);
    }
    if (mainDistributionOrderId) {
      res["MainDistributionOrderId"] = boost::any(*mainDistributionOrderId);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (skuName) {
      res["SkuName"] = boost::any(*skuName);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("ItemPic") != m.end() && !m["ItemPic"].empty()) {
      itemPic = make_shared<string>(boost::any_cast<string>(m["ItemPic"]));
    }
    if (m.find("ItemPrice") != m.end() && !m["ItemPrice"].empty()) {
      if (typeid(vector<boost::any>) == m["ItemPrice"].type()) {
        vector<QueryOrderDetail4DistributionResponseBodyModelSubOrderListItemPrice> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ItemPrice"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryOrderDetail4DistributionResponseBodyModelSubOrderListItemPrice model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itemPrice = make_shared<vector<QueryOrderDetail4DistributionResponseBodyModelSubOrderListItemPrice>>(expect1);
      }
    }
    if (m.find("ItemTitle") != m.end() && !m["ItemTitle"].empty()) {
      itemTitle = make_shared<string>(boost::any_cast<string>(m["ItemTitle"]));
    }
    if (m.find("LogisticsStatus") != m.end() && !m["LogisticsStatus"].empty()) {
      logisticsStatus = make_shared<string>(boost::any_cast<string>(m["LogisticsStatus"]));
    }
    if (m.find("MainDistributionOrderId") != m.end() && !m["MainDistributionOrderId"].empty()) {
      mainDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["MainDistributionOrderId"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<string>(boost::any_cast<string>(m["OrderStatus"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
    if (m.find("SkuName") != m.end() && !m["SkuName"].empty()) {
      skuName = make_shared<string>(boost::any_cast<string>(m["SkuName"]));
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
  }


  virtual ~QueryOrderDetail4DistributionResponseBodyModelSubOrderList() = default;
};
class QueryOrderDetail4DistributionResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> distributionOrderId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> logisticsStatus{};
  shared_ptr<string> orderAmount{};
  shared_ptr<string> orderStatus{};
  shared_ptr<vector<QueryOrderDetail4DistributionResponseBodyModelSubOrderList>> subOrderList{};

  QueryOrderDetail4DistributionResponseBodyModel() {}

  explicit QueryOrderDetail4DistributionResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (distributionOrderId) {
      res["DistributionOrderId"] = boost::any(*distributionOrderId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (logisticsStatus) {
      res["LogisticsStatus"] = boost::any(*logisticsStatus);
    }
    if (orderAmount) {
      res["OrderAmount"] = boost::any(*orderAmount);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (subOrderList) {
      vector<boost::any> temp1;
      for(auto item1:*subOrderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubOrderList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DistributionOrderId") != m.end() && !m["DistributionOrderId"].empty()) {
      distributionOrderId = make_shared<string>(boost::any_cast<string>(m["DistributionOrderId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("LogisticsStatus") != m.end() && !m["LogisticsStatus"].empty()) {
      logisticsStatus = make_shared<string>(boost::any_cast<string>(m["LogisticsStatus"]));
    }
    if (m.find("OrderAmount") != m.end() && !m["OrderAmount"].empty()) {
      orderAmount = make_shared<string>(boost::any_cast<string>(m["OrderAmount"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<string>(boost::any_cast<string>(m["OrderStatus"]));
    }
    if (m.find("SubOrderList") != m.end() && !m["SubOrderList"].empty()) {
      if (typeid(vector<boost::any>) == m["SubOrderList"].type()) {
        vector<QueryOrderDetail4DistributionResponseBodyModelSubOrderList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubOrderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryOrderDetail4DistributionResponseBodyModelSubOrderList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subOrderList = make_shared<vector<QueryOrderDetail4DistributionResponseBodyModelSubOrderList>>(expect1);
      }
    }
  }


  virtual ~QueryOrderDetail4DistributionResponseBodyModel() = default;
};
class QueryOrderDetail4DistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<QueryOrderDetail4DistributionResponseBodyModel> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  QueryOrderDetail4DistributionResponseBody() {}

  explicit QueryOrderDetail4DistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        QueryOrderDetail4DistributionResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<QueryOrderDetail4DistributionResponseBodyModel>(model1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryOrderDetail4DistributionResponseBody() = default;
};
class QueryOrderDetail4DistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryOrderDetail4DistributionResponseBody> body{};

  QueryOrderDetail4DistributionResponse() {}

  explicit QueryOrderDetail4DistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryOrderDetail4DistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryOrderDetail4DistributionResponseBody>(model1);
      }
    }
  }


  virtual ~QueryOrderDetail4DistributionResponse() = default;
};
class QueryOrderList4DistributionRequest : public Darabonba::Model {
public:
  shared_ptr<string> distributorId{};
  shared_ptr<string> filterOption{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> tenantId{};

  QueryOrderList4DistributionRequest() {}

  explicit QueryOrderList4DistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (filterOption) {
      res["FilterOption"] = boost::any(*filterOption);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("FilterOption") != m.end() && !m["FilterOption"].empty()) {
      filterOption = make_shared<string>(boost::any_cast<string>(m["FilterOption"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryOrderList4DistributionRequest() = default;
};
class QueryOrderList4DistributionResponseBodyModelSubOrderListItemPrice : public Darabonba::Model {
public:
  shared_ptr<string> fundAmountMoney{};

  QueryOrderList4DistributionResponseBodyModelSubOrderListItemPrice() {}

  explicit QueryOrderList4DistributionResponseBodyModelSubOrderListItemPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAmountMoney) {
      res["FundAmountMoney"] = boost::any(*fundAmountMoney);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FundAmountMoney") != m.end() && !m["FundAmountMoney"].empty()) {
      fundAmountMoney = make_shared<string>(boost::any_cast<string>(m["FundAmountMoney"]));
    }
  }


  virtual ~QueryOrderList4DistributionResponseBodyModelSubOrderListItemPrice() = default;
};
class QueryOrderList4DistributionResponseBodyModelSubOrderList : public Darabonba::Model {
public:
  shared_ptr<string> itemId{};
  shared_ptr<string> itemPic{};
  shared_ptr<vector<QueryOrderList4DistributionResponseBodyModelSubOrderListItemPrice>> itemPrice{};
  shared_ptr<string> itemTitle{};
  shared_ptr<string> logisticsStatus{};
  shared_ptr<string> mainDistributionOrderId{};
  shared_ptr<string> number{};
  shared_ptr<string> orderStatus{};
  shared_ptr<string> skuId{};
  shared_ptr<string> skuName{};
  shared_ptr<string> subDistributionOrderId{};

  QueryOrderList4DistributionResponseBodyModelSubOrderList() {}

  explicit QueryOrderList4DistributionResponseBodyModelSubOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemPic) {
      res["ItemPic"] = boost::any(*itemPic);
    }
    if (itemPrice) {
      vector<boost::any> temp1;
      for(auto item1:*itemPrice){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ItemPrice"] = boost::any(temp1);
    }
    if (itemTitle) {
      res["ItemTitle"] = boost::any(*itemTitle);
    }
    if (logisticsStatus) {
      res["LogisticsStatus"] = boost::any(*logisticsStatus);
    }
    if (mainDistributionOrderId) {
      res["MainDistributionOrderId"] = boost::any(*mainDistributionOrderId);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (skuName) {
      res["SkuName"] = boost::any(*skuName);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("ItemPic") != m.end() && !m["ItemPic"].empty()) {
      itemPic = make_shared<string>(boost::any_cast<string>(m["ItemPic"]));
    }
    if (m.find("ItemPrice") != m.end() && !m["ItemPrice"].empty()) {
      if (typeid(vector<boost::any>) == m["ItemPrice"].type()) {
        vector<QueryOrderList4DistributionResponseBodyModelSubOrderListItemPrice> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ItemPrice"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryOrderList4DistributionResponseBodyModelSubOrderListItemPrice model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itemPrice = make_shared<vector<QueryOrderList4DistributionResponseBodyModelSubOrderListItemPrice>>(expect1);
      }
    }
    if (m.find("ItemTitle") != m.end() && !m["ItemTitle"].empty()) {
      itemTitle = make_shared<string>(boost::any_cast<string>(m["ItemTitle"]));
    }
    if (m.find("LogisticsStatus") != m.end() && !m["LogisticsStatus"].empty()) {
      logisticsStatus = make_shared<string>(boost::any_cast<string>(m["LogisticsStatus"]));
    }
    if (m.find("MainDistributionOrderId") != m.end() && !m["MainDistributionOrderId"].empty()) {
      mainDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["MainDistributionOrderId"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<string>(boost::any_cast<string>(m["OrderStatus"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
    if (m.find("SkuName") != m.end() && !m["SkuName"].empty()) {
      skuName = make_shared<string>(boost::any_cast<string>(m["SkuName"]));
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
  }


  virtual ~QueryOrderList4DistributionResponseBodyModelSubOrderList() = default;
};
class QueryOrderList4DistributionResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> distributionOrderId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> logisticsStatus{};
  shared_ptr<string> orderAmount{};
  shared_ptr<string> orderStatus{};
  shared_ptr<vector<QueryOrderList4DistributionResponseBodyModelSubOrderList>> subOrderList{};

  QueryOrderList4DistributionResponseBodyModel() {}

  explicit QueryOrderList4DistributionResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (distributionOrderId) {
      res["DistributionOrderId"] = boost::any(*distributionOrderId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (logisticsStatus) {
      res["LogisticsStatus"] = boost::any(*logisticsStatus);
    }
    if (orderAmount) {
      res["OrderAmount"] = boost::any(*orderAmount);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (subOrderList) {
      vector<boost::any> temp1;
      for(auto item1:*subOrderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubOrderList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DistributionOrderId") != m.end() && !m["DistributionOrderId"].empty()) {
      distributionOrderId = make_shared<string>(boost::any_cast<string>(m["DistributionOrderId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("LogisticsStatus") != m.end() && !m["LogisticsStatus"].empty()) {
      logisticsStatus = make_shared<string>(boost::any_cast<string>(m["LogisticsStatus"]));
    }
    if (m.find("OrderAmount") != m.end() && !m["OrderAmount"].empty()) {
      orderAmount = make_shared<string>(boost::any_cast<string>(m["OrderAmount"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<string>(boost::any_cast<string>(m["OrderStatus"]));
    }
    if (m.find("SubOrderList") != m.end() && !m["SubOrderList"].empty()) {
      if (typeid(vector<boost::any>) == m["SubOrderList"].type()) {
        vector<QueryOrderList4DistributionResponseBodyModelSubOrderList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubOrderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryOrderList4DistributionResponseBodyModelSubOrderList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subOrderList = make_shared<vector<QueryOrderList4DistributionResponseBodyModelSubOrderList>>(expect1);
      }
    }
  }


  virtual ~QueryOrderList4DistributionResponseBodyModel() = default;
};
class QueryOrderList4DistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<vector<QueryOrderList4DistributionResponseBodyModel>> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  QueryOrderList4DistributionResponseBody() {}

  explicit QueryOrderList4DistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      vector<boost::any> temp1;
      for(auto item1:*model){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Model"] = boost::any(temp1);
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(vector<boost::any>) == m["Model"].type()) {
        vector<QueryOrderList4DistributionResponseBodyModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Model"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryOrderList4DistributionResponseBodyModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        model = make_shared<vector<QueryOrderList4DistributionResponseBodyModel>>(expect1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryOrderList4DistributionResponseBody() = default;
};
class QueryOrderList4DistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryOrderList4DistributionResponseBody> body{};

  QueryOrderList4DistributionResponse() {}

  explicit QueryOrderList4DistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryOrderList4DistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryOrderList4DistributionResponseBody>(model1);
      }
    }
  }


  virtual ~QueryOrderList4DistributionResponse() = default;
};
class QueryRefundApplicationDetail4DistributionRequest : public Darabonba::Model {
public:
  shared_ptr<string> distributorId{};
  shared_ptr<string> subDistributionOrderId{};
  shared_ptr<string> tenantId{};

  QueryRefundApplicationDetail4DistributionRequest() {}

  explicit QueryRefundApplicationDetail4DistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryRefundApplicationDetail4DistributionRequest() = default;
};
class QueryRefundApplicationDetail4DistributionResponseBodyModelApplyReason : public Darabonba::Model {
public:
  shared_ptr<long> reasonTextId{};
  shared_ptr<string> reasonTips{};

  QueryRefundApplicationDetail4DistributionResponseBodyModelApplyReason() {}

  explicit QueryRefundApplicationDetail4DistributionResponseBodyModelApplyReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reasonTextId) {
      res["ReasonTextId"] = boost::any(*reasonTextId);
    }
    if (reasonTips) {
      res["ReasonTips"] = boost::any(*reasonTips);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReasonTextId") != m.end() && !m["ReasonTextId"].empty()) {
      reasonTextId = make_shared<long>(boost::any_cast<long>(m["ReasonTextId"]));
    }
    if (m.find("ReasonTips") != m.end() && !m["ReasonTips"].empty()) {
      reasonTips = make_shared<string>(boost::any_cast<string>(m["ReasonTips"]));
    }
  }


  virtual ~QueryRefundApplicationDetail4DistributionResponseBodyModelApplyReason() = default;
};
class QueryRefundApplicationDetail4DistributionResponseBodyModelRefundFeeData : public Darabonba::Model {
public:
  shared_ptr<long> maxRefundFee{};
  shared_ptr<long> minRefundFee{};

  QueryRefundApplicationDetail4DistributionResponseBodyModelRefundFeeData() {}

  explicit QueryRefundApplicationDetail4DistributionResponseBodyModelRefundFeeData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxRefundFee) {
      res["MaxRefundFee"] = boost::any(*maxRefundFee);
    }
    if (minRefundFee) {
      res["MinRefundFee"] = boost::any(*minRefundFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxRefundFee") != m.end() && !m["MaxRefundFee"].empty()) {
      maxRefundFee = make_shared<long>(boost::any_cast<long>(m["MaxRefundFee"]));
    }
    if (m.find("MinRefundFee") != m.end() && !m["MinRefundFee"].empty()) {
      minRefundFee = make_shared<long>(boost::any_cast<long>(m["MinRefundFee"]));
    }
  }


  virtual ~QueryRefundApplicationDetail4DistributionResponseBodyModelRefundFeeData() = default;
};
class QueryRefundApplicationDetail4DistributionResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> applyDisputeDesc{};
  shared_ptr<QueryRefundApplicationDetail4DistributionResponseBodyModelApplyReason> applyReason{};
  shared_ptr<long> bizClaimType{};
  shared_ptr<string> disputeCreateTime{};
  shared_ptr<string> disputeDesc{};
  shared_ptr<string> disputeEndTime{};
  shared_ptr<long> disputeId{};
  shared_ptr<long> disputeStatus{};
  shared_ptr<long> disputeType{};
  shared_ptr<string> distributionOrderId{};
  shared_ptr<long> orderLogisticsStatus{};
  shared_ptr<long> realRefundFee{};
  shared_ptr<long> refundFee{};
  shared_ptr<QueryRefundApplicationDetail4DistributionResponseBodyModelRefundFeeData> refundFeeData{};
  shared_ptr<string> refunderAddress{};
  shared_ptr<string> refunderName{};
  shared_ptr<string> refunderTel{};
  shared_ptr<string> refunderZipCode{};
  shared_ptr<long> returnGoodCount{};
  shared_ptr<long> returnGoodLogisticsStatus{};
  shared_ptr<string> sellerAgreeMsg{};
  shared_ptr<string> sellerRefuseAgreementMessage{};
  shared_ptr<string> sellerRefuseReason{};
  shared_ptr<string> subDistributionOrderId{};

  QueryRefundApplicationDetail4DistributionResponseBodyModel() {}

  explicit QueryRefundApplicationDetail4DistributionResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyDisputeDesc) {
      res["ApplyDisputeDesc"] = boost::any(*applyDisputeDesc);
    }
    if (applyReason) {
      res["ApplyReason"] = applyReason ? boost::any(applyReason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bizClaimType) {
      res["BizClaimType"] = boost::any(*bizClaimType);
    }
    if (disputeCreateTime) {
      res["DisputeCreateTime"] = boost::any(*disputeCreateTime);
    }
    if (disputeDesc) {
      res["DisputeDesc"] = boost::any(*disputeDesc);
    }
    if (disputeEndTime) {
      res["DisputeEndTime"] = boost::any(*disputeEndTime);
    }
    if (disputeId) {
      res["DisputeId"] = boost::any(*disputeId);
    }
    if (disputeStatus) {
      res["DisputeStatus"] = boost::any(*disputeStatus);
    }
    if (disputeType) {
      res["DisputeType"] = boost::any(*disputeType);
    }
    if (distributionOrderId) {
      res["DistributionOrderId"] = boost::any(*distributionOrderId);
    }
    if (orderLogisticsStatus) {
      res["OrderLogisticsStatus"] = boost::any(*orderLogisticsStatus);
    }
    if (realRefundFee) {
      res["RealRefundFee"] = boost::any(*realRefundFee);
    }
    if (refundFee) {
      res["RefundFee"] = boost::any(*refundFee);
    }
    if (refundFeeData) {
      res["RefundFeeData"] = refundFeeData ? boost::any(refundFeeData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (refunderAddress) {
      res["RefunderAddress"] = boost::any(*refunderAddress);
    }
    if (refunderName) {
      res["RefunderName"] = boost::any(*refunderName);
    }
    if (refunderTel) {
      res["RefunderTel"] = boost::any(*refunderTel);
    }
    if (refunderZipCode) {
      res["RefunderZipCode"] = boost::any(*refunderZipCode);
    }
    if (returnGoodCount) {
      res["ReturnGoodCount"] = boost::any(*returnGoodCount);
    }
    if (returnGoodLogisticsStatus) {
      res["ReturnGoodLogisticsStatus"] = boost::any(*returnGoodLogisticsStatus);
    }
    if (sellerAgreeMsg) {
      res["SellerAgreeMsg"] = boost::any(*sellerAgreeMsg);
    }
    if (sellerRefuseAgreementMessage) {
      res["SellerRefuseAgreementMessage"] = boost::any(*sellerRefuseAgreementMessage);
    }
    if (sellerRefuseReason) {
      res["SellerRefuseReason"] = boost::any(*sellerRefuseReason);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyDisputeDesc") != m.end() && !m["ApplyDisputeDesc"].empty()) {
      applyDisputeDesc = make_shared<string>(boost::any_cast<string>(m["ApplyDisputeDesc"]));
    }
    if (m.find("ApplyReason") != m.end() && !m["ApplyReason"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApplyReason"].type()) {
        QueryRefundApplicationDetail4DistributionResponseBodyModelApplyReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApplyReason"]));
        applyReason = make_shared<QueryRefundApplicationDetail4DistributionResponseBodyModelApplyReason>(model1);
      }
    }
    if (m.find("BizClaimType") != m.end() && !m["BizClaimType"].empty()) {
      bizClaimType = make_shared<long>(boost::any_cast<long>(m["BizClaimType"]));
    }
    if (m.find("DisputeCreateTime") != m.end() && !m["DisputeCreateTime"].empty()) {
      disputeCreateTime = make_shared<string>(boost::any_cast<string>(m["DisputeCreateTime"]));
    }
    if (m.find("DisputeDesc") != m.end() && !m["DisputeDesc"].empty()) {
      disputeDesc = make_shared<string>(boost::any_cast<string>(m["DisputeDesc"]));
    }
    if (m.find("DisputeEndTime") != m.end() && !m["DisputeEndTime"].empty()) {
      disputeEndTime = make_shared<string>(boost::any_cast<string>(m["DisputeEndTime"]));
    }
    if (m.find("DisputeId") != m.end() && !m["DisputeId"].empty()) {
      disputeId = make_shared<long>(boost::any_cast<long>(m["DisputeId"]));
    }
    if (m.find("DisputeStatus") != m.end() && !m["DisputeStatus"].empty()) {
      disputeStatus = make_shared<long>(boost::any_cast<long>(m["DisputeStatus"]));
    }
    if (m.find("DisputeType") != m.end() && !m["DisputeType"].empty()) {
      disputeType = make_shared<long>(boost::any_cast<long>(m["DisputeType"]));
    }
    if (m.find("DistributionOrderId") != m.end() && !m["DistributionOrderId"].empty()) {
      distributionOrderId = make_shared<string>(boost::any_cast<string>(m["DistributionOrderId"]));
    }
    if (m.find("OrderLogisticsStatus") != m.end() && !m["OrderLogisticsStatus"].empty()) {
      orderLogisticsStatus = make_shared<long>(boost::any_cast<long>(m["OrderLogisticsStatus"]));
    }
    if (m.find("RealRefundFee") != m.end() && !m["RealRefundFee"].empty()) {
      realRefundFee = make_shared<long>(boost::any_cast<long>(m["RealRefundFee"]));
    }
    if (m.find("RefundFee") != m.end() && !m["RefundFee"].empty()) {
      refundFee = make_shared<long>(boost::any_cast<long>(m["RefundFee"]));
    }
    if (m.find("RefundFeeData") != m.end() && !m["RefundFeeData"].empty()) {
      if (typeid(map<string, boost::any>) == m["RefundFeeData"].type()) {
        QueryRefundApplicationDetail4DistributionResponseBodyModelRefundFeeData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RefundFeeData"]));
        refundFeeData = make_shared<QueryRefundApplicationDetail4DistributionResponseBodyModelRefundFeeData>(model1);
      }
    }
    if (m.find("RefunderAddress") != m.end() && !m["RefunderAddress"].empty()) {
      refunderAddress = make_shared<string>(boost::any_cast<string>(m["RefunderAddress"]));
    }
    if (m.find("RefunderName") != m.end() && !m["RefunderName"].empty()) {
      refunderName = make_shared<string>(boost::any_cast<string>(m["RefunderName"]));
    }
    if (m.find("RefunderTel") != m.end() && !m["RefunderTel"].empty()) {
      refunderTel = make_shared<string>(boost::any_cast<string>(m["RefunderTel"]));
    }
    if (m.find("RefunderZipCode") != m.end() && !m["RefunderZipCode"].empty()) {
      refunderZipCode = make_shared<string>(boost::any_cast<string>(m["RefunderZipCode"]));
    }
    if (m.find("ReturnGoodCount") != m.end() && !m["ReturnGoodCount"].empty()) {
      returnGoodCount = make_shared<long>(boost::any_cast<long>(m["ReturnGoodCount"]));
    }
    if (m.find("ReturnGoodLogisticsStatus") != m.end() && !m["ReturnGoodLogisticsStatus"].empty()) {
      returnGoodLogisticsStatus = make_shared<long>(boost::any_cast<long>(m["ReturnGoodLogisticsStatus"]));
    }
    if (m.find("SellerAgreeMsg") != m.end() && !m["SellerAgreeMsg"].empty()) {
      sellerAgreeMsg = make_shared<string>(boost::any_cast<string>(m["SellerAgreeMsg"]));
    }
    if (m.find("SellerRefuseAgreementMessage") != m.end() && !m["SellerRefuseAgreementMessage"].empty()) {
      sellerRefuseAgreementMessage = make_shared<string>(boost::any_cast<string>(m["SellerRefuseAgreementMessage"]));
    }
    if (m.find("SellerRefuseReason") != m.end() && !m["SellerRefuseReason"].empty()) {
      sellerRefuseReason = make_shared<string>(boost::any_cast<string>(m["SellerRefuseReason"]));
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
  }


  virtual ~QueryRefundApplicationDetail4DistributionResponseBodyModel() = default;
};
class QueryRefundApplicationDetail4DistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<QueryRefundApplicationDetail4DistributionResponseBodyModel> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  QueryRefundApplicationDetail4DistributionResponseBody() {}

  explicit QueryRefundApplicationDetail4DistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        QueryRefundApplicationDetail4DistributionResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<QueryRefundApplicationDetail4DistributionResponseBodyModel>(model1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryRefundApplicationDetail4DistributionResponseBody() = default;
};
class QueryRefundApplicationDetail4DistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRefundApplicationDetail4DistributionResponseBody> body{};

  QueryRefundApplicationDetail4DistributionResponse() {}

  explicit QueryRefundApplicationDetail4DistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRefundApplicationDetail4DistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRefundApplicationDetail4DistributionResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRefundApplicationDetail4DistributionResponse() = default;
};
class RenderDistributionOrderRequestItemInfoLists : public Darabonba::Model {
public:
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> lmItemId{};
  shared_ptr<long> quantity{};
  shared_ptr<string> skuId{};

  RenderDistributionOrderRequestItemInfoLists() {}

  explicit RenderDistributionOrderRequestItemInfoLists(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
  }


  virtual ~RenderDistributionOrderRequestItemInfoLists() = default;
};
class RenderDistributionOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> buyerId{};
  shared_ptr<string> deliveryAddress{};
  shared_ptr<string> distributionSupplierId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> extInfo{};
  shared_ptr<vector<RenderDistributionOrderRequestItemInfoLists>> itemInfoLists{};
  shared_ptr<string> tenantId{};

  RenderDistributionOrderRequest() {}

  explicit RenderDistributionOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyerId) {
      res["BuyerId"] = boost::any(*buyerId);
    }
    if (deliveryAddress) {
      res["DeliveryAddress"] = boost::any(*deliveryAddress);
    }
    if (distributionSupplierId) {
      res["DistributionSupplierId"] = boost::any(*distributionSupplierId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (itemInfoLists) {
      vector<boost::any> temp1;
      for(auto item1:*itemInfoLists){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ItemInfoLists"] = boost::any(temp1);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyerId") != m.end() && !m["BuyerId"].empty()) {
      buyerId = make_shared<string>(boost::any_cast<string>(m["BuyerId"]));
    }
    if (m.find("DeliveryAddress") != m.end() && !m["DeliveryAddress"].empty()) {
      deliveryAddress = make_shared<string>(boost::any_cast<string>(m["DeliveryAddress"]));
    }
    if (m.find("DistributionSupplierId") != m.end() && !m["DistributionSupplierId"].empty()) {
      distributionSupplierId = make_shared<string>(boost::any_cast<string>(m["DistributionSupplierId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("ItemInfoLists") != m.end() && !m["ItemInfoLists"].empty()) {
      if (typeid(vector<boost::any>) == m["ItemInfoLists"].type()) {
        vector<RenderDistributionOrderRequestItemInfoLists> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ItemInfoLists"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderRequestItemInfoLists model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itemInfoLists = make_shared<vector<RenderDistributionOrderRequestItemInfoLists>>(expect1);
      }
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~RenderDistributionOrderRequest() = default;
};
class RenderDistributionOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> buyerId{};
  shared_ptr<string> deliveryAddress{};
  shared_ptr<string> distributionSupplierId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> extInfo{};
  shared_ptr<string> itemInfoListsShrink{};
  shared_ptr<string> tenantId{};

  RenderDistributionOrderShrinkRequest() {}

  explicit RenderDistributionOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyerId) {
      res["BuyerId"] = boost::any(*buyerId);
    }
    if (deliveryAddress) {
      res["DeliveryAddress"] = boost::any(*deliveryAddress);
    }
    if (distributionSupplierId) {
      res["DistributionSupplierId"] = boost::any(*distributionSupplierId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (itemInfoListsShrink) {
      res["ItemInfoLists"] = boost::any(*itemInfoListsShrink);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyerId") != m.end() && !m["BuyerId"].empty()) {
      buyerId = make_shared<string>(boost::any_cast<string>(m["BuyerId"]));
    }
    if (m.find("DeliveryAddress") != m.end() && !m["DeliveryAddress"].empty()) {
      deliveryAddress = make_shared<string>(boost::any_cast<string>(m["DeliveryAddress"]));
    }
    if (m.find("DistributionSupplierId") != m.end() && !m["DistributionSupplierId"].empty()) {
      distributionSupplierId = make_shared<string>(boost::any_cast<string>(m["DistributionSupplierId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("ItemInfoLists") != m.end() && !m["ItemInfoLists"].empty()) {
      itemInfoListsShrink = make_shared<string>(boost::any_cast<string>(m["ItemInfoLists"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~RenderDistributionOrderShrinkRequest() = default;
};
class RenderDistributionOrderResponseBodyModelAddressInfos : public Darabonba::Model {
public:
  shared_ptr<string> addressDetail{};
  shared_ptr<long> addressId{};
  shared_ptr<string> divisionCode{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> receiver{};
  shared_ptr<string> receiverPhone{};
  shared_ptr<string> townDivisionCode{};

  RenderDistributionOrderResponseBodyModelAddressInfos() {}

  explicit RenderDistributionOrderResponseBodyModelAddressInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressDetail) {
      res["AddressDetail"] = boost::any(*addressDetail);
    }
    if (addressId) {
      res["AddressId"] = boost::any(*addressId);
    }
    if (divisionCode) {
      res["DivisionCode"] = boost::any(*divisionCode);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (receiver) {
      res["Receiver"] = boost::any(*receiver);
    }
    if (receiverPhone) {
      res["ReceiverPhone"] = boost::any(*receiverPhone);
    }
    if (townDivisionCode) {
      res["TownDivisionCode"] = boost::any(*townDivisionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressDetail") != m.end() && !m["AddressDetail"].empty()) {
      addressDetail = make_shared<string>(boost::any_cast<string>(m["AddressDetail"]));
    }
    if (m.find("AddressId") != m.end() && !m["AddressId"].empty()) {
      addressId = make_shared<long>(boost::any_cast<long>(m["AddressId"]));
    }
    if (m.find("DivisionCode") != m.end() && !m["DivisionCode"].empty()) {
      divisionCode = make_shared<string>(boost::any_cast<string>(m["DivisionCode"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Receiver") != m.end() && !m["Receiver"].empty()) {
      receiver = make_shared<string>(boost::any_cast<string>(m["Receiver"]));
    }
    if (m.find("ReceiverPhone") != m.end() && !m["ReceiverPhone"].empty()) {
      receiverPhone = make_shared<string>(boost::any_cast<string>(m["ReceiverPhone"]));
    }
    if (m.find("TownDivisionCode") != m.end() && !m["TownDivisionCode"].empty()) {
      townDivisionCode = make_shared<string>(boost::any_cast<string>(m["TownDivisionCode"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelAddressInfos() = default;
};
class RenderDistributionOrderResponseBodyModelRenderOrderInfosDeliveryInfos : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<long> postFee{};
  shared_ptr<long> serviceType{};

  RenderDistributionOrderResponseBodyModelRenderOrderInfosDeliveryInfos() {}

  explicit RenderDistributionOrderResponseBodyModelRenderOrderInfosDeliveryInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (postFee) {
      res["PostFee"] = boost::any(*postFee);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PostFee") != m.end() && !m["PostFee"].empty()) {
      postFee = make_shared<long>(boost::any_cast<long>(m["PostFee"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<long>(boost::any_cast<long>(m["ServiceType"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelRenderOrderInfosDeliveryInfos() = default;
};
class RenderDistributionOrderResponseBodyModelRenderOrderInfosInvoiceInfo : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> type{};

  RenderDistributionOrderResponseBodyModelRenderOrderInfosInvoiceInfo() {}

  explicit RenderDistributionOrderResponseBodyModelRenderOrderInfosInvoiceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelRenderOrderInfosInvoiceInfo() = default;
};
class RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOSAvailableItems : public Darabonba::Model {
public:
  shared_ptr<long> itemId{};
  shared_ptr<string> lmItemId{};
  shared_ptr<long> lmShopId{};
  shared_ptr<long> number{};
  shared_ptr<long> points{};
  shared_ptr<long> pointsAmount{};
  shared_ptr<long> priceCent{};
  shared_ptr<bool> removed{};
  shared_ptr<long> skuId{};
  shared_ptr<long> tbSellerId{};
  shared_ptr<long> userPayFee{};

  RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOSAvailableItems() {}

  explicit RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOSAvailableItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (lmShopId) {
      res["LmShopId"] = boost::any(*lmShopId);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (points) {
      res["Points"] = boost::any(*points);
    }
    if (pointsAmount) {
      res["PointsAmount"] = boost::any(*pointsAmount);
    }
    if (priceCent) {
      res["PriceCent"] = boost::any(*priceCent);
    }
    if (removed) {
      res["Removed"] = boost::any(*removed);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (tbSellerId) {
      res["TbSellerId"] = boost::any(*tbSellerId);
    }
    if (userPayFee) {
      res["UserPayFee"] = boost::any(*userPayFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("LmShopId") != m.end() && !m["LmShopId"].empty()) {
      lmShopId = make_shared<long>(boost::any_cast<long>(m["LmShopId"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["Number"]));
    }
    if (m.find("Points") != m.end() && !m["Points"].empty()) {
      points = make_shared<long>(boost::any_cast<long>(m["Points"]));
    }
    if (m.find("PointsAmount") != m.end() && !m["PointsAmount"].empty()) {
      pointsAmount = make_shared<long>(boost::any_cast<long>(m["PointsAmount"]));
    }
    if (m.find("PriceCent") != m.end() && !m["PriceCent"].empty()) {
      priceCent = make_shared<long>(boost::any_cast<long>(m["PriceCent"]));
    }
    if (m.find("Removed") != m.end() && !m["Removed"].empty()) {
      removed = make_shared<bool>(boost::any_cast<bool>(m["Removed"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<long>(boost::any_cast<long>(m["SkuId"]));
    }
    if (m.find("TbSellerId") != m.end() && !m["TbSellerId"].empty()) {
      tbSellerId = make_shared<long>(boost::any_cast<long>(m["TbSellerId"]));
    }
    if (m.find("UserPayFee") != m.end() && !m["UserPayFee"].empty()) {
      userPayFee = make_shared<long>(boost::any_cast<long>(m["UserPayFee"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOSAvailableItems() = default;
};
class RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOS : public Darabonba::Model {
public:
  shared_ptr<vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOSAvailableItems>> availableItems{};
  shared_ptr<bool> canUse{};
  shared_ptr<long> discountPrice{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> level{};
  shared_ptr<string> lmItemId{};
  shared_ptr<string> promotionName{};
  shared_ptr<string> promotionType{};
  shared_ptr<string> reason{};
  shared_ptr<bool> selected{};
  shared_ptr<vector<long>> skuIds{};
  shared_ptr<long> specialPrice{};
  shared_ptr<string> subBizCode{};
  shared_ptr<long> tbSellerId{};
  shared_ptr<long> thresholdPrice{};
  shared_ptr<long> useStartTime{};

  RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOS() {}

  explicit RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableItems) {
      vector<boost::any> temp1;
      for(auto item1:*availableItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableItems"] = boost::any(temp1);
    }
    if (canUse) {
      res["CanUse"] = boost::any(*canUse);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (promotionType) {
      res["PromotionType"] = boost::any(*promotionType);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    if (skuIds) {
      res["SkuIds"] = boost::any(*skuIds);
    }
    if (specialPrice) {
      res["SpecialPrice"] = boost::any(*specialPrice);
    }
    if (subBizCode) {
      res["SubBizCode"] = boost::any(*subBizCode);
    }
    if (tbSellerId) {
      res["TbSellerId"] = boost::any(*tbSellerId);
    }
    if (thresholdPrice) {
      res["ThresholdPrice"] = boost::any(*thresholdPrice);
    }
    if (useStartTime) {
      res["UseStartTime"] = boost::any(*useStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableItems") != m.end() && !m["AvailableItems"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableItems"].type()) {
        vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOSAvailableItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOSAvailableItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableItems = make_shared<vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOSAvailableItems>>(expect1);
      }
    }
    if (m.find("CanUse") != m.end() && !m["CanUse"].empty()) {
      canUse = make_shared<bool>(boost::any_cast<bool>(m["CanUse"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<long>(boost::any_cast<long>(m["DiscountPrice"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("PromotionType") != m.end() && !m["PromotionType"].empty()) {
      promotionType = make_shared<string>(boost::any_cast<string>(m["PromotionType"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
    if (m.find("SkuIds") != m.end() && !m["SkuIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SkuIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SkuIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      skuIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("SpecialPrice") != m.end() && !m["SpecialPrice"].empty()) {
      specialPrice = make_shared<long>(boost::any_cast<long>(m["SpecialPrice"]));
    }
    if (m.find("SubBizCode") != m.end() && !m["SubBizCode"].empty()) {
      subBizCode = make_shared<string>(boost::any_cast<string>(m["SubBizCode"]));
    }
    if (m.find("TbSellerId") != m.end() && !m["TbSellerId"].empty()) {
      tbSellerId = make_shared<long>(boost::any_cast<long>(m["TbSellerId"]));
    }
    if (m.find("ThresholdPrice") != m.end() && !m["ThresholdPrice"].empty()) {
      thresholdPrice = make_shared<long>(boost::any_cast<long>(m["ThresholdPrice"]));
    }
    if (m.find("UseStartTime") != m.end() && !m["UseStartTime"].empty()) {
      useStartTime = make_shared<long>(boost::any_cast<long>(m["UseStartTime"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOS() = default;
};
class RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfos : public Darabonba::Model {
public:
  shared_ptr<bool> canSell{};
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> distributionSupplierId{};
  shared_ptr<string> distributorId{};
  shared_ptr<map<string, string>> features{};
  shared_ptr<string> itemId{};
  shared_ptr<string> itemName{};
  shared_ptr<string> itemPicUrl{};
  shared_ptr<vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOS>> itemPromInstVOS{};
  shared_ptr<string> itemUrl{};
  shared_ptr<string> message{};
  shared_ptr<long> price{};
  shared_ptr<long> promotionFee{};
  shared_ptr<long> quantity{};
  shared_ptr<long> reservePrice{};
  shared_ptr<long> skuId{};
  shared_ptr<string> skuName{};
  shared_ptr<string> virtualItemType{};

  RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfos() {}

  explicit RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canSell) {
      res["CanSell"] = boost::any(*canSell);
    }
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (distributionSupplierId) {
      res["DistributionSupplierId"] = boost::any(*distributionSupplierId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (features) {
      res["Features"] = boost::any(*features);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (itemPicUrl) {
      res["ItemPicUrl"] = boost::any(*itemPicUrl);
    }
    if (itemPromInstVOS) {
      vector<boost::any> temp1;
      for(auto item1:*itemPromInstVOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ItemPromInstVOS"] = boost::any(temp1);
    }
    if (itemUrl) {
      res["ItemUrl"] = boost::any(*itemUrl);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (promotionFee) {
      res["PromotionFee"] = boost::any(*promotionFee);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (reservePrice) {
      res["ReservePrice"] = boost::any(*reservePrice);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (skuName) {
      res["SkuName"] = boost::any(*skuName);
    }
    if (virtualItemType) {
      res["VirtualItemType"] = boost::any(*virtualItemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanSell") != m.end() && !m["CanSell"].empty()) {
      canSell = make_shared<bool>(boost::any_cast<bool>(m["CanSell"]));
    }
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("DistributionSupplierId") != m.end() && !m["DistributionSupplierId"].empty()) {
      distributionSupplierId = make_shared<string>(boost::any_cast<string>(m["DistributionSupplierId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Features"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      features = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("ItemPicUrl") != m.end() && !m["ItemPicUrl"].empty()) {
      itemPicUrl = make_shared<string>(boost::any_cast<string>(m["ItemPicUrl"]));
    }
    if (m.find("ItemPromInstVOS") != m.end() && !m["ItemPromInstVOS"].empty()) {
      if (typeid(vector<boost::any>) == m["ItemPromInstVOS"].type()) {
        vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ItemPromInstVOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itemPromInstVOS = make_shared<vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfosItemPromInstVOS>>(expect1);
      }
    }
    if (m.find("ItemUrl") != m.end() && !m["ItemUrl"].empty()) {
      itemUrl = make_shared<string>(boost::any_cast<string>(m["ItemUrl"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["Price"]));
    }
    if (m.find("PromotionFee") != m.end() && !m["PromotionFee"].empty()) {
      promotionFee = make_shared<long>(boost::any_cast<long>(m["PromotionFee"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("ReservePrice") != m.end() && !m["ReservePrice"].empty()) {
      reservePrice = make_shared<long>(boost::any_cast<long>(m["ReservePrice"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<long>(boost::any_cast<long>(m["SkuId"]));
    }
    if (m.find("SkuName") != m.end() && !m["SkuName"].empty()) {
      skuName = make_shared<string>(boost::any_cast<string>(m["SkuName"]));
    }
    if (m.find("VirtualItemType") != m.end() && !m["VirtualItemType"].empty()) {
      virtualItemType = make_shared<string>(boost::any_cast<string>(m["VirtualItemType"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfos() = default;
};
class RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOSAvailableItems : public Darabonba::Model {
public:
  shared_ptr<long> itemId{};
  shared_ptr<string> lmItemId{};
  shared_ptr<long> lmShopId{};
  shared_ptr<long> number{};
  shared_ptr<long> points{};
  shared_ptr<long> pointsAmount{};
  shared_ptr<long> priceCent{};
  shared_ptr<bool> removed{};
  shared_ptr<long> skuId{};
  shared_ptr<long> tbSellerId{};
  shared_ptr<long> userPayFee{};

  RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOSAvailableItems() {}

  explicit RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOSAvailableItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (lmShopId) {
      res["LmShopId"] = boost::any(*lmShopId);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (points) {
      res["Points"] = boost::any(*points);
    }
    if (pointsAmount) {
      res["PointsAmount"] = boost::any(*pointsAmount);
    }
    if (priceCent) {
      res["PriceCent"] = boost::any(*priceCent);
    }
    if (removed) {
      res["Removed"] = boost::any(*removed);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (tbSellerId) {
      res["TbSellerId"] = boost::any(*tbSellerId);
    }
    if (userPayFee) {
      res["UserPayFee"] = boost::any(*userPayFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("LmShopId") != m.end() && !m["LmShopId"].empty()) {
      lmShopId = make_shared<long>(boost::any_cast<long>(m["LmShopId"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["Number"]));
    }
    if (m.find("Points") != m.end() && !m["Points"].empty()) {
      points = make_shared<long>(boost::any_cast<long>(m["Points"]));
    }
    if (m.find("PointsAmount") != m.end() && !m["PointsAmount"].empty()) {
      pointsAmount = make_shared<long>(boost::any_cast<long>(m["PointsAmount"]));
    }
    if (m.find("PriceCent") != m.end() && !m["PriceCent"].empty()) {
      priceCent = make_shared<long>(boost::any_cast<long>(m["PriceCent"]));
    }
    if (m.find("Removed") != m.end() && !m["Removed"].empty()) {
      removed = make_shared<bool>(boost::any_cast<bool>(m["Removed"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<long>(boost::any_cast<long>(m["SkuId"]));
    }
    if (m.find("TbSellerId") != m.end() && !m["TbSellerId"].empty()) {
      tbSellerId = make_shared<long>(boost::any_cast<long>(m["TbSellerId"]));
    }
    if (m.find("UserPayFee") != m.end() && !m["UserPayFee"].empty()) {
      userPayFee = make_shared<long>(boost::any_cast<long>(m["UserPayFee"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOSAvailableItems() = default;
};
class RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOS : public Darabonba::Model {
public:
  shared_ptr<vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOSAvailableItems>> availableItems{};
  shared_ptr<bool> canUse{};
  shared_ptr<long> discountPrice{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> level{};
  shared_ptr<string> lmItemId{};
  shared_ptr<string> promotionName{};
  shared_ptr<string> promotionType{};
  shared_ptr<string> reason{};
  shared_ptr<bool> selected{};
  shared_ptr<vector<long>> skuIds{};
  shared_ptr<long> specialPrice{};
  shared_ptr<string> subBizCode{};
  shared_ptr<long> tbSellerId{};
  shared_ptr<long> thresholdPrice{};
  shared_ptr<long> useStartTime{};

  RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOS() {}

  explicit RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableItems) {
      vector<boost::any> temp1;
      for(auto item1:*availableItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableItems"] = boost::any(temp1);
    }
    if (canUse) {
      res["CanUse"] = boost::any(*canUse);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (promotionType) {
      res["PromotionType"] = boost::any(*promotionType);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    if (skuIds) {
      res["SkuIds"] = boost::any(*skuIds);
    }
    if (specialPrice) {
      res["SpecialPrice"] = boost::any(*specialPrice);
    }
    if (subBizCode) {
      res["SubBizCode"] = boost::any(*subBizCode);
    }
    if (tbSellerId) {
      res["TbSellerId"] = boost::any(*tbSellerId);
    }
    if (thresholdPrice) {
      res["ThresholdPrice"] = boost::any(*thresholdPrice);
    }
    if (useStartTime) {
      res["UseStartTime"] = boost::any(*useStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableItems") != m.end() && !m["AvailableItems"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableItems"].type()) {
        vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOSAvailableItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOSAvailableItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableItems = make_shared<vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOSAvailableItems>>(expect1);
      }
    }
    if (m.find("CanUse") != m.end() && !m["CanUse"].empty()) {
      canUse = make_shared<bool>(boost::any_cast<bool>(m["CanUse"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<long>(boost::any_cast<long>(m["DiscountPrice"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("PromotionType") != m.end() && !m["PromotionType"].empty()) {
      promotionType = make_shared<string>(boost::any_cast<string>(m["PromotionType"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
    if (m.find("SkuIds") != m.end() && !m["SkuIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SkuIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SkuIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      skuIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("SpecialPrice") != m.end() && !m["SpecialPrice"].empty()) {
      specialPrice = make_shared<long>(boost::any_cast<long>(m["SpecialPrice"]));
    }
    if (m.find("SubBizCode") != m.end() && !m["SubBizCode"].empty()) {
      subBizCode = make_shared<string>(boost::any_cast<string>(m["SubBizCode"]));
    }
    if (m.find("TbSellerId") != m.end() && !m["TbSellerId"].empty()) {
      tbSellerId = make_shared<long>(boost::any_cast<long>(m["TbSellerId"]));
    }
    if (m.find("ThresholdPrice") != m.end() && !m["ThresholdPrice"].empty()) {
      thresholdPrice = make_shared<long>(boost::any_cast<long>(m["ThresholdPrice"]));
    }
    if (m.find("UseStartTime") != m.end() && !m["UseStartTime"].empty()) {
      useStartTime = make_shared<long>(boost::any_cast<long>(m["UseStartTime"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOS() = default;
};
class RenderDistributionOrderResponseBodyModelRenderOrderInfos : public Darabonba::Model {
public:
  shared_ptr<bool> canSell{};
  shared_ptr<vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosDeliveryInfos>> deliveryInfos{};
  shared_ptr<map<string, string>> extInfo{};
  shared_ptr<RenderDistributionOrderResponseBodyModelRenderOrderInfosInvoiceInfo> invoiceInfo{};
  shared_ptr<vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfos>> itemInfos{};
  shared_ptr<string> message{};
  shared_ptr<vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOS>> shopPromInstVOS{};

  RenderDistributionOrderResponseBodyModelRenderOrderInfos() {}

  explicit RenderDistributionOrderResponseBodyModelRenderOrderInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canSell) {
      res["CanSell"] = boost::any(*canSell);
    }
    if (deliveryInfos) {
      vector<boost::any> temp1;
      for(auto item1:*deliveryInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeliveryInfos"] = boost::any(temp1);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (invoiceInfo) {
      res["InvoiceInfo"] = invoiceInfo ? boost::any(invoiceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (itemInfos) {
      vector<boost::any> temp1;
      for(auto item1:*itemInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ItemInfos"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (shopPromInstVOS) {
      vector<boost::any> temp1;
      for(auto item1:*shopPromInstVOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ShopPromInstVOS"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanSell") != m.end() && !m["CanSell"].empty()) {
      canSell = make_shared<bool>(boost::any_cast<bool>(m["CanSell"]));
    }
    if (m.find("DeliveryInfos") != m.end() && !m["DeliveryInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["DeliveryInfos"].type()) {
        vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosDeliveryInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeliveryInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderResponseBodyModelRenderOrderInfosDeliveryInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deliveryInfos = make_shared<vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosDeliveryInfos>>(expect1);
      }
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtInfo"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extInfo = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("InvoiceInfo") != m.end() && !m["InvoiceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["InvoiceInfo"].type()) {
        RenderDistributionOrderResponseBodyModelRenderOrderInfosInvoiceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InvoiceInfo"]));
        invoiceInfo = make_shared<RenderDistributionOrderResponseBodyModelRenderOrderInfosInvoiceInfo>(model1);
      }
    }
    if (m.find("ItemInfos") != m.end() && !m["ItemInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ItemInfos"].type()) {
        vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ItemInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itemInfos = make_shared<vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosItemInfos>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ShopPromInstVOS") != m.end() && !m["ShopPromInstVOS"].empty()) {
      if (typeid(vector<boost::any>) == m["ShopPromInstVOS"].type()) {
        vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ShopPromInstVOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        shopPromInstVOS = make_shared<vector<RenderDistributionOrderResponseBodyModelRenderOrderInfosShopPromInstVOS>>(expect1);
      }
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelRenderOrderInfos() = default;
};
class RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosDeliveryInfos : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<long> postFee{};
  shared_ptr<long> serviceType{};

  RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosDeliveryInfos() {}

  explicit RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosDeliveryInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (postFee) {
      res["PostFee"] = boost::any(*postFee);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PostFee") != m.end() && !m["PostFee"].empty()) {
      postFee = make_shared<long>(boost::any_cast<long>(m["PostFee"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<long>(boost::any_cast<long>(m["ServiceType"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosDeliveryInfos() = default;
};
class RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosInvoiceInfo : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> type{};

  RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosInvoiceInfo() {}

  explicit RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosInvoiceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosInvoiceInfo() = default;
};
class RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOSAvailableItems : public Darabonba::Model {
public:
  shared_ptr<long> itemId{};
  shared_ptr<string> lmItemId{};
  shared_ptr<long> lmShopId{};
  shared_ptr<long> number{};
  shared_ptr<long> points{};
  shared_ptr<long> pointsAmount{};
  shared_ptr<long> priceCent{};
  shared_ptr<bool> removed{};
  shared_ptr<long> skuId{};
  shared_ptr<long> tbSellerId{};
  shared_ptr<long> userPayFee{};

  RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOSAvailableItems() {}

  explicit RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOSAvailableItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (lmShopId) {
      res["LmShopId"] = boost::any(*lmShopId);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (points) {
      res["Points"] = boost::any(*points);
    }
    if (pointsAmount) {
      res["PointsAmount"] = boost::any(*pointsAmount);
    }
    if (priceCent) {
      res["PriceCent"] = boost::any(*priceCent);
    }
    if (removed) {
      res["Removed"] = boost::any(*removed);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (tbSellerId) {
      res["TbSellerId"] = boost::any(*tbSellerId);
    }
    if (userPayFee) {
      res["UserPayFee"] = boost::any(*userPayFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("LmShopId") != m.end() && !m["LmShopId"].empty()) {
      lmShopId = make_shared<long>(boost::any_cast<long>(m["LmShopId"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["Number"]));
    }
    if (m.find("Points") != m.end() && !m["Points"].empty()) {
      points = make_shared<long>(boost::any_cast<long>(m["Points"]));
    }
    if (m.find("PointsAmount") != m.end() && !m["PointsAmount"].empty()) {
      pointsAmount = make_shared<long>(boost::any_cast<long>(m["PointsAmount"]));
    }
    if (m.find("PriceCent") != m.end() && !m["PriceCent"].empty()) {
      priceCent = make_shared<long>(boost::any_cast<long>(m["PriceCent"]));
    }
    if (m.find("Removed") != m.end() && !m["Removed"].empty()) {
      removed = make_shared<bool>(boost::any_cast<bool>(m["Removed"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<long>(boost::any_cast<long>(m["SkuId"]));
    }
    if (m.find("TbSellerId") != m.end() && !m["TbSellerId"].empty()) {
      tbSellerId = make_shared<long>(boost::any_cast<long>(m["TbSellerId"]));
    }
    if (m.find("UserPayFee") != m.end() && !m["UserPayFee"].empty()) {
      userPayFee = make_shared<long>(boost::any_cast<long>(m["UserPayFee"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOSAvailableItems() = default;
};
class RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOS : public Darabonba::Model {
public:
  shared_ptr<vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOSAvailableItems>> availableItems{};
  shared_ptr<bool> canUse{};
  shared_ptr<long> discountPrice{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> level{};
  shared_ptr<string> lmItemId{};
  shared_ptr<string> promotionName{};
  shared_ptr<string> promotionType{};
  shared_ptr<string> reason{};
  shared_ptr<bool> selected{};
  shared_ptr<vector<long>> skuIds{};
  shared_ptr<long> specialPrice{};
  shared_ptr<string> subBizCode{};
  shared_ptr<long> tbSellerId{};
  shared_ptr<long> thresholdPrice{};
  shared_ptr<long> useStartTime{};

  RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOS() {}

  explicit RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableItems) {
      vector<boost::any> temp1;
      for(auto item1:*availableItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableItems"] = boost::any(temp1);
    }
    if (canUse) {
      res["CanUse"] = boost::any(*canUse);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (promotionType) {
      res["PromotionType"] = boost::any(*promotionType);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    if (skuIds) {
      res["SkuIds"] = boost::any(*skuIds);
    }
    if (specialPrice) {
      res["SpecialPrice"] = boost::any(*specialPrice);
    }
    if (subBizCode) {
      res["SubBizCode"] = boost::any(*subBizCode);
    }
    if (tbSellerId) {
      res["TbSellerId"] = boost::any(*tbSellerId);
    }
    if (thresholdPrice) {
      res["ThresholdPrice"] = boost::any(*thresholdPrice);
    }
    if (useStartTime) {
      res["UseStartTime"] = boost::any(*useStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableItems") != m.end() && !m["AvailableItems"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableItems"].type()) {
        vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOSAvailableItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOSAvailableItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableItems = make_shared<vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOSAvailableItems>>(expect1);
      }
    }
    if (m.find("CanUse") != m.end() && !m["CanUse"].empty()) {
      canUse = make_shared<bool>(boost::any_cast<bool>(m["CanUse"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<long>(boost::any_cast<long>(m["DiscountPrice"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("PromotionType") != m.end() && !m["PromotionType"].empty()) {
      promotionType = make_shared<string>(boost::any_cast<string>(m["PromotionType"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
    if (m.find("SkuIds") != m.end() && !m["SkuIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SkuIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SkuIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      skuIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("SpecialPrice") != m.end() && !m["SpecialPrice"].empty()) {
      specialPrice = make_shared<long>(boost::any_cast<long>(m["SpecialPrice"]));
    }
    if (m.find("SubBizCode") != m.end() && !m["SubBizCode"].empty()) {
      subBizCode = make_shared<string>(boost::any_cast<string>(m["SubBizCode"]));
    }
    if (m.find("TbSellerId") != m.end() && !m["TbSellerId"].empty()) {
      tbSellerId = make_shared<long>(boost::any_cast<long>(m["TbSellerId"]));
    }
    if (m.find("ThresholdPrice") != m.end() && !m["ThresholdPrice"].empty()) {
      thresholdPrice = make_shared<long>(boost::any_cast<long>(m["ThresholdPrice"]));
    }
    if (m.find("UseStartTime") != m.end() && !m["UseStartTime"].empty()) {
      useStartTime = make_shared<long>(boost::any_cast<long>(m["UseStartTime"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOS() = default;
};
class RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfos : public Darabonba::Model {
public:
  shared_ptr<bool> canSell{};
  shared_ptr<string> distributionMallId{};
  shared_ptr<string> distributionSupplierId{};
  shared_ptr<string> distributorId{};
  shared_ptr<map<string, string>> features{};
  shared_ptr<string> itemId{};
  shared_ptr<string> itemName{};
  shared_ptr<string> itemPicUrl{};
  shared_ptr<vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOS>> itemPromInstVOS{};
  shared_ptr<string> itemUrl{};
  shared_ptr<string> message{};
  shared_ptr<long> price{};
  shared_ptr<long> promotionFee{};
  shared_ptr<long> quantity{};
  shared_ptr<long> reservePrice{};
  shared_ptr<long> skuId{};
  shared_ptr<string> skuName{};
  shared_ptr<string> virtualItemType{};

  RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfos() {}

  explicit RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canSell) {
      res["CanSell"] = boost::any(*canSell);
    }
    if (distributionMallId) {
      res["DistributionMallId"] = boost::any(*distributionMallId);
    }
    if (distributionSupplierId) {
      res["DistributionSupplierId"] = boost::any(*distributionSupplierId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (features) {
      res["Features"] = boost::any(*features);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (itemPicUrl) {
      res["ItemPicUrl"] = boost::any(*itemPicUrl);
    }
    if (itemPromInstVOS) {
      vector<boost::any> temp1;
      for(auto item1:*itemPromInstVOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ItemPromInstVOS"] = boost::any(temp1);
    }
    if (itemUrl) {
      res["ItemUrl"] = boost::any(*itemUrl);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (promotionFee) {
      res["PromotionFee"] = boost::any(*promotionFee);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (reservePrice) {
      res["ReservePrice"] = boost::any(*reservePrice);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (skuName) {
      res["SkuName"] = boost::any(*skuName);
    }
    if (virtualItemType) {
      res["VirtualItemType"] = boost::any(*virtualItemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanSell") != m.end() && !m["CanSell"].empty()) {
      canSell = make_shared<bool>(boost::any_cast<bool>(m["CanSell"]));
    }
    if (m.find("DistributionMallId") != m.end() && !m["DistributionMallId"].empty()) {
      distributionMallId = make_shared<string>(boost::any_cast<string>(m["DistributionMallId"]));
    }
    if (m.find("DistributionSupplierId") != m.end() && !m["DistributionSupplierId"].empty()) {
      distributionSupplierId = make_shared<string>(boost::any_cast<string>(m["DistributionSupplierId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Features"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      features = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("ItemPicUrl") != m.end() && !m["ItemPicUrl"].empty()) {
      itemPicUrl = make_shared<string>(boost::any_cast<string>(m["ItemPicUrl"]));
    }
    if (m.find("ItemPromInstVOS") != m.end() && !m["ItemPromInstVOS"].empty()) {
      if (typeid(vector<boost::any>) == m["ItemPromInstVOS"].type()) {
        vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ItemPromInstVOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itemPromInstVOS = make_shared<vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfosItemPromInstVOS>>(expect1);
      }
    }
    if (m.find("ItemUrl") != m.end() && !m["ItemUrl"].empty()) {
      itemUrl = make_shared<string>(boost::any_cast<string>(m["ItemUrl"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["Price"]));
    }
    if (m.find("PromotionFee") != m.end() && !m["PromotionFee"].empty()) {
      promotionFee = make_shared<long>(boost::any_cast<long>(m["PromotionFee"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("ReservePrice") != m.end() && !m["ReservePrice"].empty()) {
      reservePrice = make_shared<long>(boost::any_cast<long>(m["ReservePrice"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<long>(boost::any_cast<long>(m["SkuId"]));
    }
    if (m.find("SkuName") != m.end() && !m["SkuName"].empty()) {
      skuName = make_shared<string>(boost::any_cast<string>(m["SkuName"]));
    }
    if (m.find("VirtualItemType") != m.end() && !m["VirtualItemType"].empty()) {
      virtualItemType = make_shared<string>(boost::any_cast<string>(m["VirtualItemType"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfos() = default;
};
class RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOSAvailableItems : public Darabonba::Model {
public:
  shared_ptr<long> itemId{};
  shared_ptr<string> lmItemId{};
  shared_ptr<long> lmShopId{};
  shared_ptr<long> number{};
  shared_ptr<long> points{};
  shared_ptr<long> pointsAmount{};
  shared_ptr<long> priceCent{};
  shared_ptr<bool> removed{};
  shared_ptr<long> skuId{};
  shared_ptr<long> tbSellerId{};
  shared_ptr<long> userPayFee{};

  RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOSAvailableItems() {}

  explicit RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOSAvailableItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (lmShopId) {
      res["LmShopId"] = boost::any(*lmShopId);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (points) {
      res["Points"] = boost::any(*points);
    }
    if (pointsAmount) {
      res["PointsAmount"] = boost::any(*pointsAmount);
    }
    if (priceCent) {
      res["PriceCent"] = boost::any(*priceCent);
    }
    if (removed) {
      res["Removed"] = boost::any(*removed);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (tbSellerId) {
      res["TbSellerId"] = boost::any(*tbSellerId);
    }
    if (userPayFee) {
      res["UserPayFee"] = boost::any(*userPayFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("LmShopId") != m.end() && !m["LmShopId"].empty()) {
      lmShopId = make_shared<long>(boost::any_cast<long>(m["LmShopId"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["Number"]));
    }
    if (m.find("Points") != m.end() && !m["Points"].empty()) {
      points = make_shared<long>(boost::any_cast<long>(m["Points"]));
    }
    if (m.find("PointsAmount") != m.end() && !m["PointsAmount"].empty()) {
      pointsAmount = make_shared<long>(boost::any_cast<long>(m["PointsAmount"]));
    }
    if (m.find("PriceCent") != m.end() && !m["PriceCent"].empty()) {
      priceCent = make_shared<long>(boost::any_cast<long>(m["PriceCent"]));
    }
    if (m.find("Removed") != m.end() && !m["Removed"].empty()) {
      removed = make_shared<bool>(boost::any_cast<bool>(m["Removed"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<long>(boost::any_cast<long>(m["SkuId"]));
    }
    if (m.find("TbSellerId") != m.end() && !m["TbSellerId"].empty()) {
      tbSellerId = make_shared<long>(boost::any_cast<long>(m["TbSellerId"]));
    }
    if (m.find("UserPayFee") != m.end() && !m["UserPayFee"].empty()) {
      userPayFee = make_shared<long>(boost::any_cast<long>(m["UserPayFee"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOSAvailableItems() = default;
};
class RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOS : public Darabonba::Model {
public:
  shared_ptr<vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOSAvailableItems>> availableItems{};
  shared_ptr<bool> canUse{};
  shared_ptr<long> discountPrice{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> level{};
  shared_ptr<string> lmItemId{};
  shared_ptr<string> promotionName{};
  shared_ptr<string> promotionType{};
  shared_ptr<string> reason{};
  shared_ptr<bool> selected{};
  shared_ptr<vector<long>> skuIds{};
  shared_ptr<long> specialPrice{};
  shared_ptr<string> subBizCode{};
  shared_ptr<long> tbSellerId{};
  shared_ptr<long> thresholdPrice{};
  shared_ptr<long> useStartTime{};

  RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOS() {}

  explicit RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableItems) {
      vector<boost::any> temp1;
      for(auto item1:*availableItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableItems"] = boost::any(temp1);
    }
    if (canUse) {
      res["CanUse"] = boost::any(*canUse);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (lmItemId) {
      res["LmItemId"] = boost::any(*lmItemId);
    }
    if (promotionName) {
      res["PromotionName"] = boost::any(*promotionName);
    }
    if (promotionType) {
      res["PromotionType"] = boost::any(*promotionType);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    if (skuIds) {
      res["SkuIds"] = boost::any(*skuIds);
    }
    if (specialPrice) {
      res["SpecialPrice"] = boost::any(*specialPrice);
    }
    if (subBizCode) {
      res["SubBizCode"] = boost::any(*subBizCode);
    }
    if (tbSellerId) {
      res["TbSellerId"] = boost::any(*tbSellerId);
    }
    if (thresholdPrice) {
      res["ThresholdPrice"] = boost::any(*thresholdPrice);
    }
    if (useStartTime) {
      res["UseStartTime"] = boost::any(*useStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableItems") != m.end() && !m["AvailableItems"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableItems"].type()) {
        vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOSAvailableItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOSAvailableItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableItems = make_shared<vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOSAvailableItems>>(expect1);
      }
    }
    if (m.find("CanUse") != m.end() && !m["CanUse"].empty()) {
      canUse = make_shared<bool>(boost::any_cast<bool>(m["CanUse"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<long>(boost::any_cast<long>(m["DiscountPrice"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("LmItemId") != m.end() && !m["LmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["LmItemId"]));
    }
    if (m.find("PromotionName") != m.end() && !m["PromotionName"].empty()) {
      promotionName = make_shared<string>(boost::any_cast<string>(m["PromotionName"]));
    }
    if (m.find("PromotionType") != m.end() && !m["PromotionType"].empty()) {
      promotionType = make_shared<string>(boost::any_cast<string>(m["PromotionType"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
    if (m.find("SkuIds") != m.end() && !m["SkuIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["SkuIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SkuIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      skuIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("SpecialPrice") != m.end() && !m["SpecialPrice"].empty()) {
      specialPrice = make_shared<long>(boost::any_cast<long>(m["SpecialPrice"]));
    }
    if (m.find("SubBizCode") != m.end() && !m["SubBizCode"].empty()) {
      subBizCode = make_shared<string>(boost::any_cast<string>(m["SubBizCode"]));
    }
    if (m.find("TbSellerId") != m.end() && !m["TbSellerId"].empty()) {
      tbSellerId = make_shared<long>(boost::any_cast<long>(m["TbSellerId"]));
    }
    if (m.find("ThresholdPrice") != m.end() && !m["ThresholdPrice"].empty()) {
      thresholdPrice = make_shared<long>(boost::any_cast<long>(m["ThresholdPrice"]));
    }
    if (m.find("UseStartTime") != m.end() && !m["UseStartTime"].empty()) {
      useStartTime = make_shared<long>(boost::any_cast<long>(m["UseStartTime"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOS() = default;
};
class RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfos : public Darabonba::Model {
public:
  shared_ptr<bool> canSell{};
  shared_ptr<vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosDeliveryInfos>> deliveryInfos{};
  shared_ptr<map<string, string>> extInfo{};
  shared_ptr<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosInvoiceInfo> invoiceInfo{};
  shared_ptr<vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfos>> itemInfos{};
  shared_ptr<string> message{};
  shared_ptr<vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOS>> shopPromInstVOS{};

  RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfos() {}

  explicit RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canSell) {
      res["CanSell"] = boost::any(*canSell);
    }
    if (deliveryInfos) {
      vector<boost::any> temp1;
      for(auto item1:*deliveryInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeliveryInfos"] = boost::any(temp1);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (invoiceInfo) {
      res["InvoiceInfo"] = invoiceInfo ? boost::any(invoiceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (itemInfos) {
      vector<boost::any> temp1;
      for(auto item1:*itemInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ItemInfos"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (shopPromInstVOS) {
      vector<boost::any> temp1;
      for(auto item1:*shopPromInstVOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ShopPromInstVOS"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanSell") != m.end() && !m["CanSell"].empty()) {
      canSell = make_shared<bool>(boost::any_cast<bool>(m["CanSell"]));
    }
    if (m.find("DeliveryInfos") != m.end() && !m["DeliveryInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["DeliveryInfos"].type()) {
        vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosDeliveryInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeliveryInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosDeliveryInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deliveryInfos = make_shared<vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosDeliveryInfos>>(expect1);
      }
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtInfo"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extInfo = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("InvoiceInfo") != m.end() && !m["InvoiceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["InvoiceInfo"].type()) {
        RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosInvoiceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InvoiceInfo"]));
        invoiceInfo = make_shared<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosInvoiceInfo>(model1);
      }
    }
    if (m.find("ItemInfos") != m.end() && !m["ItemInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ItemInfos"].type()) {
        vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ItemInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itemInfos = make_shared<vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosItemInfos>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ShopPromInstVOS") != m.end() && !m["ShopPromInstVOS"].empty()) {
      if (typeid(vector<boost::any>) == m["ShopPromInstVOS"].type()) {
        vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ShopPromInstVOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        shopPromInstVOS = make_shared<vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfosShopPromInstVOS>>(expect1);
      }
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfos() = default;
};
class RenderDistributionOrderResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<RenderDistributionOrderResponseBodyModelAddressInfos>> addressInfos{};
  shared_ptr<bool> canSell{};
  shared_ptr<map<string, string>> extInfo{};
  shared_ptr<string> message{};
  shared_ptr<vector<RenderDistributionOrderResponseBodyModelRenderOrderInfos>> renderOrderInfos{};
  shared_ptr<vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfos>> unsellableRenderOrderInfos{};

  RenderDistributionOrderResponseBodyModel() {}

  explicit RenderDistributionOrderResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressInfos) {
      vector<boost::any> temp1;
      for(auto item1:*addressInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AddressInfos"] = boost::any(temp1);
    }
    if (canSell) {
      res["CanSell"] = boost::any(*canSell);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (renderOrderInfos) {
      vector<boost::any> temp1;
      for(auto item1:*renderOrderInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RenderOrderInfos"] = boost::any(temp1);
    }
    if (unsellableRenderOrderInfos) {
      vector<boost::any> temp1;
      for(auto item1:*unsellableRenderOrderInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UnsellableRenderOrderInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressInfos") != m.end() && !m["AddressInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["AddressInfos"].type()) {
        vector<RenderDistributionOrderResponseBodyModelAddressInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AddressInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderResponseBodyModelAddressInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addressInfos = make_shared<vector<RenderDistributionOrderResponseBodyModelAddressInfos>>(expect1);
      }
    }
    if (m.find("CanSell") != m.end() && !m["CanSell"].empty()) {
      canSell = make_shared<bool>(boost::any_cast<bool>(m["CanSell"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtInfo"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extInfo = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RenderOrderInfos") != m.end() && !m["RenderOrderInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["RenderOrderInfos"].type()) {
        vector<RenderDistributionOrderResponseBodyModelRenderOrderInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RenderOrderInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderResponseBodyModelRenderOrderInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        renderOrderInfos = make_shared<vector<RenderDistributionOrderResponseBodyModelRenderOrderInfos>>(expect1);
      }
    }
    if (m.find("UnsellableRenderOrderInfos") != m.end() && !m["UnsellableRenderOrderInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["UnsellableRenderOrderInfos"].type()) {
        vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UnsellableRenderOrderInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        unsellableRenderOrderInfos = make_shared<vector<RenderDistributionOrderResponseBodyModelUnsellableRenderOrderInfos>>(expect1);
      }
    }
  }


  virtual ~RenderDistributionOrderResponseBodyModel() = default;
};
class RenderDistributionOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<RenderDistributionOrderResponseBodyModel> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  RenderDistributionOrderResponseBody() {}

  explicit RenderDistributionOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        RenderDistributionOrderResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<RenderDistributionOrderResponseBodyModel>(model1);
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~RenderDistributionOrderResponseBody() = default;
};
class RenderDistributionOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenderDistributionOrderResponseBody> body{};

  RenderDistributionOrderResponse() {}

  explicit RenderDistributionOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RenderDistributionOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenderDistributionOrderResponseBody>(model1);
      }
    }
  }


  virtual ~RenderDistributionOrderResponse() = default;
};
class SubmitReturnGoodLogistics4DistributionRequest : public Darabonba::Model {
public:
  shared_ptr<string> cpCode{};
  shared_ptr<long> disputeId{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> logisticsNo{};
  shared_ptr<string> subDistributionOrderId{};
  shared_ptr<string> tenantId{};

  SubmitReturnGoodLogistics4DistributionRequest() {}

  explicit SubmitReturnGoodLogistics4DistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpCode) {
      res["CpCode"] = boost::any(*cpCode);
    }
    if (disputeId) {
      res["DisputeId"] = boost::any(*disputeId);
    }
    if (distributorId) {
      res["DistributorId"] = boost::any(*distributorId);
    }
    if (logisticsNo) {
      res["LogisticsNo"] = boost::any(*logisticsNo);
    }
    if (subDistributionOrderId) {
      res["SubDistributionOrderId"] = boost::any(*subDistributionOrderId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpCode") != m.end() && !m["CpCode"].empty()) {
      cpCode = make_shared<string>(boost::any_cast<string>(m["CpCode"]));
    }
    if (m.find("DisputeId") != m.end() && !m["DisputeId"].empty()) {
      disputeId = make_shared<long>(boost::any_cast<long>(m["DisputeId"]));
    }
    if (m.find("DistributorId") != m.end() && !m["DistributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["DistributorId"]));
    }
    if (m.find("LogisticsNo") != m.end() && !m["LogisticsNo"].empty()) {
      logisticsNo = make_shared<string>(boost::any_cast<string>(m["LogisticsNo"]));
    }
    if (m.find("SubDistributionOrderId") != m.end() && !m["SubDistributionOrderId"].empty()) {
      subDistributionOrderId = make_shared<string>(boost::any_cast<string>(m["SubDistributionOrderId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~SubmitReturnGoodLogistics4DistributionRequest() = default;
};
class SubmitReturnGoodLogistics4DistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logsId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> subMessage{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  SubmitReturnGoodLogistics4DistributionResponseBody() {}

  explicit SubmitReturnGoodLogistics4DistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logsId) {
      res["LogsId"] = boost::any(*logsId);
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
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (subMessage) {
      res["SubMessage"] = boost::any(*subMessage);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("LogsId") != m.end() && !m["LogsId"].empty()) {
      logsId = make_shared<string>(boost::any_cast<string>(m["LogsId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("SubMessage") != m.end() && !m["SubMessage"].empty()) {
      subMessage = make_shared<string>(boost::any_cast<string>(m["SubMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~SubmitReturnGoodLogistics4DistributionResponseBody() = default;
};
class SubmitReturnGoodLogistics4DistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitReturnGoodLogistics4DistributionResponseBody> body{};

  SubmitReturnGoodLogistics4DistributionResponse() {}

  explicit SubmitReturnGoodLogistics4DistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitReturnGoodLogistics4DistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitReturnGoodLogistics4DistributionResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitReturnGoodLogistics4DistributionResponse() = default;
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
  ApplyCreateDistributionOrderResponse applyCreateDistributionOrderWithOptions(shared_ptr<ApplyCreateDistributionOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyCreateDistributionOrderResponse applyCreateDistributionOrder(shared_ptr<ApplyCreateDistributionOrderRequest> request);
  ApplyRefund4DistributionResponse applyRefund4DistributionWithOptions(shared_ptr<ApplyRefund4DistributionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyRefund4DistributionResponse applyRefund4Distribution(shared_ptr<ApplyRefund4DistributionRequest> request);
  CancelDistributionTradeResponse cancelDistributionTradeWithOptions(shared_ptr<CancelDistributionTradeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelDistributionTradeResponse cancelDistributionTrade(shared_ptr<CancelDistributionTradeRequest> request);
  CancelRefund4DistributionResponse cancelRefund4DistributionWithOptions(shared_ptr<CancelRefund4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelRefund4DistributionResponse cancelRefund4Distribution(shared_ptr<CancelRefund4DistributionRequest> request);
  ConfirmDisburse4DistributionResponse confirmDisburse4DistributionWithOptions(shared_ptr<ConfirmDisburse4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfirmDisburse4DistributionResponse confirmDisburse4Distribution(shared_ptr<ConfirmDisburse4DistributionRequest> request);
  InitApplyRefund4DistributionResponse initApplyRefund4DistributionWithOptions(shared_ptr<InitApplyRefund4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitApplyRefund4DistributionResponse initApplyRefund4Distribution(shared_ptr<InitApplyRefund4DistributionRequest> request);
  InitModifyRefund4DistributionResponse initModifyRefund4DistributionWithOptions(shared_ptr<InitModifyRefund4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitModifyRefund4DistributionResponse initModifyRefund4Distribution(shared_ptr<InitModifyRefund4DistributionRequest> request);
  ListDistributionItemResponse listDistributionItemWithOptions(shared_ptr<ListDistributionItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDistributionItemResponse listDistributionItem(shared_ptr<ListDistributionItemRequest> request);
  ListDistributionItemWithoutCacheResponse listDistributionItemWithoutCacheWithOptions(shared_ptr<ListDistributionItemWithoutCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDistributionItemWithoutCacheResponse listDistributionItemWithoutCache(shared_ptr<ListDistributionItemWithoutCacheRequest> request);
  ListDistributionMallResponse listDistributionMallWithOptions(shared_ptr<ListDistributionMallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDistributionMallResponse listDistributionMall(shared_ptr<ListDistributionMallRequest> request);
  ModifyRefund4DistributionResponse modifyRefund4DistributionWithOptions(shared_ptr<ModifyRefund4DistributionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyRefund4DistributionResponse modifyRefund4Distribution(shared_ptr<ModifyRefund4DistributionRequest> request);
  QueryChildDivisionCodeByIdResponse queryChildDivisionCodeByIdWithOptions(shared_ptr<QueryChildDivisionCodeByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryChildDivisionCodeByIdResponse queryChildDivisionCodeById(shared_ptr<QueryChildDivisionCodeByIdRequest> request);
  QueryDistributionBillDetailResponse queryDistributionBillDetailWithOptions(shared_ptr<QueryDistributionBillDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDistributionBillDetailResponse queryDistributionBillDetail(shared_ptr<QueryDistributionBillDetailRequest> request);
  QueryDistributionMallResponse queryDistributionMallWithOptions(shared_ptr<QueryDistributionMallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDistributionMallResponse queryDistributionMall(shared_ptr<QueryDistributionMallRequest> request);
  QueryDistributionTradeStatusResponse queryDistributionTradeStatusWithOptions(shared_ptr<QueryDistributionTradeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDistributionTradeStatusResponse queryDistributionTradeStatus(shared_ptr<QueryDistributionTradeStatusRequest> request);
  QueryItemDetailResponse queryItemDetailWithOptions(shared_ptr<QueryItemDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryItemDetailResponse queryItemDetail(shared_ptr<QueryItemDetailRequest> request);
  QueryItemDetailWithDivisionResponse queryItemDetailWithDivisionWithOptions(shared_ptr<QueryItemDetailWithDivisionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryItemDetailWithDivisionResponse queryItemDetailWithDivision(shared_ptr<QueryItemDetailWithDivisionRequest> request);
  QueryItemGuideRetailPriceResponse queryItemGuideRetailPriceWithOptions(shared_ptr<QueryItemGuideRetailPriceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryItemGuideRetailPriceResponse queryItemGuideRetailPrice(shared_ptr<QueryItemGuideRetailPriceRequest> request);
  QueryLogistics4DistributionResponse queryLogistics4DistributionWithOptions(shared_ptr<QueryLogistics4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryLogistics4DistributionResponse queryLogistics4Distribution(shared_ptr<QueryLogistics4DistributionRequest> request);
  QueryMallCategoryListResponse queryMallCategoryListWithOptions(shared_ptr<QueryMallCategoryListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMallCategoryListResponse queryMallCategoryList(shared_ptr<QueryMallCategoryListRequest> request);
  QueryOrderDetail4DistributionResponse queryOrderDetail4DistributionWithOptions(shared_ptr<QueryOrderDetail4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryOrderDetail4DistributionResponse queryOrderDetail4Distribution(shared_ptr<QueryOrderDetail4DistributionRequest> request);
  QueryOrderList4DistributionResponse queryOrderList4DistributionWithOptions(shared_ptr<QueryOrderList4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryOrderList4DistributionResponse queryOrderList4Distribution(shared_ptr<QueryOrderList4DistributionRequest> request);
  QueryRefundApplicationDetail4DistributionResponse queryRefundApplicationDetail4DistributionWithOptions(shared_ptr<QueryRefundApplicationDetail4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRefundApplicationDetail4DistributionResponse queryRefundApplicationDetail4Distribution(shared_ptr<QueryRefundApplicationDetail4DistributionRequest> request);
  RenderDistributionOrderResponse renderDistributionOrderWithOptions(shared_ptr<RenderDistributionOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenderDistributionOrderResponse renderDistributionOrder(shared_ptr<RenderDistributionOrderRequest> request);
  SubmitReturnGoodLogistics4DistributionResponse submitReturnGoodLogistics4DistributionWithOptions(shared_ptr<SubmitReturnGoodLogistics4DistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitReturnGoodLogistics4DistributionResponse submitReturnGoodLogistics4Distribution(shared_ptr<SubmitReturnGoodLogistics4DistributionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Linkedmall20220531

#endif
