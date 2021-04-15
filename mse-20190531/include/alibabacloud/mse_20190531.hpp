// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MSE20190531_H_
#define ALIBABACLOUD_MSE20190531_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Mse20190531 {
class AddMockRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> region{};
  shared_ptr<string> source{};
  shared_ptr<string> providerAppId{};
  shared_ptr<string> providerAppName{};
  shared_ptr<string> extraJson{};
  shared_ptr<string> scMockItems{};
  shared_ptr<string> dubboMockItems{};
  shared_ptr<string> consumerAppIds{};
  shared_ptr<bool> enable{};

  AddMockRuleRequest() {}

  explicit AddMockRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (providerAppId) {
      res["ProviderAppId"] = boost::any(*providerAppId);
    }
    if (providerAppName) {
      res["ProviderAppName"] = boost::any(*providerAppName);
    }
    if (extraJson) {
      res["ExtraJson"] = boost::any(*extraJson);
    }
    if (scMockItems) {
      res["ScMockItems"] = boost::any(*scMockItems);
    }
    if (dubboMockItems) {
      res["DubboMockItems"] = boost::any(*dubboMockItems);
    }
    if (consumerAppIds) {
      res["ConsumerAppIds"] = boost::any(*consumerAppIds);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("ProviderAppId") != m.end() && !m["ProviderAppId"].empty()) {
      providerAppId = make_shared<string>(boost::any_cast<string>(m["ProviderAppId"]));
    }
    if (m.find("ProviderAppName") != m.end() && !m["ProviderAppName"].empty()) {
      providerAppName = make_shared<string>(boost::any_cast<string>(m["ProviderAppName"]));
    }
    if (m.find("ExtraJson") != m.end() && !m["ExtraJson"].empty()) {
      extraJson = make_shared<string>(boost::any_cast<string>(m["ExtraJson"]));
    }
    if (m.find("ScMockItems") != m.end() && !m["ScMockItems"].empty()) {
      scMockItems = make_shared<string>(boost::any_cast<string>(m["ScMockItems"]));
    }
    if (m.find("DubboMockItems") != m.end() && !m["DubboMockItems"].empty()) {
      dubboMockItems = make_shared<string>(boost::any_cast<string>(m["DubboMockItems"]));
    }
    if (m.find("ConsumerAppIds") != m.end() && !m["ConsumerAppIds"].empty()) {
      consumerAppIds = make_shared<string>(boost::any_cast<string>(m["ConsumerAppIds"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
  }


  virtual ~AddMockRuleRequest() = default;
};
class AddMockRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> namespaceId{};
  shared_ptr<string> scMockItemJson{};
  shared_ptr<string> consumerAppName{};
  shared_ptr<string> consumerAppId{};
  shared_ptr<string> accountId{};
  shared_ptr<string> extraJson{};
  shared_ptr<string> source{};
  shared_ptr<string> region{};
  shared_ptr<string> providerAppId{};
  shared_ptr<string> providerAppName{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};
  shared_ptr<bool> enable{};

  AddMockRuleResponseBodyData() {}

  explicit AddMockRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (scMockItemJson) {
      res["ScMockItemJson"] = boost::any(*scMockItemJson);
    }
    if (consumerAppName) {
      res["ConsumerAppName"] = boost::any(*consumerAppName);
    }
    if (consumerAppId) {
      res["ConsumerAppId"] = boost::any(*consumerAppId);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (extraJson) {
      res["ExtraJson"] = boost::any(*extraJson);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (providerAppId) {
      res["ProviderAppId"] = boost::any(*providerAppId);
    }
    if (providerAppName) {
      res["ProviderAppName"] = boost::any(*providerAppName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("ScMockItemJson") != m.end() && !m["ScMockItemJson"].empty()) {
      scMockItemJson = make_shared<string>(boost::any_cast<string>(m["ScMockItemJson"]));
    }
    if (m.find("ConsumerAppName") != m.end() && !m["ConsumerAppName"].empty()) {
      consumerAppName = make_shared<string>(boost::any_cast<string>(m["ConsumerAppName"]));
    }
    if (m.find("ConsumerAppId") != m.end() && !m["ConsumerAppId"].empty()) {
      consumerAppId = make_shared<string>(boost::any_cast<string>(m["ConsumerAppId"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("ExtraJson") != m.end() && !m["ExtraJson"].empty()) {
      extraJson = make_shared<string>(boost::any_cast<string>(m["ExtraJson"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ProviderAppId") != m.end() && !m["ProviderAppId"].empty()) {
      providerAppId = make_shared<string>(boost::any_cast<string>(m["ProviderAppId"]));
    }
    if (m.find("ProviderAppName") != m.end() && !m["ProviderAppName"].empty()) {
      providerAppName = make_shared<string>(boost::any_cast<string>(m["ProviderAppName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
  }


  virtual ~AddMockRuleResponseBodyData() = default;
};
class AddMockRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<AddMockRuleResponseBodyData> data{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  AddMockRuleResponseBody() {}

  explicit AddMockRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddMockRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddMockRuleResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddMockRuleResponseBody() = default;
};
class AddMockRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddMockRuleResponseBody> body{};

  AddMockRuleResponse() {}

  explicit AddMockRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddMockRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddMockRuleResponseBody>(model1);
      }
    }
  }


  virtual ~AddMockRuleResponse() = default;
};
class CloneNacosConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> originNamespaceId{};
  shared_ptr<string> targetNamespaceId{};
  shared_ptr<string> policy{};
  shared_ptr<string> ids{};

  CloneNacosConfigRequest() {}

  explicit CloneNacosConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (originNamespaceId) {
      res["OriginNamespaceId"] = boost::any(*originNamespaceId);
    }
    if (targetNamespaceId) {
      res["TargetNamespaceId"] = boost::any(*targetNamespaceId);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OriginNamespaceId") != m.end() && !m["OriginNamespaceId"].empty()) {
      originNamespaceId = make_shared<string>(boost::any_cast<string>(m["OriginNamespaceId"]));
    }
    if (m.find("TargetNamespaceId") != m.end() && !m["TargetNamespaceId"].empty()) {
      targetNamespaceId = make_shared<string>(boost::any_cast<string>(m["TargetNamespaceId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
  }


  virtual ~CloneNacosConfigRequest() = default;
};
class CloneNacosConfigResponseBodyDataFailData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};

  CloneNacosConfigResponseBodyDataFailData() {}

  explicit CloneNacosConfigResponseBodyDataFailData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
  }


  virtual ~CloneNacosConfigResponseBodyDataFailData() = default;
};
class CloneNacosConfigResponseBodyDataSkipData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};

  CloneNacosConfigResponseBodyDataSkipData() {}

  explicit CloneNacosConfigResponseBodyDataSkipData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
  }


  virtual ~CloneNacosConfigResponseBodyDataSkipData() = default;
};
class CloneNacosConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> succCount{};
  shared_ptr<vector<CloneNacosConfigResponseBodyDataFailData>> failData{};
  shared_ptr<long> skipCount{};
  shared_ptr<vector<CloneNacosConfigResponseBodyDataSkipData>> skipData{};

  CloneNacosConfigResponseBodyData() {}

  explicit CloneNacosConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (succCount) {
      res["SuccCount"] = boost::any(*succCount);
    }
    if (failData) {
      vector<boost::any> temp1;
      for(auto item1:*failData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailData"] = boost::any(temp1);
    }
    if (skipCount) {
      res["SkipCount"] = boost::any(*skipCount);
    }
    if (skipData) {
      vector<boost::any> temp1;
      for(auto item1:*skipData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkipData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SuccCount") != m.end() && !m["SuccCount"].empty()) {
      succCount = make_shared<long>(boost::any_cast<long>(m["SuccCount"]));
    }
    if (m.find("FailData") != m.end() && !m["FailData"].empty()) {
      if (typeid(vector<boost::any>) == m["FailData"].type()) {
        vector<CloneNacosConfigResponseBodyDataFailData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CloneNacosConfigResponseBodyDataFailData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failData = make_shared<vector<CloneNacosConfigResponseBodyDataFailData>>(expect1);
      }
    }
    if (m.find("SkipCount") != m.end() && !m["SkipCount"].empty()) {
      skipCount = make_shared<long>(boost::any_cast<long>(m["SkipCount"]));
    }
    if (m.find("SkipData") != m.end() && !m["SkipData"].empty()) {
      if (typeid(vector<boost::any>) == m["SkipData"].type()) {
        vector<CloneNacosConfigResponseBodyDataSkipData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkipData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CloneNacosConfigResponseBodyDataSkipData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skipData = make_shared<vector<CloneNacosConfigResponseBodyDataSkipData>>(expect1);
      }
    }
  }


  virtual ~CloneNacosConfigResponseBodyData() = default;
};
class CloneNacosConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<CloneNacosConfigResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  CloneNacosConfigResponseBody() {}

  explicit CloneNacosConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CloneNacosConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CloneNacosConfigResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CloneNacosConfigResponseBody() = default;
};
class CloneNacosConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CloneNacosConfigResponseBody> body{};

  CloneNacosConfigResponse() {}

  explicit CloneNacosConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CloneNacosConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneNacosConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CloneNacosConfigResponse() = default;
};
class CreateAlarmRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> alarmAliasName{};
  shared_ptr<map<string, boost::any>> alertWay{};
  shared_ptr<map<string, boost::any>> contactGroupIds{};
  shared_ptr<string> alarmItem{};
  shared_ptr<string> operator_{};
  shared_ptr<string> aggregates{};
  shared_ptr<long> NValue{};
  shared_ptr<double> value{};

  CreateAlarmRuleRequest() {}

  explicit CreateAlarmRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (alarmAliasName) {
      res["AlarmAliasName"] = boost::any(*alarmAliasName);
    }
    if (alertWay) {
      res["AlertWay"] = boost::any(*alertWay);
    }
    if (contactGroupIds) {
      res["ContactGroupIds"] = boost::any(*contactGroupIds);
    }
    if (alarmItem) {
      res["AlarmItem"] = boost::any(*alarmItem);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (aggregates) {
      res["Aggregates"] = boost::any(*aggregates);
    }
    if (NValue) {
      res["NValue"] = boost::any(*NValue);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AlarmAliasName") != m.end() && !m["AlarmAliasName"].empty()) {
      alarmAliasName = make_shared<string>(boost::any_cast<string>(m["AlarmAliasName"]));
    }
    if (m.find("AlertWay") != m.end() && !m["AlertWay"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["AlertWay"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      alertWay = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ContactGroupIds") != m.end() && !m["ContactGroupIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ContactGroupIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      contactGroupIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("AlarmItem") != m.end() && !m["AlarmItem"].empty()) {
      alarmItem = make_shared<string>(boost::any_cast<string>(m["AlarmItem"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Aggregates") != m.end() && !m["Aggregates"].empty()) {
      aggregates = make_shared<string>(boost::any_cast<string>(m["Aggregates"]));
    }
    if (m.find("NValue") != m.end() && !m["NValue"].empty()) {
      NValue = make_shared<long>(boost::any_cast<long>(m["NValue"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~CreateAlarmRuleRequest() = default;
};
class CreateAlarmRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> alarmAliasName{};
  shared_ptr<string> alertWayShrink{};
  shared_ptr<string> contactGroupIdsShrink{};
  shared_ptr<string> alarmItem{};
  shared_ptr<string> operator_{};
  shared_ptr<string> aggregates{};
  shared_ptr<long> NValue{};
  shared_ptr<double> value{};

  CreateAlarmRuleShrinkRequest() {}

  explicit CreateAlarmRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (alarmAliasName) {
      res["AlarmAliasName"] = boost::any(*alarmAliasName);
    }
    if (alertWayShrink) {
      res["AlertWay"] = boost::any(*alertWayShrink);
    }
    if (contactGroupIdsShrink) {
      res["ContactGroupIds"] = boost::any(*contactGroupIdsShrink);
    }
    if (alarmItem) {
      res["AlarmItem"] = boost::any(*alarmItem);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (aggregates) {
      res["Aggregates"] = boost::any(*aggregates);
    }
    if (NValue) {
      res["NValue"] = boost::any(*NValue);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AlarmAliasName") != m.end() && !m["AlarmAliasName"].empty()) {
      alarmAliasName = make_shared<string>(boost::any_cast<string>(m["AlarmAliasName"]));
    }
    if (m.find("AlertWay") != m.end() && !m["AlertWay"].empty()) {
      alertWayShrink = make_shared<string>(boost::any_cast<string>(m["AlertWay"]));
    }
    if (m.find("ContactGroupIds") != m.end() && !m["ContactGroupIds"].empty()) {
      contactGroupIdsShrink = make_shared<string>(boost::any_cast<string>(m["ContactGroupIds"]));
    }
    if (m.find("AlarmItem") != m.end() && !m["AlarmItem"].empty()) {
      alarmItem = make_shared<string>(boost::any_cast<string>(m["AlarmItem"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Aggregates") != m.end() && !m["Aggregates"].empty()) {
      aggregates = make_shared<string>(boost::any_cast<string>(m["Aggregates"]));
    }
    if (m.find("NValue") != m.end() && !m["NValue"].empty()) {
      NValue = make_shared<long>(boost::any_cast<long>(m["NValue"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~CreateAlarmRuleShrinkRequest() = default;
};
class CreateAlarmRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  CreateAlarmRuleResponseBody() {}

  explicit CreateAlarmRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateAlarmRuleResponseBody() = default;
};
class CreateAlarmRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAlarmRuleResponseBody> body{};

  CreateAlarmRuleResponse() {}

  explicit CreateAlarmRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAlarmRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAlarmRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAlarmRuleResponse() = default;
};
class CreateApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> region{};
  shared_ptr<string> source{};
  shared_ptr<string> language{};
  shared_ptr<string> extraInfo{};

  CreateApplicationRequest() {}

  explicit CreateApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
  }


  virtual ~CreateApplicationRequest() = default;
};
class CreateApplicationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> appName{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> licenseKey{};
  shared_ptr<long> createTime{};
  shared_ptr<string> appId{};
  shared_ptr<string> userId{};
  shared_ptr<string> source{};
  shared_ptr<string> language{};
  shared_ptr<string> regionId{};

  CreateApplicationResponseBodyData() {}

  explicit CreateApplicationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (licenseKey) {
      res["LicenseKey"] = boost::any(*licenseKey);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("LicenseKey") != m.end() && !m["LicenseKey"].empty()) {
      licenseKey = make_shared<string>(boost::any_cast<string>(m["LicenseKey"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateApplicationResponseBodyData() = default;
};
class CreateApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateApplicationResponseBodyData> data{};
  shared_ptr<long> code{};
  shared_ptr<string> success{};
  shared_ptr<long> httpStatusCode{};

  CreateApplicationResponseBody() {}

  explicit CreateApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateApplicationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateApplicationResponseBodyData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~CreateApplicationResponseBody() = default;
};
class CreateApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateApplicationResponseBody> body{};

  CreateApplicationResponse() {}

  explicit CreateApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApplicationResponse() = default;
};
class CreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> pubNetworkFlow{};
  shared_ptr<string> pubSlbSpecification{};
  shared_ptr<string> diskType{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> netType{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<long> instanceCount{};
  shared_ptr<string> clusterSpecification{};
  shared_ptr<string> clusterVersion{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> region{};
  shared_ptr<string> privateSlbSpecification{};
  shared_ptr<string> connectionType{};
  shared_ptr<string> requestPars{};
  shared_ptr<long> diskCapacity{};

  CreateClusterRequest() {}

  explicit CreateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pubNetworkFlow) {
      res["PubNetworkFlow"] = boost::any(*pubNetworkFlow);
    }
    if (pubSlbSpecification) {
      res["PubSlbSpecification"] = boost::any(*pubSlbSpecification);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (clusterSpecification) {
      res["ClusterSpecification"] = boost::any(*clusterSpecification);
    }
    if (clusterVersion) {
      res["ClusterVersion"] = boost::any(*clusterVersion);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (privateSlbSpecification) {
      res["PrivateSlbSpecification"] = boost::any(*privateSlbSpecification);
    }
    if (connectionType) {
      res["ConnectionType"] = boost::any(*connectionType);
    }
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (diskCapacity) {
      res["DiskCapacity"] = boost::any(*diskCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PubNetworkFlow") != m.end() && !m["PubNetworkFlow"].empty()) {
      pubNetworkFlow = make_shared<string>(boost::any_cast<string>(m["PubNetworkFlow"]));
    }
    if (m.find("PubSlbSpecification") != m.end() && !m["PubSlbSpecification"].empty()) {
      pubSlbSpecification = make_shared<string>(boost::any_cast<string>(m["PubSlbSpecification"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("ClusterSpecification") != m.end() && !m["ClusterSpecification"].empty()) {
      clusterSpecification = make_shared<string>(boost::any_cast<string>(m["ClusterSpecification"]));
    }
    if (m.find("ClusterVersion") != m.end() && !m["ClusterVersion"].empty()) {
      clusterVersion = make_shared<string>(boost::any_cast<string>(m["ClusterVersion"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("PrivateSlbSpecification") != m.end() && !m["PrivateSlbSpecification"].empty()) {
      privateSlbSpecification = make_shared<string>(boost::any_cast<string>(m["PrivateSlbSpecification"]));
    }
    if (m.find("ConnectionType") != m.end() && !m["ConnectionType"].empty()) {
      connectionType = make_shared<string>(boost::any_cast<string>(m["ConnectionType"]));
    }
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("DiskCapacity") != m.end() && !m["DiskCapacity"].empty()) {
      diskCapacity = make_shared<long>(boost::any_cast<long>(m["DiskCapacity"]));
    }
  }


  virtual ~CreateClusterRequest() = default;
};
class CreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> orderId{};
  shared_ptr<bool> success{};

  CreateClusterResponseBody() {}

  explicit CreateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateClusterResponseBody() = default;
};
class CreateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateClusterResponseBody> body{};

  CreateClusterResponse() {}

  explicit CreateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClusterResponse() = default;
};
class CreateEngineNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> name{};
  shared_ptr<string> desc{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> serviceCount{};

  CreateEngineNamespaceRequest() {}

  explicit CreateEngineNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (serviceCount) {
      res["ServiceCount"] = boost::any(*serviceCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ServiceCount") != m.end() && !m["ServiceCount"].empty()) {
      serviceCount = make_shared<long>(boost::any_cast<long>(m["ServiceCount"]));
    }
  }


  virtual ~CreateEngineNamespaceRequest() = default;
};
class CreateEngineNamespaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> namespaceShowName{};
  shared_ptr<long> quota{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceDesc{};
  shared_ptr<long> configCount{};
  shared_ptr<long> serviceCount{};

  CreateEngineNamespaceResponseBodyData() {}

  explicit CreateEngineNamespaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (namespaceShowName) {
      res["NamespaceShowName"] = boost::any(*namespaceShowName);
    }
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceDesc) {
      res["NamespaceDesc"] = boost::any(*namespaceDesc);
    }
    if (configCount) {
      res["ConfigCount"] = boost::any(*configCount);
    }
    if (serviceCount) {
      res["ServiceCount"] = boost::any(*serviceCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("NamespaceShowName") != m.end() && !m["NamespaceShowName"].empty()) {
      namespaceShowName = make_shared<string>(boost::any_cast<string>(m["NamespaceShowName"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<long>(boost::any_cast<long>(m["Quota"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceDesc") != m.end() && !m["NamespaceDesc"].empty()) {
      namespaceDesc = make_shared<string>(boost::any_cast<string>(m["NamespaceDesc"]));
    }
    if (m.find("ConfigCount") != m.end() && !m["ConfigCount"].empty()) {
      configCount = make_shared<long>(boost::any_cast<long>(m["ConfigCount"]));
    }
    if (m.find("ServiceCount") != m.end() && !m["ServiceCount"].empty()) {
      serviceCount = make_shared<long>(boost::any_cast<long>(m["ServiceCount"]));
    }
  }


  virtual ~CreateEngineNamespaceResponseBodyData() = default;
};
class CreateEngineNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> clusterId{};
  shared_ptr<CreateEngineNamespaceResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  CreateEngineNamespaceResponseBody() {}

  explicit CreateEngineNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateEngineNamespaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateEngineNamespaceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateEngineNamespaceResponseBody() = default;
};
class CreateEngineNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateEngineNamespaceResponseBody> body{};

  CreateEngineNamespaceResponse() {}

  explicit CreateEngineNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateEngineNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEngineNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEngineNamespaceResponse() = default;
};
class CreateNacosConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> appName{};
  shared_ptr<string> tags{};
  shared_ptr<string> desc{};
  shared_ptr<string> type{};
  shared_ptr<string> content{};
  shared_ptr<string> namespaceId{};

  CreateNacosConfigRequest() {}

  explicit CreateNacosConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~CreateNacosConfigRequest() = default;
};
class CreateNacosConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  CreateNacosConfigResponseBody() {}

  explicit CreateNacosConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateNacosConfigResponseBody() = default;
};
class CreateNacosConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateNacosConfigResponseBody> body{};

  CreateNacosConfigResponse() {}

  explicit CreateNacosConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateNacosConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNacosConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNacosConfigResponse() = default;
};
class CreateZnodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> path{};
  shared_ptr<string> data{};

  CreateZnodeRequest() {}

  explicit CreateZnodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~CreateZnodeRequest() = default;
};
class CreateZnodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> path{};
  shared_ptr<bool> dir{};
  shared_ptr<string> name{};

  CreateZnodeResponseBodyData() {}

  explicit CreateZnodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<bool>(boost::any_cast<bool>(m["Dir"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateZnodeResponseBodyData() = default;
};
class CreateZnodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateZnodeResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  CreateZnodeResponseBody() {}

  explicit CreateZnodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateZnodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateZnodeResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateZnodeResponseBody() = default;
};
class CreateZnodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateZnodeResponseBody> body{};

  CreateZnodeResponse() {}

  explicit CreateZnodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateZnodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateZnodeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateZnodeResponse() = default;
};
class DeleteAlarmRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<string> alarmRuleId{};

  DeleteAlarmRuleRequest() {}

  explicit DeleteAlarmRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (alarmRuleId) {
      res["AlarmRuleId"] = boost::any(*alarmRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("AlarmRuleId") != m.end() && !m["AlarmRuleId"].empty()) {
      alarmRuleId = make_shared<string>(boost::any_cast<string>(m["AlarmRuleId"]));
    }
  }


  virtual ~DeleteAlarmRuleRequest() = default;
};
class DeleteAlarmRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DeleteAlarmRuleResponseBody() {}

  explicit DeleteAlarmRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteAlarmRuleResponseBody() = default;
};
class DeleteAlarmRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAlarmRuleResponseBody> body{};

  DeleteAlarmRuleResponse() {}

  explicit DeleteAlarmRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAlarmRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAlarmRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAlarmRuleResponse() = default;
};
class DeleteClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteClusterRequest() {}

  explicit DeleteClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteClusterRequest() = default;
};
class DeleteClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DeleteClusterResponseBody() {}

  explicit DeleteClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteClusterResponseBody() = default;
};
class DeleteClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteClusterResponseBody> body{};

  DeleteClusterResponse() {}

  explicit DeleteClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteClusterResponse() = default;
};
class DeleteEngineNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> clusterId{};

  DeleteEngineNamespaceRequest() {}

  explicit DeleteEngineNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DeleteEngineNamespaceRequest() = default;
};
class DeleteEngineNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DeleteEngineNamespaceResponseBody() {}

  explicit DeleteEngineNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteEngineNamespaceResponseBody() = default;
};
class DeleteEngineNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteEngineNamespaceResponseBody> body{};

  DeleteEngineNamespaceResponse() {}

  explicit DeleteEngineNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEngineNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEngineNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEngineNamespaceResponse() = default;
};
class DeleteNacosConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> namespaceId{};

  DeleteNacosConfigRequest() {}

  explicit DeleteNacosConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~DeleteNacosConfigRequest() = default;
};
class DeleteNacosConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  DeleteNacosConfigResponseBody() {}

  explicit DeleteNacosConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteNacosConfigResponseBody() = default;
};
class DeleteNacosConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteNacosConfigResponseBody> body{};

  DeleteNacosConfigResponse() {}

  explicit DeleteNacosConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteNacosConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNacosConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNacosConfigResponse() = default;
};
class DeleteNacosConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> ids{};
  shared_ptr<string> namespaceId{};

  DeleteNacosConfigsRequest() {}

  explicit DeleteNacosConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~DeleteNacosConfigsRequest() = default;
};
class DeleteNacosConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  DeleteNacosConfigsResponseBody() {}

  explicit DeleteNacosConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteNacosConfigsResponseBody() = default;
};
class DeleteNacosConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteNacosConfigsResponseBody> body{};

  DeleteNacosConfigsResponse() {}

  explicit DeleteNacosConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteNacosConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNacosConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNacosConfigsResponse() = default;
};
class DeleteNacosServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> groupName{};
  shared_ptr<string> namespaceId{};

  DeleteNacosServiceRequest() {}

  explicit DeleteNacosServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~DeleteNacosServiceRequest() = default;
};
class DeleteNacosServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> data{};

  DeleteNacosServiceResponseBody() {}

  explicit DeleteNacosServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~DeleteNacosServiceResponseBody() = default;
};
class DeleteNacosServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteNacosServiceResponseBody> body{};

  DeleteNacosServiceResponse() {}

  explicit DeleteNacosServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteNacosServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNacosServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNacosServiceResponse() = default;
};
class DeleteZnodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> path{};

  DeleteZnodeRequest() {}

  explicit DeleteZnodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~DeleteZnodeRequest() = default;
};
class DeleteZnodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> path{};
  shared_ptr<bool> dir{};
  shared_ptr<string> name{};

  DeleteZnodeResponseBodyData() {}

  explicit DeleteZnodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<bool>(boost::any_cast<bool>(m["Dir"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DeleteZnodeResponseBodyData() = default;
};
class DeleteZnodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DeleteZnodeResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  DeleteZnodeResponseBody() {}

  explicit DeleteZnodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteZnodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteZnodeResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteZnodeResponseBody() = default;
};
class DeleteZnodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteZnodeResponseBody> body{};

  DeleteZnodeResponse() {}

  explicit DeleteZnodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteZnodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteZnodeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteZnodeResponse() = default;
};
class ExportNacosConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> ids{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> appName{};

  ExportNacosConfigRequest() {}

  explicit ExportNacosConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
  }


  virtual ~ExportNacosConfigRequest() = default;
};
class ExportNacosConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  ExportNacosConfigResponseBodyData() {}

  explicit ExportNacosConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExportNacosConfigResponseBodyData() = default;
};
class ExportNacosConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<ExportNacosConfigResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  ExportNacosConfigResponseBody() {}

  explicit ExportNacosConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ExportNacosConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ExportNacosConfigResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExportNacosConfigResponseBody() = default;
};
class ExportNacosConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExportNacosConfigResponseBody> body{};

  ExportNacosConfigResponse() {}

  explicit ExportNacosConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExportNacosConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportNacosConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ExportNacosConfigResponse() = default;
};
class GetEngineNamepaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> clusterId{};

  GetEngineNamepaceRequest() {}

  explicit GetEngineNamepaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~GetEngineNamepaceRequest() = default;
};
class GetEngineNamepaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<string> type{};
  shared_ptr<string> quota{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> configCount{};
  shared_ptr<string> namespaceShowName{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<string> namespaceDesc{};
  shared_ptr<string> namespace_{};

  GetEngineNamepaceResponseBody() {}

  explicit GetEngineNamepaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (configCount) {
      res["ConfigCount"] = boost::any(*configCount);
    }
    if (namespaceShowName) {
      res["NamespaceShowName"] = boost::any(*namespaceShowName);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (namespaceDesc) {
      res["NamespaceDesc"] = boost::any(*namespaceDesc);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<string>(boost::any_cast<string>(m["Quota"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ConfigCount") != m.end() && !m["ConfigCount"].empty()) {
      configCount = make_shared<string>(boost::any_cast<string>(m["ConfigCount"]));
    }
    if (m.find("NamespaceShowName") != m.end() && !m["NamespaceShowName"].empty()) {
      namespaceShowName = make_shared<string>(boost::any_cast<string>(m["NamespaceShowName"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("NamespaceDesc") != m.end() && !m["NamespaceDesc"].empty()) {
      namespaceDesc = make_shared<string>(boost::any_cast<string>(m["NamespaceDesc"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
  }


  virtual ~GetEngineNamepaceResponseBody() = default;
};
class GetEngineNamepaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEngineNamepaceResponseBody> body{};

  GetEngineNamepaceResponse() {}

  explicit GetEngineNamepaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEngineNamepaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEngineNamepaceResponseBody>(model1);
      }
    }
  }


  virtual ~GetEngineNamepaceResponse() = default;
};
class GetImportFileUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> contentType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};

  GetImportFileUrlRequest() {}

  explicit GetImportFileUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~GetImportFileUrlRequest() = default;
};
class GetImportFileUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  GetImportFileUrlResponseBodyData() {}

  explicit GetImportFileUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetImportFileUrlResponseBodyData() = default;
};
class GetImportFileUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<GetImportFileUrlResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  GetImportFileUrlResponseBody() {}

  explicit GetImportFileUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetImportFileUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetImportFileUrlResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetImportFileUrlResponseBody() = default;
};
class GetImportFileUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetImportFileUrlResponseBody> body{};

  GetImportFileUrlResponse() {}

  explicit GetImportFileUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetImportFileUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImportFileUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GetImportFileUrlResponse() = default;
};
class GetNacosConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> namespaceId{};

  GetNacosConfigRequest() {}

  explicit GetNacosConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~GetNacosConfigRequest() = default;
};
class GetNacosConfigResponseBodyConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> appName{};
  shared_ptr<string> tags{};
  shared_ptr<string> md5{};
  shared_ptr<string> dataId{};
  shared_ptr<string> content{};
  shared_ptr<string> group{};
  shared_ptr<string> desc{};

  GetNacosConfigResponseBodyConfiguration() {}

  explicit GetNacosConfigResponseBodyConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
  }


  virtual ~GetNacosConfigResponseBodyConfiguration() = default;
};
class GetNacosConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetNacosConfigResponseBodyConfiguration> configuration{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  GetNacosConfigResponseBody() {}

