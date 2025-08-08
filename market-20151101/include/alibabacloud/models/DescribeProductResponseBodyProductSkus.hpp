// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODYPRODUCTSKUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProductResponseBodyProductSkusProductSku.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBodyProductSkus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBodyProductSkus& obj) { 
      DARABONBA_PTR_TO_JSON(ProductSku, productSku_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBodyProductSkus& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductSku, productSku_);
    };
    DescribeProductResponseBodyProductSkus() = default ;
    DescribeProductResponseBodyProductSkus(const DescribeProductResponseBodyProductSkus &) = default ;
    DescribeProductResponseBodyProductSkus(DescribeProductResponseBodyProductSkus &&) = default ;
    DescribeProductResponseBodyProductSkus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBodyProductSkus() = default ;
    DescribeProductResponseBodyProductSkus& operator=(const DescribeProductResponseBodyProductSkus &) = default ;
    DescribeProductResponseBodyProductSkus& operator=(DescribeProductResponseBodyProductSkus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productSku_ != nullptr; };
    // productSku Field Functions 
    bool hasProductSku() const { return this->productSku_ != nullptr;};
    void deleteProductSku() { this->productSku_ = nullptr;};
    inline const vector<Models::DescribeProductResponseBodyProductSkusProductSku> & productSku() const { DARABONBA_PTR_GET_CONST(productSku_, vector<Models::DescribeProductResponseBodyProductSkusProductSku>) };
    inline vector<Models::DescribeProductResponseBodyProductSkusProductSku> productSku() { DARABONBA_PTR_GET(productSku_, vector<Models::DescribeProductResponseBodyProductSkusProductSku>) };
    inline DescribeProductResponseBodyProductSkus& setProductSku(const vector<Models::DescribeProductResponseBodyProductSkusProductSku> & productSku) { DARABONBA_PTR_SET_VALUE(productSku_, productSku) };
    inline DescribeProductResponseBodyProductSkus& setProductSku(vector<Models::DescribeProductResponseBodyProductSkusProductSku> && productSku) { DARABONBA_PTR_SET_RVALUE(productSku_, productSku) };


  protected:
    std::shared_ptr<vector<Models::DescribeProductResponseBodyProductSkusProductSku>> productSku_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
