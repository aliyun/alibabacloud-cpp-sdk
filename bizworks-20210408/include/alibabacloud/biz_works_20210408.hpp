// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BIZWORKS20210408_H_
#define ALIBABACLOUD_BIZWORKS20210408_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_BizWorks20210408 {
class QueryUsageResponseBodyDataArticleInfos : public Darabonba::Model {
public:
  shared_ptr<string> articleType{};
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  QueryUsageResponseBodyDataArticleInfos() {}

  explicit QueryUsageResponseBodyDataArticleInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (articleType) {
      res["articleType"] = boost::any(*articleType);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("articleType") != m.end() && !m["articleType"].empty()) {
      articleType = make_shared<string>(boost::any_cast<string>(m["articleType"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~QueryUsageResponseBodyDataArticleInfos() = default;
};
class QueryUsageResponseBodyDataCommoditySpecUsageInfosCommodityConfig : public Darabonba::Model {
public:
  shared_ptr<long> betaDeadlineMs{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> commodityName{};
  shared_ptr<long> expiredToReleasedHour{};
  shared_ptr<bool> inBeta{};
  shared_ptr<bool> independent{};
  shared_ptr<string> paidType{};
  shared_ptr<string> productCode{};
  shared_ptr<vector<string>> quotaItems{};
  shared_ptr<vector<string>> specCodes{};

  QueryUsageResponseBodyDataCommoditySpecUsageInfosCommodityConfig() {}

  explicit QueryUsageResponseBodyDataCommoditySpecUsageInfosCommodityConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (betaDeadlineMs) {
      res["betaDeadlineMs"] = boost::any(*betaDeadlineMs);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (commodityName) {
      res["commodityName"] = boost::any(*commodityName);
    }
    if (expiredToReleasedHour) {
      res["expiredToReleasedHour"] = boost::any(*expiredToReleasedHour);
    }
    if (inBeta) {
      res["inBeta"] = boost::any(*inBeta);
    }
    if (independent) {
      res["independent"] = boost::any(*independent);
    }
    if (paidType) {
      res["paidType"] = boost::any(*paidType);
    }
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    if (quotaItems) {
      res["quotaItems"] = boost::any(*quotaItems);
    }
    if (specCodes) {
      res["specCodes"] = boost::any(*specCodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("betaDeadlineMs") != m.end() && !m["betaDeadlineMs"].empty()) {
      betaDeadlineMs = make_shared<long>(boost::any_cast<long>(m["betaDeadlineMs"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("commodityName") != m.end() && !m["commodityName"].empty()) {
      commodityName = make_shared<string>(boost::any_cast<string>(m["commodityName"]));
    }
    if (m.find("expiredToReleasedHour") != m.end() && !m["expiredToReleasedHour"].empty()) {
      expiredToReleasedHour = make_shared<long>(boost::any_cast<long>(m["expiredToReleasedHour"]));
    }
    if (m.find("inBeta") != m.end() && !m["inBeta"].empty()) {
      inBeta = make_shared<bool>(boost::any_cast<bool>(m["inBeta"]));
    }
    if (m.find("independent") != m.end() && !m["independent"].empty()) {
      independent = make_shared<bool>(boost::any_cast<bool>(m["independent"]));
    }
    if (m.find("paidType") != m.end() && !m["paidType"].empty()) {
      paidType = make_shared<string>(boost::any_cast<string>(m["paidType"]));
    }
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["productCode"]));
    }
    if (m.find("quotaItems") != m.end() && !m["quotaItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["quotaItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["quotaItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      quotaItems = make_shared<vector<string>>(toVec1);
    }
    if (m.find("specCodes") != m.end() && !m["specCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["specCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["specCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      specCodes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryUsageResponseBodyDataCommoditySpecUsageInfosCommodityConfig() = default;
};
class QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsagesCommoditySpec : public Darabonba::Model {
public:
  shared_ptr<string> applicationNum{};
  shared_ptr<string> commercializeStatus{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> commodityName{};
  shared_ptr<long> cpuNum{};
  shared_ptr<long> expireDate{};
  shared_ptr<long> memNum{};
  shared_ptr<vector<string>> nextBuyActions{};
  shared_ptr<string> ntmCommodityInstanceId{};
  shared_ptr<long> openDate{};
  shared_ptr<vector<string>> relatedSubProducts{};
  shared_ptr<string> remainingTime{};
  shared_ptr<string> specCode{};

  QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsagesCommoditySpec() {}

  explicit QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsagesCommoditySpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationNum) {
      res["applicationNum"] = boost::any(*applicationNum);
    }
    if (commercializeStatus) {
      res["commercializeStatus"] = boost::any(*commercializeStatus);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (commodityName) {
      res["commodityName"] = boost::any(*commodityName);
    }
    if (cpuNum) {
      res["cpuNum"] = boost::any(*cpuNum);
    }
    if (expireDate) {
      res["expireDate"] = boost::any(*expireDate);
    }
    if (memNum) {
      res["memNum"] = boost::any(*memNum);
    }
    if (nextBuyActions) {
      res["nextBuyActions"] = boost::any(*nextBuyActions);
    }
    if (ntmCommodityInstanceId) {
      res["ntmCommodityInstanceId"] = boost::any(*ntmCommodityInstanceId);
    }
    if (openDate) {
      res["openDate"] = boost::any(*openDate);
    }
    if (relatedSubProducts) {
      res["relatedSubProducts"] = boost::any(*relatedSubProducts);
    }
    if (remainingTime) {
      res["remainingTime"] = boost::any(*remainingTime);
    }
    if (specCode) {
      res["specCode"] = boost::any(*specCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationNum") != m.end() && !m["applicationNum"].empty()) {
      applicationNum = make_shared<string>(boost::any_cast<string>(m["applicationNum"]));
    }
    if (m.find("commercializeStatus") != m.end() && !m["commercializeStatus"].empty()) {
      commercializeStatus = make_shared<string>(boost::any_cast<string>(m["commercializeStatus"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("commodityName") != m.end() && !m["commodityName"].empty()) {
      commodityName = make_shared<string>(boost::any_cast<string>(m["commodityName"]));
    }
    if (m.find("cpuNum") != m.end() && !m["cpuNum"].empty()) {
      cpuNum = make_shared<long>(boost::any_cast<long>(m["cpuNum"]));
    }
    if (m.find("expireDate") != m.end() && !m["expireDate"].empty()) {
      expireDate = make_shared<long>(boost::any_cast<long>(m["expireDate"]));
    }
    if (m.find("memNum") != m.end() && !m["memNum"].empty()) {
      memNum = make_shared<long>(boost::any_cast<long>(m["memNum"]));
    }
    if (m.find("nextBuyActions") != m.end() && !m["nextBuyActions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["nextBuyActions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["nextBuyActions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nextBuyActions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ntmCommodityInstanceId") != m.end() && !m["ntmCommodityInstanceId"].empty()) {
      ntmCommodityInstanceId = make_shared<string>(boost::any_cast<string>(m["ntmCommodityInstanceId"]));
    }
    if (m.find("openDate") != m.end() && !m["openDate"].empty()) {
      openDate = make_shared<long>(boost::any_cast<long>(m["openDate"]));
    }
    if (m.find("relatedSubProducts") != m.end() && !m["relatedSubProducts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["relatedSubProducts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["relatedSubProducts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      relatedSubProducts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("remainingTime") != m.end() && !m["remainingTime"].empty()) {
      remainingTime = make_shared<string>(boost::any_cast<string>(m["remainingTime"]));
    }
    if (m.find("specCode") != m.end() && !m["specCode"].empty()) {
      specCode = make_shared<string>(boost::any_cast<string>(m["specCode"]));
    }
  }


  virtual ~QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsagesCommoditySpec() = default;
};
class QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsagesCommodityUsage : public Darabonba::Model {
public:
  shared_ptr<long> applicationNum{};
  shared_ptr<long> cpuNum{};
  shared_ptr<long> memNum{};

  QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsagesCommodityUsage() {}

  explicit QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsagesCommodityUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationNum) {
      res["applicationNum"] = boost::any(*applicationNum);
    }
    if (cpuNum) {
      res["cpuNum"] = boost::any(*cpuNum);
    }
    if (memNum) {
      res["memNum"] = boost::any(*memNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationNum") != m.end() && !m["applicationNum"].empty()) {
      applicationNum = make_shared<long>(boost::any_cast<long>(m["applicationNum"]));
    }
    if (m.find("cpuNum") != m.end() && !m["cpuNum"].empty()) {
      cpuNum = make_shared<long>(boost::any_cast<long>(m["cpuNum"]));
    }
    if (m.find("memNum") != m.end() && !m["memNum"].empty()) {
      memNum = make_shared<long>(boost::any_cast<long>(m["memNum"]));
    }
  }


  virtual ~QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsagesCommodityUsage() = default;
};
class QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsages : public Darabonba::Model {
public:
  shared_ptr<QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsagesCommoditySpec> commoditySpec{};
  shared_ptr<QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsagesCommodityUsage> commodityUsage{};

  QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsages() {}

  explicit QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commoditySpec) {
      res["commoditySpec"] = commoditySpec ? boost::any(commoditySpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (commodityUsage) {
      res["commodityUsage"] = commodityUsage ? boost::any(commodityUsage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commoditySpec") != m.end() && !m["commoditySpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["commoditySpec"].type()) {
        QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsagesCommoditySpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["commoditySpec"]));
        commoditySpec = make_shared<QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsagesCommoditySpec>(model1);
      }
    }
    if (m.find("commodityUsage") != m.end() && !m["commodityUsage"].empty()) {
      if (typeid(map<string, boost::any>) == m["commodityUsage"].type()) {
        QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsagesCommodityUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["commodityUsage"]));
        commodityUsage = make_shared<QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsagesCommodityUsage>(model1);
      }
    }
  }


  virtual ~QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsages() = default;
};
class QueryUsageResponseBodyDataCommoditySpecUsageInfos : public Darabonba::Model {
public:
  shared_ptr<QueryUsageResponseBodyDataCommoditySpecUsageInfosCommodityConfig> commodityConfig{};
  shared_ptr<vector<QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsages>> purchasedCommoditySpecUsages{};

  QueryUsageResponseBodyDataCommoditySpecUsageInfos() {}

  explicit QueryUsageResponseBodyDataCommoditySpecUsageInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityConfig) {
      res["commodityConfig"] = commodityConfig ? boost::any(commodityConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (purchasedCommoditySpecUsages) {
      vector<boost::any> temp1;
      for(auto item1:*purchasedCommoditySpecUsages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["purchasedCommoditySpecUsages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commodityConfig") != m.end() && !m["commodityConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["commodityConfig"].type()) {
        QueryUsageResponseBodyDataCommoditySpecUsageInfosCommodityConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["commodityConfig"]));
        commodityConfig = make_shared<QueryUsageResponseBodyDataCommoditySpecUsageInfosCommodityConfig>(model1);
      }
    }
    if (m.find("purchasedCommoditySpecUsages") != m.end() && !m["purchasedCommoditySpecUsages"].empty()) {
      if (typeid(vector<boost::any>) == m["purchasedCommoditySpecUsages"].type()) {
        vector<QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["purchasedCommoditySpecUsages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        purchasedCommoditySpecUsages = make_shared<vector<QueryUsageResponseBodyDataCommoditySpecUsageInfosPurchasedCommoditySpecUsages>>(expect1);
      }
    }
  }


  virtual ~QueryUsageResponseBodyDataCommoditySpecUsageInfos() = default;
};
class QueryUsageResponseBodyDataSubProductInfosSubProduct : public Darabonba::Model {
public:
  shared_ptr<bool> display{};
  shared_ptr<map<string, boost::any>> extendProperties{};
  shared_ptr<string> subProductCode{};
  shared_ptr<string> subProductName{};
  shared_ptr<string> subProductState{};

  QueryUsageResponseBodyDataSubProductInfosSubProduct() {}

  explicit QueryUsageResponseBodyDataSubProductInfosSubProduct(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (display) {
      res["display"] = boost::any(*display);
    }
    if (extendProperties) {
      res["extendProperties"] = boost::any(*extendProperties);
    }
    if (subProductCode) {
      res["subProductCode"] = boost::any(*subProductCode);
    }
    if (subProductName) {
      res["subProductName"] = boost::any(*subProductName);
    }
    if (subProductState) {
      res["subProductState"] = boost::any(*subProductState);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("display") != m.end() && !m["display"].empty()) {
      display = make_shared<bool>(boost::any_cast<bool>(m["display"]));
    }
    if (m.find("extendProperties") != m.end() && !m["extendProperties"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["extendProperties"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendProperties = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("subProductCode") != m.end() && !m["subProductCode"].empty()) {
      subProductCode = make_shared<string>(boost::any_cast<string>(m["subProductCode"]));
    }
    if (m.find("subProductName") != m.end() && !m["subProductName"].empty()) {
      subProductName = make_shared<string>(boost::any_cast<string>(m["subProductName"]));
    }
    if (m.find("subProductState") != m.end() && !m["subProductState"].empty()) {
      subProductState = make_shared<string>(boost::any_cast<string>(m["subProductState"]));
    }
  }


  virtual ~QueryUsageResponseBodyDataSubProductInfosSubProduct() = default;
};
class QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuyCommodityConfig : public Darabonba::Model {
public:
  shared_ptr<long> betaDeadlineMs{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> commodityName{};
  shared_ptr<long> expiredToReleasedHour{};
  shared_ptr<bool> inBeta{};
  shared_ptr<bool> independent{};
  shared_ptr<string> paidType{};
  shared_ptr<string> productCode{};
  shared_ptr<vector<string>> quotaItems{};
  shared_ptr<vector<string>> specCodes{};

  QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuyCommodityConfig() {}

  explicit QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuyCommodityConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (betaDeadlineMs) {
      res["betaDeadlineMs"] = boost::any(*betaDeadlineMs);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (commodityName) {
      res["commodityName"] = boost::any(*commodityName);
    }
    if (expiredToReleasedHour) {
      res["expiredToReleasedHour"] = boost::any(*expiredToReleasedHour);
    }
    if (inBeta) {
      res["inBeta"] = boost::any(*inBeta);
    }
    if (independent) {
      res["independent"] = boost::any(*independent);
    }
    if (paidType) {
      res["paidType"] = boost::any(*paidType);
    }
    if (productCode) {
      res["productCode"] = boost::any(*productCode);
    }
    if (quotaItems) {
      res["quotaItems"] = boost::any(*quotaItems);
    }
    if (specCodes) {
      res["specCodes"] = boost::any(*specCodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("betaDeadlineMs") != m.end() && !m["betaDeadlineMs"].empty()) {
      betaDeadlineMs = make_shared<long>(boost::any_cast<long>(m["betaDeadlineMs"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("commodityName") != m.end() && !m["commodityName"].empty()) {
      commodityName = make_shared<string>(boost::any_cast<string>(m["commodityName"]));
    }
    if (m.find("expiredToReleasedHour") != m.end() && !m["expiredToReleasedHour"].empty()) {
      expiredToReleasedHour = make_shared<long>(boost::any_cast<long>(m["expiredToReleasedHour"]));
    }
    if (m.find("inBeta") != m.end() && !m["inBeta"].empty()) {
      inBeta = make_shared<bool>(boost::any_cast<bool>(m["inBeta"]));
    }
    if (m.find("independent") != m.end() && !m["independent"].empty()) {
      independent = make_shared<bool>(boost::any_cast<bool>(m["independent"]));
    }
    if (m.find("paidType") != m.end() && !m["paidType"].empty()) {
      paidType = make_shared<string>(boost::any_cast<string>(m["paidType"]));
    }
    if (m.find("productCode") != m.end() && !m["productCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["productCode"]));
    }
    if (m.find("quotaItems") != m.end() && !m["quotaItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["quotaItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["quotaItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      quotaItems = make_shared<vector<string>>(toVec1);
    }
    if (m.find("specCodes") != m.end() && !m["specCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["specCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["specCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      specCodes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuyCommodityConfig() = default;
};
class QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuyCommoditySpec : public Darabonba::Model {
public:
  shared_ptr<long> applicationNum{};
  shared_ptr<string> commercializeStatus{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> commodityName{};
  shared_ptr<long> cpuNum{};
  shared_ptr<long> expireDate{};
  shared_ptr<long> memNum{};
  shared_ptr<string> nextBuyActions{};
  shared_ptr<string> ntmCommodityInstanceId{};
  shared_ptr<long> openDate{};
  shared_ptr<vector<string>> relatedSubProducts{};
  shared_ptr<string> specCode{};
  shared_ptr<string> specName{};

  QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuyCommoditySpec() {}

  explicit QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuyCommoditySpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationNum) {
      res["applicationNum"] = boost::any(*applicationNum);
    }
    if (commercializeStatus) {
      res["commercializeStatus"] = boost::any(*commercializeStatus);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (commodityName) {
      res["commodityName"] = boost::any(*commodityName);
    }
    if (cpuNum) {
      res["cpuNum"] = boost::any(*cpuNum);
    }
    if (expireDate) {
      res["expireDate"] = boost::any(*expireDate);
    }
    if (memNum) {
      res["memNum"] = boost::any(*memNum);
    }
    if (nextBuyActions) {
      res["nextBuyActions"] = boost::any(*nextBuyActions);
    }
    if (ntmCommodityInstanceId) {
      res["ntmCommodityInstanceId"] = boost::any(*ntmCommodityInstanceId);
    }
    if (openDate) {
      res["openDate"] = boost::any(*openDate);
    }
    if (relatedSubProducts) {
      res["relatedSubProducts"] = boost::any(*relatedSubProducts);
    }
    if (specCode) {
      res["specCode"] = boost::any(*specCode);
    }
    if (specName) {
      res["specName"] = boost::any(*specName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationNum") != m.end() && !m["applicationNum"].empty()) {
      applicationNum = make_shared<long>(boost::any_cast<long>(m["applicationNum"]));
    }
    if (m.find("commercializeStatus") != m.end() && !m["commercializeStatus"].empty()) {
      commercializeStatus = make_shared<string>(boost::any_cast<string>(m["commercializeStatus"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("commodityName") != m.end() && !m["commodityName"].empty()) {
      commodityName = make_shared<string>(boost::any_cast<string>(m["commodityName"]));
    }
    if (m.find("cpuNum") != m.end() && !m["cpuNum"].empty()) {
      cpuNum = make_shared<long>(boost::any_cast<long>(m["cpuNum"]));
    }
    if (m.find("expireDate") != m.end() && !m["expireDate"].empty()) {
      expireDate = make_shared<long>(boost::any_cast<long>(m["expireDate"]));
    }
    if (m.find("memNum") != m.end() && !m["memNum"].empty()) {
      memNum = make_shared<long>(boost::any_cast<long>(m["memNum"]));
    }
    if (m.find("nextBuyActions") != m.end() && !m["nextBuyActions"].empty()) {
      nextBuyActions = make_shared<string>(boost::any_cast<string>(m["nextBuyActions"]));
    }
    if (m.find("ntmCommodityInstanceId") != m.end() && !m["ntmCommodityInstanceId"].empty()) {
      ntmCommodityInstanceId = make_shared<string>(boost::any_cast<string>(m["ntmCommodityInstanceId"]));
    }
    if (m.find("openDate") != m.end() && !m["openDate"].empty()) {
      openDate = make_shared<long>(boost::any_cast<long>(m["openDate"]));
    }
    if (m.find("relatedSubProducts") != m.end() && !m["relatedSubProducts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["relatedSubProducts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["relatedSubProducts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      relatedSubProducts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("specCode") != m.end() && !m["specCode"].empty()) {
      specCode = make_shared<string>(boost::any_cast<string>(m["specCode"]));
    }
    if (m.find("specName") != m.end() && !m["specName"].empty()) {
      specName = make_shared<string>(boost::any_cast<string>(m["specName"]));
    }
  }


  virtual ~QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuyCommoditySpec() = default;
};
class QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuy : public Darabonba::Model {
public:
  shared_ptr<QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuyCommodityConfig> commodityConfig{};
  shared_ptr<QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuyCommoditySpec> commoditySpec{};
  shared_ptr<long> releaseTime{};

  QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuy() {}

  explicit QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityConfig) {
      res["commodityConfig"] = commodityConfig ? boost::any(commodityConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (commoditySpec) {
      res["commoditySpec"] = commoditySpec ? boost::any(commoditySpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (releaseTime) {
      res["releaseTime"] = boost::any(*releaseTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commodityConfig") != m.end() && !m["commodityConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["commodityConfig"].type()) {
        QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuyCommodityConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["commodityConfig"]));
        commodityConfig = make_shared<QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuyCommodityConfig>(model1);
      }
    }
    if (m.find("commoditySpec") != m.end() && !m["commoditySpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["commoditySpec"].type()) {
        QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuyCommoditySpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["commoditySpec"]));
        commoditySpec = make_shared<QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuyCommoditySpec>(model1);
      }
    }
    if (m.find("releaseTime") != m.end() && !m["releaseTime"].empty()) {
      releaseTime = make_shared<long>(boost::any_cast<long>(m["releaseTime"]));
    }
  }


  virtual ~QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuy() = default;
};
class QueryUsageResponseBodyDataSubProductInfos : public Darabonba::Model {
public:
  shared_ptr<QueryUsageResponseBodyDataSubProductInfosSubProduct> subProduct{};
  shared_ptr<vector<QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuy>> subProductCommoditySpecsForGuideToBuy{};

  QueryUsageResponseBodyDataSubProductInfos() {}

  explicit QueryUsageResponseBodyDataSubProductInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subProduct) {
      res["subProduct"] = subProduct ? boost::any(subProduct->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subProductCommoditySpecsForGuideToBuy) {
      vector<boost::any> temp1;
      for(auto item1:*subProductCommoditySpecsForGuideToBuy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subProductCommoditySpecsForGuideToBuy"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("subProduct") != m.end() && !m["subProduct"].empty()) {
      if (typeid(map<string, boost::any>) == m["subProduct"].type()) {
        QueryUsageResponseBodyDataSubProductInfosSubProduct model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["subProduct"]));
        subProduct = make_shared<QueryUsageResponseBodyDataSubProductInfosSubProduct>(model1);
      }
    }
    if (m.find("subProductCommoditySpecsForGuideToBuy") != m.end() && !m["subProductCommoditySpecsForGuideToBuy"].empty()) {
      if (typeid(vector<boost::any>) == m["subProductCommoditySpecsForGuideToBuy"].type()) {
        vector<QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subProductCommoditySpecsForGuideToBuy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subProductCommoditySpecsForGuideToBuy = make_shared<vector<QueryUsageResponseBodyDataSubProductInfosSubProductCommoditySpecsForGuideToBuy>>(expect1);
      }
    }
  }


  virtual ~QueryUsageResponseBodyDataSubProductInfos() = default;
};
class QueryUsageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryUsageResponseBodyDataArticleInfos>> articleInfos{};
  shared_ptr<vector<QueryUsageResponseBodyDataCommoditySpecUsageInfos>> commoditySpecUsageInfos{};
  shared_ptr<vector<QueryUsageResponseBodyDataSubProductInfos>> subProductInfos{};

  QueryUsageResponseBodyData() {}

  explicit QueryUsageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (articleInfos) {
      vector<boost::any> temp1;
      for(auto item1:*articleInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["articleInfos"] = boost::any(temp1);
    }
    if (commoditySpecUsageInfos) {
      vector<boost::any> temp1;
      for(auto item1:*commoditySpecUsageInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["commoditySpecUsageInfos"] = boost::any(temp1);
    }
    if (subProductInfos) {
      vector<boost::any> temp1;
      for(auto item1:*subProductInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subProductInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("articleInfos") != m.end() && !m["articleInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["articleInfos"].type()) {
        vector<QueryUsageResponseBodyDataArticleInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["articleInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryUsageResponseBodyDataArticleInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        articleInfos = make_shared<vector<QueryUsageResponseBodyDataArticleInfos>>(expect1);
      }
    }
    if (m.find("commoditySpecUsageInfos") != m.end() && !m["commoditySpecUsageInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["commoditySpecUsageInfos"].type()) {
        vector<QueryUsageResponseBodyDataCommoditySpecUsageInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["commoditySpecUsageInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryUsageResponseBodyDataCommoditySpecUsageInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commoditySpecUsageInfos = make_shared<vector<QueryUsageResponseBodyDataCommoditySpecUsageInfos>>(expect1);
      }
    }
    if (m.find("subProductInfos") != m.end() && !m["subProductInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["subProductInfos"].type()) {
        vector<QueryUsageResponseBodyDataSubProductInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subProductInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryUsageResponseBodyDataSubProductInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subProductInfos = make_shared<vector<QueryUsageResponseBodyDataSubProductInfos>>(expect1);
      }
    }
  }


  virtual ~QueryUsageResponseBodyData() = default;
};
class QueryUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryUsageResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryUsageResponseBody() {}

  explicit QueryUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryUsageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryUsageResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryUsageResponseBody() = default;
};
class QueryUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUsageResponseBody> body{};

  QueryUsageResponse() {}

  explicit QueryUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUsageResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUsageResponse() = default;
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
  QueryUsageResponse queryUsageWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUsageResponse queryUsage();

  virtual ~Client() = default;
};
} // namespace Alibabacloud_BizWorks20210408

#endif
