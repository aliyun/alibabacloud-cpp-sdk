// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AMQP-OPEN20191212_H_
#define ALIBABACLOUD_AMQP-OPEN20191212_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Amqp-open20191212 {
class DataValue : public Darabonba::Model {
public:
  shared_ptr<long> masterUid{};
  shared_ptr<string> cInstanceId{};
  shared_ptr<string> accessKey{};
  shared_ptr<string> userName{};
  shared_ptr<string> password{};
  shared_ptr<long> deleted{};
  shared_ptr<long> createTimestamp{};

  DataValue() {}

  explicit DataValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (masterUid) {
      res["masterUid"] = boost::any(*masterUid);
    }
    if (cInstanceId) {
      res["cInstanceId"] = boost::any(*cInstanceId);
    }
    if (accessKey) {
      res["accessKey"] = boost::any(*accessKey);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (deleted) {
      res["deleted"] = boost::any(*deleted);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("masterUid") != m.end() && !m["masterUid"].empty()) {
      masterUid = make_shared<long>(boost::any_cast<long>(m["masterUid"]));
    }
    if (m.find("cInstanceId") != m.end() && !m["cInstanceId"].empty()) {
      cInstanceId = make_shared<string>(boost::any_cast<string>(m["cInstanceId"]));
    }
    if (m.find("accessKey") != m.end() && !m["accessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["accessKey"]));
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("deleted") != m.end() && !m["deleted"].empty()) {
      deleted = make_shared<long>(boost::any_cast<long>(m["deleted"]));
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
  }


  virtual ~DataValue() = default;
};
class CreateAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountAccessKey{};
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> secretSign{};
  shared_ptr<string> signature{};
  shared_ptr<string> userName{};

  CreateAccountRequest() {}

  explicit CreateAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountAccessKey) {
      res["accountAccessKey"] = boost::any(*accountAccessKey);
    }
    if (createTimestamp) {
      res["createTimestamp"] = boost::any(*createTimestamp);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (secretSign) {
      res["secretSign"] = boost::any(*secretSign);
    }
    if (signature) {
      res["signature"] = boost::any(*signature);
    }
    if (userName) {
      res["userName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountAccessKey") != m.end() && !m["accountAccessKey"].empty()) {
      accountAccessKey = make_shared<string>(boost::any_cast<string>(m["accountAccessKey"]));
    }
    if (m.find("createTimestamp") != m.end() && !m["createTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["createTimestamp"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("secretSign") != m.end() && !m["secretSign"].empty()) {
      secretSign = make_shared<string>(boost::any_cast<string>(m["secretSign"]));
    }
    if (m.find("signature") != m.end() && !m["signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["signature"]));
    }
    if (m.find("userName") != m.end() && !m["userName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["userName"]));
    }
  }


  virtual ~CreateAccountRequest() = default;
};
class CreateAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<long> createTimeStamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> masterUId{};
  shared_ptr<string> password{};
  shared_ptr<string> userName{};

  CreateAccountResponseBodyData() {}

  explicit CreateAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (createTimeStamp) {
      res["CreateTimeStamp"] = boost::any(*createTimeStamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (masterUId) {
      res["MasterUId"] = boost::any(*masterUId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("CreateTimeStamp") != m.end() && !m["CreateTimeStamp"].empty()) {
      createTimeStamp = make_shared<long>(boost::any_cast<long>(m["CreateTimeStamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MasterUId") != m.end() && !m["MasterUId"].empty()) {
      masterUId = make_shared<long>(boost::any_cast<long>(m["MasterUId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateAccountResponseBodyData() = default;
};
class CreateAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreateAccountResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAccountResponseBody() {}

  explicit CreateAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateAccountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateAccountResponseBodyData>(model1);
      }
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


  virtual ~CreateAccountResponseBody() = default;
};
class CreateAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccountResponseBody> body{};

  CreateAccountResponse() {}

  explicit CreateAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccountResponse() = default;
};
class CreateBindingRequest : public Darabonba::Model {
public:
  shared_ptr<string> argument{};
  shared_ptr<string> bindingKey{};
  shared_ptr<string> bindingType{};
  shared_ptr<string> destinationName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> sourceExchange{};
  shared_ptr<string> virtualHost{};

  CreateBindingRequest() {}

  explicit CreateBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (argument) {
      res["Argument"] = boost::any(*argument);
    }
    if (bindingKey) {
      res["BindingKey"] = boost::any(*bindingKey);
    }
    if (bindingType) {
      res["BindingType"] = boost::any(*bindingType);
    }
    if (destinationName) {
      res["DestinationName"] = boost::any(*destinationName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (sourceExchange) {
      res["SourceExchange"] = boost::any(*sourceExchange);
    }
    if (virtualHost) {
      res["VirtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Argument") != m.end() && !m["Argument"].empty()) {
      argument = make_shared<string>(boost::any_cast<string>(m["Argument"]));
    }
    if (m.find("BindingKey") != m.end() && !m["BindingKey"].empty()) {
      bindingKey = make_shared<string>(boost::any_cast<string>(m["BindingKey"]));
    }
    if (m.find("BindingType") != m.end() && !m["BindingType"].empty()) {
      bindingType = make_shared<string>(boost::any_cast<string>(m["BindingType"]));
    }
    if (m.find("DestinationName") != m.end() && !m["DestinationName"].empty()) {
      destinationName = make_shared<string>(boost::any_cast<string>(m["DestinationName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SourceExchange") != m.end() && !m["SourceExchange"].empty()) {
      sourceExchange = make_shared<string>(boost::any_cast<string>(m["SourceExchange"]));
    }
    if (m.find("VirtualHost") != m.end() && !m["VirtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["VirtualHost"]));
    }
  }


  virtual ~CreateBindingRequest() = default;
};
class CreateBindingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateBindingResponseBody() {}

  explicit CreateBindingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateBindingResponseBody() = default;
};
class CreateBindingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBindingResponseBody> body{};

  CreateBindingResponse() {}

  explicit CreateBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBindingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBindingResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBindingResponse() = default;
};
class CreateExchangeRequest : public Darabonba::Model {
public:
  shared_ptr<string> alternateExchange{};
  shared_ptr<bool> autoDeleteState{};
  shared_ptr<string> exchangeName{};
  shared_ptr<string> exchangeType{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> internal{};
  shared_ptr<string> virtualHost{};
  shared_ptr<string> XDelayedType{};

  CreateExchangeRequest() {}

  explicit CreateExchangeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alternateExchange) {
      res["AlternateExchange"] = boost::any(*alternateExchange);
    }
    if (autoDeleteState) {
      res["AutoDeleteState"] = boost::any(*autoDeleteState);
    }
    if (exchangeName) {
      res["ExchangeName"] = boost::any(*exchangeName);
    }
    if (exchangeType) {
      res["ExchangeType"] = boost::any(*exchangeType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (internal) {
      res["Internal"] = boost::any(*internal);
    }
    if (virtualHost) {
      res["VirtualHost"] = boost::any(*virtualHost);
    }
    if (XDelayedType) {
      res["XDelayedType"] = boost::any(*XDelayedType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlternateExchange") != m.end() && !m["AlternateExchange"].empty()) {
      alternateExchange = make_shared<string>(boost::any_cast<string>(m["AlternateExchange"]));
    }
    if (m.find("AutoDeleteState") != m.end() && !m["AutoDeleteState"].empty()) {
      autoDeleteState = make_shared<bool>(boost::any_cast<bool>(m["AutoDeleteState"]));
    }
    if (m.find("ExchangeName") != m.end() && !m["ExchangeName"].empty()) {
      exchangeName = make_shared<string>(boost::any_cast<string>(m["ExchangeName"]));
    }
    if (m.find("ExchangeType") != m.end() && !m["ExchangeType"].empty()) {
      exchangeType = make_shared<string>(boost::any_cast<string>(m["ExchangeType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Internal") != m.end() && !m["Internal"].empty()) {
      internal = make_shared<bool>(boost::any_cast<bool>(m["Internal"]));
    }
    if (m.find("VirtualHost") != m.end() && !m["VirtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["VirtualHost"]));
    }
    if (m.find("XDelayedType") != m.end() && !m["XDelayedType"].empty()) {
      XDelayedType = make_shared<string>(boost::any_cast<string>(m["XDelayedType"]));
    }
  }


  virtual ~CreateExchangeRequest() = default;
};
class CreateExchangeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateExchangeResponseBody() {}

  explicit CreateExchangeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateExchangeResponseBody() = default;
};
class CreateExchangeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateExchangeResponseBody> body{};

  CreateExchangeResponse() {}

  explicit CreateExchangeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateExchangeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateExchangeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateExchangeResponse() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> edition{};
  shared_ptr<bool> encryptedInstance{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> kmsKeyId{};
  shared_ptr<long> maxConnections{};
  shared_ptr<long> maxEipTps{};
  shared_ptr<long> maxPrivateTps{};
  shared_ptr<string> paymentType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodCycle{};
  shared_ptr<long> provisionedCapacity{};
  shared_ptr<long> queueCapacity{};
  shared_ptr<string> renewStatus{};
  shared_ptr<string> renewalDurationUnit{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serverlessChargeType{};
  shared_ptr<long> storageSize{};
  shared_ptr<bool> supportEip{};
  shared_ptr<bool> supportTracing{};
  shared_ptr<long> tracingStorageTime{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewPeriod) {
      res["AutoRenewPeriod"] = boost::any(*autoRenewPeriod);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (edition) {
      res["Edition"] = boost::any(*edition);
    }
    if (encryptedInstance) {
      res["EncryptedInstance"] = boost::any(*encryptedInstance);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (kmsKeyId) {
      res["KmsKeyId"] = boost::any(*kmsKeyId);
    }
    if (maxConnections) {
      res["MaxConnections"] = boost::any(*maxConnections);
    }
    if (maxEipTps) {
      res["MaxEipTps"] = boost::any(*maxEipTps);
    }
    if (maxPrivateTps) {
      res["MaxPrivateTps"] = boost::any(*maxPrivateTps);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodCycle) {
      res["PeriodCycle"] = boost::any(*periodCycle);
    }
    if (provisionedCapacity) {
      res["ProvisionedCapacity"] = boost::any(*provisionedCapacity);
    }
    if (queueCapacity) {
      res["QueueCapacity"] = boost::any(*queueCapacity);
    }
    if (renewStatus) {
      res["RenewStatus"] = boost::any(*renewStatus);
    }
    if (renewalDurationUnit) {
      res["RenewalDurationUnit"] = boost::any(*renewalDurationUnit);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serverlessChargeType) {
      res["ServerlessChargeType"] = boost::any(*serverlessChargeType);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (supportEip) {
      res["SupportEip"] = boost::any(*supportEip);
    }
    if (supportTracing) {
      res["SupportTracing"] = boost::any(*supportTracing);
    }
    if (tracingStorageTime) {
      res["TracingStorageTime"] = boost::any(*tracingStorageTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("AutoRenewPeriod") != m.end() && !m["AutoRenewPeriod"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["AutoRenewPeriod"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Edition") != m.end() && !m["Edition"].empty()) {
      edition = make_shared<string>(boost::any_cast<string>(m["Edition"]));
    }
    if (m.find("EncryptedInstance") != m.end() && !m["EncryptedInstance"].empty()) {
      encryptedInstance = make_shared<bool>(boost::any_cast<bool>(m["EncryptedInstance"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("KmsKeyId") != m.end() && !m["KmsKeyId"].empty()) {
      kmsKeyId = make_shared<string>(boost::any_cast<string>(m["KmsKeyId"]));
    }
    if (m.find("MaxConnections") != m.end() && !m["MaxConnections"].empty()) {
      maxConnections = make_shared<long>(boost::any_cast<long>(m["MaxConnections"]));
    }
    if (m.find("MaxEipTps") != m.end() && !m["MaxEipTps"].empty()) {
      maxEipTps = make_shared<long>(boost::any_cast<long>(m["MaxEipTps"]));
    }
    if (m.find("MaxPrivateTps") != m.end() && !m["MaxPrivateTps"].empty()) {
      maxPrivateTps = make_shared<long>(boost::any_cast<long>(m["MaxPrivateTps"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodCycle") != m.end() && !m["PeriodCycle"].empty()) {
      periodCycle = make_shared<string>(boost::any_cast<string>(m["PeriodCycle"]));
    }
    if (m.find("ProvisionedCapacity") != m.end() && !m["ProvisionedCapacity"].empty()) {
      provisionedCapacity = make_shared<long>(boost::any_cast<long>(m["ProvisionedCapacity"]));
    }
    if (m.find("QueueCapacity") != m.end() && !m["QueueCapacity"].empty()) {
      queueCapacity = make_shared<long>(boost::any_cast<long>(m["QueueCapacity"]));
    }
    if (m.find("RenewStatus") != m.end() && !m["RenewStatus"].empty()) {
      renewStatus = make_shared<string>(boost::any_cast<string>(m["RenewStatus"]));
    }
    if (m.find("RenewalDurationUnit") != m.end() && !m["RenewalDurationUnit"].empty()) {
      renewalDurationUnit = make_shared<string>(boost::any_cast<string>(m["RenewalDurationUnit"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServerlessChargeType") != m.end() && !m["ServerlessChargeType"].empty()) {
      serverlessChargeType = make_shared<string>(boost::any_cast<string>(m["ServerlessChargeType"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("SupportEip") != m.end() && !m["SupportEip"].empty()) {
      supportEip = make_shared<bool>(boost::any_cast<bool>(m["SupportEip"]));
    }
    if (m.find("SupportTracing") != m.end() && !m["SupportTracing"].empty()) {
      supportTracing = make_shared<bool>(boost::any_cast<bool>(m["SupportTracing"]));
    }
    if (m.find("TracingStorageTime") != m.end() && !m["TracingStorageTime"].empty()) {
      tracingStorageTime = make_shared<long>(boost::any_cast<long>(m["TracingStorageTime"]));
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
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


  virtual ~CreateInstanceResponseBody() = default;
};
class CreateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceResponseBody> body{};

  CreateInstanceResponse() {}

  explicit CreateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class CreateQueueRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoDeleteState{};
  shared_ptr<long> autoExpireState{};
  shared_ptr<string> deadLetterExchange{};
  shared_ptr<string> deadLetterRoutingKey{};
  shared_ptr<bool> exclusiveState{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxLength{};
  shared_ptr<long> maximumPriority{};
  shared_ptr<long> messageTTL{};
  shared_ptr<string> queueName{};
  shared_ptr<string> virtualHost{};

  CreateQueueRequest() {}

  explicit CreateQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoDeleteState) {
      res["AutoDeleteState"] = boost::any(*autoDeleteState);
    }
    if (autoExpireState) {
      res["AutoExpireState"] = boost::any(*autoExpireState);
    }
    if (deadLetterExchange) {
      res["DeadLetterExchange"] = boost::any(*deadLetterExchange);
    }
    if (deadLetterRoutingKey) {
      res["DeadLetterRoutingKey"] = boost::any(*deadLetterRoutingKey);
    }
    if (exclusiveState) {
      res["ExclusiveState"] = boost::any(*exclusiveState);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (maximumPriority) {
      res["MaximumPriority"] = boost::any(*maximumPriority);
    }
    if (messageTTL) {
      res["MessageTTL"] = boost::any(*messageTTL);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (virtualHost) {
      res["VirtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoDeleteState") != m.end() && !m["AutoDeleteState"].empty()) {
      autoDeleteState = make_shared<bool>(boost::any_cast<bool>(m["AutoDeleteState"]));
    }
    if (m.find("AutoExpireState") != m.end() && !m["AutoExpireState"].empty()) {
      autoExpireState = make_shared<long>(boost::any_cast<long>(m["AutoExpireState"]));
    }
    if (m.find("DeadLetterExchange") != m.end() && !m["DeadLetterExchange"].empty()) {
      deadLetterExchange = make_shared<string>(boost::any_cast<string>(m["DeadLetterExchange"]));
    }
    if (m.find("DeadLetterRoutingKey") != m.end() && !m["DeadLetterRoutingKey"].empty()) {
      deadLetterRoutingKey = make_shared<string>(boost::any_cast<string>(m["DeadLetterRoutingKey"]));
    }
    if (m.find("ExclusiveState") != m.end() && !m["ExclusiveState"].empty()) {
      exclusiveState = make_shared<bool>(boost::any_cast<bool>(m["ExclusiveState"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MaximumPriority") != m.end() && !m["MaximumPriority"].empty()) {
      maximumPriority = make_shared<long>(boost::any_cast<long>(m["MaximumPriority"]));
    }
    if (m.find("MessageTTL") != m.end() && !m["MessageTTL"].empty()) {
      messageTTL = make_shared<long>(boost::any_cast<long>(m["MessageTTL"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("VirtualHost") != m.end() && !m["VirtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["VirtualHost"]));
    }
  }


  virtual ~CreateQueueRequest() = default;
};
class CreateQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateQueueResponseBody() {}

  explicit CreateQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateQueueResponseBody() = default;
};
class CreateQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateQueueResponseBody> body{};

  CreateQueueResponse() {}

  explicit CreateQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateQueueResponseBody>(model1);
      }
    }
  }


  virtual ~CreateQueueResponse() = default;
};
class CreateVirtualHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> virtualHost{};

  CreateVirtualHostRequest() {}

  explicit CreateVirtualHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (virtualHost) {
      res["VirtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("VirtualHost") != m.end() && !m["VirtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["VirtualHost"]));
    }
  }


  virtual ~CreateVirtualHostRequest() = default;
};
class CreateVirtualHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateVirtualHostResponseBody() {}

  explicit CreateVirtualHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateVirtualHostResponseBody() = default;
};
class CreateVirtualHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVirtualHostResponseBody> body{};

  CreateVirtualHostResponse() {}

  explicit CreateVirtualHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVirtualHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVirtualHostResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVirtualHostResponse() = default;
};
class DeleteAccountRequest : public Darabonba::Model {
public:
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> userName{};

  DeleteAccountRequest() {}

  explicit DeleteAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DeleteAccountRequest() = default;
};
class DeleteAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAccountResponseBody() {}

  explicit DeleteAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
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


  virtual ~DeleteAccountResponseBody() = default;
};
class DeleteAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAccountResponseBody> body{};

  DeleteAccountResponse() {}

  explicit DeleteAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccountResponse() = default;
};
class DeleteBindingRequest : public Darabonba::Model {
public:
  shared_ptr<string> bindingKey{};
  shared_ptr<string> bindingType{};
  shared_ptr<string> destinationName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> sourceExchange{};
  shared_ptr<string> virtualHost{};

  DeleteBindingRequest() {}

  explicit DeleteBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindingKey) {
      res["BindingKey"] = boost::any(*bindingKey);
    }
    if (bindingType) {
      res["BindingType"] = boost::any(*bindingType);
    }
    if (destinationName) {
      res["DestinationName"] = boost::any(*destinationName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (sourceExchange) {
      res["SourceExchange"] = boost::any(*sourceExchange);
    }
    if (virtualHost) {
      res["VirtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindingKey") != m.end() && !m["BindingKey"].empty()) {
      bindingKey = make_shared<string>(boost::any_cast<string>(m["BindingKey"]));
    }
    if (m.find("BindingType") != m.end() && !m["BindingType"].empty()) {
      bindingType = make_shared<string>(boost::any_cast<string>(m["BindingType"]));
    }
    if (m.find("DestinationName") != m.end() && !m["DestinationName"].empty()) {
      destinationName = make_shared<string>(boost::any_cast<string>(m["DestinationName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SourceExchange") != m.end() && !m["SourceExchange"].empty()) {
      sourceExchange = make_shared<string>(boost::any_cast<string>(m["SourceExchange"]));
    }
    if (m.find("VirtualHost") != m.end() && !m["VirtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["VirtualHost"]));
    }
  }


  virtual ~DeleteBindingRequest() = default;
};
class DeleteBindingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteBindingResponseBody() {}

  explicit DeleteBindingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteBindingResponseBody() = default;
};
class DeleteBindingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteBindingResponseBody> body{};

  DeleteBindingResponse() {}

  explicit DeleteBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBindingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBindingResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBindingResponse() = default;
};
class DeleteExchangeRequest : public Darabonba::Model {
public:
  shared_ptr<string> exchangeName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> virtualHost{};

  DeleteExchangeRequest() {}

  explicit DeleteExchangeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exchangeName) {
      res["ExchangeName"] = boost::any(*exchangeName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (virtualHost) {
      res["VirtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExchangeName") != m.end() && !m["ExchangeName"].empty()) {
      exchangeName = make_shared<string>(boost::any_cast<string>(m["ExchangeName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("VirtualHost") != m.end() && !m["VirtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["VirtualHost"]));
    }
  }


  virtual ~DeleteExchangeRequest() = default;
};
class DeleteExchangeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteExchangeResponseBody() {}

  explicit DeleteExchangeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteExchangeResponseBody() = default;
};
class DeleteExchangeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExchangeResponseBody> body{};

  DeleteExchangeResponse() {}

  explicit DeleteExchangeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteExchangeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExchangeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExchangeResponse() = default;
};
class DeleteQueueRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> queueName{};
  shared_ptr<string> virtualHost{};

  DeleteQueueRequest() {}

  explicit DeleteQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (virtualHost) {
      res["VirtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("VirtualHost") != m.end() && !m["VirtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["VirtualHost"]));
    }
  }


  virtual ~DeleteQueueRequest() = default;
};
class DeleteQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteQueueResponseBody() {}

  explicit DeleteQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteQueueResponseBody() = default;
};
class DeleteQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteQueueResponseBody> body{};

  DeleteQueueResponse() {}

  explicit DeleteQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteQueueResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteQueueResponse() = default;
};
class DeleteVirtualHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> virtualHost{};

  DeleteVirtualHostRequest() {}

  explicit DeleteVirtualHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (virtualHost) {
      res["VirtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("VirtualHost") != m.end() && !m["VirtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["VirtualHost"]));
    }
  }


  virtual ~DeleteVirtualHostRequest() = default;
};
class DeleteVirtualHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVirtualHostResponseBody() {}

  explicit DeleteVirtualHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVirtualHostResponseBody() = default;
};
class DeleteVirtualHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVirtualHostResponseBody> body{};

  DeleteVirtualHostResponse() {}

  explicit DeleteVirtualHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVirtualHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVirtualHostResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVirtualHostResponse() = default;
};
class GetInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetInstanceRequest() {}

  explicit GetInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetInstanceRequest() = default;
};
class GetInstanceResponseBodyDataTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetInstanceResponseBodyDataTags() {}

  explicit GetInstanceResponseBodyDataTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetInstanceResponseBodyDataTags() = default;
};
class GetInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenewInstance{};
  shared_ptr<string> classicEndpoint{};
  shared_ptr<bool> encryptedInstance{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> kmsKeyId{};
  shared_ptr<long> maxConnections{};
  shared_ptr<long> maxEipTps{};
  shared_ptr<long> maxQueue{};
  shared_ptr<long> maxTps{};
  shared_ptr<long> maxVhost{};
  shared_ptr<long> orderCreateTime{};
  shared_ptr<string> orderType{};
  shared_ptr<string> privateEndpoint{};
  shared_ptr<string> publicEndpoint{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<long> storageSize{};
  shared_ptr<bool> supportEIP{};
  shared_ptr<bool> supportTracing{};
  shared_ptr<vector<GetInstanceResponseBodyDataTags>> tags{};
  shared_ptr<long> tracingStorageTime{};

  GetInstanceResponseBodyData() {}

  explicit GetInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenewInstance) {
      res["AutoRenewInstance"] = boost::any(*autoRenewInstance);
    }
    if (classicEndpoint) {
      res["ClassicEndpoint"] = boost::any(*classicEndpoint);
    }
    if (encryptedInstance) {
      res["EncryptedInstance"] = boost::any(*encryptedInstance);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (kmsKeyId) {
      res["KmsKeyId"] = boost::any(*kmsKeyId);
    }
    if (maxConnections) {
      res["MaxConnections"] = boost::any(*maxConnections);
    }
    if (maxEipTps) {
      res["MaxEipTps"] = boost::any(*maxEipTps);
    }
    if (maxQueue) {
      res["MaxQueue"] = boost::any(*maxQueue);
    }
    if (maxTps) {
      res["MaxTps"] = boost::any(*maxTps);
    }
    if (maxVhost) {
      res["MaxVhost"] = boost::any(*maxVhost);
    }
    if (orderCreateTime) {
      res["OrderCreateTime"] = boost::any(*orderCreateTime);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (privateEndpoint) {
      res["PrivateEndpoint"] = boost::any(*privateEndpoint);
    }
    if (publicEndpoint) {
      res["PublicEndpoint"] = boost::any(*publicEndpoint);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (supportEIP) {
      res["SupportEIP"] = boost::any(*supportEIP);
    }
    if (supportTracing) {
      res["SupportTracing"] = boost::any(*supportTracing);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tracingStorageTime) {
      res["TracingStorageTime"] = boost::any(*tracingStorageTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenewInstance") != m.end() && !m["AutoRenewInstance"].empty()) {
      autoRenewInstance = make_shared<bool>(boost::any_cast<bool>(m["AutoRenewInstance"]));
    }
    if (m.find("ClassicEndpoint") != m.end() && !m["ClassicEndpoint"].empty()) {
      classicEndpoint = make_shared<string>(boost::any_cast<string>(m["ClassicEndpoint"]));
    }
    if (m.find("EncryptedInstance") != m.end() && !m["EncryptedInstance"].empty()) {
      encryptedInstance = make_shared<bool>(boost::any_cast<bool>(m["EncryptedInstance"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("KmsKeyId") != m.end() && !m["KmsKeyId"].empty()) {
      kmsKeyId = make_shared<string>(boost::any_cast<string>(m["KmsKeyId"]));
    }
    if (m.find("MaxConnections") != m.end() && !m["MaxConnections"].empty()) {
      maxConnections = make_shared<long>(boost::any_cast<long>(m["MaxConnections"]));
    }
    if (m.find("MaxEipTps") != m.end() && !m["MaxEipTps"].empty()) {
      maxEipTps = make_shared<long>(boost::any_cast<long>(m["MaxEipTps"]));
    }
    if (m.find("MaxQueue") != m.end() && !m["MaxQueue"].empty()) {
      maxQueue = make_shared<long>(boost::any_cast<long>(m["MaxQueue"]));
    }
    if (m.find("MaxTps") != m.end() && !m["MaxTps"].empty()) {
      maxTps = make_shared<long>(boost::any_cast<long>(m["MaxTps"]));
    }
    if (m.find("MaxVhost") != m.end() && !m["MaxVhost"].empty()) {
      maxVhost = make_shared<long>(boost::any_cast<long>(m["MaxVhost"]));
    }
    if (m.find("OrderCreateTime") != m.end() && !m["OrderCreateTime"].empty()) {
      orderCreateTime = make_shared<long>(boost::any_cast<long>(m["OrderCreateTime"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PrivateEndpoint") != m.end() && !m["PrivateEndpoint"].empty()) {
      privateEndpoint = make_shared<string>(boost::any_cast<string>(m["PrivateEndpoint"]));
    }
    if (m.find("PublicEndpoint") != m.end() && !m["PublicEndpoint"].empty()) {
      publicEndpoint = make_shared<string>(boost::any_cast<string>(m["PublicEndpoint"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("SupportEIP") != m.end() && !m["SupportEIP"].empty()) {
      supportEIP = make_shared<bool>(boost::any_cast<bool>(m["SupportEIP"]));
    }
    if (m.find("SupportTracing") != m.end() && !m["SupportTracing"].empty()) {
      supportTracing = make_shared<bool>(boost::any_cast<bool>(m["SupportTracing"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetInstanceResponseBodyDataTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyDataTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetInstanceResponseBodyDataTags>>(expect1);
      }
    }
    if (m.find("TracingStorageTime") != m.end() && !m["TracingStorageTime"].empty()) {
      tracingStorageTime = make_shared<long>(boost::any_cast<long>(m["TracingStorageTime"]));
    }
  }


  virtual ~GetInstanceResponseBodyData() = default;
};
class GetInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetInstanceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetInstanceResponseBody() {}

  explicit GetInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetInstanceResponseBody() = default;
};
class GetInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceResponseBody> body{};

  GetInstanceResponse() {}

  explicit GetInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceResponse() = default;
};
class GetMetadataAmountRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetMetadataAmountRequest() {}

  explicit GetMetadataAmountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetMetadataAmountRequest() = default;
};
class GetMetadataAmountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentExchanges{};
  shared_ptr<long> currentQueues{};
  shared_ptr<long> currentVirtualHosts{};
  shared_ptr<long> maxExchanges{};
  shared_ptr<long> maxQueues{};
  shared_ptr<long> maxVirtualHosts{};

  GetMetadataAmountResponseBodyData() {}

  explicit GetMetadataAmountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentExchanges) {
      res["CurrentExchanges"] = boost::any(*currentExchanges);
    }
    if (currentQueues) {
      res["CurrentQueues"] = boost::any(*currentQueues);
    }
    if (currentVirtualHosts) {
      res["CurrentVirtualHosts"] = boost::any(*currentVirtualHosts);
    }
    if (maxExchanges) {
      res["MaxExchanges"] = boost::any(*maxExchanges);
    }
    if (maxQueues) {
      res["MaxQueues"] = boost::any(*maxQueues);
    }
    if (maxVirtualHosts) {
      res["MaxVirtualHosts"] = boost::any(*maxVirtualHosts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentExchanges") != m.end() && !m["CurrentExchanges"].empty()) {
      currentExchanges = make_shared<long>(boost::any_cast<long>(m["CurrentExchanges"]));
    }
    if (m.find("CurrentQueues") != m.end() && !m["CurrentQueues"].empty()) {
      currentQueues = make_shared<long>(boost::any_cast<long>(m["CurrentQueues"]));
    }
    if (m.find("CurrentVirtualHosts") != m.end() && !m["CurrentVirtualHosts"].empty()) {
      currentVirtualHosts = make_shared<long>(boost::any_cast<long>(m["CurrentVirtualHosts"]));
    }
    if (m.find("MaxExchanges") != m.end() && !m["MaxExchanges"].empty()) {
      maxExchanges = make_shared<long>(boost::any_cast<long>(m["MaxExchanges"]));
    }
    if (m.find("MaxQueues") != m.end() && !m["MaxQueues"].empty()) {
      maxQueues = make_shared<long>(boost::any_cast<long>(m["MaxQueues"]));
    }
    if (m.find("MaxVirtualHosts") != m.end() && !m["MaxVirtualHosts"].empty()) {
      maxVirtualHosts = make_shared<long>(boost::any_cast<long>(m["MaxVirtualHosts"]));
    }
  }


  virtual ~GetMetadataAmountResponseBodyData() = default;
};
class GetMetadataAmountResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMetadataAmountResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetMetadataAmountResponseBody() {}

  explicit GetMetadataAmountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMetadataAmountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetMetadataAmountResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMetadataAmountResponseBody() = default;
};
class GetMetadataAmountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMetadataAmountResponseBody> body{};

  GetMetadataAmountResponse() {}

  explicit GetMetadataAmountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMetadataAmountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMetadataAmountResponseBody>(model1);
      }
    }
  }


  virtual ~GetMetadataAmountResponse() = default;
};
class ListAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ListAccountsRequest() {}

  explicit ListAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAccountsRequest() = default;
};
class ListAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<map<string, vector<DataValue>>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAccountsResponseBody() {}

  explicit ListAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      map<string, boost::any> temp1;
      for(auto item1:*data){
        vector<boost::any> temp2;
        for(auto item2:item1.second){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1[item1.first] = boost::any(temp2);
      }
      res["Data"] = boost::any(temp1);
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        map<string, vector<DataValue>> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["Data"])){
          if (typeid(vector<boost::any>) == item1.second.type()) {
            vector<DataValue> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1.second)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                DataValue model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1[item1.first] = expect2;
          }
        }
        data = make_shared<map<string, vector<DataValue>>>(expect1);
      }
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


  virtual ~ListAccountsResponseBody() = default;
};
class ListAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccountsResponseBody> body{};

  ListAccountsResponse() {}

  explicit ListAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccountsResponse() = default;
};
class ListBindingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> virtualHost{};

  ListBindingsRequest() {}

  explicit ListBindingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (virtualHost) {
      res["VirtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("VirtualHost") != m.end() && !m["VirtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["VirtualHost"]));
    }
  }


  virtual ~ListBindingsRequest() = default;
};
class ListBindingsResponseBodyDataBindings : public Darabonba::Model {
public:
  shared_ptr<string> argument{};
  shared_ptr<string> bindingKey{};
  shared_ptr<string> bindingType{};
  shared_ptr<string> destinationName{};
  shared_ptr<string> sourceExchange{};

  ListBindingsResponseBodyDataBindings() {}

  explicit ListBindingsResponseBodyDataBindings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (argument) {
      res["Argument"] = boost::any(*argument);
    }
    if (bindingKey) {
      res["BindingKey"] = boost::any(*bindingKey);
    }
    if (bindingType) {
      res["BindingType"] = boost::any(*bindingType);
    }
    if (destinationName) {
      res["DestinationName"] = boost::any(*destinationName);
    }
    if (sourceExchange) {
      res["SourceExchange"] = boost::any(*sourceExchange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Argument") != m.end() && !m["Argument"].empty()) {
      argument = make_shared<string>(boost::any_cast<string>(m["Argument"]));
    }
    if (m.find("BindingKey") != m.end() && !m["BindingKey"].empty()) {
      bindingKey = make_shared<string>(boost::any_cast<string>(m["BindingKey"]));
    }
    if (m.find("BindingType") != m.end() && !m["BindingType"].empty()) {
      bindingType = make_shared<string>(boost::any_cast<string>(m["BindingType"]));
    }
    if (m.find("DestinationName") != m.end() && !m["DestinationName"].empty()) {
      destinationName = make_shared<string>(boost::any_cast<string>(m["DestinationName"]));
    }
    if (m.find("SourceExchange") != m.end() && !m["SourceExchange"].empty()) {
      sourceExchange = make_shared<string>(boost::any_cast<string>(m["SourceExchange"]));
    }
  }


  virtual ~ListBindingsResponseBodyDataBindings() = default;
};
class ListBindingsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListBindingsResponseBodyDataBindings>> bindings{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListBindingsResponseBodyData() {}

  explicit ListBindingsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindings) {
      vector<boost::any> temp1;
      for(auto item1:*bindings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bindings"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bindings") != m.end() && !m["Bindings"].empty()) {
      if (typeid(vector<boost::any>) == m["Bindings"].type()) {
        vector<ListBindingsResponseBodyDataBindings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bindings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBindingsResponseBodyDataBindings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bindings = make_shared<vector<ListBindingsResponseBodyDataBindings>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListBindingsResponseBodyData() = default;
};
class ListBindingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListBindingsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListBindingsResponseBody() {}

  explicit ListBindingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBindingsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListBindingsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListBindingsResponseBody() = default;
};
class ListBindingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBindingsResponseBody> body{};

  ListBindingsResponse() {}

  explicit ListBindingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBindingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBindingsResponseBody>(model1);
      }
    }
  }


  virtual ~ListBindingsResponse() = default;
};
class ListDownStreamBindingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> exchangeName{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> virtualHost{};

  ListDownStreamBindingsRequest() {}

  explicit ListDownStreamBindingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exchangeName) {
      res["ExchangeName"] = boost::any(*exchangeName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (virtualHost) {
      res["VirtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExchangeName") != m.end() && !m["ExchangeName"].empty()) {
      exchangeName = make_shared<string>(boost::any_cast<string>(m["ExchangeName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("VirtualHost") != m.end() && !m["VirtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["VirtualHost"]));
    }
  }


  virtual ~ListDownStreamBindingsRequest() = default;
};
class ListDownStreamBindingsResponseBodyDataBindings : public Darabonba::Model {
public:
  shared_ptr<string> argument{};
  shared_ptr<string> bindingKey{};
  shared_ptr<string> bindingType{};
  shared_ptr<string> destinationName{};
  shared_ptr<string> sourceExchange{};

  ListDownStreamBindingsResponseBodyDataBindings() {}

  explicit ListDownStreamBindingsResponseBodyDataBindings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (argument) {
      res["Argument"] = boost::any(*argument);
    }
    if (bindingKey) {
      res["BindingKey"] = boost::any(*bindingKey);
    }
    if (bindingType) {
      res["BindingType"] = boost::any(*bindingType);
    }
    if (destinationName) {
      res["DestinationName"] = boost::any(*destinationName);
    }
    if (sourceExchange) {
      res["SourceExchange"] = boost::any(*sourceExchange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Argument") != m.end() && !m["Argument"].empty()) {
      argument = make_shared<string>(boost::any_cast<string>(m["Argument"]));
    }
    if (m.find("BindingKey") != m.end() && !m["BindingKey"].empty()) {
      bindingKey = make_shared<string>(boost::any_cast<string>(m["BindingKey"]));
    }
    if (m.find("BindingType") != m.end() && !m["BindingType"].empty()) {
      bindingType = make_shared<string>(boost::any_cast<string>(m["BindingType"]));
    }
    if (m.find("DestinationName") != m.end() && !m["DestinationName"].empty()) {
      destinationName = make_shared<string>(boost::any_cast<string>(m["DestinationName"]));
    }
    if (m.find("SourceExchange") != m.end() && !m["SourceExchange"].empty()) {
      sourceExchange = make_shared<string>(boost::any_cast<string>(m["SourceExchange"]));
    }
  }


  virtual ~ListDownStreamBindingsResponseBodyDataBindings() = default;
};
class ListDownStreamBindingsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDownStreamBindingsResponseBodyDataBindings>> bindings{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListDownStreamBindingsResponseBodyData() {}

  explicit ListDownStreamBindingsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindings) {
      vector<boost::any> temp1;
      for(auto item1:*bindings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bindings"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bindings") != m.end() && !m["Bindings"].empty()) {
      if (typeid(vector<boost::any>) == m["Bindings"].type()) {
        vector<ListDownStreamBindingsResponseBodyDataBindings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bindings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDownStreamBindingsResponseBodyDataBindings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bindings = make_shared<vector<ListDownStreamBindingsResponseBodyDataBindings>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListDownStreamBindingsResponseBodyData() = default;
};
class ListDownStreamBindingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListDownStreamBindingsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDownStreamBindingsResponseBody() {}

  explicit ListDownStreamBindingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListDownStreamBindingsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDownStreamBindingsResponseBodyData>(model1);
      }
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


  virtual ~ListDownStreamBindingsResponseBody() = default;
};
class ListDownStreamBindingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDownStreamBindingsResponseBody> body{};

  ListDownStreamBindingsResponse() {}

  explicit ListDownStreamBindingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDownStreamBindingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDownStreamBindingsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDownStreamBindingsResponse() = default;
};
class ListExchangeUpStreamBindingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> exchangeName{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> virtualHost{};

  ListExchangeUpStreamBindingsRequest() {}

  explicit ListExchangeUpStreamBindingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exchangeName) {
      res["ExchangeName"] = boost::any(*exchangeName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (virtualHost) {
      res["VirtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExchangeName") != m.end() && !m["ExchangeName"].empty()) {
      exchangeName = make_shared<string>(boost::any_cast<string>(m["ExchangeName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("VirtualHost") != m.end() && !m["VirtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["VirtualHost"]));
    }
  }


  virtual ~ListExchangeUpStreamBindingsRequest() = default;
};
class ListExchangeUpStreamBindingsResponseBodyDataBindings : public Darabonba::Model {
public:
  shared_ptr<string> argument{};
  shared_ptr<string> bindingKey{};
  shared_ptr<string> bindingType{};
  shared_ptr<string> destinationName{};
  shared_ptr<string> sourceExchange{};

  ListExchangeUpStreamBindingsResponseBodyDataBindings() {}

  explicit ListExchangeUpStreamBindingsResponseBodyDataBindings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (argument) {
      res["Argument"] = boost::any(*argument);
    }
    if (bindingKey) {
      res["BindingKey"] = boost::any(*bindingKey);
    }
    if (bindingType) {
      res["BindingType"] = boost::any(*bindingType);
    }
    if (destinationName) {
      res["DestinationName"] = boost::any(*destinationName);
    }
    if (sourceExchange) {
      res["SourceExchange"] = boost::any(*sourceExchange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Argument") != m.end() && !m["Argument"].empty()) {
      argument = make_shared<string>(boost::any_cast<string>(m["Argument"]));
    }
    if (m.find("BindingKey") != m.end() && !m["BindingKey"].empty()) {
      bindingKey = make_shared<string>(boost::any_cast<string>(m["BindingKey"]));
    }
    if (m.find("BindingType") != m.end() && !m["BindingType"].empty()) {
      bindingType = make_shared<string>(boost::any_cast<string>(m["BindingType"]));
    }
    if (m.find("DestinationName") != m.end() && !m["DestinationName"].empty()) {
      destinationName = make_shared<string>(boost::any_cast<string>(m["DestinationName"]));
    }
    if (m.find("SourceExchange") != m.end() && !m["SourceExchange"].empty()) {
      sourceExchange = make_shared<string>(boost::any_cast<string>(m["SourceExchange"]));
    }
  }


  virtual ~ListExchangeUpStreamBindingsResponseBodyDataBindings() = default;
};
class ListExchangeUpStreamBindingsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListExchangeUpStreamBindingsResponseBodyDataBindings>> bindings{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListExchangeUpStreamBindingsResponseBodyData() {}

  explicit ListExchangeUpStreamBindingsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindings) {
      vector<boost::any> temp1;
      for(auto item1:*bindings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bindings"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bindings") != m.end() && !m["Bindings"].empty()) {
      if (typeid(vector<boost::any>) == m["Bindings"].type()) {
        vector<ListExchangeUpStreamBindingsResponseBodyDataBindings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bindings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExchangeUpStreamBindingsResponseBodyDataBindings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bindings = make_shared<vector<ListExchangeUpStreamBindingsResponseBodyDataBindings>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListExchangeUpStreamBindingsResponseBodyData() = default;
};
class ListExchangeUpStreamBindingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListExchangeUpStreamBindingsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListExchangeUpStreamBindingsResponseBody() {}

  explicit ListExchangeUpStreamBindingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListExchangeUpStreamBindingsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListExchangeUpStreamBindingsResponseBodyData>(model1);
      }
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


  virtual ~ListExchangeUpStreamBindingsResponseBody() = default;
};
class ListExchangeUpStreamBindingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExchangeUpStreamBindingsResponseBody> body{};

  ListExchangeUpStreamBindingsResponse() {}

  explicit ListExchangeUpStreamBindingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExchangeUpStreamBindingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExchangeUpStreamBindingsResponseBody>(model1);
      }
    }
  }


  virtual ~ListExchangeUpStreamBindingsResponse() = default;
};
class ListExchangesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> virtualHost{};

  ListExchangesRequest() {}

  explicit ListExchangesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (virtualHost) {
      res["VirtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("VirtualHost") != m.end() && !m["VirtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["VirtualHost"]));
    }
  }


