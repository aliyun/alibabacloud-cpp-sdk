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
      // The abbreviation of the name of the service to which the instances to be added to the application group belong. Valid values:
      // 
      // *   ECS: Elastic Compute Service (ECS) instances provided by Alibaba Cloud and hosts not provided by Alibaba Cloud
      // 
      // *   RDS: ApsaraDB for RDS
      // 
      // *   ADS: AnalyticDB
      // 
      // *   SLB: Server Load Balancer (SLB)
      // 
      // *   VPC: Virtual Private Cloud (VPC)
      // 
      // *   APIGATEWAY: API Gateway
      // 
      // *   CDN: Alibaba Cloud Content Delivery Network (CDN)
      // 
      // *   CS: Container Service for Swarm
      // 
      // *   DCDN: Dynamic Route for CDN
      // 
      // *   DDoS: Anti-DDoS Pro
      // 
      // *   EIP: Elastic IP Address (EIP)
      // 
      // *   ELASTICSEARCH: Elasticsearch
      // 
      // *   EMR: E-MapReduce
      // 
      // *   ESS: Auto Scaling
      // 
      // *   HBASE: ApsaraDB for Hbase
      // 
      // *   IOT_EDGE: IoT Edge
      // 
      // *   K8S_POD: pods in Container Service for Kubernetes
      // 
      // *   KVSTORE_SHARDING: ApsaraDB for Redis of the cluster architecture
      // 
      // *   KVSTORE_SPLITRW: ApsaraDB for Redis of the read/write splitting architecture
      // 
      // *   KVSTORE_STANDARD: ApsaraDB for Redis of the standard architecture
      // 
      // *   MEMCACHE: ApsaraDB for Memcache
      // 
      // *   MNS: Message Service (MNS)
      // 
      // *   MONGODB: ApsaraDB for MongoDB of the replica set architecture
      // 
      // *   MONGODB_CLUSTER: ApsaraDB for MongoDB of the cluster architecture
      // 
      // *   MONGODB_SHARDING: ApsaraDB for MongoDB of the sharded cluster architecture
      // 
      // *   MQ_TOPIC: MNS topics
      // 
      // *   OCS: ApsaraDB for Memcache of earlier versions
      // 
      // *   OPENSEARCH: Open Search
      // 
      // *   OSS: Object Storage Service (OSS)
      // 
      // *   POLARDB: PolarDB
      // 
      // *   PETADATA: HybridDB for MySQL
      // 
      // *   SCDN: Secure Content Delivery Network (SCDN)
      // 
      // *   SHAREBANDWIDTHPACKAGES: EIP Bandwidth Plan
      // 
      // *   SLS: Log Service
      // 
      // *   VPN: VPN Gateway
      // 
      //     Valid values of N: 1 to 2000.
      // 
      // This parameter is required.
      shared_ptr<string> category_ {};
      // The ID of the instance. Valid values of N: 1 to 2000.
      // 
      // This parameter is required.
      shared_ptr<string> instanceId_ {};
      // The name of the instance. Valid values of N: 1 to 2000.
      // 
      // This parameter is required.
      shared_ptr<string> instanceName_ {};
      // The ID of the region where the instance resides. Valid values of N: 1 to 2000.
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
    // This parameter is required.
    shared_ptr<vector<ModifyMonitorGroupInstancesRequest::Instances>> instances_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
