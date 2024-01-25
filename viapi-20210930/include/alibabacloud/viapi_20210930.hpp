// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_VIAPI20210930_H_
#define ALIBABACLOUD_VIAPI20210930_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Viapi20210930 {
class AiStoreUserTask : public Darabonba::Model {
public:
  shared_ptr<string> apiDesc{};
  shared_ptr<string> apiName{};
  shared_ptr<string> bucketKeyPrefix{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> disableTime{};
  shared_ptr<string> enableTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> paramInfo{};
  shared_ptr<string> product{};
  shared_ptr<string> productDesc{};
  shared_ptr<string> receiveConfig{};
  shared_ptr<string> region{};
  shared_ptr<string> regionDesc{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};
  shared_ptr<string> taskVersion{};
  shared_ptr<string> version{};

  AiStoreUserTask() {}

  explicit AiStoreUserTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDesc) {
      res["ApiDesc"] = boost::any(*apiDesc);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (bucketKeyPrefix) {
      res["BucketKeyPrefix"] = boost::any(*bucketKeyPrefix);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (disableTime) {
      res["DisableTime"] = boost::any(*disableTime);
    }
    if (enableTime) {
      res["EnableTime"] = boost::any(*enableTime);
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
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (paramInfo) {
      res["ParamInfo"] = boost::any(*paramInfo);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (productDesc) {
      res["ProductDesc"] = boost::any(*productDesc);
    }
    if (receiveConfig) {
      res["ReceiveConfig"] = boost::any(*receiveConfig);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (regionDesc) {
      res["RegionDesc"] = boost::any(*regionDesc);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskVersion) {
      res["TaskVersion"] = boost::any(*taskVersion);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDesc") != m.end() && !m["ApiDesc"].empty()) {
      apiDesc = make_shared<string>(boost::any_cast<string>(m["ApiDesc"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("BucketKeyPrefix") != m.end() && !m["BucketKeyPrefix"].empty()) {
      bucketKeyPrefix = make_shared<string>(boost::any_cast<string>(m["BucketKeyPrefix"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("DisableTime") != m.end() && !m["DisableTime"].empty()) {
      disableTime = make_shared<string>(boost::any_cast<string>(m["DisableTime"]));
    }
    if (m.find("EnableTime") != m.end() && !m["EnableTime"].empty()) {
      enableTime = make_shared<string>(boost::any_cast<string>(m["EnableTime"]));
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParamInfo") != m.end() && !m["ParamInfo"].empty()) {
      paramInfo = make_shared<string>(boost::any_cast<string>(m["ParamInfo"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ProductDesc") != m.end() && !m["ProductDesc"].empty()) {
      productDesc = make_shared<string>(boost::any_cast<string>(m["ProductDesc"]));
    }
    if (m.find("ReceiveConfig") != m.end() && !m["ReceiveConfig"].empty()) {
      receiveConfig = make_shared<string>(boost::any_cast<string>(m["ReceiveConfig"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RegionDesc") != m.end() && !m["RegionDesc"].empty()) {
      regionDesc = make_shared<string>(boost::any_cast<string>(m["RegionDesc"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskVersion") != m.end() && !m["TaskVersion"].empty()) {
      taskVersion = make_shared<string>(boost::any_cast<string>(m["TaskVersion"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~AiStoreUserTask() = default;
};
class AiStoreApiNode : public Darabonba::Model {
public:
  shared_ptr<vector<AiStoreUserTask>> apis{};
  shared_ptr<string> product{};
  shared_ptr<string> productDesc{};

  AiStoreApiNode() {}

  explicit AiStoreApiNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apis) {
      vector<boost::any> temp1;
      for(auto item1:*apis){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Apis"] = boost::any(temp1);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (productDesc) {
      res["ProductDesc"] = boost::any(*productDesc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Apis") != m.end() && !m["Apis"].empty()) {
      if (typeid(vector<boost::any>) == m["Apis"].type()) {
        vector<AiStoreUserTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Apis"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AiStoreUserTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apis = make_shared<vector<AiStoreUserTask>>(expect1);
      }
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ProductDesc") != m.end() && !m["ProductDesc"].empty()) {
      productDesc = make_shared<string>(boost::any_cast<string>(m["ProductDesc"]));
    }
  }


  virtual ~AiStoreApiNode() = default;
};
class AiStoreReceiveConfigDingTalk : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> secret{};

  AiStoreReceiveConfigDingTalk() {}

  explicit AiStoreReceiveConfigDingTalk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (secret) {
      res["Secret"] = boost::any(*secret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Secret") != m.end() && !m["Secret"].empty()) {
      secret = make_shared<string>(boost::any_cast<string>(m["Secret"]));
    }
  }


  virtual ~AiStoreReceiveConfigDingTalk() = default;
};
class AiStoreReceiveConfigEventBridge : public Darabonba::Model {
public:
  shared_ptr<string> eventBus{};
  shared_ptr<string> eventRule{};

  AiStoreReceiveConfigEventBridge() {}

  explicit AiStoreReceiveConfigEventBridge(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventBus) {
      res["EventBus"] = boost::any(*eventBus);
    }
    if (eventRule) {
      res["EventRule"] = boost::any(*eventRule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventBus") != m.end() && !m["EventBus"].empty()) {
      eventBus = make_shared<string>(boost::any_cast<string>(m["EventBus"]));
    }
    if (m.find("EventRule") != m.end() && !m["EventRule"].empty()) {
      eventRule = make_shared<string>(boost::any_cast<string>(m["EventRule"]));
    }
  }


  virtual ~AiStoreReceiveConfigEventBridge() = default;
};
class AiStoreReceiveConfigHttp : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  AiStoreReceiveConfigHttp() {}

  explicit AiStoreReceiveConfigHttp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~AiStoreReceiveConfigHttp() = default;
};
class AiStoreReceiveConfigHttps : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  AiStoreReceiveConfigHttps() {}

  explicit AiStoreReceiveConfigHttps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~AiStoreReceiveConfigHttps() = default;
};
class AiStoreReceiveConfigMns : public Darabonba::Model {
public:
  shared_ptr<string> queue{};

  AiStoreReceiveConfigMns() {}

  explicit AiStoreReceiveConfigMns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queue) {
      res["Queue"] = boost::any(*queue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Queue") != m.end() && !m["Queue"].empty()) {
      queue = make_shared<string>(boost::any_cast<string>(m["Queue"]));
    }
  }


  virtual ~AiStoreReceiveConfigMns() = default;
};
class AiStoreReceiveConfigRocketMQ : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> topicName{};

  AiStoreReceiveConfigRocketMQ() {}

  explicit AiStoreReceiveConfigRocketMQ(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (topicName) {
      res["TopicName"] = boost::any(*topicName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TopicName") != m.end() && !m["TopicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["TopicName"]));
    }
  }


  virtual ~AiStoreReceiveConfigRocketMQ() = default;
};
class AiStoreReceiveConfig : public Darabonba::Model {
public:
  shared_ptr<string> custom{};
  shared_ptr<AiStoreReceiveConfigDingTalk> dingTalk{};
  shared_ptr<AiStoreReceiveConfigEventBridge> eventBridge{};
  shared_ptr<AiStoreReceiveConfigHttp> http{};
  shared_ptr<AiStoreReceiveConfigHttps> https{};
  shared_ptr<AiStoreReceiveConfigMns> mns{};
  shared_ptr<AiStoreReceiveConfigRocketMQ> rocketMQ{};

  AiStoreReceiveConfig() {}

  explicit AiStoreReceiveConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custom) {
      res["Custom"] = boost::any(*custom);
    }
    if (dingTalk) {
      res["DingTalk"] = dingTalk ? boost::any(dingTalk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (eventBridge) {
      res["EventBridge"] = eventBridge ? boost::any(eventBridge->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (http) {
      res["Http"] = http ? boost::any(http->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (https) {
      res["Https"] = https ? boost::any(https->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mns) {
      res["Mns"] = mns ? boost::any(mns->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rocketMQ) {
      res["RocketMQ"] = rocketMQ ? boost::any(rocketMQ->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Custom") != m.end() && !m["Custom"].empty()) {
      custom = make_shared<string>(boost::any_cast<string>(m["Custom"]));
    }
    if (m.find("DingTalk") != m.end() && !m["DingTalk"].empty()) {
      if (typeid(map<string, boost::any>) == m["DingTalk"].type()) {
        AiStoreReceiveConfigDingTalk model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DingTalk"]));
        dingTalk = make_shared<AiStoreReceiveConfigDingTalk>(model1);
      }
    }
    if (m.find("EventBridge") != m.end() && !m["EventBridge"].empty()) {
      if (typeid(map<string, boost::any>) == m["EventBridge"].type()) {
        AiStoreReceiveConfigEventBridge model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EventBridge"]));
        eventBridge = make_shared<AiStoreReceiveConfigEventBridge>(model1);
      }
    }
    if (m.find("Http") != m.end() && !m["Http"].empty()) {
      if (typeid(map<string, boost::any>) == m["Http"].type()) {
        AiStoreReceiveConfigHttp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Http"]));
        http = make_shared<AiStoreReceiveConfigHttp>(model1);
      }
    }
    if (m.find("Https") != m.end() && !m["Https"].empty()) {
      if (typeid(map<string, boost::any>) == m["Https"].type()) {
        AiStoreReceiveConfigHttps model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Https"]));
        https = make_shared<AiStoreReceiveConfigHttps>(model1);
      }
    }
    if (m.find("Mns") != m.end() && !m["Mns"].empty()) {
      if (typeid(map<string, boost::any>) == m["Mns"].type()) {
        AiStoreReceiveConfigMns model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Mns"]));
        mns = make_shared<AiStoreReceiveConfigMns>(model1);
      }
    }
    if (m.find("RocketMQ") != m.end() && !m["RocketMQ"].empty()) {
      if (typeid(map<string, boost::any>) == m["RocketMQ"].type()) {
        AiStoreReceiveConfigRocketMQ model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RocketMQ"]));
        rocketMQ = make_shared<AiStoreReceiveConfigRocketMQ>(model1);
      }
    }
  }


  virtual ~AiStoreReceiveConfig() = default;
};
class AiStoreTemplate : public Darabonba::Model {
public:
  shared_ptr<string> templateContext{};
  shared_ptr<string> templateVariable{};

  AiStoreTemplate() {}

  explicit AiStoreTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateContext) {
      res["TemplateContext"] = boost::any(*templateContext);
    }
    if (templateVariable) {
      res["TemplateVariable"] = boost::any(*templateVariable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateContext") != m.end() && !m["TemplateContext"].empty()) {
      templateContext = make_shared<string>(boost::any_cast<string>(m["TemplateContext"]));
    }
    if (m.find("TemplateVariable") != m.end() && !m["TemplateVariable"].empty()) {
      templateVariable = make_shared<string>(boost::any_cast<string>(m["TemplateVariable"]));
    }
  }


  virtual ~AiStoreTemplate() = default;
};
class CheckServiceLinkedRoleForDeletingRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> deletionTaskId{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> SPIRegionId{};
  shared_ptr<string> serviceName{};

  CheckServiceLinkedRoleForDeletingRequest() {}

  explicit CheckServiceLinkedRoleForDeletingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (deletionTaskId) {
      res["DeletionTaskId"] = boost::any(*deletionTaskId);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (SPIRegionId) {
      res["SPIRegionId"] = boost::any(*SPIRegionId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("DeletionTaskId") != m.end() && !m["DeletionTaskId"].empty()) {
      deletionTaskId = make_shared<string>(boost::any_cast<string>(m["DeletionTaskId"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("SPIRegionId") != m.end() && !m["SPIRegionId"].empty()) {
      SPIRegionId = make_shared<string>(boost::any_cast<string>(m["SPIRegionId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~CheckServiceLinkedRoleForDeletingRequest() = default;
};
class CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<vector<vector<uint8_t>>> resources{};

  CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages() {}

  explicit CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      vector<vector<uint8_t>> toVec1;
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Resources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<vector<uint8_t>>(item));
        }
      }
      resources = make_shared<vector<vector<uint8_t>>>(toVec1);
    }
  }


  virtual ~CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages() = default;
};
class CheckServiceLinkedRoleForDeletingResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> deletable{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages>> roleUsages{};

  CheckServiceLinkedRoleForDeletingResponseBody() {}

  explicit CheckServiceLinkedRoleForDeletingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletable) {
      res["Deletable"] = boost::any(*deletable);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleUsages) {
      vector<boost::any> temp1;
      for(auto item1:*roleUsages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoleUsages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Deletable") != m.end() && !m["Deletable"].empty()) {
      deletable = make_shared<bool>(boost::any_cast<bool>(m["Deletable"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleUsages") != m.end() && !m["RoleUsages"].empty()) {
      if (typeid(vector<boost::any>) == m["RoleUsages"].type()) {
        vector<CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoleUsages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roleUsages = make_shared<vector<CheckServiceLinkedRoleForDeletingResponseBodyRoleUsages>>(expect1);
      }
    }
  }


  virtual ~CheckServiceLinkedRoleForDeletingResponseBody() = default;
};
class CheckServiceLinkedRoleForDeletingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckServiceLinkedRoleForDeletingResponseBody> body{};

  CheckServiceLinkedRoleForDeletingResponse() {}

  explicit CheckServiceLinkedRoleForDeletingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckServiceLinkedRoleForDeletingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckServiceLinkedRoleForDeletingResponseBody>(model1);
      }
    }
  }


  virtual ~CheckServiceLinkedRoleForDeletingResponse() = default;
};
class CreateAiStoreBucketRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};

  CreateAiStoreBucketRequest() {}

  explicit CreateAiStoreBucketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
  }


  virtual ~CreateAiStoreBucketRequest() = default;
};
class CreateAiStoreBucketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  CreateAiStoreBucketResponseBody() {}

  explicit CreateAiStoreBucketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateAiStoreBucketResponseBody() = default;
};
class CreateAiStoreBucketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAiStoreBucketResponseBody> body{};

  CreateAiStoreBucketResponse() {}

  explicit CreateAiStoreBucketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAiStoreBucketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAiStoreBucketResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAiStoreBucketResponse() = default;
};
class CreateAiStoreReceiveConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> product{};

  CreateAiStoreReceiveConfigRequest() {}

  explicit CreateAiStoreReceiveConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
  }


  virtual ~CreateAiStoreReceiveConfigRequest() = default;
};
class CreateAiStoreReceiveConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<AiStoreReceiveConfig> data{};
  shared_ptr<string> requestId{};

  CreateAiStoreReceiveConfigResponseBody() {}

  explicit CreateAiStoreReceiveConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AiStoreReceiveConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AiStoreReceiveConfig>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAiStoreReceiveConfigResponseBody() = default;
};
class CreateAiStoreReceiveConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAiStoreReceiveConfigResponseBody> body{};

  CreateAiStoreReceiveConfigResponse() {}

  explicit CreateAiStoreReceiveConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAiStoreReceiveConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAiStoreReceiveConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAiStoreReceiveConfigResponse() = default;
};
class CreateAiStoreUserTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> bucketKeyPrefix{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> createConfig{};
  shared_ptr<string> name{};
  shared_ptr<string> paramInfo{};
  shared_ptr<string> product{};
  shared_ptr<string> receiveConfig{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};

  CreateAiStoreUserTaskRequest() {}

  explicit CreateAiStoreUserTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (bucketKeyPrefix) {
      res["BucketKeyPrefix"] = boost::any(*bucketKeyPrefix);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (createConfig) {
      res["CreateConfig"] = boost::any(*createConfig);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (paramInfo) {
      res["ParamInfo"] = boost::any(*paramInfo);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (receiveConfig) {
      res["ReceiveConfig"] = boost::any(*receiveConfig);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
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
    if (m.find("BucketKeyPrefix") != m.end() && !m["BucketKeyPrefix"].empty()) {
      bucketKeyPrefix = make_shared<string>(boost::any_cast<string>(m["BucketKeyPrefix"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("CreateConfig") != m.end() && !m["CreateConfig"].empty()) {
      createConfig = make_shared<string>(boost::any_cast<string>(m["CreateConfig"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParamInfo") != m.end() && !m["ParamInfo"].empty()) {
      paramInfo = make_shared<string>(boost::any_cast<string>(m["ParamInfo"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ReceiveConfig") != m.end() && !m["ReceiveConfig"].empty()) {
      receiveConfig = make_shared<string>(boost::any_cast<string>(m["ReceiveConfig"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateAiStoreUserTaskRequest() = default;
};
class CreateAiStoreUserTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> data{};
  shared_ptr<string> requestId{};

  CreateAiStoreUserTaskResponseBody() {}

  explicit CreateAiStoreUserTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateAiStoreUserTaskResponseBody() = default;
};
class CreateAiStoreUserTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAiStoreUserTaskResponseBody> body{};

  CreateAiStoreUserTaskResponse() {}

  explicit CreateAiStoreUserTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAiStoreUserTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAiStoreUserTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAiStoreUserTaskResponse() = default;
};
class DeleteAiStoreUserTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> aistoreVersion{};
  shared_ptr<long> id{};

  DeleteAiStoreUserTaskRequest() {}

  explicit DeleteAiStoreUserTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aistoreVersion) {
      res["AistoreVersion"] = boost::any(*aistoreVersion);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AistoreVersion") != m.end() && !m["AistoreVersion"].empty()) {
      aistoreVersion = make_shared<string>(boost::any_cast<string>(m["AistoreVersion"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DeleteAiStoreUserTaskRequest() = default;
};
class DeleteAiStoreUserTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  DeleteAiStoreUserTaskResponseBody() {}

  explicit DeleteAiStoreUserTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAiStoreUserTaskResponseBody() = default;
};
class DeleteAiStoreUserTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAiStoreUserTaskResponseBody> body{};

  DeleteAiStoreUserTaskResponse() {}

  explicit DeleteAiStoreUserTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAiStoreUserTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAiStoreUserTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAiStoreUserTaskResponse() = default;
};
class DisableAiStoreUserTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> aistoreVersion{};
  shared_ptr<long> id{};

  DisableAiStoreUserTaskRequest() {}

  explicit DisableAiStoreUserTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aistoreVersion) {
      res["AistoreVersion"] = boost::any(*aistoreVersion);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AistoreVersion") != m.end() && !m["AistoreVersion"].empty()) {
      aistoreVersion = make_shared<string>(boost::any_cast<string>(m["AistoreVersion"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DisableAiStoreUserTaskRequest() = default;
};
class DisableAiStoreUserTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  DisableAiStoreUserTaskResponseBody() {}

  explicit DisableAiStoreUserTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableAiStoreUserTaskResponseBody() = default;
};
class DisableAiStoreUserTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableAiStoreUserTaskResponseBody> body{};

  DisableAiStoreUserTaskResponse() {}

  explicit DisableAiStoreUserTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableAiStoreUserTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableAiStoreUserTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DisableAiStoreUserTaskResponse() = default;
};
class EnableAiStoreUserTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> aistoreVersion{};
  shared_ptr<long> id{};

  EnableAiStoreUserTaskRequest() {}

  explicit EnableAiStoreUserTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aistoreVersion) {
      res["AistoreVersion"] = boost::any(*aistoreVersion);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AistoreVersion") != m.end() && !m["AistoreVersion"].empty()) {
      aistoreVersion = make_shared<string>(boost::any_cast<string>(m["AistoreVersion"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~EnableAiStoreUserTaskRequest() = default;
};
class EnableAiStoreUserTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  EnableAiStoreUserTaskResponseBody() {}

  explicit EnableAiStoreUserTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableAiStoreUserTaskResponseBody() = default;
};
class EnableAiStoreUserTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableAiStoreUserTaskResponseBody> body{};

  EnableAiStoreUserTaskResponse() {}

  explicit EnableAiStoreUserTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableAiStoreUserTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableAiStoreUserTaskResponseBody>(model1);
      }
    }
  }


  virtual ~EnableAiStoreUserTaskResponse() = default;
};
class GetAiStoreReceiveConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> product{};

  GetAiStoreReceiveConfigRequest() {}

  explicit GetAiStoreReceiveConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
  }


  virtual ~GetAiStoreReceiveConfigRequest() = default;
};
class GetAiStoreReceiveConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<AiStoreReceiveConfig> data{};
  shared_ptr<string> requestId{};

  GetAiStoreReceiveConfigResponseBody() {}

  explicit GetAiStoreReceiveConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AiStoreReceiveConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AiStoreReceiveConfig>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAiStoreReceiveConfigResponseBody() = default;
};
class GetAiStoreReceiveConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAiStoreReceiveConfigResponseBody> body{};

  GetAiStoreReceiveConfigResponse() {}

  explicit GetAiStoreReceiveConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAiStoreReceiveConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAiStoreReceiveConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetAiStoreReceiveConfigResponse() = default;
};
class GetAiStoreUserTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  GetAiStoreUserTaskRequest() {}

  explicit GetAiStoreUserTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetAiStoreUserTaskRequest() = default;
};
class GetAiStoreUserTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<AiStoreUserTask> data{};
  shared_ptr<string> requestId{};

  GetAiStoreUserTaskResponseBody() {}

  explicit GetAiStoreUserTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AiStoreUserTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AiStoreUserTask>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAiStoreUserTaskResponseBody() = default;
};
class GetAiStoreUserTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAiStoreUserTaskResponseBody> body{};

  GetAiStoreUserTaskResponse() {}

  explicit GetAiStoreUserTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAiStoreUserTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAiStoreUserTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetAiStoreUserTaskResponse() = default;
};
class GetAiStoreUserTaskByNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  GetAiStoreUserTaskByNameRequest() {}

  explicit GetAiStoreUserTaskByNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetAiStoreUserTaskByNameRequest() = default;
};
class GetAiStoreUserTaskByNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<AiStoreUserTask> data{};
  shared_ptr<string> requestId{};

  GetAiStoreUserTaskByNameResponseBody() {}

  explicit GetAiStoreUserTaskByNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AiStoreUserTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AiStoreUserTask>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAiStoreUserTaskByNameResponseBody() = default;
};
class GetAiStoreUserTaskByNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAiStoreUserTaskByNameResponseBody> body{};

  GetAiStoreUserTaskByNameResponse() {}

  explicit GetAiStoreUserTaskByNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAiStoreUserTaskByNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAiStoreUserTaskByNameResponseBody>(model1);
      }
    }
  }


  virtual ~GetAiStoreUserTaskByNameResponse() = default;
};
class ListAiStoreBucketsRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> product{};

  ListAiStoreBucketsRequest() {}

  explicit ListAiStoreBucketsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
  }


  virtual ~ListAiStoreBucketsRequest() = default;
};
class ListAiStoreBucketsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> data{};
  shared_ptr<string> requestId{};

  ListAiStoreBucketsResponseBody() {}

  explicit ListAiStoreBucketsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAiStoreBucketsResponseBody() = default;
};
class ListAiStoreBucketsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAiStoreBucketsResponseBody> body{};

  ListAiStoreBucketsResponse() {}

  explicit ListAiStoreBucketsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAiStoreBucketsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAiStoreBucketsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAiStoreBucketsResponse() = default;
};
class QueryAiStoreApiTreeResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<AiStoreApiNode>> data{};
  shared_ptr<string> requestId{};

  QueryAiStoreApiTreeResponseBody() {}

  explicit QueryAiStoreApiTreeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<AiStoreApiNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AiStoreApiNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<AiStoreApiNode>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryAiStoreApiTreeResponseBody() = default;
};
class QueryAiStoreApiTreeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAiStoreApiTreeResponseBody> body{};

  QueryAiStoreApiTreeResponse() {}

  explicit QueryAiStoreApiTreeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAiStoreApiTreeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAiStoreApiTreeResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAiStoreApiTreeResponse() = default;
};
class QueryAiStoreRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<AiStoreUserTask>> data{};
  shared_ptr<string> requestId{};

  QueryAiStoreRegionsResponseBody() {}

  explicit QueryAiStoreRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<AiStoreUserTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AiStoreUserTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<AiStoreUserTask>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryAiStoreRegionsResponseBody() = default;
};
class QueryAiStoreRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAiStoreRegionsResponseBody> body{};

  QueryAiStoreRegionsResponse() {}

  explicit QueryAiStoreRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAiStoreRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAiStoreRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAiStoreRegionsResponse() = default;
};
class QueryAiStoreUserTaskPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> product{};
  shared_ptr<string> status{};

  QueryAiStoreUserTaskPageRequest() {}

  explicit QueryAiStoreUserTaskPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (product) {
      res["Product"] = boost::any(*product);
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
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryAiStoreUserTaskPageRequest() = default;
};
class QueryAiStoreUserTaskPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<AiStoreUserTask>> taskList{};
  shared_ptr<long> totalCount{};

  QueryAiStoreUserTaskPageResponseBodyData() {}

  explicit QueryAiStoreUserTaskPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("TaskList") != m.end() && !m["TaskList"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskList"].type()) {
        vector<AiStoreUserTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AiStoreUserTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskList = make_shared<vector<AiStoreUserTask>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryAiStoreUserTaskPageResponseBodyData() = default;
};
class QueryAiStoreUserTaskPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryAiStoreUserTaskPageResponseBodyData> data{};
  shared_ptr<string> requestId{};

  QueryAiStoreUserTaskPageResponseBody() {}

  explicit QueryAiStoreUserTaskPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAiStoreUserTaskPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryAiStoreUserTaskPageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryAiStoreUserTaskPageResponseBody() = default;
};
class QueryAiStoreUserTaskPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAiStoreUserTaskPageResponseBody> body{};

  QueryAiStoreUserTaskPageResponse() {}

  explicit QueryAiStoreUserTaskPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAiStoreUserTaskPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAiStoreUserTaskPageResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAiStoreUserTaskPageResponse() = default;
};
class UpdateAiStoreUserTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> bucketKeyPrefix{};
  shared_ptr<string> bucketName{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> paramInfo{};
  shared_ptr<string> product{};
  shared_ptr<string> receiveConfig{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};

  UpdateAiStoreUserTaskRequest() {}

  explicit UpdateAiStoreUserTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (bucketKeyPrefix) {
      res["BucketKeyPrefix"] = boost::any(*bucketKeyPrefix);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (paramInfo) {
      res["ParamInfo"] = boost::any(*paramInfo);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (receiveConfig) {
      res["ReceiveConfig"] = boost::any(*receiveConfig);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
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
    if (m.find("BucketKeyPrefix") != m.end() && !m["BucketKeyPrefix"].empty()) {
      bucketKeyPrefix = make_shared<string>(boost::any_cast<string>(m["BucketKeyPrefix"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParamInfo") != m.end() && !m["ParamInfo"].empty()) {
      paramInfo = make_shared<string>(boost::any_cast<string>(m["ParamInfo"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("ReceiveConfig") != m.end() && !m["ReceiveConfig"].empty()) {
      receiveConfig = make_shared<string>(boost::any_cast<string>(m["ReceiveConfig"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateAiStoreUserTaskRequest() = default;
};
class UpdateAiStoreUserTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  UpdateAiStoreUserTaskResponseBody() {}

  explicit UpdateAiStoreUserTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAiStoreUserTaskResponseBody() = default;
};
class UpdateAiStoreUserTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAiStoreUserTaskResponseBody> body{};

  UpdateAiStoreUserTaskResponse() {}

  explicit UpdateAiStoreUserTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAiStoreUserTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAiStoreUserTaskResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAiStoreUserTaskResponse() = default;
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
  CheckServiceLinkedRoleForDeletingResponse checkServiceLinkedRoleForDeletingWithOptions(shared_ptr<CheckServiceLinkedRoleForDeletingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckServiceLinkedRoleForDeletingResponse checkServiceLinkedRoleForDeleting(shared_ptr<CheckServiceLinkedRoleForDeletingRequest> request);
  CreateAiStoreBucketResponse createAiStoreBucketWithOptions(shared_ptr<CreateAiStoreBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAiStoreBucketResponse createAiStoreBucket(shared_ptr<CreateAiStoreBucketRequest> request);
  CreateAiStoreReceiveConfigResponse createAiStoreReceiveConfigWithOptions(shared_ptr<CreateAiStoreReceiveConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAiStoreReceiveConfigResponse createAiStoreReceiveConfig(shared_ptr<CreateAiStoreReceiveConfigRequest> request);
  CreateAiStoreUserTaskResponse createAiStoreUserTaskWithOptions(shared_ptr<CreateAiStoreUserTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAiStoreUserTaskResponse createAiStoreUserTask(shared_ptr<CreateAiStoreUserTaskRequest> request);
  DeleteAiStoreUserTaskResponse deleteAiStoreUserTaskWithOptions(shared_ptr<DeleteAiStoreUserTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAiStoreUserTaskResponse deleteAiStoreUserTask(shared_ptr<DeleteAiStoreUserTaskRequest> request);
  DisableAiStoreUserTaskResponse disableAiStoreUserTaskWithOptions(shared_ptr<DisableAiStoreUserTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableAiStoreUserTaskResponse disableAiStoreUserTask(shared_ptr<DisableAiStoreUserTaskRequest> request);
  EnableAiStoreUserTaskResponse enableAiStoreUserTaskWithOptions(shared_ptr<EnableAiStoreUserTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableAiStoreUserTaskResponse enableAiStoreUserTask(shared_ptr<EnableAiStoreUserTaskRequest> request);
  GetAiStoreReceiveConfigResponse getAiStoreReceiveConfigWithOptions(shared_ptr<GetAiStoreReceiveConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAiStoreReceiveConfigResponse getAiStoreReceiveConfig(shared_ptr<GetAiStoreReceiveConfigRequest> request);
  GetAiStoreUserTaskResponse getAiStoreUserTaskWithOptions(shared_ptr<GetAiStoreUserTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAiStoreUserTaskResponse getAiStoreUserTask(shared_ptr<GetAiStoreUserTaskRequest> request);
  GetAiStoreUserTaskByNameResponse getAiStoreUserTaskByNameWithOptions(shared_ptr<GetAiStoreUserTaskByNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAiStoreUserTaskByNameResponse getAiStoreUserTaskByName(shared_ptr<GetAiStoreUserTaskByNameRequest> request);
  ListAiStoreBucketsResponse listAiStoreBucketsWithOptions(shared_ptr<ListAiStoreBucketsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAiStoreBucketsResponse listAiStoreBuckets(shared_ptr<ListAiStoreBucketsRequest> request);
  QueryAiStoreApiTreeResponse queryAiStoreApiTreeWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAiStoreApiTreeResponse queryAiStoreApiTree();
  QueryAiStoreRegionsResponse queryAiStoreRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAiStoreRegionsResponse queryAiStoreRegions();
  QueryAiStoreUserTaskPageResponse queryAiStoreUserTaskPageWithOptions(shared_ptr<QueryAiStoreUserTaskPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAiStoreUserTaskPageResponse queryAiStoreUserTaskPage(shared_ptr<QueryAiStoreUserTaskPageRequest> request);
  UpdateAiStoreUserTaskResponse updateAiStoreUserTaskWithOptions(shared_ptr<UpdateAiStoreUserTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAiStoreUserTaskResponse updateAiStoreUserTask(shared_ptr<UpdateAiStoreUserTaskRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Viapi20210930

#endif
