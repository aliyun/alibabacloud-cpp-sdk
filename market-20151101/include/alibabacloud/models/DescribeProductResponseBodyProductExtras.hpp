// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTEXTRAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTEXTRAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProductResponseBodyProductExtrasProductExtra.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBodyProductExtras : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBodyProductExtras& obj) { 
      DARABONBA_PTR_TO_JSON(ProductExtra, productExtra_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBodyProductExtras& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductExtra, productExtra_);
    };
    DescribeProductResponseBodyProductExtras() = default ;
    DescribeProductResponseBodyProductExtras(const DescribeProductResponseBodyProductExtras &) = default ;
    DescribeProductResponseBodyProductExtras(DescribeProductResponseBodyProductExtras &&) = default ;
    DescribeProductResponseBodyProductExtras(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBodyProductExtras() = default ;
    DescribeProductResponseBodyProductExtras& operator=(const DescribeProductResponseBodyProductExtras &) = default ;
    DescribeProductResponseBodyProductExtras& operator=(DescribeProductResponseBodyProductExtras &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productExtra_ != nullptr; };
    // productExtra Field Functions 
    bool hasProductExtra() const { return this->productExtra_ != nullptr;};
    void deleteProductExtra() { this->productExtra_ = nullptr;};
    inline const vector<Models::DescribeProductResponseBodyProductExtrasProductExtra> & productExtra() const { DARABONBA_PTR_GET_CONST(productExtra_, vector<Models::DescribeProductResponseBodyProductExtrasProductExtra>) };
    inline vector<Models::DescribeProductResponseBodyProductExtrasProductExtra> productExtra() { DARABONBA_PTR_GET(productExtra_, vector<Models::DescribeProductResponseBodyProductExtrasProductExtra>) };
    inline DescribeProductResponseBodyProductExtras& setProductExtra(const vector<Models::DescribeProductResponseBodyProductExtrasProductExtra> & productExtra) { DARABONBA_PTR_SET_VALUE(productExtra_, productExtra) };
    inline DescribeProductResponseBodyProductExtras& setProductExtra(vector<Models::DescribeProductResponseBodyProductExtrasProductExtra> && productExtra) { DARABONBA_PTR_SET_RVALUE(productExtra_, productExtra) };


  protected:
    std::shared_ptr<vector<Models::DescribeProductResponseBodyProductExtrasProductExtra>> productExtra_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
