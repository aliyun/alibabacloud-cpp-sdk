// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMONITORGROUPINSTANCESREQUESTINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMONITORGROUPINSTANCESREQUESTINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyMonitorGroupInstancesRequestInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMonitorGroupInstancesRequestInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMonitorGroupInstancesRequestInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyMonitorGroupInstancesRequestInstances() = default ;
    ModifyMonitorGroupInstancesRequestInstances(const ModifyMonitorGroupInstancesRequestInstances &) = default ;
    ModifyMonitorGroupInstancesRequestInstances(ModifyMonitorGroupInstancesRequestInstances &&) = default ;
    ModifyMonitorGroupInstancesRequestInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMonitorGroupInstancesRequestInstances() = default ;
    ModifyMonitorGroupInstancesRequestInstances& operator=(const ModifyMonitorGroupInstancesRequestInstances &) = default ;
    ModifyMonitorGroupInstancesRequestInstances& operator=(ModifyMonitorGroupInstancesRequestInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->regionId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyMonitorGroupInstancesRequestInstances& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyMonitorGroupInstancesRequestInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyMonitorGroupInstancesRequestInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyMonitorGroupInstancesRequestInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
    std::shared_ptr<string> category_ = nullptr;
    // The ID of the instance. Valid values of N: 1 to 2000.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the instance. Valid values of N: 1 to 2000.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The ID of the region where the instance resides. Valid values of N: 1 to 2000.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
