// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SLS20201230_H_
#define ALIBABACLOUD_SLS20201230_H_

#include <alibabacloud/gateway_spi.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Sls20201230 {
class ConsumerGroup : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<bool> order{};
  shared_ptr<long> timeout{};

  ConsumerGroup() {}

  explicit ConsumerGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<bool>(boost::any_cast<bool>(m["order"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~ConsumerGroup() = default;
};
class EncryptUserCmkConf : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> cmkKeyId{};
  shared_ptr<string> regionId{};

  EncryptUserCmkConf() {}

  explicit EncryptUserCmkConf(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["arn"] = boost::any(*arn);
    }
    if (cmkKeyId) {
      res["cmk_key_id"] = boost::any(*cmkKeyId);
    }
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("arn") != m.end() && !m["arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["arn"]));
    }
    if (m.find("cmk_key_id") != m.end() && !m["cmk_key_id"].empty()) {
      cmkKeyId = make_shared<string>(boost::any_cast<string>(m["cmk_key_id"]));
    }
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
  }


  virtual ~EncryptUserCmkConf() = default;
};
class EncryptConf : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> encryptType{};
  shared_ptr<EncryptUserCmkConf> userCmkInfo{};

  EncryptConf() {}

  explicit EncryptConf(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (encryptType) {
      res["encrypt_type"] = boost::any(*encryptType);
    }
    if (userCmkInfo) {
      res["user_cmk_info"] = userCmkInfo ? boost::any(userCmkInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("encrypt_type") != m.end() && !m["encrypt_type"].empty()) {
      encryptType = make_shared<string>(boost::any_cast<string>(m["encrypt_type"]));
    }
    if (m.find("user_cmk_info") != m.end() && !m["user_cmk_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["user_cmk_info"].type()) {
        EncryptUserCmkConf model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["user_cmk_info"]));
        userCmkInfo = make_shared<EncryptUserCmkConf>(model1);
      }
    }
  }


  virtual ~EncryptConf() = default;
};
class Histogram : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<long> from{};
  shared_ptr<string> progress{};
  shared_ptr<long> to{};

  Histogram() {}

  explicit Histogram(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["progress"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
  }


  virtual ~Histogram() = default;
};
class LogContent : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  LogContent() {}

  explicit LogContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~LogContent() = default;
};
class LogTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  LogTag() {}

  explicit LogTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~LogTag() = default;
};
class LogItem : public Darabonba::Model {
public:
  shared_ptr<vector<LogContent>> contents{};
  shared_ptr<long> time{};

  LogItem() {}

  explicit LogItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contents) {
      vector<boost::any> temp1;
      for(auto item1:*contents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Contents"] = boost::any(temp1);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Contents") != m.end() && !m["Contents"].empty()) {
      if (typeid(vector<boost::any>) == m["Contents"].type()) {
        vector<LogContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Contents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LogContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        contents = make_shared<vector<LogContent>>(expect1);
      }
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
  }


  virtual ~LogItem() = default;
};
class LogGroup : public Darabonba::Model {
public:
  shared_ptr<LogTag> logTags{};
  shared_ptr<LogItem> logs{};
  shared_ptr<string> source{};
  shared_ptr<string> topic{};

  LogGroup() {}

  explicit LogGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logTags) {
      res["LogTags"] = logTags ? boost::any(logTags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logs) {
      res["Logs"] = logs ? boost::any(logs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogTags") != m.end() && !m["LogTags"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogTags"].type()) {
        LogTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogTags"]));
        logTags = make_shared<LogTag>(model1);
      }
    }
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Logs"].type()) {
        LogItem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Logs"]));
        logs = make_shared<LogItem>(model1);
      }
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~LogGroup() = default;
};
class LogtailConfigOutputDetail : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> logstoreName{};
  shared_ptr<string> region{};

  LogtailConfigOutputDetail() {}

  explicit LogtailConfigOutputDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
  }


  virtual ~LogtailConfigOutputDetail() = default;
};
class LogtailConfig : public Darabonba::Model {
public:
  shared_ptr<string> configName{};
  shared_ptr<long> createTime{};
  shared_ptr<map<string, boost::any>> inputDetail{};
  shared_ptr<string> inputType{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<string> logSample{};
  shared_ptr<LogtailConfigOutputDetail> outputDetail{};
  shared_ptr<string> outputType{};

  LogtailConfig() {}

  explicit LogtailConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configName) {
      res["configName"] = boost::any(*configName);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (inputDetail) {
      res["inputDetail"] = boost::any(*inputDetail);
    }
    if (inputType) {
      res["inputType"] = boost::any(*inputType);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (logSample) {
      res["logSample"] = boost::any(*logSample);
    }
    if (outputDetail) {
      res["outputDetail"] = outputDetail ? boost::any(outputDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outputType) {
      res["outputType"] = boost::any(*outputType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configName") != m.end() && !m["configName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["configName"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("inputDetail") != m.end() && !m["inputDetail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["inputDetail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      inputDetail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("inputType") != m.end() && !m["inputType"].empty()) {
      inputType = make_shared<string>(boost::any_cast<string>(m["inputType"]));
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["lastModifyTime"]));
    }
    if (m.find("logSample") != m.end() && !m["logSample"].empty()) {
      logSample = make_shared<string>(boost::any_cast<string>(m["logSample"]));
    }
    if (m.find("outputDetail") != m.end() && !m["outputDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["outputDetail"].type()) {
        LogtailConfigOutputDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["outputDetail"]));
        outputDetail = make_shared<LogtailConfigOutputDetail>(model1);
      }
    }
    if (m.find("outputType") != m.end() && !m["outputType"].empty()) {
      outputType = make_shared<string>(boost::any_cast<string>(m["outputType"]));
    }
  }


  virtual ~LogtailConfig() = default;
};
class SavedSearch : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> logstore{};
  shared_ptr<string> savedsearchName{};
  shared_ptr<string> searchQuery{};
  shared_ptr<string> topic{};

  SavedSearch() {}

