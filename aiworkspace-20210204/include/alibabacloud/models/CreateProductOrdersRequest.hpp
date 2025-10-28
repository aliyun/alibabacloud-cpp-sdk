// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRODUCTORDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRODUCTORDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateProductOrdersRequestProducts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateProductOrdersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProductOrdersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(Products, products_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProductOrdersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(Products, products_);
    };
    CreateProductOrdersRequest() = default ;
    CreateProductOrdersRequest(const CreateProductOrdersRequest &) = default ;
    CreateProductOrdersRequest(CreateProductOrdersRequest &&) = default ;
    CreateProductOrdersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProductOrdersRequest() = default ;
    CreateProductOrdersRequest& operator=(const CreateProductOrdersRequest &) = default ;
    CreateProductOrdersRequest& operator=(CreateProductOrdersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->products_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateProductOrdersRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline const vector<CreateProductOrdersRequestProducts> & products() const { DARABONBA_PTR_GET_CONST(products_, vector<CreateProductOrdersRequestProducts>) };
    inline vector<CreateProductOrdersRequestProducts> products() { DARABONBA_PTR_GET(products_, vector<CreateProductOrdersRequestProducts>) };
    inline CreateProductOrdersRequest& setProducts(const vector<CreateProductOrdersRequestProducts> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
    inline CreateProductOrdersRequest& setProducts(vector<CreateProductOrdersRequestProducts> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


  protected:
    // Specifies whether to automatically pay for the provided products.
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The list of products to be purchased. Separate them with commas (,).
    std::shared_ptr<vector<CreateProductOrdersRequestProducts>> products_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
