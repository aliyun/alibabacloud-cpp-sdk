// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEASSOCIATEDRESOURCERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEASSOCIATEDRESOURCERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tag20180828
{
namespace Models
{
  class UpdateAssociatedResourceRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAssociatedResourceRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExistingStatus, existingStatus_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(SettingName, settingName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAssociatedResourceRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExistingStatus, existingStatus_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(SettingName, settingName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
    };
    UpdateAssociatedResourceRuleRequest() = default ;
    UpdateAssociatedResourceRuleRequest(const UpdateAssociatedResourceRuleRequest &) = default ;
    UpdateAssociatedResourceRuleRequest(UpdateAssociatedResourceRuleRequest &&) = default ;
    UpdateAssociatedResourceRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAssociatedResourceRuleRequest() = default ;
    UpdateAssociatedResourceRuleRequest& operator=(const UpdateAssociatedResourceRuleRequest &) = default ;
    UpdateAssociatedResourceRuleRequest& operator=(UpdateAssociatedResourceRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->existingStatus_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->settingName_ != nullptr
        && this->status_ != nullptr && this->tagKeys_ != nullptr; };
    // existingStatus Field Functions 
    bool hasExistingStatus() const { return this->existingStatus_ != nullptr;};
    void deleteExistingStatus() { this->existingStatus_ = nullptr;};
    inline string existingStatus() const { DARABONBA_PTR_GET_DEFAULT(existingStatus_, "") };
    inline UpdateAssociatedResourceRuleRequest& setExistingStatus(string existingStatus) { DARABONBA_PTR_SET_VALUE(existingStatus_, existingStatus) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateAssociatedResourceRuleRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateAssociatedResourceRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateAssociatedResourceRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateAssociatedResourceRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // settingName Field Functions 
    bool hasSettingName() const { return this->settingName_ != nullptr;};
    void deleteSettingName() { this->settingName_ = nullptr;};
    inline string settingName() const { DARABONBA_PTR_GET_DEFAULT(settingName_, "") };
    inline UpdateAssociatedResourceRuleRequest& setSettingName(string settingName) { DARABONBA_PTR_SET_VALUE(settingName_, settingName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateAssociatedResourceRuleRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline const vector<string> & tagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, vector<string>) };
    inline vector<string> tagKeys() { DARABONBA_PTR_GET(tagKeys_, vector<string>) };
    inline UpdateAssociatedResourceRuleRequest& setTagKeys(const vector<string> & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
    inline UpdateAssociatedResourceRuleRequest& setTagKeys(vector<string> && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


  protected:
    std::shared_ptr<string> existingStatus_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The setting name of the associated resource tag rule.
    // 
    // For specific values, see the **Rule Setting Name** column in [Resources that Support Associated Resource Tag Settings](https://help.aliyun.com/document_detail/2586330.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> settingName_ = nullptr;
    // Indicates whether to enable the associated resource tag rule. Values:
    // 
    // - Enable: Enabled.
    // - Disable: Disabled.
    std::shared_ptr<string> status_ = nullptr;
    // List of tag keys affected by the associated resource tag rule.
    std::shared_ptr<vector<string>> tagKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
