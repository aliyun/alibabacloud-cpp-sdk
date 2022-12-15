// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_VIAPI-OXS-CROSS20200701_H_
#define ALIBABACLOUD_VIAPI-OXS-CROSS20200701_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Viapi-oxs-cross20200701 {
class LingJieApiInvokeCountMetrics : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> day{};
  shared_ptr<string> hour{};

  LingJieApiInvokeCountMetrics() {}

  explicit LingJieApiInvokeCountMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<string>(boost::any_cast<string>(m["Day"]));
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<string>(boost::any_cast<string>(m["Hour"]));
    }
  }


  virtual ~LingJieApiInvokeCountMetrics() = default;
};
class LingJieApiInvokeCount : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<vector<LingJieApiInvokeCountMetrics>> metrics{};
  shared_ptr<string> projectId{};
  shared_ptr<string> region{};
  shared_ptr<string> statisticsUnit{};
  shared_ptr<string> timeUnit{};

  LingJieApiInvokeCount() {}

  explicit LingJieApiInvokeCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (statisticsUnit) {
      res["StatisticsUnit"] = boost::any(*statisticsUnit);
    }
    if (timeUnit) {
      res["TimeUnit"] = boost::any(*timeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<LingJieApiInvokeCountMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LingJieApiInvokeCountMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<LingJieApiInvokeCountMetrics>>(expect1);
      }
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("StatisticsUnit") != m.end() && !m["StatisticsUnit"].empty()) {
      statisticsUnit = make_shared<string>(boost::any_cast<string>(m["StatisticsUnit"]));
    }
    if (m.find("TimeUnit") != m.end() && !m["TimeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["TimeUnit"]));
    }
  }


  virtual ~LingJieApiInvokeCount() = default;
};
class LingJieApiInvokeQpsMetrics : public Darabonba::Model {
public:
  shared_ptr<string> day{};
  shared_ptr<string> hour{};
  shared_ptr<long> maxQps{};

  LingJieApiInvokeQpsMetrics() {}

  explicit LingJieApiInvokeQpsMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (hour) {
      res["Hour"] = boost::any(*hour);
    }
    if (maxQps) {
      res["MaxQps"] = boost::any(*maxQps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<string>(boost::any_cast<string>(m["Day"]));
    }
    if (m.find("Hour") != m.end() && !m["Hour"].empty()) {
      hour = make_shared<string>(boost::any_cast<string>(m["Hour"]));
    }
    if (m.find("MaxQps") != m.end() && !m["MaxQps"].empty()) {
      maxQps = make_shared<long>(boost::any_cast<long>(m["MaxQps"]));
    }
  }


  virtual ~LingJieApiInvokeQpsMetrics() = default;
};
class LingJieApiInvokeQps : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<vector<LingJieApiInvokeQpsMetrics>> metrics{};
  shared_ptr<string> projectId{};
  shared_ptr<string> region{};
  shared_ptr<string> statisticsUnit{};
  shared_ptr<string> timeUnit{};

  LingJieApiInvokeQps() {}

  explicit LingJieApiInvokeQps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (statisticsUnit) {
      res["StatisticsUnit"] = boost::any(*statisticsUnit);
    }
    if (timeUnit) {
      res["TimeUnit"] = boost::any(*timeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<LingJieApiInvokeQpsMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LingJieApiInvokeQpsMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<LingJieApiInvokeQpsMetrics>>(expect1);
      }
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("StatisticsUnit") != m.end() && !m["StatisticsUnit"].empty()) {
      statisticsUnit = make_shared<string>(boost::any_cast<string>(m["StatisticsUnit"]));
    }
    if (m.find("TimeUnit") != m.end() && !m["TimeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["TimeUnit"]));
    }
  }


  virtual ~LingJieApiInvokeQps() = default;
};
class LingJieOpenStatusCommoditiesOpenStatus : public Darabonba::Model {
public:
  shared_ptr<string> cnName{};
  shared_ptr<string> commodity{};
  shared_ptr<string> describe{};
  shared_ptr<string> detailPage{};
  shared_ptr<bool> open{};
  shared_ptr<string> openTime{};