  explicit GetNacosConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (configuration) {
      res["Configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Configuration") != m.end() && !m["Configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["Configuration"].type()) {
        GetNacosConfigResponseBodyConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Configuration"]));
        configuration = make_shared<GetNacosConfigResponseBodyConfiguration>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetNacosConfigResponseBody() = default;
};
class GetNacosConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetNacosConfigResponseBody> body{};

  GetNacosConfigResponse() {}

  explicit GetNacosConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetNacosConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNacosConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetNacosConfigResponse() = default;
};
class GetNacosHistoryConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> nid{};

  GetNacosHistoryConfigRequest() {}

  explicit GetNacosHistoryConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (nid) {
      res["Nid"] = boost::any(*nid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("Nid") != m.end() && !m["Nid"].empty()) {
      nid = make_shared<string>(boost::any_cast<string>(m["Nid"]));
    }
  }


  virtual ~GetNacosHistoryConfigRequest() = default;
};
class GetNacosHistoryConfigResponseBodyConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> md5{};
  shared_ptr<string> dataId{};
  shared_ptr<string> content{};
  shared_ptr<string> group{};
  shared_ptr<string> opType{};

  GetNacosHistoryConfigResponseBodyConfiguration() {}

  explicit GetNacosHistoryConfigResponseBodyConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (opType) {
      res["OpType"] = boost::any(*opType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("OpType") != m.end() && !m["OpType"].empty()) {
      opType = make_shared<string>(boost::any_cast<string>(m["OpType"]));
    }
  }


  virtual ~GetNacosHistoryConfigResponseBodyConfiguration() = default;
};
class GetNacosHistoryConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetNacosHistoryConfigResponseBodyConfiguration> configuration{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  GetNacosHistoryConfigResponseBody() {}