  explicit SavedSearch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (savedsearchName) {
      res["savedsearchName"] = boost::any(*savedsearchName);
    }
    if (searchQuery) {
      res["searchQuery"] = boost::any(*searchQuery);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("savedsearchName") != m.end() && !m["savedsearchName"].empty()) {
      savedsearchName = make_shared<string>(boost::any_cast<string>(m["savedsearchName"]));
    }
    if (m.find("searchQuery") != m.end() && !m["searchQuery"].empty()) {
      searchQuery = make_shared<string>(boost::any_cast<string>(m["searchQuery"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
  }


  virtual ~SavedSearch() = default;
};
class Chart : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> action{};
  shared_ptr<map<string, boost::any>> display{};
  shared_ptr<map<string, boost::any>> search{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};

  Chart() {}

  explicit Chart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (display) {
      res["display"] = boost::any(*display);
    }
    if (search) {
      res["search"] = boost::any(*search);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("action") != m.end() && !m["action"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["action"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      action = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("display") != m.end() && !m["display"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["display"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      display = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("search") != m.end() && !m["search"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["search"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      search = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~Chart() = default;
};
class Dashboard : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> attribute{};
  shared_ptr<vector<Chart>> charts{};
  shared_ptr<string> dashboardName{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};

  Dashboard() {}

  explicit Dashboard(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attribute) {
      res["attribute"] = boost::any(*attribute);
    }
    if (charts) {
      vector<boost::any> temp1;
      for(auto item1:*charts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["charts"] = boost::any(temp1);
    }
    if (dashboardName) {
      res["dashboardName"] = boost::any(*dashboardName);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["attribute"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      attribute = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("charts") != m.end() && !m["charts"].empty()) {
      if (typeid(vector<boost::any>) == m["charts"].type()) {
        vector<Chart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["charts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Chart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        charts = make_shared<vector<Chart>>(expect1);
      }
    }
    if (m.find("dashboardName") != m.end() && !m["dashboardName"].empty()) {
      dashboardName = make_shared<string>(boost::any_cast<string>(m["dashboardName"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
  }


  virtual ~Dashboard() = default;
};
class EtlJobFunctionConfig : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> functionName{};
  shared_ptr<string> functionProvider{};
  shared_ptr<string> regionName{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> serviceName{};

  EtlJobFunctionConfig() {}

  explicit EtlJobFunctionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (functionName) {
      res["functionName"] = boost::any(*functionName);
    }
    if (functionProvider) {
      res["functionProvider"] = boost::any(*functionProvider);
    }
    if (regionName) {
      res["regionName"] = boost::any(*regionName);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("functionName") != m.end() && !m["functionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["functionName"]));
    }
    if (m.find("functionProvider") != m.end() && !m["functionProvider"].empty()) {
      functionProvider = make_shared<string>(boost::any_cast<string>(m["functionProvider"]));
    }
    if (m.find("regionName") != m.end() && !m["regionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["regionName"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
  }


  virtual ~EtlJobFunctionConfig() = default;
};
class EtlJobLogConfig : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> logstoreName{};
  shared_ptr<string> projectName{};

  EtlJobLogConfig() {}

  explicit EtlJobLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
  }


  virtual ~EtlJobLogConfig() = default;
};
class EtlJobSourceConfig : public Darabonba::Model {
public:
  shared_ptr<string> logstoreName{};

  EtlJobSourceConfig() {}

  explicit EtlJobSourceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
  }


  virtual ~EtlJobSourceConfig() = default;
};
class EtlJobTriggerConfig : public Darabonba::Model {
public:
  shared_ptr<long> maxRetryTime{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> startingPosition{};
  shared_ptr<long> startingUnixtime{};
  shared_ptr<long> triggerInterval{};

  EtlJobTriggerConfig() {}

  explicit EtlJobTriggerConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxRetryTime) {
      res["maxRetryTime"] = boost::any(*maxRetryTime);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (startingPosition) {
      res["startingPosition"] = boost::any(*startingPosition);
    }
    if (startingUnixtime) {
      res["startingUnixtime"] = boost::any(*startingUnixtime);
    }
    if (triggerInterval) {
      res["triggerInterval"] = boost::any(*triggerInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxRetryTime") != m.end() && !m["maxRetryTime"].empty()) {
      maxRetryTime = make_shared<long>(boost::any_cast<long>(m["maxRetryTime"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("startingPosition") != m.end() && !m["startingPosition"].empty()) {
      startingPosition = make_shared<string>(boost::any_cast<string>(m["startingPosition"]));
    }
    if (m.find("startingUnixtime") != m.end() && !m["startingUnixtime"].empty()) {
      startingUnixtime = make_shared<long>(boost::any_cast<long>(m["startingUnixtime"]));
    }
    if (m.find("triggerInterval") != m.end() && !m["triggerInterval"].empty()) {
      triggerInterval = make_shared<long>(boost::any_cast<long>(m["triggerInterval"]));
    }
  }


  virtual ~EtlJobTriggerConfig() = default;
};
class EtlJob : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> etlJobName{};
  shared_ptr<EtlJobFunctionConfig> functionConfig{};
  shared_ptr<map<string, boost::any>> functionParameter{};
  shared_ptr<EtlJobLogConfig> logConfig{};
  shared_ptr<EtlJobSourceConfig> sourceConfig{};
  shared_ptr<EtlJobTriggerConfig> triggerConfig{};

  EtlJob() {}

  explicit EtlJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (etlJobName) {
      res["etlJobName"] = boost::any(*etlJobName);
    }
    if (functionConfig) {
      res["functionConfig"] = functionConfig ? boost::any(functionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (functionParameter) {
      res["functionParameter"] = boost::any(*functionParameter);
    }
    if (logConfig) {
      res["logConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceConfig) {
      res["sourceConfig"] = sourceConfig ? boost::any(sourceConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (triggerConfig) {
      res["triggerConfig"] = triggerConfig ? boost::any(triggerConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("etlJobName") != m.end() && !m["etlJobName"].empty()) {
      etlJobName = make_shared<string>(boost::any_cast<string>(m["etlJobName"]));
    }
    if (m.find("functionConfig") != m.end() && !m["functionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["functionConfig"].type()) {
        EtlJobFunctionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["functionConfig"]));
        functionConfig = make_shared<EtlJobFunctionConfig>(model1);
      }
    }
    if (m.find("functionParameter") != m.end() && !m["functionParameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["functionParameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      functionParameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("logConfig") != m.end() && !m["logConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["logConfig"].type()) {
        EtlJobLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logConfig"]));
        logConfig = make_shared<EtlJobLogConfig>(model1);
      }
    }
    if (m.find("sourceConfig") != m.end() && !m["sourceConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["sourceConfig"].type()) {
        EtlJobSourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sourceConfig"]));
        sourceConfig = make_shared<EtlJobSourceConfig>(model1);
      }
    }
    if (m.find("triggerConfig") != m.end() && !m["triggerConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["triggerConfig"].type()) {
        EtlJobTriggerConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["triggerConfig"]));
        triggerConfig = make_shared<EtlJobTriggerConfig>(model1);
      }
    }
  }


  virtual ~EtlJob() = default;
};
class EtlMeta : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> etlMetaKey{};
  shared_ptr<string> etlMetaName{};
  shared_ptr<string> etlMetaTag{};
  shared_ptr<string> etlMetaValue{};

  EtlMeta() {}

  explicit EtlMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (etlMetaKey) {
      res["etlMetaKey"] = boost::any(*etlMetaKey);
    }
    if (etlMetaName) {
      res["etlMetaName"] = boost::any(*etlMetaName);
    }
    if (etlMetaTag) {
      res["etlMetaTag"] = boost::any(*etlMetaTag);
    }
    if (etlMetaValue) {
      res["etlMetaValue"] = boost::any(*etlMetaValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("etlMetaKey") != m.end() && !m["etlMetaKey"].empty()) {
      etlMetaKey = make_shared<string>(boost::any_cast<string>(m["etlMetaKey"]));
    }
    if (m.find("etlMetaName") != m.end() && !m["etlMetaName"].empty()) {
      etlMetaName = make_shared<string>(boost::any_cast<string>(m["etlMetaName"]));
    }
    if (m.find("etlMetaTag") != m.end() && !m["etlMetaTag"].empty()) {
      etlMetaTag = make_shared<string>(boost::any_cast<string>(m["etlMetaTag"]));
    }
    if (m.find("etlMetaValue") != m.end() && !m["etlMetaValue"].empty()) {
      etlMetaValue = make_shared<string>(boost::any_cast<string>(m["etlMetaValue"]));
    }
  }


  virtual ~EtlMeta() = default;
};
class ExternalStore : public Darabonba::Model {
public:
  shared_ptr<string> externalStoreName{};
  shared_ptr<map<string, boost::any>> parameter{};
  shared_ptr<string> storeType{};

  ExternalStore() {}

  explicit ExternalStore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalStoreName) {
      res["externalStoreName"] = boost::any(*externalStoreName);
    }
    if (parameter) {
      res["parameter"] = boost::any(*parameter);
    }
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalStoreName") != m.end() && !m["externalStoreName"].empty()) {
      externalStoreName = make_shared<string>(boost::any_cast<string>(m["externalStoreName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["parameter"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      parameter = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
  }


  virtual ~ExternalStore() = default;
};
class IndexLine : public Darabonba::Model {
public:
  shared_ptr<bool> caseSensitive{};
  shared_ptr<bool> chn{};
  shared_ptr<vector<string>> excludeKeys{};
  shared_ptr<vector<string>> includeKeys{};
  shared_ptr<vector<string>> token{};

  IndexLine() {}

  explicit IndexLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseSensitive) {
      res["caseSensitive"] = boost::any(*caseSensitive);
    }
    if (chn) {
      res["chn"] = boost::any(*chn);
    }
    if (excludeKeys) {
      res["exclude_keys"] = boost::any(*excludeKeys);
    }
    if (includeKeys) {
      res["include_keys"] = boost::any(*includeKeys);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caseSensitive") != m.end() && !m["caseSensitive"].empty()) {
      caseSensitive = make_shared<bool>(boost::any_cast<bool>(m["caseSensitive"]));
    }
    if (m.find("chn") != m.end() && !m["chn"].empty()) {
      chn = make_shared<bool>(boost::any_cast<bool>(m["chn"]));
    }
    if (m.find("exclude_keys") != m.end() && !m["exclude_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["exclude_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["exclude_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("include_keys") != m.end() && !m["include_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["include_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["include_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      includeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["token"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["token"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      token = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~IndexLine() = default;
};
class IndexKeysValue : public Darabonba::Model {
public:
  shared_ptr<bool> chn{};
  shared_ptr<bool> caseSensitive{};
  shared_ptr<vector<string>> token{};
  shared_ptr<string> alias{};
  shared_ptr<string> type{};
  shared_ptr<bool> docValue{};

  IndexKeysValue() {}

  explicit IndexKeysValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chn) {
      res["chn"] = boost::any(*chn);
    }
    if (caseSensitive) {
      res["caseSensitive"] = boost::any(*caseSensitive);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (docValue) {
      res["doc_value"] = boost::any(*docValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chn") != m.end() && !m["chn"].empty()) {
      chn = make_shared<bool>(boost::any_cast<bool>(m["chn"]));
    }
    if (m.find("caseSensitive") != m.end() && !m["caseSensitive"].empty()) {
      caseSensitive = make_shared<bool>(boost::any_cast<bool>(m["caseSensitive"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["token"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["token"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      token = make_shared<vector<string>>(toVec1);
    }
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("doc_value") != m.end() && !m["doc_value"].empty()) {
      docValue = make_shared<bool>(boost::any_cast<bool>(m["doc_value"]));
    }
  }


  virtual ~IndexKeysValue() = default;
};
class Index : public Darabonba::Model {
public:
  shared_ptr<map<string, IndexKeysValue>> keys{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<IndexLine> line{};
  shared_ptr<bool> logReduce{};
  shared_ptr<vector<string>> logReduceBlackList{};
  shared_ptr<vector<string>> logReduceWhiteList{};
  shared_ptr<long> maxTextLen{};
  shared_ptr<long> ttl{};

  Index() {}

  explicit Index(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keys) {
      map<string, boost::any> temp1;
      for(auto item1:*keys){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["keys"] = boost::any(temp1);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (line) {
      res["line"] = line ? boost::any(line->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logReduce) {
      res["log_reduce"] = boost::any(*logReduce);
    }
    if (logReduceBlackList) {
      res["log_reduce_black_list"] = boost::any(*logReduceBlackList);
    }
    if (logReduceWhiteList) {
      res["log_reduce_white_list"] = boost::any(*logReduceWhiteList);
    }
    if (maxTextLen) {
      res["max_text_len"] = boost::any(*maxTextLen);
    }
    if (ttl) {
      res["ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keys") != m.end() && !m["keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["keys"].type()) {
        map<string, IndexKeysValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["keys"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            IndexKeysValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        keys = make_shared<map<string, IndexKeysValue>>(expect1);
      }
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["lastModifyTime"]));
    }
    if (m.find("line") != m.end() && !m["line"].empty()) {
      if (typeid(map<string, boost::any>) == m["line"].type()) {
        IndexLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["line"]));
        line = make_shared<IndexLine>(model1);
      }
    }
    if (m.find("log_reduce") != m.end() && !m["log_reduce"].empty()) {
      logReduce = make_shared<bool>(boost::any_cast<bool>(m["log_reduce"]));
    }
    if (m.find("log_reduce_black_list") != m.end() && !m["log_reduce_black_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_black_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_black_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceBlackList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("log_reduce_white_list") != m.end() && !m["log_reduce_white_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_white_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_white_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("max_text_len") != m.end() && !m["max_text_len"].empty()) {
      maxTextLen = make_shared<long>(boost::any_cast<long>(m["max_text_len"]));
    }
    if (m.find("ttl") != m.end() && !m["ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["ttl"]));
    }
  }


  virtual ~Index() = default;
};
class LoggingLoggingDetails : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<string> type{};

  LoggingLoggingDetails() {}

  explicit LoggingLoggingDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~LoggingLoggingDetails() = default;
};
class Logging : public Darabonba::Model {
public:
  shared_ptr<vector<LoggingLoggingDetails>> loggingDetails{};
  shared_ptr<string> loggingProject{};

  Logging() {}

  explicit Logging(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loggingDetails) {
      vector<boost::any> temp1;
      for(auto item1:*loggingDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["loggingDetails"] = boost::any(temp1);
    }
    if (loggingProject) {
      res["loggingProject"] = boost::any(*loggingProject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("loggingDetails") != m.end() && !m["loggingDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["loggingDetails"].type()) {
        vector<LoggingLoggingDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["loggingDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LoggingLoggingDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loggingDetails = make_shared<vector<LoggingLoggingDetails>>(expect1);
      }
    }
    if (m.find("loggingProject") != m.end() && !m["loggingProject"].empty()) {
      loggingProject = make_shared<string>(boost::any_cast<string>(m["loggingProject"]));
    }
  }


  virtual ~Logging() = default;
};
class Logstore : public Darabonba::Model {
public:
  shared_ptr<bool> appendMeta{};
  shared_ptr<bool> autoSplit{};
  shared_ptr<long> createTime{};
  shared_ptr<bool> enableTracking{};
  shared_ptr<EncryptConf> encryptConf{};
  shared_ptr<long> hotTtl{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<string> logstoreName{};
  shared_ptr<long> maxSplitShard{};
  shared_ptr<string> mode{};
  shared_ptr<string> productType{};
  shared_ptr<long> shardCount{};
  shared_ptr<string> telemetryType{};
  shared_ptr<long> ttl{};

  Logstore() {}

  explicit Logstore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appendMeta) {
      res["appendMeta"] = boost::any(*appendMeta);
    }
    if (autoSplit) {
      res["autoSplit"] = boost::any(*autoSplit);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (enableTracking) {
      res["enable_tracking"] = boost::any(*enableTracking);
    }
    if (encryptConf) {
      res["encrypt_conf"] = encryptConf ? boost::any(encryptConf->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hotTtl) {
      res["hot_ttl"] = boost::any(*hotTtl);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    if (maxSplitShard) {
      res["maxSplitShard"] = boost::any(*maxSplitShard);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    if (shardCount) {
      res["shardCount"] = boost::any(*shardCount);
    }
    if (telemetryType) {
      res["telemetryType"] = boost::any(*telemetryType);
    }
    if (ttl) {
      res["ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appendMeta") != m.end() && !m["appendMeta"].empty()) {
      appendMeta = make_shared<bool>(boost::any_cast<bool>(m["appendMeta"]));
    }
    if (m.find("autoSplit") != m.end() && !m["autoSplit"].empty()) {
      autoSplit = make_shared<bool>(boost::any_cast<bool>(m["autoSplit"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("enable_tracking") != m.end() && !m["enable_tracking"].empty()) {
      enableTracking = make_shared<bool>(boost::any_cast<bool>(m["enable_tracking"]));
    }
    if (m.find("encrypt_conf") != m.end() && !m["encrypt_conf"].empty()) {
      if (typeid(map<string, boost::any>) == m["encrypt_conf"].type()) {
        EncryptConf model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["encrypt_conf"]));
        encryptConf = make_shared<EncryptConf>(model1);
      }
    }
    if (m.find("hot_ttl") != m.end() && !m["hot_ttl"].empty()) {
      hotTtl = make_shared<long>(boost::any_cast<long>(m["hot_ttl"]));
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["lastModifyTime"]));
    }
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
    if (m.find("maxSplitShard") != m.end() && !m["maxSplitShard"].empty()) {
      maxSplitShard = make_shared<long>(boost::any_cast<long>(m["maxSplitShard"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<string>(boost::any_cast<string>(m["productType"]));
    }
    if (m.find("shardCount") != m.end() && !m["shardCount"].empty()) {
      shardCount = make_shared<long>(boost::any_cast<long>(m["shardCount"]));
    }
    if (m.find("telemetryType") != m.end() && !m["telemetryType"].empty()) {
      telemetryType = make_shared<string>(boost::any_cast<string>(m["telemetryType"]));
    }
    if (m.find("ttl") != m.end() && !m["ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["ttl"]));
    }
  }


  virtual ~Logstore() = default;
};
class Machine : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<long> lastHeartbeatTime{};
  shared_ptr<string> machineUniqueid{};
  shared_ptr<string> userdefinedId{};

  Machine() {}

  explicit Machine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["ip"] = boost::any(*ip);
    }
    if (lastHeartbeatTime) {
      res["lastHeartbeatTime"] = boost::any(*lastHeartbeatTime);
    }
    if (machineUniqueid) {
      res["machine-uniqueid"] = boost::any(*machineUniqueid);
    }
    if (userdefinedId) {
      res["userdefined-id"] = boost::any(*userdefinedId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ip") != m.end() && !m["ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["ip"]));
    }
    if (m.find("lastHeartbeatTime") != m.end() && !m["lastHeartbeatTime"].empty()) {
      lastHeartbeatTime = make_shared<long>(boost::any_cast<long>(m["lastHeartbeatTime"]));
    }
    if (m.find("machine-uniqueid") != m.end() && !m["machine-uniqueid"].empty()) {
      machineUniqueid = make_shared<string>(boost::any_cast<string>(m["machine-uniqueid"]));
    }
    if (m.find("userdefined-id") != m.end() && !m["userdefined-id"].empty()) {
      userdefinedId = make_shared<string>(boost::any_cast<string>(m["userdefined-id"]));
    }
  }


  virtual ~Machine() = default;
};
class MachineGroupGroupAttribute : public Darabonba::Model {
public:
  shared_ptr<string> externalName{};
  shared_ptr<string> groupTopic{};

  MachineGroupGroupAttribute() {}

  explicit MachineGroupGroupAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalName) {
      res["externalName"] = boost::any(*externalName);
    }
    if (groupTopic) {
      res["groupTopic"] = boost::any(*groupTopic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalName") != m.end() && !m["externalName"].empty()) {
      externalName = make_shared<string>(boost::any_cast<string>(m["externalName"]));
    }
    if (m.find("groupTopic") != m.end() && !m["groupTopic"].empty()) {
      groupTopic = make_shared<string>(boost::any_cast<string>(m["groupTopic"]));
    }
  }


  virtual ~MachineGroupGroupAttribute() = default;
};
class MachineGroup : public Darabonba::Model {
public:
  shared_ptr<MachineGroupGroupAttribute> groupAttribute{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<string> machineIdentifyType{};
  shared_ptr<vector<string>> machineList{};

  MachineGroup() {}

  explicit MachineGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupAttribute) {
      res["groupAttribute"] = groupAttribute ? boost::any(groupAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["groupType"] = boost::any(*groupType);
    }
    if (machineIdentifyType) {
      res["machineIdentifyType"] = boost::any(*machineIdentifyType);
    }
    if (machineList) {
      res["machineList"] = boost::any(*machineList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupAttribute") != m.end() && !m["groupAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupAttribute"].type()) {
        MachineGroupGroupAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupAttribute"]));
        groupAttribute = make_shared<MachineGroupGroupAttribute>(model1);
      }
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("groupType") != m.end() && !m["groupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["groupType"]));
    }
    if (m.find("machineIdentifyType") != m.end() && !m["machineIdentifyType"].empty()) {
      machineIdentifyType = make_shared<string>(boost::any_cast<string>(m["machineIdentifyType"]));
    }
    if (m.find("machineList") != m.end() && !m["machineList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["machineList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["machineList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      machineList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~MachineGroup() = default;
};
class Project : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> lastModifyTime{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectName{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};

  Project() {}

  explicit Project(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (owner) {
      res["owner"] = boost::any(*owner);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<string>(boost::any_cast<string>(m["lastModifyTime"]));
    }
    if (m.find("owner") != m.end() && !m["owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["owner"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~Project() = default;
};
class Shard : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> exclusiveEndKey{};
  shared_ptr<string> inclusiveBeginKey{};
  shared_ptr<long> shardID{};
  shared_ptr<string> status{};

  Shard() {}

  explicit Shard(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (exclusiveEndKey) {
      res["exclusiveEndKey"] = boost::any(*exclusiveEndKey);
    }
    if (inclusiveBeginKey) {
      res["inclusiveBeginKey"] = boost::any(*inclusiveBeginKey);
    }
    if (shardID) {
      res["shardID"] = boost::any(*shardID);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("exclusiveEndKey") != m.end() && !m["exclusiveEndKey"].empty()) {
      exclusiveEndKey = make_shared<string>(boost::any_cast<string>(m["exclusiveEndKey"]));
    }
    if (m.find("inclusiveBeginKey") != m.end() && !m["inclusiveBeginKey"].empty()) {
      inclusiveBeginKey = make_shared<string>(boost::any_cast<string>(m["inclusiveBeginKey"]));
    }
    if (m.find("shardID") != m.end() && !m["shardID"].empty()) {
      shardID = make_shared<long>(boost::any_cast<long>(m["shardID"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~Shard() = default;
};
class KeysValue : public Darabonba::Model {
public:
  shared_ptr<bool> caseSensitive{};
  shared_ptr<bool> chn{};
  shared_ptr<string> type{};
  shared_ptr<string> alias{};
  shared_ptr<vector<string>> token{};
  shared_ptr<bool> docValue{};

  KeysValue() {}

  explicit KeysValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseSensitive) {
      res["caseSensitive"] = boost::any(*caseSensitive);
    }
    if (chn) {
      res["chn"] = boost::any(*chn);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (alias) {
      res["alias"] = boost::any(*alias);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    if (docValue) {
      res["doc_value"] = boost::any(*docValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caseSensitive") != m.end() && !m["caseSensitive"].empty()) {
      caseSensitive = make_shared<bool>(boost::any_cast<bool>(m["caseSensitive"]));
    }
    if (m.find("chn") != m.end() && !m["chn"].empty()) {
      chn = make_shared<bool>(boost::any_cast<bool>(m["chn"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("alias") != m.end() && !m["alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["alias"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["token"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["token"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      token = make_shared<vector<string>>(toVec1);
    }
    if (m.find("doc_value") != m.end() && !m["doc_value"].empty()) {
      docValue = make_shared<bool>(boost::any_cast<bool>(m["doc_value"]));
    }
  }


  virtual ~KeysValue() = default;
};
class ApplyConfigToMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  ApplyConfigToMachineGroupResponse() {}

  explicit ApplyConfigToMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~ApplyConfigToMachineGroupResponse() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
  }


  virtual ~ChangeResourceGroupRequest() = default;
};
class ChangeResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  ChangeResourceGroupResponse() {}

  explicit ChangeResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~ChangeResourceGroupResponse() = default;
};
class ConsumerGroupHeartBeatRequest : public Darabonba::Model {
public:
  shared_ptr<vector<long>> body{};
  shared_ptr<string> consumer{};

  ConsumerGroupHeartBeatRequest() {}

  explicit ConsumerGroupHeartBeatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (consumer) {
      res["consumer"] = boost::any(*consumer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["body"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      body = make_shared<vector<long>>(toVec1);
    }
    if (m.find("consumer") != m.end() && !m["consumer"].empty()) {
      consumer = make_shared<string>(boost::any_cast<string>(m["consumer"]));
    }
  }


  virtual ~ConsumerGroupHeartBeatRequest() = default;
};
class ConsumerGroupHeartBeatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<long>> body{};

  ConsumerGroupHeartBeatResponse() {}

  explicit ConsumerGroupHeartBeatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["body"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      body = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~ConsumerGroupHeartBeatResponse() = default;
};
class CreateConfigRequest : public Darabonba::Model {
public:
  shared_ptr<LogtailConfig> body{};

  CreateConfigRequest() {}

  explicit CreateConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LogtailConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogtailConfig>(model1);
      }
    }
  }


  virtual ~CreateConfigRequest() = default;
};
class CreateConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateConfigResponse() {}

  explicit CreateConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~CreateConfigResponse() = default;
};
class CreateConsumerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> consumerGroup{};
  shared_ptr<bool> order{};
  shared_ptr<long> timeout{};

  CreateConsumerGroupRequest() {}

  explicit CreateConsumerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroup) {
      res["consumerGroup"] = boost::any(*consumerGroup);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("consumerGroup") != m.end() && !m["consumerGroup"].empty()) {
      consumerGroup = make_shared<string>(boost::any_cast<string>(m["consumerGroup"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<bool>(boost::any_cast<bool>(m["order"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~CreateConsumerGroupRequest() = default;
};
class CreateConsumerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateConsumerGroupResponse() {}

  explicit CreateConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~CreateConsumerGroupResponse() = default;
};
class CreateDashboardRequest : public Darabonba::Model {
public:
  shared_ptr<Dashboard> body{};

  CreateDashboardRequest() {}

  explicit CreateDashboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Dashboard model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Dashboard>(model1);
      }
    }
  }


  virtual ~CreateDashboardRequest() = default;
};
class CreateDashboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateDashboardResponse() {}

  explicit CreateDashboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~CreateDashboardResponse() = default;
};
class CreateDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};

  CreateDomainRequest() {}

  explicit CreateDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
    }
  }


  virtual ~CreateDomainRequest() = default;
};
class CreateDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateDomainResponse() {}

  explicit CreateDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~CreateDomainResponse() = default;
};
class CreateIndexRequestLine : public Darabonba::Model {
public:
  shared_ptr<bool> caseSensitive{};
  shared_ptr<bool> chn{};
  shared_ptr<vector<string>> excludeKeys{};
  shared_ptr<vector<string>> includeKeys{};
  shared_ptr<vector<string>> token{};

  CreateIndexRequestLine() {}

  explicit CreateIndexRequestLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseSensitive) {
      res["caseSensitive"] = boost::any(*caseSensitive);
    }
    if (chn) {
      res["chn"] = boost::any(*chn);
    }
    if (excludeKeys) {
      res["exclude_keys"] = boost::any(*excludeKeys);
    }
    if (includeKeys) {
      res["include_keys"] = boost::any(*includeKeys);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caseSensitive") != m.end() && !m["caseSensitive"].empty()) {
      caseSensitive = make_shared<bool>(boost::any_cast<bool>(m["caseSensitive"]));
    }
    if (m.find("chn") != m.end() && !m["chn"].empty()) {
      chn = make_shared<bool>(boost::any_cast<bool>(m["chn"]));
    }
    if (m.find("exclude_keys") != m.end() && !m["exclude_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["exclude_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["exclude_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("include_keys") != m.end() && !m["include_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["include_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["include_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      includeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["token"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["token"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      token = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateIndexRequestLine() = default;
};
class CreateIndexRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, KeysValue>> keys{};
  shared_ptr<CreateIndexRequestLine> line{};
  shared_ptr<bool> logReduce{};
  shared_ptr<vector<string>> logReduceBlackList{};
  shared_ptr<vector<string>> logReduceWhiteList{};
  shared_ptr<long> maxTextLen{};
  shared_ptr<long> ttl{};

  CreateIndexRequest() {}

  explicit CreateIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keys) {
      map<string, boost::any> temp1;
      for(auto item1:*keys){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["keys"] = boost::any(temp1);
    }
    if (line) {
      res["line"] = line ? boost::any(line->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logReduce) {
      res["log_reduce"] = boost::any(*logReduce);
    }
    if (logReduceBlackList) {
      res["log_reduce_black_list"] = boost::any(*logReduceBlackList);
    }
    if (logReduceWhiteList) {
      res["log_reduce_white_list"] = boost::any(*logReduceWhiteList);
    }
    if (maxTextLen) {
      res["max_text_len"] = boost::any(*maxTextLen);
    }
    if (ttl) {
      res["ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keys") != m.end() && !m["keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["keys"].type()) {
        map<string, KeysValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["keys"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            KeysValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        keys = make_shared<map<string, KeysValue>>(expect1);
      }
    }
    if (m.find("line") != m.end() && !m["line"].empty()) {
      if (typeid(map<string, boost::any>) == m["line"].type()) {
        CreateIndexRequestLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["line"]));
        line = make_shared<CreateIndexRequestLine>(model1);
      }
    }
    if (m.find("log_reduce") != m.end() && !m["log_reduce"].empty()) {
      logReduce = make_shared<bool>(boost::any_cast<bool>(m["log_reduce"]));
    }
    if (m.find("log_reduce_black_list") != m.end() && !m["log_reduce_black_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_black_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_black_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceBlackList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("log_reduce_white_list") != m.end() && !m["log_reduce_white_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_white_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_white_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("max_text_len") != m.end() && !m["max_text_len"].empty()) {
      maxTextLen = make_shared<long>(boost::any_cast<long>(m["max_text_len"]));
    }
    if (m.find("ttl") != m.end() && !m["ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["ttl"]));
    }
  }


  virtual ~CreateIndexRequest() = default;
};
class CreateIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateIndexResponse() {}

  explicit CreateIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~CreateIndexResponse() = default;
};
class CreateLogStoreRequest : public Darabonba::Model {
public:
  shared_ptr<bool> appendMeta{};
  shared_ptr<bool> autoSplit{};
  shared_ptr<bool> enableTracking{};
  shared_ptr<EncryptConf> encryptConf{};
  shared_ptr<long> hotTtl{};
  shared_ptr<string> logstoreName{};
  shared_ptr<long> maxSplitShard{};
  shared_ptr<string> mode{};
  shared_ptr<long> shardCount{};
  shared_ptr<string> telemetryType{};
  shared_ptr<long> ttl{};

  CreateLogStoreRequest() {}

  explicit CreateLogStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appendMeta) {
      res["appendMeta"] = boost::any(*appendMeta);
    }
    if (autoSplit) {
      res["autoSplit"] = boost::any(*autoSplit);
    }
    if (enableTracking) {
      res["enable_tracking"] = boost::any(*enableTracking);
    }
    if (encryptConf) {
      res["encrypt_conf"] = encryptConf ? boost::any(encryptConf->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hotTtl) {
      res["hot_ttl"] = boost::any(*hotTtl);
    }
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    if (maxSplitShard) {
      res["maxSplitShard"] = boost::any(*maxSplitShard);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (shardCount) {
      res["shardCount"] = boost::any(*shardCount);
    }
    if (telemetryType) {
      res["telemetryType"] = boost::any(*telemetryType);
    }
    if (ttl) {
      res["ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appendMeta") != m.end() && !m["appendMeta"].empty()) {
      appendMeta = make_shared<bool>(boost::any_cast<bool>(m["appendMeta"]));
    }
    if (m.find("autoSplit") != m.end() && !m["autoSplit"].empty()) {
      autoSplit = make_shared<bool>(boost::any_cast<bool>(m["autoSplit"]));
    }
    if (m.find("enable_tracking") != m.end() && !m["enable_tracking"].empty()) {
      enableTracking = make_shared<bool>(boost::any_cast<bool>(m["enable_tracking"]));
    }
    if (m.find("encrypt_conf") != m.end() && !m["encrypt_conf"].empty()) {
      if (typeid(map<string, boost::any>) == m["encrypt_conf"].type()) {
        EncryptConf model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["encrypt_conf"]));
        encryptConf = make_shared<EncryptConf>(model1);
      }
    }
    if (m.find("hot_ttl") != m.end() && !m["hot_ttl"].empty()) {
      hotTtl = make_shared<long>(boost::any_cast<long>(m["hot_ttl"]));
    }
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
    if (m.find("maxSplitShard") != m.end() && !m["maxSplitShard"].empty()) {
      maxSplitShard = make_shared<long>(boost::any_cast<long>(m["maxSplitShard"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("shardCount") != m.end() && !m["shardCount"].empty()) {
      shardCount = make_shared<long>(boost::any_cast<long>(m["shardCount"]));
    }
    if (m.find("telemetryType") != m.end() && !m["telemetryType"].empty()) {
      telemetryType = make_shared<string>(boost::any_cast<string>(m["telemetryType"]));
    }
    if (m.find("ttl") != m.end() && !m["ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["ttl"]));
    }
  }


  virtual ~CreateLogStoreRequest() = default;
};
class CreateLogStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateLogStoreResponse() {}

  explicit CreateLogStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~CreateLogStoreResponse() = default;
};
class CreateLoggingRequestLoggingDetails : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<string> type{};

  CreateLoggingRequestLoggingDetails() {}

  explicit CreateLoggingRequestLoggingDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateLoggingRequestLoggingDetails() = default;
};
class CreateLoggingRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateLoggingRequestLoggingDetails>> loggingDetails{};
  shared_ptr<string> loggingProject{};

  CreateLoggingRequest() {}

  explicit CreateLoggingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loggingDetails) {
      vector<boost::any> temp1;
      for(auto item1:*loggingDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["loggingDetails"] = boost::any(temp1);
    }
    if (loggingProject) {
      res["loggingProject"] = boost::any(*loggingProject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("loggingDetails") != m.end() && !m["loggingDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["loggingDetails"].type()) {
        vector<CreateLoggingRequestLoggingDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["loggingDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateLoggingRequestLoggingDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loggingDetails = make_shared<vector<CreateLoggingRequestLoggingDetails>>(expect1);
      }
    }
    if (m.find("loggingProject") != m.end() && !m["loggingProject"].empty()) {
      loggingProject = make_shared<string>(boost::any_cast<string>(m["loggingProject"]));
    }
  }


  virtual ~CreateLoggingRequest() = default;
};
class CreateLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateLoggingResponse() {}

  explicit CreateLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~CreateLoggingResponse() = default;
};
class CreateMachineGroupRequestGroupAttribute : public Darabonba::Model {
public:
  shared_ptr<string> externalName{};
  shared_ptr<string> groupTopic{};

  CreateMachineGroupRequestGroupAttribute() {}

  explicit CreateMachineGroupRequestGroupAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalName) {
      res["externalName"] = boost::any(*externalName);
    }
    if (groupTopic) {
      res["groupTopic"] = boost::any(*groupTopic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalName") != m.end() && !m["externalName"].empty()) {
      externalName = make_shared<string>(boost::any_cast<string>(m["externalName"]));
    }
    if (m.find("groupTopic") != m.end() && !m["groupTopic"].empty()) {
      groupTopic = make_shared<string>(boost::any_cast<string>(m["groupTopic"]));
    }
  }


  virtual ~CreateMachineGroupRequestGroupAttribute() = default;
};
class CreateMachineGroupRequest : public Darabonba::Model {
public:
  shared_ptr<CreateMachineGroupRequestGroupAttribute> groupAttribute{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<string> machineIdentifyType{};
  shared_ptr<vector<string>> machineList{};

  CreateMachineGroupRequest() {}

  explicit CreateMachineGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupAttribute) {
      res["groupAttribute"] = groupAttribute ? boost::any(groupAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["groupType"] = boost::any(*groupType);
    }
    if (machineIdentifyType) {
      res["machineIdentifyType"] = boost::any(*machineIdentifyType);
    }
    if (machineList) {
      res["machineList"] = boost::any(*machineList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupAttribute") != m.end() && !m["groupAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupAttribute"].type()) {
        CreateMachineGroupRequestGroupAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupAttribute"]));
        groupAttribute = make_shared<CreateMachineGroupRequestGroupAttribute>(model1);
      }
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("groupType") != m.end() && !m["groupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["groupType"]));
    }
    if (m.find("machineIdentifyType") != m.end() && !m["machineIdentifyType"].empty()) {
      machineIdentifyType = make_shared<string>(boost::any_cast<string>(m["machineIdentifyType"]));
    }
    if (m.find("machineList") != m.end() && !m["machineList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["machineList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["machineList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      machineList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateMachineGroupRequest() = default;
};
class CreateMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateMachineGroupResponse() {}

  explicit CreateMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~CreateMachineGroupResponse() = default;
};
class CreateOdpsShipperRequestTargetConfiguration : public Darabonba::Model {
public:
  shared_ptr<long> bufferInterval{};
  shared_ptr<bool> enable{};
  shared_ptr<vector<string>> fields{};
  shared_ptr<string> odpsEndpoint{};
  shared_ptr<string> odpsProject{};
  shared_ptr<string> odpsTable{};
  shared_ptr<vector<string>> partitionColumn{};
  shared_ptr<string> partitionTimeFormat{};

  CreateOdpsShipperRequestTargetConfiguration() {}

  explicit CreateOdpsShipperRequestTargetConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bufferInterval) {
      res["bufferInterval"] = boost::any(*bufferInterval);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (fields) {
      res["fields"] = boost::any(*fields);
    }
    if (odpsEndpoint) {
      res["odpsEndpoint"] = boost::any(*odpsEndpoint);
    }
    if (odpsProject) {
      res["odpsProject"] = boost::any(*odpsProject);
    }
    if (odpsTable) {
      res["odpsTable"] = boost::any(*odpsTable);
    }
    if (partitionColumn) {
      res["partitionColumn"] = boost::any(*partitionColumn);
    }
    if (partitionTimeFormat) {
      res["partitionTimeFormat"] = boost::any(*partitionTimeFormat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bufferInterval") != m.end() && !m["bufferInterval"].empty()) {
      bufferInterval = make_shared<long>(boost::any_cast<long>(m["bufferInterval"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("fields") != m.end() && !m["fields"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["fields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["fields"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fields = make_shared<vector<string>>(toVec1);
    }
    if (m.find("odpsEndpoint") != m.end() && !m["odpsEndpoint"].empty()) {
      odpsEndpoint = make_shared<string>(boost::any_cast<string>(m["odpsEndpoint"]));
    }
    if (m.find("odpsProject") != m.end() && !m["odpsProject"].empty()) {
      odpsProject = make_shared<string>(boost::any_cast<string>(m["odpsProject"]));
    }
    if (m.find("odpsTable") != m.end() && !m["odpsTable"].empty()) {
      odpsTable = make_shared<string>(boost::any_cast<string>(m["odpsTable"]));
    }
    if (m.find("partitionColumn") != m.end() && !m["partitionColumn"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["partitionColumn"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["partitionColumn"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      partitionColumn = make_shared<vector<string>>(toVec1);
    }
    if (m.find("partitionTimeFormat") != m.end() && !m["partitionTimeFormat"].empty()) {
      partitionTimeFormat = make_shared<string>(boost::any_cast<string>(m["partitionTimeFormat"]));
    }
  }


  virtual ~CreateOdpsShipperRequestTargetConfiguration() = default;
};
class CreateOdpsShipperRequest : public Darabonba::Model {
public:
  shared_ptr<string> shipperName{};
  shared_ptr<CreateOdpsShipperRequestTargetConfiguration> targetConfiguration{};
  shared_ptr<string> targetType{};

  CreateOdpsShipperRequest() {}

  explicit CreateOdpsShipperRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shipperName) {
      res["shipperName"] = boost::any(*shipperName);
    }
    if (targetConfiguration) {
      res["targetConfiguration"] = targetConfiguration ? boost::any(targetConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetType) {
      res["targetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("shipperName") != m.end() && !m["shipperName"].empty()) {
      shipperName = make_shared<string>(boost::any_cast<string>(m["shipperName"]));
    }
    if (m.find("targetConfiguration") != m.end() && !m["targetConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["targetConfiguration"].type()) {
        CreateOdpsShipperRequestTargetConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["targetConfiguration"]));
        targetConfiguration = make_shared<CreateOdpsShipperRequestTargetConfiguration>(model1);
      }
    }
    if (m.find("targetType") != m.end() && !m["targetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["targetType"]));
    }
  }


  virtual ~CreateOdpsShipperRequest() = default;
};
class CreateOdpsShipperResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateOdpsShipperResponse() {}

  explicit CreateOdpsShipperResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~CreateOdpsShipperResponse() = default;
};
class CreateOssExternalStoreRequestParameterColumns : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateOssExternalStoreRequestParameterColumns() {}

  explicit CreateOssExternalStoreRequestParameterColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateOssExternalStoreRequestParameterColumns() = default;
};
class CreateOssExternalStoreRequestParameter : public Darabonba::Model {
public:
  shared_ptr<string> accessid{};
  shared_ptr<string> accesskey{};
  shared_ptr<string> bucket{};
  shared_ptr<vector<CreateOssExternalStoreRequestParameterColumns>> columns{};
  shared_ptr<string> endpoint{};
  shared_ptr<vector<string>> objects{};

  CreateOssExternalStoreRequestParameter() {}

  explicit CreateOssExternalStoreRequestParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessid) {
      res["accessid"] = boost::any(*accessid);
    }
    if (accesskey) {
      res["accesskey"] = boost::any(*accesskey);
    }
    if (bucket) {
      res["bucket"] = boost::any(*bucket);
    }
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["columns"] = boost::any(temp1);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (objects) {
      res["objects"] = boost::any(*objects);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessid") != m.end() && !m["accessid"].empty()) {
      accessid = make_shared<string>(boost::any_cast<string>(m["accessid"]));
    }
    if (m.find("accesskey") != m.end() && !m["accesskey"].empty()) {
      accesskey = make_shared<string>(boost::any_cast<string>(m["accesskey"]));
    }
    if (m.find("bucket") != m.end() && !m["bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["bucket"]));
    }
    if (m.find("columns") != m.end() && !m["columns"].empty()) {
      if (typeid(vector<boost::any>) == m["columns"].type()) {
        vector<CreateOssExternalStoreRequestParameterColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateOssExternalStoreRequestParameterColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<CreateOssExternalStoreRequestParameterColumns>>(expect1);
      }
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("objects") != m.end() && !m["objects"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["objects"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["objects"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      objects = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateOssExternalStoreRequestParameter() = default;
};
class CreateOssExternalStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalStoreName{};
  shared_ptr<CreateOssExternalStoreRequestParameter> parameter{};
  shared_ptr<string> storeType{};

  CreateOssExternalStoreRequest() {}

  explicit CreateOssExternalStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalStoreName) {
      res["externalStoreName"] = boost::any(*externalStoreName);
    }
    if (parameter) {
      res["parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalStoreName") != m.end() && !m["externalStoreName"].empty()) {
      externalStoreName = make_shared<string>(boost::any_cast<string>(m["externalStoreName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameter"].type()) {
        CreateOssExternalStoreRequestParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameter"]));
        parameter = make_shared<CreateOssExternalStoreRequestParameter>(model1);
      }
    }
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
  }


  virtual ~CreateOssExternalStoreRequest() = default;
};
class CreateOssExternalStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateOssExternalStoreResponse() {}

  explicit CreateOssExternalStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~CreateOssExternalStoreResponse() = default;
};
class CreateOssShipperRequestTargetConfigurationStorage : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> detail{};
  shared_ptr<string> format{};

  CreateOssShipperRequestTargetConfigurationStorage() {}

  explicit CreateOssShipperRequestTargetConfigurationStorage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["detail"] = boost::any(*detail);
    }
    if (format) {
      res["format"] = boost::any(*format);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["detail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("format") != m.end() && !m["format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["format"]));
    }
  }


  virtual ~CreateOssShipperRequestTargetConfigurationStorage() = default;
};
class CreateOssShipperRequestTargetConfiguration : public Darabonba::Model {
public:
  shared_ptr<long> bufferInterval{};
  shared_ptr<long> bufferSize{};
  shared_ptr<string> compressType{};
  shared_ptr<bool> enable{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossPrefix{};
  shared_ptr<string> pathFormat{};
  shared_ptr<string> roleArn{};
  shared_ptr<CreateOssShipperRequestTargetConfigurationStorage> storage{};
  shared_ptr<string> timeZone{};

  CreateOssShipperRequestTargetConfiguration() {}

  explicit CreateOssShipperRequestTargetConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bufferInterval) {
      res["bufferInterval"] = boost::any(*bufferInterval);
    }
    if (bufferSize) {
      res["bufferSize"] = boost::any(*bufferSize);
    }
    if (compressType) {
      res["compressType"] = boost::any(*compressType);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (ossBucket) {
      res["ossBucket"] = boost::any(*ossBucket);
    }
    if (ossPrefix) {
      res["ossPrefix"] = boost::any(*ossPrefix);
    }
    if (pathFormat) {
      res["pathFormat"] = boost::any(*pathFormat);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (storage) {
      res["storage"] = storage ? boost::any(storage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bufferInterval") != m.end() && !m["bufferInterval"].empty()) {
      bufferInterval = make_shared<long>(boost::any_cast<long>(m["bufferInterval"]));
    }
    if (m.find("bufferSize") != m.end() && !m["bufferSize"].empty()) {
      bufferSize = make_shared<long>(boost::any_cast<long>(m["bufferSize"]));
    }
    if (m.find("compressType") != m.end() && !m["compressType"].empty()) {
      compressType = make_shared<string>(boost::any_cast<string>(m["compressType"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("ossBucket") != m.end() && !m["ossBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["ossBucket"]));
    }
    if (m.find("ossPrefix") != m.end() && !m["ossPrefix"].empty()) {
      ossPrefix = make_shared<string>(boost::any_cast<string>(m["ossPrefix"]));
    }
    if (m.find("pathFormat") != m.end() && !m["pathFormat"].empty()) {
      pathFormat = make_shared<string>(boost::any_cast<string>(m["pathFormat"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("storage") != m.end() && !m["storage"].empty()) {
      if (typeid(map<string, boost::any>) == m["storage"].type()) {
        CreateOssShipperRequestTargetConfigurationStorage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["storage"]));
        storage = make_shared<CreateOssShipperRequestTargetConfigurationStorage>(model1);
      }
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
  }


  virtual ~CreateOssShipperRequestTargetConfiguration() = default;
};
class CreateOssShipperRequest : public Darabonba::Model {
public:
  shared_ptr<string> shipperName{};
  shared_ptr<CreateOssShipperRequestTargetConfiguration> targetConfiguration{};
  shared_ptr<string> targetType{};

  CreateOssShipperRequest() {}

  explicit CreateOssShipperRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shipperName) {
      res["shipperName"] = boost::any(*shipperName);
    }
    if (targetConfiguration) {
      res["targetConfiguration"] = targetConfiguration ? boost::any(targetConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetType) {
      res["targetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("shipperName") != m.end() && !m["shipperName"].empty()) {
      shipperName = make_shared<string>(boost::any_cast<string>(m["shipperName"]));
    }
    if (m.find("targetConfiguration") != m.end() && !m["targetConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["targetConfiguration"].type()) {
        CreateOssShipperRequestTargetConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["targetConfiguration"]));
        targetConfiguration = make_shared<CreateOssShipperRequestTargetConfiguration>(model1);
      }
    }
    if (m.find("targetType") != m.end() && !m["targetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["targetType"]));
    }
  }


  virtual ~CreateOssShipperRequest() = default;
};
class CreateOssShipperResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateOssShipperResponse() {}

  explicit CreateOssShipperResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~CreateOssShipperResponse() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> projectName{};
  shared_ptr<string> resourceGroupId{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateProjectResponse() {}

  explicit CreateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~CreateProjectResponse() = default;
};
class CreateRdsExternalStoreRequestParameter : public Darabonba::Model {
public:
  shared_ptr<string> db{};
  shared_ptr<string> host{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> password{};
  shared_ptr<string> port{};
  shared_ptr<string> region{};
  shared_ptr<string> table{};
  shared_ptr<string> username{};
  shared_ptr<string> vpcId{};

  CreateRdsExternalStoreRequestParameter() {}

  explicit CreateRdsExternalStoreRequestParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (db) {
      res["db"] = boost::any(*db);
    }
    if (host) {
      res["host"] = boost::any(*host);
    }
    if (instanceId) {
      res["instance-id"] = boost::any(*instanceId);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (table) {
      res["table"] = boost::any(*table);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (vpcId) {
      res["vpc-id"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("db") != m.end() && !m["db"].empty()) {
      db = make_shared<string>(boost::any_cast<string>(m["db"]));
    }
    if (m.find("host") != m.end() && !m["host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["host"]));
    }
    if (m.find("instance-id") != m.end() && !m["instance-id"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instance-id"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["port"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["table"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("vpc-id") != m.end() && !m["vpc-id"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpc-id"]));
    }
  }


  virtual ~CreateRdsExternalStoreRequestParameter() = default;
};
class CreateRdsExternalStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalStoreName{};
  shared_ptr<CreateRdsExternalStoreRequestParameter> parameter{};
  shared_ptr<string> storeType{};

  CreateRdsExternalStoreRequest() {}

  explicit CreateRdsExternalStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalStoreName) {
      res["externalStoreName"] = boost::any(*externalStoreName);
    }
    if (parameter) {
      res["parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalStoreName") != m.end() && !m["externalStoreName"].empty()) {
      externalStoreName = make_shared<string>(boost::any_cast<string>(m["externalStoreName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameter"].type()) {
        CreateRdsExternalStoreRequestParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameter"]));
        parameter = make_shared<CreateRdsExternalStoreRequestParameter>(model1);
      }
    }
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
  }


  virtual ~CreateRdsExternalStoreRequest() = default;
};
class CreateRdsExternalStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateRdsExternalStoreResponse() {}

  explicit CreateRdsExternalStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~CreateRdsExternalStoreResponse() = default;
};
class CreateSavedSearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> logstore{};
  shared_ptr<string> savedsearchName{};
  shared_ptr<string> searchQuery{};
  shared_ptr<string> topic{};

  CreateSavedSearchRequest() {}

  explicit CreateSavedSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (savedsearchName) {
      res["savedsearchName"] = boost::any(*savedsearchName);
    }
    if (searchQuery) {
      res["searchQuery"] = boost::any(*searchQuery);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("savedsearchName") != m.end() && !m["savedsearchName"].empty()) {
      savedsearchName = make_shared<string>(boost::any_cast<string>(m["savedsearchName"]));
    }
    if (m.find("searchQuery") != m.end() && !m["searchQuery"].empty()) {
      searchQuery = make_shared<string>(boost::any_cast<string>(m["searchQuery"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
  }


  virtual ~CreateSavedSearchRequest() = default;
};
class CreateSavedSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  CreateSavedSearchResponse() {}

  explicit CreateSavedSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~CreateSavedSearchResponse() = default;
};
class DeleteConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteConfigResponse() {}

  explicit DeleteConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DeleteConfigResponse() = default;
};
class DeleteConsumerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteConsumerGroupResponse() {}

  explicit DeleteConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DeleteConsumerGroupResponse() = default;
};
class DeleteDashboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteDashboardResponse() {}

  explicit DeleteDashboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DeleteDashboardResponse() = default;
};
class DeleteDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteDomainResponse() {}

  explicit DeleteDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DeleteDomainResponse() = default;
};
class DeleteExternalStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteExternalStoreResponse() {}

  explicit DeleteExternalStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DeleteExternalStoreResponse() = default;
};
class DeleteIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteIndexResponse() {}

  explicit DeleteIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DeleteIndexResponse() = default;
};
class DeleteLogStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteLogStoreResponse() {}

  explicit DeleteLogStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DeleteLogStoreResponse() = default;
};
class DeleteLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteLoggingResponse() {}

  explicit DeleteLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DeleteLoggingResponse() = default;
};
class DeleteMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteMachineGroupResponse() {}

  explicit DeleteMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DeleteMachineGroupResponse() = default;
};
class DeleteProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteProjectResponse() {}

  explicit DeleteProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DeleteProjectResponse() = default;
};
class DeleteProjectPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteProjectPolicyResponse() {}

  explicit DeleteProjectPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DeleteProjectPolicyResponse() = default;
};
class DeleteSavedSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteSavedSearchResponse() {}

  explicit DeleteSavedSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DeleteSavedSearchResponse() = default;
};
class DeleteShipperResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteShipperResponse() {}

  explicit DeleteShipperResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DeleteShipperResponse() = default;
};
class GetAppliedConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> configs{};
  shared_ptr<long> count{};

  GetAppliedConfigsResponseBody() {}

  explicit GetAppliedConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      res["configs"] = boost::any(*configs);
    }
    if (count) {
      res["count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configs") != m.end() && !m["configs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["configs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["configs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      configs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
  }


  virtual ~GetAppliedConfigsResponseBody() = default;
};
class GetAppliedConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppliedConfigsResponseBody> body{};

  GetAppliedConfigsResponse() {}

  explicit GetAppliedConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppliedConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppliedConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppliedConfigsResponse() = default;
};
class GetAppliedMachineGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<string>> machinegroups{};

  GetAppliedMachineGroupsResponseBody() {}

  explicit GetAppliedMachineGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (machinegroups) {
      res["machinegroups"] = boost::any(*machinegroups);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("machinegroups") != m.end() && !m["machinegroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["machinegroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["machinegroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      machinegroups = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetAppliedMachineGroupsResponseBody() = default;
};
class GetAppliedMachineGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppliedMachineGroupsResponseBody> body{};

  GetAppliedMachineGroupsResponse() {}

  explicit GetAppliedMachineGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppliedMachineGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppliedMachineGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppliedMachineGroupsResponse() = default;
};
class GetCheckPointRequest : public Darabonba::Model {
public:
  shared_ptr<long> shard{};

  GetCheckPointRequest() {}

  explicit GetCheckPointRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shard) {
      res["shard"] = boost::any(*shard);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("shard") != m.end() && !m["shard"].empty()) {
      shard = make_shared<long>(boost::any_cast<long>(m["shard"]));
    }
  }


  virtual ~GetCheckPointRequest() = default;
};
class GetCheckPointResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> shard{};
  shared_ptr<string> checkpoint{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> consumer{};

  GetCheckPointResponseBody() {}

  explicit GetCheckPointResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shard) {
      res["shard"] = boost::any(*shard);
    }
    if (checkpoint) {
      res["checkpoint"] = boost::any(*checkpoint);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (consumer) {
      res["consumer"] = boost::any(*consumer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("shard") != m.end() && !m["shard"].empty()) {
      shard = make_shared<long>(boost::any_cast<long>(m["shard"]));
    }
    if (m.find("checkpoint") != m.end() && !m["checkpoint"].empty()) {
      checkpoint = make_shared<string>(boost::any_cast<string>(m["checkpoint"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("consumer") != m.end() && !m["consumer"].empty()) {
      consumer = make_shared<string>(boost::any_cast<string>(m["consumer"]));
    }
  }


  virtual ~GetCheckPointResponseBody() = default;
};
class GetCheckPointResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<GetCheckPointResponseBody>> body{};

  GetCheckPointResponse() {}

  explicit GetCheckPointResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<GetCheckPointResponseBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCheckPointResponseBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<GetCheckPointResponseBody>>(expect1);
      }
    }
  }


  virtual ~GetCheckPointResponse() = default;
};
class GetConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LogtailConfig> body{};

  GetConfigResponse() {}

  explicit GetConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LogtailConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogtailConfig>(model1);
      }
    }
  }


  virtual ~GetConfigResponse() = default;
};
class GetContextLogsRequest : public Darabonba::Model {
public:
  shared_ptr<long> backLines{};
  shared_ptr<long> forwardLines{};
  shared_ptr<string> packId{};
  shared_ptr<string> packMeta{};
  shared_ptr<string> type{};

  GetContextLogsRequest() {}

  explicit GetContextLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backLines) {
      res["back_lines"] = boost::any(*backLines);
    }
    if (forwardLines) {
      res["forward_lines"] = boost::any(*forwardLines);
    }
    if (packId) {
      res["pack_id"] = boost::any(*packId);
    }
    if (packMeta) {
      res["pack_meta"] = boost::any(*packMeta);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("back_lines") != m.end() && !m["back_lines"].empty()) {
      backLines = make_shared<long>(boost::any_cast<long>(m["back_lines"]));
    }
    if (m.find("forward_lines") != m.end() && !m["forward_lines"].empty()) {
      forwardLines = make_shared<long>(boost::any_cast<long>(m["forward_lines"]));
    }
    if (m.find("pack_id") != m.end() && !m["pack_id"].empty()) {
      packId = make_shared<string>(boost::any_cast<string>(m["pack_id"]));
    }
    if (m.find("pack_meta") != m.end() && !m["pack_meta"].empty()) {
      packMeta = make_shared<string>(boost::any_cast<string>(m["pack_meta"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetContextLogsRequest() = default;
};
class GetContextLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> backLines{};
  shared_ptr<long> forwardLines{};
  shared_ptr<vector<map<string, boost::any>>> logs{};
  shared_ptr<string> progress{};
  shared_ptr<long> totalLines{};

  GetContextLogsResponseBody() {}

  explicit GetContextLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backLines) {
      res["back_lines"] = boost::any(*backLines);
    }
    if (forwardLines) {
      res["forward_lines"] = boost::any(*forwardLines);
    }
    if (logs) {
      res["logs"] = boost::any(*logs);
    }
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    if (totalLines) {
      res["total_lines"] = boost::any(*totalLines);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("back_lines") != m.end() && !m["back_lines"].empty()) {
      backLines = make_shared<long>(boost::any_cast<long>(m["back_lines"]));
    }
    if (m.find("forward_lines") != m.end() && !m["forward_lines"].empty()) {
      forwardLines = make_shared<long>(boost::any_cast<long>(m["forward_lines"]));
    }
    if (m.find("logs") != m.end() && !m["logs"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["logs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["logs"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      logs = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["progress"]));
    }
    if (m.find("total_lines") != m.end() && !m["total_lines"].empty()) {
      totalLines = make_shared<long>(boost::any_cast<long>(m["total_lines"]));
    }
  }


  virtual ~GetContextLogsResponseBody() = default;
};
class GetContextLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetContextLogsResponseBody> body{};

  GetContextLogsResponse() {}

  explicit GetContextLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetContextLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetContextLogsResponseBody>(model1);
      }
    }
  }


  virtual ~GetContextLogsResponse() = default;
};
class GetCursorRequest : public Darabonba::Model {
public:
  shared_ptr<string> from{};

  GetCursorRequest() {}

  explicit GetCursorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["from"] = boost::any(*from);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["from"]));
    }
  }


  virtual ~GetCursorRequest() = default;
};
class GetCursorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cursor{};

  GetCursorResponseBody() {}

  explicit GetCursorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cursor) {
      res["cursor"] = boost::any(*cursor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cursor") != m.end() && !m["cursor"].empty()) {
      cursor = make_shared<string>(boost::any_cast<string>(m["cursor"]));
    }
  }


  virtual ~GetCursorResponseBody() = default;
};
class GetCursorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCursorResponseBody> body{};

  GetCursorResponse() {}

  explicit GetCursorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCursorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCursorResponseBody>(model1);
      }
    }
  }


  virtual ~GetCursorResponse() = default;
};
class GetCursorTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> cursor{};

  GetCursorTimeRequest() {}

  explicit GetCursorTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cursor) {
      res["cursor"] = boost::any(*cursor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cursor") != m.end() && !m["cursor"].empty()) {
      cursor = make_shared<string>(boost::any_cast<string>(m["cursor"]));
    }
  }


  virtual ~GetCursorTimeRequest() = default;
};
class GetCursorTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cursorTime{};

  GetCursorTimeResponseBody() {}

  explicit GetCursorTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cursorTime) {
      res["cursor_time"] = boost::any(*cursorTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cursor_time") != m.end() && !m["cursor_time"].empty()) {
      cursorTime = make_shared<string>(boost::any_cast<string>(m["cursor_time"]));
    }
  }


  virtual ~GetCursorTimeResponseBody() = default;
};
class GetCursorTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCursorTimeResponseBody> body{};

  GetCursorTimeResponse() {}

  explicit GetCursorTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCursorTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCursorTimeResponseBody>(model1);
      }
    }
  }


  virtual ~GetCursorTimeResponse() = default;
};
class GetDashboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Dashboard> body{};

  GetDashboardResponse() {}

  explicit GetDashboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Dashboard model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Dashboard>(model1);
      }
    }
  }


  virtual ~GetDashboardResponse() = default;
};
class GetExternalStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExternalStore> body{};

  GetExternalStoreResponse() {}

  explicit GetExternalStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExternalStore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExternalStore>(model1);
      }
    }
  }


  virtual ~GetExternalStoreResponse() = default;
};
class GetHistogramsRequest : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<string> query{};
  shared_ptr<long> to{};
  shared_ptr<string> topic{};

  GetHistogramsRequest() {}

  explicit GetHistogramsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
  }


  virtual ~GetHistogramsRequest() = default;
};
class GetHistogramsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<long> to{};
  shared_ptr<long> count{};
  shared_ptr<string> progress{};

  GetHistogramsResponseBody() {}

  explicit GetHistogramsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["progress"]));
    }
  }


  virtual ~GetHistogramsResponseBody() = default;
};
class GetHistogramsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<GetHistogramsResponseBody>> body{};

  GetHistogramsResponse() {}

  explicit GetHistogramsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<GetHistogramsResponseBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHistogramsResponseBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<GetHistogramsResponseBody>>(expect1);
      }
    }
  }


  virtual ~GetHistogramsResponse() = default;
};
class GetIndexResponseBodyLine : public Darabonba::Model {
public:
  shared_ptr<bool> caseSensitive{};
  shared_ptr<bool> chn{};
  shared_ptr<vector<string>> excludeKeys{};
  shared_ptr<vector<string>> includeKeys{};
  shared_ptr<vector<string>> token{};

