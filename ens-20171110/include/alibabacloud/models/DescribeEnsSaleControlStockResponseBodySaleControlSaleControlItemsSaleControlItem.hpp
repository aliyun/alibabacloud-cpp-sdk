// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLSTOCKRESPONSEBODYSALECONTROLSALECONTROLITEMSSALECONTROLITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLSTOCKRESPONSEBODYSALECONTROLSALECONTROLITEMSSALECONTROLITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem& obj) { 
      DARABONBA_PTR_TO_JSON(BasicSaleControl, basicSaleControl_);
      DARABONBA_PTR_TO_JSON(ConditionSaleControl, conditionSaleControl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem& obj) { 
      DARABONBA_PTR_FROM_JSON(BasicSaleControl, basicSaleControl_);
      DARABONBA_PTR_FROM_JSON(ConditionSaleControl, conditionSaleControl_);
    };
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem() = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem(const DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem &) = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem(DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem &&) = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem() = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem& operator=(const DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem &) = default ;
    DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem& operator=(DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->basicSaleControl_ != nullptr
        && this->conditionSaleControl_ != nullptr; };
    // basicSaleControl Field Functions 
    bool hasBasicSaleControl() const { return this->basicSaleControl_ != nullptr;};
    void deleteBasicSaleControl() { this->basicSaleControl_ = nullptr;};
    inline const Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl & basicSaleControl() const { DARABONBA_PTR_GET_CONST(basicSaleControl_, Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl) };
    inline Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl basicSaleControl() { DARABONBA_PTR_GET(basicSaleControl_, Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl) };
    inline DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem& setBasicSaleControl(const Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl & basicSaleControl) { DARABONBA_PTR_SET_VALUE(basicSaleControl_, basicSaleControl) };
    inline DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem& setBasicSaleControl(Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl && basicSaleControl) { DARABONBA_PTR_SET_RVALUE(basicSaleControl_, basicSaleControl) };


    // conditionSaleControl Field Functions 
    bool hasConditionSaleControl() const { return this->conditionSaleControl_ != nullptr;};
    void deleteConditionSaleControl() { this->conditionSaleControl_ = nullptr;};
    inline const vector<Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl> & conditionSaleControl() const { DARABONBA_PTR_GET_CONST(conditionSaleControl_, vector<Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl>) };
    inline vector<Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl> conditionSaleControl() { DARABONBA_PTR_GET(conditionSaleControl_, vector<Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl>) };
    inline DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem& setConditionSaleControl(const vector<Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl> & conditionSaleControl) { DARABONBA_PTR_SET_VALUE(conditionSaleControl_, conditionSaleControl) };
    inline DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItem& setConditionSaleControl(vector<Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl> && conditionSaleControl) { DARABONBA_PTR_SET_RVALUE(conditionSaleControl_, conditionSaleControl) };


  protected:
    std::shared_ptr<Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl> basicSaleControl_ = nullptr;
    std::shared_ptr<vector<Models::DescribeEnsSaleControlStockResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl>> conditionSaleControl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
