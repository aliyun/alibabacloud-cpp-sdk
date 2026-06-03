// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDYPNSSMSVERIFYMESSAGEQUEUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDYPNSSMSVERIFYMESSAGEQUEUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class CreateDypnsSmsVerifyMessageQueueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDypnsSmsVerifyMessageQueueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QueryQueueTypes, queryQueueTypes_);
      DARABONBA_PTR_TO_JSON(QueueType, queueType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDypnsSmsVerifyMessageQueueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QueryQueueTypes, queryQueueTypes_);
      DARABONBA_PTR_FROM_JSON(QueueType, queueType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateDypnsSmsVerifyMessageQueueRequest() = default ;
    CreateDypnsSmsVerifyMessageQueueRequest(const CreateDypnsSmsVerifyMessageQueueRequest &) = default ;
    CreateDypnsSmsVerifyMessageQueueRequest(CreateDypnsSmsVerifyMessageQueueRequest &&) = default ;
    CreateDypnsSmsVerifyMessageQueueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDypnsSmsVerifyMessageQueueRequest() = default ;
    CreateDypnsSmsVerifyMessageQueueRequest& operator=(const CreateDypnsSmsVerifyMessageQueueRequest &) = default ;
    CreateDypnsSmsVerifyMessageQueueRequest& operator=(CreateDypnsSmsVerifyMessageQueueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->queryQueueTypes_ == nullptr && this->queueType_ == nullptr && this->region_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDypnsSmsVerifyMessageQueueRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // queryQueueTypes Field Functions 
    bool hasQueryQueueTypes() const { return this->queryQueueTypes_ != nullptr;};
    void deleteQueryQueueTypes() { this->queryQueueTypes_ = nullptr;};
    inline string getQueryQueueTypes() const { DARABONBA_PTR_GET_DEFAULT(queryQueueTypes_, "") };
    inline CreateDypnsSmsVerifyMessageQueueRequest& setQueryQueueTypes(string queryQueueTypes) { DARABONBA_PTR_SET_VALUE(queryQueueTypes_, queryQueueTypes) };


    // queueType Field Functions 
    bool hasQueueType() const { return this->queueType_ != nullptr;};
    void deleteQueueType() { this->queueType_ = nullptr;};
    inline string getQueueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, "") };
    inline CreateDypnsSmsVerifyMessageQueueRequest& setQueueType(string queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateDypnsSmsVerifyMessageQueueRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDypnsSmsVerifyMessageQueueRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDypnsSmsVerifyMessageQueueRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> queryQueueTypes_ {};
    shared_ptr<string> queueType_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
