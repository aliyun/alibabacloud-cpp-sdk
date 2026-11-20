// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDBATCHAXGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDBATCHAXGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindBatchAxgShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindBatchAxgShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AxgBindList, axgBindListShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, BindBatchAxgShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AxgBindList, axgBindListShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    BindBatchAxgShrinkRequest() = default ;
    BindBatchAxgShrinkRequest(const BindBatchAxgShrinkRequest &) = default ;
    BindBatchAxgShrinkRequest(BindBatchAxgShrinkRequest &&) = default ;
    BindBatchAxgShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindBatchAxgShrinkRequest() = default ;
    BindBatchAxgShrinkRequest& operator=(const BindBatchAxgShrinkRequest &) = default ;
    BindBatchAxgShrinkRequest& operator=(BindBatchAxgShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->axgBindListShrink_ == nullptr
        && this->ownerId_ == nullptr && this->poolKey_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // axgBindListShrink Field Functions 
    bool hasAxgBindListShrink() const { return this->axgBindListShrink_ != nullptr;};
    void deleteAxgBindListShrink() { this->axgBindListShrink_ = nullptr;};
    inline string getAxgBindListShrink() const { DARABONBA_PTR_GET_DEFAULT(axgBindListShrink_, "") };
    inline BindBatchAxgShrinkRequest& setAxgBindListShrink(string axgBindListShrink) { DARABONBA_PTR_SET_VALUE(axgBindListShrink_, axgBindListShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindBatchAxgShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string getPoolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline BindBatchAxgShrinkRequest& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BindBatchAxgShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BindBatchAxgShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The list of AXG bindings.
    // 
    // This parameter is required.
    shared_ptr<string> axgBindListShrink_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The key of the number pool.
    // 
    // You can log on to the Phone Number Protection console and obtain the key on the [Number Pool Management](https://dyplsnext.console.aliyun.com/number-pool) page.
    shared_ptr<string> poolKey_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
