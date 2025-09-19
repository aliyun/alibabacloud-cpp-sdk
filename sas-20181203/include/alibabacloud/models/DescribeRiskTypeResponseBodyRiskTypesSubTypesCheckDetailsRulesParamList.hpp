// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKTYPERESPONSEBODYRISKTYPESSUBTYPESCHECKDETAILSRULESPARAMLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKTYPERESPONSEBODYRISKTYPESSUBTYPESCHECKDETAILSRULESPARAMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList& obj) { 
      DARABONBA_PTR_TO_JSON(EnumValue, enumValue_);
      DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(MinValue, minValue_);
      DARABONBA_PTR_TO_JSON(ParamDefaultValue, paramDefaultValue_);
      DARABONBA_PTR_TO_JSON(ParamDesc, paramDesc_);
      DARABONBA_PTR_TO_JSON(ParamName, paramName_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList& obj) { 
      DARABONBA_PTR_FROM_JSON(EnumValue, enumValue_);
      DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
      DARABONBA_PTR_FROM_JSON(ParamDefaultValue, paramDefaultValue_);
      DARABONBA_PTR_FROM_JSON(ParamDesc, paramDesc_);
      DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
    };
    DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList() = default ;
    DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList(const DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList &) = default ;
    DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList(DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList &&) = default ;
    DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList() = default ;
    DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList& operator=(const DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList &) = default ;
    DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList& operator=(DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enumValue_ != nullptr
        && this->maxValue_ != nullptr && this->minValue_ != nullptr && this->paramDefaultValue_ != nullptr && this->paramDesc_ != nullptr && this->paramName_ != nullptr
        && this->paramType_ != nullptr; };
    // enumValue Field Functions 
    bool hasEnumValue() const { return this->enumValue_ != nullptr;};
    void deleteEnumValue() { this->enumValue_ = nullptr;};
    inline string enumValue() const { DARABONBA_PTR_GET_DEFAULT(enumValue_, "") };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList& setEnumValue(string enumValue) { DARABONBA_PTR_SET_VALUE(enumValue_, enumValue) };


    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline int32_t maxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0) };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList& setMaxValue(int32_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline int32_t minValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0) };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList& setMinValue(int32_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


    // paramDefaultValue Field Functions 
    bool hasParamDefaultValue() const { return this->paramDefaultValue_ != nullptr;};
    void deleteParamDefaultValue() { this->paramDefaultValue_ = nullptr;};
    inline string paramDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(paramDefaultValue_, "") };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList& setParamDefaultValue(string paramDefaultValue) { DARABONBA_PTR_SET_VALUE(paramDefaultValue_, paramDefaultValue) };


    // paramDesc Field Functions 
    bool hasParamDesc() const { return this->paramDesc_ != nullptr;};
    void deleteParamDesc() { this->paramDesc_ = nullptr;};
    inline string paramDesc() const { DARABONBA_PTR_GET_DEFAULT(paramDesc_, "") };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList& setParamDesc(string paramDesc) { DARABONBA_PTR_SET_VALUE(paramDesc_, paramDesc) };


    // paramName Field Functions 
    bool hasParamName() const { return this->paramName_ != nullptr;};
    void deleteParamName() { this->paramName_ = nullptr;};
    inline string paramName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline int32_t paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, 0) };
    inline DescribeRiskTypeResponseBodyRiskTypesSubTypesCheckDetailsRulesParamList& setParamType(int32_t paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


  protected:
    // If the value of paramType is 1, this parameter is empty. If the value of paramType is 2, this parameter provides the options that can be selected for paramType.
    std::shared_ptr<string> enumValue_ = nullptr;
    // The maximum value of the parameter.
    std::shared_ptr<int32_t> maxValue_ = nullptr;
    // The minimum value of the parameter.
    std::shared_ptr<int32_t> minValue_ = nullptr;
    // The default value of the parameter.
    std::shared_ptr<string> paramDefaultValue_ = nullptr;
    // The description of the parameter.
    std::shared_ptr<string> paramDesc_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> paramName_ = nullptr;
    // The configuration type of the parameter. Valid values:
    // 
    // *   **1**: input
    // *   **2**: selection
    std::shared_ptr<int32_t> paramType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
