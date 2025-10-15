// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONFEDERATEDCREDENTIALRESPONSEBODYAPPLICATIONFEDERATEDCREDENTIALATTRIBUTEMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONFEDERATEDCREDENTIALRESPONSEBODYAPPLICATIONFEDERATEDCREDENTIALATTRIBUTEMAPPINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings& obj) { 
      DARABONBA_PTR_TO_JSON(SourceValueExpression, sourceValueExpression_);
      DARABONBA_PTR_TO_JSON(TargetField, targetField_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceValueExpression, sourceValueExpression_);
      DARABONBA_PTR_FROM_JSON(TargetField, targetField_);
    };
    GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings() = default ;
    GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings(const GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings &) = default ;
    GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings(GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings &&) = default ;
    GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings() = default ;
    GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings& operator=(const GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings &) = default ;
    GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings& operator=(GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceValueExpression_ == nullptr
        && return this->targetField_ == nullptr; };
    // sourceValueExpression Field Functions 
    bool hasSourceValueExpression() const { return this->sourceValueExpression_ != nullptr;};
    void deleteSourceValueExpression() { this->sourceValueExpression_ = nullptr;};
    inline string sourceValueExpression() const { DARABONBA_PTR_GET_DEFAULT(sourceValueExpression_, "") };
    inline GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings& setSourceValueExpression(string sourceValueExpression) { DARABONBA_PTR_SET_VALUE(sourceValueExpression_, sourceValueExpression) };


    // targetField Field Functions 
    bool hasTargetField() const { return this->targetField_ != nullptr;};
    void deleteTargetField() { this->targetField_ = nullptr;};
    inline string targetField() const { DARABONBA_PTR_GET_DEFAULT(targetField_, "") };
    inline GetApplicationFederatedCredentialResponseBodyApplicationFederatedCredentialAttributeMappings& setTargetField(string targetField) { DARABONBA_PTR_SET_VALUE(targetField_, targetField) };


  protected:
    // 源值表达式
    std::shared_ptr<string> sourceValueExpression_ = nullptr;
    // 目标字段
    std::shared_ptr<string> targetField_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