  LingJieOpenStatusCommoditiesOpenStatus() {}

  explicit LingJieOpenStatusCommoditiesOpenStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cnName) {
      res["CnName"] = boost::any(*cnName);
    }
    if (commodity) {
      res["Commodity"] = boost::any(*commodity);
    }
    if (describe) {
      res["Describe"] = boost::any(*describe);
    }
    if (detailPage) {
      res["DetailPage"] = boost::any(*detailPage);
    }
    if (open) {
      res["Open"] = boost::any(*open);
    }
    if (openTime) {
      res["OpenTime"] = boost::any(*openTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CnName") != m.end() && !m["CnName"].empty()) {
      cnName = make_shared<string>(boost::any_cast<string>(m["CnName"]));
    }
    if (m.find("Commodity") != m.end() && !m["Commodity"].empty()) {
      commodity = make_shared<string>(boost::any_cast<string>(m["Commodity"]));
    }
    if (m.find("Describe") != m.end() && !m["Describe"].empty()) {
      describe = make_shared<string>(boost::any_cast<string>(m["Describe"]));
    }
    if (m.find("DetailPage") != m.end() && !m["DetailPage"].empty()) {
      detailPage = make_shared<string>(boost::any_cast<string>(m["DetailPage"]));
    }
    if (m.find("Open") != m.end() && !m["Open"].empty()) {
      open = make_shared<bool>(boost::any_cast<bool>(m["Open"]));
    }
    if (m.find("OpenTime") != m.end() && !m["OpenTime"].empty()) {
      openTime = make_shared<string>(boost::any_cast<string>(m["OpenTime"]));
    }
  }


  virtual ~LingJieOpenStatusCommoditiesOpenStatus() = default;
};
class LingJieOpenStatus : public Darabonba::Model {
public:
  shared_ptr<vector<LingJieOpenStatusCommoditiesOpenStatus>> commoditiesOpenStatus{};
  shared_ptr<string> openTime{};
  shared_ptr<string> productConsoleUrl{};
  shared_ptr<bool> productEnabled{};
  shared_ptr<string> productMonitorUrl{};
  shared_ptr<string> productWikiUrl{};

  LingJieOpenStatus() {}

  explicit LingJieOpenStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commoditiesOpenStatus) {
      vector<boost::any> temp1;
      for(auto item1:*commoditiesOpenStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CommoditiesOpenStatus"] = boost::any(temp1);
    }
    if (openTime) {
      res["OpenTime"] = boost::any(*openTime);
    }
    if (productConsoleUrl) {
      res["ProductConsoleUrl"] = boost::any(*productConsoleUrl);
    }
    if (productEnabled) {
      res["ProductEnabled"] = boost::any(*productEnabled);
    }
    if (productMonitorUrl) {
      res["ProductMonitorUrl"] = boost::any(*productMonitorUrl);
    }
    if (productWikiUrl) {
      res["ProductWikiUrl"] = boost::any(*productWikiUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommoditiesOpenStatus") != m.end() && !m["CommoditiesOpenStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["CommoditiesOpenStatus"].type()) {
        vector<LingJieOpenStatusCommoditiesOpenStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CommoditiesOpenStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LingJieOpenStatusCommoditiesOpenStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commoditiesOpenStatus = make_shared<vector<LingJieOpenStatusCommoditiesOpenStatus>>(expect1);
      }
    }
    if (m.find("OpenTime") != m.end() && !m["OpenTime"].empty()) {
      openTime = make_shared<string>(boost::any_cast<string>(m["OpenTime"]));
    }
    if (m.find("ProductConsoleUrl") != m.end() && !m["ProductConsoleUrl"].empty()) {
      productConsoleUrl = make_shared<string>(boost::any_cast<string>(m["ProductConsoleUrl"]));
    }
    if (m.find("ProductEnabled") != m.end() && !m["ProductEnabled"].empty()) {
      productEnabled = make_shared<bool>(boost::any_cast<bool>(m["ProductEnabled"]));
    }
    if (m.find("ProductMonitorUrl") != m.end() && !m["ProductMonitorUrl"].empty()) {
      productMonitorUrl = make_shared<string>(boost::any_cast<string>(m["ProductMonitorUrl"]));
    }
    if (m.find("ProductWikiUrl") != m.end() && !m["ProductWikiUrl"].empty()) {
      productWikiUrl = make_shared<string>(boost::any_cast<string>(m["ProductWikiUrl"]));
    }
  }


  virtual ~LingJieOpenStatus() = default;
};
class LingJieOpenStatusDetailApiListMoreOperations : public Darabonba::Model {
public:
  shared_ptr<string> clickUrl{};
  shared_ptr<string> operation{};

