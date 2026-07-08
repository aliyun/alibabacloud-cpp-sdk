// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEASSOCIATEDRESOURCERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEASSOCIATEDRESOURCERULESREQUEST_HPP_
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
  class CreateAssociatedResourceRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAssociatedResourceRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateRulesList, createRulesList_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAssociatedResourceRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateRulesList, createRulesList_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    CreateAssociatedResourceRulesRequest() = default ;
    CreateAssociatedResourceRulesRequest(const CreateAssociatedResourceRulesRequest &) = default ;
    CreateAssociatedResourceRulesRequest(CreateAssociatedResourceRulesRequest &&) = default ;
    CreateAssociatedResourceRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAssociatedResourceRulesRequest() = default ;
    CreateAssociatedResourceRulesRequest& operator=(const CreateAssociatedResourceRulesRequest &) = default ;
    CreateAssociatedResourceRulesRequest& operator=(CreateAssociatedResourceRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateRulesList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateRulesList& obj) { 
        DARABONBA_PTR_TO_JSON(ExistingStatus, existingStatus_);
        DARABONBA_PTR_TO_JSON(SettingName, settingName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
      };
      friend void from_json(const Darabonba::Json& j, CreateRulesList& obj) { 
        DARABONBA_PTR_FROM_JSON(ExistingStatus, existingStatus_);
        DARABONBA_PTR_FROM_JSON(SettingName, settingName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
      };
      CreateRulesList() = default ;
      CreateRulesList(const CreateRulesList &) = default ;
      CreateRulesList(CreateRulesList &&) = default ;
      CreateRulesList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateRulesList() = default ;
      CreateRulesList& operator=(const CreateRulesList &) = default ;
      CreateRulesList& operator=(CreateRulesList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->existingStatus_ == nullptr
        && this->settingName_ == nullptr && this->status_ == nullptr && this->tagKeys_ == nullptr; };
      // existingStatus Field Functions 
      bool hasExistingStatus() const { return this->existingStatus_ != nullptr;};
      void deleteExistingStatus() { this->existingStatus_ = nullptr;};
      inline string getExistingStatus() const { DARABONBA_PTR_GET_DEFAULT(existingStatus_, "") };
      inline CreateRulesList& setExistingStatus(string existingStatus) { DARABONBA_PTR_SET_VALUE(existingStatus_, existingStatus) };


      // settingName Field Functions 
      bool hasSettingName() const { return this->settingName_ != nullptr;};
      void deleteSettingName() { this->settingName_ = nullptr;};
      inline string getSettingName() const { DARABONBA_PTR_GET_DEFAULT(settingName_, "") };
      inline CreateRulesList& setSettingName(string settingName) { DARABONBA_PTR_SET_VALUE(settingName_, settingName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CreateRulesList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tagKeys Field Functions 
      bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
      void deleteTagKeys() { this->tagKeys_ = nullptr;};
      inline const vector<string> & getTagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, vector<string>) };
      inline vector<string> getTagKeys() { DARABONBA_PTR_GET(tagKeys_, vector<string>) };
      inline CreateRulesList& setTagKeys(const vector<string> & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
      inline CreateRulesList& setTagKeys(vector<string> && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


    protected:
      shared_ptr<string> existingStatus_ {};
      // The setting name of the associated resource tag rule.
      // 
      // For valid values, see the **Setting name** column in [Resources that support associated resource tagging](https://help.aliyun.com/document_detail/2586330.html).
      // 
      // This parameter is required.
      shared_ptr<string> settingName_ {};
      // Specifies whether to enable the associated resource tag rule. Valid values:
      // 
      // - Enable (default): The rule is enabled.
      // 
      // - Disable: The rule is disabled.
      // 
      // This parameter is required.
      shared_ptr<string> status_ {};
      // The tag keys to which the rule applies.
      shared_ptr<vector<string>> tagKeys_ {};
    };

    virtual bool empty() const override { return this->createRulesList_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr; };
    // createRulesList Field Functions 
    bool hasCreateRulesList() const { return this->createRulesList_ != nullptr;};
    void deleteCreateRulesList() { this->createRulesList_ = nullptr;};
    inline const vector<CreateAssociatedResourceRulesRequest::CreateRulesList> & getCreateRulesList() const { DARABONBA_PTR_GET_CONST(createRulesList_, vector<CreateAssociatedResourceRulesRequest::CreateRulesList>) };
    inline vector<CreateAssociatedResourceRulesRequest::CreateRulesList> getCreateRulesList() { DARABONBA_PTR_GET(createRulesList_, vector<CreateAssociatedResourceRulesRequest::CreateRulesList>) };
    inline CreateAssociatedResourceRulesRequest& setCreateRulesList(const vector<CreateAssociatedResourceRulesRequest::CreateRulesList> & createRulesList) { DARABONBA_PTR_SET_VALUE(createRulesList_, createRulesList) };
    inline CreateAssociatedResourceRulesRequest& setCreateRulesList(vector<CreateAssociatedResourceRulesRequest::CreateRulesList> && createRulesList) { DARABONBA_PTR_SET_RVALUE(createRulesList_, createRulesList) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateAssociatedResourceRulesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateAssociatedResourceRulesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAssociatedResourceRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateAssociatedResourceRulesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


  protected:
    // A list of associated resource tag rules.
    shared_ptr<vector<CreateAssociatedResourceRulesRequest::CreateRulesList>> createRulesList_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tag20180828
#endif
