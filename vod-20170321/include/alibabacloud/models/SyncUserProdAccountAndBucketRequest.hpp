// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCUSERPRODACCOUNTANDBUCKETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCUSERPRODACCOUNTANDBUCKETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SyncUserProdAccountAndBucketRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncUserProdAccountAndBucketRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindOssNotification, bindOssNotification_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncUserProdAccountAndBucketRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindOssNotification, bindOssNotification_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
    };
    SyncUserProdAccountAndBucketRequest() = default ;
    SyncUserProdAccountAndBucketRequest(const SyncUserProdAccountAndBucketRequest &) = default ;
    SyncUserProdAccountAndBucketRequest(SyncUserProdAccountAndBucketRequest &&) = default ;
    SyncUserProdAccountAndBucketRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncUserProdAccountAndBucketRequest() = default ;
    SyncUserProdAccountAndBucketRequest& operator=(const SyncUserProdAccountAndBucketRequest &) = default ;
    SyncUserProdAccountAndBucketRequest& operator=(SyncUserProdAccountAndBucketRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindOssNotification_ != nullptr
        && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->resourceRealOwnerId_ != nullptr; };
    // bindOssNotification Field Functions 
    bool hasBindOssNotification() const { return this->bindOssNotification_ != nullptr;};
    void deleteBindOssNotification() { this->bindOssNotification_ = nullptr;};
    inline bool bindOssNotification() const { DARABONBA_PTR_GET_DEFAULT(bindOssNotification_, false) };
    inline SyncUserProdAccountAndBucketRequest& setBindOssNotification(bool bindOssNotification) { DARABONBA_PTR_SET_VALUE(bindOssNotification_, bindOssNotification) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SyncUserProdAccountAndBucketRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SyncUserProdAccountAndBucketRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SyncUserProdAccountAndBucketRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceRealOwnerId Field Functions 
    bool hasResourceRealOwnerId() const { return this->resourceRealOwnerId_ != nullptr;};
    void deleteResourceRealOwnerId() { this->resourceRealOwnerId_ = nullptr;};
    inline int64_t resourceRealOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceRealOwnerId_, 0L) };
    inline SyncUserProdAccountAndBucketRequest& setResourceRealOwnerId(int64_t resourceRealOwnerId) { DARABONBA_PTR_SET_VALUE(resourceRealOwnerId_, resourceRealOwnerId) };


  protected:
    std::shared_ptr<bool> bindOssNotification_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<int64_t> resourceRealOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
