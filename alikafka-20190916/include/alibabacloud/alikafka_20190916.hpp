// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALIKAFKA20190916_H_
#define ALIBABACLOUD_ALIKAFKA20190916_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Alikafka20190916 {
class ConvertPostPayOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> duration{};

  ConvertPostPayOrderRequest() {}

  explicit ConvertPostPayOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
  }


  virtual ~ConvertPostPayOrderRequest() = default;
};
class ConvertPostPayOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> orderId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  ConvertPostPayOrderResponseBody() {}

  explicit ConvertPostPayOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<ConvertPostPayOrderResponseBody> body{};

  ConvertPostPayOrderResponse() {}

  explicit ConvertPostPayOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> username{};
  shared_ptr<string> aclResourceType{};
  shared_ptr<string> aclResourceName{};
  shared_ptr<string> aclResourcePatternType{};
  shared_ptr<string> aclOperationType{};

  CreateAclRequest() {}

  explicit CreateAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (aclResourceType) {
      res["AclResourceType"] = boost::any(*aclResourceType);
    }
    if (aclResourceName) {
      res["AclResourceName"] = boost::any(*aclResourceName);
    }
    if (aclResourcePatternType) {
      res["AclResourcePatternType"] = boost::any(*aclResourcePatternType);
    }
    if (aclOperationType) {
      res["AclOperationType"] = boost::any(*aclOperationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("AclResourceType") != m.end() && !m["AclResourceType"].empty()) {
      aclResourceType = make_shared<string>(boost::any_cast<string>(m["AclResourceType"]));
    }
    if (m.find("AclResourceName") != m.end() && !m["AclResourceName"].empty()) {
      aclResourceName = make_shared<string>(boost::any_cast<string>(m["AclResourceName"]));
    }
    if (m.find("AclResourcePatternType") != m.end() && !m["AclResourcePatternType"].empty()) {
      aclResourcePatternType = make_shared<string>(boost::any_cast<string>(m["AclResourcePatternType"]));
    }
    if (m.find("AclOperationType") != m.end() && !m["AclOperationType"].empty()) {
      aclOperationType = make_shared<string>(boost::any_cast<string>(m["AclOperationType"]));
    }
  }


  virtual ~CreateAclRequest() = default;
};
class CreateAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  CreateAclResponseBody() {}

  explicit CreateAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<CreateAclResponseBody> body{};

  CreateAclResponse() {}

  explicit CreateAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAclResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAclResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAclResponse() = default;
};
class CreateConsumerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> consumerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};

  CreateConsumerGroupRequest() {}

  explicit CreateConsumerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (consumerId) {
      res["ConsumerId"] = boost::any(*consumerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ConsumerId") != m.end() && !m["ConsumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["ConsumerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~CreateConsumerGroupRequest() = default;
};
class CreateConsumerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  CreateConsumerGroupResponseBody() {}

  explicit CreateConsumerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<CreateConsumerGroupResponseBody> body{};

  CreateConsumerGroupResponse() {}

  explicit CreateConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateConsumerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConsumerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConsumerGroupResponse() = default;
};
class CreatePostPayOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> topicQuota{};
  shared_ptr<string> diskType{};
  shared_ptr<long> diskSize{};
  shared_ptr<long> deployType{};
  shared_ptr<long> ioMax{};
  shared_ptr<long> eipMax{};
  shared_ptr<string> specType{};
  shared_ptr<string> ioMaxSpec{};

  CreatePostPayOrderRequest() {}

  explicit CreatePostPayOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topicQuota) {
      res["TopicQuota"] = boost::any(*topicQuota);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TopicQuota") != m.end() && !m["TopicQuota"].empty()) {
      topicQuota = make_shared<long>(boost::any_cast<long>(m["TopicQuota"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<long>(boost::any_cast<long>(m["DeployType"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
  }


  virtual ~CreatePostPayOrderRequest() = default;
};
class CreatePostPayOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> orderId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  CreatePostPayOrderResponseBody() {}

  explicit CreatePostPayOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<CreatePostPayOrderResponseBody> body{};

  CreatePostPayOrderResponse() {}

  explicit CreatePostPayOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePostPayOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePostPayOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePostPayOrderResponse() = default;
};
class CreatePrePayOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> topicQuota{};
  shared_ptr<string> diskType{};
  shared_ptr<long> diskSize{};
  shared_ptr<long> deployType{};
  shared_ptr<long> ioMax{};
  shared_ptr<long> eipMax{};
  shared_ptr<string> specType{};
  shared_ptr<string> ioMaxSpec{};

  CreatePrePayOrderRequest() {}

  explicit CreatePrePayOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (topicQuota) {
      res["TopicQuota"] = boost::any(*topicQuota);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TopicQuota") != m.end() && !m["TopicQuota"].empty()) {
      topicQuota = make_shared<long>(boost::any_cast<long>(m["TopicQuota"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<long>(boost::any_cast<long>(m["DeployType"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
  }


  virtual ~CreatePrePayOrderRequest() = default;
};
class CreatePrePayOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> orderId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  CreatePrePayOrderResponseBody() {}

  explicit CreatePrePayOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<CreatePrePayOrderResponseBody> body{};

  CreatePrePayOrderResponse() {}

  explicit CreatePrePayOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> username{};
  shared_ptr<string> password{};
  shared_ptr<string> type{};

  CreateSaslUserRequest() {}

  explicit CreateSaslUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateSaslUserRequest() = default;
};
class CreateSaslUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  CreateSaslUserResponseBody() {}

  explicit CreateSaslUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<CreateSaslUserResponseBody> body{};

  CreateSaslUserResponse() {}

  explicit CreateSaslUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSaslUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSaslUserResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSaslUserResponse() = default;
};
class CreateTopicRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> topic{};
  shared_ptr<string> remark{};
  shared_ptr<string> regionId{};
  shared_ptr<string> partitionNum{};

  CreateTopicRequest() {}

  explicit CreateTopicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (partitionNum) {
      res["PartitionNum"] = boost::any(*partitionNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PartitionNum") != m.end() && !m["PartitionNum"].empty()) {
      partitionNum = make_shared<string>(boost::any_cast<string>(m["PartitionNum"]));
    }
  }


  virtual ~CreateTopicRequest() = default;
};
class CreateTopicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  CreateTopicResponseBody() {}

  explicit CreateTopicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<CreateTopicResponseBody> body{};

  CreateTopicResponse() {}

  explicit CreateTopicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> username{};
  shared_ptr<string> aclResourceType{};
  shared_ptr<string> aclResourceName{};
  shared_ptr<string> aclResourcePatternType{};
  shared_ptr<string> aclOperationType{};

  DeleteAclRequest() {}

  explicit DeleteAclRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (aclResourceType) {
      res["AclResourceType"] = boost::any(*aclResourceType);
    }
    if (aclResourceName) {
      res["AclResourceName"] = boost::any(*aclResourceName);
    }
    if (aclResourcePatternType) {
      res["AclResourcePatternType"] = boost::any(*aclResourcePatternType);
    }
    if (aclOperationType) {
      res["AclOperationType"] = boost::any(*aclOperationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("AclResourceType") != m.end() && !m["AclResourceType"].empty()) {
      aclResourceType = make_shared<string>(boost::any_cast<string>(m["AclResourceType"]));
    }
    if (m.find("AclResourceName") != m.end() && !m["AclResourceName"].empty()) {
      aclResourceName = make_shared<string>(boost::any_cast<string>(m["AclResourceName"]));
    }
    if (m.find("AclResourcePatternType") != m.end() && !m["AclResourcePatternType"].empty()) {
      aclResourcePatternType = make_shared<string>(boost::any_cast<string>(m["AclResourcePatternType"]));
    }
    if (m.find("AclOperationType") != m.end() && !m["AclOperationType"].empty()) {
      aclOperationType = make_shared<string>(boost::any_cast<string>(m["AclOperationType"]));
    }
  }


  virtual ~DeleteAclRequest() = default;
};
class DeleteAclResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  DeleteAclResponseBody() {}

  explicit DeleteAclResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<DeleteAclResponseBody> body{};

  DeleteAclResponse() {}

  explicit DeleteAclResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> instanceId{};
  shared_ptr<string> consumerId{};
  shared_ptr<string> regionId{};

  DeleteConsumerGroupRequest() {}

  explicit DeleteConsumerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (consumerId) {
      res["ConsumerId"] = boost::any(*consumerId);
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
    if (m.find("ConsumerId") != m.end() && !m["ConsumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["ConsumerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteConsumerGroupRequest() = default;
};
class DeleteConsumerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  DeleteConsumerGroupResponseBody() {}

  explicit DeleteConsumerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<DeleteConsumerGroupResponseBody> body{};

  DeleteConsumerGroupResponse() {}

  explicit DeleteConsumerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<DeleteInstanceResponseBody> body{};

  DeleteInstanceResponse() {}

  explicit DeleteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> username{};
  shared_ptr<string> type{};

  DeleteSaslUserRequest() {}

  explicit DeleteSaslUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DeleteSaslUserRequest() = default;
};
class DeleteSaslUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  DeleteSaslUserResponseBody() {}

  explicit DeleteSaslUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<DeleteSaslUserResponseBody> body{};

  DeleteSaslUserResponse() {}

  explicit DeleteSaslUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSaslUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSaslUserResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSaslUserResponse() = default;
};
class DeleteTopicRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> topic{};
  shared_ptr<string> regionId{};

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
    if (topic) {
      res["Topic"] = boost::any(*topic);
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
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteTopicRequest() = default;
};
class DeleteTopicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  DeleteTopicResponseBody() {}

  explicit DeleteTopicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<DeleteTopicResponseBody> body{};

  DeleteTopicResponse() {}

  explicit DeleteTopicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTopicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTopicResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTopicResponse() = default;
};
class DescribeAclsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> username{};
  shared_ptr<string> aclResourceType{};
  shared_ptr<string> aclResourceName{};
  shared_ptr<string> aclResourcePatternType{};

  DescribeAclsRequest() {}

  explicit DescribeAclsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (aclResourceType) {
      res["AclResourceType"] = boost::any(*aclResourceType);
    }
    if (aclResourceName) {
      res["AclResourceName"] = boost::any(*aclResourceName);
    }
    if (aclResourcePatternType) {
      res["AclResourcePatternType"] = boost::any(*aclResourcePatternType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("AclResourceType") != m.end() && !m["AclResourceType"].empty()) {
      aclResourceType = make_shared<string>(boost::any_cast<string>(m["AclResourceType"]));
    }
    if (m.find("AclResourceName") != m.end() && !m["AclResourceName"].empty()) {
      aclResourceName = make_shared<string>(boost::any_cast<string>(m["AclResourceName"]));
    }
    if (m.find("AclResourcePatternType") != m.end() && !m["AclResourcePatternType"].empty()) {
      aclResourcePatternType = make_shared<string>(boost::any_cast<string>(m["AclResourcePatternType"]));
    }
  }


  virtual ~DescribeAclsRequest() = default;
};
class DescribeAclsResponseBodyKafkaAclListKafkaAclVO : public Darabonba::Model {
public:
  shared_ptr<string> aclResourceType{};
  shared_ptr<string> host{};
  shared_ptr<string> aclOperationType{};
  shared_ptr<string> aclResourceName{};
  shared_ptr<string> aclResourcePatternType{};
  shared_ptr<string> username{};

  DescribeAclsResponseBodyKafkaAclListKafkaAclVO() {}

  explicit DescribeAclsResponseBodyKafkaAclListKafkaAclVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclResourceType) {
      res["AclResourceType"] = boost::any(*aclResourceType);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (aclOperationType) {
      res["AclOperationType"] = boost::any(*aclOperationType);
    }
    if (aclResourceName) {
      res["AclResourceName"] = boost::any(*aclResourceName);
    }
    if (aclResourcePatternType) {
      res["AclResourcePatternType"] = boost::any(*aclResourcePatternType);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclResourceType") != m.end() && !m["AclResourceType"].empty()) {
      aclResourceType = make_shared<string>(boost::any_cast<string>(m["AclResourceType"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("AclOperationType") != m.end() && !m["AclOperationType"].empty()) {
      aclOperationType = make_shared<string>(boost::any_cast<string>(m["AclOperationType"]));
    }
    if (m.find("AclResourceName") != m.end() && !m["AclResourceName"].empty()) {
      aclResourceName = make_shared<string>(boost::any_cast<string>(m["AclResourceName"]));
    }
    if (m.find("AclResourcePatternType") != m.end() && !m["AclResourcePatternType"].empty()) {
      aclResourcePatternType = make_shared<string>(boost::any_cast<string>(m["AclResourcePatternType"]));
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
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};
  shared_ptr<DescribeAclsResponseBodyKafkaAclList> kafkaAclList{};

  DescribeAclsResponseBody() {}

  explicit DescribeAclsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (kafkaAclList) {
      res["KafkaAclList"] = kafkaAclList ? boost::any(kafkaAclList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("KafkaAclList") != m.end() && !m["KafkaAclList"].empty()) {
      if (typeid(map<string, boost::any>) == m["KafkaAclList"].type()) {
        DescribeAclsResponseBodyKafkaAclList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KafkaAclList"]));
        kafkaAclList = make_shared<DescribeAclsResponseBodyKafkaAclList>(model1);
      }
    }
  }


  virtual ~DescribeAclsResponseBody() = default;
};
class DescribeAclsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAclsResponseBody> body{};

  DescribeAclsResponse() {}

  explicit DescribeAclsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAclsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAclsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAclsResponse() = default;
};
class DescribeNodeStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  DescribeNodeStatusRequest() {}

  explicit DescribeNodeStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeNodeStatusRequest() = default;
};
class DescribeNodeStatusResponseBodyStatusList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> status{};

  DescribeNodeStatusResponseBodyStatusList() {}

  explicit DescribeNodeStatusResponseBodyStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      status = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeNodeStatusResponseBodyStatusList() = default;
};
class DescribeNodeStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeNodeStatusResponseBodyStatusList> statusList{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  DescribeNodeStatusResponseBody() {}

  explicit DescribeNodeStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (statusList) {
      res["StatusList"] = statusList ? boost::any(statusList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StatusList") != m.end() && !m["StatusList"].empty()) {
      if (typeid(map<string, boost::any>) == m["StatusList"].type()) {
        DescribeNodeStatusResponseBodyStatusList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StatusList"]));
        statusList = make_shared<DescribeNodeStatusResponseBodyStatusList>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeNodeStatusResponseBody() = default;
};
class DescribeNodeStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeNodeStatusResponseBody> body{};

  DescribeNodeStatusResponse() {}

  explicit DescribeNodeStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNodeStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNodeStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNodeStatusResponse() = default;
};
class DescribeSaslUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  DescribeSaslUsersRequest() {}

  explicit DescribeSaslUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeSaslUsersRequest() = default;
};
class DescribeSaslUsersResponseBodySaslUserListSaslUserVO : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> password{};
  shared_ptr<string> username{};

  DescribeSaslUsersResponseBodySaslUserListSaslUserVO() {}

  explicit DescribeSaslUsersResponseBodySaslUserListSaslUserVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
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
  shared_ptr<DescribeSaslUsersResponseBodySaslUserList> saslUserList{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  DescribeSaslUsersResponseBody() {}

  explicit DescribeSaslUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (saslUserList) {
      res["SaslUserList"] = saslUserList ? boost::any(saslUserList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("SaslUserList") != m.end() && !m["SaslUserList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SaslUserList"].type()) {
        DescribeSaslUsersResponseBodySaslUserList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SaslUserList"]));
        saslUserList = make_shared<DescribeSaslUsersResponseBodySaslUserList>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<DescribeSaslUsersResponseBody> body{};

  DescribeSaslUsersResponse() {}

  explicit DescribeSaslUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSaslUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSaslUsersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSaslUsersResponse() = default;
};
class GetAllowedIpListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

  GetAllowedIpListRequest() {}

  explicit GetAllowedIpListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetAllowedIpListRequest() = default;
};
class GetAllowedIpListResponseBodyAllowedListInternetList : public Darabonba::Model {
public:
  shared_ptr<string> portRange{};
  shared_ptr<vector<string>> allowedIpList{};

  GetAllowedIpListResponseBodyAllowedListInternetList() {}

  explicit GetAllowedIpListResponseBodyAllowedListInternetList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (portRange) {
      res["PortRange"] = boost::any(*portRange);
    }
    if (allowedIpList) {
      res["AllowedIpList"] = boost::any(*allowedIpList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PortRange") != m.end() && !m["PortRange"].empty()) {
      portRange = make_shared<string>(boost::any_cast<string>(m["PortRange"]));
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
  }


  virtual ~GetAllowedIpListResponseBodyAllowedListInternetList() = default;
};
class GetAllowedIpListResponseBodyAllowedListVpcList : public Darabonba::Model {
public:
  shared_ptr<string> portRange{};
  shared_ptr<vector<string>> allowedIpList{};

  GetAllowedIpListResponseBodyAllowedListVpcList() {}

  explicit GetAllowedIpListResponseBodyAllowedListVpcList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (portRange) {
      res["PortRange"] = boost::any(*portRange);
    }
    if (allowedIpList) {
      res["AllowedIpList"] = boost::any(*allowedIpList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PortRange") != m.end() && !m["PortRange"].empty()) {
      portRange = make_shared<string>(boost::any_cast<string>(m["PortRange"]));
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
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetAllowedIpListResponseBodyAllowedList> allowedList{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  GetAllowedIpListResponseBody() {}

  explicit GetAllowedIpListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (allowedList) {
      res["AllowedList"] = allowedList ? boost::any(allowedList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetAllowedIpListResponseBody() = default;
};
class GetAllowedIpListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAllowedIpListResponseBody> body{};

  GetAllowedIpListResponse() {}

  explicit GetAllowedIpListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAllowedIpListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAllowedIpListResponseBody>(model1);
      }
    }
  }


  virtual ~GetAllowedIpListResponse() = default;
};
class GetConsumerListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  GetConsumerListRequest() {}

  explicit GetConsumerListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> remark{};
  shared_ptr<GetConsumerListResponseBodyConsumerListConsumerVOTags> tags{};
  shared_ptr<string> consumerId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  GetConsumerListResponseBodyConsumerListConsumerVO() {}

  explicit GetConsumerListResponseBodyConsumerListConsumerVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
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
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<GetConsumerListResponseBodyConsumerList> consumerList{};
  shared_ptr<bool> success{};

  GetConsumerListResponseBody() {}

  explicit GetConsumerListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (consumerList) {
      res["ConsumerList"] = consumerList ? boost::any(consumerList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetConsumerListResponseBody() = default;
};
class GetConsumerListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetConsumerListResponseBody> body{};

  GetConsumerListResponse() {}

  explicit GetConsumerListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> instanceId{};
  shared_ptr<string> consumerId{};
  shared_ptr<string> regionId{};

  GetConsumerProgressRequest() {}

  explicit GetConsumerProgressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (consumerId) {
      res["ConsumerId"] = boost::any(*consumerId);
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
    if (m.find("ConsumerId") != m.end() && !m["ConsumerId"].empty()) {
      consumerId = make_shared<string>(boost::any_cast<string>(m["ConsumerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetConsumerProgressRequest() = default;
};
class GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList : public Darabonba::Model {
public:
  shared_ptr<long> brokerOffset{};
  shared_ptr<long> consumerOffset{};
  shared_ptr<long> lastTimestamp{};
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
    if (consumerOffset) {
      res["ConsumerOffset"] = boost::any(*consumerOffset);
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
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
    if (m.find("ConsumerOffset") != m.end() && !m["ConsumerOffset"].empty()) {
      consumerOffset = make_shared<long>(boost::any_cast<long>(m["ConsumerOffset"]));
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<long>(boost::any_cast<long>(m["LastTimestamp"]));
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
  shared_ptr<long> totalDiff{};
  shared_ptr<long> lastTimestamp{};
  shared_ptr<string> topic{};
  shared_ptr<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList> offsetList{};

  GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList() {}

  explicit GetConsumerProgressResponseBodyConsumerProgressTopicListTopicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalDiff) {
      res["TotalDiff"] = boost::any(*totalDiff);
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (offsetList) {
      res["OffsetList"] = offsetList ? boost::any(offsetList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalDiff") != m.end() && !m["TotalDiff"].empty()) {
      totalDiff = make_shared<long>(boost::any_cast<long>(m["TotalDiff"]));
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<long>(boost::any_cast<long>(m["LastTimestamp"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("OffsetList") != m.end() && !m["OffsetList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OffsetList"].type()) {
        GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OffsetList"]));
        offsetList = make_shared<GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetList>(model1);
      }
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
  shared_ptr<GetConsumerProgressResponseBodyConsumerProgressTopicList> topicList{};
  shared_ptr<long> lastTimestamp{};
  shared_ptr<long> totalDiff{};

  GetConsumerProgressResponseBodyConsumerProgress() {}

  explicit GetConsumerProgressResponseBodyConsumerProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topicList) {
      res["TopicList"] = topicList ? boost::any(topicList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (totalDiff) {
      res["TotalDiff"] = boost::any(*totalDiff);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TopicList") != m.end() && !m["TopicList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopicList"].type()) {
        GetConsumerProgressResponseBodyConsumerProgressTopicList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopicList"]));
        topicList = make_shared<GetConsumerProgressResponseBodyConsumerProgressTopicList>(model1);
      }
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<long>(boost::any_cast<long>(m["LastTimestamp"]));
    }
    if (m.find("TotalDiff") != m.end() && !m["TotalDiff"].empty()) {
      totalDiff = make_shared<long>(boost::any_cast<long>(m["TotalDiff"]));
    }
  }


  virtual ~GetConsumerProgressResponseBodyConsumerProgress() = default;
};
class GetConsumerProgressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetConsumerProgressResponseBodyConsumerProgress> consumerProgress{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  GetConsumerProgressResponseBody() {}

  explicit GetConsumerProgressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (consumerProgress) {
      res["ConsumerProgress"] = consumerProgress ? boost::any(consumerProgress->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ConsumerProgress") != m.end() && !m["ConsumerProgress"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConsumerProgress"].type()) {
        GetConsumerProgressResponseBodyConsumerProgress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConsumerProgress"]));
        consumerProgress = make_shared<GetConsumerProgressResponseBodyConsumerProgress>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<GetConsumerProgressResponseBody> body{};

  GetConsumerProgressResponse() {}

  explicit GetConsumerProgressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> regionId{};
  shared_ptr<string> orderId{};
  shared_ptr<vector<string>> instanceId{};
  shared_ptr<vector<GetInstanceListRequestTag>> tag{};

  GetInstanceListRequest() {}

  explicit GetInstanceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
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
class GetInstanceListResponseBodyInstanceListInstanceVO : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<long> createTime{};
  shared_ptr<long> deployType{};
  shared_ptr<GetInstanceListResponseBodyInstanceListInstanceVOTags> tags{};
  shared_ptr<long> diskType{};
  shared_ptr<string> sslEndPoint{};
  shared_ptr<string> allConfig{};
  shared_ptr<long> paidType{};
  shared_ptr<string> name{};
  shared_ptr<GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo> upgradeServiceDetailInfo{};
  shared_ptr<string> specType{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> securityGroup{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> serviceStatus{};
  shared_ptr<long> eipMax{};
  shared_ptr<string> regionId{};
  shared_ptr<long> msgRetain{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<long> expiredTime{};
  shared_ptr<long> topicNumLimit{};
  shared_ptr<string> zoneId{};
  shared_ptr<long> ioMax{};
  shared_ptr<string> endPoint{};

  GetInstanceListResponseBodyInstanceListInstanceVO() {}

  explicit GetInstanceListResponseBodyInstanceListInstanceVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (sslEndPoint) {
      res["SslEndPoint"] = boost::any(*sslEndPoint);
    }
    if (allConfig) {
      res["AllConfig"] = boost::any(*allConfig);
    }
    if (paidType) {
      res["PaidType"] = boost::any(*paidType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (upgradeServiceDetailInfo) {
      res["UpgradeServiceDetailInfo"] = upgradeServiceDetailInfo ? boost::any(upgradeServiceDetailInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (securityGroup) {
      res["SecurityGroup"] = boost::any(*securityGroup);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (msgRetain) {
      res["MsgRetain"] = boost::any(*msgRetain);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (topicNumLimit) {
      res["TopicNumLimit"] = boost::any(*topicNumLimit);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<long>(boost::any_cast<long>(m["DeployType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        GetInstanceListResponseBodyInstanceListInstanceVOTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<GetInstanceListResponseBodyInstanceListInstanceVOTags>(model1);
      }
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<long>(boost::any_cast<long>(m["DiskType"]));
    }
    if (m.find("SslEndPoint") != m.end() && !m["SslEndPoint"].empty()) {
      sslEndPoint = make_shared<string>(boost::any_cast<string>(m["SslEndPoint"]));
    }
    if (m.find("AllConfig") != m.end() && !m["AllConfig"].empty()) {
      allConfig = make_shared<string>(boost::any_cast<string>(m["AllConfig"]));
    }
    if (m.find("PaidType") != m.end() && !m["PaidType"].empty()) {
      paidType = make_shared<long>(boost::any_cast<long>(m["PaidType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UpgradeServiceDetailInfo") != m.end() && !m["UpgradeServiceDetailInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UpgradeServiceDetailInfo"].type()) {
        GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UpgradeServiceDetailInfo"]));
        upgradeServiceDetailInfo = make_shared<GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo>(model1);
      }
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("SecurityGroup") != m.end() && !m["SecurityGroup"].empty()) {
      securityGroup = make_shared<string>(boost::any_cast<string>(m["SecurityGroup"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<long>(boost::any_cast<long>(m["ServiceStatus"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("MsgRetain") != m.end() && !m["MsgRetain"].empty()) {
      msgRetain = make_shared<long>(boost::any_cast<long>(m["MsgRetain"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("TopicNumLimit") != m.end() && !m["TopicNumLimit"].empty()) {
      topicNumLimit = make_shared<long>(boost::any_cast<long>(m["TopicNumLimit"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
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
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetInstanceListResponseBodyInstanceList> instanceList{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  GetInstanceListResponseBody() {}

  explicit GetInstanceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceList) {
      res["InstanceList"] = instanceList ? boost::any(instanceList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceList"].type()) {
        GetInstanceListResponseBodyInstanceList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceList"]));
        instanceList = make_shared<GetInstanceListResponseBodyInstanceList>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<GetInstanceListResponseBody> body{};

  GetInstanceListResponse() {}

  explicit GetInstanceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceListResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceListResponse() = default;
};
class GetMetaProductListRequest : public Darabonba::Model {
public:
  shared_ptr<string> listNormal{};
  shared_ptr<string> regionId{};

  GetMetaProductListRequest() {}

  explicit GetMetaProductListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listNormal) {
      res["ListNormal"] = boost::any(*listNormal);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListNormal") != m.end() && !m["ListNormal"].empty()) {
      listNormal = make_shared<string>(boost::any_cast<string>(m["ListNormal"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetMetaProductListRequest() = default;
};
class GetMetaProductListResponseBodyMetaDataProductsNormalSpecVO : public Darabonba::Model {
public:
  shared_ptr<string> topicQuota{};
  shared_ptr<string> specType{};
  shared_ptr<string> deployType{};
  shared_ptr<string> diskSize{};
  shared_ptr<long> ioMax{};
  shared_ptr<string> diskType{};
  shared_ptr<string> regionId{};

  GetMetaProductListResponseBodyMetaDataProductsNormalSpecVO() {}

  explicit GetMetaProductListResponseBodyMetaDataProductsNormalSpecVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topicQuota) {
      res["TopicQuota"] = boost::any(*topicQuota);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TopicQuota") != m.end() && !m["TopicQuota"].empty()) {
      topicQuota = make_shared<string>(boost::any_cast<string>(m["TopicQuota"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<string>(boost::any_cast<string>(m["DiskSize"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetMetaProductListResponseBodyMetaDataProductsNormalSpecVO() = default;
};
class GetMetaProductListResponseBodyMetaDataProductsNormal : public Darabonba::Model {
public:
  shared_ptr<vector<GetMetaProductListResponseBodyMetaDataProductsNormalSpecVO>> specVO{};

  GetMetaProductListResponseBodyMetaDataProductsNormal() {}

  explicit GetMetaProductListResponseBodyMetaDataProductsNormal(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specVO) {
      vector<boost::any> temp1;
      for(auto item1:*specVO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpecVO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecVO") != m.end() && !m["SpecVO"].empty()) {
      if (typeid(vector<boost::any>) == m["SpecVO"].type()) {
        vector<GetMetaProductListResponseBodyMetaDataProductsNormalSpecVO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpecVO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMetaProductListResponseBodyMetaDataProductsNormalSpecVO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        specVO = make_shared<vector<GetMetaProductListResponseBodyMetaDataProductsNormalSpecVO>>(expect1);
      }
    }
  }


  virtual ~GetMetaProductListResponseBodyMetaDataProductsNormal() = default;
};
class GetMetaProductListResponseBodyMetaDataProductsProfessionalSpecVO : public Darabonba::Model {
public:
  shared_ptr<string> topicQuota{};
  shared_ptr<string> specType{};
  shared_ptr<string> deployType{};
  shared_ptr<string> diskSize{};
  shared_ptr<long> ioMax{};
  shared_ptr<string> diskType{};
  shared_ptr<string> regionId{};

  GetMetaProductListResponseBodyMetaDataProductsProfessionalSpecVO() {}

  explicit GetMetaProductListResponseBodyMetaDataProductsProfessionalSpecVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topicQuota) {
      res["TopicQuota"] = boost::any(*topicQuota);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TopicQuota") != m.end() && !m["TopicQuota"].empty()) {
      topicQuota = make_shared<string>(boost::any_cast<string>(m["TopicQuota"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<string>(boost::any_cast<string>(m["DiskSize"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetMetaProductListResponseBodyMetaDataProductsProfessionalSpecVO() = default;
};
class GetMetaProductListResponseBodyMetaDataProductsProfessional : public Darabonba::Model {
public:
  shared_ptr<vector<GetMetaProductListResponseBodyMetaDataProductsProfessionalSpecVO>> specVO{};

  GetMetaProductListResponseBodyMetaDataProductsProfessional() {}

  explicit GetMetaProductListResponseBodyMetaDataProductsProfessional(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specVO) {
      vector<boost::any> temp1;
      for(auto item1:*specVO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpecVO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecVO") != m.end() && !m["SpecVO"].empty()) {
      if (typeid(vector<boost::any>) == m["SpecVO"].type()) {
        vector<GetMetaProductListResponseBodyMetaDataProductsProfessionalSpecVO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpecVO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMetaProductListResponseBodyMetaDataProductsProfessionalSpecVO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        specVO = make_shared<vector<GetMetaProductListResponseBodyMetaDataProductsProfessionalSpecVO>>(expect1);
      }
    }
  }


  virtual ~GetMetaProductListResponseBodyMetaDataProductsProfessional() = default;
};
class GetMetaProductListResponseBodyMetaData : public Darabonba::Model {
public:
  shared_ptr<GetMetaProductListResponseBodyMetaDataProductsNormal> productsNormal{};
  shared_ptr<GetMetaProductListResponseBodyMetaDataProductsProfessional> productsProfessional{};
  shared_ptr<map<string, boost::any>> names{};

  GetMetaProductListResponseBodyMetaData() {}

  explicit GetMetaProductListResponseBodyMetaData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productsNormal) {
      res["ProductsNormal"] = productsNormal ? boost::any(productsNormal->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (productsProfessional) {
      res["ProductsProfessional"] = productsProfessional ? boost::any(productsProfessional->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (names) {
      res["Names"] = boost::any(*names);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductsNormal") != m.end() && !m["ProductsNormal"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductsNormal"].type()) {
        GetMetaProductListResponseBodyMetaDataProductsNormal model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductsNormal"]));
        productsNormal = make_shared<GetMetaProductListResponseBodyMetaDataProductsNormal>(model1);
      }
    }
    if (m.find("ProductsProfessional") != m.end() && !m["ProductsProfessional"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductsProfessional"].type()) {
        GetMetaProductListResponseBodyMetaDataProductsProfessional model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductsProfessional"]));
        productsProfessional = make_shared<GetMetaProductListResponseBodyMetaDataProductsProfessional>(model1);
      }
    }
    if (m.find("Names") != m.end() && !m["Names"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Names"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      names = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetMetaProductListResponseBodyMetaData() = default;
};
class GetMetaProductListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetMetaProductListResponseBodyMetaData> metaData{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  GetMetaProductListResponseBody() {}

  explicit GetMetaProductListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (metaData) {
      res["MetaData"] = metaData ? boost::any(metaData->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("MetaData") != m.end() && !m["MetaData"].empty()) {
      if (typeid(map<string, boost::any>) == m["MetaData"].type()) {
        GetMetaProductListResponseBodyMetaData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MetaData"]));
        metaData = make_shared<GetMetaProductListResponseBodyMetaData>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetMetaProductListResponseBody() = default;
};
class GetMetaProductListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMetaProductListResponseBody> body{};

  GetMetaProductListResponse() {}

  explicit GetMetaProductListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMetaProductListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMetaProductListResponseBody>(model1);
      }
    }
  }


  virtual ~GetMetaProductListResponse() = default;
};
class GetTopicListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> currentPage{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> regionId{};

  GetTopicListRequest() {}

  explicit GetTopicListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<string>(boost::any_cast<string>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<long> status{};
  shared_ptr<string> remark{};
  shared_ptr<long> createTime{};
  shared_ptr<string> topic{};
  shared_ptr<string> statusName{};
  shared_ptr<GetTopicListResponseBodyTopicListTopicVOTags> tags{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};

  GetTopicListResponseBodyTopicListTopicVO() {}

  explicit GetTopicListResponseBodyTopicListTopicVO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (statusName) {
      res["StatusName"] = boost::any(*statusName);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> total{};
  shared_ptr<GetTopicListResponseBodyTopicList> topicList{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  GetTopicListResponseBody() {}

  explicit GetTopicListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (topicList) {
      res["TopicList"] = topicList ? boost::any(topicList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("TopicList") != m.end() && !m["TopicList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopicList"].type()) {
        GetTopicListResponseBodyTopicList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopicList"]));
        topicList = make_shared<GetTopicListResponseBodyTopicList>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetTopicListResponseBody() = default;
};
class GetTopicListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTopicListResponseBody> body{};

  GetTopicListResponse() {}

  explicit GetTopicListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> topic{};
  shared_ptr<string> regionId{};

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
    if (topic) {
      res["Topic"] = boost::any(*topic);
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
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetTopicStatusRequest() = default;
};
class GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable : public Darabonba::Model {
public:
  shared_ptr<long> minOffset{};
  shared_ptr<string> topic{};
  shared_ptr<long> partition{};
  shared_ptr<long> lastUpdateTimestamp{};
  shared_ptr<long> maxOffset{};

  GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable() {}

  explicit GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (minOffset) {
      res["MinOffset"] = boost::any(*minOffset);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (partition) {
      res["Partition"] = boost::any(*partition);
    }
    if (lastUpdateTimestamp) {
      res["LastUpdateTimestamp"] = boost::any(*lastUpdateTimestamp);
    }
    if (maxOffset) {
      res["MaxOffset"] = boost::any(*maxOffset);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MinOffset") != m.end() && !m["MinOffset"].empty()) {
      minOffset = make_shared<long>(boost::any_cast<long>(m["MinOffset"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("Partition") != m.end() && !m["Partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["Partition"]));
    }
    if (m.find("LastUpdateTimestamp") != m.end() && !m["LastUpdateTimestamp"].empty()) {
      lastUpdateTimestamp = make_shared<long>(boost::any_cast<long>(m["LastUpdateTimestamp"]));
    }
    if (m.find("MaxOffset") != m.end() && !m["MaxOffset"].empty()) {
      maxOffset = make_shared<long>(boost::any_cast<long>(m["MaxOffset"]));
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
  shared_ptr<long> totalCount{};
  shared_ptr<GetTopicStatusResponseBodyTopicStatusOffsetTable> offsetTable{};

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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (offsetTable) {
      res["OffsetTable"] = offsetTable ? boost::any(offsetTable->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastTimeStamp") != m.end() && !m["LastTimeStamp"].empty()) {
      lastTimeStamp = make_shared<long>(boost::any_cast<long>(m["LastTimeStamp"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("OffsetTable") != m.end() && !m["OffsetTable"].empty()) {
      if (typeid(map<string, boost::any>) == m["OffsetTable"].type()) {
        GetTopicStatusResponseBodyTopicStatusOffsetTable model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OffsetTable"]));
        offsetTable = make_shared<GetTopicStatusResponseBodyTopicStatusOffsetTable>(model1);
      }
    }
  }


  virtual ~GetTopicStatusResponseBodyTopicStatus() = default;
};
class GetTopicStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetTopicStatusResponseBodyTopicStatus> topicStatus{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  GetTopicStatusResponseBody() {}

  explicit GetTopicStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (topicStatus) {
      res["TopicStatus"] = topicStatus ? boost::any(topicStatus->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TopicStatus") != m.end() && !m["TopicStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["TopicStatus"].type()) {
        GetTopicStatusResponseBodyTopicStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TopicStatus"]));
        topicStatus = make_shared<GetTopicStatusResponseBodyTopicStatus>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetTopicStatusResponseBody() = default;
};
class GetTopicStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTopicStatusResponseBody> body{};

  GetTopicStatusResponse() {}

  explicit GetTopicStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTopicStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTopicStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetTopicStatusResponse() = default;
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
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagValue{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tagKey{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
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
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceName{};

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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
  }


  virtual ~ModifyInstanceNameRequest() = default;
};
class ModifyInstanceNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  ModifyInstanceNameResponseBody() {}

  explicit ModifyInstanceNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<ModifyInstanceNameResponseBody> body{};

  ModifyInstanceNameResponse() {}

  explicit ModifyInstanceNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> instanceId{};
  shared_ptr<string> topic{};
  shared_ptr<string> regionId{};
  shared_ptr<long> addPartitionNum{};

  ModifyPartitionNumRequest() {}

  explicit ModifyPartitionNumRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (addPartitionNum) {
      res["AddPartitionNum"] = boost::any(*addPartitionNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AddPartitionNum") != m.end() && !m["AddPartitionNum"].empty()) {
      addPartitionNum = make_shared<long>(boost::any_cast<long>(m["AddPartitionNum"]));
    }
  }


  virtual ~ModifyPartitionNumRequest() = default;
};
class ModifyPartitionNumResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  ModifyPartitionNumResponseBody() {}

  explicit ModifyPartitionNumResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<ModifyPartitionNumResponseBody> body{};

  ModifyPartitionNumResponse() {}

  explicit ModifyPartitionNumResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPartitionNumResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPartitionNumResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPartitionNumResponse() = default;
};
class ModifyTopicRemarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> topic{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};

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
    if (topic) {
      res["Topic"] = boost::any(*topic);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Topic") != m.end() && !m["Topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["Topic"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~ModifyTopicRemarkRequest() = default;
};
class ModifyTopicRemarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  ModifyTopicRemarkResponseBody() {}

  explicit ModifyTopicRemarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<ModifyTopicRemarkResponseBody> body{};

  ModifyTopicRemarkResponse() {}

  explicit ModifyTopicRemarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyTopicRemarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyTopicRemarkResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyTopicRemarkResponse() = default;
};
class ReleaseInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> forceDeleteInstance{};

  ReleaseInstanceRequest() {}

  explicit ReleaseInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (forceDeleteInstance) {
      res["ForceDeleteInstance"] = boost::any(*forceDeleteInstance);
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
    if (m.find("ForceDeleteInstance") != m.end() && !m["ForceDeleteInstance"].empty()) {
      forceDeleteInstance = make_shared<bool>(boost::any_cast<bool>(m["ForceDeleteInstance"]));
    }
  }


  virtual ~ReleaseInstanceRequest() = default;
};
class ReleaseInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  ReleaseInstanceResponseBody() {}

  explicit ReleaseInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<ReleaseInstanceResponseBody> body{};

  ReleaseInstanceResponse() {}

  explicit ReleaseInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseInstanceResponse() = default;
};
class StartInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> deployModule{};
  shared_ptr<string> zoneId{};
  shared_ptr<bool> isEipInner{};
  shared_ptr<bool> isSetUserAndPassword{};
  shared_ptr<string> username{};
  shared_ptr<string> password{};
  shared_ptr<string> name{};
  shared_ptr<string> securityGroup{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<string> config{};
  shared_ptr<string> KMSKeyId{};

  StartInstanceRequest() {}

  explicit StartInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (deployModule) {
      res["DeployModule"] = boost::any(*deployModule);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (isEipInner) {
      res["IsEipInner"] = boost::any(*isEipInner);
    }
    if (isSetUserAndPassword) {
      res["IsSetUserAndPassword"] = boost::any(*isSetUserAndPassword);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (securityGroup) {
      res["SecurityGroup"] = boost::any(*securityGroup);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (KMSKeyId) {
      res["KMSKeyId"] = boost::any(*KMSKeyId);
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
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("DeployModule") != m.end() && !m["DeployModule"].empty()) {
      deployModule = make_shared<string>(boost::any_cast<string>(m["DeployModule"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("IsEipInner") != m.end() && !m["IsEipInner"].empty()) {
      isEipInner = make_shared<bool>(boost::any_cast<bool>(m["IsEipInner"]));
    }
    if (m.find("IsSetUserAndPassword") != m.end() && !m["IsSetUserAndPassword"].empty()) {
      isSetUserAndPassword = make_shared<bool>(boost::any_cast<bool>(m["IsSetUserAndPassword"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SecurityGroup") != m.end() && !m["SecurityGroup"].empty()) {
      securityGroup = make_shared<string>(boost::any_cast<string>(m["SecurityGroup"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("KMSKeyId") != m.end() && !m["KMSKeyId"].empty()) {
      KMSKeyId = make_shared<string>(boost::any_cast<string>(m["KMSKeyId"]));
    }
  }


  virtual ~StartInstanceRequest() = default;
};
class StartInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  StartInstanceResponseBody() {}

  explicit StartInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<StartInstanceResponseBody> body{};

  StartInstanceResponse() {}

  explicit StartInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StartInstanceResponse() = default;
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
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<bool> all{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
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
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> regionId{};
  shared_ptr<string> updateType{};
  shared_ptr<string> portRange{};
  shared_ptr<string> allowedListType{};
  shared_ptr<string> allowedListIp{};
  shared_ptr<string> instanceId{};

  UpdateAllowedIpRequest() {}

  explicit UpdateAllowedIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (updateType) {
      res["UpdateType"] = boost::any(*updateType);
    }
    if (portRange) {
      res["PortRange"] = boost::any(*portRange);
    }
    if (allowedListType) {
      res["AllowedListType"] = boost::any(*allowedListType);
    }
    if (allowedListIp) {
      res["AllowedListIp"] = boost::any(*allowedListIp);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("UpdateType") != m.end() && !m["UpdateType"].empty()) {
      updateType = make_shared<string>(boost::any_cast<string>(m["UpdateType"]));
    }
    if (m.find("PortRange") != m.end() && !m["PortRange"].empty()) {
      portRange = make_shared<string>(boost::any_cast<string>(m["PortRange"]));
    }
    if (m.find("AllowedListType") != m.end() && !m["AllowedListType"].empty()) {
      allowedListType = make_shared<string>(boost::any_cast<string>(m["AllowedListType"]));
    }
    if (m.find("AllowedListIp") != m.end() && !m["AllowedListIp"].empty()) {
      allowedListIp = make_shared<string>(boost::any_cast<string>(m["AllowedListIp"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateAllowedIpRequest() = default;
};
class UpdateAllowedIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  UpdateAllowedIpResponseBody() {}

  explicit UpdateAllowedIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<UpdateAllowedIpResponseBody> body{};

  UpdateAllowedIpResponse() {}

  explicit UpdateAllowedIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAllowedIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAllowedIpResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAllowedIpResponse() = default;
};
class UpdateInstanceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};

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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateInstanceConfigRequest() = default;
};
class UpdateInstanceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  UpdateInstanceConfigResponseBody() {}

  explicit UpdateInstanceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<UpdateInstanceConfigResponseBody> body{};

  UpdateInstanceConfigResponse() {}

  explicit UpdateInstanceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceConfigResponse() = default;
};
class UpgradeInstanceVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> targetVersion{};
  shared_ptr<string> regionId{};

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
    if (targetVersion) {
      res["TargetVersion"] = boost::any(*targetVersion);
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
    if (m.find("TargetVersion") != m.end() && !m["TargetVersion"].empty()) {
      targetVersion = make_shared<string>(boost::any_cast<string>(m["TargetVersion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpgradeInstanceVersionRequest() = default;
};
class UpgradeInstanceVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  UpgradeInstanceVersionResponseBody() {}

  explicit UpgradeInstanceVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<UpgradeInstanceVersionResponseBody> body{};

  UpgradeInstanceVersionResponse() {}

  explicit UpgradeInstanceVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeInstanceVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeInstanceVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeInstanceVersionResponse() = default;
};
class UpgradePostPayOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> topicQuota{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> ioMax{};
  shared_ptr<string> specType{};
  shared_ptr<long> eipMax{};
  shared_ptr<string> ioMaxSpec{};

  UpgradePostPayOrderRequest() {}

  explicit UpgradePostPayOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (topicQuota) {
      res["TopicQuota"] = boost::any(*topicQuota);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TopicQuota") != m.end() && !m["TopicQuota"].empty()) {
      topicQuota = make_shared<long>(boost::any_cast<long>(m["TopicQuota"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
  }


  virtual ~UpgradePostPayOrderRequest() = default;
};
class UpgradePostPayOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  UpgradePostPayOrderResponseBody() {}

  explicit UpgradePostPayOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<UpgradePostPayOrderResponseBody> body{};

  UpgradePostPayOrderResponse() {}

  explicit UpgradePostPayOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradePostPayOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradePostPayOrderResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradePostPayOrderResponse() = default;
};
class UpgradePrePayOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> topicQuota{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> regionId{};
  shared_ptr<long> ioMax{};
  shared_ptr<string> specType{};
  shared_ptr<long> eipMax{};
  shared_ptr<string> ioMaxSpec{};

  UpgradePrePayOrderRequest() {}

  explicit UpgradePrePayOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (topicQuota) {
      res["TopicQuota"] = boost::any(*topicQuota);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ioMax) {
      res["IoMax"] = boost::any(*ioMax);
    }
    if (specType) {
      res["SpecType"] = boost::any(*specType);
    }
    if (eipMax) {
      res["EipMax"] = boost::any(*eipMax);
    }
    if (ioMaxSpec) {
      res["IoMaxSpec"] = boost::any(*ioMaxSpec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TopicQuota") != m.end() && !m["TopicQuota"].empty()) {
      topicQuota = make_shared<long>(boost::any_cast<long>(m["TopicQuota"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("IoMax") != m.end() && !m["IoMax"].empty()) {
      ioMax = make_shared<long>(boost::any_cast<long>(m["IoMax"]));
    }
    if (m.find("SpecType") != m.end() && !m["SpecType"].empty()) {
      specType = make_shared<string>(boost::any_cast<string>(m["SpecType"]));
    }
    if (m.find("EipMax") != m.end() && !m["EipMax"].empty()) {
      eipMax = make_shared<long>(boost::any_cast<long>(m["EipMax"]));
    }
    if (m.find("IoMaxSpec") != m.end() && !m["IoMaxSpec"].empty()) {
      ioMaxSpec = make_shared<string>(boost::any_cast<string>(m["IoMaxSpec"]));
    }
  }


  virtual ~UpgradePrePayOrderRequest() = default;
};
class UpgradePrePayOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> code{};
  shared_ptr<bool> success{};

  UpgradePrePayOrderResponseBody() {}

  explicit UpgradePrePayOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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
  shared_ptr<UpgradePrePayOrderResponseBody> body{};

  UpgradePrePayOrderResponse() {}

  explicit UpgradePrePayOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  ConvertPostPayOrderResponse convertPostPayOrderWithOptions(shared_ptr<ConvertPostPayOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertPostPayOrderResponse convertPostPayOrder(shared_ptr<ConvertPostPayOrderRequest> request);
  CreateAclResponse createAclWithOptions(shared_ptr<CreateAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAclResponse createAcl(shared_ptr<CreateAclRequest> request);
  CreateConsumerGroupResponse createConsumerGroupWithOptions(shared_ptr<CreateConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConsumerGroupResponse createConsumerGroup(shared_ptr<CreateConsumerGroupRequest> request);
  CreatePostPayOrderResponse createPostPayOrderWithOptions(shared_ptr<CreatePostPayOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePostPayOrderResponse createPostPayOrder(shared_ptr<CreatePostPayOrderRequest> request);
  CreatePrePayOrderResponse createPrePayOrderWithOptions(shared_ptr<CreatePrePayOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePrePayOrderResponse createPrePayOrder(shared_ptr<CreatePrePayOrderRequest> request);
  CreateSaslUserResponse createSaslUserWithOptions(shared_ptr<CreateSaslUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSaslUserResponse createSaslUser(shared_ptr<CreateSaslUserRequest> request);
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
  DeleteTopicResponse deleteTopicWithOptions(shared_ptr<DeleteTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTopicResponse deleteTopic(shared_ptr<DeleteTopicRequest> request);
  DescribeAclsResponse describeAclsWithOptions(shared_ptr<DescribeAclsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAclsResponse describeAcls(shared_ptr<DescribeAclsRequest> request);
  DescribeNodeStatusResponse describeNodeStatusWithOptions(shared_ptr<DescribeNodeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNodeStatusResponse describeNodeStatus(shared_ptr<DescribeNodeStatusRequest> request);
  DescribeSaslUsersResponse describeSaslUsersWithOptions(shared_ptr<DescribeSaslUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSaslUsersResponse describeSaslUsers(shared_ptr<DescribeSaslUsersRequest> request);
  GetAllowedIpListResponse getAllowedIpListWithOptions(shared_ptr<GetAllowedIpListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAllowedIpListResponse getAllowedIpList(shared_ptr<GetAllowedIpListRequest> request);
  GetConsumerListResponse getConsumerListWithOptions(shared_ptr<GetConsumerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConsumerListResponse getConsumerList(shared_ptr<GetConsumerListRequest> request);
  GetConsumerProgressResponse getConsumerProgressWithOptions(shared_ptr<GetConsumerProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConsumerProgressResponse getConsumerProgress(shared_ptr<GetConsumerProgressRequest> request);
  GetInstanceListResponse getInstanceListWithOptions(shared_ptr<GetInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceListResponse getInstanceList(shared_ptr<GetInstanceListRequest> request);
  GetMetaProductListResponse getMetaProductListWithOptions(shared_ptr<GetMetaProductListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMetaProductListResponse getMetaProductList(shared_ptr<GetMetaProductListRequest> request);
  GetTopicListResponse getTopicListWithOptions(shared_ptr<GetTopicListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTopicListResponse getTopicList(shared_ptr<GetTopicListRequest> request);
  GetTopicStatusResponse getTopicStatusWithOptions(shared_ptr<GetTopicStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTopicStatusResponse getTopicStatus(shared_ptr<GetTopicStatusRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyInstanceNameResponse modifyInstanceNameWithOptions(shared_ptr<ModifyInstanceNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceNameResponse modifyInstanceName(shared_ptr<ModifyInstanceNameRequest> request);
  ModifyPartitionNumResponse modifyPartitionNumWithOptions(shared_ptr<ModifyPartitionNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPartitionNumResponse modifyPartitionNum(shared_ptr<ModifyPartitionNumRequest> request);
  ModifyTopicRemarkResponse modifyTopicRemarkWithOptions(shared_ptr<ModifyTopicRemarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyTopicRemarkResponse modifyTopicRemark(shared_ptr<ModifyTopicRemarkRequest> request);
  ReleaseInstanceResponse releaseInstanceWithOptions(shared_ptr<ReleaseInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseInstanceResponse releaseInstance(shared_ptr<ReleaseInstanceRequest> request);
  StartInstanceResponse startInstanceWithOptions(shared_ptr<StartInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartInstanceResponse startInstance(shared_ptr<StartInstanceRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateAllowedIpResponse updateAllowedIpWithOptions(shared_ptr<UpdateAllowedIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAllowedIpResponse updateAllowedIp(shared_ptr<UpdateAllowedIpRequest> request);
  UpdateInstanceConfigResponse updateInstanceConfigWithOptions(shared_ptr<UpdateInstanceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceConfigResponse updateInstanceConfig(shared_ptr<UpdateInstanceConfigRequest> request);
  UpgradeInstanceVersionResponse upgradeInstanceVersionWithOptions(shared_ptr<UpgradeInstanceVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeInstanceVersionResponse upgradeInstanceVersion(shared_ptr<UpgradeInstanceVersionRequest> request);
  UpgradePostPayOrderResponse upgradePostPayOrderWithOptions(shared_ptr<UpgradePostPayOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradePostPayOrderResponse upgradePostPayOrder(shared_ptr<UpgradePostPayOrderRequest> request);
  UpgradePrePayOrderResponse upgradePrePayOrderWithOptions(shared_ptr<UpgradePrePayOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradePrePayOrderResponse upgradePrePayOrder(shared_ptr<UpgradePrePayOrderRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Alikafka20190916

#endif
