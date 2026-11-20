// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSECRETNODETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSECRETNODETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySecretNoDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySecretNoDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecretNo, secretNo_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySecretNoDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecretNo, secretNo_);
    };
    QuerySecretNoDetailRequest() = default ;
    QuerySecretNoDetailRequest(const QuerySecretNoDetailRequest &) = default ;
    QuerySecretNoDetailRequest(QuerySecretNoDetailRequest &&) = default ;
    QuerySecretNoDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySecretNoDetailRequest() = default ;
    QuerySecretNoDetailRequest& operator=(const QuerySecretNoDetailRequest &) = default ;
    QuerySecretNoDetailRequest& operator=(QuerySecretNoDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->poolKey_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->secretNo_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QuerySecretNoDetailRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string getPoolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline QuerySecretNoDetailRequest& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QuerySecretNoDetailRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QuerySecretNoDetailRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // secretNo Field Functions 
    bool hasSecretNo() const { return this->secretNo_ != nullptr;};
    void deleteSecretNo() { this->secretNo_ = nullptr;};
    inline string getSecretNo() const { DARABONBA_PTR_GET_DEFAULT(secretNo_, "") };
    inline QuerySecretNoDetailRequest& setSecretNo(string secretNo) { DARABONBA_PTR_SET_VALUE(secretNo_, secretNo) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    // The key of the number pool.
    // 
    // Log on to the Phone Number Protection console and obtain the **Number Pool Key** on the [Number Pool Management](https://dyplsnext.console.aliyun.com/number-pool) page.
    // 
    // This parameter is required.
    shared_ptr<string> poolKey_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The privacy number, which is the X number.
    // 
    // Log on to the Phone Number Protection console and obtain the X number on the [Number Management](https://dyplsnext.console.aliyun.com/number/list) page. Alternatively, view the **SecretNo** parameter in the response when you call a number binding operation such as [BindAxb](https://www.alibabacloud.com/help/en/pnp/developer-reference/api-dyplsapi-2017-05-25-bindaxb).
    // 
    // This parameter is required.
    shared_ptr<string> secretNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
