// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SELECTIONGROUPREMOVEPRODUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SELECTIONGROUPREMOVEPRODUCTRESPONSEBODY_HPP_
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
  class SelectionGroupRemoveProductResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SelectionGroupRemoveProductResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(productIds, productIds_);
    };
    friend void from_json(const Darabonba::Json& j, SelectionGroupRemoveProductResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(productIds, productIds_);
    };
    SelectionGroupRemoveProductResponseBody() = default ;
    SelectionGroupRemoveProductResponseBody(const SelectionGroupRemoveProductResponseBody &) = default ;
    SelectionGroupRemoveProductResponseBody(SelectionGroupRemoveProductResponseBody &&) = default ;
    SelectionGroupRemoveProductResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SelectionGroupRemoveProductResponseBody() = default ;
    SelectionGroupRemoveProductResponseBody& operator=(const SelectionGroupRemoveProductResponseBody &) = default ;
    SelectionGroupRemoveProductResponseBody& operator=(SelectionGroupRemoveProductResponseBody &&) = default ;
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
    inline SelectionGroupRemoveProductResponseBody& setProductIds(const vector<string> & productIds) { DARABONBA_PTR_SET_VALUE(productIds_, productIds) };
    inline SelectionGroupRemoveProductResponseBody& setProductIds(vector<string> && productIds) { DARABONBA_PTR_SET_RVALUE(productIds_, productIds) };


  protected:
    shared_ptr<vector<string>> productIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
