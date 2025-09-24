// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRODUCTLISTRESPONSEBODYDATAPRODUCTLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRODUCTLISTRESPONSEBODYDATAPRODUCTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryProductListResponseBodyDataProductListProduct.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryProductListResponseBodyDataProductList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryProductListResponseBodyDataProductList& obj) { 
      DARABONBA_PTR_TO_JSON(Product, product_);
    };
    friend void from_json(const Darabonba::Json& j, QueryProductListResponseBodyDataProductList& obj) { 
      DARABONBA_PTR_FROM_JSON(Product, product_);
    };
    QueryProductListResponseBodyDataProductList() = default ;
    QueryProductListResponseBodyDataProductList(const QueryProductListResponseBodyDataProductList &) = default ;
    QueryProductListResponseBodyDataProductList(QueryProductListResponseBodyDataProductList &&) = default ;
    QueryProductListResponseBodyDataProductList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryProductListResponseBodyDataProductList() = default ;
    QueryProductListResponseBodyDataProductList& operator=(const QueryProductListResponseBodyDataProductList &) = default ;
    QueryProductListResponseBodyDataProductList& operator=(QueryProductListResponseBodyDataProductList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->product_ != nullptr; };
    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline const vector<Models::QueryProductListResponseBodyDataProductListProduct> & product() const { DARABONBA_PTR_GET_CONST(product_, vector<Models::QueryProductListResponseBodyDataProductListProduct>) };
    inline vector<Models::QueryProductListResponseBodyDataProductListProduct> product() { DARABONBA_PTR_GET(product_, vector<Models::QueryProductListResponseBodyDataProductListProduct>) };
    inline QueryProductListResponseBodyDataProductList& setProduct(const vector<Models::QueryProductListResponseBodyDataProductListProduct> & product) { DARABONBA_PTR_SET_VALUE(product_, product) };
    inline QueryProductListResponseBodyDataProductList& setProduct(vector<Models::QueryProductListResponseBodyDataProductListProduct> && product) { DARABONBA_PTR_SET_RVALUE(product_, product) };


  protected:
    std::shared_ptr<vector<Models::QueryProductListResponseBodyDataProductListProduct>> product_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
