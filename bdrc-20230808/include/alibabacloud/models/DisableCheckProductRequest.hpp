// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLECHECKPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLECHECKPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class DisableCheckProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableCheckProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, DisableCheckProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    DisableCheckProductRequest() = default ;
    DisableCheckProductRequest(const DisableCheckProductRequest &) = default ;
    DisableCheckProductRequest(DisableCheckProductRequest &&) = default ;
    DisableCheckProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableCheckProductRequest() = default ;
    DisableCheckProductRequest& operator=(const DisableCheckProductRequest &) = default ;
    DisableCheckProductRequest& operator=(DisableCheckProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productType_ == nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DisableCheckProductRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // Product type
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
