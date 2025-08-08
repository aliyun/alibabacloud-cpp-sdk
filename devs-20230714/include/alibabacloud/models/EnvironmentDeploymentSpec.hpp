// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENVIRONMENTDEPLOYMENTSPEC_HPP_
#define ALIBABACLOUD_MODELS_ENVIRONMENTDEPLOYMENTSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class EnvironmentDeploymentSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnvironmentDeploymentSpec& obj) { 
      DARABONBA_PTR_TO_JSON(baseline, baseline_);
      DARABONBA_PTR_TO_JSON(changes, changes_);
      DARABONBA_PTR_TO_JSON(skipRemoveResources, skipRemoveResources_);
      DARABONBA_PTR_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(webhookCodeContext, webhookCodeContext_);
    };
    friend void from_json(const Darabonba::Json& j, EnvironmentDeploymentSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(baseline, baseline_);
      DARABONBA_PTR_FROM_JSON(changes, changes_);
      DARABONBA_PTR_FROM_JSON(skipRemoveResources, skipRemoveResources_);
      DARABONBA_PTR_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(webhookCodeContext, webhookCodeContext_);
    };
    EnvironmentDeploymentSpec() = default ;
    EnvironmentDeploymentSpec(const EnvironmentDeploymentSpec &) = default ;
    EnvironmentDeploymentSpec(EnvironmentDeploymentSpec &&) = default ;
    EnvironmentDeploymentSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnvironmentDeploymentSpec() = default ;
    EnvironmentDeploymentSpec& operator=(const EnvironmentDeploymentSpec &) = default ;
    EnvironmentDeploymentSpec& operator=(EnvironmentDeploymentSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseline_ != nullptr
        && this->changes_ != nullptr && this->skipRemoveResources_ != nullptr && this->target_ != nullptr && this->webhookCodeContext_ != nullptr; };
    // baseline Field Functions 
    bool hasBaseline() const { return this->baseline_ != nullptr;};
    void deleteBaseline() { this->baseline_ = nullptr;};
    inline const EnvironmentSnapshot & baseline() const { DARABONBA_PTR_GET_CONST(baseline_, EnvironmentSnapshot) };
    inline EnvironmentSnapshot baseline() { DARABONBA_PTR_GET(baseline_, EnvironmentSnapshot) };
    inline EnvironmentDeploymentSpec& setBaseline(const EnvironmentSnapshot & baseline) { DARABONBA_PTR_SET_VALUE(baseline_, baseline) };
    inline EnvironmentDeploymentSpec& setBaseline(EnvironmentSnapshot && baseline) { DARABONBA_PTR_SET_RVALUE(baseline_, baseline) };


    // changes Field Functions 
    bool hasChanges() const { return this->changes_ != nullptr;};
    void deleteChanges() { this->changes_ = nullptr;};
    inline const EnvironmentChanges & changes() const { DARABONBA_PTR_GET_CONST(changes_, EnvironmentChanges) };
    inline EnvironmentChanges changes() { DARABONBA_PTR_GET(changes_, EnvironmentChanges) };
    inline EnvironmentDeploymentSpec& setChanges(const EnvironmentChanges & changes) { DARABONBA_PTR_SET_VALUE(changes_, changes) };
    inline EnvironmentDeploymentSpec& setChanges(EnvironmentChanges && changes) { DARABONBA_PTR_SET_RVALUE(changes_, changes) };


    // skipRemoveResources Field Functions 
    bool hasSkipRemoveResources() const { return this->skipRemoveResources_ != nullptr;};
    void deleteSkipRemoveResources() { this->skipRemoveResources_ = nullptr;};
    inline bool skipRemoveResources() const { DARABONBA_PTR_GET_DEFAULT(skipRemoveResources_, false) };
    inline EnvironmentDeploymentSpec& setSkipRemoveResources(bool skipRemoveResources) { DARABONBA_PTR_SET_VALUE(skipRemoveResources_, skipRemoveResources) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const EnvironmentStagedConfigs & target() const { DARABONBA_PTR_GET_CONST(target_, EnvironmentStagedConfigs) };
    inline EnvironmentStagedConfigs target() { DARABONBA_PTR_GET(target_, EnvironmentStagedConfigs) };
    inline EnvironmentDeploymentSpec& setTarget(const EnvironmentStagedConfigs & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline EnvironmentDeploymentSpec& setTarget(EnvironmentStagedConfigs && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // webhookCodeContext Field Functions 
    bool hasWebhookCodeContext() const { return this->webhookCodeContext_ != nullptr;};
    void deleteWebhookCodeContext() { this->webhookCodeContext_ = nullptr;};
    inline const WebhookCodeContext & webhookCodeContext() const { DARABONBA_PTR_GET_CONST(webhookCodeContext_, WebhookCodeContext) };
    inline WebhookCodeContext webhookCodeContext() { DARABONBA_PTR_GET(webhookCodeContext_, WebhookCodeContext) };
    inline EnvironmentDeploymentSpec& setWebhookCodeContext(const WebhookCodeContext & webhookCodeContext) { DARABONBA_PTR_SET_VALUE(webhookCodeContext_, webhookCodeContext) };
    inline EnvironmentDeploymentSpec& setWebhookCodeContext(WebhookCodeContext && webhookCodeContext) { DARABONBA_PTR_SET_RVALUE(webhookCodeContext_, webhookCodeContext) };


  protected:
    std::shared_ptr<EnvironmentSnapshot> baseline_ = nullptr;
    std::shared_ptr<EnvironmentChanges> changes_ = nullptr;
    std::shared_ptr<bool> skipRemoveResources_ = nullptr;
    std::shared_ptr<EnvironmentStagedConfigs> target_ = nullptr;
    std::shared_ptr<WebhookCodeContext> webhookCodeContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
