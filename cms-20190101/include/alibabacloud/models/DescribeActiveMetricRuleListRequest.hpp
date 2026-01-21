// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeActiveMetricRuleListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveMetricRuleListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Product, product_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveMetricRuleListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Product, product_);
    };
    DescribeActiveMetricRuleListRequest() = default ;
    DescribeActiveMetricRuleListRequest(const DescribeActiveMetricRuleListRequest &) = default ;
    DescribeActiveMetricRuleListRequest(DescribeActiveMetricRuleListRequest &&) = default ;
    DescribeActiveMetricRuleListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveMetricRuleListRequest() = default ;
    DescribeActiveMetricRuleListRequest& operator=(const DescribeActiveMetricRuleListRequest &) = default ;
    DescribeActiveMetricRuleListRequest& operator=(DescribeActiveMetricRuleListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->product_ == nullptr; };
    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeActiveMetricRuleListRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


  protected:
    // The abbreviation of the cloud service that supports initiative alert rules.
    // 
    // For more information about how to obtain the name of a cloud service, see [DescribeProductsOfActiveMetricRule](https://help.aliyun.com/document_detail/114930.html).
    // 
    // This parameter is required.
    shared_ptr<string> product_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
