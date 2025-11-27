// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODYRUNNINGPARAMETERSDBINSTANCEPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARAMETERSRESPONSEBODYRUNNINGPARAMETERSDBINSTANCEPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeParametersResponseBodyRunningParametersDBInstanceParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeParametersResponseBodyRunningParametersDBInstanceParameter& obj) { 
      DARABONBA_PTR_TO_JSON(ParameterDefaultValue, parameterDefaultValue_);
      DARABONBA_PTR_TO_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      DARABONBA_PTR_TO_JSON(ParameterValueRange, parameterValueRange_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeParametersResponseBodyRunningParametersDBInstanceParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(ParameterDefaultValue, parameterDefaultValue_);
      DARABONBA_PTR_FROM_JSON(ParameterDescription, parameterDescription_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      DARABONBA_PTR_FROM_JSON(ParameterValueRange, parameterValueRange_);
    };
    DescribeParametersResponseBodyRunningParametersDBInstanceParameter() = default ;
    DescribeParametersResponseBodyRunningParametersDBInstanceParameter(const DescribeParametersResponseBodyRunningParametersDBInstanceParameter &) = default ;
    DescribeParametersResponseBodyRunningParametersDBInstanceParameter(DescribeParametersResponseBodyRunningParametersDBInstanceParameter &&) = default ;
    DescribeParametersResponseBodyRunningParametersDBInstanceParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeParametersResponseBodyRunningParametersDBInstanceParameter() = default ;
    DescribeParametersResponseBodyRunningParametersDBInstanceParameter& operator=(const DescribeParametersResponseBodyRunningParametersDBInstanceParameter &) = default ;
    DescribeParametersResponseBodyRunningParametersDBInstanceParameter& operator=(DescribeParametersResponseBodyRunningParametersDBInstanceParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->parameterDefaultValue_ == nullptr
        && return this->parameterDescription_ == nullptr && return this->parameterName_ == nullptr && return this->parameterValue_ == nullptr && return this->parameterValueRange_ == nullptr; };
    // parameterDefaultValue Field Functions 
    bool hasParameterDefaultValue() const { return this->parameterDefaultValue_ != nullptr;};
    void deleteParameterDefaultValue() { this->parameterDefaultValue_ = nullptr;};
    inline string parameterDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(parameterDefaultValue_, "") };
    inline DescribeParametersResponseBodyRunningParametersDBInstanceParameter& setParameterDefaultValue(string parameterDefaultValue) { DARABONBA_PTR_SET_VALUE(parameterDefaultValue_, parameterDefaultValue) };


    // parameterDescription Field Functions 
    bool hasParameterDescription() const { return this->parameterDescription_ != nullptr;};
    void deleteParameterDescription() { this->parameterDescription_ = nullptr;};
    inline string parameterDescription() const { DARABONBA_PTR_GET_DEFAULT(parameterDescription_, "") };
    inline DescribeParametersResponseBodyRunningParametersDBInstanceParameter& setParameterDescription(string parameterDescription) { DARABONBA_PTR_SET_VALUE(parameterDescription_, parameterDescription) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline DescribeParametersResponseBodyRunningParametersDBInstanceParameter& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // parameterValue Field Functions 
    bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
    void deleteParameterValue() { this->parameterValue_ = nullptr;};
    inline string parameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
    inline DescribeParametersResponseBodyRunningParametersDBInstanceParameter& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    // parameterValueRange Field Functions 
    bool hasParameterValueRange() const { return this->parameterValueRange_ != nullptr;};
    void deleteParameterValueRange() { this->parameterValueRange_ = nullptr;};
    inline string parameterValueRange() const { DARABONBA_PTR_GET_DEFAULT(parameterValueRange_, "") };
    inline DescribeParametersResponseBodyRunningParametersDBInstanceParameter& setParameterValueRange(string parameterValueRange) { DARABONBA_PTR_SET_VALUE(parameterValueRange_, parameterValueRange) };


  protected:
    // The default value of the parameter.
    std::shared_ptr<string> parameterDefaultValue_ = nullptr;
    // The description of the parameter.
    std::shared_ptr<string> parameterDescription_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> parameterName_ = nullptr;
    // The value of the parameter.
    std::shared_ptr<string> parameterValue_ = nullptr;
    // The valid values of the parameter.
    std::shared_ptr<string> parameterValueRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
