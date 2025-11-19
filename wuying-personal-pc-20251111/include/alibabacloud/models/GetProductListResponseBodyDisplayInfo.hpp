// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTLISTRESPONSEBODYDISPLAYINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTLISTRESPONSEBODYDISPLAYINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetProductListResponseBodyDisplayInfoProductList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class GetProductListResponseBodyDisplayInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductListResponseBodyDisplayInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ProductList, productList_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductListResponseBodyDisplayInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductList, productList_);
    };
    GetProductListResponseBodyDisplayInfo() = default ;
    GetProductListResponseBodyDisplayInfo(const GetProductListResponseBodyDisplayInfo &) = default ;
    GetProductListResponseBodyDisplayInfo(GetProductListResponseBodyDisplayInfo &&) = default ;
    GetProductListResponseBodyDisplayInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductListResponseBodyDisplayInfo() = default ;
    GetProductListResponseBodyDisplayInfo& operator=(const GetProductListResponseBodyDisplayInfo &) = default ;
    GetProductListResponseBodyDisplayInfo& operator=(GetProductListResponseBodyDisplayInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productList_ == nullptr; };
    // productList Field Functions 
    bool hasProductList() const { return this->productList_ != nullptr;};
    void deleteProductList() { this->productList_ = nullptr;};
    inline const vector<Models::GetProductListResponseBodyDisplayInfoProductList> & productList() const { DARABONBA_PTR_GET_CONST(productList_, vector<Models::GetProductListResponseBodyDisplayInfoProductList>) };
    inline vector<Models::GetProductListResponseBodyDisplayInfoProductList> productList() { DARABONBA_PTR_GET(productList_, vector<Models::GetProductListResponseBodyDisplayInfoProductList>) };
    inline GetProductListResponseBodyDisplayInfo& setProductList(const vector<Models::GetProductListResponseBodyDisplayInfoProductList> & productList) { DARABONBA_PTR_SET_VALUE(productList_, productList) };
    inline GetProductListResponseBodyDisplayInfo& setProductList(vector<Models::GetProductListResponseBodyDisplayInfoProductList> && productList) { DARABONBA_PTR_SET_RVALUE(productList_, productList) };


  protected:
    std::shared_ptr<vector<Models::GetProductListResponseBodyDisplayInfoProductList>> productList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
