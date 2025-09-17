// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYPRODUCTS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYPRODUCTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class ListProductsResponseBodyProducts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBodyProducts& obj) { 
      DARABONBA_PTR_TO_JSON(productCode, productCode_);
      DARABONBA_PTR_TO_JSON(productName, productName_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBodyProducts& obj) { 
      DARABONBA_PTR_FROM_JSON(productCode, productCode_);
      DARABONBA_PTR_FROM_JSON(productName, productName_);
    };
    ListProductsResponseBodyProducts() = default ;
    ListProductsResponseBodyProducts(const ListProductsResponseBodyProducts &) = default ;
    ListProductsResponseBodyProducts(ListProductsResponseBodyProducts &&) = default ;
    ListProductsResponseBodyProducts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBodyProducts() = default ;
    ListProductsResponseBodyProducts& operator=(const ListProductsResponseBodyProducts &) = default ;
    ListProductsResponseBodyProducts& operator=(ListProductsResponseBodyProducts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productCode_ != nullptr
        && this->productName_ != nullptr; };
    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListProductsResponseBodyProducts& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ListProductsResponseBodyProducts& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


  protected:
    // The code of the service.
    std::shared_ptr<string> productCode_ = nullptr;
    // The service name.
    std::shared_ptr<string> productName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