  GetIndexResponseBodyLine() {}

  explicit GetIndexResponseBodyLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseSensitive) {
      res["caseSensitive"] = boost::any(*caseSensitive);
    }
    if (chn) {
      res["chn"] = boost::any(*chn);
    }
    if (excludeKeys) {
      res["exclude_keys"] = boost::any(*excludeKeys);
    }
    if (includeKeys) {
      res["include_keys"] = boost::any(*includeKeys);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caseSensitive") != m.end() && !m["caseSensitive"].empty()) {
      caseSensitive = make_shared<bool>(boost::any_cast<bool>(m["caseSensitive"]));
    }
    if (m.find("chn") != m.end() && !m["chn"].empty()) {
      chn = make_shared<bool>(boost::any_cast<bool>(m["chn"]));
    }
    if (m.find("exclude_keys") != m.end() && !m["exclude_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["exclude_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["exclude_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("include_keys") != m.end() && !m["include_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["include_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["include_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      includeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["token"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["token"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      token = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetIndexResponseBodyLine() = default;
};
class GetIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> indexMode{};
  shared_ptr<map<string, KeysValue>> keys{};
  shared_ptr<long> lastModifyTime{};
  shared_ptr<GetIndexResponseBodyLine> line{};
  shared_ptr<bool> logReduce{};
  shared_ptr<vector<string>> logReduceBlackList{};
  shared_ptr<vector<string>> logReduceWhiteList{};
  shared_ptr<long> maxTextLen{};
  shared_ptr<string> storage{};
  shared_ptr<long> ttl{};

  GetIndexResponseBody() {}

  explicit GetIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexMode) {
      res["index_mode"] = boost::any(*indexMode);
    }
    if (keys) {
      map<string, boost::any> temp1;
      for(auto item1:*keys){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["keys"] = boost::any(temp1);
    }
    if (lastModifyTime) {
      res["lastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (line) {
      res["line"] = line ? boost::any(line->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logReduce) {
      res["log_reduce"] = boost::any(*logReduce);
    }
    if (logReduceBlackList) {
      res["log_reduce_black_list"] = boost::any(*logReduceBlackList);
    }
    if (logReduceWhiteList) {
      res["log_reduce_white_list"] = boost::any(*logReduceWhiteList);
    }
    if (maxTextLen) {
      res["max_text_len"] = boost::any(*maxTextLen);
    }
    if (storage) {
      res["storage"] = boost::any(*storage);
    }
    if (ttl) {
      res["ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("index_mode") != m.end() && !m["index_mode"].empty()) {
      indexMode = make_shared<string>(boost::any_cast<string>(m["index_mode"]));
    }
    if (m.find("keys") != m.end() && !m["keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["keys"].type()) {
        map<string, KeysValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["keys"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            KeysValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        keys = make_shared<map<string, KeysValue>>(expect1);
      }
    }
    if (m.find("lastModifyTime") != m.end() && !m["lastModifyTime"].empty()) {
      lastModifyTime = make_shared<long>(boost::any_cast<long>(m["lastModifyTime"]));
    }
    if (m.find("line") != m.end() && !m["line"].empty()) {
      if (typeid(map<string, boost::any>) == m["line"].type()) {
        GetIndexResponseBodyLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["line"]));
        line = make_shared<GetIndexResponseBodyLine>(model1);
      }
    }
    if (m.find("log_reduce") != m.end() && !m["log_reduce"].empty()) {
      logReduce = make_shared<bool>(boost::any_cast<bool>(m["log_reduce"]));
    }
    if (m.find("log_reduce_black_list") != m.end() && !m["log_reduce_black_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_black_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_black_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceBlackList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("log_reduce_white_list") != m.end() && !m["log_reduce_white_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_white_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_white_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("max_text_len") != m.end() && !m["max_text_len"].empty()) {
      maxTextLen = make_shared<long>(boost::any_cast<long>(m["max_text_len"]));
    }
    if (m.find("storage") != m.end() && !m["storage"].empty()) {
      storage = make_shared<string>(boost::any_cast<string>(m["storage"]));
    }
    if (m.find("ttl") != m.end() && !m["ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["ttl"]));
    }
  }


  virtual ~GetIndexResponseBody() = default;
};
class GetIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetIndexResponseBody> body{};

  GetIndexResponse() {}

  explicit GetIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIndexResponseBody>(model1);
      }
    }
  }


  virtual ~GetIndexResponse() = default;
};
class GetLogStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Logstore> body{};

  GetLogStoreResponse() {}

  explicit GetLogStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Logstore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Logstore>(model1);
      }
    }
  }


  virtual ~GetLogStoreResponse() = default;
};
class GetLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Logging> body{};

  GetLoggingResponse() {}

  explicit GetLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Logging model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Logging>(model1);
      }
    }
  }


  virtual ~GetLoggingResponse() = default;
};
class GetLogsRequest : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<long> line{};
  shared_ptr<long> offset{};
  shared_ptr<bool> powerSql{};
  shared_ptr<string> query{};
  shared_ptr<bool> reverse{};
  shared_ptr<long> to{};
  shared_ptr<string> topic{};

  GetLogsRequest() {}

  explicit GetLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (line) {
      res["line"] = boost::any(*line);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (powerSql) {
      res["powerSql"] = boost::any(*powerSql);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (reverse) {
      res["reverse"] = boost::any(*reverse);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("line") != m.end() && !m["line"].empty()) {
      line = make_shared<long>(boost::any_cast<long>(m["line"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("powerSql") != m.end() && !m["powerSql"].empty()) {
      powerSql = make_shared<bool>(boost::any_cast<bool>(m["powerSql"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("reverse") != m.end() && !m["reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["reverse"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
  }


  virtual ~GetLogsRequest() = default;
};
class GetLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<map<string, boost::any>>> body{};

  GetLogsResponse() {}

  explicit GetLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["body"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      body = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~GetLogsResponse() = default;
};
class GetLogsV2Headers : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> acceptEncoding{};

  GetLogsV2Headers() {}

  explicit GetLogsV2Headers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (acceptEncoding) {
      res["Accept-Encoding"] = boost::any(*acceptEncoding);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Accept-Encoding") != m.end() && !m["Accept-Encoding"].empty()) {
      acceptEncoding = make_shared<string>(boost::any_cast<string>(m["Accept-Encoding"]));
    }
  }


  virtual ~GetLogsV2Headers() = default;
};
class GetLogsV2Request : public Darabonba::Model {
public:
  shared_ptr<bool> forward{};
  shared_ptr<long> from{};
  shared_ptr<long> line{};
  shared_ptr<long> offset{};
  shared_ptr<bool> powerSql{};
  shared_ptr<string> query{};
  shared_ptr<bool> reverse{};
  shared_ptr<string> session{};
  shared_ptr<long> shard{};
  shared_ptr<long> to{};
  shared_ptr<string> topic{};

  GetLogsV2Request() {}

  explicit GetLogsV2Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forward) {
      res["forward"] = boost::any(*forward);
    }
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (line) {
      res["line"] = boost::any(*line);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (powerSql) {
      res["powerSql"] = boost::any(*powerSql);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (reverse) {
      res["reverse"] = boost::any(*reverse);
    }
    if (session) {
      res["session"] = boost::any(*session);
    }
    if (shard) {
      res["shard"] = boost::any(*shard);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("forward") != m.end() && !m["forward"].empty()) {
      forward = make_shared<bool>(boost::any_cast<bool>(m["forward"]));
    }
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("line") != m.end() && !m["line"].empty()) {
      line = make_shared<long>(boost::any_cast<long>(m["line"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("powerSql") != m.end() && !m["powerSql"].empty()) {
      powerSql = make_shared<bool>(boost::any_cast<bool>(m["powerSql"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("reverse") != m.end() && !m["reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["reverse"]));
    }
    if (m.find("session") != m.end() && !m["session"].empty()) {
      session = make_shared<string>(boost::any_cast<string>(m["session"]));
    }
    if (m.find("shard") != m.end() && !m["shard"].empty()) {
      shard = make_shared<long>(boost::any_cast<long>(m["shard"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
  }


  virtual ~GetLogsV2Request() = default;
};
class GetLogsV2ResponseBodyMeta : public Darabonba::Model {
public:
  shared_ptr<string> aggQuery{};
  shared_ptr<long> count{};
  shared_ptr<long> elapsedMillisecond{};
  shared_ptr<bool> hasSQL{};
  shared_ptr<bool> isAccurate{};
  shared_ptr<vector<string>> keys{};
  shared_ptr<long> processedBytes{};
  shared_ptr<long> processedRows{};
  shared_ptr<string> progress{};
  shared_ptr<string> telementryType{};
  shared_ptr<vector<map<string, boost::any>>> terms{};
  shared_ptr<string> whereQuery{};

  GetLogsV2ResponseBodyMeta() {}

  explicit GetLogsV2ResponseBodyMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggQuery) {
      res["aggQuery"] = boost::any(*aggQuery);
    }
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (elapsedMillisecond) {
      res["elapsedMillisecond"] = boost::any(*elapsedMillisecond);
    }
    if (hasSQL) {
      res["hasSQL"] = boost::any(*hasSQL);
    }
    if (isAccurate) {
      res["isAccurate"] = boost::any(*isAccurate);
    }
    if (keys) {
      res["keys"] = boost::any(*keys);
    }
    if (processedBytes) {
      res["processedBytes"] = boost::any(*processedBytes);
    }
    if (processedRows) {
      res["processedRows"] = boost::any(*processedRows);
    }
    if (progress) {
      res["progress"] = boost::any(*progress);
    }
    if (telementryType) {
      res["telementryType"] = boost::any(*telementryType);
    }
    if (terms) {
      res["terms"] = boost::any(*terms);
    }
    if (whereQuery) {
      res["whereQuery"] = boost::any(*whereQuery);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aggQuery") != m.end() && !m["aggQuery"].empty()) {
      aggQuery = make_shared<string>(boost::any_cast<string>(m["aggQuery"]));
    }
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("elapsedMillisecond") != m.end() && !m["elapsedMillisecond"].empty()) {
      elapsedMillisecond = make_shared<long>(boost::any_cast<long>(m["elapsedMillisecond"]));
    }
    if (m.find("hasSQL") != m.end() && !m["hasSQL"].empty()) {
      hasSQL = make_shared<bool>(boost::any_cast<bool>(m["hasSQL"]));
    }
    if (m.find("isAccurate") != m.end() && !m["isAccurate"].empty()) {
      isAccurate = make_shared<bool>(boost::any_cast<bool>(m["isAccurate"]));
    }
    if (m.find("keys") != m.end() && !m["keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("processedBytes") != m.end() && !m["processedBytes"].empty()) {
      processedBytes = make_shared<long>(boost::any_cast<long>(m["processedBytes"]));
    }
    if (m.find("processedRows") != m.end() && !m["processedRows"].empty()) {
      processedRows = make_shared<long>(boost::any_cast<long>(m["processedRows"]));
    }
    if (m.find("progress") != m.end() && !m["progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["progress"]));
    }
    if (m.find("telementryType") != m.end() && !m["telementryType"].empty()) {
      telementryType = make_shared<string>(boost::any_cast<string>(m["telementryType"]));
    }
    if (m.find("terms") != m.end() && !m["terms"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["terms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["terms"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      terms = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("whereQuery") != m.end() && !m["whereQuery"].empty()) {
      whereQuery = make_shared<string>(boost::any_cast<string>(m["whereQuery"]));
    }
  }


  virtual ~GetLogsV2ResponseBodyMeta() = default;
};
class GetLogsV2ResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, string>>> data{};
  shared_ptr<GetLogsV2ResponseBodyMeta> meta{};

  GetLogsV2ResponseBody() {}

  explicit GetLogsV2ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (meta) {
      res["meta"] = meta ? boost::any(meta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["data"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("meta") != m.end() && !m["meta"].empty()) {
      if (typeid(map<string, boost::any>) == m["meta"].type()) {
        GetLogsV2ResponseBodyMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["meta"]));
        meta = make_shared<GetLogsV2ResponseBodyMeta>(model1);
      }
    }
  }


  virtual ~GetLogsV2ResponseBody() = default;
};
class GetLogsV2Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLogsV2ResponseBody> body{};

  GetLogsV2Response() {}

  explicit GetLogsV2Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLogsV2ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLogsV2ResponseBody>(model1);
      }
    }
  }


  virtual ~GetLogsV2Response() = default;
};
class GetMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MachineGroup> body{};

  GetMachineGroupResponse() {}

  explicit GetMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MachineGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MachineGroup>(model1);
      }
    }
  }


  virtual ~GetMachineGroupResponse() = default;
};
class GetProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Project> body{};

  GetProjectResponse() {}

  explicit GetProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Project model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Project>(model1);
      }
    }
  }


  virtual ~GetProjectResponse() = default;
};
class GetProjectLogsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> powerSql{};
  shared_ptr<string> query{};

  GetProjectLogsRequest() {}

  explicit GetProjectLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (powerSql) {
      res["powerSql"] = boost::any(*powerSql);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("powerSql") != m.end() && !m["powerSql"].empty()) {
      powerSql = make_shared<bool>(boost::any_cast<bool>(m["powerSql"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
  }


  virtual ~GetProjectLogsRequest() = default;
};
class GetProjectLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<map<string, string>>> body{};

  GetProjectLogsResponse() {}

  explicit GetProjectLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["body"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      body = make_shared<vector<map<string, string>>>(toVec1);
    }
  }


  virtual ~GetProjectLogsResponse() = default;
};
class GetProjectPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> body{};

  GetProjectPolicyResponse() {}

  explicit GetProjectPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~GetProjectPolicyResponse() = default;
};
class GetSavedSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SavedSearch> body{};

  GetSavedSearchResponse() {}

  explicit GetSavedSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SavedSearch model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SavedSearch>(model1);
      }
    }
  }


  virtual ~GetSavedSearchResponse() = default;
};
class GetShipperStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};
  shared_ptr<string> status{};
  shared_ptr<long> to{};

  GetShipperStatusRequest() {}

  explicit GetShipperStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["from"] = boost::any(*from);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (to) {
      res["to"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("from") != m.end() && !m["from"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["from"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("to") != m.end() && !m["to"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["to"]));
    }
  }


  virtual ~GetShipperStatusRequest() = default;
};
class GetShipperStatusResponseBodyStatistics : public Darabonba::Model {
public:
  shared_ptr<long> fail{};
  shared_ptr<long> running{};
  shared_ptr<long> success{};

