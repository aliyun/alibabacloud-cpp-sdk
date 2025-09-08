// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATAREQUESTPRICE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATAREQUESTPRICE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeConfigurationPriceResponseBodyDataRequestPriceOrder.hpp>
#include <vector>
#include <alibabacloud/models/DescribeConfigurationPriceResponseBodyDataRequestPriceRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeConfigurationPriceResponseBodyDataRequestPrice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigurationPriceResponseBodyDataRequestPrice& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigurationPriceResponseBodyDataRequestPrice& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeConfigurationPriceResponseBodyDataRequestPrice() = default ;
    DescribeConfigurationPriceResponseBodyDataRequestPrice(const DescribeConfigurationPriceResponseBodyDataRequestPrice &) = default ;
    DescribeConfigurationPriceResponseBodyDataRequestPrice(DescribeConfigurationPriceResponseBodyDataRequestPrice &&) = default ;
    DescribeConfigurationPriceResponseBodyDataRequestPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigurationPriceResponseBodyDataRequestPrice() = default ;
    DescribeConfigurationPriceResponseBodyDataRequestPrice& operator=(const DescribeConfigurationPriceResponseBodyDataRequestPrice &) = default ;
    DescribeConfigurationPriceResponseBodyDataRequestPrice& operator=(DescribeConfigurationPriceResponseBodyDataRequestPrice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->order_ != nullptr
        && this->rules_ != nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline const Models::DescribeConfigurationPriceResponseBodyDataRequestPriceOrder & order() const { DARABONBA_PTR_GET_CONST(order_, Models::DescribeConfigurationPriceResponseBodyDataRequestPriceOrder) };
    inline Models::DescribeConfigurationPriceResponseBodyDataRequestPriceOrder order() { DARABONBA_PTR_GET(order_, Models::DescribeConfigurationPriceResponseBodyDataRequestPriceOrder) };
    inline DescribeConfigurationPriceResponseBodyDataRequestPrice& setOrder(const Models::DescribeConfigurationPriceResponseBodyDataRequestPriceOrder & order) { DARABONBA_PTR_SET_VALUE(order_, order) };
    inline DescribeConfigurationPriceResponseBodyDataRequestPrice& setOrder(Models::DescribeConfigurationPriceResponseBodyDataRequestPriceOrder && order) { DARABONBA_PTR_SET_RVALUE(order_, order) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeConfigurationPriceResponseBodyDataRequestPriceRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeConfigurationPriceResponseBodyDataRequestPriceRules>) };
    inline vector<Models::DescribeConfigurationPriceResponseBodyDataRequestPriceRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeConfigurationPriceResponseBodyDataRequestPriceRules>) };
    inline DescribeConfigurationPriceResponseBodyDataRequestPrice& setRules(const vector<Models::DescribeConfigurationPriceResponseBodyDataRequestPriceRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeConfigurationPriceResponseBodyDataRequestPrice& setRules(vector<Models::DescribeConfigurationPriceResponseBodyDataRequestPriceRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The information about pricing.
    std::shared_ptr<Models::DescribeConfigurationPriceResponseBodyDataRequestPriceOrder> order_ = nullptr;
    // The discount rule.
    std::shared_ptr<vector<Models::DescribeConfigurationPriceResponseBodyDataRequestPriceRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
