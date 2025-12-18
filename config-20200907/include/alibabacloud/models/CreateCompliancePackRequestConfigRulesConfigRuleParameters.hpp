// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPLIANCEPACKREQUESTCONFIGRULESCONFIGRULEPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPLIANCEPACKREQUESTCONFIGRULESCONFIGRULEPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CreateCompliancePackRequestConfigRulesConfigRuleParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCompliancePackRequestConfigRulesConfigRuleParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCompliancePackRequestConfigRulesConfigRuleParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
    };
    CreateCompliancePackRequestConfigRulesConfigRuleParameters() = default ;
    CreateCompliancePackRequestConfigRulesConfigRuleParameters(const CreateCompliancePackRequestConfigRulesConfigRuleParameters &) = default ;
    CreateCompliancePackRequestConfigRulesConfigRuleParameters(CreateCompliancePackRequestConfigRulesConfigRuleParameters &&) = default ;
    CreateCompliancePackRequestConfigRulesConfigRuleParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCompliancePackRequestConfigRulesConfigRuleParameters() = default ;
    CreateCompliancePackRequestConfigRulesConfigRuleParameters& operator=(const CreateCompliancePackRequestConfigRulesConfigRuleParameters &) = default ;
    CreateCompliancePackRequestConfigRulesConfigRuleParameters& operator=(CreateCompliancePackRequestConfigRulesConfigRuleParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameterName_ == nullptr
        && return this->parameterValue_ == nullptr; };
    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline CreateCompliancePackRequestConfigRulesConfigRuleParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline CreateCompliancePackRequestConfigRulesConfigRuleParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


  protected:
    // The name of the input parameter.
    // 
    // You must specify both `ParameterName` and `ParameterValue` or neither of them. If the managed rule has an input parameter but no default value is specified, you must specify this parameter. You can call the [ListCompliancePackTemplates](https://help.aliyun.com/document_detail/261176.html) operation to obtain the names of input parameters of the managed rule.
    std::shared_ptr<string> parameterName_ = nullptr;
    // The value of the input parameter.
    // 
    // You must specify both `ParameterName` and `ParameterValue` or neither of them. If the managed rule has an input parameter but no default value is specified, you must specify this parameter. You can call the [ListCompliancePackTemplates](https://help.aliyun.com/document_detail/261176.html) operation to obtain the values of input parameters of the managed rule.
    std::shared_ptr<string> parameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
