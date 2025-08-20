// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETEMPLATEPOLICYRESPONSEBODYPOLICYSTATEMENT_HPP_
#define ALIBABACLOUD_MODELS_GENERATETEMPLATEPOLICYRESPONSEBODYPOLICYSTATEMENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GenerateTemplatePolicyResponseBodyPolicyStatement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTemplatePolicyResponseBodyPolicyStatement& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_ANY_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Effect, effect_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTemplatePolicyResponseBodyPolicyStatement& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_ANY_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Effect, effect_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    GenerateTemplatePolicyResponseBodyPolicyStatement() = default ;
    GenerateTemplatePolicyResponseBodyPolicyStatement(const GenerateTemplatePolicyResponseBodyPolicyStatement &) = default ;
    GenerateTemplatePolicyResponseBodyPolicyStatement(GenerateTemplatePolicyResponseBodyPolicyStatement &&) = default ;
    GenerateTemplatePolicyResponseBodyPolicyStatement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTemplatePolicyResponseBodyPolicyStatement() = default ;
    GenerateTemplatePolicyResponseBodyPolicyStatement& operator=(const GenerateTemplatePolicyResponseBodyPolicyStatement &) = default ;
    GenerateTemplatePolicyResponseBodyPolicyStatement& operator=(GenerateTemplatePolicyResponseBodyPolicyStatement &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->condition_ != nullptr && this->effect_ != nullptr && this->resource_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline const vector<string> & action() const { DARABONBA_PTR_GET_CONST(action_, vector<string>) };
    inline vector<string> action() { DARABONBA_PTR_GET(action_, vector<string>) };
    inline GenerateTemplatePolicyResponseBodyPolicyStatement& setAction(const vector<string> & action) { DARABONBA_PTR_SET_VALUE(action_, action) };
    inline GenerateTemplatePolicyResponseBodyPolicyStatement& setAction(vector<string> && action) { DARABONBA_PTR_SET_RVALUE(action_, action) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline     const Darabonba::Json & condition() const { DARABONBA_GET(condition_) };
    Darabonba::Json & condition() { DARABONBA_GET(condition_) };
    inline GenerateTemplatePolicyResponseBodyPolicyStatement& setCondition(const Darabonba::Json & condition) { DARABONBA_SET_VALUE(condition_, condition) };
    inline GenerateTemplatePolicyResponseBodyPolicyStatement& setCondition(Darabonba::Json & condition) { DARABONBA_SET_RVALUE(condition_, condition) };


    // effect Field Functions 
    bool hasEffect() const { return this->effect_ != nullptr;};
    void deleteEffect() { this->effect_ = nullptr;};
    inline string effect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
    inline GenerateTemplatePolicyResponseBodyPolicyStatement& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline GenerateTemplatePolicyResponseBodyPolicyStatement& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


  protected:
    // The operations that are performed on the specified resource.
    std::shared_ptr<vector<string>> action_ = nullptr;
    // The condition that is required for the policy to take effect.
    Darabonba::Json condition_ = nullptr;
    // The effect of the statement. Valid values:
    // 
    // *   Allow
    // *   Deny
    std::shared_ptr<string> effect_ = nullptr;
    // The objects that the statement covers. An asterisk (\\*) indicates all resources.
    std::shared_ptr<string> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