  explicit GetNacosHistoryConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (configuration) {
      res["Configuration"] = configuration ? boost::any(configuration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Configuration") != m.end() && !m["Configuration"].empty()) {
      if (typeid(map<string, boost::any>) == m["Configuration"].type()) {
        GetNacosHistoryConfigResponseBodyConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Configuration"]));
        configuration = make_shared<GetNacosHistoryConfigResponseBodyConfiguration>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetNacosHistoryConfigResponseBody() = default;
};
class GetNacosHistoryConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetNacosHistoryConfigResponseBody> body{};

  GetNacosHistoryConfigResponse() {}

  explicit GetNacosHistoryConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetNacosHistoryConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNacosHistoryConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetNacosHistoryConfigResponse() = default;
};
class GetOverviewRequest : public Darabonba::Model {
public:
  shared_ptr<long> period{};
  shared_ptr<string> region{};

  GetOverviewRequest() {}

  explicit GetOverviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~GetOverviewRequest() = default;
};
class GetOverviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<long> code{};
  shared_ptr<string> success{};
  shared_ptr<long> httpStatusCode{};

  GetOverviewResponseBody() {}

  explicit GetOverviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
  }


  virtual ~GetOverviewResponseBody() = default;
};
class GetOverviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOverviewResponseBody> body{};

  GetOverviewResponse() {}

  explicit GetOverviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetOverviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOverviewResponseBody>(model1);
      }
    }
  }


  virtual ~GetOverviewResponse() = default;
};
class ImportNacosConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> policy{};
  shared_ptr<string> fileUrl{};

  ImportNacosConfigRequest() {}

  explicit ImportNacosConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
  }


  virtual ~ImportNacosConfigRequest() = default;
};
class ImportNacosConfigResponseBodyDataFailData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};

  ImportNacosConfigResponseBodyDataFailData() {}

  explicit ImportNacosConfigResponseBodyDataFailData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
  }


  virtual ~ImportNacosConfigResponseBodyDataFailData() = default;
};
class ImportNacosConfigResponseBodyDataSkipData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};

  ImportNacosConfigResponseBodyDataSkipData() {}

  explicit ImportNacosConfigResponseBodyDataSkipData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
  }


  virtual ~ImportNacosConfigResponseBodyDataSkipData() = default;
};
class ImportNacosConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> succCount{};
  shared_ptr<vector<ImportNacosConfigResponseBodyDataFailData>> failData{};
  shared_ptr<long> skipCount{};
  shared_ptr<vector<ImportNacosConfigResponseBodyDataSkipData>> skipData{};

  ImportNacosConfigResponseBodyData() {}

  explicit ImportNacosConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (succCount) {
      res["SuccCount"] = boost::any(*succCount);
    }
    if (failData) {
      vector<boost::any> temp1;
      for(auto item1:*failData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailData"] = boost::any(temp1);
    }
    if (skipCount) {
      res["SkipCount"] = boost::any(*skipCount);
    }
    if (skipData) {
      vector<boost::any> temp1;
      for(auto item1:*skipData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SkipData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SuccCount") != m.end() && !m["SuccCount"].empty()) {
      succCount = make_shared<long>(boost::any_cast<long>(m["SuccCount"]));
    }
    if (m.find("FailData") != m.end() && !m["FailData"].empty()) {
      if (typeid(vector<boost::any>) == m["FailData"].type()) {
        vector<ImportNacosConfigResponseBodyDataFailData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportNacosConfigResponseBodyDataFailData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failData = make_shared<vector<ImportNacosConfigResponseBodyDataFailData>>(expect1);
      }
    }
    if (m.find("SkipCount") != m.end() && !m["SkipCount"].empty()) {
      skipCount = make_shared<long>(boost::any_cast<long>(m["SkipCount"]));
    }
    if (m.find("SkipData") != m.end() && !m["SkipData"].empty()) {
      if (typeid(vector<boost::any>) == m["SkipData"].type()) {
        vector<ImportNacosConfigResponseBodyDataSkipData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SkipData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportNacosConfigResponseBodyDataSkipData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skipData = make_shared<vector<ImportNacosConfigResponseBodyDataSkipData>>(expect1);
      }
    }
  }


  virtual ~ImportNacosConfigResponseBodyData() = default;
};
class ImportNacosConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<ImportNacosConfigResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  ImportNacosConfigResponseBody() {}

  explicit ImportNacosConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ImportNacosConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ImportNacosConfigResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ImportNacosConfigResponseBody() = default;
};
class ImportNacosConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ImportNacosConfigResponseBody> body{};

  ImportNacosConfigResponse() {}

  explicit ImportNacosConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ImportNacosConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportNacosConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ImportNacosConfigResponse() = default;
};
class ListAlarmContactGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListAlarmContactGroupsRequest() {}

  explicit ListAlarmContactGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListAlarmContactGroupsRequest() = default;
};
class ListAlarmContactGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> contactGroupName{};
  shared_ptr<string> contactGroupId{};

  ListAlarmContactGroupsResponseBodyData() {}

  explicit ListAlarmContactGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactGroupName) {
      res["ContactGroupName"] = boost::any(*contactGroupName);
    }
    if (contactGroupId) {
      res["ContactGroupId"] = boost::any(*contactGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactGroupName") != m.end() && !m["ContactGroupName"].empty()) {
      contactGroupName = make_shared<string>(boost::any_cast<string>(m["ContactGroupName"]));
    }
    if (m.find("ContactGroupId") != m.end() && !m["ContactGroupId"].empty()) {
      contactGroupId = make_shared<string>(boost::any_cast<string>(m["ContactGroupId"]));
    }
  }


  virtual ~ListAlarmContactGroupsResponseBodyData() = default;
};
class ListAlarmContactGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListAlarmContactGroupsResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ListAlarmContactGroupsResponseBody() {}

  explicit ListAlarmContactGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAlarmContactGroupsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlarmContactGroupsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAlarmContactGroupsResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAlarmContactGroupsResponseBody() = default;
};
class ListAlarmContactGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAlarmContactGroupsResponseBody> body{};

  ListAlarmContactGroupsResponse() {}

  explicit ListAlarmContactGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAlarmContactGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlarmContactGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlarmContactGroupsResponse() = default;
};
class ListAlarmHistoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> alarmMseType{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> alarmName{};

  ListAlarmHistoriesRequest() {}

  explicit ListAlarmHistoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (alarmMseType) {
      res["AlarmMseType"] = boost::any(*alarmMseType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("AlarmMseType") != m.end() && !m["AlarmMseType"].empty()) {
      alarmMseType = make_shared<string>(boost::any_cast<string>(m["AlarmMseType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
  }


  virtual ~ListAlarmHistoriesRequest() = default;
};
class ListAlarmHistoriesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alarmTime{};
  shared_ptr<string> alarmEmail{};
  shared_ptr<string> alarmDingDing{};
  shared_ptr<string> alarmPhone{};
  shared_ptr<string> alarmName{};
  shared_ptr<string> alarmContent{};

  ListAlarmHistoriesResponseBodyData() {}

  explicit ListAlarmHistoriesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmTime) {
      res["AlarmTime"] = boost::any(*alarmTime);
    }
    if (alarmEmail) {
      res["AlarmEmail"] = boost::any(*alarmEmail);
    }
    if (alarmDingDing) {
      res["AlarmDingDing"] = boost::any(*alarmDingDing);
    }
    if (alarmPhone) {
      res["AlarmPhone"] = boost::any(*alarmPhone);
    }
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    if (alarmContent) {
      res["AlarmContent"] = boost::any(*alarmContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmTime") != m.end() && !m["AlarmTime"].empty()) {
      alarmTime = make_shared<string>(boost::any_cast<string>(m["AlarmTime"]));
    }
    if (m.find("AlarmEmail") != m.end() && !m["AlarmEmail"].empty()) {
      alarmEmail = make_shared<string>(boost::any_cast<string>(m["AlarmEmail"]));
    }
    if (m.find("AlarmDingDing") != m.end() && !m["AlarmDingDing"].empty()) {
      alarmDingDing = make_shared<string>(boost::any_cast<string>(m["AlarmDingDing"]));
    }
    if (m.find("AlarmPhone") != m.end() && !m["AlarmPhone"].empty()) {
      alarmPhone = make_shared<string>(boost::any_cast<string>(m["AlarmPhone"]));
    }
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
    if (m.find("AlarmContent") != m.end() && !m["AlarmContent"].empty()) {
      alarmContent = make_shared<string>(boost::any_cast<string>(m["AlarmContent"]));
    }
  }


  virtual ~ListAlarmHistoriesResponseBodyData() = default;
};
class ListAlarmHistoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListAlarmHistoriesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ListAlarmHistoriesResponseBody() {}

  explicit ListAlarmHistoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAlarmHistoriesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlarmHistoriesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAlarmHistoriesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAlarmHistoriesResponseBody() = default;
};
class ListAlarmHistoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAlarmHistoriesResponseBody> body{};

  ListAlarmHistoriesResponse() {}

  explicit ListAlarmHistoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAlarmHistoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlarmHistoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlarmHistoriesResponse() = default;
};
class ListAlarmItemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};

  ListAlarmItemsRequest() {}

  explicit ListAlarmItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
  }


  virtual ~ListAlarmItemsRequest() = default;
};
class ListAlarmItemsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alarmDesc{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> alarmCode{};

  ListAlarmItemsResponseBodyData() {}