  GetShipperStatusResponseBodyStatistics() {}

  explicit GetShipperStatusResponseBodyStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fail) {
      res["fail"] = boost::any(*fail);
    }
    if (running) {
      res["running"] = boost::any(*running);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fail") != m.end() && !m["fail"].empty()) {
      fail = make_shared<long>(boost::any_cast<long>(m["fail"]));
    }
    if (m.find("running") != m.end() && !m["running"].empty()) {
      running = make_shared<long>(boost::any_cast<long>(m["running"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<long>(boost::any_cast<long>(m["success"]));
    }
  }


  virtual ~GetShipperStatusResponseBodyStatistics() = default;
};
class GetShipperStatusResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> taskCode{};
  shared_ptr<long> taskCreateTime{};
  shared_ptr<long> taskDataLines{};
  shared_ptr<long> taskFinishTime{};
  shared_ptr<long> taskLastDataReceiveTime{};
  shared_ptr<string> taskMessage{};
  shared_ptr<string> taskStatus{};

  GetShipperStatusResponseBodyTasks() {}

  explicit GetShipperStatusResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (taskCode) {
      res["taskCode"] = boost::any(*taskCode);
    }
    if (taskCreateTime) {
      res["taskCreateTime"] = boost::any(*taskCreateTime);
    }
    if (taskDataLines) {
      res["taskDataLines"] = boost::any(*taskDataLines);
    }
    if (taskFinishTime) {
      res["taskFinishTime"] = boost::any(*taskFinishTime);
    }
    if (taskLastDataReceiveTime) {
      res["taskLastDataReceiveTime"] = boost::any(*taskLastDataReceiveTime);
    }
    if (taskMessage) {
      res["taskMessage"] = boost::any(*taskMessage);
    }
    if (taskStatus) {
      res["taskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("taskCode") != m.end() && !m["taskCode"].empty()) {
      taskCode = make_shared<string>(boost::any_cast<string>(m["taskCode"]));
    }
    if (m.find("taskCreateTime") != m.end() && !m["taskCreateTime"].empty()) {
      taskCreateTime = make_shared<long>(boost::any_cast<long>(m["taskCreateTime"]));
    }
    if (m.find("taskDataLines") != m.end() && !m["taskDataLines"].empty()) {
      taskDataLines = make_shared<long>(boost::any_cast<long>(m["taskDataLines"]));
    }
    if (m.find("taskFinishTime") != m.end() && !m["taskFinishTime"].empty()) {
      taskFinishTime = make_shared<long>(boost::any_cast<long>(m["taskFinishTime"]));
    }
    if (m.find("taskLastDataReceiveTime") != m.end() && !m["taskLastDataReceiveTime"].empty()) {
      taskLastDataReceiveTime = make_shared<long>(boost::any_cast<long>(m["taskLastDataReceiveTime"]));
    }
    if (m.find("taskMessage") != m.end() && !m["taskMessage"].empty()) {
      taskMessage = make_shared<string>(boost::any_cast<string>(m["taskMessage"]));
    }
    if (m.find("taskStatus") != m.end() && !m["taskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["taskStatus"]));
    }
  }


  virtual ~GetShipperStatusResponseBodyTasks() = default;
};
class GetShipperStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<GetShipperStatusResponseBodyStatistics> statistics{};
  shared_ptr<GetShipperStatusResponseBodyTasks> tasks{};
  shared_ptr<long> total{};

  GetShipperStatusResponseBody() {}

  explicit GetShipperStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (statistics) {
      res["statistics"] = statistics ? boost::any(statistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tasks) {
      res["tasks"] = tasks ? boost::any(tasks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("statistics") != m.end() && !m["statistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["statistics"].type()) {
        GetShipperStatusResponseBodyStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["statistics"]));
        statistics = make_shared<GetShipperStatusResponseBodyStatistics>(model1);
      }
    }
    if (m.find("tasks") != m.end() && !m["tasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["tasks"].type()) {
        GetShipperStatusResponseBodyTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tasks"]));
        tasks = make_shared<GetShipperStatusResponseBodyTasks>(model1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~GetShipperStatusResponseBody() = default;
};
class GetShipperStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetShipperStatusResponseBody> body{};

  GetShipperStatusResponse() {}

  explicit GetShipperStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetShipperStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetShipperStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetShipperStatusResponse() = default;
};
class ListConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> configName{};
  shared_ptr<string> logstoreName{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListConfigRequest() {}

  explicit ListConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configName) {
      res["configName"] = boost::any(*configName);
    }
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configName") != m.end() && !m["configName"].empty()) {
      configName = make_shared<string>(boost::any_cast<string>(m["configName"]));
    }
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListConfigRequest() = default;
};
class ListConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<LogtailConfig>> configs{};
  shared_ptr<long> count{};
  shared_ptr<long> total{};

  ListConfigResponseBody() {}

  explicit ListConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      vector<boost::any> temp1;
      for(auto item1:*configs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["configs"] = boost::any(temp1);
    }
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configs") != m.end() && !m["configs"].empty()) {
      if (typeid(vector<boost::any>) == m["configs"].type()) {
        vector<LogtailConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            LogtailConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<LogtailConfig>>(expect1);
      }
    }
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListConfigResponseBody() = default;
};
class ListConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConfigResponseBody> body{};

  ListConfigResponse() {}

  explicit ListConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ListConfigResponse() = default;
};
class ListConsumerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<ConsumerGroup>> body{};

  ListConsumerGroupResponse() {}

  explicit ListConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<ConsumerGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConsumerGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<ConsumerGroup>>(expect1);
      }
    }
  }


  virtual ~ListConsumerGroupResponse() = default;
};
class ListDashboardRequest : public Darabonba::Model {
public:
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListDashboardRequest() {}

