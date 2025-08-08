// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKUORDERPERIODSORDERPERIOD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUSPRODUCTSKUORDERPERIODSORDERPERIOD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PeriodType, periodType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PeriodType, periodType_);
    };
    DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod() = default ;
    DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod(const DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod &) = default ;
    DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod(DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod &&) = default ;
    DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod() = default ;
    DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod& operator=(const DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod &) = default ;
    DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod& operator=(DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->periodType_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // periodType Field Functions 
    bool hasPeriodType() const { return this->periodType_ != nullptr;};
    void deletePeriodType() { this->periodType_ = nullptr;};
    inline string periodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
    inline DescribeProductResponseBodyProductSkusProductSkuOrderPeriodsOrderPeriod& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> periodType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