  explicit ListAlarmItemsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmDesc) {
      res["AlarmDesc"] = boost::any(*alarmDesc);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (alarmCode) {
      res["AlarmCode"] = boost::any(*alarmCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmDesc") != m.end() && !m["AlarmDesc"].empty()) {
      alarmDesc = make_shared<string>(boost::any_cast<string>(m["AlarmDesc"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("AlarmCode") != m.end() && !m["AlarmCode"].empty()) {
      alarmCode = make_shared<string>(boost::any_cast<string>(m["AlarmCode"]));
    }
  }


  virtual ~ListAlarmItemsResponseBodyData() = default;
};
class ListAlarmItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListAlarmItemsResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ListAlarmItemsResponseBody() {}

  explicit ListAlarmItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAlarmItemsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlarmItemsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAlarmItemsResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAlarmItemsResponseBody() = default;
};
class ListAlarmItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAlarmItemsResponseBody> body{};

  ListAlarmItemsResponse() {}

  explicit ListAlarmItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAlarmItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlarmItemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlarmItemsResponse() = default;
};
class ListAlarmRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> alarmMseType{};

  ListAlarmRulesRequest() {}

  explicit ListAlarmRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (alarmMseType) {
      res["AlarmMseType"] = boost::any(*alarmMseType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("AlarmMseType") != m.end() && !m["AlarmMseType"].empty()) {
      alarmMseType = make_shared<string>(boost::any_cast<string>(m["AlarmMseType"]));
    }
  }


  virtual ~ListAlarmRulesRequest() = default;
};
class ListAlarmRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> alarmStatus{};
  shared_ptr<string> alarmRuleId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> alarmRuleDetail{};
  shared_ptr<string> alarmName{};

  ListAlarmRulesResponseBodyData() {}

  explicit ListAlarmRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmStatus) {
      res["AlarmStatus"] = boost::any(*alarmStatus);
    }
    if (alarmRuleId) {
      res["AlarmRuleId"] = boost::any(*alarmRuleId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (alarmRuleDetail) {
      res["AlarmRuleDetail"] = boost::any(*alarmRuleDetail);
    }
    if (alarmName) {
      res["AlarmName"] = boost::any(*alarmName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmStatus") != m.end() && !m["AlarmStatus"].empty()) {
      alarmStatus = make_shared<string>(boost::any_cast<string>(m["AlarmStatus"]));
    }
    if (m.find("AlarmRuleId") != m.end() && !m["AlarmRuleId"].empty()) {
      alarmRuleId = make_shared<string>(boost::any_cast<string>(m["AlarmRuleId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("AlarmRuleDetail") != m.end() && !m["AlarmRuleDetail"].empty()) {
      alarmRuleDetail = make_shared<string>(boost::any_cast<string>(m["AlarmRuleDetail"]));
    }
    if (m.find("AlarmName") != m.end() && !m["AlarmName"].empty()) {
      alarmName = make_shared<string>(boost::any_cast<string>(m["AlarmName"]));
    }
  }


  virtual ~ListAlarmRulesResponseBodyData() = default;
};
class ListAlarmRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListAlarmRulesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ListAlarmRulesResponseBody() {}

  explicit ListAlarmRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAlarmRulesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAlarmRulesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAlarmRulesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAlarmRulesResponseBody() = default;
};
class ListAlarmRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAlarmRulesResponseBody> body{};

  ListAlarmRulesResponse() {}

  explicit ListAlarmRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAlarmRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAlarmRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAlarmRulesResponse() = default;
};
class ListAnsInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> groupName{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> clusterName{};

  ListAnsInstancesRequest() {}

  explicit ListAnsInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
  }


  virtual ~ListAnsInstancesRequest() = default;
};
class ListAnsInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> defaultKey{};
  shared_ptr<bool> ephemeral{};
  shared_ptr<bool> marked{};
  shared_ptr<string> ip{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> port{};
  shared_ptr<long> lastBeat{};
  shared_ptr<long> okCount{};
  shared_ptr<long> weight{};
  shared_ptr<long> instanceHeartBeatInterval{};
  shared_ptr<long> ipDeleteTimeout{};
  shared_ptr<string> app{};
  shared_ptr<long> failCount{};
  shared_ptr<bool> healthy{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> datumKey{};
  shared_ptr<string> clusterName{};
  shared_ptr<long> instanceHeartBeatTimeOut{};
  shared_ptr<string> serviceName{};
  shared_ptr<map<string, boost::any>> metadata{};

  ListAnsInstancesResponseBodyData() {}

  explicit ListAnsInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultKey) {
      res["DefaultKey"] = boost::any(*defaultKey);
    }
    if (ephemeral) {
      res["Ephemeral"] = boost::any(*ephemeral);
    }
    if (marked) {
      res["Marked"] = boost::any(*marked);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (lastBeat) {
      res["LastBeat"] = boost::any(*lastBeat);
    }
    if (okCount) {
      res["OkCount"] = boost::any(*okCount);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (instanceHeartBeatInterval) {
      res["InstanceHeartBeatInterval"] = boost::any(*instanceHeartBeatInterval);
    }
    if (ipDeleteTimeout) {
      res["IpDeleteTimeout"] = boost::any(*ipDeleteTimeout);
    }
    if (app) {
      res["App"] = boost::any(*app);
    }
    if (failCount) {
      res["FailCount"] = boost::any(*failCount);
    }
    if (healthy) {
      res["Healthy"] = boost::any(*healthy);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (datumKey) {
      res["DatumKey"] = boost::any(*datumKey);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (instanceHeartBeatTimeOut) {
      res["InstanceHeartBeatTimeOut"] = boost::any(*instanceHeartBeatTimeOut);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultKey") != m.end() && !m["DefaultKey"].empty()) {
      defaultKey = make_shared<string>(boost::any_cast<string>(m["DefaultKey"]));
    }
    if (m.find("Ephemeral") != m.end() && !m["Ephemeral"].empty()) {
      ephemeral = make_shared<bool>(boost::any_cast<bool>(m["Ephemeral"]));
    }
    if (m.find("Marked") != m.end() && !m["Marked"].empty()) {
      marked = make_shared<bool>(boost::any_cast<bool>(m["Marked"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("LastBeat") != m.end() && !m["LastBeat"].empty()) {
      lastBeat = make_shared<long>(boost::any_cast<long>(m["LastBeat"]));
    }
    if (m.find("OkCount") != m.end() && !m["OkCount"].empty()) {
      okCount = make_shared<long>(boost::any_cast<long>(m["OkCount"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("InstanceHeartBeatInterval") != m.end() && !m["InstanceHeartBeatInterval"].empty()) {
      instanceHeartBeatInterval = make_shared<long>(boost::any_cast<long>(m["InstanceHeartBeatInterval"]));
    }
    if (m.find("IpDeleteTimeout") != m.end() && !m["IpDeleteTimeout"].empty()) {
      ipDeleteTimeout = make_shared<long>(boost::any_cast<long>(m["IpDeleteTimeout"]));
    }
    if (m.find("App") != m.end() && !m["App"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("FailCount") != m.end() && !m["FailCount"].empty()) {
      failCount = make_shared<long>(boost::any_cast<long>(m["FailCount"]));
    }
    if (m.find("Healthy") != m.end() && !m["Healthy"].empty()) {
      healthy = make_shared<bool>(boost::any_cast<bool>(m["Healthy"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("DatumKey") != m.end() && !m["DatumKey"].empty()) {
      datumKey = make_shared<string>(boost::any_cast<string>(m["DatumKey"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("InstanceHeartBeatTimeOut") != m.end() && !m["InstanceHeartBeatTimeOut"].empty()) {
      instanceHeartBeatTimeOut = make_shared<long>(boost::any_cast<long>(m["InstanceHeartBeatTimeOut"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListAnsInstancesResponseBodyData() = default;
};
class ListAnsInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListAnsInstancesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ListAnsInstancesResponseBody() {}

  explicit ListAnsInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAnsInstancesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAnsInstancesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAnsInstancesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAnsInstancesResponseBody() = default;
};
class ListAnsInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAnsInstancesResponseBody> body{};

  ListAnsInstancesResponse() {}

  explicit ListAnsInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAnsInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAnsInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAnsInstancesResponse() = default;
};
class ListAnsServiceClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> groupName{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> clusterName{};

  ListAnsServiceClustersRequest() {}

  explicit ListAnsServiceClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
  }


  virtual ~ListAnsServiceClustersRequest() = default;
};
class ListAnsServiceClustersResponseBodyDataClusters : public Darabonba::Model {
public:
  shared_ptr<long> defaultCheckPort{};
  shared_ptr<string> healthCheckerType{};
  shared_ptr<bool> useIPPort4Check{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> name{};
  shared_ptr<long> defaultPort{};
  shared_ptr<map<string, boost::any>> metadata{};

  ListAnsServiceClustersResponseBodyDataClusters() {}

  explicit ListAnsServiceClustersResponseBodyDataClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultCheckPort) {
      res["DefaultCheckPort"] = boost::any(*defaultCheckPort);
    }
    if (healthCheckerType) {
      res["HealthCheckerType"] = boost::any(*healthCheckerType);
    }
    if (useIPPort4Check) {
      res["UseIPPort4Check"] = boost::any(*useIPPort4Check);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (defaultPort) {
      res["DefaultPort"] = boost::any(*defaultPort);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultCheckPort") != m.end() && !m["DefaultCheckPort"].empty()) {
      defaultCheckPort = make_shared<long>(boost::any_cast<long>(m["DefaultCheckPort"]));
    }
    if (m.find("HealthCheckerType") != m.end() && !m["HealthCheckerType"].empty()) {
      healthCheckerType = make_shared<string>(boost::any_cast<string>(m["HealthCheckerType"]));
    }
    if (m.find("UseIPPort4Check") != m.end() && !m["UseIPPort4Check"].empty()) {
      useIPPort4Check = make_shared<bool>(boost::any_cast<bool>(m["UseIPPort4Check"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("DefaultPort") != m.end() && !m["DefaultPort"].empty()) {
      defaultPort = make_shared<long>(boost::any_cast<long>(m["DefaultPort"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListAnsServiceClustersResponseBodyDataClusters() = default;
};
class ListAnsServiceClustersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> protectThreshold{};
  shared_ptr<string> groupName{};
  shared_ptr<vector<ListAnsServiceClustersResponseBodyDataClusters>> clusters{};
  shared_ptr<string> name{};
  shared_ptr<string> selectorType{};
  shared_ptr<map<string, boost::any>> metadata{};

  ListAnsServiceClustersResponseBodyData() {}

  explicit ListAnsServiceClustersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (protectThreshold) {
      res["ProtectThreshold"] = boost::any(*protectThreshold);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (clusters) {
      vector<boost::any> temp1;
      for(auto item1:*clusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clusters"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (selectorType) {
      res["SelectorType"] = boost::any(*selectorType);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProtectThreshold") != m.end() && !m["ProtectThreshold"].empty()) {
      protectThreshold = make_shared<double>(boost::any_cast<double>(m["ProtectThreshold"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<ListAnsServiceClustersResponseBodyDataClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAnsServiceClustersResponseBodyDataClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusters = make_shared<vector<ListAnsServiceClustersResponseBodyDataClusters>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SelectorType") != m.end() && !m["SelectorType"].empty()) {
      selectorType = make_shared<string>(boost::any_cast<string>(m["SelectorType"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListAnsServiceClustersResponseBodyData() = default;
};
class ListAnsServiceClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ListAnsServiceClustersResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ListAnsServiceClustersResponseBody() {}

  explicit ListAnsServiceClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListAnsServiceClustersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAnsServiceClustersResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAnsServiceClustersResponseBody() = default;
};
class ListAnsServiceClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAnsServiceClustersResponseBody> body{};

  ListAnsServiceClustersResponse() {}

  explicit ListAnsServiceClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAnsServiceClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAnsServiceClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListAnsServiceClustersResponse() = default;
};
class ListAnsServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> groupName{};
  shared_ptr<string> hasIpCount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> namespaceId{};

  ListAnsServicesRequest() {}

  explicit ListAnsServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (hasIpCount) {
      res["HasIpCount"] = boost::any(*hasIpCount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("HasIpCount") != m.end() && !m["HasIpCount"].empty()) {
      hasIpCount = make_shared<string>(boost::any_cast<string>(m["HasIpCount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~ListAnsServicesRequest() = default;
};
class ListAnsServicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> healthyInstanceCount{};
  shared_ptr<string> groupName{};
  shared_ptr<long> ipCount{};
  shared_ptr<string> name{};
  shared_ptr<long> clusterCount{};

  ListAnsServicesResponseBodyData() {}

  explicit ListAnsServicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthyInstanceCount) {
      res["HealthyInstanceCount"] = boost::any(*healthyInstanceCount);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (ipCount) {
      res["IpCount"] = boost::any(*ipCount);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (clusterCount) {
      res["ClusterCount"] = boost::any(*clusterCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthyInstanceCount") != m.end() && !m["HealthyInstanceCount"].empty()) {
      healthyInstanceCount = make_shared<long>(boost::any_cast<long>(m["HealthyInstanceCount"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("IpCount") != m.end() && !m["IpCount"].empty()) {
      ipCount = make_shared<long>(boost::any_cast<long>(m["IpCount"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ClusterCount") != m.end() && !m["ClusterCount"].empty()) {
      clusterCount = make_shared<long>(boost::any_cast<long>(m["ClusterCount"]));
    }
  }


  virtual ~ListAnsServicesResponseBodyData() = default;
};
class ListAnsServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListAnsServicesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ListAnsServicesResponseBody() {}

  explicit ListAnsServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAnsServicesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAnsServicesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAnsServicesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAnsServicesResponseBody() = default;
};
class ListAnsServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAnsServicesResponseBody> body{};

  ListAnsServicesResponse() {}

  explicit ListAnsServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAnsServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAnsServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAnsServicesResponse() = default;
};
class ListClusterConnectionTypesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> showName{};

  ListClusterConnectionTypesResponseBodyData() {}

  explicit ListClusterConnectionTypesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (showName) {
      res["ShowName"] = boost::any(*showName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShowName") != m.end() && !m["ShowName"].empty()) {
      showName = make_shared<string>(boost::any_cast<string>(m["ShowName"]));
    }
  }


  virtual ~ListClusterConnectionTypesResponseBodyData() = default;
};
class ListClusterConnectionTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<ListClusterConnectionTypesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  ListClusterConnectionTypesResponseBody() {}

  explicit ListClusterConnectionTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
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
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListClusterConnectionTypesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterConnectionTypesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListClusterConnectionTypesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListClusterConnectionTypesResponseBody() = default;
};
class ListClusterConnectionTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListClusterConnectionTypesResponseBody> body{};

  ListClusterConnectionTypesResponse() {}

  explicit ListClusterConnectionTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListClusterConnectionTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterConnectionTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterConnectionTypesResponse() = default;
};
class ListClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> clusterAliasName{};
  shared_ptr<string> regionId{};

  ListClustersRequest() {}

  explicit ListClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (clusterAliasName) {
      res["ClusterAliasName"] = boost::any(*clusterAliasName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ClusterAliasName") != m.end() && !m["ClusterAliasName"].empty()) {
      clusterAliasName = make_shared<string>(boost::any_cast<string>(m["ClusterAliasName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListClustersRequest() = default;
};
class ListClustersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> intranetDomain{};
  shared_ptr<string> internetDomain{};
  shared_ptr<string> createTime{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> intranetAddress{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> internetAddress{};
  shared_ptr<string> clusterAliasName{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> initStatus{};
  shared_ptr<string> appVersion{};

  ListClustersResponseBodyData() {}

  explicit ListClustersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (intranetDomain) {
      res["IntranetDomain"] = boost::any(*intranetDomain);
    }
    if (internetDomain) {
      res["InternetDomain"] = boost::any(*internetDomain);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (intranetAddress) {
      res["IntranetAddress"] = boost::any(*intranetAddress);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (internetAddress) {
      res["InternetAddress"] = boost::any(*internetAddress);
    }
    if (clusterAliasName) {
      res["ClusterAliasName"] = boost::any(*clusterAliasName);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (initStatus) {
      res["InitStatus"] = boost::any(*initStatus);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("IntranetDomain") != m.end() && !m["IntranetDomain"].empty()) {
      intranetDomain = make_shared<string>(boost::any_cast<string>(m["IntranetDomain"]));
    }
    if (m.find("InternetDomain") != m.end() && !m["InternetDomain"].empty()) {
      internetDomain = make_shared<string>(boost::any_cast<string>(m["InternetDomain"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("IntranetAddress") != m.end() && !m["IntranetAddress"].empty()) {
      intranetAddress = make_shared<string>(boost::any_cast<string>(m["IntranetAddress"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InternetAddress") != m.end() && !m["InternetAddress"].empty()) {
      internetAddress = make_shared<string>(boost::any_cast<string>(m["InternetAddress"]));
    }
    if (m.find("ClusterAliasName") != m.end() && !m["ClusterAliasName"].empty()) {
      clusterAliasName = make_shared<string>(boost::any_cast<string>(m["ClusterAliasName"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("InitStatus") != m.end() && !m["InitStatus"].empty()) {
      initStatus = make_shared<string>(boost::any_cast<string>(m["InitStatus"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
  }


  virtual ~ListClustersResponseBodyData() = default;
};
class ListClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListClustersResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ListClustersResponseBody() {}

  explicit ListClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListClustersResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListClustersResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListClustersResponseBody() = default;
};
class ListClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListClustersResponseBody> body{};

  ListClustersResponse() {}

  explicit ListClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListClustersResponse() = default;
};
class ListClusterTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListClusterTypesRequest() {}

  explicit ListClusterTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListClusterTypesRequest() = default;
};
class ListClusterTypesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> showName{};

  ListClusterTypesResponseBodyData() {}

  explicit ListClusterTypesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (showName) {
      res["ShowName"] = boost::any(*showName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShowName") != m.end() && !m["ShowName"].empty()) {
      showName = make_shared<string>(boost::any_cast<string>(m["ShowName"]));
    }
  }


  virtual ~ListClusterTypesResponseBodyData() = default;
};
class ListClusterTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<ListClusterTypesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  ListClusterTypesResponseBody() {}

  explicit ListClusterTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
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
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListClusterTypesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterTypesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListClusterTypesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListClusterTypesResponseBody() = default;
};
class ListClusterTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListClusterTypesResponseBody> body{};

  ListClusterTypesResponse() {}

  explicit ListClusterTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListClusterTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterTypesResponse() = default;
};
class ListClusterVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterType{};

  ListClusterVersionsRequest() {}

  explicit ListClusterVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
  }


  virtual ~ListClusterVersionsRequest() = default;
};
class ListClusterVersionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> showName{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> code{};

  ListClusterVersionsResponseBodyData() {}

  explicit ListClusterVersionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (showName) {
      res["ShowName"] = boost::any(*showName);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShowName") != m.end() && !m["ShowName"].empty()) {
      showName = make_shared<string>(boost::any_cast<string>(m["ShowName"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~ListClusterVersionsResponseBodyData() = default;
};
class ListClusterVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<ListClusterVersionsResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  ListClusterVersionsResponseBody() {}

  explicit ListClusterVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
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
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListClusterVersionsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterVersionsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListClusterVersionsResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListClusterVersionsResponseBody() = default;
};
class ListClusterVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListClusterVersionsResponseBody> body{};

  ListClusterVersionsResponse() {}

  explicit ListClusterVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListClusterVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterVersionsResponse() = default;
};
class ListEngineNamespacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ListEngineNamespacesRequest() {}

  explicit ListEngineNamespacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListEngineNamespacesRequest() = default;
};
class ListEngineNamespacesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> namespaceShowName{};
  shared_ptr<long> quota{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceDesc{};
  shared_ptr<long> configCount{};
  shared_ptr<string> serviceCount{};

  ListEngineNamespacesResponseBodyData() {}

  explicit ListEngineNamespacesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (namespaceShowName) {
      res["NamespaceShowName"] = boost::any(*namespaceShowName);
    }
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceDesc) {
      res["NamespaceDesc"] = boost::any(*namespaceDesc);
    }
    if (configCount) {
      res["ConfigCount"] = boost::any(*configCount);
    }
    if (serviceCount) {
      res["ServiceCount"] = boost::any(*serviceCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("NamespaceShowName") != m.end() && !m["NamespaceShowName"].empty()) {
      namespaceShowName = make_shared<string>(boost::any_cast<string>(m["NamespaceShowName"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<long>(boost::any_cast<long>(m["Quota"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceDesc") != m.end() && !m["NamespaceDesc"].empty()) {
      namespaceDesc = make_shared<string>(boost::any_cast<string>(m["NamespaceDesc"]));
    }
    if (m.find("ConfigCount") != m.end() && !m["ConfigCount"].empty()) {
      configCount = make_shared<long>(boost::any_cast<long>(m["ConfigCount"]));
    }
    if (m.find("ServiceCount") != m.end() && !m["ServiceCount"].empty()) {
      serviceCount = make_shared<string>(boost::any_cast<string>(m["ServiceCount"]));
    }
  }


  virtual ~ListEngineNamespacesResponseBodyData() = default;
};
class ListEngineNamespacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListEngineNamespacesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ListEngineNamespacesResponseBody() {}

  explicit ListEngineNamespacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListEngineNamespacesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEngineNamespacesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEngineNamespacesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListEngineNamespacesResponseBody() = default;
};
class ListEngineNamespacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListEngineNamespacesResponseBody> body{};

  ListEngineNamespacesResponse() {}

  explicit ListEngineNamespacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEngineNamespacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEngineNamespacesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEngineNamespacesResponse() = default;
};
class ListEurekaInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> serviceName{};

  ListEurekaInstancesRequest() {}

  explicit ListEurekaInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ListEurekaInstancesRequest() = default;
};
class ListEurekaInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<long> lastDirtyTimestamp{};
  shared_ptr<string> ipAddr{};
  shared_ptr<string> homePageUrl{};
  shared_ptr<string> hostName{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> port{};
  shared_ptr<long> securePort{};
  shared_ptr<string> app{};
  shared_ptr<long> durationInSecs{};
  shared_ptr<long> lastUpdatedTimestamp{};
  shared_ptr<long> renewalIntervalInSecs{};
  shared_ptr<string> vipAddress{};
  shared_ptr<map<string, boost::any>> metadata{};

  ListEurekaInstancesResponseBodyData() {}

  explicit ListEurekaInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (lastDirtyTimestamp) {
      res["LastDirtyTimestamp"] = boost::any(*lastDirtyTimestamp);
    }
    if (ipAddr) {
      res["IpAddr"] = boost::any(*ipAddr);
    }
    if (homePageUrl) {
      res["HomePageUrl"] = boost::any(*homePageUrl);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (securePort) {
      res["SecurePort"] = boost::any(*securePort);
    }
    if (app) {
      res["App"] = boost::any(*app);
    }
    if (durationInSecs) {
      res["DurationInSecs"] = boost::any(*durationInSecs);
    }
    if (lastUpdatedTimestamp) {
      res["LastUpdatedTimestamp"] = boost::any(*lastUpdatedTimestamp);
    }
    if (renewalIntervalInSecs) {
      res["RenewalIntervalInSecs"] = boost::any(*renewalIntervalInSecs);
    }
    if (vipAddress) {
      res["VipAddress"] = boost::any(*vipAddress);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("LastDirtyTimestamp") != m.end() && !m["LastDirtyTimestamp"].empty()) {
      lastDirtyTimestamp = make_shared<long>(boost::any_cast<long>(m["LastDirtyTimestamp"]));
    }
    if (m.find("IpAddr") != m.end() && !m["IpAddr"].empty()) {
      ipAddr = make_shared<string>(boost::any_cast<string>(m["IpAddr"]));
    }
    if (m.find("HomePageUrl") != m.end() && !m["HomePageUrl"].empty()) {
      homePageUrl = make_shared<string>(boost::any_cast<string>(m["HomePageUrl"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("SecurePort") != m.end() && !m["SecurePort"].empty()) {
      securePort = make_shared<long>(boost::any_cast<long>(m["SecurePort"]));
    }
    if (m.find("App") != m.end() && !m["App"].empty()) {
      app = make_shared<string>(boost::any_cast<string>(m["App"]));
    }
    if (m.find("DurationInSecs") != m.end() && !m["DurationInSecs"].empty()) {
      durationInSecs = make_shared<long>(boost::any_cast<long>(m["DurationInSecs"]));
    }
    if (m.find("LastUpdatedTimestamp") != m.end() && !m["LastUpdatedTimestamp"].empty()) {
      lastUpdatedTimestamp = make_shared<long>(boost::any_cast<long>(m["LastUpdatedTimestamp"]));
    }
    if (m.find("RenewalIntervalInSecs") != m.end() && !m["RenewalIntervalInSecs"].empty()) {
      renewalIntervalInSecs = make_shared<long>(boost::any_cast<long>(m["RenewalIntervalInSecs"]));
    }
    if (m.find("VipAddress") != m.end() && !m["VipAddress"].empty()) {
      vipAddress = make_shared<string>(boost::any_cast<string>(m["VipAddress"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Metadata"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metadata = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ListEurekaInstancesResponseBodyData() = default;
};
class ListEurekaInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListEurekaInstancesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ListEurekaInstancesResponseBody() {}

  explicit ListEurekaInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListEurekaInstancesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEurekaInstancesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEurekaInstancesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListEurekaInstancesResponseBody() = default;
};
class ListEurekaInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListEurekaInstancesResponseBody> body{};

  ListEurekaInstancesResponse() {}

  explicit ListEurekaInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEurekaInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEurekaInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEurekaInstancesResponse() = default;
};
class ListEurekaServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> regionId{};

  ListEurekaServicesRequest() {}

  explicit ListEurekaServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListEurekaServicesRequest() = default;
};
class ListEurekaServicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instancesId{};
  shared_ptr<string> name{};
  shared_ptr<string> upStatus{};

  ListEurekaServicesResponseBodyData() {}

  explicit ListEurekaServicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instancesId) {
      res["InstancesId"] = boost::any(*instancesId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (upStatus) {
      res["UpStatus"] = boost::any(*upStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstancesId") != m.end() && !m["InstancesId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstancesId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstancesId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instancesId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UpStatus") != m.end() && !m["UpStatus"].empty()) {
      upStatus = make_shared<string>(boost::any_cast<string>(m["UpStatus"]));
    }
  }


  virtual ~ListEurekaServicesResponseBodyData() = default;
};
class ListEurekaServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<ListEurekaServicesResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ListEurekaServicesResponseBody() {}

  explicit ListEurekaServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListEurekaServicesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEurekaServicesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListEurekaServicesResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListEurekaServicesResponseBody() = default;
};
class ListEurekaServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListEurekaServicesResponseBody> body{};

  ListEurekaServicesResponse() {}

  explicit ListEurekaServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListEurekaServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEurekaServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListEurekaServicesResponse() = default;
};
class ListListenersByConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> namespaceId{};

  ListListenersByConfigRequest() {}

  explicit ListListenersByConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~ListListenersByConfigRequest() = default;
};
class ListListenersByConfigResponseBodyListeners : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<string> md5{};

  ListListenersByConfigResponseBodyListeners() {}

  explicit ListListenersByConfigResponseBodyListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
  }


  virtual ~ListListenersByConfigResponseBodyListeners() = default;
};
class ListListenersByConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListListenersByConfigResponseBodyListeners>> listeners{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ListListenersByConfigResponseBody() {}

  explicit ListListenersByConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (listeners) {
      vector<boost::any> temp1;
      for(auto item1:*listeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Listeners"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      if (typeid(vector<boost::any>) == m["Listeners"].type()) {
        vector<ListListenersByConfigResponseBodyListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Listeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenersByConfigResponseBodyListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listeners = make_shared<vector<ListListenersByConfigResponseBodyListeners>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListListenersByConfigResponseBody() = default;
};
class ListListenersByConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListListenersByConfigResponseBody> body{};

  ListListenersByConfigResponse() {}

  explicit ListListenersByConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListListenersByConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListListenersByConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ListListenersByConfigResponse() = default;
};
class ListListenersByIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ip{};
  shared_ptr<string> namespaceId{};

  ListListenersByIpRequest() {}

  explicit ListListenersByIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~ListListenersByIpRequest() = default;
};
class ListListenersByIpResponseBodyListeners : public Darabonba::Model {
public:
  shared_ptr<string> md5{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};

  ListListenersByIpResponseBodyListeners() {}

  explicit ListListenersByIpResponseBodyListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
  }


  virtual ~ListListenersByIpResponseBodyListeners() = default;
};
class ListListenersByIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListListenersByIpResponseBodyListeners>> listeners{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ListListenersByIpResponseBody() {}

  explicit ListListenersByIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (listeners) {
      vector<boost::any> temp1;
      for(auto item1:*listeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Listeners"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      if (typeid(vector<boost::any>) == m["Listeners"].type()) {
        vector<ListListenersByIpResponseBodyListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Listeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenersByIpResponseBodyListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listeners = make_shared<vector<ListListenersByIpResponseBodyListeners>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListListenersByIpResponseBody() = default;
};
class ListListenersByIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListListenersByIpResponseBody> body{};

  ListListenersByIpResponse() {}

  explicit ListListenersByIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListListenersByIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListListenersByIpResponseBody>(model1);
      }
    }
  }


  virtual ~ListListenersByIpResponse() = default;
};
class ListNacosConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> appName{};
  shared_ptr<string> tags{};
  shared_ptr<string> namespaceId{};

  ListNacosConfigsRequest() {}

  explicit ListNacosConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~ListNacosConfigsRequest() = default;
};
class ListNacosConfigsResponseBodyConfigurations : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> dataId{};
  shared_ptr<string> id{};
  shared_ptr<string> group{};

  ListNacosConfigsResponseBodyConfigurations() {}

  explicit ListNacosConfigsResponseBodyConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
  }


  virtual ~ListNacosConfigsResponseBodyConfigurations() = default;
};
class ListNacosConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListNacosConfigsResponseBodyConfigurations>> configurations{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  ListNacosConfigsResponseBody() {}

  explicit ListNacosConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (configurations) {
      vector<boost::any> temp1;
      for(auto item1:*configurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Configurations"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Configurations") != m.end() && !m["Configurations"].empty()) {
      if (typeid(vector<boost::any>) == m["Configurations"].type()) {
        vector<ListNacosConfigsResponseBodyConfigurations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Configurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNacosConfigsResponseBodyConfigurations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configurations = make_shared<vector<ListNacosConfigsResponseBodyConfigurations>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListNacosConfigsResponseBody() = default;
};
class ListNacosConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListNacosConfigsResponseBody> body{};

  ListNacosConfigsResponse() {}

  explicit ListNacosConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListNacosConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNacosConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListNacosConfigsResponse() = default;
};
class ListNacosHistoryConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> namespaceId{};

  ListNacosHistoryConfigsRequest() {}

  explicit ListNacosHistoryConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
  }


  virtual ~ListNacosHistoryConfigsRequest() = default;
};
class ListNacosHistoryConfigsResponseBodyHistoryItems : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<long> id{};
  shared_ptr<string> opType{};

  ListNacosHistoryConfigsResponseBodyHistoryItems() {}

  explicit ListNacosHistoryConfigsResponseBodyHistoryItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (opType) {
      res["OpType"] = boost::any(*opType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["LastModifiedTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("OpType") != m.end() && !m["OpType"].empty()) {
      opType = make_shared<string>(boost::any_cast<string>(m["OpType"]));
    }
  }


  virtual ~ListNacosHistoryConfigsResponseBodyHistoryItems() = default;
};
class ListNacosHistoryConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};
  shared_ptr<vector<ListNacosHistoryConfigsResponseBodyHistoryItems>> historyItems{};

  ListNacosHistoryConfigsResponseBody() {}

  explicit ListNacosHistoryConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (historyItems) {
      vector<boost::any> temp1;
      for(auto item1:*historyItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HistoryItems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("HistoryItems") != m.end() && !m["HistoryItems"].empty()) {
      if (typeid(vector<boost::any>) == m["HistoryItems"].type()) {
        vector<ListNacosHistoryConfigsResponseBodyHistoryItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HistoryItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNacosHistoryConfigsResponseBodyHistoryItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        historyItems = make_shared<vector<ListNacosHistoryConfigsResponseBodyHistoryItems>>(expect1);
      }
    }
  }


  virtual ~ListNacosHistoryConfigsResponseBody() = default;
};
class ListNacosHistoryConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListNacosHistoryConfigsResponseBody> body{};

  ListNacosHistoryConfigsResponse() {}

  explicit ListNacosHistoryConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListNacosHistoryConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNacosHistoryConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListNacosHistoryConfigsResponse() = default;
};
class ListZnodeChildrenRequest : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<string> clusterId{};

  ListZnodeChildrenRequest() {}

  explicit ListZnodeChildrenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~ListZnodeChildrenRequest() = default;
};
class ListZnodeChildrenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> path{};
  shared_ptr<bool> dir{};
  shared_ptr<string> name{};

  ListZnodeChildrenResponseBodyData() {}

  explicit ListZnodeChildrenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<bool>(boost::any_cast<bool>(m["Dir"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListZnodeChildrenResponseBodyData() = default;
};
class ListZnodeChildrenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListZnodeChildrenResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ListZnodeChildrenResponseBody() {}

  explicit ListZnodeChildrenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListZnodeChildrenResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListZnodeChildrenResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListZnodeChildrenResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListZnodeChildrenResponseBody() = default;
};
class ListZnodeChildrenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListZnodeChildrenResponseBody> body{};

  ListZnodeChildrenResponse() {}

  explicit ListZnodeChildrenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListZnodeChildrenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListZnodeChildrenResponseBody>(model1);
      }
    }
  }


  virtual ~ListZnodeChildrenResponse() = default;
};
class QueryBusinessLocationsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> ordering{};
  shared_ptr<string> type{};
  shared_ptr<string> districtEnName{};
  shared_ptr<string> showName{};
  shared_ptr<string> districtCnName{};
  shared_ptr<string> enName{};
  shared_ptr<string> districtId{};
  shared_ptr<string> districtShowName{};
  shared_ptr<string> description{};
  shared_ptr<string> enDescription{};
  shared_ptr<string> cnName{};
  shared_ptr<string> name{};
  shared_ptr<long> districtOrdering{};

  QueryBusinessLocationsResponseBodyData() {}

  explicit QueryBusinessLocationsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ordering) {
      res["Ordering"] = boost::any(*ordering);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (districtEnName) {
      res["DistrictEnName"] = boost::any(*districtEnName);
    }
    if (showName) {
      res["ShowName"] = boost::any(*showName);
    }
    if (districtCnName) {
      res["DistrictCnName"] = boost::any(*districtCnName);
    }
    if (enName) {
      res["EnName"] = boost::any(*enName);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (districtShowName) {
      res["DistrictShowName"] = boost::any(*districtShowName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enDescription) {
      res["EnDescription"] = boost::any(*enDescription);
    }
    if (cnName) {
      res["CnName"] = boost::any(*cnName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (districtOrdering) {
      res["DistrictOrdering"] = boost::any(*districtOrdering);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ordering") != m.end() && !m["Ordering"].empty()) {
      ordering = make_shared<long>(boost::any_cast<long>(m["Ordering"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("DistrictEnName") != m.end() && !m["DistrictEnName"].empty()) {
      districtEnName = make_shared<string>(boost::any_cast<string>(m["DistrictEnName"]));
    }
    if (m.find("ShowName") != m.end() && !m["ShowName"].empty()) {
      showName = make_shared<string>(boost::any_cast<string>(m["ShowName"]));
    }
    if (m.find("DistrictCnName") != m.end() && !m["DistrictCnName"].empty()) {
      districtCnName = make_shared<string>(boost::any_cast<string>(m["DistrictCnName"]));
    }
    if (m.find("EnName") != m.end() && !m["EnName"].empty()) {
      enName = make_shared<string>(boost::any_cast<string>(m["EnName"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("DistrictShowName") != m.end() && !m["DistrictShowName"].empty()) {
      districtShowName = make_shared<string>(boost::any_cast<string>(m["DistrictShowName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnDescription") != m.end() && !m["EnDescription"].empty()) {
      enDescription = make_shared<string>(boost::any_cast<string>(m["EnDescription"]));
    }
    if (m.find("CnName") != m.end() && !m["CnName"].empty()) {
      cnName = make_shared<string>(boost::any_cast<string>(m["CnName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("DistrictOrdering") != m.end() && !m["DistrictOrdering"].empty()) {
      districtOrdering = make_shared<long>(boost::any_cast<long>(m["DistrictOrdering"]));
    }
  }


  virtual ~QueryBusinessLocationsResponseBodyData() = default;
};
class QueryBusinessLocationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryBusinessLocationsResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> success{};

  QueryBusinessLocationsResponseBody() {}

  explicit QueryBusinessLocationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryBusinessLocationsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryBusinessLocationsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryBusinessLocationsResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~QueryBusinessLocationsResponseBody() = default;
};
class QueryBusinessLocationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryBusinessLocationsResponseBody> body{};

  QueryBusinessLocationsResponse() {}

  explicit QueryBusinessLocationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryBusinessLocationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBusinessLocationsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBusinessLocationsResponse() = default;
};
class QueryClusterDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> orderId{};

  QueryClusterDetailRequest() {}

  explicit QueryClusterDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~QueryClusterDetailRequest() = default;
};
class QueryClusterDetailResponseBodyDataInstanceModels : public Darabonba::Model {
public:
  shared_ptr<string> podName{};
  shared_ptr<string> singleTunnelVip{};
  shared_ptr<string> internetIp{};
  shared_ptr<string> ip{};
  shared_ptr<string> role{};
  shared_ptr<string> healthStatus{};

  QueryClusterDetailResponseBodyDataInstanceModels() {}

  explicit QueryClusterDetailResponseBodyDataInstanceModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (podName) {
      res["PodName"] = boost::any(*podName);
    }
    if (singleTunnelVip) {
      res["SingleTunnelVip"] = boost::any(*singleTunnelVip);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (healthStatus) {
      res["HealthStatus"] = boost::any(*healthStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PodName") != m.end() && !m["PodName"].empty()) {
      podName = make_shared<string>(boost::any_cast<string>(m["PodName"]));
    }
    if (m.find("SingleTunnelVip") != m.end() && !m["SingleTunnelVip"].empty()) {
      singleTunnelVip = make_shared<string>(boost::any_cast<string>(m["SingleTunnelVip"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("HealthStatus") != m.end() && !m["HealthStatus"].empty()) {
      healthStatus = make_shared<string>(boost::any_cast<string>(m["HealthStatus"]));
    }
  }


  virtual ~QueryClusterDetailResponseBodyDataInstanceModels() = default;
};
class QueryClusterDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> intranetAddress{};
  shared_ptr<string> diskType{};
  shared_ptr<string> pubNetworkFlow{};
  shared_ptr<long> diskCapacity{};
  shared_ptr<long> memoryCapacity{};
  shared_ptr<string> clusterAliasName{};
  shared_ptr<long> instanceCount{};
  shared_ptr<string> intranetPort{};
  shared_ptr<vector<QueryClusterDetailResponseBodyDataInstanceModels>> instanceModels{};
  shared_ptr<string> intranetDomain{};
  shared_ptr<string> internetDomain{};
  shared_ptr<string> payInfo{};
  shared_ptr<string> internetAddress{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> aclEntryList{};
  shared_ptr<string> healthStatus{};
  shared_ptr<long> initCostTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> aclId{};
  shared_ptr<long> cpu{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> initStatus{};
  shared_ptr<string> internetPort{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> netType{};
  shared_ptr<string> clusterVersion{};
  shared_ptr<string> clusterSpecification{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> connectionType{};

  QueryClusterDetailResponseBodyData() {}

  explicit QueryClusterDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (intranetAddress) {
      res["IntranetAddress"] = boost::any(*intranetAddress);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (pubNetworkFlow) {
      res["PubNetworkFlow"] = boost::any(*pubNetworkFlow);
    }
    if (diskCapacity) {
      res["DiskCapacity"] = boost::any(*diskCapacity);
    }
    if (memoryCapacity) {
      res["MemoryCapacity"] = boost::any(*memoryCapacity);
    }
    if (clusterAliasName) {
      res["ClusterAliasName"] = boost::any(*clusterAliasName);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (intranetPort) {
      res["IntranetPort"] = boost::any(*intranetPort);
    }
    if (instanceModels) {
      vector<boost::any> temp1;
      for(auto item1:*instanceModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceModels"] = boost::any(temp1);
    }
    if (intranetDomain) {
      res["IntranetDomain"] = boost::any(*intranetDomain);
    }
    if (internetDomain) {
      res["InternetDomain"] = boost::any(*internetDomain);
    }
    if (payInfo) {
      res["PayInfo"] = boost::any(*payInfo);
    }
    if (internetAddress) {
      res["InternetAddress"] = boost::any(*internetAddress);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (aclEntryList) {
      res["AclEntryList"] = boost::any(*aclEntryList);
    }
    if (healthStatus) {
      res["HealthStatus"] = boost::any(*healthStatus);
    }
    if (initCostTime) {
      res["InitCostTime"] = boost::any(*initCostTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (aclId) {
      res["AclId"] = boost::any(*aclId);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (initStatus) {
      res["InitStatus"] = boost::any(*initStatus);
    }
    if (internetPort) {
      res["InternetPort"] = boost::any(*internetPort);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (clusterVersion) {
      res["ClusterVersion"] = boost::any(*clusterVersion);
    }
    if (clusterSpecification) {
      res["ClusterSpecification"] = boost::any(*clusterSpecification);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (connectionType) {
      res["ConnectionType"] = boost::any(*connectionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("IntranetAddress") != m.end() && !m["IntranetAddress"].empty()) {
      intranetAddress = make_shared<string>(boost::any_cast<string>(m["IntranetAddress"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("PubNetworkFlow") != m.end() && !m["PubNetworkFlow"].empty()) {
      pubNetworkFlow = make_shared<string>(boost::any_cast<string>(m["PubNetworkFlow"]));
    }
    if (m.find("DiskCapacity") != m.end() && !m["DiskCapacity"].empty()) {
      diskCapacity = make_shared<long>(boost::any_cast<long>(m["DiskCapacity"]));
    }
    if (m.find("MemoryCapacity") != m.end() && !m["MemoryCapacity"].empty()) {
      memoryCapacity = make_shared<long>(boost::any_cast<long>(m["MemoryCapacity"]));
    }
    if (m.find("ClusterAliasName") != m.end() && !m["ClusterAliasName"].empty()) {
      clusterAliasName = make_shared<string>(boost::any_cast<string>(m["ClusterAliasName"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("IntranetPort") != m.end() && !m["IntranetPort"].empty()) {
      intranetPort = make_shared<string>(boost::any_cast<string>(m["IntranetPort"]));
    }
    if (m.find("InstanceModels") != m.end() && !m["InstanceModels"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceModels"].type()) {
        vector<QueryClusterDetailResponseBodyDataInstanceModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryClusterDetailResponseBodyDataInstanceModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceModels = make_shared<vector<QueryClusterDetailResponseBodyDataInstanceModels>>(expect1);
      }
    }
    if (m.find("IntranetDomain") != m.end() && !m["IntranetDomain"].empty()) {
      intranetDomain = make_shared<string>(boost::any_cast<string>(m["IntranetDomain"]));
    }
    if (m.find("InternetDomain") != m.end() && !m["InternetDomain"].empty()) {
      internetDomain = make_shared<string>(boost::any_cast<string>(m["InternetDomain"]));
    }
    if (m.find("PayInfo") != m.end() && !m["PayInfo"].empty()) {
      payInfo = make_shared<string>(boost::any_cast<string>(m["PayInfo"]));
    }
    if (m.find("InternetAddress") != m.end() && !m["InternetAddress"].empty()) {
      internetAddress = make_shared<string>(boost::any_cast<string>(m["InternetAddress"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("AclEntryList") != m.end() && !m["AclEntryList"].empty()) {
      aclEntryList = make_shared<string>(boost::any_cast<string>(m["AclEntryList"]));
    }
    if (m.find("HealthStatus") != m.end() && !m["HealthStatus"].empty()) {
      healthStatus = make_shared<string>(boost::any_cast<string>(m["HealthStatus"]));
    }
    if (m.find("InitCostTime") != m.end() && !m["InitCostTime"].empty()) {
      initCostTime = make_shared<long>(boost::any_cast<long>(m["InitCostTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AclId") != m.end() && !m["AclId"].empty()) {
      aclId = make_shared<string>(boost::any_cast<string>(m["AclId"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("InitStatus") != m.end() && !m["InitStatus"].empty()) {
      initStatus = make_shared<string>(boost::any_cast<string>(m["InitStatus"]));
    }
    if (m.find("InternetPort") != m.end() && !m["InternetPort"].empty()) {
      internetPort = make_shared<string>(boost::any_cast<string>(m["InternetPort"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("ClusterVersion") != m.end() && !m["ClusterVersion"].empty()) {
      clusterVersion = make_shared<string>(boost::any_cast<string>(m["ClusterVersion"]));
    }
    if (m.find("ClusterSpecification") != m.end() && !m["ClusterSpecification"].empty()) {
      clusterSpecification = make_shared<string>(boost::any_cast<string>(m["ClusterSpecification"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ConnectionType") != m.end() && !m["ConnectionType"].empty()) {
      connectionType = make_shared<string>(boost::any_cast<string>(m["ConnectionType"]));
    }
  }


  virtual ~QueryClusterDetailResponseBodyData() = default;
};
class QueryClusterDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<QueryClusterDetailResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  QueryClusterDetailResponseBody() {}

  explicit QueryClusterDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryClusterDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryClusterDetailResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryClusterDetailResponseBody() = default;
};
class QueryClusterDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryClusterDetailResponseBody> body{};

  QueryClusterDetailResponse() {}

  explicit QueryClusterDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryClusterDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryClusterDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryClusterDetailResponse() = default;
};
class QueryClusterDiskSpecificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterType{};

  QueryClusterDiskSpecificationRequest() {}

  explicit QueryClusterDiskSpecificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
  }


  virtual ~QueryClusterDiskSpecificationRequest() = default;
};
class QueryClusterDiskSpecificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> step{};
  shared_ptr<long> max{};
  shared_ptr<long> min{};

  QueryClusterDiskSpecificationResponseBodyData() {}

  explicit QueryClusterDiskSpecificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (step) {
      res["Step"] = boost::any(*step);
    }
    if (max) {
      res["Max"] = boost::any(*max);
    }
    if (min) {
      res["Min"] = boost::any(*min);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
    if (m.find("Max") != m.end() && !m["Max"].empty()) {
      max = make_shared<long>(boost::any_cast<long>(m["Max"]));
    }
    if (m.find("Min") != m.end() && !m["Min"].empty()) {
      min = make_shared<long>(boost::any_cast<long>(m["Min"]));
    }
  }


  virtual ~QueryClusterDiskSpecificationResponseBodyData() = default;
};
class QueryClusterDiskSpecificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<QueryClusterDiskSpecificationResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  QueryClusterDiskSpecificationResponseBody() {}

  explicit QueryClusterDiskSpecificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryClusterDiskSpecificationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryClusterDiskSpecificationResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryClusterDiskSpecificationResponseBody() = default;
};
class QueryClusterDiskSpecificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryClusterDiskSpecificationResponseBody> body{};

  QueryClusterDiskSpecificationResponse() {}

  explicit QueryClusterDiskSpecificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryClusterDiskSpecificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryClusterDiskSpecificationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryClusterDiskSpecificationResponse() = default;
};
class QueryClusterSpecificationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterSpecificationName{};
  shared_ptr<string> diskCapacity{};
  shared_ptr<string> memoryCapacity{};
  shared_ptr<string> instanceCount{};
  shared_ptr<string> maxTps{};
  shared_ptr<string> maxCon{};
  shared_ptr<string> cpuCapacity{};

  QueryClusterSpecificationResponseBodyData() {}

  explicit QueryClusterSpecificationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterSpecificationName) {
      res["ClusterSpecificationName"] = boost::any(*clusterSpecificationName);
    }
    if (diskCapacity) {
      res["DiskCapacity"] = boost::any(*diskCapacity);
    }
    if (memoryCapacity) {
      res["MemoryCapacity"] = boost::any(*memoryCapacity);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (maxTps) {
      res["MaxTps"] = boost::any(*maxTps);
    }
    if (maxCon) {
      res["MaxCon"] = boost::any(*maxCon);
    }
    if (cpuCapacity) {
      res["CpuCapacity"] = boost::any(*cpuCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterSpecificationName") != m.end() && !m["ClusterSpecificationName"].empty()) {
      clusterSpecificationName = make_shared<string>(boost::any_cast<string>(m["ClusterSpecificationName"]));
    }
    if (m.find("DiskCapacity") != m.end() && !m["DiskCapacity"].empty()) {
      diskCapacity = make_shared<string>(boost::any_cast<string>(m["DiskCapacity"]));
    }
    if (m.find("MemoryCapacity") != m.end() && !m["MemoryCapacity"].empty()) {
      memoryCapacity = make_shared<string>(boost::any_cast<string>(m["MemoryCapacity"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<string>(boost::any_cast<string>(m["InstanceCount"]));
    }
    if (m.find("MaxTps") != m.end() && !m["MaxTps"].empty()) {
      maxTps = make_shared<string>(boost::any_cast<string>(m["MaxTps"]));
    }
    if (m.find("MaxCon") != m.end() && !m["MaxCon"].empty()) {
      maxCon = make_shared<string>(boost::any_cast<string>(m["MaxCon"]));
    }
    if (m.find("CpuCapacity") != m.end() && !m["CpuCapacity"].empty()) {
      cpuCapacity = make_shared<string>(boost::any_cast<string>(m["CpuCapacity"]));
    }
  }


  virtual ~QueryClusterSpecificationResponseBodyData() = default;
};
class QueryClusterSpecificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<QueryClusterSpecificationResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  QueryClusterSpecificationResponseBody() {}

  explicit QueryClusterSpecificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryClusterSpecificationResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryClusterSpecificationResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryClusterSpecificationResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryClusterSpecificationResponseBody() = default;
};
class QueryClusterSpecificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryClusterSpecificationResponseBody> body{};

  QueryClusterSpecificationResponse() {}

  explicit QueryClusterSpecificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryClusterSpecificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryClusterSpecificationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryClusterSpecificationResponse() = default;
};
class QueryConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> configType{};
  shared_ptr<string> instanceId{};

  QueryConfigRequest() {}

  explicit QueryConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (configType) {
      res["ConfigType"] = boost::any(*configType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ConfigType") != m.end() && !m["ConfigType"].empty()) {
      configType = make_shared<string>(boost::any_cast<string>(m["ConfigType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~QueryConfigRequest() = default;
};
class QueryConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> maxClientCnxns{};
  shared_ptr<bool> configAuthSupported{};
  shared_ptr<string> initLimit{};
  shared_ptr<bool> MCPEnabled{};
  shared_ptr<bool> openSuperAcl{};
  shared_ptr<bool> restartFlag{};
  shared_ptr<string> jvmFlagsCustom{};
  shared_ptr<string> autopurgePurgeInterval{};
  shared_ptr<string> autopurgeSnapRetainCount{};
  shared_ptr<string> syncLimit{};
  shared_ptr<bool> configAuthEnabled{};
  shared_ptr<string> clusterName{};
  shared_ptr<bool> MCPSupported{};
  shared_ptr<string> juteMaxbuffer{};
  shared_ptr<string> tickTime{};
  shared_ptr<string> passWord{};
  shared_ptr<string> userName{};

  QueryConfigResponseBodyData() {}

  explicit QueryConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxClientCnxns) {
      res["MaxClientCnxns"] = boost::any(*maxClientCnxns);
    }
    if (configAuthSupported) {
      res["ConfigAuthSupported"] = boost::any(*configAuthSupported);
    }
    if (initLimit) {
      res["InitLimit"] = boost::any(*initLimit);
    }
    if (MCPEnabled) {
      res["MCPEnabled"] = boost::any(*MCPEnabled);
    }
    if (openSuperAcl) {
      res["OpenSuperAcl"] = boost::any(*openSuperAcl);
    }
    if (restartFlag) {
      res["RestartFlag"] = boost::any(*restartFlag);
    }
    if (jvmFlagsCustom) {
      res["JvmFlagsCustom"] = boost::any(*jvmFlagsCustom);
    }
    if (autopurgePurgeInterval) {
      res["AutopurgePurgeInterval"] = boost::any(*autopurgePurgeInterval);
    }
    if (autopurgeSnapRetainCount) {
      res["AutopurgeSnapRetainCount"] = boost::any(*autopurgeSnapRetainCount);
    }
    if (syncLimit) {
      res["SyncLimit"] = boost::any(*syncLimit);
    }
    if (configAuthEnabled) {
      res["ConfigAuthEnabled"] = boost::any(*configAuthEnabled);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (MCPSupported) {
      res["MCPSupported"] = boost::any(*MCPSupported);
    }
    if (juteMaxbuffer) {
      res["JuteMaxbuffer"] = boost::any(*juteMaxbuffer);
    }
    if (tickTime) {
      res["TickTime"] = boost::any(*tickTime);
    }
    if (passWord) {
      res["PassWord"] = boost::any(*passWord);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxClientCnxns") != m.end() && !m["MaxClientCnxns"].empty()) {
      maxClientCnxns = make_shared<string>(boost::any_cast<string>(m["MaxClientCnxns"]));
    }
    if (m.find("ConfigAuthSupported") != m.end() && !m["ConfigAuthSupported"].empty()) {
      configAuthSupported = make_shared<bool>(boost::any_cast<bool>(m["ConfigAuthSupported"]));
    }
    if (m.find("InitLimit") != m.end() && !m["InitLimit"].empty()) {
      initLimit = make_shared<string>(boost::any_cast<string>(m["InitLimit"]));
    }
    if (m.find("MCPEnabled") != m.end() && !m["MCPEnabled"].empty()) {
      MCPEnabled = make_shared<bool>(boost::any_cast<bool>(m["MCPEnabled"]));
    }
    if (m.find("OpenSuperAcl") != m.end() && !m["OpenSuperAcl"].empty()) {
      openSuperAcl = make_shared<bool>(boost::any_cast<bool>(m["OpenSuperAcl"]));
    }
    if (m.find("RestartFlag") != m.end() && !m["RestartFlag"].empty()) {
      restartFlag = make_shared<bool>(boost::any_cast<bool>(m["RestartFlag"]));
    }
    if (m.find("JvmFlagsCustom") != m.end() && !m["JvmFlagsCustom"].empty()) {
      jvmFlagsCustom = make_shared<string>(boost::any_cast<string>(m["JvmFlagsCustom"]));
    }
    if (m.find("AutopurgePurgeInterval") != m.end() && !m["AutopurgePurgeInterval"].empty()) {
      autopurgePurgeInterval = make_shared<string>(boost::any_cast<string>(m["AutopurgePurgeInterval"]));
    }
    if (m.find("AutopurgeSnapRetainCount") != m.end() && !m["AutopurgeSnapRetainCount"].empty()) {
      autopurgeSnapRetainCount = make_shared<string>(boost::any_cast<string>(m["AutopurgeSnapRetainCount"]));
    }
    if (m.find("SyncLimit") != m.end() && !m["SyncLimit"].empty()) {
      syncLimit = make_shared<string>(boost::any_cast<string>(m["SyncLimit"]));
    }
    if (m.find("ConfigAuthEnabled") != m.end() && !m["ConfigAuthEnabled"].empty()) {
      configAuthEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConfigAuthEnabled"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("MCPSupported") != m.end() && !m["MCPSupported"].empty()) {
      MCPSupported = make_shared<bool>(boost::any_cast<bool>(m["MCPSupported"]));
    }
    if (m.find("JuteMaxbuffer") != m.end() && !m["JuteMaxbuffer"].empty()) {
      juteMaxbuffer = make_shared<string>(boost::any_cast<string>(m["JuteMaxbuffer"]));
    }
    if (m.find("TickTime") != m.end() && !m["TickTime"].empty()) {
      tickTime = make_shared<string>(boost::any_cast<string>(m["TickTime"]));
    }
    if (m.find("PassWord") != m.end() && !m["PassWord"].empty()) {
      passWord = make_shared<string>(boost::any_cast<string>(m["PassWord"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~QueryConfigResponseBodyData() = default;
};
class QueryConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<QueryConfigResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> success{};

  QueryConfigResponseBody() {}

  explicit QueryConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryConfigResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~QueryConfigResponseBody() = default;
};
class QueryConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryConfigResponseBody> body{};

  QueryConfigResponse() {}

  explicit QueryConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryConfigResponseBody>(model1);
      }
    }
  }


  virtual ~QueryConfigResponse() = default;
};
class QueryMonitorRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<string> monitorType{};
  shared_ptr<long> startTime{};
  shared_ptr<long> endTime{};
  shared_ptr<long> step{};
  shared_ptr<string> instanceId{};

  QueryMonitorRequest() {}

  explicit QueryMonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (monitorType) {
      res["MonitorType"] = boost::any(*monitorType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("MonitorType") != m.end() && !m["MonitorType"].empty()) {
      monitorType = make_shared<string>(boost::any_cast<string>(m["MonitorType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~QueryMonitorRequest() = default;
};
class QueryMonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  QueryMonitorResponseBody() {}

  explicit QueryMonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryMonitorResponseBody() = default;
};
class QueryMonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryMonitorResponseBody> body{};

  QueryMonitorResponse() {}

  explicit QueryMonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryMonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMonitorResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMonitorResponse() = default;
};
class QueryZnodeDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> path{};

  QueryZnodeDetailRequest() {}

  explicit QueryZnodeDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~QueryZnodeDetailRequest() = default;
};
class QueryZnodeDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> path{};
  shared_ptr<bool> dir{};
  shared_ptr<string> name{};

  QueryZnodeDetailResponseBodyData() {}

  explicit QueryZnodeDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<bool>(boost::any_cast<bool>(m["Dir"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~QueryZnodeDetailResponseBodyData() = default;
};
class QueryZnodeDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<QueryZnodeDetailResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> success{};

  QueryZnodeDetailResponseBody() {}

  explicit QueryZnodeDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryZnodeDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryZnodeDetailResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~QueryZnodeDetailResponseBody() = default;
};
class QueryZnodeDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryZnodeDetailResponseBody> body{};

  QueryZnodeDetailResponse() {}

  explicit QueryZnodeDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryZnodeDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryZnodeDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryZnodeDetailResponse() = default;
};
class RestartClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> clusterId{};

  RestartClusterRequest() {}

  explicit RestartClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~RestartClusterRequest() = default;
};
class RestartClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  RestartClusterResponseBody() {}

  explicit RestartClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RestartClusterResponseBody() = default;
};
class RestartClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RestartClusterResponseBody> body{};

  RestartClusterResponse() {}

  explicit RestartClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RestartClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartClusterResponseBody>(model1);
      }
    }
  }


  virtual ~RestartClusterResponse() = default;
};
class RetryClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<string> instanceId{};

  RetryClusterRequest() {}

  explicit RetryClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~RetryClusterRequest() = default;
};
class RetryClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  RetryClusterResponseBody() {}

  explicit RetryClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RetryClusterResponseBody() = default;
};
class RetryClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RetryClusterResponseBody> body{};

  RetryClusterResponse() {}

  explicit RetryClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RetryClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RetryClusterResponseBody>(model1);
      }
    }
  }


  virtual ~RetryClusterResponse() = default;
};
class ScalingClusterRequest : public Darabonba::Model {
public:
  shared_ptr<long> instanceCount{};
  shared_ptr<long> cpu{};
  shared_ptr<long> memoryCapacity{};
  shared_ptr<string> clusterSpecification{};
  shared_ptr<string> instanceId{};

  ScalingClusterRequest() {}

  explicit ScalingClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memoryCapacity) {
      res["MemoryCapacity"] = boost::any(*memoryCapacity);
    }
    if (clusterSpecification) {
      res["ClusterSpecification"] = boost::any(*clusterSpecification);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("MemoryCapacity") != m.end() && !m["MemoryCapacity"].empty()) {
      memoryCapacity = make_shared<long>(boost::any_cast<long>(m["MemoryCapacity"]));
    }
    if (m.find("ClusterSpecification") != m.end() && !m["ClusterSpecification"].empty()) {
      clusterSpecification = make_shared<string>(boost::any_cast<string>(m["ClusterSpecification"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ScalingClusterRequest() = default;
};
class ScalingClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  ScalingClusterResponseBody() {}

  explicit ScalingClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ScalingClusterResponseBody() = default;
};
class ScalingClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ScalingClusterResponseBody> body{};

  ScalingClusterResponse() {}

  explicit ScalingClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ScalingClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScalingClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ScalingClusterResponse() = default;
};
class UpdateAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclEntryList{};
  shared_ptr<string> instanceId{};

  UpdateAclRequest() {}

  explicit UpdateAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclEntryList) {
      res["AclEntryList"] = boost::any(*aclEntryList);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclEntryList") != m.end() && !m["AclEntryList"].empty()) {
      aclEntryList = make_shared<string>(boost::any_cast<string>(m["AclEntryList"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateAclRequest() = default;
};
class UpdateAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  UpdateAclResponseBody() {}

  explicit UpdateAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateAclResponseBody() = default;
};
class UpdateAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAclResponseBody> body{};

  UpdateAclResponse() {}

  explicit UpdateAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAclResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAclResponse() = default;
};
class UpdateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<string> clusterAliasName{};
  shared_ptr<string> instanceId{};

  UpdateClusterRequest() {}

  explicit UpdateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (clusterAliasName) {
      res["ClusterAliasName"] = boost::any(*clusterAliasName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("ClusterAliasName") != m.end() && !m["ClusterAliasName"].empty()) {
      clusterAliasName = make_shared<string>(boost::any_cast<string>(m["ClusterAliasName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateClusterRequest() = default;
};
class UpdateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  UpdateClusterResponseBody() {}

  explicit UpdateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateClusterResponseBody() = default;
};
class UpdateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateClusterResponseBody> body{};

  UpdateClusterResponse() {}

  explicit UpdateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateClusterResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateClusterResponse() = default;
};
class UpdateConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> configType{};
  shared_ptr<string> tickTime{};
  shared_ptr<string> initLimit{};
  shared_ptr<string> syncLimit{};
  shared_ptr<string> maxClientCnxns{};
  shared_ptr<string> openSuperAcl{};
  shared_ptr<string> userName{};
  shared_ptr<string> passWord{};
  shared_ptr<string> juteMaxbuffer{};
  shared_ptr<string> autopurgePurgeInterval{};
  shared_ptr<string> autopurgeSnapRetainCount{};
  shared_ptr<bool> configAuthEnabled{};
  shared_ptr<bool> MCPEnabled{};
  shared_ptr<string> instanceId{};

  UpdateConfigRequest() {}

  explicit UpdateConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (configType) {
      res["ConfigType"] = boost::any(*configType);
    }
    if (tickTime) {
      res["TickTime"] = boost::any(*tickTime);
    }
    if (initLimit) {
      res["InitLimit"] = boost::any(*initLimit);
    }
    if (syncLimit) {
      res["SyncLimit"] = boost::any(*syncLimit);
    }
    if (maxClientCnxns) {
      res["MaxClientCnxns"] = boost::any(*maxClientCnxns);
    }
    if (openSuperAcl) {
      res["OpenSuperAcl"] = boost::any(*openSuperAcl);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (passWord) {
      res["PassWord"] = boost::any(*passWord);
    }
    if (juteMaxbuffer) {
      res["JuteMaxbuffer"] = boost::any(*juteMaxbuffer);
    }
    if (autopurgePurgeInterval) {
      res["AutopurgePurgeInterval"] = boost::any(*autopurgePurgeInterval);
    }
    if (autopurgeSnapRetainCount) {
      res["AutopurgeSnapRetainCount"] = boost::any(*autopurgeSnapRetainCount);
    }
    if (configAuthEnabled) {
      res["ConfigAuthEnabled"] = boost::any(*configAuthEnabled);
    }
    if (MCPEnabled) {
      res["MCPEnabled"] = boost::any(*MCPEnabled);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ConfigType") != m.end() && !m["ConfigType"].empty()) {
      configType = make_shared<string>(boost::any_cast<string>(m["ConfigType"]));
    }
    if (m.find("TickTime") != m.end() && !m["TickTime"].empty()) {
      tickTime = make_shared<string>(boost::any_cast<string>(m["TickTime"]));
    }
    if (m.find("InitLimit") != m.end() && !m["InitLimit"].empty()) {
      initLimit = make_shared<string>(boost::any_cast<string>(m["InitLimit"]));
    }
    if (m.find("SyncLimit") != m.end() && !m["SyncLimit"].empty()) {
      syncLimit = make_shared<string>(boost::any_cast<string>(m["SyncLimit"]));
    }
    if (m.find("MaxClientCnxns") != m.end() && !m["MaxClientCnxns"].empty()) {
      maxClientCnxns = make_shared<string>(boost::any_cast<string>(m["MaxClientCnxns"]));
    }
    if (m.find("OpenSuperAcl") != m.end() && !m["OpenSuperAcl"].empty()) {
      openSuperAcl = make_shared<string>(boost::any_cast<string>(m["OpenSuperAcl"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("PassWord") != m.end() && !m["PassWord"].empty()) {
      passWord = make_shared<string>(boost::any_cast<string>(m["PassWord"]));
    }
    if (m.find("JuteMaxbuffer") != m.end() && !m["JuteMaxbuffer"].empty()) {
      juteMaxbuffer = make_shared<string>(boost::any_cast<string>(m["JuteMaxbuffer"]));
    }
    if (m.find("AutopurgePurgeInterval") != m.end() && !m["AutopurgePurgeInterval"].empty()) {
      autopurgePurgeInterval = make_shared<string>(boost::any_cast<string>(m["AutopurgePurgeInterval"]));
    }
    if (m.find("AutopurgeSnapRetainCount") != m.end() && !m["AutopurgeSnapRetainCount"].empty()) {
      autopurgeSnapRetainCount = make_shared<string>(boost::any_cast<string>(m["AutopurgeSnapRetainCount"]));
    }
    if (m.find("ConfigAuthEnabled") != m.end() && !m["ConfigAuthEnabled"].empty()) {
      configAuthEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConfigAuthEnabled"]));
    }
    if (m.find("MCPEnabled") != m.end() && !m["MCPEnabled"].empty()) {
      MCPEnabled = make_shared<bool>(boost::any_cast<bool>(m["MCPEnabled"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateConfigRequest() = default;
};
class UpdateConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  UpdateConfigResponseBody() {}

  explicit UpdateConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateConfigResponseBody() = default;
};
class UpdateConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateConfigResponseBody> body{};

  UpdateConfigResponse() {}

  explicit UpdateConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConfigResponse() = default;
};
class UpdateEngineNamespaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> desc{};
  shared_ptr<long> serviceCount{};
  shared_ptr<string> id{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> instanceId{};

  UpdateEngineNamespaceRequest() {}

  explicit UpdateEngineNamespaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (serviceCount) {
      res["ServiceCount"] = boost::any(*serviceCount);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("ServiceCount") != m.end() && !m["ServiceCount"].empty()) {
      serviceCount = make_shared<long>(boost::any_cast<long>(m["ServiceCount"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateEngineNamespaceRequest() = default;
};
class UpdateEngineNamespaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> namespaceShowName{};
  shared_ptr<long> quota{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> namespaceDesc{};
  shared_ptr<long> configCount{};

  UpdateEngineNamespaceResponseBodyData() {}

  explicit UpdateEngineNamespaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (namespaceShowName) {
      res["NamespaceShowName"] = boost::any(*namespaceShowName);
    }
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (namespaceDesc) {
      res["NamespaceDesc"] = boost::any(*namespaceDesc);
    }
    if (configCount) {
      res["ConfigCount"] = boost::any(*configCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("NamespaceShowName") != m.end() && !m["NamespaceShowName"].empty()) {
      namespaceShowName = make_shared<string>(boost::any_cast<string>(m["NamespaceShowName"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<long>(boost::any_cast<long>(m["Quota"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NamespaceDesc") != m.end() && !m["NamespaceDesc"].empty()) {
      namespaceDesc = make_shared<string>(boost::any_cast<string>(m["NamespaceDesc"]));
    }
    if (m.find("ConfigCount") != m.end() && !m["ConfigCount"].empty()) {
      configCount = make_shared<long>(boost::any_cast<long>(m["ConfigCount"]));
    }
  }


  virtual ~UpdateEngineNamespaceResponseBodyData() = default;
};
class UpdateEngineNamespaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<UpdateEngineNamespaceResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  UpdateEngineNamespaceResponseBody() {}

  explicit UpdateEngineNamespaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateEngineNamespaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateEngineNamespaceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateEngineNamespaceResponseBody() = default;
};
class UpdateEngineNamespaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateEngineNamespaceResponseBody> body{};

  UpdateEngineNamespaceResponse() {}

  explicit UpdateEngineNamespaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateEngineNamespaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEngineNamespaceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEngineNamespaceResponse() = default;
};
class UpdateNacosConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> dataId{};
  shared_ptr<string> group{};
  shared_ptr<string> appName{};
  shared_ptr<string> tags{};
  shared_ptr<string> desc{};
  shared_ptr<string> type{};
  shared_ptr<string> content{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> md5{};
  shared_ptr<string> betaIps{};

  UpdateNacosConfigRequest() {}

  explicit UpdateNacosConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (betaIps) {
      res["BetaIps"] = boost::any(*betaIps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("BetaIps") != m.end() && !m["BetaIps"].empty()) {
      betaIps = make_shared<string>(boost::any_cast<string>(m["BetaIps"]));
    }
  }


  virtual ~UpdateNacosConfigRequest() = default;
};
class UpdateNacosConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  UpdateNacosConfigResponseBody() {}

  explicit UpdateNacosConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateNacosConfigResponseBody() = default;
};
class UpdateNacosConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateNacosConfigResponseBody> body{};

  UpdateNacosConfigResponse() {}

  explicit UpdateNacosConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateNacosConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNacosConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNacosConfigResponse() = default;
};
class UpdateNacosInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> groupName{};
  shared_ptr<string> namespaceId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> ip{};
  shared_ptr<long> port{};
  shared_ptr<bool> ephemeral{};
  shared_ptr<string> weight{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> metadata{};

  UpdateNacosInstanceRequest() {}

  explicit UpdateNacosInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (namespaceId) {
      res["NamespaceId"] = boost::any(*namespaceId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (ephemeral) {
      res["Ephemeral"] = boost::any(*ephemeral);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("NamespaceId") != m.end() && !m["NamespaceId"].empty()) {
      namespaceId = make_shared<string>(boost::any_cast<string>(m["NamespaceId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Ephemeral") != m.end() && !m["Ephemeral"].empty()) {
      ephemeral = make_shared<bool>(boost::any_cast<bool>(m["Ephemeral"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<string>(boost::any_cast<string>(m["Weight"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<string>(boost::any_cast<string>(m["Metadata"]));
    }
  }


  virtual ~UpdateNacosInstanceRequest() = default;
};
class UpdateNacosInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<string> data{};

  UpdateNacosInstanceResponseBody() {}

  explicit UpdateNacosInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~UpdateNacosInstanceResponseBody() = default;
};
class UpdateNacosInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateNacosInstanceResponseBody> body{};

  UpdateNacosInstanceResponse() {}

  explicit UpdateNacosInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateNacosInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNacosInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNacosInstanceResponse() = default;
};
class UpdateZnodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> path{};
  shared_ptr<string> data{};

  UpdateZnodeRequest() {}

  explicit UpdateZnodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~UpdateZnodeRequest() = default;
};
class UpdateZnodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  UpdateZnodeResponseBody() {}

  explicit UpdateZnodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateZnodeResponseBody() = default;
};
class UpdateZnodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateZnodeResponseBody> body{};

  UpdateZnodeResponse() {}

  explicit UpdateZnodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateZnodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateZnodeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateZnodeResponse() = default;
};
class UpgradeClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> requestPars{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> upgradeVersion{};

  UpgradeClusterRequest() {}

  explicit UpgradeClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestPars) {
      res["RequestPars"] = boost::any(*requestPars);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (upgradeVersion) {
      res["UpgradeVersion"] = boost::any(*upgradeVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestPars") != m.end() && !m["RequestPars"].empty()) {
      requestPars = make_shared<string>(boost::any_cast<string>(m["RequestPars"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UpgradeVersion") != m.end() && !m["UpgradeVersion"].empty()) {
      upgradeVersion = make_shared<string>(boost::any_cast<string>(m["UpgradeVersion"]));
    }
  }


  virtual ~UpgradeClusterRequest() = default;
};
class UpgradeClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> httpCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<bool> success{};

  UpgradeClusterResponseBody() {}

  explicit UpgradeClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (httpCode) {
      res["HttpCode"] = boost::any(*httpCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HttpCode") != m.end() && !m["HttpCode"].empty()) {
      httpCode = make_shared<string>(boost::any_cast<string>(m["HttpCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpgradeClusterResponseBody() = default;
};
class UpgradeClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeClusterResponseBody> body{};

  UpgradeClusterResponse() {}

  explicit UpgradeClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpgradeClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeClusterResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeClusterResponse() = default;
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
  AddMockRuleResponse addMockRuleWithOptions(shared_ptr<AddMockRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddMockRuleResponse addMockRule(shared_ptr<AddMockRuleRequest> request);
  CloneNacosConfigResponse cloneNacosConfigWithOptions(shared_ptr<CloneNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneNacosConfigResponse cloneNacosConfig(shared_ptr<CloneNacosConfigRequest> request);
  CreateAlarmRuleResponse createAlarmRuleWithOptions(shared_ptr<CreateAlarmRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAlarmRuleResponse createAlarmRule(shared_ptr<CreateAlarmRuleRequest> request);
  CreateApplicationResponse createApplicationWithOptions(shared_ptr<CreateApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApplicationResponse createApplication(shared_ptr<CreateApplicationRequest> request);
  CreateClusterResponse createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<CreateClusterRequest> request);
  CreateEngineNamespaceResponse createEngineNamespaceWithOptions(shared_ptr<CreateEngineNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEngineNamespaceResponse createEngineNamespace(shared_ptr<CreateEngineNamespaceRequest> request);
  CreateNacosConfigResponse createNacosConfigWithOptions(shared_ptr<CreateNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNacosConfigResponse createNacosConfig(shared_ptr<CreateNacosConfigRequest> request);
  CreateZnodeResponse createZnodeWithOptions(shared_ptr<CreateZnodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateZnodeResponse createZnode(shared_ptr<CreateZnodeRequest> request);
  DeleteAlarmRuleResponse deleteAlarmRuleWithOptions(shared_ptr<DeleteAlarmRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAlarmRuleResponse deleteAlarmRule(shared_ptr<DeleteAlarmRuleRequest> request);
  DeleteClusterResponse deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterResponse deleteCluster(shared_ptr<DeleteClusterRequest> request);
  DeleteEngineNamespaceResponse deleteEngineNamespaceWithOptions(shared_ptr<DeleteEngineNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEngineNamespaceResponse deleteEngineNamespace(shared_ptr<DeleteEngineNamespaceRequest> request);
  DeleteNacosConfigResponse deleteNacosConfigWithOptions(shared_ptr<DeleteNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNacosConfigResponse deleteNacosConfig(shared_ptr<DeleteNacosConfigRequest> request);
  DeleteNacosConfigsResponse deleteNacosConfigsWithOptions(shared_ptr<DeleteNacosConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNacosConfigsResponse deleteNacosConfigs(shared_ptr<DeleteNacosConfigsRequest> request);
  DeleteNacosServiceResponse deleteNacosServiceWithOptions(shared_ptr<DeleteNacosServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNacosServiceResponse deleteNacosService(shared_ptr<DeleteNacosServiceRequest> request);
  DeleteZnodeResponse deleteZnodeWithOptions(shared_ptr<DeleteZnodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteZnodeResponse deleteZnode(shared_ptr<DeleteZnodeRequest> request);
  ExportNacosConfigResponse exportNacosConfigWithOptions(shared_ptr<ExportNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportNacosConfigResponse exportNacosConfig(shared_ptr<ExportNacosConfigRequest> request);
  GetEngineNamepaceResponse getEngineNamepaceWithOptions(shared_ptr<GetEngineNamepaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEngineNamepaceResponse getEngineNamepace(shared_ptr<GetEngineNamepaceRequest> request);
  GetImportFileUrlResponse getImportFileUrlWithOptions(shared_ptr<GetImportFileUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImportFileUrlResponse getImportFileUrl(shared_ptr<GetImportFileUrlRequest> request);
  GetNacosConfigResponse getNacosConfigWithOptions(shared_ptr<GetNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNacosConfigResponse getNacosConfig(shared_ptr<GetNacosConfigRequest> request);
  GetNacosHistoryConfigResponse getNacosHistoryConfigWithOptions(shared_ptr<GetNacosHistoryConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNacosHistoryConfigResponse getNacosHistoryConfig(shared_ptr<GetNacosHistoryConfigRequest> request);
  GetOverviewResponse getOverviewWithOptions(shared_ptr<GetOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOverviewResponse getOverview(shared_ptr<GetOverviewRequest> request);
  ImportNacosConfigResponse importNacosConfigWithOptions(shared_ptr<ImportNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportNacosConfigResponse importNacosConfig(shared_ptr<ImportNacosConfigRequest> request);
  ListAlarmContactGroupsResponse listAlarmContactGroupsWithOptions(shared_ptr<ListAlarmContactGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlarmContactGroupsResponse listAlarmContactGroups(shared_ptr<ListAlarmContactGroupsRequest> request);
  ListAlarmHistoriesResponse listAlarmHistoriesWithOptions(shared_ptr<ListAlarmHistoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlarmHistoriesResponse listAlarmHistories(shared_ptr<ListAlarmHistoriesRequest> request);
  ListAlarmItemsResponse listAlarmItemsWithOptions(shared_ptr<ListAlarmItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlarmItemsResponse listAlarmItems(shared_ptr<ListAlarmItemsRequest> request);
  ListAlarmRulesResponse listAlarmRulesWithOptions(shared_ptr<ListAlarmRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAlarmRulesResponse listAlarmRules(shared_ptr<ListAlarmRulesRequest> request);
  ListAnsInstancesResponse listAnsInstancesWithOptions(shared_ptr<ListAnsInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAnsInstancesResponse listAnsInstances(shared_ptr<ListAnsInstancesRequest> request);
  ListAnsServiceClustersResponse listAnsServiceClustersWithOptions(shared_ptr<ListAnsServiceClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAnsServiceClustersResponse listAnsServiceClusters(shared_ptr<ListAnsServiceClustersRequest> request);
  ListAnsServicesResponse listAnsServicesWithOptions(shared_ptr<ListAnsServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAnsServicesResponse listAnsServices(shared_ptr<ListAnsServicesRequest> request);
  ListClusterConnectionTypesResponse listClusterConnectionTypesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterConnectionTypesResponse listClusterConnectionTypes();
  ListClustersResponse listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClustersResponse listClusters(shared_ptr<ListClustersRequest> request);
  ListClusterTypesResponse listClusterTypesWithOptions(shared_ptr<ListClusterTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterTypesResponse listClusterTypes(shared_ptr<ListClusterTypesRequest> request);
  ListClusterVersionsResponse listClusterVersionsWithOptions(shared_ptr<ListClusterVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterVersionsResponse listClusterVersions(shared_ptr<ListClusterVersionsRequest> request);
  ListEngineNamespacesResponse listEngineNamespacesWithOptions(shared_ptr<ListEngineNamespacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEngineNamespacesResponse listEngineNamespaces(shared_ptr<ListEngineNamespacesRequest> request);
  ListEurekaInstancesResponse listEurekaInstancesWithOptions(shared_ptr<ListEurekaInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEurekaInstancesResponse listEurekaInstances(shared_ptr<ListEurekaInstancesRequest> request);
  ListEurekaServicesResponse listEurekaServicesWithOptions(shared_ptr<ListEurekaServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEurekaServicesResponse listEurekaServices(shared_ptr<ListEurekaServicesRequest> request);
  ListListenersByConfigResponse listListenersByConfigWithOptions(shared_ptr<ListListenersByConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListListenersByConfigResponse listListenersByConfig(shared_ptr<ListListenersByConfigRequest> request);
  ListListenersByIpResponse listListenersByIpWithOptions(shared_ptr<ListListenersByIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListListenersByIpResponse listListenersByIp(shared_ptr<ListListenersByIpRequest> request);
  ListNacosConfigsResponse listNacosConfigsWithOptions(shared_ptr<ListNacosConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNacosConfigsResponse listNacosConfigs(shared_ptr<ListNacosConfigsRequest> request);
  ListNacosHistoryConfigsResponse listNacosHistoryConfigsWithOptions(shared_ptr<ListNacosHistoryConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNacosHistoryConfigsResponse listNacosHistoryConfigs(shared_ptr<ListNacosHistoryConfigsRequest> request);
  ListZnodeChildrenResponse listZnodeChildrenWithOptions(shared_ptr<ListZnodeChildrenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListZnodeChildrenResponse listZnodeChildren(shared_ptr<ListZnodeChildrenRequest> request);
  QueryBusinessLocationsResponse queryBusinessLocationsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBusinessLocationsResponse queryBusinessLocations();
  QueryClusterDetailResponse queryClusterDetailWithOptions(shared_ptr<QueryClusterDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryClusterDetailResponse queryClusterDetail(shared_ptr<QueryClusterDetailRequest> request);
  QueryClusterDiskSpecificationResponse queryClusterDiskSpecificationWithOptions(shared_ptr<QueryClusterDiskSpecificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryClusterDiskSpecificationResponse queryClusterDiskSpecification(shared_ptr<QueryClusterDiskSpecificationRequest> request);
  QueryClusterSpecificationResponse queryClusterSpecificationWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryClusterSpecificationResponse queryClusterSpecification();
  QueryConfigResponse queryConfigWithOptions(shared_ptr<QueryConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryConfigResponse queryConfig(shared_ptr<QueryConfigRequest> request);
  QueryMonitorResponse queryMonitorWithOptions(shared_ptr<QueryMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMonitorResponse queryMonitor(shared_ptr<QueryMonitorRequest> request);
  QueryZnodeDetailResponse queryZnodeDetailWithOptions(shared_ptr<QueryZnodeDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryZnodeDetailResponse queryZnodeDetail(shared_ptr<QueryZnodeDetailRequest> request);
  RestartClusterResponse restartClusterWithOptions(shared_ptr<RestartClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartClusterResponse restartCluster(shared_ptr<RestartClusterRequest> request);
  RetryClusterResponse retryClusterWithOptions(shared_ptr<RetryClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetryClusterResponse retryCluster(shared_ptr<RetryClusterRequest> request);
  ScalingClusterResponse scalingClusterWithOptions(shared_ptr<ScalingClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScalingClusterResponse scalingCluster(shared_ptr<ScalingClusterRequest> request);
  UpdateAclResponse updateAclWithOptions(shared_ptr<UpdateAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAclResponse updateAcl(shared_ptr<UpdateAclRequest> request);
  UpdateClusterResponse updateClusterWithOptions(shared_ptr<UpdateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateClusterResponse updateCluster(shared_ptr<UpdateClusterRequest> request);
  UpdateConfigResponse updateConfigWithOptions(shared_ptr<UpdateConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConfigResponse updateConfig(shared_ptr<UpdateConfigRequest> request);
  UpdateEngineNamespaceResponse updateEngineNamespaceWithOptions(shared_ptr<UpdateEngineNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEngineNamespaceResponse updateEngineNamespace(shared_ptr<UpdateEngineNamespaceRequest> request);
  UpdateNacosConfigResponse updateNacosConfigWithOptions(shared_ptr<UpdateNacosConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNacosConfigResponse updateNacosConfig(shared_ptr<UpdateNacosConfigRequest> request);
  UpdateNacosInstanceResponse updateNacosInstanceWithOptions(shared_ptr<UpdateNacosInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNacosInstanceResponse updateNacosInstance(shared_ptr<UpdateNacosInstanceRequest> request);
  UpdateZnodeResponse updateZnodeWithOptions(shared_ptr<UpdateZnodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateZnodeResponse updateZnode(shared_ptr<UpdateZnodeRequest> request);
  UpgradeClusterResponse upgradeClusterWithOptions(shared_ptr<UpgradeClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeClusterResponse upgradeCluster(shared_ptr<UpgradeClusterRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Mse20190531

#endif