  explicit ListDashboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListDashboardRequest() = default;
};
class ListDashboardResponseBodyDashboardItems : public Darabonba::Model {
public:
  shared_ptr<string> dashboardName{};
  shared_ptr<string> displayName{};

  ListDashboardResponseBodyDashboardItems() {}

  explicit ListDashboardResponseBodyDashboardItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dashboardName) {
      res["dashboardName"] = boost::any(*dashboardName);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dashboardName") != m.end() && !m["dashboardName"].empty()) {
      dashboardName = make_shared<string>(boost::any_cast<string>(m["dashboardName"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
  }


  virtual ~ListDashboardResponseBodyDashboardItems() = default;
};
class ListDashboardResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDashboardResponseBodyDashboardItems>> dashboardItems{};
  shared_ptr<vector<string>> dashboards{};

  ListDashboardResponseBody() {}

  explicit ListDashboardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dashboardItems) {
      vector<boost::any> temp1;
      for(auto item1:*dashboardItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dashboardItems"] = boost::any(temp1);
    }
    if (dashboards) {
      res["dashboards"] = boost::any(*dashboards);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dashboardItems") != m.end() && !m["dashboardItems"].empty()) {
      if (typeid(vector<boost::any>) == m["dashboardItems"].type()) {
        vector<ListDashboardResponseBodyDashboardItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dashboardItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDashboardResponseBodyDashboardItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dashboardItems = make_shared<vector<ListDashboardResponseBodyDashboardItems>>(expect1);
      }
    }
    if (m.find("dashboards") != m.end() && !m["dashboards"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["dashboards"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["dashboards"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dashboards = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListDashboardResponseBody() = default;
};
class ListDashboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDashboardResponseBody> body{};

  ListDashboardResponse() {}

  explicit ListDashboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDashboardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDashboardResponseBody>(model1);
      }
    }
  }


  virtual ~ListDashboardResponse() = default;
};
class ListDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListDomainsRequest() {}

  explicit ListDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListDomainsRequest() = default;
};
class ListDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<string>> domains{};
  shared_ptr<long> total{};

  ListDomainsResponseBody() {}

  explicit ListDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (domains) {
      res["domains"] = boost::any(*domains);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("domains") != m.end() && !m["domains"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["domains"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["domains"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      domains = make_shared<vector<string>>(toVec1);
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListDomainsResponseBody() = default;
};
class ListDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDomainsResponseBody> body{};

  ListDomainsResponse() {}

  explicit ListDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDomainsResponse() = default;
};
class ListExternalStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalStoreName{};
  shared_ptr<long> offset{};
  shared_ptr<long> sizs{};

  ListExternalStoreRequest() {}

  explicit ListExternalStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalStoreName) {
      res["externalStoreName"] = boost::any(*externalStoreName);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (sizs) {
      res["sizs"] = boost::any(*sizs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalStoreName") != m.end() && !m["externalStoreName"].empty()) {
      externalStoreName = make_shared<string>(boost::any_cast<string>(m["externalStoreName"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("sizs") != m.end() && !m["sizs"].empty()) {
      sizs = make_shared<long>(boost::any_cast<long>(m["sizs"]));
    }
  }


  virtual ~ListExternalStoreRequest() = default;
};
class ListExternalStoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<ExternalStore>> externalstores{};
  shared_ptr<long> total{};

  ListExternalStoreResponseBody() {}

  explicit ListExternalStoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (externalstores) {
      vector<boost::any> temp1;
      for(auto item1:*externalstores){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["externalstores"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("externalstores") != m.end() && !m["externalstores"].empty()) {
      if (typeid(vector<boost::any>) == m["externalstores"].type()) {
        vector<ExternalStore> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["externalstores"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExternalStore model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        externalstores = make_shared<vector<ExternalStore>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListExternalStoreResponseBody() = default;
};
class ListExternalStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExternalStoreResponseBody> body{};

  ListExternalStoreResponse() {}

  explicit ListExternalStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExternalStoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExternalStoreResponseBody>(model1);
      }
    }
  }


  virtual ~ListExternalStoreResponse() = default;
};
class ListLogStoresRequest : public Darabonba::Model {
public:
  shared_ptr<string> logstoreName{};
  shared_ptr<string> mode{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};
  shared_ptr<string> telemetryType{};

  ListLogStoresRequest() {}

  explicit ListLogStoresRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (telemetryType) {
      res["telemetryType"] = boost::any(*telemetryType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("telemetryType") != m.end() && !m["telemetryType"].empty()) {
      telemetryType = make_shared<string>(boost::any_cast<string>(m["telemetryType"]));
    }
  }


  virtual ~ListLogStoresRequest() = default;
};
class ListLogStoresResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<string>> logstores{};
  shared_ptr<long> total{};

  ListLogStoresResponseBody() {}

  explicit ListLogStoresResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (logstores) {
      res["logstores"] = boost::any(*logstores);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("logstores") != m.end() && !m["logstores"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["logstores"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["logstores"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logstores = make_shared<vector<string>>(toVec1);
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListLogStoresResponseBody() = default;
};
class ListLogStoresResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLogStoresResponseBody> body{};

  ListLogStoresResponse() {}

  explicit ListLogStoresResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLogStoresResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLogStoresResponseBody>(model1);
      }
    }
  }


  virtual ~ListLogStoresResponse() = default;
};
class ListMachineGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListMachineGroupRequest() {}

  explicit ListMachineGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListMachineGroupRequest() = default;
};
class ListMachineGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<string>> machinegroups{};
  shared_ptr<long> total{};

  ListMachineGroupResponseBody() {}

  explicit ListMachineGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (machinegroups) {
      res["machinegroups"] = boost::any(*machinegroups);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("machinegroups") != m.end() && !m["machinegroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["machinegroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["machinegroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      machinegroups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListMachineGroupResponseBody() = default;
};
class ListMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMachineGroupResponseBody> body{};

  ListMachineGroupResponse() {}

  explicit ListMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMachineGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMachineGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListMachineGroupResponse() = default;
};
class ListMachinesRequest : public Darabonba::Model {
public:
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListMachinesRequest() {}

  explicit ListMachinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListMachinesRequest() = default;
};
class ListMachinesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<Machine>> machines{};
  shared_ptr<long> total{};

  ListMachinesResponseBody() {}

  explicit ListMachinesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (machines) {
      vector<boost::any> temp1;
      for(auto item1:*machines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["machines"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("machines") != m.end() && !m["machines"].empty()) {
      if (typeid(vector<boost::any>) == m["machines"].type()) {
        vector<Machine> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["machines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Machine model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        machines = make_shared<vector<Machine>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListMachinesResponseBody() = default;
};
class ListMachinesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMachinesResponseBody> body{};

  ListMachinesResponse() {}

  explicit ListMachinesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMachinesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMachinesResponseBody>(model1);
      }
    }
  }


  virtual ~ListMachinesResponse() = default;
};
class ListProjectRequest : public Darabonba::Model {
public:
  shared_ptr<long> offset{};
  shared_ptr<string> projectName{};
  shared_ptr<long> size{};

  ListProjectRequest() {}

  explicit ListProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListProjectRequest() = default;
};
class ListProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<Project>> projects{};
  shared_ptr<long> total{};

  ListProjectResponseBody() {}

  explicit ListProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (projects) {
      vector<boost::any> temp1;
      for(auto item1:*projects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["projects"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("projects") != m.end() && !m["projects"].empty()) {
      if (typeid(vector<boost::any>) == m["projects"].type()) {
        vector<Project> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["projects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Project model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projects = make_shared<vector<Project>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListProjectResponseBody() = default;
};
class ListProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectResponseBody> body{};

  ListProjectResponse() {}

  explicit ListProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectResponse() = default;
};
class ListSavedSearchRequest : public Darabonba::Model {
public:
  shared_ptr<long> offset{};
  shared_ptr<long> size{};

  ListSavedSearchRequest() {}

  explicit ListSavedSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["offset"] = boost::any(*offset);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("offset") != m.end() && !m["offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["offset"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~ListSavedSearchRequest() = default;
};
class ListSavedSearchResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<SavedSearch>> savedsearchItems{};
  shared_ptr<long> total{};

  ListSavedSearchResponseBody() {}

  explicit ListSavedSearchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (savedsearchItems) {
      vector<boost::any> temp1;
      for(auto item1:*savedsearchItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["savedsearchItems"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("savedsearchItems") != m.end() && !m["savedsearchItems"].empty()) {
      if (typeid(vector<boost::any>) == m["savedsearchItems"].type()) {
        vector<SavedSearch> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["savedsearchItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SavedSearch model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        savedsearchItems = make_shared<vector<SavedSearch>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListSavedSearchResponseBody() = default;
};
class ListSavedSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSavedSearchResponseBody> body{};

  ListSavedSearchResponse() {}

  explicit ListSavedSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSavedSearchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSavedSearchResponseBody>(model1);
      }
    }
  }


  virtual ~ListSavedSearchResponse() = default;
};
class ListShardsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<Shard>> body{};

  ListShardsResponse() {}

  explicit ListShardsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<Shard> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Shard model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<Shard>>(expect1);
      }
    }
  }


  virtual ~ListShardsResponse() = default;
};
class ListShipperResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<string>> shipper{};
  shared_ptr<long> total{};

  ListShipperResponseBody() {}

  explicit ListShipperResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (shipper) {
      res["shipper"] = boost::any(*shipper);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("shipper") != m.end() && !m["shipper"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["shipper"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["shipper"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      shipper = make_shared<vector<string>>(toVec1);
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListShipperResponseBody() = default;
};
class ListShipperResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListShipperResponseBody> body{};

  ListShipperResponse() {}

  explicit ListShipperResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListShipperResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListShipperResponseBody>(model1);
      }
    }
  }


  virtual ~ListShipperResponse() = default;
};
class ListTagResourcesRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTags() {}

  explicit ListTagResourcesRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagResourcesRequestTags() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTags>> tags{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListTagResourcesRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListTagResourcesRequestTags>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceIdShrink{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagsShrink{};

  ListTagResourcesShrinkRequest() {}

  explicit ListTagResourcesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIdShrink) {
      res["resourceId"] = boost::any(*resourceIdShrink);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tagsShrink) {
      res["tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceIdShrink = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
  }


  virtual ~ListTagResourcesShrinkRequest() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["tagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["tagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tagKey") != m.end() && !m["tagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["tagKey"]));
    }
    if (m.find("tagValue") != m.end() && !m["tagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["tagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (tagResources) {
      vector<boost::any> temp1;
      for(auto item1:*tagResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tagResources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("tagResources") != m.end() && !m["tagResources"].empty()) {
      if (typeid(vector<boost::any>) == m["tagResources"].type()) {
        vector<ListTagResourcesResponseBodyTagResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tagResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResources = make_shared<vector<ListTagResourcesResponseBodyTagResources>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class PullDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> count{};
  shared_ptr<string> cursor{};
  shared_ptr<string> endCursor{};

  PullDataRequest() {}

  explicit PullDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (cursor) {
      res["cursor"] = boost::any(*cursor);
    }
    if (endCursor) {
      res["endCursor"] = boost::any(*endCursor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["count"]));
    }
    if (m.find("cursor") != m.end() && !m["cursor"].empty()) {
      cursor = make_shared<string>(boost::any_cast<string>(m["cursor"]));
    }
    if (m.find("endCursor") != m.end() && !m["endCursor"].empty()) {
      endCursor = make_shared<string>(boost::any_cast<string>(m["endCursor"]));
    }
  }


  virtual ~PullDataRequest() = default;
};
class PullDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  PullDataResponse() {}

  explicit PullDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~PullDataResponse() = default;
};
class PutProjectPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};

  PutProjectPolicyRequest() {}

  explicit PutProjectPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~PutProjectPolicyRequest() = default;
};
class PutProjectPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  PutProjectPolicyResponse() {}

  explicit PutProjectPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~PutProjectPolicyResponse() = default;
};
class PutWebtrackingRequest : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, string>>> logs{};
  shared_ptr<string> source{};
  shared_ptr<map<string, string>> tags{};
  shared_ptr<string> topic{};

  PutWebtrackingRequest() {}

  explicit PutWebtrackingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logs) {
      res["__logs__"] = boost::any(*logs);
    }
    if (source) {
      res["__source__"] = boost::any(*source);
    }
    if (tags) {
      res["__tags__"] = boost::any(*tags);
    }
    if (topic) {
      res["__topic__"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("__logs__") != m.end() && !m["__logs__"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["__logs__"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["__logs__"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      logs = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("__source__") != m.end() && !m["__source__"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["__source__"]));
    }
    if (m.find("__tags__") != m.end() && !m["__tags__"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["__tags__"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("__topic__") != m.end() && !m["__topic__"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["__topic__"]));
    }
  }


  virtual ~PutWebtrackingRequest() = default;
};
class PutWebtrackingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  PutWebtrackingResponse() {}

  explicit PutWebtrackingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~PutWebtrackingResponse() = default;
};
class RemoveConfigFromMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  RemoveConfigFromMachineGroupResponse() {}

  explicit RemoveConfigFromMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~RemoveConfigFromMachineGroupResponse() = default;
};
class SplitShardRequest : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<long> shardCount{};

  SplitShardRequest() {}

  explicit SplitShardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (shardCount) {
      res["shardCount"] = boost::any(*shardCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("shardCount") != m.end() && !m["shardCount"].empty()) {
      shardCount = make_shared<long>(boost::any_cast<long>(m["shardCount"]));
    }
  }


  virtual ~SplitShardRequest() = default;
};
class SplitShardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<vector<Shard>> body{};

  SplitShardResponse() {}

  explicit SplitShardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<Shard> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Shard model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<Shard>>(expect1);
      }
    }
  }


  virtual ~SplitShardResponse() = default;
};
class TagResourcesRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTags() {}

  explicit TagResourcesRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourcesRequestTags() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTags>> tags{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<TagResourcesRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<TagResourcesRequestTags>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~TagResourcesResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tags{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["all"] = boost::any(*all);
    }
    if (resourceId) {
      res["resourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("all") != m.end() && !m["all"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["all"]));
    }
    if (m.find("resourceId") != m.end() && !m["resourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resourceId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateConfigRequest : public Darabonba::Model {
public:
  shared_ptr<LogtailConfig> body{};

  UpdateConfigRequest() {}

  explicit UpdateConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LogtailConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogtailConfig>(model1);
      }
    }
  }


  virtual ~UpdateConfigRequest() = default;
};
class UpdateConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateConfigResponse() {}

  explicit UpdateConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UpdateConfigResponse() = default;
};
class UpdateConsumerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<bool> order{};
  shared_ptr<long> timeout{};

  UpdateConsumerGroupRequest() {}

  explicit UpdateConsumerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<bool>(boost::any_cast<bool>(m["order"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~UpdateConsumerGroupRequest() = default;
};
class UpdateConsumerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateConsumerGroupResponse() {}

  explicit UpdateConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UpdateConsumerGroupResponse() = default;
};
class UpdateDashboardRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> attribute{};
  shared_ptr<vector<Chart>> charts{};
  shared_ptr<string> dashboardName{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};

  UpdateDashboardRequest() {}

  explicit UpdateDashboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attribute) {
      res["attribute"] = boost::any(*attribute);
    }
    if (charts) {
      vector<boost::any> temp1;
      for(auto item1:*charts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["charts"] = boost::any(temp1);
    }
    if (dashboardName) {
      res["dashboardName"] = boost::any(*dashboardName);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["attribute"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      attribute = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("charts") != m.end() && !m["charts"].empty()) {
      if (typeid(vector<boost::any>) == m["charts"].type()) {
        vector<Chart> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["charts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Chart model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        charts = make_shared<vector<Chart>>(expect1);
      }
    }
    if (m.find("dashboardName") != m.end() && !m["dashboardName"].empty()) {
      dashboardName = make_shared<string>(boost::any_cast<string>(m["dashboardName"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
  }


  virtual ~UpdateDashboardRequest() = default;
};
class UpdateDashboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateDashboardResponse() {}

  explicit UpdateDashboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UpdateDashboardResponse() = default;
};
class UpdateIndexRequestLine : public Darabonba::Model {
public:
  shared_ptr<bool> caseSensitive{};
  shared_ptr<bool> chn{};
  shared_ptr<vector<string>> excludeKeys{};
  shared_ptr<vector<string>> includeKeys{};
  shared_ptr<vector<string>> token{};

  UpdateIndexRequestLine() {}

  explicit UpdateIndexRequestLine(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseSensitive) {
      res["caseSensitive"] = boost::any(*caseSensitive);
    }
    if (chn) {
      res["chn"] = boost::any(*chn);
    }
    if (excludeKeys) {
      res["exclude_keys"] = boost::any(*excludeKeys);
    }
    if (includeKeys) {
      res["include_keys"] = boost::any(*includeKeys);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caseSensitive") != m.end() && !m["caseSensitive"].empty()) {
      caseSensitive = make_shared<bool>(boost::any_cast<bool>(m["caseSensitive"]));
    }
    if (m.find("chn") != m.end() && !m["chn"].empty()) {
      chn = make_shared<bool>(boost::any_cast<bool>(m["chn"]));
    }
    if (m.find("exclude_keys") != m.end() && !m["exclude_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["exclude_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["exclude_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("include_keys") != m.end() && !m["include_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["include_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["include_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      includeKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["token"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["token"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      token = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateIndexRequestLine() = default;
};
class UpdateIndexRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, KeysValue>> keys{};
  shared_ptr<UpdateIndexRequestLine> line{};
  shared_ptr<bool> logReduce{};
  shared_ptr<vector<string>> logReduceBlackList{};
  shared_ptr<vector<string>> logReduceWhiteList{};
  shared_ptr<long> maxTextLen{};
  shared_ptr<long> ttl{};

  UpdateIndexRequest() {}

  explicit UpdateIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keys) {
      map<string, boost::any> temp1;
      for(auto item1:*keys){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["keys"] = boost::any(temp1);
    }
    if (line) {
      res["line"] = line ? boost::any(line->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logReduce) {
      res["log_reduce"] = boost::any(*logReduce);
    }
    if (logReduceBlackList) {
      res["log_reduce_black_list"] = boost::any(*logReduceBlackList);
    }
    if (logReduceWhiteList) {
      res["log_reduce_white_list"] = boost::any(*logReduceWhiteList);
    }
    if (maxTextLen) {
      res["max_text_len"] = boost::any(*maxTextLen);
    }
    if (ttl) {
      res["ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keys") != m.end() && !m["keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["keys"].type()) {
        map<string, KeysValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["keys"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            KeysValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        keys = make_shared<map<string, KeysValue>>(expect1);
      }
    }
    if (m.find("line") != m.end() && !m["line"].empty()) {
      if (typeid(map<string, boost::any>) == m["line"].type()) {
        UpdateIndexRequestLine model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["line"]));
        line = make_shared<UpdateIndexRequestLine>(model1);
      }
    }
    if (m.find("log_reduce") != m.end() && !m["log_reduce"].empty()) {
      logReduce = make_shared<bool>(boost::any_cast<bool>(m["log_reduce"]));
    }
    if (m.find("log_reduce_black_list") != m.end() && !m["log_reduce_black_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_black_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_black_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceBlackList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("log_reduce_white_list") != m.end() && !m["log_reduce_white_list"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["log_reduce_white_list"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["log_reduce_white_list"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logReduceWhiteList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("max_text_len") != m.end() && !m["max_text_len"].empty()) {
      maxTextLen = make_shared<long>(boost::any_cast<long>(m["max_text_len"]));
    }
    if (m.find("ttl") != m.end() && !m["ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["ttl"]));
    }
  }


  virtual ~UpdateIndexRequest() = default;
};
class UpdateIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateIndexResponse() {}

  explicit UpdateIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UpdateIndexResponse() = default;
};
class UpdateLogStoreRequest : public Darabonba::Model {
public:
  shared_ptr<bool> appendMeta{};
  shared_ptr<bool> autoSplit{};
  shared_ptr<bool> enableTracking{};
  shared_ptr<EncryptConf> encryptConf{};
  shared_ptr<long> hotTtl{};
  shared_ptr<string> logstoreName{};
  shared_ptr<long> maxSplitShard{};
  shared_ptr<string> mode{};
  shared_ptr<long> shardCount{};
  shared_ptr<string> telemetryType{};
  shared_ptr<long> ttl{};

  UpdateLogStoreRequest() {}

  explicit UpdateLogStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appendMeta) {
      res["appendMeta"] = boost::any(*appendMeta);
    }
    if (autoSplit) {
      res["autoSplit"] = boost::any(*autoSplit);
    }
    if (enableTracking) {
      res["enable_tracking"] = boost::any(*enableTracking);
    }
    if (encryptConf) {
      res["encrypt_conf"] = encryptConf ? boost::any(encryptConf->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hotTtl) {
      res["hot_ttl"] = boost::any(*hotTtl);
    }
    if (logstoreName) {
      res["logstoreName"] = boost::any(*logstoreName);
    }
    if (maxSplitShard) {
      res["maxSplitShard"] = boost::any(*maxSplitShard);
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (shardCount) {
      res["shardCount"] = boost::any(*shardCount);
    }
    if (telemetryType) {
      res["telemetryType"] = boost::any(*telemetryType);
    }
    if (ttl) {
      res["ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appendMeta") != m.end() && !m["appendMeta"].empty()) {
      appendMeta = make_shared<bool>(boost::any_cast<bool>(m["appendMeta"]));
    }
    if (m.find("autoSplit") != m.end() && !m["autoSplit"].empty()) {
      autoSplit = make_shared<bool>(boost::any_cast<bool>(m["autoSplit"]));
    }
    if (m.find("enable_tracking") != m.end() && !m["enable_tracking"].empty()) {
      enableTracking = make_shared<bool>(boost::any_cast<bool>(m["enable_tracking"]));
    }
    if (m.find("encrypt_conf") != m.end() && !m["encrypt_conf"].empty()) {
      if (typeid(map<string, boost::any>) == m["encrypt_conf"].type()) {
        EncryptConf model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["encrypt_conf"]));
        encryptConf = make_shared<EncryptConf>(model1);
      }
    }
    if (m.find("hot_ttl") != m.end() && !m["hot_ttl"].empty()) {
      hotTtl = make_shared<long>(boost::any_cast<long>(m["hot_ttl"]));
    }
    if (m.find("logstoreName") != m.end() && !m["logstoreName"].empty()) {
      logstoreName = make_shared<string>(boost::any_cast<string>(m["logstoreName"]));
    }
    if (m.find("maxSplitShard") != m.end() && !m["maxSplitShard"].empty()) {
      maxSplitShard = make_shared<long>(boost::any_cast<long>(m["maxSplitShard"]));
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("shardCount") != m.end() && !m["shardCount"].empty()) {
      shardCount = make_shared<long>(boost::any_cast<long>(m["shardCount"]));
    }
    if (m.find("telemetryType") != m.end() && !m["telemetryType"].empty()) {
      telemetryType = make_shared<string>(boost::any_cast<string>(m["telemetryType"]));
    }
    if (m.find("ttl") != m.end() && !m["ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["ttl"]));
    }
  }


  virtual ~UpdateLogStoreRequest() = default;
};
class UpdateLogStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateLogStoreResponse() {}

  explicit UpdateLogStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UpdateLogStoreResponse() = default;
};
class UpdateLoggingRequestLoggingDetails : public Darabonba::Model {
public:
  shared_ptr<string> logstore{};
  shared_ptr<string> type{};

  UpdateLoggingRequestLoggingDetails() {}

  explicit UpdateLoggingRequestLoggingDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateLoggingRequestLoggingDetails() = default;
};
class UpdateLoggingRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateLoggingRequestLoggingDetails>> loggingDetails{};
  shared_ptr<string> loggingProject{};

  UpdateLoggingRequest() {}

  explicit UpdateLoggingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loggingDetails) {
      vector<boost::any> temp1;
      for(auto item1:*loggingDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["loggingDetails"] = boost::any(temp1);
    }
    if (loggingProject) {
      res["loggingProject"] = boost::any(*loggingProject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("loggingDetails") != m.end() && !m["loggingDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["loggingDetails"].type()) {
        vector<UpdateLoggingRequestLoggingDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["loggingDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateLoggingRequestLoggingDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loggingDetails = make_shared<vector<UpdateLoggingRequestLoggingDetails>>(expect1);
      }
    }
    if (m.find("loggingProject") != m.end() && !m["loggingProject"].empty()) {
      loggingProject = make_shared<string>(boost::any_cast<string>(m["loggingProject"]));
    }
  }


  virtual ~UpdateLoggingRequest() = default;
};
class UpdateLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateLoggingResponse() {}

  explicit UpdateLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UpdateLoggingResponse() = default;
};
class UpdateMachineGroupRequestGroupAttribute : public Darabonba::Model {
public:
  shared_ptr<string> externalName{};
  shared_ptr<string> groupTopic{};

  UpdateMachineGroupRequestGroupAttribute() {}

  explicit UpdateMachineGroupRequestGroupAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalName) {
      res["externalName"] = boost::any(*externalName);
    }
    if (groupTopic) {
      res["groupTopic"] = boost::any(*groupTopic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalName") != m.end() && !m["externalName"].empty()) {
      externalName = make_shared<string>(boost::any_cast<string>(m["externalName"]));
    }
    if (m.find("groupTopic") != m.end() && !m["groupTopic"].empty()) {
      groupTopic = make_shared<string>(boost::any_cast<string>(m["groupTopic"]));
    }
  }


  virtual ~UpdateMachineGroupRequestGroupAttribute() = default;
};
class UpdateMachineGroupRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateMachineGroupRequestGroupAttribute> groupAttribute{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupType{};
  shared_ptr<string> machineIdentifyType{};
  shared_ptr<vector<string>> machineList{};

  UpdateMachineGroupRequest() {}

  explicit UpdateMachineGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupAttribute) {
      res["groupAttribute"] = groupAttribute ? boost::any(groupAttribute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    if (groupType) {
      res["groupType"] = boost::any(*groupType);
    }
    if (machineIdentifyType) {
      res["machineIdentifyType"] = boost::any(*machineIdentifyType);
    }
    if (machineList) {
      res["machineList"] = boost::any(*machineList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("groupAttribute") != m.end() && !m["groupAttribute"].empty()) {
      if (typeid(map<string, boost::any>) == m["groupAttribute"].type()) {
        UpdateMachineGroupRequestGroupAttribute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["groupAttribute"]));
        groupAttribute = make_shared<UpdateMachineGroupRequestGroupAttribute>(model1);
      }
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
    if (m.find("groupType") != m.end() && !m["groupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["groupType"]));
    }
    if (m.find("machineIdentifyType") != m.end() && !m["machineIdentifyType"].empty()) {
      machineIdentifyType = make_shared<string>(boost::any_cast<string>(m["machineIdentifyType"]));
    }
    if (m.find("machineList") != m.end() && !m["machineList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["machineList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["machineList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      machineList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateMachineGroupRequest() = default;
};
class UpdateMachineGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateMachineGroupResponse() {}

  explicit UpdateMachineGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UpdateMachineGroupResponse() = default;
};
class UpdateMachineGroupMachineRequest : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<vector<string>> body{};

  UpdateMachineGroupMachineRequest() {}

  explicit UpdateMachineGroupMachineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["body"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      body = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateMachineGroupMachineRequest() = default;
};
class UpdateMachineGroupMachineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateMachineGroupMachineResponse() {}

  explicit UpdateMachineGroupMachineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UpdateMachineGroupMachineResponse() = default;
};
class UpdateOdpsShipperRequestTargetConfiguration : public Darabonba::Model {
public:
  shared_ptr<long> bufferInterval{};
  shared_ptr<bool> enable{};
  shared_ptr<vector<string>> fields{};
  shared_ptr<string> odpsEndpoint{};
  shared_ptr<string> odpsProject{};
  shared_ptr<string> odpsTable{};
  shared_ptr<vector<string>> partitionColumn{};
  shared_ptr<string> partitionTimeFormat{};

  UpdateOdpsShipperRequestTargetConfiguration() {}

  explicit UpdateOdpsShipperRequestTargetConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bufferInterval) {
      res["bufferInterval"] = boost::any(*bufferInterval);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (fields) {
      res["fields"] = boost::any(*fields);
    }
    if (odpsEndpoint) {
      res["odpsEndpoint"] = boost::any(*odpsEndpoint);
    }
    if (odpsProject) {
      res["odpsProject"] = boost::any(*odpsProject);
    }
    if (odpsTable) {
      res["odpsTable"] = boost::any(*odpsTable);
    }
    if (partitionColumn) {
      res["partitionColumn"] = boost::any(*partitionColumn);
    }
    if (partitionTimeFormat) {
      res["partitionTimeFormat"] = boost::any(*partitionTimeFormat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bufferInterval") != m.end() && !m["bufferInterval"].empty()) {
      bufferInterval = make_shared<long>(boost::any_cast<long>(m["bufferInterval"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("fields") != m.end() && !m["fields"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["fields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["fields"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fields = make_shared<vector<string>>(toVec1);
    }
    if (m.find("odpsEndpoint") != m.end() && !m["odpsEndpoint"].empty()) {
      odpsEndpoint = make_shared<string>(boost::any_cast<string>(m["odpsEndpoint"]));
    }
    if (m.find("odpsProject") != m.end() && !m["odpsProject"].empty()) {
      odpsProject = make_shared<string>(boost::any_cast<string>(m["odpsProject"]));
    }
    if (m.find("odpsTable") != m.end() && !m["odpsTable"].empty()) {
      odpsTable = make_shared<string>(boost::any_cast<string>(m["odpsTable"]));
    }
    if (m.find("partitionColumn") != m.end() && !m["partitionColumn"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["partitionColumn"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["partitionColumn"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      partitionColumn = make_shared<vector<string>>(toVec1);
    }
    if (m.find("partitionTimeFormat") != m.end() && !m["partitionTimeFormat"].empty()) {
      partitionTimeFormat = make_shared<string>(boost::any_cast<string>(m["partitionTimeFormat"]));
    }
  }


  virtual ~UpdateOdpsShipperRequestTargetConfiguration() = default;
};
class UpdateOdpsShipperRequest : public Darabonba::Model {
public:
  shared_ptr<string> shipperName{};
  shared_ptr<UpdateOdpsShipperRequestTargetConfiguration> targetConfiguration{};
  shared_ptr<string> targetType{};

  UpdateOdpsShipperRequest() {}

  explicit UpdateOdpsShipperRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shipperName) {
      res["shipperName"] = boost::any(*shipperName);
    }
    if (targetConfiguration) {
      res["targetConfiguration"] = targetConfiguration ? boost::any(targetConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetType) {
      res["targetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("shipperName") != m.end() && !m["shipperName"].empty()) {
      shipperName = make_shared<string>(boost::any_cast<string>(m["shipperName"]));
    }
    if (m.find("targetConfiguration") != m.end() && !m["targetConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["targetConfiguration"].type()) {
        UpdateOdpsShipperRequestTargetConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["targetConfiguration"]));
        targetConfiguration = make_shared<UpdateOdpsShipperRequestTargetConfiguration>(model1);
      }
    }
    if (m.find("targetType") != m.end() && !m["targetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["targetType"]));
    }
  }


  virtual ~UpdateOdpsShipperRequest() = default;
};
class UpdateOdpsShipperResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateOdpsShipperResponse() {}

  explicit UpdateOdpsShipperResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UpdateOdpsShipperResponse() = default;
};
class UpdateOssExternalStoreRequestParameterColumns : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  UpdateOssExternalStoreRequestParameterColumns() {}

  explicit UpdateOssExternalStoreRequestParameterColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateOssExternalStoreRequestParameterColumns() = default;
};
class UpdateOssExternalStoreRequestParameter : public Darabonba::Model {
public:
  shared_ptr<string> accessid{};
  shared_ptr<string> accesskey{};
  shared_ptr<string> bucket{};
  shared_ptr<vector<UpdateOssExternalStoreRequestParameterColumns>> columns{};
  shared_ptr<string> endpoint{};
  shared_ptr<vector<string>> objects{};

  UpdateOssExternalStoreRequestParameter() {}

  explicit UpdateOssExternalStoreRequestParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessid) {
      res["accessid"] = boost::any(*accessid);
    }
    if (accesskey) {
      res["accesskey"] = boost::any(*accesskey);
    }
    if (bucket) {
      res["bucket"] = boost::any(*bucket);
    }
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["columns"] = boost::any(temp1);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (objects) {
      res["objects"] = boost::any(*objects);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessid") != m.end() && !m["accessid"].empty()) {
      accessid = make_shared<string>(boost::any_cast<string>(m["accessid"]));
    }
    if (m.find("accesskey") != m.end() && !m["accesskey"].empty()) {
      accesskey = make_shared<string>(boost::any_cast<string>(m["accesskey"]));
    }
    if (m.find("bucket") != m.end() && !m["bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["bucket"]));
    }
    if (m.find("columns") != m.end() && !m["columns"].empty()) {
      if (typeid(vector<boost::any>) == m["columns"].type()) {
        vector<UpdateOssExternalStoreRequestParameterColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateOssExternalStoreRequestParameterColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<UpdateOssExternalStoreRequestParameterColumns>>(expect1);
      }
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("objects") != m.end() && !m["objects"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["objects"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["objects"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      objects = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateOssExternalStoreRequestParameter() = default;
};
class UpdateOssExternalStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalStoreName{};
  shared_ptr<UpdateOssExternalStoreRequestParameter> parameter{};
  shared_ptr<string> storeType{};

  UpdateOssExternalStoreRequest() {}

  explicit UpdateOssExternalStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalStoreName) {
      res["externalStoreName"] = boost::any(*externalStoreName);
    }
    if (parameter) {
      res["parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalStoreName") != m.end() && !m["externalStoreName"].empty()) {
      externalStoreName = make_shared<string>(boost::any_cast<string>(m["externalStoreName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameter"].type()) {
        UpdateOssExternalStoreRequestParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameter"]));
        parameter = make_shared<UpdateOssExternalStoreRequestParameter>(model1);
      }
    }
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
  }


  virtual ~UpdateOssExternalStoreRequest() = default;
};
class UpdateOssExternalStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateOssExternalStoreResponse() {}

  explicit UpdateOssExternalStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UpdateOssExternalStoreResponse() = default;
};
class UpdateOssShipperRequestTargetConfigurationStorage : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> detail{};
  shared_ptr<string> format{};

  UpdateOssShipperRequestTargetConfigurationStorage() {}

  explicit UpdateOssShipperRequestTargetConfigurationStorage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["detail"] = boost::any(*detail);
    }
    if (format) {
      res["format"] = boost::any(*format);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["detail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("format") != m.end() && !m["format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["format"]));
    }
  }


  virtual ~UpdateOssShipperRequestTargetConfigurationStorage() = default;
};
class UpdateOssShipperRequestTargetConfiguration : public Darabonba::Model {
public:
  shared_ptr<long> bufferInterval{};
  shared_ptr<long> bufferSize{};
  shared_ptr<string> compressType{};
  shared_ptr<bool> enable{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossPrefix{};
  shared_ptr<string> pathFormat{};
  shared_ptr<string> roleArn{};
  shared_ptr<UpdateOssShipperRequestTargetConfigurationStorage> storage{};
  shared_ptr<string> timeZone{};

  UpdateOssShipperRequestTargetConfiguration() {}

  explicit UpdateOssShipperRequestTargetConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bufferInterval) {
      res["bufferInterval"] = boost::any(*bufferInterval);
    }
    if (bufferSize) {
      res["bufferSize"] = boost::any(*bufferSize);
    }
    if (compressType) {
      res["compressType"] = boost::any(*compressType);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (ossBucket) {
      res["ossBucket"] = boost::any(*ossBucket);
    }
    if (ossPrefix) {
      res["ossPrefix"] = boost::any(*ossPrefix);
    }
    if (pathFormat) {
      res["pathFormat"] = boost::any(*pathFormat);
    }
    if (roleArn) {
      res["roleArn"] = boost::any(*roleArn);
    }
    if (storage) {
      res["storage"] = storage ? boost::any(storage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timeZone) {
      res["timeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bufferInterval") != m.end() && !m["bufferInterval"].empty()) {
      bufferInterval = make_shared<long>(boost::any_cast<long>(m["bufferInterval"]));
    }
    if (m.find("bufferSize") != m.end() && !m["bufferSize"].empty()) {
      bufferSize = make_shared<long>(boost::any_cast<long>(m["bufferSize"]));
    }
    if (m.find("compressType") != m.end() && !m["compressType"].empty()) {
      compressType = make_shared<string>(boost::any_cast<string>(m["compressType"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("ossBucket") != m.end() && !m["ossBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["ossBucket"]));
    }
    if (m.find("ossPrefix") != m.end() && !m["ossPrefix"].empty()) {
      ossPrefix = make_shared<string>(boost::any_cast<string>(m["ossPrefix"]));
    }
    if (m.find("pathFormat") != m.end() && !m["pathFormat"].empty()) {
      pathFormat = make_shared<string>(boost::any_cast<string>(m["pathFormat"]));
    }
    if (m.find("roleArn") != m.end() && !m["roleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["roleArn"]));
    }
    if (m.find("storage") != m.end() && !m["storage"].empty()) {
      if (typeid(map<string, boost::any>) == m["storage"].type()) {
        UpdateOssShipperRequestTargetConfigurationStorage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["storage"]));
        storage = make_shared<UpdateOssShipperRequestTargetConfigurationStorage>(model1);
      }
    }
    if (m.find("timeZone") != m.end() && !m["timeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["timeZone"]));
    }
  }


  virtual ~UpdateOssShipperRequestTargetConfiguration() = default;
};
class UpdateOssShipperRequest : public Darabonba::Model {
public:
  shared_ptr<string> shipperName{};
  shared_ptr<UpdateOssShipperRequestTargetConfiguration> targetConfiguration{};
  shared_ptr<string> targetType{};

  UpdateOssShipperRequest() {}

  explicit UpdateOssShipperRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shipperName) {
      res["shipperName"] = boost::any(*shipperName);
    }
    if (targetConfiguration) {
      res["targetConfiguration"] = targetConfiguration ? boost::any(targetConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetType) {
      res["targetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("shipperName") != m.end() && !m["shipperName"].empty()) {
      shipperName = make_shared<string>(boost::any_cast<string>(m["shipperName"]));
    }
    if (m.find("targetConfiguration") != m.end() && !m["targetConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["targetConfiguration"].type()) {
        UpdateOssShipperRequestTargetConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["targetConfiguration"]));
        targetConfiguration = make_shared<UpdateOssShipperRequestTargetConfiguration>(model1);
      }
    }
    if (m.find("targetType") != m.end() && !m["targetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["targetType"]));
    }
  }


  virtual ~UpdateOssShipperRequest() = default;
};
class UpdateOssShipperResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateOssShipperResponse() {}

  explicit UpdateOssShipperResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UpdateOssShipperResponse() = default;
};
class UpdateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};

  UpdateProjectRequest() {}

  explicit UpdateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
  }


  virtual ~UpdateProjectRequest() = default;
};
class UpdateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateProjectResponse() {}

  explicit UpdateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UpdateProjectResponse() = default;
};
class UpdateRdsExternalStoreRequestParameter : public Darabonba::Model {
public:
  shared_ptr<string> db{};
  shared_ptr<string> host{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> password{};
  shared_ptr<string> port{};
  shared_ptr<string> region{};
  shared_ptr<string> table{};
  shared_ptr<string> username{};
  shared_ptr<string> vpcId{};

  UpdateRdsExternalStoreRequestParameter() {}

  explicit UpdateRdsExternalStoreRequestParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (db) {
      res["db"] = boost::any(*db);
    }
    if (host) {
      res["host"] = boost::any(*host);
    }
    if (instanceId) {
      res["instance-id"] = boost::any(*instanceId);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (port) {
      res["port"] = boost::any(*port);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (table) {
      res["table"] = boost::any(*table);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    if (vpcId) {
      res["vpc-id"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("db") != m.end() && !m["db"].empty()) {
      db = make_shared<string>(boost::any_cast<string>(m["db"]));
    }
    if (m.find("host") != m.end() && !m["host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["host"]));
    }
    if (m.find("instance-id") != m.end() && !m["instance-id"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instance-id"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("port") != m.end() && !m["port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["port"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["table"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
    if (m.find("vpc-id") != m.end() && !m["vpc-id"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpc-id"]));
    }
  }


  virtual ~UpdateRdsExternalStoreRequestParameter() = default;
};
class UpdateRdsExternalStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalStoreName{};
  shared_ptr<UpdateRdsExternalStoreRequestParameter> parameter{};
  shared_ptr<string> storeType{};

  UpdateRdsExternalStoreRequest() {}

  explicit UpdateRdsExternalStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalStoreName) {
      res["externalStoreName"] = boost::any(*externalStoreName);
    }
    if (parameter) {
      res["parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storeType) {
      res["storeType"] = boost::any(*storeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externalStoreName") != m.end() && !m["externalStoreName"].empty()) {
      externalStoreName = make_shared<string>(boost::any_cast<string>(m["externalStoreName"]));
    }
    if (m.find("parameter") != m.end() && !m["parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameter"].type()) {
        UpdateRdsExternalStoreRequestParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameter"]));
        parameter = make_shared<UpdateRdsExternalStoreRequestParameter>(model1);
      }
    }
    if (m.find("storeType") != m.end() && !m["storeType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["storeType"]));
    }
  }


  virtual ~UpdateRdsExternalStoreRequest() = default;
};
class UpdateRdsExternalStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateRdsExternalStoreResponse() {}

  explicit UpdateRdsExternalStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UpdateRdsExternalStoreResponse() = default;
};
class UpdateSavedSearchRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> logstore{};
  shared_ptr<string> savedsearchName{};
  shared_ptr<string> searchQuery{};
  shared_ptr<string> topic{};

  UpdateSavedSearchRequest() {}

  explicit UpdateSavedSearchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (logstore) {
      res["logstore"] = boost::any(*logstore);
    }
    if (savedsearchName) {
      res["savedsearchName"] = boost::any(*savedsearchName);
    }
    if (searchQuery) {
      res["searchQuery"] = boost::any(*searchQuery);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("logstore") != m.end() && !m["logstore"].empty()) {
      logstore = make_shared<string>(boost::any_cast<string>(m["logstore"]));
    }
    if (m.find("savedsearchName") != m.end() && !m["savedsearchName"].empty()) {
      savedsearchName = make_shared<string>(boost::any_cast<string>(m["savedsearchName"]));
    }
    if (m.find("searchQuery") != m.end() && !m["searchQuery"].empty()) {
      searchQuery = make_shared<string>(boost::any_cast<string>(m["searchQuery"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
  }


  virtual ~UpdateSavedSearchRequest() = default;
};
class UpdateSavedSearchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateSavedSearchResponse() {}

  explicit UpdateSavedSearchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UpdateSavedSearchResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  shared_ptr<Alibabacloud_GatewaySPI::Client> _client{};
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  ApplyConfigToMachineGroupResponse applyConfigToMachineGroupWithOptions(shared_ptr<string> project,
                                                                         shared_ptr<string> machineGroup,
                                                                         shared_ptr<string> configName,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyConfigToMachineGroupResponse applyConfigToMachineGroup(shared_ptr<string> project, shared_ptr<string> machineGroup, shared_ptr<string> configName);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<string> project,
                                                             shared_ptr<ChangeResourceGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<string> project, shared_ptr<ChangeResourceGroupRequest> request);
  ConsumerGroupHeartBeatResponse consumerGroupHeartBeatWithOptions(shared_ptr<string> project,
                                                                   shared_ptr<string> logstore,
                                                                   shared_ptr<string> consumerGroup,
                                                                   shared_ptr<ConsumerGroupHeartBeatRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConsumerGroupHeartBeatResponse consumerGroupHeartBeat(shared_ptr<string> project,
                                                        shared_ptr<string> logstore,
                                                        shared_ptr<string> consumerGroup,
                                                        shared_ptr<ConsumerGroupHeartBeatRequest> request);
  CreateConfigResponse createConfigWithOptions(shared_ptr<string> project,
                                               shared_ptr<CreateConfigRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConfigResponse createConfig(shared_ptr<string> project, shared_ptr<CreateConfigRequest> request);
  CreateConsumerGroupResponse createConsumerGroupWithOptions(shared_ptr<string> project,
                                                             shared_ptr<string> logstore,
                                                             shared_ptr<CreateConsumerGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConsumerGroupResponse createConsumerGroup(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<CreateConsumerGroupRequest> request);
  CreateDashboardResponse createDashboardWithOptions(shared_ptr<string> project,
                                                     shared_ptr<CreateDashboardRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDashboardResponse createDashboard(shared_ptr<string> project, shared_ptr<CreateDashboardRequest> request);
  CreateDomainResponse createDomainWithOptions(shared_ptr<string> project,
                                               shared_ptr<CreateDomainRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDomainResponse createDomain(shared_ptr<string> project, shared_ptr<CreateDomainRequest> request);
  CreateIndexResponse createIndexWithOptions(shared_ptr<string> project,
                                             shared_ptr<string> logstore,
                                             shared_ptr<CreateIndexRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIndexResponse createIndex(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<CreateIndexRequest> request);
  CreateLogStoreResponse createLogStoreWithOptions(shared_ptr<string> project,
                                                   shared_ptr<CreateLogStoreRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLogStoreResponse createLogStore(shared_ptr<string> project, shared_ptr<CreateLogStoreRequest> request);
  CreateLoggingResponse createLoggingWithOptions(shared_ptr<string> project,
                                                 shared_ptr<CreateLoggingRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLoggingResponse createLogging(shared_ptr<string> project, shared_ptr<CreateLoggingRequest> request);
  CreateMachineGroupResponse createMachineGroupWithOptions(shared_ptr<string> project,
                                                           shared_ptr<CreateMachineGroupRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMachineGroupResponse createMachineGroup(shared_ptr<string> project, shared_ptr<CreateMachineGroupRequest> request);
  CreateOdpsShipperResponse createOdpsShipperWithOptions(shared_ptr<string> project,
                                                         shared_ptr<string> logstore,
                                                         shared_ptr<CreateOdpsShipperRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOdpsShipperResponse createOdpsShipper(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<CreateOdpsShipperRequest> request);
  CreateOssExternalStoreResponse createOssExternalStoreWithOptions(shared_ptr<string> project,
                                                                   shared_ptr<CreateOssExternalStoreRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOssExternalStoreResponse createOssExternalStore(shared_ptr<string> project, shared_ptr<CreateOssExternalStoreRequest> request);
  CreateOssShipperResponse createOssShipperWithOptions(shared_ptr<string> project,
                                                       shared_ptr<string> logstore,
                                                       shared_ptr<CreateOssShipperRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOssShipperResponse createOssShipper(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<CreateOssShipperRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  CreateRdsExternalStoreResponse createRdsExternalStoreWithOptions(shared_ptr<string> project,
                                                                   shared_ptr<CreateRdsExternalStoreRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRdsExternalStoreResponse createRdsExternalStore(shared_ptr<string> project, shared_ptr<CreateRdsExternalStoreRequest> request);
  CreateSavedSearchResponse createSavedSearchWithOptions(shared_ptr<string> project,
                                                         shared_ptr<CreateSavedSearchRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSavedSearchResponse createSavedSearch(shared_ptr<string> project, shared_ptr<CreateSavedSearchRequest> request);
  DeleteConfigResponse deleteConfigWithOptions(shared_ptr<string> project,
                                               shared_ptr<string> configName,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConfigResponse deleteConfig(shared_ptr<string> project, shared_ptr<string> configName);
  DeleteConsumerGroupResponse deleteConsumerGroupWithOptions(shared_ptr<string> project,
                                                             shared_ptr<string> logstore,
                                                             shared_ptr<string> consumerGroup,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConsumerGroupResponse deleteConsumerGroup(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<string> consumerGroup);
  DeleteDashboardResponse deleteDashboardWithOptions(shared_ptr<string> project,
                                                     shared_ptr<string> dashboardName,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDashboardResponse deleteDashboard(shared_ptr<string> project, shared_ptr<string> dashboardName);
  DeleteDomainResponse deleteDomainWithOptions(shared_ptr<string> project,
                                               shared_ptr<string> domainName,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainResponse deleteDomain(shared_ptr<string> project, shared_ptr<string> domainName);
  DeleteExternalStoreResponse deleteExternalStoreWithOptions(shared_ptr<string> project,
                                                             shared_ptr<string> externalStoreName,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExternalStoreResponse deleteExternalStore(shared_ptr<string> project, shared_ptr<string> externalStoreName);
  DeleteIndexResponse deleteIndexWithOptions(shared_ptr<string> project,
                                             shared_ptr<string> logstore,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIndexResponse deleteIndex(shared_ptr<string> project, shared_ptr<string> logstore);
  DeleteLogStoreResponse deleteLogStoreWithOptions(shared_ptr<string> project,
                                                   shared_ptr<string> logstore,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLogStoreResponse deleteLogStore(shared_ptr<string> project, shared_ptr<string> logstore);
  DeleteLoggingResponse deleteLoggingWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLoggingResponse deleteLogging(shared_ptr<string> project);
  DeleteMachineGroupResponse deleteMachineGroupWithOptions(shared_ptr<string> project,
                                                           shared_ptr<string> machineGroup,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMachineGroupResponse deleteMachineGroup(shared_ptr<string> project, shared_ptr<string> machineGroup);
  DeleteProjectResponse deleteProjectWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectResponse deleteProject(shared_ptr<string> project);
  DeleteProjectPolicyResponse deleteProjectPolicyWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectPolicyResponse deleteProjectPolicy(shared_ptr<string> project);
  DeleteSavedSearchResponse deleteSavedSearchWithOptions(shared_ptr<string> project,
                                                         shared_ptr<string> savedsearchName,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSavedSearchResponse deleteSavedSearch(shared_ptr<string> project, shared_ptr<string> savedsearchName);
  DeleteShipperResponse deleteShipperWithOptions(shared_ptr<string> project,
                                                 shared_ptr<string> logstore,
                                                 shared_ptr<string> shipperName,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteShipperResponse deleteShipper(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<string> shipperName);
  GetAppliedConfigsResponse getAppliedConfigsWithOptions(shared_ptr<string> project,
                                                         shared_ptr<string> machineGroup,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppliedConfigsResponse getAppliedConfigs(shared_ptr<string> project, shared_ptr<string> machineGroup);
  GetAppliedMachineGroupsResponse getAppliedMachineGroupsWithOptions(shared_ptr<string> project,
                                                                     shared_ptr<string> configName,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppliedMachineGroupsResponse getAppliedMachineGroups(shared_ptr<string> project, shared_ptr<string> configName);
  GetCheckPointResponse getCheckPointWithOptions(shared_ptr<string> project,
                                                 shared_ptr<string> logstore,
                                                 shared_ptr<string> consumerGroup,
                                                 shared_ptr<GetCheckPointRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCheckPointResponse getCheckPoint(shared_ptr<string> project,
                                      shared_ptr<string> logstore,
                                      shared_ptr<string> consumerGroup,
                                      shared_ptr<GetCheckPointRequest> request);
  GetConfigResponse getConfigWithOptions(shared_ptr<string> project,
                                         shared_ptr<string> configName,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConfigResponse getConfig(shared_ptr<string> project, shared_ptr<string> configName);
  GetContextLogsResponse getContextLogsWithOptions(shared_ptr<string> project,
                                                   shared_ptr<string> logstore,
                                                   shared_ptr<GetContextLogsRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetContextLogsResponse getContextLogs(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<GetContextLogsRequest> request);
  GetCursorResponse getCursorWithOptions(shared_ptr<string> project,
                                         shared_ptr<string> logstore,
                                         shared_ptr<string> shardId,
                                         shared_ptr<GetCursorRequest> request,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCursorResponse getCursor(shared_ptr<string> project,
                              shared_ptr<string> logstore,
                              shared_ptr<string> shardId,
                              shared_ptr<GetCursorRequest> request);
  GetCursorTimeResponse getCursorTimeWithOptions(shared_ptr<string> project,
                                                 shared_ptr<string> logstore,
                                                 shared_ptr<string> shardId,
                                                 shared_ptr<GetCursorTimeRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCursorTimeResponse getCursorTime(shared_ptr<string> project,
                                      shared_ptr<string> logstore,
                                      shared_ptr<string> shardId,
                                      shared_ptr<GetCursorTimeRequest> request);
  GetDashboardResponse getDashboardWithOptions(shared_ptr<string> project,
                                               shared_ptr<string> dashboardName,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDashboardResponse getDashboard(shared_ptr<string> project, shared_ptr<string> dashboardName);
  GetExternalStoreResponse getExternalStoreWithOptions(shared_ptr<string> project,
                                                       shared_ptr<string> externalStoreName,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExternalStoreResponse getExternalStore(shared_ptr<string> project, shared_ptr<string> externalStoreName);
  GetHistogramsResponse getHistogramsWithOptions(shared_ptr<string> project,
                                                 shared_ptr<string> logstore,
                                                 shared_ptr<GetHistogramsRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHistogramsResponse getHistograms(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<GetHistogramsRequest> request);
  GetIndexResponse getIndexWithOptions(shared_ptr<string> project,
                                       shared_ptr<string> logstore,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIndexResponse getIndex(shared_ptr<string> project, shared_ptr<string> logstore);
  GetLogStoreResponse getLogStoreWithOptions(shared_ptr<string> project,
                                             shared_ptr<string> logstore,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogStoreResponse getLogStore(shared_ptr<string> project, shared_ptr<string> logstore);
  GetLoggingResponse getLoggingWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLoggingResponse getLogging(shared_ptr<string> project);
  GetLogsResponse getLogsWithOptions(shared_ptr<string> project,
                                     shared_ptr<string> logstore,
                                     shared_ptr<GetLogsRequest> request,
                                     shared_ptr<map<string, string>> headers,
                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogsResponse getLogs(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<GetLogsRequest> request);
  GetLogsV2Response getLogsV2WithOptions(shared_ptr<string> project,
                                         shared_ptr<string> logstore,
                                         shared_ptr<GetLogsV2Request> request,
                                         shared_ptr<GetLogsV2Headers> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogsV2Response getLogsV2(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<GetLogsV2Request> request);
  GetMachineGroupResponse getMachineGroupWithOptions(shared_ptr<string> project,
                                                     shared_ptr<string> machineGroup,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMachineGroupResponse getMachineGroup(shared_ptr<string> project, shared_ptr<string> machineGroup);
  GetProjectResponse getProjectWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResponse getProject(shared_ptr<string> project);
  GetProjectLogsResponse getProjectLogsWithOptions(shared_ptr<string> project,
                                                   shared_ptr<GetProjectLogsRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectLogsResponse getProjectLogs(shared_ptr<string> project, shared_ptr<GetProjectLogsRequest> request);
  GetProjectPolicyResponse getProjectPolicyWithOptions(shared_ptr<string> project, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectPolicyResponse getProjectPolicy(shared_ptr<string> project);
  GetSavedSearchResponse getSavedSearchWithOptions(shared_ptr<string> project,
                                                   shared_ptr<string> savedsearchName,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSavedSearchResponse getSavedSearch(shared_ptr<string> project, shared_ptr<string> savedsearchName);
  GetShipperStatusResponse getShipperStatusWithOptions(shared_ptr<string> project,
                                                       shared_ptr<string> logstore,
                                                       shared_ptr<string> shipperName,
                                                       shared_ptr<GetShipperStatusRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetShipperStatusResponse getShipperStatus(shared_ptr<string> project,
                                            shared_ptr<string> logstore,
                                            shared_ptr<string> shipperName,
                                            shared_ptr<GetShipperStatusRequest> request);
  ListConfigResponse listConfigWithOptions(shared_ptr<string> project,
                                           shared_ptr<ListConfigRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConfigResponse listConfig(shared_ptr<string> project, shared_ptr<ListConfigRequest> request);
  ListConsumerGroupResponse listConsumerGroupWithOptions(shared_ptr<string> project,
                                                         shared_ptr<string> logstore,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConsumerGroupResponse listConsumerGroup(shared_ptr<string> project, shared_ptr<string> logstore);
  ListDashboardResponse listDashboardWithOptions(shared_ptr<string> project,
                                                 shared_ptr<ListDashboardRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDashboardResponse listDashboard(shared_ptr<string> project, shared_ptr<ListDashboardRequest> request);
  ListDomainsResponse listDomainsWithOptions(shared_ptr<string> project,
                                             shared_ptr<ListDomainsRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDomainsResponse listDomains(shared_ptr<string> project, shared_ptr<ListDomainsRequest> request);
  ListExternalStoreResponse listExternalStoreWithOptions(shared_ptr<string> project,
                                                         shared_ptr<ListExternalStoreRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExternalStoreResponse listExternalStore(shared_ptr<string> project, shared_ptr<ListExternalStoreRequest> request);
  ListLogStoresResponse listLogStoresWithOptions(shared_ptr<string> project,
                                                 shared_ptr<ListLogStoresRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLogStoresResponse listLogStores(shared_ptr<string> project, shared_ptr<ListLogStoresRequest> request);
  ListMachineGroupResponse listMachineGroupWithOptions(shared_ptr<string> project,
                                                       shared_ptr<ListMachineGroupRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMachineGroupResponse listMachineGroup(shared_ptr<string> project, shared_ptr<ListMachineGroupRequest> request);
  ListMachinesResponse listMachinesWithOptions(shared_ptr<string> project,
                                               shared_ptr<string> machineGroup,
                                               shared_ptr<ListMachinesRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMachinesResponse listMachines(shared_ptr<string> project, shared_ptr<string> machineGroup, shared_ptr<ListMachinesRequest> request);
  ListProjectResponse listProjectWithOptions(shared_ptr<string> resourceGroupId,
                                             shared_ptr<ListProjectRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectResponse listProject(shared_ptr<string> resourceGroupId, shared_ptr<ListProjectRequest> request);
  ListSavedSearchResponse listSavedSearchWithOptions(shared_ptr<string> project,
                                                     shared_ptr<ListSavedSearchRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSavedSearchResponse listSavedSearch(shared_ptr<string> project, shared_ptr<ListSavedSearchRequest> request);
  ListShardsResponse listShardsWithOptions(shared_ptr<string> project,
                                           shared_ptr<string> logstore,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListShardsResponse listShards(shared_ptr<string> project, shared_ptr<string> logstore);
  ListShipperResponse listShipperWithOptions(shared_ptr<string> project,
                                             shared_ptr<string> logstore,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListShipperResponse listShipper(shared_ptr<string> project, shared_ptr<string> logstore);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  PullDataResponse pullDataWithOptions(shared_ptr<string> project,
                                       shared_ptr<string> logstore,
                                       shared_ptr<string> shard,
                                       shared_ptr<PullDataRequest> request,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PullDataResponse pullData(shared_ptr<string> project,
                            shared_ptr<string> logstore,
                            shared_ptr<string> shard,
                            shared_ptr<PullDataRequest> request);
  PutProjectPolicyResponse putProjectPolicyWithOptions(shared_ptr<string> project,
                                                       shared_ptr<PutProjectPolicyRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutProjectPolicyResponse putProjectPolicy(shared_ptr<string> project, shared_ptr<PutProjectPolicyRequest> request);
  PutWebtrackingResponse putWebtrackingWithOptions(shared_ptr<string> project,
                                                   shared_ptr<string> logstoreName,
                                                   shared_ptr<PutWebtrackingRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutWebtrackingResponse putWebtracking(shared_ptr<string> project, shared_ptr<string> logstoreName, shared_ptr<PutWebtrackingRequest> request);
  RemoveConfigFromMachineGroupResponse removeConfigFromMachineGroupWithOptions(shared_ptr<string> project,
                                                                               shared_ptr<string> machineGroup,
                                                                               shared_ptr<string> configName,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveConfigFromMachineGroupResponse removeConfigFromMachineGroup(shared_ptr<string> project, shared_ptr<string> machineGroup, shared_ptr<string> configName);
  SplitShardResponse splitShardWithOptions(shared_ptr<string> project,
                                           shared_ptr<string> logstore,
                                           shared_ptr<string> shard,
                                           shared_ptr<SplitShardRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SplitShardResponse splitShard(shared_ptr<string> project,
                                shared_ptr<string> logstore,
                                shared_ptr<string> shard,
                                shared_ptr<SplitShardRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateConfigResponse updateConfigWithOptions(shared_ptr<string> project,
                                               shared_ptr<string> configName,
                                               shared_ptr<UpdateConfigRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConfigResponse updateConfig(shared_ptr<string> project, shared_ptr<string> configName, shared_ptr<UpdateConfigRequest> request);
  UpdateConsumerGroupResponse updateConsumerGroupWithOptions(shared_ptr<string> project,
                                                             shared_ptr<string> logstore,
                                                             shared_ptr<string> consumerGroup,
                                                             shared_ptr<UpdateConsumerGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConsumerGroupResponse updateConsumerGroup(shared_ptr<string> project,
                                                  shared_ptr<string> logstore,
                                                  shared_ptr<string> consumerGroup,
                                                  shared_ptr<UpdateConsumerGroupRequest> request);
  UpdateDashboardResponse updateDashboardWithOptions(shared_ptr<string> project,
                                                     shared_ptr<string> dashboardName,
                                                     shared_ptr<UpdateDashboardRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDashboardResponse updateDashboard(shared_ptr<string> project, shared_ptr<string> dashboardName, shared_ptr<UpdateDashboardRequest> request);
  UpdateIndexResponse updateIndexWithOptions(shared_ptr<string> project,
                                             shared_ptr<string> logstore,
                                             shared_ptr<UpdateIndexRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIndexResponse updateIndex(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<UpdateIndexRequest> request);
  UpdateLogStoreResponse updateLogStoreWithOptions(shared_ptr<string> project,
                                                   shared_ptr<string> logstore,
                                                   shared_ptr<UpdateLogStoreRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLogStoreResponse updateLogStore(shared_ptr<string> project, shared_ptr<string> logstore, shared_ptr<UpdateLogStoreRequest> request);
  UpdateLoggingResponse updateLoggingWithOptions(shared_ptr<string> project,
                                                 shared_ptr<UpdateLoggingRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLoggingResponse updateLogging(shared_ptr<string> project, shared_ptr<UpdateLoggingRequest> request);
  UpdateMachineGroupResponse updateMachineGroupWithOptions(shared_ptr<string> project,
                                                           shared_ptr<string> groupName,
                                                           shared_ptr<UpdateMachineGroupRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMachineGroupResponse updateMachineGroup(shared_ptr<string> project, shared_ptr<string> groupName, shared_ptr<UpdateMachineGroupRequest> request);
  UpdateMachineGroupMachineResponse updateMachineGroupMachineWithOptions(shared_ptr<string> project,
                                                                         shared_ptr<string> machineGroup,
                                                                         shared_ptr<UpdateMachineGroupMachineRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMachineGroupMachineResponse updateMachineGroupMachine(shared_ptr<string> project, shared_ptr<string> machineGroup, shared_ptr<UpdateMachineGroupMachineRequest> request);
  UpdateOdpsShipperResponse updateOdpsShipperWithOptions(shared_ptr<string> project,
                                                         shared_ptr<string> logstore,
                                                         shared_ptr<string> shipperName,
                                                         shared_ptr<UpdateOdpsShipperRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOdpsShipperResponse updateOdpsShipper(shared_ptr<string> project,
                                              shared_ptr<string> logstore,
                                              shared_ptr<string> shipperName,
                                              shared_ptr<UpdateOdpsShipperRequest> request);
  UpdateOssExternalStoreResponse updateOssExternalStoreWithOptions(shared_ptr<string> project,
                                                                   shared_ptr<string> externalStoreName,
                                                                   shared_ptr<UpdateOssExternalStoreRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOssExternalStoreResponse updateOssExternalStore(shared_ptr<string> project, shared_ptr<string> externalStoreName, shared_ptr<UpdateOssExternalStoreRequest> request);
  UpdateOssShipperResponse updateOssShipperWithOptions(shared_ptr<string> project,
                                                       shared_ptr<string> logstore,
                                                       shared_ptr<string> shipperName,
                                                       shared_ptr<UpdateOssShipperRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOssShipperResponse updateOssShipper(shared_ptr<string> project,
                                            shared_ptr<string> logstore,
                                            shared_ptr<string> shipperName,
                                            shared_ptr<UpdateOssShipperRequest> request);
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<string> project,
                                                 shared_ptr<UpdateProjectRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<string> project, shared_ptr<UpdateProjectRequest> request);
  UpdateRdsExternalStoreResponse updateRdsExternalStoreWithOptions(shared_ptr<string> project,
                                                                   shared_ptr<string> externalStoreName,
                                                                   shared_ptr<UpdateRdsExternalStoreRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRdsExternalStoreResponse updateRdsExternalStore(shared_ptr<string> project, shared_ptr<string> externalStoreName, shared_ptr<UpdateRdsExternalStoreRequest> request);
  UpdateSavedSearchResponse updateSavedSearchWithOptions(shared_ptr<string> project,
                                                         shared_ptr<string> savedsearchName,
                                                         shared_ptr<UpdateSavedSearchRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSavedSearchResponse updateSavedSearch(shared_ptr<string> project, shared_ptr<string> savedsearchName, shared_ptr<UpdateSavedSearchRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Sls20201230

#endif
