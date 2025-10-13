// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATATRAFFICPRICE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATATRAFFICPRICE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeConfigurationPriceResponseBodyDataTrafficPriceOrder.hpp>
#include <vector>
#include <alibabacloud/models/DescribeConfigurationPriceResponseBodyDataTrafficPriceRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeConfigurationPriceResponseBodyDataTrafficPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigurationPriceResponseBodyDataTrafficPrice& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigurationPriceResponseBodyDataTrafficPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeConfigurationPriceResponseBodyDataTrafficPrice() = default ;
    DescribeConfigurationPriceResponseBodyDataTrafficPrice(const DescribeConfigurationPriceResponseBodyDataTrafficPrice &) = default ;
    DescribeConfigurationPriceResponseBodyDataTrafficPrice(DescribeConfigurationPriceResponseBodyDataTrafficPrice &&) = default ;
    DescribeConfigurationPriceResponseBodyDataTrafficPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigurationPriceResponseBodyDataTrafficPrice() = default ;
    DescribeConfigurationPriceResponseBodyDataTrafficPrice& operator=(const DescribeConfigurationPriceResponseBodyDataTrafficPrice &) = default ;
    DescribeConfigurationPriceResponseBodyDataTrafficPrice& operator=(DescribeConfigurationPriceResponseBodyDataTrafficPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->order_ == nullptr
        && return this->rules_ == nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline const Models::DescribeConfigurationPriceResponseBodyDataTrafficPriceOrder & order() const { DARABONBA_PTR_GET_CONST(order_, Models::DescribeConfigurationPriceResponseBodyDataTrafficPriceOrder) };
    inline Models::DescribeConfigurationPriceResponseBodyDataTrafficPriceOrder order() { DARABONBA_PTR_GET(order_, Models::DescribeConfigurationPriceResponseBodyDataTrafficPriceOrder) };
    inline DescribeConfigurationPriceResponseBodyDataTrafficPrice& setOrder(const Models::DescribeConfigurationPriceResponseBodyDataTrafficPriceOrder & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
    inline DescribeConfigurationPriceResponseBodyDataTrafficPrice& setOrder(Models::DescribeConfigurationPriceResponseBodyDataTrafficPriceOrder && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeConfigurationPriceResponseBodyDataTrafficPriceRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeConfigurationPriceResponseBodyDataTrafficPriceRules>) };
    inline vector<Models::DescribeConfigurationPriceResponseBodyDataTrafficPriceRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeConfigurationPriceResponseBodyDataTrafficPriceRules>) };
    inline DescribeConfigurationPriceResponseBodyDataTrafficPrice& setRules(const vector<Models::DescribeConfigurationPriceResponseBodyDataTrafficPriceRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeConfigurationPriceResponseBodyDataTrafficPrice& setRules(vector<Models::DescribeConfigurationPriceResponseBodyDataTrafficPriceRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The information about pricing.
    std::shared_ptr<Models::DescribeConfigurationPriceResponseBodyDataTrafficPriceOrder> order_ = nullptr;
    // The discount rule.
    std::shared_ptr<vector<Models::DescribeConfigurationPriceResponseBodyDataTrafficPriceRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
