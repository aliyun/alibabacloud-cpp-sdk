// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATACPUMEMPRICE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATACPUMEMPRICE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeConfigurationPriceResponseBodyDataCpuMemPriceOrder.hpp>
#include <vector>
#include <alibabacloud/models/DescribeConfigurationPriceResponseBodyDataCpuMemPriceRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeConfigurationPriceResponseBodyDataCpuMemPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigurationPriceResponseBodyDataCpuMemPrice& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigurationPriceResponseBodyDataCpuMemPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeConfigurationPriceResponseBodyDataCpuMemPrice() = default ;
    DescribeConfigurationPriceResponseBodyDataCpuMemPrice(const DescribeConfigurationPriceResponseBodyDataCpuMemPrice &) = default ;
    DescribeConfigurationPriceResponseBodyDataCpuMemPrice(DescribeConfigurationPriceResponseBodyDataCpuMemPrice &&) = default ;
    DescribeConfigurationPriceResponseBodyDataCpuMemPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigurationPriceResponseBodyDataCpuMemPrice() = default ;
    DescribeConfigurationPriceResponseBodyDataCpuMemPrice& operator=(const DescribeConfigurationPriceResponseBodyDataCpuMemPrice &) = default ;
    DescribeConfigurationPriceResponseBodyDataCpuMemPrice& operator=(DescribeConfigurationPriceResponseBodyDataCpuMemPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->order_ != nullptr
        && this->rules_ != nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline const Models::DescribeConfigurationPriceResponseBodyDataCpuMemPriceOrder & order() const { DARABONBA_PTR_GET_CONST(order_, Models::DescribeConfigurationPriceResponseBodyDataCpuMemPriceOrder) };
    inline Models::DescribeConfigurationPriceResponseBodyDataCpuMemPriceOrder order() { DARABONBA_PTR_GET(order_, Models::DescribeConfigurationPriceResponseBodyDataCpuMemPriceOrder) };
    inline DescribeConfigurationPriceResponseBodyDataCpuMemPrice& setOrder(const Models::DescribeConfigurationPriceResponseBodyDataCpuMemPriceOrder & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
    inline DescribeConfigurationPriceResponseBodyDataCpuMemPrice& setOrder(Models::DescribeConfigurationPriceResponseBodyDataCpuMemPriceOrder && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeConfigurationPriceResponseBodyDataCpuMemPriceRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeConfigurationPriceResponseBodyDataCpuMemPriceRules>) };
    inline vector<Models::DescribeConfigurationPriceResponseBodyDataCpuMemPriceRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeConfigurationPriceResponseBodyDataCpuMemPriceRules>) };
    inline DescribeConfigurationPriceResponseBodyDataCpuMemPrice& setRules(const vector<Models::DescribeConfigurationPriceResponseBodyDataCpuMemPriceRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeConfigurationPriceResponseBodyDataCpuMemPrice& setRules(vector<Models::DescribeConfigurationPriceResponseBodyDataCpuMemPriceRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The information about pricing.
    std::shared_ptr<Models::DescribeConfigurationPriceResponseBodyDataCpuMemPriceOrder> order_ = nullptr;
    // The discount rules.
    std::shared_ptr<vector<Models::DescribeConfigurationPriceResponseBodyDataCpuMemPriceRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
