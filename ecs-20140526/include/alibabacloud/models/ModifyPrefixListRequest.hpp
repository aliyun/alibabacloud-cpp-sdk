// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPREFIXLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPREFIXLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyPrefixListRequestAddEntry.hpp>
#include <alibabacloud/models/ModifyPrefixListRequestRemoveEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyPrefixListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPrefixListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddEntry, addEntry_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_TO_JSON(PrefixListName, prefixListName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoveEntry, removeEntry_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPrefixListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddEntry, addEntry_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_FROM_JSON(PrefixListName, prefixListName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoveEntry, removeEntry_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyPrefixListRequest() = default ;
    ModifyPrefixListRequest(const ModifyPrefixListRequest &) = default ;
    ModifyPrefixListRequest(ModifyPrefixListRequest &&) = default ;
    ModifyPrefixListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPrefixListRequest() = default ;
    ModifyPrefixListRequest& operator=(const ModifyPrefixListRequest &) = default ;
    ModifyPrefixListRequest& operator=(ModifyPrefixListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addEntry_ == nullptr
        && return this->description_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->prefixListId_ == nullptr && return this->prefixListName_ == nullptr
        && return this->regionId_ == nullptr && return this->removeEntry_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // addEntry Field Functions 
    bool hasAddEntry() const { return this->addEntry_ != nullptr;};
    void deleteAddEntry() { this->addEntry_ = nullptr;};
    inline const vector<ModifyPrefixListRequestAddEntry> & addEntry() const { DARABONBA_PTR_GET_CONST(addEntry_, vector<ModifyPrefixListRequestAddEntry>) };
    inline vector<ModifyPrefixListRequestAddEntry> addEntry() { DARABONBA_PTR_GET(addEntry_, vector<ModifyPrefixListRequestAddEntry>) };
    inline ModifyPrefixListRequest& setAddEntry(const vector<ModifyPrefixListRequestAddEntry> & addEntry) { DARABONBA_PTR_SET_VALUE(addEntry_, addEntry) };
    inline ModifyPrefixListRequest& setAddEntry(vector<ModifyPrefixListRequestAddEntry> && addEntry) { DARABONBA_PTR_SET_RVALUE(addEntry_, addEntry) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyPrefixListRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyPrefixListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyPrefixListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prefixListId Field Functions 
    bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
    void deletePrefixListId() { this->prefixListId_ = nullptr;};
    inline string prefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
    inline ModifyPrefixListRequest& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


    // prefixListName Field Functions 
    bool hasPrefixListName() const { return this->prefixListName_ != nullptr;};
    void deletePrefixListName() { this->prefixListName_ = nullptr;};
    inline string prefixListName() const { DARABONBA_PTR_GET_DEFAULT(prefixListName_, "") };
    inline ModifyPrefixListRequest& setPrefixListName(string prefixListName) { DARABONBA_PTR_SET_VALUE(prefixListName_, prefixListName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyPrefixListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removeEntry Field Functions 
    bool hasRemoveEntry() const { return this->removeEntry_ != nullptr;};
    void deleteRemoveEntry() { this->removeEntry_ = nullptr;};
    inline const vector<ModifyPrefixListRequestRemoveEntry> & removeEntry() const { DARABONBA_PTR_GET_CONST(removeEntry_, vector<ModifyPrefixListRequestRemoveEntry>) };
    inline vector<ModifyPrefixListRequestRemoveEntry> removeEntry() { DARABONBA_PTR_GET(removeEntry_, vector<ModifyPrefixListRequestRemoveEntry>) };
    inline ModifyPrefixListRequest& setRemoveEntry(const vector<ModifyPrefixListRequestRemoveEntry> & removeEntry) { DARABONBA_PTR_SET_VALUE(removeEntry_, removeEntry) };
    inline ModifyPrefixListRequest& setRemoveEntry(vector<ModifyPrefixListRequestRemoveEntry> && removeEntry) { DARABONBA_PTR_SET_RVALUE(removeEntry_, removeEntry) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyPrefixListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyPrefixListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The entries to be added to the prefix list.
    std::shared_ptr<vector<ModifyPrefixListRequestAddEntry>> addEntry_ = nullptr;
    // The description of the prefix list. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the prefix list.
    // 
    // This parameter is required.
    std::shared_ptr<string> prefixListId_ = nullptr;
    // The name of the prefix list. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with `http://`, `https://`, `com.aliyun`, or `com.alibabacloud`. The name can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    std::shared_ptr<string> prefixListName_ = nullptr;
    // The region ID of the prefix list. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The entries to be deleted from the prefix list.
    std::shared_ptr<vector<ModifyPrefixListRequestRemoveEntry>> removeEntry_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
