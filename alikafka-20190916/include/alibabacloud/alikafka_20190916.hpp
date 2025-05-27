// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALIKAFKA20190916_H_
#define ALIBABACLOUD_ALIKAFKA20190916_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Alikafka20190916 {
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~ChangeResourceGroupRequest() = default;
};
class ChangeResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> success{};

  ChangeResourceGroupResponseBody() {}

  explicit ChangeResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<long>(boost::any_cast<long>(m["Success"]));
    }
  }


  virtual ~ChangeResourceGroupResponseBody() = default;
};
class ChangeResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeResourceGroupResponseBody> body{};

  ChangeResourceGroupResponse() {}

  explicit ChangeResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeResourceGroupResponse() = default;
};
class ConvertPostPayOrderRequest : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> paidType{};
  shared_ptr<string> regionId{};

  ConvertPostPayOrderRequest() {}

  explicit ConvertPostPayOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (paidType) {
      res["PaidType"] = boost::any(*paidType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PaidType") != m.end() && !m["PaidType"].empty()) {
      paidType = make_shared<long>(boost::any_cast<long>(m["PaidType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ConvertPostPayOrderRequest() = default;
};
class ConvertPostPayOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ConvertPostPayOrderResponseBody() {}

  explicit ConvertPostPayOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ConvertPostPayOrderResponseBody() = default;
};
class ConvertPostPayOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConvertPostPayOrderResponseBody> body{};

  ConvertPostPayOrderResponse() {}

  explicit ConvertPostPayOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConvertPostPayOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConvertPostPayOrderResponseBody>(model1);
      }
    }
  }


  virtual ~ConvertPostPayOrderResponse() = default;
};
class CreateAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclOperationType{};
  shared_ptr<string> aclOperationTypes{};
  shared_ptr<string> aclPermissionType{};
  shared_ptr<string> aclResourceName{};
  shared_ptr<string> aclResourcePatternType{};
  shared_ptr<string> aclResourceType{};
  shared_ptr<string> host{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> username{};

  CreateAclRequest() {}

  explicit CreateAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclOperationType) {
      res["AclOperationType"] = boost::any(*aclOperationType);
    }
    if (aclOperationTypes) {
      res["AclOperationTypes"] = boost::any(*aclOperationTypes);
    }
    if (aclPermissionType) {
      res["AclPermissionType"] = boost::any(*aclPermissionType);
    }
    if (aclResourceName) {
      res["AclResourceName"] = boost::any(*aclResourceName);
    }
    if (aclResourcePatternType) {
      res["AclResourcePatternType"] = boost::any(*aclResourcePatternType);
    }
    if (aclResourceType) {
      res["AclResourceType"] = boost::any(*aclResourceType);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclOperationType") != m.end() && !m["AclOperationType"].empty()) {
      aclOperationType = make_shared<string>(boost::any_cast<string>(m["AclOperationType"]));
    }
    if (m.find("AclOperationTypes") != m.end() && !m["AclOperationTypes"].empty()) {
      aclOperationTypes = make_shared<string>(boost::any_cast<string>(m["AclOperationTypes"]));
    }
    if (m.find("AclPermissionType") != m.end() && !m["AclPermissionType"].empty()) {
      aclPermissionType = make_shared<string>(boost::any_cast<string>(m["AclPermissionType"]));
    }
    if (m.find("AclResourceName") != m.end() && !m["AclResourceName"].empty()) {
      aclResourceName = make_shared<string>(boost::any_cast<string>(m["AclResourceName"]));
    }
    if (m.find("AclResourcePatternType") != m.end() && !m["AclResourcePatternType"].empty()) {
      aclResourcePatternType = make_shared<string>(boost::any_cast<string>(m["AclResourcePatternType"]));
    }
    if (m.find("AclResourceType") != m.end() && !m["AclResourceType"].empty()) {
      aclResourceType = make_shared<string>(boost::any_cast<string>(m["AclResourceType"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~CreateAclRequest() = default;
};
class CreateAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAclResponseBody() {}

  explicit CreateAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~CreateAclResponseBody() = default;
};
class CreateAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAclResponseBody> body{};

  CreateAclResponse() {}

  explicit CreateAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAclResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAclResponse() = default;
};
class CreateConsumerGroupRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateConsumerGroupRequestTag() {}

  explicit CreateConsumerGroupRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateConsumerGroupRequestTag() = default;
};
class CreateConsumerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> consumerId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<vector<CreateConsumerGroupRequestTag>> tag{};

  CreateConsumerGroupRequest() {}

  explicit CreateConsumerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerId) {
      res["ConsumerId"] = boost::any(*consumerId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerId") != m.end() && !m["ConsumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["ConsumerId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateConsumerGroupRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateConsumerGroupRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateConsumerGroupRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreateConsumerGroupRequest() = default;
};
class CreateConsumerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateConsumerGroupResponseBody() {}

  explicit CreateConsumerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~CreateConsumerGroupResponseBody() = default;
};
class CreateConsumerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateConsumerGroupResponseBody> body{};

  CreateConsumerGroupResponse() {}

  explicit CreateConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateConsumerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConsumerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConsumerGroupResponse() = default;
};
class CreatePostPayInstanceRequestServerlessConfig : public Darabonba::Model {
public:
  shared_ptr<long> reservedPublishCapacity{};
  shared_ptr<long> reservedSubscribeCapacity{};

  CreatePostPayInstanceRequestServerlessConfig() {}

