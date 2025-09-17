// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECROSSZONEMIGRATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECROSSZONEMIGRATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCrossZoneMigrationJobRequestDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class CreateCrossZoneMigrationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCrossZoneMigrationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Disk, disk_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(TargetInstanceType, targetInstanceType_);
      DARABONBA_PTR_TO_JSON(TargetVSwitchId, targetVSwitchId_);
      DARABONBA_PTR_TO_JSON(TargetZoneId, targetZoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCrossZoneMigrationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Disk, disk_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceType, targetInstanceType_);
      DARABONBA_PTR_FROM_JSON(TargetVSwitchId, targetVSwitchId_);
      DARABONBA_PTR_FROM_JSON(TargetZoneId, targetZoneId_);
    };
    CreateCrossZoneMigrationJobRequest() = default ;
    CreateCrossZoneMigrationJobRequest(const CreateCrossZoneMigrationJobRequest &) = default ;
    CreateCrossZoneMigrationJobRequest(CreateCrossZoneMigrationJobRequest &&) = default ;
    CreateCrossZoneMigrationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCrossZoneMigrationJobRequest() = default ;
    CreateCrossZoneMigrationJobRequest& operator=(const CreateCrossZoneMigrationJobRequest &) = default ;
    CreateCrossZoneMigrationJobRequest& operator=(CreateCrossZoneMigrationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPay_ != nullptr
        && this->clientToken_ != nullptr && this->disk_ != nullptr && this->instanceId_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->targetInstanceType_ != nullptr && this->targetVSwitchId_ != nullptr && this->targetZoneId_ != nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateCrossZoneMigrationJobRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCrossZoneMigrationJobRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline const vector<CreateCrossZoneMigrationJobRequestDisk> & disk() const { DARABONBA_PTR_GET_CONST(disk_, vector<CreateCrossZoneMigrationJobRequestDisk>) };
    inline vector<CreateCrossZoneMigrationJobRequestDisk> disk() { DARABONBA_PTR_GET(disk_, vector<CreateCrossZoneMigrationJobRequestDisk>) };
    inline CreateCrossZoneMigrationJobRequest& setDisk(const vector<CreateCrossZoneMigrationJobRequestDisk> & disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };
    inline CreateCrossZoneMigrationJobRequest& setDisk(vector<CreateCrossZoneMigrationJobRequestDisk> && disk) { DARABONBA_PTR_SET_RVALUE(disk_, disk) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCrossZoneMigrationJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCrossZoneMigrationJobRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCrossZoneMigrationJobRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateCrossZoneMigrationJobRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateCrossZoneMigrationJobRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // targetInstanceType Field Functions 
    bool hasTargetInstanceType() const { return this->targetInstanceType_ != nullptr;};
    void deleteTargetInstanceType() { this->targetInstanceType_ = nullptr;};
    inline string targetInstanceType() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceType_, "") };
    inline CreateCrossZoneMigrationJobRequest& setTargetInstanceType(string targetInstanceType) { DARABONBA_PTR_SET_VALUE(targetInstanceType_, targetInstanceType) };


    // targetVSwitchId Field Functions 
    bool hasTargetVSwitchId() const { return this->targetVSwitchId_ != nullptr;};
    void deleteTargetVSwitchId() { this->targetVSwitchId_ = nullptr;};
    inline string targetVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(targetVSwitchId_, "") };
    inline CreateCrossZoneMigrationJobRequest& setTargetVSwitchId(string targetVSwitchId) { DARABONBA_PTR_SET_VALUE(targetVSwitchId_, targetVSwitchId) };


    // targetZoneId Field Functions 
    bool hasTargetZoneId() const { return this->targetZoneId_ != nullptr;};
    void deleteTargetZoneId() { this->targetZoneId_ = nullptr;};
    inline string targetZoneId() const { DARABONBA_PTR_GET_DEFAULT(targetZoneId_, "") };
    inline CreateCrossZoneMigrationJobRequest& setTargetZoneId(string targetZoneId) { DARABONBA_PTR_SET_VALUE(targetZoneId_, targetZoneId) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // *   **true** (default): enables automatic payment. Make sure that you have sufficient balance within your account.
    // *   **false**: disables automatic payment. In this case, you must manually pay for the instance. For more information, see [Renew a subscription instance](https://help.aliyun.com/document_detail/85052.html).
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The client token that is used to ensure the idempotency of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The disk list.
    std::shared_ptr<vector<CreateCrossZoneMigrationJobRequestDisk>> disk_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the destination Alibaba Cloud region.
    // 
    // For example, if you want to migrate the source server to the China (Hangzhou) region, set this parameter to `cn-hangzhou`. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The type of the new instance.
    std::shared_ptr<string> targetInstanceType_ = nullptr;
    // The vSwitch ID of the destination Elastic Compute Service (ECS) instance.
    std::shared_ptr<string> targetVSwitchId_ = nullptr;
    // The ID of the destination zone.
    std::shared_ptr<string> targetZoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
