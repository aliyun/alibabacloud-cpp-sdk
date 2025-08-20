// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEARTIFACTSUBSCRIPTIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEARTIFACTSUBSCRIPTIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateArtifactSubscriptionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateArtifactSubscriptionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateArtifactSubscriptionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    CreateArtifactSubscriptionTaskRequest() = default ;
    CreateArtifactSubscriptionTaskRequest(const CreateArtifactSubscriptionTaskRequest &) = default ;
    CreateArtifactSubscriptionTaskRequest(CreateArtifactSubscriptionTaskRequest &&) = default ;
    CreateArtifactSubscriptionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateArtifactSubscriptionTaskRequest() = default ;
    CreateArtifactSubscriptionTaskRequest& operator=(const CreateArtifactSubscriptionTaskRequest &) = default ;
    CreateArtifactSubscriptionTaskRequest& operator=(CreateArtifactSubscriptionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->ruleId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateArtifactSubscriptionTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline CreateArtifactSubscriptionTaskRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The rule ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
