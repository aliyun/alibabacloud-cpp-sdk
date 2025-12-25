// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProductsResponseBodyDataProductList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class ListProductsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(DirectoryName, directoryName_);
      DARABONBA_PTR_TO_JSON(ProductList, productList_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(DirectoryName, directoryName_);
      DARABONBA_PTR_FROM_JSON(ProductList, productList_);
    };
    ListProductsResponseBodyData() = default ;
    ListProductsResponseBodyData(const ListProductsResponseBodyData &) = default ;
    ListProductsResponseBodyData(ListProductsResponseBodyData &&) = default ;
    ListProductsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBodyData() = default ;
    ListProductsResponseBodyData& operator=(const ListProductsResponseBodyData &) = default ;
    ListProductsResponseBodyData& operator=(ListProductsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && return this->directoryName_ == nullptr && return this->productList_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline int64_t directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, 0L) };
    inline ListProductsResponseBodyData& setDirectoryId(int64_t directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // directoryName Field Functions 
    bool hasDirectoryName() const { return this->directoryName_ != nullptr;};
    void deleteDirectoryName() { this->directoryName_ = nullptr;};
    inline string directoryName() const { DARABONBA_PTR_GET_DEFAULT(directoryName_, "") };
    inline ListProductsResponseBodyData& setDirectoryName(string directoryName) { DARABONBA_PTR_SET_VALUE(directoryName_, directoryName) };


    // productList Field Functions 
    bool hasProductList() const { return this->productList_ != nullptr;};
    void deleteProductList() { this->productList_ = nullptr;};
    inline const vector<Models::ListProductsResponseBodyDataProductList> & productList() const { DARABONBA_PTR_GET_CONST(productList_, vector<Models::ListProductsResponseBodyDataProductList>) };
    inline vector<Models::ListProductsResponseBodyDataProductList> productList() { DARABONBA_PTR_GET(productList_, vector<Models::ListProductsResponseBodyDataProductList>) };
    inline ListProductsResponseBodyData& setProductList(const vector<Models::ListProductsResponseBodyDataProductList> & productList) { DARABONBA_PTR_SET_VALUE(productList_, productList) };
    inline ListProductsResponseBodyData& setProductList(vector<Models::ListProductsResponseBodyDataProductList> && productList) { DARABONBA_PTR_SET_RVALUE(productList_, productList) };


  protected:
    // The ID of the product catalog, which represents the product category, such as elastic computing
    std::shared_ptr<int64_t> directoryId_ = nullptr;
    // The name of the product catalog, which represents the product category, such as elastic computing
    std::shared_ptr<string> directoryName_ = nullptr;
    // List of Alibaba Cloud products
    std::shared_ptr<vector<Models::ListProductsResponseBodyDataProductList>> productList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
