// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CS20151215_H_
#define ALIBABACLOUD_CS20151215_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_CS20151215 {
class Runtime : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  Runtime() {}

  explicit Runtime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~Runtime() = default;
};
class Taint : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<string> effect{};

  Taint() {}

  explicit Taint(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (effect) {
      res["effect"] = boost::any(*effect);
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
    if (m.find("effect") != m.end() && !m["effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["effect"]));
    }
  }


  virtual ~Taint() = default;
};
class DataDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<long> size{};
  shared_ptr<string> encrypted{};
  shared_ptr<string> autoSnapshotPolicyId{};

  DataDisk() {}

  explicit DataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (encrypted) {
      res["encrypted"] = boost::any(*encrypted);
    }
    if (autoSnapshotPolicyId) {
      res["auto_snapshot_policy_id"] = boost::any(*autoSnapshotPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("encrypted") != m.end() && !m["encrypted"].empty()) {
      encrypted = make_shared<string>(boost::any_cast<string>(m["encrypted"]));
    }
    if (m.find("auto_snapshot_policy_id") != m.end() && !m["auto_snapshot_policy_id"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["auto_snapshot_policy_id"]));
    }
  }


  virtual ~DataDisk() = default;
};
class Tag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  Tag() {}

  explicit Tag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~Tag() = default;
};
class Addon : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> config{};
  shared_ptr<bool> disabled{};

  Addon() {}

  explicit Addon(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (disabled) {
      res["disabled"] = boost::any(*disabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["config"]));
    }
    if (m.find("disabled") != m.end() && !m["disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["disabled"]));
    }
  }


  virtual ~Addon() = default;
};
class MaintenanceWindow : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> maintenanceTime{};
  shared_ptr<string> duration{};
  shared_ptr<string> weeklyPeriod{};

  MaintenanceWindow() {}

  explicit MaintenanceWindow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (maintenanceTime) {
      res["maintenance_time"] = boost::any(*maintenanceTime);
    }
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (weeklyPeriod) {
      res["weekly_period"] = boost::any(*weeklyPeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("maintenance_time") != m.end() && !m["maintenance_time"].empty()) {
      maintenanceTime = make_shared<string>(boost::any_cast<string>(m["maintenance_time"]));
    }
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["duration"]));
    }
    if (m.find("weekly_period") != m.end() && !m["weekly_period"].empty()) {
      weeklyPeriod = make_shared<string>(boost::any_cast<string>(m["weekly_period"]));
    }
  }


  virtual ~MaintenanceWindow() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<Tag>> tags{};
  shared_ptr<string> nextToken{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resource_ids"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resource_type"] = boost::any(*resourceType);
    }
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (nextToken) {
      res["next_token"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resource_ids") != m.end() && !m["resource_ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resource_ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resource_ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resource_type") != m.end() && !m["resource_type"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resource_type"]));
    }
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("next_token") != m.end() && !m["next_token"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["next_token"]));
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceIdsShrink{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> nextToken{};

  ListTagResourcesShrinkRequest() {}

  explicit ListTagResourcesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIdsShrink) {
      res["resource_ids"] = boost::any(*resourceIdsShrink);
    }
    if (resourceType) {
      res["resource_type"] = boost::any(*resourceType);
    }
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
    }
    if (tagsShrink) {
      res["tags"] = boost::any(*tagsShrink);
    }
    if (nextToken) {
      res["next_token"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resource_ids") != m.end() && !m["resource_ids"].empty()) {
      resourceIdsShrink = make_shared<string>(boost::any_cast<string>(m["resource_ids"]));
    }
    if (m.find("resource_type") != m.end() && !m["resource_type"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resource_type"]));
    }
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
    if (m.find("next_token") != m.end() && !m["next_token"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["next_token"]));
    }
  }


  virtual ~ListTagResourcesShrinkRequest() = default;
};
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["tag_key"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["tag_value"] = boost::any(*tagValue);
    }
    if (resourceId) {
      res["resource_id"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resource_type"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tag_key") != m.end() && !m["tag_key"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["tag_key"]));
    }
    if (m.find("tag_value") != m.end() && !m["tag_value"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["tag_value"]));
    }
    if (m.find("resource_id") != m.end() && !m["resource_id"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resource_id"]));
    }
    if (m.find("resource_type") != m.end() && !m["resource_type"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resource_type"]));
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
      res["tag_resource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tag_resource") != m.end() && !m["tag_resource"].empty()) {
      if (typeid(vector<boost::any>) == m["tag_resource"].type()) {
        vector<ListTagResourcesResponseBodyTagResourcesTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tag_resource"])){
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
      res["next_token"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["request_id"] = boost::any(*requestId);
    }
    if (tagResources) {
      res["tag_resources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("next_token") != m.end() && !m["next_token"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["next_token"]));
    }
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
    if (m.find("tag_resources") != m.end() && !m["tag_resources"].empty()) {
      if (typeid(map<string, boost::any>) == m["tag_resources"].type()) {
        ListTagResourcesResponseBodyTagResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tag_resources"]));
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
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKeys{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
    }
    if (resourceIds) {
      res["resource_ids"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resource_type"] = boost::any(*resourceType);
    }
    if (tagKeys) {
      res["tag_keys"] = boost::any(*tagKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
    if (m.find("resource_ids") != m.end() && !m["resource_ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resource_ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resource_ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resource_type") != m.end() && !m["resource_type"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resource_type"]));
    }
    if (m.find("tag_keys") != m.end() && !m["tag_keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["tag_keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["tag_keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKeys = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UntagResourcesResponse() = default;
};
class ModifyClusterRequest : public Darabonba::Model {
public:
  shared_ptr<bool> apiServerEip{};
  shared_ptr<string> apiServerEipId{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<bool> instanceDeletionProtection{};
  shared_ptr<string> ingressDomainRebinding{};
  shared_ptr<string> ingressLoadbalancerId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<MaintenanceWindow> maintenanceWindow{};

  ModifyClusterRequest() {}

  explicit ModifyClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiServerEip) {
      res["api_server_eip"] = boost::any(*apiServerEip);
    }
    if (apiServerEipId) {
      res["api_server_eip_id"] = boost::any(*apiServerEipId);
    }
    if (deletionProtection) {
      res["deletion_protection"] = boost::any(*deletionProtection);
    }
    if (instanceDeletionProtection) {
      res["instance_deletion_protection"] = boost::any(*instanceDeletionProtection);
    }
    if (ingressDomainRebinding) {
      res["ingress_domain_rebinding"] = boost::any(*ingressDomainRebinding);
    }
    if (ingressLoadbalancerId) {
      res["ingress_loadbalancer_id"] = boost::any(*ingressLoadbalancerId);
    }
    if (resourceGroupId) {
      res["resource_group_id"] = boost::any(*resourceGroupId);
    }
    if (maintenanceWindow) {
      res["maintenance_window"] = maintenanceWindow ? boost::any(maintenanceWindow->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("api_server_eip") != m.end() && !m["api_server_eip"].empty()) {
      apiServerEip = make_shared<bool>(boost::any_cast<bool>(m["api_server_eip"]));
    }
    if (m.find("api_server_eip_id") != m.end() && !m["api_server_eip_id"].empty()) {
      apiServerEipId = make_shared<string>(boost::any_cast<string>(m["api_server_eip_id"]));
    }
    if (m.find("deletion_protection") != m.end() && !m["deletion_protection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["deletion_protection"]));
    }
    if (m.find("instance_deletion_protection") != m.end() && !m["instance_deletion_protection"].empty()) {
      instanceDeletionProtection = make_shared<bool>(boost::any_cast<bool>(m["instance_deletion_protection"]));
    }
    if (m.find("ingress_domain_rebinding") != m.end() && !m["ingress_domain_rebinding"].empty()) {
      ingressDomainRebinding = make_shared<string>(boost::any_cast<string>(m["ingress_domain_rebinding"]));
    }
    if (m.find("ingress_loadbalancer_id") != m.end() && !m["ingress_loadbalancer_id"].empty()) {
      ingressLoadbalancerId = make_shared<string>(boost::any_cast<string>(m["ingress_loadbalancer_id"]));
    }
    if (m.find("resource_group_id") != m.end() && !m["resource_group_id"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resource_group_id"]));
    }
    if (m.find("maintenance_window") != m.end() && !m["maintenance_window"].empty()) {
      if (typeid(map<string, boost::any>) == m["maintenance_window"].type()) {
        MaintenanceWindow model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["maintenance_window"]));
        maintenanceWindow = make_shared<MaintenanceWindow>(model1);
      }
    }
  }


  virtual ~ModifyClusterRequest() = default;
};
class ModifyClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  ModifyClusterResponseBody() {}

  explicit ModifyClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (requestId) {
      res["request_id"] = boost::any(*requestId);
    }
    if (taskId) {
      res["task_id"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
    if (m.find("task_id") != m.end() && !m["task_id"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["task_id"]));
    }
  }


  virtual ~ModifyClusterResponseBody() = default;
};
class ModifyClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyClusterResponseBody> body{};

  ModifyClusterResponse() {}

  explicit ModifyClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterResponse() = default;
};
class DescribeClusterAttachScriptsRequest : public Darabonba::Model {
public:
  shared_ptr<string> nodepoolId{};
  shared_ptr<bool> formatDisk{};
  shared_ptr<bool> keepInstanceName{};
  shared_ptr<vector<string>> rdsInstances{};
  shared_ptr<string> arch{};
  shared_ptr<string> options{};

  DescribeClusterAttachScriptsRequest() {}

  explicit DescribeClusterAttachScriptsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodepoolId) {
      res["nodepool_id"] = boost::any(*nodepoolId);
    }
    if (formatDisk) {
      res["format_disk"] = boost::any(*formatDisk);
    }
    if (keepInstanceName) {
      res["keep_instance_name"] = boost::any(*keepInstanceName);
    }
    if (rdsInstances) {
      res["rds_instances"] = boost::any(*rdsInstances);
    }
    if (arch) {
      res["arch"] = boost::any(*arch);
    }
    if (options) {
      res["options"] = boost::any(*options);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nodepool_id") != m.end() && !m["nodepool_id"].empty()) {
      nodepoolId = make_shared<string>(boost::any_cast<string>(m["nodepool_id"]));
    }
    if (m.find("format_disk") != m.end() && !m["format_disk"].empty()) {
      formatDisk = make_shared<bool>(boost::any_cast<bool>(m["format_disk"]));
    }
    if (m.find("keep_instance_name") != m.end() && !m["keep_instance_name"].empty()) {
      keepInstanceName = make_shared<bool>(boost::any_cast<bool>(m["keep_instance_name"]));
    }
    if (m.find("rds_instances") != m.end() && !m["rds_instances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["rds_instances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["rds_instances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdsInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("arch") != m.end() && !m["arch"].empty()) {
      arch = make_shared<string>(boost::any_cast<string>(m["arch"]));
    }
    if (m.find("options") != m.end() && !m["options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["options"]));
    }
  }


  virtual ~DescribeClusterAttachScriptsRequest() = default;
};
class DescribeClusterAttachScriptsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<string> body{};

  DescribeClusterAttachScriptsResponse() {}

  explicit DescribeClusterAttachScriptsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~DescribeClusterAttachScriptsResponse() = default;
};
class RemoveClusterNodesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> drainNode{};
  shared_ptr<vector<string>> nodes{};
  shared_ptr<bool> releaseNode{};

  RemoveClusterNodesRequest() {}

  explicit RemoveClusterNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drainNode) {
      res["drain_node"] = boost::any(*drainNode);
    }
    if (nodes) {
      res["nodes"] = boost::any(*nodes);
    }
    if (releaseNode) {
      res["release_node"] = boost::any(*releaseNode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("drain_node") != m.end() && !m["drain_node"].empty()) {
      drainNode = make_shared<bool>(boost::any_cast<bool>(m["drain_node"]));
    }
    if (m.find("nodes") != m.end() && !m["nodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["nodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["nodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("release_node") != m.end() && !m["release_node"].empty()) {
      releaseNode = make_shared<bool>(boost::any_cast<bool>(m["release_node"]));
    }
  }


  virtual ~RemoveClusterNodesRequest() = default;
};
class RemoveClusterNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  RemoveClusterNodesResponse() {}

  explicit RemoveClusterNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveClusterNodesResponse() = default;
};
class DescribeKubernetesVersionMetadataRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> kubernetesVersion{};
  shared_ptr<string> profile{};

  DescribeKubernetesVersionMetadataRequest() {}

  explicit DescribeKubernetesVersionMetadataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (kubernetesVersion) {
      res["KubernetesVersion"] = boost::any(*kubernetesVersion);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("KubernetesVersion") != m.end() && !m["KubernetesVersion"].empty()) {
      kubernetesVersion = make_shared<string>(boost::any_cast<string>(m["KubernetesVersion"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
  }


  virtual ~DescribeKubernetesVersionMetadataRequest() = default;
};
class DescribeKubernetesVersionMetadataResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> platform{};
  shared_ptr<string> osVersion{};
  shared_ptr<string> imageType{};
  shared_ptr<string> osType{};
  shared_ptr<string> imageCategory{};

  DescribeKubernetesVersionMetadataResponseBodyImages() {}

  explicit DescribeKubernetesVersionMetadataResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["image_id"] = boost::any(*imageId);
    }
    if (imageName) {
      res["image_name"] = boost::any(*imageName);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    if (osVersion) {
      res["os_version"] = boost::any(*osVersion);
    }
    if (imageType) {
      res["image_type"] = boost::any(*imageType);
    }
    if (osType) {
      res["os_type"] = boost::any(*osType);
    }
    if (imageCategory) {
      res["image_category"] = boost::any(*imageCategory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("image_id") != m.end() && !m["image_id"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["image_id"]));
    }
    if (m.find("image_name") != m.end() && !m["image_name"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["image_name"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
    if (m.find("os_version") != m.end() && !m["os_version"].empty()) {
      osVersion = make_shared<string>(boost::any_cast<string>(m["os_version"]));
    }
    if (m.find("image_type") != m.end() && !m["image_type"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["image_type"]));
    }
    if (m.find("os_type") != m.end() && !m["os_type"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["os_type"]));
    }
    if (m.find("image_category") != m.end() && !m["image_category"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["image_category"]));
    }
  }


  virtual ~DescribeKubernetesVersionMetadataResponseBodyImages() = default;
};
class DescribeKubernetesVersionMetadataResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> capabilities{};
  shared_ptr<vector<DescribeKubernetesVersionMetadataResponseBodyImages>> images{};
  shared_ptr<map<string, boost::any>> metaData{};
  shared_ptr<vector<Runtime>> runtimes{};
  shared_ptr<string> version{};
  shared_ptr<string> multiAz{};

  DescribeKubernetesVersionMetadataResponseBody() {}

  explicit DescribeKubernetesVersionMetadataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capabilities) {
      res["capabilities"] = boost::any(*capabilities);
    }
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["images"] = boost::any(temp1);
    }
    if (metaData) {
      res["meta_data"] = boost::any(*metaData);
    }
    if (runtimes) {
      vector<boost::any> temp1;
      for(auto item1:*runtimes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["runtimes"] = boost::any(temp1);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (multiAz) {
      res["multi_az"] = boost::any(*multiAz);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("capabilities") != m.end() && !m["capabilities"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["capabilities"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      capabilities = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("images") != m.end() && !m["images"].empty()) {
      if (typeid(vector<boost::any>) == m["images"].type()) {
        vector<DescribeKubernetesVersionMetadataResponseBodyImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeKubernetesVersionMetadataResponseBodyImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<DescribeKubernetesVersionMetadataResponseBodyImages>>(expect1);
      }
    }
    if (m.find("meta_data") != m.end() && !m["meta_data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["meta_data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metaData = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("runtimes") != m.end() && !m["runtimes"].empty()) {
      if (typeid(vector<boost::any>) == m["runtimes"].type()) {
        vector<Runtime> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["runtimes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Runtime model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        runtimes = make_shared<vector<Runtime>>(expect1);
      }
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("multi_az") != m.end() && !m["multi_az"].empty()) {
      multiAz = make_shared<string>(boost::any_cast<string>(m["multi_az"]));
    }
  }


  virtual ~DescribeKubernetesVersionMetadataResponseBody() = default;
};
class DescribeKubernetesVersionMetadataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<vector<DescribeKubernetesVersionMetadataResponseBody>> body{};

  DescribeKubernetesVersionMetadataResponse() {}

  explicit DescribeKubernetesVersionMetadataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<DescribeKubernetesVersionMetadataResponseBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeKubernetesVersionMetadataResponseBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<DescribeKubernetesVersionMetadataResponseBody>>(expect1);
      }
    }
  }


  virtual ~DescribeKubernetesVersionMetadataResponse() = default;
};
class DescribeClusterLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> ID{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterLog{};
  shared_ptr<string> logLevel{};
  shared_ptr<string> created{};
  shared_ptr<string> updated{};

  DescribeClusterLogsResponseBody() {}

  explicit DescribeClusterLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ID) {
      res["ID"] = boost::any(*ID);
    }
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (clusterLog) {
      res["cluster_log"] = boost::any(*clusterLog);
    }
    if (logLevel) {
      res["log_level"] = boost::any(*logLevel);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ID") != m.end() && !m["ID"].empty()) {
      ID = make_shared<long>(boost::any_cast<long>(m["ID"]));
    }
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("cluster_log") != m.end() && !m["cluster_log"].empty()) {
      clusterLog = make_shared<string>(boost::any_cast<string>(m["cluster_log"]));
    }
    if (m.find("log_level") != m.end() && !m["log_level"].empty()) {
      logLevel = make_shared<string>(boost::any_cast<string>(m["log_level"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["created"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["updated"]));
    }
  }


  virtual ~DescribeClusterLogsResponseBody() = default;
};
class DescribeClusterLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<vector<DescribeClusterLogsResponseBody>> body{};

  DescribeClusterLogsResponse() {}

  explicit DescribeClusterLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<DescribeClusterLogsResponseBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterLogsResponseBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<DescribeClusterLogsResponseBody>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterLogsResponse() = default;
};
class CreateKubernetesTriggerRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> action{};
  shared_ptr<string> type{};

  CreateKubernetesTriggerRequest() {}

  explicit CreateKubernetesTriggerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (projectId) {
      res["project_id"] = boost::any(*projectId);
    }
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("project_id") != m.end() && !m["project_id"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["project_id"]));
    }
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateKubernetesTriggerRequest() = default;
};
class CreateKubernetesTriggerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> type{};
  shared_ptr<string> action{};

  CreateKubernetesTriggerResponseBody() {}

  explicit CreateKubernetesTriggerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (projectId) {
      res["project_id"] = boost::any(*projectId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (action) {
      res["action"] = boost::any(*action);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("project_id") != m.end() && !m["project_id"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["project_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
  }


  virtual ~CreateKubernetesTriggerResponseBody() = default;
};
class CreateKubernetesTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateKubernetesTriggerResponseBody> body{};

  CreateKubernetesTriggerResponse() {}

  explicit CreateKubernetesTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateKubernetesTriggerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateKubernetesTriggerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateKubernetesTriggerResponse() = default;
};
class GrantPermissionsRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<bool> isCustom{};
  shared_ptr<string> roleName{};
  shared_ptr<string> roleType{};
  shared_ptr<string> namespace_{};
  shared_ptr<bool> isRamRole{};

  GrantPermissionsRequestBody() {}

  explicit GrantPermissionsRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (isCustom) {
      res["is_custom"] = boost::any(*isCustom);
    }
    if (roleName) {
      res["role_name"] = boost::any(*roleName);
    }
    if (roleType) {
      res["role_type"] = boost::any(*roleType);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (isRamRole) {
      res["is_ram_role"] = boost::any(*isRamRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("is_custom") != m.end() && !m["is_custom"].empty()) {
      isCustom = make_shared<bool>(boost::any_cast<bool>(m["is_custom"]));
    }
    if (m.find("role_name") != m.end() && !m["role_name"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["role_name"]));
    }
    if (m.find("role_type") != m.end() && !m["role_type"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["role_type"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("is_ram_role") != m.end() && !m["is_ram_role"].empty()) {
      isRamRole = make_shared<bool>(boost::any_cast<bool>(m["is_ram_role"]));
    }
  }


  virtual ~GrantPermissionsRequestBody() = default;
};
class GrantPermissionsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GrantPermissionsRequestBody>> body{};

  GrantPermissionsRequest() {}

  explicit GrantPermissionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<GrantPermissionsRequestBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GrantPermissionsRequestBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<GrantPermissionsRequestBody>>(expect1);
      }
    }
  }


  virtual ~GrantPermissionsRequest() = default;
};
class GrantPermissionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  GrantPermissionsResponse() {}

  explicit GrantPermissionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GrantPermissionsResponse() = default;
};
class DescribeClusterDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> created{};
  shared_ptr<string> initVersion{};
  shared_ptr<string> currentVersion{};
  shared_ptr<string> nextVersion{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<string> dockerVersion{};
  shared_ptr<string> externalLoadbalancerId{};
  shared_ptr<string> metaData{};
  shared_ptr<string> name{};
  shared_ptr<string> networkMode{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<long> size{};
  shared_ptr<string> state{};
  shared_ptr<vector<Tag>> tags{};
  shared_ptr<string> updated{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> subnetCidr{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> masterUrl{};
  shared_ptr<bool> privateZone{};
  shared_ptr<string> profile{};
  shared_ptr<string> clusterSpec{};
  shared_ptr<string> workerRamRoleName{};
  shared_ptr<MaintenanceWindow> maintenanceWindow{};

  DescribeClusterDetailResponseBody() {}

  explicit DescribeClusterDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (clusterType) {
      res["cluster_type"] = boost::any(*clusterType);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (initVersion) {
      res["init_version"] = boost::any(*initVersion);
    }
    if (currentVersion) {
      res["current_version"] = boost::any(*currentVersion);
    }
    if (nextVersion) {
      res["next_version"] = boost::any(*nextVersion);
    }
    if (deletionProtection) {
      res["deletion_protection"] = boost::any(*deletionProtection);
    }
    if (dockerVersion) {
      res["docker_version"] = boost::any(*dockerVersion);
    }
    if (externalLoadbalancerId) {
      res["external_loadbalancer_id"] = boost::any(*externalLoadbalancerId);
    }
    if (metaData) {
      res["meta_data"] = boost::any(*metaData);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (networkMode) {
      res["network_mode"] = boost::any(*networkMode);
    }
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["resource_group_id"] = boost::any(*resourceGroupId);
    }
    if (securityGroupId) {
      res["security_group_id"] = boost::any(*securityGroupId);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    if (vpcId) {
      res["vpc_id"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["vswitch_id"] = boost::any(*vswitchId);
    }
    if (subnetCidr) {
      res["subnet_cidr"] = boost::any(*subnetCidr);
    }
    if (zoneId) {
      res["zone_id"] = boost::any(*zoneId);
    }
    if (masterUrl) {
      res["master_url"] = boost::any(*masterUrl);
    }
    if (privateZone) {
      res["private_zone"] = boost::any(*privateZone);
    }
    if (profile) {
      res["profile"] = boost::any(*profile);
    }
    if (clusterSpec) {
      res["cluster_spec"] = boost::any(*clusterSpec);
    }
    if (workerRamRoleName) {
      res["worker_ram_role_name"] = boost::any(*workerRamRoleName);
    }
    if (maintenanceWindow) {
      res["maintenance_window"] = maintenanceWindow ? boost::any(maintenanceWindow->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("cluster_type") != m.end() && !m["cluster_type"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["cluster_type"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["created"]));
    }
    if (m.find("init_version") != m.end() && !m["init_version"].empty()) {
      initVersion = make_shared<string>(boost::any_cast<string>(m["init_version"]));
    }
    if (m.find("current_version") != m.end() && !m["current_version"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["current_version"]));
    }
    if (m.find("next_version") != m.end() && !m["next_version"].empty()) {
      nextVersion = make_shared<string>(boost::any_cast<string>(m["next_version"]));
    }
    if (m.find("deletion_protection") != m.end() && !m["deletion_protection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["deletion_protection"]));
    }
    if (m.find("docker_version") != m.end() && !m["docker_version"].empty()) {
      dockerVersion = make_shared<string>(boost::any_cast<string>(m["docker_version"]));
    }
    if (m.find("external_loadbalancer_id") != m.end() && !m["external_loadbalancer_id"].empty()) {
      externalLoadbalancerId = make_shared<string>(boost::any_cast<string>(m["external_loadbalancer_id"]));
    }
    if (m.find("meta_data") != m.end() && !m["meta_data"].empty()) {
      metaData = make_shared<string>(boost::any_cast<string>(m["meta_data"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("network_mode") != m.end() && !m["network_mode"].empty()) {
      networkMode = make_shared<string>(boost::any_cast<string>(m["network_mode"]));
    }
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
    if (m.find("resource_group_id") != m.end() && !m["resource_group_id"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resource_group_id"]));
    }
    if (m.find("security_group_id") != m.end() && !m["security_group_id"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["security_group_id"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["updated"]));
    }
    if (m.find("vpc_id") != m.end() && !m["vpc_id"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpc_id"]));
    }
    if (m.find("vswitch_id") != m.end() && !m["vswitch_id"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["vswitch_id"]));
    }
    if (m.find("subnet_cidr") != m.end() && !m["subnet_cidr"].empty()) {
      subnetCidr = make_shared<string>(boost::any_cast<string>(m["subnet_cidr"]));
    }
    if (m.find("zone_id") != m.end() && !m["zone_id"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zone_id"]));
    }
    if (m.find("master_url") != m.end() && !m["master_url"].empty()) {
      masterUrl = make_shared<string>(boost::any_cast<string>(m["master_url"]));
    }
    if (m.find("private_zone") != m.end() && !m["private_zone"].empty()) {
      privateZone = make_shared<bool>(boost::any_cast<bool>(m["private_zone"]));
    }
    if (m.find("profile") != m.end() && !m["profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["profile"]));
    }
    if (m.find("cluster_spec") != m.end() && !m["cluster_spec"].empty()) {
      clusterSpec = make_shared<string>(boost::any_cast<string>(m["cluster_spec"]));
    }
    if (m.find("worker_ram_role_name") != m.end() && !m["worker_ram_role_name"].empty()) {
      workerRamRoleName = make_shared<string>(boost::any_cast<string>(m["worker_ram_role_name"]));
    }
    if (m.find("maintenance_window") != m.end() && !m["maintenance_window"].empty()) {
      if (typeid(map<string, boost::any>) == m["maintenance_window"].type()) {
        MaintenanceWindow model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["maintenance_window"]));
        maintenanceWindow = make_shared<MaintenanceWindow>(model1);
      }
    }
  }


  virtual ~DescribeClusterDetailResponseBody() = default;
};
class DescribeClusterDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClusterDetailResponseBody> body{};

  DescribeClusterDetailResponse() {}

  explicit DescribeClusterDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterDetailResponse() = default;
};
class PauseComponentUpgradeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  PauseComponentUpgradeResponse() {}

  explicit PauseComponentUpgradeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PauseComponentUpgradeResponse() = default;
};
class DescribeClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> clusterType{};

  DescribeClustersRequest() {}

  explicit DescribeClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (clusterType) {
      res["clusterType"] = boost::any(*clusterType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("clusterType") != m.end() && !m["clusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["clusterType"]));
    }
  }


  virtual ~DescribeClustersRequest() = default;
};
class DescribeClustersResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeClustersResponseBodyTags() {}

  explicit DescribeClustersResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeClustersResponseBodyTags() = default;
};
class DescribeClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> created{};
  shared_ptr<string> currentVersion{};
  shared_ptr<string> dataDiskCategory{};
  shared_ptr<long> dataDiskSize{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<string> dockerVersion{};
  shared_ptr<string> externalLoadbalancerId{};
  shared_ptr<string> initVersion{};
  shared_ptr<string> masterUrl{};
  shared_ptr<string> metaData{};
  shared_ptr<string> name{};
  shared_ptr<string> networkMode{};
  shared_ptr<bool> privateZone{};
  shared_ptr<string> profile{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<long> size{};
  shared_ptr<string> state{};
  shared_ptr<string> subnetCidr{};
  shared_ptr<vector<DescribeClustersResponseBodyTags>> tags{};
  shared_ptr<string> updated{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchCidr{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> workerRamRoleName{};
  shared_ptr<string> zoneId{};

  DescribeClustersResponseBody() {}

  explicit DescribeClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (clusterType) {
      res["cluster_type"] = boost::any(*clusterType);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (currentVersion) {
      res["current_version"] = boost::any(*currentVersion);
    }
    if (dataDiskCategory) {
      res["data_disk_category"] = boost::any(*dataDiskCategory);
    }
    if (dataDiskSize) {
      res["data_disk_size"] = boost::any(*dataDiskSize);
    }
    if (deletionProtection) {
      res["deletion_protection"] = boost::any(*deletionProtection);
    }
    if (dockerVersion) {
      res["docker_version"] = boost::any(*dockerVersion);
    }
    if (externalLoadbalancerId) {
      res["external_loadbalancer_id"] = boost::any(*externalLoadbalancerId);
    }
    if (initVersion) {
      res["init_version"] = boost::any(*initVersion);
    }
    if (masterUrl) {
      res["master_url"] = boost::any(*masterUrl);
    }
    if (metaData) {
      res["meta_data"] = boost::any(*metaData);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (networkMode) {
      res["network_mode"] = boost::any(*networkMode);
    }
    if (privateZone) {
      res["private_zone"] = boost::any(*privateZone);
    }
    if (profile) {
      res["profile"] = boost::any(*profile);
    }
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["resource_group_id"] = boost::any(*resourceGroupId);
    }
    if (securityGroupId) {
      res["security_group_id"] = boost::any(*securityGroupId);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (subnetCidr) {
      res["subnet_cidr"] = boost::any(*subnetCidr);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    if (vpcId) {
      res["vpc_id"] = boost::any(*vpcId);
    }
    if (vswitchCidr) {
      res["vswitch_cidr"] = boost::any(*vswitchCidr);
    }
    if (vswitchId) {
      res["vswitch_id"] = boost::any(*vswitchId);
    }
    if (workerRamRoleName) {
      res["worker_ram_role_name"] = boost::any(*workerRamRoleName);
    }
    if (zoneId) {
      res["zone_id"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("cluster_type") != m.end() && !m["cluster_type"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["cluster_type"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["created"]));
    }
    if (m.find("current_version") != m.end() && !m["current_version"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["current_version"]));
    }
    if (m.find("data_disk_category") != m.end() && !m["data_disk_category"].empty()) {
      dataDiskCategory = make_shared<string>(boost::any_cast<string>(m["data_disk_category"]));
    }
    if (m.find("data_disk_size") != m.end() && !m["data_disk_size"].empty()) {
      dataDiskSize = make_shared<long>(boost::any_cast<long>(m["data_disk_size"]));
    }
    if (m.find("deletion_protection") != m.end() && !m["deletion_protection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["deletion_protection"]));
    }
    if (m.find("docker_version") != m.end() && !m["docker_version"].empty()) {
      dockerVersion = make_shared<string>(boost::any_cast<string>(m["docker_version"]));
    }
    if (m.find("external_loadbalancer_id") != m.end() && !m["external_loadbalancer_id"].empty()) {
      externalLoadbalancerId = make_shared<string>(boost::any_cast<string>(m["external_loadbalancer_id"]));
    }
    if (m.find("init_version") != m.end() && !m["init_version"].empty()) {
      initVersion = make_shared<string>(boost::any_cast<string>(m["init_version"]));
    }
    if (m.find("master_url") != m.end() && !m["master_url"].empty()) {
      masterUrl = make_shared<string>(boost::any_cast<string>(m["master_url"]));
    }
    if (m.find("meta_data") != m.end() && !m["meta_data"].empty()) {
      metaData = make_shared<string>(boost::any_cast<string>(m["meta_data"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("network_mode") != m.end() && !m["network_mode"].empty()) {
      networkMode = make_shared<string>(boost::any_cast<string>(m["network_mode"]));
    }
    if (m.find("private_zone") != m.end() && !m["private_zone"].empty()) {
      privateZone = make_shared<bool>(boost::any_cast<bool>(m["private_zone"]));
    }
    if (m.find("profile") != m.end() && !m["profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["profile"]));
    }
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
    if (m.find("resource_group_id") != m.end() && !m["resource_group_id"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resource_group_id"]));
    }
    if (m.find("security_group_id") != m.end() && !m["security_group_id"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["security_group_id"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("subnet_cidr") != m.end() && !m["subnet_cidr"].empty()) {
      subnetCidr = make_shared<string>(boost::any_cast<string>(m["subnet_cidr"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<DescribeClustersResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClustersResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeClustersResponseBodyTags>>(expect1);
      }
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["updated"]));
    }
    if (m.find("vpc_id") != m.end() && !m["vpc_id"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpc_id"]));
    }
    if (m.find("vswitch_cidr") != m.end() && !m["vswitch_cidr"].empty()) {
      vswitchCidr = make_shared<string>(boost::any_cast<string>(m["vswitch_cidr"]));
    }
    if (m.find("vswitch_id") != m.end() && !m["vswitch_id"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["vswitch_id"]));
    }
    if (m.find("worker_ram_role_name") != m.end() && !m["worker_ram_role_name"].empty()) {
      workerRamRoleName = make_shared<string>(boost::any_cast<string>(m["worker_ram_role_name"]));
    }
    if (m.find("zone_id") != m.end() && !m["zone_id"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zone_id"]));
    }
  }


  virtual ~DescribeClustersResponseBody() = default;
};
class DescribeClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<vector<DescribeClustersResponseBody>> body{};

  DescribeClustersResponse() {}

  explicit DescribeClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<DescribeClustersResponseBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClustersResponseBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<DescribeClustersResponseBody>>(expect1);
      }
    }
  }


  virtual ~DescribeClustersResponse() = default;
};
class DescribeUserPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> roleName{};
  shared_ptr<string> roleType{};
  shared_ptr<long> isOwner{};
  shared_ptr<long> isRamRole{};

  DescribeUserPermissionResponseBody() {}

  explicit DescribeUserPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["resource_id"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["resource_type"] = boost::any(*resourceType);
    }
    if (roleName) {
      res["role_name"] = boost::any(*roleName);
    }
    if (roleType) {
      res["role_type"] = boost::any(*roleType);
    }
    if (isOwner) {
      res["is_owner"] = boost::any(*isOwner);
    }
    if (isRamRole) {
      res["is_ram_role"] = boost::any(*isRamRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("resource_id") != m.end() && !m["resource_id"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["resource_id"]));
    }
    if (m.find("resource_type") != m.end() && !m["resource_type"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resource_type"]));
    }
    if (m.find("role_name") != m.end() && !m["role_name"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["role_name"]));
    }
    if (m.find("role_type") != m.end() && !m["role_type"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["role_type"]));
    }
    if (m.find("is_owner") != m.end() && !m["is_owner"].empty()) {
      isOwner = make_shared<long>(boost::any_cast<long>(m["is_owner"]));
    }
    if (m.find("is_ram_role") != m.end() && !m["is_ram_role"].empty()) {
      isRamRole = make_shared<long>(boost::any_cast<long>(m["is_ram_role"]));
    }
  }


  virtual ~DescribeUserPermissionResponseBody() = default;
};
class DescribeUserPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<vector<DescribeUserPermissionResponseBody>> body{};

  DescribeUserPermissionResponse() {}

  explicit DescribeUserPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<DescribeUserPermissionResponseBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserPermissionResponseBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<DescribeUserPermissionResponseBody>>(expect1);
      }
    }
  }


  virtual ~DescribeUserPermissionResponse() = default;
};
class ModifyClusterNodePoolRequestAutoScaling : public Darabonba::Model {
public:
  shared_ptr<long> eipBandwidth{};
  shared_ptr<string> eipInternetChargeType{};
  shared_ptr<bool> enable{};
  shared_ptr<bool> isBondEip{};
  shared_ptr<long> maxInstances{};
  shared_ptr<long> minInstances{};
  shared_ptr<string> type{};

  ModifyClusterNodePoolRequestAutoScaling() {}

  explicit ModifyClusterNodePoolRequestAutoScaling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eipBandwidth) {
      res["eip_bandwidth"] = boost::any(*eipBandwidth);
    }
    if (eipInternetChargeType) {
      res["eip_internet_charge_type"] = boost::any(*eipInternetChargeType);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (isBondEip) {
      res["is_bond_eip"] = boost::any(*isBondEip);
    }
    if (maxInstances) {
      res["max_instances"] = boost::any(*maxInstances);
    }
    if (minInstances) {
      res["min_instances"] = boost::any(*minInstances);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("eip_bandwidth") != m.end() && !m["eip_bandwidth"].empty()) {
      eipBandwidth = make_shared<long>(boost::any_cast<long>(m["eip_bandwidth"]));
    }
    if (m.find("eip_internet_charge_type") != m.end() && !m["eip_internet_charge_type"].empty()) {
      eipInternetChargeType = make_shared<string>(boost::any_cast<string>(m["eip_internet_charge_type"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("is_bond_eip") != m.end() && !m["is_bond_eip"].empty()) {
      isBondEip = make_shared<bool>(boost::any_cast<bool>(m["is_bond_eip"]));
    }
    if (m.find("max_instances") != m.end() && !m["max_instances"].empty()) {
      maxInstances = make_shared<long>(boost::any_cast<long>(m["max_instances"]));
    }
    if (m.find("min_instances") != m.end() && !m["min_instances"].empty()) {
      minInstances = make_shared<long>(boost::any_cast<long>(m["min_instances"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ModifyClusterNodePoolRequestAutoScaling() = default;
};
class ModifyClusterNodePoolRequestKubernetesConfig : public Darabonba::Model {
public:
  shared_ptr<bool> cmsEnabled{};
  shared_ptr<string> cpuPolicy{};
  shared_ptr<vector<Tag>> labels{};
  shared_ptr<string> runtime{};
  shared_ptr<string> runtimeVersion{};
  shared_ptr<vector<Taint>> taints{};
  shared_ptr<string> userData{};

  ModifyClusterNodePoolRequestKubernetesConfig() {}

  explicit ModifyClusterNodePoolRequestKubernetesConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cmsEnabled) {
      res["cms_enabled"] = boost::any(*cmsEnabled);
    }
    if (cpuPolicy) {
      res["cpu_policy"] = boost::any(*cpuPolicy);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["labels"] = boost::any(temp1);
    }
    if (runtime) {
      res["runtime"] = boost::any(*runtime);
    }
    if (runtimeVersion) {
      res["runtime_version"] = boost::any(*runtimeVersion);
    }
    if (taints) {
      vector<boost::any> temp1;
      for(auto item1:*taints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taints"] = boost::any(temp1);
    }
    if (userData) {
      res["user_data"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cms_enabled") != m.end() && !m["cms_enabled"].empty()) {
      cmsEnabled = make_shared<bool>(boost::any_cast<bool>(m["cms_enabled"]));
    }
    if (m.find("cpu_policy") != m.end() && !m["cpu_policy"].empty()) {
      cpuPolicy = make_shared<string>(boost::any_cast<string>(m["cpu_policy"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      if (typeid(vector<boost::any>) == m["labels"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["runtime"]));
    }
    if (m.find("runtime_version") != m.end() && !m["runtime_version"].empty()) {
      runtimeVersion = make_shared<string>(boost::any_cast<string>(m["runtime_version"]));
    }
    if (m.find("taints") != m.end() && !m["taints"].empty()) {
      if (typeid(vector<boost::any>) == m["taints"].type()) {
        vector<Taint> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Taint model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taints = make_shared<vector<Taint>>(expect1);
      }
    }
    if (m.find("user_data") != m.end() && !m["user_data"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["user_data"]));
    }
  }


  virtual ~ModifyClusterNodePoolRequestKubernetesConfig() = default;
};
class ModifyClusterNodePoolRequestNodepoolInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};

  ModifyClusterNodePoolRequestNodepoolInfo() {}

  explicit ModifyClusterNodePoolRequestNodepoolInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["resource_group_id"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resource_group_id") != m.end() && !m["resource_group_id"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resource_group_id"]));
    }
  }


  virtual ~ModifyClusterNodePoolRequestNodepoolInfo() = default;
};
class ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<string> priceLimit{};

  ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit() {}

  explicit ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["instance_type"] = boost::any(*instanceType);
    }
    if (priceLimit) {
      res["price_limit"] = boost::any(*priceLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instance_type") != m.end() && !m["instance_type"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instance_type"]));
    }
    if (m.find("price_limit") != m.end() && !m["price_limit"].empty()) {
      priceLimit = make_shared<string>(boost::any_cast<string>(m["price_limit"]));
    }
  }


  virtual ~ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit() = default;
};
class ModifyClusterNodePoolRequestScalingGroup : public Darabonba::Model {
public:
  shared_ptr<vector<DataDisk>> dataDisks{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<string> platform{};
  shared_ptr<string> imageId{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<vector<ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit>> spotPriceLimit{};
  shared_ptr<vector<string>> instanceTypes{};
  shared_ptr<string> keyPair{};
  shared_ptr<string> loginPassword{};
  shared_ptr<vector<string>> rdsInstances{};
  shared_ptr<string> scalingPolicy{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<vector<Tag>> tags{};
  shared_ptr<vector<string>> vswitchIds{};
  shared_ptr<string> multiAzPolicy{};
  shared_ptr<long> onDemandBaseCapacity{};
  shared_ptr<long> onDemandPercentageAboveBaseCapacity{};
  shared_ptr<long> spotInstancePools{};
  shared_ptr<bool> spotInstanceRemedy{};
  shared_ptr<bool> compensateWithOnDemand{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandwidthOut{};

  ModifyClusterNodePoolRequestScalingGroup() {}

  explicit ModifyClusterNodePoolRequestScalingGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data_disks"] = boost::any(temp1);
    }
    if (instanceChargeType) {
      res["instance_charge_type"] = boost::any(*instanceChargeType);
    }
    if (period) {
      res["period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["period_unit"] = boost::any(*periodUnit);
    }
    if (autoRenew) {
      res["auto_renew"] = boost::any(*autoRenew);
    }
    if (autoRenewPeriod) {
      res["auto_renew_period"] = boost::any(*autoRenewPeriod);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    if (imageId) {
      res["image_id"] = boost::any(*imageId);
    }
    if (spotStrategy) {
      res["spot_strategy"] = boost::any(*spotStrategy);
    }
    if (spotPriceLimit) {
      vector<boost::any> temp1;
      for(auto item1:*spotPriceLimit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["spot_price_limit"] = boost::any(temp1);
    }
    if (instanceTypes) {
      res["instance_types"] = boost::any(*instanceTypes);
    }
    if (keyPair) {
      res["key_pair"] = boost::any(*keyPair);
    }
    if (loginPassword) {
      res["login_password"] = boost::any(*loginPassword);
    }
    if (rdsInstances) {
      res["rds_instances"] = boost::any(*rdsInstances);
    }
    if (scalingPolicy) {
      res["scaling_policy"] = boost::any(*scalingPolicy);
    }
    if (systemDiskCategory) {
      res["system_disk_category"] = boost::any(*systemDiskCategory);
    }
    if (systemDiskSize) {
      res["system_disk_size"] = boost::any(*systemDiskSize);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (vswitchIds) {
      res["vswitch_ids"] = boost::any(*vswitchIds);
    }
    if (multiAzPolicy) {
      res["multi_az_policy"] = boost::any(*multiAzPolicy);
    }
    if (onDemandBaseCapacity) {
      res["on_demand_base_capacity"] = boost::any(*onDemandBaseCapacity);
    }
    if (onDemandPercentageAboveBaseCapacity) {
      res["on_demand_percentage_above_base_capacity"] = boost::any(*onDemandPercentageAboveBaseCapacity);
    }
    if (spotInstancePools) {
      res["spot_instance_pools"] = boost::any(*spotInstancePools);
    }
    if (spotInstanceRemedy) {
      res["spot_instance_remedy"] = boost::any(*spotInstanceRemedy);
    }
    if (compensateWithOnDemand) {
      res["compensate_with_on_demand"] = boost::any(*compensateWithOnDemand);
    }
    if (internetChargeType) {
      res["internet_charge_type"] = boost::any(*internetChargeType);
    }
    if (internetMaxBandwidthOut) {
      res["internet_max_bandwidth_out"] = boost::any(*internetMaxBandwidthOut);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data_disks") != m.end() && !m["data_disks"].empty()) {
      if (typeid(vector<boost::any>) == m["data_disks"].type()) {
        vector<DataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data_disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisks = make_shared<vector<DataDisk>>(expect1);
      }
    }
    if (m.find("instance_charge_type") != m.end() && !m["instance_charge_type"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["instance_charge_type"]));
    }
    if (m.find("period") != m.end() && !m["period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["period"]));
    }
    if (m.find("period_unit") != m.end() && !m["period_unit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["period_unit"]));
    }
    if (m.find("auto_renew") != m.end() && !m["auto_renew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["auto_renew"]));
    }
    if (m.find("auto_renew_period") != m.end() && !m["auto_renew_period"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["auto_renew_period"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
    if (m.find("image_id") != m.end() && !m["image_id"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["image_id"]));
    }
    if (m.find("spot_strategy") != m.end() && !m["spot_strategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["spot_strategy"]));
    }
    if (m.find("spot_price_limit") != m.end() && !m["spot_price_limit"].empty()) {
      if (typeid(vector<boost::any>) == m["spot_price_limit"].type()) {
        vector<ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["spot_price_limit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spotPriceLimit = make_shared<vector<ModifyClusterNodePoolRequestScalingGroupSpotPriceLimit>>(expect1);
      }
    }
    if (m.find("instance_types") != m.end() && !m["instance_types"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["instance_types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["instance_types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("key_pair") != m.end() && !m["key_pair"].empty()) {
      keyPair = make_shared<string>(boost::any_cast<string>(m["key_pair"]));
    }
    if (m.find("login_password") != m.end() && !m["login_password"].empty()) {
      loginPassword = make_shared<string>(boost::any_cast<string>(m["login_password"]));
    }
    if (m.find("rds_instances") != m.end() && !m["rds_instances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["rds_instances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["rds_instances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdsInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("scaling_policy") != m.end() && !m["scaling_policy"].empty()) {
      scalingPolicy = make_shared<string>(boost::any_cast<string>(m["scaling_policy"]));
    }
    if (m.find("system_disk_category") != m.end() && !m["system_disk_category"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["system_disk_category"]));
    }
    if (m.find("system_disk_size") != m.end() && !m["system_disk_size"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["system_disk_size"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("vswitch_ids") != m.end() && !m["vswitch_ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vswitch_ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vswitch_ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vswitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("multi_az_policy") != m.end() && !m["multi_az_policy"].empty()) {
      multiAzPolicy = make_shared<string>(boost::any_cast<string>(m["multi_az_policy"]));
    }
    if (m.find("on_demand_base_capacity") != m.end() && !m["on_demand_base_capacity"].empty()) {
      onDemandBaseCapacity = make_shared<long>(boost::any_cast<long>(m["on_demand_base_capacity"]));
    }
    if (m.find("on_demand_percentage_above_base_capacity") != m.end() && !m["on_demand_percentage_above_base_capacity"].empty()) {
      onDemandPercentageAboveBaseCapacity = make_shared<long>(boost::any_cast<long>(m["on_demand_percentage_above_base_capacity"]));
    }
    if (m.find("spot_instance_pools") != m.end() && !m["spot_instance_pools"].empty()) {
      spotInstancePools = make_shared<long>(boost::any_cast<long>(m["spot_instance_pools"]));
    }
    if (m.find("spot_instance_remedy") != m.end() && !m["spot_instance_remedy"].empty()) {
      spotInstanceRemedy = make_shared<bool>(boost::any_cast<bool>(m["spot_instance_remedy"]));
    }
    if (m.find("compensate_with_on_demand") != m.end() && !m["compensate_with_on_demand"].empty()) {
      compensateWithOnDemand = make_shared<bool>(boost::any_cast<bool>(m["compensate_with_on_demand"]));
    }
    if (m.find("internet_charge_type") != m.end() && !m["internet_charge_type"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["internet_charge_type"]));
    }
    if (m.find("internet_max_bandwidth_out") != m.end() && !m["internet_max_bandwidth_out"].empty()) {
      internetMaxBandwidthOut = make_shared<long>(boost::any_cast<long>(m["internet_max_bandwidth_out"]));
    }
  }


  virtual ~ModifyClusterNodePoolRequestScalingGroup() = default;
};
class ModifyClusterNodePoolRequestTeeConfig : public Darabonba::Model {
public:
  shared_ptr<bool> teeEnable{};

  ModifyClusterNodePoolRequestTeeConfig() {}

  explicit ModifyClusterNodePoolRequestTeeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (teeEnable) {
      res["tee_enable"] = boost::any(*teeEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tee_enable") != m.end() && !m["tee_enable"].empty()) {
      teeEnable = make_shared<bool>(boost::any_cast<bool>(m["tee_enable"]));
    }
  }


  virtual ~ModifyClusterNodePoolRequestTeeConfig() = default;
};
class ModifyClusterNodePoolRequestManagementUpgradeConfig : public Darabonba::Model {
public:
  shared_ptr<bool> autoUpgrade{};
  shared_ptr<long> surge{};
  shared_ptr<long> surgePercentage{};
  shared_ptr<long> maxUnavailable{};

  ModifyClusterNodePoolRequestManagementUpgradeConfig() {}

  explicit ModifyClusterNodePoolRequestManagementUpgradeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoUpgrade) {
      res["auto_upgrade"] = boost::any(*autoUpgrade);
    }
    if (surge) {
      res["surge"] = boost::any(*surge);
    }
    if (surgePercentage) {
      res["surge_percentage"] = boost::any(*surgePercentage);
    }
    if (maxUnavailable) {
      res["max_unavailable"] = boost::any(*maxUnavailable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("auto_upgrade") != m.end() && !m["auto_upgrade"].empty()) {
      autoUpgrade = make_shared<bool>(boost::any_cast<bool>(m["auto_upgrade"]));
    }
    if (m.find("surge") != m.end() && !m["surge"].empty()) {
      surge = make_shared<long>(boost::any_cast<long>(m["surge"]));
    }
    if (m.find("surge_percentage") != m.end() && !m["surge_percentage"].empty()) {
      surgePercentage = make_shared<long>(boost::any_cast<long>(m["surge_percentage"]));
    }
    if (m.find("max_unavailable") != m.end() && !m["max_unavailable"].empty()) {
      maxUnavailable = make_shared<long>(boost::any_cast<long>(m["max_unavailable"]));
    }
  }


  virtual ~ModifyClusterNodePoolRequestManagementUpgradeConfig() = default;
};
class ModifyClusterNodePoolRequestManagement : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<bool> autoRepair{};
  shared_ptr<ModifyClusterNodePoolRequestManagementUpgradeConfig> upgradeConfig{};

  ModifyClusterNodePoolRequestManagement() {}

  explicit ModifyClusterNodePoolRequestManagement(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (autoRepair) {
      res["auto_repair"] = boost::any(*autoRepair);
    }
    if (upgradeConfig) {
      res["upgrade_config"] = upgradeConfig ? boost::any(upgradeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("auto_repair") != m.end() && !m["auto_repair"].empty()) {
      autoRepair = make_shared<bool>(boost::any_cast<bool>(m["auto_repair"]));
    }
    if (m.find("upgrade_config") != m.end() && !m["upgrade_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["upgrade_config"].type()) {
        ModifyClusterNodePoolRequestManagementUpgradeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["upgrade_config"]));
        upgradeConfig = make_shared<ModifyClusterNodePoolRequestManagementUpgradeConfig>(model1);
      }
    }
  }


  virtual ~ModifyClusterNodePoolRequestManagement() = default;
};
class ModifyClusterNodePoolRequest : public Darabonba::Model {
public:
  shared_ptr<ModifyClusterNodePoolRequestAutoScaling> autoScaling{};
  shared_ptr<ModifyClusterNodePoolRequestKubernetesConfig> kubernetesConfig{};
  shared_ptr<ModifyClusterNodePoolRequestNodepoolInfo> nodepoolInfo{};
  shared_ptr<ModifyClusterNodePoolRequestScalingGroup> scalingGroup{};
  shared_ptr<ModifyClusterNodePoolRequestTeeConfig> teeConfig{};
  shared_ptr<ModifyClusterNodePoolRequestManagement> management{};
  shared_ptr<bool> updateNodes{};

  ModifyClusterNodePoolRequest() {}

  explicit ModifyClusterNodePoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoScaling) {
      res["auto_scaling"] = autoScaling ? boost::any(autoScaling->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (kubernetesConfig) {
      res["kubernetes_config"] = kubernetesConfig ? boost::any(kubernetesConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodepoolInfo) {
      res["nodepool_info"] = nodepoolInfo ? boost::any(nodepoolInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scalingGroup) {
      res["scaling_group"] = scalingGroup ? boost::any(scalingGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (teeConfig) {
      res["tee_config"] = teeConfig ? boost::any(teeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (management) {
      res["management"] = management ? boost::any(management->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateNodes) {
      res["update_nodes"] = boost::any(*updateNodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("auto_scaling") != m.end() && !m["auto_scaling"].empty()) {
      if (typeid(map<string, boost::any>) == m["auto_scaling"].type()) {
        ModifyClusterNodePoolRequestAutoScaling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["auto_scaling"]));
        autoScaling = make_shared<ModifyClusterNodePoolRequestAutoScaling>(model1);
      }
    }
    if (m.find("kubernetes_config") != m.end() && !m["kubernetes_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["kubernetes_config"].type()) {
        ModifyClusterNodePoolRequestKubernetesConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["kubernetes_config"]));
        kubernetesConfig = make_shared<ModifyClusterNodePoolRequestKubernetesConfig>(model1);
      }
    }
    if (m.find("nodepool_info") != m.end() && !m["nodepool_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["nodepool_info"].type()) {
        ModifyClusterNodePoolRequestNodepoolInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nodepool_info"]));
        nodepoolInfo = make_shared<ModifyClusterNodePoolRequestNodepoolInfo>(model1);
      }
    }
    if (m.find("scaling_group") != m.end() && !m["scaling_group"].empty()) {
      if (typeid(map<string, boost::any>) == m["scaling_group"].type()) {
        ModifyClusterNodePoolRequestScalingGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scaling_group"]));
        scalingGroup = make_shared<ModifyClusterNodePoolRequestScalingGroup>(model1);
      }
    }
    if (m.find("tee_config") != m.end() && !m["tee_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["tee_config"].type()) {
        ModifyClusterNodePoolRequestTeeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tee_config"]));
        teeConfig = make_shared<ModifyClusterNodePoolRequestTeeConfig>(model1);
      }
    }
    if (m.find("management") != m.end() && !m["management"].empty()) {
      if (typeid(map<string, boost::any>) == m["management"].type()) {
        ModifyClusterNodePoolRequestManagement model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["management"]));
        management = make_shared<ModifyClusterNodePoolRequestManagement>(model1);
      }
    }
    if (m.find("update_nodes") != m.end() && !m["update_nodes"].empty()) {
      updateNodes = make_shared<bool>(boost::any_cast<bool>(m["update_nodes"]));
    }
  }


  virtual ~ModifyClusterNodePoolRequest() = default;
};
class ModifyClusterNodePoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> nodepoolId{};

  ModifyClusterNodePoolResponseBody() {}

  explicit ModifyClusterNodePoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["task_id"] = boost::any(*taskId);
    }
    if (nodepoolId) {
      res["nodepool_id"] = boost::any(*nodepoolId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("task_id") != m.end() && !m["task_id"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["task_id"]));
    }
    if (m.find("nodepool_id") != m.end() && !m["nodepool_id"].empty()) {
      nodepoolId = make_shared<string>(boost::any_cast<string>(m["nodepool_id"]));
    }
  }


  virtual ~ModifyClusterNodePoolResponseBody() = default;
};
class ModifyClusterNodePoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyClusterNodePoolResponseBody> body{};

  ModifyClusterNodePoolResponse() {}

  explicit ModifyClusterNodePoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyClusterNodePoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterNodePoolResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterNodePoolResponse() = default;
};
class ResumeUpgradeClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  ResumeUpgradeClusterResponse() {}

  explicit ResumeUpgradeClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResumeUpgradeClusterResponse() = default;
};
class OpenAckServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  OpenAckServiceRequest() {}

  explicit OpenAckServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~OpenAckServiceRequest() = default;
};
class OpenAckServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> orderId{};

  OpenAckServiceResponseBody() {}

  explicit OpenAckServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["request_id"] = boost::any(*requestId);
    }
    if (orderId) {
      res["order_id"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
    if (m.find("order_id") != m.end() && !m["order_id"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["order_id"]));
    }
  }


  virtual ~OpenAckServiceResponseBody() = default;
};
class OpenAckServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OpenAckServiceResponseBody> body{};

  OpenAckServiceResponse() {}

  explicit OpenAckServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenAckServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenAckServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenAckServiceResponse() = default;
};
class ScaleClusterNodePoolRequest : public Darabonba::Model {
public:
  shared_ptr<long> count{};

  ScaleClusterNodePoolRequest() {}

  explicit ScaleClusterNodePoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
  }


  virtual ~ScaleClusterNodePoolRequest() = default;
};
class ScaleClusterNodePoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  ScaleClusterNodePoolResponseBody() {}

  explicit ScaleClusterNodePoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["task_id"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("task_id") != m.end() && !m["task_id"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["task_id"]));
    }
  }


  virtual ~ScaleClusterNodePoolResponseBody() = default;
};
class ScaleClusterNodePoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ScaleClusterNodePoolResponseBody> body{};

  ScaleClusterNodePoolResponse() {}

  explicit ScaleClusterNodePoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScaleClusterNodePoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScaleClusterNodePoolResponseBody>(model1);
      }
    }
  }


  virtual ~ScaleClusterNodePoolResponse() = default;
};
class DescribeClusterNodePoolDetailResponseBodyAutoScaling : public Darabonba::Model {
public:
  shared_ptr<long> eipBandwidth{};
  shared_ptr<string> eipInternetChargeType{};
  shared_ptr<bool> enable{};
  shared_ptr<bool> isBondEip{};
  shared_ptr<long> maxInstances{};
  shared_ptr<long> minInstances{};
  shared_ptr<string> type{};

  DescribeClusterNodePoolDetailResponseBodyAutoScaling() {}

  explicit DescribeClusterNodePoolDetailResponseBodyAutoScaling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eipBandwidth) {
      res["eip_bandwidth"] = boost::any(*eipBandwidth);
    }
    if (eipInternetChargeType) {
      res["eip_internet_charge_type"] = boost::any(*eipInternetChargeType);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (isBondEip) {
      res["is_bond_eip"] = boost::any(*isBondEip);
    }
    if (maxInstances) {
      res["max_instances"] = boost::any(*maxInstances);
    }
    if (minInstances) {
      res["min_instances"] = boost::any(*minInstances);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("eip_bandwidth") != m.end() && !m["eip_bandwidth"].empty()) {
      eipBandwidth = make_shared<long>(boost::any_cast<long>(m["eip_bandwidth"]));
    }
    if (m.find("eip_internet_charge_type") != m.end() && !m["eip_internet_charge_type"].empty()) {
      eipInternetChargeType = make_shared<string>(boost::any_cast<string>(m["eip_internet_charge_type"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("is_bond_eip") != m.end() && !m["is_bond_eip"].empty()) {
      isBondEip = make_shared<bool>(boost::any_cast<bool>(m["is_bond_eip"]));
    }
    if (m.find("max_instances") != m.end() && !m["max_instances"].empty()) {
      maxInstances = make_shared<long>(boost::any_cast<long>(m["max_instances"]));
    }
    if (m.find("min_instances") != m.end() && !m["min_instances"].empty()) {
      minInstances = make_shared<long>(boost::any_cast<long>(m["min_instances"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DescribeClusterNodePoolDetailResponseBodyAutoScaling() = default;
};
class DescribeClusterNodePoolDetailResponseBodyKubernetesConfig : public Darabonba::Model {
public:
  shared_ptr<bool> cmsEnabled{};
  shared_ptr<string> cpuPolicy{};
  shared_ptr<vector<Tag>> labels{};
  shared_ptr<string> runtime{};
  shared_ptr<string> runtimeVersion{};
  shared_ptr<vector<Taint>> taints{};
  shared_ptr<string> userData{};

  DescribeClusterNodePoolDetailResponseBodyKubernetesConfig() {}

  explicit DescribeClusterNodePoolDetailResponseBodyKubernetesConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cmsEnabled) {
      res["cms_enabled"] = boost::any(*cmsEnabled);
    }
    if (cpuPolicy) {
      res["cpu_policy"] = boost::any(*cpuPolicy);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["labels"] = boost::any(temp1);
    }
    if (runtime) {
      res["runtime"] = boost::any(*runtime);
    }
    if (runtimeVersion) {
      res["runtime_version"] = boost::any(*runtimeVersion);
    }
    if (taints) {
      vector<boost::any> temp1;
      for(auto item1:*taints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taints"] = boost::any(temp1);
    }
    if (userData) {
      res["user_data"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cms_enabled") != m.end() && !m["cms_enabled"].empty()) {
      cmsEnabled = make_shared<bool>(boost::any_cast<bool>(m["cms_enabled"]));
    }
    if (m.find("cpu_policy") != m.end() && !m["cpu_policy"].empty()) {
      cpuPolicy = make_shared<string>(boost::any_cast<string>(m["cpu_policy"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      if (typeid(vector<boost::any>) == m["labels"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["runtime"]));
    }
    if (m.find("runtime_version") != m.end() && !m["runtime_version"].empty()) {
      runtimeVersion = make_shared<string>(boost::any_cast<string>(m["runtime_version"]));
    }
    if (m.find("taints") != m.end() && !m["taints"].empty()) {
      if (typeid(vector<boost::any>) == m["taints"].type()) {
        vector<Taint> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Taint model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taints = make_shared<vector<Taint>>(expect1);
      }
    }
    if (m.find("user_data") != m.end() && !m["user_data"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["user_data"]));
    }
  }


  virtual ~DescribeClusterNodePoolDetailResponseBodyKubernetesConfig() = default;
};
class DescribeClusterNodePoolDetailResponseBodyNodepoolInfo : public Darabonba::Model {
public:
  shared_ptr<string> created{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> name{};
  shared_ptr<string> nodepoolId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> type{};
  shared_ptr<string> updated{};

  DescribeClusterNodePoolDetailResponseBodyNodepoolInfo() {}

  explicit DescribeClusterNodePoolDetailResponseBodyNodepoolInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (isDefault) {
      res["is_default"] = boost::any(*isDefault);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nodepoolId) {
      res["nodepool_id"] = boost::any(*nodepoolId);
    }
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["resource_group_id"] = boost::any(*resourceGroupId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["created"]));
    }
    if (m.find("is_default") != m.end() && !m["is_default"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["is_default"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nodepool_id") != m.end() && !m["nodepool_id"].empty()) {
      nodepoolId = make_shared<string>(boost::any_cast<string>(m["nodepool_id"]));
    }
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
    if (m.find("resource_group_id") != m.end() && !m["resource_group_id"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resource_group_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["updated"]));
    }
  }


  virtual ~DescribeClusterNodePoolDetailResponseBodyNodepoolInfo() = default;
};
class DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<string> priceLimit{};

  DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit() {}

  explicit DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["instance_type"] = boost::any(*instanceType);
    }
    if (priceLimit) {
      res["price_limit"] = boost::any(*priceLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instance_type") != m.end() && !m["instance_type"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instance_type"]));
    }
    if (m.find("price_limit") != m.end() && !m["price_limit"].empty()) {
      priceLimit = make_shared<string>(boost::any_cast<string>(m["price_limit"]));
    }
  }


  virtual ~DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit() = default;
};
class DescribeClusterNodePoolDetailResponseBodyScalingGroup : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<vector<DataDisk>> dataDisks{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<vector<string>> instanceTypes{};
  shared_ptr<string> multiAzPolicy{};
  shared_ptr<long> onDemandBaseCapacity{};
  shared_ptr<long> onDemandPercentageAboveBaseCapacity{};
  shared_ptr<long> spotInstancePools{};
  shared_ptr<bool> spotInstanceRemedy{};
  shared_ptr<bool> compensateWithOnDemand{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> platform{};
  shared_ptr<string> ramPolicy{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<vector<DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit>> spotPriceLimit{};
  shared_ptr<vector<string>> rdsInstances{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> scalingPolicy{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<vector<Tag>> tags{};
  shared_ptr<vector<string>> vswitchIds{};
  shared_ptr<string> loginPassword{};
  shared_ptr<string> keyPair{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandwidthOut{};

  DescribeClusterNodePoolDetailResponseBodyScalingGroup() {}

  explicit DescribeClusterNodePoolDetailResponseBodyScalingGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["auto_renew"] = boost::any(*autoRenew);
    }
    if (autoRenewPeriod) {
      res["auto_renew_period"] = boost::any(*autoRenewPeriod);
    }
    if (dataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data_disks"] = boost::any(temp1);
    }
    if (imageId) {
      res["image_id"] = boost::any(*imageId);
    }
    if (instanceChargeType) {
      res["instance_charge_type"] = boost::any(*instanceChargeType);
    }
    if (instanceTypes) {
      res["instance_types"] = boost::any(*instanceTypes);
    }
    if (multiAzPolicy) {
      res["multi_az_policy"] = boost::any(*multiAzPolicy);
    }
    if (onDemandBaseCapacity) {
      res["on_demand_base_capacity"] = boost::any(*onDemandBaseCapacity);
    }
    if (onDemandPercentageAboveBaseCapacity) {
      res["on_demand_percentage_above_base_capacity"] = boost::any(*onDemandPercentageAboveBaseCapacity);
    }
    if (spotInstancePools) {
      res["spot_instance_pools"] = boost::any(*spotInstancePools);
    }
    if (spotInstanceRemedy) {
      res["spot_instance_remedy"] = boost::any(*spotInstanceRemedy);
    }
    if (compensateWithOnDemand) {
      res["compensate_with_on_demand"] = boost::any(*compensateWithOnDemand);
    }
    if (period) {
      res["period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["period_unit"] = boost::any(*periodUnit);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    if (ramPolicy) {
      res["ram_policy"] = boost::any(*ramPolicy);
    }
    if (spotStrategy) {
      res["spot_strategy"] = boost::any(*spotStrategy);
    }
    if (spotPriceLimit) {
      vector<boost::any> temp1;
      for(auto item1:*spotPriceLimit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["spot_price_limit"] = boost::any(temp1);
    }
    if (rdsInstances) {
      res["rds_instances"] = boost::any(*rdsInstances);
    }
    if (scalingGroupId) {
      res["scaling_group_id"] = boost::any(*scalingGroupId);
    }
    if (scalingPolicy) {
      res["scaling_policy"] = boost::any(*scalingPolicy);
    }
    if (securityGroupId) {
      res["security_group_id"] = boost::any(*securityGroupId);
    }
    if (systemDiskCategory) {
      res["system_disk_category"] = boost::any(*systemDiskCategory);
    }
    if (systemDiskSize) {
      res["system_disk_size"] = boost::any(*systemDiskSize);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (vswitchIds) {
      res["vswitch_ids"] = boost::any(*vswitchIds);
    }
    if (loginPassword) {
      res["login_password"] = boost::any(*loginPassword);
    }
    if (keyPair) {
      res["key_pair"] = boost::any(*keyPair);
    }
    if (internetChargeType) {
      res["internet_charge_type"] = boost::any(*internetChargeType);
    }
    if (internetMaxBandwidthOut) {
      res["internet_max_bandwidth_out"] = boost::any(*internetMaxBandwidthOut);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("auto_renew") != m.end() && !m["auto_renew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["auto_renew"]));
    }
    if (m.find("auto_renew_period") != m.end() && !m["auto_renew_period"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["auto_renew_period"]));
    }
    if (m.find("data_disks") != m.end() && !m["data_disks"].empty()) {
      if (typeid(vector<boost::any>) == m["data_disks"].type()) {
        vector<DataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data_disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisks = make_shared<vector<DataDisk>>(expect1);
      }
    }
    if (m.find("image_id") != m.end() && !m["image_id"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["image_id"]));
    }
    if (m.find("instance_charge_type") != m.end() && !m["instance_charge_type"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["instance_charge_type"]));
    }
    if (m.find("instance_types") != m.end() && !m["instance_types"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["instance_types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["instance_types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("multi_az_policy") != m.end() && !m["multi_az_policy"].empty()) {
      multiAzPolicy = make_shared<string>(boost::any_cast<string>(m["multi_az_policy"]));
    }
    if (m.find("on_demand_base_capacity") != m.end() && !m["on_demand_base_capacity"].empty()) {
      onDemandBaseCapacity = make_shared<long>(boost::any_cast<long>(m["on_demand_base_capacity"]));
    }
    if (m.find("on_demand_percentage_above_base_capacity") != m.end() && !m["on_demand_percentage_above_base_capacity"].empty()) {
      onDemandPercentageAboveBaseCapacity = make_shared<long>(boost::any_cast<long>(m["on_demand_percentage_above_base_capacity"]));
    }
    if (m.find("spot_instance_pools") != m.end() && !m["spot_instance_pools"].empty()) {
      spotInstancePools = make_shared<long>(boost::any_cast<long>(m["spot_instance_pools"]));
    }
    if (m.find("spot_instance_remedy") != m.end() && !m["spot_instance_remedy"].empty()) {
      spotInstanceRemedy = make_shared<bool>(boost::any_cast<bool>(m["spot_instance_remedy"]));
    }
    if (m.find("compensate_with_on_demand") != m.end() && !m["compensate_with_on_demand"].empty()) {
      compensateWithOnDemand = make_shared<bool>(boost::any_cast<bool>(m["compensate_with_on_demand"]));
    }
    if (m.find("period") != m.end() && !m["period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["period"]));
    }
    if (m.find("period_unit") != m.end() && !m["period_unit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["period_unit"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
    if (m.find("ram_policy") != m.end() && !m["ram_policy"].empty()) {
      ramPolicy = make_shared<string>(boost::any_cast<string>(m["ram_policy"]));
    }
    if (m.find("spot_strategy") != m.end() && !m["spot_strategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["spot_strategy"]));
    }
    if (m.find("spot_price_limit") != m.end() && !m["spot_price_limit"].empty()) {
      if (typeid(vector<boost::any>) == m["spot_price_limit"].type()) {
        vector<DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["spot_price_limit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spotPriceLimit = make_shared<vector<DescribeClusterNodePoolDetailResponseBodyScalingGroupSpotPriceLimit>>(expect1);
      }
    }
    if (m.find("rds_instances") != m.end() && !m["rds_instances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["rds_instances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["rds_instances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdsInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("scaling_group_id") != m.end() && !m["scaling_group_id"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["scaling_group_id"]));
    }
    if (m.find("scaling_policy") != m.end() && !m["scaling_policy"].empty()) {
      scalingPolicy = make_shared<string>(boost::any_cast<string>(m["scaling_policy"]));
    }
    if (m.find("security_group_id") != m.end() && !m["security_group_id"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["security_group_id"]));
    }
    if (m.find("system_disk_category") != m.end() && !m["system_disk_category"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["system_disk_category"]));
    }
    if (m.find("system_disk_size") != m.end() && !m["system_disk_size"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["system_disk_size"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("vswitch_ids") != m.end() && !m["vswitch_ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vswitch_ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vswitch_ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vswitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("login_password") != m.end() && !m["login_password"].empty()) {
      loginPassword = make_shared<string>(boost::any_cast<string>(m["login_password"]));
    }
    if (m.find("key_pair") != m.end() && !m["key_pair"].empty()) {
      keyPair = make_shared<string>(boost::any_cast<string>(m["key_pair"]));
    }
    if (m.find("internet_charge_type") != m.end() && !m["internet_charge_type"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["internet_charge_type"]));
    }
    if (m.find("internet_max_bandwidth_out") != m.end() && !m["internet_max_bandwidth_out"].empty()) {
      internetMaxBandwidthOut = make_shared<long>(boost::any_cast<long>(m["internet_max_bandwidth_out"]));
    }
  }


  virtual ~DescribeClusterNodePoolDetailResponseBodyScalingGroup() = default;
};
class DescribeClusterNodePoolDetailResponseBodyStatus : public Darabonba::Model {
public:
  shared_ptr<long> failedNodes{};
  shared_ptr<long> healthyNodes{};
  shared_ptr<long> initialNodes{};
  shared_ptr<long> offlineNodes{};
  shared_ptr<long> removingNodes{};
  shared_ptr<long> servingNodes{};
  shared_ptr<string> state{};
  shared_ptr<long> totalNodes{};

  DescribeClusterNodePoolDetailResponseBodyStatus() {}

  explicit DescribeClusterNodePoolDetailResponseBodyStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedNodes) {
      res["failed_nodes"] = boost::any(*failedNodes);
    }
    if (healthyNodes) {
      res["healthy_nodes"] = boost::any(*healthyNodes);
    }
    if (initialNodes) {
      res["initial_nodes"] = boost::any(*initialNodes);
    }
    if (offlineNodes) {
      res["offline_nodes"] = boost::any(*offlineNodes);
    }
    if (removingNodes) {
      res["removing_nodes"] = boost::any(*removingNodes);
    }
    if (servingNodes) {
      res["serving_nodes"] = boost::any(*servingNodes);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (totalNodes) {
      res["total_nodes"] = boost::any(*totalNodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("failed_nodes") != m.end() && !m["failed_nodes"].empty()) {
      failedNodes = make_shared<long>(boost::any_cast<long>(m["failed_nodes"]));
    }
    if (m.find("healthy_nodes") != m.end() && !m["healthy_nodes"].empty()) {
      healthyNodes = make_shared<long>(boost::any_cast<long>(m["healthy_nodes"]));
    }
    if (m.find("initial_nodes") != m.end() && !m["initial_nodes"].empty()) {
      initialNodes = make_shared<long>(boost::any_cast<long>(m["initial_nodes"]));
    }
    if (m.find("offline_nodes") != m.end() && !m["offline_nodes"].empty()) {
      offlineNodes = make_shared<long>(boost::any_cast<long>(m["offline_nodes"]));
    }
    if (m.find("removing_nodes") != m.end() && !m["removing_nodes"].empty()) {
      removingNodes = make_shared<long>(boost::any_cast<long>(m["removing_nodes"]));
    }
    if (m.find("serving_nodes") != m.end() && !m["serving_nodes"].empty()) {
      servingNodes = make_shared<long>(boost::any_cast<long>(m["serving_nodes"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("total_nodes") != m.end() && !m["total_nodes"].empty()) {
      totalNodes = make_shared<long>(boost::any_cast<long>(m["total_nodes"]));
    }
  }


  virtual ~DescribeClusterNodePoolDetailResponseBodyStatus() = default;
};
class DescribeClusterNodePoolDetailResponseBodyTeeConfig : public Darabonba::Model {
public:
  shared_ptr<bool> teeEnable{};

  DescribeClusterNodePoolDetailResponseBodyTeeConfig() {}

  explicit DescribeClusterNodePoolDetailResponseBodyTeeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (teeEnable) {
      res["tee_enable"] = boost::any(*teeEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tee_enable") != m.end() && !m["tee_enable"].empty()) {
      teeEnable = make_shared<bool>(boost::any_cast<bool>(m["tee_enable"]));
    }
  }


  virtual ~DescribeClusterNodePoolDetailResponseBodyTeeConfig() = default;
};
class DescribeClusterNodePoolDetailResponseBodyManagementUpgradeConfig : public Darabonba::Model {
public:
  shared_ptr<bool> autoUpgrade{};
  shared_ptr<long> surge{};
  shared_ptr<long> surgePercentage{};
  shared_ptr<long> maxUnavailable{};

  DescribeClusterNodePoolDetailResponseBodyManagementUpgradeConfig() {}

  explicit DescribeClusterNodePoolDetailResponseBodyManagementUpgradeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoUpgrade) {
      res["auto_upgrade"] = boost::any(*autoUpgrade);
    }
    if (surge) {
      res["surge"] = boost::any(*surge);
    }
    if (surgePercentage) {
      res["surge_percentage"] = boost::any(*surgePercentage);
    }
    if (maxUnavailable) {
      res["max_unavailable"] = boost::any(*maxUnavailable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("auto_upgrade") != m.end() && !m["auto_upgrade"].empty()) {
      autoUpgrade = make_shared<bool>(boost::any_cast<bool>(m["auto_upgrade"]));
    }
    if (m.find("surge") != m.end() && !m["surge"].empty()) {
      surge = make_shared<long>(boost::any_cast<long>(m["surge"]));
    }
    if (m.find("surge_percentage") != m.end() && !m["surge_percentage"].empty()) {
      surgePercentage = make_shared<long>(boost::any_cast<long>(m["surge_percentage"]));
    }
    if (m.find("max_unavailable") != m.end() && !m["max_unavailable"].empty()) {
      maxUnavailable = make_shared<long>(boost::any_cast<long>(m["max_unavailable"]));
    }
  }


  virtual ~DescribeClusterNodePoolDetailResponseBodyManagementUpgradeConfig() = default;
};
class DescribeClusterNodePoolDetailResponseBodyManagement : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<bool> autoRepair{};
  shared_ptr<DescribeClusterNodePoolDetailResponseBodyManagementUpgradeConfig> upgradeConfig{};

  DescribeClusterNodePoolDetailResponseBodyManagement() {}

  explicit DescribeClusterNodePoolDetailResponseBodyManagement(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (autoRepair) {
      res["auto_repair"] = boost::any(*autoRepair);
    }
    if (upgradeConfig) {
      res["upgrade_config"] = upgradeConfig ? boost::any(upgradeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("auto_repair") != m.end() && !m["auto_repair"].empty()) {
      autoRepair = make_shared<bool>(boost::any_cast<bool>(m["auto_repair"]));
    }
    if (m.find("upgrade_config") != m.end() && !m["upgrade_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["upgrade_config"].type()) {
        DescribeClusterNodePoolDetailResponseBodyManagementUpgradeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["upgrade_config"]));
        upgradeConfig = make_shared<DescribeClusterNodePoolDetailResponseBodyManagementUpgradeConfig>(model1);
      }
    }
  }


  virtual ~DescribeClusterNodePoolDetailResponseBodyManagement() = default;
};
class DescribeClusterNodePoolDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterNodePoolDetailResponseBodyAutoScaling> autoScaling{};
  shared_ptr<DescribeClusterNodePoolDetailResponseBodyKubernetesConfig> kubernetesConfig{};
  shared_ptr<DescribeClusterNodePoolDetailResponseBodyNodepoolInfo> nodepoolInfo{};
  shared_ptr<DescribeClusterNodePoolDetailResponseBodyScalingGroup> scalingGroup{};
  shared_ptr<DescribeClusterNodePoolDetailResponseBodyStatus> status{};
  shared_ptr<DescribeClusterNodePoolDetailResponseBodyTeeConfig> teeConfig{};
  shared_ptr<DescribeClusterNodePoolDetailResponseBodyManagement> management{};

  DescribeClusterNodePoolDetailResponseBody() {}

  explicit DescribeClusterNodePoolDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoScaling) {
      res["auto_scaling"] = autoScaling ? boost::any(autoScaling->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (kubernetesConfig) {
      res["kubernetes_config"] = kubernetesConfig ? boost::any(kubernetesConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodepoolInfo) {
      res["nodepool_info"] = nodepoolInfo ? boost::any(nodepoolInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scalingGroup) {
      res["scaling_group"] = scalingGroup ? boost::any(scalingGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (teeConfig) {
      res["tee_config"] = teeConfig ? boost::any(teeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (management) {
      res["management"] = management ? boost::any(management->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("auto_scaling") != m.end() && !m["auto_scaling"].empty()) {
      if (typeid(map<string, boost::any>) == m["auto_scaling"].type()) {
        DescribeClusterNodePoolDetailResponseBodyAutoScaling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["auto_scaling"]));
        autoScaling = make_shared<DescribeClusterNodePoolDetailResponseBodyAutoScaling>(model1);
      }
    }
    if (m.find("kubernetes_config") != m.end() && !m["kubernetes_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["kubernetes_config"].type()) {
        DescribeClusterNodePoolDetailResponseBodyKubernetesConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["kubernetes_config"]));
        kubernetesConfig = make_shared<DescribeClusterNodePoolDetailResponseBodyKubernetesConfig>(model1);
      }
    }
    if (m.find("nodepool_info") != m.end() && !m["nodepool_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["nodepool_info"].type()) {
        DescribeClusterNodePoolDetailResponseBodyNodepoolInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nodepool_info"]));
        nodepoolInfo = make_shared<DescribeClusterNodePoolDetailResponseBodyNodepoolInfo>(model1);
      }
    }
    if (m.find("scaling_group") != m.end() && !m["scaling_group"].empty()) {
      if (typeid(map<string, boost::any>) == m["scaling_group"].type()) {
        DescribeClusterNodePoolDetailResponseBodyScalingGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scaling_group"]));
        scalingGroup = make_shared<DescribeClusterNodePoolDetailResponseBodyScalingGroup>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        DescribeClusterNodePoolDetailResponseBodyStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<DescribeClusterNodePoolDetailResponseBodyStatus>(model1);
      }
    }
    if (m.find("tee_config") != m.end() && !m["tee_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["tee_config"].type()) {
        DescribeClusterNodePoolDetailResponseBodyTeeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tee_config"]));
        teeConfig = make_shared<DescribeClusterNodePoolDetailResponseBodyTeeConfig>(model1);
      }
    }
    if (m.find("management") != m.end() && !m["management"].empty()) {
      if (typeid(map<string, boost::any>) == m["management"].type()) {
        DescribeClusterNodePoolDetailResponseBodyManagement model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["management"]));
        management = make_shared<DescribeClusterNodePoolDetailResponseBodyManagement>(model1);
      }
    }
  }


  virtual ~DescribeClusterNodePoolDetailResponseBody() = default;
};
class DescribeClusterNodePoolDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClusterNodePoolDetailResponseBody> body{};

  DescribeClusterNodePoolDetailResponse() {}

  explicit DescribeClusterNodePoolDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterNodePoolDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterNodePoolDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterNodePoolDetailResponse() = default;
};
class CreateClusterNodePoolRequestAutoScaling : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<long> maxInstances{};
  shared_ptr<long> minInstances{};
  shared_ptr<string> type{};
  shared_ptr<bool> isBondEip{};
  shared_ptr<string> eipInternetChargeType{};
  shared_ptr<long> eipBandwidth{};

  CreateClusterNodePoolRequestAutoScaling() {}

  explicit CreateClusterNodePoolRequestAutoScaling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (maxInstances) {
      res["max_instances"] = boost::any(*maxInstances);
    }
    if (minInstances) {
      res["min_instances"] = boost::any(*minInstances);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (isBondEip) {
      res["is_bond_eip"] = boost::any(*isBondEip);
    }
    if (eipInternetChargeType) {
      res["eip_internet_charge_type"] = boost::any(*eipInternetChargeType);
    }
    if (eipBandwidth) {
      res["eip_bandwidth"] = boost::any(*eipBandwidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("max_instances") != m.end() && !m["max_instances"].empty()) {
      maxInstances = make_shared<long>(boost::any_cast<long>(m["max_instances"]));
    }
    if (m.find("min_instances") != m.end() && !m["min_instances"].empty()) {
      minInstances = make_shared<long>(boost::any_cast<long>(m["min_instances"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("is_bond_eip") != m.end() && !m["is_bond_eip"].empty()) {
      isBondEip = make_shared<bool>(boost::any_cast<bool>(m["is_bond_eip"]));
    }
    if (m.find("eip_internet_charge_type") != m.end() && !m["eip_internet_charge_type"].empty()) {
      eipInternetChargeType = make_shared<string>(boost::any_cast<string>(m["eip_internet_charge_type"]));
    }
    if (m.find("eip_bandwidth") != m.end() && !m["eip_bandwidth"].empty()) {
      eipBandwidth = make_shared<long>(boost::any_cast<long>(m["eip_bandwidth"]));
    }
  }


  virtual ~CreateClusterNodePoolRequestAutoScaling() = default;
};
class CreateClusterNodePoolRequestKubernetesConfig : public Darabonba::Model {
public:
  shared_ptr<bool> cmsEnabled{};
  shared_ptr<string> cpuPolicy{};
  shared_ptr<vector<Tag>> labels{};
  shared_ptr<string> runtime{};
  shared_ptr<string> runtimeVersion{};
  shared_ptr<vector<Taint>> taints{};
  shared_ptr<string> userData{};

  CreateClusterNodePoolRequestKubernetesConfig() {}

  explicit CreateClusterNodePoolRequestKubernetesConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cmsEnabled) {
      res["cms_enabled"] = boost::any(*cmsEnabled);
    }
    if (cpuPolicy) {
      res["cpu_policy"] = boost::any(*cpuPolicy);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["labels"] = boost::any(temp1);
    }
    if (runtime) {
      res["runtime"] = boost::any(*runtime);
    }
    if (runtimeVersion) {
      res["runtime_version"] = boost::any(*runtimeVersion);
    }
    if (taints) {
      vector<boost::any> temp1;
      for(auto item1:*taints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taints"] = boost::any(temp1);
    }
    if (userData) {
      res["user_data"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cms_enabled") != m.end() && !m["cms_enabled"].empty()) {
      cmsEnabled = make_shared<bool>(boost::any_cast<bool>(m["cms_enabled"]));
    }
    if (m.find("cpu_policy") != m.end() && !m["cpu_policy"].empty()) {
      cpuPolicy = make_shared<string>(boost::any_cast<string>(m["cpu_policy"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      if (typeid(vector<boost::any>) == m["labels"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["runtime"]));
    }
    if (m.find("runtime_version") != m.end() && !m["runtime_version"].empty()) {
      runtimeVersion = make_shared<string>(boost::any_cast<string>(m["runtime_version"]));
    }
    if (m.find("taints") != m.end() && !m["taints"].empty()) {
      if (typeid(vector<boost::any>) == m["taints"].type()) {
        vector<Taint> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Taint model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taints = make_shared<vector<Taint>>(expect1);
      }
    }
    if (m.find("user_data") != m.end() && !m["user_data"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["user_data"]));
    }
  }


  virtual ~CreateClusterNodePoolRequestKubernetesConfig() = default;
};
class CreateClusterNodePoolRequestNodepoolInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};

  CreateClusterNodePoolRequestNodepoolInfo() {}

  explicit CreateClusterNodePoolRequestNodepoolInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["resource_group_id"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("resource_group_id") != m.end() && !m["resource_group_id"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resource_group_id"]));
    }
  }


  virtual ~CreateClusterNodePoolRequestNodepoolInfo() = default;
};
class CreateClusterNodePoolRequestScalingGroupSpotPriceLimit : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<string> priceLimit{};

  CreateClusterNodePoolRequestScalingGroupSpotPriceLimit() {}

  explicit CreateClusterNodePoolRequestScalingGroupSpotPriceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["instance_type"] = boost::any(*instanceType);
    }
    if (priceLimit) {
      res["price_limit"] = boost::any(*priceLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instance_type") != m.end() && !m["instance_type"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instance_type"]));
    }
    if (m.find("price_limit") != m.end() && !m["price_limit"].empty()) {
      priceLimit = make_shared<string>(boost::any_cast<string>(m["price_limit"]));
    }
  }


  virtual ~CreateClusterNodePoolRequestScalingGroupSpotPriceLimit() = default;
};
class CreateClusterNodePoolRequestScalingGroupTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateClusterNodePoolRequestScalingGroupTags() {}

  explicit CreateClusterNodePoolRequestScalingGroupTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateClusterNodePoolRequestScalingGroupTags() = default;
};
class CreateClusterNodePoolRequestScalingGroup : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<vector<DataDisk>> dataDisks{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<vector<string>> instanceTypes{};
  shared_ptr<string> keyPair{};
  shared_ptr<string> loginPassword{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> platform{};
  shared_ptr<vector<string>> rdsInstances{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<vector<CreateClusterNodePoolRequestScalingGroupSpotPriceLimit>> spotPriceLimit{};
  shared_ptr<string> scalingPolicy{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<vector<CreateClusterNodePoolRequestScalingGroupTags>> tags{};
  shared_ptr<vector<string>> vswitchIds{};
  shared_ptr<string> multiAzPolicy{};
  shared_ptr<long> onDemandBaseCapacity{};
  shared_ptr<long> onDemandPercentageAboveBaseCapacity{};
  shared_ptr<long> spotInstancePools{};
  shared_ptr<bool> spotInstanceRemedy{};
  shared_ptr<bool> compensateWithOnDemand{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandwidthOut{};

  CreateClusterNodePoolRequestScalingGroup() {}

  explicit CreateClusterNodePoolRequestScalingGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["auto_renew"] = boost::any(*autoRenew);
    }
    if (autoRenewPeriod) {
      res["auto_renew_period"] = boost::any(*autoRenewPeriod);
    }
    if (dataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data_disks"] = boost::any(temp1);
    }
    if (imageId) {
      res["image_id"] = boost::any(*imageId);
    }
    if (instanceChargeType) {
      res["instance_charge_type"] = boost::any(*instanceChargeType);
    }
    if (instanceTypes) {
      res["instance_types"] = boost::any(*instanceTypes);
    }
    if (keyPair) {
      res["key_pair"] = boost::any(*keyPair);
    }
    if (loginPassword) {
      res["login_password"] = boost::any(*loginPassword);
    }
    if (period) {
      res["period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["period_unit"] = boost::any(*periodUnit);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    if (rdsInstances) {
      res["rds_instances"] = boost::any(*rdsInstances);
    }
    if (spotStrategy) {
      res["spot_strategy"] = boost::any(*spotStrategy);
    }
    if (spotPriceLimit) {
      vector<boost::any> temp1;
      for(auto item1:*spotPriceLimit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["spot_price_limit"] = boost::any(temp1);
    }
    if (scalingPolicy) {
      res["scaling_policy"] = boost::any(*scalingPolicy);
    }
    if (securityGroupId) {
      res["security_group_id"] = boost::any(*securityGroupId);
    }
    if (systemDiskCategory) {
      res["system_disk_category"] = boost::any(*systemDiskCategory);
    }
    if (systemDiskSize) {
      res["system_disk_size"] = boost::any(*systemDiskSize);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (vswitchIds) {
      res["vswitch_ids"] = boost::any(*vswitchIds);
    }
    if (multiAzPolicy) {
      res["multi_az_policy"] = boost::any(*multiAzPolicy);
    }
    if (onDemandBaseCapacity) {
      res["on_demand_base_capacity"] = boost::any(*onDemandBaseCapacity);
    }
    if (onDemandPercentageAboveBaseCapacity) {
      res["on_demand_percentage_above_base_capacity"] = boost::any(*onDemandPercentageAboveBaseCapacity);
    }
    if (spotInstancePools) {
      res["spot_instance_pools"] = boost::any(*spotInstancePools);
    }
    if (spotInstanceRemedy) {
      res["spot_instance_remedy"] = boost::any(*spotInstanceRemedy);
    }
    if (compensateWithOnDemand) {
      res["compensate_with_on_demand"] = boost::any(*compensateWithOnDemand);
    }
    if (internetChargeType) {
      res["internet_charge_type"] = boost::any(*internetChargeType);
    }
    if (internetMaxBandwidthOut) {
      res["internet_max_bandwidth_out"] = boost::any(*internetMaxBandwidthOut);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("auto_renew") != m.end() && !m["auto_renew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["auto_renew"]));
    }
    if (m.find("auto_renew_period") != m.end() && !m["auto_renew_period"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["auto_renew_period"]));
    }
    if (m.find("data_disks") != m.end() && !m["data_disks"].empty()) {
      if (typeid(vector<boost::any>) == m["data_disks"].type()) {
        vector<DataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data_disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisks = make_shared<vector<DataDisk>>(expect1);
      }
    }
    if (m.find("image_id") != m.end() && !m["image_id"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["image_id"]));
    }
    if (m.find("instance_charge_type") != m.end() && !m["instance_charge_type"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["instance_charge_type"]));
    }
    if (m.find("instance_types") != m.end() && !m["instance_types"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["instance_types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["instance_types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("key_pair") != m.end() && !m["key_pair"].empty()) {
      keyPair = make_shared<string>(boost::any_cast<string>(m["key_pair"]));
    }
    if (m.find("login_password") != m.end() && !m["login_password"].empty()) {
      loginPassword = make_shared<string>(boost::any_cast<string>(m["login_password"]));
    }
    if (m.find("period") != m.end() && !m["period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["period"]));
    }
    if (m.find("period_unit") != m.end() && !m["period_unit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["period_unit"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
    if (m.find("rds_instances") != m.end() && !m["rds_instances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["rds_instances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["rds_instances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdsInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("spot_strategy") != m.end() && !m["spot_strategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["spot_strategy"]));
    }
    if (m.find("spot_price_limit") != m.end() && !m["spot_price_limit"].empty()) {
      if (typeid(vector<boost::any>) == m["spot_price_limit"].type()) {
        vector<CreateClusterNodePoolRequestScalingGroupSpotPriceLimit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["spot_price_limit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterNodePoolRequestScalingGroupSpotPriceLimit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spotPriceLimit = make_shared<vector<CreateClusterNodePoolRequestScalingGroupSpotPriceLimit>>(expect1);
      }
    }
    if (m.find("scaling_policy") != m.end() && !m["scaling_policy"].empty()) {
      scalingPolicy = make_shared<string>(boost::any_cast<string>(m["scaling_policy"]));
    }
    if (m.find("security_group_id") != m.end() && !m["security_group_id"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["security_group_id"]));
    }
    if (m.find("system_disk_category") != m.end() && !m["system_disk_category"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["system_disk_category"]));
    }
    if (m.find("system_disk_size") != m.end() && !m["system_disk_size"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["system_disk_size"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<CreateClusterNodePoolRequestScalingGroupTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterNodePoolRequestScalingGroupTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateClusterNodePoolRequestScalingGroupTags>>(expect1);
      }
    }
    if (m.find("vswitch_ids") != m.end() && !m["vswitch_ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vswitch_ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vswitch_ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vswitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("multi_az_policy") != m.end() && !m["multi_az_policy"].empty()) {
      multiAzPolicy = make_shared<string>(boost::any_cast<string>(m["multi_az_policy"]));
    }
    if (m.find("on_demand_base_capacity") != m.end() && !m["on_demand_base_capacity"].empty()) {
      onDemandBaseCapacity = make_shared<long>(boost::any_cast<long>(m["on_demand_base_capacity"]));
    }
    if (m.find("on_demand_percentage_above_base_capacity") != m.end() && !m["on_demand_percentage_above_base_capacity"].empty()) {
      onDemandPercentageAboveBaseCapacity = make_shared<long>(boost::any_cast<long>(m["on_demand_percentage_above_base_capacity"]));
    }
    if (m.find("spot_instance_pools") != m.end() && !m["spot_instance_pools"].empty()) {
      spotInstancePools = make_shared<long>(boost::any_cast<long>(m["spot_instance_pools"]));
    }
    if (m.find("spot_instance_remedy") != m.end() && !m["spot_instance_remedy"].empty()) {
      spotInstanceRemedy = make_shared<bool>(boost::any_cast<bool>(m["spot_instance_remedy"]));
    }
    if (m.find("compensate_with_on_demand") != m.end() && !m["compensate_with_on_demand"].empty()) {
      compensateWithOnDemand = make_shared<bool>(boost::any_cast<bool>(m["compensate_with_on_demand"]));
    }
    if (m.find("internet_charge_type") != m.end() && !m["internet_charge_type"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["internet_charge_type"]));
    }
    if (m.find("internet_max_bandwidth_out") != m.end() && !m["internet_max_bandwidth_out"].empty()) {
      internetMaxBandwidthOut = make_shared<long>(boost::any_cast<long>(m["internet_max_bandwidth_out"]));
    }
  }


  virtual ~CreateClusterNodePoolRequestScalingGroup() = default;
};
class CreateClusterNodePoolRequestTeeConfig : public Darabonba::Model {
public:
  shared_ptr<bool> teeEnable{};

  CreateClusterNodePoolRequestTeeConfig() {}

  explicit CreateClusterNodePoolRequestTeeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (teeEnable) {
      res["tee_enable"] = boost::any(*teeEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tee_enable") != m.end() && !m["tee_enable"].empty()) {
      teeEnable = make_shared<bool>(boost::any_cast<bool>(m["tee_enable"]));
    }
  }


  virtual ~CreateClusterNodePoolRequestTeeConfig() = default;
};
class CreateClusterNodePoolRequestManagementUpgradeConfig : public Darabonba::Model {
public:
  shared_ptr<bool> autoUpgrade{};
  shared_ptr<long> surge{};
  shared_ptr<long> surgePercentage{};
  shared_ptr<long> maxUnavailable{};

  CreateClusterNodePoolRequestManagementUpgradeConfig() {}

  explicit CreateClusterNodePoolRequestManagementUpgradeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoUpgrade) {
      res["auto_upgrade"] = boost::any(*autoUpgrade);
    }
    if (surge) {
      res["surge"] = boost::any(*surge);
    }
    if (surgePercentage) {
      res["surge_percentage"] = boost::any(*surgePercentage);
    }
    if (maxUnavailable) {
      res["max_unavailable"] = boost::any(*maxUnavailable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("auto_upgrade") != m.end() && !m["auto_upgrade"].empty()) {
      autoUpgrade = make_shared<bool>(boost::any_cast<bool>(m["auto_upgrade"]));
    }
    if (m.find("surge") != m.end() && !m["surge"].empty()) {
      surge = make_shared<long>(boost::any_cast<long>(m["surge"]));
    }
    if (m.find("surge_percentage") != m.end() && !m["surge_percentage"].empty()) {
      surgePercentage = make_shared<long>(boost::any_cast<long>(m["surge_percentage"]));
    }
    if (m.find("max_unavailable") != m.end() && !m["max_unavailable"].empty()) {
      maxUnavailable = make_shared<long>(boost::any_cast<long>(m["max_unavailable"]));
    }
  }


  virtual ~CreateClusterNodePoolRequestManagementUpgradeConfig() = default;
};
class CreateClusterNodePoolRequestManagement : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<bool> autoRepair{};
  shared_ptr<CreateClusterNodePoolRequestManagementUpgradeConfig> upgradeConfig{};

  CreateClusterNodePoolRequestManagement() {}

  explicit CreateClusterNodePoolRequestManagement(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (autoRepair) {
      res["auto_repair"] = boost::any(*autoRepair);
    }
    if (upgradeConfig) {
      res["upgrade_config"] = upgradeConfig ? boost::any(upgradeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("auto_repair") != m.end() && !m["auto_repair"].empty()) {
      autoRepair = make_shared<bool>(boost::any_cast<bool>(m["auto_repair"]));
    }
    if (m.find("upgrade_config") != m.end() && !m["upgrade_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["upgrade_config"].type()) {
        CreateClusterNodePoolRequestManagementUpgradeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["upgrade_config"]));
        upgradeConfig = make_shared<CreateClusterNodePoolRequestManagementUpgradeConfig>(model1);
      }
    }
  }


  virtual ~CreateClusterNodePoolRequestManagement() = default;
};
class CreateClusterNodePoolRequest : public Darabonba::Model {
public:
  shared_ptr<CreateClusterNodePoolRequestAutoScaling> autoScaling{};
  shared_ptr<CreateClusterNodePoolRequestKubernetesConfig> kubernetesConfig{};
  shared_ptr<CreateClusterNodePoolRequestNodepoolInfo> nodepoolInfo{};
  shared_ptr<CreateClusterNodePoolRequestScalingGroup> scalingGroup{};
  shared_ptr<CreateClusterNodePoolRequestTeeConfig> teeConfig{};
  shared_ptr<CreateClusterNodePoolRequestManagement> management{};
  shared_ptr<long> count{};

  CreateClusterNodePoolRequest() {}

  explicit CreateClusterNodePoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoScaling) {
      res["auto_scaling"] = autoScaling ? boost::any(autoScaling->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (kubernetesConfig) {
      res["kubernetes_config"] = kubernetesConfig ? boost::any(kubernetesConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodepoolInfo) {
      res["nodepool_info"] = nodepoolInfo ? boost::any(nodepoolInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scalingGroup) {
      res["scaling_group"] = scalingGroup ? boost::any(scalingGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (teeConfig) {
      res["tee_config"] = teeConfig ? boost::any(teeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (management) {
      res["management"] = management ? boost::any(management->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (count) {
      res["count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("auto_scaling") != m.end() && !m["auto_scaling"].empty()) {
      if (typeid(map<string, boost::any>) == m["auto_scaling"].type()) {
        CreateClusterNodePoolRequestAutoScaling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["auto_scaling"]));
        autoScaling = make_shared<CreateClusterNodePoolRequestAutoScaling>(model1);
      }
    }
    if (m.find("kubernetes_config") != m.end() && !m["kubernetes_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["kubernetes_config"].type()) {
        CreateClusterNodePoolRequestKubernetesConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["kubernetes_config"]));
        kubernetesConfig = make_shared<CreateClusterNodePoolRequestKubernetesConfig>(model1);
      }
    }
    if (m.find("nodepool_info") != m.end() && !m["nodepool_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["nodepool_info"].type()) {
        CreateClusterNodePoolRequestNodepoolInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nodepool_info"]));
        nodepoolInfo = make_shared<CreateClusterNodePoolRequestNodepoolInfo>(model1);
      }
    }
    if (m.find("scaling_group") != m.end() && !m["scaling_group"].empty()) {
      if (typeid(map<string, boost::any>) == m["scaling_group"].type()) {
        CreateClusterNodePoolRequestScalingGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scaling_group"]));
        scalingGroup = make_shared<CreateClusterNodePoolRequestScalingGroup>(model1);
      }
    }
    if (m.find("tee_config") != m.end() && !m["tee_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["tee_config"].type()) {
        CreateClusterNodePoolRequestTeeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tee_config"]));
        teeConfig = make_shared<CreateClusterNodePoolRequestTeeConfig>(model1);
      }
    }
    if (m.find("management") != m.end() && !m["management"].empty()) {
      if (typeid(map<string, boost::any>) == m["management"].type()) {
        CreateClusterNodePoolRequestManagement model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["management"]));
        management = make_shared<CreateClusterNodePoolRequestManagement>(model1);
      }
    }
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
  }


  virtual ~CreateClusterNodePoolRequest() = default;
};
class CreateClusterNodePoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nodepoolId{};

  CreateClusterNodePoolResponseBody() {}

  explicit CreateClusterNodePoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodepoolId) {
      res["nodepool_id"] = boost::any(*nodepoolId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nodepool_id") != m.end() && !m["nodepool_id"].empty()) {
      nodepoolId = make_shared<string>(boost::any_cast<string>(m["nodepool_id"]));
    }
  }


  virtual ~CreateClusterNodePoolResponseBody() = default;
};
class CreateClusterNodePoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateClusterNodePoolResponseBody> body{};

  CreateClusterNodePoolResponse() {}

  explicit CreateClusterNodePoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateClusterNodePoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClusterNodePoolResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClusterNodePoolResponse() = default;
};
class DescribeClusterUserKubeconfigRequest : public Darabonba::Model {
public:
  shared_ptr<bool> privateIpAddress{};
  shared_ptr<long> temporaryDurationMinutes{};

  DescribeClusterUserKubeconfigRequest() {}

  explicit DescribeClusterUserKubeconfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (temporaryDurationMinutes) {
      res["TemporaryDurationMinutes"] = boost::any(*temporaryDurationMinutes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<bool>(boost::any_cast<bool>(m["PrivateIpAddress"]));
    }
    if (m.find("TemporaryDurationMinutes") != m.end() && !m["TemporaryDurationMinutes"].empty()) {
      temporaryDurationMinutes = make_shared<long>(boost::any_cast<long>(m["TemporaryDurationMinutes"]));
    }
  }


  virtual ~DescribeClusterUserKubeconfigRequest() = default;
};
class DescribeClusterUserKubeconfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> expiration{};

  DescribeClusterUserKubeconfigResponseBody() {}

  explicit DescribeClusterUserKubeconfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (expiration) {
      res["expiration"] = boost::any(*expiration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("config") != m.end() && !m["config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["config"]));
    }
    if (m.find("expiration") != m.end() && !m["expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["expiration"]));
    }
  }


  virtual ~DescribeClusterUserKubeconfigResponseBody() = default;
};
class DescribeClusterUserKubeconfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClusterUserKubeconfigResponseBody> body{};

  DescribeClusterUserKubeconfigResponse() {}

  explicit DescribeClusterUserKubeconfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterUserKubeconfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterUserKubeconfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterUserKubeconfigResponse() = default;
};
class ScaleClusterRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};

  ScaleClusterRequestTags() {}

  explicit ScaleClusterRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
  }


  virtual ~ScaleClusterRequestTags() = default;
};
class ScaleClusterRequestTaints : public Darabonba::Model {
public:
  shared_ptr<string> effect{};
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ScaleClusterRequestTaints() {}

  explicit ScaleClusterRequestTaints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effect) {
      res["effect"] = boost::any(*effect);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effect") != m.end() && !m["effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["effect"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ScaleClusterRequestTaints() = default;
};
class ScaleClusterRequestWorkerDataDisks : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> encrypted{};
  shared_ptr<string> size{};

  ScaleClusterRequestWorkerDataDisks() {}

  explicit ScaleClusterRequestWorkerDataDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (encrypted) {
      res["encrypted"] = boost::any(*encrypted);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("encrypted") != m.end() && !m["encrypted"].empty()) {
      encrypted = make_shared<string>(boost::any_cast<string>(m["encrypted"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["size"]));
    }
  }


  virtual ~ScaleClusterRequestWorkerDataDisks() = default;
};
class ScaleClusterRequest : public Darabonba::Model {
public:
  shared_ptr<bool> cloudMonitorFlags{};
  shared_ptr<long> count{};
  shared_ptr<string> cpuPolicy{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<string> keyPair{};
  shared_ptr<string> loginPassword{};
  shared_ptr<vector<ScaleClusterRequestTags>> tags{};
  shared_ptr<vector<ScaleClusterRequestTaints>> taints{};
  shared_ptr<vector<string>> vswitchIds{};
  shared_ptr<bool> workerAutoRenew{};
  shared_ptr<long> workerAutoRenewPeriod{};
  shared_ptr<bool> workerDataDisk{};
  shared_ptr<vector<ScaleClusterRequestWorkerDataDisks>> workerDataDisks{};
  shared_ptr<string> workerInstanceChargeType{};
  shared_ptr<vector<string>> workerInstanceTypes{};
  shared_ptr<long> workerPeriod{};
  shared_ptr<string> workerPeriodUnit{};
  shared_ptr<string> workerSystemDiskCategory{};
  shared_ptr<long> workerSystemDiskSize{};

  ScaleClusterRequest() {}

  explicit ScaleClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudMonitorFlags) {
      res["cloud_monitor_flags"] = boost::any(*cloudMonitorFlags);
    }
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (cpuPolicy) {
      res["cpu_policy"] = boost::any(*cpuPolicy);
    }
    if (disableRollback) {
      res["disable_rollback"] = boost::any(*disableRollback);
    }
    if (keyPair) {
      res["key_pair"] = boost::any(*keyPair);
    }
    if (loginPassword) {
      res["login_password"] = boost::any(*loginPassword);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (taints) {
      vector<boost::any> temp1;
      for(auto item1:*taints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taints"] = boost::any(temp1);
    }
    if (vswitchIds) {
      res["vswitch_ids"] = boost::any(*vswitchIds);
    }
    if (workerAutoRenew) {
      res["worker_auto_renew"] = boost::any(*workerAutoRenew);
    }
    if (workerAutoRenewPeriod) {
      res["worker_auto_renew_period"] = boost::any(*workerAutoRenewPeriod);
    }
    if (workerDataDisk) {
      res["worker_data_disk"] = boost::any(*workerDataDisk);
    }
    if (workerDataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*workerDataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["worker_data_disks"] = boost::any(temp1);
    }
    if (workerInstanceChargeType) {
      res["worker_instance_charge_type"] = boost::any(*workerInstanceChargeType);
    }
    if (workerInstanceTypes) {
      res["worker_instance_types"] = boost::any(*workerInstanceTypes);
    }
    if (workerPeriod) {
      res["worker_period"] = boost::any(*workerPeriod);
    }
    if (workerPeriodUnit) {
      res["worker_period_unit"] = boost::any(*workerPeriodUnit);
    }
    if (workerSystemDiskCategory) {
      res["worker_system_disk_category"] = boost::any(*workerSystemDiskCategory);
    }
    if (workerSystemDiskSize) {
      res["worker_system_disk_size"] = boost::any(*workerSystemDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cloud_monitor_flags") != m.end() && !m["cloud_monitor_flags"].empty()) {
      cloudMonitorFlags = make_shared<bool>(boost::any_cast<bool>(m["cloud_monitor_flags"]));
    }
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("cpu_policy") != m.end() && !m["cpu_policy"].empty()) {
      cpuPolicy = make_shared<string>(boost::any_cast<string>(m["cpu_policy"]));
    }
    if (m.find("disable_rollback") != m.end() && !m["disable_rollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["disable_rollback"]));
    }
    if (m.find("key_pair") != m.end() && !m["key_pair"].empty()) {
      keyPair = make_shared<string>(boost::any_cast<string>(m["key_pair"]));
    }
    if (m.find("login_password") != m.end() && !m["login_password"].empty()) {
      loginPassword = make_shared<string>(boost::any_cast<string>(m["login_password"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ScaleClusterRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScaleClusterRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ScaleClusterRequestTags>>(expect1);
      }
    }
    if (m.find("taints") != m.end() && !m["taints"].empty()) {
      if (typeid(vector<boost::any>) == m["taints"].type()) {
        vector<ScaleClusterRequestTaints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScaleClusterRequestTaints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taints = make_shared<vector<ScaleClusterRequestTaints>>(expect1);
      }
    }
    if (m.find("vswitch_ids") != m.end() && !m["vswitch_ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vswitch_ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vswitch_ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vswitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("worker_auto_renew") != m.end() && !m["worker_auto_renew"].empty()) {
      workerAutoRenew = make_shared<bool>(boost::any_cast<bool>(m["worker_auto_renew"]));
    }
    if (m.find("worker_auto_renew_period") != m.end() && !m["worker_auto_renew_period"].empty()) {
      workerAutoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["worker_auto_renew_period"]));
    }
    if (m.find("worker_data_disk") != m.end() && !m["worker_data_disk"].empty()) {
      workerDataDisk = make_shared<bool>(boost::any_cast<bool>(m["worker_data_disk"]));
    }
    if (m.find("worker_data_disks") != m.end() && !m["worker_data_disks"].empty()) {
      if (typeid(vector<boost::any>) == m["worker_data_disks"].type()) {
        vector<ScaleClusterRequestWorkerDataDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["worker_data_disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScaleClusterRequestWorkerDataDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workerDataDisks = make_shared<vector<ScaleClusterRequestWorkerDataDisks>>(expect1);
      }
    }
    if (m.find("worker_instance_charge_type") != m.end() && !m["worker_instance_charge_type"].empty()) {
      workerInstanceChargeType = make_shared<string>(boost::any_cast<string>(m["worker_instance_charge_type"]));
    }
    if (m.find("worker_instance_types") != m.end() && !m["worker_instance_types"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["worker_instance_types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["worker_instance_types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      workerInstanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("worker_period") != m.end() && !m["worker_period"].empty()) {
      workerPeriod = make_shared<long>(boost::any_cast<long>(m["worker_period"]));
    }
    if (m.find("worker_period_unit") != m.end() && !m["worker_period_unit"].empty()) {
      workerPeriodUnit = make_shared<string>(boost::any_cast<string>(m["worker_period_unit"]));
    }
    if (m.find("worker_system_disk_category") != m.end() && !m["worker_system_disk_category"].empty()) {
      workerSystemDiskCategory = make_shared<string>(boost::any_cast<string>(m["worker_system_disk_category"]));
    }
    if (m.find("worker_system_disk_size") != m.end() && !m["worker_system_disk_size"].empty()) {
      workerSystemDiskSize = make_shared<long>(boost::any_cast<long>(m["worker_system_disk_size"]));
    }
  }


  virtual ~ScaleClusterRequest() = default;
};
class ScaleClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  ScaleClusterResponseBody() {}

  explicit ScaleClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (requestId) {
      res["request_id"] = boost::any(*requestId);
    }
    if (taskId) {
      res["task_id"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
    if (m.find("task_id") != m.end() && !m["task_id"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["task_id"]));
    }
  }


  virtual ~ScaleClusterResponseBody() = default;
};
class ScaleClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ScaleClusterResponseBody> body{};

  ScaleClusterResponse() {}

  explicit ScaleClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScaleClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScaleClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ScaleClusterResponse() = default;
};
class DescribeClusterAddonUpgradeStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<map<string, boost::any>> body{};

  DescribeClusterAddonUpgradeStatusResponse() {}

  explicit DescribeClusterAddonUpgradeStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DescribeClusterAddonUpgradeStatusResponse() = default;
};
class DescribeAddonsRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> clusterType{};

  DescribeAddonsRequest() {}

  explicit DescribeAddonsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (clusterType) {
      res["cluster_type"] = boost::any(*clusterType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("cluster_type") != m.end() && !m["cluster_type"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["cluster_type"]));
    }
  }


  virtual ~DescribeAddonsRequest() = default;
};
class DescribeAddonsResponseBodyComponentGroupsItems : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DescribeAddonsResponseBodyComponentGroupsItems() {}

  explicit DescribeAddonsResponseBodyComponentGroupsItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~DescribeAddonsResponseBodyComponentGroupsItems() = default;
};
class DescribeAddonsResponseBodyComponentGroups : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<vector<DescribeAddonsResponseBodyComponentGroupsItems>> items{};

  DescribeAddonsResponseBodyComponentGroups() {}

  explicit DescribeAddonsResponseBodyComponentGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["group_name"] = boost::any(*groupName);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("group_name") != m.end() && !m["group_name"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["group_name"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<DescribeAddonsResponseBodyComponentGroupsItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAddonsResponseBodyComponentGroupsItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeAddonsResponseBodyComponentGroupsItems>>(expect1);
      }
    }
  }


  virtual ~DescribeAddonsResponseBodyComponentGroups() = default;
};
class StandardComponentsValue : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};
  shared_ptr<string> description{};
  shared_ptr<string> required{};
  shared_ptr<bool> disabled{};

  StandardComponentsValue() {}

  explicit StandardComponentsValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (required) {
      res["required"] = boost::any(*required);
    }
    if (disabled) {
      res["disabled"] = boost::any(*disabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("required") != m.end() && !m["required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["required"]));
    }
    if (m.find("disabled") != m.end() && !m["disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["disabled"]));
    }
  }


  virtual ~StandardComponentsValue() = default;
};
class DescribeAddonsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAddonsResponseBodyComponentGroups>> componentGroups{};
  shared_ptr<map<string, StandardComponentsValue>> standardComponents{};

  DescribeAddonsResponseBody() {}

  explicit DescribeAddonsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentGroups) {
      vector<boost::any> temp1;
      for(auto item1:*componentGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComponentGroups"] = boost::any(temp1);
    }
    if (standardComponents) {
      map<string, boost::any> temp1;
      for(auto item1:*standardComponents){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["StandardComponents"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentGroups") != m.end() && !m["ComponentGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["ComponentGroups"].type()) {
        vector<DescribeAddonsResponseBodyComponentGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComponentGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAddonsResponseBodyComponentGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        componentGroups = make_shared<vector<DescribeAddonsResponseBodyComponentGroups>>(expect1);
      }
    }
    if (m.find("StandardComponents") != m.end() && !m["StandardComponents"].empty()) {
      if (typeid(map<string, boost::any>) == m["StandardComponents"].type()) {
        map<string, StandardComponentsValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["StandardComponents"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            StandardComponentsValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        standardComponents = make_shared<map<string, StandardComponentsValue>>(expect1);
      }
    }
  }


  virtual ~DescribeAddonsResponseBody() = default;
};
class DescribeAddonsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAddonsResponseBody> body{};

  DescribeAddonsResponse() {}

  explicit DescribeAddonsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAddonsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAddonsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAddonsResponse() = default;
};
class CreateAutoscalingConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> coolDownDuration{};
  shared_ptr<string> unneededDuration{};
  shared_ptr<string> utilizationThreshold{};
  shared_ptr<string> gpuUtilizationThreshold{};
  shared_ptr<string> scanInterval{};

  CreateAutoscalingConfigRequest() {}

  explicit CreateAutoscalingConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coolDownDuration) {
      res["cool_down_duration"] = boost::any(*coolDownDuration);
    }
    if (unneededDuration) {
      res["unneeded_duration"] = boost::any(*unneededDuration);
    }
    if (utilizationThreshold) {
      res["utilization_threshold"] = boost::any(*utilizationThreshold);
    }
    if (gpuUtilizationThreshold) {
      res["gpu_utilization_threshold"] = boost::any(*gpuUtilizationThreshold);
    }
    if (scanInterval) {
      res["scan_interval"] = boost::any(*scanInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cool_down_duration") != m.end() && !m["cool_down_duration"].empty()) {
      coolDownDuration = make_shared<string>(boost::any_cast<string>(m["cool_down_duration"]));
    }
    if (m.find("unneeded_duration") != m.end() && !m["unneeded_duration"].empty()) {
      unneededDuration = make_shared<string>(boost::any_cast<string>(m["unneeded_duration"]));
    }
    if (m.find("utilization_threshold") != m.end() && !m["utilization_threshold"].empty()) {
      utilizationThreshold = make_shared<string>(boost::any_cast<string>(m["utilization_threshold"]));
    }
    if (m.find("gpu_utilization_threshold") != m.end() && !m["gpu_utilization_threshold"].empty()) {
      gpuUtilizationThreshold = make_shared<string>(boost::any_cast<string>(m["gpu_utilization_threshold"]));
    }
    if (m.find("scan_interval") != m.end() && !m["scan_interval"].empty()) {
      scanInterval = make_shared<string>(boost::any_cast<string>(m["scan_interval"]));
    }
  }


  virtual ~CreateAutoscalingConfigRequest() = default;
};
class CreateAutoscalingConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  CreateAutoscalingConfigResponse() {}

  explicit CreateAutoscalingConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateAutoscalingConfigResponse() = default;
};
class CreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> clusterSpec{};
  shared_ptr<string> kubernetesVersion{};
  shared_ptr<Runtime> runtime{};
  shared_ptr<string> vpcid{};
  shared_ptr<vector<string>> podVswitchIds{};
  shared_ptr<string> containerCidr{};
  shared_ptr<string> serviceCidr{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<bool> isEnterpriseSecurityGroup{};
  shared_ptr<bool> snatEntry{};
  shared_ptr<bool> endpointPublicAccess{};
  shared_ptr<bool> sshFlags{};
  shared_ptr<string> timezone{};
  shared_ptr<string> nodeCidrMask{};
  shared_ptr<string> userCa{};
  shared_ptr<string> userData{};
  shared_ptr<string> clusterDomain{};
  shared_ptr<string> nodeNameMode{};
  shared_ptr<string> customSan{};
  shared_ptr<string> encryptionProviderKey{};
  shared_ptr<string> serviceAccountIssuer{};
  shared_ptr<string> apiAudiences{};
  shared_ptr<string> imageId{};
  shared_ptr<vector<string>> rdsInstances{};
  shared_ptr<vector<Tag>> tags{};
  shared_ptr<vector<Addon>> addons{};
  shared_ptr<vector<Taint>> taints{};
  shared_ptr<bool> cloudMonitorFlags{};
  shared_ptr<string> platform{};
  shared_ptr<string> osType{};
  shared_ptr<string> cpuPolicy{};
  shared_ptr<string> proxyMode{};
  shared_ptr<string> nodePortRange{};
  shared_ptr<string> keyPair{};
  shared_ptr<string> loginPassword{};
  shared_ptr<long> masterCount{};
  shared_ptr<vector<string>> masterVswitchIds{};
  shared_ptr<vector<string>> masterInstanceTypes{};
  shared_ptr<string> masterSystemDiskCategory{};
  shared_ptr<long> masterSystemDiskSize{};
  shared_ptr<string> masterSystemDiskSnapshotPolicyId{};
  shared_ptr<string> masterInstanceChargeType{};
  shared_ptr<string> masterPeriodUnit{};
  shared_ptr<long> masterPeriod{};
  shared_ptr<bool> masterAutoRenew{};
  shared_ptr<long> masterAutoRenewPeriod{};
  shared_ptr<long> numOfNodes{};
  shared_ptr<vector<string>> vswitchIds{};
  shared_ptr<vector<string>> workerVswitchIds{};
  shared_ptr<vector<string>> workerInstanceTypes{};
  shared_ptr<string> workerSystemDiskCategory{};
  shared_ptr<long> workerSystemDiskSize{};
  shared_ptr<string> workerSystemDiskSnapshotPolicyId{};
  shared_ptr<vector<DataDisk>> workerDataDisks{};
  shared_ptr<string> workerInstanceChargeType{};
  shared_ptr<string> workerPeriodUnit{};
  shared_ptr<long> workerPeriod{};
  shared_ptr<bool> workerAutoRenew{};
  shared_ptr<long> workerAutoRenewPeriod{};
  shared_ptr<vector<string>> instances{};
  shared_ptr<bool> formatDisk{};
  shared_ptr<bool> keepInstanceName{};
  shared_ptr<vector<string>> serviceDiscoveryTypes{};
  shared_ptr<bool> natGateway{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> profile{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<bool> disableRollback{};
  shared_ptr<long> timeoutMins{};

  CreateClusterRequest() {}

  explicit CreateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
    }
    if (clusterType) {
      res["cluster_type"] = boost::any(*clusterType);
    }
    if (clusterSpec) {
      res["cluster_spec"] = boost::any(*clusterSpec);
    }
    if (kubernetesVersion) {
      res["kubernetes_version"] = boost::any(*kubernetesVersion);
    }
    if (runtime) {
      res["runtime"] = runtime ? boost::any(runtime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vpcid) {
      res["vpcid"] = boost::any(*vpcid);
    }
    if (podVswitchIds) {
      res["pod_vswitch_ids"] = boost::any(*podVswitchIds);
    }
    if (containerCidr) {
      res["container_cidr"] = boost::any(*containerCidr);
    }
    if (serviceCidr) {
      res["service_cidr"] = boost::any(*serviceCidr);
    }
    if (securityGroupId) {
      res["security_group_id"] = boost::any(*securityGroupId);
    }
    if (isEnterpriseSecurityGroup) {
      res["is_enterprise_security_group"] = boost::any(*isEnterpriseSecurityGroup);
    }
    if (snatEntry) {
      res["snat_entry"] = boost::any(*snatEntry);
    }
    if (endpointPublicAccess) {
      res["endpoint_public_access"] = boost::any(*endpointPublicAccess);
    }
    if (sshFlags) {
      res["ssh_flags"] = boost::any(*sshFlags);
    }
    if (timezone) {
      res["timezone"] = boost::any(*timezone);
    }
    if (nodeCidrMask) {
      res["node_cidr_mask"] = boost::any(*nodeCidrMask);
    }
    if (userCa) {
      res["user_ca"] = boost::any(*userCa);
    }
    if (userData) {
      res["user_data"] = boost::any(*userData);
    }
    if (clusterDomain) {
      res["cluster_domain"] = boost::any(*clusterDomain);
    }
    if (nodeNameMode) {
      res["node_name_mode"] = boost::any(*nodeNameMode);
    }
    if (customSan) {
      res["custom_san"] = boost::any(*customSan);
    }
    if (encryptionProviderKey) {
      res["encryption_provider_key"] = boost::any(*encryptionProviderKey);
    }
    if (serviceAccountIssuer) {
      res["service_account_issuer"] = boost::any(*serviceAccountIssuer);
    }
    if (apiAudiences) {
      res["api_audiences"] = boost::any(*apiAudiences);
    }
    if (imageId) {
      res["image_id"] = boost::any(*imageId);
    }
    if (rdsInstances) {
      res["rds_instances"] = boost::any(*rdsInstances);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (addons) {
      vector<boost::any> temp1;
      for(auto item1:*addons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["addons"] = boost::any(temp1);
    }
    if (taints) {
      vector<boost::any> temp1;
      for(auto item1:*taints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taints"] = boost::any(temp1);
    }
    if (cloudMonitorFlags) {
      res["cloud_monitor_flags"] = boost::any(*cloudMonitorFlags);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    if (osType) {
      res["os_type"] = boost::any(*osType);
    }
    if (cpuPolicy) {
      res["cpu_policy"] = boost::any(*cpuPolicy);
    }
    if (proxyMode) {
      res["proxy_mode"] = boost::any(*proxyMode);
    }
    if (nodePortRange) {
      res["node_port_range"] = boost::any(*nodePortRange);
    }
    if (keyPair) {
      res["key_pair"] = boost::any(*keyPair);
    }
    if (loginPassword) {
      res["login_password"] = boost::any(*loginPassword);
    }
    if (masterCount) {
      res["master_count"] = boost::any(*masterCount);
    }
    if (masterVswitchIds) {
      res["master_vswitch_ids"] = boost::any(*masterVswitchIds);
    }
    if (masterInstanceTypes) {
      res["master_instance_types"] = boost::any(*masterInstanceTypes);
    }
    if (masterSystemDiskCategory) {
      res["master_system_disk_category"] = boost::any(*masterSystemDiskCategory);
    }
    if (masterSystemDiskSize) {
      res["master_system_disk_size"] = boost::any(*masterSystemDiskSize);
    }
    if (masterSystemDiskSnapshotPolicyId) {
      res["master_system_disk_snapshot_policy_id"] = boost::any(*masterSystemDiskSnapshotPolicyId);
    }
    if (masterInstanceChargeType) {
      res["master_instance_charge_type"] = boost::any(*masterInstanceChargeType);
    }
    if (masterPeriodUnit) {
      res["master_period_unit"] = boost::any(*masterPeriodUnit);
    }
    if (masterPeriod) {
      res["master_period"] = boost::any(*masterPeriod);
    }
    if (masterAutoRenew) {
      res["master_auto_renew"] = boost::any(*masterAutoRenew);
    }
    if (masterAutoRenewPeriod) {
      res["master_auto_renew_period"] = boost::any(*masterAutoRenewPeriod);
    }
    if (numOfNodes) {
      res["num_of_nodes"] = boost::any(*numOfNodes);
    }
    if (vswitchIds) {
      res["vswitch_ids"] = boost::any(*vswitchIds);
    }
    if (workerVswitchIds) {
      res["worker_vswitch_ids"] = boost::any(*workerVswitchIds);
    }
    if (workerInstanceTypes) {
      res["worker_instance_types"] = boost::any(*workerInstanceTypes);
    }
    if (workerSystemDiskCategory) {
      res["worker_system_disk_category"] = boost::any(*workerSystemDiskCategory);
    }
    if (workerSystemDiskSize) {
      res["worker_system_disk_size"] = boost::any(*workerSystemDiskSize);
    }
    if (workerSystemDiskSnapshotPolicyId) {
      res["worker_system_disk_snapshot_policy_id"] = boost::any(*workerSystemDiskSnapshotPolicyId);
    }
    if (workerDataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*workerDataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["worker_data_disks"] = boost::any(temp1);
    }
    if (workerInstanceChargeType) {
      res["worker_instance_charge_type"] = boost::any(*workerInstanceChargeType);
    }
    if (workerPeriodUnit) {
      res["worker_period_unit"] = boost::any(*workerPeriodUnit);
    }
    if (workerPeriod) {
      res["worker_period"] = boost::any(*workerPeriod);
    }
    if (workerAutoRenew) {
      res["worker_auto_renew"] = boost::any(*workerAutoRenew);
    }
    if (workerAutoRenewPeriod) {
      res["worker_auto_renew_period"] = boost::any(*workerAutoRenewPeriod);
    }
    if (instances) {
      res["instances"] = boost::any(*instances);
    }
    if (formatDisk) {
      res["format_disk"] = boost::any(*formatDisk);
    }
    if (keepInstanceName) {
      res["keep_instance_name"] = boost::any(*keepInstanceName);
    }
    if (serviceDiscoveryTypes) {
      res["service_discovery_types"] = boost::any(*serviceDiscoveryTypes);
    }
    if (natGateway) {
      res["nat_gateway"] = boost::any(*natGateway);
    }
    if (zoneId) {
      res["zone_id"] = boost::any(*zoneId);
    }
    if (profile) {
      res["profile"] = boost::any(*profile);
    }
    if (deletionProtection) {
      res["deletion_protection"] = boost::any(*deletionProtection);
    }
    if (disableRollback) {
      res["disable_rollback"] = boost::any(*disableRollback);
    }
    if (timeoutMins) {
      res["timeout_mins"] = boost::any(*timeoutMins);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
    if (m.find("cluster_type") != m.end() && !m["cluster_type"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["cluster_type"]));
    }
    if (m.find("cluster_spec") != m.end() && !m["cluster_spec"].empty()) {
      clusterSpec = make_shared<string>(boost::any_cast<string>(m["cluster_spec"]));
    }
    if (m.find("kubernetes_version") != m.end() && !m["kubernetes_version"].empty()) {
      kubernetesVersion = make_shared<string>(boost::any_cast<string>(m["kubernetes_version"]));
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      if (typeid(map<string, boost::any>) == m["runtime"].type()) {
        Runtime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["runtime"]));
        runtime = make_shared<Runtime>(model1);
      }
    }
    if (m.find("vpcid") != m.end() && !m["vpcid"].empty()) {
      vpcid = make_shared<string>(boost::any_cast<string>(m["vpcid"]));
    }
    if (m.find("pod_vswitch_ids") != m.end() && !m["pod_vswitch_ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["pod_vswitch_ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["pod_vswitch_ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      podVswitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("container_cidr") != m.end() && !m["container_cidr"].empty()) {
      containerCidr = make_shared<string>(boost::any_cast<string>(m["container_cidr"]));
    }
    if (m.find("service_cidr") != m.end() && !m["service_cidr"].empty()) {
      serviceCidr = make_shared<string>(boost::any_cast<string>(m["service_cidr"]));
    }
    if (m.find("security_group_id") != m.end() && !m["security_group_id"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["security_group_id"]));
    }
    if (m.find("is_enterprise_security_group") != m.end() && !m["is_enterprise_security_group"].empty()) {
      isEnterpriseSecurityGroup = make_shared<bool>(boost::any_cast<bool>(m["is_enterprise_security_group"]));
    }
    if (m.find("snat_entry") != m.end() && !m["snat_entry"].empty()) {
      snatEntry = make_shared<bool>(boost::any_cast<bool>(m["snat_entry"]));
    }
    if (m.find("endpoint_public_access") != m.end() && !m["endpoint_public_access"].empty()) {
      endpointPublicAccess = make_shared<bool>(boost::any_cast<bool>(m["endpoint_public_access"]));
    }
    if (m.find("ssh_flags") != m.end() && !m["ssh_flags"].empty()) {
      sshFlags = make_shared<bool>(boost::any_cast<bool>(m["ssh_flags"]));
    }
    if (m.find("timezone") != m.end() && !m["timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["timezone"]));
    }
    if (m.find("node_cidr_mask") != m.end() && !m["node_cidr_mask"].empty()) {
      nodeCidrMask = make_shared<string>(boost::any_cast<string>(m["node_cidr_mask"]));
    }
    if (m.find("user_ca") != m.end() && !m["user_ca"].empty()) {
      userCa = make_shared<string>(boost::any_cast<string>(m["user_ca"]));
    }
    if (m.find("user_data") != m.end() && !m["user_data"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["user_data"]));
    }
    if (m.find("cluster_domain") != m.end() && !m["cluster_domain"].empty()) {
      clusterDomain = make_shared<string>(boost::any_cast<string>(m["cluster_domain"]));
    }
    if (m.find("node_name_mode") != m.end() && !m["node_name_mode"].empty()) {
      nodeNameMode = make_shared<string>(boost::any_cast<string>(m["node_name_mode"]));
    }
    if (m.find("custom_san") != m.end() && !m["custom_san"].empty()) {
      customSan = make_shared<string>(boost::any_cast<string>(m["custom_san"]));
    }
    if (m.find("encryption_provider_key") != m.end() && !m["encryption_provider_key"].empty()) {
      encryptionProviderKey = make_shared<string>(boost::any_cast<string>(m["encryption_provider_key"]));
    }
    if (m.find("service_account_issuer") != m.end() && !m["service_account_issuer"].empty()) {
      serviceAccountIssuer = make_shared<string>(boost::any_cast<string>(m["service_account_issuer"]));
    }
    if (m.find("api_audiences") != m.end() && !m["api_audiences"].empty()) {
      apiAudiences = make_shared<string>(boost::any_cast<string>(m["api_audiences"]));
    }
    if (m.find("image_id") != m.end() && !m["image_id"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["image_id"]));
    }
    if (m.find("rds_instances") != m.end() && !m["rds_instances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["rds_instances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["rds_instances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdsInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("addons") != m.end() && !m["addons"].empty()) {
      if (typeid(vector<boost::any>) == m["addons"].type()) {
        vector<Addon> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["addons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Addon model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addons = make_shared<vector<Addon>>(expect1);
      }
    }
    if (m.find("taints") != m.end() && !m["taints"].empty()) {
      if (typeid(vector<boost::any>) == m["taints"].type()) {
        vector<Taint> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Taint model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taints = make_shared<vector<Taint>>(expect1);
      }
    }
    if (m.find("cloud_monitor_flags") != m.end() && !m["cloud_monitor_flags"].empty()) {
      cloudMonitorFlags = make_shared<bool>(boost::any_cast<bool>(m["cloud_monitor_flags"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
    if (m.find("os_type") != m.end() && !m["os_type"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["os_type"]));
    }
    if (m.find("cpu_policy") != m.end() && !m["cpu_policy"].empty()) {
      cpuPolicy = make_shared<string>(boost::any_cast<string>(m["cpu_policy"]));
    }
    if (m.find("proxy_mode") != m.end() && !m["proxy_mode"].empty()) {
      proxyMode = make_shared<string>(boost::any_cast<string>(m["proxy_mode"]));
    }
    if (m.find("node_port_range") != m.end() && !m["node_port_range"].empty()) {
      nodePortRange = make_shared<string>(boost::any_cast<string>(m["node_port_range"]));
    }
    if (m.find("key_pair") != m.end() && !m["key_pair"].empty()) {
      keyPair = make_shared<string>(boost::any_cast<string>(m["key_pair"]));
    }
    if (m.find("login_password") != m.end() && !m["login_password"].empty()) {
      loginPassword = make_shared<string>(boost::any_cast<string>(m["login_password"]));
    }
    if (m.find("master_count") != m.end() && !m["master_count"].empty()) {
      masterCount = make_shared<long>(boost::any_cast<long>(m["master_count"]));
    }
    if (m.find("master_vswitch_ids") != m.end() && !m["master_vswitch_ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["master_vswitch_ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["master_vswitch_ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      masterVswitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("master_instance_types") != m.end() && !m["master_instance_types"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["master_instance_types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["master_instance_types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      masterInstanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("master_system_disk_category") != m.end() && !m["master_system_disk_category"].empty()) {
      masterSystemDiskCategory = make_shared<string>(boost::any_cast<string>(m["master_system_disk_category"]));
    }
    if (m.find("master_system_disk_size") != m.end() && !m["master_system_disk_size"].empty()) {
      masterSystemDiskSize = make_shared<long>(boost::any_cast<long>(m["master_system_disk_size"]));
    }
    if (m.find("master_system_disk_snapshot_policy_id") != m.end() && !m["master_system_disk_snapshot_policy_id"].empty()) {
      masterSystemDiskSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["master_system_disk_snapshot_policy_id"]));
    }
    if (m.find("master_instance_charge_type") != m.end() && !m["master_instance_charge_type"].empty()) {
      masterInstanceChargeType = make_shared<string>(boost::any_cast<string>(m["master_instance_charge_type"]));
    }
    if (m.find("master_period_unit") != m.end() && !m["master_period_unit"].empty()) {
      masterPeriodUnit = make_shared<string>(boost::any_cast<string>(m["master_period_unit"]));
    }
    if (m.find("master_period") != m.end() && !m["master_period"].empty()) {
      masterPeriod = make_shared<long>(boost::any_cast<long>(m["master_period"]));
    }
    if (m.find("master_auto_renew") != m.end() && !m["master_auto_renew"].empty()) {
      masterAutoRenew = make_shared<bool>(boost::any_cast<bool>(m["master_auto_renew"]));
    }
    if (m.find("master_auto_renew_period") != m.end() && !m["master_auto_renew_period"].empty()) {
      masterAutoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["master_auto_renew_period"]));
    }
    if (m.find("num_of_nodes") != m.end() && !m["num_of_nodes"].empty()) {
      numOfNodes = make_shared<long>(boost::any_cast<long>(m["num_of_nodes"]));
    }
    if (m.find("vswitch_ids") != m.end() && !m["vswitch_ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vswitch_ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vswitch_ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vswitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("worker_vswitch_ids") != m.end() && !m["worker_vswitch_ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["worker_vswitch_ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["worker_vswitch_ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      workerVswitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("worker_instance_types") != m.end() && !m["worker_instance_types"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["worker_instance_types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["worker_instance_types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      workerInstanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("worker_system_disk_category") != m.end() && !m["worker_system_disk_category"].empty()) {
      workerSystemDiskCategory = make_shared<string>(boost::any_cast<string>(m["worker_system_disk_category"]));
    }
    if (m.find("worker_system_disk_size") != m.end() && !m["worker_system_disk_size"].empty()) {
      workerSystemDiskSize = make_shared<long>(boost::any_cast<long>(m["worker_system_disk_size"]));
    }
    if (m.find("worker_system_disk_snapshot_policy_id") != m.end() && !m["worker_system_disk_snapshot_policy_id"].empty()) {
      workerSystemDiskSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["worker_system_disk_snapshot_policy_id"]));
    }
    if (m.find("worker_data_disks") != m.end() && !m["worker_data_disks"].empty()) {
      if (typeid(vector<boost::any>) == m["worker_data_disks"].type()) {
        vector<DataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["worker_data_disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workerDataDisks = make_shared<vector<DataDisk>>(expect1);
      }
    }
    if (m.find("worker_instance_charge_type") != m.end() && !m["worker_instance_charge_type"].empty()) {
      workerInstanceChargeType = make_shared<string>(boost::any_cast<string>(m["worker_instance_charge_type"]));
    }
    if (m.find("worker_period_unit") != m.end() && !m["worker_period_unit"].empty()) {
      workerPeriodUnit = make_shared<string>(boost::any_cast<string>(m["worker_period_unit"]));
    }
    if (m.find("worker_period") != m.end() && !m["worker_period"].empty()) {
      workerPeriod = make_shared<long>(boost::any_cast<long>(m["worker_period"]));
    }
    if (m.find("worker_auto_renew") != m.end() && !m["worker_auto_renew"].empty()) {
      workerAutoRenew = make_shared<bool>(boost::any_cast<bool>(m["worker_auto_renew"]));
    }
    if (m.find("worker_auto_renew_period") != m.end() && !m["worker_auto_renew_period"].empty()) {
      workerAutoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["worker_auto_renew_period"]));
    }
    if (m.find("instances") != m.end() && !m["instances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["instances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["instances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("format_disk") != m.end() && !m["format_disk"].empty()) {
      formatDisk = make_shared<bool>(boost::any_cast<bool>(m["format_disk"]));
    }
    if (m.find("keep_instance_name") != m.end() && !m["keep_instance_name"].empty()) {
      keepInstanceName = make_shared<bool>(boost::any_cast<bool>(m["keep_instance_name"]));
    }
    if (m.find("service_discovery_types") != m.end() && !m["service_discovery_types"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["service_discovery_types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["service_discovery_types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serviceDiscoveryTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("nat_gateway") != m.end() && !m["nat_gateway"].empty()) {
      natGateway = make_shared<bool>(boost::any_cast<bool>(m["nat_gateway"]));
    }
    if (m.find("zone_id") != m.end() && !m["zone_id"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zone_id"]));
    }
    if (m.find("profile") != m.end() && !m["profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["profile"]));
    }
    if (m.find("deletion_protection") != m.end() && !m["deletion_protection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["deletion_protection"]));
    }
    if (m.find("disable_rollback") != m.end() && !m["disable_rollback"].empty()) {
      disableRollback = make_shared<bool>(boost::any_cast<bool>(m["disable_rollback"]));
    }
    if (m.find("timeout_mins") != m.end() && !m["timeout_mins"].empty()) {
      timeoutMins = make_shared<long>(boost::any_cast<long>(m["timeout_mins"]));
    }
  }


  virtual ~CreateClusterRequest() = default;
};
class CreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateClusterResponseBody() {}

  explicit CreateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (requestId) {
      res["request_id"] = boost::any(*requestId);
    }
    if (taskId) {
      res["task_id"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
    if (m.find("task_id") != m.end() && !m["task_id"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["task_id"]));
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
class UpgradeClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> componentName{};
  shared_ptr<string> nextVersion{};
  shared_ptr<string> version{};

  UpgradeClusterRequest() {}

  explicit UpgradeClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentName) {
      res["component_name"] = boost::any(*componentName);
    }
    if (nextVersion) {
      res["next_version"] = boost::any(*nextVersion);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("component_name") != m.end() && !m["component_name"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["component_name"]));
    }
    if (m.find("next_version") != m.end() && !m["next_version"].empty()) {
      nextVersion = make_shared<string>(boost::any_cast<string>(m["next_version"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~UpgradeClusterRequest() = default;
};
class UpgradeClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  UpgradeClusterResponse() {}

  explicit UpgradeClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeClusterResponse() = default;
};
class CancelWorkflowRequest : public Darabonba::Model {
public:
  shared_ptr<string> action{};

  CancelWorkflowRequest() {}

  explicit CancelWorkflowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["action"] = boost::any(*action);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
  }


  virtual ~CancelWorkflowRequest() = default;
};
class CancelWorkflowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  CancelWorkflowResponse() {}

  explicit CancelWorkflowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelWorkflowResponse() = default;
};
class AttachInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instances{};
  shared_ptr<string> keyPair{};
  shared_ptr<string> password{};
  shared_ptr<bool> formatDisk{};
  shared_ptr<bool> keepInstanceName{};
  shared_ptr<bool> isEdgeWorker{};
  shared_ptr<string> nodepoolId{};
  shared_ptr<string> imageId{};
  shared_ptr<string> cpuPolicy{};
  shared_ptr<string> userData{};
  shared_ptr<vector<string>> rdsInstances{};
  shared_ptr<Runtime> runtime{};
  shared_ptr<vector<Tag>> tags{};

  AttachInstancesRequest() {}

  explicit AttachInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      res["instances"] = boost::any(*instances);
    }
    if (keyPair) {
      res["key_pair"] = boost::any(*keyPair);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (formatDisk) {
      res["format_disk"] = boost::any(*formatDisk);
    }
    if (keepInstanceName) {
      res["keep_instance_name"] = boost::any(*keepInstanceName);
    }
    if (isEdgeWorker) {
      res["is_edge_worker"] = boost::any(*isEdgeWorker);
    }
    if (nodepoolId) {
      res["nodepool_id"] = boost::any(*nodepoolId);
    }
    if (imageId) {
      res["image_id"] = boost::any(*imageId);
    }
    if (cpuPolicy) {
      res["cpu_policy"] = boost::any(*cpuPolicy);
    }
    if (userData) {
      res["user_data"] = boost::any(*userData);
    }
    if (rdsInstances) {
      res["rds_instances"] = boost::any(*rdsInstances);
    }
    if (runtime) {
      res["runtime"] = runtime ? boost::any(runtime->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("instances") != m.end() && !m["instances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["instances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["instances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("key_pair") != m.end() && !m["key_pair"].empty()) {
      keyPair = make_shared<string>(boost::any_cast<string>(m["key_pair"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("format_disk") != m.end() && !m["format_disk"].empty()) {
      formatDisk = make_shared<bool>(boost::any_cast<bool>(m["format_disk"]));
    }
    if (m.find("keep_instance_name") != m.end() && !m["keep_instance_name"].empty()) {
      keepInstanceName = make_shared<bool>(boost::any_cast<bool>(m["keep_instance_name"]));
    }
    if (m.find("is_edge_worker") != m.end() && !m["is_edge_worker"].empty()) {
      isEdgeWorker = make_shared<bool>(boost::any_cast<bool>(m["is_edge_worker"]));
    }
    if (m.find("nodepool_id") != m.end() && !m["nodepool_id"].empty()) {
      nodepoolId = make_shared<string>(boost::any_cast<string>(m["nodepool_id"]));
    }
    if (m.find("image_id") != m.end() && !m["image_id"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["image_id"]));
    }
    if (m.find("cpu_policy") != m.end() && !m["cpu_policy"].empty()) {
      cpuPolicy = make_shared<string>(boost::any_cast<string>(m["cpu_policy"]));
    }
    if (m.find("user_data") != m.end() && !m["user_data"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["user_data"]));
    }
    if (m.find("rds_instances") != m.end() && !m["rds_instances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["rds_instances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["rds_instances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdsInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      if (typeid(map<string, boost::any>) == m["runtime"].type()) {
        Runtime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["runtime"]));
        runtime = make_shared<Runtime>(model1);
      }
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
  }


  virtual ~AttachInstancesRequest() = default;
};
class AttachInstancesResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};

  AttachInstancesResponseBodyList() {}

  explicit AttachInstancesResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~AttachInstancesResponseBodyList() = default;
};
class AttachInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<AttachInstancesResponseBodyList>> list{};
  shared_ptr<string> taskId{};

  AttachInstancesResponseBody() {}

  explicit AttachInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (taskId) {
      res["task_id"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<AttachInstancesResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachInstancesResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<AttachInstancesResponseBodyList>>(expect1);
      }
    }
    if (m.find("task_id") != m.end() && !m["task_id"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["task_id"]));
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
class DescribeTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateType{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  DescribeTemplatesRequest() {}

  explicit DescribeTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateType) {
      res["template_type"] = boost::any(*templateType);
    }
    if (pageNum) {
      res["page_num"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("template_type") != m.end() && !m["template_type"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["template_type"]));
    }
    if (m.find("page_num") != m.end() && !m["page_num"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["page_num"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
  }


  virtual ~DescribeTemplatesRequest() = default;
};
class DescribeTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> acl{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> description{};
  shared_ptr<string> tags{};
  shared_ptr<string> template_{};
  shared_ptr<string> templateType{};
  shared_ptr<string> created{};
  shared_ptr<string> updated{};
  shared_ptr<string> templateWithHistId{};

  DescribeTemplatesResponseBodyTemplates() {}

  explicit DescribeTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acl) {
      res["acl"] = boost::any(*acl);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    if (templateType) {
      res["template_type"] = boost::any(*templateType);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    if (templateWithHistId) {
      res["template_with_hist_id"] = boost::any(*templateWithHistId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("acl") != m.end() && !m["acl"].empty()) {
      acl = make_shared<string>(boost::any_cast<string>(m["acl"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
    if (m.find("template_type") != m.end() && !m["template_type"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["template_type"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["created"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["updated"]));
    }
    if (m.find("template_with_hist_id") != m.end() && !m["template_with_hist_id"].empty()) {
      templateWithHistId = make_shared<string>(boost::any_cast<string>(m["template_with_hist_id"]));
    }
  }


  virtual ~DescribeTemplatesResponseBodyTemplates() = default;
};
class DescribeTemplatesResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeTemplatesResponseBodyPageInfo() {}

  explicit DescribeTemplatesResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["page_number"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["total_count"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page_number") != m.end() && !m["page_number"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["page_number"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("total_count") != m.end() && !m["total_count"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["total_count"]));
    }
  }


  virtual ~DescribeTemplatesResponseBodyPageInfo() = default;
};
class DescribeTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTemplatesResponseBodyTemplates>> templates{};
  shared_ptr<DescribeTemplatesResponseBodyPageInfo> pageInfo{};

  DescribeTemplatesResponseBody() {}

  explicit DescribeTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["templates"] = boost::any(temp1);
    }
    if (pageInfo) {
      res["page_info"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("templates") != m.end() && !m["templates"].empty()) {
      if (typeid(vector<boost::any>) == m["templates"].type()) {
        vector<DescribeTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<DescribeTemplatesResponseBodyTemplates>>(expect1);
      }
    }
    if (m.find("page_info") != m.end() && !m["page_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["page_info"].type()) {
        DescribeTemplatesResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["page_info"]));
        pageInfo = make_shared<DescribeTemplatesResponseBodyPageInfo>(model1);
      }
    }
  }


  virtual ~DescribeTemplatesResponseBody() = default;
};
class DescribeTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTemplatesResponseBody> body{};

  DescribeTemplatesResponse() {}

  explicit DescribeTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTemplatesResponse() = default;
};
class PauseClusterUpgradeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  PauseClusterUpgradeResponse() {}

  explicit PauseClusterUpgradeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PauseClusterUpgradeResponse() = default;
};
class DeleteTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  DeleteTemplateResponse() {}

  explicit DeleteTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteTemplateResponse() = default;
};
class DescribeTemplateAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateType{};

  DescribeTemplateAttributeRequest() {}

  explicit DescribeTemplateAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateType) {
      res["template_type"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("template_type") != m.end() && !m["template_type"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["template_type"]));
    }
  }


  virtual ~DescribeTemplateAttributeRequest() = default;
};
class DescribeTemplateAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> acl{};
  shared_ptr<string> name{};
  shared_ptr<string> template_{};
  shared_ptr<string> templateType{};
  shared_ptr<string> description{};
  shared_ptr<string> tags{};
  shared_ptr<string> templateWithHistId{};
  shared_ptr<string> created{};
  shared_ptr<string> updated{};

  DescribeTemplateAttributeResponseBody() {}

  explicit DescribeTemplateAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (acl) {
      res["acl"] = boost::any(*acl);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    if (templateType) {
      res["template_type"] = boost::any(*templateType);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
    }
    if (templateWithHistId) {
      res["template_with_hist_id"] = boost::any(*templateWithHistId);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("acl") != m.end() && !m["acl"].empty()) {
      acl = make_shared<string>(boost::any_cast<string>(m["acl"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
    if (m.find("template_type") != m.end() && !m["template_type"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["template_type"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
    if (m.find("template_with_hist_id") != m.end() && !m["template_with_hist_id"].empty()) {
      templateWithHistId = make_shared<string>(boost::any_cast<string>(m["template_with_hist_id"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["created"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["updated"]));
    }
  }


  virtual ~DescribeTemplateAttributeResponseBody() = default;
};
class DescribeTemplateAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<vector<DescribeTemplateAttributeResponseBody>> body{};

  DescribeTemplateAttributeResponse() {}

  explicit DescribeTemplateAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<DescribeTemplateAttributeResponseBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTemplateAttributeResponseBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<DescribeTemplateAttributeResponseBody>>(expect1);
      }
    }
  }


  virtual ~DescribeTemplateAttributeResponse() = default;
};
class CreateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> template_{};
  shared_ptr<string> tags{};
  shared_ptr<string> description{};
  shared_ptr<string> templateType{};

  CreateTemplateRequest() {}

  explicit CreateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (templateType) {
      res["template_type"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("template_type") != m.end() && !m["template_type"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["template_type"]));
    }
  }


  virtual ~CreateTemplateRequest() = default;
};
class CreateTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};

  CreateTemplateResponseBody() {}

  explicit CreateTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["template_id"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("template_id") != m.end() && !m["template_id"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["template_id"]));
    }
  }


  virtual ~CreateTemplateResponseBody() = default;
};
class CreateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTemplateResponseBody> body{};

  CreateTemplateResponse() {}

  explicit CreateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTemplateResponse() = default;
};
class DescribeClusterNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceIds{};
  shared_ptr<string> nodepoolId{};
  shared_ptr<string> state{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> pageNumber{};

  DescribeClusterNodesRequest() {}

  explicit DescribeClusterNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["instanceIds"] = boost::any(*instanceIds);
    }
    if (nodepoolId) {
      res["nodepool_id"] = boost::any(*nodepoolId);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceIds") != m.end() && !m["instanceIds"].empty()) {
      instanceIds = make_shared<string>(boost::any_cast<string>(m["instanceIds"]));
    }
    if (m.find("nodepool_id") != m.end() && !m["nodepool_id"].empty()) {
      nodepoolId = make_shared<string>(boost::any_cast<string>(m["nodepool_id"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["pageSize"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["pageNumber"]));
    }
  }


  virtual ~DescribeClusterNodesRequest() = default;
};
class DescribeClusterNodesResponseBodyNodes : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> hostName{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceRole{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> instanceTypeFamily{};
  shared_ptr<vector<string>> ipAddress{};
  shared_ptr<bool> isAliyunNode{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> nodeStatus{};
  shared_ptr<string> nodepoolId{};
  shared_ptr<string> source{};
  shared_ptr<string> state{};
  shared_ptr<string> spotStrategy{};

  DescribeClusterNodesResponseBodyNodes() {}

  explicit DescribeClusterNodesResponseBodyNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["creation_time"] = boost::any(*creationTime);
    }
    if (errorMessage) {
      res["error_message"] = boost::any(*errorMessage);
    }
    if (expiredTime) {
      res["expired_time"] = boost::any(*expiredTime);
    }
    if (hostName) {
      res["host_name"] = boost::any(*hostName);
    }
    if (imageId) {
      res["image_id"] = boost::any(*imageId);
    }
    if (instanceChargeType) {
      res["instance_charge_type"] = boost::any(*instanceChargeType);
    }
    if (instanceId) {
      res["instance_id"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["instance_name"] = boost::any(*instanceName);
    }
    if (instanceRole) {
      res["instance_role"] = boost::any(*instanceRole);
    }
    if (instanceStatus) {
      res["instance_status"] = boost::any(*instanceStatus);
    }
    if (instanceType) {
      res["instance_type"] = boost::any(*instanceType);
    }
    if (instanceTypeFamily) {
      res["instance_type_family"] = boost::any(*instanceTypeFamily);
    }
    if (ipAddress) {
      res["ip_address"] = boost::any(*ipAddress);
    }
    if (isAliyunNode) {
      res["is_aliyun_node"] = boost::any(*isAliyunNode);
    }
    if (nodeName) {
      res["node_name"] = boost::any(*nodeName);
    }
    if (nodeStatus) {
      res["node_status"] = boost::any(*nodeStatus);
    }
    if (nodepoolId) {
      res["nodepool_id"] = boost::any(*nodepoolId);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (spotStrategy) {
      res["spot_strategy"] = boost::any(*spotStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creation_time") != m.end() && !m["creation_time"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["creation_time"]));
    }
    if (m.find("error_message") != m.end() && !m["error_message"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["error_message"]));
    }
    if (m.find("expired_time") != m.end() && !m["expired_time"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["expired_time"]));
    }
    if (m.find("host_name") != m.end() && !m["host_name"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["host_name"]));
    }
    if (m.find("image_id") != m.end() && !m["image_id"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["image_id"]));
    }
    if (m.find("instance_charge_type") != m.end() && !m["instance_charge_type"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["instance_charge_type"]));
    }
    if (m.find("instance_id") != m.end() && !m["instance_id"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instance_id"]));
    }
    if (m.find("instance_name") != m.end() && !m["instance_name"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["instance_name"]));
    }
    if (m.find("instance_role") != m.end() && !m["instance_role"].empty()) {
      instanceRole = make_shared<string>(boost::any_cast<string>(m["instance_role"]));
    }
    if (m.find("instance_status") != m.end() && !m["instance_status"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["instance_status"]));
    }
    if (m.find("instance_type") != m.end() && !m["instance_type"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instance_type"]));
    }
    if (m.find("instance_type_family") != m.end() && !m["instance_type_family"].empty()) {
      instanceTypeFamily = make_shared<string>(boost::any_cast<string>(m["instance_type_family"]));
    }
    if (m.find("ip_address") != m.end() && !m["ip_address"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ip_address"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ip_address"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipAddress = make_shared<vector<string>>(toVec1);
    }
    if (m.find("is_aliyun_node") != m.end() && !m["is_aliyun_node"].empty()) {
      isAliyunNode = make_shared<bool>(boost::any_cast<bool>(m["is_aliyun_node"]));
    }
    if (m.find("node_name") != m.end() && !m["node_name"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["node_name"]));
    }
    if (m.find("node_status") != m.end() && !m["node_status"].empty()) {
      nodeStatus = make_shared<string>(boost::any_cast<string>(m["node_status"]));
    }
    if (m.find("nodepool_id") != m.end() && !m["nodepool_id"].empty()) {
      nodepoolId = make_shared<string>(boost::any_cast<string>(m["nodepool_id"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("spot_strategy") != m.end() && !m["spot_strategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["spot_strategy"]));
    }
  }


  virtual ~DescribeClusterNodesResponseBodyNodes() = default;
};
class DescribeClusterNodesResponseBodyPage : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeClusterNodesResponseBodyPage() {}

  explicit DescribeClusterNodesResponseBodyPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["page_number"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["total_count"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page_number") != m.end() && !m["page_number"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["page_number"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("total_count") != m.end() && !m["total_count"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["total_count"]));
    }
  }


  virtual ~DescribeClusterNodesResponseBodyPage() = default;
};
class DescribeClusterNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterNodesResponseBodyNodes>> nodes{};
  shared_ptr<DescribeClusterNodesResponseBodyPage> page{};

  DescribeClusterNodesResponseBody() {}

  explicit DescribeClusterNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["nodes"] = boost::any(temp1);
    }
    if (page) {
      res["page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nodes") != m.end() && !m["nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["nodes"].type()) {
        vector<DescribeClusterNodesResponseBodyNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterNodesResponseBodyNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeClusterNodesResponseBodyNodes>>(expect1);
      }
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      if (typeid(map<string, boost::any>) == m["page"].type()) {
        DescribeClusterNodesResponseBodyPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["page"]));
        page = make_shared<DescribeClusterNodesResponseBodyPage>(model1);
      }
    }
  }


  virtual ~DescribeClusterNodesResponseBody() = default;
};
class DescribeClusterNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClusterNodesResponseBody> body{};

  DescribeClusterNodesResponse() {}

  explicit DescribeClusterNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterNodesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterNodesResponse() = default;
};
class DeleteClusterRequest : public Darabonba::Model {
public:
  shared_ptr<bool> retainAllResources{};
  shared_ptr<bool> keepSlb{};
  shared_ptr<vector<string>> retainResources{};

  DeleteClusterRequest() {}

  explicit DeleteClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (retainAllResources) {
      res["retain_all_resources"] = boost::any(*retainAllResources);
    }
    if (keepSlb) {
      res["keep_slb"] = boost::any(*keepSlb);
    }
    if (retainResources) {
      res["retain_resources"] = boost::any(*retainResources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("retain_all_resources") != m.end() && !m["retain_all_resources"].empty()) {
      retainAllResources = make_shared<bool>(boost::any_cast<bool>(m["retain_all_resources"]));
    }
    if (m.find("keep_slb") != m.end() && !m["keep_slb"].empty()) {
      keepSlb = make_shared<bool>(boost::any_cast<bool>(m["keep_slb"]));
    }
    if (m.find("retain_resources") != m.end() && !m["retain_resources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["retain_resources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["retain_resources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      retainResources = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteClusterRequest() = default;
};
class DeleteClusterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> retainAllResources{};
  shared_ptr<bool> keepSlb{};
  shared_ptr<string> retainResourcesShrink{};

  DeleteClusterShrinkRequest() {}

  explicit DeleteClusterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (retainAllResources) {
      res["retain_all_resources"] = boost::any(*retainAllResources);
    }
    if (keepSlb) {
      res["keep_slb"] = boost::any(*keepSlb);
    }
    if (retainResourcesShrink) {
      res["retain_resources"] = boost::any(*retainResourcesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("retain_all_resources") != m.end() && !m["retain_all_resources"].empty()) {
      retainAllResources = make_shared<bool>(boost::any_cast<bool>(m["retain_all_resources"]));
    }
    if (m.find("keep_slb") != m.end() && !m["keep_slb"].empty()) {
      keepSlb = make_shared<bool>(boost::any_cast<bool>(m["keep_slb"]));
    }
    if (m.find("retain_resources") != m.end() && !m["retain_resources"].empty()) {
      retainResourcesShrink = make_shared<string>(boost::any_cast<string>(m["retain_resources"]));
    }
  }


  virtual ~DeleteClusterShrinkRequest() = default;
};
class DeleteClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  DeleteClusterResponse() {}

  explicit DeleteClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteClusterResponse() = default;
};
class CancelComponentUpgradeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  CancelComponentUpgradeResponse() {}

  explicit CancelComponentUpgradeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelComponentUpgradeResponse() = default;
};
class MigrateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  MigrateClusterResponse() {}

  explicit MigrateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MigrateClusterResponse() = default;
};
class DescribeClusterAddonsVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<map<string, boost::any>> body{};

  DescribeClusterAddonsVersionResponse() {}

  explicit DescribeClusterAddonsVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DescribeClusterAddonsVersionResponse() = default;
};
class DescribeExternalAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> privateIpAddress{};

  DescribeExternalAgentRequest() {}

  explicit DescribeExternalAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
  }


  virtual ~DescribeExternalAgentRequest() = default;
};
class DescribeExternalAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> config{};

  DescribeExternalAgentResponseBody() {}

  explicit DescribeExternalAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["config"] = boost::any(*config);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("config") != m.end() && !m["config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["config"]));
    }
  }


  virtual ~DescribeExternalAgentResponseBody() = default;
};
class DescribeExternalAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeExternalAgentResponseBody> body{};

  DescribeExternalAgentResponse() {}

  explicit DescribeExternalAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExternalAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExternalAgentResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExternalAgentResponse() = default;
};
class UnInstallClusterAddonsRequestAddons : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  UnInstallClusterAddonsRequestAddons() {}

  explicit UnInstallClusterAddonsRequestAddons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UnInstallClusterAddonsRequestAddons() = default;
};
class UnInstallClusterAddonsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UnInstallClusterAddonsRequestAddons>> addons{};

  UnInstallClusterAddonsRequest() {}

  explicit UnInstallClusterAddonsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addons) {
      vector<boost::any> temp1;
      for(auto item1:*addons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["addons"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("addons") != m.end() && !m["addons"].empty()) {
      if (typeid(vector<boost::any>) == m["addons"].type()) {
        vector<UnInstallClusterAddonsRequestAddons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["addons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UnInstallClusterAddonsRequestAddons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addons = make_shared<vector<UnInstallClusterAddonsRequestAddons>>(expect1);
      }
    }
  }


  virtual ~UnInstallClusterAddonsRequest() = default;
};
class UnInstallClusterAddonsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  UnInstallClusterAddonsResponse() {}

  explicit UnInstallClusterAddonsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnInstallClusterAddonsResponse() = default;
};
class ResumeComponentUpgradeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  ResumeComponentUpgradeResponse() {}

  explicit ResumeComponentUpgradeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResumeComponentUpgradeResponse() = default;
};
class DescribeClustersV1Request : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> clusterType{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeClustersV1Request() {}

  explicit DescribeClustersV1Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (clusterType) {
      res["cluster_type"] = boost::any(*clusterType);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["page_number"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("cluster_type") != m.end() && !m["cluster_type"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["cluster_type"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("page_number") != m.end() && !m["page_number"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["page_number"]));
    }
  }


  virtual ~DescribeClustersV1Request() = default;
};
class DescribeClustersV1ResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> created{};
  shared_ptr<string> initVersion{};
  shared_ptr<string> currentVersion{};
  shared_ptr<string> nextVersion{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<string> dockerVersion{};
  shared_ptr<string> externalLoadbalancerId{};
  shared_ptr<string> masterUrl{};
  shared_ptr<string> metaData{};
  shared_ptr<string> name{};
  shared_ptr<string> networkMode{};
  shared_ptr<bool> privateZone{};
  shared_ptr<string> profile{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<long> size{};
  shared_ptr<string> state{};
  shared_ptr<string> subnetCidr{};
  shared_ptr<vector<Tag>> tags{};
  shared_ptr<string> updated{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> workerRamRoleName{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> clusterSpec{};
  shared_ptr<MaintenanceWindow> maintenanceWindow{};

  DescribeClustersV1ResponseBodyClusters() {}

  explicit DescribeClustersV1ResponseBodyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (clusterType) {
      res["cluster_type"] = boost::any(*clusterType);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (initVersion) {
      res["init_version"] = boost::any(*initVersion);
    }
    if (currentVersion) {
      res["current_version"] = boost::any(*currentVersion);
    }
    if (nextVersion) {
      res["next_version"] = boost::any(*nextVersion);
    }
    if (deletionProtection) {
      res["deletion_protection"] = boost::any(*deletionProtection);
    }
    if (dockerVersion) {
      res["docker_version"] = boost::any(*dockerVersion);
    }
    if (externalLoadbalancerId) {
      res["external_loadbalancer_id"] = boost::any(*externalLoadbalancerId);
    }
    if (masterUrl) {
      res["master_url"] = boost::any(*masterUrl);
    }
    if (metaData) {
      res["meta_data"] = boost::any(*metaData);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (networkMode) {
      res["network_mode"] = boost::any(*networkMode);
    }
    if (privateZone) {
      res["private_zone"] = boost::any(*privateZone);
    }
    if (profile) {
      res["profile"] = boost::any(*profile);
    }
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["resource_group_id"] = boost::any(*resourceGroupId);
    }
    if (securityGroupId) {
      res["security_group_id"] = boost::any(*securityGroupId);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (subnetCidr) {
      res["subnet_cidr"] = boost::any(*subnetCidr);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    if (vpcId) {
      res["vpc_id"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["vswitch_id"] = boost::any(*vswitchId);
    }
    if (workerRamRoleName) {
      res["worker_ram_role_name"] = boost::any(*workerRamRoleName);
    }
    if (zoneId) {
      res["zone_id"] = boost::any(*zoneId);
    }
    if (clusterSpec) {
      res["cluster_spec"] = boost::any(*clusterSpec);
    }
    if (maintenanceWindow) {
      res["maintenance_window"] = maintenanceWindow ? boost::any(maintenanceWindow->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("cluster_type") != m.end() && !m["cluster_type"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["cluster_type"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["created"]));
    }
    if (m.find("init_version") != m.end() && !m["init_version"].empty()) {
      initVersion = make_shared<string>(boost::any_cast<string>(m["init_version"]));
    }
    if (m.find("current_version") != m.end() && !m["current_version"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["current_version"]));
    }
    if (m.find("next_version") != m.end() && !m["next_version"].empty()) {
      nextVersion = make_shared<string>(boost::any_cast<string>(m["next_version"]));
    }
    if (m.find("deletion_protection") != m.end() && !m["deletion_protection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["deletion_protection"]));
    }
    if (m.find("docker_version") != m.end() && !m["docker_version"].empty()) {
      dockerVersion = make_shared<string>(boost::any_cast<string>(m["docker_version"]));
    }
    if (m.find("external_loadbalancer_id") != m.end() && !m["external_loadbalancer_id"].empty()) {
      externalLoadbalancerId = make_shared<string>(boost::any_cast<string>(m["external_loadbalancer_id"]));
    }
    if (m.find("master_url") != m.end() && !m["master_url"].empty()) {
      masterUrl = make_shared<string>(boost::any_cast<string>(m["master_url"]));
    }
    if (m.find("meta_data") != m.end() && !m["meta_data"].empty()) {
      metaData = make_shared<string>(boost::any_cast<string>(m["meta_data"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("network_mode") != m.end() && !m["network_mode"].empty()) {
      networkMode = make_shared<string>(boost::any_cast<string>(m["network_mode"]));
    }
    if (m.find("private_zone") != m.end() && !m["private_zone"].empty()) {
      privateZone = make_shared<bool>(boost::any_cast<bool>(m["private_zone"]));
    }
    if (m.find("profile") != m.end() && !m["profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["profile"]));
    }
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
    if (m.find("resource_group_id") != m.end() && !m["resource_group_id"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resource_group_id"]));
    }
    if (m.find("security_group_id") != m.end() && !m["security_group_id"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["security_group_id"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("subnet_cidr") != m.end() && !m["subnet_cidr"].empty()) {
      subnetCidr = make_shared<string>(boost::any_cast<string>(m["subnet_cidr"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["updated"]));
    }
    if (m.find("vpc_id") != m.end() && !m["vpc_id"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpc_id"]));
    }
    if (m.find("vswitch_id") != m.end() && !m["vswitch_id"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["vswitch_id"]));
    }
    if (m.find("worker_ram_role_name") != m.end() && !m["worker_ram_role_name"].empty()) {
      workerRamRoleName = make_shared<string>(boost::any_cast<string>(m["worker_ram_role_name"]));
    }
    if (m.find("zone_id") != m.end() && !m["zone_id"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["zone_id"]));
    }
    if (m.find("cluster_spec") != m.end() && !m["cluster_spec"].empty()) {
      clusterSpec = make_shared<string>(boost::any_cast<string>(m["cluster_spec"]));
    }
    if (m.find("maintenance_window") != m.end() && !m["maintenance_window"].empty()) {
      if (typeid(map<string, boost::any>) == m["maintenance_window"].type()) {
        MaintenanceWindow model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["maintenance_window"]));
        maintenanceWindow = make_shared<MaintenanceWindow>(model1);
      }
    }
  }


  virtual ~DescribeClustersV1ResponseBodyClusters() = default;
};
class DescribeClustersV1ResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeClustersV1ResponseBodyPageInfo() {}

  explicit DescribeClustersV1ResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["page_number"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["total_count"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page_number") != m.end() && !m["page_number"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["page_number"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("total_count") != m.end() && !m["total_count"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["total_count"]));
    }
  }


  virtual ~DescribeClustersV1ResponseBodyPageInfo() = default;
};
class DescribeClustersV1ResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClustersV1ResponseBodyClusters>> clusters{};
  shared_ptr<DescribeClustersV1ResponseBodyPageInfo> pageInfo{};

  DescribeClustersV1ResponseBody() {}

  explicit DescribeClustersV1ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      vector<boost::any> temp1;
      for(auto item1:*clusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["clusters"] = boost::any(temp1);
    }
    if (pageInfo) {
      res["page_info"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusters") != m.end() && !m["clusters"].empty()) {
      if (typeid(vector<boost::any>) == m["clusters"].type()) {
        vector<DescribeClustersV1ResponseBodyClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["clusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClustersV1ResponseBodyClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusters = make_shared<vector<DescribeClustersV1ResponseBodyClusters>>(expect1);
      }
    }
    if (m.find("page_info") != m.end() && !m["page_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["page_info"].type()) {
        DescribeClustersV1ResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["page_info"]));
        pageInfo = make_shared<DescribeClustersV1ResponseBodyPageInfo>(model1);
      }
    }
  }


  virtual ~DescribeClustersV1ResponseBody() = default;
};
class DescribeClustersV1Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClustersV1ResponseBody> body{};

  DescribeClustersV1Response() {}

  explicit DescribeClustersV1Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClustersV1ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClustersV1ResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClustersV1Response() = default;
};
class ModifyClusterConfigurationRequestCustomizeConfigConfigs : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ModifyClusterConfigurationRequestCustomizeConfigConfigs() {}

  explicit ModifyClusterConfigurationRequestCustomizeConfigConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyClusterConfigurationRequestCustomizeConfigConfigs() = default;
};
class ModifyClusterConfigurationRequestCustomizeConfig : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<ModifyClusterConfigurationRequestCustomizeConfigConfigs>> configs{};

  ModifyClusterConfigurationRequestCustomizeConfig() {}

  explicit ModifyClusterConfigurationRequestCustomizeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (configs) {
      vector<boost::any> temp1;
      for(auto item1:*configs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["configs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("configs") != m.end() && !m["configs"].empty()) {
      if (typeid(vector<boost::any>) == m["configs"].type()) {
        vector<ModifyClusterConfigurationRequestCustomizeConfigConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyClusterConfigurationRequestCustomizeConfigConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<ModifyClusterConfigurationRequestCustomizeConfigConfigs>>(expect1);
      }
    }
  }


  virtual ~ModifyClusterConfigurationRequestCustomizeConfig() = default;
};
class ModifyClusterConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyClusterConfigurationRequestCustomizeConfig>> customizeConfig{};

  ModifyClusterConfigurationRequest() {}

  explicit ModifyClusterConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customizeConfig) {
      vector<boost::any> temp1;
      for(auto item1:*customizeConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customize_config"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customize_config") != m.end() && !m["customize_config"].empty()) {
      if (typeid(vector<boost::any>) == m["customize_config"].type()) {
        vector<ModifyClusterConfigurationRequestCustomizeConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customize_config"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyClusterConfigurationRequestCustomizeConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customizeConfig = make_shared<vector<ModifyClusterConfigurationRequestCustomizeConfig>>(expect1);
      }
    }
  }


  virtual ~ModifyClusterConfigurationRequest() = default;
};
class ModifyClusterConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  ModifyClusterConfigurationResponse() {}

  explicit ModifyClusterConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyClusterConfigurationResponse() = default;
};
class DescribeTaskInfoResponseBodyTaskResult : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> status{};

  DescribeTaskInfoResponseBodyTaskResult() {}

  explicit DescribeTaskInfoResponseBodyTaskResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~DescribeTaskInfoResponseBodyTaskResult() = default;
};
class DescribeTaskInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> created{};
  shared_ptr<string> updated{};
  shared_ptr<string> state{};
  shared_ptr<string> taskType{};
  shared_ptr<vector<DescribeTaskInfoResponseBodyTaskResult>> taskResult{};

  DescribeTaskInfoResponseBody() {}

  explicit DescribeTaskInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (taskId) {
      res["task_id"] = boost::any(*taskId);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (taskType) {
      res["task_type"] = boost::any(*taskType);
    }
    if (taskResult) {
      vector<boost::any> temp1;
      for(auto item1:*taskResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["task_result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("task_id") != m.end() && !m["task_id"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["task_id"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["created"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["updated"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("task_type") != m.end() && !m["task_type"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["task_type"]));
    }
    if (m.find("task_result") != m.end() && !m["task_result"].empty()) {
      if (typeid(vector<boost::any>) == m["task_result"].type()) {
        vector<DescribeTaskInfoResponseBodyTaskResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["task_result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTaskInfoResponseBodyTaskResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskResult = make_shared<vector<DescribeTaskInfoResponseBodyTaskResult>>(expect1);
      }
    }
  }


  virtual ~DescribeTaskInfoResponseBody() = default;
};
class DescribeTaskInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTaskInfoResponseBody> body{};

  DescribeTaskInfoResponse() {}

  explicit DescribeTaskInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTaskInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTaskInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTaskInfoResponse() = default;
};
class DescirbeWorkflowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> duration{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> inputDataSize{};
  shared_ptr<string> jobName{};
  shared_ptr<string> jobNamespace{};
  shared_ptr<string> outputDataSize{};
  shared_ptr<string> status{};
  shared_ptr<string> totalBases{};
  shared_ptr<string> totalReads{};
  shared_ptr<string> userInputData{};

  DescirbeWorkflowResponseBody() {}

  explicit DescirbeWorkflowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["create_time"] = boost::any(*createTime);
    }
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (finishTime) {
      res["finish_time"] = boost::any(*finishTime);
    }
    if (inputDataSize) {
      res["input_data_size"] = boost::any(*inputDataSize);
    }
    if (jobName) {
      res["job_name"] = boost::any(*jobName);
    }
    if (jobNamespace) {
      res["job_namespace"] = boost::any(*jobNamespace);
    }
    if (outputDataSize) {
      res["output_data_size"] = boost::any(*outputDataSize);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (totalBases) {
      res["total_bases"] = boost::any(*totalBases);
    }
    if (totalReads) {
      res["total_reads"] = boost::any(*totalReads);
    }
    if (userInputData) {
      res["user_input_data"] = boost::any(*userInputData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("create_time") != m.end() && !m["create_time"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["create_time"]));
    }
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["duration"]));
    }
    if (m.find("finish_time") != m.end() && !m["finish_time"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["finish_time"]));
    }
    if (m.find("input_data_size") != m.end() && !m["input_data_size"].empty()) {
      inputDataSize = make_shared<string>(boost::any_cast<string>(m["input_data_size"]));
    }
    if (m.find("job_name") != m.end() && !m["job_name"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["job_name"]));
    }
    if (m.find("job_namespace") != m.end() && !m["job_namespace"].empty()) {
      jobNamespace = make_shared<string>(boost::any_cast<string>(m["job_namespace"]));
    }
    if (m.find("output_data_size") != m.end() && !m["output_data_size"].empty()) {
      outputDataSize = make_shared<string>(boost::any_cast<string>(m["output_data_size"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("total_bases") != m.end() && !m["total_bases"].empty()) {
      totalBases = make_shared<string>(boost::any_cast<string>(m["total_bases"]));
    }
    if (m.find("total_reads") != m.end() && !m["total_reads"].empty()) {
      totalReads = make_shared<string>(boost::any_cast<string>(m["total_reads"]));
    }
    if (m.find("user_input_data") != m.end() && !m["user_input_data"].empty()) {
      userInputData = make_shared<string>(boost::any_cast<string>(m["user_input_data"]));
    }
  }


  virtual ~DescirbeWorkflowResponseBody() = default;
};
class DescirbeWorkflowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescirbeWorkflowResponseBody> body{};

  DescirbeWorkflowResponse() {}

  explicit DescirbeWorkflowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescirbeWorkflowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescirbeWorkflowResponseBody>(model1);
      }
    }
  }


  virtual ~DescirbeWorkflowResponse() = default;
};
class CancelClusterUpgradeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  CancelClusterUpgradeResponse() {}

  explicit CancelClusterUpgradeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelClusterUpgradeResponse() = default;
};
class RemoveWorkflowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  RemoveWorkflowResponse() {}

  explicit RemoveWorkflowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveWorkflowResponse() = default;
};
class UpdateTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> tags{};
  shared_ptr<string> template_{};
  shared_ptr<string> templateType{};

  UpdateTemplateRequest() {}

  explicit UpdateTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (tags) {
      res["tags"] = boost::any(*tags);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    if (templateType) {
      res["template_type"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
    if (m.find("template_type") != m.end() && !m["template_type"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["template_type"]));
    }
  }


  virtual ~UpdateTemplateRequest() = default;
};
class UpdateTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  UpdateTemplateResponse() {}

  explicit UpdateTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateTemplateResponse() = default;
};
class UpgradeClusterAddonsRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> componentName{};
  shared_ptr<string> nextVersion{};
  shared_ptr<string> version{};

  UpgradeClusterAddonsRequestBody() {}

  explicit UpgradeClusterAddonsRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentName) {
      res["component_name"] = boost::any(*componentName);
    }
    if (nextVersion) {
      res["next_version"] = boost::any(*nextVersion);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("component_name") != m.end() && !m["component_name"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["component_name"]));
    }
    if (m.find("next_version") != m.end() && !m["next_version"].empty()) {
      nextVersion = make_shared<string>(boost::any_cast<string>(m["next_version"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~UpgradeClusterAddonsRequestBody() = default;
};
class UpgradeClusterAddonsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpgradeClusterAddonsRequestBody>> body{};

  UpgradeClusterAddonsRequest() {}

  explicit UpgradeClusterAddonsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<UpgradeClusterAddonsRequestBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpgradeClusterAddonsRequestBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<UpgradeClusterAddonsRequestBody>>(expect1);
      }
    }
  }


  virtual ~UpgradeClusterAddonsRequest() = default;
};
class UpgradeClusterAddonsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  UpgradeClusterAddonsResponse() {}

  explicit UpgradeClusterAddonsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeClusterAddonsResponse() = default;
};
class DescribeClusterNamespacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<vector<string>> body{};

  DescribeClusterNamespacesResponse() {}

  explicit DescribeClusterNamespacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeClusterNamespacesResponse() = default;
};
class DeleteKubernetesTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  DeleteKubernetesTriggerResponse() {}

  explicit DeleteKubernetesTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteKubernetesTriggerResponse() = default;
};
class DescribeUserQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> amkClusterQuota{};
  shared_ptr<long> askClusterQuota{};
  shared_ptr<long> clusterNodepoolQuota{};
  shared_ptr<long> clusterQuota{};
  shared_ptr<long> nodeQuota{};

  DescribeUserQuotaResponseBody() {}

  explicit DescribeUserQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amkClusterQuota) {
      res["amk_cluster_quota"] = boost::any(*amkClusterQuota);
    }
    if (askClusterQuota) {
      res["ask_cluster_quota"] = boost::any(*askClusterQuota);
    }
    if (clusterNodepoolQuota) {
      res["cluster_nodepool_quota"] = boost::any(*clusterNodepoolQuota);
    }
    if (clusterQuota) {
      res["cluster_quota"] = boost::any(*clusterQuota);
    }
    if (nodeQuota) {
      res["node_quota"] = boost::any(*nodeQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("amk_cluster_quota") != m.end() && !m["amk_cluster_quota"].empty()) {
      amkClusterQuota = make_shared<long>(boost::any_cast<long>(m["amk_cluster_quota"]));
    }
    if (m.find("ask_cluster_quota") != m.end() && !m["ask_cluster_quota"].empty()) {
      askClusterQuota = make_shared<long>(boost::any_cast<long>(m["ask_cluster_quota"]));
    }
    if (m.find("cluster_nodepool_quota") != m.end() && !m["cluster_nodepool_quota"].empty()) {
      clusterNodepoolQuota = make_shared<long>(boost::any_cast<long>(m["cluster_nodepool_quota"]));
    }
    if (m.find("cluster_quota") != m.end() && !m["cluster_quota"].empty()) {
      clusterQuota = make_shared<long>(boost::any_cast<long>(m["cluster_quota"]));
    }
    if (m.find("node_quota") != m.end() && !m["node_quota"].empty()) {
      nodeQuota = make_shared<long>(boost::any_cast<long>(m["node_quota"]));
    }
  }


  virtual ~DescribeUserQuotaResponseBody() = default;
};
class DescribeUserQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeUserQuotaResponseBody> body{};

  DescribeUserQuotaResponse() {}

  explicit DescribeUserQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserQuotaResponse() = default;
};
class DeleteClusterNodepoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  DeleteClusterNodepoolResponse() {}

  explicit DeleteClusterNodepoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteClusterNodepoolResponse() = default;
};
class DescribeClusterAddonsUpgradeStatusRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> componentIds{};

  DescribeClusterAddonsUpgradeStatusRequest() {}

  explicit DescribeClusterAddonsUpgradeStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentIds) {
      res["componentIds"] = boost::any(*componentIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentIds") != m.end() && !m["componentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["componentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["componentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      componentIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeClusterAddonsUpgradeStatusRequest() = default;
};
class DescribeClusterAddonsUpgradeStatusShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> componentIdsShrink{};

  DescribeClusterAddonsUpgradeStatusShrinkRequest() {}

  explicit DescribeClusterAddonsUpgradeStatusShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentIdsShrink) {
      res["componentIds"] = boost::any(*componentIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("componentIds") != m.end() && !m["componentIds"].empty()) {
      componentIdsShrink = make_shared<string>(boost::any_cast<string>(m["componentIds"]));
    }
  }


  virtual ~DescribeClusterAddonsUpgradeStatusShrinkRequest() = default;
};
class DescribeClusterAddonsUpgradeStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<map<string, boost::any>> body{};

  DescribeClusterAddonsUpgradeStatusResponse() {}

  explicit DescribeClusterAddonsUpgradeStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DescribeClusterAddonsUpgradeStatusResponse() = default;
};
class DescribeWorkflowsResponseBodyJobs : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> createTime{};

  DescribeWorkflowsResponseBodyJobs() {}

  explicit DescribeWorkflowsResponseBodyJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (jobName) {
      res["job_name"] = boost::any(*jobName);
    }
    if (createTime) {
      res["create_time"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("job_name") != m.end() && !m["job_name"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["job_name"]));
    }
    if (m.find("create_time") != m.end() && !m["create_time"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["create_time"]));
    }
  }


  virtual ~DescribeWorkflowsResponseBodyJobs() = default;
};
class DescribeWorkflowsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeWorkflowsResponseBodyJobs>> jobs{};

  DescribeWorkflowsResponseBody() {}

  explicit DescribeWorkflowsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobs) {
      vector<boost::any> temp1;
      for(auto item1:*jobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["jobs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobs") != m.end() && !m["jobs"].empty()) {
      if (typeid(vector<boost::any>) == m["jobs"].type()) {
        vector<DescribeWorkflowsResponseBodyJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["jobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWorkflowsResponseBodyJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobs = make_shared<vector<DescribeWorkflowsResponseBodyJobs>>(expect1);
      }
    }
  }


  virtual ~DescribeWorkflowsResponseBody() = default;
};
class DescribeWorkflowsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeWorkflowsResponseBody> body{};

  DescribeWorkflowsResponse() {}

  explicit DescribeWorkflowsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWorkflowsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWorkflowsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWorkflowsResponse() = default;
};
class InstallClusterAddonsRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};
  shared_ptr<string> config{};

  InstallClusterAddonsRequestBody() {}

  explicit InstallClusterAddonsRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (config) {
      res["config"] = boost::any(*config);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["config"]));
    }
  }


  virtual ~InstallClusterAddonsRequestBody() = default;
};
class InstallClusterAddonsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<InstallClusterAddonsRequestBody>> body{};

  InstallClusterAddonsRequest() {}

  explicit InstallClusterAddonsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<InstallClusterAddonsRequestBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InstallClusterAddonsRequestBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<InstallClusterAddonsRequestBody>>(expect1);
      }
    }
  }


  virtual ~InstallClusterAddonsRequest() = default;
};
class InstallClusterAddonsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  InstallClusterAddonsResponse() {}

  explicit InstallClusterAddonsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InstallClusterAddonsResponse() = default;
};
class DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling : public Darabonba::Model {
public:
  shared_ptr<long> eipBandwidth{};
  shared_ptr<bool> isBondEip{};
  shared_ptr<string> eipInternetChargeType{};
  shared_ptr<bool> enable{};
  shared_ptr<long> maxInstances{};
  shared_ptr<long> minInstances{};
  shared_ptr<string> type{};

  DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling() {}

  explicit DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eipBandwidth) {
      res["eip_bandwidth"] = boost::any(*eipBandwidth);
    }
    if (isBondEip) {
      res["is_bond_eip"] = boost::any(*isBondEip);
    }
    if (eipInternetChargeType) {
      res["eip_internet_charge_type"] = boost::any(*eipInternetChargeType);
    }
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (maxInstances) {
      res["max_instances"] = boost::any(*maxInstances);
    }
    if (minInstances) {
      res["min_instances"] = boost::any(*minInstances);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("eip_bandwidth") != m.end() && !m["eip_bandwidth"].empty()) {
      eipBandwidth = make_shared<long>(boost::any_cast<long>(m["eip_bandwidth"]));
    }
    if (m.find("is_bond_eip") != m.end() && !m["is_bond_eip"].empty()) {
      isBondEip = make_shared<bool>(boost::any_cast<bool>(m["is_bond_eip"]));
    }
    if (m.find("eip_internet_charge_type") != m.end() && !m["eip_internet_charge_type"].empty()) {
      eipInternetChargeType = make_shared<string>(boost::any_cast<string>(m["eip_internet_charge_type"]));
    }
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("max_instances") != m.end() && !m["max_instances"].empty()) {
      maxInstances = make_shared<long>(boost::any_cast<long>(m["max_instances"]));
    }
    if (m.find("min_instances") != m.end() && !m["min_instances"].empty()) {
      minInstances = make_shared<long>(boost::any_cast<long>(m["min_instances"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling() = default;
};
class DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig : public Darabonba::Model {
public:
  shared_ptr<bool> cmsEnabled{};
  shared_ptr<string> cpuPolicy{};
  shared_ptr<vector<Tag>> labels{};
  shared_ptr<string> runtime{};
  shared_ptr<string> runtimeVersion{};
  shared_ptr<vector<Taint>> taints{};
  shared_ptr<string> userData{};

  DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig() {}

  explicit DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cmsEnabled) {
      res["cms_enabled"] = boost::any(*cmsEnabled);
    }
    if (cpuPolicy) {
      res["cpu_policy"] = boost::any(*cpuPolicy);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["labels"] = boost::any(temp1);
    }
    if (runtime) {
      res["runtime"] = boost::any(*runtime);
    }
    if (runtimeVersion) {
      res["runtime_version"] = boost::any(*runtimeVersion);
    }
    if (taints) {
      vector<boost::any> temp1;
      for(auto item1:*taints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taints"] = boost::any(temp1);
    }
    if (userData) {
      res["user_data"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cms_enabled") != m.end() && !m["cms_enabled"].empty()) {
      cmsEnabled = make_shared<bool>(boost::any_cast<bool>(m["cms_enabled"]));
    }
    if (m.find("cpu_policy") != m.end() && !m["cpu_policy"].empty()) {
      cpuPolicy = make_shared<string>(boost::any_cast<string>(m["cpu_policy"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      if (typeid(vector<boost::any>) == m["labels"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["runtime"]));
    }
    if (m.find("runtime_version") != m.end() && !m["runtime_version"].empty()) {
      runtimeVersion = make_shared<string>(boost::any_cast<string>(m["runtime_version"]));
    }
    if (m.find("taints") != m.end() && !m["taints"].empty()) {
      if (typeid(vector<boost::any>) == m["taints"].type()) {
        vector<Taint> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Taint model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taints = make_shared<vector<Taint>>(expect1);
      }
    }
    if (m.find("user_data") != m.end() && !m["user_data"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["user_data"]));
    }
  }


  virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig() = default;
};
class DescribeClusterNodePoolsResponseBodyNodepoolsNodepoolInfo : public Darabonba::Model {
public:
  shared_ptr<string> created{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> name{};
  shared_ptr<string> nodepoolId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> type{};
  shared_ptr<string> updated{};

  DescribeClusterNodePoolsResponseBodyNodepoolsNodepoolInfo() {}

  explicit DescribeClusterNodePoolsResponseBodyNodepoolsNodepoolInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (isDefault) {
      res["is_default"] = boost::any(*isDefault);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nodepoolId) {
      res["nodepool_id"] = boost::any(*nodepoolId);
    }
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["resource_group_id"] = boost::any(*resourceGroupId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updated) {
      res["updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["created"]));
    }
    if (m.find("is_default") != m.end() && !m["is_default"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["is_default"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nodepool_id") != m.end() && !m["nodepool_id"].empty()) {
      nodepoolId = make_shared<string>(boost::any_cast<string>(m["nodepool_id"]));
    }
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
    if (m.find("resource_group_id") != m.end() && !m["resource_group_id"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resource_group_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated") != m.end() && !m["updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["updated"]));
    }
  }


  virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsNodepoolInfo() = default;
};
class DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<string> priceLimit{};

  DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit() {}

  explicit DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["instance_type"] = boost::any(*instanceType);
    }
    if (priceLimit) {
      res["price_limit"] = boost::any(*priceLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instance_type") != m.end() && !m["instance_type"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instance_type"]));
    }
    if (m.find("price_limit") != m.end() && !m["price_limit"].empty()) {
      priceLimit = make_shared<string>(boost::any_cast<string>(m["price_limit"]));
    }
  }


  virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit() = default;
};
class DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<vector<DataDisk>> dataDisks{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<vector<string>> instanceTypes{};
  shared_ptr<string> multiAzPolicy{};
  shared_ptr<long> onDemandBaseCapacity{};
  shared_ptr<long> onDemandPercentageAboveBaseCapacity{};
  shared_ptr<long> spotInstancePools{};
  shared_ptr<bool> spotInstanceRemedy{};
  shared_ptr<bool> compensateWithOnDemand{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> platform{};
  shared_ptr<string> ramPolicy{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<vector<DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit>> spotPriceLimit{};
  shared_ptr<vector<string>> rdsInstances{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> scalingPolicy{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<vector<Tag>> tags{};
  shared_ptr<vector<string>> vswitchIds{};
  shared_ptr<string> loginPassword{};
  shared_ptr<string> keyPair{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandwidthOut{};

  DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup() {}

  explicit DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["auto_renew"] = boost::any(*autoRenew);
    }
    if (autoRenewPeriod) {
      res["auto_renew_period"] = boost::any(*autoRenewPeriod);
    }
    if (dataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data_disks"] = boost::any(temp1);
    }
    if (imageId) {
      res["image_id"] = boost::any(*imageId);
    }
    if (instanceChargeType) {
      res["instance_charge_type"] = boost::any(*instanceChargeType);
    }
    if (instanceTypes) {
      res["instance_types"] = boost::any(*instanceTypes);
    }
    if (multiAzPolicy) {
      res["multi_az_policy"] = boost::any(*multiAzPolicy);
    }
    if (onDemandBaseCapacity) {
      res["on_demand_base_capacity"] = boost::any(*onDemandBaseCapacity);
    }
    if (onDemandPercentageAboveBaseCapacity) {
      res["on_demand_percentage_above_base_capacity"] = boost::any(*onDemandPercentageAboveBaseCapacity);
    }
    if (spotInstancePools) {
      res["spot_instance_pools"] = boost::any(*spotInstancePools);
    }
    if (spotInstanceRemedy) {
      res["spot_instance_remedy"] = boost::any(*spotInstanceRemedy);
    }
    if (compensateWithOnDemand) {
      res["compensate_with_on_demand"] = boost::any(*compensateWithOnDemand);
    }
    if (period) {
      res["period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["period_unit"] = boost::any(*periodUnit);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    if (ramPolicy) {
      res["ram_policy"] = boost::any(*ramPolicy);
    }
    if (spotStrategy) {
      res["spot_strategy"] = boost::any(*spotStrategy);
    }
    if (spotPriceLimit) {
      vector<boost::any> temp1;
      for(auto item1:*spotPriceLimit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["spot_price_limit"] = boost::any(temp1);
    }
    if (rdsInstances) {
      res["rds_instances"] = boost::any(*rdsInstances);
    }
    if (scalingGroupId) {
      res["scaling_group_id"] = boost::any(*scalingGroupId);
    }
    if (scalingPolicy) {
      res["scaling_policy"] = boost::any(*scalingPolicy);
    }
    if (securityGroupId) {
      res["security_group_id"] = boost::any(*securityGroupId);
    }
    if (systemDiskCategory) {
      res["system_disk_category"] = boost::any(*systemDiskCategory);
    }
    if (systemDiskSize) {
      res["system_disk_size"] = boost::any(*systemDiskSize);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (vswitchIds) {
      res["vswitch_ids"] = boost::any(*vswitchIds);
    }
    if (loginPassword) {
      res["login_password"] = boost::any(*loginPassword);
    }
    if (keyPair) {
      res["key_pair"] = boost::any(*keyPair);
    }
    if (internetChargeType) {
      res["internet_charge_type"] = boost::any(*internetChargeType);
    }
    if (internetMaxBandwidthOut) {
      res["internet_max_bandwidth_out"] = boost::any(*internetMaxBandwidthOut);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("auto_renew") != m.end() && !m["auto_renew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["auto_renew"]));
    }
    if (m.find("auto_renew_period") != m.end() && !m["auto_renew_period"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["auto_renew_period"]));
    }
    if (m.find("data_disks") != m.end() && !m["data_disks"].empty()) {
      if (typeid(vector<boost::any>) == m["data_disks"].type()) {
        vector<DataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data_disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisks = make_shared<vector<DataDisk>>(expect1);
      }
    }
    if (m.find("image_id") != m.end() && !m["image_id"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["image_id"]));
    }
    if (m.find("instance_charge_type") != m.end() && !m["instance_charge_type"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["instance_charge_type"]));
    }
    if (m.find("instance_types") != m.end() && !m["instance_types"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["instance_types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["instance_types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("multi_az_policy") != m.end() && !m["multi_az_policy"].empty()) {
      multiAzPolicy = make_shared<string>(boost::any_cast<string>(m["multi_az_policy"]));
    }
    if (m.find("on_demand_base_capacity") != m.end() && !m["on_demand_base_capacity"].empty()) {
      onDemandBaseCapacity = make_shared<long>(boost::any_cast<long>(m["on_demand_base_capacity"]));
    }
    if (m.find("on_demand_percentage_above_base_capacity") != m.end() && !m["on_demand_percentage_above_base_capacity"].empty()) {
      onDemandPercentageAboveBaseCapacity = make_shared<long>(boost::any_cast<long>(m["on_demand_percentage_above_base_capacity"]));
    }
    if (m.find("spot_instance_pools") != m.end() && !m["spot_instance_pools"].empty()) {
      spotInstancePools = make_shared<long>(boost::any_cast<long>(m["spot_instance_pools"]));
    }
    if (m.find("spot_instance_remedy") != m.end() && !m["spot_instance_remedy"].empty()) {
      spotInstanceRemedy = make_shared<bool>(boost::any_cast<bool>(m["spot_instance_remedy"]));
    }
    if (m.find("compensate_with_on_demand") != m.end() && !m["compensate_with_on_demand"].empty()) {
      compensateWithOnDemand = make_shared<bool>(boost::any_cast<bool>(m["compensate_with_on_demand"]));
    }
    if (m.find("period") != m.end() && !m["period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["period"]));
    }
    if (m.find("period_unit") != m.end() && !m["period_unit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["period_unit"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
    if (m.find("ram_policy") != m.end() && !m["ram_policy"].empty()) {
      ramPolicy = make_shared<string>(boost::any_cast<string>(m["ram_policy"]));
    }
    if (m.find("spot_strategy") != m.end() && !m["spot_strategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["spot_strategy"]));
    }
    if (m.find("spot_price_limit") != m.end() && !m["spot_price_limit"].empty()) {
      if (typeid(vector<boost::any>) == m["spot_price_limit"].type()) {
        vector<DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["spot_price_limit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spotPriceLimit = make_shared<vector<DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupSpotPriceLimit>>(expect1);
      }
    }
    if (m.find("rds_instances") != m.end() && !m["rds_instances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["rds_instances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["rds_instances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdsInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("scaling_group_id") != m.end() && !m["scaling_group_id"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["scaling_group_id"]));
    }
    if (m.find("scaling_policy") != m.end() && !m["scaling_policy"].empty()) {
      scalingPolicy = make_shared<string>(boost::any_cast<string>(m["scaling_policy"]));
    }
    if (m.find("security_group_id") != m.end() && !m["security_group_id"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["security_group_id"]));
    }
    if (m.find("system_disk_category") != m.end() && !m["system_disk_category"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["system_disk_category"]));
    }
    if (m.find("system_disk_size") != m.end() && !m["system_disk_size"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["system_disk_size"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("vswitch_ids") != m.end() && !m["vswitch_ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vswitch_ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vswitch_ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vswitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("login_password") != m.end() && !m["login_password"].empty()) {
      loginPassword = make_shared<string>(boost::any_cast<string>(m["login_password"]));
    }
    if (m.find("key_pair") != m.end() && !m["key_pair"].empty()) {
      keyPair = make_shared<string>(boost::any_cast<string>(m["key_pair"]));
    }
    if (m.find("internet_charge_type") != m.end() && !m["internet_charge_type"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["internet_charge_type"]));
    }
    if (m.find("internet_max_bandwidth_out") != m.end() && !m["internet_max_bandwidth_out"].empty()) {
      internetMaxBandwidthOut = make_shared<long>(boost::any_cast<long>(m["internet_max_bandwidth_out"]));
    }
  }


  virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup() = default;
};
class DescribeClusterNodePoolsResponseBodyNodepoolsStatus : public Darabonba::Model {
public:
  shared_ptr<long> failedNodes{};
  shared_ptr<long> healthyNodes{};
  shared_ptr<long> initialNodes{};
  shared_ptr<long> offlineNodes{};
  shared_ptr<long> removingNodes{};
  shared_ptr<long> servingNodes{};
  shared_ptr<string> state{};
  shared_ptr<long> totalNodes{};

  DescribeClusterNodePoolsResponseBodyNodepoolsStatus() {}

  explicit DescribeClusterNodePoolsResponseBodyNodepoolsStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedNodes) {
      res["failed_nodes"] = boost::any(*failedNodes);
    }
    if (healthyNodes) {
      res["healthy_nodes"] = boost::any(*healthyNodes);
    }
    if (initialNodes) {
      res["initial_nodes"] = boost::any(*initialNodes);
    }
    if (offlineNodes) {
      res["offline_nodes"] = boost::any(*offlineNodes);
    }
    if (removingNodes) {
      res["removing_nodes"] = boost::any(*removingNodes);
    }
    if (servingNodes) {
      res["serving_nodes"] = boost::any(*servingNodes);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (totalNodes) {
      res["total_nodes"] = boost::any(*totalNodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("failed_nodes") != m.end() && !m["failed_nodes"].empty()) {
      failedNodes = make_shared<long>(boost::any_cast<long>(m["failed_nodes"]));
    }
    if (m.find("healthy_nodes") != m.end() && !m["healthy_nodes"].empty()) {
      healthyNodes = make_shared<long>(boost::any_cast<long>(m["healthy_nodes"]));
    }
    if (m.find("initial_nodes") != m.end() && !m["initial_nodes"].empty()) {
      initialNodes = make_shared<long>(boost::any_cast<long>(m["initial_nodes"]));
    }
    if (m.find("offline_nodes") != m.end() && !m["offline_nodes"].empty()) {
      offlineNodes = make_shared<long>(boost::any_cast<long>(m["offline_nodes"]));
    }
    if (m.find("removing_nodes") != m.end() && !m["removing_nodes"].empty()) {
      removingNodes = make_shared<long>(boost::any_cast<long>(m["removing_nodes"]));
    }
    if (m.find("serving_nodes") != m.end() && !m["serving_nodes"].empty()) {
      servingNodes = make_shared<long>(boost::any_cast<long>(m["serving_nodes"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
    if (m.find("total_nodes") != m.end() && !m["total_nodes"].empty()) {
      totalNodes = make_shared<long>(boost::any_cast<long>(m["total_nodes"]));
    }
  }


  virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsStatus() = default;
};
class DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig : public Darabonba::Model {
public:
  shared_ptr<bool> teeEnable{};

  DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig() {}

  explicit DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (teeEnable) {
      res["tee_enable"] = boost::any(*teeEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tee_enable") != m.end() && !m["tee_enable"].empty()) {
      teeEnable = make_shared<bool>(boost::any_cast<bool>(m["tee_enable"]));
    }
  }


  virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig() = default;
};
class DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig : public Darabonba::Model {
public:
  shared_ptr<bool> autoUpgrade{};
  shared_ptr<long> surge{};
  shared_ptr<long> surgePercentage{};
  shared_ptr<long> maxUnavailable{};

  DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig() {}

  explicit DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoUpgrade) {
      res["auto_upgrade"] = boost::any(*autoUpgrade);
    }
    if (surge) {
      res["surge"] = boost::any(*surge);
    }
    if (surgePercentage) {
      res["surge_percentage"] = boost::any(*surgePercentage);
    }
    if (maxUnavailable) {
      res["max_unavailable"] = boost::any(*maxUnavailable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("auto_upgrade") != m.end() && !m["auto_upgrade"].empty()) {
      autoUpgrade = make_shared<bool>(boost::any_cast<bool>(m["auto_upgrade"]));
    }
    if (m.find("surge") != m.end() && !m["surge"].empty()) {
      surge = make_shared<long>(boost::any_cast<long>(m["surge"]));
    }
    if (m.find("surge_percentage") != m.end() && !m["surge_percentage"].empty()) {
      surgePercentage = make_shared<long>(boost::any_cast<long>(m["surge_percentage"]));
    }
    if (m.find("max_unavailable") != m.end() && !m["max_unavailable"].empty()) {
      maxUnavailable = make_shared<long>(boost::any_cast<long>(m["max_unavailable"]));
    }
  }


  virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig() = default;
};
class DescribeClusterNodePoolsResponseBodyNodepoolsManagement : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<bool> autoRepair{};
  shared_ptr<DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig> upgradeConfig{};

  DescribeClusterNodePoolsResponseBodyNodepoolsManagement() {}

  explicit DescribeClusterNodePoolsResponseBodyNodepoolsManagement(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    if (autoRepair) {
      res["auto_repair"] = boost::any(*autoRepair);
    }
    if (upgradeConfig) {
      res["upgrade_config"] = upgradeConfig ? boost::any(upgradeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
    if (m.find("auto_repair") != m.end() && !m["auto_repair"].empty()) {
      autoRepair = make_shared<bool>(boost::any_cast<bool>(m["auto_repair"]));
    }
    if (m.find("upgrade_config") != m.end() && !m["upgrade_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["upgrade_config"].type()) {
        DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["upgrade_config"]));
        upgradeConfig = make_shared<DescribeClusterNodePoolsResponseBodyNodepoolsManagementUpgradeConfig>(model1);
      }
    }
  }


  virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsManagement() = default;
};
class DescribeClusterNodePoolsResponseBodyNodepools : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling> autoScaling{};
  shared_ptr<DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig> kubernetesConfig{};
  shared_ptr<DescribeClusterNodePoolsResponseBodyNodepoolsNodepoolInfo> nodepoolInfo{};
  shared_ptr<DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup> scalingGroup{};
  shared_ptr<DescribeClusterNodePoolsResponseBodyNodepoolsStatus> status{};
  shared_ptr<DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig> teeConfig{};
  shared_ptr<DescribeClusterNodePoolsResponseBodyNodepoolsManagement> management{};

  DescribeClusterNodePoolsResponseBodyNodepools() {}

  explicit DescribeClusterNodePoolsResponseBodyNodepools(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoScaling) {
      res["auto_scaling"] = autoScaling ? boost::any(autoScaling->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (kubernetesConfig) {
      res["kubernetes_config"] = kubernetesConfig ? boost::any(kubernetesConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nodepoolInfo) {
      res["nodepool_info"] = nodepoolInfo ? boost::any(nodepoolInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scalingGroup) {
      res["scaling_group"] = scalingGroup ? boost::any(scalingGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (teeConfig) {
      res["tee_config"] = teeConfig ? boost::any(teeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (management) {
      res["management"] = management ? boost::any(management->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("auto_scaling") != m.end() && !m["auto_scaling"].empty()) {
      if (typeid(map<string, boost::any>) == m["auto_scaling"].type()) {
        DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["auto_scaling"]));
        autoScaling = make_shared<DescribeClusterNodePoolsResponseBodyNodepoolsAutoScaling>(model1);
      }
    }
    if (m.find("kubernetes_config") != m.end() && !m["kubernetes_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["kubernetes_config"].type()) {
        DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["kubernetes_config"]));
        kubernetesConfig = make_shared<DescribeClusterNodePoolsResponseBodyNodepoolsKubernetesConfig>(model1);
      }
    }
    if (m.find("nodepool_info") != m.end() && !m["nodepool_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["nodepool_info"].type()) {
        DescribeClusterNodePoolsResponseBodyNodepoolsNodepoolInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nodepool_info"]));
        nodepoolInfo = make_shared<DescribeClusterNodePoolsResponseBodyNodepoolsNodepoolInfo>(model1);
      }
    }
    if (m.find("scaling_group") != m.end() && !m["scaling_group"].empty()) {
      if (typeid(map<string, boost::any>) == m["scaling_group"].type()) {
        DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scaling_group"]));
        scalingGroup = make_shared<DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroup>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      if (typeid(map<string, boost::any>) == m["status"].type()) {
        DescribeClusterNodePoolsResponseBodyNodepoolsStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["status"]));
        status = make_shared<DescribeClusterNodePoolsResponseBodyNodepoolsStatus>(model1);
      }
    }
    if (m.find("tee_config") != m.end() && !m["tee_config"].empty()) {
      if (typeid(map<string, boost::any>) == m["tee_config"].type()) {
        DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["tee_config"]));
        teeConfig = make_shared<DescribeClusterNodePoolsResponseBodyNodepoolsTeeConfig>(model1);
      }
    }
    if (m.find("management") != m.end() && !m["management"].empty()) {
      if (typeid(map<string, boost::any>) == m["management"].type()) {
        DescribeClusterNodePoolsResponseBodyNodepoolsManagement model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["management"]));
        management = make_shared<DescribeClusterNodePoolsResponseBodyNodepoolsManagement>(model1);
      }
    }
  }


  virtual ~DescribeClusterNodePoolsResponseBodyNodepools() = default;
};
class DescribeClusterNodePoolsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterNodePoolsResponseBodyNodepools>> nodepools{};

  DescribeClusterNodePoolsResponseBody() {}

  explicit DescribeClusterNodePoolsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodepools) {
      vector<boost::any> temp1;
      for(auto item1:*nodepools){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["nodepools"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("nodepools") != m.end() && !m["nodepools"].empty()) {
      if (typeid(vector<boost::any>) == m["nodepools"].type()) {
        vector<DescribeClusterNodePoolsResponseBodyNodepools> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["nodepools"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterNodePoolsResponseBodyNodepools model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodepools = make_shared<vector<DescribeClusterNodePoolsResponseBodyNodepools>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterNodePoolsResponseBody() = default;
};
class DescribeClusterNodePoolsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClusterNodePoolsResponseBody> body{};

  DescribeClusterNodePoolsResponse() {}

  explicit DescribeClusterNodePoolsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterNodePoolsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterNodePoolsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterNodePoolsResponse() = default;
};
class DescribeClusterV2UserKubeconfigRequest : public Darabonba::Model {
public:
  shared_ptr<bool> privateIpAddress{};

  DescribeClusterV2UserKubeconfigRequest() {}

  explicit DescribeClusterV2UserKubeconfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<bool>(boost::any_cast<bool>(m["PrivateIpAddress"]));
    }
  }


  virtual ~DescribeClusterV2UserKubeconfigRequest() = default;
};
class DescribeClusterV2UserKubeconfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> config{};

  DescribeClusterV2UserKubeconfigResponseBody() {}

  explicit DescribeClusterV2UserKubeconfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["config"] = boost::any(*config);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("config") != m.end() && !m["config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["config"]));
    }
  }


  virtual ~DescribeClusterV2UserKubeconfigResponseBody() = default;
};
class DescribeClusterV2UserKubeconfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClusterV2UserKubeconfigResponseBody> body{};

  DescribeClusterV2UserKubeconfigResponse() {}

  explicit DescribeClusterV2UserKubeconfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterV2UserKubeconfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterV2UserKubeconfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterV2UserKubeconfigResponse() = default;
};
class StartWorkflowRequest : public Darabonba::Model {
public:
  shared_ptr<string> workflowType{};
  shared_ptr<string> service{};
  shared_ptr<string> mappingOssRegion{};
  shared_ptr<string> mappingFastqFirstFilename{};
  shared_ptr<string> mappingFastqSecondFilename{};
  shared_ptr<string> mappingBucketName{};
  shared_ptr<string> mappingFastqPath{};
  shared_ptr<string> mappingReferencePath{};
  shared_ptr<string> mappingIsMarkDup{};
  shared_ptr<string> mappingBamOutPath{};
  shared_ptr<string> mappingBamOutFilename{};
  shared_ptr<string> wgsOssRegion{};
  shared_ptr<string> wgsFastqFirstFilename{};
  shared_ptr<string> wgsFastqSecondFilename{};
  shared_ptr<string> wgsBucketName{};
  shared_ptr<string> wgsFastqPath{};
  shared_ptr<string> wgsReferencePath{};
  shared_ptr<string> wgsVcfOutPath{};
  shared_ptr<string> wgsVcfOutFilename{};

  StartWorkflowRequest() {}

  explicit StartWorkflowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workflowType) {
      res["workflow_type"] = boost::any(*workflowType);
    }
    if (service) {
      res["service"] = boost::any(*service);
    }
    if (mappingOssRegion) {
      res["mapping_oss_region"] = boost::any(*mappingOssRegion);
    }
    if (mappingFastqFirstFilename) {
      res["mapping_fastq_first_filename"] = boost::any(*mappingFastqFirstFilename);
    }
    if (mappingFastqSecondFilename) {
      res["mapping_fastq_second_filename"] = boost::any(*mappingFastqSecondFilename);
    }
    if (mappingBucketName) {
      res["mapping_bucket_name"] = boost::any(*mappingBucketName);
    }
    if (mappingFastqPath) {
      res["mapping_fastq_path"] = boost::any(*mappingFastqPath);
    }
    if (mappingReferencePath) {
      res["mapping_reference_path"] = boost::any(*mappingReferencePath);
    }
    if (mappingIsMarkDup) {
      res["mapping_is_mark_dup"] = boost::any(*mappingIsMarkDup);
    }
    if (mappingBamOutPath) {
      res["mapping_bam_out_path"] = boost::any(*mappingBamOutPath);
    }
    if (mappingBamOutFilename) {
      res["mapping_bam_out_filename"] = boost::any(*mappingBamOutFilename);
    }
    if (wgsOssRegion) {
      res["wgs_oss_region"] = boost::any(*wgsOssRegion);
    }
    if (wgsFastqFirstFilename) {
      res["wgs_fastq_first_filename"] = boost::any(*wgsFastqFirstFilename);
    }
    if (wgsFastqSecondFilename) {
      res["wgs_fastq_second_filename"] = boost::any(*wgsFastqSecondFilename);
    }
    if (wgsBucketName) {
      res["wgs_bucket_name"] = boost::any(*wgsBucketName);
    }
    if (wgsFastqPath) {
      res["wgs_fastq_path"] = boost::any(*wgsFastqPath);
    }
    if (wgsReferencePath) {
      res["wgs_reference_path"] = boost::any(*wgsReferencePath);
    }
    if (wgsVcfOutPath) {
      res["wgs_vcf_out_path"] = boost::any(*wgsVcfOutPath);
    }
    if (wgsVcfOutFilename) {
      res["wgs_vcf_out_filename"] = boost::any(*wgsVcfOutFilename);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("workflow_type") != m.end() && !m["workflow_type"].empty()) {
      workflowType = make_shared<string>(boost::any_cast<string>(m["workflow_type"]));
    }
    if (m.find("service") != m.end() && !m["service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["service"]));
    }
    if (m.find("mapping_oss_region") != m.end() && !m["mapping_oss_region"].empty()) {
      mappingOssRegion = make_shared<string>(boost::any_cast<string>(m["mapping_oss_region"]));
    }
    if (m.find("mapping_fastq_first_filename") != m.end() && !m["mapping_fastq_first_filename"].empty()) {
      mappingFastqFirstFilename = make_shared<string>(boost::any_cast<string>(m["mapping_fastq_first_filename"]));
    }
    if (m.find("mapping_fastq_second_filename") != m.end() && !m["mapping_fastq_second_filename"].empty()) {
      mappingFastqSecondFilename = make_shared<string>(boost::any_cast<string>(m["mapping_fastq_second_filename"]));
    }
    if (m.find("mapping_bucket_name") != m.end() && !m["mapping_bucket_name"].empty()) {
      mappingBucketName = make_shared<string>(boost::any_cast<string>(m["mapping_bucket_name"]));
    }
    if (m.find("mapping_fastq_path") != m.end() && !m["mapping_fastq_path"].empty()) {
      mappingFastqPath = make_shared<string>(boost::any_cast<string>(m["mapping_fastq_path"]));
    }
    if (m.find("mapping_reference_path") != m.end() && !m["mapping_reference_path"].empty()) {
      mappingReferencePath = make_shared<string>(boost::any_cast<string>(m["mapping_reference_path"]));
    }
    if (m.find("mapping_is_mark_dup") != m.end() && !m["mapping_is_mark_dup"].empty()) {
      mappingIsMarkDup = make_shared<string>(boost::any_cast<string>(m["mapping_is_mark_dup"]));
    }
    if (m.find("mapping_bam_out_path") != m.end() && !m["mapping_bam_out_path"].empty()) {
      mappingBamOutPath = make_shared<string>(boost::any_cast<string>(m["mapping_bam_out_path"]));
    }
    if (m.find("mapping_bam_out_filename") != m.end() && !m["mapping_bam_out_filename"].empty()) {
      mappingBamOutFilename = make_shared<string>(boost::any_cast<string>(m["mapping_bam_out_filename"]));
    }
    if (m.find("wgs_oss_region") != m.end() && !m["wgs_oss_region"].empty()) {
      wgsOssRegion = make_shared<string>(boost::any_cast<string>(m["wgs_oss_region"]));
    }
    if (m.find("wgs_fastq_first_filename") != m.end() && !m["wgs_fastq_first_filename"].empty()) {
      wgsFastqFirstFilename = make_shared<string>(boost::any_cast<string>(m["wgs_fastq_first_filename"]));
    }
    if (m.find("wgs_fastq_second_filename") != m.end() && !m["wgs_fastq_second_filename"].empty()) {
      wgsFastqSecondFilename = make_shared<string>(boost::any_cast<string>(m["wgs_fastq_second_filename"]));
    }
    if (m.find("wgs_bucket_name") != m.end() && !m["wgs_bucket_name"].empty()) {
      wgsBucketName = make_shared<string>(boost::any_cast<string>(m["wgs_bucket_name"]));
    }
    if (m.find("wgs_fastq_path") != m.end() && !m["wgs_fastq_path"].empty()) {
      wgsFastqPath = make_shared<string>(boost::any_cast<string>(m["wgs_fastq_path"]));
    }
    if (m.find("wgs_reference_path") != m.end() && !m["wgs_reference_path"].empty()) {
      wgsReferencePath = make_shared<string>(boost::any_cast<string>(m["wgs_reference_path"]));
    }
    if (m.find("wgs_vcf_out_path") != m.end() && !m["wgs_vcf_out_path"].empty()) {
      wgsVcfOutPath = make_shared<string>(boost::any_cast<string>(m["wgs_vcf_out_path"]));
    }
    if (m.find("wgs_vcf_out_filename") != m.end() && !m["wgs_vcf_out_filename"].empty()) {
      wgsVcfOutFilename = make_shared<string>(boost::any_cast<string>(m["wgs_vcf_out_filename"]));
    }
  }


  virtual ~StartWorkflowRequest() = default;
};
class StartWorkflowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobName{};

  StartWorkflowResponseBody() {}

  explicit StartWorkflowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
  }


  virtual ~StartWorkflowResponseBody() = default;
};
class StartWorkflowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartWorkflowResponseBody> body{};

  StartWorkflowResponse() {}

  explicit StartWorkflowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartWorkflowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartWorkflowResponseBody>(model1);
      }
    }
  }


  virtual ~StartWorkflowResponse() = default;
};
class ScaleOutClusterRequestWorkerDataDisks : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> size{};
  shared_ptr<string> encrypted{};
  shared_ptr<string> autoSnapshotPolicyId{};

  ScaleOutClusterRequestWorkerDataDisks() {}

  explicit ScaleOutClusterRequestWorkerDataDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (encrypted) {
      res["encrypted"] = boost::any(*encrypted);
    }
    if (autoSnapshotPolicyId) {
      res["auto_snapshot_policy_id"] = boost::any(*autoSnapshotPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["size"]));
    }
    if (m.find("encrypted") != m.end() && !m["encrypted"].empty()) {
      encrypted = make_shared<string>(boost::any_cast<string>(m["encrypted"]));
    }
    if (m.find("auto_snapshot_policy_id") != m.end() && !m["auto_snapshot_policy_id"].empty()) {
      autoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["auto_snapshot_policy_id"]));
    }
  }


  virtual ~ScaleOutClusterRequestWorkerDataDisks() = default;
};
class ScaleOutClusterRequest : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> keyPair{};
  shared_ptr<string> loginPassword{};
  shared_ptr<vector<string>> vswitchIds{};
  shared_ptr<string> workerInstanceChargeType{};
  shared_ptr<long> workerPeriod{};
  shared_ptr<string> workerPeriodUnit{};
  shared_ptr<bool> workerAutoRenew{};
  shared_ptr<long> workerAutoRenewPeriod{};
  shared_ptr<vector<string>> workerInstanceTypes{};
  shared_ptr<string> workerSystemDiskCategory{};
  shared_ptr<long> workerSystemDiskSize{};
  shared_ptr<vector<ScaleOutClusterRequestWorkerDataDisks>> workerDataDisks{};
  shared_ptr<bool> cloudMonitorFlags{};
  shared_ptr<string> cpuPolicy{};
  shared_ptr<string> imageId{};
  shared_ptr<string> userData{};
  shared_ptr<vector<string>> rdsInstances{};
  shared_ptr<vector<Tag>> tags{};
  shared_ptr<vector<Taint>> taints{};
  shared_ptr<Runtime> runtime{};

  ScaleOutClusterRequest() {}

  explicit ScaleOutClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (keyPair) {
      res["key_pair"] = boost::any(*keyPair);
    }
    if (loginPassword) {
      res["login_password"] = boost::any(*loginPassword);
    }
    if (vswitchIds) {
      res["vswitch_ids"] = boost::any(*vswitchIds);
    }
    if (workerInstanceChargeType) {
      res["worker_instance_charge_type"] = boost::any(*workerInstanceChargeType);
    }
    if (workerPeriod) {
      res["worker_period"] = boost::any(*workerPeriod);
    }
    if (workerPeriodUnit) {
      res["worker_period_unit"] = boost::any(*workerPeriodUnit);
    }
    if (workerAutoRenew) {
      res["worker_auto_renew"] = boost::any(*workerAutoRenew);
    }
    if (workerAutoRenewPeriod) {
      res["worker_auto_renew_period"] = boost::any(*workerAutoRenewPeriod);
    }
    if (workerInstanceTypes) {
      res["worker_instance_types"] = boost::any(*workerInstanceTypes);
    }
    if (workerSystemDiskCategory) {
      res["worker_system_disk_category"] = boost::any(*workerSystemDiskCategory);
    }
    if (workerSystemDiskSize) {
      res["worker_system_disk_size"] = boost::any(*workerSystemDiskSize);
    }
    if (workerDataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*workerDataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["worker_data_disks"] = boost::any(temp1);
    }
    if (cloudMonitorFlags) {
      res["cloud_monitor_flags"] = boost::any(*cloudMonitorFlags);
    }
    if (cpuPolicy) {
      res["cpu_policy"] = boost::any(*cpuPolicy);
    }
    if (imageId) {
      res["image_id"] = boost::any(*imageId);
    }
    if (userData) {
      res["user_data"] = boost::any(*userData);
    }
    if (rdsInstances) {
      res["rds_instances"] = boost::any(*rdsInstances);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (taints) {
      vector<boost::any> temp1;
      for(auto item1:*taints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taints"] = boost::any(temp1);
    }
    if (runtime) {
      res["runtime"] = runtime ? boost::any(runtime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("key_pair") != m.end() && !m["key_pair"].empty()) {
      keyPair = make_shared<string>(boost::any_cast<string>(m["key_pair"]));
    }
    if (m.find("login_password") != m.end() && !m["login_password"].empty()) {
      loginPassword = make_shared<string>(boost::any_cast<string>(m["login_password"]));
    }
    if (m.find("vswitch_ids") != m.end() && !m["vswitch_ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["vswitch_ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["vswitch_ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vswitchIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("worker_instance_charge_type") != m.end() && !m["worker_instance_charge_type"].empty()) {
      workerInstanceChargeType = make_shared<string>(boost::any_cast<string>(m["worker_instance_charge_type"]));
    }
    if (m.find("worker_period") != m.end() && !m["worker_period"].empty()) {
      workerPeriod = make_shared<long>(boost::any_cast<long>(m["worker_period"]));
    }
    if (m.find("worker_period_unit") != m.end() && !m["worker_period_unit"].empty()) {
      workerPeriodUnit = make_shared<string>(boost::any_cast<string>(m["worker_period_unit"]));
    }
    if (m.find("worker_auto_renew") != m.end() && !m["worker_auto_renew"].empty()) {
      workerAutoRenew = make_shared<bool>(boost::any_cast<bool>(m["worker_auto_renew"]));
    }
    if (m.find("worker_auto_renew_period") != m.end() && !m["worker_auto_renew_period"].empty()) {
      workerAutoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["worker_auto_renew_period"]));
    }
    if (m.find("worker_instance_types") != m.end() && !m["worker_instance_types"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["worker_instance_types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["worker_instance_types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      workerInstanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("worker_system_disk_category") != m.end() && !m["worker_system_disk_category"].empty()) {
      workerSystemDiskCategory = make_shared<string>(boost::any_cast<string>(m["worker_system_disk_category"]));
    }
    if (m.find("worker_system_disk_size") != m.end() && !m["worker_system_disk_size"].empty()) {
      workerSystemDiskSize = make_shared<long>(boost::any_cast<long>(m["worker_system_disk_size"]));
    }
    if (m.find("worker_data_disks") != m.end() && !m["worker_data_disks"].empty()) {
      if (typeid(vector<boost::any>) == m["worker_data_disks"].type()) {
        vector<ScaleOutClusterRequestWorkerDataDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["worker_data_disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ScaleOutClusterRequestWorkerDataDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workerDataDisks = make_shared<vector<ScaleOutClusterRequestWorkerDataDisks>>(expect1);
      }
    }
    if (m.find("cloud_monitor_flags") != m.end() && !m["cloud_monitor_flags"].empty()) {
      cloudMonitorFlags = make_shared<bool>(boost::any_cast<bool>(m["cloud_monitor_flags"]));
    }
    if (m.find("cpu_policy") != m.end() && !m["cpu_policy"].empty()) {
      cpuPolicy = make_shared<string>(boost::any_cast<string>(m["cpu_policy"]));
    }
    if (m.find("image_id") != m.end() && !m["image_id"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["image_id"]));
    }
    if (m.find("user_data") != m.end() && !m["user_data"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["user_data"]));
    }
    if (m.find("rds_instances") != m.end() && !m["rds_instances"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["rds_instances"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["rds_instances"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      rdsInstances = make_shared<vector<string>>(toVec1);
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("taints") != m.end() && !m["taints"].empty()) {
      if (typeid(vector<boost::any>) == m["taints"].type()) {
        vector<Taint> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Taint model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taints = make_shared<vector<Taint>>(expect1);
      }
    }
    if (m.find("runtime") != m.end() && !m["runtime"].empty()) {
      if (typeid(map<string, boost::any>) == m["runtime"].type()) {
        Runtime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["runtime"]));
        runtime = make_shared<Runtime>(model1);
      }
    }
  }


  virtual ~ScaleOutClusterRequest() = default;
};
class ScaleOutClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  ScaleOutClusterResponseBody() {}

  explicit ScaleOutClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (requestId) {
      res["request_id"] = boost::any(*requestId);
    }
    if (taskId) {
      res["task_id"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
    if (m.find("task_id") != m.end() && !m["task_id"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["task_id"]));
    }
  }


  virtual ~ScaleOutClusterResponseBody() = default;
};
class ScaleOutClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ScaleOutClusterResponseBody> body{};

  ScaleOutClusterResponse() {}

  explicit ScaleOutClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ScaleOutClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ScaleOutClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ScaleOutClusterResponse() = default;
};
class DescribeEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> type{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeEventsRequest() {}

  explicit DescribeEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["page_number"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("page_number") != m.end() && !m["page_number"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["page_number"]));
    }
  }


  virtual ~DescribeEventsRequest() = default;
};
class DescribeEventsResponseBodyEventsData : public Darabonba::Model {
public:
  shared_ptr<string> level{};
  shared_ptr<string> reason{};
  shared_ptr<string> message{};

