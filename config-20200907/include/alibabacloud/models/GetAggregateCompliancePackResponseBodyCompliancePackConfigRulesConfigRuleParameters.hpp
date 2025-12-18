// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKRESPONSEBODYCOMPLIANCEPACKCONFIGRULESCONFIGRULEPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCEPACKRESPONSEBODYCOMPLIANCEPACKCONFIGRULESCONFIGRULEPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      DARABONBA_PTR_TO_JSON(Required, required_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
    };
    GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters() = default ;
    GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters(const GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters &) = default ;
    GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters(GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters &&) = default ;
    GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters() = default ;
    GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters& operator=(const GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters &) = default ;
    GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters& operator=(GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameterName_ == nullptr
        && return this->parameterValue_ == nullptr && return this->required_ == nullptr; };
    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline GetAggregateCompliancePackResponseBodyCompliancePackConfigRulesConfigRuleParameters& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


  protected:
    // The name of the input parameter.
    std::shared_ptr<string> parameterName_ = nullptr;
    // The value of the input parameter.
    std::shared_ptr<string> parameterValue_ = nullptr;
    // Indicates whether the input parameter was required. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> required_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
