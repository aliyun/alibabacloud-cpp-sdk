// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETAIRKVCACHEVNODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETAIRKVCACHEVNODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class CreateTairKVCacheVNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTairKVCacheVNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VClusterId, VClusterId_);
      DARABONBA_PTR_TO_JSON(VkName, vkName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTairKVCacheVNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VClusterId, VClusterId_);
      DARABONBA_PTR_FROM_JSON(VkName, vkName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateTairKVCacheVNodeResponseBody() = default ;
    CreateTairKVCacheVNodeResponseBody(const CreateTairKVCacheVNodeResponseBody &) = default ;
    CreateTairKVCacheVNodeResponseBody(CreateTairKVCacheVNodeResponseBody &&) = default ;
    CreateTairKVCacheVNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTairKVCacheVNodeResponseBody() = default ;
    CreateTairKVCacheVNodeResponseBody& operator=(const CreateTairKVCacheVNodeResponseBody &) = default ;
    CreateTairKVCacheVNodeResponseBody& operator=(CreateTairKVCacheVNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nodeId_ == nullptr && this->orderId_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->VClusterId_ == nullptr
        && this->vkName_ == nullptr && this->zoneId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateTairKVCacheVNodeResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateTairKVCacheVNodeResponseBody& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateTairKVCacheVNodeResponseBody& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTairKVCacheVNodeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTairKVCacheVNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // VClusterId Field Functions 
    bool hasVClusterId() const { return this->VClusterId_ != nullptr;};
    void deleteVClusterId() { this->VClusterId_ = nullptr;};
    inline string getVClusterId() const { DARABONBA_PTR_GET_DEFAULT(VClusterId_, "") };
    inline CreateTairKVCacheVNodeResponseBody& setVClusterId(string VClusterId) { DARABONBA_PTR_SET_VALUE(VClusterId_, VClusterId) };


    // vkName Field Functions 
    bool hasVkName() const { return this->vkName_ != nullptr;};
    void deleteVkName() { this->vkName_ = nullptr;};
    inline string getVkName() const { DARABONBA_PTR_GET_DEFAULT(vkName_, "") };
    inline CreateTairKVCacheVNodeResponseBody& setVkName(string vkName) { DARABONBA_PTR_SET_VALUE(vkName_, vkName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateTairKVCacheVNodeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the Tair VNode instance.
    shared_ptr<string> instanceId_ {};
    // The ID of the VNode.
    shared_ptr<string> nodeId_ {};
    // The order ID.
    shared_ptr<int64_t> orderId_ {};
    // The ID of the region where the instance resides.
    shared_ptr<string> regionId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the VCluster.
    shared_ptr<string> VClusterId_ {};
    // The ID of the VCluster instance.
    shared_ptr<string> vkName_ {};
    // The zone ID of the instance.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
