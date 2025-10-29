// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYPRODUCTS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYPRODUCTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListProductsResponseBodyProducts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBodyProducts& obj) { 
      DARABONBA_PTR_TO_JSON(firstCategoryName, firstCategoryName_);
      DARABONBA_PTR_TO_JSON(firstCategoryNameEn, firstCategoryNameEn_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(productName, productName_);
      DARABONBA_PTR_TO_JSON(productNameEn, productNameEn_);
      DARABONBA_PTR_TO_JSON(secondCategoryName, secondCategoryName_);
      DARABONBA_PTR_TO_JSON(secondCategoryNameEn, secondCategoryNameEn_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(subcategory, subcategory_);
      DARABONBA_PTR_TO_JSON(supportTerraformer, supportTerraformer_);
      DARABONBA_PTR_TO_JSON(terraformProviderVersion, terraformProviderVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBodyProducts& obj) { 
      DARABONBA_PTR_FROM_JSON(firstCategoryName, firstCategoryName_);
      DARABONBA_PTR_FROM_JSON(firstCategoryNameEn, firstCategoryNameEn_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(productName, productName_);
      DARABONBA_PTR_FROM_JSON(productNameEn, productNameEn_);
      DARABONBA_PTR_FROM_JSON(secondCategoryName, secondCategoryName_);
      DARABONBA_PTR_FROM_JSON(secondCategoryNameEn, secondCategoryNameEn_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(subcategory, subcategory_);
      DARABONBA_PTR_FROM_JSON(supportTerraformer, supportTerraformer_);
      DARABONBA_PTR_FROM_JSON(terraformProviderVersion, terraformProviderVersion_);
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
    virtual bool empty() const override { return this->firstCategoryName_ == nullptr
        && return this->firstCategoryNameEn_ == nullptr && return this->product_ == nullptr && return this->productName_ == nullptr && return this->productNameEn_ == nullptr && return this->secondCategoryName_ == nullptr
        && return this->secondCategoryNameEn_ == nullptr && return this->status_ == nullptr && return this->subcategory_ == nullptr && return this->supportTerraformer_ == nullptr && return this->terraformProviderVersion_ == nullptr; };
    // firstCategoryName Field Functions 
    bool hasFirstCategoryName() const { return this->firstCategoryName_ != nullptr;};
    void deleteFirstCategoryName() { this->firstCategoryName_ = nullptr;};
    inline string firstCategoryName() const { DARABONBA_PTR_GET_DEFAULT(firstCategoryName_, "") };
    inline ListProductsResponseBodyProducts& setFirstCategoryName(string firstCategoryName) { DARABONBA_PTR_SET_VALUE(firstCategoryName_, firstCategoryName) };


    // firstCategoryNameEn Field Functions 
    bool hasFirstCategoryNameEn() const { return this->firstCategoryNameEn_ != nullptr;};
    void deleteFirstCategoryNameEn() { this->firstCategoryNameEn_ = nullptr;};
    inline string firstCategoryNameEn() const { DARABONBA_PTR_GET_DEFAULT(firstCategoryNameEn_, "") };
    inline ListProductsResponseBodyProducts& setFirstCategoryNameEn(string firstCategoryNameEn) { DARABONBA_PTR_SET_VALUE(firstCategoryNameEn_, firstCategoryNameEn) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline ListProductsResponseBodyProducts& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ListProductsResponseBodyProducts& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productNameEn Field Functions 
    bool hasProductNameEn() const { return this->productNameEn_ != nullptr;};
    void deleteProductNameEn() { this->productNameEn_ = nullptr;};
    inline string productNameEn() const { DARABONBA_PTR_GET_DEFAULT(productNameEn_, "") };
    inline ListProductsResponseBodyProducts& setProductNameEn(string productNameEn) { DARABONBA_PTR_SET_VALUE(productNameEn_, productNameEn) };


    // secondCategoryName Field Functions 
    bool hasSecondCategoryName() const { return this->secondCategoryName_ != nullptr;};
    void deleteSecondCategoryName() { this->secondCategoryName_ = nullptr;};
    inline string secondCategoryName() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryName_, "") };
    inline ListProductsResponseBodyProducts& setSecondCategoryName(string secondCategoryName) { DARABONBA_PTR_SET_VALUE(secondCategoryName_, secondCategoryName) };


    // secondCategoryNameEn Field Functions 
    bool hasSecondCategoryNameEn() const { return this->secondCategoryNameEn_ != nullptr;};
    void deleteSecondCategoryNameEn() { this->secondCategoryNameEn_ = nullptr;};
    inline string secondCategoryNameEn() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryNameEn_, "") };
    inline ListProductsResponseBodyProducts& setSecondCategoryNameEn(string secondCategoryNameEn) { DARABONBA_PTR_SET_VALUE(secondCategoryNameEn_, secondCategoryNameEn) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListProductsResponseBodyProducts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subcategory Field Functions 
    bool hasSubcategory() const { return this->subcategory_ != nullptr;};
    void deleteSubcategory() { this->subcategory_ = nullptr;};
    inline string subcategory() const { DARABONBA_PTR_GET_DEFAULT(subcategory_, "") };
    inline ListProductsResponseBodyProducts& setSubcategory(string subcategory) { DARABONBA_PTR_SET_VALUE(subcategory_, subcategory) };


    // supportTerraformer Field Functions 
    bool hasSupportTerraformer() const { return this->supportTerraformer_ != nullptr;};
    void deleteSupportTerraformer() { this->supportTerraformer_ = nullptr;};
    inline bool supportTerraformer() const { DARABONBA_PTR_GET_DEFAULT(supportTerraformer_, false) };
    inline ListProductsResponseBodyProducts& setSupportTerraformer(bool supportTerraformer) { DARABONBA_PTR_SET_VALUE(supportTerraformer_, supportTerraformer) };


    // terraformProviderVersion Field Functions 
    bool hasTerraformProviderVersion() const { return this->terraformProviderVersion_ != nullptr;};
    void deleteTerraformProviderVersion() { this->terraformProviderVersion_ = nullptr;};
    inline string terraformProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(terraformProviderVersion_, "") };
    inline ListProductsResponseBodyProducts& setTerraformProviderVersion(string terraformProviderVersion) { DARABONBA_PTR_SET_VALUE(terraformProviderVersion_, terraformProviderVersion) };


  protected:
    std::shared_ptr<string> firstCategoryName_ = nullptr;
    std::shared_ptr<string> firstCategoryNameEn_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> productNameEn_ = nullptr;
    std::shared_ptr<string> secondCategoryName_ = nullptr;
    std::shared_ptr<string> secondCategoryNameEn_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subcategory_ = nullptr;
    std::shared_ptr<bool> supportTerraformer_ = nullptr;
    std::shared_ptr<string> terraformProviderVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
