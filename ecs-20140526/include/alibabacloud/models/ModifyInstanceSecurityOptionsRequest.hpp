// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCESECURITYOPTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCESECURITYOPTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceSecurityOptionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceSecurityOptionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnableSecureBoot, enableSecureBoot_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceSecurityOptionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnableSecureBoot, enableSecureBoot_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyInstanceSecurityOptionsRequest() = default ;
    ModifyInstanceSecurityOptionsRequest(const ModifyInstanceSecurityOptionsRequest &) = default ;
    ModifyInstanceSecurityOptionsRequest(ModifyInstanceSecurityOptionsRequest &&) = default ;
    ModifyInstanceSecurityOptionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceSecurityOptionsRequest() = default ;
    ModifyInstanceSecurityOptionsRequest& operator=(const ModifyInstanceSecurityOptionsRequest &) = default ;
    ModifyInstanceSecurityOptionsRequest& operator=(ModifyInstanceSecurityOptionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->enableSecureBoot_ == nullptr && this->instanceId_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyInstanceSecurityOptionsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyInstanceSecurityOptionsRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableSecureBoot Field Functions 
    bool hasEnableSecureBoot() const { return this->enableSecureBoot_ != nullptr;};
    void deleteEnableSecureBoot() { this->enableSecureBoot_ = nullptr;};
    inline bool getEnableSecureBoot() const { DARABONBA_PTR_GET_DEFAULT(enableSecureBoot_, false) };
    inline ModifyInstanceSecurityOptionsRequest& setEnableSecureBoot(bool enableSecureBoot) { DARABONBA_PTR_SET_VALUE(enableSecureBoot_, enableSecureBoot) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceSecurityOptionsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyInstanceSecurityOptionsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceSecurityOptionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyInstanceSecurityOptionsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The ClientToken value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://www.alibabacloud.com/help/en/ecs/developer-reference/how-to-ensure-idempotence).
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run without performing the actual request. Valid values:
    // - true: performs only a dry run. The secure boot setting of the instance is not modified.
    // - false: performs a dry run and performs the actual request. If the request passes the dry run, the secure boot setting of the instance is modified.
    // 
    // Default value: false.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to enable UEFI Secure Boot. Valid values:
    // 
    // - true: Enabled.
    // - false: Disabled.
    // 
    // Default value: false.
    // 
    // This parameter is required.
    shared_ptr<bool> enableSecureBoot_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance. You can call [DescribeRegions](https://www.alibabacloud.com/help/en/ecs/developer-reference/api-ecs-2014-05-26-describeregions) to query the most recent region list.
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
