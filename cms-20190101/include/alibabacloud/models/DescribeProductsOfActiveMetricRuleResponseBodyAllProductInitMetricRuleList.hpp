// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSOFACTIVEMETRICRULERESPONSEBODYALLPRODUCTINITMETRICRULELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSOFACTIVEMETRICRULERESPONSEBODYALLPRODUCTINITMETRICRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(AllProductInitMetricRule, allProductInitMetricRule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(AllProductInitMetricRule, allProductInitMetricRule_);
    };
    DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList() = default ;
    DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList(const DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList &) = default ;
    DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList(DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList &&) = default ;
    DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList() = default ;
    DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList& operator=(const DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList &) = default ;
    DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList& operator=(DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allProductInitMetricRule_ == nullptr; };
    // allProductInitMetricRule Field Functions 
    bool hasAllProductInitMetricRule() const { return this->allProductInitMetricRule_ != nullptr;};
    void deleteAllProductInitMetricRule() { this->allProductInitMetricRule_ = nullptr;};
    inline const vector<Models::DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule> & allProductInitMetricRule() const { DARABONBA_PTR_GET_CONST(allProductInitMetricRule_, vector<Models::DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule>) };
    inline vector<Models::DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule> allProductInitMetricRule() { DARABONBA_PTR_GET(allProductInitMetricRule_, vector<Models::DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule>) };
    inline DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList& setAllProductInitMetricRule(const vector<Models::DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule> & allProductInitMetricRule) { DARABONBA_PTR_SET_VALUE(allProductInitMetricRule_, allProductInitMetricRule) };
    inline DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleList& setAllProductInitMetricRule(vector<Models::DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule> && allProductInitMetricRule) { DARABONBA_PTR_SET_RVALUE(allProductInitMetricRule_, allProductInitMetricRule) };


  protected:
    std::shared_ptr<vector<Models::DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule>> allProductInitMetricRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
