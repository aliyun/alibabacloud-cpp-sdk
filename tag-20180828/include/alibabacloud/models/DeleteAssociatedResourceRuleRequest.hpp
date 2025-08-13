// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEASSOCIATEDRESOURCERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEASSOCIATEDRESOURCERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class DeleteAssociatedResourceRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAssociatedResourceRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(SettingName, settingName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAssociatedResourceRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(SettingName, settingName_);
    };
    DeleteAssociatedResourceRuleRequest() = default ;
    DeleteAssociatedResourceRuleRequest(const DeleteAssociatedResourceRuleRequest &) = default ;
    DeleteAssociatedResourceRuleRequest(DeleteAssociatedResourceRuleRequest &&) = default ;
    DeleteAssociatedResourceRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAssociatedResourceRuleRequest() = default ;
    DeleteAssociatedResourceRuleRequest& operator=(const DeleteAssociatedResourceRuleRequest &) = default ;
    DeleteAssociatedResourceRuleRequest& operator=(DeleteAssociatedResourceRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->settingName_ != nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteAssociatedResourceRuleRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteAssociatedResourceRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteAssociatedResourceRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteAssociatedResourceRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // settingName Field Functions 
    bool hasSettingName() const { return this->settingName_ != nullptr;};
    void deleteSettingName() { this->settingName_ = nullptr;};
    inline string settingName() const { DARABONBA_PTR_GET_DEFAULT(settingName_, "") };
    inline DeleteAssociatedResourceRuleRequest& setSettingName(string settingName) { DARABONBA_PTR_SET_VALUE(settingName_, settingName) };


  protected:
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The name of the associated resource tagging rule.
    // 
    // For more information, see the **Rule Name** column in [Resource types that support the Associated Resource Tagging feature](https://help.aliyun.com/document_detail/2586330.html).
    std::shared_ptr<string> settingName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
