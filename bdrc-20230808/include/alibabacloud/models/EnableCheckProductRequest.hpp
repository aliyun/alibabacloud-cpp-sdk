// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECHECKPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLECHECKPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class EnableCheckProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableCheckProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, EnableCheckProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    EnableCheckProductRequest() = default ;
    EnableCheckProductRequest(const EnableCheckProductRequest &) = default ;
    EnableCheckProductRequest(EnableCheckProductRequest &&) = default ;
    EnableCheckProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableCheckProductRequest() = default ;
    EnableCheckProductRequest& operator=(const EnableCheckProductRequest &) = default ;
    EnableCheckProductRequest& operator=(EnableCheckProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productType_ == nullptr; };
    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline EnableCheckProductRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The product type.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
