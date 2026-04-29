// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDCREATEQUEUESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDCREATEQUEUESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudCreateQueueShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudCreateQueueShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Queue, queueShrink_);
      DARABONBA_PTR_TO_JSON(QueueSkills, queueSkillsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudCreateQueueShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Queue, queueShrink_);
      DARABONBA_PTR_FROM_JSON(QueueSkills, queueSkillsShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CloudCreateQueueShrinkRequest() = default ;
    CloudCreateQueueShrinkRequest(const CloudCreateQueueShrinkRequest &) = default ;
    CloudCreateQueueShrinkRequest(CloudCreateQueueShrinkRequest &&) = default ;
    CloudCreateQueueShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudCreateQueueShrinkRequest() = default ;
    CloudCreateQueueShrinkRequest& operator=(const CloudCreateQueueShrinkRequest &) = default ;
    CloudCreateQueueShrinkRequest& operator=(CloudCreateQueueShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enterpriseId_ == nullptr
        && this->ownerId_ == nullptr && this->queueShrink_ == nullptr && this->queueSkillsShrink_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudCreateQueueShrinkRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CloudCreateQueueShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // queueShrink Field Functions 
    bool hasQueueShrink() const { return this->queueShrink_ != nullptr;};
    void deleteQueueShrink() { this->queueShrink_ = nullptr;};
    inline string getQueueShrink() const { DARABONBA_PTR_GET_DEFAULT(queueShrink_, "") };
    inline CloudCreateQueueShrinkRequest& setQueueShrink(string queueShrink) { DARABONBA_PTR_SET_VALUE(queueShrink_, queueShrink) };


    // queueSkillsShrink Field Functions 
    bool hasQueueSkillsShrink() const { return this->queueSkillsShrink_ != nullptr;};
    void deleteQueueSkillsShrink() { this->queueSkillsShrink_ = nullptr;};
    inline string getQueueSkillsShrink() const { DARABONBA_PTR_GET_DEFAULT(queueSkillsShrink_, "") };
    inline CloudCreateQueueShrinkRequest& setQueueSkillsShrink(string queueSkillsShrink) { DARABONBA_PTR_SET_VALUE(queueSkillsShrink_, queueSkillsShrink) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CloudCreateQueueShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloudCreateQueueShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 队列信息
    // 
    // This parameter is required.
    shared_ptr<string> queueShrink_ {};
    // 队列技能
    // 
    // This parameter is required.
    shared_ptr<string> queueSkillsShrink_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