  explicit CreatePostPayInstanceRequestServerlessConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reservedPublishCapacity) {
      res["ReservedPublishCapacity"] = boost::any(*reservedPublishCapacity);
    }
    if (reservedSubscribeCapacity) {
      res["ReservedSubscribeCapacity"] = boost::any(*reservedSubscribeCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReservedPublishCapacity") != m.end() && !m["ReservedPublishCapacity"].empty()) {
      reservedPublishCapacity = make_shared<long>(boost::any_cast<long>(m["ReservedPublishCapacity"]));
    }
    if (m.find("ReservedSubscribeCapacity") != m.end() && !m["ReservedSubscribeCapacity"].empty()) {
      reservedSubscribeCapacity = make_shared<long>(boost::any_cast<long>(m["ReservedSubscribeCapacity"]));
    }
  }


  virtual ~CreatePostPayInstanceRequestServerlessConfig() = default;
};
class CreatePostPayInstanceRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreatePostPayInstanceRequestTag() {}

  explicit CreatePostPayInstanceRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreatePostPayInstanceRequestTag() = default;
};
class CreatePostPayInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> deployType{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};
  shared_ptr<long> eipMax{};
  shared_ptr<string> ioMaxSpec{};
  shared_ptr<long> paidType{};
  shared_ptr<long> partitionNum{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<CreatePostPayInstanceRequestServerlessConfig> serverlessConfig{};
  shared_ptr<string> specType{};
  shared_ptr<vector<CreatePostPayInstanceRequestTag>> tag{};

  CreatePostPayInstanceRequest() {}

  explicit CreatePostPayInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    if (paidType) {
      res["PaidType"] = boost::any(*paidType);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serverlessConfig) {
      res["ServerlessConfig"] = serverlessConfig ? boost::any(serverlessConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<long>(boost::any_cast<long>(m["DeployType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
    if (m.find("PaidType") != m.end() && !m["PaidType"].empty()) {
      paidType = make_shared<long>(boost::any_cast<long>(m["PaidType"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["PartitionNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServerlessConfig") != m.end() && !m["ServerlessConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerlessConfig"].type()) {
        CreatePostPayInstanceRequestServerlessConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerlessConfig"]));
        serverlessConfig = make_shared<CreatePostPayInstanceRequestServerlessConfig>(model1);
      }
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreatePostPayInstanceRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePostPayInstanceRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreatePostPayInstanceRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreatePostPayInstanceRequest() = default;
};
class CreatePostPayInstanceShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreatePostPayInstanceShrinkRequestTag() {}

  explicit CreatePostPayInstanceShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreatePostPayInstanceShrinkRequestTag() = default;
};
class CreatePostPayInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> deployType{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};
  shared_ptr<long> eipMax{};
  shared_ptr<string> ioMaxSpec{};
  shared_ptr<long> paidType{};
  shared_ptr<long> partitionNum{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serverlessConfigShrink{};
  shared_ptr<string> specType{};
  shared_ptr<vector<CreatePostPayInstanceShrinkRequestTag>> tag{};

  CreatePostPayInstanceShrinkRequest() {}

  explicit CreatePostPayInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    if (paidType) {
      res["PaidType"] = boost::any(*paidType);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serverlessConfigShrink) {
      res["ServerlessConfig"] = boost::any(*serverlessConfigShrink);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<long>(boost::any_cast<long>(m["DeployType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
    if (m.find("PaidType") != m.end() && !m["PaidType"].empty()) {
      paidType = make_shared<long>(boost::any_cast<long>(m["PaidType"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["PartitionNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServerlessConfig") != m.end() && !m["ServerlessConfig"].empty()) {
      serverlessConfigShrink = make_shared<string>(boost::any_cast<string>(m["ServerlessConfig"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreatePostPayInstanceShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePostPayInstanceShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreatePostPayInstanceShrinkRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreatePostPayInstanceShrinkRequest() = default;
};
class CreatePostPayInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderId{};

  CreatePostPayInstanceResponseBodyData() {}

  explicit CreatePostPayInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CreatePostPayInstanceResponseBodyData() = default;
};
class CreatePostPayInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreatePostPayInstanceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreatePostPayInstanceResponseBody() {}

  explicit CreatePostPayInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePostPayInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreatePostPayInstanceResponseBodyData>(model1);
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


  virtual ~CreatePostPayInstanceResponseBody() = default;
};
class CreatePostPayInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePostPayInstanceResponseBody> body{};

  CreatePostPayInstanceResponse() {}

  explicit CreatePostPayInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePostPayInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePostPayInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePostPayInstanceResponse() = default;
};
class CreatePostPayOrderRequestServerlessConfig : public Darabonba::Model {
public:
  shared_ptr<long> reservedPublishCapacity{};
  shared_ptr<long> reservedSubscribeCapacity{};

  CreatePostPayOrderRequestServerlessConfig() {}

  explicit CreatePostPayOrderRequestServerlessConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reservedPublishCapacity) {
      res["ReservedPublishCapacity"] = boost::any(*reservedPublishCapacity);
    }
    if (reservedSubscribeCapacity) {
      res["ReservedSubscribeCapacity"] = boost::any(*reservedSubscribeCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReservedPublishCapacity") != m.end() && !m["ReservedPublishCapacity"].empty()) {
      reservedPublishCapacity = make_shared<long>(boost::any_cast<long>(m["ReservedPublishCapacity"]));
    }
    if (m.find("ReservedSubscribeCapacity") != m.end() && !m["ReservedSubscribeCapacity"].empty()) {
      reservedSubscribeCapacity = make_shared<long>(boost::any_cast<long>(m["ReservedSubscribeCapacity"]));
    }
  }


  virtual ~CreatePostPayOrderRequestServerlessConfig() = default;
};
class CreatePostPayOrderRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreatePostPayOrderRequestTag() {}

  explicit CreatePostPayOrderRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreatePostPayOrderRequestTag() = default;
};
class CreatePostPayOrderRequest : public Darabonba::Model {
public:
  shared_ptr<long> deployType{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};
  shared_ptr<long> eipMax{};
  shared_ptr<long> ioMax{};
  shared_ptr<string> ioMaxSpec{};
  shared_ptr<long> paidType{};
  shared_ptr<long> partitionNum{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<CreatePostPayOrderRequestServerlessConfig> serverlessConfig{};
  shared_ptr<string> specType{};
  shared_ptr<vector<CreatePostPayOrderRequestTag>> tag{};
  shared_ptr<long> topicQuota{};

  CreatePostPayOrderRequest() {}

  explicit CreatePostPayOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    if (paidType) {
      res["PaidType"] = boost::any(*paidType);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serverlessConfig) {
      res["ServerlessConfig"] = serverlessConfig ? boost::any(serverlessConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (topicQuota) {
      res["TopicQuota"] = boost::any(*topicQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<long>(boost::any_cast<long>(m["DeployType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
    if (m.find("PaidType") != m.end() && !m["PaidType"].empty()) {
      paidType = make_shared<long>(boost::any_cast<long>(m["PaidType"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["PartitionNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServerlessConfig") != m.end() && !m["ServerlessConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerlessConfig"].type()) {
        CreatePostPayOrderRequestServerlessConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerlessConfig"]));
        serverlessConfig = make_shared<CreatePostPayOrderRequestServerlessConfig>(model1);
      }
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreatePostPayOrderRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePostPayOrderRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreatePostPayOrderRequestTag>>(expect1);
      }
    }
    if (m.find("TopicQuota") != m.end() && !m["TopicQuota"].empty()) {
      topicQuota = make_shared<long>(boost::any_cast<long>(m["TopicQuota"]));
    }
  }


  virtual ~CreatePostPayOrderRequest() = default;
};
class CreatePostPayOrderShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreatePostPayOrderShrinkRequestTag() {}

  explicit CreatePostPayOrderShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreatePostPayOrderShrinkRequestTag() = default;
};
class CreatePostPayOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> deployType{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};
  shared_ptr<long> eipMax{};
  shared_ptr<long> ioMax{};
  shared_ptr<string> ioMaxSpec{};
  shared_ptr<long> paidType{};
  shared_ptr<long> partitionNum{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> serverlessConfigShrink{};
  shared_ptr<string> specType{};
  shared_ptr<vector<CreatePostPayOrderShrinkRequestTag>> tag{};
  shared_ptr<long> topicQuota{};

  CreatePostPayOrderShrinkRequest() {}

  explicit CreatePostPayOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    if (paidType) {
      res["PaidType"] = boost::any(*paidType);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serverlessConfigShrink) {
      res["ServerlessConfig"] = boost::any(*serverlessConfigShrink);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (topicQuota) {
      res["TopicQuota"] = boost::any(*topicQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<long>(boost::any_cast<long>(m["DeployType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
    if (m.find("PaidType") != m.end() && !m["PaidType"].empty()) {
      paidType = make_shared<long>(boost::any_cast<long>(m["PaidType"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["PartitionNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServerlessConfig") != m.end() && !m["ServerlessConfig"].empty()) {
      serverlessConfigShrink = make_shared<string>(boost::any_cast<string>(m["ServerlessConfig"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreatePostPayOrderShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePostPayOrderShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreatePostPayOrderShrinkRequestTag>>(expect1);
      }
    }
    if (m.find("TopicQuota") != m.end() && !m["TopicQuota"].empty()) {
      topicQuota = make_shared<long>(boost::any_cast<long>(m["TopicQuota"]));
    }
  }


  virtual ~CreatePostPayOrderShrinkRequest() = default;
};
class CreatePostPayOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreatePostPayOrderResponseBody() {}

  explicit CreatePostPayOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreatePostPayOrderResponseBody() = default;
};
class CreatePostPayOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePostPayOrderResponseBody> body{};

  CreatePostPayOrderResponse() {}

  explicit CreatePostPayOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePostPayOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePostPayOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePostPayOrderResponse() = default;
};
class CreatePrePayInstanceRequestConfluentConfig : public Darabonba::Model {
public:
  shared_ptr<long> connectCU{};
  shared_ptr<long> connectReplica{};
  shared_ptr<long> controlCenterCU{};
  shared_ptr<long> controlCenterReplica{};
  shared_ptr<long> controlCenterStorage{};
  shared_ptr<long> kafkaCU{};
  shared_ptr<long> kafkaReplica{};
  shared_ptr<long> kafkaRestProxyCU{};
  shared_ptr<long> kafkaRestProxyReplica{};
  shared_ptr<long> kafkaStorage{};
  shared_ptr<long> ksqlCU{};
  shared_ptr<long> ksqlReplica{};
  shared_ptr<long> ksqlStorage{};
  shared_ptr<long> schemaRegistryCU{};
  shared_ptr<long> schemaRegistryReplica{};
  shared_ptr<long> zooKeeperCU{};
  shared_ptr<long> zooKeeperReplica{};
  shared_ptr<long> zooKeeperStorage{};

  CreatePrePayInstanceRequestConfluentConfig() {}

  explicit CreatePrePayInstanceRequestConfluentConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectCU) {
      res["ConnectCU"] = boost::any(*connectCU);
    }
    if (connectReplica) {
      res["ConnectReplica"] = boost::any(*connectReplica);
    }
    if (controlCenterCU) {
      res["ControlCenterCU"] = boost::any(*controlCenterCU);
    }
    if (controlCenterReplica) {
      res["ControlCenterReplica"] = boost::any(*controlCenterReplica);
    }
    if (controlCenterStorage) {
      res["ControlCenterStorage"] = boost::any(*controlCenterStorage);
    }
    if (kafkaCU) {
      res["KafkaCU"] = boost::any(*kafkaCU);
    }
    if (kafkaReplica) {
      res["KafkaReplica"] = boost::any(*kafkaReplica);
    }
    if (kafkaRestProxyCU) {
      res["KafkaRestProxyCU"] = boost::any(*kafkaRestProxyCU);
    }
    if (kafkaRestProxyReplica) {
      res["KafkaRestProxyReplica"] = boost::any(*kafkaRestProxyReplica);
    }
    if (kafkaStorage) {
      res["KafkaStorage"] = boost::any(*kafkaStorage);
    }
    if (ksqlCU) {
      res["KsqlCU"] = boost::any(*ksqlCU);
    }
    if (ksqlReplica) {
      res["KsqlReplica"] = boost::any(*ksqlReplica);
    }
    if (ksqlStorage) {
      res["KsqlStorage"] = boost::any(*ksqlStorage);
    }
    if (schemaRegistryCU) {
      res["SchemaRegistryCU"] = boost::any(*schemaRegistryCU);
    }
    if (schemaRegistryReplica) {
      res["SchemaRegistryReplica"] = boost::any(*schemaRegistryReplica);
    }
    if (zooKeeperCU) {
      res["ZooKeeperCU"] = boost::any(*zooKeeperCU);
    }
    if (zooKeeperReplica) {
      res["ZooKeeperReplica"] = boost::any(*zooKeeperReplica);
    }
    if (zooKeeperStorage) {
      res["ZooKeeperStorage"] = boost::any(*zooKeeperStorage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectCU") != m.end() && !m["ConnectCU"].empty()) {
      connectCU = make_shared<long>(boost::any_cast<long>(m["ConnectCU"]));
    }
    if (m.find("ConnectReplica") != m.end() && !m["ConnectReplica"].empty()) {
      connectReplica = make_shared<long>(boost::any_cast<long>(m["ConnectReplica"]));
    }
    if (m.find("ControlCenterCU") != m.end() && !m["ControlCenterCU"].empty()) {
      controlCenterCU = make_shared<long>(boost::any_cast<long>(m["ControlCenterCU"]));
    }
    if (m.find("ControlCenterReplica") != m.end() && !m["ControlCenterReplica"].empty()) {
      controlCenterReplica = make_shared<long>(boost::any_cast<long>(m["ControlCenterReplica"]));
    }
    if (m.find("ControlCenterStorage") != m.end() && !m["ControlCenterStorage"].empty()) {
      controlCenterStorage = make_shared<long>(boost::any_cast<long>(m["ControlCenterStorage"]));
    }
    if (m.find("KafkaCU") != m.end() && !m["KafkaCU"].empty()) {
      kafkaCU = make_shared<long>(boost::any_cast<long>(m["KafkaCU"]));
    }
    if (m.find("KafkaReplica") != m.end() && !m["KafkaReplica"].empty()) {
      kafkaReplica = make_shared<long>(boost::any_cast<long>(m["KafkaReplica"]));
    }
    if (m.find("KafkaRestProxyCU") != m.end() && !m["KafkaRestProxyCU"].empty()) {
      kafkaRestProxyCU = make_shared<long>(boost::any_cast<long>(m["KafkaRestProxyCU"]));
    }
    if (m.find("KafkaRestProxyReplica") != m.end() && !m["KafkaRestProxyReplica"].empty()) {
      kafkaRestProxyReplica = make_shared<long>(boost::any_cast<long>(m["KafkaRestProxyReplica"]));
    }
    if (m.find("KafkaStorage") != m.end() && !m["KafkaStorage"].empty()) {
      kafkaStorage = make_shared<long>(boost::any_cast<long>(m["KafkaStorage"]));
    }
    if (m.find("KsqlCU") != m.end() && !m["KsqlCU"].empty()) {
      ksqlCU = make_shared<long>(boost::any_cast<long>(m["KsqlCU"]));
    }
    if (m.find("KsqlReplica") != m.end() && !m["KsqlReplica"].empty()) {
      ksqlReplica = make_shared<long>(boost::any_cast<long>(m["KsqlReplica"]));
    }
    if (m.find("KsqlStorage") != m.end() && !m["KsqlStorage"].empty()) {
      ksqlStorage = make_shared<long>(boost::any_cast<long>(m["KsqlStorage"]));
    }
    if (m.find("SchemaRegistryCU") != m.end() && !m["SchemaRegistryCU"].empty()) {
      schemaRegistryCU = make_shared<long>(boost::any_cast<long>(m["SchemaRegistryCU"]));
    }
    if (m.find("SchemaRegistryReplica") != m.end() && !m["SchemaRegistryReplica"].empty()) {
      schemaRegistryReplica = make_shared<long>(boost::any_cast<long>(m["SchemaRegistryReplica"]));
    }
    if (m.find("ZooKeeperCU") != m.end() && !m["ZooKeeperCU"].empty()) {
      zooKeeperCU = make_shared<long>(boost::any_cast<long>(m["ZooKeeperCU"]));
    }
    if (m.find("ZooKeeperReplica") != m.end() && !m["ZooKeeperReplica"].empty()) {
      zooKeeperReplica = make_shared<long>(boost::any_cast<long>(m["ZooKeeperReplica"]));
    }
    if (m.find("ZooKeeperStorage") != m.end() && !m["ZooKeeperStorage"].empty()) {
      zooKeeperStorage = make_shared<long>(boost::any_cast<long>(m["ZooKeeperStorage"]));
    }
  }


  virtual ~CreatePrePayInstanceRequestConfluentConfig() = default;
};
class CreatePrePayInstanceRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreatePrePayInstanceRequestTag() {}

  explicit CreatePrePayInstanceRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreatePrePayInstanceRequestTag() = default;
};
class CreatePrePayInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<CreatePrePayInstanceRequestConfluentConfig> confluentConfig{};
  shared_ptr<long> deployType{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};
  shared_ptr<long> duration{};
  shared_ptr<long> eipMax{};
  shared_ptr<string> ioMaxSpec{};
  shared_ptr<long> paidType{};
  shared_ptr<long> partitionNum{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> specType{};
  shared_ptr<vector<CreatePrePayInstanceRequestTag>> tag{};

  CreatePrePayInstanceRequest() {}

  explicit CreatePrePayInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confluentConfig) {
      res["ConfluentConfig"] = confluentConfig ? boost::any(confluentConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    if (paidType) {
      res["PaidType"] = boost::any(*paidType);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfluentConfig") != m.end() && !m["ConfluentConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfluentConfig"].type()) {
        CreatePrePayInstanceRequestConfluentConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfluentConfig"]));
        confluentConfig = make_shared<CreatePrePayInstanceRequestConfluentConfig>(model1);
      }
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<long>(boost::any_cast<long>(m["DeployType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
    if (m.find("PaidType") != m.end() && !m["PaidType"].empty()) {
      paidType = make_shared<long>(boost::any_cast<long>(m["PaidType"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["PartitionNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreatePrePayInstanceRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePrePayInstanceRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreatePrePayInstanceRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreatePrePayInstanceRequest() = default;
};
class CreatePrePayInstanceShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreatePrePayInstanceShrinkRequestTag() {}

  explicit CreatePrePayInstanceShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreatePrePayInstanceShrinkRequestTag() = default;
};
class CreatePrePayInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> confluentConfigShrink{};
  shared_ptr<long> deployType{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};
  shared_ptr<long> duration{};
  shared_ptr<long> eipMax{};
  shared_ptr<string> ioMaxSpec{};
  shared_ptr<long> paidType{};
  shared_ptr<long> partitionNum{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> specType{};
  shared_ptr<vector<CreatePrePayInstanceShrinkRequestTag>> tag{};

  CreatePrePayInstanceShrinkRequest() {}

  explicit CreatePrePayInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confluentConfigShrink) {
      res["ConfluentConfig"] = boost::any(*confluentConfigShrink);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    if (paidType) {
      res["PaidType"] = boost::any(*paidType);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfluentConfig") != m.end() && !m["ConfluentConfig"].empty()) {
      confluentConfigShrink = make_shared<string>(boost::any_cast<string>(m["ConfluentConfig"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<long>(boost::any_cast<long>(m["DeployType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
    if (m.find("PaidType") != m.end() && !m["PaidType"].empty()) {
      paidType = make_shared<long>(boost::any_cast<long>(m["PaidType"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["PartitionNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreatePrePayInstanceShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePrePayInstanceShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreatePrePayInstanceShrinkRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreatePrePayInstanceShrinkRequest() = default;
};
class CreatePrePayInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderId{};

  CreatePrePayInstanceResponseBodyData() {}

  explicit CreatePrePayInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CreatePrePayInstanceResponseBodyData() = default;
};
class CreatePrePayInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<CreatePrePayInstanceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreatePrePayInstanceResponseBody() {}

  explicit CreatePrePayInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePrePayInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreatePrePayInstanceResponseBodyData>(model1);
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


  virtual ~CreatePrePayInstanceResponseBody() = default;
};
class CreatePrePayInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePrePayInstanceResponseBody> body{};

  CreatePrePayInstanceResponse() {}

  explicit CreatePrePayInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePrePayInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePrePayInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePrePayInstanceResponse() = default;
};
class CreatePrePayOrderRequestConfluentConfig : public Darabonba::Model {
public:
  shared_ptr<long> connectCU{};
  shared_ptr<long> connectReplica{};
  shared_ptr<long> controlCenterCU{};
  shared_ptr<long> controlCenterReplica{};
  shared_ptr<long> controlCenterStorage{};
  shared_ptr<long> kafkaCU{};
  shared_ptr<long> kafkaReplica{};
  shared_ptr<long> kafkaRestProxyCU{};
  shared_ptr<long> kafkaRestProxyReplica{};
  shared_ptr<long> kafkaStorage{};
  shared_ptr<long> ksqlCU{};
  shared_ptr<long> ksqlReplica{};
  shared_ptr<long> ksqlStorage{};
  shared_ptr<long> schemaRegistryCU{};
  shared_ptr<long> schemaRegistryReplica{};
  shared_ptr<long> zooKeeperCU{};
  shared_ptr<long> zooKeeperReplica{};
  shared_ptr<long> zooKeeperStorage{};

  CreatePrePayOrderRequestConfluentConfig() {}

  explicit CreatePrePayOrderRequestConfluentConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectCU) {
      res["ConnectCU"] = boost::any(*connectCU);
    }
    if (connectReplica) {
      res["ConnectReplica"] = boost::any(*connectReplica);
    }
    if (controlCenterCU) {
      res["ControlCenterCU"] = boost::any(*controlCenterCU);
    }
    if (controlCenterReplica) {
      res["ControlCenterReplica"] = boost::any(*controlCenterReplica);
    }
    if (controlCenterStorage) {
      res["ControlCenterStorage"] = boost::any(*controlCenterStorage);
    }
    if (kafkaCU) {
      res["KafkaCU"] = boost::any(*kafkaCU);
    }
    if (kafkaReplica) {
      res["KafkaReplica"] = boost::any(*kafkaReplica);
    }
    if (kafkaRestProxyCU) {
      res["KafkaRestProxyCU"] = boost::any(*kafkaRestProxyCU);
    }
    if (kafkaRestProxyReplica) {
      res["KafkaRestProxyReplica"] = boost::any(*kafkaRestProxyReplica);
    }
    if (kafkaStorage) {
      res["KafkaStorage"] = boost::any(*kafkaStorage);
    }
    if (ksqlCU) {
      res["KsqlCU"] = boost::any(*ksqlCU);
    }
    if (ksqlReplica) {
      res["KsqlReplica"] = boost::any(*ksqlReplica);
    }
    if (ksqlStorage) {
      res["KsqlStorage"] = boost::any(*ksqlStorage);
    }
    if (schemaRegistryCU) {
      res["SchemaRegistryCU"] = boost::any(*schemaRegistryCU);
    }
    if (schemaRegistryReplica) {
      res["SchemaRegistryReplica"] = boost::any(*schemaRegistryReplica);
    }
    if (zooKeeperCU) {
      res["ZooKeeperCU"] = boost::any(*zooKeeperCU);
    }
    if (zooKeeperReplica) {
      res["ZooKeeperReplica"] = boost::any(*zooKeeperReplica);
    }
    if (zooKeeperStorage) {
      res["ZooKeeperStorage"] = boost::any(*zooKeeperStorage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectCU") != m.end() && !m["ConnectCU"].empty()) {
      connectCU = make_shared<long>(boost::any_cast<long>(m["ConnectCU"]));
    }
    if (m.find("ConnectReplica") != m.end() && !m["ConnectReplica"].empty()) {
      connectReplica = make_shared<long>(boost::any_cast<long>(m["ConnectReplica"]));
    }
    if (m.find("ControlCenterCU") != m.end() && !m["ControlCenterCU"].empty()) {
      controlCenterCU = make_shared<long>(boost::any_cast<long>(m["ControlCenterCU"]));
    }
    if (m.find("ControlCenterReplica") != m.end() && !m["ControlCenterReplica"].empty()) {
      controlCenterReplica = make_shared<long>(boost::any_cast<long>(m["ControlCenterReplica"]));
    }
    if (m.find("ControlCenterStorage") != m.end() && !m["ControlCenterStorage"].empty()) {
      controlCenterStorage = make_shared<long>(boost::any_cast<long>(m["ControlCenterStorage"]));
    }
    if (m.find("KafkaCU") != m.end() && !m["KafkaCU"].empty()) {
      kafkaCU = make_shared<long>(boost::any_cast<long>(m["KafkaCU"]));
    }
    if (m.find("KafkaReplica") != m.end() && !m["KafkaReplica"].empty()) {
      kafkaReplica = make_shared<long>(boost::any_cast<long>(m["KafkaReplica"]));
    }
    if (m.find("KafkaRestProxyCU") != m.end() && !m["KafkaRestProxyCU"].empty()) {
      kafkaRestProxyCU = make_shared<long>(boost::any_cast<long>(m["KafkaRestProxyCU"]));
    }
    if (m.find("KafkaRestProxyReplica") != m.end() && !m["KafkaRestProxyReplica"].empty()) {
      kafkaRestProxyReplica = make_shared<long>(boost::any_cast<long>(m["KafkaRestProxyReplica"]));
    }
    if (m.find("KafkaStorage") != m.end() && !m["KafkaStorage"].empty()) {
      kafkaStorage = make_shared<long>(boost::any_cast<long>(m["KafkaStorage"]));
    }
    if (m.find("KsqlCU") != m.end() && !m["KsqlCU"].empty()) {
      ksqlCU = make_shared<long>(boost::any_cast<long>(m["KsqlCU"]));
    }
    if (m.find("KsqlReplica") != m.end() && !m["KsqlReplica"].empty()) {
      ksqlReplica = make_shared<long>(boost::any_cast<long>(m["KsqlReplica"]));
    }
    if (m.find("KsqlStorage") != m.end() && !m["KsqlStorage"].empty()) {
      ksqlStorage = make_shared<long>(boost::any_cast<long>(m["KsqlStorage"]));
    }
    if (m.find("SchemaRegistryCU") != m.end() && !m["SchemaRegistryCU"].empty()) {
      schemaRegistryCU = make_shared<long>(boost::any_cast<long>(m["SchemaRegistryCU"]));
    }
    if (m.find("SchemaRegistryReplica") != m.end() && !m["SchemaRegistryReplica"].empty()) {
      schemaRegistryReplica = make_shared<long>(boost::any_cast<long>(m["SchemaRegistryReplica"]));
    }
    if (m.find("ZooKeeperCU") != m.end() && !m["ZooKeeperCU"].empty()) {
      zooKeeperCU = make_shared<long>(boost::any_cast<long>(m["ZooKeeperCU"]));
    }
    if (m.find("ZooKeeperReplica") != m.end() && !m["ZooKeeperReplica"].empty()) {
      zooKeeperReplica = make_shared<long>(boost::any_cast<long>(m["ZooKeeperReplica"]));
    }
    if (m.find("ZooKeeperStorage") != m.end() && !m["ZooKeeperStorage"].empty()) {
      zooKeeperStorage = make_shared<long>(boost::any_cast<long>(m["ZooKeeperStorage"]));
    }
  }


  virtual ~CreatePrePayOrderRequestConfluentConfig() = default;
};
class CreatePrePayOrderRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreatePrePayOrderRequestTag() {}

  explicit CreatePrePayOrderRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreatePrePayOrderRequestTag() = default;
};
class CreatePrePayOrderRequest : public Darabonba::Model {
public:
  shared_ptr<CreatePrePayOrderRequestConfluentConfig> confluentConfig{};
  shared_ptr<long> deployType{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};
  shared_ptr<long> duration{};
  shared_ptr<long> eipMax{};
  shared_ptr<long> ioMax{};
  shared_ptr<string> ioMaxSpec{};
  shared_ptr<long> paidType{};
  shared_ptr<long> partitionNum{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> specType{};
  shared_ptr<vector<CreatePrePayOrderRequestTag>> tag{};
  shared_ptr<long> topicQuota{};

  CreatePrePayOrderRequest() {}

  explicit CreatePrePayOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confluentConfig) {
      res["ConfluentConfig"] = confluentConfig ? boost::any(confluentConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    if (paidType) {
      res["PaidType"] = boost::any(*paidType);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (topicQuota) {
      res["TopicQuota"] = boost::any(*topicQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfluentConfig") != m.end() && !m["ConfluentConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfluentConfig"].type()) {
        CreatePrePayOrderRequestConfluentConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfluentConfig"]));
        confluentConfig = make_shared<CreatePrePayOrderRequestConfluentConfig>(model1);
      }
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<long>(boost::any_cast<long>(m["DeployType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
    if (m.find("PaidType") != m.end() && !m["PaidType"].empty()) {
      paidType = make_shared<long>(boost::any_cast<long>(m["PaidType"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["PartitionNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreatePrePayOrderRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePrePayOrderRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreatePrePayOrderRequestTag>>(expect1);
      }
    }
    if (m.find("TopicQuota") != m.end() && !m["TopicQuota"].empty()) {
      topicQuota = make_shared<long>(boost::any_cast<long>(m["TopicQuota"]));
    }
  }


  virtual ~CreatePrePayOrderRequest() = default;
};
class CreatePrePayOrderShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreatePrePayOrderShrinkRequestTag() {}

  explicit CreatePrePayOrderShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreatePrePayOrderShrinkRequestTag() = default;
};
class CreatePrePayOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> confluentConfigShrink{};
  shared_ptr<long> deployType{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};
  shared_ptr<long> duration{};
  shared_ptr<long> eipMax{};
  shared_ptr<long> ioMax{};
  shared_ptr<string> ioMaxSpec{};
  shared_ptr<long> paidType{};
  shared_ptr<long> partitionNum{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> specType{};
  shared_ptr<vector<CreatePrePayOrderShrinkRequestTag>> tag{};
  shared_ptr<long> topicQuota{};

  CreatePrePayOrderShrinkRequest() {}

  explicit CreatePrePayOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confluentConfigShrink) {
      res["ConfluentConfig"] = boost::any(*confluentConfigShrink);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    if (paidType) {
      res["PaidType"] = boost::any(*paidType);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (topicQuota) {
      res["TopicQuota"] = boost::any(*topicQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfluentConfig") != m.end() && !m["ConfluentConfig"].empty()) {
      confluentConfigShrink = make_shared<string>(boost::any_cast<string>(m["ConfluentConfig"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<long>(boost::any_cast<long>(m["DeployType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
    if (m.find("PaidType") != m.end() && !m["PaidType"].empty()) {
      paidType = make_shared<long>(boost::any_cast<long>(m["PaidType"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["PartitionNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreatePrePayOrderShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePrePayOrderShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreatePrePayOrderShrinkRequestTag>>(expect1);
      }
    }
    if (m.find("TopicQuota") != m.end() && !m["TopicQuota"].empty()) {
      topicQuota = make_shared<long>(boost::any_cast<long>(m["TopicQuota"]));
    }
  }


  virtual ~CreatePrePayOrderShrinkRequest() = default;
};
class CreatePrePayOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreatePrePayOrderResponseBody() {}

  explicit CreatePrePayOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreatePrePayOrderResponseBody() = default;
};
class CreatePrePayOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePrePayOrderResponseBody> body{};

  CreatePrePayOrderResponse() {}

  explicit CreatePrePayOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePrePayOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePrePayOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePrePayOrderResponse() = default;
};
class CreateSaslUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> mechanism{};
  shared_ptr<string> password{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};
  shared_ptr<string> username{};

  CreateSaslUserRequest() {}

  explicit CreateSaslUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mechanism) {
      res["Mechanism"] = boost::any(*mechanism);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Mechanism") != m.end() && !m["Mechanism"].empty()) {
      mechanism = make_shared<string>(boost::any_cast<string>(m["Mechanism"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~CreateSaslUserRequest() = default;
};
class CreateSaslUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateSaslUserResponseBody() {}

  explicit CreateSaslUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~CreateSaslUserResponseBody() = default;
};
class CreateSaslUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSaslUserResponseBody> body{};

  CreateSaslUserResponse() {}

  explicit CreateSaslUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSaslUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSaslUserResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSaslUserResponse() = default;
};
class CreateScheduledScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> durationMinutes{};
  shared_ptr<bool> enable{};
  shared_ptr<long> firstScheduledTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repeatType{};
  shared_ptr<long> reservedPubFlow{};
  shared_ptr<long> reservedSubFlow{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> timeZone{};
  shared_ptr<vector<string>> weeklyTypes{};

  CreateScheduledScalingRuleRequest() {}

  explicit CreateScheduledScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationMinutes) {
      res["DurationMinutes"] = boost::any(*durationMinutes);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (firstScheduledTime) {
      res["FirstScheduledTime"] = boost::any(*firstScheduledTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repeatType) {
      res["RepeatType"] = boost::any(*repeatType);
    }
    if (reservedPubFlow) {
      res["ReservedPubFlow"] = boost::any(*reservedPubFlow);
    }
    if (reservedSubFlow) {
      res["ReservedSubFlow"] = boost::any(*reservedSubFlow);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    if (weeklyTypes) {
      res["WeeklyTypes"] = boost::any(*weeklyTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DurationMinutes") != m.end() && !m["DurationMinutes"].empty()) {
      durationMinutes = make_shared<long>(boost::any_cast<long>(m["DurationMinutes"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("FirstScheduledTime") != m.end() && !m["FirstScheduledTime"].empty()) {
      firstScheduledTime = make_shared<long>(boost::any_cast<long>(m["FirstScheduledTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepeatType") != m.end() && !m["RepeatType"].empty()) {
      repeatType = make_shared<string>(boost::any_cast<string>(m["RepeatType"]));
    }
    if (m.find("ReservedPubFlow") != m.end() && !m["ReservedPubFlow"].empty()) {
      reservedPubFlow = make_shared<long>(boost::any_cast<long>(m["ReservedPubFlow"]));
    }
    if (m.find("ReservedSubFlow") != m.end() && !m["ReservedSubFlow"].empty()) {
      reservedSubFlow = make_shared<long>(boost::any_cast<long>(m["ReservedSubFlow"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
    if (m.find("WeeklyTypes") != m.end() && !m["WeeklyTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WeeklyTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WeeklyTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      weeklyTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateScheduledScalingRuleRequest() = default;
};
class CreateScheduledScalingRuleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> durationMinutes{};
  shared_ptr<bool> enable{};
  shared_ptr<long> firstScheduledTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repeatType{};
  shared_ptr<long> reservedPubFlow{};
  shared_ptr<long> reservedSubFlow{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> timeZone{};
  shared_ptr<string> weeklyTypesShrink{};

  CreateScheduledScalingRuleShrinkRequest() {}

  explicit CreateScheduledScalingRuleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationMinutes) {
      res["DurationMinutes"] = boost::any(*durationMinutes);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (firstScheduledTime) {
      res["FirstScheduledTime"] = boost::any(*firstScheduledTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repeatType) {
      res["RepeatType"] = boost::any(*repeatType);
    }
    if (reservedPubFlow) {
      res["ReservedPubFlow"] = boost::any(*reservedPubFlow);
    }
    if (reservedSubFlow) {
      res["ReservedSubFlow"] = boost::any(*reservedSubFlow);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    if (weeklyTypesShrink) {
      res["WeeklyTypes"] = boost::any(*weeklyTypesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DurationMinutes") != m.end() && !m["DurationMinutes"].empty()) {
      durationMinutes = make_shared<long>(boost::any_cast<long>(m["DurationMinutes"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("FirstScheduledTime") != m.end() && !m["FirstScheduledTime"].empty()) {
      firstScheduledTime = make_shared<long>(boost::any_cast<long>(m["FirstScheduledTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RepeatType") != m.end() && !m["RepeatType"].empty()) {
      repeatType = make_shared<string>(boost::any_cast<string>(m["RepeatType"]));
    }
    if (m.find("ReservedPubFlow") != m.end() && !m["ReservedPubFlow"].empty()) {
      reservedPubFlow = make_shared<long>(boost::any_cast<long>(m["ReservedPubFlow"]));
    }
    if (m.find("ReservedSubFlow") != m.end() && !m["ReservedSubFlow"].empty()) {
      reservedSubFlow = make_shared<long>(boost::any_cast<long>(m["ReservedSubFlow"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
    if (m.find("WeeklyTypes") != m.end() && !m["WeeklyTypes"].empty()) {
      weeklyTypesShrink = make_shared<string>(boost::any_cast<string>(m["WeeklyTypes"]));
    }
  }


  virtual ~CreateScheduledScalingRuleShrinkRequest() = default;
};
class CreateScheduledScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateScheduledScalingRuleResponseBody() {}

  explicit CreateScheduledScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~CreateScheduledScalingRuleResponseBody() = default;
};
class CreateScheduledScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateScheduledScalingRuleResponseBody> body{};

  CreateScheduledScalingRuleResponse() {}

  explicit CreateScheduledScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScheduledScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScheduledScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScheduledScalingRuleResponse() = default;
};
class CreateTopicRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateTopicRequestTag() {}

  explicit CreateTopicRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateTopicRequestTag() = default;
};
class CreateTopicRequest : public Darabonba::Model {
public:
  shared_ptr<bool> compactTopic{};
  shared_ptr<string> config{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> localTopic{};
  shared_ptr<long> minInsyncReplicas{};
  shared_ptr<string> partitionNum{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<long> replicationFactor{};
  shared_ptr<vector<CreateTopicRequestTag>> tag{};
  shared_ptr<string> topic{};

  CreateTopicRequest() {}

  explicit CreateTopicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compactTopic) {
      res["CompactTopic"] = boost::any(*compactTopic);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (localTopic) {
      res["LocalTopic"] = boost::any(*localTopic);
    }
    if (minInsyncReplicas) {
      res["MinInsyncReplicas"] = boost::any(*minInsyncReplicas);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (replicationFactor) {
      res["ReplicationFactor"] = boost::any(*replicationFactor);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompactTopic") != m.end() && !m["CompactTopic"].empty()) {
      compactTopic = make_shared<bool>(boost::any_cast<bool>(m["CompactTopic"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LocalTopic") != m.end() && !m["LocalTopic"].empty()) {
      localTopic = make_shared<bool>(boost::any_cast<bool>(m["LocalTopic"]));
    }
    if (m.find("MinInsyncReplicas") != m.end() && !m["MinInsyncReplicas"].empty()) {
      minInsyncReplicas = make_shared<long>(boost::any_cast<long>(m["MinInsyncReplicas"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<string>(boost::any_cast<string>(m["PartitionNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ReplicationFactor") != m.end() && !m["ReplicationFactor"].empty()) {
      replicationFactor = make_shared<long>(boost::any_cast<long>(m["ReplicationFactor"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateTopicRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTopicRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateTopicRequestTag>>(expect1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~CreateTopicRequest() = default;
};
class CreateTopicResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateTopicResponseBody() {}

  explicit CreateTopicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~CreateTopicResponseBody() = default;
};
class CreateTopicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTopicResponseBody> body{};

  CreateTopicResponse() {}

  explicit CreateTopicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTopicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTopicResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTopicResponse() = default;
};
class DeleteAclRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclOperationType{};
  shared_ptr<string> aclOperationTypes{};
  shared_ptr<string> aclPermissionType{};
  shared_ptr<string> aclResourceName{};
  shared_ptr<string> aclResourcePatternType{};
  shared_ptr<string> aclResourceType{};
  shared_ptr<string> host{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> username{};

  DeleteAclRequest() {}

  explicit DeleteAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclOperationType) {
      res["AclOperationType"] = boost::any(*aclOperationType);
    }
    if (aclOperationTypes) {
      res["AclOperationTypes"] = boost::any(*aclOperationTypes);
    }
    if (aclPermissionType) {
      res["AclPermissionType"] = boost::any(*aclPermissionType);
    }
    if (aclResourceName) {
      res["AclResourceName"] = boost::any(*aclResourceName);
    }
    if (aclResourcePatternType) {
      res["AclResourcePatternType"] = boost::any(*aclResourcePatternType);
    }
    if (aclResourceType) {
      res["AclResourceType"] = boost::any(*aclResourceType);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclOperationType") != m.end() && !m["AclOperationType"].empty()) {
      aclOperationType = make_shared<string>(boost::any_cast<string>(m["AclOperationType"]));
    }
    if (m.find("AclOperationTypes") != m.end() && !m["AclOperationTypes"].empty()) {
      aclOperationTypes = make_shared<string>(boost::any_cast<string>(m["AclOperationTypes"]));
    }
    if (m.find("AclPermissionType") != m.end() && !m["AclPermissionType"].empty()) {
      aclPermissionType = make_shared<string>(boost::any_cast<string>(m["AclPermissionType"]));
    }
    if (m.find("AclResourceName") != m.end() && !m["AclResourceName"].empty()) {
      aclResourceName = make_shared<string>(boost::any_cast<string>(m["AclResourceName"]));
    }
    if (m.find("AclResourcePatternType") != m.end() && !m["AclResourcePatternType"].empty()) {
      aclResourcePatternType = make_shared<string>(boost::any_cast<string>(m["AclResourcePatternType"]));
    }
    if (m.find("AclResourceType") != m.end() && !m["AclResourceType"].empty()) {
      aclResourceType = make_shared<string>(boost::any_cast<string>(m["AclResourceType"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~DeleteAclRequest() = default;
};
class DeleteAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAclResponseBody() {}

  explicit DeleteAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~DeleteAclResponseBody() = default;
};
class DeleteAclResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAclResponseBody> body{};

  DeleteAclResponse() {}

  explicit DeleteAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAclResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAclResponse() = default;
};
class DeleteConsumerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> consumerId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DeleteConsumerGroupRequest() {}

  explicit DeleteConsumerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerId) {
      res["ConsumerId"] = boost::any(*consumerId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerId") != m.end() && !m["ConsumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["ConsumerId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteConsumerGroupRequest() = default;
};
class DeleteConsumerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteConsumerGroupResponseBody() {}

  explicit DeleteConsumerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~DeleteConsumerGroupResponseBody() = default;
};
class DeleteConsumerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteConsumerGroupResponseBody> body{};

  DeleteConsumerGroupResponse() {}

  explicit DeleteConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteConsumerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConsumerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConsumerGroupResponse() = default;
};
class DeleteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DeleteInstanceRequest() {}

  explicit DeleteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteInstanceRequest() = default;
};
class DeleteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~DeleteInstanceResponseBody() = default;
};
class DeleteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceResponseBody> body{};

  DeleteInstanceResponse() {}

  explicit DeleteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResponse() = default;
};
class DeleteSaslUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> mechanism{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};
  shared_ptr<string> username{};

  DeleteSaslUserRequest() {}

  explicit DeleteSaslUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mechanism) {
      res["Mechanism"] = boost::any(*mechanism);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Mechanism") != m.end() && !m["Mechanism"].empty()) {
      mechanism = make_shared<string>(boost::any_cast<string>(m["Mechanism"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~DeleteSaslUserRequest() = default;
};
class DeleteSaslUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteSaslUserResponseBody() {}

  explicit DeleteSaslUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~DeleteSaslUserResponseBody() = default;
};
class DeleteSaslUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSaslUserResponseBody> body{};

  DeleteSaslUserResponse() {}

  explicit DeleteSaslUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSaslUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSaslUserResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSaslUserResponse() = default;
};
class DeleteScheduledScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ruleName{};

  DeleteScheduledScalingRuleRequest() {}

  explicit DeleteScheduledScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~DeleteScheduledScalingRuleRequest() = default;
};
class DeleteScheduledScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteScheduledScalingRuleResponseBody() {}

  explicit DeleteScheduledScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~DeleteScheduledScalingRuleResponseBody() = default;
};
class DeleteScheduledScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteScheduledScalingRuleResponseBody> body{};

  DeleteScheduledScalingRuleResponse() {}

  explicit DeleteScheduledScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScheduledScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScheduledScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScheduledScalingRuleResponse() = default;
};
class DeleteTopicRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topic{};

  DeleteTopicRequest() {}

  explicit DeleteTopicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~DeleteTopicRequest() = default;
};
class DeleteTopicResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteTopicResponseBody() {}

  explicit DeleteTopicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~DeleteTopicResponseBody() = default;
};
class DeleteTopicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTopicResponseBody> body{};

  DeleteTopicResponse() {}

  explicit DeleteTopicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTopicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTopicResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTopicResponse() = default;
};
class DescribeAclResourceNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclResourcePatternType{};
  shared_ptr<string> aclResourceType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DescribeAclResourceNameRequest() {}

  explicit DescribeAclResourceNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclResourcePatternType) {
      res["AclResourcePatternType"] = boost::any(*aclResourcePatternType);
    }
    if (aclResourceType) {
      res["AclResourceType"] = boost::any(*aclResourceType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclResourcePatternType") != m.end() && !m["AclResourcePatternType"].empty()) {
      aclResourcePatternType = make_shared<string>(boost::any_cast<string>(m["AclResourcePatternType"]));
    }
    if (m.find("AclResourceType") != m.end() && !m["AclResourceType"].empty()) {
      aclResourceType = make_shared<string>(boost::any_cast<string>(m["AclResourceType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAclResourceNameRequest() = default;
};
class DescribeAclResourceNameResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> data{};

  DescribeAclResourceNameResponseBodyData() {}

  explicit DescribeAclResourceNameResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAclResourceNameResponseBodyData() = default;
};
class DescribeAclResourceNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeAclResourceNameResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAclResourceNameResponseBody() {}

  explicit DescribeAclResourceNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAclResourceNameResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeAclResourceNameResponseBodyData>(model1);
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


  virtual ~DescribeAclResourceNameResponseBody() = default;
};
class DescribeAclResourceNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAclResourceNameResponseBody> body{};

  DescribeAclResourceNameResponse() {}

  explicit DescribeAclResourceNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAclResourceNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAclResourceNameResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAclResourceNameResponse() = default;
};
class DescribeAclsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclOperationType{};
  shared_ptr<string> aclPermissionType{};
  shared_ptr<string> aclResourceName{};
  shared_ptr<string> aclResourcePatternType{};
  shared_ptr<string> aclResourceType{};
  shared_ptr<string> host{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> username{};

  DescribeAclsRequest() {}

  explicit DescribeAclsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclOperationType) {
      res["AclOperationType"] = boost::any(*aclOperationType);
    }
    if (aclPermissionType) {
      res["AclPermissionType"] = boost::any(*aclPermissionType);
    }
    if (aclResourceName) {
      res["AclResourceName"] = boost::any(*aclResourceName);
    }
    if (aclResourcePatternType) {
      res["AclResourcePatternType"] = boost::any(*aclResourcePatternType);
    }
    if (aclResourceType) {
      res["AclResourceType"] = boost::any(*aclResourceType);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclOperationType") != m.end() && !m["AclOperationType"].empty()) {
      aclOperationType = make_shared<string>(boost::any_cast<string>(m["AclOperationType"]));
    }
    if (m.find("AclPermissionType") != m.end() && !m["AclPermissionType"].empty()) {
      aclPermissionType = make_shared<string>(boost::any_cast<string>(m["AclPermissionType"]));
    }
    if (m.find("AclResourceName") != m.end() && !m["AclResourceName"].empty()) {
      aclResourceName = make_shared<string>(boost::any_cast<string>(m["AclResourceName"]));
    }
    if (m.find("AclResourcePatternType") != m.end() && !m["AclResourcePatternType"].empty()) {
      aclResourcePatternType = make_shared<string>(boost::any_cast<string>(m["AclResourcePatternType"]));
    }
    if (m.find("AclResourceType") != m.end() && !m["AclResourceType"].empty()) {
      aclResourceType = make_shared<string>(boost::any_cast<string>(m["AclResourceType"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~DescribeAclsRequest() = default;
};
class DescribeAclsResponseBodyKafkaAclListKafkaAclVO : public Darabonba::Model {
public:
  shared_ptr<string> aclOperationType{};
  shared_ptr<string> aclPermissionType{};
  shared_ptr<string> aclResourceName{};
  shared_ptr<string> aclResourcePatternType{};
  shared_ptr<string> aclResourceType{};
  shared_ptr<string> host{};
  shared_ptr<string> username{};

  DescribeAclsResponseBodyKafkaAclListKafkaAclVO() {}

  explicit DescribeAclsResponseBodyKafkaAclListKafkaAclVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclOperationType) {
      res["AclOperationType"] = boost::any(*aclOperationType);
    }
    if (aclPermissionType) {
      res["AclPermissionType"] = boost::any(*aclPermissionType);
    }
    if (aclResourceName) {
      res["AclResourceName"] = boost::any(*aclResourceName);
    }
    if (aclResourcePatternType) {
      res["AclResourcePatternType"] = boost::any(*aclResourcePatternType);
    }
    if (aclResourceType) {
      res["AclResourceType"] = boost::any(*aclResourceType);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclOperationType") != m.end() && !m["AclOperationType"].empty()) {
      aclOperationType = make_shared<string>(boost::any_cast<string>(m["AclOperationType"]));
    }
    if (m.find("AclPermissionType") != m.end() && !m["AclPermissionType"].empty()) {
      aclPermissionType = make_shared<string>(boost::any_cast<string>(m["AclPermissionType"]));
    }
    if (m.find("AclResourceName") != m.end() && !m["AclResourceName"].empty()) {
      aclResourceName = make_shared<string>(boost::any_cast<string>(m["AclResourceName"]));
    }
    if (m.find("AclResourcePatternType") != m.end() && !m["AclResourcePatternType"].empty()) {
      aclResourcePatternType = make_shared<string>(boost::any_cast<string>(m["AclResourcePatternType"]));
    }
    if (m.find("AclResourceType") != m.end() && !m["AclResourceType"].empty()) {
      aclResourceType = make_shared<string>(boost::any_cast<string>(m["AclResourceType"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~DescribeAclsResponseBodyKafkaAclListKafkaAclVO() = default;
};
class DescribeAclsResponseBodyKafkaAclList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAclsResponseBodyKafkaAclListKafkaAclVO>> kafkaAclVO{};

  DescribeAclsResponseBodyKafkaAclList() {}

  explicit DescribeAclsResponseBodyKafkaAclList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kafkaAclVO) {
      vector<boost::any> temp1;
      for(auto item1:*kafkaAclVO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KafkaAclVO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KafkaAclVO") != m.end() && !m["KafkaAclVO"].empty()) {
      if (typeid(vector<boost::any>) == m["KafkaAclVO"].type()) {
        vector<DescribeAclsResponseBodyKafkaAclListKafkaAclVO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KafkaAclVO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAclsResponseBodyKafkaAclListKafkaAclVO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        kafkaAclVO = make_shared<vector<DescribeAclsResponseBodyKafkaAclListKafkaAclVO>>(expect1);
      }
    }
  }


  virtual ~DescribeAclsResponseBodyKafkaAclList() = default;
};
class DescribeAclsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeAclsResponseBodyKafkaAclList> kafkaAclList{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAclsResponseBody() {}

  explicit DescribeAclsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (kafkaAclList) {
      res["KafkaAclList"] = kafkaAclList ? boost::any(kafkaAclList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("KafkaAclList") != m.end() && !m["KafkaAclList"].empty()) {
      if (typeid(map<string, boost::any>) == m["KafkaAclList"].type()) {
        DescribeAclsResponseBodyKafkaAclList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KafkaAclList"]));
        kafkaAclList = make_shared<DescribeAclsResponseBodyKafkaAclList>(model1);
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


  virtual ~DescribeAclsResponseBody() = default;
};
class DescribeAclsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAclsResponseBody> body{};

  DescribeAclsResponse() {}

  explicit DescribeAclsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAclsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAclsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAclsResponse() = default;
};
class DescribeSaslUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  DescribeSaslUsersRequest() {}

  explicit DescribeSaslUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeSaslUsersRequest() = default;
};
class DescribeSaslUsersResponseBodySaslUserListSaslUserVO : public Darabonba::Model {
public:
  shared_ptr<string> mechanism{};
  shared_ptr<string> password{};
  shared_ptr<string> type{};
  shared_ptr<string> username{};

  DescribeSaslUsersResponseBodySaslUserListSaslUserVO() {}

  explicit DescribeSaslUsersResponseBodySaslUserListSaslUserVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mechanism) {
      res["Mechanism"] = boost::any(*mechanism);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mechanism") != m.end() && !m["Mechanism"].empty()) {
      mechanism = make_shared<string>(boost::any_cast<string>(m["Mechanism"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~DescribeSaslUsersResponseBodySaslUserListSaslUserVO() = default;
};
class DescribeSaslUsersResponseBodySaslUserList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSaslUsersResponseBodySaslUserListSaslUserVO>> saslUserVO{};

  DescribeSaslUsersResponseBodySaslUserList() {}

  explicit DescribeSaslUsersResponseBodySaslUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (saslUserVO) {
      vector<boost::any> temp1;
      for(auto item1:*saslUserVO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SaslUserVO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SaslUserVO") != m.end() && !m["SaslUserVO"].empty()) {
      if (typeid(vector<boost::any>) == m["SaslUserVO"].type()) {
        vector<DescribeSaslUsersResponseBodySaslUserListSaslUserVO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SaslUserVO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSaslUsersResponseBodySaslUserListSaslUserVO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        saslUserVO = make_shared<vector<DescribeSaslUsersResponseBodySaslUserListSaslUserVO>>(expect1);
      }
    }
  }


  virtual ~DescribeSaslUsersResponseBodySaslUserList() = default;
};
class DescribeSaslUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSaslUsersResponseBodySaslUserList> saslUserList{};
  shared_ptr<bool> success{};

  DescribeSaslUsersResponseBody() {}

  explicit DescribeSaslUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (saslUserList) {
      res["SaslUserList"] = saslUserList ? boost::any(saslUserList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SaslUserList") != m.end() && !m["SaslUserList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SaslUserList"].type()) {
        DescribeSaslUsersResponseBodySaslUserList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SaslUserList"]));
        saslUserList = make_shared<DescribeSaslUsersResponseBodySaslUserList>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeSaslUsersResponseBody() = default;
};
class DescribeSaslUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSaslUsersResponseBody> body{};

  DescribeSaslUsersResponse() {}

  explicit DescribeSaslUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSaslUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSaslUsersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSaslUsersResponse() = default;
};
class EnableAutoGroupCreationRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  EnableAutoGroupCreationRequest() {}

  explicit EnableAutoGroupCreationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~EnableAutoGroupCreationRequest() = default;
};
class EnableAutoGroupCreationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnableAutoGroupCreationResponseBody() {}

  explicit EnableAutoGroupCreationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~EnableAutoGroupCreationResponseBody() = default;
};
class EnableAutoGroupCreationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableAutoGroupCreationResponseBody> body{};

  EnableAutoGroupCreationResponse() {}

  explicit EnableAutoGroupCreationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableAutoGroupCreationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableAutoGroupCreationResponseBody>(model1);
      }
    }
  }


  virtual ~EnableAutoGroupCreationResponse() = default;
};
class EnableAutoTopicCreationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> operate{};
  shared_ptr<long> partitionNum{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> updatePartition{};

  EnableAutoTopicCreationRequest() {}

  explicit EnableAutoTopicCreationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (operate) {
      res["Operate"] = boost::any(*operate);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (updatePartition) {
      res["UpdatePartition"] = boost::any(*updatePartition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Operate") != m.end() && !m["Operate"].empty()) {
      operate = make_shared<string>(boost::any_cast<string>(m["Operate"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["PartitionNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UpdatePartition") != m.end() && !m["UpdatePartition"].empty()) {
      updatePartition = make_shared<bool>(boost::any_cast<bool>(m["UpdatePartition"]));
    }
  }


  virtual ~EnableAutoTopicCreationRequest() = default;
};
class EnableAutoTopicCreationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnableAutoTopicCreationResponseBody() {}

  explicit EnableAutoTopicCreationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~EnableAutoTopicCreationResponseBody() = default;
};
class EnableAutoTopicCreationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableAutoTopicCreationResponseBody> body{};

  EnableAutoTopicCreationResponse() {}

  explicit EnableAutoTopicCreationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableAutoTopicCreationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableAutoTopicCreationResponseBody>(model1);
      }
    }
  }


  virtual ~EnableAutoTopicCreationResponse() = default;
};
class GetAllInstanceIdListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  GetAllInstanceIdListRequest() {}

  explicit GetAllInstanceIdListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAllInstanceIdListRequest() = default;
};
class GetAllInstanceIdListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<map<string, boost::any>> instanceIds{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAllInstanceIdListResponseBody() {}

  explicit GetAllInstanceIdListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
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
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["InstanceIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      instanceIds = make_shared<map<string, boost::any>>(toMap1);
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


  virtual ~GetAllInstanceIdListResponseBody() = default;
};
class GetAllInstanceIdListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAllInstanceIdListResponseBody> body{};

  GetAllInstanceIdListResponse() {}

  explicit GetAllInstanceIdListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAllInstanceIdListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAllInstanceIdListResponseBody>(model1);
      }
    }
  }


  virtual ~GetAllInstanceIdListResponse() = default;
};
class GetAllowedIpListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  GetAllowedIpListRequest() {}

  explicit GetAllowedIpListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetAllowedIpListRequest() = default;
};
class GetAllowedIpListResponseBodyAllowedListInternetList : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> allowedIpGroup{};
  shared_ptr<vector<string>> allowedIpList{};
  shared_ptr<vector<string>> blackIPList{};
  shared_ptr<map<string, string>> blackIPMap{};
  shared_ptr<string> portRange{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<bool> userDefinedSharedSecurityGroup{};

  GetAllowedIpListResponseBodyAllowedListInternetList() {}

  explicit GetAllowedIpListResponseBodyAllowedListInternetList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedIpGroup) {
      res["AllowedIpGroup"] = boost::any(*allowedIpGroup);
    }
    if (allowedIpList) {
      res["AllowedIpList"] = boost::any(*allowedIpList);
    }
    if (blackIPList) {
      res["BlackIPList"] = boost::any(*blackIPList);
    }
    if (blackIPMap) {
      res["BlackIPMap"] = boost::any(*blackIPMap);
    }
    if (portRange) {
      res["PortRange"] = boost::any(*portRange);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (userDefinedSharedSecurityGroup) {
      res["UserDefinedSharedSecurityGroup"] = boost::any(*userDefinedSharedSecurityGroup);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowedIpGroup") != m.end() && !m["AllowedIpGroup"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["AllowedIpGroup"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      allowedIpGroup = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AllowedIpList") != m.end() && !m["AllowedIpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AllowedIpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowedIpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      allowedIpList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BlackIPList") != m.end() && !m["BlackIPList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BlackIPList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BlackIPList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      blackIPList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BlackIPMap") != m.end() && !m["BlackIPMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["BlackIPMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      blackIPMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PortRange") != m.end() && !m["PortRange"].empty()) {
      portRange = make_shared<string>(boost::any_cast<string>(m["PortRange"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("UserDefinedSharedSecurityGroup") != m.end() && !m["UserDefinedSharedSecurityGroup"].empty()) {
      userDefinedSharedSecurityGroup = make_shared<bool>(boost::any_cast<bool>(m["UserDefinedSharedSecurityGroup"]));
    }
  }


  virtual ~GetAllowedIpListResponseBodyAllowedListInternetList() = default;
};
class GetAllowedIpListResponseBodyAllowedListVpcList : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> allowedIpGroup{};
  shared_ptr<vector<string>> allowedIpList{};
  shared_ptr<vector<string>> blackIPList{};
  shared_ptr<map<string, string>> blackIPMap{};
  shared_ptr<string> portRange{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<bool> userDefinedSharedSecurityGroup{};

  GetAllowedIpListResponseBodyAllowedListVpcList() {}

  explicit GetAllowedIpListResponseBodyAllowedListVpcList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedIpGroup) {
      res["AllowedIpGroup"] = boost::any(*allowedIpGroup);
    }
    if (allowedIpList) {
      res["AllowedIpList"] = boost::any(*allowedIpList);
    }
    if (blackIPList) {
      res["BlackIPList"] = boost::any(*blackIPList);
    }
    if (blackIPMap) {
      res["BlackIPMap"] = boost::any(*blackIPMap);
    }
    if (portRange) {
      res["PortRange"] = boost::any(*portRange);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (userDefinedSharedSecurityGroup) {
      res["UserDefinedSharedSecurityGroup"] = boost::any(*userDefinedSharedSecurityGroup);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowedIpGroup") != m.end() && !m["AllowedIpGroup"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["AllowedIpGroup"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      allowedIpGroup = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("AllowedIpList") != m.end() && !m["AllowedIpList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AllowedIpList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowedIpList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      allowedIpList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BlackIPList") != m.end() && !m["BlackIPList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BlackIPList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BlackIPList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      blackIPList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BlackIPMap") != m.end() && !m["BlackIPMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["BlackIPMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      blackIPMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PortRange") != m.end() && !m["PortRange"].empty()) {
      portRange = make_shared<string>(boost::any_cast<string>(m["PortRange"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("UserDefinedSharedSecurityGroup") != m.end() && !m["UserDefinedSharedSecurityGroup"].empty()) {
      userDefinedSharedSecurityGroup = make_shared<bool>(boost::any_cast<bool>(m["UserDefinedSharedSecurityGroup"]));
    }
  }


  virtual ~GetAllowedIpListResponseBodyAllowedListVpcList() = default;
};
class GetAllowedIpListResponseBodyAllowedList : public Darabonba::Model {
public:
  shared_ptr<long> deployType{};
  shared_ptr<vector<GetAllowedIpListResponseBodyAllowedListInternetList>> internetList{};
  shared_ptr<vector<GetAllowedIpListResponseBodyAllowedListVpcList>> vpcList{};

  GetAllowedIpListResponseBodyAllowedList() {}

  explicit GetAllowedIpListResponseBodyAllowedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (internetList) {
      vector<boost::any> temp1;
      for(auto item1:*internetList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InternetList"] = boost::any(temp1);
    }
    if (vpcList) {
      vector<boost::any> temp1;
      for(auto item1:*vpcList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VpcList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<long>(boost::any_cast<long>(m["DeployType"]));
    }
    if (m.find("InternetList") != m.end() && !m["InternetList"].empty()) {
      if (typeid(vector<boost::any>) == m["InternetList"].type()) {
        vector<GetAllowedIpListResponseBodyAllowedListInternetList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InternetList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAllowedIpListResponseBodyAllowedListInternetList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        internetList = make_shared<vector<GetAllowedIpListResponseBodyAllowedListInternetList>>(expect1);
      }
    }
    if (m.find("VpcList") != m.end() && !m["VpcList"].empty()) {
      if (typeid(vector<boost::any>) == m["VpcList"].type()) {
        vector<GetAllowedIpListResponseBodyAllowedListVpcList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VpcList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAllowedIpListResponseBodyAllowedListVpcList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcList = make_shared<vector<GetAllowedIpListResponseBodyAllowedListVpcList>>(expect1);
      }
    }
  }


  virtual ~GetAllowedIpListResponseBodyAllowedList() = default;
};
class GetAllowedIpListResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAllowedIpListResponseBodyAllowedList> allowedList{};
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAllowedIpListResponseBody() {}

  explicit GetAllowedIpListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedList) {
      res["AllowedList"] = allowedList ? boost::any(allowedList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("AllowedList") != m.end() && !m["AllowedList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AllowedList"].type()) {
        GetAllowedIpListResponseBodyAllowedList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AllowedList"]));
        allowedList = make_shared<GetAllowedIpListResponseBodyAllowedList>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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


  virtual ~GetAllowedIpListResponseBody() = default;
};
class GetAllowedIpListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAllowedIpListResponseBody> body{};

  GetAllowedIpListResponse() {}

  explicit GetAllowedIpListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAllowedIpListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAllowedIpListResponseBody>(model1);
      }
    }
  }


  virtual ~GetAllowedIpListResponse() = default;
};
class GetAutoScalingConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  GetAutoScalingConfigurationRequest() {}

  explicit GetAutoScalingConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetAutoScalingConfigurationRequest() = default;
};
class GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> weeklyTypes{};

  GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes() {}

  explicit GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (weeklyTypes) {
      res["WeeklyTypes"] = boost::any(*weeklyTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WeeklyTypes") != m.end() && !m["WeeklyTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WeeklyTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WeeklyTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      weeklyTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes() = default;
};
class GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules : public Darabonba::Model {
public:
  shared_ptr<long> durationMinutes{};
  shared_ptr<bool> enable{};
  shared_ptr<long> estimatedElasticScalingDownTimeSecs{};
  shared_ptr<long> estimatedElasticScalingUpTimeSecs{};
  shared_ptr<long> firstScheduledTime{};
  shared_ptr<string> repeatType{};
  shared_ptr<long> reservedPubFlow{};
  shared_ptr<long> reservedSubFlow{};
  shared_ptr<long> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> timeZone{};
  shared_ptr<GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes> weeklyTypes{};

  GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules() {}

  explicit GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationMinutes) {
      res["DurationMinutes"] = boost::any(*durationMinutes);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (estimatedElasticScalingDownTimeSecs) {
      res["EstimatedElasticScalingDownTimeSecs"] = boost::any(*estimatedElasticScalingDownTimeSecs);
    }
    if (estimatedElasticScalingUpTimeSecs) {
      res["EstimatedElasticScalingUpTimeSecs"] = boost::any(*estimatedElasticScalingUpTimeSecs);
    }
    if (firstScheduledTime) {
      res["FirstScheduledTime"] = boost::any(*firstScheduledTime);
    }
    if (repeatType) {
      res["RepeatType"] = boost::any(*repeatType);
    }
    if (reservedPubFlow) {
      res["ReservedPubFlow"] = boost::any(*reservedPubFlow);
    }
    if (reservedSubFlow) {
      res["ReservedSubFlow"] = boost::any(*reservedSubFlow);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    if (weeklyTypes) {
      res["WeeklyTypes"] = weeklyTypes ? boost::any(weeklyTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DurationMinutes") != m.end() && !m["DurationMinutes"].empty()) {
      durationMinutes = make_shared<long>(boost::any_cast<long>(m["DurationMinutes"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("EstimatedElasticScalingDownTimeSecs") != m.end() && !m["EstimatedElasticScalingDownTimeSecs"].empty()) {
      estimatedElasticScalingDownTimeSecs = make_shared<long>(boost::any_cast<long>(m["EstimatedElasticScalingDownTimeSecs"]));
    }
    if (m.find("EstimatedElasticScalingUpTimeSecs") != m.end() && !m["EstimatedElasticScalingUpTimeSecs"].empty()) {
      estimatedElasticScalingUpTimeSecs = make_shared<long>(boost::any_cast<long>(m["EstimatedElasticScalingUpTimeSecs"]));
    }
    if (m.find("FirstScheduledTime") != m.end() && !m["FirstScheduledTime"].empty()) {
      firstScheduledTime = make_shared<long>(boost::any_cast<long>(m["FirstScheduledTime"]));
    }
    if (m.find("RepeatType") != m.end() && !m["RepeatType"].empty()) {
      repeatType = make_shared<string>(boost::any_cast<string>(m["RepeatType"]));
    }
    if (m.find("ReservedPubFlow") != m.end() && !m["ReservedPubFlow"].empty()) {
      reservedPubFlow = make_shared<long>(boost::any_cast<long>(m["ReservedPubFlow"]));
    }
    if (m.find("ReservedSubFlow") != m.end() && !m["ReservedSubFlow"].empty()) {
      reservedSubFlow = make_shared<long>(boost::any_cast<long>(m["ReservedSubFlow"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
    if (m.find("WeeklyTypes") != m.end() && !m["WeeklyTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["WeeklyTypes"].type()) {
        GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WeeklyTypes"]));
        weeklyTypes = make_shared<GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRulesWeeklyTypes>(model1);
      }
    }
  }


  virtual ~GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules() = default;
};
class GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules : public Darabonba::Model {
public:
  shared_ptr<vector<GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules>> scheduledScalingRules{};

  GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules() {}

  explicit GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scheduledScalingRules) {
      vector<boost::any> temp1;
      for(auto item1:*scheduledScalingRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScheduledScalingRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScheduledScalingRules") != m.end() && !m["ScheduledScalingRules"].empty()) {
      if (typeid(vector<boost::any>) == m["ScheduledScalingRules"].type()) {
        vector<GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScheduledScalingRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduledScalingRules = make_shared<vector<GetAutoScalingConfigurationResponseBodyDataScheduledScalingRulesScheduledScalingRules>>(expect1);
      }
    }
  }


  virtual ~GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules() = default;
};
class GetAutoScalingConfigurationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules> scheduledScalingRules{};

  GetAutoScalingConfigurationResponseBodyData() {}

  explicit GetAutoScalingConfigurationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scheduledScalingRules) {
      res["ScheduledScalingRules"] = scheduledScalingRules ? boost::any(scheduledScalingRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScheduledScalingRules") != m.end() && !m["ScheduledScalingRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScheduledScalingRules"].type()) {
        GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScheduledScalingRules"]));
        scheduledScalingRules = make_shared<GetAutoScalingConfigurationResponseBodyDataScheduledScalingRules>(model1);
      }
    }
  }


  virtual ~GetAutoScalingConfigurationResponseBodyData() = default;
};
class GetAutoScalingConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetAutoScalingConfigurationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAutoScalingConfigurationResponseBody() {}

  explicit GetAutoScalingConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAutoScalingConfigurationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAutoScalingConfigurationResponseBodyData>(model1);
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


  virtual ~GetAutoScalingConfigurationResponseBody() = default;
};
class GetAutoScalingConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAutoScalingConfigurationResponseBody> body{};

  GetAutoScalingConfigurationResponse() {}

  explicit GetAutoScalingConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAutoScalingConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAutoScalingConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~GetAutoScalingConfigurationResponse() = default;
};
class GetConsumerListRequest : public Darabonba::Model {
public:
  shared_ptr<string> consumerId{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  GetConsumerListRequest() {}

  explicit GetConsumerListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerId) {
      res["ConsumerId"] = boost::any(*consumerId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerId") != m.end() && !m["ConsumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["ConsumerId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetConsumerListRequest() = default;
};
class GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO() {}

  explicit GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO() = default;
};
class GetConsumerListResponseBodyConsumerListConsumerVOTags : public Darabonba::Model {
public:
  shared_ptr<vector<GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO>> tagVO{};

  GetConsumerListResponseBodyConsumerListConsumerVOTags() {}

  explicit GetConsumerListResponseBodyConsumerListConsumerVOTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagVO) {
      vector<boost::any> temp1;
      for(auto item1:*tagVO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagVO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagVO") != m.end() && !m["TagVO"].empty()) {
      if (typeid(vector<boost::any>) == m["TagVO"].type()) {
        vector<GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagVO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagVO = make_shared<vector<GetConsumerListResponseBodyConsumerListConsumerVOTagsTagVO>>(expect1);
      }
    }
  }


  virtual ~GetConsumerListResponseBodyConsumerListConsumerVOTags() = default;
};
class GetConsumerListResponseBodyConsumerListConsumerVO : public Darabonba::Model {
public:
  shared_ptr<bool> automaticallyCreatedGroup{};
  shared_ptr<string> consumerId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<GetConsumerListResponseBodyConsumerListConsumerVOTags> tags{};

  GetConsumerListResponseBodyConsumerListConsumerVO() {}

  explicit GetConsumerListResponseBodyConsumerListConsumerVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (automaticallyCreatedGroup) {
      res["AutomaticallyCreatedGroup"] = boost::any(*automaticallyCreatedGroup);
    }
    if (consumerId) {
      res["ConsumerId"] = boost::any(*consumerId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutomaticallyCreatedGroup") != m.end() && !m["AutomaticallyCreatedGroup"].empty()) {
      automaticallyCreatedGroup = make_shared<bool>(boost::any_cast<bool>(m["AutomaticallyCreatedGroup"]));
    }
    if (m.find("ConsumerId") != m.end() && !m["ConsumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["ConsumerId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        GetConsumerListResponseBodyConsumerListConsumerVOTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<GetConsumerListResponseBodyConsumerListConsumerVOTags>(model1);
      }
    }
  }


  virtual ~GetConsumerListResponseBodyConsumerListConsumerVO() = default;
};
class GetConsumerListResponseBodyConsumerList : public Darabonba::Model {
public:
  shared_ptr<vector<GetConsumerListResponseBodyConsumerListConsumerVO>> consumerVO{};

  GetConsumerListResponseBodyConsumerList() {}

  explicit GetConsumerListResponseBodyConsumerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerVO) {
      vector<boost::any> temp1;
      for(auto item1:*consumerVO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConsumerVO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerVO") != m.end() && !m["ConsumerVO"].empty()) {
      if (typeid(vector<boost::any>) == m["ConsumerVO"].type()) {
        vector<GetConsumerListResponseBodyConsumerListConsumerVO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConsumerVO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConsumerListResponseBodyConsumerListConsumerVO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        consumerVO = make_shared<vector<GetConsumerListResponseBodyConsumerListConsumerVO>>(expect1);
      }
    }
  }


  virtual ~GetConsumerListResponseBodyConsumerList() = default;
};
class GetConsumerListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetConsumerListResponseBodyConsumerList> consumerList{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  GetConsumerListResponseBody() {}

  explicit GetConsumerListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (consumerList) {
      res["ConsumerList"] = consumerList ? boost::any(consumerList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("ConsumerList") != m.end() && !m["ConsumerList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConsumerList"].type()) {
        GetConsumerListResponseBodyConsumerList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConsumerList"]));
        consumerList = make_shared<GetConsumerListResponseBodyConsumerList>(model1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetConsumerListResponseBody() = default;
};
class GetConsumerListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConsumerListResponseBody> body{};

  GetConsumerListResponse() {}

  explicit GetConsumerListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConsumerListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConsumerListResponseBody>(model1);
      }
    }
  }


  virtual ~GetConsumerListResponse() = default;
};
class GetConsumerProgressRequest : public Darabonba::Model {
public:
  shared_ptr<string> consumerId{};
  shared_ptr<bool> hideLastTimestamp{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  GetConsumerProgressRequest() {}

  explicit GetConsumerProgressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerId) {
      res["ConsumerId"] = boost::any(*consumerId);
    }
    if (hideLastTimestamp) {
      res["HideLastTimestamp"] = boost::any(*hideLastTimestamp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerId") != m.end() && !m["ConsumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["ConsumerId"]));
    }
    if (m.find("HideLastTimestamp") != m.end() && !m["HideLastTimestamp"].empty()) {
      hideLastTimestamp = make_shared<bool>(boost::any_cast<bool>(m["HideLastTimestamp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetConsumerProgressRequest() = default;
};
class GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> generation{};
  shared_ptr<string> groupId{};
  shared_ptr<long> lastRebalanceTimestamp{};
  shared_ptr<string> reason{};
  shared_ptr<bool> rebalanceSuccess{};
  shared_ptr<long> rebalanceTimeConsuming{};

  GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList() {}

  explicit GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generation) {
      res["Generation"] = boost::any(*generation);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (lastRebalanceTimestamp) {
      res["LastRebalanceTimestamp"] = boost::any(*lastRebalanceTimestamp);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (rebalanceSuccess) {
      res["RebalanceSuccess"] = boost::any(*rebalanceSuccess);
    }
    if (rebalanceTimeConsuming) {
      res["RebalanceTimeConsuming"] = boost::any(*rebalanceTimeConsuming);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Generation") != m.end() && !m["Generation"].empty()) {
      generation = make_shared<long>(boost::any_cast<long>(m["Generation"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("LastRebalanceTimestamp") != m.end() && !m["LastRebalanceTimestamp"].empty()) {
      lastRebalanceTimestamp = make_shared<long>(boost::any_cast<long>(m["LastRebalanceTimestamp"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RebalanceSuccess") != m.end() && !m["RebalanceSuccess"].empty()) {
      rebalanceSuccess = make_shared<bool>(boost::any_cast<bool>(m["RebalanceSuccess"]));
    }
    if (m.find("RebalanceTimeConsuming") != m.end() && !m["RebalanceTimeConsuming"].empty()) {
      rebalanceTimeConsuming = make_shared<long>(boost::any_cast<long>(m["RebalanceTimeConsuming"]));
    }
  }


  virtual ~GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList() = default;
};
class GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList>> rebalanceInfoList{};

  GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList() {}

  explicit GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rebalanceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*rebalanceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RebalanceInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RebalanceInfoList") != m.end() && !m["RebalanceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["RebalanceInfoList"].type()) {
        vector<GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RebalanceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rebalanceInfoList = make_shared<vector<GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoListRebalanceInfoList>>(expect1);
      }
    }
  }


  virtual ~GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList() = default;
};
class GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList : public Darabonba::Model {
public:
  shared_ptr<long> brokerOffset{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientIp{};
  shared_ptr<long> consumerOffset{};
  shared_ptr<long> lastTimestamp{};
  shared_ptr<string> memberId{};
  shared_ptr<long> partition{};

  GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList() {}

  explicit GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brokerOffset) {
      res["BrokerOffset"] = boost::any(*brokerOffset);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (consumerOffset) {
      res["ConsumerOffset"] = boost::any(*consumerOffset);
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (memberId) {
      res["MemberId"] = boost::any(*memberId);
    }
    if (partition) {
      res["Partition"] = boost::any(*partition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BrokerOffset") != m.end() && !m["BrokerOffset"].empty()) {
      brokerOffset = make_shared<long>(boost::any_cast<long>(m["BrokerOffset"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ConsumerOffset") != m.end() && !m["ConsumerOffset"].empty()) {
      consumerOffset = make_shared<long>(boost::any_cast<long>(m["ConsumerOffset"]));
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<long>(boost::any_cast<long>(m["LastTimestamp"]));
    }
    if (m.find("MemberId") != m.end() && !m["MemberId"].empty()) {
      memberId = make_shared<string>(boost::any_cast<string>(m["MemberId"]));
    }
    if (m.find("Partition") != m.end() && !m["Partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["Partition"]));
    }
  }


  virtual ~GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList() = default;
};
class GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList : public Darabonba::Model {
public:
  shared_ptr<vector<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList>> offsetList{};

  GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList() {}

  explicit GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offsetList) {
      vector<boost::any> temp1;
      for(auto item1:*offsetList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OffsetList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OffsetList") != m.end() && !m["OffsetList"].empty()) {
      if (typeid(vector<boost::any>) == m["OffsetList"].type()) {
        vector<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OffsetList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        offsetList = make_shared<vector<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList>>(expect1);
      }
    }
  }


  virtual ~GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList() = default;
};
class GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList : public Darabonba::Model {
public:
  shared_ptr<long> lastTimestamp{};
  shared_ptr<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList> offsetList{};
  shared_ptr<string> topic{};
  shared_ptr<long> totalDiff{};

  GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList() {}

  explicit GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (offsetList) {
      res["OffsetList"] = offsetList ? boost::any(offsetList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (totalDiff) {
      res["TotalDiff"] = boost::any(*totalDiff);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<long>(boost::any_cast<long>(m["LastTimestamp"]));
    }
    if (m.find("OffsetList") != m.end() && !m["OffsetList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OffsetList"].type()) {
        GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OffsetList"]));
        offsetList = make_shared<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("TotalDiff") != m.end() && !m["TotalDiff"].empty()) {
      totalDiff = make_shared<long>(boost::any_cast<long>(m["TotalDiff"]));
    }
  }


  virtual ~GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList() = default;
};
class GetConsumerProgressResponseBodyConsumerProgressTopicList : public Darabonba::Model {
public:
  shared_ptr<vector<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList>> topicList{};

  GetConsumerProgressResponseBodyConsumerProgressTopicList() {}

  explicit GetConsumerProgressResponseBodyConsumerProgressTopicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topicList) {
      vector<boost::any> temp1;
      for(auto item1:*topicList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TopicList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TopicList") != m.end() && !m["TopicList"].empty()) {
      if (typeid(vector<boost::any>) == m["TopicList"].type()) {
        vector<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TopicList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topicList = make_shared<vector<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList>>(expect1);
      }
    }
  }


  virtual ~GetConsumerProgressResponseBodyConsumerProgressTopicList() = default;
};
class GetConsumerProgressResponseBodyConsumerProgress : public Darabonba::Model {
public:
  shared_ptr<long> lastTimestamp{};
  shared_ptr<GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList> rebalanceInfoList{};
  shared_ptr<GetConsumerProgressResponseBodyConsumerProgressTopicList> topicList{};
  shared_ptr<long> totalDiff{};
  shared_ptr<string> state{};

  GetConsumerProgressResponseBodyConsumerProgress() {}

  explicit GetConsumerProgressResponseBodyConsumerProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (rebalanceInfoList) {
      res["RebalanceInfoList"] = rebalanceInfoList ? boost::any(rebalanceInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topicList) {
      res["TopicList"] = topicList ? boost::any(topicList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalDiff) {
      res["TotalDiff"] = boost::any(*totalDiff);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<long>(boost::any_cast<long>(m["LastTimestamp"]));
    }
    if (m.find("RebalanceInfoList") != m.end() && !m["RebalanceInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RebalanceInfoList"].type()) {
        GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RebalanceInfoList"]));
        rebalanceInfoList = make_shared<GetConsumerProgressResponseBodyConsumerProgressRebalanceInfoList>(model1);
      }
    }
    if (m.find("TopicList") != m.end() && !m["TopicList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopicList"].type()) {
        GetConsumerProgressResponseBodyConsumerProgressTopicList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopicList"]));
        topicList = make_shared<GetConsumerProgressResponseBodyConsumerProgressTopicList>(model1);
      }
    }
    if (m.find("TotalDiff") != m.end() && !m["TotalDiff"].empty()) {
      totalDiff = make_shared<long>(boost::any_cast<long>(m["TotalDiff"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~GetConsumerProgressResponseBodyConsumerProgress() = default;
};
class GetConsumerProgressResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetConsumerProgressResponseBodyConsumerProgress> consumerProgress{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetConsumerProgressResponseBody() {}

  explicit GetConsumerProgressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (consumerProgress) {
      res["ConsumerProgress"] = consumerProgress ? boost::any(consumerProgress->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ConsumerProgress") != m.end() && !m["ConsumerProgress"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConsumerProgress"].type()) {
        GetConsumerProgressResponseBodyConsumerProgress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConsumerProgress"]));
        consumerProgress = make_shared<GetConsumerProgressResponseBodyConsumerProgress>(model1);
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


  virtual ~GetConsumerProgressResponseBody() = default;
};
class GetConsumerProgressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConsumerProgressResponseBody> body{};

  GetConsumerProgressResponse() {}

  explicit GetConsumerProgressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConsumerProgressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConsumerProgressResponseBody>(model1);
      }
    }
  }


  virtual ~GetConsumerProgressResponse() = default;
};
class GetInstanceListRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetInstanceListRequestTag() {}

  explicit GetInstanceListRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetInstanceListRequestTag() = default;
};
class GetInstanceListRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> series{};
  shared_ptr<vector<GetInstanceListRequestTag>> tag{};

  GetInstanceListRequest() {}

  explicit GetInstanceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (series) {
      res["Series"] = boost::any(*series);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      series = make_shared<string>(boost::any_cast<string>(m["Series"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<GetInstanceListRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceListRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<GetInstanceListRequestTag>>(expect1);
      }
    }
  }


  virtual ~GetInstanceListRequest() = default;
};
class GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig : public Darabonba::Model {
public:
  shared_ptr<long> connectCU{};
  shared_ptr<long> connectReplica{};
  shared_ptr<long> controlCenterCU{};
  shared_ptr<long> controlCenterReplica{};
  shared_ptr<long> controlCenterStorage{};
  shared_ptr<long> kafkaCU{};
  shared_ptr<long> kafkaReplica{};
  shared_ptr<long> kafkaRestProxyCU{};
  shared_ptr<long> kafkaRestProxyReplica{};
  shared_ptr<long> kafkaStorage{};
  shared_ptr<long> ksqlCU{};
  shared_ptr<long> ksqlReplica{};
  shared_ptr<long> ksqlStorage{};
  shared_ptr<long> schemaRegistryCU{};
  shared_ptr<long> schemaRegistryReplica{};
  shared_ptr<long> zooKeeperCU{};
  shared_ptr<long> zooKeeperReplica{};
  shared_ptr<long> zooKeeperStorage{};

  GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig() {}

  explicit GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectCU) {
      res["ConnectCU"] = boost::any(*connectCU);
    }
    if (connectReplica) {
      res["ConnectReplica"] = boost::any(*connectReplica);
    }
    if (controlCenterCU) {
      res["ControlCenterCU"] = boost::any(*controlCenterCU);
    }
    if (controlCenterReplica) {
      res["ControlCenterReplica"] = boost::any(*controlCenterReplica);
    }
    if (controlCenterStorage) {
      res["ControlCenterStorage"] = boost::any(*controlCenterStorage);
    }
    if (kafkaCU) {
      res["KafkaCU"] = boost::any(*kafkaCU);
    }
    if (kafkaReplica) {
      res["KafkaReplica"] = boost::any(*kafkaReplica);
    }
    if (kafkaRestProxyCU) {
      res["KafkaRestProxyCU"] = boost::any(*kafkaRestProxyCU);
    }
    if (kafkaRestProxyReplica) {
      res["KafkaRestProxyReplica"] = boost::any(*kafkaRestProxyReplica);
    }
    if (kafkaStorage) {
      res["KafkaStorage"] = boost::any(*kafkaStorage);
    }
    if (ksqlCU) {
      res["KsqlCU"] = boost::any(*ksqlCU);
    }
    if (ksqlReplica) {
      res["KsqlReplica"] = boost::any(*ksqlReplica);
    }
    if (ksqlStorage) {
      res["KsqlStorage"] = boost::any(*ksqlStorage);
    }
    if (schemaRegistryCU) {
      res["SchemaRegistryCU"] = boost::any(*schemaRegistryCU);
    }
    if (schemaRegistryReplica) {
      res["SchemaRegistryReplica"] = boost::any(*schemaRegistryReplica);
    }
    if (zooKeeperCU) {
      res["ZooKeeperCU"] = boost::any(*zooKeeperCU);
    }
    if (zooKeeperReplica) {
      res["ZooKeeperReplica"] = boost::any(*zooKeeperReplica);
    }
    if (zooKeeperStorage) {
      res["ZooKeeperStorage"] = boost::any(*zooKeeperStorage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectCU") != m.end() && !m["ConnectCU"].empty()) {
      connectCU = make_shared<long>(boost::any_cast<long>(m["ConnectCU"]));
    }
    if (m.find("ConnectReplica") != m.end() && !m["ConnectReplica"].empty()) {
      connectReplica = make_shared<long>(boost::any_cast<long>(m["ConnectReplica"]));
    }
    if (m.find("ControlCenterCU") != m.end() && !m["ControlCenterCU"].empty()) {
      controlCenterCU = make_shared<long>(boost::any_cast<long>(m["ControlCenterCU"]));
    }
    if (m.find("ControlCenterReplica") != m.end() && !m["ControlCenterReplica"].empty()) {
      controlCenterReplica = make_shared<long>(boost::any_cast<long>(m["ControlCenterReplica"]));
    }
    if (m.find("ControlCenterStorage") != m.end() && !m["ControlCenterStorage"].empty()) {
      controlCenterStorage = make_shared<long>(boost::any_cast<long>(m["ControlCenterStorage"]));
    }
    if (m.find("KafkaCU") != m.end() && !m["KafkaCU"].empty()) {
      kafkaCU = make_shared<long>(boost::any_cast<long>(m["KafkaCU"]));
    }
    if (m.find("KafkaReplica") != m.end() && !m["KafkaReplica"].empty()) {
      kafkaReplica = make_shared<long>(boost::any_cast<long>(m["KafkaReplica"]));
    }
    if (m.find("KafkaRestProxyCU") != m.end() && !m["KafkaRestProxyCU"].empty()) {
      kafkaRestProxyCU = make_shared<long>(boost::any_cast<long>(m["KafkaRestProxyCU"]));
    }
    if (m.find("KafkaRestProxyReplica") != m.end() && !m["KafkaRestProxyReplica"].empty()) {
      kafkaRestProxyReplica = make_shared<long>(boost::any_cast<long>(m["KafkaRestProxyReplica"]));
    }
    if (m.find("KafkaStorage") != m.end() && !m["KafkaStorage"].empty()) {
      kafkaStorage = make_shared<long>(boost::any_cast<long>(m["KafkaStorage"]));
    }
    if (m.find("KsqlCU") != m.end() && !m["KsqlCU"].empty()) {
      ksqlCU = make_shared<long>(boost::any_cast<long>(m["KsqlCU"]));
    }
    if (m.find("KsqlReplica") != m.end() && !m["KsqlReplica"].empty()) {
      ksqlReplica = make_shared<long>(boost::any_cast<long>(m["KsqlReplica"]));
    }
    if (m.find("KsqlStorage") != m.end() && !m["KsqlStorage"].empty()) {
      ksqlStorage = make_shared<long>(boost::any_cast<long>(m["KsqlStorage"]));
    }
    if (m.find("SchemaRegistryCU") != m.end() && !m["SchemaRegistryCU"].empty()) {
      schemaRegistryCU = make_shared<long>(boost::any_cast<long>(m["SchemaRegistryCU"]));
    }
    if (m.find("SchemaRegistryReplica") != m.end() && !m["SchemaRegistryReplica"].empty()) {
      schemaRegistryReplica = make_shared<long>(boost::any_cast<long>(m["SchemaRegistryReplica"]));
    }
    if (m.find("ZooKeeperCU") != m.end() && !m["ZooKeeperCU"].empty()) {
      zooKeeperCU = make_shared<long>(boost::any_cast<long>(m["ZooKeeperCU"]));
    }
    if (m.find("ZooKeeperReplica") != m.end() && !m["ZooKeeperReplica"].empty()) {
      zooKeeperReplica = make_shared<long>(boost::any_cast<long>(m["ZooKeeperReplica"]));
    }
    if (m.find("ZooKeeperStorage") != m.end() && !m["ZooKeeperStorage"].empty()) {
      zooKeeperStorage = make_shared<long>(boost::any_cast<long>(m["ZooKeeperStorage"]));
    }
  }


  virtual ~GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig() = default;
};
class GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO() {}

  explicit GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO() = default;
};
class GetInstanceListResponseBodyInstanceListInstanceVOTags : public Darabonba::Model {
public:
  shared_ptr<vector<GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO>> tagVO{};

  GetInstanceListResponseBodyInstanceListInstanceVOTags() {}

  explicit GetInstanceListResponseBodyInstanceListInstanceVOTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagVO) {
      vector<boost::any> temp1;
      for(auto item1:*tagVO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagVO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagVO") != m.end() && !m["TagVO"].empty()) {
      if (typeid(vector<boost::any>) == m["TagVO"].type()) {
        vector<GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagVO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagVO = make_shared<vector<GetInstanceListResponseBodyInstanceListInstanceVOTagsTagVO>>(expect1);
      }
    }
  }


  virtual ~GetInstanceListResponseBodyInstanceListInstanceVOTags() = default;
};
class GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo : public Darabonba::Model {
public:
  shared_ptr<string> current2OpenSourceVersion{};

  GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo() {}

  explicit GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current2OpenSourceVersion) {
      res["Current2OpenSourceVersion"] = boost::any(*current2OpenSourceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Current2OpenSourceVersion") != m.end() && !m["Current2OpenSourceVersion"].empty()) {
      current2OpenSourceVersion = make_shared<string>(boost::any_cast<string>(m["Current2OpenSourceVersion"]));
    }
  }


  virtual ~GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo() = default;
};
class GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> vSwitchIds{};

  GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds() {}

  explicit GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds() = default;
};
class GetInstanceListResponseBodyInstanceListInstanceVO : public Darabonba::Model {
public:
  shared_ptr<string> allConfig{};
  shared_ptr<bool> autoCreateGroupEnable{};
  shared_ptr<bool> autoCreateTopicEnable{};
  shared_ptr<string> backupZoneId{};
  shared_ptr<GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig> confluentConfig{};
  shared_ptr<long> createTime{};
  shared_ptr<long> defaultPartitionNum{};
  shared_ptr<long> deployType{};
  shared_ptr<long> diskSize{};
  shared_ptr<long> diskType{};
  shared_ptr<string> domainEndpoint{};
  shared_ptr<long> eipMax{};
  shared_ptr<string> endPoint{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ioMax{};
  shared_ptr<long> ioMaxRead{};
  shared_ptr<string> ioMaxSpec{};
  shared_ptr<long> ioMaxWrite{};
  shared_ptr<string> kmsKeyId{};
  shared_ptr<long> msgRetain{};
  shared_ptr<string> name{};
  shared_ptr<long> paidType{};
  shared_ptr<string> regionId{};
  shared_ptr<long> reservedPublishCapacity{};
  shared_ptr<long> reservedSubscribeCapacity{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> saslDomainEndpoint{};
  shared_ptr<string> saslEndPoint{};
  shared_ptr<string> securityGroup{};
  shared_ptr<string> series{};
  shared_ptr<long> serviceStatus{};
  shared_ptr<string> specType{};
  shared_ptr<string> sslDomainEndpoint{};
  shared_ptr<string> sslEndPoint{};
  shared_ptr<string> standardZoneId{};
  shared_ptr<GetInstanceListResponseBodyInstanceListInstanceVOTags> tags{};
  shared_ptr<long> topicNumLimit{};
  shared_ptr<GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo> upgradeServiceDetailInfo{};
  shared_ptr<long> usedGroupCount{};
  shared_ptr<long> usedPartitionCount{};
  shared_ptr<long> usedTopicCount{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds> vSwitchIds{};
  shared_ptr<long> viewInstanceStatusCode{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcSaslDomainEndpoint{};
  shared_ptr<string> vpcSaslEndPoint{};
  shared_ptr<string> zoneId{};

  GetInstanceListResponseBodyInstanceListInstanceVO() {}

  explicit GetInstanceListResponseBodyInstanceListInstanceVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allConfig) {
      res["AllConfig"] = boost::any(*allConfig);
    }
    if (autoCreateGroupEnable) {
      res["AutoCreateGroupEnable"] = boost::any(*autoCreateGroupEnable);
    }
    if (autoCreateTopicEnable) {
      res["AutoCreateTopicEnable"] = boost::any(*autoCreateTopicEnable);
    }
    if (backupZoneId) {
      res["BackupZoneId"] = boost::any(*backupZoneId);
    }
    if (confluentConfig) {
      res["ConfluentConfig"] = confluentConfig ? boost::any(confluentConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultPartitionNum) {
      res["DefaultPartitionNum"] = boost::any(*defaultPartitionNum);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (domainEndpoint) {
      res["DomainEndpoint"] = boost::any(*domainEndpoint);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (ioMaxRead) {
      res["IoMaxRead"] = boost::any(*ioMaxRead);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    if (ioMaxWrite) {
      res["IoMaxWrite"] = boost::any(*ioMaxWrite);
    }
    if (kmsKeyId) {
      res["KmsKeyId"] = boost::any(*kmsKeyId);
    }
    if (msgRetain) {
      res["MsgRetain"] = boost::any(*msgRetain);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (paidType) {
      res["PaidType"] = boost::any(*paidType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (reservedPublishCapacity) {
      res["ReservedPublishCapacity"] = boost::any(*reservedPublishCapacity);
    }
    if (reservedSubscribeCapacity) {
      res["ReservedSubscribeCapacity"] = boost::any(*reservedSubscribeCapacity);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (saslDomainEndpoint) {
      res["SaslDomainEndpoint"] = boost::any(*saslDomainEndpoint);
    }
    if (saslEndPoint) {
      res["SaslEndPoint"] = boost::any(*saslEndPoint);
    }
    if (securityGroup) {
      res["SecurityGroup"] = boost::any(*securityGroup);
    }
    if (series) {
      res["Series"] = boost::any(*series);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (sslDomainEndpoint) {
      res["SslDomainEndpoint"] = boost::any(*sslDomainEndpoint);
    }
    if (sslEndPoint) {
      res["SslEndPoint"] = boost::any(*sslEndPoint);
    }
    if (standardZoneId) {
      res["StandardZoneId"] = boost::any(*standardZoneId);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topicNumLimit) {
      res["TopicNumLimit"] = boost::any(*topicNumLimit);
    }
    if (upgradeServiceDetailInfo) {
      res["UpgradeServiceDetailInfo"] = upgradeServiceDetailInfo ? boost::any(upgradeServiceDetailInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usedGroupCount) {
      res["UsedGroupCount"] = boost::any(*usedGroupCount);
    }
    if (usedPartitionCount) {
      res["UsedPartitionCount"] = boost::any(*usedPartitionCount);
    }
    if (usedTopicCount) {
      res["UsedTopicCount"] = boost::any(*usedTopicCount);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = vSwitchIds ? boost::any(vSwitchIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (viewInstanceStatusCode) {
      res["ViewInstanceStatusCode"] = boost::any(*viewInstanceStatusCode);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcSaslDomainEndpoint) {
      res["VpcSaslDomainEndpoint"] = boost::any(*vpcSaslDomainEndpoint);
    }
    if (vpcSaslEndPoint) {
      res["VpcSaslEndPoint"] = boost::any(*vpcSaslEndPoint);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllConfig") != m.end() && !m["AllConfig"].empty()) {
      allConfig = make_shared<string>(boost::any_cast<string>(m["AllConfig"]));
    }
    if (m.find("AutoCreateGroupEnable") != m.end() && !m["AutoCreateGroupEnable"].empty()) {
      autoCreateGroupEnable = make_shared<bool>(boost::any_cast<bool>(m["AutoCreateGroupEnable"]));
    }
    if (m.find("AutoCreateTopicEnable") != m.end() && !m["AutoCreateTopicEnable"].empty()) {
      autoCreateTopicEnable = make_shared<bool>(boost::any_cast<bool>(m["AutoCreateTopicEnable"]));
    }
    if (m.find("BackupZoneId") != m.end() && !m["BackupZoneId"].empty()) {
      backupZoneId = make_shared<string>(boost::any_cast<string>(m["BackupZoneId"]));
    }
    if (m.find("ConfluentConfig") != m.end() && !m["ConfluentConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfluentConfig"].type()) {
        GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfluentConfig"]));
        confluentConfig = make_shared<GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig>(model1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DefaultPartitionNum") != m.end() && !m["DefaultPartitionNum"].empty()) {
      defaultPartitionNum = make_shared<long>(boost::any_cast<long>(m["DefaultPartitionNum"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<long>(boost::any_cast<long>(m["DeployType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<long>(boost::any_cast<long>(m["DiskType"]));
    }
    if (m.find("DomainEndpoint") != m.end() && !m["DomainEndpoint"].empty()) {
      domainEndpoint = make_shared<string>(boost::any_cast<string>(m["DomainEndpoint"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("IoMaxRead") != m.end() && !m["IoMaxRead"].empty()) {
      ioMaxRead = make_shared<long>(boost::any_cast<long>(m["IoMaxRead"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
    if (m.find("IoMaxWrite") != m.end() && !m["IoMaxWrite"].empty()) {
      ioMaxWrite = make_shared<long>(boost::any_cast<long>(m["IoMaxWrite"]));
    }
    if (m.find("KmsKeyId") != m.end() && !m["KmsKeyId"].empty()) {
      kmsKeyId = make_shared<string>(boost::any_cast<string>(m["KmsKeyId"]));
    }
    if (m.find("MsgRetain") != m.end() && !m["MsgRetain"].empty()) {
      msgRetain = make_shared<long>(boost::any_cast<long>(m["MsgRetain"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PaidType") != m.end() && !m["PaidType"].empty()) {
      paidType = make_shared<long>(boost::any_cast<long>(m["PaidType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ReservedPublishCapacity") != m.end() && !m["ReservedPublishCapacity"].empty()) {
      reservedPublishCapacity = make_shared<long>(boost::any_cast<long>(m["ReservedPublishCapacity"]));
    }
    if (m.find("ReservedSubscribeCapacity") != m.end() && !m["ReservedSubscribeCapacity"].empty()) {
      reservedSubscribeCapacity = make_shared<long>(boost::any_cast<long>(m["ReservedSubscribeCapacity"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SaslDomainEndpoint") != m.end() && !m["SaslDomainEndpoint"].empty()) {
      saslDomainEndpoint = make_shared<string>(boost::any_cast<string>(m["SaslDomainEndpoint"]));
    }
    if (m.find("SaslEndPoint") != m.end() && !m["SaslEndPoint"].empty()) {
      saslEndPoint = make_shared<string>(boost::any_cast<string>(m["SaslEndPoint"]));
    }
    if (m.find("SecurityGroup") != m.end() && !m["SecurityGroup"].empty()) {
      securityGroup = make_shared<string>(boost::any_cast<string>(m["SecurityGroup"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      series = make_shared<string>(boost::any_cast<string>(m["Series"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<long>(boost::any_cast<long>(m["ServiceStatus"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("SslDomainEndpoint") != m.end() && !m["SslDomainEndpoint"].empty()) {
      sslDomainEndpoint = make_shared<string>(boost::any_cast<string>(m["SslDomainEndpoint"]));
    }
    if (m.find("SslEndPoint") != m.end() && !m["SslEndPoint"].empty()) {
      sslEndPoint = make_shared<string>(boost::any_cast<string>(m["SslEndPoint"]));
    }
    if (m.find("StandardZoneId") != m.end() && !m["StandardZoneId"].empty()) {
      standardZoneId = make_shared<string>(boost::any_cast<string>(m["StandardZoneId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        GetInstanceListResponseBodyInstanceListInstanceVOTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<GetInstanceListResponseBodyInstanceListInstanceVOTags>(model1);
      }
    }
    if (m.find("TopicNumLimit") != m.end() && !m["TopicNumLimit"].empty()) {
      topicNumLimit = make_shared<long>(boost::any_cast<long>(m["TopicNumLimit"]));
    }
    if (m.find("UpgradeServiceDetailInfo") != m.end() && !m["UpgradeServiceDetailInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UpgradeServiceDetailInfo"].type()) {
        GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UpgradeServiceDetailInfo"]));
        upgradeServiceDetailInfo = make_shared<GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo>(model1);
      }
    }
    if (m.find("UsedGroupCount") != m.end() && !m["UsedGroupCount"].empty()) {
      usedGroupCount = make_shared<long>(boost::any_cast<long>(m["UsedGroupCount"]));
    }
    if (m.find("UsedPartitionCount") != m.end() && !m["UsedPartitionCount"].empty()) {
      usedPartitionCount = make_shared<long>(boost::any_cast<long>(m["UsedPartitionCount"]));
    }
    if (m.find("UsedTopicCount") != m.end() && !m["UsedTopicCount"].empty()) {
      usedTopicCount = make_shared<long>(boost::any_cast<long>(m["UsedTopicCount"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["VSwitchIds"].type()) {
        GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VSwitchIds"]));
        vSwitchIds = make_shared<GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds>(model1);
      }
    }
    if (m.find("ViewInstanceStatusCode") != m.end() && !m["ViewInstanceStatusCode"].empty()) {
      viewInstanceStatusCode = make_shared<long>(boost::any_cast<long>(m["ViewInstanceStatusCode"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcSaslDomainEndpoint") != m.end() && !m["VpcSaslDomainEndpoint"].empty()) {
      vpcSaslDomainEndpoint = make_shared<string>(boost::any_cast<string>(m["VpcSaslDomainEndpoint"]));
    }
    if (m.find("VpcSaslEndPoint") != m.end() && !m["VpcSaslEndPoint"].empty()) {
      vpcSaslEndPoint = make_shared<string>(boost::any_cast<string>(m["VpcSaslEndPoint"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetInstanceListResponseBodyInstanceListInstanceVO() = default;
};
class GetInstanceListResponseBodyInstanceList : public Darabonba::Model {
public:
  shared_ptr<vector<GetInstanceListResponseBodyInstanceListInstanceVO>> instanceVO{};

  GetInstanceListResponseBodyInstanceList() {}

  explicit GetInstanceListResponseBodyInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceVO) {
      vector<boost::any> temp1;
      for(auto item1:*instanceVO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceVO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceVO") != m.end() && !m["InstanceVO"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceVO"].type()) {
        vector<GetInstanceListResponseBodyInstanceListInstanceVO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceVO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceListResponseBodyInstanceListInstanceVO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceVO = make_shared<vector<GetInstanceListResponseBodyInstanceListInstanceVO>>(expect1);
      }
    }
  }


  virtual ~GetInstanceListResponseBodyInstanceList() = default;
};
class GetInstanceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetInstanceListResponseBodyInstanceList> instanceList{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInstanceListResponseBody() {}

  explicit GetInstanceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instanceList) {
      res["InstanceList"] = instanceList ? boost::any(instanceList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceList"].type()) {
        GetInstanceListResponseBodyInstanceList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceList"]));
        instanceList = make_shared<GetInstanceListResponseBodyInstanceList>(model1);
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


  virtual ~GetInstanceListResponseBody() = default;
};
class GetInstanceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceListResponseBody> body{};

  GetInstanceListResponse() {}

  explicit GetInstanceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceListResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceListResponse() = default;
};
class GetKafkaClientIpRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> group{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> topic{};
  shared_ptr<string> type{};

  GetKafkaClientIpRequest() {}

  explicit GetKafkaClientIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetKafkaClientIpRequest() = default;
};
class GetKafkaClientIpResponseBodyDataDataDataDataData : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<long> num{};

  GetKafkaClientIpResponseBodyDataDataDataDataData() {}

  explicit GetKafkaClientIpResponseBodyDataDataDataDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
  }


  virtual ~GetKafkaClientIpResponseBodyDataDataDataDataData() = default;
};
class GetKafkaClientIpResponseBodyDataDataDataData : public Darabonba::Model {
public:
  shared_ptr<vector<GetKafkaClientIpResponseBodyDataDataDataDataData>> data{};

  GetKafkaClientIpResponseBodyDataDataDataData() {}

  explicit GetKafkaClientIpResponseBodyDataDataDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetKafkaClientIpResponseBodyDataDataDataDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetKafkaClientIpResponseBodyDataDataDataDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetKafkaClientIpResponseBodyDataDataDataDataData>>(expect1);
      }
    }
  }


  virtual ~GetKafkaClientIpResponseBodyDataDataDataData() = default;
};
class GetKafkaClientIpResponseBodyDataDataData : public Darabonba::Model {
public:
  shared_ptr<GetKafkaClientIpResponseBodyDataDataDataData> data{};
  shared_ptr<string> name{};

  GetKafkaClientIpResponseBodyDataDataData() {}

  explicit GetKafkaClientIpResponseBodyDataDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetKafkaClientIpResponseBodyDataDataDataData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetKafkaClientIpResponseBodyDataDataDataData>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetKafkaClientIpResponseBodyDataDataData() = default;
};
class GetKafkaClientIpResponseBodyDataData : public Darabonba::Model {
public:
  shared_ptr<vector<GetKafkaClientIpResponseBodyDataDataData>> data{};

  GetKafkaClientIpResponseBodyDataData() {}

  explicit GetKafkaClientIpResponseBodyDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetKafkaClientIpResponseBodyDataDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetKafkaClientIpResponseBodyDataDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetKafkaClientIpResponseBodyDataDataData>>(expect1);
      }
    }
  }


  virtual ~GetKafkaClientIpResponseBodyDataData() = default;
};
class GetKafkaClientIpResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> alert{};
  shared_ptr<GetKafkaClientIpResponseBodyDataData> data{};
  shared_ptr<long> endDate{};
  shared_ptr<long> searchTimeRange{};
  shared_ptr<long> startDate{};
  shared_ptr<long> timeLimitDay{};

  GetKafkaClientIpResponseBodyData() {}

  explicit GetKafkaClientIpResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alert) {
      res["Alert"] = boost::any(*alert);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (searchTimeRange) {
      res["SearchTimeRange"] = boost::any(*searchTimeRange);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (timeLimitDay) {
      res["TimeLimitDay"] = boost::any(*timeLimitDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alert") != m.end() && !m["Alert"].empty()) {
      alert = make_shared<bool>(boost::any_cast<bool>(m["Alert"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetKafkaClientIpResponseBodyDataData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetKafkaClientIpResponseBodyDataData>(model1);
      }
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("SearchTimeRange") != m.end() && !m["SearchTimeRange"].empty()) {
      searchTimeRange = make_shared<long>(boost::any_cast<long>(m["SearchTimeRange"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("TimeLimitDay") != m.end() && !m["TimeLimitDay"].empty()) {
      timeLimitDay = make_shared<long>(boost::any_cast<long>(m["TimeLimitDay"]));
    }
  }


  virtual ~GetKafkaClientIpResponseBodyData() = default;
};
class GetKafkaClientIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<GetKafkaClientIpResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetKafkaClientIpResponseBody() {}

  explicit GetKafkaClientIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetKafkaClientIpResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetKafkaClientIpResponseBodyData>(model1);
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


  virtual ~GetKafkaClientIpResponseBody() = default;
};
class GetKafkaClientIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetKafkaClientIpResponseBody> body{};

  GetKafkaClientIpResponse() {}

  explicit GetKafkaClientIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetKafkaClientIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetKafkaClientIpResponseBody>(model1);
      }
    }
  }


  virtual ~GetKafkaClientIpResponse() = default;
};
class GetQuotaTipRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  GetQuotaTipRequest() {}

  explicit GetQuotaTipRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetQuotaTipRequest() = default;
};
class GetQuotaTipResponseBodyQuotaData : public Darabonba::Model {
public:
  shared_ptr<long> groupLeft{};
  shared_ptr<long> groupUsed{};
  shared_ptr<long> isPartitionBuy{};
  shared_ptr<long> partitionLeft{};
  shared_ptr<long> partitionNumOfBuy{};
  shared_ptr<long> partitionQuota{};
  shared_ptr<long> partitionUsed{};
  shared_ptr<long> topicLeft{};
  shared_ptr<long> topicNumOfBuy{};
  shared_ptr<long> topicQuota{};
  shared_ptr<long> topicUsed{};

  GetQuotaTipResponseBodyQuotaData() {}

  explicit GetQuotaTipResponseBodyQuotaData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupLeft) {
      res["GroupLeft"] = boost::any(*groupLeft);
    }
    if (groupUsed) {
      res["GroupUsed"] = boost::any(*groupUsed);
    }
    if (isPartitionBuy) {
      res["IsPartitionBuy"] = boost::any(*isPartitionBuy);
    }
    if (partitionLeft) {
      res["PartitionLeft"] = boost::any(*partitionLeft);
    }
    if (partitionNumOfBuy) {
      res["PartitionNumOfBuy"] = boost::any(*partitionNumOfBuy);
    }
    if (partitionQuota) {
      res["PartitionQuota"] = boost::any(*partitionQuota);
    }
    if (partitionUsed) {
      res["PartitionUsed"] = boost::any(*partitionUsed);
    }
    if (topicLeft) {
      res["TopicLeft"] = boost::any(*topicLeft);
    }
    if (topicNumOfBuy) {
      res["TopicNumOfBuy"] = boost::any(*topicNumOfBuy);
    }
    if (topicQuota) {
      res["TopicQuota"] = boost::any(*topicQuota);
    }
    if (topicUsed) {
      res["TopicUsed"] = boost::any(*topicUsed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupLeft") != m.end() && !m["GroupLeft"].empty()) {
      groupLeft = make_shared<long>(boost::any_cast<long>(m["GroupLeft"]));
    }
    if (m.find("GroupUsed") != m.end() && !m["GroupUsed"].empty()) {
      groupUsed = make_shared<long>(boost::any_cast<long>(m["GroupUsed"]));
    }
    if (m.find("IsPartitionBuy") != m.end() && !m["IsPartitionBuy"].empty()) {
      isPartitionBuy = make_shared<long>(boost::any_cast<long>(m["IsPartitionBuy"]));
    }
    if (m.find("PartitionLeft") != m.end() && !m["PartitionLeft"].empty()) {
      partitionLeft = make_shared<long>(boost::any_cast<long>(m["PartitionLeft"]));
    }
    if (m.find("PartitionNumOfBuy") != m.end() && !m["PartitionNumOfBuy"].empty()) {
      partitionNumOfBuy = make_shared<long>(boost::any_cast<long>(m["PartitionNumOfBuy"]));
    }
    if (m.find("PartitionQuota") != m.end() && !m["PartitionQuota"].empty()) {
      partitionQuota = make_shared<long>(boost::any_cast<long>(m["PartitionQuota"]));
    }
    if (m.find("PartitionUsed") != m.end() && !m["PartitionUsed"].empty()) {
      partitionUsed = make_shared<long>(boost::any_cast<long>(m["PartitionUsed"]));
    }
    if (m.find("TopicLeft") != m.end() && !m["TopicLeft"].empty()) {
      topicLeft = make_shared<long>(boost::any_cast<long>(m["TopicLeft"]));
    }
    if (m.find("TopicNumOfBuy") != m.end() && !m["TopicNumOfBuy"].empty()) {
      topicNumOfBuy = make_shared<long>(boost::any_cast<long>(m["TopicNumOfBuy"]));
    }
    if (m.find("TopicQuota") != m.end() && !m["TopicQuota"].empty()) {
      topicQuota = make_shared<long>(boost::any_cast<long>(m["TopicQuota"]));
    }
    if (m.find("TopicUsed") != m.end() && !m["TopicUsed"].empty()) {
      topicUsed = make_shared<long>(boost::any_cast<long>(m["TopicUsed"]));
    }
  }


  virtual ~GetQuotaTipResponseBodyQuotaData() = default;
};
class GetQuotaTipResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<GetQuotaTipResponseBodyQuotaData> quotaData{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetQuotaTipResponseBody() {}

  explicit GetQuotaTipResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (quotaData) {
      res["QuotaData"] = quotaData ? boost::any(quotaData->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("QuotaData") != m.end() && !m["QuotaData"].empty()) {
      if (typeid(map<string, boost::any>) == m["QuotaData"].type()) {
        GetQuotaTipResponseBodyQuotaData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QuotaData"]));
        quotaData = make_shared<GetQuotaTipResponseBodyQuotaData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetQuotaTipResponseBody() = default;
};
class GetQuotaTipResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuotaTipResponseBody> body{};

  GetQuotaTipResponse() {}

  explicit GetQuotaTipResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetQuotaTipResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuotaTipResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuotaTipResponse() = default;
};
class GetTopicListRequest : public Darabonba::Model {
public:
  shared_ptr<string> currentPage{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topic{};

  GetTopicListRequest() {}

  explicit GetTopicListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~GetTopicListRequest() = default;
};
class GetTopicListResponseBodyTopicListTopicVOTagsTagVO : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetTopicListResponseBodyTopicListTopicVOTagsTagVO() {}

  explicit GetTopicListResponseBodyTopicListTopicVOTagsTagVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetTopicListResponseBodyTopicListTopicVOTagsTagVO() = default;
};
class GetTopicListResponseBodyTopicListTopicVOTags : public Darabonba::Model {
public:
  shared_ptr<vector<GetTopicListResponseBodyTopicListTopicVOTagsTagVO>> tagVO{};

  GetTopicListResponseBodyTopicListTopicVOTags() {}

  explicit GetTopicListResponseBodyTopicListTopicVOTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagVO) {
      vector<boost::any> temp1;
      for(auto item1:*tagVO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagVO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagVO") != m.end() && !m["TagVO"].empty()) {
      if (typeid(vector<boost::any>) == m["TagVO"].type()) {
        vector<GetTopicListResponseBodyTopicListTopicVOTagsTagVO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagVO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTopicListResponseBodyTopicListTopicVOTagsTagVO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagVO = make_shared<vector<GetTopicListResponseBodyTopicListTopicVOTagsTagVO>>(expect1);
      }
    }
  }


  virtual ~GetTopicListResponseBodyTopicListTopicVOTags() = default;
};
class GetTopicListResponseBodyTopicListTopicVO : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreate{};
  shared_ptr<bool> compactTopic{};
  shared_ptr<long> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> localTopic{};
  shared_ptr<long> partitionNum{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<long> status{};
  shared_ptr<string> statusName{};
  shared_ptr<GetTopicListResponseBodyTopicListTopicVOTags> tags{};
  shared_ptr<string> topic{};
  shared_ptr<string> topicConfig{};

  GetTopicListResponseBodyTopicListTopicVO() {}

  explicit GetTopicListResponseBodyTopicListTopicVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreate) {
      res["AutoCreate"] = boost::any(*autoCreate);
    }
    if (compactTopic) {
      res["CompactTopic"] = boost::any(*compactTopic);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (localTopic) {
      res["LocalTopic"] = boost::any(*localTopic);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusName) {
      res["StatusName"] = boost::any(*statusName);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (topicConfig) {
      res["TopicConfig"] = boost::any(*topicConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreate") != m.end() && !m["AutoCreate"].empty()) {
      autoCreate = make_shared<bool>(boost::any_cast<bool>(m["AutoCreate"]));
    }
    if (m.find("CompactTopic") != m.end() && !m["CompactTopic"].empty()) {
      compactTopic = make_shared<bool>(boost::any_cast<bool>(m["CompactTopic"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LocalTopic") != m.end() && !m["LocalTopic"].empty()) {
      localTopic = make_shared<bool>(boost::any_cast<bool>(m["LocalTopic"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["PartitionNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StatusName") != m.end() && !m["StatusName"].empty()) {
      statusName = make_shared<string>(boost::any_cast<string>(m["StatusName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        GetTopicListResponseBodyTopicListTopicVOTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<GetTopicListResponseBodyTopicListTopicVOTags>(model1);
      }
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("TopicConfig") != m.end() && !m["TopicConfig"].empty()) {
      topicConfig = make_shared<string>(boost::any_cast<string>(m["TopicConfig"]));
    }
  }


  virtual ~GetTopicListResponseBodyTopicListTopicVO() = default;
};
class GetTopicListResponseBodyTopicList : public Darabonba::Model {
public:
  shared_ptr<vector<GetTopicListResponseBodyTopicListTopicVO>> topicVO{};

  GetTopicListResponseBodyTopicList() {}

  explicit GetTopicListResponseBodyTopicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topicVO) {
      vector<boost::any> temp1;
      for(auto item1:*topicVO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TopicVO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TopicVO") != m.end() && !m["TopicVO"].empty()) {
      if (typeid(vector<boost::any>) == m["TopicVO"].type()) {
        vector<GetTopicListResponseBodyTopicListTopicVO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TopicVO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTopicListResponseBodyTopicListTopicVO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topicVO = make_shared<vector<GetTopicListResponseBodyTopicListTopicVO>>(expect1);
      }
    }
  }


  virtual ~GetTopicListResponseBodyTopicList() = default;
};
class GetTopicListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetTopicListResponseBodyTopicList> topicList{};
  shared_ptr<long> total{};

  GetTopicListResponseBody() {}

  explicit GetTopicListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (topicList) {
      res["TopicList"] = topicList ? boost::any(topicList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TopicList") != m.end() && !m["TopicList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopicList"].type()) {
        GetTopicListResponseBodyTopicList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopicList"]));
        topicList = make_shared<GetTopicListResponseBodyTopicList>(model1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetTopicListResponseBody() = default;
};
class GetTopicListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTopicListResponseBody> body{};

  GetTopicListResponse() {}

  explicit GetTopicListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTopicListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTopicListResponseBody>(model1);
      }
    }
  }


  virtual ~GetTopicListResponse() = default;
};
class GetTopicStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topic{};

  GetTopicStatusRequest() {}

  explicit GetTopicStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~GetTopicStatusRequest() = default;
};
class GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable : public Darabonba::Model {
public:
  shared_ptr<long> lastUpdateTimestamp{};
  shared_ptr<long> maxOffset{};
  shared_ptr<long> minOffset{};
  shared_ptr<long> partition{};
  shared_ptr<string> topic{};

  GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable() {}

  explicit GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastUpdateTimestamp) {
      res["LastUpdateTimestamp"] = boost::any(*lastUpdateTimestamp);
    }
    if (maxOffset) {
      res["MaxOffset"] = boost::any(*maxOffset);
    }
    if (minOffset) {
      res["MinOffset"] = boost::any(*minOffset);
    }
    if (partition) {
      res["Partition"] = boost::any(*partition);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastUpdateTimestamp") != m.end() && !m["LastUpdateTimestamp"].empty()) {
      lastUpdateTimestamp = make_shared<long>(boost::any_cast<long>(m["LastUpdateTimestamp"]));
    }
    if (m.find("MaxOffset") != m.end() && !m["MaxOffset"].empty()) {
      maxOffset = make_shared<long>(boost::any_cast<long>(m["MaxOffset"]));
    }
    if (m.find("MinOffset") != m.end() && !m["MinOffset"].empty()) {
      minOffset = make_shared<long>(boost::any_cast<long>(m["MinOffset"]));
    }
    if (m.find("Partition") != m.end() && !m["Partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["Partition"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable() = default;
};
class GetTopicStatusResponseBodyTopicStatusOffsetTable : public Darabonba::Model {
public:
  shared_ptr<vector<GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable>> offsetTable{};

  GetTopicStatusResponseBodyTopicStatusOffsetTable() {}

  explicit GetTopicStatusResponseBodyTopicStatusOffsetTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offsetTable) {
      vector<boost::any> temp1;
      for(auto item1:*offsetTable){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OffsetTable"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OffsetTable") != m.end() && !m["OffsetTable"].empty()) {
      if (typeid(vector<boost::any>) == m["OffsetTable"].type()) {
        vector<GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OffsetTable"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        offsetTable = make_shared<vector<GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable>>(expect1);
      }
    }
  }


  virtual ~GetTopicStatusResponseBodyTopicStatusOffsetTable() = default;
};
class GetTopicStatusResponseBodyTopicStatus : public Darabonba::Model {
public:
  shared_ptr<long> lastTimeStamp{};
  shared_ptr<GetTopicStatusResponseBodyTopicStatusOffsetTable> offsetTable{};
  shared_ptr<long> totalCount{};

  GetTopicStatusResponseBodyTopicStatus() {}

  explicit GetTopicStatusResponseBodyTopicStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastTimeStamp) {
      res["LastTimeStamp"] = boost::any(*lastTimeStamp);
    }
    if (offsetTable) {
      res["OffsetTable"] = offsetTable ? boost::any(offsetTable->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastTimeStamp") != m.end() && !m["LastTimeStamp"].empty()) {
      lastTimeStamp = make_shared<long>(boost::any_cast<long>(m["LastTimeStamp"]));
    }
    if (m.find("OffsetTable") != m.end() && !m["OffsetTable"].empty()) {
      if (typeid(map<string, boost::any>) == m["OffsetTable"].type()) {
        GetTopicStatusResponseBodyTopicStatusOffsetTable model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OffsetTable"]));
        offsetTable = make_shared<GetTopicStatusResponseBodyTopicStatusOffsetTable>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetTopicStatusResponseBodyTopicStatus() = default;
};
class GetTopicStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetTopicStatusResponseBodyTopicStatus> topicStatus{};

  GetTopicStatusResponseBody() {}

  explicit GetTopicStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (topicStatus) {
      res["TopicStatus"] = topicStatus ? boost::any(topicStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("TopicStatus") != m.end() && !m["TopicStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopicStatus"].type()) {
        GetTopicStatusResponseBodyTopicStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopicStatus"]));
        topicStatus = make_shared<GetTopicStatusResponseBodyTopicStatus>(model1);
      }
    }
  }


  virtual ~GetTopicStatusResponseBody() = default;
};
class GetTopicStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTopicStatusResponseBody> body{};

  GetTopicStatusResponse() {}

  explicit GetTopicStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTopicStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTopicStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetTopicStatusResponse() = default;
};
class GetTopicSubscribeStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topic{};

  GetTopicSubscribeStatusRequest() {}

  explicit GetTopicSubscribeStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~GetTopicSubscribeStatusRequest() = default;
};
class GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus : public Darabonba::Model {
public:
  shared_ptr<vector<string>> consumerGroups{};
  shared_ptr<string> topic{};

  GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus() {}

  explicit GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerGroups) {
      res["ConsumerGroups"] = boost::any(*consumerGroups);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerGroups") != m.end() && !m["ConsumerGroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ConsumerGroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ConsumerGroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      consumerGroups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus() = default;
};
class GetTopicSubscribeStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus> topicSubscribeStatus{};

  GetTopicSubscribeStatusResponseBody() {}

  explicit GetTopicSubscribeStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (topicSubscribeStatus) {
      res["TopicSubscribeStatus"] = topicSubscribeStatus ? boost::any(topicSubscribeStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
    if (m.find("TopicSubscribeStatus") != m.end() && !m["TopicSubscribeStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopicSubscribeStatus"].type()) {
        GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopicSubscribeStatus"]));
        topicSubscribeStatus = make_shared<GetTopicSubscribeStatusResponseBodyTopicSubscribeStatus>(model1);
      }
    }
  }


  virtual ~GetTopicSubscribeStatusResponseBody() = default;
};
class GetTopicSubscribeStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTopicSubscribeStatusResponseBody> body{};

  GetTopicSubscribeStatusResponse() {}

  explicit GetTopicSubscribeStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTopicSubscribeStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTopicSubscribeStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetTopicSubscribeStatusResponse() = default;
};
class ListRebalanceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> consumerId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  ListRebalanceInfoRequest() {}

  explicit ListRebalanceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerId) {
      res["ConsumerId"] = boost::any(*consumerId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerId") != m.end() && !m["ConsumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["ConsumerId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListRebalanceInfoRequest() = default;
};
class ListRebalanceInfoResponseBodyDataRebalanceInfoList : public Darabonba::Model {
public:
  shared_ptr<long> generation{};
  shared_ptr<string> groupId{};
  shared_ptr<long> lastRebalanceTimestamp{};
  shared_ptr<string> reason{};
  shared_ptr<bool> rebalanceSuccess{};
  shared_ptr<long> rebalanceTimeConsuming{};

  ListRebalanceInfoResponseBodyDataRebalanceInfoList() {}

  explicit ListRebalanceInfoResponseBodyDataRebalanceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generation) {
      res["Generation"] = boost::any(*generation);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (lastRebalanceTimestamp) {
      res["LastRebalanceTimestamp"] = boost::any(*lastRebalanceTimestamp);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (rebalanceSuccess) {
      res["RebalanceSuccess"] = boost::any(*rebalanceSuccess);
    }
    if (rebalanceTimeConsuming) {
      res["RebalanceTimeConsuming"] = boost::any(*rebalanceTimeConsuming);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Generation") != m.end() && !m["Generation"].empty()) {
      generation = make_shared<long>(boost::any_cast<long>(m["Generation"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("LastRebalanceTimestamp") != m.end() && !m["LastRebalanceTimestamp"].empty()) {
      lastRebalanceTimestamp = make_shared<long>(boost::any_cast<long>(m["LastRebalanceTimestamp"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RebalanceSuccess") != m.end() && !m["RebalanceSuccess"].empty()) {
      rebalanceSuccess = make_shared<bool>(boost::any_cast<bool>(m["RebalanceSuccess"]));
    }
    if (m.find("RebalanceTimeConsuming") != m.end() && !m["RebalanceTimeConsuming"].empty()) {
      rebalanceTimeConsuming = make_shared<long>(boost::any_cast<long>(m["RebalanceTimeConsuming"]));
    }
  }


  virtual ~ListRebalanceInfoResponseBodyDataRebalanceInfoList() = default;
};
class ListRebalanceInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListRebalanceInfoResponseBodyDataRebalanceInfoList>> rebalanceInfoList{};

  ListRebalanceInfoResponseBodyData() {}

  explicit ListRebalanceInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rebalanceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*rebalanceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RebalanceInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RebalanceInfoList") != m.end() && !m["RebalanceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["RebalanceInfoList"].type()) {
        vector<ListRebalanceInfoResponseBodyDataRebalanceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RebalanceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRebalanceInfoResponseBodyDataRebalanceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rebalanceInfoList = make_shared<vector<ListRebalanceInfoResponseBodyDataRebalanceInfoList>>(expect1);
      }
    }
  }


  virtual ~ListRebalanceInfoResponseBodyData() = default;
};
class ListRebalanceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<ListRebalanceInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListRebalanceInfoResponseBody() {}

  explicit ListRebalanceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRebalanceInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListRebalanceInfoResponseBodyData>(model1);
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


  virtual ~ListRebalanceInfoResponseBody() = default;
};
class ListRebalanceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRebalanceInfoResponseBody> body{};

  ListRebalanceInfoResponse() {}

  explicit ListRebalanceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRebalanceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRebalanceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ListRebalanceInfoResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResourcesTagResource() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagResourcesResponseBodyTagResourcesTagResource>> tagResource{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagResource) {
      vector<boost::any> temp1;
      for(auto item1:*tagResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagResource") != m.end() && !m["TagResource"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResource"].type()) {
        vector<ListTagResourcesResponseBodyTagResourcesTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResourcesTagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResource = make_shared<vector<ListTagResourcesResponseBodyTagResourcesTagResource>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagResources"].type()) {
        ListTagResourcesResponseBodyTagResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagResources"]));
        tagResources = make_shared<ListTagResourcesResponseBodyTagResources>(model1);
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ModifyInstanceNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> regionId{};

  ModifyInstanceNameRequest() {}

  explicit ModifyInstanceNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyInstanceNameRequest() = default;
};
class ModifyInstanceNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyInstanceNameResponseBody() {}

  explicit ModifyInstanceNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~ModifyInstanceNameResponseBody() = default;
};
class ModifyInstanceNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyInstanceNameResponseBody> body{};

  ModifyInstanceNameResponse() {}

  explicit ModifyInstanceNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceNameResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceNameResponse() = default;
};
class ModifyPartitionNumRequest : public Darabonba::Model {
public:
  shared_ptr<long> addPartitionNum{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topic{};

  ModifyPartitionNumRequest() {}

  explicit ModifyPartitionNumRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addPartitionNum) {
      res["AddPartitionNum"] = boost::any(*addPartitionNum);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddPartitionNum") != m.end() && !m["AddPartitionNum"].empty()) {
      addPartitionNum = make_shared<long>(boost::any_cast<long>(m["AddPartitionNum"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~ModifyPartitionNumRequest() = default;
};
class ModifyPartitionNumResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyPartitionNumResponseBody() {}

  explicit ModifyPartitionNumResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~ModifyPartitionNumResponseBody() = default;
};
class ModifyPartitionNumResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyPartitionNumResponseBody> body{};

  ModifyPartitionNumResponse() {}

  explicit ModifyPartitionNumResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPartitionNumResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPartitionNumResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPartitionNumResponse() = default;
};
class ModifyScheduledScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ruleName{};

  ModifyScheduledScalingRuleRequest() {}

  explicit ModifyScheduledScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
  }


  virtual ~ModifyScheduledScalingRuleRequest() = default;
};
class ModifyScheduledScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyScheduledScalingRuleResponseBody() {}

  explicit ModifyScheduledScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~ModifyScheduledScalingRuleResponseBody() = default;
};
class ModifyScheduledScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyScheduledScalingRuleResponseBody> body{};

  ModifyScheduledScalingRuleResponse() {}

  explicit ModifyScheduledScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyScheduledScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyScheduledScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyScheduledScalingRuleResponse() = default;
};
class ModifyTopicRemarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<string> topic{};

  ModifyTopicRemarkRequest() {}

  explicit ModifyTopicRemarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~ModifyTopicRemarkRequest() = default;
};
class ModifyTopicRemarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyTopicRemarkResponseBody() {}

  explicit ModifyTopicRemarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~ModifyTopicRemarkResponseBody() = default;
};
class ModifyTopicRemarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyTopicRemarkResponseBody> body{};

  ModifyTopicRemarkResponse() {}

  explicit ModifyTopicRemarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyTopicRemarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyTopicRemarkResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyTopicRemarkResponse() = default;
};
class QueryMessageRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> offset{};
  shared_ptr<string> partition{};
  shared_ptr<string> queryType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topic{};

  QueryMessageRequest() {}

  explicit QueryMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (partition) {
      res["Partition"] = boost::any(*partition);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<string>(boost::any_cast<string>(m["Offset"]));
    }
    if (m.find("Partition") != m.end() && !m["Partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["Partition"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~QueryMessageRequest() = default;
};
class QueryMessageResponseBodyMessageList : public Darabonba::Model {
public:
  shared_ptr<long> checksum{};
  shared_ptr<string> key{};
  shared_ptr<bool> keyTruncated{};
  shared_ptr<long> offset{};
  shared_ptr<long> partition{};
  shared_ptr<long> serializedKeySize{};
  shared_ptr<long> serializedValueSize{};
  shared_ptr<long> timestamp{};
  shared_ptr<string> timestampType{};
  shared_ptr<string> topic{};
  shared_ptr<long> truncatedKeySize{};
  shared_ptr<long> truncatedValueSize{};
  shared_ptr<string> value{};
  shared_ptr<bool> valueTruncated{};

  QueryMessageResponseBodyMessageList() {}

  explicit QueryMessageResponseBodyMessageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checksum) {
      res["Checksum"] = boost::any(*checksum);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (keyTruncated) {
      res["KeyTruncated"] = boost::any(*keyTruncated);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (partition) {
      res["Partition"] = boost::any(*partition);
    }
    if (serializedKeySize) {
      res["SerializedKeySize"] = boost::any(*serializedKeySize);
    }
    if (serializedValueSize) {
      res["SerializedValueSize"] = boost::any(*serializedValueSize);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (timestampType) {
      res["TimestampType"] = boost::any(*timestampType);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (truncatedKeySize) {
      res["TruncatedKeySize"] = boost::any(*truncatedKeySize);
    }
    if (truncatedValueSize) {
      res["TruncatedValueSize"] = boost::any(*truncatedValueSize);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (valueTruncated) {
      res["ValueTruncated"] = boost::any(*valueTruncated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Checksum") != m.end() && !m["Checksum"].empty()) {
      checksum = make_shared<long>(boost::any_cast<long>(m["Checksum"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("KeyTruncated") != m.end() && !m["KeyTruncated"].empty()) {
      keyTruncated = make_shared<bool>(boost::any_cast<bool>(m["KeyTruncated"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("Partition") != m.end() && !m["Partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["Partition"]));
    }
    if (m.find("SerializedKeySize") != m.end() && !m["SerializedKeySize"].empty()) {
      serializedKeySize = make_shared<long>(boost::any_cast<long>(m["SerializedKeySize"]));
    }
    if (m.find("SerializedValueSize") != m.end() && !m["SerializedValueSize"].empty()) {
      serializedValueSize = make_shared<long>(boost::any_cast<long>(m["SerializedValueSize"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
    if (m.find("TimestampType") != m.end() && !m["TimestampType"].empty()) {
      timestampType = make_shared<string>(boost::any_cast<string>(m["TimestampType"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("TruncatedKeySize") != m.end() && !m["TruncatedKeySize"].empty()) {
      truncatedKeySize = make_shared<long>(boost::any_cast<long>(m["TruncatedKeySize"]));
    }
    if (m.find("TruncatedValueSize") != m.end() && !m["TruncatedValueSize"].empty()) {
      truncatedValueSize = make_shared<long>(boost::any_cast<long>(m["TruncatedValueSize"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("ValueTruncated") != m.end() && !m["ValueTruncated"].empty()) {
      valueTruncated = make_shared<bool>(boost::any_cast<bool>(m["ValueTruncated"]));
    }
  }


  virtual ~QueryMessageResponseBodyMessageList() = default;
};
class QueryMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<QueryMessageResponseBodyMessageList>> messageList{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryMessageResponseBody() {}

  explicit QueryMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (messageList) {
      vector<boost::any> temp1;
      for(auto item1:*messageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MessageList"] = boost::any(temp1);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MessageList") != m.end() && !m["MessageList"].empty()) {
      if (typeid(vector<boost::any>) == m["MessageList"].type()) {
        vector<QueryMessageResponseBodyMessageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MessageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMessageResponseBodyMessageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messageList = make_shared<vector<QueryMessageResponseBodyMessageList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryMessageResponseBody() = default;
};
class QueryMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMessageResponseBody> body{};

  QueryMessageResponse() {}

  explicit QueryMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMessageResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMessageResponse() = default;
};
class ReleaseInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> forceDeleteInstance{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  ReleaseInstanceRequest() {}

  explicit ReleaseInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forceDeleteInstance) {
      res["ForceDeleteInstance"] = boost::any(*forceDeleteInstance);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForceDeleteInstance") != m.end() && !m["ForceDeleteInstance"].empty()) {
      forceDeleteInstance = make_shared<bool>(boost::any_cast<bool>(m["ForceDeleteInstance"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ReleaseInstanceRequest() = default;
};
class ReleaseInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReleaseInstanceResponseBody() {}

  explicit ReleaseInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~ReleaseInstanceResponseBody() = default;
};
class ReleaseInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseInstanceResponseBody> body{};

  ReleaseInstanceResponse() {}

  explicit ReleaseInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseInstanceResponse() = default;
};
class ReopenInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  ReopenInstanceRequest() {}

  explicit ReopenInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ReopenInstanceRequest() = default;
};
class ReopenInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReopenInstanceResponseBody() {}

  explicit ReopenInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~ReopenInstanceResponseBody() = default;
};
class ReopenInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReopenInstanceResponseBody> body{};

  ReopenInstanceResponse() {}

  explicit ReopenInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReopenInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReopenInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ReopenInstanceResponse() = default;
};
class StartInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<bool> crossZone{};
  shared_ptr<string> deployModule{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isEipInner{};
  shared_ptr<bool> isForceSelectedZones{};
  shared_ptr<bool> isSetUserAndPassword{};
  shared_ptr<string> KMSKeyId{};
  shared_ptr<string> name{};
  shared_ptr<string> notifier{};
  shared_ptr<string> password{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityGroup{};
  shared_ptr<string> selectedZones{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> userPhoneNum{};
  shared_ptr<string> username{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  StartInstanceRequest() {}

  explicit StartInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (crossZone) {
      res["CrossZone"] = boost::any(*crossZone);
    }
    if (deployModule) {
      res["DeployModule"] = boost::any(*deployModule);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isEipInner) {
      res["IsEipInner"] = boost::any(*isEipInner);
    }
    if (isForceSelectedZones) {
      res["IsForceSelectedZones"] = boost::any(*isForceSelectedZones);
    }
    if (isSetUserAndPassword) {
      res["IsSetUserAndPassword"] = boost::any(*isSetUserAndPassword);
    }
    if (KMSKeyId) {
      res["KMSKeyId"] = boost::any(*KMSKeyId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (notifier) {
      res["Notifier"] = boost::any(*notifier);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroup) {
      res["SecurityGroup"] = boost::any(*securityGroup);
    }
    if (selectedZones) {
      res["SelectedZones"] = boost::any(*selectedZones);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (userPhoneNum) {
      res["UserPhoneNum"] = boost::any(*userPhoneNum);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("CrossZone") != m.end() && !m["CrossZone"].empty()) {
      crossZone = make_shared<bool>(boost::any_cast<bool>(m["CrossZone"]));
    }
    if (m.find("DeployModule") != m.end() && !m["DeployModule"].empty()) {
      deployModule = make_shared<string>(boost::any_cast<string>(m["DeployModule"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsEipInner") != m.end() && !m["IsEipInner"].empty()) {
      isEipInner = make_shared<bool>(boost::any_cast<bool>(m["IsEipInner"]));
    }
    if (m.find("IsForceSelectedZones") != m.end() && !m["IsForceSelectedZones"].empty()) {
      isForceSelectedZones = make_shared<bool>(boost::any_cast<bool>(m["IsForceSelectedZones"]));
    }
    if (m.find("IsSetUserAndPassword") != m.end() && !m["IsSetUserAndPassword"].empty()) {
      isSetUserAndPassword = make_shared<bool>(boost::any_cast<bool>(m["IsSetUserAndPassword"]));
    }
    if (m.find("KMSKeyId") != m.end() && !m["KMSKeyId"].empty()) {
      KMSKeyId = make_shared<string>(boost::any_cast<string>(m["KMSKeyId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Notifier") != m.end() && !m["Notifier"].empty()) {
      notifier = make_shared<string>(boost::any_cast<string>(m["Notifier"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityGroup") != m.end() && !m["SecurityGroup"].empty()) {
      securityGroup = make_shared<string>(boost::any_cast<string>(m["SecurityGroup"]));
    }
    if (m.find("SelectedZones") != m.end() && !m["SelectedZones"].empty()) {
      selectedZones = make_shared<string>(boost::any_cast<string>(m["SelectedZones"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("UserPhoneNum") != m.end() && !m["UserPhoneNum"].empty()) {
      userPhoneNum = make_shared<string>(boost::any_cast<string>(m["UserPhoneNum"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~StartInstanceRequest() = default;
};
class StartInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartInstanceResponseBody() {}

  explicit StartInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~StartInstanceResponseBody() = default;
};
class StartInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartInstanceResponseBody> body{};

  StartInstanceResponse() {}

  explicit StartInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StartInstanceResponse() = default;
};
class StopInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  StopInstanceRequest() {}

  explicit StopInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StopInstanceRequest() = default;
};
class StopInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopInstanceResponseBody() {}

  explicit StopInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~StopInstanceResponseBody() = default;
};
class StopInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopInstanceResponseBody> body{};

  StopInstanceResponse() {}

  explicit StopInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StopInstanceResponse() = default;
};
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateAllowedIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> allowedListIp{};
  shared_ptr<string> allowedListType{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> portRange{};
  shared_ptr<string> regionId{};
  shared_ptr<string> updateType{};

  UpdateAllowedIpRequest() {}

  explicit UpdateAllowedIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedListIp) {
      res["AllowedListIp"] = boost::any(*allowedListIp);
    }
    if (allowedListType) {
      res["AllowedListType"] = boost::any(*allowedListType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (portRange) {
      res["PortRange"] = boost::any(*portRange);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (updateType) {
      res["UpdateType"] = boost::any(*updateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowedListIp") != m.end() && !m["AllowedListIp"].empty()) {
      allowedListIp = make_shared<string>(boost::any_cast<string>(m["AllowedListIp"]));
    }
    if (m.find("AllowedListType") != m.end() && !m["AllowedListType"].empty()) {
      allowedListType = make_shared<string>(boost::any_cast<string>(m["AllowedListType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PortRange") != m.end() && !m["PortRange"].empty()) {
      portRange = make_shared<string>(boost::any_cast<string>(m["PortRange"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UpdateType") != m.end() && !m["UpdateType"].empty()) {
      updateType = make_shared<string>(boost::any_cast<string>(m["UpdateType"]));
    }
  }


  virtual ~UpdateAllowedIpRequest() = default;
};
class UpdateAllowedIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateAllowedIpResponseBody() {}

  explicit UpdateAllowedIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~UpdateAllowedIpResponseBody() = default;
};
class UpdateAllowedIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAllowedIpResponseBody> body{};

  UpdateAllowedIpResponse() {}

  explicit UpdateAllowedIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAllowedIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAllowedIpResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAllowedIpResponse() = default;
};
class UpdateConsumerOffsetRequestOffsets : public Darabonba::Model {
public:
  shared_ptr<long> offset{};
  shared_ptr<long> partition{};

  UpdateConsumerOffsetRequestOffsets() {}

  explicit UpdateConsumerOffsetRequestOffsets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (partition) {
      res["Partition"] = boost::any(*partition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("Partition") != m.end() && !m["Partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["Partition"]));
    }
  }


  virtual ~UpdateConsumerOffsetRequestOffsets() = default;
};
class UpdateConsumerOffsetRequest : public Darabonba::Model {
public:
  shared_ptr<string> consumerId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<UpdateConsumerOffsetRequestOffsets>> offsets{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resetType{};
  shared_ptr<string> time{};
  shared_ptr<string> topic{};

  UpdateConsumerOffsetRequest() {}

  explicit UpdateConsumerOffsetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerId) {
      res["ConsumerId"] = boost::any(*consumerId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (offsets) {
      vector<boost::any> temp1;
      for(auto item1:*offsets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Offsets"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resetType) {
      res["ResetType"] = boost::any(*resetType);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerId") != m.end() && !m["ConsumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["ConsumerId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Offsets") != m.end() && !m["Offsets"].empty()) {
      if (typeid(vector<boost::any>) == m["Offsets"].type()) {
        vector<UpdateConsumerOffsetRequestOffsets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Offsets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateConsumerOffsetRequestOffsets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        offsets = make_shared<vector<UpdateConsumerOffsetRequestOffsets>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResetType") != m.end() && !m["ResetType"].empty()) {
      resetType = make_shared<string>(boost::any_cast<string>(m["ResetType"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~UpdateConsumerOffsetRequest() = default;
};
class UpdateConsumerOffsetShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> consumerId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> offsetsShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resetType{};
  shared_ptr<string> time{};
  shared_ptr<string> topic{};

  UpdateConsumerOffsetShrinkRequest() {}

  explicit UpdateConsumerOffsetShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (consumerId) {
      res["ConsumerId"] = boost::any(*consumerId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (offsetsShrink) {
      res["Offsets"] = boost::any(*offsetsShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resetType) {
      res["ResetType"] = boost::any(*resetType);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConsumerId") != m.end() && !m["ConsumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["ConsumerId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Offsets") != m.end() && !m["Offsets"].empty()) {
      offsetsShrink = make_shared<string>(boost::any_cast<string>(m["Offsets"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResetType") != m.end() && !m["ResetType"].empty()) {
      resetType = make_shared<string>(boost::any_cast<string>(m["ResetType"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
  }


  virtual ~UpdateConsumerOffsetShrinkRequest() = default;
};
class UpdateConsumerOffsetResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateConsumerOffsetResponseBody() {}

  explicit UpdateConsumerOffsetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~UpdateConsumerOffsetResponseBody() = default;
};
class UpdateConsumerOffsetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateConsumerOffsetResponseBody> body{};

  UpdateConsumerOffsetResponse() {}

  explicit UpdateConsumerOffsetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateConsumerOffsetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConsumerOffsetResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConsumerOffsetResponse() = default;
};
class UpdateInstanceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  UpdateInstanceConfigRequest() {}

  explicit UpdateInstanceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateInstanceConfigRequest() = default;
};
class UpdateInstanceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateInstanceConfigResponseBody() {}

  explicit UpdateInstanceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~UpdateInstanceConfigResponseBody() = default;
};
class UpdateInstanceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceConfigResponseBody> body{};

  UpdateInstanceConfigResponse() {}

  explicit UpdateInstanceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceConfigResponse() = default;
};
class UpdateTopicConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> topic{};
  shared_ptr<string> value{};

  UpdateTopicConfigRequest() {}

  explicit UpdateTopicConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateTopicConfigRequest() = default;
};
class UpdateTopicConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateTopicConfigResponseBody() {}

  explicit UpdateTopicConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateTopicConfigResponseBody() = default;
};
class UpdateTopicConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTopicConfigResponseBody> body{};

  UpdateTopicConfigResponse() {}

  explicit UpdateTopicConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTopicConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTopicConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTopicConfigResponse() = default;
};
class UpgradeInstanceVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> targetVersion{};

  UpgradeInstanceVersionRequest() {}

  explicit UpgradeInstanceVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (targetVersion) {
      res["TargetVersion"] = boost::any(*targetVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TargetVersion") != m.end() && !m["TargetVersion"].empty()) {
      targetVersion = make_shared<string>(boost::any_cast<string>(m["TargetVersion"]));
    }
  }


  virtual ~UpgradeInstanceVersionRequest() = default;
};
class UpgradeInstanceVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpgradeInstanceVersionResponseBody() {}

  explicit UpgradeInstanceVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~UpgradeInstanceVersionResponseBody() = default;
};
class UpgradeInstanceVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeInstanceVersionResponseBody> body{};

  UpgradeInstanceVersionResponse() {}

  explicit UpgradeInstanceVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeInstanceVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeInstanceVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeInstanceVersionResponse() = default;
};
class UpgradePostPayOrderRequestServerlessConfig : public Darabonba::Model {
public:
  shared_ptr<long> reservedPublishCapacity{};
  shared_ptr<long> reservedSubscribeCapacity{};

  UpgradePostPayOrderRequestServerlessConfig() {}

  explicit UpgradePostPayOrderRequestServerlessConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reservedPublishCapacity) {
      res["ReservedPublishCapacity"] = boost::any(*reservedPublishCapacity);
    }
    if (reservedSubscribeCapacity) {
      res["ReservedSubscribeCapacity"] = boost::any(*reservedSubscribeCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReservedPublishCapacity") != m.end() && !m["ReservedPublishCapacity"].empty()) {
      reservedPublishCapacity = make_shared<long>(boost::any_cast<long>(m["ReservedPublishCapacity"]));
    }
    if (m.find("ReservedSubscribeCapacity") != m.end() && !m["ReservedSubscribeCapacity"].empty()) {
      reservedSubscribeCapacity = make_shared<long>(boost::any_cast<long>(m["ReservedSubscribeCapacity"]));
    }
  }


  virtual ~UpgradePostPayOrderRequestServerlessConfig() = default;
};
class UpgradePostPayOrderRequest : public Darabonba::Model {
public:
  shared_ptr<long> diskSize{};
  shared_ptr<long> eipMax{};
  shared_ptr<bool> eipModel{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ioMax{};
  shared_ptr<string> ioMaxSpec{};
  shared_ptr<long> partitionNum{};
  shared_ptr<string> regionId{};
  shared_ptr<UpgradePostPayOrderRequestServerlessConfig> serverlessConfig{};
  shared_ptr<string> specType{};
  shared_ptr<long> topicQuota{};

  UpgradePostPayOrderRequest() {}

  explicit UpgradePostPayOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (eipModel) {
      res["EipModel"] = boost::any(*eipModel);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serverlessConfig) {
      res["ServerlessConfig"] = serverlessConfig ? boost::any(serverlessConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (topicQuota) {
      res["TopicQuota"] = boost::any(*topicQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("EipModel") != m.end() && !m["EipModel"].empty()) {
      eipModel = make_shared<bool>(boost::any_cast<bool>(m["EipModel"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["PartitionNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServerlessConfig") != m.end() && !m["ServerlessConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerlessConfig"].type()) {
        UpgradePostPayOrderRequestServerlessConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerlessConfig"]));
        serverlessConfig = make_shared<UpgradePostPayOrderRequestServerlessConfig>(model1);
      }
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("TopicQuota") != m.end() && !m["TopicQuota"].empty()) {
      topicQuota = make_shared<long>(boost::any_cast<long>(m["TopicQuota"]));
    }
  }


  virtual ~UpgradePostPayOrderRequest() = default;
};
class UpgradePostPayOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> diskSize{};
  shared_ptr<long> eipMax{};
  shared_ptr<bool> eipModel{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ioMax{};
  shared_ptr<string> ioMaxSpec{};
  shared_ptr<long> partitionNum{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serverlessConfigShrink{};
  shared_ptr<string> specType{};
  shared_ptr<long> topicQuota{};

  UpgradePostPayOrderShrinkRequest() {}

  explicit UpgradePostPayOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (eipModel) {
      res["EipModel"] = boost::any(*eipModel);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serverlessConfigShrink) {
      res["ServerlessConfig"] = boost::any(*serverlessConfigShrink);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (topicQuota) {
      res["TopicQuota"] = boost::any(*topicQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("EipModel") != m.end() && !m["EipModel"].empty()) {
      eipModel = make_shared<bool>(boost::any_cast<bool>(m["EipModel"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["PartitionNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServerlessConfig") != m.end() && !m["ServerlessConfig"].empty()) {
      serverlessConfigShrink = make_shared<string>(boost::any_cast<string>(m["ServerlessConfig"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("TopicQuota") != m.end() && !m["TopicQuota"].empty()) {
      topicQuota = make_shared<long>(boost::any_cast<long>(m["TopicQuota"]));
    }
  }


  virtual ~UpgradePostPayOrderShrinkRequest() = default;
};
class UpgradePostPayOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpgradePostPayOrderResponseBody() {}

  explicit UpgradePostPayOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~UpgradePostPayOrderResponseBody() = default;
};
class UpgradePostPayOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradePostPayOrderResponseBody> body{};

  UpgradePostPayOrderResponse() {}

  explicit UpgradePostPayOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradePostPayOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradePostPayOrderResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradePostPayOrderResponse() = default;
};
class UpgradePrePayOrderRequestConfluentConfig : public Darabonba::Model {
public:
  shared_ptr<long> connectCU{};
  shared_ptr<long> connectReplica{};
  shared_ptr<long> controlCenterCU{};
  shared_ptr<long> controlCenterReplica{};
  shared_ptr<long> controlCenterStorage{};
  shared_ptr<long> kafkaCU{};
  shared_ptr<long> kafkaReplica{};
  shared_ptr<long> kafkaRestProxyCU{};
  shared_ptr<long> kafkaRestProxyReplica{};
  shared_ptr<long> kafkaStorage{};
  shared_ptr<long> ksqlCU{};
  shared_ptr<long> ksqlReplica{};
  shared_ptr<long> ksqlStorage{};
  shared_ptr<long> schemaRegistryCU{};
  shared_ptr<long> schemaRegistryReplica{};
  shared_ptr<long> zooKeeperCU{};
  shared_ptr<long> zooKeeperReplica{};
  shared_ptr<long> zooKeeperStorage{};

  UpgradePrePayOrderRequestConfluentConfig() {}

  explicit UpgradePrePayOrderRequestConfluentConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectCU) {
      res["ConnectCU"] = boost::any(*connectCU);
    }
    if (connectReplica) {
      res["ConnectReplica"] = boost::any(*connectReplica);
    }
    if (controlCenterCU) {
      res["ControlCenterCU"] = boost::any(*controlCenterCU);
    }
    if (controlCenterReplica) {
      res["ControlCenterReplica"] = boost::any(*controlCenterReplica);
    }
    if (controlCenterStorage) {
      res["ControlCenterStorage"] = boost::any(*controlCenterStorage);
    }
    if (kafkaCU) {
      res["KafkaCU"] = boost::any(*kafkaCU);
    }
    if (kafkaReplica) {
      res["KafkaReplica"] = boost::any(*kafkaReplica);
    }
    if (kafkaRestProxyCU) {
      res["KafkaRestProxyCU"] = boost::any(*kafkaRestProxyCU);
    }
    if (kafkaRestProxyReplica) {
      res["KafkaRestProxyReplica"] = boost::any(*kafkaRestProxyReplica);
    }
    if (kafkaStorage) {
      res["KafkaStorage"] = boost::any(*kafkaStorage);
    }
    if (ksqlCU) {
      res["KsqlCU"] = boost::any(*ksqlCU);
    }
    if (ksqlReplica) {
      res["KsqlReplica"] = boost::any(*ksqlReplica);
    }
    if (ksqlStorage) {
      res["KsqlStorage"] = boost::any(*ksqlStorage);
    }
    if (schemaRegistryCU) {
      res["SchemaRegistryCU"] = boost::any(*schemaRegistryCU);
    }
    if (schemaRegistryReplica) {
      res["SchemaRegistryReplica"] = boost::any(*schemaRegistryReplica);
    }
    if (zooKeeperCU) {
      res["ZooKeeperCU"] = boost::any(*zooKeeperCU);
    }
    if (zooKeeperReplica) {
      res["ZooKeeperReplica"] = boost::any(*zooKeeperReplica);
    }
    if (zooKeeperStorage) {
      res["ZooKeeperStorage"] = boost::any(*zooKeeperStorage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectCU") != m.end() && !m["ConnectCU"].empty()) {
      connectCU = make_shared<long>(boost::any_cast<long>(m["ConnectCU"]));
    }
    if (m.find("ConnectReplica") != m.end() && !m["ConnectReplica"].empty()) {
      connectReplica = make_shared<long>(boost::any_cast<long>(m["ConnectReplica"]));
    }
    if (m.find("ControlCenterCU") != m.end() && !m["ControlCenterCU"].empty()) {
      controlCenterCU = make_shared<long>(boost::any_cast<long>(m["ControlCenterCU"]));
    }
    if (m.find("ControlCenterReplica") != m.end() && !m["ControlCenterReplica"].empty()) {
      controlCenterReplica = make_shared<long>(boost::any_cast<long>(m["ControlCenterReplica"]));
    }
    if (m.find("ControlCenterStorage") != m.end() && !m["ControlCenterStorage"].empty()) {
      controlCenterStorage = make_shared<long>(boost::any_cast<long>(m["ControlCenterStorage"]));
    }
    if (m.find("KafkaCU") != m.end() && !m["KafkaCU"].empty()) {
      kafkaCU = make_shared<long>(boost::any_cast<long>(m["KafkaCU"]));
    }
    if (m.find("KafkaReplica") != m.end() && !m["KafkaReplica"].empty()) {
      kafkaReplica = make_shared<long>(boost::any_cast<long>(m["KafkaReplica"]));
    }
    if (m.find("KafkaRestProxyCU") != m.end() && !m["KafkaRestProxyCU"].empty()) {
      kafkaRestProxyCU = make_shared<long>(boost::any_cast<long>(m["KafkaRestProxyCU"]));
    }
    if (m.find("KafkaRestProxyReplica") != m.end() && !m["KafkaRestProxyReplica"].empty()) {
      kafkaRestProxyReplica = make_shared<long>(boost::any_cast<long>(m["KafkaRestProxyReplica"]));
    }
    if (m.find("KafkaStorage") != m.end() && !m["KafkaStorage"].empty()) {
      kafkaStorage = make_shared<long>(boost::any_cast<long>(m["KafkaStorage"]));
    }
    if (m.find("KsqlCU") != m.end() && !m["KsqlCU"].empty()) {
      ksqlCU = make_shared<long>(boost::any_cast<long>(m["KsqlCU"]));
    }
    if (m.find("KsqlReplica") != m.end() && !m["KsqlReplica"].empty()) {
      ksqlReplica = make_shared<long>(boost::any_cast<long>(m["KsqlReplica"]));
    }
    if (m.find("KsqlStorage") != m.end() && !m["KsqlStorage"].empty()) {
      ksqlStorage = make_shared<long>(boost::any_cast<long>(m["KsqlStorage"]));
    }
    if (m.find("SchemaRegistryCU") != m.end() && !m["SchemaRegistryCU"].empty()) {
      schemaRegistryCU = make_shared<long>(boost::any_cast<long>(m["SchemaRegistryCU"]));
    }
    if (m.find("SchemaRegistryReplica") != m.end() && !m["SchemaRegistryReplica"].empty()) {
      schemaRegistryReplica = make_shared<long>(boost::any_cast<long>(m["SchemaRegistryReplica"]));
    }
    if (m.find("ZooKeeperCU") != m.end() && !m["ZooKeeperCU"].empty()) {
      zooKeeperCU = make_shared<long>(boost::any_cast<long>(m["ZooKeeperCU"]));
    }
    if (m.find("ZooKeeperReplica") != m.end() && !m["ZooKeeperReplica"].empty()) {
      zooKeeperReplica = make_shared<long>(boost::any_cast<long>(m["ZooKeeperReplica"]));
    }
    if (m.find("ZooKeeperStorage") != m.end() && !m["ZooKeeperStorage"].empty()) {
      zooKeeperStorage = make_shared<long>(boost::any_cast<long>(m["ZooKeeperStorage"]));
    }
  }


  virtual ~UpgradePrePayOrderRequestConfluentConfig() = default;
};
class UpgradePrePayOrderRequest : public Darabonba::Model {
public:
  shared_ptr<UpgradePrePayOrderRequestConfluentConfig> confluentConfig{};
  shared_ptr<long> diskSize{};
  shared_ptr<long> eipMax{};
  shared_ptr<bool> eipModel{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ioMax{};
  shared_ptr<string> ioMaxSpec{};
  shared_ptr<long> paidType{};
  shared_ptr<long> partitionNum{};
  shared_ptr<string> regionId{};
  shared_ptr<string> specType{};
  shared_ptr<long> topicQuota{};

  UpgradePrePayOrderRequest() {}

  explicit UpgradePrePayOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confluentConfig) {
      res["ConfluentConfig"] = confluentConfig ? boost::any(confluentConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (eipModel) {
      res["EipModel"] = boost::any(*eipModel);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    if (paidType) {
      res["PaidType"] = boost::any(*paidType);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (topicQuota) {
      res["TopicQuota"] = boost::any(*topicQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfluentConfig") != m.end() && !m["ConfluentConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfluentConfig"].type()) {
        UpgradePrePayOrderRequestConfluentConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfluentConfig"]));
        confluentConfig = make_shared<UpgradePrePayOrderRequestConfluentConfig>(model1);
      }
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("EipModel") != m.end() && !m["EipModel"].empty()) {
      eipModel = make_shared<bool>(boost::any_cast<bool>(m["EipModel"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
    if (m.find("PaidType") != m.end() && !m["PaidType"].empty()) {
      paidType = make_shared<long>(boost::any_cast<long>(m["PaidType"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["PartitionNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("TopicQuota") != m.end() && !m["TopicQuota"].empty()) {
      topicQuota = make_shared<long>(boost::any_cast<long>(m["TopicQuota"]));
    }
  }


  virtual ~UpgradePrePayOrderRequest() = default;
};
class UpgradePrePayOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> confluentConfigShrink{};
  shared_ptr<long> diskSize{};
  shared_ptr<long> eipMax{};
  shared_ptr<bool> eipModel{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> ioMax{};
  shared_ptr<string> ioMaxSpec{};
  shared_ptr<long> paidType{};
  shared_ptr<long> partitionNum{};
  shared_ptr<string> regionId{};
  shared_ptr<string> specType{};
  shared_ptr<long> topicQuota{};

  UpgradePrePayOrderShrinkRequest() {}

  explicit UpgradePrePayOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confluentConfigShrink) {
      res["ConfluentConfig"] = boost::any(*confluentConfigShrink);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (eipModel) {
      res["EipModel"] = boost::any(*eipModel);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    if (paidType) {
      res["PaidType"] = boost::any(*paidType);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (topicQuota) {
      res["TopicQuota"] = boost::any(*topicQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfluentConfig") != m.end() && !m["ConfluentConfig"].empty()) {
      confluentConfigShrink = make_shared<string>(boost::any_cast<string>(m["ConfluentConfig"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("EipModel") != m.end() && !m["EipModel"].empty()) {
      eipModel = make_shared<bool>(boost::any_cast<bool>(m["EipModel"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
    if (m.find("PaidType") != m.end() && !m["PaidType"].empty()) {
      paidType = make_shared<long>(boost::any_cast<long>(m["PaidType"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<long>(boost::any_cast<long>(m["PartitionNum"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("TopicQuota") != m.end() && !m["TopicQuota"].empty()) {
      topicQuota = make_shared<long>(boost::any_cast<long>(m["TopicQuota"]));
    }
  }


  virtual ~UpgradePrePayOrderShrinkRequest() = default;
};
class UpgradePrePayOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpgradePrePayOrderResponseBody() {}

  explicit UpgradePrePayOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpgradePrePayOrderResponseBody() = default;
};
class UpgradePrePayOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradePrePayOrderResponseBody> body{};

  UpgradePrePayOrderResponse() {}

  explicit UpgradePrePayOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradePrePayOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradePrePayOrderResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradePrePayOrderResponse() = default;
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
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  ConvertPostPayOrderResponse convertPostPayOrderWithOptions(shared_ptr<ConvertPostPayOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertPostPayOrderResponse convertPostPayOrder(shared_ptr<ConvertPostPayOrderRequest> request);
  CreateAclResponse createAclWithOptions(shared_ptr<CreateAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAclResponse createAcl(shared_ptr<CreateAclRequest> request);
  CreateConsumerGroupResponse createConsumerGroupWithOptions(shared_ptr<CreateConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConsumerGroupResponse createConsumerGroup(shared_ptr<CreateConsumerGroupRequest> request);
  CreatePostPayInstanceResponse createPostPayInstanceWithOptions(shared_ptr<CreatePostPayInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePostPayInstanceResponse createPostPayInstance(shared_ptr<CreatePostPayInstanceRequest> request);
  CreatePostPayOrderResponse createPostPayOrderWithOptions(shared_ptr<CreatePostPayOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePostPayOrderResponse createPostPayOrder(shared_ptr<CreatePostPayOrderRequest> request);
  CreatePrePayInstanceResponse createPrePayInstanceWithOptions(shared_ptr<CreatePrePayInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePrePayInstanceResponse createPrePayInstance(shared_ptr<CreatePrePayInstanceRequest> request);
  CreatePrePayOrderResponse createPrePayOrderWithOptions(shared_ptr<CreatePrePayOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePrePayOrderResponse createPrePayOrder(shared_ptr<CreatePrePayOrderRequest> request);
  CreateSaslUserResponse createSaslUserWithOptions(shared_ptr<CreateSaslUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSaslUserResponse createSaslUser(shared_ptr<CreateSaslUserRequest> request);
  CreateScheduledScalingRuleResponse createScheduledScalingRuleWithOptions(shared_ptr<CreateScheduledScalingRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScheduledScalingRuleResponse createScheduledScalingRule(shared_ptr<CreateScheduledScalingRuleRequest> request);
  CreateTopicResponse createTopicWithOptions(shared_ptr<CreateTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTopicResponse createTopic(shared_ptr<CreateTopicRequest> request);
  DeleteAclResponse deleteAclWithOptions(shared_ptr<DeleteAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAclResponse deleteAcl(shared_ptr<DeleteAclRequest> request);
  DeleteConsumerGroupResponse deleteConsumerGroupWithOptions(shared_ptr<DeleteConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConsumerGroupResponse deleteConsumerGroup(shared_ptr<DeleteConsumerGroupRequest> request);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<DeleteInstanceRequest> request);
  DeleteSaslUserResponse deleteSaslUserWithOptions(shared_ptr<DeleteSaslUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSaslUserResponse deleteSaslUser(shared_ptr<DeleteSaslUserRequest> request);
  DeleteScheduledScalingRuleResponse deleteScheduledScalingRuleWithOptions(shared_ptr<DeleteScheduledScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScheduledScalingRuleResponse deleteScheduledScalingRule(shared_ptr<DeleteScheduledScalingRuleRequest> request);
  DeleteTopicResponse deleteTopicWithOptions(shared_ptr<DeleteTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTopicResponse deleteTopic(shared_ptr<DeleteTopicRequest> request);
  DescribeAclResourceNameResponse describeAclResourceNameWithOptions(shared_ptr<DescribeAclResourceNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAclResourceNameResponse describeAclResourceName(shared_ptr<DescribeAclResourceNameRequest> request);
  DescribeAclsResponse describeAclsWithOptions(shared_ptr<DescribeAclsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAclsResponse describeAcls(shared_ptr<DescribeAclsRequest> request);
  DescribeSaslUsersResponse describeSaslUsersWithOptions(shared_ptr<DescribeSaslUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSaslUsersResponse describeSaslUsers(shared_ptr<DescribeSaslUsersRequest> request);
  EnableAutoGroupCreationResponse enableAutoGroupCreationWithOptions(shared_ptr<EnableAutoGroupCreationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableAutoGroupCreationResponse enableAutoGroupCreation(shared_ptr<EnableAutoGroupCreationRequest> request);
  EnableAutoTopicCreationResponse enableAutoTopicCreationWithOptions(shared_ptr<EnableAutoTopicCreationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableAutoTopicCreationResponse enableAutoTopicCreation(shared_ptr<EnableAutoTopicCreationRequest> request);
  GetAllInstanceIdListResponse getAllInstanceIdListWithOptions(shared_ptr<GetAllInstanceIdListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAllInstanceIdListResponse getAllInstanceIdList(shared_ptr<GetAllInstanceIdListRequest> request);
  GetAllowedIpListResponse getAllowedIpListWithOptions(shared_ptr<GetAllowedIpListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAllowedIpListResponse getAllowedIpList(shared_ptr<GetAllowedIpListRequest> request);
  GetAutoScalingConfigurationResponse getAutoScalingConfigurationWithOptions(shared_ptr<GetAutoScalingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAutoScalingConfigurationResponse getAutoScalingConfiguration(shared_ptr<GetAutoScalingConfigurationRequest> request);
  GetConsumerListResponse getConsumerListWithOptions(shared_ptr<GetConsumerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConsumerListResponse getConsumerList(shared_ptr<GetConsumerListRequest> request);
  GetConsumerProgressResponse getConsumerProgressWithOptions(shared_ptr<GetConsumerProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConsumerProgressResponse getConsumerProgress(shared_ptr<GetConsumerProgressRequest> request);
  GetInstanceListResponse getInstanceListWithOptions(shared_ptr<GetInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceListResponse getInstanceList(shared_ptr<GetInstanceListRequest> request);
  GetKafkaClientIpResponse getKafkaClientIpWithOptions(shared_ptr<GetKafkaClientIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetKafkaClientIpResponse getKafkaClientIp(shared_ptr<GetKafkaClientIpRequest> request);
  GetQuotaTipResponse getQuotaTipWithOptions(shared_ptr<GetQuotaTipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuotaTipResponse getQuotaTip(shared_ptr<GetQuotaTipRequest> request);
  GetTopicListResponse getTopicListWithOptions(shared_ptr<GetTopicListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTopicListResponse getTopicList(shared_ptr<GetTopicListRequest> request);
  GetTopicStatusResponse getTopicStatusWithOptions(shared_ptr<GetTopicStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTopicStatusResponse getTopicStatus(shared_ptr<GetTopicStatusRequest> request);
  GetTopicSubscribeStatusResponse getTopicSubscribeStatusWithOptions(shared_ptr<GetTopicSubscribeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTopicSubscribeStatusResponse getTopicSubscribeStatus(shared_ptr<GetTopicSubscribeStatusRequest> request);
  ListRebalanceInfoResponse listRebalanceInfoWithOptions(shared_ptr<ListRebalanceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRebalanceInfoResponse listRebalanceInfo(shared_ptr<ListRebalanceInfoRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyInstanceNameResponse modifyInstanceNameWithOptions(shared_ptr<ModifyInstanceNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceNameResponse modifyInstanceName(shared_ptr<ModifyInstanceNameRequest> request);
  ModifyPartitionNumResponse modifyPartitionNumWithOptions(shared_ptr<ModifyPartitionNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPartitionNumResponse modifyPartitionNum(shared_ptr<ModifyPartitionNumRequest> request);
  ModifyScheduledScalingRuleResponse modifyScheduledScalingRuleWithOptions(shared_ptr<ModifyScheduledScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyScheduledScalingRuleResponse modifyScheduledScalingRule(shared_ptr<ModifyScheduledScalingRuleRequest> request);
  ModifyTopicRemarkResponse modifyTopicRemarkWithOptions(shared_ptr<ModifyTopicRemarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyTopicRemarkResponse modifyTopicRemark(shared_ptr<ModifyTopicRemarkRequest> request);
  QueryMessageResponse queryMessageWithOptions(shared_ptr<QueryMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMessageResponse queryMessage(shared_ptr<QueryMessageRequest> request);
  ReleaseInstanceResponse releaseInstanceWithOptions(shared_ptr<ReleaseInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseInstanceResponse releaseInstance(shared_ptr<ReleaseInstanceRequest> request);
  ReopenInstanceResponse reopenInstanceWithOptions(shared_ptr<ReopenInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReopenInstanceResponse reopenInstance(shared_ptr<ReopenInstanceRequest> request);
  StartInstanceResponse startInstanceWithOptions(shared_ptr<StartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartInstanceResponse startInstance(shared_ptr<StartInstanceRequest> request);
  StopInstanceResponse stopInstanceWithOptions(shared_ptr<StopInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopInstanceResponse stopInstance(shared_ptr<StopInstanceRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateAllowedIpResponse updateAllowedIpWithOptions(shared_ptr<UpdateAllowedIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAllowedIpResponse updateAllowedIp(shared_ptr<UpdateAllowedIpRequest> request);
  UpdateConsumerOffsetResponse updateConsumerOffsetWithOptions(shared_ptr<UpdateConsumerOffsetRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConsumerOffsetResponse updateConsumerOffset(shared_ptr<UpdateConsumerOffsetRequest> request);
  UpdateInstanceConfigResponse updateInstanceConfigWithOptions(shared_ptr<UpdateInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceConfigResponse updateInstanceConfig(shared_ptr<UpdateInstanceConfigRequest> request);
  UpdateTopicConfigResponse updateTopicConfigWithOptions(shared_ptr<UpdateTopicConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTopicConfigResponse updateTopicConfig(shared_ptr<UpdateTopicConfigRequest> request);
  UpgradeInstanceVersionResponse upgradeInstanceVersionWithOptions(shared_ptr<UpgradeInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeInstanceVersionResponse upgradeInstanceVersion(shared_ptr<UpgradeInstanceVersionRequest> request);
  UpgradePostPayOrderResponse upgradePostPayOrderWithOptions(shared_ptr<UpgradePostPayOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradePostPayOrderResponse upgradePostPayOrder(shared_ptr<UpgradePostPayOrderRequest> request);
  UpgradePrePayOrderResponse upgradePrePayOrderWithOptions(shared_ptr<UpgradePrePayOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradePrePayOrderResponse upgradePrePayOrder(shared_ptr<UpgradePrePayOrderRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Alikafka20190916

#endif
