// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPREFIXLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPREFIXLISTREQUEST_HPP_
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
  class CreatePrefixListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrefixListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressFamily, addressFamily_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Entry, entry_);
      DARABONBA_PTR_TO_JSON(MaxEntries, maxEntries_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrefixListName, prefixListName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrefixListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressFamily, addressFamily_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Entry, entry_);
      DARABONBA_PTR_FROM_JSON(MaxEntries, maxEntries_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrefixListName, prefixListName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreatePrefixListRequest() = default ;
    CreatePrefixListRequest(const CreatePrefixListRequest &) = default ;
    CreatePrefixListRequest(CreatePrefixListRequest &&) = default ;
    CreatePrefixListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrefixListRequest() = default ;
    CreatePrefixListRequest& operator=(const CreatePrefixListRequest &) = default ;
    CreatePrefixListRequest& operator=(CreatePrefixListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The value of tag N. Valid values of N: 1 to 20. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length and cannot contain`  http:// or https:// `.
      shared_ptr<string> value_ {};
    };

    class Entry : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entry& obj) { 
        DARABONBA_PTR_TO_JSON(Cidr, cidr_);
        DARABONBA_PTR_TO_JSON(Description, description_);
      };
      friend void from_json(const Darabonba::Json& j, Entry& obj) { 
        DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
      };
      Entry() = default ;
      Entry(const Entry &) = default ;
      Entry(Entry &&) = default ;
      Entry(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entry() = default ;
      Entry& operator=(const Entry &) = default ;
      Entry& operator=(Entry &&) = default ;
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
      inline Entry& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Entry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    protected:
      // The CIDR block in entry N. Valid values of N: 0 to 200. Notes:
      // 
      // *   The total number of entries cannot exceed the `MaxEntries` value.
      // *   CIDR block types are determined by the IP address family. You cannot combine IPv4 and IPv6 CIDR blocks in a single prefix list.
      // *   CIDR blocks must be unique across all entries in a prefix list. For example, you cannot specify 192.168.1.0/24 twice in the entries of the prefix list.
      // *   You can set a single IP address. The system automatically converts the IP address to a CIDR block. For example, if you set 192.168.1.100, the system automatically converts it to 192.168.1.100/32.
      // *   If you use an IPv6 CIDR block, the system automatically converts the CIDR block to zero and the letters to lowercase. For example, if you specify 2001:0DB8:0000:0000:0000:0000:0000:0000/32, the system converts it to 2001:db8::/32.
      // 
      // For more information about CIDR blocks, see [What is CIDR?](~~185311#598efe6ef1v00~~)
      // 
      // This parameter is left empty by default.
      // 
      // This parameter is required.
      shared_ptr<string> cidr_ {};
      // The description in entry N. The description must be 2 to 32 characters in length and cannot start with `http://` or `https://`. Valid values of N: 0 to 200.
      shared_ptr<string> description_ {};
    };

    virtual bool empty() const override { return this->addressFamily_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->entry_ == nullptr && this->maxEntries_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->prefixListName_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr; };
    // addressFamily Field Functions 
    bool hasAddressFamily() const { return this->addressFamily_ != nullptr;};
    void deleteAddressFamily() { this->addressFamily_ = nullptr;};
    inline string getAddressFamily() const { DARABONBA_PTR_GET_DEFAULT(addressFamily_, "") };
    inline CreatePrefixListRequest& setAddressFamily(string addressFamily) { DARABONBA_PTR_SET_VALUE(addressFamily_, addressFamily) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreatePrefixListRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePrefixListRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // entry Field Functions 
    bool hasEntry() const { return this->entry_ != nullptr;};
    void deleteEntry() { this->entry_ = nullptr;};
    inline const vector<CreatePrefixListRequest::Entry> & getEntry() const { DARABONBA_PTR_GET_CONST(entry_, vector<CreatePrefixListRequest::Entry>) };
    inline vector<CreatePrefixListRequest::Entry> getEntry() { DARABONBA_PTR_GET(entry_, vector<CreatePrefixListRequest::Entry>) };
    inline CreatePrefixListRequest& setEntry(const vector<CreatePrefixListRequest::Entry> & entry) { DARABONBA_PTR_SET_VALUE(entry_, entry) };
    inline CreatePrefixListRequest& setEntry(vector<CreatePrefixListRequest::Entry> && entry) { DARABONBA_PTR_SET_RVALUE(entry_, entry) };


    // maxEntries Field Functions 
    bool hasMaxEntries() const { return this->maxEntries_ != nullptr;};
    void deleteMaxEntries() { this->maxEntries_ = nullptr;};
    inline int32_t getMaxEntries() const { DARABONBA_PTR_GET_DEFAULT(maxEntries_, 0) };
    inline CreatePrefixListRequest& setMaxEntries(int32_t maxEntries) { DARABONBA_PTR_SET_VALUE(maxEntries_, maxEntries) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreatePrefixListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreatePrefixListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prefixListName Field Functions 
    bool hasPrefixListName() const { return this->prefixListName_ != nullptr;};
    void deletePrefixListName() { this->prefixListName_ = nullptr;};
    inline string getPrefixListName() const { DARABONBA_PTR_GET_DEFAULT(prefixListName_, "") };
    inline CreatePrefixListRequest& setPrefixListName(string prefixListName) { DARABONBA_PTR_SET_VALUE(prefixListName_, prefixListName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePrefixListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePrefixListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreatePrefixListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreatePrefixListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreatePrefixListRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreatePrefixListRequest::Tag>) };
    inline vector<CreatePrefixListRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreatePrefixListRequest::Tag>) };
    inline CreatePrefixListRequest& setTag(const vector<CreatePrefixListRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreatePrefixListRequest& setTag(vector<CreatePrefixListRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The IP address family. Valid values:
    // 
    // *   IPv4
    // *   IPv6
    // 
    // This parameter is required.
    shared_ptr<string> addressFamily_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The `token` can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The description of the prefix list. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The details of entries in the prefix list.
    shared_ptr<vector<CreatePrefixListRequest::Entry>> entry_ {};
    // The maximum number of entries that the prefix list can contain. Valid values: 1 to 200.
    // 
    // This parameter is required.
    shared_ptr<int32_t> maxEntries_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The name of the prefix list. The name must be 2 to 128 characters in length, and can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-). It must start with a letter and cannot start with `http://`, `https://`, `com.aliyun`, or `com.alibabacloud`.
    // 
    // This parameter is required.
    shared_ptr<string> prefixListName_ {};
    // The ID of the region in which to create the prefix list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which to assign the prefix list.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tags to add to the prefix list.
    shared_ptr<vector<CreatePrefixListRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
