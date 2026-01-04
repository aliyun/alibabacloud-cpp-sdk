// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPCPREFIXLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPCPREFIXLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpcPrefixListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpcPrefixListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddPrefixListEntry, addPrefixListEntry_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(MaxEntries, maxEntries_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrefixListDescription, prefixListDescription_);
      DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_TO_JSON(PrefixListName, prefixListName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemovePrefixListEntry, removePrefixListEntry_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpcPrefixListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddPrefixListEntry, addPrefixListEntry_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(MaxEntries, maxEntries_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrefixListDescription, prefixListDescription_);
      DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
      DARABONBA_PTR_FROM_JSON(PrefixListName, prefixListName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemovePrefixListEntry, removePrefixListEntry_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyVpcPrefixListRequest() = default ;
    ModifyVpcPrefixListRequest(const ModifyVpcPrefixListRequest &) = default ;
    ModifyVpcPrefixListRequest(ModifyVpcPrefixListRequest &&) = default ;
    ModifyVpcPrefixListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpcPrefixListRequest() = default ;
    ModifyVpcPrefixListRequest& operator=(const ModifyVpcPrefixListRequest &) = default ;
    ModifyVpcPrefixListRequest& operator=(ModifyVpcPrefixListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemovePrefixListEntry : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemovePrefixListEntry& obj) { 
        DARABONBA_PTR_TO_JSON(Cidr, cidr_);
        DARABONBA_PTR_TO_JSON(Description, description_);
      };
      friend void from_json(const Darabonba::Json& j, RemovePrefixListEntry& obj) { 
        DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
      };
      RemovePrefixListEntry() = default ;
      RemovePrefixListEntry(const RemovePrefixListEntry &) = default ;
      RemovePrefixListEntry(RemovePrefixListEntry &&) = default ;
      RemovePrefixListEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemovePrefixListEntry() = default ;
      RemovePrefixListEntry& operator=(const RemovePrefixListEntry &) = default ;
      RemovePrefixListEntry& operator=(RemovePrefixListEntry &&) = default ;
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
      inline RemovePrefixListEntry& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RemovePrefixListEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    protected:
      // The CIDR block that you want to delete from the prefix list.
      shared_ptr<string> cidr_ {};
      // The description of the CIDR block that you want to delete.
      shared_ptr<string> description_ {};
    };

    class AddPrefixListEntry : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddPrefixListEntry& obj) { 
        DARABONBA_PTR_TO_JSON(Cidr, cidr_);
        DARABONBA_PTR_TO_JSON(Description, description_);
      };
      friend void from_json(const Darabonba::Json& j, AddPrefixListEntry& obj) { 
        DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
      };
      AddPrefixListEntry() = default ;
      AddPrefixListEntry(const AddPrefixListEntry &) = default ;
      AddPrefixListEntry(AddPrefixListEntry &&) = default ;
      AddPrefixListEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddPrefixListEntry() = default ;
      AddPrefixListEntry& operator=(const AddPrefixListEntry &) = default ;
      AddPrefixListEntry& operator=(AddPrefixListEntry &&) = default ;
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
      inline AddPrefixListEntry& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AddPrefixListEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    protected:
      // The CIDR block to be added to the prefix list.
      // 
      // >  If the CIDR block already exists in the prefix list, you can only modify the description of the CIDR block by setting the **AddPrefixListEntry.N.Description** parameter.
      shared_ptr<string> cidr_ {};
      // The description of the CIDR block to be added to the prefix list.
      // 
      // The description must be 1 to 128 characters in length, and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
    };

    virtual bool empty() const override { return this->addPrefixListEntry_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->maxEntries_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->prefixListDescription_ == nullptr && this->prefixListId_ == nullptr && this->prefixListName_ == nullptr && this->regionId_ == nullptr && this->removePrefixListEntry_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // addPrefixListEntry Field Functions 
    bool hasAddPrefixListEntry() const { return this->addPrefixListEntry_ != nullptr;};
    void deleteAddPrefixListEntry() { this->addPrefixListEntry_ = nullptr;};
    inline const vector<ModifyVpcPrefixListRequest::AddPrefixListEntry> & getAddPrefixListEntry() const { DARABONBA_PTR_GET_CONST(addPrefixListEntry_, vector<ModifyVpcPrefixListRequest::AddPrefixListEntry>) };
    inline vector<ModifyVpcPrefixListRequest::AddPrefixListEntry> getAddPrefixListEntry() { DARABONBA_PTR_GET(addPrefixListEntry_, vector<ModifyVpcPrefixListRequest::AddPrefixListEntry>) };
    inline ModifyVpcPrefixListRequest& setAddPrefixListEntry(const vector<ModifyVpcPrefixListRequest::AddPrefixListEntry> & addPrefixListEntry) { DARABONBA_PTR_SET_VALUE(addPrefixListEntry_, addPrefixListEntry) };
    inline ModifyVpcPrefixListRequest& setAddPrefixListEntry(vector<ModifyVpcPrefixListRequest::AddPrefixListEntry> && addPrefixListEntry) { DARABONBA_PTR_SET_RVALUE(addPrefixListEntry_, addPrefixListEntry) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyVpcPrefixListRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyVpcPrefixListRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // maxEntries Field Functions 
    bool hasMaxEntries() const { return this->maxEntries_ != nullptr;};
    void deleteMaxEntries() { this->maxEntries_ = nullptr;};
    inline int32_t getMaxEntries() const { DARABONBA_PTR_GET_DEFAULT(maxEntries_, 0) };
    inline ModifyVpcPrefixListRequest& setMaxEntries(int32_t maxEntries) { DARABONBA_PTR_SET_VALUE(maxEntries_, maxEntries) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyVpcPrefixListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyVpcPrefixListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prefixListDescription Field Functions 
    bool hasPrefixListDescription() const { return this->prefixListDescription_ != nullptr;};
    void deletePrefixListDescription() { this->prefixListDescription_ = nullptr;};
    inline string getPrefixListDescription() const { DARABONBA_PTR_GET_DEFAULT(prefixListDescription_, "") };
    inline ModifyVpcPrefixListRequest& setPrefixListDescription(string prefixListDescription) { DARABONBA_PTR_SET_VALUE(prefixListDescription_, prefixListDescription) };


    // prefixListId Field Functions 
    bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
    void deletePrefixListId() { this->prefixListId_ = nullptr;};
    inline string getPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
    inline ModifyVpcPrefixListRequest& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


    // prefixListName Field Functions 
    bool hasPrefixListName() const { return this->prefixListName_ != nullptr;};
    void deletePrefixListName() { this->prefixListName_ = nullptr;};
    inline string getPrefixListName() const { DARABONBA_PTR_GET_DEFAULT(prefixListName_, "") };
    inline ModifyVpcPrefixListRequest& setPrefixListName(string prefixListName) { DARABONBA_PTR_SET_VALUE(prefixListName_, prefixListName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyVpcPrefixListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removePrefixListEntry Field Functions 
    bool hasRemovePrefixListEntry() const { return this->removePrefixListEntry_ != nullptr;};
    void deleteRemovePrefixListEntry() { this->removePrefixListEntry_ = nullptr;};
    inline const vector<ModifyVpcPrefixListRequest::RemovePrefixListEntry> & getRemovePrefixListEntry() const { DARABONBA_PTR_GET_CONST(removePrefixListEntry_, vector<ModifyVpcPrefixListRequest::RemovePrefixListEntry>) };
    inline vector<ModifyVpcPrefixListRequest::RemovePrefixListEntry> getRemovePrefixListEntry() { DARABONBA_PTR_GET(removePrefixListEntry_, vector<ModifyVpcPrefixListRequest::RemovePrefixListEntry>) };
    inline ModifyVpcPrefixListRequest& setRemovePrefixListEntry(const vector<ModifyVpcPrefixListRequest::RemovePrefixListEntry> & removePrefixListEntry) { DARABONBA_PTR_SET_VALUE(removePrefixListEntry_, removePrefixListEntry) };
    inline ModifyVpcPrefixListRequest& setRemovePrefixListEntry(vector<ModifyVpcPrefixListRequest::RemovePrefixListEntry> && removePrefixListEntry) { DARABONBA_PTR_SET_RVALUE(removePrefixListEntry_, removePrefixListEntry) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyVpcPrefixListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyVpcPrefixListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The information about CIDR blocks to be added to the prefix list.
    shared_ptr<vector<ModifyVpcPrefixListRequest::AddPrefixListEntry>> addPrefixListEntry_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system uses **RequestId** as **ClientToken**. **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to only precheck the request. Valid values:
    // 
    // *   **true**: checks the request without performing the operation. The system prechecks the required parameters, request syntax, and limits. If the request fails the precheck, an error message is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // *   **false** (default): sends the request. If the request passes the check, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The maximum number of CIDR blocks supported by the prefix list after the configuration of the prefix list is modified.
    shared_ptr<int32_t> maxEntries_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The new description of the prefix list.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with `http://` or `https://`.
    shared_ptr<string> prefixListDescription_ {};
    // The ID of the prefix list.
    // 
    // This parameter is required.
    shared_ptr<string> prefixListId_ {};
    // The new name of the prefix list.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with `http://` or `https://`.
    shared_ptr<string> prefixListName_ {};
    // The region ID of the prefix list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The information about CIDR blocks to be deleted to the prefix list.
    shared_ptr<vector<ModifyVpcPrefixListRequest::RemovePrefixListEntry>> removePrefixListEntry_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
