// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHSYNCHRONIZATIONENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHSYNCHRONIZATIONENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SwitchSynchronizationEndpointRequestEndpoint.hpp>
#include <alibabacloud/models/SwitchSynchronizationEndpointRequestSourceEndpoint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class SwitchSynchronizationEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchSynchronizationEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobId, synchronizationJobId_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchSynchronizationEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(SourceEndpoint, sourceEndpoint_);
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobId, synchronizationJobId_);
    };
    SwitchSynchronizationEndpointRequest() = default ;
    SwitchSynchronizationEndpointRequest(const SwitchSynchronizationEndpointRequest &) = default ;
    SwitchSynchronizationEndpointRequest(SwitchSynchronizationEndpointRequest &&) = default ;
    SwitchSynchronizationEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchSynchronizationEndpointRequest() = default ;
    SwitchSynchronizationEndpointRequest& operator=(const SwitchSynchronizationEndpointRequest &) = default ;
    SwitchSynchronizationEndpointRequest& operator=(SwitchSynchronizationEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpoint_ == nullptr
        && return this->sourceEndpoint_ == nullptr && return this->accountId_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->synchronizationDirection_ == nullptr && return this->synchronizationJobId_ == nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline const SwitchSynchronizationEndpointRequestEndpoint & endpoint() const { DARABONBA_PTR_GET_CONST(endpoint_, SwitchSynchronizationEndpointRequestEndpoint) };
    inline SwitchSynchronizationEndpointRequestEndpoint endpoint() { DARABONBA_PTR_GET(endpoint_, SwitchSynchronizationEndpointRequestEndpoint) };
    inline SwitchSynchronizationEndpointRequest& setEndpoint(const SwitchSynchronizationEndpointRequestEndpoint & endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };
    inline SwitchSynchronizationEndpointRequest& setEndpoint(SwitchSynchronizationEndpointRequestEndpoint && endpoint) { DARABONBA_PTR_SET_RVALUE(endpoint_, endpoint) };


    // sourceEndpoint Field Functions 
    bool hasSourceEndpoint() const { return this->sourceEndpoint_ != nullptr;};
    void deleteSourceEndpoint() { this->sourceEndpoint_ = nullptr;};
    inline const SwitchSynchronizationEndpointRequestSourceEndpoint & sourceEndpoint() const { DARABONBA_PTR_GET_CONST(sourceEndpoint_, SwitchSynchronizationEndpointRequestSourceEndpoint) };
    inline SwitchSynchronizationEndpointRequestSourceEndpoint sourceEndpoint() { DARABONBA_PTR_GET(sourceEndpoint_, SwitchSynchronizationEndpointRequestSourceEndpoint) };
    inline SwitchSynchronizationEndpointRequest& setSourceEndpoint(const SwitchSynchronizationEndpointRequestSourceEndpoint & sourceEndpoint) { DARABONBA_PTR_SET_VALUE(sourceEndpoint_, sourceEndpoint) };
    inline SwitchSynchronizationEndpointRequest& setSourceEndpoint(SwitchSynchronizationEndpointRequestSourceEndpoint && sourceEndpoint) { DARABONBA_PTR_SET_RVALUE(sourceEndpoint_, sourceEndpoint) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline SwitchSynchronizationEndpointRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline SwitchSynchronizationEndpointRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SwitchSynchronizationEndpointRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SwitchSynchronizationEndpointRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string synchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline SwitchSynchronizationEndpointRequest& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // synchronizationJobId Field Functions 
    bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
    void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
    inline string synchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
    inline SwitchSynchronizationEndpointRequest& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


  protected:
    std::shared_ptr<SwitchSynchronizationEndpointRequestEndpoint> endpoint_ = nullptr;
    std::shared_ptr<SwitchSynchronizationEndpointRequestSourceEndpoint> sourceEndpoint_ = nullptr;
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because this parameter will be removed in the future.
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The synchronization direction. Valid values:
    // 
    // *   **Forward**
    // *   **Reverse**
    // 
    // >  Default value: **Forward**.
    // 
    // The value **Reverse** takes effect only if the topology of the data synchronization instance is two-way synchronization.
    std::shared_ptr<string> synchronizationDirection_ = nullptr;
    // The ID of the data synchronization instance. You can call the DescribeSynchronizationJobs operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> synchronizationJobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