  virtual ~ListExchangesRequest() = default;
};
class ListExchangesResponseBodyDataExchanges : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> attributes{};
  shared_ptr<bool> autoDeleteState{};
  shared_ptr<long> createTime{};
  shared_ptr<string> exchangeType{};
  shared_ptr<string> name{};
  shared_ptr<string> VHostName{};

  ListExchangesResponseBodyDataExchanges() {}

  explicit ListExchangesResponseBodyDataExchanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (autoDeleteState) {
      res["AutoDeleteState"] = boost::any(*autoDeleteState);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (exchangeType) {
      res["ExchangeType"] = boost::any(*exchangeType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (VHostName) {
      res["VHostName"] = boost::any(*VHostName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Attributes"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      attributes = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("AutoDeleteState") != m.end() && !m["AutoDeleteState"].empty()) {
      autoDeleteState = make_shared<bool>(boost::any_cast<bool>(m["AutoDeleteState"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ExchangeType") != m.end() && !m["ExchangeType"].empty()) {
      exchangeType = make_shared<string>(boost::any_cast<string>(m["ExchangeType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("VHostName") != m.end() && !m["VHostName"].empty()) {
      VHostName = make_shared<string>(boost::any_cast<string>(m["VHostName"]));
    }
  }


  virtual ~ListExchangesResponseBodyDataExchanges() = default;
};
class ListExchangesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListExchangesResponseBodyDataExchanges>> exchanges{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListExchangesResponseBodyData() {}

  explicit ListExchangesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exchanges) {
      vector<boost::any> temp1;
      for(auto item1:*exchanges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Exchanges"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exchanges") != m.end() && !m["Exchanges"].empty()) {
      if (typeid(vector<boost::any>) == m["Exchanges"].type()) {
        vector<ListExchangesResponseBodyDataExchanges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Exchanges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExchangesResponseBodyDataExchanges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        exchanges = make_shared<vector<ListExchangesResponseBodyDataExchanges>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListExchangesResponseBodyData() = default;
};
class ListExchangesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListExchangesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListExchangesResponseBody() {}

  explicit ListExchangesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExchangesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListExchangesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListExchangesResponseBody() = default;
};
class ListExchangesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExchangesResponseBody> body{};

  ListExchangesResponse() {}

  explicit ListExchangesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExchangesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExchangesResponseBody>(model1);
      }
    }
  }


  virtual ~ListExchangesResponse() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesResponseBodyDataInstancesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListInstancesResponseBodyDataInstancesTags() {}

  explicit ListInstancesResponseBodyDataInstancesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInstancesResponseBodyDataInstancesTags() = default;
};
class ListInstancesResponseBodyDataInstances : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenewInstance{};
  shared_ptr<string> classicEndpoint{};
  shared_ptr<bool> encryptedInstance{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> kmsKeyId{};
  shared_ptr<long> maxEipTps{};
  shared_ptr<long> maxQueue{};
  shared_ptr<long> maxTps{};
  shared_ptr<long> maxVhost{};
  shared_ptr<long> orderCreateTime{};
  shared_ptr<string> orderType{};
  shared_ptr<string> privateEndpoint{};
  shared_ptr<string> publicEndpoint{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<long> storageSize{};
  shared_ptr<bool> supportEIP{};
  shared_ptr<vector<ListInstancesResponseBodyDataInstancesTags>> tags{};

  ListInstancesResponseBodyDataInstances() {}

  explicit ListInstancesResponseBodyDataInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenewInstance) {
      res["AutoRenewInstance"] = boost::any(*autoRenewInstance);
    }
    if (classicEndpoint) {
      res["ClassicEndpoint"] = boost::any(*classicEndpoint);
    }
    if (encryptedInstance) {
      res["EncryptedInstance"] = boost::any(*encryptedInstance);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (kmsKeyId) {
      res["KmsKeyId"] = boost::any(*kmsKeyId);
    }
    if (maxEipTps) {
      res["MaxEipTps"] = boost::any(*maxEipTps);
    }
    if (maxQueue) {
      res["MaxQueue"] = boost::any(*maxQueue);
    }
    if (maxTps) {
      res["MaxTps"] = boost::any(*maxTps);
    }
    if (maxVhost) {
      res["MaxVhost"] = boost::any(*maxVhost);
    }
    if (orderCreateTime) {
      res["OrderCreateTime"] = boost::any(*orderCreateTime);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (privateEndpoint) {
      res["PrivateEndpoint"] = boost::any(*privateEndpoint);
    }
    if (publicEndpoint) {
      res["PublicEndpoint"] = boost::any(*publicEndpoint);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (supportEIP) {
      res["SupportEIP"] = boost::any(*supportEIP);
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
    if (m.find("AutoRenewInstance") != m.end() && !m["AutoRenewInstance"].empty()) {
      autoRenewInstance = make_shared<bool>(boost::any_cast<bool>(m["AutoRenewInstance"]));
    }
    if (m.find("ClassicEndpoint") != m.end() && !m["ClassicEndpoint"].empty()) {
      classicEndpoint = make_shared<string>(boost::any_cast<string>(m["ClassicEndpoint"]));
    }
    if (m.find("EncryptedInstance") != m.end() && !m["EncryptedInstance"].empty()) {
      encryptedInstance = make_shared<bool>(boost::any_cast<bool>(m["EncryptedInstance"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("KmsKeyId") != m.end() && !m["KmsKeyId"].empty()) {
      kmsKeyId = make_shared<string>(boost::any_cast<string>(m["KmsKeyId"]));
    }
    if (m.find("MaxEipTps") != m.end() && !m["MaxEipTps"].empty()) {
      maxEipTps = make_shared<long>(boost::any_cast<long>(m["MaxEipTps"]));
    }
    if (m.find("MaxQueue") != m.end() && !m["MaxQueue"].empty()) {
      maxQueue = make_shared<long>(boost::any_cast<long>(m["MaxQueue"]));
    }
    if (m.find("MaxTps") != m.end() && !m["MaxTps"].empty()) {
      maxTps = make_shared<long>(boost::any_cast<long>(m["MaxTps"]));
    }
    if (m.find("MaxVhost") != m.end() && !m["MaxVhost"].empty()) {
      maxVhost = make_shared<long>(boost::any_cast<long>(m["MaxVhost"]));
    }
    if (m.find("OrderCreateTime") != m.end() && !m["OrderCreateTime"].empty()) {
      orderCreateTime = make_shared<long>(boost::any_cast<long>(m["OrderCreateTime"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PrivateEndpoint") != m.end() && !m["PrivateEndpoint"].empty()) {
      privateEndpoint = make_shared<string>(boost::any_cast<string>(m["PrivateEndpoint"]));
    }
    if (m.find("PublicEndpoint") != m.end() && !m["PublicEndpoint"].empty()) {
      publicEndpoint = make_shared<string>(boost::any_cast<string>(m["PublicEndpoint"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("SupportEIP") != m.end() && !m["SupportEIP"].empty()) {
      supportEIP = make_shared<bool>(boost::any_cast<bool>(m["SupportEIP"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListInstancesResponseBodyDataInstancesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyDataInstancesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListInstancesResponseBodyDataInstancesTags>>(expect1);
      }
    }
  }


  virtual ~ListInstancesResponseBodyDataInstances() = default;
};
class ListInstancesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstancesResponseBodyDataInstances>> instances{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListInstancesResponseBodyData() {}

  explicit ListInstancesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<ListInstancesResponseBodyDataInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyDataInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ListInstancesResponseBodyDataInstances>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListInstancesResponseBodyData() = default;
};
class ListInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListInstancesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListInstancesResponseBody() {}

  explicit ListInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListInstancesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListInstancesResponseBody() = default;
};
class ListInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancesResponseBody> body{};

  ListInstancesResponse() {}

  explicit ListInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class ListQueueConsumersRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> queryCount{};
  shared_ptr<string> queue{};
  shared_ptr<string> virtualHost{};

  ListQueueConsumersRequest() {}

  explicit ListQueueConsumersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (queryCount) {
      res["QueryCount"] = boost::any(*queryCount);
    }
    if (queue) {
      res["Queue"] = boost::any(*queue);
    }
    if (virtualHost) {
      res["VirtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("QueryCount") != m.end() && !m["QueryCount"].empty()) {
      queryCount = make_shared<long>(boost::any_cast<long>(m["QueryCount"]));
    }
    if (m.find("Queue") != m.end() && !m["Queue"].empty()) {
      queue = make_shared<string>(boost::any_cast<string>(m["Queue"]));
    }
    if (m.find("VirtualHost") != m.end() && !m["VirtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["VirtualHost"]));
    }
  }


  virtual ~ListQueueConsumersRequest() = default;
};
class ListQueueConsumersResponseBodyDataConsumers : public Darabonba::Model {
public:
  shared_ptr<string> consumerTag{};

  ListQueueConsumersResponseBodyDataConsumers() {}

  explicit ListQueueConsumersResponseBodyDataConsumers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerTag) {
      res["ConsumerTag"] = boost::any(*consumerTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerTag") != m.end() && !m["ConsumerTag"].empty()) {
      consumerTag = make_shared<string>(boost::any_cast<string>(m["ConsumerTag"]));
    }
  }


  virtual ~ListQueueConsumersResponseBodyDataConsumers() = default;
};
class ListQueueConsumersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListQueueConsumersResponseBodyDataConsumers>> consumers{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListQueueConsumersResponseBodyData() {}

  explicit ListQueueConsumersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumers) {
      vector<boost::any> temp1;
      for(auto item1:*consumers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Consumers"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Consumers") != m.end() && !m["Consumers"].empty()) {
      if (typeid(vector<boost::any>) == m["Consumers"].type()) {
        vector<ListQueueConsumersResponseBodyDataConsumers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Consumers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQueueConsumersResponseBodyDataConsumers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        consumers = make_shared<vector<ListQueueConsumersResponseBodyDataConsumers>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListQueueConsumersResponseBodyData() = default;
};
class ListQueueConsumersResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListQueueConsumersResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListQueueConsumersResponseBody() {}

  explicit ListQueueConsumersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListQueueConsumersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListQueueConsumersResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListQueueConsumersResponseBody() = default;
};
class ListQueueConsumersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQueueConsumersResponseBody> body{};

  ListQueueConsumersResponse() {}

  explicit ListQueueConsumersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListQueueConsumersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQueueConsumersResponseBody>(model1);
      }
    }
  }


  virtual ~ListQueueConsumersResponse() = default;
};
class ListQueueUpStreamBindingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> queueName{};
  shared_ptr<string> virtualHost{};

  ListQueueUpStreamBindingsRequest() {}

  explicit ListQueueUpStreamBindingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (virtualHost) {
      res["VirtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("VirtualHost") != m.end() && !m["VirtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["VirtualHost"]));
    }
  }


  virtual ~ListQueueUpStreamBindingsRequest() = default;
};
class ListQueueUpStreamBindingsResponseBodyDataBindings : public Darabonba::Model {
public:
  shared_ptr<string> argument{};
  shared_ptr<string> bindingKey{};
  shared_ptr<string> bindingType{};
  shared_ptr<string> destinationName{};
  shared_ptr<string> sourceExchange{};

  ListQueueUpStreamBindingsResponseBodyDataBindings() {}

  explicit ListQueueUpStreamBindingsResponseBodyDataBindings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (argument) {
      res["Argument"] = boost::any(*argument);
    }
    if (bindingKey) {
      res["BindingKey"] = boost::any(*bindingKey);
    }
    if (bindingType) {
      res["BindingType"] = boost::any(*bindingType);
    }
    if (destinationName) {
      res["DestinationName"] = boost::any(*destinationName);
    }
    if (sourceExchange) {
      res["SourceExchange"] = boost::any(*sourceExchange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Argument") != m.end() && !m["Argument"].empty()) {
      argument = make_shared<string>(boost::any_cast<string>(m["Argument"]));
    }
    if (m.find("BindingKey") != m.end() && !m["BindingKey"].empty()) {
      bindingKey = make_shared<string>(boost::any_cast<string>(m["BindingKey"]));
    }
    if (m.find("BindingType") != m.end() && !m["BindingType"].empty()) {
      bindingType = make_shared<string>(boost::any_cast<string>(m["BindingType"]));
    }
    if (m.find("DestinationName") != m.end() && !m["DestinationName"].empty()) {
      destinationName = make_shared<string>(boost::any_cast<string>(m["DestinationName"]));
    }
    if (m.find("SourceExchange") != m.end() && !m["SourceExchange"].empty()) {
      sourceExchange = make_shared<string>(boost::any_cast<string>(m["SourceExchange"]));
    }
  }


  virtual ~ListQueueUpStreamBindingsResponseBodyDataBindings() = default;
};
class ListQueueUpStreamBindingsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListQueueUpStreamBindingsResponseBodyDataBindings>> bindings{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};

  ListQueueUpStreamBindingsResponseBodyData() {}

  explicit ListQueueUpStreamBindingsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindings) {
      vector<boost::any> temp1;
      for(auto item1:*bindings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bindings"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bindings") != m.end() && !m["Bindings"].empty()) {
      if (typeid(vector<boost::any>) == m["Bindings"].type()) {
        vector<ListQueueUpStreamBindingsResponseBodyDataBindings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bindings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQueueUpStreamBindingsResponseBodyDataBindings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bindings = make_shared<vector<ListQueueUpStreamBindingsResponseBodyDataBindings>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListQueueUpStreamBindingsResponseBodyData() = default;
};
class ListQueueUpStreamBindingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListQueueUpStreamBindingsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListQueueUpStreamBindingsResponseBody() {}

  explicit ListQueueUpStreamBindingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListQueueUpStreamBindingsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListQueueUpStreamBindingsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListQueueUpStreamBindingsResponseBody() = default;
};
class ListQueueUpStreamBindingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQueueUpStreamBindingsResponseBody> body{};

  ListQueueUpStreamBindingsResponse() {}

  explicit ListQueueUpStreamBindingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListQueueUpStreamBindingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQueueUpStreamBindingsResponseBody>(model1);
      }
    }
  }


  virtual ~ListQueueUpStreamBindingsResponse() = default;
};
class ListQueuesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> virtualHost{};

  ListQueuesRequest() {}

  explicit ListQueuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (virtualHost) {
      res["VirtualHost"] = boost::any(*virtualHost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("VirtualHost") != m.end() && !m["VirtualHost"].empty()) {
      virtualHost = make_shared<string>(boost::any_cast<string>(m["VirtualHost"]));
    }
  }


  virtual ~ListQueuesRequest() = default;
};
class ListQueuesResponseBodyDataQueues : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> attributes{};
  shared_ptr<bool> autoDeleteState{};
  shared_ptr<long> createTime{};
  shared_ptr<bool> exclusiveState{};
  shared_ptr<long> lastConsumeTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> VHostName{};

  ListQueuesResponseBodyDataQueues() {}

  explicit ListQueuesResponseBodyDataQueues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (autoDeleteState) {
      res["AutoDeleteState"] = boost::any(*autoDeleteState);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (exclusiveState) {
      res["ExclusiveState"] = boost::any(*exclusiveState);
    }
    if (lastConsumeTime) {
      res["LastConsumeTime"] = boost::any(*lastConsumeTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (VHostName) {
      res["VHostName"] = boost::any(*VHostName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Attributes"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      attributes = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("AutoDeleteState") != m.end() && !m["AutoDeleteState"].empty()) {
      autoDeleteState = make_shared<bool>(boost::any_cast<bool>(m["AutoDeleteState"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ExclusiveState") != m.end() && !m["ExclusiveState"].empty()) {
      exclusiveState = make_shared<bool>(boost::any_cast<bool>(m["ExclusiveState"]));
    }
    if (m.find("LastConsumeTime") != m.end() && !m["LastConsumeTime"].empty()) {
      lastConsumeTime = make_shared<long>(boost::any_cast<long>(m["LastConsumeTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("VHostName") != m.end() && !m["VHostName"].empty()) {
      VHostName = make_shared<string>(boost::any_cast<string>(m["VHostName"]));
    }
  }


  virtual ~ListQueuesResponseBodyDataQueues() = default;
};
class ListQueuesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListQueuesResponseBodyDataQueues>> queues{};

  ListQueuesResponseBodyData() {}

  explicit ListQueuesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (queues) {
      vector<boost::any> temp1;
      for(auto item1:*queues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Queues"] = boost::any(temp1);
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
    if (m.find("Queues") != m.end() && !m["Queues"].empty()) {
      if (typeid(vector<boost::any>) == m["Queues"].type()) {
        vector<ListQueuesResponseBodyDataQueues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Queues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQueuesResponseBodyDataQueues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queues = make_shared<vector<ListQueuesResponseBodyDataQueues>>(expect1);
      }
    }
  }


  virtual ~ListQueuesResponseBodyData() = default;
};
class ListQueuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListQueuesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListQueuesResponseBody() {}

  explicit ListQueuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListQueuesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListQueuesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListQueuesResponseBody() = default;
};
class ListQueuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQueuesResponseBody> body{};

  ListQueuesResponse() {}

  explicit ListQueuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListQueuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQueuesResponseBody>(model1);
      }
    }
  }


  virtual ~ListQueuesResponse() = default;
};
class ListVirtualHostsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListVirtualHostsRequest() {}

  explicit ListVirtualHostsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListVirtualHostsRequest() = default;
};
class ListVirtualHostsResponseBodyDataVirtualHosts : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  ListVirtualHostsResponseBodyDataVirtualHosts() {}

  explicit ListVirtualHostsResponseBodyDataVirtualHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVirtualHostsResponseBodyDataVirtualHosts() = default;
};
class ListVirtualHostsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListVirtualHostsResponseBodyDataVirtualHosts>> virtualHosts{};

  ListVirtualHostsResponseBodyData() {}

  explicit ListVirtualHostsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualHosts) {
      vector<boost::any> temp1;
      for(auto item1:*virtualHosts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VirtualHosts"] = boost::any(temp1);
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
    if (m.find("VirtualHosts") != m.end() && !m["VirtualHosts"].empty()) {
      if (typeid(vector<boost::any>) == m["VirtualHosts"].type()) {
        vector<ListVirtualHostsResponseBodyDataVirtualHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VirtualHosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVirtualHostsResponseBodyDataVirtualHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        virtualHosts = make_shared<vector<ListVirtualHostsResponseBodyDataVirtualHosts>>(expect1);
      }
    }
  }


  virtual ~ListVirtualHostsResponseBodyData() = default;
};
class ListVirtualHostsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListVirtualHostsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListVirtualHostsResponseBody() {}

  explicit ListVirtualHostsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVirtualHostsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListVirtualHostsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListVirtualHostsResponseBody() = default;
};
class ListVirtualHostsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVirtualHostsResponseBody> body{};

  ListVirtualHostsResponse() {}

  explicit ListVirtualHostsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVirtualHostsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVirtualHostsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVirtualHostsResponse() = default;
};
class UpdateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> edition{};
  shared_ptr<bool> encryptedInstance{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> kmsKeyId{};
  shared_ptr<long> maxConnections{};
  shared_ptr<long> maxEipTps{};
  shared_ptr<long> maxPrivateTps{};
  shared_ptr<string> modifyType{};
  shared_ptr<long> provisionedCapacity{};
  shared_ptr<long> queueCapacity{};
  shared_ptr<string> serverlessChargeType{};
  shared_ptr<long> storageSize{};
  shared_ptr<bool> supportEip{};
  shared_ptr<bool> supportTracing{};
  shared_ptr<long> tracingStorageTime{};

  UpdateInstanceRequest() {}

  explicit UpdateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (edition) {
      res["Edition"] = boost::any(*edition);
    }
    if (encryptedInstance) {
      res["EncryptedInstance"] = boost::any(*encryptedInstance);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (kmsKeyId) {
      res["KmsKeyId"] = boost::any(*kmsKeyId);
    }
    if (maxConnections) {
      res["MaxConnections"] = boost::any(*maxConnections);
    }
    if (maxEipTps) {
      res["MaxEipTps"] = boost::any(*maxEipTps);
    }
    if (maxPrivateTps) {
      res["MaxPrivateTps"] = boost::any(*maxPrivateTps);
    }
    if (modifyType) {
      res["ModifyType"] = boost::any(*modifyType);
    }
    if (provisionedCapacity) {
      res["ProvisionedCapacity"] = boost::any(*provisionedCapacity);
    }
    if (queueCapacity) {
      res["QueueCapacity"] = boost::any(*queueCapacity);
    }
    if (serverlessChargeType) {
      res["ServerlessChargeType"] = boost::any(*serverlessChargeType);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (supportEip) {
      res["SupportEip"] = boost::any(*supportEip);
    }
    if (supportTracing) {
      res["SupportTracing"] = boost::any(*supportTracing);
    }
    if (tracingStorageTime) {
      res["TracingStorageTime"] = boost::any(*tracingStorageTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Edition") != m.end() && !m["Edition"].empty()) {
      edition = make_shared<string>(boost::any_cast<string>(m["Edition"]));
    }
    if (m.find("EncryptedInstance") != m.end() && !m["EncryptedInstance"].empty()) {
      encryptedInstance = make_shared<bool>(boost::any_cast<bool>(m["EncryptedInstance"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("KmsKeyId") != m.end() && !m["KmsKeyId"].empty()) {
      kmsKeyId = make_shared<string>(boost::any_cast<string>(m["KmsKeyId"]));
    }
    if (m.find("MaxConnections") != m.end() && !m["MaxConnections"].empty()) {
      maxConnections = make_shared<long>(boost::any_cast<long>(m["MaxConnections"]));
    }
    if (m.find("MaxEipTps") != m.end() && !m["MaxEipTps"].empty()) {
      maxEipTps = make_shared<long>(boost::any_cast<long>(m["MaxEipTps"]));
    }
    if (m.find("MaxPrivateTps") != m.end() && !m["MaxPrivateTps"].empty()) {
      maxPrivateTps = make_shared<long>(boost::any_cast<long>(m["MaxPrivateTps"]));
    }
    if (m.find("ModifyType") != m.end() && !m["ModifyType"].empty()) {
      modifyType = make_shared<string>(boost::any_cast<string>(m["ModifyType"]));
    }
    if (m.find("ProvisionedCapacity") != m.end() && !m["ProvisionedCapacity"].empty()) {
      provisionedCapacity = make_shared<long>(boost::any_cast<long>(m["ProvisionedCapacity"]));
    }
    if (m.find("QueueCapacity") != m.end() && !m["QueueCapacity"].empty()) {
      queueCapacity = make_shared<long>(boost::any_cast<long>(m["QueueCapacity"]));
    }
    if (m.find("ServerlessChargeType") != m.end() && !m["ServerlessChargeType"].empty()) {
      serverlessChargeType = make_shared<string>(boost::any_cast<string>(m["ServerlessChargeType"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("SupportEip") != m.end() && !m["SupportEip"].empty()) {
      supportEip = make_shared<bool>(boost::any_cast<bool>(m["SupportEip"]));
    }
    if (m.find("SupportTracing") != m.end() && !m["SupportTracing"].empty()) {
      supportTracing = make_shared<bool>(boost::any_cast<bool>(m["SupportTracing"]));
    }
    if (m.find("TracingStorageTime") != m.end() && !m["TracingStorageTime"].empty()) {
      tracingStorageTime = make_shared<long>(boost::any_cast<long>(m["TracingStorageTime"]));
    }
  }


  virtual ~UpdateInstanceRequest() = default;
};
class UpdateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> statusCode{};
  shared_ptr<string> success{};

  UpdateInstanceResponseBody() {}

  explicit UpdateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<string>(boost::any_cast<string>(m["StatusCode"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~UpdateInstanceResponseBody() = default;
};
class UpdateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceResponseBody> body{};

  UpdateInstanceResponse() {}

  explicit UpdateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceResponse() = default;
};
class UpdateInstanceNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};

  UpdateInstanceNameRequest() {}

  explicit UpdateInstanceNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
  }


  virtual ~UpdateInstanceNameRequest() = default;
};
class UpdateInstanceNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateInstanceNameResponseBody() {}

  explicit UpdateInstanceNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateInstanceNameResponseBody() = default;
};
class UpdateInstanceNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceNameResponseBody> body{};

  UpdateInstanceNameResponse() {}

  explicit UpdateInstanceNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceNameResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceNameResponse() = default;
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
  CreateAccountResponse createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccountResponse createAccount(shared_ptr<CreateAccountRequest> request);
  CreateBindingResponse createBindingWithOptions(shared_ptr<CreateBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBindingResponse createBinding(shared_ptr<CreateBindingRequest> request);
  CreateExchangeResponse createExchangeWithOptions(shared_ptr<CreateExchangeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateExchangeResponse createExchange(shared_ptr<CreateExchangeRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  CreateQueueResponse createQueueWithOptions(shared_ptr<CreateQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateQueueResponse createQueue(shared_ptr<CreateQueueRequest> request);
  CreateVirtualHostResponse createVirtualHostWithOptions(shared_ptr<CreateVirtualHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVirtualHostResponse createVirtualHost(shared_ptr<CreateVirtualHostRequest> request);
  DeleteAccountResponse deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccountResponse deleteAccount(shared_ptr<DeleteAccountRequest> request);
  DeleteBindingResponse deleteBindingWithOptions(shared_ptr<DeleteBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBindingResponse deleteBinding(shared_ptr<DeleteBindingRequest> request);
  DeleteExchangeResponse deleteExchangeWithOptions(shared_ptr<DeleteExchangeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExchangeResponse deleteExchange(shared_ptr<DeleteExchangeRequest> request);
  DeleteQueueResponse deleteQueueWithOptions(shared_ptr<DeleteQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteQueueResponse deleteQueue(shared_ptr<DeleteQueueRequest> request);
  DeleteVirtualHostResponse deleteVirtualHostWithOptions(shared_ptr<DeleteVirtualHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVirtualHostResponse deleteVirtualHost(shared_ptr<DeleteVirtualHostRequest> request);
  GetInstanceResponse getInstanceWithOptions(shared_ptr<GetInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResponse getInstance(shared_ptr<GetInstanceRequest> request);
  GetMetadataAmountResponse getMetadataAmountWithOptions(shared_ptr<GetMetadataAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMetadataAmountResponse getMetadataAmount(shared_ptr<GetMetadataAmountRequest> request);
  ListAccountsResponse listAccountsWithOptions(shared_ptr<ListAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccountsResponse listAccounts(shared_ptr<ListAccountsRequest> request);
  ListBindingsResponse listBindingsWithOptions(shared_ptr<ListBindingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBindingsResponse listBindings(shared_ptr<ListBindingsRequest> request);
  ListDownStreamBindingsResponse listDownStreamBindingsWithOptions(shared_ptr<ListDownStreamBindingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDownStreamBindingsResponse listDownStreamBindings(shared_ptr<ListDownStreamBindingsRequest> request);
  ListExchangeUpStreamBindingsResponse listExchangeUpStreamBindingsWithOptions(shared_ptr<ListExchangeUpStreamBindingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExchangeUpStreamBindingsResponse listExchangeUpStreamBindings(shared_ptr<ListExchangeUpStreamBindingsRequest> request);
  ListExchangesResponse listExchangesWithOptions(shared_ptr<ListExchangesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExchangesResponse listExchanges(shared_ptr<ListExchangesRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<ListInstancesRequest> request);
  ListQueueConsumersResponse listQueueConsumersWithOptions(shared_ptr<ListQueueConsumersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQueueConsumersResponse listQueueConsumers(shared_ptr<ListQueueConsumersRequest> request);
  ListQueueUpStreamBindingsResponse listQueueUpStreamBindingsWithOptions(shared_ptr<ListQueueUpStreamBindingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQueueUpStreamBindingsResponse listQueueUpStreamBindings(shared_ptr<ListQueueUpStreamBindingsRequest> request);
  ListQueuesResponse listQueuesWithOptions(shared_ptr<ListQueuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQueuesResponse listQueues(shared_ptr<ListQueuesRequest> request);
  ListVirtualHostsResponse listVirtualHostsWithOptions(shared_ptr<ListVirtualHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVirtualHostsResponse listVirtualHosts(shared_ptr<ListVirtualHostsRequest> request);
  UpdateInstanceResponse updateInstanceWithOptions(shared_ptr<UpdateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceResponse updateInstance(shared_ptr<UpdateInstanceRequest> request);
  UpdateInstanceNameResponse updateInstanceNameWithOptions(shared_ptr<UpdateInstanceNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceNameResponse updateInstanceName(shared_ptr<UpdateInstanceNameRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Amqp-open20191212

#endif
