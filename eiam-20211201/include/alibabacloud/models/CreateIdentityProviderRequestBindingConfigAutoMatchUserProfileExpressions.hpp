// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTBINDINGCONFIGAUTOMATCHUSERPROFILEEXPRESSIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERREQUESTBINDINGCONFIGAUTOMATCHUSERPROFILEEXPRESSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions& obj) { 
      DARABONBA_PTR_TO_JSON(ExpressionMappingType, expressionMappingType_);
      DARABONBA_PTR_TO_JSON(SourceValueExpression, sourceValueExpression_);
      DARABONBA_PTR_TO_JSON(TargetField, targetField_);
      DARABONBA_PTR_TO_JSON(TargetFieldDescription, targetFieldDescription_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpressionMappingType, expressionMappingType_);
      DARABONBA_PTR_FROM_JSON(SourceValueExpression, sourceValueExpression_);
      DARABONBA_PTR_FROM_JSON(TargetField, targetField_);
      DARABONBA_PTR_FROM_JSON(TargetFieldDescription, targetFieldDescription_);
    };
    CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions() = default ;
    CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions(const CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions &) = default ;
    CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions(CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions &&) = default ;
    CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions() = default ;
    CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions& operator=(const CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions &) = default ;
    CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions& operator=(CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expressionMappingType_ == nullptr
        && return this->sourceValueExpression_ == nullptr && return this->targetField_ == nullptr && return this->targetFieldDescription_ == nullptr; };
    // expressionMappingType Field Functions 
    bool hasExpressionMappingType() const { return this->expressionMappingType_ != nullptr;};
    void deleteExpressionMappingType() { this->expressionMappingType_ = nullptr;};
    inline string expressionMappingType() const { DARABONBA_PTR_GET_DEFAULT(expressionMappingType_, "") };
    inline CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions& setExpressionMappingType(string expressionMappingType) { DARABONBA_PTR_SET_VALUE(expressionMappingType_, expressionMappingType) };


    // sourceValueExpression Field Functions 
    bool hasSourceValueExpression() const { return this->sourceValueExpression_ != nullptr;};
    void deleteSourceValueExpression() { this->sourceValueExpression_ = nullptr;};
    inline string sourceValueExpression() const { DARABONBA_PTR_GET_DEFAULT(sourceValueExpression_, "") };
    inline CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions& setSourceValueExpression(string sourceValueExpression) { DARABONBA_PTR_SET_VALUE(sourceValueExpression_, sourceValueExpression) };


    // targetField Field Functions 
    bool hasTargetField() const { return this->targetField_ != nullptr;};
    void deleteTargetField() { this->targetField_ = nullptr;};
    inline string targetField() const { DARABONBA_PTR_GET_DEFAULT(targetField_, "") };
    inline CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions& setTargetField(string targetField) { DARABONBA_PTR_SET_VALUE(targetField_, targetField) };


    // targetFieldDescription Field Functions 
    bool hasTargetFieldDescription() const { return this->targetFieldDescription_ != nullptr;};
    void deleteTargetFieldDescription() { this->targetFieldDescription_ = nullptr;};
    inline string targetFieldDescription() const { DARABONBA_PTR_GET_DEFAULT(targetFieldDescription_, "") };
    inline CreateIdentityProviderRequestBindingConfigAutoMatchUserProfileExpressions& setTargetFieldDescription(string targetFieldDescription) { DARABONBA_PTR_SET_VALUE(targetFieldDescription_, targetFieldDescription) };


  protected:
    // Type of the expression. Value range:
    // 
    // - Field: filed
    // 
    // - Expression: expression
    std::shared_ptr<string> expressionMappingType_ = nullptr;
    // Expression for the mapped attribute value.
    std::shared_ptr<string> sourceValueExpression_ = nullptr;
    // Name of the target attribute.
    std::shared_ptr<string> targetField_ = nullptr;
    // Description of the target attribute.
    std::shared_ptr<string> targetFieldDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