  LingJieOpenStatusDetailApiListMoreOperations() {}

  explicit LingJieOpenStatusDetailApiListMoreOperations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clickUrl) {
      res["ClickUrl"] = boost::any(*clickUrl);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClickUrl") != m.end() && !m["ClickUrl"].empty()) {
      clickUrl = make_shared<string>(boost::any_cast<string>(m["ClickUrl"]));
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
  }


  virtual ~LingJieOpenStatusDetailApiListMoreOperations() = default;
};
class LingJieOpenStatusDetailApiList : public Darabonba::Model {
public:
  shared_ptr<string> cnName{};
  shared_ptr<string> concurrentLimit{};
  shared_ptr<string> enName{};
  shared_ptr<vector<LingJieOpenStatusDetailApiListMoreOperations>> moreOperations{};
  shared_ptr<string> statisticsUnit{};
  shared_ptr<string> status{};
  shared_ptr<string> usage{};

  LingJieOpenStatusDetailApiList() {}

  explicit LingJieOpenStatusDetailApiList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cnName) {
      res["CnName"] = boost::any(*cnName);
    }
    if (concurrentLimit) {
      res["ConcurrentLimit"] = boost::any(*concurrentLimit);
    }
    if (enName) {
      res["EnName"] = boost::any(*enName);
    }
    if (moreOperations) {
      vector<boost::any> temp1;
      for(auto item1:*moreOperations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MoreOperations"] = boost::any(temp1);
    }
    if (statisticsUnit) {
      res["StatisticsUnit"] = boost::any(*statisticsUnit);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (usage) {
      res["Usage"] = boost::any(*usage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CnName") != m.end() && !m["CnName"].empty()) {
      cnName = make_shared<string>(boost::any_cast<string>(m["CnName"]));
    }
    if (m.find("ConcurrentLimit") != m.end() && !m["ConcurrentLimit"].empty()) {
      concurrentLimit = make_shared<string>(boost::any_cast<string>(m["ConcurrentLimit"]));
    }
    if (m.find("EnName") != m.end() && !m["EnName"].empty()) {
      enName = make_shared<string>(boost::any_cast<string>(m["EnName"]));
    }
    if (m.find("MoreOperations") != m.end() && !m["MoreOperations"].empty()) {
      if (typeid(vector<boost::any>) == m["MoreOperations"].type()) {
        vector<LingJieOpenStatusDetailApiListMoreOperations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MoreOperations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LingJieOpenStatusDetailApiListMoreOperations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moreOperations = make_shared<vector<LingJieOpenStatusDetailApiListMoreOperations>>(expect1);
      }
    }
    if (m.find("StatisticsUnit") != m.end() && !m["StatisticsUnit"].empty()) {
      statisticsUnit = make_shared<string>(boost::any_cast<string>(m["StatisticsUnit"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      usage = make_shared<string>(boost::any_cast<string>(m["Usage"]));
    }
  }


  virtual ~LingJieOpenStatusDetailApiList() = default;
};
class LingJieOpenStatusDetail : public Darabonba::Model {
public:
  shared_ptr<vector<LingJieOpenStatusDetailApiList>> apiList{};
  shared_ptr<string> commodityConcurrentLimitTips{};
  shared_ptr<bool> commodityHasOpen{};
  shared_ptr<string> commodityOpenUrl{};
  shared_ptr<string> commodityUsageTips{};
  shared_ptr<bool> userStopMode{};

  LingJieOpenStatusDetail() {}

  explicit LingJieOpenStatusDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiList) {
      vector<boost::any> temp1;
      for(auto item1:*apiList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiList"] = boost::any(temp1);
    }
    if (commodityConcurrentLimitTips) {
      res["CommodityConcurrentLimitTips"] = boost::any(*commodityConcurrentLimitTips);
    }
    if (commodityHasOpen) {
      res["CommodityHasOpen"] = boost::any(*commodityHasOpen);
    }
    if (commodityOpenUrl) {
      res["CommodityOpenUrl"] = boost::any(*commodityOpenUrl);
    }
    if (commodityUsageTips) {
      res["CommodityUsageTips"] = boost::any(*commodityUsageTips);
    }
    if (userStopMode) {
      res["UserStopMode"] = boost::any(*userStopMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiList") != m.end() && !m["ApiList"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiList"].type()) {
        vector<LingJieOpenStatusDetailApiList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LingJieOpenStatusDetailApiList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiList = make_shared<vector<LingJieOpenStatusDetailApiList>>(expect1);
      }
    }
    if (m.find("CommodityConcurrentLimitTips") != m.end() && !m["CommodityConcurrentLimitTips"].empty()) {
      commodityConcurrentLimitTips = make_shared<string>(boost::any_cast<string>(m["CommodityConcurrentLimitTips"]));
    }
    if (m.find("CommodityHasOpen") != m.end() && !m["CommodityHasOpen"].empty()) {
      commodityHasOpen = make_shared<bool>(boost::any_cast<bool>(m["CommodityHasOpen"]));
    }
    if (m.find("CommodityOpenUrl") != m.end() && !m["CommodityOpenUrl"].empty()) {
      commodityOpenUrl = make_shared<string>(boost::any_cast<string>(m["CommodityOpenUrl"]));
    }
    if (m.find("CommodityUsageTips") != m.end() && !m["CommodityUsageTips"].empty()) {
      commodityUsageTips = make_shared<string>(boost::any_cast<string>(m["CommodityUsageTips"]));
    }
    if (m.find("UserStopMode") != m.end() && !m["UserStopMode"].empty()) {
      userStopMode = make_shared<bool>(boost::any_cast<bool>(m["UserStopMode"]));
    }
  }


  virtual ~LingJieOpenStatusDetail() = default;
};
class News : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> last{};
  shared_ptr<string> pic{};
  shared_ptr<long> sort{};
  shared_ptr<long> status{};
  shared_ptr<string> tags{};
  shared_ptr<string> title{};
  shared_ptr<long> type{};
  shared_ptr<string> url{};

  News() {}

  explicit News(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (last) {
      res["Last"] = boost::any(*last);
    }
    if (pic) {
      res["Pic"] = boost::any(*pic);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Last") != m.end() && !m["Last"].empty()) {
      last = make_shared<bool>(boost::any_cast<bool>(m["Last"]));
    }
    if (m.find("Pic") != m.end() && !m["Pic"].empty()) {
      pic = make_shared<string>(boost::any_cast<string>(m["Pic"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<long>(boost::any_cast<long>(m["Sort"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~News() = default;
};
class UserQpsDetail : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> day{};
  shared_ptr<long> qps{};
  shared_ptr<string> qpsRule{};
  shared_ptr<long> status{};

  UserQpsDetail() {}

  explicit UserQpsDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (qpsRule) {
      res["QpsRule"] = boost::any(*qpsRule);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<string>(boost::any_cast<string>(m["Day"]));
    }
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<long>(boost::any_cast<long>(m["Qps"]));
    }
    if (m.find("QpsRule") != m.end() && !m["QpsRule"].empty()) {
      qpsRule = make_shared<string>(boost::any_cast<string>(m["QpsRule"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~UserQpsDetail() = default;
};
class CreateSDKInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> bundleId{};
  shared_ptr<string> pk{};
  shared_ptr<string> platform{};
  shared_ptr<string> recipe{};
  shared_ptr<long> validFrom{};
  shared_ptr<long> validTo{};

  CreateSDKInstanceRequest() {}

  explicit CreateSDKInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (recipe) {
      res["Recipe"] = boost::any(*recipe);
    }
    if (validFrom) {
      res["ValidFrom"] = boost::any(*validFrom);
    }
    if (validTo) {
      res["ValidTo"] = boost::any(*validTo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Recipe") != m.end() && !m["Recipe"].empty()) {
      recipe = make_shared<string>(boost::any_cast<string>(m["Recipe"]));
    }
    if (m.find("ValidFrom") != m.end() && !m["ValidFrom"].empty()) {
      validFrom = make_shared<long>(boost::any_cast<long>(m["ValidFrom"]));
    }
    if (m.find("ValidTo") != m.end() && !m["ValidTo"].empty()) {
      validTo = make_shared<long>(boost::any_cast<long>(m["ValidTo"]));
    }
  }


  virtual ~CreateSDKInstanceRequest() = default;
};
class CreateSDKInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<bool> ok{};
  shared_ptr<string> requestId{};

  CreateSDKInstanceResponseBody() {}

  explicit CreateSDKInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (ok) {
      res["Ok"] = boost::any(*ok);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Ok") != m.end() && !m["Ok"].empty()) {
      ok = make_shared<bool>(boost::any_cast<bool>(m["Ok"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSDKInstanceResponseBody() = default;
};
class CreateSDKInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSDKInstanceResponseBody> body{};

  CreateSDKInstanceResponse() {}

  explicit CreateSDKInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSDKInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSDKInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSDKInstanceResponse() = default;
};
class GetSDKInstanceDebugInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetSDKInstanceDebugInfoRequest() {}

  explicit GetSDKInstanceDebugInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetSDKInstanceDebugInfoRequest() = default;
};
class GetSDKInstanceDebugInfoResponseBodyDataEvents : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> id{};
  shared_ptr<bool> success{};
  shared_ptr<string> timeStamp{};

  GetSDKInstanceDebugInfoResponseBodyDataEvents() {}

  explicit GetSDKInstanceDebugInfoResponseBodyDataEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timeStamp) {
      res["TimeStamp"] = boost::any(*timeStamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TimeStamp") != m.end() && !m["TimeStamp"].empty()) {
      timeStamp = make_shared<string>(boost::any_cast<string>(m["TimeStamp"]));
    }
  }


  virtual ~GetSDKInstanceDebugInfoResponseBodyDataEvents() = default;
};
class GetSDKInstanceDebugInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bundleId{};
  shared_ptr<string> createdAt{};
  shared_ptr<vector<GetSDKInstanceDebugInfoResponseBodyDataEvents>> events{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> latestBuild{};
  shared_ptr<string> platform{};
  shared_ptr<string> recipe{};
  shared_ptr<string> status{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> validFromDate{};
  shared_ptr<string> validToDate{};

  GetSDKInstanceDebugInfoResponseBodyData() {}

  explicit GetSDKInstanceDebugInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Events"] = boost::any(temp1);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (latestBuild) {
      res["LatestBuild"] = boost::any(*latestBuild);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (recipe) {
      res["Recipe"] = boost::any(*recipe);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (validFromDate) {
      res["ValidFromDate"] = boost::any(*validFromDate);
    }
    if (validToDate) {
      res["ValidToDate"] = boost::any(*validToDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<GetSDKInstanceDebugInfoResponseBodyDataEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSDKInstanceDebugInfoResponseBodyDataEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<GetSDKInstanceDebugInfoResponseBodyDataEvents>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LatestBuild") != m.end() && !m["LatestBuild"].empty()) {
      latestBuild = make_shared<string>(boost::any_cast<string>(m["LatestBuild"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Recipe") != m.end() && !m["Recipe"].empty()) {
      recipe = make_shared<string>(boost::any_cast<string>(m["Recipe"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("ValidFromDate") != m.end() && !m["ValidFromDate"].empty()) {
      validFromDate = make_shared<string>(boost::any_cast<string>(m["ValidFromDate"]));
    }
    if (m.find("ValidToDate") != m.end() && !m["ValidToDate"].empty()) {
      validToDate = make_shared<string>(boost::any_cast<string>(m["ValidToDate"]));
    }
  }


  virtual ~GetSDKInstanceDebugInfoResponseBodyData() = default;
};
class GetSDKInstanceDebugInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetSDKInstanceDebugInfoResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<bool> ok{};
  shared_ptr<string> requestId{};

  GetSDKInstanceDebugInfoResponseBody() {}

  explicit GetSDKInstanceDebugInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (ok) {
      res["Ok"] = boost::any(*ok);
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
        GetSDKInstanceDebugInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSDKInstanceDebugInfoResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Ok") != m.end() && !m["Ok"].empty()) {
      ok = make_shared<bool>(boost::any_cast<bool>(m["Ok"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSDKInstanceDebugInfoResponseBody() = default;
};
class GetSDKInstanceDebugInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSDKInstanceDebugInfoResponseBody> body{};

  GetSDKInstanceDebugInfoResponse() {}

  explicit GetSDKInstanceDebugInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSDKInstanceDebugInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSDKInstanceDebugInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetSDKInstanceDebugInfoResponse() = default;
};
class QuerySDKInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> codeList{};
  shared_ptr<string> createdAfterDate{};
  shared_ptr<string> createdBeforeDate{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pk{};

  QuerySDKInstancesRequest() {}

  explicit QuerySDKInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeList) {
      res["CodeList"] = boost::any(*codeList);
    }
    if (createdAfterDate) {
      res["CreatedAfterDate"] = boost::any(*createdAfterDate);
    }
    if (createdBeforeDate) {
      res["CreatedBeforeDate"] = boost::any(*createdBeforeDate);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeList") != m.end() && !m["CodeList"].empty()) {
      codeList = make_shared<string>(boost::any_cast<string>(m["CodeList"]));
    }
    if (m.find("CreatedAfterDate") != m.end() && !m["CreatedAfterDate"].empty()) {
      createdAfterDate = make_shared<string>(boost::any_cast<string>(m["CreatedAfterDate"]));
    }
    if (m.find("CreatedBeforeDate") != m.end() && !m["CreatedBeforeDate"].empty()) {
      createdBeforeDate = make_shared<string>(boost::any_cast<string>(m["CreatedBeforeDate"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
  }


  virtual ~QuerySDKInstancesRequest() = default;
};
class QuerySDKInstancesResponseBodyDataContent : public Darabonba::Model {
public:
  shared_ptr<string> bundleId{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> latestBuild{};
  shared_ptr<string> platform{};
  shared_ptr<string> recipe{};
  shared_ptr<string> status{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> userId{};
  shared_ptr<string> validFromDate{};
  shared_ptr<string> validToDate{};

  QuerySDKInstancesResponseBodyDataContent() {}

  explicit QuerySDKInstancesResponseBodyDataContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bundleId) {
      res["BundleId"] = boost::any(*bundleId);
    }
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (latestBuild) {
      res["LatestBuild"] = boost::any(*latestBuild);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (recipe) {
      res["Recipe"] = boost::any(*recipe);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updatedAt) {
      res["UpdatedAt"] = boost::any(*updatedAt);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (validFromDate) {
      res["ValidFromDate"] = boost::any(*validFromDate);
    }
    if (validToDate) {
      res["ValidToDate"] = boost::any(*validToDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BundleId") != m.end() && !m["BundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["BundleId"]));
    }
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LatestBuild") != m.end() && !m["LatestBuild"].empty()) {
      latestBuild = make_shared<string>(boost::any_cast<string>(m["LatestBuild"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Recipe") != m.end() && !m["Recipe"].empty()) {
      recipe = make_shared<string>(boost::any_cast<string>(m["Recipe"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdatedAt") != m.end() && !m["UpdatedAt"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["UpdatedAt"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("ValidFromDate") != m.end() && !m["ValidFromDate"].empty()) {
      validFromDate = make_shared<string>(boost::any_cast<string>(m["ValidFromDate"]));
    }
    if (m.find("ValidToDate") != m.end() && !m["ValidToDate"].empty()) {
      validToDate = make_shared<string>(boost::any_cast<string>(m["ValidToDate"]));
    }
  }


  virtual ~QuerySDKInstancesResponseBodyDataContent() = default;
};
class QuerySDKInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QuerySDKInstancesResponseBodyDataContent>> content{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  QuerySDKInstancesResponseBodyData() {}

  explicit QuerySDKInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      vector<boost::any> temp1;
      for(auto item1:*content){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Content"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(vector<boost::any>) == m["Content"].type()) {
        vector<QuerySDKInstancesResponseBodyDataContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Content"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySDKInstancesResponseBodyDataContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        content = make_shared<vector<QuerySDKInstancesResponseBodyDataContent>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QuerySDKInstancesResponseBodyData() = default;
};
class QuerySDKInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QuerySDKInstancesResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<bool> ok{};
  shared_ptr<string> requestId{};

  QuerySDKInstancesResponseBody() {}

  explicit QuerySDKInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (ok) {
      res["Ok"] = boost::any(*ok);
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
        QuerySDKInstancesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QuerySDKInstancesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Ok") != m.end() && !m["Ok"].empty()) {
      ok = make_shared<bool>(boost::any_cast<bool>(m["Ok"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QuerySDKInstancesResponseBody() = default;
};
class QuerySDKInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySDKInstancesResponseBody> body{};

  QuerySDKInstancesResponse() {}

  explicit QuerySDKInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySDKInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySDKInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySDKInstancesResponse() = default;
};
class StartSDKInstanceProductionRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  StartSDKInstanceProductionRequest() {}

  explicit StartSDKInstanceProductionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~StartSDKInstanceProductionRequest() = default;
};
class StartSDKInstanceProductionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> httpCode{};
  shared_ptr<bool> ok{};
  shared_ptr<string> requestId{};

  StartSDKInstanceProductionResponseBody() {}

  explicit StartSDKInstanceProductionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (ok) {
      res["Ok"] = boost::any(*ok);
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
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["HttpCode"]));
    }
    if (m.find("Ok") != m.end() && !m["Ok"].empty()) {
      ok = make_shared<bool>(boost::any_cast<bool>(m["Ok"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartSDKInstanceProductionResponseBody() = default;
};
class StartSDKInstanceProductionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartSDKInstanceProductionResponseBody> body{};

  StartSDKInstanceProductionResponse() {}

  explicit StartSDKInstanceProductionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartSDKInstanceProductionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartSDKInstanceProductionResponseBody>(model1);
      }
    }
  }


  virtual ~StartSDKInstanceProductionResponse() = default;
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
  CreateSDKInstanceResponse createSDKInstanceWithOptions(shared_ptr<CreateSDKInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSDKInstanceResponse createSDKInstance(shared_ptr<CreateSDKInstanceRequest> request);
  GetSDKInstanceDebugInfoResponse getSDKInstanceDebugInfoWithOptions(shared_ptr<GetSDKInstanceDebugInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSDKInstanceDebugInfoResponse getSDKInstanceDebugInfo(shared_ptr<GetSDKInstanceDebugInfoRequest> request);
  QuerySDKInstancesResponse querySDKInstancesWithOptions(shared_ptr<QuerySDKInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySDKInstancesResponse querySDKInstances(shared_ptr<QuerySDKInstancesRequest> request);
  StartSDKInstanceProductionResponse startSDKInstanceProductionWithOptions(shared_ptr<StartSDKInstanceProductionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartSDKInstanceProductionResponse startSDKInstanceProduction(shared_ptr<StartSDKInstanceProductionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Viapi-oxs-cross20200701

#endif