  DescribeEventsResponseBodyEventsData() {}

  explicit DescribeEventsResponseBodyEventsData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (reason) {
      res["reason"] = boost::any(*reason);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("reason") != m.end() && !m["reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["reason"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~DescribeEventsResponseBodyEventsData() = default;
};
class DescribeEventsResponseBodyEvents : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> type{};
  shared_ptr<string> source{};
  shared_ptr<string> subject{};
  shared_ptr<string> time{};
  shared_ptr<string> clusterId{};
  shared_ptr<DescribeEventsResponseBodyEventsData> data{};

  DescribeEventsResponseBodyEvents() {}

  explicit DescribeEventsResponseBodyEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventId) {
      res["event_id"] = boost::any(*eventId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (source) {
      res["source"] = boost::any(*source);
    }
    if (subject) {
      res["subject"] = boost::any(*subject);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("event_id") != m.end() && !m["event_id"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["event_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("source") != m.end() && !m["source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["source"]));
    }
    if (m.find("subject") != m.end() && !m["subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["subject"]));
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        DescribeEventsResponseBodyEventsData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DescribeEventsResponseBodyEventsData>(model1);
      }
    }
  }


  virtual ~DescribeEventsResponseBodyEvents() = default;
};
class DescribeEventsResponseBodyPageInfo : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> totalCount{};

