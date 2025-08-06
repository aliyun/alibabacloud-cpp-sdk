// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERSONALSTORAGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPERSONALSTORAGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetPersonalStorageListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPersonalStorageListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxKeys, maxKeys_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
      DARABONBA_PTR_TO_JSON(StorageRegion, storageRegion_);
    };
    friend void from_json(const Darabonba::Json& j, GetPersonalStorageListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxKeys, maxKeys_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
      DARABONBA_PTR_FROM_JSON(StorageRegion, storageRegion_);
    };
    GetPersonalStorageListRequest() = default ;
    GetPersonalStorageListRequest(const GetPersonalStorageListRequest &) = default ;
    GetPersonalStorageListRequest(GetPersonalStorageListRequest &&) = default ;
    GetPersonalStorageListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPersonalStorageListRequest() = default ;
    GetPersonalStorageListRequest& operator=(const GetPersonalStorageListRequest &) = default ;
    GetPersonalStorageListRequest& operator=(GetPersonalStorageListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxKeys_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->prefix_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->resourceRealOwnerId_ != nullptr && this->storageRegion_ != nullptr; };
    // maxKeys Field Functions 
    bool hasMaxKeys() const { return this->maxKeys_ != nullptr;};
    void deleteMaxKeys() { this->maxKeys_ = nullptr;};
    inline string maxKeys() const { DARABONBA_PTR_GET_DEFAULT(maxKeys_, "") };
    inline GetPersonalStorageListRequest& setMaxKeys(string maxKeys) { DARABONBA_PTR_SET_VALUE(maxKeys_, maxKeys) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline GetPersonalStorageListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetPersonalStorageListRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline GetPersonalStorageListRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline GetPersonalStorageListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline string resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, "") };
    inline GetPersonalStorageListRequest& setResourceOwnerId(string resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceRealOwnerId Field Functions 
    bool hasResourceRealOwnerId() const { return this->resourceRealOwnerId_ != nullptr;};
    void deleteResourceRealOwnerId() { this->resourceRealOwnerId_ = nullptr;};
    inline int64_t resourceRealOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceRealOwnerId_, 0L) };
    inline GetPersonalStorageListRequest& setResourceRealOwnerId(int64_t resourceRealOwnerId) { DARABONBA_PTR_SET_VALUE(resourceRealOwnerId_, resourceRealOwnerId) };


    // storageRegion Field Functions 
    bool hasStorageRegion() const { return this->storageRegion_ != nullptr;};
    void deleteStorageRegion() { this->storageRegion_ = nullptr;};
    inline string storageRegion() const { DARABONBA_PTR_GET_DEFAULT(storageRegion_, "") };
    inline GetPersonalStorageListRequest& setStorageRegion(string storageRegion) { DARABONBA_PTR_SET_VALUE(storageRegion_, storageRegion) };


  protected:
    std::shared_ptr<string> maxKeys_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> prefix_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<string> resourceOwnerId_ = nullptr;
    std::shared_ptr<int64_t> resourceRealOwnerId_ = nullptr;
    std::shared_ptr<string> storageRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
