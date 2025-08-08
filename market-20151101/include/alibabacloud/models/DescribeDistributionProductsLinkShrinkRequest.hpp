// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTIONPRODUCTSLINKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTIONPRODUCTSLINKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeDistributionProductsLinkShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDistributionProductsLinkShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Codes, codesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDistributionProductsLinkShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Codes, codesShrink_);
    };
    DescribeDistributionProductsLinkShrinkRequest() = default ;
    DescribeDistributionProductsLinkShrinkRequest(const DescribeDistributionProductsLinkShrinkRequest &) = default ;
    DescribeDistributionProductsLinkShrinkRequest(DescribeDistributionProductsLinkShrinkRequest &&) = default ;
    DescribeDistributionProductsLinkShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDistributionProductsLinkShrinkRequest() = default ;
    DescribeDistributionProductsLinkShrinkRequest& operator=(const DescribeDistributionProductsLinkShrinkRequest &) = default ;
    DescribeDistributionProductsLinkShrinkRequest& operator=(DescribeDistributionProductsLinkShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codesShrink_ != nullptr; };
    // codesShrink Field Functions 
    bool hasCodesShrink() const { return this->codesShrink_ != nullptr;};
    void deleteCodesShrink() { this->codesShrink_ = nullptr;};
    inline string codesShrink() const { DARABONBA_PTR_GET_DEFAULT(codesShrink_, "") };
    inline DescribeDistributionProductsLinkShrinkRequest& setCodesShrink(string codesShrink) { DARABONBA_PTR_SET_VALUE(codesShrink_, codesShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> codesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
