// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDCREATEQUEUESKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDCREATEQUEUESKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudCreateQueueSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudCreateQueueSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Qno, qno_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
      DARABONBA_PTR_TO_JSON(SkillLevel, skillLevel_);
    };
    friend void from_json(const Darabonba::Json& j, CloudCreateQueueSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Qno, qno_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
      DARABONBA_PTR_FROM_JSON(SkillLevel, skillLevel_);
    };
    CloudCreateQueueSkillRequest() = default ;
    CloudCreateQueueSkillRequest(const CloudCreateQueueSkillRequest &) = default ;
    CloudCreateQueueSkillRequest(CloudCreateQueueSkillRequest &&) = default ;
    CloudCreateQueueSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudCreateQueueSkillRequest() = default ;
    CloudCreateQueueSkillRequest& operator=(const CloudCreateQueueSkillRequest &) = default ;
    CloudCreateQueueSkillRequest& operator=(CloudCreateQueueSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enterpriseId_ == nullptr
        && this->ownerId_ == nullptr && this->qno_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->skillId_ == nullptr
        && this->skillLevel_ == nullptr; };
    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudCreateQueueSkillRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CloudCreateQueueSkillRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qno Field Functions 
    bool hasQno() const { return this->qno_ != nullptr;};
    void deleteQno() { this->qno_ = nullptr;};
    inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
    inline CloudCreateQueueSkillRequest& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CloudCreateQueueSkillRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloudCreateQueueSkillRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline int64_t getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, 0L) };
    inline CloudCreateQueueSkillRequest& setSkillId(int64_t skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


    // skillLevel Field Functions 
    bool hasSkillLevel() const { return this->skillLevel_ != nullptr;};
    void deleteSkillLevel() { this->skillLevel_ = nullptr;};
    inline int64_t getSkillLevel() const { DARABONBA_PTR_GET_DEFAULT(skillLevel_, 0L) };
    inline CloudCreateQueueSkillRequest& setSkillLevel(int64_t skillLevel) { DARABONBA_PTR_SET_VALUE(skillLevel_, skillLevel) };


  protected:
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 队列号
    // 
    // This parameter is required.
    shared_ptr<string> qno_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // skill的id
    // 
    // This parameter is required.
    shared_ptr<int64_t> skillId_ {};
    // 技能值
    // 
    // This parameter is required.
    shared_ptr<int64_t> skillLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
