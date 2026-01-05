// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPREFIXLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPREFIXLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class RemoveEntry : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoveEntry& obj) { 
        DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      };
      friend void from_json(const Darabonba::Json& j, RemoveEntry& obj) { 
        DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      };
      RemoveEntry() = default ;
      RemoveEntry(const RemoveEntry &) = default ;
      RemoveEntry(RemoveEntry &&) = default ;
      RemoveEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoveEntry() = default ;
      RemoveEntry& operator=(const RemoveEntry &) = default ;
      RemoveEntry& operator=(RemoveEntry &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidr_ == nullptr; };
      // cidr Field Functions 
      bool hasCidr() const { return this->cidr_ != nullptr;};
      void deleteCidr() { this->cidr_ = nullptr;};
      inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
      inline RemoveEntry& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    protected:
      // The CIDR block in entry N to be deleted from the prefix list. Valid values of N: 0 to 200.
      // 
      // Take note of the following items when you delete the entries:
      // 
      // *   You cannot specify duplicate CIDR blocks.
      // *   The CIDR blocks cannot be the same as the `AddEntry.N.Cidr` values.
      // 
      // This parameter is required.
      shared_ptr<string> cidr_ {};
    };

    class AddEntry : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddEntry& obj) { 
        DARABONBA_PTR_TO_JSON(Cidr, cidr_);
        DARABONBA_PTR_TO_JSON(Description, description_);
      };
      friend void from_json(const Darabonba::Json& j, AddEntry& obj) { 
        DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
      };
      AddEntry() = default ;
      AddEntry(const AddEntry &) = default ;
      AddEntry(AddEntry &&) = default ;
      AddEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddEntry() = default ;
      AddEntry& operator=(const AddEntry &) = default ;
      AddEntry& operator=(AddEntry &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cidr_ == nullptr
        && this->description_ == nullptr; };
      // cidr Field Functions 
      bool hasCidr() const { return this->cidr_ != nullptr;};
      void deleteCidr() { this->cidr_ = nullptr;};
      inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
      inline AddEntry& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AddEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    protected:
      // The CIDR block in entry N to be added to the prefix list. Valid values of N: 0 to 200.
      // 
      // Take note of the following items when you add the entries:
      // 
      // *   The total number of entries in the prefix list cannot exceed the maximum number of entries you specified for the prefix list. You can call the [DescribePrefixListAttributes](https://help.aliyun.com/document_detail/205872.html) operation to query the maximum number of entries that the prefix list can contain.
      // *   You cannot specify duplicate CIDR blocks.
      // *   The CIDR blocks cannot be the same as the `RemoveEntry.N.Cidr` values.
      // 
      // This parameter is required.
      shared_ptr<string> cidr_ {};
      // The description in entry N. The description must be 2 to 32 characters in length and cannot start with `http://` or `https://`. Valid values of N: 0 to 200.
      shared_ptr<string> description_ {};
    };

    virtual bool empty() const override { return this->addEntry_ == nullptr
        && this->description_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->prefixListId_ == nullptr && this->prefixListName_ == nullptr
        && this->regionId_ == nullptr && this->removeEntry_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // addEntry Field Functions 
    bool hasAddEntry() const { return this->addEntry_ != nullptr;};
    void deleteAddEntry() { this->addEntry_ = nullptr;};
    inline const vector<ModifyPrefixListRequest::AddEntry> & getAddEntry() const { DARABONBA_PTR_GET_CONST(addEntry_, vector<ModifyPrefixListRequest::AddEntry>) };
    inline vector<ModifyPrefixListRequest::AddEntry> getAddEntry() { DARABONBA_PTR_GET(addEntry_, vector<ModifyPrefixListRequest::AddEntry>) };
    inline ModifyPrefixListRequest& setAddEntry(const vector<ModifyPrefixListRequest::AddEntry> & addEntry) { DARABONBA_PTR_SET_VALUE(addEntry_, addEntry) };
    inline ModifyPrefixListRequest& setAddEntry(vector<ModifyPrefixListRequest::AddEntry> && addEntry) { DARABONBA_PTR_SET_RVALUE(addEntry_, addEntry) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyPrefixListRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyPrefixListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyPrefixListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prefixListId Field Functions 
    bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
    void deletePrefixListId() { this->prefixListId_ = nullptr;};
    inline string getPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
    inline ModifyPrefixListRequest& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


    // prefixListName Field Functions 
    bool hasPrefixListName() const { return this->prefixListName_ != nullptr;};
    void deletePrefixListName() { this->prefixListName_ = nullptr;};
    inline string getPrefixListName() const { DARABONBA_PTR_GET_DEFAULT(prefixListName_, "") };
    inline ModifyPrefixListRequest& setPrefixListName(string prefixListName) { DARABONBA_PTR_SET_VALUE(prefixListName_, prefixListName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyPrefixListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removeEntry Field Functions 
    bool hasRemoveEntry() const { return this->removeEntry_ != nullptr;};
    void deleteRemoveEntry() { this->removeEntry_ = nullptr;};
    inline const vector<ModifyPrefixListRequest::RemoveEntry> & getRemoveEntry() const { DARABONBA_PTR_GET_CONST(removeEntry_, vector<ModifyPrefixListRequest::RemoveEntry>) };
    inline vector<ModifyPrefixListRequest::RemoveEntry> getRemoveEntry() { DARABONBA_PTR_GET(removeEntry_, vector<ModifyPrefixListRequest::RemoveEntry>) };
    inline ModifyPrefixListRequest& setRemoveEntry(const vector<ModifyPrefixListRequest::RemoveEntry> & removeEntry) { DARABONBA_PTR_SET_VALUE(removeEntry_, removeEntry) };
    inline ModifyPrefixListRequest& setRemoveEntry(vector<ModifyPrefixListRequest::RemoveEntry> && removeEntry) { DARABONBA_PTR_SET_RVALUE(removeEntry_, removeEntry) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyPrefixListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyPrefixListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The entries to be added to the prefix list.
    shared_ptr<vector<ModifyPrefixListRequest::AddEntry>> addEntry_ {};
    // The description of the prefix list. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the prefix list.
    // 
    // This parameter is required.
    shared_ptr<string> prefixListId_ {};
    // The name of the prefix list. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with `http://`, `https://`, `com.aliyun`, or `com.alibabacloud`. The name can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    shared_ptr<string> prefixListName_ {};
    // The region ID of the prefix list. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The entries to be deleted from the prefix list.
    shared_ptr<vector<ModifyPrefixListRequest::RemoveEntry>> removeEntry_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
