// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLSTOCKRESPONSEBODYSALECONTROLSALECONTROLITEMSSALECONTROLITEMCONDITIONSALECONTROL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLSTOCKRESPONSEBODYSALECONTROLSALECONTROLITEMSSALECONTROLITEMCONDITIONSALECONTROL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl.hpp>
#include <alibabacloud/models/DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionControl, conditionControl_);
      DARABONBA_PTR_TO_JSON(ModuleValue, moduleValue_);
      DARABONBA_PTR_TO_JSON(StockValue, stockValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionControl, conditionControl_);
      DARABONBA_PTR_FROM_JSON(ModuleValue, moduleValue_);
      DARABONBA_PTR_FROM_JSON(StockValue, stockValue_);
    };
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl() = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl(const DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl &) = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl(DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl &&) = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl() = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl& operator=(const DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl &) = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl& operator=(DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionControl_ == nullptr
        && return this->moduleValue_ == nullptr && return this->stockValue_ == nullptr; };
    // conditionControl Field Functions 
    bool hasConditionControl() const { return this->conditionControl_ != nullptr;};
    void deleteConditionControl() { this->conditionControl_ = nullptr;};
    inline const Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl & conditionControl() const { DARABONBA_PTR_GET_CONST(conditionControl_, Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl) };
    inline Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl conditionControl() { DARABONBA_PTR_GET(conditionControl_, Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl) };
    inline DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl& setConditionControl(const Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl & conditionControl) { DARABONBA_PTR_SET_VALUE(conditionControl_, conditionControl) };
    inline DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl& setConditionControl(Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl && conditionControl) { DARABONBA_PTR_SET_RVALUE(conditionControl_, conditionControl) };


    // moduleValue Field Functions 
    bool hasModuleValue() const { return this->moduleValue_ != nullptr;};
    void deleteModuleValue() { this->moduleValue_ = nullptr;};
    inline const Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue & moduleValue() const { DARABONBA_PTR_GET_CONST(moduleValue_, Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue) };
    inline Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue moduleValue() { DARABONBA_PTR_GET(moduleValue_, Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue) };
    inline DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl& setModuleValue(const Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue & moduleValue) { DARABONBA_PTR_SET_VALUE(moduleValue_, moduleValue) };
    inline DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl& setModuleValue(Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue && moduleValue) { DARABONBA_PTR_SET_RVALUE(moduleValue_, moduleValue) };


    // stockValue Field Functions 
    bool hasStockValue() const { return this->stockValue_ != nullptr;};
    void deleteStockValue() { this->stockValue_ = nullptr;};
    inline string stockValue() const { DARABONBA_PTR_GET_DEFAULT(stockValue_, "") };
    inline DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl& setStockValue(string stockValue) { DARABONBA_PTR_SET_VALUE(stockValue_, stockValue) };


  protected:
    std::shared_ptr<Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlConditionControl> conditionControl_ = nullptr;
    std::shared_ptr<Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControlModuleValue> moduleValue_ = nullptr;
    std::shared_ptr<string> stockValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
