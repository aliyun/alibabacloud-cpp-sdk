// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_LINKEDMALL20230930_H_
#define ALIBABACLOUD_LINKEDMALL20230930_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Linkedmall20230930 {
class AddressInfo : public Darabonba::Model {
public:
  shared_ptr<string> addressDetail{};
  shared_ptr<long> addressId{};
  shared_ptr<string> divisionCode{};
  shared_ptr<string> receiver{};
  shared_ptr<string> receiverPhone{};
  shared_ptr<string> townDivisionCode{};

  AddressInfo() {}

  explicit AddressInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressDetail) {
      res["addressDetail"] = boost::any(*addressDetail);
    }
    if (addressId) {
      res["addressId"] = boost::any(*addressId);
    }
    if (divisionCode) {
      res["divisionCode"] = boost::any(*divisionCode);
    }
    if (receiver) {
      res["receiver"] = boost::any(*receiver);
    }
    if (receiverPhone) {
      res["receiverPhone"] = boost::any(*receiverPhone);
    }
    if (townDivisionCode) {
      res["townDivisionCode"] = boost::any(*townDivisionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("addressDetail") != m.end() && !m["addressDetail"].empty()) {
      addressDetail = make_shared<string>(boost::any_cast<string>(m["addressDetail"]));
    }
    if (m.find("addressId") != m.end() && !m["addressId"].empty()) {
      addressId = make_shared<long>(boost::any_cast<long>(m["addressId"]));
    }
    if (m.find("divisionCode") != m.end() && !m["divisionCode"].empty()) {
      divisionCode = make_shared<string>(boost::any_cast<string>(m["divisionCode"]));
    }
    if (m.find("receiver") != m.end() && !m["receiver"].empty()) {
      receiver = make_shared<string>(boost::any_cast<string>(m["receiver"]));
    }
    if (m.find("receiverPhone") != m.end() && !m["receiverPhone"].empty()) {
      receiverPhone = make_shared<string>(boost::any_cast<string>(m["receiverPhone"]));
    }
    if (m.find("townDivisionCode") != m.end() && !m["townDivisionCode"].empty()) {
      townDivisionCode = make_shared<string>(boost::any_cast<string>(m["townDivisionCode"]));
    }
  }


  virtual ~AddressInfo() = default;
};
class ApplyReason : public Darabonba::Model {
public:
  shared_ptr<long> reasonTextId{};
  shared_ptr<string> reasonTips{};

  ApplyReason() {}

  explicit ApplyReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reasonTextId) {
      res["reasonTextId"] = boost::any(*reasonTextId);
    }
    if (reasonTips) {
      res["reasonTips"] = boost::any(*reasonTips);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("reasonTextId") != m.end() && !m["reasonTextId"].empty()) {
      reasonTextId = make_shared<long>(boost::any_cast<long>(m["reasonTextId"]));
    }
    if (m.find("reasonTips") != m.end() && !m["reasonTips"].empty()) {
      reasonTips = make_shared<string>(boost::any_cast<string>(m["reasonTips"]));
    }
  }


  virtual ~ApplyReason() = default;
};
class Category : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<bool> isLeaf{};
  shared_ptr<long> level{};
  shared_ptr<string> name{};
  shared_ptr<long> parentId{};

  Category() {}

  explicit Category(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["categoryId"] = boost::any(*categoryId);
    }
    if (isLeaf) {
      res["isLeaf"] = boost::any(*isLeaf);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categoryId") != m.end() && !m["categoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["categoryId"]));
    }
    if (m.find("isLeaf") != m.end() && !m["isLeaf"].empty()) {
      isLeaf = make_shared<bool>(boost::any_cast<bool>(m["isLeaf"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["level"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<long>(boost::any_cast<long>(m["parentId"]));
    }
  }


  virtual ~Category() = default;
};
class CategoryListQuery : public Darabonba::Model {
public:
  shared_ptr<vector<long>> categoryIds{};
  shared_ptr<long> parentCategoryId{};

  CategoryListQuery() {}

  explicit CategoryListQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryIds) {
      res["categoryIds"] = boost::any(*categoryIds);
    }
    if (parentCategoryId) {
      res["parentCategoryId"] = boost::any(*parentCategoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categoryIds") != m.end() && !m["categoryIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["categoryIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["categoryIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      categoryIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("parentCategoryId") != m.end() && !m["parentCategoryId"].empty()) {
      parentCategoryId = make_shared<long>(boost::any_cast<long>(m["parentCategoryId"]));
    }
  }


  virtual ~CategoryListQuery() = default;
};
class CategoryListResult : public Darabonba::Model {
public:
  shared_ptr<vector<Category>> categories{};
  shared_ptr<string> requestId{};

  CategoryListResult() {}

  explicit CategoryListResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      vector<boost::any> temp1;
      for(auto item1:*categories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["categories"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categories") != m.end() && !m["categories"].empty()) {
      if (typeid(vector<boost::any>) == m["categories"].type()) {
        vector<Category> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["categories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Category model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categories = make_shared<vector<Category>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CategoryListResult() = default;
};
class ConfirmDisburseCmd : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> purchaseOrderId{};

  ConfirmDisburseCmd() {}

  explicit ConfirmDisburseCmd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (purchaseOrderId) {
      res["purchaseOrderId"] = boost::any(*purchaseOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
    if (m.find("purchaseOrderId") != m.end() && !m["purchaseOrderId"].empty()) {
      purchaseOrderId = make_shared<string>(boost::any_cast<string>(m["purchaseOrderId"]));
    }
  }


  virtual ~ConfirmDisburseCmd() = default;
};
class ConfirmDisburseResult : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  ConfirmDisburseResult() {}

  explicit ConfirmDisburseResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["result"]));
    }
  }


  virtual ~ConfirmDisburseResult() = default;
};
class CooperationShop : public Darabonba::Model {
public:
  shared_ptr<string> cooperationCompanyId{};
  shared_ptr<string> cooperationShopId{};
  shared_ptr<string> shopId{};

  CooperationShop() {}

  explicit CooperationShop(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cooperationCompanyId) {
      res["cooperationCompanyId"] = boost::any(*cooperationCompanyId);
    }
    if (cooperationShopId) {
      res["cooperationShopId"] = boost::any(*cooperationShopId);
    }
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cooperationCompanyId") != m.end() && !m["cooperationCompanyId"].empty()) {
      cooperationCompanyId = make_shared<string>(boost::any_cast<string>(m["cooperationCompanyId"]));
    }
    if (m.find("cooperationShopId") != m.end() && !m["cooperationShopId"].empty()) {
      cooperationShopId = make_shared<string>(boost::any_cast<string>(m["cooperationShopId"]));
    }
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
  }


  virtual ~CooperationShop() = default;
};
class CreateAliPayUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> shopId{};

  CreateAliPayUrlRequest() {}

  explicit CreateAliPayUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
  }


  virtual ~CreateAliPayUrlRequest() = default;
};
class CreateAliPayUrlResult : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> memberId{};
  shared_ptr<string> zftWithholdSignUrl{};

  CreateAliPayUrlResult() {}

  explicit CreateAliPayUrlResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (memberId) {
      res["memberId"] = boost::any(*memberId);
    }
    if (zftWithholdSignUrl) {
      res["zftWithholdSignUrl"] = boost::any(*zftWithholdSignUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("memberId") != m.end() && !m["memberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["memberId"]));
    }
    if (m.find("zftWithholdSignUrl") != m.end() && !m["zftWithholdSignUrl"].empty()) {
      zftWithholdSignUrl = make_shared<string>(boost::any_cast<string>(m["zftWithholdSignUrl"]));
    }
  }


  virtual ~CreateAliPayUrlResult() = default;
};
class DeliveryInfo : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};
  shared_ptr<long> postFee{};
  shared_ptr<long> serviceType{};

  DeliveryInfo() {}

  explicit DeliveryInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (postFee) {
      res["postFee"] = boost::any(*postFee);
    }
    if (serviceType) {
      res["serviceType"] = boost::any(*serviceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("postFee") != m.end() && !m["postFee"].empty()) {
      postFee = make_shared<long>(boost::any_cast<long>(m["postFee"]));
    }
    if (m.find("serviceType") != m.end() && !m["serviceType"].empty()) {
      serviceType = make_shared<long>(boost::any_cast<long>(m["serviceType"]));
    }
  }


  virtual ~DeliveryInfo() = default;
};
class DistributionSku : public Darabonba::Model {
public:
  shared_ptr<string> aliasTitle{};
  shared_ptr<string> barCode{};
  shared_ptr<long> creditPeriod{};
  shared_ptr<long> dxPrice{};
  shared_ptr<bool> hasCredit{};
  shared_ptr<bool> hasInvoice{};
  shared_ptr<long> jxPrice{};
  shared_ptr<string> picUrl{};
  shared_ptr<long> quantity{};
  shared_ptr<string> skuId{};
  shared_ptr<string> skuStatus{};
  shared_ptr<string> taxCode{};
  shared_ptr<long> taxRate{};
  shared_ptr<string> title{};

  DistributionSku() {}

