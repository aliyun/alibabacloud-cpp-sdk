// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODYSALECONTROLSALECONTROLITEMSSALECONTROLITEMCONDITIONSALECONTROLCONDITIONCONTROL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODYSALECONTROLSALECONTROLITEMSSALECONTROLITEMCONDITIONSALECONTROLCONDITIONCONTROL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionControlModuleCode, conditionControlModuleCode_);
      DARABONBA_PTR_TO_JSON(ConditionControlModuleValue, conditionControlModuleValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionControlModuleCode, conditionControlModuleCode_);
      DARABONBA_PTR_FROM_JSON(ConditionControlModuleValue, conditionControlModuleValue_);
    };
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl() = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl(const DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl &) = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl(DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl &&) = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl() = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl& operator=(const DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl &) = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl& operator=(DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionControlModuleCode_ == nullptr
        && return this->conditionControlModuleValue_ == nullptr; };
    // conditionControlModuleCode Field Functions 
    bool hasConditionControlModuleCode() const { return this->conditionControlModuleCode_ != nullptr;};
    void deleteConditionControlModuleCode() { this->conditionControlModuleCode_ = nullptr;};
    inline string conditionControlModuleCode() const { DARABONBA_PTR_GET_DEFAULT(conditionControlModuleCode_, "") };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl& setConditionControlModuleCode(string conditionControlModuleCode) { DARABONBA_PTR_SET_VALUE(conditionControlModuleCode_, conditionControlModuleCode) };


    // conditionControlModuleValue Field Functions 
    bool hasConditionControlModuleValue() const { return this->conditionControlModuleValue_ != nullptr;};
    void deleteConditionControlModuleValue() { this->conditionControlModuleValue_ = nullptr;};
    inline string conditionControlModuleValue() const { DARABONBA_PTR_GET_DEFAULT(conditionControlModuleValue_, "") };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl& setConditionControlModuleValue(string conditionControlModuleValue) { DARABONBA_PTR_SET_VALUE(conditionControlModuleValue_, conditionControlModuleValue) };


  protected:
    std::shared_ptr<string> conditionControlModuleCode_ = nullptr;
    std::shared_ptr<string> conditionControlModuleValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
