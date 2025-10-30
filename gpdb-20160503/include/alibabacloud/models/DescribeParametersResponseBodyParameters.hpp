// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODYPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODYPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeParametersResponseBodyParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParametersResponseBodyParameters& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentValue, currentValue_);
      DARABONBA_PTR_TO_JSON(ForceRestartInstance, forceRestartInstance_);
      DARABONBA_PTR_TO_JSON(IsChangeableConfig, isChangeableConfig_);
      DARABONBA_PTR_TO_JSON(OptionalRange, optionalRange_);
      DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParametersResponseBodyParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentValue, currentValue_);
      DARABONBA_PTR_FROM_JSON(ForceRestartInstance, forceRestartInstance_);
      DARABONBA_PTR_FROM_JSON(IsChangeableConfig, isChangeableConfig_);
      DARABONBA_PTR_FROM_JSON(OptionalRange, optionalRange_);
      DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
    };
    DescribeParametersResponseBodyParameters() = default ;
    DescribeParametersResponseBodyParameters(const DescribeParametersResponseBodyParameters &) = default ;
    DescribeParametersResponseBodyParameters(DescribeParametersResponseBodyParameters &&) = default ;
    DescribeParametersResponseBodyParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParametersResponseBodyParameters() = default ;
    DescribeParametersResponseBodyParameters& operator=(const DescribeParametersResponseBodyParameters &) = default ;
    DescribeParametersResponseBodyParameters& operator=(DescribeParametersResponseBodyParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentValue_ == nullptr
        && return this->forceRestartInstance_ == nullptr && return this->isChangeableConfig_ == nullptr && return this->optionalRange_ == nullptr && return this->parameterDescription_ == nullptr && return this->parameterName_ == nullptr
        && return this->parameterValue_ == nullptr; };
    // currentValue Field Functions 
    bool hasCurrentValue() const { return this->currentValue_ != nullptr;};
    void deleteCurrentValue() { this->currentValue_ = nullptr;};
    inline string currentValue() const { DARABONBA_PTR_GET_DEFAULT(currentValue_, "") };
    inline DescribeParametersResponseBodyParameters& setCurrentValue(string currentValue) { DARABONBA_PTR_SET_VALUE(currentValue_, currentValue) };


    // forceRestartInstance Field Functions 
    bool hasForceRestartInstance() const { return this->forceRestartInstance_ != nullptr;};
    void deleteForceRestartInstance() { this->forceRestartInstance_ = nullptr;};
    inline string forceRestartInstance() const { DARABONBA_PTR_GET_DEFAULT(forceRestartInstance_, "") };
    inline DescribeParametersResponseBodyParameters& setForceRestartInstance(string forceRestartInstance) { DARABONBA_PTR_SET_VALUE(forceRestartInstance_, forceRestartInstance) };


    // isChangeableConfig Field Functions 
    bool hasIsChangeableConfig() const { return this->isChangeableConfig_ != nullptr;};
    void deleteIsChangeableConfig() { this->isChangeableConfig_ = nullptr;};
    inline string isChangeableConfig() const { DARABONBA_PTR_GET_DEFAULT(isChangeableConfig_, "") };
    inline DescribeParametersResponseBodyParameters& setIsChangeableConfig(string isChangeableConfig) { DARABONBA_PTR_SET_VALUE(isChangeableConfig_, isChangeableConfig) };


    // optionalRange Field Functions 
    bool hasOptionalRange() const { return this->optionalRange_ != nullptr;};
    void deleteOptionalRange() { this->optionalRange_ = nullptr;};
    inline string optionalRange() const { DARABONBA_PTR_GET_DEFAULT(optionalRange_, "") };
    inline DescribeParametersResponseBodyParameters& setOptionalRange(string optionalRange) { DARABONBA_PTR_SET_VALUE(optionalRange_, optionalRange) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string parameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline DescribeParametersResponseBodyParameters& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline DescribeParametersResponseBodyParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline DescribeParametersResponseBodyParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


  protected:
    // The current value of the configuration parameter.
    std::shared_ptr<string> currentValue_ = nullptr;
    // Indicates whether a restart is required for parameter modifications to take effect. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> forceRestartInstance_ = nullptr;
    // Indicates whether the configuration parameter can be modified. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> isChangeableConfig_ = nullptr;
    // The valid values of the configuration parameter.
    std::shared_ptr<string> optionalRange_ = nullptr;
    // The description of the configuration parameter.
    std::shared_ptr<string> parameterDescription_ = nullptr;
    // The name of the configuration parameter.
    std::shared_ptr<string> parameterName_ = nullptr;
    // The default value of the configuration parameter.
    std::shared_ptr<string> parameterValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
