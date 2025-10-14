// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODYSALECONTROLSALECONTROLITEMSSALECONTROLITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSSALECONTROLRESPONSEBODYSALECONTROLSALECONTROLITEMSSALECONTROLITEM_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem& obj) { 
      DARABONBA_PTR_TO_JSON(BasicSaleControl, basicSaleControl_);
      DARABONBA_PTR_TO_JSON(ConditionSaleControl, conditionSaleControl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem& obj) { 
      DARABONBA_PTR_FROM_JSON(BasicSaleControl, basicSaleControl_);
      DARABONBA_PTR_FROM_JSON(ConditionSaleControl, conditionSaleControl_);
    };
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem() = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem(const DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem &) = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem(DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem &&) = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem() = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem& operator=(const DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem &) = default ;
    DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem& operator=(DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basicSaleControl_ == nullptr
        && return this->conditionSaleControl_ == nullptr; };
    // basicSaleControl Field Functions 
    bool hasBasicSaleControl() const { return this->basicSaleControl_ != nullptr;};
    void deleteBasicSaleControl() { this->basicSaleControl_ = nullptr;};
    inline const Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl & basicSaleControl() const { DARABONBA_PTR_GET_CONST(basicSaleControl_, Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl) };
    inline Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl basicSaleControl() { DARABONBA_PTR_GET(basicSaleControl_, Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl) };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem& setBasicSaleControl(const Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl & basicSaleControl) { DARABONBA_PTR_SET_VALUE(basicSaleControl_, basicSaleControl) };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem& setBasicSaleControl(Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl && basicSaleControl) { DARABONBA_PTR_SET_RVALUE(basicSaleControl_, basicSaleControl) };


    // conditionSaleControl Field Functions 
    bool hasConditionSaleControl() const { return this->conditionSaleControl_ != nullptr;};
    void deleteConditionSaleControl() { this->conditionSaleControl_ = nullptr;};
    inline const vector<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl> & conditionSaleControl() const { DARABONBA_PTR_GET_CONST(conditionSaleControl_, vector<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl>) };
    inline vector<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl> conditionSaleControl() { DARABONBA_PTR_GET(conditionSaleControl_, vector<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl>) };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem& setConditionSaleControl(const vector<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl> & conditionSaleControl) { DARABONBA_PTR_SET_VALUE(conditionSaleControl_, conditionSaleControl) };
    inline DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItem& setConditionSaleControl(vector<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl> && conditionSaleControl) { DARABONBA_PTR_SET_RVALUE(conditionSaleControl_, conditionSaleControl) };


  protected:
    std::shared_ptr<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemBasicSaleControl> basicSaleControl_ = nullptr;
    std::shared_ptr<vector<Models::DescribeEnsSaleControlResponseBodySaleControlSaleControlItemsSaleControlItemConditionSaleControl>> conditionSaleControl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
