// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMONITORGROUPINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMONITORGROUPINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyMonitorGroupInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMonitorGroupInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMonitorGroupInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyMonitorGroupInstancesRequest() = default ;
    ModifyMonitorGroupInstancesRequest(const ModifyMonitorGroupInstancesRequest &) = default ;
    ModifyMonitorGroupInstancesRequest(ModifyMonitorGroupInstancesRequest &&) = default ;
    ModifyMonitorGroupInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMonitorGroupInstancesRequest() = default ;
    ModifyMonitorGroupInstancesRequest& operator=(const ModifyMonitorGroupInstancesRequest &) = default ;
    ModifyMonitorGroupInstancesRequest& operator=(ModifyMonitorGroupInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Instances& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Instances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Instances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The cloud service to which the resource instance belongs. The following cloud services are supported:
      // 
      // - ECS (including Alibaba Cloud and third-party hosts)
      // 
      // - ApsaraDB RDS
      // 
      // - AnalyticDB
      // 
      // - SLB
      // 
      // - VPC (Elastic IP)
      // 
      // - API Gateway
      // 
      // - Alibaba Cloud CDN
      // 
      // - Container Service for Swarm
      // 
      // - DCDN
      // 
      // - Anti-DDoS
      // 
      // - EIP
      // 
      // - Elasticsearch
      // 
      // - E-MapReduce
      // 
      // - Auto Scaling
      // 
      // - ApsaraDB for HBase
      // 
      // - IoT Edge
      // 
      // - Kubernetes pod
      // 
      // - ApsaraDB for Redis (sharded cluster)
      // 
      // - ApsaraDB for Redis (read/write splitting)
      // 
      // - ApsaraDB for Redis (Standard Edition)
      // 
      // - ApsaraDB for Memcache
      // 
      // - MNS
      // 
      // - ApsaraDB for MongoDB (replica set)
      // 
      // - ApsaraDB for MongoDB (sharded cluster)
      // 
      // - ApsaraDB for MongoDB (sharded cluster)
      // 
      // - MNS topic
      // 
      // - OCS (ApsaraDB for Memcache of earlier versions)
      // 
      // - OpenSearch
      // 
      // - OSS
      // 
      // - PolarDB
      // 
      // - HybridDB for MySQL
      // 
      // - Internet Shared Bandwidth
      // 
      // - SLS
      // 
      // - VPN Gateway
      // 
      // This parameter is required.
      shared_ptr<string> category_ {};
      // The ID of the resource instance.
      // 
      // This parameter is required.
      shared_ptr<string> instanceId_ {};
      // The name of the instance.
      // 
      // This parameter is required.
      shared_ptr<string> instanceName_ {};
      // The region ID.
      // 
      // This parameter is required.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->instances_ == nullptr && this->regionId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ModifyMonitorGroupInstancesRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ModifyMonitorGroupInstancesRequest::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ModifyMonitorGroupInstancesRequest::Instances>) };
    inline vector<ModifyMonitorGroupInstancesRequest::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<ModifyMonitorGroupInstancesRequest::Instances>) };
    inline ModifyMonitorGroupInstancesRequest& setInstances(const vector<ModifyMonitorGroupInstancesRequest::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ModifyMonitorGroupInstancesRequest& setInstances(vector<ModifyMonitorGroupInstancesRequest::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyMonitorGroupInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the application group.
    // 
    // This parameter is required.
    shared_ptr<int64_t> groupId_ {};
    // The list of instances. You can specify up to 2,000 instances.
    // 
    // This parameter is required.
    shared_ptr<vector<ModifyMonitorGroupInstancesRequest::Instances>> instances_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