  DescribeEventsResponseBodyPageInfo() {}

  explicit DescribeEventsResponseBodyPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["page_size"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["page_number"] = boost::any(*pageNumber);
    }
    if (totalCount) {
      res["total_count"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("page_size") != m.end() && !m["page_size"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["page_size"]));
    }
    if (m.find("page_number") != m.end() && !m["page_number"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["page_number"]));
    }
    if (m.find("total_count") != m.end() && !m["total_count"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["total_count"]));
    }
  }


  virtual ~DescribeEventsResponseBodyPageInfo() = default;
};
class DescribeEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEventsResponseBodyEvents>> events{};
  shared_ptr<DescribeEventsResponseBodyPageInfo> pageInfo{};

  DescribeEventsResponseBody() {}

  explicit DescribeEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["events"] = boost::any(temp1);
    }
    if (pageInfo) {
      res["page_info"] = pageInfo ? boost::any(pageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("events") != m.end() && !m["events"].empty()) {
      if (typeid(vector<boost::any>) == m["events"].type()) {
        vector<DescribeEventsResponseBodyEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEventsResponseBodyEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<DescribeEventsResponseBodyEvents>>(expect1);
      }
    }
    if (m.find("page_info") != m.end() && !m["page_info"].empty()) {
      if (typeid(map<string, boost::any>) == m["page_info"].type()) {
        DescribeEventsResponseBodyPageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["page_info"]));
        pageInfo = make_shared<DescribeEventsResponseBodyPageInfo>(model1);
      }
    }
  }


  virtual ~DescribeEventsResponseBody() = default;
};
class DescribeEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeEventsResponseBody> body{};

  DescribeEventsResponse() {}

  explicit DescribeEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEventsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEventsResponse() = default;
};
class UpdateK8sClusterUserConfigExpireResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  UpdateK8sClusterUserConfigExpireResponse() {}

  explicit UpdateK8sClusterUserConfigExpireResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateK8sClusterUserConfigExpireResponse() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceIds{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<Tag>> tags{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceIds) {
      res["resource_ids"] = boost::any(*resourceIds);
    }
    if (resourceType) {
      res["resource_type"] = boost::any(*resourceType);
    }
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
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
    if (m.find("resource_ids") != m.end() && !m["resource_ids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resource_ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resource_ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resource_type") != m.end() && !m["resource_type"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resource_type"]));
    }
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<Tag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourcesResponse() = default;
};
class ModifyClusterTagsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<Tag>> body{};

  ModifyClusterTagsRequest() {}

  explicit ModifyClusterTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<Tag>>(expect1);
      }
    }
  }


  virtual ~ModifyClusterTagsRequest() = default;
};
class ModifyClusterTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  ModifyClusterTagsResponse() {}

  explicit ModifyClusterTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyClusterTagsResponse() = default;
};
class GetKubernetesTriggerRequest : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> type{};
  shared_ptr<string> name{};
  shared_ptr<string> action{};

  GetKubernetesTriggerRequest() {}

  explicit GetKubernetesTriggerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (action) {
      res["action"] = boost::any(*action);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
  }


  virtual ~GetKubernetesTriggerRequest() = default;
};
class GetKubernetesTriggerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> type{};
  shared_ptr<string> action{};
  shared_ptr<string> token{};

  GetKubernetesTriggerResponseBody() {}

  explicit GetKubernetesTriggerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (projectId) {
      res["project_id"] = boost::any(*projectId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("project_id") != m.end() && !m["project_id"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["project_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~GetKubernetesTriggerResponseBody() = default;
};
class GetKubernetesTriggerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<vector<GetKubernetesTriggerResponseBody>> body{};

  GetKubernetesTriggerResponse() {}

  explicit GetKubernetesTriggerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<GetKubernetesTriggerResponseBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetKubernetesTriggerResponseBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<GetKubernetesTriggerResponseBody>>(expect1);
      }
    }
  }


  virtual ~GetKubernetesTriggerResponse() = default;
};
class GetUpgradeStatusResponseBodyUpgradeTask : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> message{};

  GetUpgradeStatusResponseBodyUpgradeTask() {}

  explicit GetUpgradeStatusResponseBodyUpgradeTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~GetUpgradeStatusResponseBodyUpgradeTask() = default;
};
class GetUpgradeStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> precheckReportId{};
  shared_ptr<string> status{};
  shared_ptr<string> upgradeStep{};
  shared_ptr<GetUpgradeStatusResponseBodyUpgradeTask> upgradeTask{};

  GetUpgradeStatusResponseBody() {}

  explicit GetUpgradeStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["error_message"] = boost::any(*errorMessage);
    }
    if (precheckReportId) {
      res["precheck_report_id"] = boost::any(*precheckReportId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (upgradeStep) {
      res["upgrade_step"] = boost::any(*upgradeStep);
    }
    if (upgradeTask) {
      res["upgrade_task"] = upgradeTask ? boost::any(upgradeTask->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("error_message") != m.end() && !m["error_message"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["error_message"]));
    }
    if (m.find("precheck_report_id") != m.end() && !m["precheck_report_id"].empty()) {
      precheckReportId = make_shared<string>(boost::any_cast<string>(m["precheck_report_id"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("upgrade_step") != m.end() && !m["upgrade_step"].empty()) {
      upgradeStep = make_shared<string>(boost::any_cast<string>(m["upgrade_step"]));
    }
    if (m.find("upgrade_task") != m.end() && !m["upgrade_task"].empty()) {
      if (typeid(map<string, boost::any>) == m["upgrade_task"].type()) {
        GetUpgradeStatusResponseBodyUpgradeTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["upgrade_task"]));
        upgradeTask = make_shared<GetUpgradeStatusResponseBodyUpgradeTask>(model1);
      }
    }
  }


  virtual ~GetUpgradeStatusResponseBody() = default;
};
class GetUpgradeStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUpgradeStatusResponseBody> body{};

  GetUpgradeStatusResponse() {}

  explicit GetUpgradeStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUpgradeStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUpgradeStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetUpgradeStatusResponse() = default;
};
class DescribeClusterResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> created{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceInfo{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> state{};

