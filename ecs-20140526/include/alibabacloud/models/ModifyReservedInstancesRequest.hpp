// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESERVEDINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESERVEDINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyReservedInstancesRequestConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyReservedInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyReservedInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceId, reservedInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyReservedInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceId, reservedInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyReservedInstancesRequest() = default ;
    ModifyReservedInstancesRequest(const ModifyReservedInstancesRequest &) = default ;
    ModifyReservedInstancesRequest(ModifyReservedInstancesRequest &&) = default ;
    ModifyReservedInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyReservedInstancesRequest() = default ;
    ModifyReservedInstancesRequest& operator=(const ModifyReservedInstancesRequest &) = default ;
    ModifyReservedInstancesRequest& operator=(ModifyReservedInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configuration_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->reservedInstanceId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline const vector<ModifyReservedInstancesRequestConfiguration> & configuration() const { DARABONBA_PTR_GET_CONST(configuration_, vector<ModifyReservedInstancesRequestConfiguration>) };
    inline vector<ModifyReservedInstancesRequestConfiguration> configuration() { DARABONBA_PTR_GET(configuration_, vector<ModifyReservedInstancesRequestConfiguration>) };
    inline ModifyReservedInstancesRequest& setConfiguration(const vector<ModifyReservedInstancesRequestConfiguration> & configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };
    inline ModifyReservedInstancesRequest& setConfiguration(vector<ModifyReservedInstancesRequestConfiguration> && configuration) { DARABONBA_PTR_SET_RVALUE(configuration_, configuration) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyReservedInstancesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyReservedInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyReservedInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reservedInstanceId Field Functions 
    bool hasReservedInstanceId() const { return this->reservedInstanceId_ != nullptr;};
    void deleteReservedInstanceId() { this->reservedInstanceId_ = nullptr;};
    inline const vector<string> & reservedInstanceId() const { DARABONBA_PTR_GET_CONST(reservedInstanceId_, vector<string>) };
    inline vector<string> reservedInstanceId() { DARABONBA_PTR_GET(reservedInstanceId_, vector<string>) };
    inline ModifyReservedInstancesRequest& setReservedInstanceId(const vector<string> & reservedInstanceId) { DARABONBA_PTR_SET_VALUE(reservedInstanceId_, reservedInstanceId) };
    inline ModifyReservedInstancesRequest& setReservedInstanceId(vector<string> && reservedInstanceId) { DARABONBA_PTR_SET_RVALUE(reservedInstanceId_, reservedInstanceId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyReservedInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyReservedInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The configurations of the new reserved instances. You can specify up to 100 new reserved instances.
    std::shared_ptr<vector<ModifyReservedInstancesRequestConfiguration>> configuration_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the reserved instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IDs of reserved instances that you want to modify. You can specify up to 20 reserved instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> reservedInstanceId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
