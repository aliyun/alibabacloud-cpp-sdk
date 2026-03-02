// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Product.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ProductListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductListResult& obj) { 
      DARABONBA_PTR_TO_JSON(products, products_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ProductListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(products, products_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ProductListResult() = default ;
    ProductListResult(const ProductListResult &) = default ;
    ProductListResult(ProductListResult &&) = default ;
    ProductListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductListResult() = default ;
    ProductListResult& operator=(const ProductListResult &) = default ;
    ProductListResult& operator=(ProductListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->products_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline const vector<Product> & getProducts() const { DARABONBA_PTR_GET_CONST(products_, vector<Product>) };
    inline vector<Product> getProducts() { DARABONBA_PTR_GET(products_, vector<Product>) };
    inline ProductListResult& setProducts(const vector<Product> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
    inline ProductListResult& setProducts(vector<Product> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ProductListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ProductListResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<Product>> products_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
