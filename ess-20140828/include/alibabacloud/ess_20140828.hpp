// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ESS20140828_H_
#define ALIBABACLOUD_ESS20140828_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ess20140828 {
class AttachDBInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<bool> forceAttach{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> DBInstance{};

  AttachDBInstancesRequest() {}

  explicit AttachDBInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (forceAttach) {
      res["ForceAttach"] = boost::any(*forceAttach);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBInstance) {
      res["DBInstance"] = boost::any(*DBInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ForceAttach") != m.end() && !m["ForceAttach"].empty()) {
      forceAttach = make_shared<bool>(boost::any_cast<bool>(m["ForceAttach"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBInstance") != m.end() && !m["DBInstance"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DBInstance"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DBInstance"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      DBInstance = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AttachDBInstancesRequest() = default;
};
class AttachDBInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachDBInstancesResponseBody() {}

  explicit AttachDBInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachDBInstancesResponseBody() = default;
};
class AttachDBInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachDBInstancesResponseBody> body{};

  AttachDBInstancesResponse() {}

  explicit AttachDBInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachDBInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachDBInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~AttachDBInstancesResponse() = default;
};
class AttachInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<bool> entrusted{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<vector<string>> instanceId{};
  shared_ptr<vector<int>> loadBalancerWeight{};

  AttachInstancesRequest() {}

  explicit AttachInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (entrusted) {
      res["Entrusted"] = boost::any(*entrusted);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (loadBalancerWeight) {
      res["LoadBalancerWeight"] = boost::any(*loadBalancerWeight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("Entrusted") != m.end() && !m["Entrusted"].empty()) {
      entrusted = make_shared<bool>(boost::any_cast<bool>(m["Entrusted"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("LoadBalancerWeight") != m.end() && !m["LoadBalancerWeight"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["LoadBalancerWeight"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LoadBalancerWeight"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      loadBalancerWeight = make_shared<vector<int>>(toVec1);
    }
  }


  virtual ~AttachInstancesRequest() = default;
};
class AttachInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scalingActivityId{};

  AttachInstancesResponseBody() {}

  explicit AttachInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
  }


  virtual ~AttachInstancesResponseBody() = default;
};
class AttachInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachInstancesResponseBody> body{};

  AttachInstancesResponse() {}

  explicit AttachInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~AttachInstancesResponse() = default;
};
class AttachLoadBalancersRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<bool> forceAttach{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> loadBalancer{};

  AttachLoadBalancersRequest() {}

  explicit AttachLoadBalancersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (forceAttach) {
      res["ForceAttach"] = boost::any(*forceAttach);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (loadBalancer) {
      res["LoadBalancer"] = boost::any(*loadBalancer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ForceAttach") != m.end() && !m["ForceAttach"].empty()) {
      forceAttach = make_shared<bool>(boost::any_cast<bool>(m["ForceAttach"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("LoadBalancer") != m.end() && !m["LoadBalancer"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LoadBalancer"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LoadBalancer"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      loadBalancer = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AttachLoadBalancersRequest() = default;
};
class AttachLoadBalancersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachLoadBalancersResponseBody() {}

  explicit AttachLoadBalancersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachLoadBalancersResponseBody() = default;
};
class AttachLoadBalancersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachLoadBalancersResponseBody> body{};

  AttachLoadBalancersResponse() {}

  explicit AttachLoadBalancersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachLoadBalancersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachLoadBalancersResponseBody>(model1);
      }
    }
  }


  virtual ~AttachLoadBalancersResponse() = default;
};
class AttachVServerGroupsRequestVServerGroupVServerGroupAttribute : public Darabonba::Model {
public:
  shared_ptr<string> VServerGroupId{};
  shared_ptr<long> weight{};
  shared_ptr<long> port{};

  AttachVServerGroupsRequestVServerGroupVServerGroupAttribute() {}

  explicit AttachVServerGroupsRequestVServerGroupVServerGroupAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~AttachVServerGroupsRequestVServerGroupVServerGroupAttribute() = default;
};
class AttachVServerGroupsRequestVServerGroup : public Darabonba::Model {
public:
  shared_ptr<vector<AttachVServerGroupsRequestVServerGroupVServerGroupAttribute>> VServerGroupAttribute{};
  shared_ptr<string> loadBalancerId{};

  AttachVServerGroupsRequestVServerGroup() {}

  explicit AttachVServerGroupsRequestVServerGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*VServerGroupAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VServerGroupAttribute"] = boost::any(temp1);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupAttribute") != m.end() && !m["VServerGroupAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["VServerGroupAttribute"].type()) {
        vector<AttachVServerGroupsRequestVServerGroupVServerGroupAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VServerGroupAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachVServerGroupsRequestVServerGroupVServerGroupAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        VServerGroupAttribute = make_shared<vector<AttachVServerGroupsRequestVServerGroupVServerGroupAttribute>>(expect1);
      }
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
  }


  virtual ~AttachVServerGroupsRequestVServerGroup() = default;
};
class AttachVServerGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> forceAttach{};
  shared_ptr<vector<AttachVServerGroupsRequestVServerGroup>> VServerGroup{};

  AttachVServerGroupsRequest() {}

  explicit AttachVServerGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (forceAttach) {
      res["ForceAttach"] = boost::any(*forceAttach);
    }
    if (VServerGroup) {
      vector<boost::any> temp1;
      for(auto item1:*VServerGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VServerGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ForceAttach") != m.end() && !m["ForceAttach"].empty()) {
      forceAttach = make_shared<bool>(boost::any_cast<bool>(m["ForceAttach"]));
    }
    if (m.find("VServerGroup") != m.end() && !m["VServerGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["VServerGroup"].type()) {
        vector<AttachVServerGroupsRequestVServerGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VServerGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachVServerGroupsRequestVServerGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        VServerGroup = make_shared<vector<AttachVServerGroupsRequestVServerGroup>>(expect1);
      }
    }
  }


  virtual ~AttachVServerGroupsRequest() = default;
};
class AttachVServerGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachVServerGroupsResponseBody() {}

  explicit AttachVServerGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachVServerGroupsResponseBody() = default;
};
class AttachVServerGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachVServerGroupsResponseBody> body{};

  AttachVServerGroupsResponse() {}

  explicit AttachVServerGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachVServerGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachVServerGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~AttachVServerGroupsResponse() = default;
};
class CompleteLifecycleActionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> lifecycleHookId{};
  shared_ptr<string> lifecycleActionToken{};
  shared_ptr<string> lifecycleActionResult{};
  shared_ptr<string> clientToken{};

  CompleteLifecycleActionRequest() {}

  explicit CompleteLifecycleActionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (lifecycleHookId) {
      res["LifecycleHookId"] = boost::any(*lifecycleHookId);
    }
    if (lifecycleActionToken) {
      res["LifecycleActionToken"] = boost::any(*lifecycleActionToken);
    }
    if (lifecycleActionResult) {
      res["LifecycleActionResult"] = boost::any(*lifecycleActionResult);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("LifecycleHookId") != m.end() && !m["LifecycleHookId"].empty()) {
      lifecycleHookId = make_shared<string>(boost::any_cast<string>(m["LifecycleHookId"]));
    }
    if (m.find("LifecycleActionToken") != m.end() && !m["LifecycleActionToken"].empty()) {
      lifecycleActionToken = make_shared<string>(boost::any_cast<string>(m["LifecycleActionToken"]));
    }
    if (m.find("LifecycleActionResult") != m.end() && !m["LifecycleActionResult"].empty()) {
      lifecycleActionResult = make_shared<string>(boost::any_cast<string>(m["LifecycleActionResult"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~CompleteLifecycleActionRequest() = default;
};
class CompleteLifecycleActionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CompleteLifecycleActionResponseBody() {}

  explicit CompleteLifecycleActionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CompleteLifecycleActionResponseBody() = default;
};
class CompleteLifecycleActionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CompleteLifecycleActionResponseBody> body{};

  CompleteLifecycleActionResponse() {}

  explicit CompleteLifecycleActionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CompleteLifecycleActionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CompleteLifecycleActionResponseBody>(model1);
      }
    }
  }


  virtual ~CompleteLifecycleActionResponse() = default;
};
class CreateAlarmRequestDimension : public Darabonba::Model {
public:
  shared_ptr<string> dimensionKey{};
  shared_ptr<string> dimensionValue{};

  CreateAlarmRequestDimension() {}

  explicit CreateAlarmRequestDimension(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimensionKey) {
      res["DimensionKey"] = boost::any(*dimensionKey);
    }
    if (dimensionValue) {
      res["DimensionValue"] = boost::any(*dimensionValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DimensionKey") != m.end() && !m["DimensionKey"].empty()) {
      dimensionKey = make_shared<string>(boost::any_cast<string>(m["DimensionKey"]));
    }
    if (m.find("DimensionValue") != m.end() && !m["DimensionValue"].empty()) {
      dimensionValue = make_shared<string>(boost::any_cast<string>(m["DimensionValue"]));
    }
  }


  virtual ~CreateAlarmRequestDimension() = default;
};
class CreateAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> metricName{};
  shared_ptr<string> metricType{};
  shared_ptr<long> period{};
  shared_ptr<string> statistics{};
  shared_ptr<double> threshold{};
  shared_ptr<string> comparisonOperator{};
  shared_ptr<long> evaluationCount{};
  shared_ptr<long> groupId{};
  shared_ptr<string> effective{};
  shared_ptr<vector<string>> alarmAction{};
  shared_ptr<vector<CreateAlarmRequestDimension>> dimension{};

  CreateAlarmRequest() {}

