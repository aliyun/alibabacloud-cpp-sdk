// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTIONGROUPADDPRODUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SELECTIONGROUPADDPRODUCTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class SelectionGroupAddProductResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectionGroupAddProductResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(productIds, productIds_);
    };
    friend void from_json(const Darabonba::Json& j, SelectionGroupAddProductResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(productIds, productIds_);
    };
    SelectionGroupAddProductResponseBody() = default ;
    SelectionGroupAddProductResponseBody(const SelectionGroupAddProductResponseBody &) = default ;
    SelectionGroupAddProductResponseBody(SelectionGroupAddProductResponseBody &&) = default ;
    SelectionGroupAddProductResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectionGroupAddProductResponseBody() = default ;
    SelectionGroupAddProductResponseBody& operator=(const SelectionGroupAddProductResponseBody &) = default ;
    SelectionGroupAddProductResponseBody& operator=(SelectionGroupAddProductResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productIds_ == nullptr; };
    // productIds Field Functions 
    bool hasProductIds() const { return this->productIds_ != nullptr;};
    void deleteProductIds() { this->productIds_ = nullptr;};
    inline const vector<string> & getProductIds() const { DARABONBA_PTR_GET_CONST(productIds_, vector<string>) };
    inline vector<string> getProductIds() { DARABONBA_PTR_GET(productIds_, vector<string>) };
    inline SelectionGroupAddProductResponseBody& setProductIds(const vector<string> & productIds) { DARABONBA_PTR_SET_VALUE(productIds_, productIds) };
    inline SelectionGroupAddProductResponseBody& setProductIds(vector<string> && productIds) { DARABONBA_PTR_SET_RVALUE(productIds_, productIds) };


  protected:
    shared_ptr<vector<string>> productIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