  DescribeClusterResourcesResponseBody() {}

  explicit DescribeClusterResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["cluster_id"] = boost::any(*clusterId);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (instanceId) {
      res["instance_id"] = boost::any(*instanceId);
    }
    if (resourceInfo) {
      res["resource_info"] = boost::any(*resourceInfo);
    }
    if (resourceType) {
      res["resource_type"] = boost::any(*resourceType);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster_id") != m.end() && !m["cluster_id"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["cluster_id"]));
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["created"]));
    }
    if (m.find("instance_id") != m.end() && !m["instance_id"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instance_id"]));
    }
    if (m.find("resource_info") != m.end() && !m["resource_info"].empty()) {
      resourceInfo = make_shared<string>(boost::any_cast<string>(m["resource_info"]));
    }
    if (m.find("resource_type") != m.end() && !m["resource_type"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resource_type"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~DescribeClusterResourcesResponseBody() = default;
};
class DescribeClusterResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<vector<DescribeClusterResourcesResponseBody>> body{};

  DescribeClusterResourcesResponse() {}

  explicit DescribeClusterResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<DescribeClusterResourcesResponseBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterResourcesResponseBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<DescribeClusterResourcesResponseBody>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterResourcesResponse() = default;
};
class DeleteClusterNodesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> drainNode{};
  shared_ptr<bool> releaseNode{};
  shared_ptr<vector<string>> nodes{};

  DeleteClusterNodesRequest() {}

  explicit DeleteClusterNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (drainNode) {
      res["drain_node"] = boost::any(*drainNode);
    }
    if (releaseNode) {
      res["release_node"] = boost::any(*releaseNode);
    }
    if (nodes) {
      res["nodes"] = boost::any(*nodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("drain_node") != m.end() && !m["drain_node"].empty()) {
      drainNode = make_shared<bool>(boost::any_cast<bool>(m["drain_node"]));
    }
    if (m.find("release_node") != m.end() && !m["release_node"].empty()) {
      releaseNode = make_shared<bool>(boost::any_cast<bool>(m["release_node"]));
    }
    if (m.find("nodes") != m.end() && !m["nodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["nodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["nodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteClusterNodesRequest() = default;
};
class DeleteClusterNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};

  DeleteClusterNodesResponse() {}

  explicit DeleteClusterNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteClusterNodesResponse() = default;
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
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterResponse modifyCluster(shared_ptr<string> ClusterId, shared_ptr<ModifyClusterRequest> request);
  ModifyClusterResponse modifyClusterWithOptions(shared_ptr<string> ClusterId,
                                                 shared_ptr<ModifyClusterRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterAttachScriptsResponse describeClusterAttachScripts(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterAttachScriptsRequest> request);
  DescribeClusterAttachScriptsResponse describeClusterAttachScriptsWithOptions(shared_ptr<string> ClusterId,
                                                                               shared_ptr<DescribeClusterAttachScriptsRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveClusterNodesResponse removeClusterNodes(shared_ptr<string> ClusterId, shared_ptr<RemoveClusterNodesRequest> request);
  RemoveClusterNodesResponse removeClusterNodesWithOptions(shared_ptr<string> ClusterId,
                                                           shared_ptr<RemoveClusterNodesRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeKubernetesVersionMetadataResponse describeKubernetesVersionMetadata(shared_ptr<DescribeKubernetesVersionMetadataRequest> request);
  DescribeKubernetesVersionMetadataResponse describeKubernetesVersionMetadataWithOptions(shared_ptr<DescribeKubernetesVersionMetadataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterLogsResponse describeClusterLogs(shared_ptr<string> ClusterId);
  DescribeClusterLogsResponse describeClusterLogsWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateKubernetesTriggerResponse createKubernetesTrigger(shared_ptr<CreateKubernetesTriggerRequest> request);
  CreateKubernetesTriggerResponse createKubernetesTriggerWithOptions(shared_ptr<CreateKubernetesTriggerRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantPermissionsResponse grantPermissions(shared_ptr<string> uid, shared_ptr<GrantPermissionsRequest> request);
  GrantPermissionsResponse grantPermissionsWithOptions(shared_ptr<string> uid,
                                                       shared_ptr<GrantPermissionsRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterDetailResponse describeClusterDetail(shared_ptr<string> ClusterId);
  DescribeClusterDetailResponse describeClusterDetailWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PauseComponentUpgradeResponse pauseComponentUpgrade(shared_ptr<string> clusterid, shared_ptr<string> componentid);
  PauseComponentUpgradeResponse pauseComponentUpgradeWithOptions(shared_ptr<string> clusterid,
                                                                 shared_ptr<string> componentid,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClustersResponse describeClusters(shared_ptr<DescribeClustersRequest> request);
  DescribeClustersResponse describeClustersWithOptions(shared_ptr<DescribeClustersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserPermissionResponse describeUserPermission(shared_ptr<string> uid);
  DescribeUserPermissionResponse describeUserPermissionWithOptions(shared_ptr<string> uid, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterNodePoolResponse modifyClusterNodePool(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId, shared_ptr<ModifyClusterNodePoolRequest> request);
  ModifyClusterNodePoolResponse modifyClusterNodePoolWithOptions(shared_ptr<string> ClusterId,
                                                                 shared_ptr<string> NodepoolId,
                                                                 shared_ptr<ModifyClusterNodePoolRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeUpgradeClusterResponse resumeUpgradeCluster(shared_ptr<string> ClusterId);
  ResumeUpgradeClusterResponse resumeUpgradeClusterWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenAckServiceResponse openAckService(shared_ptr<OpenAckServiceRequest> request);
  OpenAckServiceResponse openAckServiceWithOptions(shared_ptr<OpenAckServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScaleClusterNodePoolResponse scaleClusterNodePool(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId, shared_ptr<ScaleClusterNodePoolRequest> request);
  ScaleClusterNodePoolResponse scaleClusterNodePoolWithOptions(shared_ptr<string> ClusterId,
                                                               shared_ptr<string> NodepoolId,
                                                               shared_ptr<ScaleClusterNodePoolRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterNodePoolDetailResponse describeClusterNodePoolDetail(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId);
  DescribeClusterNodePoolDetailResponse describeClusterNodePoolDetailWithOptions(shared_ptr<string> ClusterId,
                                                                                 shared_ptr<string> NodepoolId,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterNodePoolResponse createClusterNodePool(shared_ptr<string> ClusterId, shared_ptr<CreateClusterNodePoolRequest> request);
  CreateClusterNodePoolResponse createClusterNodePoolWithOptions(shared_ptr<string> ClusterId,
                                                                 shared_ptr<CreateClusterNodePoolRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterUserKubeconfigResponse describeClusterUserKubeconfig(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterUserKubeconfigRequest> request);
  DescribeClusterUserKubeconfigResponse describeClusterUserKubeconfigWithOptions(shared_ptr<string> ClusterId,
                                                                                 shared_ptr<DescribeClusterUserKubeconfigRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScaleClusterResponse scaleCluster(shared_ptr<string> ClusterId, shared_ptr<ScaleClusterRequest> request);
  ScaleClusterResponse scaleClusterWithOptions(shared_ptr<string> ClusterId,
                                               shared_ptr<ScaleClusterRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterAddonUpgradeStatusResponse describeClusterAddonUpgradeStatus(shared_ptr<string> ClusterId, shared_ptr<string> ComponentId);
  DescribeClusterAddonUpgradeStatusResponse describeClusterAddonUpgradeStatusWithOptions(shared_ptr<string> ClusterId,
                                                                                         shared_ptr<string> ComponentId,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAddonsResponse describeAddons(shared_ptr<DescribeAddonsRequest> request);
  DescribeAddonsResponse describeAddonsWithOptions(shared_ptr<DescribeAddonsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAutoscalingConfigResponse createAutoscalingConfig(shared_ptr<string> ClusterId, shared_ptr<CreateAutoscalingConfigRequest> request);
  CreateAutoscalingConfigResponse createAutoscalingConfigWithOptions(shared_ptr<string> ClusterId,
                                                                     shared_ptr<CreateAutoscalingConfigRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<CreateClusterRequest> request);
  CreateClusterResponse createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeClusterResponse upgradeCluster(shared_ptr<string> ClusterId, shared_ptr<UpgradeClusterRequest> request);
  UpgradeClusterResponse upgradeClusterWithOptions(shared_ptr<string> ClusterId,
                                                   shared_ptr<UpgradeClusterRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelWorkflowResponse cancelWorkflow(shared_ptr<string> workflowName, shared_ptr<CancelWorkflowRequest> request);
  CancelWorkflowResponse cancelWorkflowWithOptions(shared_ptr<string> workflowName,
                                                   shared_ptr<CancelWorkflowRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachInstancesResponse attachInstances(shared_ptr<string> ClusterId, shared_ptr<AttachInstancesRequest> request);
  AttachInstancesResponse attachInstancesWithOptions(shared_ptr<string> ClusterId,
                                                     shared_ptr<AttachInstancesRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTemplatesResponse describeTemplates(shared_ptr<DescribeTemplatesRequest> request);
  DescribeTemplatesResponse describeTemplatesWithOptions(shared_ptr<DescribeTemplatesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PauseClusterUpgradeResponse pauseClusterUpgrade(shared_ptr<string> ClusterId);
  PauseClusterUpgradeResponse pauseClusterUpgradeWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTemplateResponse deleteTemplate(shared_ptr<string> TemplateId);
  DeleteTemplateResponse deleteTemplateWithOptions(shared_ptr<string> TemplateId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTemplateAttributeResponse describeTemplateAttribute(shared_ptr<string> TemplateId, shared_ptr<DescribeTemplateAttributeRequest> request);
  DescribeTemplateAttributeResponse describeTemplateAttributeWithOptions(shared_ptr<string> TemplateId,
                                                                         shared_ptr<DescribeTemplateAttributeRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTemplateResponse createTemplate(shared_ptr<CreateTemplateRequest> request);
  CreateTemplateResponse createTemplateWithOptions(shared_ptr<CreateTemplateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterNodesResponse describeClusterNodes(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterNodesRequest> request);
  DescribeClusterNodesResponse describeClusterNodesWithOptions(shared_ptr<string> ClusterId,
                                                               shared_ptr<DescribeClusterNodesRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterResponse deleteCluster(shared_ptr<string> ClusterId, shared_ptr<DeleteClusterRequest> request);
  DeleteClusterResponse deleteClusterWithOptions(shared_ptr<string> ClusterId,
                                                 shared_ptr<DeleteClusterRequest> tmpReq,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelComponentUpgradeResponse cancelComponentUpgrade(shared_ptr<string> clusterId, shared_ptr<string> componentId);
  CancelComponentUpgradeResponse cancelComponentUpgradeWithOptions(shared_ptr<string> clusterId,
                                                                   shared_ptr<string> componentId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MigrateClusterResponse migrateCluster(shared_ptr<string> clusterId);
  MigrateClusterResponse migrateClusterWithOptions(shared_ptr<string> clusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterAddonsVersionResponse describeClusterAddonsVersion(shared_ptr<string> ClusterId);
  DescribeClusterAddonsVersionResponse describeClusterAddonsVersionWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExternalAgentResponse describeExternalAgent(shared_ptr<string> ClusterId, shared_ptr<DescribeExternalAgentRequest> request);
  DescribeExternalAgentResponse describeExternalAgentWithOptions(shared_ptr<string> ClusterId,
                                                                 shared_ptr<DescribeExternalAgentRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnInstallClusterAddonsResponse unInstallClusterAddons(shared_ptr<string> ClusterId, shared_ptr<UnInstallClusterAddonsRequest> request);
  UnInstallClusterAddonsResponse unInstallClusterAddonsWithOptions(shared_ptr<string> ClusterId,
                                                                   shared_ptr<UnInstallClusterAddonsRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeComponentUpgradeResponse resumeComponentUpgrade(shared_ptr<string> clusterid, shared_ptr<string> componentid);
  ResumeComponentUpgradeResponse resumeComponentUpgradeWithOptions(shared_ptr<string> clusterid,
                                                                   shared_ptr<string> componentid,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClustersV1Response describeClustersV1(shared_ptr<DescribeClustersV1Request> request);
  DescribeClustersV1Response describeClustersV1WithOptions(shared_ptr<DescribeClustersV1Request> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterConfigurationResponse modifyClusterConfiguration(shared_ptr<string> ClusterId, shared_ptr<ModifyClusterConfigurationRequest> request);
  ModifyClusterConfigurationResponse modifyClusterConfigurationWithOptions(shared_ptr<string> ClusterId,
                                                                           shared_ptr<ModifyClusterConfigurationRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTaskInfoResponse describeTaskInfo(shared_ptr<string> taskId);
  DescribeTaskInfoResponse describeTaskInfoWithOptions(shared_ptr<string> taskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescirbeWorkflowResponse descirbeWorkflow(shared_ptr<string> workflowName);
  DescirbeWorkflowResponse descirbeWorkflowWithOptions(shared_ptr<string> workflowName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelClusterUpgradeResponse cancelClusterUpgrade(shared_ptr<string> ClusterId);
  CancelClusterUpgradeResponse cancelClusterUpgradeWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveWorkflowResponse removeWorkflow(shared_ptr<string> workflowName);
  RemoveWorkflowResponse removeWorkflowWithOptions(shared_ptr<string> workflowName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTemplateResponse updateTemplate(shared_ptr<string> TemplateId, shared_ptr<UpdateTemplateRequest> request);
  UpdateTemplateResponse updateTemplateWithOptions(shared_ptr<string> TemplateId,
                                                   shared_ptr<UpdateTemplateRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeClusterAddonsResponse upgradeClusterAddons(shared_ptr<string> ClusterId, shared_ptr<UpgradeClusterAddonsRequest> request);
  UpgradeClusterAddonsResponse upgradeClusterAddonsWithOptions(shared_ptr<string> ClusterId,
                                                               shared_ptr<UpgradeClusterAddonsRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterNamespacesResponse describeClusterNamespaces(shared_ptr<string> ClusterId);
  DescribeClusterNamespacesResponse describeClusterNamespacesWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteKubernetesTriggerResponse deleteKubernetesTrigger(shared_ptr<string> Id);
  DeleteKubernetesTriggerResponse deleteKubernetesTriggerWithOptions(shared_ptr<string> Id, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserQuotaResponse describeUserQuota();
  DescribeUserQuotaResponse describeUserQuotaWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterNodepoolResponse deleteClusterNodepool(shared_ptr<string> ClusterId, shared_ptr<string> NodepoolId);
  DeleteClusterNodepoolResponse deleteClusterNodepoolWithOptions(shared_ptr<string> ClusterId,
                                                                 shared_ptr<string> NodepoolId,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterAddonsUpgradeStatusResponse describeClusterAddonsUpgradeStatus(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterAddonsUpgradeStatusRequest> request);
  DescribeClusterAddonsUpgradeStatusResponse describeClusterAddonsUpgradeStatusWithOptions(shared_ptr<string> ClusterId,
                                                                                           shared_ptr<DescribeClusterAddonsUpgradeStatusRequest> tmpReq,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWorkflowsResponse describeWorkflows();
  DescribeWorkflowsResponse describeWorkflowsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InstallClusterAddonsResponse installClusterAddons(shared_ptr<string> ClusterId, shared_ptr<InstallClusterAddonsRequest> request);
  InstallClusterAddonsResponse installClusterAddonsWithOptions(shared_ptr<string> ClusterId,
                                                               shared_ptr<InstallClusterAddonsRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterNodePoolsResponse describeClusterNodePools(shared_ptr<string> ClusterId);
  DescribeClusterNodePoolsResponse describeClusterNodePoolsWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterV2UserKubeconfigResponse describeClusterV2UserKubeconfig(shared_ptr<string> ClusterId, shared_ptr<DescribeClusterV2UserKubeconfigRequest> request);
  DescribeClusterV2UserKubeconfigResponse describeClusterV2UserKubeconfigWithOptions(shared_ptr<string> ClusterId,
                                                                                     shared_ptr<DescribeClusterV2UserKubeconfigRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartWorkflowResponse startWorkflow(shared_ptr<StartWorkflowRequest> request);
  StartWorkflowResponse startWorkflowWithOptions(shared_ptr<StartWorkflowRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ScaleOutClusterResponse scaleOutCluster(shared_ptr<string> ClusterId, shared_ptr<ScaleOutClusterRequest> request);
  ScaleOutClusterResponse scaleOutClusterWithOptions(shared_ptr<string> ClusterId,
                                                     shared_ptr<ScaleOutClusterRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEventsResponse describeEvents(shared_ptr<DescribeEventsRequest> request);
  DescribeEventsResponse describeEventsWithOptions(shared_ptr<DescribeEventsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateK8sClusterUserConfigExpireResponse updateK8sClusterUserConfigExpire(shared_ptr<string> ClusterId);
  UpdateK8sClusterUserConfigExpireResponse updateK8sClusterUserConfigExpireWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterTagsResponse modifyClusterTags(shared_ptr<string> ClusterId, shared_ptr<ModifyClusterTagsRequest> request);
  ModifyClusterTagsResponse modifyClusterTagsWithOptions(shared_ptr<string> ClusterId,
                                                         shared_ptr<ModifyClusterTagsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetKubernetesTriggerResponse getKubernetesTrigger(shared_ptr<string> ClusterId, shared_ptr<GetKubernetesTriggerRequest> request);
  GetKubernetesTriggerResponse getKubernetesTriggerWithOptions(shared_ptr<string> ClusterId,
                                                               shared_ptr<GetKubernetesTriggerRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUpgradeStatusResponse getUpgradeStatus(shared_ptr<string> ClusterId);
  GetUpgradeStatusResponse getUpgradeStatusWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterResourcesResponse describeClusterResources(shared_ptr<string> ClusterId);
  DescribeClusterResourcesResponse describeClusterResourcesWithOptions(shared_ptr<string> ClusterId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterNodesResponse deleteClusterNodes(shared_ptr<string> ClusterId, shared_ptr<DeleteClusterNodesRequest> request);
  DeleteClusterNodesResponse deleteClusterNodesWithOptions(shared_ptr<string> ClusterId,
                                                           shared_ptr<DeleteClusterNodesRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_CS20151215

#endif