  explicit CreateAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (metricType) {
      res["MetricType"] = boost::any(*metricType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (statistics) {
      res["Statistics"] = boost::any(*statistics);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (comparisonOperator) {
      res["ComparisonOperator"] = boost::any(*comparisonOperator);
    }
    if (evaluationCount) {
      res["EvaluationCount"] = boost::any(*evaluationCount);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (effective) {
      res["Effective"] = boost::any(*effective);
    }
    if (alarmAction) {
      res["AlarmAction"] = boost::any(*alarmAction);
    }
    if (dimension) {
      vector<boost::any> temp1;
      for(auto item1:*dimension){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimension"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("MetricType") != m.end() && !m["MetricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["MetricType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      statistics = make_shared<string>(boost::any_cast<string>(m["Statistics"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("ComparisonOperator") != m.end() && !m["ComparisonOperator"].empty()) {
      comparisonOperator = make_shared<string>(boost::any_cast<string>(m["ComparisonOperator"]));
    }
    if (m.find("EvaluationCount") != m.end() && !m["EvaluationCount"].empty()) {
      evaluationCount = make_shared<long>(boost::any_cast<long>(m["EvaluationCount"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("Effective") != m.end() && !m["Effective"].empty()) {
      effective = make_shared<string>(boost::any_cast<string>(m["Effective"]));
    }
    if (m.find("AlarmAction") != m.end() && !m["AlarmAction"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AlarmAction"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AlarmAction"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alarmAction = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Dimension") != m.end() && !m["Dimension"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimension"].type()) {
        vector<CreateAlarmRequestDimension> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimension"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAlarmRequestDimension model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimension = make_shared<vector<CreateAlarmRequestDimension>>(expect1);
      }
    }
  }


  virtual ~CreateAlarmRequest() = default;
};
class CreateAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> alarmTaskId{};

  CreateAlarmResponseBody() {}

  explicit CreateAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (alarmTaskId) {
      res["AlarmTaskId"] = boost::any(*alarmTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AlarmTaskId") != m.end() && !m["AlarmTaskId"].empty()) {
      alarmTaskId = make_shared<string>(boost::any_cast<string>(m["AlarmTaskId"]));
    }
  }


  virtual ~CreateAlarmResponseBody() = default;
};
class CreateAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAlarmResponseBody> body{};

  CreateAlarmResponse() {}

  explicit CreateAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAlarmResponse() = default;
};
class CreateLifecycleHookRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> lifecycleHookName{};
  shared_ptr<string> lifecycleTransition{};
  shared_ptr<string> defaultResult{};
  shared_ptr<long> heartbeatTimeout{};
  shared_ptr<string> notificationMetadata{};
  shared_ptr<string> notificationArn{};

  CreateLifecycleHookRequest() {}

  explicit CreateLifecycleHookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (lifecycleHookName) {
      res["LifecycleHookName"] = boost::any(*lifecycleHookName);
    }
    if (lifecycleTransition) {
      res["LifecycleTransition"] = boost::any(*lifecycleTransition);
    }
    if (defaultResult) {
      res["DefaultResult"] = boost::any(*defaultResult);
    }
    if (heartbeatTimeout) {
      res["HeartbeatTimeout"] = boost::any(*heartbeatTimeout);
    }
    if (notificationMetadata) {
      res["NotificationMetadata"] = boost::any(*notificationMetadata);
    }
    if (notificationArn) {
      res["NotificationArn"] = boost::any(*notificationArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("LifecycleHookName") != m.end() && !m["LifecycleHookName"].empty()) {
      lifecycleHookName = make_shared<string>(boost::any_cast<string>(m["LifecycleHookName"]));
    }
    if (m.find("LifecycleTransition") != m.end() && !m["LifecycleTransition"].empty()) {
      lifecycleTransition = make_shared<string>(boost::any_cast<string>(m["LifecycleTransition"]));
    }
    if (m.find("DefaultResult") != m.end() && !m["DefaultResult"].empty()) {
      defaultResult = make_shared<string>(boost::any_cast<string>(m["DefaultResult"]));
    }
    if (m.find("HeartbeatTimeout") != m.end() && !m["HeartbeatTimeout"].empty()) {
      heartbeatTimeout = make_shared<long>(boost::any_cast<long>(m["HeartbeatTimeout"]));
    }
    if (m.find("NotificationMetadata") != m.end() && !m["NotificationMetadata"].empty()) {
      notificationMetadata = make_shared<string>(boost::any_cast<string>(m["NotificationMetadata"]));
    }
    if (m.find("NotificationArn") != m.end() && !m["NotificationArn"].empty()) {
      notificationArn = make_shared<string>(boost::any_cast<string>(m["NotificationArn"]));
    }
  }


  virtual ~CreateLifecycleHookRequest() = default;
};
class CreateLifecycleHookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> lifecycleHookId{};

  CreateLifecycleHookResponseBody() {}

  explicit CreateLifecycleHookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (lifecycleHookId) {
      res["LifecycleHookId"] = boost::any(*lifecycleHookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("LifecycleHookId") != m.end() && !m["LifecycleHookId"].empty()) {
      lifecycleHookId = make_shared<string>(boost::any_cast<string>(m["LifecycleHookId"]));
    }
  }


  virtual ~CreateLifecycleHookResponseBody() = default;
};
class CreateLifecycleHookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateLifecycleHookResponseBody> body{};

  CreateLifecycleHookResponse() {}

  explicit CreateLifecycleHookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLifecycleHookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLifecycleHookResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLifecycleHookResponse() = default;
};
class CreateNotificationConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> notificationArn{};
  shared_ptr<vector<string>> notificationType{};

  CreateNotificationConfigurationRequest() {}

  explicit CreateNotificationConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (notificationArn) {
      res["NotificationArn"] = boost::any(*notificationArn);
    }
    if (notificationType) {
      res["NotificationType"] = boost::any(*notificationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("NotificationArn") != m.end() && !m["NotificationArn"].empty()) {
      notificationArn = make_shared<string>(boost::any_cast<string>(m["NotificationArn"]));
    }
    if (m.find("NotificationType") != m.end() && !m["NotificationType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NotificationType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NotificationType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notificationType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateNotificationConfigurationRequest() = default;
};
class CreateNotificationConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateNotificationConfigurationResponseBody() {}

  explicit CreateNotificationConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateNotificationConfigurationResponseBody() = default;
};
class CreateNotificationConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateNotificationConfigurationResponseBody> body{};

  CreateNotificationConfigurationResponse() {}

  explicit CreateNotificationConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateNotificationConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNotificationConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNotificationConfigurationResponse() = default;
};
class CreateScalingConfigurationRequestSystemDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<long> size{};
  shared_ptr<string> diskName{};
  shared_ptr<string> description{};
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<string> performanceLevel{};

  CreateScalingConfigurationRequestSystemDisk() {}

  explicit CreateScalingConfigurationRequestSystemDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (diskName) {
      res["DiskName"] = boost::any(*diskName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("DiskName") != m.end() && !m["DiskName"].empty()) {
      diskName = make_shared<string>(boost::any_cast<string>(m["DiskName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
  }


  virtual ~CreateScalingConfigurationRequestSystemDisk() = default;
};
class CreateScalingConfigurationRequestPrivatePoolOptions : public Darabonba::Model {
public:
  shared_ptr<string> matchCriteria{};
  shared_ptr<string> id{};

  CreateScalingConfigurationRequestPrivatePoolOptions() {}

  explicit CreateScalingConfigurationRequestPrivatePoolOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchCriteria) {
      res["MatchCriteria"] = boost::any(*matchCriteria);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchCriteria") != m.end() && !m["MatchCriteria"].empty()) {
      matchCriteria = make_shared<string>(boost::any_cast<string>(m["MatchCriteria"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateScalingConfigurationRequestPrivatePoolOptions() = default;
};
class CreateScalingConfigurationRequestInstanceTypeOverride : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<long> weightedCapacity{};

  CreateScalingConfigurationRequestInstanceTypeOverride() {}

  explicit CreateScalingConfigurationRequestInstanceTypeOverride(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (weightedCapacity) {
      res["WeightedCapacity"] = boost::any(*weightedCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("WeightedCapacity") != m.end() && !m["WeightedCapacity"].empty()) {
      weightedCapacity = make_shared<long>(boost::any_cast<long>(m["WeightedCapacity"]));
    }
  }


  virtual ~CreateScalingConfigurationRequestInstanceTypeOverride() = default;
};
class CreateScalingConfigurationRequestDataDisk : public Darabonba::Model {
public:
  shared_ptr<string> performanceLevel{};
  shared_ptr<string> description{};
  shared_ptr<string> snapshotId{};
  shared_ptr<long> size{};
  shared_ptr<string> device{};
  shared_ptr<string> diskName{};
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<string> category{};
  shared_ptr<string> KMSKeyId{};
  shared_ptr<bool> deleteWithInstance{};
  shared_ptr<string> encrypted{};

  CreateScalingConfigurationRequestDataDisk() {}

  explicit CreateScalingConfigurationRequestDataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (diskName) {
      res["DiskName"] = boost::any(*diskName);
    }
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (KMSKeyId) {
      res["KMSKeyId"] = boost::any(*KMSKeyId);
    }
    if (deleteWithInstance) {
      res["DeleteWithInstance"] = boost::any(*deleteWithInstance);
    }
    if (encrypted) {
      res["Encrypted"] = boost::any(*encrypted);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("DiskName") != m.end() && !m["DiskName"].empty()) {
      diskName = make_shared<string>(boost::any_cast<string>(m["DiskName"]));
    }
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("KMSKeyId") != m.end() && !m["KMSKeyId"].empty()) {
      KMSKeyId = make_shared<string>(boost::any_cast<string>(m["KMSKeyId"]));
    }
    if (m.find("DeleteWithInstance") != m.end() && !m["DeleteWithInstance"].empty()) {
      deleteWithInstance = make_shared<bool>(boost::any_cast<bool>(m["DeleteWithInstance"]));
    }
    if (m.find("Encrypted") != m.end() && !m["Encrypted"].empty()) {
      encrypted = make_shared<string>(boost::any_cast<string>(m["Encrypted"]));
    }
  }


  virtual ~CreateScalingConfigurationRequestDataDisk() = default;
};
class CreateScalingConfigurationRequestSpotPriceLimit : public Darabonba::Model {
public:
  shared_ptr<double> priceLimit{};
  shared_ptr<string> instanceType{};

  CreateScalingConfigurationRequestSpotPriceLimit() {}

  explicit CreateScalingConfigurationRequestSpotPriceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (priceLimit) {
      res["PriceLimit"] = boost::any(*priceLimit);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PriceLimit") != m.end() && !m["PriceLimit"].empty()) {
      priceLimit = make_shared<double>(boost::any_cast<double>(m["PriceLimit"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~CreateScalingConfigurationRequestSpotPriceLimit() = default;
};
class CreateScalingConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<CreateScalingConfigurationRequestSystemDisk> systemDisk{};
  shared_ptr<CreateScalingConfigurationRequestPrivatePoolOptions> privatePoolOptions{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> cpu{};
  shared_ptr<long> memory{};
  shared_ptr<string> deploymentSetId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> ioOptimized{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandwidthIn{};
  shared_ptr<long> internetMaxBandwidthOut{};
  shared_ptr<string> scalingConfigurationName{};
  shared_ptr<long> loadBalancerWeight{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> tags{};
  shared_ptr<string> userData{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> securityEnhancementStrategy{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> hostName{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<bool> passwordInherit{};
  shared_ptr<string> password{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> hpcClusterId{};
  shared_ptr<string> instanceDescription{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> ipv6AddressCount{};
  shared_ptr<string> creditSpecification{};
  shared_ptr<string> imageFamily{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> affinity{};
  shared_ptr<string> tenancy{};
  shared_ptr<map<string, boost::any>> schedulerOptions{};
  shared_ptr<long> spotDuration{};
  shared_ptr<string> spotInterruptionBehavior{};
  shared_ptr<vector<string>> instanceTypes{};
  shared_ptr<vector<CreateScalingConfigurationRequestInstanceTypeOverride>> instanceTypeOverride{};
  shared_ptr<vector<CreateScalingConfigurationRequestDataDisk>> dataDisk{};
  shared_ptr<vector<CreateScalingConfigurationRequestSpotPriceLimit>> spotPriceLimit{};
  shared_ptr<vector<string>> securityGroupIds{};

  CreateScalingConfigurationRequest() {}

  explicit CreateScalingConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (systemDisk) {
      res["SystemDisk"] = systemDisk ? boost::any(systemDisk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (privatePoolOptions) {
      res["PrivatePoolOptions"] = privatePoolOptions ? boost::any(privatePoolOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (deploymentSetId) {
      res["DeploymentSetId"] = boost::any(*deploymentSetId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (ioOptimized) {
      res["IoOptimized"] = boost::any(*ioOptimized);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (internetMaxBandwidthIn) {
      res["InternetMaxBandwidthIn"] = boost::any(*internetMaxBandwidthIn);
    }
    if (internetMaxBandwidthOut) {
      res["InternetMaxBandwidthOut"] = boost::any(*internetMaxBandwidthOut);
    }
    if (scalingConfigurationName) {
      res["ScalingConfigurationName"] = boost::any(*scalingConfigurationName);
    }
    if (loadBalancerWeight) {
      res["LoadBalancerWeight"] = boost::any(*loadBalancerWeight);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (securityEnhancementStrategy) {
      res["SecurityEnhancementStrategy"] = boost::any(*securityEnhancementStrategy);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (passwordInherit) {
      res["PasswordInherit"] = boost::any(*passwordInherit);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (hpcClusterId) {
      res["HpcClusterId"] = boost::any(*hpcClusterId);
    }
    if (instanceDescription) {
      res["InstanceDescription"] = boost::any(*instanceDescription);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ipv6AddressCount) {
      res["Ipv6AddressCount"] = boost::any(*ipv6AddressCount);
    }
    if (creditSpecification) {
      res["CreditSpecification"] = boost::any(*creditSpecification);
    }
    if (imageFamily) {
      res["ImageFamily"] = boost::any(*imageFamily);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (affinity) {
      res["Affinity"] = boost::any(*affinity);
    }
    if (tenancy) {
      res["Tenancy"] = boost::any(*tenancy);
    }
    if (schedulerOptions) {
      res["SchedulerOptions"] = boost::any(*schedulerOptions);
    }
    if (spotDuration) {
      res["SpotDuration"] = boost::any(*spotDuration);
    }
    if (spotInterruptionBehavior) {
      res["SpotInterruptionBehavior"] = boost::any(*spotInterruptionBehavior);
    }
    if (instanceTypes) {
      res["InstanceTypes"] = boost::any(*instanceTypes);
    }
    if (instanceTypeOverride) {
      vector<boost::any> temp1;
      for(auto item1:*instanceTypeOverride){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceTypeOverride"] = boost::any(temp1);
    }
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisk"] = boost::any(temp1);
    }
    if (spotPriceLimit) {
      vector<boost::any> temp1;
      for(auto item1:*spotPriceLimit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpotPriceLimit"] = boost::any(temp1);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SystemDisk") != m.end() && !m["SystemDisk"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemDisk"].type()) {
        CreateScalingConfigurationRequestSystemDisk model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemDisk"]));
        systemDisk = make_shared<CreateScalingConfigurationRequestSystemDisk>(model1);
      }
    }
    if (m.find("PrivatePoolOptions") != m.end() && !m["PrivatePoolOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrivatePoolOptions"].type()) {
        CreateScalingConfigurationRequestPrivatePoolOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrivatePoolOptions"]));
        privatePoolOptions = make_shared<CreateScalingConfigurationRequestPrivatePoolOptions>(model1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("DeploymentSetId") != m.end() && !m["DeploymentSetId"].empty()) {
      deploymentSetId = make_shared<string>(boost::any_cast<string>(m["DeploymentSetId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("IoOptimized") != m.end() && !m["IoOptimized"].empty()) {
      ioOptimized = make_shared<string>(boost::any_cast<string>(m["IoOptimized"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("InternetMaxBandwidthIn") != m.end() && !m["InternetMaxBandwidthIn"].empty()) {
      internetMaxBandwidthIn = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandwidthIn"]));
    }
    if (m.find("InternetMaxBandwidthOut") != m.end() && !m["InternetMaxBandwidthOut"].empty()) {
      internetMaxBandwidthOut = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandwidthOut"]));
    }
    if (m.find("ScalingConfigurationName") != m.end() && !m["ScalingConfigurationName"].empty()) {
      scalingConfigurationName = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationName"]));
    }
    if (m.find("LoadBalancerWeight") != m.end() && !m["LoadBalancerWeight"].empty()) {
      loadBalancerWeight = make_shared<long>(boost::any_cast<long>(m["LoadBalancerWeight"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("SecurityEnhancementStrategy") != m.end() && !m["SecurityEnhancementStrategy"].empty()) {
      securityEnhancementStrategy = make_shared<string>(boost::any_cast<string>(m["SecurityEnhancementStrategy"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("PasswordInherit") != m.end() && !m["PasswordInherit"].empty()) {
      passwordInherit = make_shared<bool>(boost::any_cast<bool>(m["PasswordInherit"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("HpcClusterId") != m.end() && !m["HpcClusterId"].empty()) {
      hpcClusterId = make_shared<string>(boost::any_cast<string>(m["HpcClusterId"]));
    }
    if (m.find("InstanceDescription") != m.end() && !m["InstanceDescription"].empty()) {
      instanceDescription = make_shared<string>(boost::any_cast<string>(m["InstanceDescription"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Ipv6AddressCount") != m.end() && !m["Ipv6AddressCount"].empty()) {
      ipv6AddressCount = make_shared<long>(boost::any_cast<long>(m["Ipv6AddressCount"]));
    }
    if (m.find("CreditSpecification") != m.end() && !m["CreditSpecification"].empty()) {
      creditSpecification = make_shared<string>(boost::any_cast<string>(m["CreditSpecification"]));
    }
    if (m.find("ImageFamily") != m.end() && !m["ImageFamily"].empty()) {
      imageFamily = make_shared<string>(boost::any_cast<string>(m["ImageFamily"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("Affinity") != m.end() && !m["Affinity"].empty()) {
      affinity = make_shared<string>(boost::any_cast<string>(m["Affinity"]));
    }
    if (m.find("Tenancy") != m.end() && !m["Tenancy"].empty()) {
      tenancy = make_shared<string>(boost::any_cast<string>(m["Tenancy"]));
    }
    if (m.find("SchedulerOptions") != m.end() && !m["SchedulerOptions"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["SchedulerOptions"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      schedulerOptions = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("SpotDuration") != m.end() && !m["SpotDuration"].empty()) {
      spotDuration = make_shared<long>(boost::any_cast<long>(m["SpotDuration"]));
    }
    if (m.find("SpotInterruptionBehavior") != m.end() && !m["SpotInterruptionBehavior"].empty()) {
      spotInterruptionBehavior = make_shared<string>(boost::any_cast<string>(m["SpotInterruptionBehavior"]));
    }
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceTypeOverride") != m.end() && !m["InstanceTypeOverride"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceTypeOverride"].type()) {
        vector<CreateScalingConfigurationRequestInstanceTypeOverride> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceTypeOverride"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateScalingConfigurationRequestInstanceTypeOverride model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceTypeOverride = make_shared<vector<CreateScalingConfigurationRequestInstanceTypeOverride>>(expect1);
      }
    }
    if (m.find("DataDisk") != m.end() && !m["DataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisk"].type()) {
        vector<CreateScalingConfigurationRequestDataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateScalingConfigurationRequestDataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<CreateScalingConfigurationRequestDataDisk>>(expect1);
      }
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      if (typeid(vector<boost::any>) == m["SpotPriceLimit"].type()) {
        vector<CreateScalingConfigurationRequestSpotPriceLimit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpotPriceLimit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateScalingConfigurationRequestSpotPriceLimit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spotPriceLimit = make_shared<vector<CreateScalingConfigurationRequestSpotPriceLimit>>(expect1);
      }
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateScalingConfigurationRequest() = default;
};
class CreateScalingConfigurationShrinkRequestSystemDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<long> size{};
  shared_ptr<string> diskName{};
  shared_ptr<string> description{};
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<string> performanceLevel{};

  CreateScalingConfigurationShrinkRequestSystemDisk() {}

  explicit CreateScalingConfigurationShrinkRequestSystemDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (diskName) {
      res["DiskName"] = boost::any(*diskName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("DiskName") != m.end() && !m["DiskName"].empty()) {
      diskName = make_shared<string>(boost::any_cast<string>(m["DiskName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
  }


  virtual ~CreateScalingConfigurationShrinkRequestSystemDisk() = default;
};
class CreateScalingConfigurationShrinkRequestPrivatePoolOptions : public Darabonba::Model {
public:
  shared_ptr<string> matchCriteria{};
  shared_ptr<string> id{};

  CreateScalingConfigurationShrinkRequestPrivatePoolOptions() {}

  explicit CreateScalingConfigurationShrinkRequestPrivatePoolOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchCriteria) {
      res["MatchCriteria"] = boost::any(*matchCriteria);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchCriteria") != m.end() && !m["MatchCriteria"].empty()) {
      matchCriteria = make_shared<string>(boost::any_cast<string>(m["MatchCriteria"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateScalingConfigurationShrinkRequestPrivatePoolOptions() = default;
};
class CreateScalingConfigurationShrinkRequestInstanceTypeOverride : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<long> weightedCapacity{};

  CreateScalingConfigurationShrinkRequestInstanceTypeOverride() {}

  explicit CreateScalingConfigurationShrinkRequestInstanceTypeOverride(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (weightedCapacity) {
      res["WeightedCapacity"] = boost::any(*weightedCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("WeightedCapacity") != m.end() && !m["WeightedCapacity"].empty()) {
      weightedCapacity = make_shared<long>(boost::any_cast<long>(m["WeightedCapacity"]));
    }
  }


  virtual ~CreateScalingConfigurationShrinkRequestInstanceTypeOverride() = default;
};
class CreateScalingConfigurationShrinkRequestDataDisk : public Darabonba::Model {
public:
  shared_ptr<string> performanceLevel{};
  shared_ptr<string> description{};
  shared_ptr<string> snapshotId{};
  shared_ptr<long> size{};
  shared_ptr<string> device{};
  shared_ptr<string> diskName{};
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<string> category{};
  shared_ptr<string> KMSKeyId{};
  shared_ptr<bool> deleteWithInstance{};
  shared_ptr<string> encrypted{};

  CreateScalingConfigurationShrinkRequestDataDisk() {}

  explicit CreateScalingConfigurationShrinkRequestDataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (diskName) {
      res["DiskName"] = boost::any(*diskName);
    }
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (KMSKeyId) {
      res["KMSKeyId"] = boost::any(*KMSKeyId);
    }
    if (deleteWithInstance) {
      res["DeleteWithInstance"] = boost::any(*deleteWithInstance);
    }
    if (encrypted) {
      res["Encrypted"] = boost::any(*encrypted);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("DiskName") != m.end() && !m["DiskName"].empty()) {
      diskName = make_shared<string>(boost::any_cast<string>(m["DiskName"]));
    }
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("KMSKeyId") != m.end() && !m["KMSKeyId"].empty()) {
      KMSKeyId = make_shared<string>(boost::any_cast<string>(m["KMSKeyId"]));
    }
    if (m.find("DeleteWithInstance") != m.end() && !m["DeleteWithInstance"].empty()) {
      deleteWithInstance = make_shared<bool>(boost::any_cast<bool>(m["DeleteWithInstance"]));
    }
    if (m.find("Encrypted") != m.end() && !m["Encrypted"].empty()) {
      encrypted = make_shared<string>(boost::any_cast<string>(m["Encrypted"]));
    }
  }


  virtual ~CreateScalingConfigurationShrinkRequestDataDisk() = default;
};
class CreateScalingConfigurationShrinkRequestSpotPriceLimit : public Darabonba::Model {
public:
  shared_ptr<double> priceLimit{};
  shared_ptr<string> instanceType{};

  CreateScalingConfigurationShrinkRequestSpotPriceLimit() {}

  explicit CreateScalingConfigurationShrinkRequestSpotPriceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (priceLimit) {
      res["PriceLimit"] = boost::any(*priceLimit);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PriceLimit") != m.end() && !m["PriceLimit"].empty()) {
      priceLimit = make_shared<double>(boost::any_cast<double>(m["PriceLimit"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~CreateScalingConfigurationShrinkRequestSpotPriceLimit() = default;
};
class CreateScalingConfigurationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<CreateScalingConfigurationShrinkRequestSystemDisk> systemDisk{};
  shared_ptr<CreateScalingConfigurationShrinkRequestPrivatePoolOptions> privatePoolOptions{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> cpu{};
  shared_ptr<long> memory{};
  shared_ptr<string> deploymentSetId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> ioOptimized{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandwidthIn{};
  shared_ptr<long> internetMaxBandwidthOut{};
  shared_ptr<string> scalingConfigurationName{};
  shared_ptr<long> loadBalancerWeight{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> tags{};
  shared_ptr<string> userData{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> securityEnhancementStrategy{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> hostName{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<bool> passwordInherit{};
  shared_ptr<string> password{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> hpcClusterId{};
  shared_ptr<string> instanceDescription{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> ipv6AddressCount{};
  shared_ptr<string> creditSpecification{};
  shared_ptr<string> imageFamily{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> affinity{};
  shared_ptr<string> tenancy{};
  shared_ptr<string> schedulerOptionsShrink{};
  shared_ptr<long> spotDuration{};
  shared_ptr<string> spotInterruptionBehavior{};
  shared_ptr<vector<string>> instanceTypes{};
  shared_ptr<vector<CreateScalingConfigurationShrinkRequestInstanceTypeOverride>> instanceTypeOverride{};
  shared_ptr<vector<CreateScalingConfigurationShrinkRequestDataDisk>> dataDisk{};
  shared_ptr<vector<CreateScalingConfigurationShrinkRequestSpotPriceLimit>> spotPriceLimit{};
  shared_ptr<vector<string>> securityGroupIds{};

  CreateScalingConfigurationShrinkRequest() {}

  explicit CreateScalingConfigurationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (systemDisk) {
      res["SystemDisk"] = systemDisk ? boost::any(systemDisk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (privatePoolOptions) {
      res["PrivatePoolOptions"] = privatePoolOptions ? boost::any(privatePoolOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (deploymentSetId) {
      res["DeploymentSetId"] = boost::any(*deploymentSetId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (ioOptimized) {
      res["IoOptimized"] = boost::any(*ioOptimized);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (internetMaxBandwidthIn) {
      res["InternetMaxBandwidthIn"] = boost::any(*internetMaxBandwidthIn);
    }
    if (internetMaxBandwidthOut) {
      res["InternetMaxBandwidthOut"] = boost::any(*internetMaxBandwidthOut);
    }
    if (scalingConfigurationName) {
      res["ScalingConfigurationName"] = boost::any(*scalingConfigurationName);
    }
    if (loadBalancerWeight) {
      res["LoadBalancerWeight"] = boost::any(*loadBalancerWeight);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (securityEnhancementStrategy) {
      res["SecurityEnhancementStrategy"] = boost::any(*securityEnhancementStrategy);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (passwordInherit) {
      res["PasswordInherit"] = boost::any(*passwordInherit);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (hpcClusterId) {
      res["HpcClusterId"] = boost::any(*hpcClusterId);
    }
    if (instanceDescription) {
      res["InstanceDescription"] = boost::any(*instanceDescription);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ipv6AddressCount) {
      res["Ipv6AddressCount"] = boost::any(*ipv6AddressCount);
    }
    if (creditSpecification) {
      res["CreditSpecification"] = boost::any(*creditSpecification);
    }
    if (imageFamily) {
      res["ImageFamily"] = boost::any(*imageFamily);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (affinity) {
      res["Affinity"] = boost::any(*affinity);
    }
    if (tenancy) {
      res["Tenancy"] = boost::any(*tenancy);
    }
    if (schedulerOptionsShrink) {
      res["SchedulerOptions"] = boost::any(*schedulerOptionsShrink);
    }
    if (spotDuration) {
      res["SpotDuration"] = boost::any(*spotDuration);
    }
    if (spotInterruptionBehavior) {
      res["SpotInterruptionBehavior"] = boost::any(*spotInterruptionBehavior);
    }
    if (instanceTypes) {
      res["InstanceTypes"] = boost::any(*instanceTypes);
    }
    if (instanceTypeOverride) {
      vector<boost::any> temp1;
      for(auto item1:*instanceTypeOverride){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceTypeOverride"] = boost::any(temp1);
    }
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisk"] = boost::any(temp1);
    }
    if (spotPriceLimit) {
      vector<boost::any> temp1;
      for(auto item1:*spotPriceLimit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpotPriceLimit"] = boost::any(temp1);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SystemDisk") != m.end() && !m["SystemDisk"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemDisk"].type()) {
        CreateScalingConfigurationShrinkRequestSystemDisk model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemDisk"]));
        systemDisk = make_shared<CreateScalingConfigurationShrinkRequestSystemDisk>(model1);
      }
    }
    if (m.find("PrivatePoolOptions") != m.end() && !m["PrivatePoolOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrivatePoolOptions"].type()) {
        CreateScalingConfigurationShrinkRequestPrivatePoolOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrivatePoolOptions"]));
        privatePoolOptions = make_shared<CreateScalingConfigurationShrinkRequestPrivatePoolOptions>(model1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("DeploymentSetId") != m.end() && !m["DeploymentSetId"].empty()) {
      deploymentSetId = make_shared<string>(boost::any_cast<string>(m["DeploymentSetId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("IoOptimized") != m.end() && !m["IoOptimized"].empty()) {
      ioOptimized = make_shared<string>(boost::any_cast<string>(m["IoOptimized"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("InternetMaxBandwidthIn") != m.end() && !m["InternetMaxBandwidthIn"].empty()) {
      internetMaxBandwidthIn = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandwidthIn"]));
    }
    if (m.find("InternetMaxBandwidthOut") != m.end() && !m["InternetMaxBandwidthOut"].empty()) {
      internetMaxBandwidthOut = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandwidthOut"]));
    }
    if (m.find("ScalingConfigurationName") != m.end() && !m["ScalingConfigurationName"].empty()) {
      scalingConfigurationName = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationName"]));
    }
    if (m.find("LoadBalancerWeight") != m.end() && !m["LoadBalancerWeight"].empty()) {
      loadBalancerWeight = make_shared<long>(boost::any_cast<long>(m["LoadBalancerWeight"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("SecurityEnhancementStrategy") != m.end() && !m["SecurityEnhancementStrategy"].empty()) {
      securityEnhancementStrategy = make_shared<string>(boost::any_cast<string>(m["SecurityEnhancementStrategy"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("PasswordInherit") != m.end() && !m["PasswordInherit"].empty()) {
      passwordInherit = make_shared<bool>(boost::any_cast<bool>(m["PasswordInherit"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("HpcClusterId") != m.end() && !m["HpcClusterId"].empty()) {
      hpcClusterId = make_shared<string>(boost::any_cast<string>(m["HpcClusterId"]));
    }
    if (m.find("InstanceDescription") != m.end() && !m["InstanceDescription"].empty()) {
      instanceDescription = make_shared<string>(boost::any_cast<string>(m["InstanceDescription"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Ipv6AddressCount") != m.end() && !m["Ipv6AddressCount"].empty()) {
      ipv6AddressCount = make_shared<long>(boost::any_cast<long>(m["Ipv6AddressCount"]));
    }
    if (m.find("CreditSpecification") != m.end() && !m["CreditSpecification"].empty()) {
      creditSpecification = make_shared<string>(boost::any_cast<string>(m["CreditSpecification"]));
    }
    if (m.find("ImageFamily") != m.end() && !m["ImageFamily"].empty()) {
      imageFamily = make_shared<string>(boost::any_cast<string>(m["ImageFamily"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("Affinity") != m.end() && !m["Affinity"].empty()) {
      affinity = make_shared<string>(boost::any_cast<string>(m["Affinity"]));
    }
    if (m.find("Tenancy") != m.end() && !m["Tenancy"].empty()) {
      tenancy = make_shared<string>(boost::any_cast<string>(m["Tenancy"]));
    }
    if (m.find("SchedulerOptions") != m.end() && !m["SchedulerOptions"].empty()) {
      schedulerOptionsShrink = make_shared<string>(boost::any_cast<string>(m["SchedulerOptions"]));
    }
    if (m.find("SpotDuration") != m.end() && !m["SpotDuration"].empty()) {
      spotDuration = make_shared<long>(boost::any_cast<long>(m["SpotDuration"]));
    }
    if (m.find("SpotInterruptionBehavior") != m.end() && !m["SpotInterruptionBehavior"].empty()) {
      spotInterruptionBehavior = make_shared<string>(boost::any_cast<string>(m["SpotInterruptionBehavior"]));
    }
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceTypeOverride") != m.end() && !m["InstanceTypeOverride"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceTypeOverride"].type()) {
        vector<CreateScalingConfigurationShrinkRequestInstanceTypeOverride> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceTypeOverride"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateScalingConfigurationShrinkRequestInstanceTypeOverride model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceTypeOverride = make_shared<vector<CreateScalingConfigurationShrinkRequestInstanceTypeOverride>>(expect1);
      }
    }
    if (m.find("DataDisk") != m.end() && !m["DataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisk"].type()) {
        vector<CreateScalingConfigurationShrinkRequestDataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateScalingConfigurationShrinkRequestDataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<CreateScalingConfigurationShrinkRequestDataDisk>>(expect1);
      }
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      if (typeid(vector<boost::any>) == m["SpotPriceLimit"].type()) {
        vector<CreateScalingConfigurationShrinkRequestSpotPriceLimit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpotPriceLimit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateScalingConfigurationShrinkRequestSpotPriceLimit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spotPriceLimit = make_shared<vector<CreateScalingConfigurationShrinkRequestSpotPriceLimit>>(expect1);
      }
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateScalingConfigurationShrinkRequest() = default;
};
class CreateScalingConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scalingConfigurationId{};

  CreateScalingConfigurationResponseBody() {}

  explicit CreateScalingConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scalingConfigurationId) {
      res["ScalingConfigurationId"] = boost::any(*scalingConfigurationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScalingConfigurationId") != m.end() && !m["ScalingConfigurationId"].empty()) {
      scalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationId"]));
    }
  }


  virtual ~CreateScalingConfigurationResponseBody() = default;
};
class CreateScalingConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateScalingConfigurationResponseBody> body{};

  CreateScalingConfigurationResponse() {}

  explicit CreateScalingConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScalingConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScalingConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScalingConfigurationResponse() = default;
};
class CreateScalingGroupRequestLifecycleHook : public Darabonba::Model {
public:
  shared_ptr<string> defaultResult{};
  shared_ptr<string> lifecycleHookName{};
  shared_ptr<string> lifecycleTransition{};
  shared_ptr<string> notificationMetadata{};
  shared_ptr<string> notificationArn{};
  shared_ptr<long> heartbeatTimeout{};

  CreateScalingGroupRequestLifecycleHook() {}

  explicit CreateScalingGroupRequestLifecycleHook(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultResult) {
      res["DefaultResult"] = boost::any(*defaultResult);
    }
    if (lifecycleHookName) {
      res["LifecycleHookName"] = boost::any(*lifecycleHookName);
    }
    if (lifecycleTransition) {
      res["LifecycleTransition"] = boost::any(*lifecycleTransition);
    }
    if (notificationMetadata) {
      res["NotificationMetadata"] = boost::any(*notificationMetadata);
    }
    if (notificationArn) {
      res["NotificationArn"] = boost::any(*notificationArn);
    }
    if (heartbeatTimeout) {
      res["HeartbeatTimeout"] = boost::any(*heartbeatTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultResult") != m.end() && !m["DefaultResult"].empty()) {
      defaultResult = make_shared<string>(boost::any_cast<string>(m["DefaultResult"]));
    }
    if (m.find("LifecycleHookName") != m.end() && !m["LifecycleHookName"].empty()) {
      lifecycleHookName = make_shared<string>(boost::any_cast<string>(m["LifecycleHookName"]));
    }
    if (m.find("LifecycleTransition") != m.end() && !m["LifecycleTransition"].empty()) {
      lifecycleTransition = make_shared<string>(boost::any_cast<string>(m["LifecycleTransition"]));
    }
    if (m.find("NotificationMetadata") != m.end() && !m["NotificationMetadata"].empty()) {
      notificationMetadata = make_shared<string>(boost::any_cast<string>(m["NotificationMetadata"]));
    }
    if (m.find("NotificationArn") != m.end() && !m["NotificationArn"].empty()) {
      notificationArn = make_shared<string>(boost::any_cast<string>(m["NotificationArn"]));
    }
    if (m.find("HeartbeatTimeout") != m.end() && !m["HeartbeatTimeout"].empty()) {
      heartbeatTimeout = make_shared<long>(boost::any_cast<long>(m["HeartbeatTimeout"]));
    }
  }


  virtual ~CreateScalingGroupRequestLifecycleHook() = default;
};
class CreateScalingGroupRequestVServerGroupVServerGroupAttribute : public Darabonba::Model {
public:
  shared_ptr<string> VServerGroupId{};
  shared_ptr<long> weight{};
  shared_ptr<long> port{};

  CreateScalingGroupRequestVServerGroupVServerGroupAttribute() {}

  explicit CreateScalingGroupRequestVServerGroupVServerGroupAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~CreateScalingGroupRequestVServerGroupVServerGroupAttribute() = default;
};
class CreateScalingGroupRequestVServerGroup : public Darabonba::Model {
public:
  shared_ptr<vector<CreateScalingGroupRequestVServerGroupVServerGroupAttribute>> VServerGroupAttribute{};
  shared_ptr<string> loadBalancerId{};

  CreateScalingGroupRequestVServerGroup() {}

  explicit CreateScalingGroupRequestVServerGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*VServerGroupAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VServerGroupAttribute"] = boost::any(temp1);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupAttribute") != m.end() && !m["VServerGroupAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["VServerGroupAttribute"].type()) {
        vector<CreateScalingGroupRequestVServerGroupVServerGroupAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VServerGroupAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateScalingGroupRequestVServerGroupVServerGroupAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        VServerGroupAttribute = make_shared<vector<CreateScalingGroupRequestVServerGroupVServerGroupAttribute>>(expect1);
      }
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
  }


  virtual ~CreateScalingGroupRequestVServerGroup() = default;
};
class CreateScalingGroupRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateScalingGroupRequestTag() {}

  explicit CreateScalingGroupRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateScalingGroupRequestTag() = default;
};
class CreateScalingGroupRequestLaunchTemplateOverride : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<long> weightedCapacity{};

  CreateScalingGroupRequestLaunchTemplateOverride() {}

  explicit CreateScalingGroupRequestLaunchTemplateOverride(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (weightedCapacity) {
      res["WeightedCapacity"] = boost::any(*weightedCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("WeightedCapacity") != m.end() && !m["WeightedCapacity"].empty()) {
      weightedCapacity = make_shared<long>(boost::any_cast<long>(m["WeightedCapacity"]));
    }
  }


  virtual ~CreateScalingGroupRequestLaunchTemplateOverride() = default;
};
class CreateScalingGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> removalPolicy{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupName{};
  shared_ptr<string> launchTemplateId{};
  shared_ptr<string> launchTemplateVersion{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> minSize{};
  shared_ptr<long> maxSize{};
  shared_ptr<long> defaultCooldown{};
  shared_ptr<string> loadBalancerIds{};
  shared_ptr<string> DBInstanceIds{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> multiAZPolicy{};
  shared_ptr<string> healthCheckType{};
  shared_ptr<string> scalingPolicy{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> onDemandBaseCapacity{};
  shared_ptr<long> onDemandPercentageAboveBaseCapacity{};
  shared_ptr<bool> spotInstanceRemedy{};
  shared_ptr<bool> compensateWithOnDemand{};
  shared_ptr<long> spotInstancePools{};
  shared_ptr<long> desiredCapacity{};
  shared_ptr<bool> groupDeletionProtection{};
  shared_ptr<bool> scaleOutAmountCheck{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<vector<CreateScalingGroupRequestLifecycleHook>> lifecycleHook{};
  shared_ptr<vector<CreateScalingGroupRequestVServerGroup>> VServerGroup{};
  shared_ptr<vector<CreateScalingGroupRequestTag>> tag{};
  shared_ptr<vector<CreateScalingGroupRequestLaunchTemplateOverride>> launchTemplateOverride{};

  CreateScalingGroupRequest() {}

  explicit CreateScalingGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (removalPolicy) {
      res["RemovalPolicy"] = boost::any(*removalPolicy);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupName) {
      res["ScalingGroupName"] = boost::any(*scalingGroupName);
    }
    if (launchTemplateId) {
      res["LaunchTemplateId"] = boost::any(*launchTemplateId);
    }
    if (launchTemplateVersion) {
      res["LaunchTemplateVersion"] = boost::any(*launchTemplateVersion);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (minSize) {
      res["MinSize"] = boost::any(*minSize);
    }
    if (maxSize) {
      res["MaxSize"] = boost::any(*maxSize);
    }
    if (defaultCooldown) {
      res["DefaultCooldown"] = boost::any(*defaultCooldown);
    }
    if (loadBalancerIds) {
      res["LoadBalancerIds"] = boost::any(*loadBalancerIds);
    }
    if (DBInstanceIds) {
      res["DBInstanceIds"] = boost::any(*DBInstanceIds);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (multiAZPolicy) {
      res["MultiAZPolicy"] = boost::any(*multiAZPolicy);
    }
    if (healthCheckType) {
      res["HealthCheckType"] = boost::any(*healthCheckType);
    }
    if (scalingPolicy) {
      res["ScalingPolicy"] = boost::any(*scalingPolicy);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (onDemandBaseCapacity) {
      res["OnDemandBaseCapacity"] = boost::any(*onDemandBaseCapacity);
    }
    if (onDemandPercentageAboveBaseCapacity) {
      res["OnDemandPercentageAboveBaseCapacity"] = boost::any(*onDemandPercentageAboveBaseCapacity);
    }
    if (spotInstanceRemedy) {
      res["SpotInstanceRemedy"] = boost::any(*spotInstanceRemedy);
    }
    if (compensateWithOnDemand) {
      res["CompensateWithOnDemand"] = boost::any(*compensateWithOnDemand);
    }
    if (spotInstancePools) {
      res["SpotInstancePools"] = boost::any(*spotInstancePools);
    }
    if (desiredCapacity) {
      res["DesiredCapacity"] = boost::any(*desiredCapacity);
    }
    if (groupDeletionProtection) {
      res["GroupDeletionProtection"] = boost::any(*groupDeletionProtection);
    }
    if (scaleOutAmountCheck) {
      res["ScaleOutAmountCheck"] = boost::any(*scaleOutAmountCheck);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (lifecycleHook) {
      vector<boost::any> temp1;
      for(auto item1:*lifecycleHook){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LifecycleHook"] = boost::any(temp1);
    }
    if (VServerGroup) {
      vector<boost::any> temp1;
      for(auto item1:*VServerGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VServerGroup"] = boost::any(temp1);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (launchTemplateOverride) {
      vector<boost::any> temp1;
      for(auto item1:*launchTemplateOverride){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LaunchTemplateOverride"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RemovalPolicy") != m.end() && !m["RemovalPolicy"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RemovalPolicy"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RemovalPolicy"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      removalPolicy = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupName") != m.end() && !m["ScalingGroupName"].empty()) {
      scalingGroupName = make_shared<string>(boost::any_cast<string>(m["ScalingGroupName"]));
    }
    if (m.find("LaunchTemplateId") != m.end() && !m["LaunchTemplateId"].empty()) {
      launchTemplateId = make_shared<string>(boost::any_cast<string>(m["LaunchTemplateId"]));
    }
    if (m.find("LaunchTemplateVersion") != m.end() && !m["LaunchTemplateVersion"].empty()) {
      launchTemplateVersion = make_shared<string>(boost::any_cast<string>(m["LaunchTemplateVersion"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("MinSize") != m.end() && !m["MinSize"].empty()) {
      minSize = make_shared<long>(boost::any_cast<long>(m["MinSize"]));
    }
    if (m.find("MaxSize") != m.end() && !m["MaxSize"].empty()) {
      maxSize = make_shared<long>(boost::any_cast<long>(m["MaxSize"]));
    }
    if (m.find("DefaultCooldown") != m.end() && !m["DefaultCooldown"].empty()) {
      defaultCooldown = make_shared<long>(boost::any_cast<long>(m["DefaultCooldown"]));
    }
    if (m.find("LoadBalancerIds") != m.end() && !m["LoadBalancerIds"].empty()) {
      loadBalancerIds = make_shared<string>(boost::any_cast<string>(m["LoadBalancerIds"]));
    }
    if (m.find("DBInstanceIds") != m.end() && !m["DBInstanceIds"].empty()) {
      DBInstanceIds = make_shared<string>(boost::any_cast<string>(m["DBInstanceIds"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("MultiAZPolicy") != m.end() && !m["MultiAZPolicy"].empty()) {
      multiAZPolicy = make_shared<string>(boost::any_cast<string>(m["MultiAZPolicy"]));
    }
    if (m.find("HealthCheckType") != m.end() && !m["HealthCheckType"].empty()) {
      healthCheckType = make_shared<string>(boost::any_cast<string>(m["HealthCheckType"]));
    }
    if (m.find("ScalingPolicy") != m.end() && !m["ScalingPolicy"].empty()) {
      scalingPolicy = make_shared<string>(boost::any_cast<string>(m["ScalingPolicy"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OnDemandBaseCapacity") != m.end() && !m["OnDemandBaseCapacity"].empty()) {
      onDemandBaseCapacity = make_shared<long>(boost::any_cast<long>(m["OnDemandBaseCapacity"]));
    }
    if (m.find("OnDemandPercentageAboveBaseCapacity") != m.end() && !m["OnDemandPercentageAboveBaseCapacity"].empty()) {
      onDemandPercentageAboveBaseCapacity = make_shared<long>(boost::any_cast<long>(m["OnDemandPercentageAboveBaseCapacity"]));
    }
    if (m.find("SpotInstanceRemedy") != m.end() && !m["SpotInstanceRemedy"].empty()) {
      spotInstanceRemedy = make_shared<bool>(boost::any_cast<bool>(m["SpotInstanceRemedy"]));
    }
    if (m.find("CompensateWithOnDemand") != m.end() && !m["CompensateWithOnDemand"].empty()) {
      compensateWithOnDemand = make_shared<bool>(boost::any_cast<bool>(m["CompensateWithOnDemand"]));
    }
    if (m.find("SpotInstancePools") != m.end() && !m["SpotInstancePools"].empty()) {
      spotInstancePools = make_shared<long>(boost::any_cast<long>(m["SpotInstancePools"]));
    }
    if (m.find("DesiredCapacity") != m.end() && !m["DesiredCapacity"].empty()) {
      desiredCapacity = make_shared<long>(boost::any_cast<long>(m["DesiredCapacity"]));
    }
    if (m.find("GroupDeletionProtection") != m.end() && !m["GroupDeletionProtection"].empty()) {
      groupDeletionProtection = make_shared<bool>(boost::any_cast<bool>(m["GroupDeletionProtection"]));
    }
    if (m.find("ScaleOutAmountCheck") != m.end() && !m["ScaleOutAmountCheck"].empty()) {
      scaleOutAmountCheck = make_shared<bool>(boost::any_cast<bool>(m["ScaleOutAmountCheck"]));
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
    if (m.find("LifecycleHook") != m.end() && !m["LifecycleHook"].empty()) {
      if (typeid(vector<boost::any>) == m["LifecycleHook"].type()) {
        vector<CreateScalingGroupRequestLifecycleHook> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LifecycleHook"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateScalingGroupRequestLifecycleHook model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lifecycleHook = make_shared<vector<CreateScalingGroupRequestLifecycleHook>>(expect1);
      }
    }
    if (m.find("VServerGroup") != m.end() && !m["VServerGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["VServerGroup"].type()) {
        vector<CreateScalingGroupRequestVServerGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VServerGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateScalingGroupRequestVServerGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        VServerGroup = make_shared<vector<CreateScalingGroupRequestVServerGroup>>(expect1);
      }
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateScalingGroupRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateScalingGroupRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateScalingGroupRequestTag>>(expect1);
      }
    }
    if (m.find("LaunchTemplateOverride") != m.end() && !m["LaunchTemplateOverride"].empty()) {
      if (typeid(vector<boost::any>) == m["LaunchTemplateOverride"].type()) {
        vector<CreateScalingGroupRequestLaunchTemplateOverride> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LaunchTemplateOverride"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateScalingGroupRequestLaunchTemplateOverride model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        launchTemplateOverride = make_shared<vector<CreateScalingGroupRequestLaunchTemplateOverride>>(expect1);
      }
    }
  }


  virtual ~CreateScalingGroupRequest() = default;
};
class CreateScalingGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scalingGroupId{};

  CreateScalingGroupResponseBody() {}

  explicit CreateScalingGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~CreateScalingGroupResponseBody() = default;
};
class CreateScalingGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateScalingGroupResponseBody> body{};

  CreateScalingGroupResponse() {}

  explicit CreateScalingGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScalingGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScalingGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScalingGroupResponse() = default;
};
class CreateScalingRuleRequestStepAdjustment : public Darabonba::Model {
public:
  shared_ptr<double> metricIntervalUpperBound{};
  shared_ptr<long> scalingAdjustment{};
  shared_ptr<double> metricIntervalLowerBound{};

  CreateScalingRuleRequestStepAdjustment() {}

  explicit CreateScalingRuleRequestStepAdjustment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricIntervalUpperBound) {
      res["MetricIntervalUpperBound"] = boost::any(*metricIntervalUpperBound);
    }
    if (scalingAdjustment) {
      res["ScalingAdjustment"] = boost::any(*scalingAdjustment);
    }
    if (metricIntervalLowerBound) {
      res["MetricIntervalLowerBound"] = boost::any(*metricIntervalLowerBound);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricIntervalUpperBound") != m.end() && !m["MetricIntervalUpperBound"].empty()) {
      metricIntervalUpperBound = make_shared<double>(boost::any_cast<double>(m["MetricIntervalUpperBound"]));
    }
    if (m.find("ScalingAdjustment") != m.end() && !m["ScalingAdjustment"].empty()) {
      scalingAdjustment = make_shared<long>(boost::any_cast<long>(m["ScalingAdjustment"]));
    }
    if (m.find("MetricIntervalLowerBound") != m.end() && !m["MetricIntervalLowerBound"].empty()) {
      metricIntervalLowerBound = make_shared<double>(boost::any_cast<double>(m["MetricIntervalLowerBound"]));
    }
  }


  virtual ~CreateScalingRuleRequestStepAdjustment() = default;
};
class CreateScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> scalingRuleName{};
  shared_ptr<long> cooldown{};
  shared_ptr<long> minAdjustmentMagnitude{};
  shared_ptr<string> adjustmentType{};
  shared_ptr<long> adjustmentValue{};
  shared_ptr<string> scalingRuleType{};
  shared_ptr<long> estimatedInstanceWarmup{};
  shared_ptr<string> metricName{};
  shared_ptr<double> targetValue{};
  shared_ptr<bool> disableScaleIn{};
  shared_ptr<long> scaleInEvaluationCount{};
  shared_ptr<long> scaleOutEvaluationCount{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> predictiveScalingMode{};
  shared_ptr<string> predictiveValueBehavior{};
  shared_ptr<long> predictiveValueBuffer{};
  shared_ptr<long> predictiveTaskBufferTime{};
  shared_ptr<long> initialMaxSize{};
  shared_ptr<vector<CreateScalingRuleRequestStepAdjustment>> stepAdjustment{};

  CreateScalingRuleRequest() {}

  explicit CreateScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    if (cooldown) {
      res["Cooldown"] = boost::any(*cooldown);
    }
    if (minAdjustmentMagnitude) {
      res["MinAdjustmentMagnitude"] = boost::any(*minAdjustmentMagnitude);
    }
    if (adjustmentType) {
      res["AdjustmentType"] = boost::any(*adjustmentType);
    }
    if (adjustmentValue) {
      res["AdjustmentValue"] = boost::any(*adjustmentValue);
    }
    if (scalingRuleType) {
      res["ScalingRuleType"] = boost::any(*scalingRuleType);
    }
    if (estimatedInstanceWarmup) {
      res["EstimatedInstanceWarmup"] = boost::any(*estimatedInstanceWarmup);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (targetValue) {
      res["TargetValue"] = boost::any(*targetValue);
    }
    if (disableScaleIn) {
      res["DisableScaleIn"] = boost::any(*disableScaleIn);
    }
    if (scaleInEvaluationCount) {
      res["ScaleInEvaluationCount"] = boost::any(*scaleInEvaluationCount);
    }
    if (scaleOutEvaluationCount) {
      res["ScaleOutEvaluationCount"] = boost::any(*scaleOutEvaluationCount);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (predictiveScalingMode) {
      res["PredictiveScalingMode"] = boost::any(*predictiveScalingMode);
    }
    if (predictiveValueBehavior) {
      res["PredictiveValueBehavior"] = boost::any(*predictiveValueBehavior);
    }
    if (predictiveValueBuffer) {
      res["PredictiveValueBuffer"] = boost::any(*predictiveValueBuffer);
    }
    if (predictiveTaskBufferTime) {
      res["PredictiveTaskBufferTime"] = boost::any(*predictiveTaskBufferTime);
    }
    if (initialMaxSize) {
      res["InitialMaxSize"] = boost::any(*initialMaxSize);
    }
    if (stepAdjustment) {
      vector<boost::any> temp1;
      for(auto item1:*stepAdjustment){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StepAdjustment"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      scalingRuleName = make_shared<string>(boost::any_cast<string>(m["ScalingRuleName"]));
    }
    if (m.find("Cooldown") != m.end() && !m["Cooldown"].empty()) {
      cooldown = make_shared<long>(boost::any_cast<long>(m["Cooldown"]));
    }
    if (m.find("MinAdjustmentMagnitude") != m.end() && !m["MinAdjustmentMagnitude"].empty()) {
      minAdjustmentMagnitude = make_shared<long>(boost::any_cast<long>(m["MinAdjustmentMagnitude"]));
    }
    if (m.find("AdjustmentType") != m.end() && !m["AdjustmentType"].empty()) {
      adjustmentType = make_shared<string>(boost::any_cast<string>(m["AdjustmentType"]));
    }
    if (m.find("AdjustmentValue") != m.end() && !m["AdjustmentValue"].empty()) {
      adjustmentValue = make_shared<long>(boost::any_cast<long>(m["AdjustmentValue"]));
    }
    if (m.find("ScalingRuleType") != m.end() && !m["ScalingRuleType"].empty()) {
      scalingRuleType = make_shared<string>(boost::any_cast<string>(m["ScalingRuleType"]));
    }
    if (m.find("EstimatedInstanceWarmup") != m.end() && !m["EstimatedInstanceWarmup"].empty()) {
      estimatedInstanceWarmup = make_shared<long>(boost::any_cast<long>(m["EstimatedInstanceWarmup"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("TargetValue") != m.end() && !m["TargetValue"].empty()) {
      targetValue = make_shared<double>(boost::any_cast<double>(m["TargetValue"]));
    }
    if (m.find("DisableScaleIn") != m.end() && !m["DisableScaleIn"].empty()) {
      disableScaleIn = make_shared<bool>(boost::any_cast<bool>(m["DisableScaleIn"]));
    }
    if (m.find("ScaleInEvaluationCount") != m.end() && !m["ScaleInEvaluationCount"].empty()) {
      scaleInEvaluationCount = make_shared<long>(boost::any_cast<long>(m["ScaleInEvaluationCount"]));
    }
    if (m.find("ScaleOutEvaluationCount") != m.end() && !m["ScaleOutEvaluationCount"].empty()) {
      scaleOutEvaluationCount = make_shared<long>(boost::any_cast<long>(m["ScaleOutEvaluationCount"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("PredictiveScalingMode") != m.end() && !m["PredictiveScalingMode"].empty()) {
      predictiveScalingMode = make_shared<string>(boost::any_cast<string>(m["PredictiveScalingMode"]));
    }
    if (m.find("PredictiveValueBehavior") != m.end() && !m["PredictiveValueBehavior"].empty()) {
      predictiveValueBehavior = make_shared<string>(boost::any_cast<string>(m["PredictiveValueBehavior"]));
    }
    if (m.find("PredictiveValueBuffer") != m.end() && !m["PredictiveValueBuffer"].empty()) {
      predictiveValueBuffer = make_shared<long>(boost::any_cast<long>(m["PredictiveValueBuffer"]));
    }
    if (m.find("PredictiveTaskBufferTime") != m.end() && !m["PredictiveTaskBufferTime"].empty()) {
      predictiveTaskBufferTime = make_shared<long>(boost::any_cast<long>(m["PredictiveTaskBufferTime"]));
    }
    if (m.find("InitialMaxSize") != m.end() && !m["InitialMaxSize"].empty()) {
      initialMaxSize = make_shared<long>(boost::any_cast<long>(m["InitialMaxSize"]));
    }
    if (m.find("StepAdjustment") != m.end() && !m["StepAdjustment"].empty()) {
      if (typeid(vector<boost::any>) == m["StepAdjustment"].type()) {
        vector<CreateScalingRuleRequestStepAdjustment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StepAdjustment"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateScalingRuleRequestStepAdjustment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stepAdjustment = make_shared<vector<CreateScalingRuleRequestStepAdjustment>>(expect1);
      }
    }
  }


  virtual ~CreateScalingRuleRequest() = default;
};
class CreateScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> scalingRuleAri{};
  shared_ptr<string> requestId{};
  shared_ptr<string> scalingRuleId{};

  CreateScalingRuleResponseBody() {}

  explicit CreateScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingRuleAri) {
      res["ScalingRuleAri"] = boost::any(*scalingRuleAri);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scalingRuleId) {
      res["ScalingRuleId"] = boost::any(*scalingRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingRuleAri") != m.end() && !m["ScalingRuleAri"].empty()) {
      scalingRuleAri = make_shared<string>(boost::any_cast<string>(m["ScalingRuleAri"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScalingRuleId") != m.end() && !m["ScalingRuleId"].empty()) {
      scalingRuleId = make_shared<string>(boost::any_cast<string>(m["ScalingRuleId"]));
    }
  }


  virtual ~CreateScalingRuleResponseBody() = default;
};
class CreateScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateScalingRuleResponseBody> body{};

  CreateScalingRuleResponse() {}

  explicit CreateScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScalingRuleResponse() = default;
};
class CreateScheduledTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scheduledTaskName{};
  shared_ptr<string> description{};
  shared_ptr<string> scheduledAction{};
  shared_ptr<string> recurrenceEndTime{};
  shared_ptr<string> launchTime{};
  shared_ptr<string> recurrenceType{};
  shared_ptr<string> recurrenceValue{};
  shared_ptr<bool> taskEnabled{};
  shared_ptr<long> launchExpirationTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> minValue{};
  shared_ptr<long> maxValue{};
  shared_ptr<long> desiredCapacity{};
  shared_ptr<string> scalingGroupId{};

  CreateScheduledTaskRequest() {}

  explicit CreateScheduledTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scheduledTaskName) {
      res["ScheduledTaskName"] = boost::any(*scheduledTaskName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (scheduledAction) {
      res["ScheduledAction"] = boost::any(*scheduledAction);
    }
    if (recurrenceEndTime) {
      res["RecurrenceEndTime"] = boost::any(*recurrenceEndTime);
    }
    if (launchTime) {
      res["LaunchTime"] = boost::any(*launchTime);
    }
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (recurrenceValue) {
      res["RecurrenceValue"] = boost::any(*recurrenceValue);
    }
    if (taskEnabled) {
      res["TaskEnabled"] = boost::any(*taskEnabled);
    }
    if (launchExpirationTime) {
      res["LaunchExpirationTime"] = boost::any(*launchExpirationTime);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (desiredCapacity) {
      res["DesiredCapacity"] = boost::any(*desiredCapacity);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScheduledTaskName") != m.end() && !m["ScheduledTaskName"].empty()) {
      scheduledTaskName = make_shared<string>(boost::any_cast<string>(m["ScheduledTaskName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ScheduledAction") != m.end() && !m["ScheduledAction"].empty()) {
      scheduledAction = make_shared<string>(boost::any_cast<string>(m["ScheduledAction"]));
    }
    if (m.find("RecurrenceEndTime") != m.end() && !m["RecurrenceEndTime"].empty()) {
      recurrenceEndTime = make_shared<string>(boost::any_cast<string>(m["RecurrenceEndTime"]));
    }
    if (m.find("LaunchTime") != m.end() && !m["LaunchTime"].empty()) {
      launchTime = make_shared<string>(boost::any_cast<string>(m["LaunchTime"]));
    }
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("RecurrenceValue") != m.end() && !m["RecurrenceValue"].empty()) {
      recurrenceValue = make_shared<string>(boost::any_cast<string>(m["RecurrenceValue"]));
    }
    if (m.find("TaskEnabled") != m.end() && !m["TaskEnabled"].empty()) {
      taskEnabled = make_shared<bool>(boost::any_cast<bool>(m["TaskEnabled"]));
    }
    if (m.find("LaunchExpirationTime") != m.end() && !m["LaunchExpirationTime"].empty()) {
      launchExpirationTime = make_shared<long>(boost::any_cast<long>(m["LaunchExpirationTime"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("DesiredCapacity") != m.end() && !m["DesiredCapacity"].empty()) {
      desiredCapacity = make_shared<long>(boost::any_cast<long>(m["DesiredCapacity"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~CreateScheduledTaskRequest() = default;
};
class CreateScheduledTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scheduledTaskId{};

  CreateScheduledTaskResponseBody() {}

  explicit CreateScheduledTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scheduledTaskId) {
      res["ScheduledTaskId"] = boost::any(*scheduledTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScheduledTaskId") != m.end() && !m["ScheduledTaskId"].empty()) {
      scheduledTaskId = make_shared<string>(boost::any_cast<string>(m["ScheduledTaskId"]));
    }
  }


  virtual ~CreateScheduledTaskResponseBody() = default;
};
class CreateScheduledTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateScheduledTaskResponseBody> body{};

  CreateScheduledTaskResponse() {}

  explicit CreateScheduledTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScheduledTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScheduledTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScheduledTaskResponse() = default;
};
class DeactivateScalingConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingConfigurationId{};
  shared_ptr<string> ownerAccount{};

  DeactivateScalingConfigurationRequest() {}

  explicit DeactivateScalingConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingConfigurationId) {
      res["ScalingConfigurationId"] = boost::any(*scalingConfigurationId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingConfigurationId") != m.end() && !m["ScalingConfigurationId"].empty()) {
      scalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DeactivateScalingConfigurationRequest() = default;
};
class DeactivateScalingConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeactivateScalingConfigurationResponseBody() {}

  explicit DeactivateScalingConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeactivateScalingConfigurationResponseBody() = default;
};
class DeactivateScalingConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeactivateScalingConfigurationResponseBody> body{};

  DeactivateScalingConfigurationResponse() {}

  explicit DeactivateScalingConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeactivateScalingConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeactivateScalingConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~DeactivateScalingConfigurationResponse() = default;
};
class DeleteAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> alarmTaskId{};

  DeleteAlarmRequest() {}

  explicit DeleteAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (alarmTaskId) {
      res["AlarmTaskId"] = boost::any(*alarmTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AlarmTaskId") != m.end() && !m["AlarmTaskId"].empty()) {
      alarmTaskId = make_shared<string>(boost::any_cast<string>(m["AlarmTaskId"]));
    }
  }


  virtual ~DeleteAlarmRequest() = default;
};
class DeleteAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> alarmTaskId{};

  DeleteAlarmResponseBody() {}

  explicit DeleteAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (alarmTaskId) {
      res["AlarmTaskId"] = boost::any(*alarmTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AlarmTaskId") != m.end() && !m["AlarmTaskId"].empty()) {
      alarmTaskId = make_shared<string>(boost::any_cast<string>(m["AlarmTaskId"]));
    }
  }


  virtual ~DeleteAlarmResponseBody() = default;
};
class DeleteAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAlarmResponseBody> body{};

  DeleteAlarmResponse() {}

  explicit DeleteAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAlarmResponse() = default;
};
class DeleteLifecycleHookRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> lifecycleHookId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> lifecycleHookName{};

  DeleteLifecycleHookRequest() {}

  explicit DeleteLifecycleHookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (lifecycleHookId) {
      res["LifecycleHookId"] = boost::any(*lifecycleHookId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (lifecycleHookName) {
      res["LifecycleHookName"] = boost::any(*lifecycleHookName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("LifecycleHookId") != m.end() && !m["LifecycleHookId"].empty()) {
      lifecycleHookId = make_shared<string>(boost::any_cast<string>(m["LifecycleHookId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("LifecycleHookName") != m.end() && !m["LifecycleHookName"].empty()) {
      lifecycleHookName = make_shared<string>(boost::any_cast<string>(m["LifecycleHookName"]));
    }
  }


  virtual ~DeleteLifecycleHookRequest() = default;
};
class DeleteLifecycleHookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLifecycleHookResponseBody() {}

  explicit DeleteLifecycleHookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLifecycleHookResponseBody() = default;
};
class DeleteLifecycleHookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteLifecycleHookResponseBody> body{};

  DeleteLifecycleHookResponse() {}

  explicit DeleteLifecycleHookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLifecycleHookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLifecycleHookResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLifecycleHookResponse() = default;
};
class DeleteNotificationConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> notificationArn{};

  DeleteNotificationConfigurationRequest() {}

  explicit DeleteNotificationConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (notificationArn) {
      res["NotificationArn"] = boost::any(*notificationArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("NotificationArn") != m.end() && !m["NotificationArn"].empty()) {
      notificationArn = make_shared<string>(boost::any_cast<string>(m["NotificationArn"]));
    }
  }


  virtual ~DeleteNotificationConfigurationRequest() = default;
};
class DeleteNotificationConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteNotificationConfigurationResponseBody() {}

  explicit DeleteNotificationConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteNotificationConfigurationResponseBody() = default;
};
class DeleteNotificationConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteNotificationConfigurationResponseBody> body{};

  DeleteNotificationConfigurationResponse() {}

  explicit DeleteNotificationConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNotificationConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNotificationConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNotificationConfigurationResponse() = default;
};
class DeleteScalingConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingConfigurationId{};
  shared_ptr<string> ownerAccount{};

  DeleteScalingConfigurationRequest() {}

  explicit DeleteScalingConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingConfigurationId) {
      res["ScalingConfigurationId"] = boost::any(*scalingConfigurationId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingConfigurationId") != m.end() && !m["ScalingConfigurationId"].empty()) {
      scalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DeleteScalingConfigurationRequest() = default;
};
class DeleteScalingConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteScalingConfigurationResponseBody() {}

  explicit DeleteScalingConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteScalingConfigurationResponseBody() = default;
};
class DeleteScalingConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteScalingConfigurationResponseBody> body{};

  DeleteScalingConfigurationResponse() {}

  explicit DeleteScalingConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScalingConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScalingConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScalingConfigurationResponse() = default;
};
class DeleteScalingGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<bool> forceDelete{};
  shared_ptr<string> ownerAccount{};

  DeleteScalingGroupRequest() {}

  explicit DeleteScalingGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (forceDelete) {
      res["ForceDelete"] = boost::any(*forceDelete);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ForceDelete") != m.end() && !m["ForceDelete"].empty()) {
      forceDelete = make_shared<bool>(boost::any_cast<bool>(m["ForceDelete"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DeleteScalingGroupRequest() = default;
};
class DeleteScalingGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteScalingGroupResponseBody() {}

  explicit DeleteScalingGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteScalingGroupResponseBody() = default;
};
class DeleteScalingGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteScalingGroupResponseBody> body{};

  DeleteScalingGroupResponse() {}

  explicit DeleteScalingGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScalingGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScalingGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScalingGroupResponse() = default;
};
class DeleteScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingRuleId{};
  shared_ptr<string> ownerAccount{};

  DeleteScalingRuleRequest() {}

  explicit DeleteScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingRuleId) {
      res["ScalingRuleId"] = boost::any(*scalingRuleId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingRuleId") != m.end() && !m["ScalingRuleId"].empty()) {
      scalingRuleId = make_shared<string>(boost::any_cast<string>(m["ScalingRuleId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DeleteScalingRuleRequest() = default;
};
class DeleteScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteScalingRuleResponseBody() {}

  explicit DeleteScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteScalingRuleResponseBody() = default;
};
class DeleteScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteScalingRuleResponseBody> body{};

  DeleteScalingRuleResponse() {}

  explicit DeleteScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScalingRuleResponse() = default;
};
class DeleteScheduledTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scheduledTaskId{};
  shared_ptr<string> ownerAccount{};

  DeleteScheduledTaskRequest() {}

  explicit DeleteScheduledTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scheduledTaskId) {
      res["ScheduledTaskId"] = boost::any(*scheduledTaskId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScheduledTaskId") != m.end() && !m["ScheduledTaskId"].empty()) {
      scheduledTaskId = make_shared<string>(boost::any_cast<string>(m["ScheduledTaskId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DeleteScheduledTaskRequest() = default;
};
class DeleteScheduledTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteScheduledTaskResponseBody() {}

  explicit DeleteScheduledTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteScheduledTaskResponseBody() = default;
};
class DeleteScheduledTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteScheduledTaskResponseBody> body{};

  DeleteScheduledTaskResponse() {}

  explicit DeleteScheduledTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScheduledTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScheduledTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScheduledTaskResponse() = default;
};
class DescribeAlarmsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> alarmTaskId{};
  shared_ptr<string> state{};
  shared_ptr<bool> isEnable{};
  shared_ptr<string> metricType{};
  shared_ptr<string> metricName{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeAlarmsRequest() {}

  explicit DescribeAlarmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (alarmTaskId) {
      res["AlarmTaskId"] = boost::any(*alarmTaskId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (isEnable) {
      res["IsEnable"] = boost::any(*isEnable);
    }
    if (metricType) {
      res["MetricType"] = boost::any(*metricType);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("AlarmTaskId") != m.end() && !m["AlarmTaskId"].empty()) {
      alarmTaskId = make_shared<string>(boost::any_cast<string>(m["AlarmTaskId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("IsEnable") != m.end() && !m["IsEnable"].empty()) {
      isEnable = make_shared<bool>(boost::any_cast<bool>(m["IsEnable"]));
    }
    if (m.find("MetricType") != m.end() && !m["MetricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["MetricType"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeAlarmsRequest() = default;
};
class DescribeAlarmsResponseBodyAlarmListAlarmAlarmActions : public Darabonba::Model {
public:
  shared_ptr<vector<string>> alarmAction{};

  DescribeAlarmsResponseBodyAlarmListAlarmAlarmActions() {}

  explicit DescribeAlarmsResponseBodyAlarmListAlarmAlarmActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmAction) {
      res["AlarmAction"] = boost::any(*alarmAction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmAction") != m.end() && !m["AlarmAction"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AlarmAction"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AlarmAction"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alarmAction = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAlarmsResponseBodyAlarmListAlarmAlarmActions() = default;
};
class DescribeAlarmsResponseBodyAlarmListAlarmDimensionsDimension : public Darabonba::Model {
public:
  shared_ptr<string> dimensionKey{};
  shared_ptr<string> dimensionValue{};

  DescribeAlarmsResponseBodyAlarmListAlarmDimensionsDimension() {}

  explicit DescribeAlarmsResponseBodyAlarmListAlarmDimensionsDimension(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimensionKey) {
      res["DimensionKey"] = boost::any(*dimensionKey);
    }
    if (dimensionValue) {
      res["DimensionValue"] = boost::any(*dimensionValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DimensionKey") != m.end() && !m["DimensionKey"].empty()) {
      dimensionKey = make_shared<string>(boost::any_cast<string>(m["DimensionKey"]));
    }
    if (m.find("DimensionValue") != m.end() && !m["DimensionValue"].empty()) {
      dimensionValue = make_shared<string>(boost::any_cast<string>(m["DimensionValue"]));
    }
  }


  virtual ~DescribeAlarmsResponseBodyAlarmListAlarmDimensionsDimension() = default;
};
class DescribeAlarmsResponseBodyAlarmListAlarmDimensions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAlarmsResponseBodyAlarmListAlarmDimensionsDimension>> dimension{};

  DescribeAlarmsResponseBodyAlarmListAlarmDimensions() {}

  explicit DescribeAlarmsResponseBodyAlarmListAlarmDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimension) {
      vector<boost::any> temp1;
      for(auto item1:*dimension){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimension"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dimension") != m.end() && !m["Dimension"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimension"].type()) {
        vector<DescribeAlarmsResponseBodyAlarmListAlarmDimensionsDimension> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimension"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlarmsResponseBodyAlarmListAlarmDimensionsDimension model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimension = make_shared<vector<DescribeAlarmsResponseBodyAlarmListAlarmDimensionsDimension>>(expect1);
      }
    }
  }


  virtual ~DescribeAlarmsResponseBodyAlarmListAlarmDimensions() = default;
};
class DescribeAlarmsResponseBodyAlarmListAlarm : public Darabonba::Model {
public:
  shared_ptr<string> alarmTaskId{};
  shared_ptr<string> metricName{};
  shared_ptr<long> evaluationCount{};
  shared_ptr<string> state{};
  shared_ptr<DescribeAlarmsResponseBodyAlarmListAlarmAlarmActions> alarmActions{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<long> period{};
  shared_ptr<string> comparisonOperator{};
  shared_ptr<string> effective{};
  shared_ptr<string> description{};
  shared_ptr<DescribeAlarmsResponseBodyAlarmListAlarmDimensions> dimensions{};
  shared_ptr<string> metricType{};
  shared_ptr<string> name{};
  shared_ptr<double> threshold{};
  shared_ptr<bool> enable{};
  shared_ptr<string> statistics{};

  DescribeAlarmsResponseBodyAlarmListAlarm() {}

  explicit DescribeAlarmsResponseBodyAlarmListAlarm(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmTaskId) {
      res["AlarmTaskId"] = boost::any(*alarmTaskId);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (evaluationCount) {
      res["EvaluationCount"] = boost::any(*evaluationCount);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (alarmActions) {
      res["AlarmActions"] = alarmActions ? boost::any(alarmActions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (comparisonOperator) {
      res["ComparisonOperator"] = boost::any(*comparisonOperator);
    }
    if (effective) {
      res["Effective"] = boost::any(*effective);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dimensions) {
      res["Dimensions"] = dimensions ? boost::any(dimensions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (metricType) {
      res["MetricType"] = boost::any(*metricType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (statistics) {
      res["Statistics"] = boost::any(*statistics);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmTaskId") != m.end() && !m["AlarmTaskId"].empty()) {
      alarmTaskId = make_shared<string>(boost::any_cast<string>(m["AlarmTaskId"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("EvaluationCount") != m.end() && !m["EvaluationCount"].empty()) {
      evaluationCount = make_shared<long>(boost::any_cast<long>(m["EvaluationCount"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("AlarmActions") != m.end() && !m["AlarmActions"].empty()) {
      if (typeid(map<string, boost::any>) == m["AlarmActions"].type()) {
        DescribeAlarmsResponseBodyAlarmListAlarmAlarmActions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AlarmActions"]));
        alarmActions = make_shared<DescribeAlarmsResponseBodyAlarmListAlarmAlarmActions>(model1);
      }
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("ComparisonOperator") != m.end() && !m["ComparisonOperator"].empty()) {
      comparisonOperator = make_shared<string>(boost::any_cast<string>(m["ComparisonOperator"]));
    }
    if (m.find("Effective") != m.end() && !m["Effective"].empty()) {
      effective = make_shared<string>(boost::any_cast<string>(m["Effective"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dimensions"].type()) {
        DescribeAlarmsResponseBodyAlarmListAlarmDimensions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dimensions"]));
        dimensions = make_shared<DescribeAlarmsResponseBodyAlarmListAlarmDimensions>(model1);
      }
    }
    if (m.find("MetricType") != m.end() && !m["MetricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["MetricType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      statistics = make_shared<string>(boost::any_cast<string>(m["Statistics"]));
    }
  }


  virtual ~DescribeAlarmsResponseBodyAlarmListAlarm() = default;
};
class DescribeAlarmsResponseBodyAlarmList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAlarmsResponseBodyAlarmListAlarm>> alarm{};

  DescribeAlarmsResponseBodyAlarmList() {}

  explicit DescribeAlarmsResponseBodyAlarmList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarm) {
      vector<boost::any> temp1;
      for(auto item1:*alarm){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Alarm"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alarm") != m.end() && !m["Alarm"].empty()) {
      if (typeid(vector<boost::any>) == m["Alarm"].type()) {
        vector<DescribeAlarmsResponseBodyAlarmListAlarm> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Alarm"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlarmsResponseBodyAlarmListAlarm model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        alarm = make_shared<vector<DescribeAlarmsResponseBodyAlarmListAlarm>>(expect1);
      }
    }
  }


  virtual ~DescribeAlarmsResponseBodyAlarmList() = default;
};
class DescribeAlarmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<DescribeAlarmsResponseBodyAlarmList> alarmList{};

  DescribeAlarmsResponseBody() {}

  explicit DescribeAlarmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (alarmList) {
      res["AlarmList"] = alarmList ? boost::any(alarmList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("AlarmList") != m.end() && !m["AlarmList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AlarmList"].type()) {
        DescribeAlarmsResponseBodyAlarmList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AlarmList"]));
        alarmList = make_shared<DescribeAlarmsResponseBodyAlarmList>(model1);
      }
    }
  }


  virtual ~DescribeAlarmsResponseBody() = default;
};
class DescribeAlarmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAlarmsResponseBody> body{};

  DescribeAlarmsResponse() {}

  explicit DescribeAlarmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlarmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAlarmsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAlarmsResponse() = default;
};
class DescribeLifecycleActionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingActivityId{};
  shared_ptr<string> lifecycleActionStatus{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};

  DescribeLifecycleActionsRequest() {}

  explicit DescribeLifecycleActionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    if (lifecycleActionStatus) {
      res["LifecycleActionStatus"] = boost::any(*lifecycleActionStatus);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
    if (m.find("LifecycleActionStatus") != m.end() && !m["LifecycleActionStatus"].empty()) {
      lifecycleActionStatus = make_shared<string>(boost::any_cast<string>(m["LifecycleActionStatus"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
  }


  virtual ~DescribeLifecycleActionsRequest() = default;
};
class DescribeLifecycleActionsResponseBodyLifecycleActionsLifecycleActionInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceId{};

  DescribeLifecycleActionsResponseBodyLifecycleActionsLifecycleActionInstanceIds() {}

  explicit DescribeLifecycleActionsResponseBodyLifecycleActionsLifecycleActionInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeLifecycleActionsResponseBodyLifecycleActionsLifecycleActionInstanceIds() = default;
};
class DescribeLifecycleActionsResponseBodyLifecycleActionsLifecycleAction : public Darabonba::Model {
public:
  shared_ptr<string> lifecycleHookId{};
  shared_ptr<DescribeLifecycleActionsResponseBodyLifecycleActionsLifecycleActionInstanceIds> instanceIds{};
  shared_ptr<string> lifecycleActionToken{};
  shared_ptr<string> lifecycleActionStatus{};
  shared_ptr<string> lifecycleActionResult{};

  DescribeLifecycleActionsResponseBodyLifecycleActionsLifecycleAction() {}

  explicit DescribeLifecycleActionsResponseBodyLifecycleActionsLifecycleAction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lifecycleHookId) {
      res["LifecycleHookId"] = boost::any(*lifecycleHookId);
    }
    if (instanceIds) {
      res["InstanceIds"] = instanceIds ? boost::any(instanceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (lifecycleActionToken) {
      res["LifecycleActionToken"] = boost::any(*lifecycleActionToken);
    }
    if (lifecycleActionStatus) {
      res["LifecycleActionStatus"] = boost::any(*lifecycleActionStatus);
    }
    if (lifecycleActionResult) {
      res["LifecycleActionResult"] = boost::any(*lifecycleActionResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LifecycleHookId") != m.end() && !m["LifecycleHookId"].empty()) {
      lifecycleHookId = make_shared<string>(boost::any_cast<string>(m["LifecycleHookId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceIds"].type()) {
        DescribeLifecycleActionsResponseBodyLifecycleActionsLifecycleActionInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceIds"]));
        instanceIds = make_shared<DescribeLifecycleActionsResponseBodyLifecycleActionsLifecycleActionInstanceIds>(model1);
      }
    }
    if (m.find("LifecycleActionToken") != m.end() && !m["LifecycleActionToken"].empty()) {
      lifecycleActionToken = make_shared<string>(boost::any_cast<string>(m["LifecycleActionToken"]));
    }
    if (m.find("LifecycleActionStatus") != m.end() && !m["LifecycleActionStatus"].empty()) {
      lifecycleActionStatus = make_shared<string>(boost::any_cast<string>(m["LifecycleActionStatus"]));
    }
    if (m.find("LifecycleActionResult") != m.end() && !m["LifecycleActionResult"].empty()) {
      lifecycleActionResult = make_shared<string>(boost::any_cast<string>(m["LifecycleActionResult"]));
    }
  }


  virtual ~DescribeLifecycleActionsResponseBodyLifecycleActionsLifecycleAction() = default;
};
class DescribeLifecycleActionsResponseBodyLifecycleActions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLifecycleActionsResponseBodyLifecycleActionsLifecycleAction>> lifecycleAction{};

  DescribeLifecycleActionsResponseBodyLifecycleActions() {}

  explicit DescribeLifecycleActionsResponseBodyLifecycleActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lifecycleAction) {
      vector<boost::any> temp1;
      for(auto item1:*lifecycleAction){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LifecycleAction"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LifecycleAction") != m.end() && !m["LifecycleAction"].empty()) {
      if (typeid(vector<boost::any>) == m["LifecycleAction"].type()) {
        vector<DescribeLifecycleActionsResponseBodyLifecycleActionsLifecycleAction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LifecycleAction"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLifecycleActionsResponseBodyLifecycleActionsLifecycleAction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lifecycleAction = make_shared<vector<DescribeLifecycleActionsResponseBodyLifecycleActionsLifecycleAction>>(expect1);
      }
    }
  }


  virtual ~DescribeLifecycleActionsResponseBodyLifecycleActions() = default;
};
class DescribeLifecycleActionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> maxResults{};
  shared_ptr<DescribeLifecycleActionsResponseBodyLifecycleActions> lifecycleActions{};

  DescribeLifecycleActionsResponseBody() {}

  explicit DescribeLifecycleActionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (lifecycleActions) {
      res["LifecycleActions"] = lifecycleActions ? boost::any(lifecycleActions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("LifecycleActions") != m.end() && !m["LifecycleActions"].empty()) {
      if (typeid(map<string, boost::any>) == m["LifecycleActions"].type()) {
        DescribeLifecycleActionsResponseBodyLifecycleActions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LifecycleActions"]));
        lifecycleActions = make_shared<DescribeLifecycleActionsResponseBodyLifecycleActions>(model1);
      }
    }
  }


  virtual ~DescribeLifecycleActionsResponseBody() = default;
};
class DescribeLifecycleActionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLifecycleActionsResponseBody> body{};

  DescribeLifecycleActionsResponse() {}

  explicit DescribeLifecycleActionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLifecycleActionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLifecycleActionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLifecycleActionsResponse() = default;
};
class DescribeLifecycleHooksRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> lifecycleHookName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> lifecycleHookId{};

  DescribeLifecycleHooksRequest() {}

  explicit DescribeLifecycleHooksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (lifecycleHookName) {
      res["LifecycleHookName"] = boost::any(*lifecycleHookName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (lifecycleHookId) {
      res["LifecycleHookId"] = boost::any(*lifecycleHookId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("LifecycleHookName") != m.end() && !m["LifecycleHookName"].empty()) {
      lifecycleHookName = make_shared<string>(boost::any_cast<string>(m["LifecycleHookName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("LifecycleHookId") != m.end() && !m["LifecycleHookId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LifecycleHookId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LifecycleHookId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      lifecycleHookId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeLifecycleHooksRequest() = default;
};
class DescribeLifecycleHooksResponseBodyLifecycleHooksLifecycleHook : public Darabonba::Model {
public:
  shared_ptr<string> defaultResult{};
  shared_ptr<string> lifecycleHookId{};
  shared_ptr<string> lifecycleHookName{};
  shared_ptr<string> lifecycleTransition{};
  shared_ptr<string> notificationMetadata{};
  shared_ptr<string> notificationArn{};
  shared_ptr<long> heartbeatTimeout{};
  shared_ptr<string> scalingGroupId{};

  DescribeLifecycleHooksResponseBodyLifecycleHooksLifecycleHook() {}

  explicit DescribeLifecycleHooksResponseBodyLifecycleHooksLifecycleHook(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultResult) {
      res["DefaultResult"] = boost::any(*defaultResult);
    }
    if (lifecycleHookId) {
      res["LifecycleHookId"] = boost::any(*lifecycleHookId);
    }
    if (lifecycleHookName) {
      res["LifecycleHookName"] = boost::any(*lifecycleHookName);
    }
    if (lifecycleTransition) {
      res["LifecycleTransition"] = boost::any(*lifecycleTransition);
    }
    if (notificationMetadata) {
      res["NotificationMetadata"] = boost::any(*notificationMetadata);
    }
    if (notificationArn) {
      res["NotificationArn"] = boost::any(*notificationArn);
    }
    if (heartbeatTimeout) {
      res["HeartbeatTimeout"] = boost::any(*heartbeatTimeout);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultResult") != m.end() && !m["DefaultResult"].empty()) {
      defaultResult = make_shared<string>(boost::any_cast<string>(m["DefaultResult"]));
    }
    if (m.find("LifecycleHookId") != m.end() && !m["LifecycleHookId"].empty()) {
      lifecycleHookId = make_shared<string>(boost::any_cast<string>(m["LifecycleHookId"]));
    }
    if (m.find("LifecycleHookName") != m.end() && !m["LifecycleHookName"].empty()) {
      lifecycleHookName = make_shared<string>(boost::any_cast<string>(m["LifecycleHookName"]));
    }
    if (m.find("LifecycleTransition") != m.end() && !m["LifecycleTransition"].empty()) {
      lifecycleTransition = make_shared<string>(boost::any_cast<string>(m["LifecycleTransition"]));
    }
    if (m.find("NotificationMetadata") != m.end() && !m["NotificationMetadata"].empty()) {
      notificationMetadata = make_shared<string>(boost::any_cast<string>(m["NotificationMetadata"]));
    }
    if (m.find("NotificationArn") != m.end() && !m["NotificationArn"].empty()) {
      notificationArn = make_shared<string>(boost::any_cast<string>(m["NotificationArn"]));
    }
    if (m.find("HeartbeatTimeout") != m.end() && !m["HeartbeatTimeout"].empty()) {
      heartbeatTimeout = make_shared<long>(boost::any_cast<long>(m["HeartbeatTimeout"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~DescribeLifecycleHooksResponseBodyLifecycleHooksLifecycleHook() = default;
};
class DescribeLifecycleHooksResponseBodyLifecycleHooks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLifecycleHooksResponseBodyLifecycleHooksLifecycleHook>> lifecycleHook{};

  DescribeLifecycleHooksResponseBodyLifecycleHooks() {}

  explicit DescribeLifecycleHooksResponseBodyLifecycleHooks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lifecycleHook) {
      vector<boost::any> temp1;
      for(auto item1:*lifecycleHook){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LifecycleHook"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LifecycleHook") != m.end() && !m["LifecycleHook"].empty()) {
      if (typeid(vector<boost::any>) == m["LifecycleHook"].type()) {
        vector<DescribeLifecycleHooksResponseBodyLifecycleHooksLifecycleHook> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LifecycleHook"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLifecycleHooksResponseBodyLifecycleHooksLifecycleHook model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lifecycleHook = make_shared<vector<DescribeLifecycleHooksResponseBodyLifecycleHooksLifecycleHook>>(expect1);
      }
    }
  }


  virtual ~DescribeLifecycleHooksResponseBodyLifecycleHooks() = default;
};
class DescribeLifecycleHooksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<DescribeLifecycleHooksResponseBodyLifecycleHooks> lifecycleHooks{};

  DescribeLifecycleHooksResponseBody() {}

  explicit DescribeLifecycleHooksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (lifecycleHooks) {
      res["LifecycleHooks"] = lifecycleHooks ? boost::any(lifecycleHooks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("LifecycleHooks") != m.end() && !m["LifecycleHooks"].empty()) {
      if (typeid(map<string, boost::any>) == m["LifecycleHooks"].type()) {
        DescribeLifecycleHooksResponseBodyLifecycleHooks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LifecycleHooks"]));
        lifecycleHooks = make_shared<DescribeLifecycleHooksResponseBodyLifecycleHooks>(model1);
      }
    }
  }


  virtual ~DescribeLifecycleHooksResponseBody() = default;
};
class DescribeLifecycleHooksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLifecycleHooksResponseBody> body{};

  DescribeLifecycleHooksResponse() {}

  explicit DescribeLifecycleHooksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLifecycleHooksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLifecycleHooksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLifecycleHooksResponse() = default;
};
class DescribeLimitationRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};

  DescribeLimitationRequest() {}

  explicit DescribeLimitationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~DescribeLimitationRequest() = default;
};
class DescribeLimitationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxNumberOfLifecycleHooks{};
  shared_ptr<long> maxNumberOfScalingRules{};
  shared_ptr<long> maxNumberOfScalingInstances{};
  shared_ptr<long> maxNumberOfScheduledTasks{};
  shared_ptr<long> maxNumberOfVServerGroups{};
  shared_ptr<long> maxNumberOfLoadBalancers{};
  shared_ptr<long> maxNumberOfMinSize{};
  shared_ptr<long> maxNumberOfScalingGroups{};
  shared_ptr<long> maxNumberOfNotificationConfigurations{};
  shared_ptr<long> maxNumberOfMaxSize{};
  shared_ptr<long> maxNumberOfDBInstances{};
  shared_ptr<long> maxNumberOfScalingConfigurations{};

  DescribeLimitationResponseBody() {}

  explicit DescribeLimitationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxNumberOfLifecycleHooks) {
      res["MaxNumberOfLifecycleHooks"] = boost::any(*maxNumberOfLifecycleHooks);
    }
    if (maxNumberOfScalingRules) {
      res["MaxNumberOfScalingRules"] = boost::any(*maxNumberOfScalingRules);
    }
    if (maxNumberOfScalingInstances) {
      res["MaxNumberOfScalingInstances"] = boost::any(*maxNumberOfScalingInstances);
    }
    if (maxNumberOfScheduledTasks) {
      res["MaxNumberOfScheduledTasks"] = boost::any(*maxNumberOfScheduledTasks);
    }
    if (maxNumberOfVServerGroups) {
      res["MaxNumberOfVServerGroups"] = boost::any(*maxNumberOfVServerGroups);
    }
    if (maxNumberOfLoadBalancers) {
      res["MaxNumberOfLoadBalancers"] = boost::any(*maxNumberOfLoadBalancers);
    }
    if (maxNumberOfMinSize) {
      res["MaxNumberOfMinSize"] = boost::any(*maxNumberOfMinSize);
    }
    if (maxNumberOfScalingGroups) {
      res["MaxNumberOfScalingGroups"] = boost::any(*maxNumberOfScalingGroups);
    }
    if (maxNumberOfNotificationConfigurations) {
      res["MaxNumberOfNotificationConfigurations"] = boost::any(*maxNumberOfNotificationConfigurations);
    }
    if (maxNumberOfMaxSize) {
      res["MaxNumberOfMaxSize"] = boost::any(*maxNumberOfMaxSize);
    }
    if (maxNumberOfDBInstances) {
      res["MaxNumberOfDBInstances"] = boost::any(*maxNumberOfDBInstances);
    }
    if (maxNumberOfScalingConfigurations) {
      res["MaxNumberOfScalingConfigurations"] = boost::any(*maxNumberOfScalingConfigurations);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxNumberOfLifecycleHooks") != m.end() && !m["MaxNumberOfLifecycleHooks"].empty()) {
      maxNumberOfLifecycleHooks = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfLifecycleHooks"]));
    }
    if (m.find("MaxNumberOfScalingRules") != m.end() && !m["MaxNumberOfScalingRules"].empty()) {
      maxNumberOfScalingRules = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfScalingRules"]));
    }
    if (m.find("MaxNumberOfScalingInstances") != m.end() && !m["MaxNumberOfScalingInstances"].empty()) {
      maxNumberOfScalingInstances = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfScalingInstances"]));
    }
    if (m.find("MaxNumberOfScheduledTasks") != m.end() && !m["MaxNumberOfScheduledTasks"].empty()) {
      maxNumberOfScheduledTasks = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfScheduledTasks"]));
    }
    if (m.find("MaxNumberOfVServerGroups") != m.end() && !m["MaxNumberOfVServerGroups"].empty()) {
      maxNumberOfVServerGroups = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfVServerGroups"]));
    }
    if (m.find("MaxNumberOfLoadBalancers") != m.end() && !m["MaxNumberOfLoadBalancers"].empty()) {
      maxNumberOfLoadBalancers = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfLoadBalancers"]));
    }
    if (m.find("MaxNumberOfMinSize") != m.end() && !m["MaxNumberOfMinSize"].empty()) {
      maxNumberOfMinSize = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfMinSize"]));
    }
    if (m.find("MaxNumberOfScalingGroups") != m.end() && !m["MaxNumberOfScalingGroups"].empty()) {
      maxNumberOfScalingGroups = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfScalingGroups"]));
    }
    if (m.find("MaxNumberOfNotificationConfigurations") != m.end() && !m["MaxNumberOfNotificationConfigurations"].empty()) {
      maxNumberOfNotificationConfigurations = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfNotificationConfigurations"]));
    }
    if (m.find("MaxNumberOfMaxSize") != m.end() && !m["MaxNumberOfMaxSize"].empty()) {
      maxNumberOfMaxSize = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfMaxSize"]));
    }
    if (m.find("MaxNumberOfDBInstances") != m.end() && !m["MaxNumberOfDBInstances"].empty()) {
      maxNumberOfDBInstances = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfDBInstances"]));
    }
    if (m.find("MaxNumberOfScalingConfigurations") != m.end() && !m["MaxNumberOfScalingConfigurations"].empty()) {
      maxNumberOfScalingConfigurations = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfScalingConfigurations"]));
    }
  }


  virtual ~DescribeLimitationResponseBody() = default;
};
class DescribeLimitationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLimitationResponseBody> body{};

  DescribeLimitationResponse() {}

  explicit DescribeLimitationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLimitationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLimitationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLimitationResponse() = default;
};
class DescribeNotificationConfigurationsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};

  DescribeNotificationConfigurationsRequest() {}

  explicit DescribeNotificationConfigurationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~DescribeNotificationConfigurationsRequest() = default;
};
class DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModelsNotificationConfigurationModelNotificationTypes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> notificationType{};

  DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModelsNotificationConfigurationModelNotificationTypes() {}

  explicit DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModelsNotificationConfigurationModelNotificationTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notificationType) {
      res["NotificationType"] = boost::any(*notificationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NotificationType") != m.end() && !m["NotificationType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NotificationType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NotificationType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notificationType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModelsNotificationConfigurationModelNotificationTypes() = default;
};
class DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModelsNotificationConfigurationModel : public Darabonba::Model {
public:
  shared_ptr<string> notificationArn{};
  shared_ptr<DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModelsNotificationConfigurationModelNotificationTypes> notificationTypes{};
  shared_ptr<string> scalingGroupId{};

  DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModelsNotificationConfigurationModel() {}

  explicit DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModelsNotificationConfigurationModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notificationArn) {
      res["NotificationArn"] = boost::any(*notificationArn);
    }
    if (notificationTypes) {
      res["NotificationTypes"] = notificationTypes ? boost::any(notificationTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NotificationArn") != m.end() && !m["NotificationArn"].empty()) {
      notificationArn = make_shared<string>(boost::any_cast<string>(m["NotificationArn"]));
    }
    if (m.find("NotificationTypes") != m.end() && !m["NotificationTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["NotificationTypes"].type()) {
        DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModelsNotificationConfigurationModelNotificationTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NotificationTypes"]));
        notificationTypes = make_shared<DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModelsNotificationConfigurationModelNotificationTypes>(model1);
      }
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModelsNotificationConfigurationModel() = default;
};
class DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModelsNotificationConfigurationModel>> notificationConfigurationModel{};

  DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels() {}

  explicit DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notificationConfigurationModel) {
      vector<boost::any> temp1;
      for(auto item1:*notificationConfigurationModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NotificationConfigurationModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NotificationConfigurationModel") != m.end() && !m["NotificationConfigurationModel"].empty()) {
      if (typeid(vector<boost::any>) == m["NotificationConfigurationModel"].type()) {
        vector<DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModelsNotificationConfigurationModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NotificationConfigurationModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModelsNotificationConfigurationModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        notificationConfigurationModel = make_shared<vector<DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModelsNotificationConfigurationModel>>(expect1);
      }
    }
  }


  virtual ~DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels() = default;
};
class DescribeNotificationConfigurationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels> notificationConfigurationModels{};

  DescribeNotificationConfigurationsResponseBody() {}

  explicit DescribeNotificationConfigurationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (notificationConfigurationModels) {
      res["NotificationConfigurationModels"] = notificationConfigurationModels ? boost::any(notificationConfigurationModels->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("NotificationConfigurationModels") != m.end() && !m["NotificationConfigurationModels"].empty()) {
      if (typeid(map<string, boost::any>) == m["NotificationConfigurationModels"].type()) {
        DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NotificationConfigurationModels"]));
        notificationConfigurationModels = make_shared<DescribeNotificationConfigurationsResponseBodyNotificationConfigurationModels>(model1);
      }
    }
  }


  virtual ~DescribeNotificationConfigurationsResponseBody() = default;
};
class DescribeNotificationConfigurationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeNotificationConfigurationsResponseBody> body{};

  DescribeNotificationConfigurationsResponse() {}

  explicit DescribeNotificationConfigurationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNotificationConfigurationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNotificationConfigurationsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNotificationConfigurationsResponse() = default;
};
class DescribeNotificationTypesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};

  DescribeNotificationTypesRequest() {}

  explicit DescribeNotificationTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~DescribeNotificationTypesRequest() = default;
};
class DescribeNotificationTypesResponseBodyNotificationTypes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> notificationType{};

  DescribeNotificationTypesResponseBodyNotificationTypes() {}

  explicit DescribeNotificationTypesResponseBodyNotificationTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notificationType) {
      res["NotificationType"] = boost::any(*notificationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NotificationType") != m.end() && !m["NotificationType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NotificationType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NotificationType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notificationType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeNotificationTypesResponseBodyNotificationTypes() = default;
};
class DescribeNotificationTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeNotificationTypesResponseBodyNotificationTypes> notificationTypes{};

  DescribeNotificationTypesResponseBody() {}

  explicit DescribeNotificationTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (notificationTypes) {
      res["NotificationTypes"] = notificationTypes ? boost::any(notificationTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("NotificationTypes") != m.end() && !m["NotificationTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["NotificationTypes"].type()) {
        DescribeNotificationTypesResponseBodyNotificationTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NotificationTypes"]));
        notificationTypes = make_shared<DescribeNotificationTypesResponseBodyNotificationTypes>(model1);
      }
    }
  }


  virtual ~DescribeNotificationTypesResponseBody() = default;
};
class DescribeNotificationTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeNotificationTypesResponseBody> body{};

  DescribeNotificationTypesResponse() {}

  explicit DescribeNotificationTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNotificationTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNotificationTypesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNotificationTypesResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> acceptLanguage{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<bool> vpcUnavailable{};
  shared_ptr<bool> classicUnavailable{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (vpcUnavailable) {
      res["VpcUnavailable"] = boost::any(*vpcUnavailable);
    }
    if (classicUnavailable) {
      res["ClassicUnavailable"] = boost::any(*classicUnavailable);
    }
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("VpcUnavailable") != m.end() && !m["VpcUnavailable"].empty()) {
      vpcUnavailable = make_shared<bool>(boost::any_cast<bool>(m["VpcUnavailable"]));
    }
    if (m.find("ClassicUnavailable") != m.end() && !m["ClassicUnavailable"].empty()) {
      classicUnavailable = make_shared<bool>(boost::any_cast<bool>(m["ClassicUnavailable"]));
    }
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegion() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegion>> region{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      vector<boost::any> temp1;
      for(auto item1:*region){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Region"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<DescribeRegionsResponseBodyRegionsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeScalingActivitiesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> scalingActivityId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> statusCode{};
  shared_ptr<string> ownerAccount{};

  DescribeScalingActivitiesRequest() {}

  explicit DescribeScalingActivitiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScalingActivityId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScalingActivityId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scalingActivityId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<string>(boost::any_cast<string>(m["StatusCode"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DescribeScalingActivitiesRequest() = default;
};
class DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity : public Darabonba::Model {
public:
  shared_ptr<long> progress{};
  shared_ptr<string> attachedCapacity{};
  shared_ptr<long> scalingInstanceNumber{};
  shared_ptr<string> totalCapacity{};
  shared_ptr<string> autoCreatedCapacity{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> description{};
  shared_ptr<string> statusCode{};
  shared_ptr<string> cause{};
  shared_ptr<string> scalingActivityId{};
  shared_ptr<string> statusMessage{};

  DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity() {}

  explicit DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (attachedCapacity) {
      res["AttachedCapacity"] = boost::any(*attachedCapacity);
    }
    if (scalingInstanceNumber) {
      res["ScalingInstanceNumber"] = boost::any(*scalingInstanceNumber);
    }
    if (totalCapacity) {
      res["TotalCapacity"] = boost::any(*totalCapacity);
    }
    if (autoCreatedCapacity) {
      res["AutoCreatedCapacity"] = boost::any(*autoCreatedCapacity);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    if (cause) {
      res["Cause"] = boost::any(*cause);
    }
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("AttachedCapacity") != m.end() && !m["AttachedCapacity"].empty()) {
      attachedCapacity = make_shared<string>(boost::any_cast<string>(m["AttachedCapacity"]));
    }
    if (m.find("ScalingInstanceNumber") != m.end() && !m["ScalingInstanceNumber"].empty()) {
      scalingInstanceNumber = make_shared<long>(boost::any_cast<long>(m["ScalingInstanceNumber"]));
    }
    if (m.find("TotalCapacity") != m.end() && !m["TotalCapacity"].empty()) {
      totalCapacity = make_shared<string>(boost::any_cast<string>(m["TotalCapacity"]));
    }
    if (m.find("AutoCreatedCapacity") != m.end() && !m["AutoCreatedCapacity"].empty()) {
      autoCreatedCapacity = make_shared<string>(boost::any_cast<string>(m["AutoCreatedCapacity"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<string>(boost::any_cast<string>(m["StatusCode"]));
    }
    if (m.find("Cause") != m.end() && !m["Cause"].empty()) {
      cause = make_shared<string>(boost::any_cast<string>(m["Cause"]));
    }
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
  }


  virtual ~DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity() = default;
};
class DescribeScalingActivitiesResponseBodyScalingActivities : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity>> scalingActivity{};

  DescribeScalingActivitiesResponseBodyScalingActivities() {}

  explicit DescribeScalingActivitiesResponseBodyScalingActivities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingActivity) {
      vector<boost::any> temp1;
      for(auto item1:*scalingActivity){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScalingActivity"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingActivity") != m.end() && !m["ScalingActivity"].empty()) {
      if (typeid(vector<boost::any>) == m["ScalingActivity"].type()) {
        vector<DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScalingActivity"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scalingActivity = make_shared<vector<DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingActivitiesResponseBodyScalingActivities() = default;
};
class DescribeScalingActivitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<DescribeScalingActivitiesResponseBodyScalingActivities> scalingActivities{};

  DescribeScalingActivitiesResponseBody() {}

  explicit DescribeScalingActivitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (scalingActivities) {
      res["ScalingActivities"] = scalingActivities ? boost::any(scalingActivities->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ScalingActivities") != m.end() && !m["ScalingActivities"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScalingActivities"].type()) {
        DescribeScalingActivitiesResponseBodyScalingActivities model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScalingActivities"]));
        scalingActivities = make_shared<DescribeScalingActivitiesResponseBodyScalingActivities>(model1);
      }
    }
  }


  virtual ~DescribeScalingActivitiesResponseBody() = default;
};
class DescribeScalingActivitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScalingActivitiesResponseBody> body{};

  DescribeScalingActivitiesResponse() {}

  explicit DescribeScalingActivitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScalingActivitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScalingActivitiesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScalingActivitiesResponse() = default;
};
class DescribeScalingActivityDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingActivityId{};

  DescribeScalingActivityDetailRequest() {}

  explicit DescribeScalingActivityDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
  }


  virtual ~DescribeScalingActivityDetailRequest() = default;
};
class DescribeScalingActivityDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> scalingActivityId{};
  shared_ptr<string> detail{};

  DescribeScalingActivityDetailResponseBody() {}

  explicit DescribeScalingActivityDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
  }


  virtual ~DescribeScalingActivityDetailResponseBody() = default;
};
class DescribeScalingActivityDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScalingActivityDetailResponseBody> body{};

  DescribeScalingActivityDetailResponse() {}

  explicit DescribeScalingActivityDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScalingActivityDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScalingActivityDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScalingActivityDetailResponse() = default;
};
class DescribeScalingConfigurationsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> scalingConfigurationId{};
  shared_ptr<vector<string>> scalingConfigurationName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> ownerAccount{};

  DescribeScalingConfigurationsRequest() {}

  explicit DescribeScalingConfigurationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingConfigurationId) {
      res["ScalingConfigurationId"] = boost::any(*scalingConfigurationId);
    }
    if (scalingConfigurationName) {
      res["ScalingConfigurationName"] = boost::any(*scalingConfigurationName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingConfigurationId") != m.end() && !m["ScalingConfigurationId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScalingConfigurationId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScalingConfigurationId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scalingConfigurationId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScalingConfigurationName") != m.end() && !m["ScalingConfigurationName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScalingConfigurationName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScalingConfigurationName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scalingConfigurationName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DescribeScalingConfigurationsRequest() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationPrivatePoolOptions : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> matchCriteria{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationPrivatePoolOptions() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationPrivatePoolOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (matchCriteria) {
      res["MatchCriteria"] = boost::any(*matchCriteria);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MatchCriteria") != m.end() && !m["MatchCriteria"].empty()) {
      matchCriteria = make_shared<string>(boost::any_cast<string>(m["MatchCriteria"]));
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationPrivatePoolOptions() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationTagsTag() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationTagsTag() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationTagsTag>> tag{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationTags() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationTags() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk : public Darabonba::Model {
public:
  shared_ptr<string> performanceLevel{};
  shared_ptr<string> description{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> device{};
  shared_ptr<long> size{};
  shared_ptr<string> diskName{};
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<string> category{};
  shared_ptr<string> KMSKeyId{};
  shared_ptr<bool> deleteWithInstance{};
  shared_ptr<string> encrypted{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (diskName) {
      res["DiskName"] = boost::any(*diskName);
    }
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (KMSKeyId) {
      res["KMSKeyId"] = boost::any(*KMSKeyId);
    }
    if (deleteWithInstance) {
      res["DeleteWithInstance"] = boost::any(*deleteWithInstance);
    }
    if (encrypted) {
      res["Encrypted"] = boost::any(*encrypted);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("DiskName") != m.end() && !m["DiskName"].empty()) {
      diskName = make_shared<string>(boost::any_cast<string>(m["DiskName"]));
    }
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("KMSKeyId") != m.end() && !m["KMSKeyId"].empty()) {
      KMSKeyId = make_shared<string>(boost::any_cast<string>(m["KMSKeyId"]));
    }
    if (m.find("DeleteWithInstance") != m.end() && !m["DeleteWithInstance"].empty()) {
      deleteWithInstance = make_shared<bool>(boost::any_cast<bool>(m["DeleteWithInstance"]));
    }
    if (m.find("Encrypted") != m.end() && !m["Encrypted"].empty()) {
      encrypted = make_shared<string>(boost::any_cast<string>(m["Encrypted"]));
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk>> dataDisk{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisks() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisk"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataDisk") != m.end() && !m["DataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisk"].type()) {
        vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisks() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSpotPriceLimitSpotPriceModel : public Darabonba::Model {
public:
  shared_ptr<double> priceLimit{};
  shared_ptr<string> instanceType{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSpotPriceLimitSpotPriceModel() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSpotPriceLimitSpotPriceModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (priceLimit) {
      res["PriceLimit"] = boost::any(*priceLimit);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PriceLimit") != m.end() && !m["PriceLimit"].empty()) {
      priceLimit = make_shared<double>(boost::any_cast<double>(m["PriceLimit"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSpotPriceLimitSpotPriceModel() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSpotPriceLimit : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSpotPriceLimitSpotPriceModel>> spotPriceModel{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSpotPriceLimit() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSpotPriceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spotPriceModel) {
      vector<boost::any> temp1;
      for(auto item1:*spotPriceModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpotPriceModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpotPriceModel") != m.end() && !m["SpotPriceModel"].empty()) {
      if (typeid(vector<boost::any>) == m["SpotPriceModel"].type()) {
        vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSpotPriceLimitSpotPriceModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpotPriceModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSpotPriceLimitSpotPriceModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spotPriceModel = make_shared<vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSpotPriceLimitSpotPriceModel>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSpotPriceLimit() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationWeightedCapacities : public Darabonba::Model {
public:
  shared_ptr<vector<string>> weightedCapacity{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationWeightedCapacities() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationWeightedCapacities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (weightedCapacity) {
      res["WeightedCapacity"] = boost::any(*weightedCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WeightedCapacity") != m.end() && !m["WeightedCapacity"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WeightedCapacity"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WeightedCapacity"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      weightedCapacity = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationWeightedCapacities() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSecurityGroupIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> securityGroupId{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSecurityGroupIds() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSecurityGroupIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSecurityGroupIds() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSchedulerOptions : public Darabonba::Model {
public:
  shared_ptr<string> managedPrivateSpaceId{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSchedulerOptions() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSchedulerOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (managedPrivateSpaceId) {
      res["ManagedPrivateSpaceId"] = boost::any(*managedPrivateSpaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ManagedPrivateSpaceId") != m.end() && !m["ManagedPrivateSpaceId"].empty()) {
      managedPrivateSpaceId = make_shared<string>(boost::any_cast<string>(m["ManagedPrivateSpaceId"]));
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSchedulerOptions() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationInstanceTypes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceType{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationInstanceTypes() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationInstanceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationInstanceTypes() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration : public Darabonba::Model {
public:
  shared_ptr<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationPrivatePoolOptions> privatePoolOptions{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> scalingConfigurationName{};
  shared_ptr<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationTags> tags{};
  shared_ptr<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisks> dataDisks{};
  shared_ptr<string> systemDiskAutoSnapshotPolicyId{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> affinity{};
  shared_ptr<long> spotDuration{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> userData{};
  shared_ptr<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSpotPriceLimit> spotPriceLimit{};
  shared_ptr<string> imageId{};
  shared_ptr<long> loadBalancerWeight{};
  shared_ptr<string> hostName{};
  shared_ptr<string> systemDiskName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> systemDiskPerformanceLevel{};
  shared_ptr<string> imageName{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> scalingConfigurationId{};
  shared_ptr<string> creditSpecification{};
  shared_ptr<string> spotInterruptionBehavior{};
  shared_ptr<string> deploymentSetId{};
  shared_ptr<string> systemDiskDescription{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> tenancy{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<long> ipv6AddressCount{};
  shared_ptr<string> lifecycleState{};
  shared_ptr<string> securityEnhancementStrategy{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> instanceGeneration{};
  shared_ptr<string> hpcClusterId{};
  shared_ptr<bool> passwordInherit{};
  shared_ptr<long> memory{};
  shared_ptr<string> imageFamily{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationWeightedCapacities> weightedCapacities{};
  shared_ptr<long> internetMaxBandwidthOut{};
  shared_ptr<long> internetMaxBandwidthIn{};
  shared_ptr<string> instanceDescription{};
  shared_ptr<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSecurityGroupIds> securityGroupIds{};
  shared_ptr<string> ioOptimized{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<long> cpu{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSchedulerOptions> schedulerOptions{};
  shared_ptr<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationInstanceTypes> instanceTypes{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!privatePoolOptions) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("privatePoolOptions is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (privatePoolOptions) {
      res["PrivatePoolOptions"] = privatePoolOptions ? boost::any(privatePoolOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (scalingConfigurationName) {
      res["ScalingConfigurationName"] = boost::any(*scalingConfigurationName);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataDisks) {
      res["DataDisks"] = dataDisks ? boost::any(dataDisks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (systemDiskAutoSnapshotPolicyId) {
      res["SystemDiskAutoSnapshotPolicyId"] = boost::any(*systemDiskAutoSnapshotPolicyId);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (affinity) {
      res["Affinity"] = boost::any(*affinity);
    }
    if (spotDuration) {
      res["SpotDuration"] = boost::any(*spotDuration);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = spotPriceLimit ? boost::any(spotPriceLimit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (loadBalancerWeight) {
      res["LoadBalancerWeight"] = boost::any(*loadBalancerWeight);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (systemDiskName) {
      res["SystemDiskName"] = boost::any(*systemDiskName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (systemDiskPerformanceLevel) {
      res["SystemDiskPerformanceLevel"] = boost::any(*systemDiskPerformanceLevel);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (scalingConfigurationId) {
      res["ScalingConfigurationId"] = boost::any(*scalingConfigurationId);
    }
    if (creditSpecification) {
      res["CreditSpecification"] = boost::any(*creditSpecification);
    }
    if (spotInterruptionBehavior) {
      res["SpotInterruptionBehavior"] = boost::any(*spotInterruptionBehavior);
    }
    if (deploymentSetId) {
      res["DeploymentSetId"] = boost::any(*deploymentSetId);
    }
    if (systemDiskDescription) {
      res["SystemDiskDescription"] = boost::any(*systemDiskDescription);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (tenancy) {
      res["Tenancy"] = boost::any(*tenancy);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (ipv6AddressCount) {
      res["Ipv6AddressCount"] = boost::any(*ipv6AddressCount);
    }
    if (lifecycleState) {
      res["LifecycleState"] = boost::any(*lifecycleState);
    }
    if (securityEnhancementStrategy) {
      res["SecurityEnhancementStrategy"] = boost::any(*securityEnhancementStrategy);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (instanceGeneration) {
      res["InstanceGeneration"] = boost::any(*instanceGeneration);
    }
    if (hpcClusterId) {
      res["HpcClusterId"] = boost::any(*hpcClusterId);
    }
    if (passwordInherit) {
      res["PasswordInherit"] = boost::any(*passwordInherit);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (imageFamily) {
      res["ImageFamily"] = boost::any(*imageFamily);
    }
    if (systemDiskCategory) {
      res["SystemDiskCategory"] = boost::any(*systemDiskCategory);
    }
    if (weightedCapacities) {
      res["WeightedCapacities"] = weightedCapacities ? boost::any(weightedCapacities->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (internetMaxBandwidthOut) {
      res["InternetMaxBandwidthOut"] = boost::any(*internetMaxBandwidthOut);
    }
    if (internetMaxBandwidthIn) {
      res["InternetMaxBandwidthIn"] = boost::any(*internetMaxBandwidthIn);
    }
    if (instanceDescription) {
      res["InstanceDescription"] = boost::any(*instanceDescription);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = securityGroupIds ? boost::any(securityGroupIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ioOptimized) {
      res["IoOptimized"] = boost::any(*ioOptimized);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (schedulerOptions) {
      res["SchedulerOptions"] = schedulerOptions ? boost::any(schedulerOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceTypes) {
      res["InstanceTypes"] = instanceTypes ? boost::any(instanceTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrivatePoolOptions") != m.end() && !m["PrivatePoolOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrivatePoolOptions"].type()) {
        DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationPrivatePoolOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrivatePoolOptions"]));
        privatePoolOptions = make_shared<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationPrivatePoolOptions>(model1);
      }
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ScalingConfigurationName") != m.end() && !m["ScalingConfigurationName"].empty()) {
      scalingConfigurationName = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationTags>(model1);
      }
    }
    if (m.find("DataDisks") != m.end() && !m["DataDisks"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataDisks"].type()) {
        DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataDisks"]));
        dataDisks = make_shared<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisks>(model1);
      }
    }
    if (m.find("SystemDiskAutoSnapshotPolicyId") != m.end() && !m["SystemDiskAutoSnapshotPolicyId"].empty()) {
      systemDiskAutoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["SystemDiskAutoSnapshotPolicyId"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("Affinity") != m.end() && !m["Affinity"].empty()) {
      affinity = make_shared<string>(boost::any_cast<string>(m["Affinity"]));
    }
    if (m.find("SpotDuration") != m.end() && !m["SpotDuration"].empty()) {
      spotDuration = make_shared<long>(boost::any_cast<long>(m["SpotDuration"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      if (typeid(map<string, boost::any>) == m["SpotPriceLimit"].type()) {
        DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSpotPriceLimit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SpotPriceLimit"]));
        spotPriceLimit = make_shared<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSpotPriceLimit>(model1);
      }
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("LoadBalancerWeight") != m.end() && !m["LoadBalancerWeight"].empty()) {
      loadBalancerWeight = make_shared<long>(boost::any_cast<long>(m["LoadBalancerWeight"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("SystemDiskName") != m.end() && !m["SystemDiskName"].empty()) {
      systemDiskName = make_shared<string>(boost::any_cast<string>(m["SystemDiskName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("SystemDiskPerformanceLevel") != m.end() && !m["SystemDiskPerformanceLevel"].empty()) {
      systemDiskPerformanceLevel = make_shared<string>(boost::any_cast<string>(m["SystemDiskPerformanceLevel"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ScalingConfigurationId") != m.end() && !m["ScalingConfigurationId"].empty()) {
      scalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationId"]));
    }
    if (m.find("CreditSpecification") != m.end() && !m["CreditSpecification"].empty()) {
      creditSpecification = make_shared<string>(boost::any_cast<string>(m["CreditSpecification"]));
    }
    if (m.find("SpotInterruptionBehavior") != m.end() && !m["SpotInterruptionBehavior"].empty()) {
      spotInterruptionBehavior = make_shared<string>(boost::any_cast<string>(m["SpotInterruptionBehavior"]));
    }
    if (m.find("DeploymentSetId") != m.end() && !m["DeploymentSetId"].empty()) {
      deploymentSetId = make_shared<string>(boost::any_cast<string>(m["DeploymentSetId"]));
    }
    if (m.find("SystemDiskDescription") != m.end() && !m["SystemDiskDescription"].empty()) {
      systemDiskDescription = make_shared<string>(boost::any_cast<string>(m["SystemDiskDescription"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("Tenancy") != m.end() && !m["Tenancy"].empty()) {
      tenancy = make_shared<string>(boost::any_cast<string>(m["Tenancy"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("Ipv6AddressCount") != m.end() && !m["Ipv6AddressCount"].empty()) {
      ipv6AddressCount = make_shared<long>(boost::any_cast<long>(m["Ipv6AddressCount"]));
    }
    if (m.find("LifecycleState") != m.end() && !m["LifecycleState"].empty()) {
      lifecycleState = make_shared<string>(boost::any_cast<string>(m["LifecycleState"]));
    }
    if (m.find("SecurityEnhancementStrategy") != m.end() && !m["SecurityEnhancementStrategy"].empty()) {
      securityEnhancementStrategy = make_shared<string>(boost::any_cast<string>(m["SecurityEnhancementStrategy"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("InstanceGeneration") != m.end() && !m["InstanceGeneration"].empty()) {
      instanceGeneration = make_shared<string>(boost::any_cast<string>(m["InstanceGeneration"]));
    }
    if (m.find("HpcClusterId") != m.end() && !m["HpcClusterId"].empty()) {
      hpcClusterId = make_shared<string>(boost::any_cast<string>(m["HpcClusterId"]));
    }
    if (m.find("PasswordInherit") != m.end() && !m["PasswordInherit"].empty()) {
      passwordInherit = make_shared<bool>(boost::any_cast<bool>(m["PasswordInherit"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("ImageFamily") != m.end() && !m["ImageFamily"].empty()) {
      imageFamily = make_shared<string>(boost::any_cast<string>(m["ImageFamily"]));
    }
    if (m.find("SystemDiskCategory") != m.end() && !m["SystemDiskCategory"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["SystemDiskCategory"]));
    }
    if (m.find("WeightedCapacities") != m.end() && !m["WeightedCapacities"].empty()) {
      if (typeid(map<string, boost::any>) == m["WeightedCapacities"].type()) {
        DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationWeightedCapacities model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WeightedCapacities"]));
        weightedCapacities = make_shared<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationWeightedCapacities>(model1);
      }
    }
    if (m.find("InternetMaxBandwidthOut") != m.end() && !m["InternetMaxBandwidthOut"].empty()) {
      internetMaxBandwidthOut = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandwidthOut"]));
    }
    if (m.find("InternetMaxBandwidthIn") != m.end() && !m["InternetMaxBandwidthIn"].empty()) {
      internetMaxBandwidthIn = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandwidthIn"]));
    }
    if (m.find("InstanceDescription") != m.end() && !m["InstanceDescription"].empty()) {
      instanceDescription = make_shared<string>(boost::any_cast<string>(m["InstanceDescription"]));
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityGroupIds"].type()) {
        DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSecurityGroupIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityGroupIds"]));
        securityGroupIds = make_shared<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSecurityGroupIds>(model1);
      }
    }
    if (m.find("IoOptimized") != m.end() && !m["IoOptimized"].empty()) {
      ioOptimized = make_shared<string>(boost::any_cast<string>(m["IoOptimized"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SchedulerOptions") != m.end() && !m["SchedulerOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["SchedulerOptions"].type()) {
        DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSchedulerOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SchedulerOptions"]));
        schedulerOptions = make_shared<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationSchedulerOptions>(model1);
      }
    }
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceTypes"].type()) {
        DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationInstanceTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceTypes"]));
        instanceTypes = make_shared<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationInstanceTypes>(model1);
      }
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurations : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration>> scalingConfiguration{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurations() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingConfiguration) {
      vector<boost::any> temp1;
      for(auto item1:*scalingConfiguration){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScalingConfiguration"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingConfiguration") != m.end() && !m["ScalingConfiguration"].empty()) {
      if (typeid(vector<boost::any>) == m["ScalingConfiguration"].type()) {
        vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScalingConfiguration"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scalingConfiguration = make_shared<vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurations() = default;
};
class DescribeScalingConfigurationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<DescribeScalingConfigurationsResponseBodyScalingConfigurations> scalingConfigurations{};

  DescribeScalingConfigurationsResponseBody() {}

  explicit DescribeScalingConfigurationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (scalingConfigurations) {
      res["ScalingConfigurations"] = scalingConfigurations ? boost::any(scalingConfigurations->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ScalingConfigurations") != m.end() && !m["ScalingConfigurations"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScalingConfigurations"].type()) {
        DescribeScalingConfigurationsResponseBodyScalingConfigurations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScalingConfigurations"]));
        scalingConfigurations = make_shared<DescribeScalingConfigurationsResponseBodyScalingConfigurations>(model1);
      }
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBody() = default;
};
class DescribeScalingConfigurationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScalingConfigurationsResponseBody> body{};

  DescribeScalingConfigurationsResponse() {}

  explicit DescribeScalingConfigurationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScalingConfigurationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScalingConfigurationsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScalingConfigurationsResponse() = default;
};
class DescribeScalingInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> scalingConfigurationId{};
  shared_ptr<string> healthStatus{};
  shared_ptr<string> lifecycleState{};
  shared_ptr<string> creationType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<vector<string>> instanceId{};

  DescribeScalingInstancesRequest() {}

  explicit DescribeScalingInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (scalingConfigurationId) {
      res["ScalingConfigurationId"] = boost::any(*scalingConfigurationId);
    }
    if (healthStatus) {
      res["HealthStatus"] = boost::any(*healthStatus);
    }
    if (lifecycleState) {
      res["LifecycleState"] = boost::any(*lifecycleState);
    }
    if (creationType) {
      res["CreationType"] = boost::any(*creationType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ScalingConfigurationId") != m.end() && !m["ScalingConfigurationId"].empty()) {
      scalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationId"]));
    }
    if (m.find("HealthStatus") != m.end() && !m["HealthStatus"].empty()) {
      healthStatus = make_shared<string>(boost::any_cast<string>(m["HealthStatus"]));
    }
    if (m.find("LifecycleState") != m.end() && !m["LifecycleState"].empty()) {
      lifecycleState = make_shared<string>(boost::any_cast<string>(m["LifecycleState"]));
    }
    if (m.find("CreationType") != m.end() && !m["CreationType"].empty()) {
      creationType = make_shared<string>(boost::any_cast<string>(m["CreationType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
  }


  virtual ~DescribeScalingInstancesRequest() = default;
};
class DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<long> loadBalancerWeight{};
  shared_ptr<string> launchTemplateId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> launchTemplateVersion{};
  shared_ptr<string> healthStatus{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> warmupState{};
  shared_ptr<string> lifecycleState{};
  shared_ptr<string> creationType{};
  shared_ptr<string> scalingConfigurationId{};
  shared_ptr<bool> entrusted{};
  shared_ptr<long> weightedCapacity{};
  shared_ptr<string> createdTime{};

  DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance() {}

  explicit DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (loadBalancerWeight) {
      res["LoadBalancerWeight"] = boost::any(*loadBalancerWeight);
    }
    if (launchTemplateId) {
      res["LaunchTemplateId"] = boost::any(*launchTemplateId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (launchTemplateVersion) {
      res["LaunchTemplateVersion"] = boost::any(*launchTemplateVersion);
    }
    if (healthStatus) {
      res["HealthStatus"] = boost::any(*healthStatus);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (warmupState) {
      res["WarmupState"] = boost::any(*warmupState);
    }
    if (lifecycleState) {
      res["LifecycleState"] = boost::any(*lifecycleState);
    }
    if (creationType) {
      res["CreationType"] = boost::any(*creationType);
    }
    if (scalingConfigurationId) {
      res["ScalingConfigurationId"] = boost::any(*scalingConfigurationId);
    }
    if (entrusted) {
      res["Entrusted"] = boost::any(*entrusted);
    }
    if (weightedCapacity) {
      res["WeightedCapacity"] = boost::any(*weightedCapacity);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("LoadBalancerWeight") != m.end() && !m["LoadBalancerWeight"].empty()) {
      loadBalancerWeight = make_shared<long>(boost::any_cast<long>(m["LoadBalancerWeight"]));
    }
    if (m.find("LaunchTemplateId") != m.end() && !m["LaunchTemplateId"].empty()) {
      launchTemplateId = make_shared<string>(boost::any_cast<string>(m["LaunchTemplateId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LaunchTemplateVersion") != m.end() && !m["LaunchTemplateVersion"].empty()) {
      launchTemplateVersion = make_shared<string>(boost::any_cast<string>(m["LaunchTemplateVersion"]));
    }
    if (m.find("HealthStatus") != m.end() && !m["HealthStatus"].empty()) {
      healthStatus = make_shared<string>(boost::any_cast<string>(m["HealthStatus"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("WarmupState") != m.end() && !m["WarmupState"].empty()) {
      warmupState = make_shared<string>(boost::any_cast<string>(m["WarmupState"]));
    }
    if (m.find("LifecycleState") != m.end() && !m["LifecycleState"].empty()) {
      lifecycleState = make_shared<string>(boost::any_cast<string>(m["LifecycleState"]));
    }
    if (m.find("CreationType") != m.end() && !m["CreationType"].empty()) {
      creationType = make_shared<string>(boost::any_cast<string>(m["CreationType"]));
    }
    if (m.find("ScalingConfigurationId") != m.end() && !m["ScalingConfigurationId"].empty()) {
      scalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationId"]));
    }
    if (m.find("Entrusted") != m.end() && !m["Entrusted"].empty()) {
      entrusted = make_shared<bool>(boost::any_cast<bool>(m["Entrusted"]));
    }
    if (m.find("WeightedCapacity") != m.end() && !m["WeightedCapacity"].empty()) {
      weightedCapacity = make_shared<long>(boost::any_cast<long>(m["WeightedCapacity"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
  }


  virtual ~DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance() = default;
};
class DescribeScalingInstancesResponseBodyScalingInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance>> scalingInstance{};

  DescribeScalingInstancesResponseBodyScalingInstances() {}

  explicit DescribeScalingInstancesResponseBodyScalingInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingInstance) {
      vector<boost::any> temp1;
      for(auto item1:*scalingInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScalingInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingInstance") != m.end() && !m["ScalingInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["ScalingInstance"].type()) {
        vector<DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScalingInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scalingInstance = make_shared<vector<DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingInstancesResponseBodyScalingInstances() = default;
};
class DescribeScalingInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<DescribeScalingInstancesResponseBodyScalingInstances> scalingInstances{};
  shared_ptr<long> totalSpotCount{};

  DescribeScalingInstancesResponseBody() {}

  explicit DescribeScalingInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (scalingInstances) {
      res["ScalingInstances"] = scalingInstances ? boost::any(scalingInstances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalSpotCount) {
      res["TotalSpotCount"] = boost::any(*totalSpotCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ScalingInstances") != m.end() && !m["ScalingInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScalingInstances"].type()) {
        DescribeScalingInstancesResponseBodyScalingInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScalingInstances"]));
        scalingInstances = make_shared<DescribeScalingInstancesResponseBodyScalingInstances>(model1);
      }
    }
    if (m.find("TotalSpotCount") != m.end() && !m["TotalSpotCount"].empty()) {
      totalSpotCount = make_shared<long>(boost::any_cast<long>(m["TotalSpotCount"]));
    }
  }


  virtual ~DescribeScalingInstancesResponseBody() = default;
};
class DescribeScalingInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScalingInstancesResponseBody> body{};

  DescribeScalingInstancesResponse() {}

  explicit DescribeScalingInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScalingInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScalingInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScalingInstancesResponse() = default;
};
class DescribeScalingRulesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> scalingRuleId{};
  shared_ptr<vector<string>> scalingRuleName{};
  shared_ptr<vector<string>> scalingRuleAri{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> scalingRuleType{};
  shared_ptr<bool> showAlarmRules{};
  shared_ptr<string> ownerAccount{};

  DescribeScalingRulesRequest() {}

  explicit DescribeScalingRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingRuleId) {
      res["ScalingRuleId"] = boost::any(*scalingRuleId);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    if (scalingRuleAri) {
      res["ScalingRuleAri"] = boost::any(*scalingRuleAri);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (scalingRuleType) {
      res["ScalingRuleType"] = boost::any(*scalingRuleType);
    }
    if (showAlarmRules) {
      res["ShowAlarmRules"] = boost::any(*showAlarmRules);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingRuleId") != m.end() && !m["ScalingRuleId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScalingRuleId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScalingRuleId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scalingRuleId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScalingRuleName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScalingRuleName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scalingRuleName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScalingRuleAri") != m.end() && !m["ScalingRuleAri"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScalingRuleAri"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScalingRuleAri"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scalingRuleAri = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ScalingRuleType") != m.end() && !m["ScalingRuleType"].empty()) {
      scalingRuleType = make_shared<string>(boost::any_cast<string>(m["ScalingRuleType"]));
    }
    if (m.find("ShowAlarmRules") != m.end() && !m["ShowAlarmRules"].empty()) {
      showAlarmRules = make_shared<bool>(boost::any_cast<bool>(m["ShowAlarmRules"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DescribeScalingRulesRequest() = default;
};
class DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarmDimensionsDimension : public Darabonba::Model {
public:
  shared_ptr<string> dimensionKey{};
  shared_ptr<string> dimensionValue{};

  DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarmDimensionsDimension() {}

  explicit DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarmDimensionsDimension(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimensionKey) {
      res["DimensionKey"] = boost::any(*dimensionKey);
    }
    if (dimensionValue) {
      res["DimensionValue"] = boost::any(*dimensionValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DimensionKey") != m.end() && !m["DimensionKey"].empty()) {
      dimensionKey = make_shared<string>(boost::any_cast<string>(m["DimensionKey"]));
    }
    if (m.find("DimensionValue") != m.end() && !m["DimensionValue"].empty()) {
      dimensionValue = make_shared<string>(boost::any_cast<string>(m["DimensionValue"]));
    }
  }


  virtual ~DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarmDimensionsDimension() = default;
};
class DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarmDimensions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarmDimensionsDimension>> dimension{};

  DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarmDimensions() {}

  explicit DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarmDimensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimension) {
      vector<boost::any> temp1;
      for(auto item1:*dimension){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimension"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dimension") != m.end() && !m["Dimension"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimension"].type()) {
        vector<DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarmDimensionsDimension> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimension"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarmDimensionsDimension model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimension = make_shared<vector<DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarmDimensionsDimension>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarmDimensions() = default;
};
class DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarm : public Darabonba::Model {
public:
  shared_ptr<string> alarmTaskId{};
  shared_ptr<string> comparisonOperator{};
  shared_ptr<string> metricName{};
  shared_ptr<long> evaluationCount{};
  shared_ptr<string> alarmTaskName{};
  shared_ptr<DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarmDimensions> dimensions{};
  shared_ptr<string> metricType{};
  shared_ptr<double> threshold{};
  shared_ptr<string> statistics{};

  DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarm() {}

  explicit DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarm(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmTaskId) {
      res["AlarmTaskId"] = boost::any(*alarmTaskId);
    }
    if (comparisonOperator) {
      res["ComparisonOperator"] = boost::any(*comparisonOperator);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (evaluationCount) {
      res["EvaluationCount"] = boost::any(*evaluationCount);
    }
    if (alarmTaskName) {
      res["AlarmTaskName"] = boost::any(*alarmTaskName);
    }
    if (dimensions) {
      res["Dimensions"] = dimensions ? boost::any(dimensions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (metricType) {
      res["MetricType"] = boost::any(*metricType);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (statistics) {
      res["Statistics"] = boost::any(*statistics);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmTaskId") != m.end() && !m["AlarmTaskId"].empty()) {
      alarmTaskId = make_shared<string>(boost::any_cast<string>(m["AlarmTaskId"]));
    }
    if (m.find("ComparisonOperator") != m.end() && !m["ComparisonOperator"].empty()) {
      comparisonOperator = make_shared<string>(boost::any_cast<string>(m["ComparisonOperator"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("EvaluationCount") != m.end() && !m["EvaluationCount"].empty()) {
      evaluationCount = make_shared<long>(boost::any_cast<long>(m["EvaluationCount"]));
    }
    if (m.find("AlarmTaskName") != m.end() && !m["AlarmTaskName"].empty()) {
      alarmTaskName = make_shared<string>(boost::any_cast<string>(m["AlarmTaskName"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dimensions"].type()) {
        DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarmDimensions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dimensions"]));
        dimensions = make_shared<DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarmDimensions>(model1);
      }
    }
    if (m.find("MetricType") != m.end() && !m["MetricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["MetricType"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      statistics = make_shared<string>(boost::any_cast<string>(m["Statistics"]));
    }
  }


  virtual ~DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarm() = default;
};
class DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarms : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarm>> alarm{};

  DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarms() {}

  explicit DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarm) {
      vector<boost::any> temp1;
      for(auto item1:*alarm){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Alarm"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alarm") != m.end() && !m["Alarm"].empty()) {
      if (typeid(vector<boost::any>) == m["Alarm"].type()) {
        vector<DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarm> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Alarm"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarm model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        alarm = make_shared<vector<DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarmsAlarm>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarms() = default;
};
class DescribeScalingRulesResponseBodyScalingRulesScalingRuleStepAdjustmentsStepAdjustment : public Darabonba::Model {
public:
  shared_ptr<double> metricIntervalUpperBound{};
  shared_ptr<long> scalingAdjustment{};
  shared_ptr<double> metricIntervalLowerBound{};

  DescribeScalingRulesResponseBodyScalingRulesScalingRuleStepAdjustmentsStepAdjustment() {}

  explicit DescribeScalingRulesResponseBodyScalingRulesScalingRuleStepAdjustmentsStepAdjustment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricIntervalUpperBound) {
      res["MetricIntervalUpperBound"] = boost::any(*metricIntervalUpperBound);
    }
    if (scalingAdjustment) {
      res["ScalingAdjustment"] = boost::any(*scalingAdjustment);
    }
    if (metricIntervalLowerBound) {
      res["MetricIntervalLowerBound"] = boost::any(*metricIntervalLowerBound);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricIntervalUpperBound") != m.end() && !m["MetricIntervalUpperBound"].empty()) {
      metricIntervalUpperBound = make_shared<double>(boost::any_cast<double>(m["MetricIntervalUpperBound"]));
    }
    if (m.find("ScalingAdjustment") != m.end() && !m["ScalingAdjustment"].empty()) {
      scalingAdjustment = make_shared<long>(boost::any_cast<long>(m["ScalingAdjustment"]));
    }
    if (m.find("MetricIntervalLowerBound") != m.end() && !m["MetricIntervalLowerBound"].empty()) {
      metricIntervalLowerBound = make_shared<double>(boost::any_cast<double>(m["MetricIntervalLowerBound"]));
    }
  }


  virtual ~DescribeScalingRulesResponseBodyScalingRulesScalingRuleStepAdjustmentsStepAdjustment() = default;
};
class DescribeScalingRulesResponseBodyScalingRulesScalingRuleStepAdjustments : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingRulesResponseBodyScalingRulesScalingRuleStepAdjustmentsStepAdjustment>> stepAdjustment{};

  DescribeScalingRulesResponseBodyScalingRulesScalingRuleStepAdjustments() {}

  explicit DescribeScalingRulesResponseBodyScalingRulesScalingRuleStepAdjustments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stepAdjustment) {
      vector<boost::any> temp1;
      for(auto item1:*stepAdjustment){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StepAdjustment"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StepAdjustment") != m.end() && !m["StepAdjustment"].empty()) {
      if (typeid(vector<boost::any>) == m["StepAdjustment"].type()) {
        vector<DescribeScalingRulesResponseBodyScalingRulesScalingRuleStepAdjustmentsStepAdjustment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StepAdjustment"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingRulesResponseBodyScalingRulesScalingRuleStepAdjustmentsStepAdjustment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stepAdjustment = make_shared<vector<DescribeScalingRulesResponseBodyScalingRulesScalingRuleStepAdjustmentsStepAdjustment>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingRulesResponseBodyScalingRulesScalingRuleStepAdjustments() = default;
};
class DescribeScalingRulesResponseBodyScalingRulesScalingRule : public Darabonba::Model {
public:
  shared_ptr<string> metricName{};
  shared_ptr<long> initialMaxSize{};
  shared_ptr<DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarms> alarms{};
  shared_ptr<long> scaleOutEvaluationCount{};
  shared_ptr<string> predictiveScalingMode{};
  shared_ptr<long> minSize{};
  shared_ptr<long> predictiveTaskBufferTime{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> predictiveValueBehavior{};
  shared_ptr<long> cooldown{};
  shared_ptr<string> scalingRuleType{};
  shared_ptr<long> predictiveValueBuffer{};
  shared_ptr<long> scaleInEvaluationCount{};
  shared_ptr<bool> disableScaleIn{};
  shared_ptr<string> scalingRuleName{};
  shared_ptr<string> adjustmentType{};
  shared_ptr<long> estimatedInstanceWarmup{};
  shared_ptr<long> minAdjustmentMagnitude{};
  shared_ptr<string> scalingRuleAri{};
  shared_ptr<DescribeScalingRulesResponseBodyScalingRulesScalingRuleStepAdjustments> stepAdjustments{};
  shared_ptr<double> targetValue{};
  shared_ptr<long> maxSize{};
  shared_ptr<long> adjustmentValue{};
  shared_ptr<string> scalingRuleId{};

  DescribeScalingRulesResponseBodyScalingRulesScalingRule() {}

  explicit DescribeScalingRulesResponseBodyScalingRulesScalingRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (initialMaxSize) {
      res["InitialMaxSize"] = boost::any(*initialMaxSize);
    }
    if (alarms) {
      res["Alarms"] = alarms ? boost::any(alarms->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scaleOutEvaluationCount) {
      res["ScaleOutEvaluationCount"] = boost::any(*scaleOutEvaluationCount);
    }
    if (predictiveScalingMode) {
      res["PredictiveScalingMode"] = boost::any(*predictiveScalingMode);
    }
    if (minSize) {
      res["MinSize"] = boost::any(*minSize);
    }
    if (predictiveTaskBufferTime) {
      res["PredictiveTaskBufferTime"] = boost::any(*predictiveTaskBufferTime);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (predictiveValueBehavior) {
      res["PredictiveValueBehavior"] = boost::any(*predictiveValueBehavior);
    }
    if (cooldown) {
      res["Cooldown"] = boost::any(*cooldown);
    }
    if (scalingRuleType) {
      res["ScalingRuleType"] = boost::any(*scalingRuleType);
    }
    if (predictiveValueBuffer) {
      res["PredictiveValueBuffer"] = boost::any(*predictiveValueBuffer);
    }
    if (scaleInEvaluationCount) {
      res["ScaleInEvaluationCount"] = boost::any(*scaleInEvaluationCount);
    }
    if (disableScaleIn) {
      res["DisableScaleIn"] = boost::any(*disableScaleIn);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    if (adjustmentType) {
      res["AdjustmentType"] = boost::any(*adjustmentType);
    }
    if (estimatedInstanceWarmup) {
      res["EstimatedInstanceWarmup"] = boost::any(*estimatedInstanceWarmup);
    }
    if (minAdjustmentMagnitude) {
      res["MinAdjustmentMagnitude"] = boost::any(*minAdjustmentMagnitude);
    }
    if (scalingRuleAri) {
      res["ScalingRuleAri"] = boost::any(*scalingRuleAri);
    }
    if (stepAdjustments) {
      res["StepAdjustments"] = stepAdjustments ? boost::any(stepAdjustments->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetValue) {
      res["TargetValue"] = boost::any(*targetValue);
    }
    if (maxSize) {
      res["MaxSize"] = boost::any(*maxSize);
    }
    if (adjustmentValue) {
      res["AdjustmentValue"] = boost::any(*adjustmentValue);
    }
    if (scalingRuleId) {
      res["ScalingRuleId"] = boost::any(*scalingRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("InitialMaxSize") != m.end() && !m["InitialMaxSize"].empty()) {
      initialMaxSize = make_shared<long>(boost::any_cast<long>(m["InitialMaxSize"]));
    }
    if (m.find("Alarms") != m.end() && !m["Alarms"].empty()) {
      if (typeid(map<string, boost::any>) == m["Alarms"].type()) {
        DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarms model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Alarms"]));
        alarms = make_shared<DescribeScalingRulesResponseBodyScalingRulesScalingRuleAlarms>(model1);
      }
    }
    if (m.find("ScaleOutEvaluationCount") != m.end() && !m["ScaleOutEvaluationCount"].empty()) {
      scaleOutEvaluationCount = make_shared<long>(boost::any_cast<long>(m["ScaleOutEvaluationCount"]));
    }
    if (m.find("PredictiveScalingMode") != m.end() && !m["PredictiveScalingMode"].empty()) {
      predictiveScalingMode = make_shared<string>(boost::any_cast<string>(m["PredictiveScalingMode"]));
    }
    if (m.find("MinSize") != m.end() && !m["MinSize"].empty()) {
      minSize = make_shared<long>(boost::any_cast<long>(m["MinSize"]));
    }
    if (m.find("PredictiveTaskBufferTime") != m.end() && !m["PredictiveTaskBufferTime"].empty()) {
      predictiveTaskBufferTime = make_shared<long>(boost::any_cast<long>(m["PredictiveTaskBufferTime"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("PredictiveValueBehavior") != m.end() && !m["PredictiveValueBehavior"].empty()) {
      predictiveValueBehavior = make_shared<string>(boost::any_cast<string>(m["PredictiveValueBehavior"]));
    }
    if (m.find("Cooldown") != m.end() && !m["Cooldown"].empty()) {
      cooldown = make_shared<long>(boost::any_cast<long>(m["Cooldown"]));
    }
    if (m.find("ScalingRuleType") != m.end() && !m["ScalingRuleType"].empty()) {
      scalingRuleType = make_shared<string>(boost::any_cast<string>(m["ScalingRuleType"]));
    }
    if (m.find("PredictiveValueBuffer") != m.end() && !m["PredictiveValueBuffer"].empty()) {
      predictiveValueBuffer = make_shared<long>(boost::any_cast<long>(m["PredictiveValueBuffer"]));
    }
    if (m.find("ScaleInEvaluationCount") != m.end() && !m["ScaleInEvaluationCount"].empty()) {
      scaleInEvaluationCount = make_shared<long>(boost::any_cast<long>(m["ScaleInEvaluationCount"]));
    }
    if (m.find("DisableScaleIn") != m.end() && !m["DisableScaleIn"].empty()) {
      disableScaleIn = make_shared<bool>(boost::any_cast<bool>(m["DisableScaleIn"]));
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      scalingRuleName = make_shared<string>(boost::any_cast<string>(m["ScalingRuleName"]));
    }
    if (m.find("AdjustmentType") != m.end() && !m["AdjustmentType"].empty()) {
      adjustmentType = make_shared<string>(boost::any_cast<string>(m["AdjustmentType"]));
    }
    if (m.find("EstimatedInstanceWarmup") != m.end() && !m["EstimatedInstanceWarmup"].empty()) {
      estimatedInstanceWarmup = make_shared<long>(boost::any_cast<long>(m["EstimatedInstanceWarmup"]));
    }
    if (m.find("MinAdjustmentMagnitude") != m.end() && !m["MinAdjustmentMagnitude"].empty()) {
      minAdjustmentMagnitude = make_shared<long>(boost::any_cast<long>(m["MinAdjustmentMagnitude"]));
    }
    if (m.find("ScalingRuleAri") != m.end() && !m["ScalingRuleAri"].empty()) {
      scalingRuleAri = make_shared<string>(boost::any_cast<string>(m["ScalingRuleAri"]));
    }
    if (m.find("StepAdjustments") != m.end() && !m["StepAdjustments"].empty()) {
      if (typeid(map<string, boost::any>) == m["StepAdjustments"].type()) {
        DescribeScalingRulesResponseBodyScalingRulesScalingRuleStepAdjustments model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StepAdjustments"]));
        stepAdjustments = make_shared<DescribeScalingRulesResponseBodyScalingRulesScalingRuleStepAdjustments>(model1);
      }
    }
    if (m.find("TargetValue") != m.end() && !m["TargetValue"].empty()) {
      targetValue = make_shared<double>(boost::any_cast<double>(m["TargetValue"]));
    }
    if (m.find("MaxSize") != m.end() && !m["MaxSize"].empty()) {
      maxSize = make_shared<long>(boost::any_cast<long>(m["MaxSize"]));
    }
    if (m.find("AdjustmentValue") != m.end() && !m["AdjustmentValue"].empty()) {
      adjustmentValue = make_shared<long>(boost::any_cast<long>(m["AdjustmentValue"]));
    }
    if (m.find("ScalingRuleId") != m.end() && !m["ScalingRuleId"].empty()) {
      scalingRuleId = make_shared<string>(boost::any_cast<string>(m["ScalingRuleId"]));
    }
  }


  virtual ~DescribeScalingRulesResponseBodyScalingRulesScalingRule() = default;
};
class DescribeScalingRulesResponseBodyScalingRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingRulesResponseBodyScalingRulesScalingRule>> scalingRule{};

  DescribeScalingRulesResponseBodyScalingRules() {}

  explicit DescribeScalingRulesResponseBodyScalingRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingRule) {
      vector<boost::any> temp1;
      for(auto item1:*scalingRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScalingRule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingRule") != m.end() && !m["ScalingRule"].empty()) {
      if (typeid(vector<boost::any>) == m["ScalingRule"].type()) {
        vector<DescribeScalingRulesResponseBodyScalingRulesScalingRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScalingRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingRulesResponseBodyScalingRulesScalingRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scalingRule = make_shared<vector<DescribeScalingRulesResponseBodyScalingRulesScalingRule>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingRulesResponseBodyScalingRules() = default;
};
class DescribeScalingRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeScalingRulesResponseBodyScalingRules> scalingRules{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeScalingRulesResponseBody() {}

  explicit DescribeScalingRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (scalingRules) {
      res["ScalingRules"] = scalingRules ? boost::any(scalingRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("ScalingRules") != m.end() && !m["ScalingRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScalingRules"].type()) {
        DescribeScalingRulesResponseBodyScalingRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScalingRules"]));
        scalingRules = make_shared<DescribeScalingRulesResponseBodyScalingRules>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeScalingRulesResponseBody() = default;
};
class DescribeScalingRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScalingRulesResponseBody> body{};

  DescribeScalingRulesResponse() {}

  explicit DescribeScalingRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScalingRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScalingRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScalingRulesResponse() = default;
};
class DescribeScheduledTasksRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> scheduledAction{};
  shared_ptr<vector<string>> scheduledTaskId{};
  shared_ptr<vector<string>> scheduledTaskName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> scalingGroupId{};

  DescribeScheduledTasksRequest() {}

  explicit DescribeScheduledTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scheduledAction) {
      res["ScheduledAction"] = boost::any(*scheduledAction);
    }
    if (scheduledTaskId) {
      res["ScheduledTaskId"] = boost::any(*scheduledTaskId);
    }
    if (scheduledTaskName) {
      res["ScheduledTaskName"] = boost::any(*scheduledTaskName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScheduledAction") != m.end() && !m["ScheduledAction"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScheduledAction"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScheduledAction"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scheduledAction = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScheduledTaskId") != m.end() && !m["ScheduledTaskId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScheduledTaskId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScheduledTaskId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scheduledTaskId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScheduledTaskName") != m.end() && !m["ScheduledTaskName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScheduledTaskName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScheduledTaskName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scheduledTaskName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~DescribeScheduledTasksRequest() = default;
};
class DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask : public Darabonba::Model {
public:
  shared_ptr<bool> taskEnabled{};
  shared_ptr<string> recurrenceValue{};
  shared_ptr<long> maxValue{};
  shared_ptr<string> recurrenceType{};
  shared_ptr<string> scheduledTaskName{};
  shared_ptr<string> recurrenceEndTime{};
  shared_ptr<string> scheduledTaskId{};
  shared_ptr<long> desiredCapacity{};
  shared_ptr<long> minValue{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<long> launchExpirationTime{};
  shared_ptr<string> description{};
  shared_ptr<string> scheduledAction{};
  shared_ptr<string> launchTime{};

  DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask() {}

  explicit DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskEnabled) {
      res["TaskEnabled"] = boost::any(*taskEnabled);
    }
    if (recurrenceValue) {
      res["RecurrenceValue"] = boost::any(*recurrenceValue);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (scheduledTaskName) {
      res["ScheduledTaskName"] = boost::any(*scheduledTaskName);
    }
    if (recurrenceEndTime) {
      res["RecurrenceEndTime"] = boost::any(*recurrenceEndTime);
    }
    if (scheduledTaskId) {
      res["ScheduledTaskId"] = boost::any(*scheduledTaskId);
    }
    if (desiredCapacity) {
      res["DesiredCapacity"] = boost::any(*desiredCapacity);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (launchExpirationTime) {
      res["LaunchExpirationTime"] = boost::any(*launchExpirationTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (scheduledAction) {
      res["ScheduledAction"] = boost::any(*scheduledAction);
    }
    if (launchTime) {
      res["LaunchTime"] = boost::any(*launchTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskEnabled") != m.end() && !m["TaskEnabled"].empty()) {
      taskEnabled = make_shared<bool>(boost::any_cast<bool>(m["TaskEnabled"]));
    }
    if (m.find("RecurrenceValue") != m.end() && !m["RecurrenceValue"].empty()) {
      recurrenceValue = make_shared<string>(boost::any_cast<string>(m["RecurrenceValue"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("ScheduledTaskName") != m.end() && !m["ScheduledTaskName"].empty()) {
      scheduledTaskName = make_shared<string>(boost::any_cast<string>(m["ScheduledTaskName"]));
    }
    if (m.find("RecurrenceEndTime") != m.end() && !m["RecurrenceEndTime"].empty()) {
      recurrenceEndTime = make_shared<string>(boost::any_cast<string>(m["RecurrenceEndTime"]));
    }
    if (m.find("ScheduledTaskId") != m.end() && !m["ScheduledTaskId"].empty()) {
      scheduledTaskId = make_shared<string>(boost::any_cast<string>(m["ScheduledTaskId"]));
    }
    if (m.find("DesiredCapacity") != m.end() && !m["DesiredCapacity"].empty()) {
      desiredCapacity = make_shared<long>(boost::any_cast<long>(m["DesiredCapacity"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("LaunchExpirationTime") != m.end() && !m["LaunchExpirationTime"].empty()) {
      launchExpirationTime = make_shared<long>(boost::any_cast<long>(m["LaunchExpirationTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ScheduledAction") != m.end() && !m["ScheduledAction"].empty()) {
      scheduledAction = make_shared<string>(boost::any_cast<string>(m["ScheduledAction"]));
    }
    if (m.find("LaunchTime") != m.end() && !m["LaunchTime"].empty()) {
      launchTime = make_shared<string>(boost::any_cast<string>(m["LaunchTime"]));
    }
  }


  virtual ~DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask() = default;
};
class DescribeScheduledTasksResponseBodyScheduledTasks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask>> scheduledTask{};

  DescribeScheduledTasksResponseBodyScheduledTasks() {}

  explicit DescribeScheduledTasksResponseBodyScheduledTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scheduledTask) {
      vector<boost::any> temp1;
      for(auto item1:*scheduledTask){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScheduledTask"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScheduledTask") != m.end() && !m["ScheduledTask"].empty()) {
      if (typeid(vector<boost::any>) == m["ScheduledTask"].type()) {
        vector<DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScheduledTask"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduledTask = make_shared<vector<DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask>>(expect1);
      }
    }
  }


  virtual ~DescribeScheduledTasksResponseBodyScheduledTasks() = default;
};
class DescribeScheduledTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<DescribeScheduledTasksResponseBodyScheduledTasks> scheduledTasks{};

  DescribeScheduledTasksResponseBody() {}

  explicit DescribeScheduledTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (scheduledTasks) {
      res["ScheduledTasks"] = scheduledTasks ? boost::any(scheduledTasks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ScheduledTasks") != m.end() && !m["ScheduledTasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScheduledTasks"].type()) {
        DescribeScheduledTasksResponseBodyScheduledTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScheduledTasks"]));
        scheduledTasks = make_shared<DescribeScheduledTasksResponseBodyScheduledTasks>(model1);
      }
    }
  }


  virtual ~DescribeScheduledTasksResponseBody() = default;
};
class DescribeScheduledTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScheduledTasksResponseBody> body{};

  DescribeScheduledTasksResponse() {}

  explicit DescribeScheduledTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScheduledTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScheduledTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScheduledTasksResponse() = default;
};
class DetachDBInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<bool> forceDetach{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> DBInstance{};

  DetachDBInstancesRequest() {}

  explicit DetachDBInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (forceDetach) {
      res["ForceDetach"] = boost::any(*forceDetach);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBInstance) {
      res["DBInstance"] = boost::any(*DBInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ForceDetach") != m.end() && !m["ForceDetach"].empty()) {
      forceDetach = make_shared<bool>(boost::any_cast<bool>(m["ForceDetach"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBInstance") != m.end() && !m["DBInstance"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DBInstance"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DBInstance"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      DBInstance = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DetachDBInstancesRequest() = default;
};
class DetachDBInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachDBInstancesResponseBody() {}

  explicit DetachDBInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachDBInstancesResponseBody() = default;
};
class DetachDBInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachDBInstancesResponseBody> body{};

  DetachDBInstancesResponse() {}

  explicit DetachDBInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachDBInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachDBInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DetachDBInstancesResponse() = default;
};
class DetachInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<bool> decreaseDesiredCapacity{};
  shared_ptr<string> detachOption{};
  shared_ptr<vector<string>> instanceId{};

  DetachInstancesRequest() {}

  explicit DetachInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (decreaseDesiredCapacity) {
      res["DecreaseDesiredCapacity"] = boost::any(*decreaseDesiredCapacity);
    }
    if (detachOption) {
      res["DetachOption"] = boost::any(*detachOption);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DecreaseDesiredCapacity") != m.end() && !m["DecreaseDesiredCapacity"].empty()) {
      decreaseDesiredCapacity = make_shared<bool>(boost::any_cast<bool>(m["DecreaseDesiredCapacity"]));
    }
    if (m.find("DetachOption") != m.end() && !m["DetachOption"].empty()) {
      detachOption = make_shared<string>(boost::any_cast<string>(m["DetachOption"]));
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
  }


  virtual ~DetachInstancesRequest() = default;
};
class DetachInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scalingActivityId{};

  DetachInstancesResponseBody() {}

  explicit DetachInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
  }


  virtual ~DetachInstancesResponseBody() = default;
};
class DetachInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachInstancesResponseBody> body{};

  DetachInstancesResponse() {}

  explicit DetachInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DetachInstancesResponse() = default;
};
class DetachLoadBalancersRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<bool> forceDetach{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> loadBalancer{};

  DetachLoadBalancersRequest() {}

  explicit DetachLoadBalancersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (forceDetach) {
      res["ForceDetach"] = boost::any(*forceDetach);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (loadBalancer) {
      res["LoadBalancer"] = boost::any(*loadBalancer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ForceDetach") != m.end() && !m["ForceDetach"].empty()) {
      forceDetach = make_shared<bool>(boost::any_cast<bool>(m["ForceDetach"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("LoadBalancer") != m.end() && !m["LoadBalancer"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LoadBalancer"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LoadBalancer"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      loadBalancer = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DetachLoadBalancersRequest() = default;
};
class DetachLoadBalancersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachLoadBalancersResponseBody() {}

  explicit DetachLoadBalancersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachLoadBalancersResponseBody() = default;
};
class DetachLoadBalancersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachLoadBalancersResponseBody> body{};

  DetachLoadBalancersResponse() {}

  explicit DetachLoadBalancersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachLoadBalancersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachLoadBalancersResponseBody>(model1);
      }
    }
  }


  virtual ~DetachLoadBalancersResponse() = default;
};
class DetachVServerGroupsRequestVServerGroupVServerGroupAttribute : public Darabonba::Model {
public:
  shared_ptr<string> VServerGroupId{};
  shared_ptr<long> port{};

  DetachVServerGroupsRequestVServerGroupVServerGroupAttribute() {}

  explicit DetachVServerGroupsRequestVServerGroupVServerGroupAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupId) {
      res["VServerGroupId"] = boost::any(*VServerGroupId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupId") != m.end() && !m["VServerGroupId"].empty()) {
      VServerGroupId = make_shared<string>(boost::any_cast<string>(m["VServerGroupId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~DetachVServerGroupsRequestVServerGroupVServerGroupAttribute() = default;
};
class DetachVServerGroupsRequestVServerGroup : public Darabonba::Model {
public:
  shared_ptr<vector<DetachVServerGroupsRequestVServerGroupVServerGroupAttribute>> VServerGroupAttribute{};
  shared_ptr<string> loadBalancerId{};

  DetachVServerGroupsRequestVServerGroup() {}

  explicit DetachVServerGroupsRequestVServerGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (VServerGroupAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*VServerGroupAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VServerGroupAttribute"] = boost::any(temp1);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VServerGroupAttribute") != m.end() && !m["VServerGroupAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["VServerGroupAttribute"].type()) {
        vector<DetachVServerGroupsRequestVServerGroupVServerGroupAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VServerGroupAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetachVServerGroupsRequestVServerGroupVServerGroupAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        VServerGroupAttribute = make_shared<vector<DetachVServerGroupsRequestVServerGroupVServerGroupAttribute>>(expect1);
      }
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
  }


  virtual ~DetachVServerGroupsRequestVServerGroup() = default;
};
class DetachVServerGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> forceDetach{};
  shared_ptr<vector<DetachVServerGroupsRequestVServerGroup>> VServerGroup{};

  DetachVServerGroupsRequest() {}

  explicit DetachVServerGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (forceDetach) {
      res["ForceDetach"] = boost::any(*forceDetach);
    }
    if (VServerGroup) {
      vector<boost::any> temp1;
      for(auto item1:*VServerGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VServerGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ForceDetach") != m.end() && !m["ForceDetach"].empty()) {
      forceDetach = make_shared<bool>(boost::any_cast<bool>(m["ForceDetach"]));
    }
    if (m.find("VServerGroup") != m.end() && !m["VServerGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["VServerGroup"].type()) {
        vector<DetachVServerGroupsRequestVServerGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VServerGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetachVServerGroupsRequestVServerGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        VServerGroup = make_shared<vector<DetachVServerGroupsRequestVServerGroup>>(expect1);
      }
    }
  }


  virtual ~DetachVServerGroupsRequest() = default;
};
class DetachVServerGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachVServerGroupsResponseBody() {}

  explicit DetachVServerGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachVServerGroupsResponseBody() = default;
};
class DetachVServerGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachVServerGroupsResponseBody> body{};

  DetachVServerGroupsResponse() {}

  explicit DetachVServerGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachVServerGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachVServerGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DetachVServerGroupsResponse() = default;
};
class DisableAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> alarmTaskId{};

  DisableAlarmRequest() {}

  explicit DisableAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (alarmTaskId) {
      res["AlarmTaskId"] = boost::any(*alarmTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AlarmTaskId") != m.end() && !m["AlarmTaskId"].empty()) {
      alarmTaskId = make_shared<string>(boost::any_cast<string>(m["AlarmTaskId"]));
    }
  }


  virtual ~DisableAlarmRequest() = default;
};
class DisableAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableAlarmResponseBody() {}

  explicit DisableAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableAlarmResponseBody() = default;
};
class DisableAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableAlarmResponseBody> body{};

  DisableAlarmResponse() {}

  explicit DisableAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~DisableAlarmResponse() = default;
};
class DisableScalingGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> ownerAccount{};

  DisableScalingGroupRequest() {}

  explicit DisableScalingGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~DisableScalingGroupRequest() = default;
};
class DisableScalingGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableScalingGroupResponseBody() {}

  explicit DisableScalingGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableScalingGroupResponseBody() = default;
};
class DisableScalingGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableScalingGroupResponseBody> body{};

  DisableScalingGroupResponse() {}

  explicit DisableScalingGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableScalingGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableScalingGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DisableScalingGroupResponse() = default;
};
class EnableAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> alarmTaskId{};

  EnableAlarmRequest() {}

  explicit EnableAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (alarmTaskId) {
      res["AlarmTaskId"] = boost::any(*alarmTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AlarmTaskId") != m.end() && !m["AlarmTaskId"].empty()) {
      alarmTaskId = make_shared<string>(boost::any_cast<string>(m["AlarmTaskId"]));
    }
  }


  virtual ~EnableAlarmRequest() = default;
};
class EnableAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableAlarmResponseBody() {}

  explicit EnableAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableAlarmResponseBody() = default;
};
class EnableAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableAlarmResponseBody> body{};

  EnableAlarmResponse() {}

  explicit EnableAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~EnableAlarmResponse() = default;
};
class EnableScalingGroupRequestLaunchTemplateOverride : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<long> weightedCapacity{};

  EnableScalingGroupRequestLaunchTemplateOverride() {}

  explicit EnableScalingGroupRequestLaunchTemplateOverride(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (weightedCapacity) {
      res["WeightedCapacity"] = boost::any(*weightedCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("WeightedCapacity") != m.end() && !m["WeightedCapacity"].empty()) {
      weightedCapacity = make_shared<long>(boost::any_cast<long>(m["WeightedCapacity"]));
    }
  }


  virtual ~EnableScalingGroupRequestLaunchTemplateOverride() = default;
};
class EnableScalingGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> activeScalingConfigurationId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> launchTemplateId{};
  shared_ptr<string> launchTemplateVersion{};
  shared_ptr<vector<string>> instanceId{};
  shared_ptr<vector<int>> loadBalancerWeight{};
  shared_ptr<vector<EnableScalingGroupRequestLaunchTemplateOverride>> launchTemplateOverride{};

  EnableScalingGroupRequest() {}

  explicit EnableScalingGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (activeScalingConfigurationId) {
      res["ActiveScalingConfigurationId"] = boost::any(*activeScalingConfigurationId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (launchTemplateId) {
      res["LaunchTemplateId"] = boost::any(*launchTemplateId);
    }
    if (launchTemplateVersion) {
      res["LaunchTemplateVersion"] = boost::any(*launchTemplateVersion);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (loadBalancerWeight) {
      res["LoadBalancerWeight"] = boost::any(*loadBalancerWeight);
    }
    if (launchTemplateOverride) {
      vector<boost::any> temp1;
      for(auto item1:*launchTemplateOverride){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LaunchTemplateOverride"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ActiveScalingConfigurationId") != m.end() && !m["ActiveScalingConfigurationId"].empty()) {
      activeScalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ActiveScalingConfigurationId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("LaunchTemplateId") != m.end() && !m["LaunchTemplateId"].empty()) {
      launchTemplateId = make_shared<string>(boost::any_cast<string>(m["LaunchTemplateId"]));
    }
    if (m.find("LaunchTemplateVersion") != m.end() && !m["LaunchTemplateVersion"].empty()) {
      launchTemplateVersion = make_shared<string>(boost::any_cast<string>(m["LaunchTemplateVersion"]));
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
    if (m.find("LoadBalancerWeight") != m.end() && !m["LoadBalancerWeight"].empty()) {
      vector<int> toVec1;
      if (typeid(vector<boost::any>) == m["LoadBalancerWeight"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LoadBalancerWeight"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<int>(item));
        }
      }
      loadBalancerWeight = make_shared<vector<int>>(toVec1);
    }
    if (m.find("LaunchTemplateOverride") != m.end() && !m["LaunchTemplateOverride"].empty()) {
      if (typeid(vector<boost::any>) == m["LaunchTemplateOverride"].type()) {
        vector<EnableScalingGroupRequestLaunchTemplateOverride> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LaunchTemplateOverride"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnableScalingGroupRequestLaunchTemplateOverride model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        launchTemplateOverride = make_shared<vector<EnableScalingGroupRequestLaunchTemplateOverride>>(expect1);
      }
    }
  }


  virtual ~EnableScalingGroupRequest() = default;
};
class EnableScalingGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableScalingGroupResponseBody() {}

  explicit EnableScalingGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableScalingGroupResponseBody() = default;
};
class EnableScalingGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableScalingGroupResponseBody> body{};

  EnableScalingGroupResponse() {}

  explicit EnableScalingGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableScalingGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableScalingGroupResponseBody>(model1);
      }
    }
  }


  virtual ~EnableScalingGroupResponse() = default;
};
class EnterStandbyRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> instanceId{};

  EnterStandbyRequest() {}

  explicit EnterStandbyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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
  }


  virtual ~EnterStandbyRequest() = default;
};
class EnterStandbyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnterStandbyResponseBody() {}

  explicit EnterStandbyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnterStandbyResponseBody() = default;
};
class EnterStandbyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnterStandbyResponseBody> body{};

  EnterStandbyResponse() {}

  explicit EnterStandbyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterStandbyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterStandbyResponseBody>(model1);
      }
    }
  }


  virtual ~EnterStandbyResponse() = default;
};
class ExecuteScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingRuleAri{};
  shared_ptr<string> clientToken{};
  shared_ptr<double> breachThreshold{};
  shared_ptr<double> metricValue{};
  shared_ptr<string> ownerAccount{};

  ExecuteScalingRuleRequest() {}

  explicit ExecuteScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingRuleAri) {
      res["ScalingRuleAri"] = boost::any(*scalingRuleAri);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (breachThreshold) {
      res["BreachThreshold"] = boost::any(*breachThreshold);
    }
    if (metricValue) {
      res["MetricValue"] = boost::any(*metricValue);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingRuleAri") != m.end() && !m["ScalingRuleAri"].empty()) {
      scalingRuleAri = make_shared<string>(boost::any_cast<string>(m["ScalingRuleAri"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("BreachThreshold") != m.end() && !m["BreachThreshold"].empty()) {
      breachThreshold = make_shared<double>(boost::any_cast<double>(m["BreachThreshold"]));
    }
    if (m.find("MetricValue") != m.end() && !m["MetricValue"].empty()) {
      metricValue = make_shared<double>(boost::any_cast<double>(m["MetricValue"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~ExecuteScalingRuleRequest() = default;
};
class ExecuteScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scalingActivityId{};

  ExecuteScalingRuleResponseBody() {}

  explicit ExecuteScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
  }


  virtual ~ExecuteScalingRuleResponseBody() = default;
};
class ExecuteScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExecuteScalingRuleResponseBody> body{};

  ExecuteScalingRuleResponse() {}

  explicit ExecuteScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteScalingRuleResponse() = default;
};
class ExitStandbyRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> instanceId{};

  ExitStandbyRequest() {}

  explicit ExitStandbyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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
  }


  virtual ~ExitStandbyRequest() = default;
};
class ExitStandbyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ExitStandbyResponseBody() {}

  explicit ExitStandbyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExitStandbyResponseBody() = default;
};
class ExitStandbyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExitStandbyResponseBody> body{};

  ExitStandbyResponse() {}

  explicit ExitStandbyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExitStandbyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExitStandbyResponseBody>(model1);
      }
    }
  }


  virtual ~ExitStandbyResponse() = default;
};
class ListTagKeysRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageSize{};

  ListTagKeysRequest() {}

  explicit ListTagKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListTagKeysRequest() = default;
};
class ListTagKeysResponseBodyKeys : public Darabonba::Model {
public:
  shared_ptr<vector<string>> key{};

  ListTagKeysResponseBodyKeys() {}

  explicit ListTagKeysResponseBodyKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Key"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Key"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      key = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTagKeysResponseBodyKeys() = default;
};
class ListTagKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<ListTagKeysResponseBodyKeys> keys{};

  ListTagKeysResponseBody() {}

  explicit ListTagKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (keys) {
      res["Keys"] = keys ? boost::any(keys->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      if (typeid(map<string, boost::any>) == m["Keys"].type()) {
        ListTagKeysResponseBodyKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Keys"]));
        keys = make_shared<ListTagKeysResponseBodyKeys>(model1);
      }
    }
  }


  virtual ~ListTagKeysResponseBody() = default;
};
class ListTagKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagKeysResponseBody> body{};

  ListTagKeysResponse() {}

  explicit ListTagKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagKeysResponse() = default;
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
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
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
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
class ListTagValuesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> key{};

  ListTagValuesRequest() {}

  explicit ListTagValuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~ListTagValuesRequest() = default;
};
class ListTagValuesResponseBodyValues : public Darabonba::Model {
public:
  shared_ptr<vector<string>> value{};

  ListTagValuesResponseBodyValues() {}

  explicit ListTagValuesResponseBodyValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      value = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTagValuesResponseBodyValues() = default;
};
class ListTagValuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<ListTagValuesResponseBodyValues> values{};

  ListTagValuesResponseBody() {}

  explicit ListTagValuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (values) {
      res["Values"] = values ? boost::any(values->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(map<string, boost::any>) == m["Values"].type()) {
        ListTagValuesResponseBodyValues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Values"]));
        values = make_shared<ListTagValuesResponseBodyValues>(model1);
      }
    }
  }


  virtual ~ListTagValuesResponseBody() = default;
};
class ListTagValuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagValuesResponseBody> body{};

  ListTagValuesResponse() {}

  explicit ListTagValuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagValuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagValuesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagValuesResponse() = default;
};
class ModifyAlarmRequestDimension : public Darabonba::Model {
public:
  shared_ptr<string> dimensionKey{};
  shared_ptr<string> dimensionValue{};

  ModifyAlarmRequestDimension() {}

  explicit ModifyAlarmRequestDimension(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dimensionKey) {
      res["DimensionKey"] = boost::any(*dimensionKey);
    }
    if (dimensionValue) {
      res["DimensionValue"] = boost::any(*dimensionValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DimensionKey") != m.end() && !m["DimensionKey"].empty()) {
      dimensionKey = make_shared<string>(boost::any_cast<string>(m["DimensionKey"]));
    }
    if (m.find("DimensionValue") != m.end() && !m["DimensionValue"].empty()) {
      dimensionValue = make_shared<string>(boost::any_cast<string>(m["DimensionValue"]));
    }
  }


  virtual ~ModifyAlarmRequestDimension() = default;
};
class ModifyAlarmRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> alarmTaskId{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> metricName{};
  shared_ptr<string> metricType{};
  shared_ptr<long> period{};
  shared_ptr<string> statistics{};
  shared_ptr<double> threshold{};
  shared_ptr<string> comparisonOperator{};
  shared_ptr<long> evaluationCount{};
  shared_ptr<long> groupId{};
  shared_ptr<string> effective{};
  shared_ptr<vector<string>> alarmAction{};
  shared_ptr<vector<ModifyAlarmRequestDimension>> dimension{};

  ModifyAlarmRequest() {}

  explicit ModifyAlarmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (alarmTaskId) {
      res["AlarmTaskId"] = boost::any(*alarmTaskId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (metricType) {
      res["MetricType"] = boost::any(*metricType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (statistics) {
      res["Statistics"] = boost::any(*statistics);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (comparisonOperator) {
      res["ComparisonOperator"] = boost::any(*comparisonOperator);
    }
    if (evaluationCount) {
      res["EvaluationCount"] = boost::any(*evaluationCount);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (effective) {
      res["Effective"] = boost::any(*effective);
    }
    if (alarmAction) {
      res["AlarmAction"] = boost::any(*alarmAction);
    }
    if (dimension) {
      vector<boost::any> temp1;
      for(auto item1:*dimension){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dimension"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AlarmTaskId") != m.end() && !m["AlarmTaskId"].empty()) {
      alarmTaskId = make_shared<string>(boost::any_cast<string>(m["AlarmTaskId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("MetricType") != m.end() && !m["MetricType"].empty()) {
      metricType = make_shared<string>(boost::any_cast<string>(m["MetricType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("Statistics") != m.end() && !m["Statistics"].empty()) {
      statistics = make_shared<string>(boost::any_cast<string>(m["Statistics"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("ComparisonOperator") != m.end() && !m["ComparisonOperator"].empty()) {
      comparisonOperator = make_shared<string>(boost::any_cast<string>(m["ComparisonOperator"]));
    }
    if (m.find("EvaluationCount") != m.end() && !m["EvaluationCount"].empty()) {
      evaluationCount = make_shared<long>(boost::any_cast<long>(m["EvaluationCount"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["GroupId"]));
    }
    if (m.find("Effective") != m.end() && !m["Effective"].empty()) {
      effective = make_shared<string>(boost::any_cast<string>(m["Effective"]));
    }
    if (m.find("AlarmAction") != m.end() && !m["AlarmAction"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AlarmAction"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AlarmAction"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      alarmAction = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Dimension") != m.end() && !m["Dimension"].empty()) {
      if (typeid(vector<boost::any>) == m["Dimension"].type()) {
        vector<ModifyAlarmRequestDimension> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dimension"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyAlarmRequestDimension model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimension = make_shared<vector<ModifyAlarmRequestDimension>>(expect1);
      }
    }
  }


  virtual ~ModifyAlarmRequest() = default;
};
class ModifyAlarmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> alarmTaskId{};

  ModifyAlarmResponseBody() {}

  explicit ModifyAlarmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (alarmTaskId) {
      res["AlarmTaskId"] = boost::any(*alarmTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AlarmTaskId") != m.end() && !m["AlarmTaskId"].empty()) {
      alarmTaskId = make_shared<string>(boost::any_cast<string>(m["AlarmTaskId"]));
    }
  }


  virtual ~ModifyAlarmResponseBody() = default;
};
class ModifyAlarmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyAlarmResponseBody> body{};

  ModifyAlarmResponse() {}

  explicit ModifyAlarmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAlarmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAlarmResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAlarmResponse() = default;
};
class ModifyLifecycleHookRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> lifecycleHookId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> lifecycleHookName{};
  shared_ptr<string> defaultResult{};
  shared_ptr<long> heartbeatTimeout{};
  shared_ptr<string> lifecycleTransition{};
  shared_ptr<string> notificationMetadata{};
  shared_ptr<string> notificationArn{};

  ModifyLifecycleHookRequest() {}

  explicit ModifyLifecycleHookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (lifecycleHookId) {
      res["LifecycleHookId"] = boost::any(*lifecycleHookId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (lifecycleHookName) {
      res["LifecycleHookName"] = boost::any(*lifecycleHookName);
    }
    if (defaultResult) {
      res["DefaultResult"] = boost::any(*defaultResult);
    }
    if (heartbeatTimeout) {
      res["HeartbeatTimeout"] = boost::any(*heartbeatTimeout);
    }
    if (lifecycleTransition) {
      res["LifecycleTransition"] = boost::any(*lifecycleTransition);
    }
    if (notificationMetadata) {
      res["NotificationMetadata"] = boost::any(*notificationMetadata);
    }
    if (notificationArn) {
      res["NotificationArn"] = boost::any(*notificationArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("LifecycleHookId") != m.end() && !m["LifecycleHookId"].empty()) {
      lifecycleHookId = make_shared<string>(boost::any_cast<string>(m["LifecycleHookId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("LifecycleHookName") != m.end() && !m["LifecycleHookName"].empty()) {
      lifecycleHookName = make_shared<string>(boost::any_cast<string>(m["LifecycleHookName"]));
    }
    if (m.find("DefaultResult") != m.end() && !m["DefaultResult"].empty()) {
      defaultResult = make_shared<string>(boost::any_cast<string>(m["DefaultResult"]));
    }
    if (m.find("HeartbeatTimeout") != m.end() && !m["HeartbeatTimeout"].empty()) {
      heartbeatTimeout = make_shared<long>(boost::any_cast<long>(m["HeartbeatTimeout"]));
    }
    if (m.find("LifecycleTransition") != m.end() && !m["LifecycleTransition"].empty()) {
      lifecycleTransition = make_shared<string>(boost::any_cast<string>(m["LifecycleTransition"]));
    }
    if (m.find("NotificationMetadata") != m.end() && !m["NotificationMetadata"].empty()) {
      notificationMetadata = make_shared<string>(boost::any_cast<string>(m["NotificationMetadata"]));
    }
    if (m.find("NotificationArn") != m.end() && !m["NotificationArn"].empty()) {
      notificationArn = make_shared<string>(boost::any_cast<string>(m["NotificationArn"]));
    }
  }


  virtual ~ModifyLifecycleHookRequest() = default;
};
class ModifyLifecycleHookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyLifecycleHookResponseBody() {}

  explicit ModifyLifecycleHookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyLifecycleHookResponseBody() = default;
};
class ModifyLifecycleHookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyLifecycleHookResponseBody> body{};

  ModifyLifecycleHookResponse() {}

  explicit ModifyLifecycleHookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyLifecycleHookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyLifecycleHookResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyLifecycleHookResponse() = default;
};
class ModifyNotificationConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> notificationArn{};
  shared_ptr<vector<string>> notificationType{};

  ModifyNotificationConfigurationRequest() {}

  explicit ModifyNotificationConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (notificationArn) {
      res["NotificationArn"] = boost::any(*notificationArn);
    }
    if (notificationType) {
      res["NotificationType"] = boost::any(*notificationType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("NotificationArn") != m.end() && !m["NotificationArn"].empty()) {
      notificationArn = make_shared<string>(boost::any_cast<string>(m["NotificationArn"]));
    }
    if (m.find("NotificationType") != m.end() && !m["NotificationType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NotificationType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NotificationType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      notificationType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyNotificationConfigurationRequest() = default;
};
class ModifyNotificationConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyNotificationConfigurationResponseBody() {}

  explicit ModifyNotificationConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyNotificationConfigurationResponseBody() = default;
};
class ModifyNotificationConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyNotificationConfigurationResponseBody> body{};

  ModifyNotificationConfigurationResponse() {}

  explicit ModifyNotificationConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyNotificationConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNotificationConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNotificationConfigurationResponse() = default;
};
class ModifyScalingConfigurationRequestSystemDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<long> size{};
  shared_ptr<string> diskName{};
  shared_ptr<string> description{};
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<string> performanceLevel{};

  ModifyScalingConfigurationRequestSystemDisk() {}

  explicit ModifyScalingConfigurationRequestSystemDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (diskName) {
      res["DiskName"] = boost::any(*diskName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("DiskName") != m.end() && !m["DiskName"].empty()) {
      diskName = make_shared<string>(boost::any_cast<string>(m["DiskName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
  }


  virtual ~ModifyScalingConfigurationRequestSystemDisk() = default;
};
class ModifyScalingConfigurationRequestPrivatePoolOptions : public Darabonba::Model {
public:
  shared_ptr<string> matchCriteria{};
  shared_ptr<string> id{};

  ModifyScalingConfigurationRequestPrivatePoolOptions() {}

  explicit ModifyScalingConfigurationRequestPrivatePoolOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchCriteria) {
      res["MatchCriteria"] = boost::any(*matchCriteria);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchCriteria") != m.end() && !m["MatchCriteria"].empty()) {
      matchCriteria = make_shared<string>(boost::any_cast<string>(m["MatchCriteria"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ModifyScalingConfigurationRequestPrivatePoolOptions() = default;
};
class ModifyScalingConfigurationRequestDataDisk : public Darabonba::Model {
public:
  shared_ptr<string> performanceLevel{};
  shared_ptr<string> description{};
  shared_ptr<string> snapshotId{};
  shared_ptr<long> size{};
  shared_ptr<string> device{};
  shared_ptr<string> diskName{};
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<string> category{};
  shared_ptr<string> KMSKeyId{};
  shared_ptr<bool> deleteWithInstance{};
  shared_ptr<string> encrypted{};

  ModifyScalingConfigurationRequestDataDisk() {}

  explicit ModifyScalingConfigurationRequestDataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (diskName) {
      res["DiskName"] = boost::any(*diskName);
    }
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (KMSKeyId) {
      res["KMSKeyId"] = boost::any(*KMSKeyId);
    }
    if (deleteWithInstance) {
      res["DeleteWithInstance"] = boost::any(*deleteWithInstance);
    }
    if (encrypted) {
      res["Encrypted"] = boost::any(*encrypted);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("DiskName") != m.end() && !m["DiskName"].empty()) {
      diskName = make_shared<string>(boost::any_cast<string>(m["DiskName"]));
    }
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("KMSKeyId") != m.end() && !m["KMSKeyId"].empty()) {
      KMSKeyId = make_shared<string>(boost::any_cast<string>(m["KMSKeyId"]));
    }
    if (m.find("DeleteWithInstance") != m.end() && !m["DeleteWithInstance"].empty()) {
      deleteWithInstance = make_shared<bool>(boost::any_cast<bool>(m["DeleteWithInstance"]));
    }
    if (m.find("Encrypted") != m.end() && !m["Encrypted"].empty()) {
      encrypted = make_shared<string>(boost::any_cast<string>(m["Encrypted"]));
    }
  }


  virtual ~ModifyScalingConfigurationRequestDataDisk() = default;
};
class ModifyScalingConfigurationRequestSpotPriceLimit : public Darabonba::Model {
public:
  shared_ptr<double> priceLimit{};
  shared_ptr<string> instanceType{};

  ModifyScalingConfigurationRequestSpotPriceLimit() {}

  explicit ModifyScalingConfigurationRequestSpotPriceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (priceLimit) {
      res["PriceLimit"] = boost::any(*priceLimit);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PriceLimit") != m.end() && !m["PriceLimit"].empty()) {
      priceLimit = make_shared<double>(boost::any_cast<double>(m["PriceLimit"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~ModifyScalingConfigurationRequestSpotPriceLimit() = default;
};
class ModifyScalingConfigurationRequestInstanceTypeOverride : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<long> weightedCapacity{};

  ModifyScalingConfigurationRequestInstanceTypeOverride() {}

  explicit ModifyScalingConfigurationRequestInstanceTypeOverride(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (weightedCapacity) {
      res["WeightedCapacity"] = boost::any(*weightedCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("WeightedCapacity") != m.end() && !m["WeightedCapacity"].empty()) {
      weightedCapacity = make_shared<long>(boost::any_cast<long>(m["WeightedCapacity"]));
    }
  }


  virtual ~ModifyScalingConfigurationRequestInstanceTypeOverride() = default;
};
class ModifyScalingConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<ModifyScalingConfigurationRequestSystemDisk> systemDisk{};
  shared_ptr<ModifyScalingConfigurationRequestPrivatePoolOptions> privatePoolOptions{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> scalingConfigurationId{};
  shared_ptr<string> ioOptimized{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> scalingConfigurationName{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> hostName{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<long> cpu{};
  shared_ptr<long> memory{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandwidthOut{};
  shared_ptr<long> loadBalancerWeight{};
  shared_ptr<string> userData{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<bool> passwordInherit{};
  shared_ptr<string> tags{};
  shared_ptr<string> deploymentSetId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<bool> override{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> hpcClusterId{};
  shared_ptr<string> instanceDescription{};
  shared_ptr<long> ipv6AddressCount{};
  shared_ptr<string> creditSpecification{};
  shared_ptr<string> imageFamily{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> affinity{};
  shared_ptr<string> tenancy{};
  shared_ptr<map<string, boost::any>> schedulerOptions{};
  shared_ptr<long> spotDuration{};
  shared_ptr<string> spotInterruptionBehavior{};
  shared_ptr<vector<ModifyScalingConfigurationRequestDataDisk>> dataDisk{};
  shared_ptr<vector<ModifyScalingConfigurationRequestSpotPriceLimit>> spotPriceLimit{};
  shared_ptr<vector<string>> instanceTypes{};
  shared_ptr<vector<ModifyScalingConfigurationRequestInstanceTypeOverride>> instanceTypeOverride{};
  shared_ptr<vector<string>> securityGroupIds{};

  ModifyScalingConfigurationRequest() {}

  explicit ModifyScalingConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (systemDisk) {
      res["SystemDisk"] = systemDisk ? boost::any(systemDisk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (privatePoolOptions) {
      res["PrivatePoolOptions"] = privatePoolOptions ? boost::any(privatePoolOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (scalingConfigurationId) {
      res["ScalingConfigurationId"] = boost::any(*scalingConfigurationId);
    }
    if (ioOptimized) {
      res["IoOptimized"] = boost::any(*ioOptimized);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (scalingConfigurationName) {
      res["ScalingConfigurationName"] = boost::any(*scalingConfigurationName);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (internetMaxBandwidthOut) {
      res["InternetMaxBandwidthOut"] = boost::any(*internetMaxBandwidthOut);
    }
    if (loadBalancerWeight) {
      res["LoadBalancerWeight"] = boost::any(*loadBalancerWeight);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (passwordInherit) {
      res["PasswordInherit"] = boost::any(*passwordInherit);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (deploymentSetId) {
      res["DeploymentSetId"] = boost::any(*deploymentSetId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (override) {
      res["Override"] = boost::any(*override);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (hpcClusterId) {
      res["HpcClusterId"] = boost::any(*hpcClusterId);
    }
    if (instanceDescription) {
      res["InstanceDescription"] = boost::any(*instanceDescription);
    }
    if (ipv6AddressCount) {
      res["Ipv6AddressCount"] = boost::any(*ipv6AddressCount);
    }
    if (creditSpecification) {
      res["CreditSpecification"] = boost::any(*creditSpecification);
    }
    if (imageFamily) {
      res["ImageFamily"] = boost::any(*imageFamily);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (affinity) {
      res["Affinity"] = boost::any(*affinity);
    }
    if (tenancy) {
      res["Tenancy"] = boost::any(*tenancy);
    }
    if (schedulerOptions) {
      res["SchedulerOptions"] = boost::any(*schedulerOptions);
    }
    if (spotDuration) {
      res["SpotDuration"] = boost::any(*spotDuration);
    }
    if (spotInterruptionBehavior) {
      res["SpotInterruptionBehavior"] = boost::any(*spotInterruptionBehavior);
    }
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisk"] = boost::any(temp1);
    }
    if (spotPriceLimit) {
      vector<boost::any> temp1;
      for(auto item1:*spotPriceLimit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpotPriceLimit"] = boost::any(temp1);
    }
    if (instanceTypes) {
      res["InstanceTypes"] = boost::any(*instanceTypes);
    }
    if (instanceTypeOverride) {
      vector<boost::any> temp1;
      for(auto item1:*instanceTypeOverride){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceTypeOverride"] = boost::any(temp1);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SystemDisk") != m.end() && !m["SystemDisk"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemDisk"].type()) {
        ModifyScalingConfigurationRequestSystemDisk model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemDisk"]));
        systemDisk = make_shared<ModifyScalingConfigurationRequestSystemDisk>(model1);
      }
    }
    if (m.find("PrivatePoolOptions") != m.end() && !m["PrivatePoolOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrivatePoolOptions"].type()) {
        ModifyScalingConfigurationRequestPrivatePoolOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrivatePoolOptions"]));
        privatePoolOptions = make_shared<ModifyScalingConfigurationRequestPrivatePoolOptions>(model1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ScalingConfigurationId") != m.end() && !m["ScalingConfigurationId"].empty()) {
      scalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationId"]));
    }
    if (m.find("IoOptimized") != m.end() && !m["IoOptimized"].empty()) {
      ioOptimized = make_shared<string>(boost::any_cast<string>(m["IoOptimized"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("ScalingConfigurationName") != m.end() && !m["ScalingConfigurationName"].empty()) {
      scalingConfigurationName = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationName"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("InternetMaxBandwidthOut") != m.end() && !m["InternetMaxBandwidthOut"].empty()) {
      internetMaxBandwidthOut = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandwidthOut"]));
    }
    if (m.find("LoadBalancerWeight") != m.end() && !m["LoadBalancerWeight"].empty()) {
      loadBalancerWeight = make_shared<long>(boost::any_cast<long>(m["LoadBalancerWeight"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("PasswordInherit") != m.end() && !m["PasswordInherit"].empty()) {
      passwordInherit = make_shared<bool>(boost::any_cast<bool>(m["PasswordInherit"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("DeploymentSetId") != m.end() && !m["DeploymentSetId"].empty()) {
      deploymentSetId = make_shared<string>(boost::any_cast<string>(m["DeploymentSetId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Override") != m.end() && !m["Override"].empty()) {
      override = make_shared<bool>(boost::any_cast<bool>(m["Override"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("HpcClusterId") != m.end() && !m["HpcClusterId"].empty()) {
      hpcClusterId = make_shared<string>(boost::any_cast<string>(m["HpcClusterId"]));
    }
    if (m.find("InstanceDescription") != m.end() && !m["InstanceDescription"].empty()) {
      instanceDescription = make_shared<string>(boost::any_cast<string>(m["InstanceDescription"]));
    }
    if (m.find("Ipv6AddressCount") != m.end() && !m["Ipv6AddressCount"].empty()) {
      ipv6AddressCount = make_shared<long>(boost::any_cast<long>(m["Ipv6AddressCount"]));
    }
    if (m.find("CreditSpecification") != m.end() && !m["CreditSpecification"].empty()) {
      creditSpecification = make_shared<string>(boost::any_cast<string>(m["CreditSpecification"]));
    }
    if (m.find("ImageFamily") != m.end() && !m["ImageFamily"].empty()) {
      imageFamily = make_shared<string>(boost::any_cast<string>(m["ImageFamily"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("Affinity") != m.end() && !m["Affinity"].empty()) {
      affinity = make_shared<string>(boost::any_cast<string>(m["Affinity"]));
    }
    if (m.find("Tenancy") != m.end() && !m["Tenancy"].empty()) {
      tenancy = make_shared<string>(boost::any_cast<string>(m["Tenancy"]));
    }
    if (m.find("SchedulerOptions") != m.end() && !m["SchedulerOptions"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["SchedulerOptions"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      schedulerOptions = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("SpotDuration") != m.end() && !m["SpotDuration"].empty()) {
      spotDuration = make_shared<long>(boost::any_cast<long>(m["SpotDuration"]));
    }
    if (m.find("SpotInterruptionBehavior") != m.end() && !m["SpotInterruptionBehavior"].empty()) {
      spotInterruptionBehavior = make_shared<string>(boost::any_cast<string>(m["SpotInterruptionBehavior"]));
    }
    if (m.find("DataDisk") != m.end() && !m["DataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisk"].type()) {
        vector<ModifyScalingConfigurationRequestDataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyScalingConfigurationRequestDataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<ModifyScalingConfigurationRequestDataDisk>>(expect1);
      }
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      if (typeid(vector<boost::any>) == m["SpotPriceLimit"].type()) {
        vector<ModifyScalingConfigurationRequestSpotPriceLimit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpotPriceLimit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyScalingConfigurationRequestSpotPriceLimit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spotPriceLimit = make_shared<vector<ModifyScalingConfigurationRequestSpotPriceLimit>>(expect1);
      }
    }
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceTypeOverride") != m.end() && !m["InstanceTypeOverride"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceTypeOverride"].type()) {
        vector<ModifyScalingConfigurationRequestInstanceTypeOverride> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceTypeOverride"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyScalingConfigurationRequestInstanceTypeOverride model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceTypeOverride = make_shared<vector<ModifyScalingConfigurationRequestInstanceTypeOverride>>(expect1);
      }
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyScalingConfigurationRequest() = default;
};
class ModifyScalingConfigurationShrinkRequestSystemDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<long> size{};
  shared_ptr<string> diskName{};
  shared_ptr<string> description{};
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<string> performanceLevel{};

  ModifyScalingConfigurationShrinkRequestSystemDisk() {}

  explicit ModifyScalingConfigurationShrinkRequestSystemDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (diskName) {
      res["DiskName"] = boost::any(*diskName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("DiskName") != m.end() && !m["DiskName"].empty()) {
      diskName = make_shared<string>(boost::any_cast<string>(m["DiskName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
  }


  virtual ~ModifyScalingConfigurationShrinkRequestSystemDisk() = default;
};
class ModifyScalingConfigurationShrinkRequestPrivatePoolOptions : public Darabonba::Model {
public:
  shared_ptr<string> matchCriteria{};
  shared_ptr<string> id{};

  ModifyScalingConfigurationShrinkRequestPrivatePoolOptions() {}

  explicit ModifyScalingConfigurationShrinkRequestPrivatePoolOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (matchCriteria) {
      res["MatchCriteria"] = boost::any(*matchCriteria);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MatchCriteria") != m.end() && !m["MatchCriteria"].empty()) {
      matchCriteria = make_shared<string>(boost::any_cast<string>(m["MatchCriteria"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ModifyScalingConfigurationShrinkRequestPrivatePoolOptions() = default;
};
class ModifyScalingConfigurationShrinkRequestDataDisk : public Darabonba::Model {
public:
  shared_ptr<string> performanceLevel{};
  shared_ptr<string> description{};
  shared_ptr<string> snapshotId{};
  shared_ptr<long> size{};
  shared_ptr<string> device{};
  shared_ptr<string> diskName{};
  shared_ptr<string> autoSnapshotPolicyId{};
  shared_ptr<string> category{};
  shared_ptr<string> KMSKeyId{};
  shared_ptr<bool> deleteWithInstance{};
  shared_ptr<string> encrypted{};

  ModifyScalingConfigurationShrinkRequestDataDisk() {}

  explicit ModifyScalingConfigurationShrinkRequestDataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (diskName) {
      res["DiskName"] = boost::any(*diskName);
    }
    if (autoSnapshotPolicyId) {
      res["AutoSnapshotPolicyId"] = boost::any(*autoSnapshotPolicyId);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (KMSKeyId) {
      res["KMSKeyId"] = boost::any(*KMSKeyId);
    }
    if (deleteWithInstance) {
      res["DeleteWithInstance"] = boost::any(*deleteWithInstance);
    }
    if (encrypted) {
      res["Encrypted"] = boost::any(*encrypted);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("DiskName") != m.end() && !m["DiskName"].empty()) {
      diskName = make_shared<string>(boost::any_cast<string>(m["DiskName"]));
    }
    if (m.find("AutoSnapshotPolicyId") != m.end() && !m["AutoSnapshotPolicyId"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["AutoSnapshotPolicyId"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("KMSKeyId") != m.end() && !m["KMSKeyId"].empty()) {
      KMSKeyId = make_shared<string>(boost::any_cast<string>(m["KMSKeyId"]));
    }
    if (m.find("DeleteWithInstance") != m.end() && !m["DeleteWithInstance"].empty()) {
      deleteWithInstance = make_shared<bool>(boost::any_cast<bool>(m["DeleteWithInstance"]));
    }
    if (m.find("Encrypted") != m.end() && !m["Encrypted"].empty()) {
      encrypted = make_shared<string>(boost::any_cast<string>(m["Encrypted"]));
    }
  }


  virtual ~ModifyScalingConfigurationShrinkRequestDataDisk() = default;
};
class ModifyScalingConfigurationShrinkRequestSpotPriceLimit : public Darabonba::Model {
public:
  shared_ptr<double> priceLimit{};
  shared_ptr<string> instanceType{};

  ModifyScalingConfigurationShrinkRequestSpotPriceLimit() {}

  explicit ModifyScalingConfigurationShrinkRequestSpotPriceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (priceLimit) {
      res["PriceLimit"] = boost::any(*priceLimit);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PriceLimit") != m.end() && !m["PriceLimit"].empty()) {
      priceLimit = make_shared<double>(boost::any_cast<double>(m["PriceLimit"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~ModifyScalingConfigurationShrinkRequestSpotPriceLimit() = default;
};
class ModifyScalingConfigurationShrinkRequestInstanceTypeOverride : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<long> weightedCapacity{};

  ModifyScalingConfigurationShrinkRequestInstanceTypeOverride() {}

  explicit ModifyScalingConfigurationShrinkRequestInstanceTypeOverride(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (weightedCapacity) {
      res["WeightedCapacity"] = boost::any(*weightedCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("WeightedCapacity") != m.end() && !m["WeightedCapacity"].empty()) {
      weightedCapacity = make_shared<long>(boost::any_cast<long>(m["WeightedCapacity"]));
    }
  }


  virtual ~ModifyScalingConfigurationShrinkRequestInstanceTypeOverride() = default;
};
class ModifyScalingConfigurationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<ModifyScalingConfigurationShrinkRequestSystemDisk> systemDisk{};
  shared_ptr<ModifyScalingConfigurationShrinkRequestPrivatePoolOptions> privatePoolOptions{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> scalingConfigurationId{};
  shared_ptr<string> ioOptimized{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> scalingConfigurationName{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> hostName{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<long> cpu{};
  shared_ptr<long> memory{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandwidthOut{};
  shared_ptr<long> loadBalancerWeight{};
  shared_ptr<string> userData{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<bool> passwordInherit{};
  shared_ptr<string> tags{};
  shared_ptr<string> deploymentSetId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<bool> override{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> hpcClusterId{};
  shared_ptr<string> instanceDescription{};
  shared_ptr<long> ipv6AddressCount{};
  shared_ptr<string> creditSpecification{};
  shared_ptr<string> imageFamily{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> affinity{};
  shared_ptr<string> tenancy{};
  shared_ptr<string> schedulerOptionsShrink{};
  shared_ptr<long> spotDuration{};
  shared_ptr<string> spotInterruptionBehavior{};
  shared_ptr<vector<ModifyScalingConfigurationShrinkRequestDataDisk>> dataDisk{};
  shared_ptr<vector<ModifyScalingConfigurationShrinkRequestSpotPriceLimit>> spotPriceLimit{};
  shared_ptr<vector<string>> instanceTypes{};
  shared_ptr<vector<ModifyScalingConfigurationShrinkRequestInstanceTypeOverride>> instanceTypeOverride{};
  shared_ptr<vector<string>> securityGroupIds{};

  ModifyScalingConfigurationShrinkRequest() {}

  explicit ModifyScalingConfigurationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (systemDisk) {
      res["SystemDisk"] = systemDisk ? boost::any(systemDisk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (privatePoolOptions) {
      res["PrivatePoolOptions"] = privatePoolOptions ? boost::any(privatePoolOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (scalingConfigurationId) {
      res["ScalingConfigurationId"] = boost::any(*scalingConfigurationId);
    }
    if (ioOptimized) {
      res["IoOptimized"] = boost::any(*ioOptimized);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (scalingConfigurationName) {
      res["ScalingConfigurationName"] = boost::any(*scalingConfigurationName);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (internetMaxBandwidthOut) {
      res["InternetMaxBandwidthOut"] = boost::any(*internetMaxBandwidthOut);
    }
    if (loadBalancerWeight) {
      res["LoadBalancerWeight"] = boost::any(*loadBalancerWeight);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (passwordInherit) {
      res["PasswordInherit"] = boost::any(*passwordInherit);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (deploymentSetId) {
      res["DeploymentSetId"] = boost::any(*deploymentSetId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (override) {
      res["Override"] = boost::any(*override);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (hpcClusterId) {
      res["HpcClusterId"] = boost::any(*hpcClusterId);
    }
    if (instanceDescription) {
      res["InstanceDescription"] = boost::any(*instanceDescription);
    }
    if (ipv6AddressCount) {
      res["Ipv6AddressCount"] = boost::any(*ipv6AddressCount);
    }
    if (creditSpecification) {
      res["CreditSpecification"] = boost::any(*creditSpecification);
    }
    if (imageFamily) {
      res["ImageFamily"] = boost::any(*imageFamily);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (affinity) {
      res["Affinity"] = boost::any(*affinity);
    }
    if (tenancy) {
      res["Tenancy"] = boost::any(*tenancy);
    }
    if (schedulerOptionsShrink) {
      res["SchedulerOptions"] = boost::any(*schedulerOptionsShrink);
    }
    if (spotDuration) {
      res["SpotDuration"] = boost::any(*spotDuration);
    }
    if (spotInterruptionBehavior) {
      res["SpotInterruptionBehavior"] = boost::any(*spotInterruptionBehavior);
    }
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisk"] = boost::any(temp1);
    }
    if (spotPriceLimit) {
      vector<boost::any> temp1;
      for(auto item1:*spotPriceLimit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpotPriceLimit"] = boost::any(temp1);
    }
    if (instanceTypes) {
      res["InstanceTypes"] = boost::any(*instanceTypes);
    }
    if (instanceTypeOverride) {
      vector<boost::any> temp1;
      for(auto item1:*instanceTypeOverride){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceTypeOverride"] = boost::any(temp1);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SystemDisk") != m.end() && !m["SystemDisk"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemDisk"].type()) {
        ModifyScalingConfigurationShrinkRequestSystemDisk model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemDisk"]));
        systemDisk = make_shared<ModifyScalingConfigurationShrinkRequestSystemDisk>(model1);
      }
    }
    if (m.find("PrivatePoolOptions") != m.end() && !m["PrivatePoolOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["PrivatePoolOptions"].type()) {
        ModifyScalingConfigurationShrinkRequestPrivatePoolOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PrivatePoolOptions"]));
        privatePoolOptions = make_shared<ModifyScalingConfigurationShrinkRequestPrivatePoolOptions>(model1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ScalingConfigurationId") != m.end() && !m["ScalingConfigurationId"].empty()) {
      scalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationId"]));
    }
    if (m.find("IoOptimized") != m.end() && !m["IoOptimized"].empty()) {
      ioOptimized = make_shared<string>(boost::any_cast<string>(m["IoOptimized"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("ScalingConfigurationName") != m.end() && !m["ScalingConfigurationName"].empty()) {
      scalingConfigurationName = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationName"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("InternetMaxBandwidthOut") != m.end() && !m["InternetMaxBandwidthOut"].empty()) {
      internetMaxBandwidthOut = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandwidthOut"]));
    }
    if (m.find("LoadBalancerWeight") != m.end() && !m["LoadBalancerWeight"].empty()) {
      loadBalancerWeight = make_shared<long>(boost::any_cast<long>(m["LoadBalancerWeight"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("PasswordInherit") != m.end() && !m["PasswordInherit"].empty()) {
      passwordInherit = make_shared<bool>(boost::any_cast<bool>(m["PasswordInherit"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("DeploymentSetId") != m.end() && !m["DeploymentSetId"].empty()) {
      deploymentSetId = make_shared<string>(boost::any_cast<string>(m["DeploymentSetId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Override") != m.end() && !m["Override"].empty()) {
      override = make_shared<bool>(boost::any_cast<bool>(m["Override"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("HpcClusterId") != m.end() && !m["HpcClusterId"].empty()) {
      hpcClusterId = make_shared<string>(boost::any_cast<string>(m["HpcClusterId"]));
    }
    if (m.find("InstanceDescription") != m.end() && !m["InstanceDescription"].empty()) {
      instanceDescription = make_shared<string>(boost::any_cast<string>(m["InstanceDescription"]));
    }
    if (m.find("Ipv6AddressCount") != m.end() && !m["Ipv6AddressCount"].empty()) {
      ipv6AddressCount = make_shared<long>(boost::any_cast<long>(m["Ipv6AddressCount"]));
    }
    if (m.find("CreditSpecification") != m.end() && !m["CreditSpecification"].empty()) {
      creditSpecification = make_shared<string>(boost::any_cast<string>(m["CreditSpecification"]));
    }
    if (m.find("ImageFamily") != m.end() && !m["ImageFamily"].empty()) {
      imageFamily = make_shared<string>(boost::any_cast<string>(m["ImageFamily"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("Affinity") != m.end() && !m["Affinity"].empty()) {
      affinity = make_shared<string>(boost::any_cast<string>(m["Affinity"]));
    }
    if (m.find("Tenancy") != m.end() && !m["Tenancy"].empty()) {
      tenancy = make_shared<string>(boost::any_cast<string>(m["Tenancy"]));
    }
    if (m.find("SchedulerOptions") != m.end() && !m["SchedulerOptions"].empty()) {
      schedulerOptionsShrink = make_shared<string>(boost::any_cast<string>(m["SchedulerOptions"]));
    }
    if (m.find("SpotDuration") != m.end() && !m["SpotDuration"].empty()) {
      spotDuration = make_shared<long>(boost::any_cast<long>(m["SpotDuration"]));
    }
    if (m.find("SpotInterruptionBehavior") != m.end() && !m["SpotInterruptionBehavior"].empty()) {
      spotInterruptionBehavior = make_shared<string>(boost::any_cast<string>(m["SpotInterruptionBehavior"]));
    }
    if (m.find("DataDisk") != m.end() && !m["DataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisk"].type()) {
        vector<ModifyScalingConfigurationShrinkRequestDataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyScalingConfigurationShrinkRequestDataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<ModifyScalingConfigurationShrinkRequestDataDisk>>(expect1);
      }
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      if (typeid(vector<boost::any>) == m["SpotPriceLimit"].type()) {
        vector<ModifyScalingConfigurationShrinkRequestSpotPriceLimit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpotPriceLimit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyScalingConfigurationShrinkRequestSpotPriceLimit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spotPriceLimit = make_shared<vector<ModifyScalingConfigurationShrinkRequestSpotPriceLimit>>(expect1);
      }
    }
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceTypeOverride") != m.end() && !m["InstanceTypeOverride"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceTypeOverride"].type()) {
        vector<ModifyScalingConfigurationShrinkRequestInstanceTypeOverride> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceTypeOverride"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyScalingConfigurationShrinkRequestInstanceTypeOverride model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceTypeOverride = make_shared<vector<ModifyScalingConfigurationShrinkRequestInstanceTypeOverride>>(expect1);
      }
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyScalingConfigurationShrinkRequest() = default;
};
class ModifyScalingConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyScalingConfigurationResponseBody() {}

  explicit ModifyScalingConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyScalingConfigurationResponseBody() = default;
};
class ModifyScalingConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyScalingConfigurationResponseBody> body{};

  ModifyScalingConfigurationResponse() {}

  explicit ModifyScalingConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyScalingConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyScalingConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyScalingConfigurationResponse() = default;
};
class ModifyScalingGroupRequestLaunchTemplateOverride : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<long> weightedCapacity{};

  ModifyScalingGroupRequestLaunchTemplateOverride() {}

  explicit ModifyScalingGroupRequestLaunchTemplateOverride(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (weightedCapacity) {
      res["WeightedCapacity"] = boost::any(*weightedCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("WeightedCapacity") != m.end() && !m["WeightedCapacity"].empty()) {
      weightedCapacity = make_shared<long>(boost::any_cast<long>(m["WeightedCapacity"]));
    }
  }


  virtual ~ModifyScalingGroupRequestLaunchTemplateOverride() = default;
};
class ModifyScalingGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> removalPolicy{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> scalingGroupName{};
  shared_ptr<long> minSize{};
  shared_ptr<long> maxSize{};
  shared_ptr<long> defaultCooldown{};
  shared_ptr<string> activeScalingConfigurationId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> healthCheckType{};
  shared_ptr<string> launchTemplateId{};
  shared_ptr<string> launchTemplateVersion{};
  shared_ptr<long> onDemandBaseCapacity{};
  shared_ptr<long> onDemandPercentageAboveBaseCapacity{};
  shared_ptr<bool> spotInstanceRemedy{};
  shared_ptr<bool> compensateWithOnDemand{};
  shared_ptr<long> spotInstancePools{};
  shared_ptr<long> desiredCapacity{};
  shared_ptr<bool> groupDeletionProtection{};
  shared_ptr<bool> scaleOutAmountCheck{};
  shared_ptr<vector<string>> vSwitchIds{};
  shared_ptr<vector<ModifyScalingGroupRequestLaunchTemplateOverride>> launchTemplateOverride{};

  ModifyScalingGroupRequest() {}

  explicit ModifyScalingGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (removalPolicy) {
      res["RemovalPolicy"] = boost::any(*removalPolicy);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (scalingGroupName) {
      res["ScalingGroupName"] = boost::any(*scalingGroupName);
    }
    if (minSize) {
      res["MinSize"] = boost::any(*minSize);
    }
    if (maxSize) {
      res["MaxSize"] = boost::any(*maxSize);
    }
    if (defaultCooldown) {
      res["DefaultCooldown"] = boost::any(*defaultCooldown);
    }
    if (activeScalingConfigurationId) {
      res["ActiveScalingConfigurationId"] = boost::any(*activeScalingConfigurationId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (healthCheckType) {
      res["HealthCheckType"] = boost::any(*healthCheckType);
    }
    if (launchTemplateId) {
      res["LaunchTemplateId"] = boost::any(*launchTemplateId);
    }
    if (launchTemplateVersion) {
      res["LaunchTemplateVersion"] = boost::any(*launchTemplateVersion);
    }
    if (onDemandBaseCapacity) {
      res["OnDemandBaseCapacity"] = boost::any(*onDemandBaseCapacity);
    }
    if (onDemandPercentageAboveBaseCapacity) {
      res["OnDemandPercentageAboveBaseCapacity"] = boost::any(*onDemandPercentageAboveBaseCapacity);
    }
    if (spotInstanceRemedy) {
      res["SpotInstanceRemedy"] = boost::any(*spotInstanceRemedy);
    }
    if (compensateWithOnDemand) {
      res["CompensateWithOnDemand"] = boost::any(*compensateWithOnDemand);
    }
    if (spotInstancePools) {
      res["SpotInstancePools"] = boost::any(*spotInstancePools);
    }
    if (desiredCapacity) {
      res["DesiredCapacity"] = boost::any(*desiredCapacity);
    }
    if (groupDeletionProtection) {
      res["GroupDeletionProtection"] = boost::any(*groupDeletionProtection);
    }
    if (scaleOutAmountCheck) {
      res["ScaleOutAmountCheck"] = boost::any(*scaleOutAmountCheck);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    if (launchTemplateOverride) {
      vector<boost::any> temp1;
      for(auto item1:*launchTemplateOverride){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LaunchTemplateOverride"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RemovalPolicy") != m.end() && !m["RemovalPolicy"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RemovalPolicy"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RemovalPolicy"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      removalPolicy = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ScalingGroupName") != m.end() && !m["ScalingGroupName"].empty()) {
      scalingGroupName = make_shared<string>(boost::any_cast<string>(m["ScalingGroupName"]));
    }
    if (m.find("MinSize") != m.end() && !m["MinSize"].empty()) {
      minSize = make_shared<long>(boost::any_cast<long>(m["MinSize"]));
    }
    if (m.find("MaxSize") != m.end() && !m["MaxSize"].empty()) {
      maxSize = make_shared<long>(boost::any_cast<long>(m["MaxSize"]));
    }
    if (m.find("DefaultCooldown") != m.end() && !m["DefaultCooldown"].empty()) {
      defaultCooldown = make_shared<long>(boost::any_cast<long>(m["DefaultCooldown"]));
    }
    if (m.find("ActiveScalingConfigurationId") != m.end() && !m["ActiveScalingConfigurationId"].empty()) {
      activeScalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ActiveScalingConfigurationId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("HealthCheckType") != m.end() && !m["HealthCheckType"].empty()) {
      healthCheckType = make_shared<string>(boost::any_cast<string>(m["HealthCheckType"]));
    }
    if (m.find("LaunchTemplateId") != m.end() && !m["LaunchTemplateId"].empty()) {
      launchTemplateId = make_shared<string>(boost::any_cast<string>(m["LaunchTemplateId"]));
    }
    if (m.find("LaunchTemplateVersion") != m.end() && !m["LaunchTemplateVersion"].empty()) {
      launchTemplateVersion = make_shared<string>(boost::any_cast<string>(m["LaunchTemplateVersion"]));
    }
    if (m.find("OnDemandBaseCapacity") != m.end() && !m["OnDemandBaseCapacity"].empty()) {
      onDemandBaseCapacity = make_shared<long>(boost::any_cast<long>(m["OnDemandBaseCapacity"]));
    }
    if (m.find("OnDemandPercentageAboveBaseCapacity") != m.end() && !m["OnDemandPercentageAboveBaseCapacity"].empty()) {
      onDemandPercentageAboveBaseCapacity = make_shared<long>(boost::any_cast<long>(m["OnDemandPercentageAboveBaseCapacity"]));
    }
    if (m.find("SpotInstanceRemedy") != m.end() && !m["SpotInstanceRemedy"].empty()) {
      spotInstanceRemedy = make_shared<bool>(boost::any_cast<bool>(m["SpotInstanceRemedy"]));
    }
    if (m.find("CompensateWithOnDemand") != m.end() && !m["CompensateWithOnDemand"].empty()) {
      compensateWithOnDemand = make_shared<bool>(boost::any_cast<bool>(m["CompensateWithOnDemand"]));
    }
    if (m.find("SpotInstancePools") != m.end() && !m["SpotInstancePools"].empty()) {
      spotInstancePools = make_shared<long>(boost::any_cast<long>(m["SpotInstancePools"]));
    }
    if (m.find("DesiredCapacity") != m.end() && !m["DesiredCapacity"].empty()) {
      desiredCapacity = make_shared<long>(boost::any_cast<long>(m["DesiredCapacity"]));
    }
    if (m.find("GroupDeletionProtection") != m.end() && !m["GroupDeletionProtection"].empty()) {
      groupDeletionProtection = make_shared<bool>(boost::any_cast<bool>(m["GroupDeletionProtection"]));
    }
    if (m.find("ScaleOutAmountCheck") != m.end() && !m["ScaleOutAmountCheck"].empty()) {
      scaleOutAmountCheck = make_shared<bool>(boost::any_cast<bool>(m["ScaleOutAmountCheck"]));
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
    if (m.find("LaunchTemplateOverride") != m.end() && !m["LaunchTemplateOverride"].empty()) {
      if (typeid(vector<boost::any>) == m["LaunchTemplateOverride"].type()) {
        vector<ModifyScalingGroupRequestLaunchTemplateOverride> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LaunchTemplateOverride"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyScalingGroupRequestLaunchTemplateOverride model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        launchTemplateOverride = make_shared<vector<ModifyScalingGroupRequestLaunchTemplateOverride>>(expect1);
      }
    }
  }


  virtual ~ModifyScalingGroupRequest() = default;
};
class ModifyScalingGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyScalingGroupResponseBody() {}

  explicit ModifyScalingGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyScalingGroupResponseBody() = default;
};
class ModifyScalingGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyScalingGroupResponseBody> body{};

  ModifyScalingGroupResponse() {}

  explicit ModifyScalingGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyScalingGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyScalingGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyScalingGroupResponse() = default;
};
class ModifyScalingRuleRequestStepAdjustment : public Darabonba::Model {
public:
  shared_ptr<double> metricIntervalUpperBound{};
  shared_ptr<long> scalingAdjustment{};
  shared_ptr<double> metricIntervalLowerBound{};

  ModifyScalingRuleRequestStepAdjustment() {}

  explicit ModifyScalingRuleRequestStepAdjustment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricIntervalUpperBound) {
      res["MetricIntervalUpperBound"] = boost::any(*metricIntervalUpperBound);
    }
    if (scalingAdjustment) {
      res["ScalingAdjustment"] = boost::any(*scalingAdjustment);
    }
    if (metricIntervalLowerBound) {
      res["MetricIntervalLowerBound"] = boost::any(*metricIntervalLowerBound);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricIntervalUpperBound") != m.end() && !m["MetricIntervalUpperBound"].empty()) {
      metricIntervalUpperBound = make_shared<double>(boost::any_cast<double>(m["MetricIntervalUpperBound"]));
    }
    if (m.find("ScalingAdjustment") != m.end() && !m["ScalingAdjustment"].empty()) {
      scalingAdjustment = make_shared<long>(boost::any_cast<long>(m["ScalingAdjustment"]));
    }
    if (m.find("MetricIntervalLowerBound") != m.end() && !m["MetricIntervalLowerBound"].empty()) {
      metricIntervalLowerBound = make_shared<double>(boost::any_cast<double>(m["MetricIntervalLowerBound"]));
    }
  }


  virtual ~ModifyScalingRuleRequestStepAdjustment() = default;
};
class ModifyScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingRuleId{};
  shared_ptr<string> scalingRuleName{};
  shared_ptr<long> cooldown{};
  shared_ptr<long> minAdjustmentMagnitude{};
  shared_ptr<string> adjustmentType{};
  shared_ptr<long> adjustmentValue{};
  shared_ptr<long> estimatedInstanceWarmup{};
  shared_ptr<string> metricName{};
  shared_ptr<double> targetValue{};
  shared_ptr<bool> disableScaleIn{};
  shared_ptr<long> scaleInEvaluationCount{};
  shared_ptr<long> scaleOutEvaluationCount{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> predictiveScalingMode{};
  shared_ptr<string> predictiveValueBehavior{};
  shared_ptr<long> predictiveValueBuffer{};
  shared_ptr<long> predictiveTaskBufferTime{};
  shared_ptr<long> initialMaxSize{};
  shared_ptr<vector<ModifyScalingRuleRequestStepAdjustment>> stepAdjustment{};

  ModifyScalingRuleRequest() {}

  explicit ModifyScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingRuleId) {
      res["ScalingRuleId"] = boost::any(*scalingRuleId);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    if (cooldown) {
      res["Cooldown"] = boost::any(*cooldown);
    }
    if (minAdjustmentMagnitude) {
      res["MinAdjustmentMagnitude"] = boost::any(*minAdjustmentMagnitude);
    }
    if (adjustmentType) {
      res["AdjustmentType"] = boost::any(*adjustmentType);
    }
    if (adjustmentValue) {
      res["AdjustmentValue"] = boost::any(*adjustmentValue);
    }
    if (estimatedInstanceWarmup) {
      res["EstimatedInstanceWarmup"] = boost::any(*estimatedInstanceWarmup);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (targetValue) {
      res["TargetValue"] = boost::any(*targetValue);
    }
    if (disableScaleIn) {
      res["DisableScaleIn"] = boost::any(*disableScaleIn);
    }
    if (scaleInEvaluationCount) {
      res["ScaleInEvaluationCount"] = boost::any(*scaleInEvaluationCount);
    }
    if (scaleOutEvaluationCount) {
      res["ScaleOutEvaluationCount"] = boost::any(*scaleOutEvaluationCount);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (predictiveScalingMode) {
      res["PredictiveScalingMode"] = boost::any(*predictiveScalingMode);
    }
    if (predictiveValueBehavior) {
      res["PredictiveValueBehavior"] = boost::any(*predictiveValueBehavior);
    }
    if (predictiveValueBuffer) {
      res["PredictiveValueBuffer"] = boost::any(*predictiveValueBuffer);
    }
    if (predictiveTaskBufferTime) {
      res["PredictiveTaskBufferTime"] = boost::any(*predictiveTaskBufferTime);
    }
    if (initialMaxSize) {
      res["InitialMaxSize"] = boost::any(*initialMaxSize);
    }
    if (stepAdjustment) {
      vector<boost::any> temp1;
      for(auto item1:*stepAdjustment){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StepAdjustment"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingRuleId") != m.end() && !m["ScalingRuleId"].empty()) {
      scalingRuleId = make_shared<string>(boost::any_cast<string>(m["ScalingRuleId"]));
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      scalingRuleName = make_shared<string>(boost::any_cast<string>(m["ScalingRuleName"]));
    }
    if (m.find("Cooldown") != m.end() && !m["Cooldown"].empty()) {
      cooldown = make_shared<long>(boost::any_cast<long>(m["Cooldown"]));
    }
    if (m.find("MinAdjustmentMagnitude") != m.end() && !m["MinAdjustmentMagnitude"].empty()) {
      minAdjustmentMagnitude = make_shared<long>(boost::any_cast<long>(m["MinAdjustmentMagnitude"]));
    }
    if (m.find("AdjustmentType") != m.end() && !m["AdjustmentType"].empty()) {
      adjustmentType = make_shared<string>(boost::any_cast<string>(m["AdjustmentType"]));
    }
    if (m.find("AdjustmentValue") != m.end() && !m["AdjustmentValue"].empty()) {
      adjustmentValue = make_shared<long>(boost::any_cast<long>(m["AdjustmentValue"]));
    }
    if (m.find("EstimatedInstanceWarmup") != m.end() && !m["EstimatedInstanceWarmup"].empty()) {
      estimatedInstanceWarmup = make_shared<long>(boost::any_cast<long>(m["EstimatedInstanceWarmup"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("TargetValue") != m.end() && !m["TargetValue"].empty()) {
      targetValue = make_shared<double>(boost::any_cast<double>(m["TargetValue"]));
    }
    if (m.find("DisableScaleIn") != m.end() && !m["DisableScaleIn"].empty()) {
      disableScaleIn = make_shared<bool>(boost::any_cast<bool>(m["DisableScaleIn"]));
    }
    if (m.find("ScaleInEvaluationCount") != m.end() && !m["ScaleInEvaluationCount"].empty()) {
      scaleInEvaluationCount = make_shared<long>(boost::any_cast<long>(m["ScaleInEvaluationCount"]));
    }
    if (m.find("ScaleOutEvaluationCount") != m.end() && !m["ScaleOutEvaluationCount"].empty()) {
      scaleOutEvaluationCount = make_shared<long>(boost::any_cast<long>(m["ScaleOutEvaluationCount"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("PredictiveScalingMode") != m.end() && !m["PredictiveScalingMode"].empty()) {
      predictiveScalingMode = make_shared<string>(boost::any_cast<string>(m["PredictiveScalingMode"]));
    }
    if (m.find("PredictiveValueBehavior") != m.end() && !m["PredictiveValueBehavior"].empty()) {
      predictiveValueBehavior = make_shared<string>(boost::any_cast<string>(m["PredictiveValueBehavior"]));
    }
    if (m.find("PredictiveValueBuffer") != m.end() && !m["PredictiveValueBuffer"].empty()) {
      predictiveValueBuffer = make_shared<long>(boost::any_cast<long>(m["PredictiveValueBuffer"]));
    }
    if (m.find("PredictiveTaskBufferTime") != m.end() && !m["PredictiveTaskBufferTime"].empty()) {
      predictiveTaskBufferTime = make_shared<long>(boost::any_cast<long>(m["PredictiveTaskBufferTime"]));
    }
    if (m.find("InitialMaxSize") != m.end() && !m["InitialMaxSize"].empty()) {
      initialMaxSize = make_shared<long>(boost::any_cast<long>(m["InitialMaxSize"]));
    }
    if (m.find("StepAdjustment") != m.end() && !m["StepAdjustment"].empty()) {
      if (typeid(vector<boost::any>) == m["StepAdjustment"].type()) {
        vector<ModifyScalingRuleRequestStepAdjustment> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StepAdjustment"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyScalingRuleRequestStepAdjustment model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stepAdjustment = make_shared<vector<ModifyScalingRuleRequestStepAdjustment>>(expect1);
      }
    }
  }


  virtual ~ModifyScalingRuleRequest() = default;
};
class ModifyScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyScalingRuleResponseBody() {}

  explicit ModifyScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyScalingRuleResponseBody() = default;
};
class ModifyScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyScalingRuleResponseBody> body{};

  ModifyScalingRuleResponse() {}

  explicit ModifyScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyScalingRuleResponse() = default;
};
class ModifyScheduledTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scheduledTaskId{};
  shared_ptr<string> scheduledTaskName{};
  shared_ptr<string> description{};
  shared_ptr<string> scheduledAction{};
  shared_ptr<string> recurrenceEndTime{};
  shared_ptr<string> launchTime{};
  shared_ptr<string> recurrenceType{};
  shared_ptr<string> recurrenceValue{};
  shared_ptr<bool> taskEnabled{};
  shared_ptr<long> launchExpirationTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> minValue{};
  shared_ptr<long> maxValue{};
  shared_ptr<long> desiredCapacity{};
  shared_ptr<string> scalingGroupId{};

  ModifyScheduledTaskRequest() {}

  explicit ModifyScheduledTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scheduledTaskId) {
      res["ScheduledTaskId"] = boost::any(*scheduledTaskId);
    }
    if (scheduledTaskName) {
      res["ScheduledTaskName"] = boost::any(*scheduledTaskName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (scheduledAction) {
      res["ScheduledAction"] = boost::any(*scheduledAction);
    }
    if (recurrenceEndTime) {
      res["RecurrenceEndTime"] = boost::any(*recurrenceEndTime);
    }
    if (launchTime) {
      res["LaunchTime"] = boost::any(*launchTime);
    }
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (recurrenceValue) {
      res["RecurrenceValue"] = boost::any(*recurrenceValue);
    }
    if (taskEnabled) {
      res["TaskEnabled"] = boost::any(*taskEnabled);
    }
    if (launchExpirationTime) {
      res["LaunchExpirationTime"] = boost::any(*launchExpirationTime);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (desiredCapacity) {
      res["DesiredCapacity"] = boost::any(*desiredCapacity);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScheduledTaskId") != m.end() && !m["ScheduledTaskId"].empty()) {
      scheduledTaskId = make_shared<string>(boost::any_cast<string>(m["ScheduledTaskId"]));
    }
    if (m.find("ScheduledTaskName") != m.end() && !m["ScheduledTaskName"].empty()) {
      scheduledTaskName = make_shared<string>(boost::any_cast<string>(m["ScheduledTaskName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ScheduledAction") != m.end() && !m["ScheduledAction"].empty()) {
      scheduledAction = make_shared<string>(boost::any_cast<string>(m["ScheduledAction"]));
    }
    if (m.find("RecurrenceEndTime") != m.end() && !m["RecurrenceEndTime"].empty()) {
      recurrenceEndTime = make_shared<string>(boost::any_cast<string>(m["RecurrenceEndTime"]));
    }
    if (m.find("LaunchTime") != m.end() && !m["LaunchTime"].empty()) {
      launchTime = make_shared<string>(boost::any_cast<string>(m["LaunchTime"]));
    }
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("RecurrenceValue") != m.end() && !m["RecurrenceValue"].empty()) {
      recurrenceValue = make_shared<string>(boost::any_cast<string>(m["RecurrenceValue"]));
    }
    if (m.find("TaskEnabled") != m.end() && !m["TaskEnabled"].empty()) {
      taskEnabled = make_shared<bool>(boost::any_cast<bool>(m["TaskEnabled"]));
    }
    if (m.find("LaunchExpirationTime") != m.end() && !m["LaunchExpirationTime"].empty()) {
      launchExpirationTime = make_shared<long>(boost::any_cast<long>(m["LaunchExpirationTime"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("DesiredCapacity") != m.end() && !m["DesiredCapacity"].empty()) {
      desiredCapacity = make_shared<long>(boost::any_cast<long>(m["DesiredCapacity"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~ModifyScheduledTaskRequest() = default;
};
class ModifyScheduledTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyScheduledTaskResponseBody() {}

  explicit ModifyScheduledTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyScheduledTaskResponseBody() = default;
};
class ModifyScheduledTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyScheduledTaskResponseBody> body{};

  ModifyScheduledTaskResponse() {}

  explicit ModifyScheduledTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyScheduledTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyScheduledTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyScheduledTaskResponse() = default;
};
class RebalanceInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> ownerAccount{};

  RebalanceInstancesRequest() {}

  explicit RebalanceInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~RebalanceInstancesRequest() = default;
};
class RebalanceInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scalingActivityId{};

  RebalanceInstancesResponseBody() {}

  explicit RebalanceInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
  }


  virtual ~RebalanceInstancesResponseBody() = default;
};
class RebalanceInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RebalanceInstancesResponseBody> body{};

  RebalanceInstancesResponse() {}

  explicit RebalanceInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RebalanceInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RebalanceInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~RebalanceInstancesResponse() = default;
};
class RecordLifecycleActionHeartbeatRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> lifecycleHookId{};
  shared_ptr<string> lifecycleActionToken{};
  shared_ptr<long> heartbeatTimeout{};

  RecordLifecycleActionHeartbeatRequest() {}

  explicit RecordLifecycleActionHeartbeatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (lifecycleHookId) {
      res["lifecycleHookId"] = boost::any(*lifecycleHookId);
    }
    if (lifecycleActionToken) {
      res["lifecycleActionToken"] = boost::any(*lifecycleActionToken);
    }
    if (heartbeatTimeout) {
      res["heartbeatTimeout"] = boost::any(*heartbeatTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("lifecycleHookId") != m.end() && !m["lifecycleHookId"].empty()) {
      lifecycleHookId = make_shared<string>(boost::any_cast<string>(m["lifecycleHookId"]));
    }
    if (m.find("lifecycleActionToken") != m.end() && !m["lifecycleActionToken"].empty()) {
      lifecycleActionToken = make_shared<string>(boost::any_cast<string>(m["lifecycleActionToken"]));
    }
    if (m.find("heartbeatTimeout") != m.end() && !m["heartbeatTimeout"].empty()) {
      heartbeatTimeout = make_shared<long>(boost::any_cast<long>(m["heartbeatTimeout"]));
    }
  }


  virtual ~RecordLifecycleActionHeartbeatRequest() = default;
};
class RecordLifecycleActionHeartbeatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RecordLifecycleActionHeartbeatResponseBody() {}

  explicit RecordLifecycleActionHeartbeatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecordLifecycleActionHeartbeatResponseBody() = default;
};
class RecordLifecycleActionHeartbeatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecordLifecycleActionHeartbeatResponseBody> body{};

  RecordLifecycleActionHeartbeatResponse() {}

  explicit RecordLifecycleActionHeartbeatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecordLifecycleActionHeartbeatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecordLifecycleActionHeartbeatResponseBody>(model1);
      }
    }
  }


  virtual ~RecordLifecycleActionHeartbeatResponse() = default;
};
class RemoveInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> removePolicy{};
  shared_ptr<bool> decreaseDesiredCapacity{};
  shared_ptr<vector<string>> instanceId{};

  RemoveInstancesRequest() {}

  explicit RemoveInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (removePolicy) {
      res["RemovePolicy"] = boost::any(*removePolicy);
    }
    if (decreaseDesiredCapacity) {
      res["DecreaseDesiredCapacity"] = boost::any(*decreaseDesiredCapacity);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RemovePolicy") != m.end() && !m["RemovePolicy"].empty()) {
      removePolicy = make_shared<string>(boost::any_cast<string>(m["RemovePolicy"]));
    }
    if (m.find("DecreaseDesiredCapacity") != m.end() && !m["DecreaseDesiredCapacity"].empty()) {
      decreaseDesiredCapacity = make_shared<bool>(boost::any_cast<bool>(m["DecreaseDesiredCapacity"]));
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
  }


  virtual ~RemoveInstancesRequest() = default;
};
class RemoveInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scalingActivityId{};

  RemoveInstancesResponseBody() {}

  explicit RemoveInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
  }


  virtual ~RemoveInstancesResponseBody() = default;
};
class RemoveInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveInstancesResponseBody> body{};

  RemoveInstancesResponse() {}

  explicit RemoveInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveInstancesResponse() = default;
};
class ResumeProcessesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> process{};

  ResumeProcessesRequest() {}

  explicit ResumeProcessesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (process) {
      res["Process"] = boost::any(*process);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Process"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Process"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      process = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ResumeProcessesRequest() = default;
};
class ResumeProcessesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResumeProcessesResponseBody() {}

  explicit ResumeProcessesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResumeProcessesResponseBody() = default;
};
class ResumeProcessesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResumeProcessesResponseBody> body{};

  ResumeProcessesResponse() {}

  explicit ResumeProcessesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResumeProcessesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResumeProcessesResponseBody>(model1);
      }
    }
  }


  virtual ~ResumeProcessesResponse() = default;
};
class SetGroupDeletionProtectionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<bool> groupDeletionProtection{};
  shared_ptr<string> scalingGroupId{};

  SetGroupDeletionProtectionRequest() {}

  explicit SetGroupDeletionProtectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (groupDeletionProtection) {
      res["GroupDeletionProtection"] = boost::any(*groupDeletionProtection);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("GroupDeletionProtection") != m.end() && !m["GroupDeletionProtection"].empty()) {
      groupDeletionProtection = make_shared<bool>(boost::any_cast<bool>(m["GroupDeletionProtection"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~SetGroupDeletionProtectionRequest() = default;
};
class SetGroupDeletionProtectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetGroupDeletionProtectionResponseBody() {}

  explicit SetGroupDeletionProtectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetGroupDeletionProtectionResponseBody() = default;
};
class SetGroupDeletionProtectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetGroupDeletionProtectionResponseBody> body{};

  SetGroupDeletionProtectionResponse() {}

  explicit SetGroupDeletionProtectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetGroupDeletionProtectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetGroupDeletionProtectionResponseBody>(model1);
      }
    }
  }


  virtual ~SetGroupDeletionProtectionResponse() = default;
};
class SetInstanceHealthRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> healthStatus{};

  SetInstanceHealthRequest() {}

  explicit SetInstanceHealthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (healthStatus) {
      res["HealthStatus"] = boost::any(*healthStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("HealthStatus") != m.end() && !m["HealthStatus"].empty()) {
      healthStatus = make_shared<string>(boost::any_cast<string>(m["HealthStatus"]));
    }
  }


  virtual ~SetInstanceHealthRequest() = default;
};
class SetInstanceHealthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetInstanceHealthResponseBody() {}

  explicit SetInstanceHealthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetInstanceHealthResponseBody() = default;
};
class SetInstanceHealthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetInstanceHealthResponseBody> body{};

  SetInstanceHealthResponse() {}

  explicit SetInstanceHealthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetInstanceHealthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetInstanceHealthResponseBody>(model1);
      }
    }
  }


  virtual ~SetInstanceHealthResponse() = default;
};
class SetInstancesProtectionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<bool> protectedFromScaleIn{};
  shared_ptr<vector<string>> instanceId{};

  SetInstancesProtectionRequest() {}

  explicit SetInstancesProtectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (protectedFromScaleIn) {
      res["ProtectedFromScaleIn"] = boost::any(*protectedFromScaleIn);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ProtectedFromScaleIn") != m.end() && !m["ProtectedFromScaleIn"].empty()) {
      protectedFromScaleIn = make_shared<bool>(boost::any_cast<bool>(m["ProtectedFromScaleIn"]));
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
  }


  virtual ~SetInstancesProtectionRequest() = default;
};
class SetInstancesProtectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetInstancesProtectionResponseBody() {}

  explicit SetInstancesProtectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetInstancesProtectionResponseBody() = default;
};
class SetInstancesProtectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetInstancesProtectionResponseBody> body{};

  SetInstancesProtectionResponse() {}

  explicit SetInstancesProtectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetInstancesProtectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetInstancesProtectionResponseBody>(model1);
      }
    }
  }


  virtual ~SetInstancesProtectionResponse() = default;
};
class SuspendProcessesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> clientToken{};
  shared_ptr<vector<string>> process{};

  SuspendProcessesRequest() {}

  explicit SuspendProcessesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (process) {
      res["Process"] = boost::any(*process);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Process"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Process"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      process = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SuspendProcessesRequest() = default;
};
class SuspendProcessesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SuspendProcessesResponseBody() {}

  explicit SuspendProcessesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SuspendProcessesResponseBody() = default;
};
class SuspendProcessesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SuspendProcessesResponseBody> body{};

  SuspendProcessesResponse() {}

  explicit SuspendProcessesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SuspendProcessesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SuspendProcessesResponseBody>(model1);
      }
    }
  }


  virtual ~SuspendProcessesResponse() = default;
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
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
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
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
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
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
class VerifyAuthenticationRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> uid{};
  shared_ptr<bool> onlyCheck{};

  VerifyAuthenticationRequest() {}

  explicit VerifyAuthenticationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (onlyCheck) {
      res["OnlyCheck"] = boost::any(*onlyCheck);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
    if (m.find("OnlyCheck") != m.end() && !m["OnlyCheck"].empty()) {
      onlyCheck = make_shared<bool>(boost::any_cast<bool>(m["OnlyCheck"]));
    }
  }


  virtual ~VerifyAuthenticationRequest() = default;
};
class VerifyAuthenticationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VerifyAuthenticationResponseBody() {}

  explicit VerifyAuthenticationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VerifyAuthenticationResponseBody() = default;
};
class VerifyAuthenticationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<VerifyAuthenticationResponseBody> body{};

  VerifyAuthenticationResponse() {}

  explicit VerifyAuthenticationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyAuthenticationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyAuthenticationResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyAuthenticationResponse() = default;
};
class VerifyUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  VerifyUserRequest() {}

  explicit VerifyUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~VerifyUserRequest() = default;
};
class VerifyUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  VerifyUserResponse() {}

  explicit VerifyUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~VerifyUserResponse() = default;
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
  AttachDBInstancesResponse attachDBInstancesWithOptions(shared_ptr<AttachDBInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachDBInstancesResponse attachDBInstances(shared_ptr<AttachDBInstancesRequest> request);
  AttachInstancesResponse attachInstancesWithOptions(shared_ptr<AttachInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachInstancesResponse attachInstances(shared_ptr<AttachInstancesRequest> request);
  AttachLoadBalancersResponse attachLoadBalancersWithOptions(shared_ptr<AttachLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachLoadBalancersResponse attachLoadBalancers(shared_ptr<AttachLoadBalancersRequest> request);
  AttachVServerGroupsResponse attachVServerGroupsWithOptions(shared_ptr<AttachVServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachVServerGroupsResponse attachVServerGroups(shared_ptr<AttachVServerGroupsRequest> request);
  CompleteLifecycleActionResponse completeLifecycleActionWithOptions(shared_ptr<CompleteLifecycleActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompleteLifecycleActionResponse completeLifecycleAction(shared_ptr<CompleteLifecycleActionRequest> request);
  CreateAlarmResponse createAlarmWithOptions(shared_ptr<CreateAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAlarmResponse createAlarm(shared_ptr<CreateAlarmRequest> request);
  CreateLifecycleHookResponse createLifecycleHookWithOptions(shared_ptr<CreateLifecycleHookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLifecycleHookResponse createLifecycleHook(shared_ptr<CreateLifecycleHookRequest> request);
  CreateNotificationConfigurationResponse createNotificationConfigurationWithOptions(shared_ptr<CreateNotificationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNotificationConfigurationResponse createNotificationConfiguration(shared_ptr<CreateNotificationConfigurationRequest> request);
  CreateScalingConfigurationResponse createScalingConfigurationWithOptions(shared_ptr<CreateScalingConfigurationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScalingConfigurationResponse createScalingConfiguration(shared_ptr<CreateScalingConfigurationRequest> request);
  CreateScalingGroupResponse createScalingGroupWithOptions(shared_ptr<CreateScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScalingGroupResponse createScalingGroup(shared_ptr<CreateScalingGroupRequest> request);
  CreateScalingRuleResponse createScalingRuleWithOptions(shared_ptr<CreateScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScalingRuleResponse createScalingRule(shared_ptr<CreateScalingRuleRequest> request);
  CreateScheduledTaskResponse createScheduledTaskWithOptions(shared_ptr<CreateScheduledTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScheduledTaskResponse createScheduledTask(shared_ptr<CreateScheduledTaskRequest> request);
  DeactivateScalingConfigurationResponse deactivateScalingConfigurationWithOptions(shared_ptr<DeactivateScalingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeactivateScalingConfigurationResponse deactivateScalingConfiguration(shared_ptr<DeactivateScalingConfigurationRequest> request);
  DeleteAlarmResponse deleteAlarmWithOptions(shared_ptr<DeleteAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAlarmResponse deleteAlarm(shared_ptr<DeleteAlarmRequest> request);
  DeleteLifecycleHookResponse deleteLifecycleHookWithOptions(shared_ptr<DeleteLifecycleHookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLifecycleHookResponse deleteLifecycleHook(shared_ptr<DeleteLifecycleHookRequest> request);
  DeleteNotificationConfigurationResponse deleteNotificationConfigurationWithOptions(shared_ptr<DeleteNotificationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNotificationConfigurationResponse deleteNotificationConfiguration(shared_ptr<DeleteNotificationConfigurationRequest> request);
  DeleteScalingConfigurationResponse deleteScalingConfigurationWithOptions(shared_ptr<DeleteScalingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScalingConfigurationResponse deleteScalingConfiguration(shared_ptr<DeleteScalingConfigurationRequest> request);
  DeleteScalingGroupResponse deleteScalingGroupWithOptions(shared_ptr<DeleteScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScalingGroupResponse deleteScalingGroup(shared_ptr<DeleteScalingGroupRequest> request);
  DeleteScalingRuleResponse deleteScalingRuleWithOptions(shared_ptr<DeleteScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScalingRuleResponse deleteScalingRule(shared_ptr<DeleteScalingRuleRequest> request);
  DeleteScheduledTaskResponse deleteScheduledTaskWithOptions(shared_ptr<DeleteScheduledTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScheduledTaskResponse deleteScheduledTask(shared_ptr<DeleteScheduledTaskRequest> request);
  DescribeAlarmsResponse describeAlarmsWithOptions(shared_ptr<DescribeAlarmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlarmsResponse describeAlarms(shared_ptr<DescribeAlarmsRequest> request);
  DescribeLifecycleActionsResponse describeLifecycleActionsWithOptions(shared_ptr<DescribeLifecycleActionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLifecycleActionsResponse describeLifecycleActions(shared_ptr<DescribeLifecycleActionsRequest> request);
  DescribeLifecycleHooksResponse describeLifecycleHooksWithOptions(shared_ptr<DescribeLifecycleHooksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLifecycleHooksResponse describeLifecycleHooks(shared_ptr<DescribeLifecycleHooksRequest> request);
  DescribeLimitationResponse describeLimitationWithOptions(shared_ptr<DescribeLimitationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLimitationResponse describeLimitation(shared_ptr<DescribeLimitationRequest> request);
  DescribeNotificationConfigurationsResponse describeNotificationConfigurationsWithOptions(shared_ptr<DescribeNotificationConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNotificationConfigurationsResponse describeNotificationConfigurations(shared_ptr<DescribeNotificationConfigurationsRequest> request);
  DescribeNotificationTypesResponse describeNotificationTypesWithOptions(shared_ptr<DescribeNotificationTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNotificationTypesResponse describeNotificationTypes(shared_ptr<DescribeNotificationTypesRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeScalingActivitiesResponse describeScalingActivitiesWithOptions(shared_ptr<DescribeScalingActivitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScalingActivitiesResponse describeScalingActivities(shared_ptr<DescribeScalingActivitiesRequest> request);
  DescribeScalingActivityDetailResponse describeScalingActivityDetailWithOptions(shared_ptr<DescribeScalingActivityDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScalingActivityDetailResponse describeScalingActivityDetail(shared_ptr<DescribeScalingActivityDetailRequest> request);
  DescribeScalingConfigurationsResponse describeScalingConfigurationsWithOptions(shared_ptr<DescribeScalingConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScalingConfigurationsResponse describeScalingConfigurations(shared_ptr<DescribeScalingConfigurationsRequest> request);
  DescribeScalingInstancesResponse describeScalingInstancesWithOptions(shared_ptr<DescribeScalingInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScalingInstancesResponse describeScalingInstances(shared_ptr<DescribeScalingInstancesRequest> request);
  DescribeScalingRulesResponse describeScalingRulesWithOptions(shared_ptr<DescribeScalingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScalingRulesResponse describeScalingRules(shared_ptr<DescribeScalingRulesRequest> request);
  DescribeScheduledTasksResponse describeScheduledTasksWithOptions(shared_ptr<DescribeScheduledTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScheduledTasksResponse describeScheduledTasks(shared_ptr<DescribeScheduledTasksRequest> request);
  DetachDBInstancesResponse detachDBInstancesWithOptions(shared_ptr<DetachDBInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachDBInstancesResponse detachDBInstances(shared_ptr<DetachDBInstancesRequest> request);
  DetachInstancesResponse detachInstancesWithOptions(shared_ptr<DetachInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachInstancesResponse detachInstances(shared_ptr<DetachInstancesRequest> request);
  DetachLoadBalancersResponse detachLoadBalancersWithOptions(shared_ptr<DetachLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachLoadBalancersResponse detachLoadBalancers(shared_ptr<DetachLoadBalancersRequest> request);
  DetachVServerGroupsResponse detachVServerGroupsWithOptions(shared_ptr<DetachVServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachVServerGroupsResponse detachVServerGroups(shared_ptr<DetachVServerGroupsRequest> request);
  DisableAlarmResponse disableAlarmWithOptions(shared_ptr<DisableAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableAlarmResponse disableAlarm(shared_ptr<DisableAlarmRequest> request);
  DisableScalingGroupResponse disableScalingGroupWithOptions(shared_ptr<DisableScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableScalingGroupResponse disableScalingGroup(shared_ptr<DisableScalingGroupRequest> request);
  EnableAlarmResponse enableAlarmWithOptions(shared_ptr<EnableAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableAlarmResponse enableAlarm(shared_ptr<EnableAlarmRequest> request);
  EnableScalingGroupResponse enableScalingGroupWithOptions(shared_ptr<EnableScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableScalingGroupResponse enableScalingGroup(shared_ptr<EnableScalingGroupRequest> request);
  EnterStandbyResponse enterStandbyWithOptions(shared_ptr<EnterStandbyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterStandbyResponse enterStandby(shared_ptr<EnterStandbyRequest> request);
  ExecuteScalingRuleResponse executeScalingRuleWithOptions(shared_ptr<ExecuteScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteScalingRuleResponse executeScalingRule(shared_ptr<ExecuteScalingRuleRequest> request);
  ExitStandbyResponse exitStandbyWithOptions(shared_ptr<ExitStandbyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExitStandbyResponse exitStandby(shared_ptr<ExitStandbyRequest> request);
  ListTagKeysResponse listTagKeysWithOptions(shared_ptr<ListTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagKeysResponse listTagKeys(shared_ptr<ListTagKeysRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTagValuesResponse listTagValuesWithOptions(shared_ptr<ListTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagValuesResponse listTagValues(shared_ptr<ListTagValuesRequest> request);
  ModifyAlarmResponse modifyAlarmWithOptions(shared_ptr<ModifyAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAlarmResponse modifyAlarm(shared_ptr<ModifyAlarmRequest> request);
  ModifyLifecycleHookResponse modifyLifecycleHookWithOptions(shared_ptr<ModifyLifecycleHookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyLifecycleHookResponse modifyLifecycleHook(shared_ptr<ModifyLifecycleHookRequest> request);
  ModifyNotificationConfigurationResponse modifyNotificationConfigurationWithOptions(shared_ptr<ModifyNotificationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNotificationConfigurationResponse modifyNotificationConfiguration(shared_ptr<ModifyNotificationConfigurationRequest> request);
  ModifyScalingConfigurationResponse modifyScalingConfigurationWithOptions(shared_ptr<ModifyScalingConfigurationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyScalingConfigurationResponse modifyScalingConfiguration(shared_ptr<ModifyScalingConfigurationRequest> request);
  ModifyScalingGroupResponse modifyScalingGroupWithOptions(shared_ptr<ModifyScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyScalingGroupResponse modifyScalingGroup(shared_ptr<ModifyScalingGroupRequest> request);
  ModifyScalingRuleResponse modifyScalingRuleWithOptions(shared_ptr<ModifyScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyScalingRuleResponse modifyScalingRule(shared_ptr<ModifyScalingRuleRequest> request);
  ModifyScheduledTaskResponse modifyScheduledTaskWithOptions(shared_ptr<ModifyScheduledTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyScheduledTaskResponse modifyScheduledTask(shared_ptr<ModifyScheduledTaskRequest> request);
  RebalanceInstancesResponse rebalanceInstancesWithOptions(shared_ptr<RebalanceInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebalanceInstancesResponse rebalanceInstances(shared_ptr<RebalanceInstancesRequest> request);
  RecordLifecycleActionHeartbeatResponse recordLifecycleActionHeartbeatWithOptions(shared_ptr<RecordLifecycleActionHeartbeatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecordLifecycleActionHeartbeatResponse recordLifecycleActionHeartbeat(shared_ptr<RecordLifecycleActionHeartbeatRequest> request);
  RemoveInstancesResponse removeInstancesWithOptions(shared_ptr<RemoveInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveInstancesResponse removeInstances(shared_ptr<RemoveInstancesRequest> request);
  ResumeProcessesResponse resumeProcessesWithOptions(shared_ptr<ResumeProcessesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeProcessesResponse resumeProcesses(shared_ptr<ResumeProcessesRequest> request);
  SetGroupDeletionProtectionResponse setGroupDeletionProtectionWithOptions(shared_ptr<SetGroupDeletionProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetGroupDeletionProtectionResponse setGroupDeletionProtection(shared_ptr<SetGroupDeletionProtectionRequest> request);
  SetInstanceHealthResponse setInstanceHealthWithOptions(shared_ptr<SetInstanceHealthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetInstanceHealthResponse setInstanceHealth(shared_ptr<SetInstanceHealthRequest> request);
  SetInstancesProtectionResponse setInstancesProtectionWithOptions(shared_ptr<SetInstancesProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetInstancesProtectionResponse setInstancesProtection(shared_ptr<SetInstancesProtectionRequest> request);
  SuspendProcessesResponse suspendProcessesWithOptions(shared_ptr<SuspendProcessesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SuspendProcessesResponse suspendProcesses(shared_ptr<SuspendProcessesRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  VerifyAuthenticationResponse verifyAuthenticationWithOptions(shared_ptr<VerifyAuthenticationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyAuthenticationResponse verifyAuthentication(shared_ptr<VerifyAuthenticationRequest> request);
  VerifyUserResponse verifyUserWithOptions(shared_ptr<VerifyUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyUserResponse verifyUser(shared_ptr<VerifyUserRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ess20140828

#endif
