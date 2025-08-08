// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKUORDERPERIODS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKUORDERPERIODS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBodyProductSkusProductSkuOrderPeriods : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBodyProductSkusProductSkuOrderPeriods& obj) { 
      DARABONBA_PTR_TO_JSON(OrderPeriod, orderPeriod_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBodyProductSkusProductSkuOrderPeriods& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderPeriod, orderPeriod_);
    };
    DescribeProductResponseBodyProductSkusProductSkuOrderPeriods() = default ;
    DescribeProductResponseBodyProductSkusProductSkuOrderPeriods(const DescribeProductResponseBodyProductSkusProductSkuOrderPeriods &) = default ;
    DescribeProductResponseBodyProductSkusProductSkuOrderPeriods(DescribeProductResponseBodyProductSkusProductSkuOrderPeriods &&) = default ;
    DescribeProductResponseBodyProductSkusProductSkuOrderPeriods(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBodyProductSkusProductSkuOrderPeriods() = default ;
    DescribeProductResponseBodyProductSkusProductSkuOrderPeriods& operator=(const DescribeProductResponseBodyProductSkusProductSkuOrderPeriods &) = default ;
    DescribeProductResponseBodyProductSkusProductSkuOrderPeriods& operator=(DescribeProductResponseBodyProductSkusProductSkuOrderPeriods &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderPeriod_ != nullptr; };
    // orderPeriod Field Functions 
    bool hasOrderPeriod() const { return this->orderPeriod_ != nullptr;};
    void deleteOrderPeriod() { this->orderPeriod_ = nullptr;};
    inline const vector<Models::DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod> & orderPeriod() const { DARABONBA_PTR_GET_CONST(orderPeriod_, vector<Models::DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod>) };
    inline vector<Models::DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod> orderPeriod() { DARABONBA_PTR_GET(orderPeriod_, vector<Models::DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod>) };
    inline DescribeProductResponseBodyProductSkusProductSkuOrderPeriods& setOrderPeriod(const vector<Models::DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod> & orderPeriod) { DARABONBA_PTR_SET_VALUE(orderPeriod_, orderPeriod) };
    inline DescribeProductResponseBodyProductSkusProductSkuOrderPeriods& setOrderPeriod(vector<Models::DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod> && orderPeriod) { DARABONBA_PTR_SET_RVALUE(orderPeriod_, orderPeriod) };


  protected:
    std::shared_ptr<vector<Models::DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod>> orderPeriod_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
