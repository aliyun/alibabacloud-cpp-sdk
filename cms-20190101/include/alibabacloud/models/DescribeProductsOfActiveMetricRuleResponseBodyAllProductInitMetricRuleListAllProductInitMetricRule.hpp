// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSOFACTIVEMETRICRULERESPONSEBODYALLPRODUCTINITMETRICRULELISTALLPRODUCTINITMETRICRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTSOFACTIVEMETRICRULERESPONSEBODYALLPRODUCTINITMETRICRULELISTALLPRODUCTINITMETRICRULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule& obj) { 
      DARABONBA_PTR_TO_JSON(AlertInitConfigList, alertInitConfigList_);
      DARABONBA_PTR_TO_JSON(Product, product_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertInitConfigList, alertInitConfigList_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
    };
    DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule() = default ;
    DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule(const DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule &) = default ;
    DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule(DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule &&) = default ;
    DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule() = default ;
    DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule& operator=(const DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule &) = default ;
    DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule& operator=(DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertInitConfigList_ != nullptr
        && this->product_ != nullptr; };
    // alertInitConfigList Field Functions 
    bool hasAlertInitConfigList() const { return this->alertInitConfigList_ != nullptr;};
    void deleteAlertInitConfigList() { this->alertInitConfigList_ = nullptr;};
    inline const Models::DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigList & alertInitConfigList() const { DARABONBA_PTR_GET_CONST(alertInitConfigList_, Models::DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigList) };
    inline Models::DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigList alertInitConfigList() { DARABONBA_PTR_GET(alertInitConfigList_, Models::DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigList) };
    inline DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule& setAlertInitConfigList(const Models::DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigList & alertInitConfigList) { DARABONBA_PTR_SET_VALUE(alertInitConfigList_, alertInitConfigList) };
    inline DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule& setAlertInitConfigList(Models::DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigList && alertInitConfigList) { DARABONBA_PTR_SET_RVALUE(alertInitConfigList_, alertInitConfigList) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRule& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


  protected:
    // The initial alert rules that are generated after one-click alert is enabled for a service.
    std::shared_ptr<Models::DescribeProductsOfActiveMetricRuleResponseBodyAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigList> alertInitConfigList_ = nullptr;
    // The abbreviation of the service name.
    std::shared_ptr<string> product_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
