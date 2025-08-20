// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYUSERENIVSWITCHOPTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYUSERENIVSWITCHOPTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyUserEniVswitchOptionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyUserEniVswitchOptionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VSwitchOptions, vSwitchOptions_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyUserEniVswitchOptionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VSwitchOptions, vSwitchOptions_);
    };
    ModifyUserEniVswitchOptionsRequest() = default ;
    ModifyUserEniVswitchOptionsRequest(const ModifyUserEniVswitchOptionsRequest &) = default ;
    ModifyUserEniVswitchOptionsRequest(ModifyUserEniVswitchOptionsRequest &&) = default ;
    ModifyUserEniVswitchOptionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyUserEniVswitchOptionsRequest() = default ;
    ModifyUserEniVswitchOptionsRequest& operator=(const ModifyUserEniVswitchOptionsRequest &) = default ;
    ModifyUserEniVswitchOptionsRequest& operator=(ModifyUserEniVswitchOptionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbClusterId_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->vSwitchOptions_ != nullptr; };
    // dbClusterId Field Functions 
    bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
    void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
    inline string dbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
    inline ModifyUserEniVswitchOptionsRequest& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyUserEniVswitchOptionsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyUserEniVswitchOptionsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyUserEniVswitchOptionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyUserEniVswitchOptionsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyUserEniVswitchOptionsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // vSwitchOptions Field Functions 
    bool hasVSwitchOptions() const { return this->vSwitchOptions_ != nullptr;};
    void deleteVSwitchOptions() { this->vSwitchOptions_ = nullptr;};
    inline string vSwitchOptions() const { DARABONBA_PTR_GET_DEFAULT(vSwitchOptions_, "") };
    inline ModifyUserEniVswitchOptionsRequest& setVSwitchOptions(string vSwitchOptions) { DARABONBA_PTR_SET_VALUE(vSwitchOptions_, vSwitchOptions) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbClusterId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/454314.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The vSwitches that you want to use. The vSwitches must reside in the same virtual private cloud (VPC) and zone as ENIs. You can specify up to three vSwitches. Separate multiple vSwitches with commas (,).
    // 
    // > 
    // 
    // *   The vSwitches that you specify overwrite the existing vSwitches that are connected to ENIs.
    // 
    // *   You can call the [DescribeDBClusterAttribute](https://help.aliyun.com/document_detail/612399.html) operation to query the network information about ENIs in a cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchOptions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