  explicit DistributionSku(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasTitle) {
      res["aliasTitle"] = boost::any(*aliasTitle);
    }
    if (barCode) {
      res["barCode"] = boost::any(*barCode);
    }
    if (creditPeriod) {
      res["creditPeriod"] = boost::any(*creditPeriod);
    }
    if (dxPrice) {
      res["dxPrice"] = boost::any(*dxPrice);
    }
    if (hasCredit) {
      res["hasCredit"] = boost::any(*hasCredit);
    }
    if (hasInvoice) {
      res["hasInvoice"] = boost::any(*hasInvoice);
    }
    if (jxPrice) {
      res["jxPrice"] = boost::any(*jxPrice);
    }
    if (picUrl) {
      res["picUrl"] = boost::any(*picUrl);
    }
    if (quantity) {
      res["quantity"] = boost::any(*quantity);
    }
    if (skuId) {
      res["skuId"] = boost::any(*skuId);
    }
    if (skuStatus) {
      res["skuStatus"] = boost::any(*skuStatus);
    }
    if (taxCode) {
      res["taxCode"] = boost::any(*taxCode);
    }
    if (taxRate) {
      res["taxRate"] = boost::any(*taxRate);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliasTitle") != m.end() && !m["aliasTitle"].empty()) {
      aliasTitle = make_shared<string>(boost::any_cast<string>(m["aliasTitle"]));
    }
    if (m.find("barCode") != m.end() && !m["barCode"].empty()) {
      barCode = make_shared<string>(boost::any_cast<string>(m["barCode"]));
    }
    if (m.find("creditPeriod") != m.end() && !m["creditPeriod"].empty()) {
      creditPeriod = make_shared<long>(boost::any_cast<long>(m["creditPeriod"]));
    }
    if (m.find("dxPrice") != m.end() && !m["dxPrice"].empty()) {
      dxPrice = make_shared<long>(boost::any_cast<long>(m["dxPrice"]));
    }
    if (m.find("hasCredit") != m.end() && !m["hasCredit"].empty()) {
      hasCredit = make_shared<bool>(boost::any_cast<bool>(m["hasCredit"]));
    }
    if (m.find("hasInvoice") != m.end() && !m["hasInvoice"].empty()) {
      hasInvoice = make_shared<bool>(boost::any_cast<bool>(m["hasInvoice"]));
    }
    if (m.find("jxPrice") != m.end() && !m["jxPrice"].empty()) {
      jxPrice = make_shared<long>(boost::any_cast<long>(m["jxPrice"]));
    }
    if (m.find("picUrl") != m.end() && !m["picUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["picUrl"]));
    }
    if (m.find("quantity") != m.end() && !m["quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["quantity"]));
    }
    if (m.find("skuId") != m.end() && !m["skuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["skuId"]));
    }
    if (m.find("skuStatus") != m.end() && !m["skuStatus"].empty()) {
      skuStatus = make_shared<string>(boost::any_cast<string>(m["skuStatus"]));
    }
    if (m.find("taxCode") != m.end() && !m["taxCode"].empty()) {
      taxCode = make_shared<string>(boost::any_cast<string>(m["taxCode"]));
    }
    if (m.find("taxRate") != m.end() && !m["taxRate"].empty()) {
      taxRate = make_shared<long>(boost::any_cast<long>(m["taxRate"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~DistributionSku() = default;
};
class DistributionProduct : public Darabonba::Model {
public:
  shared_ptr<string> categoryChain{};
  shared_ptr<long> categoryLeafId{};
  shared_ptr<string> categoryLeafName{};
  shared_ptr<string> channelCode{};
  shared_ptr<string> distributeStatus{};
  shared_ptr<string> picUrl{};
  shared_ptr<string> productId{};
  shared_ptr<string> sellerId{};
  shared_ptr<string> shortTitle{};
  shared_ptr<vector<DistributionSku>> skus{};
  shared_ptr<string> title{};
  shared_ptr<string> whiteBackgroundPicUrl{};

  DistributionProduct() {}

  explicit DistributionProduct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryChain) {
      res["categoryChain"] = boost::any(*categoryChain);
    }
    if (categoryLeafId) {
      res["categoryLeafId"] = boost::any(*categoryLeafId);
    }
    if (categoryLeafName) {
      res["categoryLeafName"] = boost::any(*categoryLeafName);
    }
    if (channelCode) {
      res["channelCode"] = boost::any(*channelCode);
    }
    if (distributeStatus) {
      res["distributeStatus"] = boost::any(*distributeStatus);
    }
    if (picUrl) {
      res["picUrl"] = boost::any(*picUrl);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (sellerId) {
      res["sellerId"] = boost::any(*sellerId);
    }
    if (shortTitle) {
      res["shortTitle"] = boost::any(*shortTitle);
    }
    if (skus) {
      vector<boost::any> temp1;
      for(auto item1:*skus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["skus"] = boost::any(temp1);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (whiteBackgroundPicUrl) {
      res["whiteBackgroundPicUrl"] = boost::any(*whiteBackgroundPicUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categoryChain") != m.end() && !m["categoryChain"].empty()) {
      categoryChain = make_shared<string>(boost::any_cast<string>(m["categoryChain"]));
    }
    if (m.find("categoryLeafId") != m.end() && !m["categoryLeafId"].empty()) {
      categoryLeafId = make_shared<long>(boost::any_cast<long>(m["categoryLeafId"]));
    }
    if (m.find("categoryLeafName") != m.end() && !m["categoryLeafName"].empty()) {
      categoryLeafName = make_shared<string>(boost::any_cast<string>(m["categoryLeafName"]));
    }
    if (m.find("channelCode") != m.end() && !m["channelCode"].empty()) {
      channelCode = make_shared<string>(boost::any_cast<string>(m["channelCode"]));
    }
    if (m.find("distributeStatus") != m.end() && !m["distributeStatus"].empty()) {
      distributeStatus = make_shared<string>(boost::any_cast<string>(m["distributeStatus"]));
    }
    if (m.find("picUrl") != m.end() && !m["picUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["picUrl"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("sellerId") != m.end() && !m["sellerId"].empty()) {
      sellerId = make_shared<string>(boost::any_cast<string>(m["sellerId"]));
    }
    if (m.find("shortTitle") != m.end() && !m["shortTitle"].empty()) {
      shortTitle = make_shared<string>(boost::any_cast<string>(m["shortTitle"]));
    }
    if (m.find("skus") != m.end() && !m["skus"].empty()) {
      if (typeid(vector<boost::any>) == m["skus"].type()) {
        vector<DistributionSku> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["skus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DistributionSku model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skus = make_shared<vector<DistributionSku>>(expect1);
      }
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("whiteBackgroundPicUrl") != m.end() && !m["whiteBackgroundPicUrl"].empty()) {
      whiteBackgroundPicUrl = make_shared<string>(boost::any_cast<string>(m["whiteBackgroundPicUrl"]));
    }
  }


  virtual ~DistributionProduct() = default;
};
class DistributeProductCommand : public Darabonba::Model {
public:
  shared_ptr<string> lmShopId{};
  shared_ptr<vector<DistributionProduct>> products{};
  shared_ptr<string> requestId{};
  shared_ptr<string> requestTime{};
  shared_ptr<string> requestUser{};

  DistributeProductCommand() {}

  explicit DistributeProductCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lmShopId) {
      res["lmShopId"] = boost::any(*lmShopId);
    }
    if (products) {
      vector<boost::any> temp1;
      for(auto item1:*products){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["products"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (requestTime) {
      res["requestTime"] = boost::any(*requestTime);
    }
    if (requestUser) {
      res["requestUser"] = boost::any(*requestUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("lmShopId") != m.end() && !m["lmShopId"].empty()) {
      lmShopId = make_shared<string>(boost::any_cast<string>(m["lmShopId"]));
    }
    if (m.find("products") != m.end() && !m["products"].empty()) {
      if (typeid(vector<boost::any>) == m["products"].type()) {
        vector<DistributionProduct> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["products"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DistributionProduct model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        products = make_shared<vector<DistributionProduct>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("requestTime") != m.end() && !m["requestTime"].empty()) {
      requestTime = make_shared<string>(boost::any_cast<string>(m["requestTime"]));
    }
    if (m.find("requestUser") != m.end() && !m["requestUser"].empty()) {
      requestUser = make_shared<string>(boost::any_cast<string>(m["requestUser"]));
    }
  }


  virtual ~DistributeProductCommand() = default;
};
class DistributeProductResult : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DistributeProductResult() {}

  explicit DistributeProductResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DistributeProductResult() = default;
};
class DistributionMaxRefundFee : public Darabonba::Model {
public:
  shared_ptr<long> maxRefundFee{};
  shared_ptr<long> minRefundFee{};

  DistributionMaxRefundFee() {}

  explicit DistributionMaxRefundFee(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxRefundFee) {
      res["maxRefundFee"] = boost::any(*maxRefundFee);
    }
    if (minRefundFee) {
      res["minRefundFee"] = boost::any(*minRefundFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxRefundFee") != m.end() && !m["maxRefundFee"].empty()) {
      maxRefundFee = make_shared<long>(boost::any_cast<long>(m["maxRefundFee"]));
    }
    if (m.find("minRefundFee") != m.end() && !m["minRefundFee"].empty()) {
      minRefundFee = make_shared<long>(boost::any_cast<long>(m["minRefundFee"]));
    }
  }


  virtual ~DistributionMaxRefundFee() = default;
};
class Division : public Darabonba::Model {
public:
  shared_ptr<long> divisionCode{};
  shared_ptr<long> divisionLevel{};
  shared_ptr<string> divisionName{};
  shared_ptr<long> parentId{};
  shared_ptr<string> pinyin{};

  Division() {}

  explicit Division(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (divisionCode) {
      res["divisionCode"] = boost::any(*divisionCode);
    }
    if (divisionLevel) {
      res["divisionLevel"] = boost::any(*divisionLevel);
    }
    if (divisionName) {
      res["divisionName"] = boost::any(*divisionName);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (pinyin) {
      res["pinyin"] = boost::any(*pinyin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("divisionCode") != m.end() && !m["divisionCode"].empty()) {
      divisionCode = make_shared<long>(boost::any_cast<long>(m["divisionCode"]));
    }
    if (m.find("divisionLevel") != m.end() && !m["divisionLevel"].empty()) {
      divisionLevel = make_shared<long>(boost::any_cast<long>(m["divisionLevel"]));
    }
    if (m.find("divisionName") != m.end() && !m["divisionName"].empty()) {
      divisionName = make_shared<string>(boost::any_cast<string>(m["divisionName"]));
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<long>(boost::any_cast<long>(m["parentId"]));
    }
    if (m.find("pinyin") != m.end() && !m["pinyin"].empty()) {
      pinyin = make_shared<string>(boost::any_cast<string>(m["pinyin"]));
    }
  }


  virtual ~Division() = default;
};
class DivisionPageResult : public Darabonba::Model {
public:
  shared_ptr<vector<Division>> divisionList{};
  shared_ptr<string> requestId{};

  DivisionPageResult() {}

  explicit DivisionPageResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["divisionList"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("divisionList") != m.end() && !m["divisionList"].empty()) {
      if (typeid(vector<boost::any>) == m["divisionList"].type()) {
        vector<Division> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["divisionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Division model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        divisionList = make_shared<vector<Division>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DivisionPageResult() = default;
};
class DivisionQuery : public Darabonba::Model {
public:
  shared_ptr<string> divisionCode{};

  DivisionQuery() {}

  explicit DivisionQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (divisionCode) {
      res["divisionCode"] = boost::any(*divisionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("divisionCode") != m.end() && !m["divisionCode"].empty()) {
      divisionCode = make_shared<string>(boost::any_cast<string>(m["divisionCode"]));
    }
  }


  virtual ~DivisionQuery() = default;
};
class MoneyCurrency : public Darabonba::Model {
public:
  shared_ptr<string> currencyCode{};
  shared_ptr<long> defaultFractionDigits{};
  shared_ptr<string> displayName{};
  shared_ptr<long> numericCode{};
  shared_ptr<string> symbol{};

  MoneyCurrency() {}

  explicit MoneyCurrency(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currencyCode) {
      res["currencyCode"] = boost::any(*currencyCode);
    }
    if (defaultFractionDigits) {
      res["defaultFractionDigits"] = boost::any(*defaultFractionDigits);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (numericCode) {
      res["numericCode"] = boost::any(*numericCode);
    }
    if (symbol) {
      res["symbol"] = boost::any(*symbol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currencyCode") != m.end() && !m["currencyCode"].empty()) {
      currencyCode = make_shared<string>(boost::any_cast<string>(m["currencyCode"]));
    }
    if (m.find("defaultFractionDigits") != m.end() && !m["defaultFractionDigits"].empty()) {
      defaultFractionDigits = make_shared<long>(boost::any_cast<long>(m["defaultFractionDigits"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("numericCode") != m.end() && !m["numericCode"].empty()) {
      numericCode = make_shared<long>(boost::any_cast<long>(m["numericCode"]));
    }
    if (m.find("symbol") != m.end() && !m["symbol"].empty()) {
      symbol = make_shared<string>(boost::any_cast<string>(m["symbol"]));
    }
  }


  virtual ~MoneyCurrency() = default;
};
class Money : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> amountAsString{};
  shared_ptr<string> amountString{};
  shared_ptr<long> cent{};
  shared_ptr<MoneyCurrency> currency{};
  shared_ptr<string> currencyCode{};
  shared_ptr<bool> positive{};

  Money() {}

  explicit Money(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["amount"] = boost::any(*amount);
    }
    if (amountAsString) {
      res["amountAsString"] = boost::any(*amountAsString);
    }
    if (amountString) {
      res["amountString"] = boost::any(*amountString);
    }
    if (cent) {
      res["cent"] = boost::any(*cent);
    }
    if (currency) {
      res["currency"] = currency ? boost::any(currency->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (currencyCode) {
      res["currencyCode"] = boost::any(*currencyCode);
    }
    if (positive) {
      res["positive"] = boost::any(*positive);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("amount") != m.end() && !m["amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["amount"]));
    }
    if (m.find("amountAsString") != m.end() && !m["amountAsString"].empty()) {
      amountAsString = make_shared<string>(boost::any_cast<string>(m["amountAsString"]));
    }
    if (m.find("amountString") != m.end() && !m["amountString"].empty()) {
      amountString = make_shared<string>(boost::any_cast<string>(m["amountString"]));
    }
    if (m.find("cent") != m.end() && !m["cent"].empty()) {
      cent = make_shared<long>(boost::any_cast<long>(m["cent"]));
    }
    if (m.find("currency") != m.end() && !m["currency"].empty()) {
      if (typeid(map<string, boost::any>) == m["currency"].type()) {
        MoneyCurrency model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["currency"]));
        currency = make_shared<MoneyCurrency>(model1);
      }
    }
    if (m.find("currencyCode") != m.end() && !m["currencyCode"].empty()) {
      currencyCode = make_shared<string>(boost::any_cast<string>(m["currencyCode"]));
    }
    if (m.find("positive") != m.end() && !m["positive"].empty()) {
      positive = make_shared<bool>(boost::any_cast<bool>(m["positive"]));
    }
  }


  virtual ~Money() = default;
};
class GeneralBill : public Darabonba::Model {
public:
  shared_ptr<string> billId{};
  shared_ptr<string> billPeriod{};
  shared_ptr<vector<string>> downloadUrl{};
  shared_ptr<string> endTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> shopId{};
  shared_ptr<string> shopName{};
  shared_ptr<string> startTime{};
  shared_ptr<Money> totalAmount{};

  GeneralBill() {}

  explicit GeneralBill(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billId) {
      res["billId"] = boost::any(*billId);
    }
    if (billPeriod) {
      res["billPeriod"] = boost::any(*billPeriod);
    }
    if (downloadUrl) {
      res["downloadUrl"] = boost::any(*downloadUrl);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    if (shopName) {
      res["shopName"] = boost::any(*shopName);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (totalAmount) {
      res["totalAmount"] = totalAmount ? boost::any(totalAmount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("billId") != m.end() && !m["billId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["billId"]));
    }
    if (m.find("billPeriod") != m.end() && !m["billPeriod"].empty()) {
      billPeriod = make_shared<string>(boost::any_cast<string>(m["billPeriod"]));
    }
    if (m.find("downloadUrl") != m.end() && !m["downloadUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["downloadUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["downloadUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      downloadUrl = make_shared<vector<string>>(toVec1);
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
    if (m.find("shopName") != m.end() && !m["shopName"].empty()) {
      shopName = make_shared<string>(boost::any_cast<string>(m["shopName"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("totalAmount") != m.end() && !m["totalAmount"].empty()) {
      if (typeid(map<string, boost::any>) == m["totalAmount"].type()) {
        Money model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["totalAmount"]));
        totalAmount = make_shared<Money>(model1);
      }
    }
  }


  virtual ~GeneralBill() = default;
};
class GeneralBillPageQuery : public Darabonba::Model {
public:
  shared_ptr<bool> asc{};
  shared_ptr<string> billId{};
  shared_ptr<string> billPeriod{};
  shared_ptr<long> limit{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> orderDirection{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> shopId{};
  shared_ptr<long> start{};

  GeneralBillPageQuery() {}

  explicit GeneralBillPageQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asc) {
      res["asc"] = boost::any(*asc);
    }
    if (billId) {
      res["billId"] = boost::any(*billId);
    }
    if (billPeriod) {
      res["billPeriod"] = boost::any(*billPeriod);
    }
    if (limit) {
      res["limit"] = boost::any(*limit);
    }
    if (orderBy) {
      res["orderBy"] = boost::any(*orderBy);
    }
    if (orderDirection) {
      res["orderDirection"] = boost::any(*orderDirection);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    if (start) {
      res["start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("asc") != m.end() && !m["asc"].empty()) {
      asc = make_shared<bool>(boost::any_cast<bool>(m["asc"]));
    }
    if (m.find("billId") != m.end() && !m["billId"].empty()) {
      billId = make_shared<string>(boost::any_cast<string>(m["billId"]));
    }
    if (m.find("billPeriod") != m.end() && !m["billPeriod"].empty()) {
      billPeriod = make_shared<string>(boost::any_cast<string>(m["billPeriod"]));
    }
    if (m.find("limit") != m.end() && !m["limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["limit"]));
    }
    if (m.find("orderBy") != m.end() && !m["orderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["orderBy"]));
    }
    if (m.find("orderDirection") != m.end() && !m["orderDirection"].empty()) {
      orderDirection = make_shared<string>(boost::any_cast<string>(m["orderDirection"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
    if (m.find("start") != m.end() && !m["start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["start"]));
    }
  }


  virtual ~GeneralBillPageQuery() = default;
};
class GeneralBillPageResult : public Darabonba::Model {
public:
  shared_ptr<vector<GeneralBill>> generalBills{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  GeneralBillPageResult() {}

  explicit GeneralBillPageResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generalBills) {
      vector<boost::any> temp1;
      for(auto item1:*generalBills){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["generalBills"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generalBills") != m.end() && !m["generalBills"].empty()) {
      if (typeid(vector<boost::any>) == m["generalBills"].type()) {
        vector<GeneralBill> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["generalBills"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GeneralBill model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        generalBills = make_shared<vector<GeneralBill>>(expect1);
      }
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~GeneralBillPageResult() = default;
};
class GetDistributionProductResult : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<DistributionProduct>> products{};
  shared_ptr<string> requestId{};

  GetDistributionProductResult() {}

  explicit GetDistributionProductResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (products) {
      vector<boost::any> temp1;
      for(auto item1:*products){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["products"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("products") != m.end() && !m["products"].empty()) {
      if (typeid(vector<boost::any>) == m["products"].type()) {
        vector<DistributionProduct> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["products"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DistributionProduct model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        products = make_shared<vector<DistributionProduct>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetDistributionProductResult() = default;
};
class Good : public Darabonba::Model {
public:
  shared_ptr<string> goodName{};
  shared_ptr<string> productId{};
  shared_ptr<long> quantity{};
  shared_ptr<string> skuId{};
  shared_ptr<string> skuTitle{};

  Good() {}

  explicit Good(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (goodName) {
      res["goodName"] = boost::any(*goodName);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (quantity) {
      res["quantity"] = boost::any(*quantity);
    }
    if (skuId) {
      res["skuId"] = boost::any(*skuId);
    }
    if (skuTitle) {
      res["skuTitle"] = boost::any(*skuTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("goodName") != m.end() && !m["goodName"].empty()) {
      goodName = make_shared<string>(boost::any_cast<string>(m["goodName"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("quantity") != m.end() && !m["quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["quantity"]));
    }
    if (m.find("skuId") != m.end() && !m["skuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["skuId"]));
    }
    if (m.find("skuTitle") != m.end() && !m["skuTitle"].empty()) {
      skuTitle = make_shared<string>(boost::any_cast<string>(m["skuTitle"]));
    }
  }


  virtual ~Good() = default;
};
class GoodsShippingNoticeCreateCmd : public Darabonba::Model {
public:
  shared_ptr<string> cpCode{};
  shared_ptr<string> disputeId{};
  shared_ptr<string> logisticsNo{};

  GoodsShippingNoticeCreateCmd() {}

  explicit GoodsShippingNoticeCreateCmd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpCode) {
      res["cpCode"] = boost::any(*cpCode);
    }
    if (disputeId) {
      res["disputeId"] = boost::any(*disputeId);
    }
    if (logisticsNo) {
      res["logisticsNo"] = boost::any(*logisticsNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cpCode") != m.end() && !m["cpCode"].empty()) {
      cpCode = make_shared<string>(boost::any_cast<string>(m["cpCode"]));
    }
    if (m.find("disputeId") != m.end() && !m["disputeId"].empty()) {
      disputeId = make_shared<string>(boost::any_cast<string>(m["disputeId"]));
    }
    if (m.find("logisticsNo") != m.end() && !m["logisticsNo"].empty()) {
      logisticsNo = make_shared<string>(boost::any_cast<string>(m["logisticsNo"]));
    }
  }


  virtual ~GoodsShippingNoticeCreateCmd() = default;
};
class GoodsShippingNoticeCreateResult : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  GoodsShippingNoticeCreateResult() {}

  explicit GoodsShippingNoticeCreateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["result"]));
    }
  }


  virtual ~GoodsShippingNoticeCreateResult() = default;
};
class LeavePictureList : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> picture{};

  LeavePictureList() {}

  explicit LeavePictureList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (picture) {
      res["picture"] = boost::any(*picture);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("picture") != m.end() && !m["picture"].empty()) {
      picture = make_shared<string>(boost::any_cast<string>(m["picture"]));
    }
  }


  virtual ~LeavePictureList() = default;
};
class LimitRule : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<string> condcase{};
  shared_ptr<long> endTime{};
  shared_ptr<long> limitNum{};
  shared_ptr<string> ruleType{};

  LimitRule() {}

  explicit LimitRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["beginTime"] = boost::any(*beginTime);
    }
    if (condcase) {
      res["condcase"] = boost::any(*condcase);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (limitNum) {
      res["limitNum"] = boost::any(*limitNum);
    }
    if (ruleType) {
      res["ruleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("beginTime") != m.end() && !m["beginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["beginTime"]));
    }
    if (m.find("condcase") != m.end() && !m["condcase"].empty()) {
      condcase = make_shared<string>(boost::any_cast<string>(m["condcase"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("limitNum") != m.end() && !m["limitNum"].empty()) {
      limitNum = make_shared<long>(boost::any_cast<long>(m["limitNum"]));
    }
    if (m.find("ruleType") != m.end() && !m["ruleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["ruleType"]));
    }
  }


  virtual ~LimitRule() = default;
};
class LogisticsDetail : public Darabonba::Model {
public:
  shared_ptr<string> ocurrTimeStr{};
  shared_ptr<string> standerdDesc{};

  LogisticsDetail() {}

  explicit LogisticsDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ocurrTimeStr) {
      res["ocurrTimeStr"] = boost::any(*ocurrTimeStr);
    }
    if (standerdDesc) {
      res["standerdDesc"] = boost::any(*standerdDesc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ocurrTimeStr") != m.end() && !m["ocurrTimeStr"].empty()) {
      ocurrTimeStr = make_shared<string>(boost::any_cast<string>(m["ocurrTimeStr"]));
    }
    if (m.find("standerdDesc") != m.end() && !m["standerdDesc"].empty()) {
      standerdDesc = make_shared<string>(boost::any_cast<string>(m["standerdDesc"]));
    }
  }


  virtual ~LogisticsDetail() = default;
};
class LogisticsInformationData : public Darabonba::Model {
public:
  shared_ptr<string> logisticsStatus{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> orderId{};
  shared_ptr<string> orderLineId{};
  shared_ptr<string> outerPurchaseOrderId{};
  shared_ptr<string> purchaserId{};
  shared_ptr<string> trackingCompanyCode{};
  shared_ptr<string> trackingCompanyName{};
  shared_ptr<string> trackingNumber{};

  LogisticsInformationData() {}

  explicit LogisticsInformationData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logisticsStatus) {
      res["logisticsStatus"] = boost::any(*logisticsStatus);
    }
    if (modifiedTime) {
      res["modifiedTime"] = boost::any(*modifiedTime);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (orderLineId) {
      res["orderLineId"] = boost::any(*orderLineId);
    }
    if (outerPurchaseOrderId) {
      res["outerPurchaseOrderId"] = boost::any(*outerPurchaseOrderId);
    }
    if (purchaserId) {
      res["purchaserId"] = boost::any(*purchaserId);
    }
    if (trackingCompanyCode) {
      res["trackingCompanyCode"] = boost::any(*trackingCompanyCode);
    }
    if (trackingCompanyName) {
      res["trackingCompanyName"] = boost::any(*trackingCompanyName);
    }
    if (trackingNumber) {
      res["trackingNumber"] = boost::any(*trackingNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logisticsStatus") != m.end() && !m["logisticsStatus"].empty()) {
      logisticsStatus = make_shared<string>(boost::any_cast<string>(m["logisticsStatus"]));
    }
    if (m.find("modifiedTime") != m.end() && !m["modifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["modifiedTime"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
    if (m.find("orderLineId") != m.end() && !m["orderLineId"].empty()) {
      orderLineId = make_shared<string>(boost::any_cast<string>(m["orderLineId"]));
    }
    if (m.find("outerPurchaseOrderId") != m.end() && !m["outerPurchaseOrderId"].empty()) {
      outerPurchaseOrderId = make_shared<string>(boost::any_cast<string>(m["outerPurchaseOrderId"]));
    }
    if (m.find("purchaserId") != m.end() && !m["purchaserId"].empty()) {
      purchaserId = make_shared<string>(boost::any_cast<string>(m["purchaserId"]));
    }
    if (m.find("trackingCompanyCode") != m.end() && !m["trackingCompanyCode"].empty()) {
      trackingCompanyCode = make_shared<string>(boost::any_cast<string>(m["trackingCompanyCode"]));
    }
    if (m.find("trackingCompanyName") != m.end() && !m["trackingCompanyName"].empty()) {
      trackingCompanyName = make_shared<string>(boost::any_cast<string>(m["trackingCompanyName"]));
    }
    if (m.find("trackingNumber") != m.end() && !m["trackingNumber"].empty()) {
      trackingNumber = make_shared<string>(boost::any_cast<string>(m["trackingNumber"]));
    }
  }


  virtual ~LogisticsInformationData() = default;
};
class LogisticsOrderResult : public Darabonba::Model {
public:
  shared_ptr<string> dataProvider{};
  shared_ptr<string> dataProviderTitle{};
  shared_ptr<vector<Good>> goods{};
  shared_ptr<string> logisticsCompanyCode{};
  shared_ptr<string> logisticsCompanyName{};
  shared_ptr<vector<LogisticsDetail>> logisticsDetailList{};
  shared_ptr<string> mailNo{};

  LogisticsOrderResult() {}

  explicit LogisticsOrderResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataProvider) {
      res["dataProvider"] = boost::any(*dataProvider);
    }
    if (dataProviderTitle) {
      res["dataProviderTitle"] = boost::any(*dataProviderTitle);
    }
    if (goods) {
      vector<boost::any> temp1;
      for(auto item1:*goods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["goods"] = boost::any(temp1);
    }
    if (logisticsCompanyCode) {
      res["logisticsCompanyCode"] = boost::any(*logisticsCompanyCode);
    }
    if (logisticsCompanyName) {
      res["logisticsCompanyName"] = boost::any(*logisticsCompanyName);
    }
    if (logisticsDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*logisticsDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["logisticsDetailList"] = boost::any(temp1);
    }
    if (mailNo) {
      res["mailNo"] = boost::any(*mailNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataProvider") != m.end() && !m["dataProvider"].empty()) {
      dataProvider = make_shared<string>(boost::any_cast<string>(m["dataProvider"]));
    }
    if (m.find("dataProviderTitle") != m.end() && !m["dataProviderTitle"].empty()) {
      dataProviderTitle = make_shared<string>(boost::any_cast<string>(m["dataProviderTitle"]));
    }
    if (m.find("goods") != m.end() && !m["goods"].empty()) {
      if (typeid(vector<boost::any>) == m["goods"].type()) {
        vector<Good> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["goods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Good model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        goods = make_shared<vector<Good>>(expect1);
      }
    }
    if (m.find("logisticsCompanyCode") != m.end() && !m["logisticsCompanyCode"].empty()) {
      logisticsCompanyCode = make_shared<string>(boost::any_cast<string>(m["logisticsCompanyCode"]));
    }
    if (m.find("logisticsCompanyName") != m.end() && !m["logisticsCompanyName"].empty()) {
      logisticsCompanyName = make_shared<string>(boost::any_cast<string>(m["logisticsCompanyName"]));
    }
    if (m.find("logisticsDetailList") != m.end() && !m["logisticsDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["logisticsDetailList"].type()) {
        vector<LogisticsDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["logisticsDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LogisticsDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logisticsDetailList = make_shared<vector<LogisticsDetail>>(expect1);
      }
    }
    if (m.find("mailNo") != m.end() && !m["mailNo"].empty()) {
      mailNo = make_shared<string>(boost::any_cast<string>(m["mailNo"]));
    }
  }


  virtual ~LogisticsOrderResult() = default;
};
class LogisticsOrderListResult : public Darabonba::Model {
public:
  shared_ptr<vector<LogisticsOrderResult>> logisticsOrderList{};
  shared_ptr<string> requestId{};

  LogisticsOrderListResult() {}

  explicit LogisticsOrderListResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logisticsOrderList) {
      vector<boost::any> temp1;
      for(auto item1:*logisticsOrderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["logisticsOrderList"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logisticsOrderList") != m.end() && !m["logisticsOrderList"].empty()) {
      if (typeid(vector<boost::any>) == m["logisticsOrderList"].type()) {
        vector<LogisticsOrderResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["logisticsOrderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LogisticsOrderResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logisticsOrderList = make_shared<vector<LogisticsOrderResult>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~LogisticsOrderListResult() = default;
};
class MemberAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> shopId{};

  MemberAccountRequest() {}

  explicit MemberAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
  }


  virtual ~MemberAccountRequest() = default;
};
class MemberAccountResult : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accountNo{};
  shared_ptr<string> shopId{};

  MemberAccountResult() {}

  explicit MemberAccountResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountNo) {
      res["accountNo"] = boost::any(*accountNo);
    }
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountNo") != m.end() && !m["accountNo"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["accountNo"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["accountNo"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accountNo = make_shared<vector<string>>(toVec1);
    }
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
  }


  virtual ~MemberAccountResult() = default;
};
class OrderLineResult : public Darabonba::Model {
public:
  shared_ptr<string> logisticsStatus{};
  shared_ptr<string> number{};
  shared_ptr<string> orderId{};
  shared_ptr<string> orderLineId{};
  shared_ptr<string> orderLineStatus{};
  shared_ptr<long> payFee{};
  shared_ptr<string> productId{};
  shared_ptr<string> productPic{};
  shared_ptr<string> productTitle{};
  shared_ptr<string> skuId{};
  shared_ptr<string> skuTitle{};

  OrderLineResult() {}

  explicit OrderLineResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logisticsStatus) {
      res["logisticsStatus"] = boost::any(*logisticsStatus);
    }
    if (number) {
      res["number"] = boost::any(*number);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (orderLineId) {
      res["orderLineId"] = boost::any(*orderLineId);
    }
    if (orderLineStatus) {
      res["orderLineStatus"] = boost::any(*orderLineStatus);
    }
    if (payFee) {
      res["payFee"] = boost::any(*payFee);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productPic) {
      res["productPic"] = boost::any(*productPic);
    }
    if (productTitle) {
      res["productTitle"] = boost::any(*productTitle);
    }
    if (skuId) {
      res["skuId"] = boost::any(*skuId);
    }
    if (skuTitle) {
      res["skuTitle"] = boost::any(*skuTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logisticsStatus") != m.end() && !m["logisticsStatus"].empty()) {
      logisticsStatus = make_shared<string>(boost::any_cast<string>(m["logisticsStatus"]));
    }
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["number"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
    if (m.find("orderLineId") != m.end() && !m["orderLineId"].empty()) {
      orderLineId = make_shared<string>(boost::any_cast<string>(m["orderLineId"]));
    }
    if (m.find("orderLineStatus") != m.end() && !m["orderLineStatus"].empty()) {
      orderLineStatus = make_shared<string>(boost::any_cast<string>(m["orderLineStatus"]));
    }
    if (m.find("payFee") != m.end() && !m["payFee"].empty()) {
      payFee = make_shared<long>(boost::any_cast<long>(m["payFee"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("productPic") != m.end() && !m["productPic"].empty()) {
      productPic = make_shared<string>(boost::any_cast<string>(m["productPic"]));
    }
    if (m.find("productTitle") != m.end() && !m["productTitle"].empty()) {
      productTitle = make_shared<string>(boost::any_cast<string>(m["productTitle"]));
    }
    if (m.find("skuId") != m.end() && !m["skuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["skuId"]));
    }
    if (m.find("skuTitle") != m.end() && !m["skuTitle"].empty()) {
      skuTitle = make_shared<string>(boost::any_cast<string>(m["skuTitle"]));
    }
  }


  virtual ~OrderLineResult() = default;
};
class OrderResult : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> logisticsStatus{};
  shared_ptr<long> orderAmount{};
  shared_ptr<string> orderClosedReason{};
  shared_ptr<string> orderId{};
  shared_ptr<vector<OrderLineResult>> orderLineList{};
  shared_ptr<string> orderStatus{};
  shared_ptr<string> requestId{};

  OrderResult() {}

  explicit OrderResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["createDate"] = boost::any(*createDate);
    }
    if (distributorId) {
      res["distributorId"] = boost::any(*distributorId);
    }
    if (logisticsStatus) {
      res["logisticsStatus"] = boost::any(*logisticsStatus);
    }
    if (orderAmount) {
      res["orderAmount"] = boost::any(*orderAmount);
    }
    if (orderClosedReason) {
      res["orderClosedReason"] = boost::any(*orderClosedReason);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (orderLineList) {
      vector<boost::any> temp1;
      for(auto item1:*orderLineList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["orderLineList"] = boost::any(temp1);
    }
    if (orderStatus) {
      res["orderStatus"] = boost::any(*orderStatus);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createDate") != m.end() && !m["createDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["createDate"]));
    }
    if (m.find("distributorId") != m.end() && !m["distributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["distributorId"]));
    }
    if (m.find("logisticsStatus") != m.end() && !m["logisticsStatus"].empty()) {
      logisticsStatus = make_shared<string>(boost::any_cast<string>(m["logisticsStatus"]));
    }
    if (m.find("orderAmount") != m.end() && !m["orderAmount"].empty()) {
      orderAmount = make_shared<long>(boost::any_cast<long>(m["orderAmount"]));
    }
    if (m.find("orderClosedReason") != m.end() && !m["orderClosedReason"].empty()) {
      orderClosedReason = make_shared<string>(boost::any_cast<string>(m["orderClosedReason"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
    if (m.find("orderLineList") != m.end() && !m["orderLineList"].empty()) {
      if (typeid(vector<boost::any>) == m["orderLineList"].type()) {
        vector<OrderLineResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["orderLineList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderLineResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderLineList = make_shared<vector<OrderLineResult>>(expect1);
      }
    }
    if (m.find("orderStatus") != m.end() && !m["orderStatus"].empty()) {
      orderStatus = make_shared<string>(boost::any_cast<string>(m["orderStatus"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~OrderResult() = default;
};
class OrderListResult : public Darabonba::Model {
public:
  shared_ptr<vector<OrderResult>> orderList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  OrderListResult() {}

  explicit OrderListResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderList) {
      vector<boost::any> temp1;
      for(auto item1:*orderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["orderList"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("orderList") != m.end() && !m["orderList"].empty()) {
      if (typeid(vector<boost::any>) == m["orderList"].type()) {
        vector<OrderResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["orderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderList = make_shared<vector<OrderResult>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~OrderListResult() = default;
};
class OrderPageQuery : public Darabonba::Model {
public:
  shared_ptr<vector<string>> orderIdList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> purchaseOrderId{};

  OrderPageQuery() {}

  explicit OrderPageQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderIdList) {
      res["orderIdList"] = boost::any(*orderIdList);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (purchaseOrderId) {
      res["purchaseOrderId"] = boost::any(*purchaseOrderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("orderIdList") != m.end() && !m["orderIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["orderIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["orderIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      orderIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("purchaseOrderId") != m.end() && !m["purchaseOrderId"].empty()) {
      purchaseOrderId = make_shared<string>(boost::any_cast<string>(m["purchaseOrderId"]));
    }
  }


  virtual ~OrderPageQuery() = default;
};
class OrderProductResult : public Darabonba::Model {
public:
  shared_ptr<bool> canSell{};
  shared_ptr<map<string, boost::any>> features{};
  shared_ptr<string> message{};
  shared_ptr<long> price{};
  shared_ptr<string> productId{};
  shared_ptr<string> productPicUrl{};
  shared_ptr<string> productTitle{};
  shared_ptr<string> purchaserId{};
  shared_ptr<long> quantity{};
  shared_ptr<string> skuId{};
  shared_ptr<string> skuTitle{};

  OrderProductResult() {}

  explicit OrderProductResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canSell) {
      res["canSell"] = boost::any(*canSell);
    }
    if (features) {
      res["features"] = boost::any(*features);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productPicUrl) {
      res["productPicUrl"] = boost::any(*productPicUrl);
    }
    if (productTitle) {
      res["productTitle"] = boost::any(*productTitle);
    }
    if (purchaserId) {
      res["purchaserId"] = boost::any(*purchaserId);
    }
    if (quantity) {
      res["quantity"] = boost::any(*quantity);
    }
    if (skuId) {
      res["skuId"] = boost::any(*skuId);
    }
    if (skuTitle) {
      res["skuTitle"] = boost::any(*skuTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("canSell") != m.end() && !m["canSell"].empty()) {
      canSell = make_shared<bool>(boost::any_cast<bool>(m["canSell"]));
    }
    if (m.find("features") != m.end() && !m["features"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["features"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      features = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["price"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("productPicUrl") != m.end() && !m["productPicUrl"].empty()) {
      productPicUrl = make_shared<string>(boost::any_cast<string>(m["productPicUrl"]));
    }
    if (m.find("productTitle") != m.end() && !m["productTitle"].empty()) {
      productTitle = make_shared<string>(boost::any_cast<string>(m["productTitle"]));
    }
    if (m.find("purchaserId") != m.end() && !m["purchaserId"].empty()) {
      purchaserId = make_shared<string>(boost::any_cast<string>(m["purchaserId"]));
    }
    if (m.find("quantity") != m.end() && !m["quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["quantity"]));
    }
    if (m.find("skuId") != m.end() && !m["skuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["skuId"]));
    }
    if (m.find("skuTitle") != m.end() && !m["skuTitle"].empty()) {
      skuTitle = make_shared<string>(boost::any_cast<string>(m["skuTitle"]));
    }
  }


  virtual ~OrderProductResult() = default;
};
class OrderRenderProductDTO : public Darabonba::Model {
public:
  shared_ptr<string> productId{};
  shared_ptr<string> purchaserId{};
  shared_ptr<long> quantity{};
  shared_ptr<string> skuId{};

  OrderRenderProductDTO() {}

  explicit OrderRenderProductDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (purchaserId) {
      res["purchaserId"] = boost::any(*purchaserId);
    }
    if (quantity) {
      res["quantity"] = boost::any(*quantity);
    }
    if (skuId) {
      res["skuId"] = boost::any(*skuId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("purchaserId") != m.end() && !m["purchaserId"].empty()) {
      purchaserId = make_shared<string>(boost::any_cast<string>(m["purchaserId"]));
    }
    if (m.find("quantity") != m.end() && !m["quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["quantity"]));
    }
    if (m.find("skuId") != m.end() && !m["skuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["skuId"]));
    }
  }


  virtual ~OrderRenderProductDTO() = default;
};
class OrderRenderResult : public Darabonba::Model {
public:
  shared_ptr<bool> canSell{};
  shared_ptr<vector<DeliveryInfo>> deliveryInfoList{};
  shared_ptr<map<string, boost::any>> extInfo{};
  shared_ptr<string> message{};
  shared_ptr<vector<OrderProductResult>> productList{};

  OrderRenderResult() {}

  explicit OrderRenderResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canSell) {
      res["canSell"] = boost::any(*canSell);
    }
    if (deliveryInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*deliveryInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["deliveryInfoList"] = boost::any(temp1);
    }
    if (extInfo) {
      res["extInfo"] = boost::any(*extInfo);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (productList) {
      vector<boost::any> temp1;
      for(auto item1:*productList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["productList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("canSell") != m.end() && !m["canSell"].empty()) {
      canSell = make_shared<bool>(boost::any_cast<bool>(m["canSell"]));
    }
    if (m.find("deliveryInfoList") != m.end() && !m["deliveryInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["deliveryInfoList"].type()) {
        vector<DeliveryInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["deliveryInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeliveryInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deliveryInfoList = make_shared<vector<DeliveryInfo>>(expect1);
      }
    }
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["extInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("productList") != m.end() && !m["productList"].empty()) {
      if (typeid(vector<boost::any>) == m["productList"].type()) {
        vector<OrderProductResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["productList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderProductResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productList = make_shared<vector<OrderProductResult>>(expect1);
      }
    }
  }


  virtual ~OrderRenderResult() = default;
};
class ProductExtendProperty : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ProductExtendProperty() {}

  explicit ProductExtendProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ProductExtendProperty() = default;
};
class ProductSpecValue : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> valueAlias{};
  shared_ptr<long> valueId{};

  ProductSpecValue() {}

  explicit ProductSpecValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (valueAlias) {
      res["valueAlias"] = boost::any(*valueAlias);
    }
    if (valueId) {
      res["valueId"] = boost::any(*valueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("valueAlias") != m.end() && !m["valueAlias"].empty()) {
      valueAlias = make_shared<string>(boost::any_cast<string>(m["valueAlias"]));
    }
    if (m.find("valueId") != m.end() && !m["valueId"].empty()) {
      valueId = make_shared<long>(boost::any_cast<long>(m["valueId"]));
    }
  }


  virtual ~ProductSpecValue() = default;
};
class ProductSpec : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<long> keyId{};
  shared_ptr<vector<ProductSpecValue>> values{};

  ProductSpec() {}

  explicit ProductSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (keyId) {
      res["keyId"] = boost::any(*keyId);
    }
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("keyId") != m.end() && !m["keyId"].empty()) {
      keyId = make_shared<long>(boost::any_cast<long>(m["keyId"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<ProductSpecValue> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ProductSpecValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<ProductSpecValue>>(expect1);
      }
    }
  }


  virtual ~ProductSpec() = default;
};
class ProductProperty : public Darabonba::Model {
public:
  shared_ptr<string> text{};
  shared_ptr<vector<string>> values{};

  ProductProperty() {}

  explicit ProductProperty(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ProductProperty() = default;
};
class SkuSpec : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<long> keyId{};
  shared_ptr<string> value{};
  shared_ptr<string> valueAlias{};
  shared_ptr<long> valueId{};

  SkuSpec() {}

  explicit SkuSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (keyId) {
      res["keyId"] = boost::any(*keyId);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (valueAlias) {
      res["valueAlias"] = boost::any(*valueAlias);
    }
    if (valueId) {
      res["valueId"] = boost::any(*valueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("keyId") != m.end() && !m["keyId"].empty()) {
      keyId = make_shared<long>(boost::any_cast<long>(m["keyId"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("valueAlias") != m.end() && !m["valueAlias"].empty()) {
      valueAlias = make_shared<string>(boost::any_cast<string>(m["valueAlias"]));
    }
    if (m.find("valueId") != m.end() && !m["valueId"].empty()) {
      valueId = make_shared<long>(boost::any_cast<long>(m["valueId"]));
    }
  }


  virtual ~SkuSpec() = default;
};
class Sku : public Darabonba::Model {
public:
  shared_ptr<string> barcode{};
  shared_ptr<bool> canSell{};
  shared_ptr<long> discountRetailPrice{};
  shared_ptr<string> divisionCode{};
  shared_ptr<string> fuzzyQuantity{};
  shared_ptr<long> markPrice{};
  shared_ptr<string> picUrl{};
  shared_ptr<long> platformPrice{};
  shared_ptr<long> price{};
  shared_ptr<string> productId{};
  shared_ptr<long> quantity{};
  shared_ptr<long> rankValue{};
  shared_ptr<string> shopId{};
  shared_ptr<string> skuAlias{};
  shared_ptr<string> skuId{};
  shared_ptr<vector<SkuSpec>> skuSpecs{};
  shared_ptr<string> skuSpecsCode{};
  shared_ptr<string> skuStatus{};
  shared_ptr<long> suggestedRetailPrice{};
  shared_ptr<string> title{};

  Sku() {}

  explicit Sku(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (barcode) {
      res["barcode"] = boost::any(*barcode);
    }
    if (canSell) {
      res["canSell"] = boost::any(*canSell);
    }
    if (discountRetailPrice) {
      res["discountRetailPrice"] = boost::any(*discountRetailPrice);
    }
    if (divisionCode) {
      res["divisionCode"] = boost::any(*divisionCode);
    }
    if (fuzzyQuantity) {
      res["fuzzyQuantity"] = boost::any(*fuzzyQuantity);
    }
    if (markPrice) {
      res["markPrice"] = boost::any(*markPrice);
    }
    if (picUrl) {
      res["picUrl"] = boost::any(*picUrl);
    }
    if (platformPrice) {
      res["platformPrice"] = boost::any(*platformPrice);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (quantity) {
      res["quantity"] = boost::any(*quantity);
    }
    if (rankValue) {
      res["rankValue"] = boost::any(*rankValue);
    }
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    if (skuAlias) {
      res["skuAlias"] = boost::any(*skuAlias);
    }
    if (skuId) {
      res["skuId"] = boost::any(*skuId);
    }
    if (skuSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*skuSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["skuSpecs"] = boost::any(temp1);
    }
    if (skuSpecsCode) {
      res["skuSpecsCode"] = boost::any(*skuSpecsCode);
    }
    if (skuStatus) {
      res["skuStatus"] = boost::any(*skuStatus);
    }
    if (suggestedRetailPrice) {
      res["suggestedRetailPrice"] = boost::any(*suggestedRetailPrice);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("barcode") != m.end() && !m["barcode"].empty()) {
      barcode = make_shared<string>(boost::any_cast<string>(m["barcode"]));
    }
    if (m.find("canSell") != m.end() && !m["canSell"].empty()) {
      canSell = make_shared<bool>(boost::any_cast<bool>(m["canSell"]));
    }
    if (m.find("discountRetailPrice") != m.end() && !m["discountRetailPrice"].empty()) {
      discountRetailPrice = make_shared<long>(boost::any_cast<long>(m["discountRetailPrice"]));
    }
    if (m.find("divisionCode") != m.end() && !m["divisionCode"].empty()) {
      divisionCode = make_shared<string>(boost::any_cast<string>(m["divisionCode"]));
    }
    if (m.find("fuzzyQuantity") != m.end() && !m["fuzzyQuantity"].empty()) {
      fuzzyQuantity = make_shared<string>(boost::any_cast<string>(m["fuzzyQuantity"]));
    }
    if (m.find("markPrice") != m.end() && !m["markPrice"].empty()) {
      markPrice = make_shared<long>(boost::any_cast<long>(m["markPrice"]));
    }
    if (m.find("picUrl") != m.end() && !m["picUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["picUrl"]));
    }
    if (m.find("platformPrice") != m.end() && !m["platformPrice"].empty()) {
      platformPrice = make_shared<long>(boost::any_cast<long>(m["platformPrice"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["price"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("quantity") != m.end() && !m["quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["quantity"]));
    }
    if (m.find("rankValue") != m.end() && !m["rankValue"].empty()) {
      rankValue = make_shared<long>(boost::any_cast<long>(m["rankValue"]));
    }
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
    if (m.find("skuAlias") != m.end() && !m["skuAlias"].empty()) {
      skuAlias = make_shared<string>(boost::any_cast<string>(m["skuAlias"]));
    }
    if (m.find("skuId") != m.end() && !m["skuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["skuId"]));
    }
    if (m.find("skuSpecs") != m.end() && !m["skuSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["skuSpecs"].type()) {
        vector<SkuSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["skuSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SkuSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skuSpecs = make_shared<vector<SkuSpec>>(expect1);
      }
    }
    if (m.find("skuSpecsCode") != m.end() && !m["skuSpecsCode"].empty()) {
      skuSpecsCode = make_shared<string>(boost::any_cast<string>(m["skuSpecsCode"]));
    }
    if (m.find("skuStatus") != m.end() && !m["skuStatus"].empty()) {
      skuStatus = make_shared<string>(boost::any_cast<string>(m["skuStatus"]));
    }
    if (m.find("suggestedRetailPrice") != m.end() && !m["suggestedRetailPrice"].empty()) {
      suggestedRetailPrice = make_shared<long>(boost::any_cast<long>(m["suggestedRetailPrice"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~Sku() = default;
};
class Product : public Darabonba::Model {
public:
  shared_ptr<string> brandName{};
  shared_ptr<bool> canSell{};
  shared_ptr<vector<Category>> categoryChain{};
  shared_ptr<long> categoryLeafId{};
  shared_ptr<string> descPath{};
  shared_ptr<string> divisionCode{};
  shared_ptr<vector<ProductExtendProperty>> extendProperties{};
  shared_ptr<string> fuzzyQuantity{};
  shared_ptr<vector<string>> images{};
  shared_ptr<bool> inGroup{};
  shared_ptr<vector<LimitRule>> limitRules{};
  shared_ptr<string> lmItemId{};
  shared_ptr<string> picUrl{};
  shared_ptr<string> productId{};
  shared_ptr<vector<ProductSpec>> productSpecs{};
  shared_ptr<string> productStatus{};
  shared_ptr<string> productType{};
  shared_ptr<vector<ProductProperty>> properties{};
  shared_ptr<long> quantity{};
  shared_ptr<string> requestId{};
  shared_ptr<string> shopId{};
  shared_ptr<vector<Sku>> skus{};
  shared_ptr<string> soldQuantity{};
  shared_ptr<string> taxCode{};
  shared_ptr<long> taxRate{};
  shared_ptr<string> title{};

  Product() {}

  explicit Product(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brandName) {
      res["brandName"] = boost::any(*brandName);
    }
    if (canSell) {
      res["canSell"] = boost::any(*canSell);
    }
    if (categoryChain) {
      vector<boost::any> temp1;
      for(auto item1:*categoryChain){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["categoryChain"] = boost::any(temp1);
    }
    if (categoryLeafId) {
      res["categoryLeafId"] = boost::any(*categoryLeafId);
    }
    if (descPath) {
      res["descPath"] = boost::any(*descPath);
    }
    if (divisionCode) {
      res["divisionCode"] = boost::any(*divisionCode);
    }
    if (extendProperties) {
      vector<boost::any> temp1;
      for(auto item1:*extendProperties){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["extendProperties"] = boost::any(temp1);
    }
    if (fuzzyQuantity) {
      res["fuzzyQuantity"] = boost::any(*fuzzyQuantity);
    }
    if (images) {
      res["images"] = boost::any(*images);
    }
    if (inGroup) {
      res["inGroup"] = boost::any(*inGroup);
    }
    if (limitRules) {
      vector<boost::any> temp1;
      for(auto item1:*limitRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["limitRules"] = boost::any(temp1);
    }
    if (lmItemId) {
      res["lmItemId"] = boost::any(*lmItemId);
    }
    if (picUrl) {
      res["picUrl"] = boost::any(*picUrl);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productSpecs) {
      vector<boost::any> temp1;
      for(auto item1:*productSpecs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["productSpecs"] = boost::any(temp1);
    }
    if (productStatus) {
      res["productStatus"] = boost::any(*productStatus);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    if (properties) {
      vector<boost::any> temp1;
      for(auto item1:*properties){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["properties"] = boost::any(temp1);
    }
    if (quantity) {
      res["quantity"] = boost::any(*quantity);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    if (skus) {
      vector<boost::any> temp1;
      for(auto item1:*skus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["skus"] = boost::any(temp1);
    }
    if (soldQuantity) {
      res["soldQuantity"] = boost::any(*soldQuantity);
    }
    if (taxCode) {
      res["taxCode"] = boost::any(*taxCode);
    }
    if (taxRate) {
      res["taxRate"] = boost::any(*taxRate);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("brandName") != m.end() && !m["brandName"].empty()) {
      brandName = make_shared<string>(boost::any_cast<string>(m["brandName"]));
    }
    if (m.find("canSell") != m.end() && !m["canSell"].empty()) {
      canSell = make_shared<bool>(boost::any_cast<bool>(m["canSell"]));
    }
    if (m.find("categoryChain") != m.end() && !m["categoryChain"].empty()) {
      if (typeid(vector<boost::any>) == m["categoryChain"].type()) {
        vector<Category> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["categoryChain"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Category model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categoryChain = make_shared<vector<Category>>(expect1);
      }
    }
    if (m.find("categoryLeafId") != m.end() && !m["categoryLeafId"].empty()) {
      categoryLeafId = make_shared<long>(boost::any_cast<long>(m["categoryLeafId"]));
    }
    if (m.find("descPath") != m.end() && !m["descPath"].empty()) {
      descPath = make_shared<string>(boost::any_cast<string>(m["descPath"]));
    }
    if (m.find("divisionCode") != m.end() && !m["divisionCode"].empty()) {
      divisionCode = make_shared<string>(boost::any_cast<string>(m["divisionCode"]));
    }
    if (m.find("extendProperties") != m.end() && !m["extendProperties"].empty()) {
      if (typeid(vector<boost::any>) == m["extendProperties"].type()) {
        vector<ProductExtendProperty> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["extendProperties"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ProductExtendProperty model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extendProperties = make_shared<vector<ProductExtendProperty>>(expect1);
      }
    }
    if (m.find("fuzzyQuantity") != m.end() && !m["fuzzyQuantity"].empty()) {
      fuzzyQuantity = make_shared<string>(boost::any_cast<string>(m["fuzzyQuantity"]));
    }
    if (m.find("images") != m.end() && !m["images"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["images"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["images"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      images = make_shared<vector<string>>(toVec1);
    }
    if (m.find("inGroup") != m.end() && !m["inGroup"].empty()) {
      inGroup = make_shared<bool>(boost::any_cast<bool>(m["inGroup"]));
    }
    if (m.find("limitRules") != m.end() && !m["limitRules"].empty()) {
      if (typeid(vector<boost::any>) == m["limitRules"].type()) {
        vector<LimitRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["limitRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LimitRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        limitRules = make_shared<vector<LimitRule>>(expect1);
      }
    }
    if (m.find("lmItemId") != m.end() && !m["lmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["lmItemId"]));
    }
    if (m.find("picUrl") != m.end() && !m["picUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["picUrl"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("productSpecs") != m.end() && !m["productSpecs"].empty()) {
      if (typeid(vector<boost::any>) == m["productSpecs"].type()) {
        vector<ProductSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["productSpecs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ProductSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productSpecs = make_shared<vector<ProductSpec>>(expect1);
      }
    }
    if (m.find("productStatus") != m.end() && !m["productStatus"].empty()) {
      productStatus = make_shared<string>(boost::any_cast<string>(m["productStatus"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["productType"]));
    }
    if (m.find("properties") != m.end() && !m["properties"].empty()) {
      if (typeid(vector<boost::any>) == m["properties"].type()) {
        vector<ProductProperty> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["properties"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ProductProperty model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        properties = make_shared<vector<ProductProperty>>(expect1);
      }
    }
    if (m.find("quantity") != m.end() && !m["quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["quantity"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
    if (m.find("skus") != m.end() && !m["skus"].empty()) {
      if (typeid(vector<boost::any>) == m["skus"].type()) {
        vector<Sku> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["skus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Sku model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skus = make_shared<vector<Sku>>(expect1);
      }
    }
    if (m.find("soldQuantity") != m.end() && !m["soldQuantity"].empty()) {
      soldQuantity = make_shared<string>(boost::any_cast<string>(m["soldQuantity"]));
    }
    if (m.find("taxCode") != m.end() && !m["taxCode"].empty()) {
      taxCode = make_shared<string>(boost::any_cast<string>(m["taxCode"]));
    }
    if (m.find("taxRate") != m.end() && !m["taxRate"].empty()) {
      taxRate = make_shared<long>(boost::any_cast<long>(m["taxRate"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~Product() = default;
};
class ProductDTO : public Darabonba::Model {
public:
  shared_ptr<long> price{};
  shared_ptr<string> productId{};
  shared_ptr<string> purchaserId{};
  shared_ptr<long> quantity{};
  shared_ptr<string> skuId{};

  ProductDTO() {}

  explicit ProductDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (price) {
      res["price"] = boost::any(*price);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (purchaserId) {
      res["purchaserId"] = boost::any(*purchaserId);
    }
    if (quantity) {
      res["quantity"] = boost::any(*quantity);
    }
    if (skuId) {
      res["skuId"] = boost::any(*skuId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["price"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("purchaserId") != m.end() && !m["purchaserId"].empty()) {
      purchaserId = make_shared<string>(boost::any_cast<string>(m["purchaserId"]));
    }
    if (m.find("quantity") != m.end() && !m["quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["quantity"]));
    }
    if (m.find("skuId") != m.end() && !m["skuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["skuId"]));
    }
  }


  virtual ~ProductDTO() = default;
};
class ProductPageResult : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<Product>> products{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ProductPageResult() {}

  explicit ProductPageResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (products) {
      vector<boost::any> temp1;
      for(auto item1:*products){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["products"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("products") != m.end() && !m["products"].empty()) {
      if (typeid(vector<boost::any>) == m["products"].type()) {
        vector<Product> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["products"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Product model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        products = make_shared<vector<Product>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ProductPageResult() = default;
};
class ProductPrice : public Darabonba::Model {
public:
  shared_ptr<string> fundAmountMoney{};

  ProductPrice() {}

  explicit ProductPrice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fundAmountMoney) {
      res["fundAmountMoney"] = boost::any(*fundAmountMoney);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fundAmountMoney") != m.end() && !m["fundAmountMoney"].empty()) {
      fundAmountMoney = make_shared<string>(boost::any_cast<string>(m["fundAmountMoney"]));
    }
  }


  virtual ~ProductPrice() = default;
};
class ProductQuery : public Darabonba::Model {
public:
  shared_ptr<string> distributorShopId{};
  shared_ptr<string> divisionCode{};

  ProductQuery() {}

  explicit ProductQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributorShopId) {
      res["distributorShopId"] = boost::any(*distributorShopId);
    }
    if (divisionCode) {
      res["divisionCode"] = boost::any(*divisionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("distributorShopId") != m.end() && !m["distributorShopId"].empty()) {
      distributorShopId = make_shared<string>(boost::any_cast<string>(m["distributorShopId"]));
    }
    if (m.find("divisionCode") != m.end() && !m["divisionCode"].empty()) {
      divisionCode = make_shared<string>(boost::any_cast<string>(m["divisionCode"]));
    }
  }


  virtual ~ProductQuery() = default;
};
class SkuSaleInfo : public Darabonba::Model {
public:
  shared_ptr<bool> canSell{};
  shared_ptr<string> divisionCode{};
  shared_ptr<string> fuzzyQuantity{};
  shared_ptr<long> markPrice{};
  shared_ptr<long> price{};
  shared_ptr<string> productId{};
  shared_ptr<long> quantity{};
  shared_ptr<string> shopId{};
  shared_ptr<string> skuId{};
  shared_ptr<string> skuStatus{};
  shared_ptr<string> title{};

  SkuSaleInfo() {}

  explicit SkuSaleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canSell) {
      res["canSell"] = boost::any(*canSell);
    }
    if (divisionCode) {
      res["divisionCode"] = boost::any(*divisionCode);
    }
    if (fuzzyQuantity) {
      res["fuzzyQuantity"] = boost::any(*fuzzyQuantity);
    }
    if (markPrice) {
      res["markPrice"] = boost::any(*markPrice);
    }
    if (price) {
      res["price"] = boost::any(*price);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (quantity) {
      res["quantity"] = boost::any(*quantity);
    }
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    if (skuId) {
      res["skuId"] = boost::any(*skuId);
    }
    if (skuStatus) {
      res["skuStatus"] = boost::any(*skuStatus);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("canSell") != m.end() && !m["canSell"].empty()) {
      canSell = make_shared<bool>(boost::any_cast<bool>(m["canSell"]));
    }
    if (m.find("divisionCode") != m.end() && !m["divisionCode"].empty()) {
      divisionCode = make_shared<string>(boost::any_cast<string>(m["divisionCode"]));
    }
    if (m.find("fuzzyQuantity") != m.end() && !m["fuzzyQuantity"].empty()) {
      fuzzyQuantity = make_shared<string>(boost::any_cast<string>(m["fuzzyQuantity"]));
    }
    if (m.find("markPrice") != m.end() && !m["markPrice"].empty()) {
      markPrice = make_shared<long>(boost::any_cast<long>(m["markPrice"]));
    }
    if (m.find("price") != m.end() && !m["price"].empty()) {
      price = make_shared<long>(boost::any_cast<long>(m["price"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("quantity") != m.end() && !m["quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["quantity"]));
    }
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
    if (m.find("skuId") != m.end() && !m["skuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["skuId"]));
    }
    if (m.find("skuStatus") != m.end() && !m["skuStatus"].empty()) {
      skuStatus = make_shared<string>(boost::any_cast<string>(m["skuStatus"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~SkuSaleInfo() = default;
};
class ProductSaleInfo : public Darabonba::Model {
public:
  shared_ptr<bool> canSell{};
  shared_ptr<string> divisionCode{};
  shared_ptr<string> fuzzyQuantity{};
  shared_ptr<vector<LimitRule>> limitRules{};
  shared_ptr<string> lmItemId{};
  shared_ptr<string> productId{};
  shared_ptr<string> productStatus{};
  shared_ptr<long> quantity{};
  shared_ptr<string> requestId{};
  shared_ptr<string> shopId{};
  shared_ptr<vector<SkuSaleInfo>> skus{};
  shared_ptr<string> title{};

  ProductSaleInfo() {}

  explicit ProductSaleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canSell) {
      res["canSell"] = boost::any(*canSell);
    }
    if (divisionCode) {
      res["divisionCode"] = boost::any(*divisionCode);
    }
    if (fuzzyQuantity) {
      res["fuzzyQuantity"] = boost::any(*fuzzyQuantity);
    }
    if (limitRules) {
      vector<boost::any> temp1;
      for(auto item1:*limitRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["limitRules"] = boost::any(temp1);
    }
    if (lmItemId) {
      res["lmItemId"] = boost::any(*lmItemId);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productStatus) {
      res["productStatus"] = boost::any(*productStatus);
    }
    if (quantity) {
      res["quantity"] = boost::any(*quantity);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    if (skus) {
      vector<boost::any> temp1;
      for(auto item1:*skus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["skus"] = boost::any(temp1);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("canSell") != m.end() && !m["canSell"].empty()) {
      canSell = make_shared<bool>(boost::any_cast<bool>(m["canSell"]));
    }
    if (m.find("divisionCode") != m.end() && !m["divisionCode"].empty()) {
      divisionCode = make_shared<string>(boost::any_cast<string>(m["divisionCode"]));
    }
    if (m.find("fuzzyQuantity") != m.end() && !m["fuzzyQuantity"].empty()) {
      fuzzyQuantity = make_shared<string>(boost::any_cast<string>(m["fuzzyQuantity"]));
    }
    if (m.find("limitRules") != m.end() && !m["limitRules"].empty()) {
      if (typeid(vector<boost::any>) == m["limitRules"].type()) {
        vector<LimitRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["limitRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LimitRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        limitRules = make_shared<vector<LimitRule>>(expect1);
      }
    }
    if (m.find("lmItemId") != m.end() && !m["lmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["lmItemId"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("productStatus") != m.end() && !m["productStatus"].empty()) {
      productStatus = make_shared<string>(boost::any_cast<string>(m["productStatus"]));
    }
    if (m.find("quantity") != m.end() && !m["quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["quantity"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
    if (m.find("skus") != m.end() && !m["skus"].empty()) {
      if (typeid(vector<boost::any>) == m["skus"].type()) {
        vector<SkuSaleInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["skus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SkuSaleInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skus = make_shared<vector<SkuSaleInfo>>(expect1);
      }
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~ProductSaleInfo() = default;
};
class ProductSaleInfoListQuery : public Darabonba::Model {
public:
  shared_ptr<string> divisionCode{};
  shared_ptr<vector<string>> productIds{};
  shared_ptr<string> purchaserId{};

  ProductSaleInfoListQuery() {}

  explicit ProductSaleInfoListQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (divisionCode) {
      res["divisionCode"] = boost::any(*divisionCode);
    }
    if (productIds) {
      res["productIds"] = boost::any(*productIds);
    }
    if (purchaserId) {
      res["purchaserId"] = boost::any(*purchaserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("divisionCode") != m.end() && !m["divisionCode"].empty()) {
      divisionCode = make_shared<string>(boost::any_cast<string>(m["divisionCode"]));
    }
    if (m.find("productIds") != m.end() && !m["productIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["productIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["productIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      productIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("purchaserId") != m.end() && !m["purchaserId"].empty()) {
      purchaserId = make_shared<string>(boost::any_cast<string>(m["purchaserId"]));
    }
  }


  virtual ~ProductSaleInfoListQuery() = default;
};
class ProductSaleInfoListResult : public Darabonba::Model {
public:
  shared_ptr<vector<ProductSaleInfo>> productSaleInfos{};
  shared_ptr<string> requestId{};

  ProductSaleInfoListResult() {}

  explicit ProductSaleInfoListResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productSaleInfos) {
      vector<boost::any> temp1;
      for(auto item1:*productSaleInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["productSaleInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productSaleInfos") != m.end() && !m["productSaleInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["productSaleInfos"].type()) {
        vector<ProductSaleInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["productSaleInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ProductSaleInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productSaleInfos = make_shared<vector<ProductSaleInfo>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ProductSaleInfoListResult() = default;
};
class ProductSaleInfoQuery : public Darabonba::Model {
public:
  shared_ptr<string> distributorShopId{};
  shared_ptr<string> divisionCode{};

  ProductSaleInfoQuery() {}

  explicit ProductSaleInfoQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distributorShopId) {
      res["distributorShopId"] = boost::any(*distributorShopId);
    }
    if (divisionCode) {
      res["divisionCode"] = boost::any(*divisionCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("distributorShopId") != m.end() && !m["distributorShopId"].empty()) {
      distributorShopId = make_shared<string>(boost::any_cast<string>(m["distributorShopId"]));
    }
    if (m.find("divisionCode") != m.end() && !m["divisionCode"].empty()) {
      divisionCode = make_shared<string>(boost::any_cast<string>(m["divisionCode"]));
    }
  }


  virtual ~ProductSaleInfoQuery() = default;
};
class PurchaseOrderCreateCmd : public Darabonba::Model {
public:
  shared_ptr<string> buyerId{};
  shared_ptr<AddressInfo> deliveryAddress{};
  shared_ptr<map<string, boost::any>> extInfo{};
  shared_ptr<string> outerPurchaseOrderId{};
  shared_ptr<vector<ProductDTO>> productList{};

  PurchaseOrderCreateCmd() {}

  explicit PurchaseOrderCreateCmd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyerId) {
      res["buyerId"] = boost::any(*buyerId);
    }
    if (deliveryAddress) {
      res["deliveryAddress"] = deliveryAddress ? boost::any(deliveryAddress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (extInfo) {
      res["extInfo"] = boost::any(*extInfo);
    }
    if (outerPurchaseOrderId) {
      res["outerPurchaseOrderId"] = boost::any(*outerPurchaseOrderId);
    }
    if (productList) {
      vector<boost::any> temp1;
      for(auto item1:*productList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["productList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buyerId") != m.end() && !m["buyerId"].empty()) {
      buyerId = make_shared<string>(boost::any_cast<string>(m["buyerId"]));
    }
    if (m.find("deliveryAddress") != m.end() && !m["deliveryAddress"].empty()) {
      if (typeid(map<string, boost::any>) == m["deliveryAddress"].type()) {
        AddressInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["deliveryAddress"]));
        deliveryAddress = make_shared<AddressInfo>(model1);
      }
    }
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["extInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("outerPurchaseOrderId") != m.end() && !m["outerPurchaseOrderId"].empty()) {
      outerPurchaseOrderId = make_shared<string>(boost::any_cast<string>(m["outerPurchaseOrderId"]));
    }
    if (m.find("productList") != m.end() && !m["productList"].empty()) {
      if (typeid(vector<boost::any>) == m["productList"].type()) {
        vector<ProductDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["productList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ProductDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productList = make_shared<vector<ProductDTO>>(expect1);
      }
    }
  }


  virtual ~PurchaseOrderCreateCmd() = default;
};
class PurchaseOrderCreateResult : public Darabonba::Model {
public:
  shared_ptr<string> purchaseOrderId{};
  shared_ptr<string> requestId{};

  PurchaseOrderCreateResult() {}

  explicit PurchaseOrderCreateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (purchaseOrderId) {
      res["purchaseOrderId"] = boost::any(*purchaseOrderId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("purchaseOrderId") != m.end() && !m["purchaseOrderId"].empty()) {
      purchaseOrderId = make_shared<string>(boost::any_cast<string>(m["purchaseOrderId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~PurchaseOrderCreateResult() = default;
};
class PurchaseOrderRenderQuery : public Darabonba::Model {
public:
  shared_ptr<string> buyerId{};
  shared_ptr<AddressInfo> deliveryAddress{};
  shared_ptr<map<string, boost::any>> extInfo{};
  shared_ptr<vector<OrderRenderProductDTO>> productList{};

  PurchaseOrderRenderQuery() {}

  explicit PurchaseOrderRenderQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyerId) {
      res["buyerId"] = boost::any(*buyerId);
    }
    if (deliveryAddress) {
      res["deliveryAddress"] = deliveryAddress ? boost::any(deliveryAddress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (extInfo) {
      res["extInfo"] = boost::any(*extInfo);
    }
    if (productList) {
      vector<boost::any> temp1;
      for(auto item1:*productList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["productList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buyerId") != m.end() && !m["buyerId"].empty()) {
      buyerId = make_shared<string>(boost::any_cast<string>(m["buyerId"]));
    }
    if (m.find("deliveryAddress") != m.end() && !m["deliveryAddress"].empty()) {
      if (typeid(map<string, boost::any>) == m["deliveryAddress"].type()) {
        AddressInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["deliveryAddress"]));
        deliveryAddress = make_shared<AddressInfo>(model1);
      }
    }
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["extInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("productList") != m.end() && !m["productList"].empty()) {
      if (typeid(vector<boost::any>) == m["productList"].type()) {
        vector<OrderRenderProductDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["productList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderRenderProductDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productList = make_shared<vector<OrderRenderProductDTO>>(expect1);
      }
    }
  }


  virtual ~PurchaseOrderRenderQuery() = default;
};
class PurchaseOrderRenderResult : public Darabonba::Model {
public:
  shared_ptr<vector<AddressInfo>> addressList{};
  shared_ptr<bool> canSell{};
  shared_ptr<map<string, boost::any>> extInfo{};
  shared_ptr<string> message{};
  shared_ptr<vector<OrderRenderResult>> orderList{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<OrderRenderResult>> unsellableOrderList{};

  PurchaseOrderRenderResult() {}

  explicit PurchaseOrderRenderResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressList) {
      vector<boost::any> temp1;
      for(auto item1:*addressList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["addressList"] = boost::any(temp1);
    }
    if (canSell) {
      res["canSell"] = boost::any(*canSell);
    }
    if (extInfo) {
      res["extInfo"] = boost::any(*extInfo);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (orderList) {
      vector<boost::any> temp1;
      for(auto item1:*orderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["orderList"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (unsellableOrderList) {
      vector<boost::any> temp1;
      for(auto item1:*unsellableOrderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["unsellableOrderList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("addressList") != m.end() && !m["addressList"].empty()) {
      if (typeid(vector<boost::any>) == m["addressList"].type()) {
        vector<AddressInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["addressList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddressInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addressList = make_shared<vector<AddressInfo>>(expect1);
      }
    }
    if (m.find("canSell") != m.end() && !m["canSell"].empty()) {
      canSell = make_shared<bool>(boost::any_cast<bool>(m["canSell"]));
    }
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["extInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("orderList") != m.end() && !m["orderList"].empty()) {
      if (typeid(vector<boost::any>) == m["orderList"].type()) {
        vector<OrderRenderResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["orderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderRenderResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderList = make_shared<vector<OrderRenderResult>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("unsellableOrderList") != m.end() && !m["unsellableOrderList"].empty()) {
      if (typeid(vector<boost::any>) == m["unsellableOrderList"].type()) {
        vector<OrderRenderResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["unsellableOrderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrderRenderResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        unsellableOrderList = make_shared<vector<OrderRenderResult>>(expect1);
      }
    }
  }


  virtual ~PurchaseOrderRenderResult() = default;
};
class PurchaseOrderStatusResult : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  PurchaseOrderStatusResult() {}

  explicit PurchaseOrderStatusResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~PurchaseOrderStatusResult() = default;
};
class RefundFeeData : public Darabonba::Model {
public:
  shared_ptr<long> maxRefundFee{};
  shared_ptr<long> minRefundFee{};

  RefundFeeData() {}

  explicit RefundFeeData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxRefundFee) {
      res["maxRefundFee"] = boost::any(*maxRefundFee);
    }
    if (minRefundFee) {
      res["minRefundFee"] = boost::any(*minRefundFee);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxRefundFee") != m.end() && !m["maxRefundFee"].empty()) {
      maxRefundFee = make_shared<long>(boost::any_cast<long>(m["maxRefundFee"]));
    }
    if (m.find("minRefundFee") != m.end() && !m["minRefundFee"].empty()) {
      minRefundFee = make_shared<long>(boost::any_cast<long>(m["minRefundFee"]));
    }
  }


  virtual ~RefundFeeData() = default;
};
class RefundOrderCmd : public Darabonba::Model {
public:
  shared_ptr<long> applyReasonTextId{};
  shared_ptr<string> applyReasonTips{};
  shared_ptr<long> applyRefundCount{};
  shared_ptr<long> applyRefundFee{};
  shared_ptr<long> bizClaimType{};
  shared_ptr<long> goodsStatus{};
  shared_ptr<string> leaveMessage{};
  shared_ptr<vector<LeavePictureList>> leavePictureLists{};
  shared_ptr<string> orderLineId{};

  RefundOrderCmd() {}

  explicit RefundOrderCmd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyReasonTextId) {
      res["applyReasonTextId"] = boost::any(*applyReasonTextId);
    }
    if (applyReasonTips) {
      res["applyReasonTips"] = boost::any(*applyReasonTips);
    }
    if (applyRefundCount) {
      res["applyRefundCount"] = boost::any(*applyRefundCount);
    }
    if (applyRefundFee) {
      res["applyRefundFee"] = boost::any(*applyRefundFee);
    }
    if (bizClaimType) {
      res["bizClaimType"] = boost::any(*bizClaimType);
    }
    if (goodsStatus) {
      res["goodsStatus"] = boost::any(*goodsStatus);
    }
    if (leaveMessage) {
      res["leaveMessage"] = boost::any(*leaveMessage);
    }
    if (leavePictureLists) {
      vector<boost::any> temp1;
      for(auto item1:*leavePictureLists){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["leavePictureLists"] = boost::any(temp1);
    }
    if (orderLineId) {
      res["orderLineId"] = boost::any(*orderLineId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyReasonTextId") != m.end() && !m["applyReasonTextId"].empty()) {
      applyReasonTextId = make_shared<long>(boost::any_cast<long>(m["applyReasonTextId"]));
    }
    if (m.find("applyReasonTips") != m.end() && !m["applyReasonTips"].empty()) {
      applyReasonTips = make_shared<string>(boost::any_cast<string>(m["applyReasonTips"]));
    }
    if (m.find("applyRefundCount") != m.end() && !m["applyRefundCount"].empty()) {
      applyRefundCount = make_shared<long>(boost::any_cast<long>(m["applyRefundCount"]));
    }
    if (m.find("applyRefundFee") != m.end() && !m["applyRefundFee"].empty()) {
      applyRefundFee = make_shared<long>(boost::any_cast<long>(m["applyRefundFee"]));
    }
    if (m.find("bizClaimType") != m.end() && !m["bizClaimType"].empty()) {
      bizClaimType = make_shared<long>(boost::any_cast<long>(m["bizClaimType"]));
    }
    if (m.find("goodsStatus") != m.end() && !m["goodsStatus"].empty()) {
      goodsStatus = make_shared<long>(boost::any_cast<long>(m["goodsStatus"]));
    }
    if (m.find("leaveMessage") != m.end() && !m["leaveMessage"].empty()) {
      leaveMessage = make_shared<string>(boost::any_cast<string>(m["leaveMessage"]));
    }
    if (m.find("leavePictureLists") != m.end() && !m["leavePictureLists"].empty()) {
      if (typeid(vector<boost::any>) == m["leavePictureLists"].type()) {
        vector<LeavePictureList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["leavePictureLists"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LeavePictureList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        leavePictureLists = make_shared<vector<LeavePictureList>>(expect1);
      }
    }
    if (m.find("orderLineId") != m.end() && !m["orderLineId"].empty()) {
      orderLineId = make_shared<string>(boost::any_cast<string>(m["orderLineId"]));
    }
  }


  virtual ~RefundOrderCmd() = default;
};
class RefundOrderResult : public Darabonba::Model {
public:
  shared_ptr<string> disputeId{};
  shared_ptr<long> disputeStatus{};
  shared_ptr<string> orderLineId{};
  shared_ptr<string> requestId{};

  RefundOrderResult() {}

  explicit RefundOrderResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disputeId) {
      res["disputeId"] = boost::any(*disputeId);
    }
    if (disputeStatus) {
      res["disputeStatus"] = boost::any(*disputeStatus);
    }
    if (orderLineId) {
      res["orderLineId"] = boost::any(*orderLineId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("disputeId") != m.end() && !m["disputeId"].empty()) {
      disputeId = make_shared<string>(boost::any_cast<string>(m["disputeId"]));
    }
    if (m.find("disputeStatus") != m.end() && !m["disputeStatus"].empty()) {
      disputeStatus = make_shared<long>(boost::any_cast<long>(m["disputeStatus"]));
    }
    if (m.find("orderLineId") != m.end() && !m["orderLineId"].empty()) {
      orderLineId = make_shared<string>(boost::any_cast<string>(m["orderLineId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~RefundOrderResult() = default;
};
class RefundReason : public Darabonba::Model {
public:
  shared_ptr<bool> proofRequired{};
  shared_ptr<string> reasonTextId{};
  shared_ptr<string> reasonTips{};
  shared_ptr<bool> refundDescRequired{};

  RefundReason() {}

  explicit RefundReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (proofRequired) {
      res["proofRequired"] = boost::any(*proofRequired);
    }
    if (reasonTextId) {
      res["reasonTextId"] = boost::any(*reasonTextId);
    }
    if (reasonTips) {
      res["reasonTips"] = boost::any(*reasonTips);
    }
    if (refundDescRequired) {
      res["refundDescRequired"] = boost::any(*refundDescRequired);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("proofRequired") != m.end() && !m["proofRequired"].empty()) {
      proofRequired = make_shared<bool>(boost::any_cast<bool>(m["proofRequired"]));
    }
    if (m.find("reasonTextId") != m.end() && !m["reasonTextId"].empty()) {
      reasonTextId = make_shared<string>(boost::any_cast<string>(m["reasonTextId"]));
    }
    if (m.find("reasonTips") != m.end() && !m["reasonTips"].empty()) {
      reasonTips = make_shared<string>(boost::any_cast<string>(m["reasonTips"]));
    }
    if (m.find("refundDescRequired") != m.end() && !m["refundDescRequired"].empty()) {
      refundDescRequired = make_shared<bool>(boost::any_cast<bool>(m["refundDescRequired"]));
    }
  }


  virtual ~RefundReason() = default;
};
class RefundRenderCmd : public Darabonba::Model {
public:
  shared_ptr<long> bizClaimType{};
  shared_ptr<long> goodsStatus{};
  shared_ptr<string> orderLineId{};

  RefundRenderCmd() {}

  explicit RefundRenderCmd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizClaimType) {
      res["bizClaimType"] = boost::any(*bizClaimType);
    }
    if (goodsStatus) {
      res["goodsStatus"] = boost::any(*goodsStatus);
    }
    if (orderLineId) {
      res["orderLineId"] = boost::any(*orderLineId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bizClaimType") != m.end() && !m["bizClaimType"].empty()) {
      bizClaimType = make_shared<long>(boost::any_cast<long>(m["bizClaimType"]));
    }
    if (m.find("goodsStatus") != m.end() && !m["goodsStatus"].empty()) {
      goodsStatus = make_shared<long>(boost::any_cast<long>(m["goodsStatus"]));
    }
    if (m.find("orderLineId") != m.end() && !m["orderLineId"].empty()) {
      orderLineId = make_shared<string>(boost::any_cast<string>(m["orderLineId"]));
    }
  }


  virtual ~RefundRenderCmd() = default;
};
class RefundRenderResult : public Darabonba::Model {
public:
  shared_ptr<long> bizClaimType{};
  shared_ptr<DistributionMaxRefundFee> maxRefundFeeData{};
  shared_ptr<string> orderLineId{};
  shared_ptr<vector<RefundReason>> refundReasonList{};
  shared_ptr<string> requestId{};

  RefundRenderResult() {}

  explicit RefundRenderResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizClaimType) {
      res["bizClaimType"] = boost::any(*bizClaimType);
    }
    if (maxRefundFeeData) {
      res["maxRefundFeeData"] = maxRefundFeeData ? boost::any(maxRefundFeeData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderLineId) {
      res["orderLineId"] = boost::any(*orderLineId);
    }
    if (refundReasonList) {
      vector<boost::any> temp1;
      for(auto item1:*refundReasonList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["refundReasonList"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bizClaimType") != m.end() && !m["bizClaimType"].empty()) {
      bizClaimType = make_shared<long>(boost::any_cast<long>(m["bizClaimType"]));
    }
    if (m.find("maxRefundFeeData") != m.end() && !m["maxRefundFeeData"].empty()) {
      if (typeid(map<string, boost::any>) == m["maxRefundFeeData"].type()) {
        DistributionMaxRefundFee model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["maxRefundFeeData"]));
        maxRefundFeeData = make_shared<DistributionMaxRefundFee>(model1);
      }
    }
    if (m.find("orderLineId") != m.end() && !m["orderLineId"].empty()) {
      orderLineId = make_shared<string>(boost::any_cast<string>(m["orderLineId"]));
    }
    if (m.find("refundReasonList") != m.end() && !m["refundReasonList"].empty()) {
      if (typeid(vector<boost::any>) == m["refundReasonList"].type()) {
        vector<RefundReason> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["refundReasonList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RefundReason model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refundReasonList = make_shared<vector<RefundReason>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~RefundRenderResult() = default;
};
class RefundResult : public Darabonba::Model {
public:
  shared_ptr<string> applyDisputeDesc{};
  shared_ptr<ApplyReason> applyReason{};
  shared_ptr<long> bizClaimType{};
  shared_ptr<string> disputeCreateTime{};
  shared_ptr<string> disputeDesc{};
  shared_ptr<string> disputeEndTime{};
  shared_ptr<string> disputeId{};
  shared_ptr<long> disputeStatus{};
  shared_ptr<string> orderId{};
  shared_ptr<string> orderLineId{};
  shared_ptr<long> orderLogisticsStatus{};
  shared_ptr<long> refundFee{};
  shared_ptr<RefundFeeData> refundFeeData{};
  shared_ptr<string> refunderAddress{};
  shared_ptr<string> refunderName{};
  shared_ptr<string> refunderTel{};
  shared_ptr<string> refunderZipCode{};
  shared_ptr<string> requestId{};
  shared_ptr<long> returnGoodLogisticsStatus{};
  shared_ptr<string> sellerAgreeMsg{};
  shared_ptr<string> sellerRefuseAgreementMessage{};
  shared_ptr<string> sellerRefuseReason{};

  RefundResult() {}

  explicit RefundResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyDisputeDesc) {
      res["applyDisputeDesc"] = boost::any(*applyDisputeDesc);
    }
    if (applyReason) {
      res["applyReason"] = applyReason ? boost::any(applyReason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bizClaimType) {
      res["bizClaimType"] = boost::any(*bizClaimType);
    }
    if (disputeCreateTime) {
      res["disputeCreateTime"] = boost::any(*disputeCreateTime);
    }
    if (disputeDesc) {
      res["disputeDesc"] = boost::any(*disputeDesc);
    }
    if (disputeEndTime) {
      res["disputeEndTime"] = boost::any(*disputeEndTime);
    }
    if (disputeId) {
      res["disputeId"] = boost::any(*disputeId);
    }
    if (disputeStatus) {
      res["disputeStatus"] = boost::any(*disputeStatus);
    }
    if (orderId) {
      res["orderId"] = boost::any(*orderId);
    }
    if (orderLineId) {
      res["orderLineId"] = boost::any(*orderLineId);
    }
    if (orderLogisticsStatus) {
      res["orderLogisticsStatus"] = boost::any(*orderLogisticsStatus);
    }
    if (refundFee) {
      res["refundFee"] = boost::any(*refundFee);
    }
    if (refundFeeData) {
      res["refundFeeData"] = refundFeeData ? boost::any(refundFeeData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (refunderAddress) {
      res["refunderAddress"] = boost::any(*refunderAddress);
    }
    if (refunderName) {
      res["refunderName"] = boost::any(*refunderName);
    }
    if (refunderTel) {
      res["refunderTel"] = boost::any(*refunderTel);
    }
    if (refunderZipCode) {
      res["refunderZipCode"] = boost::any(*refunderZipCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (returnGoodLogisticsStatus) {
      res["returnGoodLogisticsStatus"] = boost::any(*returnGoodLogisticsStatus);
    }
    if (sellerAgreeMsg) {
      res["sellerAgreeMsg"] = boost::any(*sellerAgreeMsg);
    }
    if (sellerRefuseAgreementMessage) {
      res["sellerRefuseAgreementMessage"] = boost::any(*sellerRefuseAgreementMessage);
    }
    if (sellerRefuseReason) {
      res["sellerRefuseReason"] = boost::any(*sellerRefuseReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applyDisputeDesc") != m.end() && !m["applyDisputeDesc"].empty()) {
      applyDisputeDesc = make_shared<string>(boost::any_cast<string>(m["applyDisputeDesc"]));
    }
    if (m.find("applyReason") != m.end() && !m["applyReason"].empty()) {
      if (typeid(map<string, boost::any>) == m["applyReason"].type()) {
        ApplyReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["applyReason"]));
        applyReason = make_shared<ApplyReason>(model1);
      }
    }
    if (m.find("bizClaimType") != m.end() && !m["bizClaimType"].empty()) {
      bizClaimType = make_shared<long>(boost::any_cast<long>(m["bizClaimType"]));
    }
    if (m.find("disputeCreateTime") != m.end() && !m["disputeCreateTime"].empty()) {
      disputeCreateTime = make_shared<string>(boost::any_cast<string>(m["disputeCreateTime"]));
    }
    if (m.find("disputeDesc") != m.end() && !m["disputeDesc"].empty()) {
      disputeDesc = make_shared<string>(boost::any_cast<string>(m["disputeDesc"]));
    }
    if (m.find("disputeEndTime") != m.end() && !m["disputeEndTime"].empty()) {
      disputeEndTime = make_shared<string>(boost::any_cast<string>(m["disputeEndTime"]));
    }
    if (m.find("disputeId") != m.end() && !m["disputeId"].empty()) {
      disputeId = make_shared<string>(boost::any_cast<string>(m["disputeId"]));
    }
    if (m.find("disputeStatus") != m.end() && !m["disputeStatus"].empty()) {
      disputeStatus = make_shared<long>(boost::any_cast<long>(m["disputeStatus"]));
    }
    if (m.find("orderId") != m.end() && !m["orderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["orderId"]));
    }
    if (m.find("orderLineId") != m.end() && !m["orderLineId"].empty()) {
      orderLineId = make_shared<string>(boost::any_cast<string>(m["orderLineId"]));
    }
    if (m.find("orderLogisticsStatus") != m.end() && !m["orderLogisticsStatus"].empty()) {
      orderLogisticsStatus = make_shared<long>(boost::any_cast<long>(m["orderLogisticsStatus"]));
    }
    if (m.find("refundFee") != m.end() && !m["refundFee"].empty()) {
      refundFee = make_shared<long>(boost::any_cast<long>(m["refundFee"]));
    }
    if (m.find("refundFeeData") != m.end() && !m["refundFeeData"].empty()) {
      if (typeid(map<string, boost::any>) == m["refundFeeData"].type()) {
        RefundFeeData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["refundFeeData"]));
        refundFeeData = make_shared<RefundFeeData>(model1);
      }
    }
    if (m.find("refunderAddress") != m.end() && !m["refunderAddress"].empty()) {
      refunderAddress = make_shared<string>(boost::any_cast<string>(m["refunderAddress"]));
    }
    if (m.find("refunderName") != m.end() && !m["refunderName"].empty()) {
      refunderName = make_shared<string>(boost::any_cast<string>(m["refunderName"]));
    }
    if (m.find("refunderTel") != m.end() && !m["refunderTel"].empty()) {
      refunderTel = make_shared<string>(boost::any_cast<string>(m["refunderTel"]));
    }
    if (m.find("refunderZipCode") != m.end() && !m["refunderZipCode"].empty()) {
      refunderZipCode = make_shared<string>(boost::any_cast<string>(m["refunderZipCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("returnGoodLogisticsStatus") != m.end() && !m["returnGoodLogisticsStatus"].empty()) {
      returnGoodLogisticsStatus = make_shared<long>(boost::any_cast<long>(m["returnGoodLogisticsStatus"]));
    }
    if (m.find("sellerAgreeMsg") != m.end() && !m["sellerAgreeMsg"].empty()) {
      sellerAgreeMsg = make_shared<string>(boost::any_cast<string>(m["sellerAgreeMsg"]));
    }
    if (m.find("sellerRefuseAgreementMessage") != m.end() && !m["sellerRefuseAgreementMessage"].empty()) {
      sellerRefuseAgreementMessage = make_shared<string>(boost::any_cast<string>(m["sellerRefuseAgreementMessage"]));
    }
    if (m.find("sellerRefuseReason") != m.end() && !m["sellerRefuseReason"].empty()) {
      sellerRefuseReason = make_shared<string>(boost::any_cast<string>(m["sellerRefuseReason"]));
    }
  }


  virtual ~RefundResult() = default;
};
class Shop : public Darabonba::Model {
public:
  shared_ptr<vector<CooperationShop>> cooperationShops{};
  shared_ptr<string> distributorId{};
  shared_ptr<string> endDate{};
  shared_ptr<string> purchaserId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> shopId{};
  shared_ptr<string> shopName{};
  shared_ptr<string> shopType{};
  shared_ptr<string> startDate{};
  shared_ptr<string> status{};

  Shop() {}

  explicit Shop(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cooperationShops) {
      vector<boost::any> temp1;
      for(auto item1:*cooperationShops){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["cooperationShops"] = boost::any(temp1);
    }
    if (distributorId) {
      res["distributorId"] = boost::any(*distributorId);
    }
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (purchaserId) {
      res["purchaserId"] = boost::any(*purchaserId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    if (shopName) {
      res["shopName"] = boost::any(*shopName);
    }
    if (shopType) {
      res["shopType"] = boost::any(*shopType);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cooperationShops") != m.end() && !m["cooperationShops"].empty()) {
      if (typeid(vector<boost::any>) == m["cooperationShops"].type()) {
        vector<CooperationShop> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["cooperationShops"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CooperationShop model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cooperationShops = make_shared<vector<CooperationShop>>(expect1);
      }
    }
    if (m.find("distributorId") != m.end() && !m["distributorId"].empty()) {
      distributorId = make_shared<string>(boost::any_cast<string>(m["distributorId"]));
    }
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["endDate"]));
    }
    if (m.find("purchaserId") != m.end() && !m["purchaserId"].empty()) {
      purchaserId = make_shared<string>(boost::any_cast<string>(m["purchaserId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
    if (m.find("shopName") != m.end() && !m["shopName"].empty()) {
      shopName = make_shared<string>(boost::any_cast<string>(m["shopName"]));
    }
    if (m.find("shopType") != m.end() && !m["shopType"].empty()) {
      shopType = make_shared<string>(boost::any_cast<string>(m["shopType"]));
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["startDate"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~Shop() = default;
};
class ShopCreateRequest : public Darabonba::Model {
public:
  shared_ptr<string> afterSaleDingTalkId{};
  shared_ptr<string> description{};
  shared_ptr<string> operatorDingTalkId{};
  shared_ptr<string> preSaleDingTalkId{};
  shared_ptr<string> shopName{};

  ShopCreateRequest() {}

  explicit ShopCreateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterSaleDingTalkId) {
      res["afterSaleDingTalkId"] = boost::any(*afterSaleDingTalkId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (operatorDingTalkId) {
      res["operatorDingTalkId"] = boost::any(*operatorDingTalkId);
    }
    if (preSaleDingTalkId) {
      res["preSaleDingTalkId"] = boost::any(*preSaleDingTalkId);
    }
    if (shopName) {
      res["shopName"] = boost::any(*shopName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("afterSaleDingTalkId") != m.end() && !m["afterSaleDingTalkId"].empty()) {
      afterSaleDingTalkId = make_shared<string>(boost::any_cast<string>(m["afterSaleDingTalkId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("operatorDingTalkId") != m.end() && !m["operatorDingTalkId"].empty()) {
      operatorDingTalkId = make_shared<string>(boost::any_cast<string>(m["operatorDingTalkId"]));
    }
    if (m.find("preSaleDingTalkId") != m.end() && !m["preSaleDingTalkId"].empty()) {
      preSaleDingTalkId = make_shared<string>(boost::any_cast<string>(m["preSaleDingTalkId"]));
    }
    if (m.find("shopName") != m.end() && !m["shopName"].empty()) {
      shopName = make_shared<string>(boost::any_cast<string>(m["shopName"]));
    }
  }


  virtual ~ShopCreateRequest() = default;
};
class ShopCreateResult : public Darabonba::Model {
public:
  shared_ptr<string> shopId{};
  shared_ptr<string> shopStatus{};

  ShopCreateResult() {}

  explicit ShopCreateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    if (shopStatus) {
      res["shopStatus"] = boost::any(*shopStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
    if (m.find("shopStatus") != m.end() && !m["shopStatus"].empty()) {
      shopStatus = make_shared<string>(boost::any_cast<string>(m["shopStatus"]));
    }
  }


  virtual ~ShopCreateResult() = default;
};
class ShopPageDataResult : public Darabonba::Model {
public:
  shared_ptr<vector<CooperationShop>> cooperationShops{};
  shared_ptr<string> endDate{};
  shared_ptr<string> purchaserId{};
  shared_ptr<string> shopId{};
  shared_ptr<string> shopName{};
  shared_ptr<string> shopType{};
  shared_ptr<string> startDate{};
  shared_ptr<string> status{};

  ShopPageDataResult() {}

  explicit ShopPageDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cooperationShops) {
      vector<boost::any> temp1;
      for(auto item1:*cooperationShops){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["cooperationShops"] = boost::any(temp1);
    }
    if (endDate) {
      res["endDate"] = boost::any(*endDate);
    }
    if (purchaserId) {
      res["purchaserId"] = boost::any(*purchaserId);
    }
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    if (shopName) {
      res["shopName"] = boost::any(*shopName);
    }
    if (shopType) {
      res["shopType"] = boost::any(*shopType);
    }
    if (startDate) {
      res["startDate"] = boost::any(*startDate);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cooperationShops") != m.end() && !m["cooperationShops"].empty()) {
      if (typeid(vector<boost::any>) == m["cooperationShops"].type()) {
        vector<CooperationShop> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["cooperationShops"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CooperationShop model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cooperationShops = make_shared<vector<CooperationShop>>(expect1);
      }
    }
    if (m.find("endDate") != m.end() && !m["endDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["endDate"]));
    }
    if (m.find("purchaserId") != m.end() && !m["purchaserId"].empty()) {
      purchaserId = make_shared<string>(boost::any_cast<string>(m["purchaserId"]));
    }
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
    if (m.find("shopName") != m.end() && !m["shopName"].empty()) {
      shopName = make_shared<string>(boost::any_cast<string>(m["shopName"]));
    }
    if (m.find("shopType") != m.end() && !m["shopType"].empty()) {
      shopType = make_shared<string>(boost::any_cast<string>(m["shopType"]));
    }
    if (m.find("startDate") != m.end() && !m["startDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["startDate"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ShopPageDataResult() = default;
};
class ShopPageResult : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ShopPageDataResult>> shopList{};
  shared_ptr<long> total{};

  ShopPageResult() {}

  explicit ShopPageResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (shopList) {
      vector<boost::any> temp1;
      for(auto item1:*shopList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["shopList"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("shopList") != m.end() && !m["shopList"].empty()) {
      if (typeid(vector<boost::any>) == m["shopList"].type()) {
        vector<ShopPageDataResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["shopList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ShopPageDataResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        shopList = make_shared<vector<ShopPageDataResult>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ShopPageResult() = default;
};
class ShopStatusChangeRequest : public Darabonba::Model {
public:
  shared_ptr<string> shopId{};
  shared_ptr<string> shopStatus{};

  ShopStatusChangeRequest() {}

  explicit ShopStatusChangeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shopId) {
      res["shopId"] = boost::any(*shopId);
    }
    if (shopStatus) {
      res["shopStatus"] = boost::any(*shopStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("shopId") != m.end() && !m["shopId"].empty()) {
      shopId = make_shared<string>(boost::any_cast<string>(m["shopId"]));
    }
    if (m.find("shopStatus") != m.end() && !m["shopStatus"].empty()) {
      shopStatus = make_shared<string>(boost::any_cast<string>(m["shopStatus"]));
    }
  }


  virtual ~ShopStatusChangeRequest() = default;
};
class ShopStatusChangeResult : public Darabonba::Model {
public:
  shared_ptr<bool> operate{};

  ShopStatusChangeResult() {}

  explicit ShopStatusChangeResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operate) {
      res["operate"] = boost::any(*operate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("operate") != m.end() && !m["operate"].empty()) {
      operate = make_shared<bool>(boost::any_cast<bool>(m["operate"]));
    }
  }


  virtual ~ShopStatusChangeResult() = default;
};
class SkuQueryParam : public Darabonba::Model {
public:
  shared_ptr<string> productId{};
  shared_ptr<string> skuId{};

  SkuQueryParam() {}

  explicit SkuQueryParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (skuId) {
      res["skuId"] = boost::any(*skuId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("skuId") != m.end() && !m["skuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["skuId"]));
    }
  }


  virtual ~SkuQueryParam() = default;
};
class SkuSaleInfoListQuery : public Darabonba::Model {
public:
  shared_ptr<string> divisionCode{};
  shared_ptr<string> purchaserId{};
  shared_ptr<vector<SkuQueryParam>> skuQueryParams{};

  SkuSaleInfoListQuery() {}

  explicit SkuSaleInfoListQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (divisionCode) {
      res["divisionCode"] = boost::any(*divisionCode);
    }
    if (purchaserId) {
      res["purchaserId"] = boost::any(*purchaserId);
    }
    if (skuQueryParams) {
      vector<boost::any> temp1;
      for(auto item1:*skuQueryParams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["skuQueryParams"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("divisionCode") != m.end() && !m["divisionCode"].empty()) {
      divisionCode = make_shared<string>(boost::any_cast<string>(m["divisionCode"]));
    }
    if (m.find("purchaserId") != m.end() && !m["purchaserId"].empty()) {
      purchaserId = make_shared<string>(boost::any_cast<string>(m["purchaserId"]));
    }
    if (m.find("skuQueryParams") != m.end() && !m["skuQueryParams"].empty()) {
      if (typeid(vector<boost::any>) == m["skuQueryParams"].type()) {
        vector<SkuQueryParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["skuQueryParams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SkuQueryParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skuQueryParams = make_shared<vector<SkuQueryParam>>(expect1);
      }
    }
  }


  virtual ~SkuSaleInfoListQuery() = default;
};
class SkuSaleInfoListResult : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<SkuSaleInfo>> skuSaleInfos{};

  SkuSaleInfoListResult() {}

  explicit SkuSaleInfoListResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (skuSaleInfos) {
      vector<boost::any> temp1;
      for(auto item1:*skuSaleInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["skuSaleInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("skuSaleInfos") != m.end() && !m["skuSaleInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["skuSaleInfos"].type()) {
        vector<SkuSaleInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["skuSaleInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SkuSaleInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skuSaleInfos = make_shared<vector<SkuSaleInfo>>(expect1);
      }
    }
  }


  virtual ~SkuSaleInfoListResult() = default;
};
class StopDistributionCommand : public Darabonba::Model {
public:
  shared_ptr<string> lmShopId{};
  shared_ptr<string> productId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> requestTime{};
  shared_ptr<string> requestUser{};

  StopDistributionCommand() {}

  explicit StopDistributionCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lmShopId) {
      res["lmShopId"] = boost::any(*lmShopId);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (requestTime) {
      res["requestTime"] = boost::any(*requestTime);
    }
    if (requestUser) {
      res["requestUser"] = boost::any(*requestUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("lmShopId") != m.end() && !m["lmShopId"].empty()) {
      lmShopId = make_shared<string>(boost::any_cast<string>(m["lmShopId"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("requestTime") != m.end() && !m["requestTime"].empty()) {
      requestTime = make_shared<string>(boost::any_cast<string>(m["requestTime"]));
    }
    if (m.find("requestUser") != m.end() && !m["requestUser"].empty()) {
      requestUser = make_shared<string>(boost::any_cast<string>(m["requestUser"]));
    }
  }


  virtual ~StopDistributionCommand() = default;
};
class StopDistributionResult : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<DistributionProduct>> products{};
  shared_ptr<string> requestId{};

  StopDistributionResult() {}

  explicit StopDistributionResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (products) {
      vector<boost::any> temp1;
      for(auto item1:*products){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["products"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("products") != m.end() && !m["products"].empty()) {
      if (typeid(vector<boost::any>) == m["products"].type()) {
        vector<DistributionProduct> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["products"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DistributionProduct model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        products = make_shared<vector<DistributionProduct>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~StopDistributionResult() = default;
};
class CancelRefundOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefundOrderResult> body{};

  CancelRefundOrderResponse() {}

  explicit CancelRefundOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefundOrderResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefundOrderResult>(model1);
      }
    }
  }


  virtual ~CancelRefundOrderResponse() = default;
};
class ConfirmDisburseRequest : public Darabonba::Model {
public:
  shared_ptr<ConfirmDisburseCmd> body{};

  ConfirmDisburseRequest() {}

  explicit ConfirmDisburseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfirmDisburseCmd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfirmDisburseCmd>(model1);
      }
    }
  }


  virtual ~ConfirmDisburseRequest() = default;
};
class ConfirmDisburseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfirmDisburseResult> body{};

  ConfirmDisburseResponse() {}

  explicit ConfirmDisburseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfirmDisburseResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfirmDisburseResult>(model1);
      }
    }
  }


  virtual ~ConfirmDisburseResponse() = default;
};
class CreateGoodsShippingNoticeRequest : public Darabonba::Model {
public:
  shared_ptr<GoodsShippingNoticeCreateCmd> body{};

  CreateGoodsShippingNoticeRequest() {}

  explicit CreateGoodsShippingNoticeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GoodsShippingNoticeCreateCmd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GoodsShippingNoticeCreateCmd>(model1);
      }
    }
  }


  virtual ~CreateGoodsShippingNoticeRequest() = default;
};
class CreateGoodsShippingNoticeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GoodsShippingNoticeCreateResult> body{};

  CreateGoodsShippingNoticeResponse() {}

  explicit CreateGoodsShippingNoticeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GoodsShippingNoticeCreateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GoodsShippingNoticeCreateResult>(model1);
      }
    }
  }


  virtual ~CreateGoodsShippingNoticeResponse() = default;
};
class CreatePurchaseOrderRequest : public Darabonba::Model {
public:
  shared_ptr<PurchaseOrderCreateCmd> body{};

  CreatePurchaseOrderRequest() {}

  explicit CreatePurchaseOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PurchaseOrderCreateCmd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PurchaseOrderCreateCmd>(model1);
      }
    }
  }


  virtual ~CreatePurchaseOrderRequest() = default;
};
class CreatePurchaseOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PurchaseOrderCreateResult> body{};

  CreatePurchaseOrderResponse() {}

  explicit CreatePurchaseOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PurchaseOrderCreateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PurchaseOrderCreateResult>(model1);
      }
    }
  }


  virtual ~CreatePurchaseOrderResponse() = default;
};
class CreateRefundOrderRequest : public Darabonba::Model {
public:
  shared_ptr<RefundOrderCmd> body{};

  CreateRefundOrderRequest() {}

  explicit CreateRefundOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefundOrderCmd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefundOrderCmd>(model1);
      }
    }
  }


  virtual ~CreateRefundOrderRequest() = default;
};
class CreateRefundOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefundOrderResult> body{};

  CreateRefundOrderResponse() {}

  explicit CreateRefundOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefundOrderResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefundOrderResult>(model1);
      }
    }
  }


  virtual ~CreateRefundOrderResponse() = default;
};
class GetOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OrderResult> body{};

  GetOrderResponse() {}

  explicit GetOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OrderResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OrderResult>(model1);
      }
    }
  }


  virtual ~GetOrderResponse() = default;
};
class GetPurchaseOrderStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PurchaseOrderStatusResult> body{};

  GetPurchaseOrderStatusResponse() {}

  explicit GetPurchaseOrderStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PurchaseOrderStatusResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PurchaseOrderStatusResult>(model1);
      }
    }
  }


  virtual ~GetPurchaseOrderStatusResponse() = default;
};
class GetPurchaserShopResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Shop> body{};

  GetPurchaserShopResponse() {}

  explicit GetPurchaserShopResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Shop model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Shop>(model1);
      }
    }
  }


  virtual ~GetPurchaserShopResponse() = default;
};
class GetRefundOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefundResult> body{};

  GetRefundOrderResponse() {}

  explicit GetRefundOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefundResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefundResult>(model1);
      }
    }
  }


  virtual ~GetRefundOrderResponse() = default;
};
class GetSelectionProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> divisionCode{};
  shared_ptr<string> purchaserId{};

  GetSelectionProductRequest() {}

  explicit GetSelectionProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (divisionCode) {
      res["divisionCode"] = boost::any(*divisionCode);
    }
    if (purchaserId) {
      res["purchaserId"] = boost::any(*purchaserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("divisionCode") != m.end() && !m["divisionCode"].empty()) {
      divisionCode = make_shared<string>(boost::any_cast<string>(m["divisionCode"]));
    }
    if (m.find("purchaserId") != m.end() && !m["purchaserId"].empty()) {
      purchaserId = make_shared<string>(boost::any_cast<string>(m["purchaserId"]));
    }
  }


  virtual ~GetSelectionProductRequest() = default;
};
class GetSelectionProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Product> body{};

  GetSelectionProductResponse() {}

  explicit GetSelectionProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Product model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Product>(model1);
      }
    }
  }


  virtual ~GetSelectionProductResponse() = default;
};
class GetSelectionProductSaleInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> divisionCode{};
  shared_ptr<string> purchaserId{};

  GetSelectionProductSaleInfoRequest() {}

  explicit GetSelectionProductSaleInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (divisionCode) {
      res["divisionCode"] = boost::any(*divisionCode);
    }
    if (purchaserId) {
      res["purchaserId"] = boost::any(*purchaserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("divisionCode") != m.end() && !m["divisionCode"].empty()) {
      divisionCode = make_shared<string>(boost::any_cast<string>(m["divisionCode"]));
    }
    if (m.find("purchaserId") != m.end() && !m["purchaserId"].empty()) {
      purchaserId = make_shared<string>(boost::any_cast<string>(m["purchaserId"]));
    }
  }


  virtual ~GetSelectionProductSaleInfoRequest() = default;
};
class GetSelectionProductSaleInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ProductSaleInfo> body{};

  GetSelectionProductSaleInfoResponse() {}

  explicit GetSelectionProductSaleInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ProductSaleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ProductSaleInfo>(model1);
      }
    }
  }


  virtual ~GetSelectionProductSaleInfoResponse() = default;
};
class ListCategoriesRequest : public Darabonba::Model {
public:
  shared_ptr<CategoryListQuery> body{};

  ListCategoriesRequest() {}

  explicit ListCategoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CategoryListQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CategoryListQuery>(model1);
      }
    }
  }


  virtual ~ListCategoriesRequest() = default;
};
class ListCategoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CategoryListResult> body{};

  ListCategoriesResponse() {}

  explicit ListCategoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CategoryListResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CategoryListResult>(model1);
      }
    }
  }


  virtual ~ListCategoriesResponse() = default;
};
class ListLogisticsOrdersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LogisticsOrderListResult> body{};

  ListLogisticsOrdersResponse() {}

  explicit ListLogisticsOrdersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LogisticsOrderListResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogisticsOrderListResult>(model1);
      }
    }
  }


  virtual ~ListLogisticsOrdersResponse() = default;
};
class ListPurchaserShopsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListPurchaserShopsRequest() {}

  explicit ListPurchaserShopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListPurchaserShopsRequest() = default;
};
class ListPurchaserShopsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ShopPageResult> body{};

  ListPurchaserShopsResponse() {}

  explicit ListPurchaserShopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ShopPageResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ShopPageResult>(model1);
      }
    }
  }


  virtual ~ListPurchaserShopsResponse() = default;
};
class ListSelectionProductSaleInfosRequest : public Darabonba::Model {
public:
  shared_ptr<ProductSaleInfoListQuery> body{};

  ListSelectionProductSaleInfosRequest() {}

  explicit ListSelectionProductSaleInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ProductSaleInfoListQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ProductSaleInfoListQuery>(model1);
      }
    }
  }


  virtual ~ListSelectionProductSaleInfosRequest() = default;
};
class ListSelectionProductSaleInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ProductSaleInfoListResult> body{};

  ListSelectionProductSaleInfosResponse() {}

  explicit ListSelectionProductSaleInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ProductSaleInfoListResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ProductSaleInfoListResult>(model1);
      }
    }
  }


  virtual ~ListSelectionProductSaleInfosResponse() = default;
};
class ListSelectionProductsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> purchaserId{};

  ListSelectionProductsRequest() {}

  explicit ListSelectionProductsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (purchaserId) {
      res["purchaserId"] = boost::any(*purchaserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("purchaserId") != m.end() && !m["purchaserId"].empty()) {
      purchaserId = make_shared<string>(boost::any_cast<string>(m["purchaserId"]));
    }
  }


  virtual ~ListSelectionProductsRequest() = default;
};
class ListSelectionProductsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ProductPageResult> body{};

  ListSelectionProductsResponse() {}

  explicit ListSelectionProductsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ProductPageResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ProductPageResult>(model1);
      }
    }
  }


  virtual ~ListSelectionProductsResponse() = default;
};
class ListSelectionSkuSaleInfosRequest : public Darabonba::Model {
public:
  shared_ptr<SkuSaleInfoListQuery> body{};

  ListSelectionSkuSaleInfosRequest() {}

  explicit ListSelectionSkuSaleInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SkuSaleInfoListQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SkuSaleInfoListQuery>(model1);
      }
    }
  }


  virtual ~ListSelectionSkuSaleInfosRequest() = default;
};
class ListSelectionSkuSaleInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SkuSaleInfoListResult> body{};

  ListSelectionSkuSaleInfosResponse() {}

  explicit ListSelectionSkuSaleInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SkuSaleInfoListResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SkuSaleInfoListResult>(model1);
      }
    }
  }


  virtual ~ListSelectionSkuSaleInfosResponse() = default;
};
class QueryChildDivisionCodeRequest : public Darabonba::Model {
public:
  shared_ptr<DivisionQuery> body{};

  QueryChildDivisionCodeRequest() {}

  explicit QueryChildDivisionCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DivisionQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DivisionQuery>(model1);
      }
    }
  }


  virtual ~QueryChildDivisionCodeRequest() = default;
};
class QueryChildDivisionCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DivisionPageResult> body{};

  QueryChildDivisionCodeResponse() {}

  explicit QueryChildDivisionCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DivisionPageResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DivisionPageResult>(model1);
      }
    }
  }


  virtual ~QueryChildDivisionCodeResponse() = default;
};
class QueryOrdersRequest : public Darabonba::Model {
public:
  shared_ptr<OrderPageQuery> body{};

  QueryOrdersRequest() {}

  explicit QueryOrdersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OrderPageQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OrderPageQuery>(model1);
      }
    }
  }


  virtual ~QueryOrdersRequest() = default;
};
class QueryOrdersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OrderListResult> body{};

  QueryOrdersResponse() {}

  explicit QueryOrdersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OrderListResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OrderListResult>(model1);
      }
    }
  }


  virtual ~QueryOrdersResponse() = default;
};
class RenderPurchaseOrderRequest : public Darabonba::Model {
public:
  shared_ptr<PurchaseOrderRenderQuery> body{};

  RenderPurchaseOrderRequest() {}

  explicit RenderPurchaseOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PurchaseOrderRenderQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PurchaseOrderRenderQuery>(model1);
      }
    }
  }


  virtual ~RenderPurchaseOrderRequest() = default;
};
class RenderPurchaseOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PurchaseOrderRenderResult> body{};

  RenderPurchaseOrderResponse() {}

  explicit RenderPurchaseOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PurchaseOrderRenderResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PurchaseOrderRenderResult>(model1);
      }
    }
  }


  virtual ~RenderPurchaseOrderResponse() = default;
};
class RenderRefundOrderRequest : public Darabonba::Model {
public:
  shared_ptr<RefundRenderCmd> body{};

  RenderRefundOrderRequest() {}

  explicit RenderRefundOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefundRenderCmd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefundRenderCmd>(model1);
      }
    }
  }


  virtual ~RenderRefundOrderRequest() = default;
};
class RenderRefundOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefundRenderResult> body{};

  RenderRefundOrderResponse() {}

  explicit RenderRefundOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefundRenderResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefundRenderResult>(model1);
      }
    }
  }


  virtual ~RenderRefundOrderResponse() = default;
};
class SearchProductsRequest : public Darabonba::Model {
public:
  shared_ptr<string> brandName{};
  shared_ptr<vector<string>> categoryIds{};
  shared_ptr<string> createEndTime{};
  shared_ptr<string> createStartTime{};
  shared_ptr<long> distributionHighPrice{};
  shared_ptr<long> distributionHighPriceRatio{};
  shared_ptr<long> distributionLowPrice{};
  shared_ptr<long> distributionLowPriceRatio{};
  shared_ptr<long> highMarkPrice{};
  shared_ptr<long> highPrice{};
  shared_ptr<bool> inGroup{};
  shared_ptr<string> inGroupEndTime{};
  shared_ptr<string> inGroupStartTime{};
  shared_ptr<string> inventoryRiskLevel{};
  shared_ptr<string> lmItemId{};
  shared_ptr<long> lowMarkPrice{};
  shared_ptr<long> lowPrice{};
  shared_ptr<string> modifyEndTime{};
  shared_ptr<string> modifyStartTime{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> orderDirection{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> platform{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<string> productStatus{};
  shared_ptr<string> purchaserId{};
  shared_ptr<string> taxRate{};
  shared_ptr<string> tradeModeAndCredit{};

  SearchProductsRequest() {}

  explicit SearchProductsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brandName) {
      res["brandName"] = boost::any(*brandName);
    }
    if (categoryIds) {
      res["categoryIds"] = boost::any(*categoryIds);
    }
    if (createEndTime) {
      res["createEndTime"] = boost::any(*createEndTime);
    }
    if (createStartTime) {
      res["createStartTime"] = boost::any(*createStartTime);
    }
    if (distributionHighPrice) {
      res["distributionHighPrice"] = boost::any(*distributionHighPrice);
    }
    if (distributionHighPriceRatio) {
      res["distributionHighPriceRatio"] = boost::any(*distributionHighPriceRatio);
    }
    if (distributionLowPrice) {
      res["distributionLowPrice"] = boost::any(*distributionLowPrice);
    }
    if (distributionLowPriceRatio) {
      res["distributionLowPriceRatio"] = boost::any(*distributionLowPriceRatio);
    }
    if (highMarkPrice) {
      res["highMarkPrice"] = boost::any(*highMarkPrice);
    }
    if (highPrice) {
      res["highPrice"] = boost::any(*highPrice);
    }
    if (inGroup) {
      res["inGroup"] = boost::any(*inGroup);
    }
    if (inGroupEndTime) {
      res["inGroupEndTime"] = boost::any(*inGroupEndTime);
    }
    if (inGroupStartTime) {
      res["inGroupStartTime"] = boost::any(*inGroupStartTime);
    }
    if (inventoryRiskLevel) {
      res["inventoryRiskLevel"] = boost::any(*inventoryRiskLevel);
    }
    if (lmItemId) {
      res["lmItemId"] = boost::any(*lmItemId);
    }
    if (lowMarkPrice) {
      res["lowMarkPrice"] = boost::any(*lowMarkPrice);
    }
    if (lowPrice) {
      res["lowPrice"] = boost::any(*lowPrice);
    }
    if (modifyEndTime) {
      res["modifyEndTime"] = boost::any(*modifyEndTime);
    }
    if (modifyStartTime) {
      res["modifyStartTime"] = boost::any(*modifyStartTime);
    }
    if (orderBy) {
      res["orderBy"] = boost::any(*orderBy);
    }
    if (orderDirection) {
      res["orderDirection"] = boost::any(*orderDirection);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (productStatus) {
      res["productStatus"] = boost::any(*productStatus);
    }
    if (purchaserId) {
      res["purchaserId"] = boost::any(*purchaserId);
    }
    if (taxRate) {
      res["taxRate"] = boost::any(*taxRate);
    }
    if (tradeModeAndCredit) {
      res["tradeModeAndCredit"] = boost::any(*tradeModeAndCredit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("brandName") != m.end() && !m["brandName"].empty()) {
      brandName = make_shared<string>(boost::any_cast<string>(m["brandName"]));
    }
    if (m.find("categoryIds") != m.end() && !m["categoryIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["categoryIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["categoryIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categoryIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("createEndTime") != m.end() && !m["createEndTime"].empty()) {
      createEndTime = make_shared<string>(boost::any_cast<string>(m["createEndTime"]));
    }
    if (m.find("createStartTime") != m.end() && !m["createStartTime"].empty()) {
      createStartTime = make_shared<string>(boost::any_cast<string>(m["createStartTime"]));
    }
    if (m.find("distributionHighPrice") != m.end() && !m["distributionHighPrice"].empty()) {
      distributionHighPrice = make_shared<long>(boost::any_cast<long>(m["distributionHighPrice"]));
    }
    if (m.find("distributionHighPriceRatio") != m.end() && !m["distributionHighPriceRatio"].empty()) {
      distributionHighPriceRatio = make_shared<long>(boost::any_cast<long>(m["distributionHighPriceRatio"]));
    }
    if (m.find("distributionLowPrice") != m.end() && !m["distributionLowPrice"].empty()) {
      distributionLowPrice = make_shared<long>(boost::any_cast<long>(m["distributionLowPrice"]));
    }
    if (m.find("distributionLowPriceRatio") != m.end() && !m["distributionLowPriceRatio"].empty()) {
      distributionLowPriceRatio = make_shared<long>(boost::any_cast<long>(m["distributionLowPriceRatio"]));
    }
    if (m.find("highMarkPrice") != m.end() && !m["highMarkPrice"].empty()) {
      highMarkPrice = make_shared<long>(boost::any_cast<long>(m["highMarkPrice"]));
    }
    if (m.find("highPrice") != m.end() && !m["highPrice"].empty()) {
      highPrice = make_shared<long>(boost::any_cast<long>(m["highPrice"]));
    }
    if (m.find("inGroup") != m.end() && !m["inGroup"].empty()) {
      inGroup = make_shared<bool>(boost::any_cast<bool>(m["inGroup"]));
    }
    if (m.find("inGroupEndTime") != m.end() && !m["inGroupEndTime"].empty()) {
      inGroupEndTime = make_shared<string>(boost::any_cast<string>(m["inGroupEndTime"]));
    }
    if (m.find("inGroupStartTime") != m.end() && !m["inGroupStartTime"].empty()) {
      inGroupStartTime = make_shared<string>(boost::any_cast<string>(m["inGroupStartTime"]));
    }
    if (m.find("inventoryRiskLevel") != m.end() && !m["inventoryRiskLevel"].empty()) {
      inventoryRiskLevel = make_shared<string>(boost::any_cast<string>(m["inventoryRiskLevel"]));
    }
    if (m.find("lmItemId") != m.end() && !m["lmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["lmItemId"]));
    }
    if (m.find("lowMarkPrice") != m.end() && !m["lowMarkPrice"].empty()) {
      lowMarkPrice = make_shared<long>(boost::any_cast<long>(m["lowMarkPrice"]));
    }
    if (m.find("lowPrice") != m.end() && !m["lowPrice"].empty()) {
      lowPrice = make_shared<long>(boost::any_cast<long>(m["lowPrice"]));
    }
    if (m.find("modifyEndTime") != m.end() && !m["modifyEndTime"].empty()) {
      modifyEndTime = make_shared<string>(boost::any_cast<string>(m["modifyEndTime"]));
    }
    if (m.find("modifyStartTime") != m.end() && !m["modifyStartTime"].empty()) {
      modifyStartTime = make_shared<string>(boost::any_cast<string>(m["modifyStartTime"]));
    }
    if (m.find("orderBy") != m.end() && !m["orderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["orderBy"]));
    }
    if (m.find("orderDirection") != m.end() && !m["orderDirection"].empty()) {
      orderDirection = make_shared<string>(boost::any_cast<string>(m["orderDirection"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("productStatus") != m.end() && !m["productStatus"].empty()) {
      productStatus = make_shared<string>(boost::any_cast<string>(m["productStatus"]));
    }
    if (m.find("purchaserId") != m.end() && !m["purchaserId"].empty()) {
      purchaserId = make_shared<string>(boost::any_cast<string>(m["purchaserId"]));
    }
    if (m.find("taxRate") != m.end() && !m["taxRate"].empty()) {
      taxRate = make_shared<string>(boost::any_cast<string>(m["taxRate"]));
    }
    if (m.find("tradeModeAndCredit") != m.end() && !m["tradeModeAndCredit"].empty()) {
      tradeModeAndCredit = make_shared<string>(boost::any_cast<string>(m["tradeModeAndCredit"]));
    }
  }


  virtual ~SearchProductsRequest() = default;
};
class SearchProductsResponseBodyProductsCategoryChain : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<bool> level{};
  shared_ptr<string> name{};
  shared_ptr<long> parentId{};

  SearchProductsResponseBodyProductsCategoryChain() {}

  explicit SearchProductsResponseBodyProductsCategoryChain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["categoryId"] = boost::any(*categoryId);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categoryId") != m.end() && !m["categoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["categoryId"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<bool>(boost::any_cast<bool>(m["level"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<long>(boost::any_cast<long>(m["parentId"]));
    }
  }


  virtual ~SearchProductsResponseBodyProductsCategoryChain() = default;
};
class SearchProductsResponseBodyProducts : public Darabonba::Model {
public:
  shared_ptr<string> bandName{};
  shared_ptr<string> canNotSellReason{};
  shared_ptr<bool> canSell{};
  shared_ptr<vector<SearchProductsResponseBodyProductsCategoryChain>> categoryChain{};
  shared_ptr<vector<string>> credit{};
  shared_ptr<string> diffPrice{};
  shared_ptr<string> distributionPrice{};
  shared_ptr<string> distributionPriceRatio{};
  shared_ptr<string> externalPlatformType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<bool> inGroup{};
  shared_ptr<string> inGroupTime{};
  shared_ptr<string> inventoryRiskLevel{};
  shared_ptr<string> invoiceType{};
  shared_ptr<string> lmItemId{};
  shared_ptr<string> picUrl{};
  shared_ptr<string> platformPrice{};
  shared_ptr<string> platformReservePrice{};
  shared_ptr<string> productId{};
  shared_ptr<string> productName{};
  shared_ptr<string> shopName{};
  shared_ptr<string> soldQuantity{};
  shared_ptr<string> taxCode{};
  shared_ptr<long> taxRate{};
  shared_ptr<string> tradeMode{};

  SearchProductsResponseBodyProducts() {}

  explicit SearchProductsResponseBodyProducts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandName) {
      res["bandName"] = boost::any(*bandName);
    }
    if (canNotSellReason) {
      res["canNotSellReason"] = boost::any(*canNotSellReason);
    }
    if (canSell) {
      res["canSell"] = boost::any(*canSell);
    }
    if (categoryChain) {
      vector<boost::any> temp1;
      for(auto item1:*categoryChain){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["categoryChain"] = boost::any(temp1);
    }
    if (credit) {
      res["credit"] = boost::any(*credit);
    }
    if (diffPrice) {
      res["diffPrice"] = boost::any(*diffPrice);
    }
    if (distributionPrice) {
      res["distributionPrice"] = boost::any(*distributionPrice);
    }
    if (distributionPriceRatio) {
      res["distributionPriceRatio"] = boost::any(*distributionPriceRatio);
    }
    if (externalPlatformType) {
      res["externalPlatformType"] = boost::any(*externalPlatformType);
    }
    if (gmtCreate) {
      res["gmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["gmtModified"] = boost::any(*gmtModified);
    }
    if (inGroup) {
      res["inGroup"] = boost::any(*inGroup);
    }
    if (inGroupTime) {
      res["inGroupTime"] = boost::any(*inGroupTime);
    }
    if (inventoryRiskLevel) {
      res["inventoryRiskLevel"] = boost::any(*inventoryRiskLevel);
    }
    if (invoiceType) {
      res["invoiceType"] = boost::any(*invoiceType);
    }
    if (lmItemId) {
      res["lmItemId"] = boost::any(*lmItemId);
    }
    if (picUrl) {
      res["picUrl"] = boost::any(*picUrl);
    }
    if (platformPrice) {
      res["platformPrice"] = boost::any(*platformPrice);
    }
    if (platformReservePrice) {
      res["platformReservePrice"] = boost::any(*platformReservePrice);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (shopName) {
      res["shopName"] = boost::any(*shopName);
    }
    if (soldQuantity) {
      res["soldQuantity"] = boost::any(*soldQuantity);
    }
    if (taxCode) {
      res["taxCode"] = boost::any(*taxCode);
    }
    if (taxRate) {
      res["taxRate"] = boost::any(*taxRate);
    }
    if (tradeMode) {
      res["tradeMode"] = boost::any(*tradeMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bandName") != m.end() && !m["bandName"].empty()) {
      bandName = make_shared<string>(boost::any_cast<string>(m["bandName"]));
    }
    if (m.find("canNotSellReason") != m.end() && !m["canNotSellReason"].empty()) {
      canNotSellReason = make_shared<string>(boost::any_cast<string>(m["canNotSellReason"]));
    }
    if (m.find("canSell") != m.end() && !m["canSell"].empty()) {
      canSell = make_shared<bool>(boost::any_cast<bool>(m["canSell"]));
    }
    if (m.find("categoryChain") != m.end() && !m["categoryChain"].empty()) {
      if (typeid(vector<boost::any>) == m["categoryChain"].type()) {
        vector<SearchProductsResponseBodyProductsCategoryChain> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["categoryChain"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchProductsResponseBodyProductsCategoryChain model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categoryChain = make_shared<vector<SearchProductsResponseBodyProductsCategoryChain>>(expect1);
      }
    }
    if (m.find("credit") != m.end() && !m["credit"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["credit"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["credit"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      credit = make_shared<vector<string>>(toVec1);
    }
    if (m.find("diffPrice") != m.end() && !m["diffPrice"].empty()) {
      diffPrice = make_shared<string>(boost::any_cast<string>(m["diffPrice"]));
    }
    if (m.find("distributionPrice") != m.end() && !m["distributionPrice"].empty()) {
      distributionPrice = make_shared<string>(boost::any_cast<string>(m["distributionPrice"]));
    }
    if (m.find("distributionPriceRatio") != m.end() && !m["distributionPriceRatio"].empty()) {
      distributionPriceRatio = make_shared<string>(boost::any_cast<string>(m["distributionPriceRatio"]));
    }
    if (m.find("externalPlatformType") != m.end() && !m["externalPlatformType"].empty()) {
      externalPlatformType = make_shared<string>(boost::any_cast<string>(m["externalPlatformType"]));
    }
    if (m.find("gmtCreate") != m.end() && !m["gmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["gmtCreate"]));
    }
    if (m.find("gmtModified") != m.end() && !m["gmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["gmtModified"]));
    }
    if (m.find("inGroup") != m.end() && !m["inGroup"].empty()) {
      inGroup = make_shared<bool>(boost::any_cast<bool>(m["inGroup"]));
    }
    if (m.find("inGroupTime") != m.end() && !m["inGroupTime"].empty()) {
      inGroupTime = make_shared<string>(boost::any_cast<string>(m["inGroupTime"]));
    }
    if (m.find("inventoryRiskLevel") != m.end() && !m["inventoryRiskLevel"].empty()) {
      inventoryRiskLevel = make_shared<string>(boost::any_cast<string>(m["inventoryRiskLevel"]));
    }
    if (m.find("invoiceType") != m.end() && !m["invoiceType"].empty()) {
      invoiceType = make_shared<string>(boost::any_cast<string>(m["invoiceType"]));
    }
    if (m.find("lmItemId") != m.end() && !m["lmItemId"].empty()) {
      lmItemId = make_shared<string>(boost::any_cast<string>(m["lmItemId"]));
    }
    if (m.find("picUrl") != m.end() && !m["picUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["picUrl"]));
    }
    if (m.find("platformPrice") != m.end() && !m["platformPrice"].empty()) {
      platformPrice = make_shared<string>(boost::any_cast<string>(m["platformPrice"]));
    }
    if (m.find("platformReservePrice") != m.end() && !m["platformReservePrice"].empty()) {
      platformReservePrice = make_shared<string>(boost::any_cast<string>(m["platformReservePrice"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("shopName") != m.end() && !m["shopName"].empty()) {
      shopName = make_shared<string>(boost::any_cast<string>(m["shopName"]));
    }
    if (m.find("soldQuantity") != m.end() && !m["soldQuantity"].empty()) {
      soldQuantity = make_shared<string>(boost::any_cast<string>(m["soldQuantity"]));
    }
    if (m.find("taxCode") != m.end() && !m["taxCode"].empty()) {
      taxCode = make_shared<string>(boost::any_cast<string>(m["taxCode"]));
    }
    if (m.find("taxRate") != m.end() && !m["taxRate"].empty()) {
      taxRate = make_shared<long>(boost::any_cast<long>(m["taxRate"]));
    }
    if (m.find("tradeMode") != m.end() && !m["tradeMode"].empty()) {
      tradeMode = make_shared<string>(boost::any_cast<string>(m["tradeMode"]));
    }
  }


  virtual ~SearchProductsResponseBodyProducts() = default;
};
class SearchProductsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SearchProductsResponseBodyProducts>> products{};
  shared_ptr<long> total{};

  SearchProductsResponseBody() {}

  explicit SearchProductsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (products) {
      vector<boost::any> temp1;
      for(auto item1:*products){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["products"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("products") != m.end() && !m["products"].empty()) {
      if (typeid(vector<boost::any>) == m["products"].type()) {
        vector<SearchProductsResponseBodyProducts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["products"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchProductsResponseBodyProducts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        products = make_shared<vector<SearchProductsResponseBodyProducts>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~SearchProductsResponseBody() = default;
};
class SearchProductsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchProductsResponseBody> body{};

  SearchProductsResponse() {}

  explicit SearchProductsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchProductsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchProductsResponseBody>(model1);
      }
    }
  }


  virtual ~SearchProductsResponse() = default;
};
class SelectionGroupAddProductRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> productIds{};
  shared_ptr<string> purchaserId{};

  SelectionGroupAddProductRequest() {}

  explicit SelectionGroupAddProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productIds) {
      res["productIds"] = boost::any(*productIds);
    }
    if (purchaserId) {
      res["purchaserId"] = boost::any(*purchaserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productIds") != m.end() && !m["productIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["productIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["productIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      productIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("purchaserId") != m.end() && !m["purchaserId"].empty()) {
      purchaserId = make_shared<string>(boost::any_cast<string>(m["purchaserId"]));
    }
  }


  virtual ~SelectionGroupAddProductRequest() = default;
};
class SelectionGroupAddProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> productIds{};

  SelectionGroupAddProductResponseBody() {}

  explicit SelectionGroupAddProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productIds) {
      res["productIds"] = boost::any(*productIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productIds") != m.end() && !m["productIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["productIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["productIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      productIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SelectionGroupAddProductResponseBody() = default;
};
class SelectionGroupAddProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SelectionGroupAddProductResponseBody> body{};

  SelectionGroupAddProductResponse() {}

  explicit SelectionGroupAddProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SelectionGroupAddProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SelectionGroupAddProductResponseBody>(model1);
      }
    }
  }


  virtual ~SelectionGroupAddProductResponse() = default;
};
class SelectionGroupRemoveProductRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> productIds{};
  shared_ptr<string> purchaserId{};

  SelectionGroupRemoveProductRequest() {}

  explicit SelectionGroupRemoveProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productIds) {
      res["productIds"] = boost::any(*productIds);
    }
    if (purchaserId) {
      res["purchaserId"] = boost::any(*purchaserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productIds") != m.end() && !m["productIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["productIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["productIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      productIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("purchaserId") != m.end() && !m["purchaserId"].empty()) {
      purchaserId = make_shared<string>(boost::any_cast<string>(m["purchaserId"]));
    }
  }


  virtual ~SelectionGroupRemoveProductRequest() = default;
};
class SelectionGroupRemoveProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> productIds{};

  SelectionGroupRemoveProductResponseBody() {}

  explicit SelectionGroupRemoveProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productIds) {
      res["productIds"] = boost::any(*productIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("productIds") != m.end() && !m["productIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["productIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["productIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      productIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SelectionGroupRemoveProductResponseBody() = default;
};
class SelectionGroupRemoveProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SelectionGroupRemoveProductResponseBody> body{};

  SelectionGroupRemoveProductResponse() {}

  explicit SelectionGroupRemoveProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SelectionGroupRemoveProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SelectionGroupRemoveProductResponseBody>(model1);
      }
    }
  }


  virtual ~SelectionGroupRemoveProductResponse() = default;
};
class SplitPurchaseOrderRequest : public Darabonba::Model {
public:
  shared_ptr<PurchaseOrderRenderQuery> body{};

  SplitPurchaseOrderRequest() {}

  explicit SplitPurchaseOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PurchaseOrderRenderQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PurchaseOrderRenderQuery>(model1);
      }
    }
  }


  virtual ~SplitPurchaseOrderRequest() = default;
};
class SplitPurchaseOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PurchaseOrderRenderResult> body{};

  SplitPurchaseOrderResponse() {}

  explicit SplitPurchaseOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PurchaseOrderRenderResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PurchaseOrderRenderResult>(model1);
      }
    }
  }


  virtual ~SplitPurchaseOrderResponse() = default;
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
  CancelRefundOrderResponse cancelRefundOrderWithOptions(shared_ptr<string> disputeId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelRefundOrderResponse cancelRefundOrder(shared_ptr<string> disputeId);
  ConfirmDisburseResponse confirmDisburseWithOptions(shared_ptr<ConfirmDisburseRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfirmDisburseResponse confirmDisburse(shared_ptr<ConfirmDisburseRequest> request);
  CreateGoodsShippingNoticeResponse createGoodsShippingNoticeWithOptions(shared_ptr<CreateGoodsShippingNoticeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGoodsShippingNoticeResponse createGoodsShippingNotice(shared_ptr<CreateGoodsShippingNoticeRequest> request);
  CreatePurchaseOrderResponse createPurchaseOrderWithOptions(shared_ptr<CreatePurchaseOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePurchaseOrderResponse createPurchaseOrder(shared_ptr<CreatePurchaseOrderRequest> request);
  CreateRefundOrderResponse createRefundOrderWithOptions(shared_ptr<CreateRefundOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRefundOrderResponse createRefundOrder(shared_ptr<CreateRefundOrderRequest> request);
  GetOrderResponse getOrderWithOptions(shared_ptr<string> orderId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrderResponse getOrder(shared_ptr<string> orderId);
  GetPurchaseOrderStatusResponse getPurchaseOrderStatusWithOptions(shared_ptr<string> purchaseOrderId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPurchaseOrderStatusResponse getPurchaseOrderStatus(shared_ptr<string> purchaseOrderId);
  GetPurchaserShopResponse getPurchaserShopWithOptions(shared_ptr<string> purchaserId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPurchaserShopResponse getPurchaserShop(shared_ptr<string> purchaserId);
  GetRefundOrderResponse getRefundOrderWithOptions(shared_ptr<string> disputeId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRefundOrderResponse getRefundOrder(shared_ptr<string> disputeId);
  GetSelectionProductResponse getSelectionProductWithOptions(shared_ptr<string> productId,
                                                             shared_ptr<GetSelectionProductRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSelectionProductResponse getSelectionProduct(shared_ptr<string> productId, shared_ptr<GetSelectionProductRequest> request);
  GetSelectionProductSaleInfoResponse getSelectionProductSaleInfoWithOptions(shared_ptr<string> productId,
                                                                             shared_ptr<GetSelectionProductSaleInfoRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSelectionProductSaleInfoResponse getSelectionProductSaleInfo(shared_ptr<string> productId, shared_ptr<GetSelectionProductSaleInfoRequest> request);
  ListCategoriesResponse listCategoriesWithOptions(shared_ptr<ListCategoriesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCategoriesResponse listCategories(shared_ptr<ListCategoriesRequest> request);
  ListLogisticsOrdersResponse listLogisticsOrdersWithOptions(shared_ptr<string> orderId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLogisticsOrdersResponse listLogisticsOrders(shared_ptr<string> orderId);
  ListPurchaserShopsResponse listPurchaserShopsWithOptions(shared_ptr<ListPurchaserShopsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPurchaserShopsResponse listPurchaserShops(shared_ptr<ListPurchaserShopsRequest> request);
  ListSelectionProductSaleInfosResponse listSelectionProductSaleInfosWithOptions(shared_ptr<ListSelectionProductSaleInfosRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSelectionProductSaleInfosResponse listSelectionProductSaleInfos(shared_ptr<ListSelectionProductSaleInfosRequest> request);
  ListSelectionProductsResponse listSelectionProductsWithOptions(shared_ptr<ListSelectionProductsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSelectionProductsResponse listSelectionProducts(shared_ptr<ListSelectionProductsRequest> request);
  ListSelectionSkuSaleInfosResponse listSelectionSkuSaleInfosWithOptions(shared_ptr<ListSelectionSkuSaleInfosRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSelectionSkuSaleInfosResponse listSelectionSkuSaleInfos(shared_ptr<ListSelectionSkuSaleInfosRequest> request);
  QueryChildDivisionCodeResponse queryChildDivisionCodeWithOptions(shared_ptr<QueryChildDivisionCodeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryChildDivisionCodeResponse queryChildDivisionCode(shared_ptr<QueryChildDivisionCodeRequest> request);
  QueryOrdersResponse queryOrdersWithOptions(shared_ptr<QueryOrdersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryOrdersResponse queryOrders(shared_ptr<QueryOrdersRequest> request);
  RenderPurchaseOrderResponse renderPurchaseOrderWithOptions(shared_ptr<RenderPurchaseOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenderPurchaseOrderResponse renderPurchaseOrder(shared_ptr<RenderPurchaseOrderRequest> request);
  RenderRefundOrderResponse renderRefundOrderWithOptions(shared_ptr<RenderRefundOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenderRefundOrderResponse renderRefundOrder(shared_ptr<RenderRefundOrderRequest> request);
  SearchProductsResponse searchProductsWithOptions(shared_ptr<SearchProductsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchProductsResponse searchProducts(shared_ptr<SearchProductsRequest> request);
  SelectionGroupAddProductResponse selectionGroupAddProductWithOptions(shared_ptr<SelectionGroupAddProductRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SelectionGroupAddProductResponse selectionGroupAddProduct(shared_ptr<SelectionGroupAddProductRequest> request);
  SelectionGroupRemoveProductResponse selectionGroupRemoveProductWithOptions(shared_ptr<SelectionGroupRemoveProductRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SelectionGroupRemoveProductResponse selectionGroupRemoveProduct(shared_ptr<SelectionGroupRemoveProductRequest> request);
  SplitPurchaseOrderResponse splitPurchaseOrderWithOptions(shared_ptr<SplitPurchaseOrderRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SplitPurchaseOrderResponse splitPurchaseOrder(shared_ptr<SplitPurchaseOrderRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Linkedmall20230930

#endif
