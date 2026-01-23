// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEARTIFACTLIFECYCLERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEARTIFACTLIFECYCLERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class DeleteArtifactLifecycleRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteArtifactLifecycleRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteArtifactLifecycleRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DeleteArtifactLifecycleRuleRequest() = default ;
    DeleteArtifactLifecycleRuleRequest(const DeleteArtifactLifecycleRuleRequest &) = default ;
    DeleteArtifactLifecycleRuleRequest(DeleteArtifactLifecycleRuleRequest &&) = default ;
    DeleteArtifactLifecycleRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteArtifactLifecycleRuleRequest() = default ;
    DeleteArtifactLifecycleRuleRequest& operator=(const DeleteArtifactLifecycleRuleRequest &) = default ;
    DeleteArtifactLifecycleRuleRequest& operator=(DeleteArtifactLifecycleRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->ruleId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteArtifactLifecycleRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DeleteArtifactLifecycleRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The ID of the Container Registry instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The rule ID.
    // 
    // This parameter is required.
    shared_ptr<string> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
