// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDBATCHAXGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDBATCHAXGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BindBatchAxgRequestAxgBindList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindBatchAxgRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindBatchAxgRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AxgBindList, axgBindList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, BindBatchAxgRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AxgBindList, axgBindList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    BindBatchAxgRequest() = default ;
    BindBatchAxgRequest(const BindBatchAxgRequest &) = default ;
    BindBatchAxgRequest(BindBatchAxgRequest &&) = default ;
    BindBatchAxgRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindBatchAxgRequest() = default ;
    BindBatchAxgRequest& operator=(const BindBatchAxgRequest &) = default ;
    BindBatchAxgRequest& operator=(BindBatchAxgRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->axgBindList_ == nullptr
        && return this->ownerId_ == nullptr && return this->poolKey_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // axgBindList Field Functions 
    bool hasAxgBindList() const { return this->axgBindList_ != nullptr;};
    void deleteAxgBindList() { this->axgBindList_ = nullptr;};
    inline const vector<BindBatchAxgRequestAxgBindList> & axgBindList() const { DARABONBA_PTR_GET_CONST(axgBindList_, vector<BindBatchAxgRequestAxgBindList>) };
    inline vector<BindBatchAxgRequestAxgBindList> axgBindList() { DARABONBA_PTR_GET(axgBindList_, vector<BindBatchAxgRequestAxgBindList>) };
    inline BindBatchAxgRequest& setAxgBindList(const vector<BindBatchAxgRequestAxgBindList> & axgBindList) { DARABONBA_PTR_SET_VALUE(axgBindList_, axgBindList) };
    inline BindBatchAxgRequest& setAxgBindList(vector<BindBatchAxgRequestAxgBindList> && axgBindList) { DARABONBA_PTR_SET_RVALUE(axgBindList_, axgBindList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindBatchAxgRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string poolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline BindBatchAxgRequest& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline BindBatchAxgRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline BindBatchAxgRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<BindBatchAxgRequestAxgBindList>> axgBindList_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> poolKey_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
