// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYPAIRSREQUEST_HPP_
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
  class DescribeKeyPairsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyPairsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IncludePublicKey, includePublicKey_);
      DARABONBA_PTR_TO_JSON(KeyPairFingerPrint, keyPairFingerPrint_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyPairsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IncludePublicKey, includePublicKey_);
      DARABONBA_PTR_FROM_JSON(KeyPairFingerPrint, keyPairFingerPrint_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeKeyPairsRequest() = default ;
    DescribeKeyPairsRequest(const DescribeKeyPairsRequest &) = default ;
    DescribeKeyPairsRequest(DescribeKeyPairsRequest &&) = default ;
    DescribeKeyPairsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyPairsRequest() = default ;
    DescribeKeyPairsRequest& operator=(const DescribeKeyPairsRequest &) = default ;
    DescribeKeyPairsRequest& operator=(DescribeKeyPairsRequest &&) = default ;
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
      // The tag key of the key pair. Valid values of N: 1 to 20.
      // 
      // If you use a single tag to filter resources, the resource count with the specified tag cannot exceed 1000. If you use multiple tags to filter resources, the resource count of resources that are attached with all specified tags cannot exceed 1000. If the resource count exceeds 1000, call the [ListTagResources](https://help.aliyun.com/document_detail/110425.html) operation to query resources.
      shared_ptr<string> key_ {};
      // The tag value of the key pair. Valid values of N: 1 to 20.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->includePublicKey_ == nullptr
        && this->keyPairFingerPrint_ == nullptr && this->keyPairName_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr; };
    // includePublicKey Field Functions 
    bool hasIncludePublicKey() const { return this->includePublicKey_ != nullptr;};
    void deleteIncludePublicKey() { this->includePublicKey_ = nullptr;};
    inline bool getIncludePublicKey() const { DARABONBA_PTR_GET_DEFAULT(includePublicKey_, false) };
    inline DescribeKeyPairsRequest& setIncludePublicKey(bool includePublicKey) { DARABONBA_PTR_SET_VALUE(includePublicKey_, includePublicKey) };


    // keyPairFingerPrint Field Functions 
    bool hasKeyPairFingerPrint() const { return this->keyPairFingerPrint_ != nullptr;};
    void deleteKeyPairFingerPrint() { this->keyPairFingerPrint_ = nullptr;};
    inline string getKeyPairFingerPrint() const { DARABONBA_PTR_GET_DEFAULT(keyPairFingerPrint_, "") };
    inline DescribeKeyPairsRequest& setKeyPairFingerPrint(string keyPairFingerPrint) { DARABONBA_PTR_SET_VALUE(keyPairFingerPrint_, keyPairFingerPrint) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline DescribeKeyPairsRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeKeyPairsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeKeyPairsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeKeyPairsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeKeyPairsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeKeyPairsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeKeyPairsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeKeyPairsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeKeyPairsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeKeyPairsRequest::Tag>) };
    inline vector<DescribeKeyPairsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeKeyPairsRequest::Tag>) };
    inline DescribeKeyPairsRequest& setTag(const vector<DescribeKeyPairsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeKeyPairsRequest& setTag(vector<DescribeKeyPairsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Specifies whether to include PublicKey in the response.
    // Default value: false.
    shared_ptr<bool> includePublicKey_ {};
    // The fingerprint of the key pair. The fingerprint uses the message-digest algorithm 5 (MD5) based on the public key fingerprint format defined in RFC 4716. For more information, see [RFC 4716](https://tools.ietf.org/html/rfc4716).
    shared_ptr<string> keyPairFingerPrint_ {};
    // The name of the key pair. You can use regular expressions for fuzzy search, with the asterisk (*) to match child table expressions. Examples:
    // 
    // - `*SshKey`: searches for key pair names that end with SshKey, including SshKey.
    // - `SshKey*`: searches for key pair names that start with SshKey, including SshKey.
    // - `*SshKey*`: searches for key pair names that contain SshKey, including SshKey.
    // - `SshKey`: exact match of SshKey.
    shared_ptr<string> keyPairName_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number of the key pair list. Minimum value: 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page in paging queries. Settings: Maximum value: 50.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the key pairs. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the key pairs belong. When you use this parameter to filter resources, the resource count cannot exceed 1000.
    // 
    // >Filtering by the default resource group is not supported.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tags.
    shared_ptr<vector<DescribeKeyPairsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
