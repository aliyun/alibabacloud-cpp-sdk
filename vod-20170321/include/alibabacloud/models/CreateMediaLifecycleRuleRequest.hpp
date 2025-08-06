// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIFECYCLERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIFECYCLERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CreateMediaLifecycleRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLifecycleRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
      DARABONBA_PTR_TO_JSON(RuleContent, ruleContent_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLifecycleRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceRealOwnerId, resourceRealOwnerId_);
      DARABONBA_PTR_FROM_JSON(RuleContent, ruleContent_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    CreateMediaLifecycleRuleRequest() = default ;
    CreateMediaLifecycleRuleRequest(const CreateMediaLifecycleRuleRequest &) = default ;
    CreateMediaLifecycleRuleRequest(CreateMediaLifecycleRuleRequest &&) = default ;
    CreateMediaLifecycleRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLifecycleRuleRequest() = default ;
    CreateMediaLifecycleRuleRequest& operator=(const CreateMediaLifecycleRuleRequest &) = default ;
    CreateMediaLifecycleRuleRequest& operator=(CreateMediaLifecycleRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->resourceRealOwnerId_ != nullptr && this->ruleContent_ != nullptr
        && this->ruleType_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateMediaLifecycleRuleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateMediaLifecycleRuleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateMediaLifecycleRuleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateMediaLifecycleRuleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceRealOwnerId Field Functions 
    bool hasResourceRealOwnerId() const { return this->resourceRealOwnerId_ != nullptr;};
    void deleteResourceRealOwnerId() { this->resourceRealOwnerId_ = nullptr;};
    inline int64_t resourceRealOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceRealOwnerId_, 0L) };
    inline CreateMediaLifecycleRuleRequest& setResourceRealOwnerId(int64_t resourceRealOwnerId) { DARABONBA_PTR_SET_VALUE(resourceRealOwnerId_, resourceRealOwnerId) };


    // ruleContent Field Functions 
    bool hasRuleContent() const { return this->ruleContent_ != nullptr;};
    void deleteRuleContent() { this->ruleContent_ = nullptr;};
    inline string ruleContent() const { DARABONBA_PTR_GET_DEFAULT(ruleContent_, "") };
    inline CreateMediaLifecycleRuleRequest& setRuleContent(string ruleContent) { DARABONBA_PTR_SET_VALUE(ruleContent_, ruleContent) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline CreateMediaLifecycleRuleRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<int64_t> resourceRealOwnerId_ = nullptr;
    std::shared_ptr<string> ruleContent_ = nullptr;
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
