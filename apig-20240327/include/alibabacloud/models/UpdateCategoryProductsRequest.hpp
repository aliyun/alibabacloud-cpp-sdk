// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECATEGORYPRODUCTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECATEGORYPRODUCTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateCategoryProductsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCategoryProductsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(productIds, productIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCategoryProductsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(productIds, productIds_);
    };
    UpdateCategoryProductsRequest() = default ;
    UpdateCategoryProductsRequest(const UpdateCategoryProductsRequest &) = default ;
    UpdateCategoryProductsRequest(UpdateCategoryProductsRequest &&) = default ;
    UpdateCategoryProductsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCategoryProductsRequest() = default ;
    UpdateCategoryProductsRequest& operator=(const UpdateCategoryProductsRequest &) = default ;
    UpdateCategoryProductsRequest& operator=(UpdateCategoryProductsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && this->productIds_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline UpdateCategoryProductsRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // productIds Field Functions 
    bool hasProductIds() const { return this->productIds_ != nullptr;};
    void deleteProductIds() { this->productIds_ = nullptr;};
    inline const vector<string> & getProductIds() const { DARABONBA_PTR_GET_CONST(productIds_, vector<string>) };
    inline vector<string> getProductIds() { DARABONBA_PTR_GET(productIds_, vector<string>) };
    inline UpdateCategoryProductsRequest& setProductIds(const vector<string> & productIds) { DARABONBA_PTR_SET_VALUE(productIds_, productIds) };
    inline UpdateCategoryProductsRequest& setProductIds(vector<string> && productIds) { DARABONBA_PTR_SET_RVALUE(productIds_, productIds) };


  protected:
    // The direction of this bulk operation: adds the API products specified in productIds to the category, or removes these API products from the category. The set of valid values is not declared in the API definition.
    shared_ptr<string> action_ {};
    // The list of API product IDs to process. Each element is a primary ID of the API product resource.
    shared_ptr<vector<string>> productIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
