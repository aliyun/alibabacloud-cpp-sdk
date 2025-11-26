// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATIONACTIONSACTIONPARAMSVALUEATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYAPPLICATIONACTIONSACTIONPARAMSVALUEATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ValueIncrementStep, valueIncrementStep_);
      DARABONBA_PTR_TO_JSON(ValueMaximum, valueMaximum_);
      DARABONBA_PTR_TO_JSON(ValueMinimum, valueMinimum_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
      DARABONBA_PTR_TO_JSON(ValueUnit, valueUnit_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ValueIncrementStep, valueIncrementStep_);
      DARABONBA_PTR_FROM_JSON(ValueMaximum, valueMaximum_);
      DARABONBA_PTR_FROM_JSON(ValueMinimum, valueMinimum_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
      DARABONBA_PTR_FROM_JSON(ValueUnit, valueUnit_);
    };
    GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute() = default ;
    GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute(const GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute &) = default ;
    GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute(GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute &&) = default ;
    GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute() = default ;
    GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute& operator=(const GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute &) = default ;
    GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute& operator=(GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->valueIncrementStep_ == nullptr && return this->valueMaximum_ == nullptr && return this->valueMinimum_ == nullptr && return this->valueType_ == nullptr && return this->valueUnit_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // valueIncrementStep Field Functions 
    bool hasValueIncrementStep() const { return this->valueIncrementStep_ != nullptr;};
    void deleteValueIncrementStep() { this->valueIncrementStep_ = nullptr;};
    inline string valueIncrementStep() const { DARABONBA_PTR_GET_DEFAULT(valueIncrementStep_, "") };
    inline GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute& setValueIncrementStep(string valueIncrementStep) { DARABONBA_PTR_SET_VALUE(valueIncrementStep_, valueIncrementStep) };


    // valueMaximum Field Functions 
    bool hasValueMaximum() const { return this->valueMaximum_ != nullptr;};
    void deleteValueMaximum() { this->valueMaximum_ = nullptr;};
    inline string valueMaximum() const { DARABONBA_PTR_GET_DEFAULT(valueMaximum_, "") };
    inline GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute& setValueMaximum(string valueMaximum) { DARABONBA_PTR_SET_VALUE(valueMaximum_, valueMaximum) };


    // valueMinimum Field Functions 
    bool hasValueMinimum() const { return this->valueMinimum_ != nullptr;};
    void deleteValueMinimum() { this->valueMinimum_ = nullptr;};
    inline string valueMinimum() const { DARABONBA_PTR_GET_DEFAULT(valueMinimum_, "") };
    inline GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute& setValueMinimum(string valueMinimum) { DARABONBA_PTR_SET_VALUE(valueMinimum_, valueMinimum) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


    // valueUnit Field Functions 
    bool hasValueUnit() const { return this->valueUnit_ != nullptr;};
    void deleteValueUnit() { this->valueUnit_ = nullptr;};
    inline string valueUnit() const { DARABONBA_PTR_GET_DEFAULT(valueUnit_, "") };
    inline GetApplicationResponseBodyApplicationActionsActionParamsValueAttribute& setValueUnit(string valueUnit) { DARABONBA_PTR_SET_VALUE(valueUnit_, valueUnit) };


  protected:
    // Value description.
    std::shared_ptr<string> description_ = nullptr;
    // The size of the value increment.
    std::shared_ptr<string> valueIncrementStep_ = nullptr;
    // The maximum range of values.
    std::shared_ptr<string> valueMaximum_ = nullptr;
    // The minimum range of values.
    std::shared_ptr<string> valueMinimum_ = nullptr;
    // The value type of the column.
    std::shared_ptr<string> valueType_ = nullptr;
    // The unit of the value.
    std::shared_ptr<string> valueUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
