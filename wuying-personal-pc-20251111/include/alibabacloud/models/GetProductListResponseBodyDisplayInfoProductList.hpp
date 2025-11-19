// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTLISTRESPONSEBODYDISPLAYINFOPRODUCTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTLISTRESPONSEBODYDISPLAYINFOPRODUCTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetProductListResponseBodyDisplayInfoProductListSkuList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingPersonalPc20251111
{
namespace Models
{
  class GetProductListResponseBodyDisplayInfoProductList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductListResponseBodyDisplayInfoProductList& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayAttribute, displayAttribute_);
      DARABONBA_PTR_TO_JSON(DisplayConfig, displayConfig_);
      DARABONBA_PTR_TO_JSON(DynamicAttribute, dynamicAttribute_);
      DARABONBA_PTR_TO_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_TO_JSON(ModificationLevel, modificationLevel_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductDesc, productDesc_);
      DARABONBA_PTR_TO_JSON(ProductGroup, productGroup_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SkuList, skuList_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductListResponseBodyDisplayInfoProductList& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayAttribute, displayAttribute_);
      DARABONBA_PTR_FROM_JSON(DisplayConfig, displayConfig_);
      DARABONBA_PTR_FROM_JSON(DynamicAttribute, dynamicAttribute_);
      DARABONBA_PTR_FROM_JSON(IsEnable, isEnable_);
      DARABONBA_PTR_FROM_JSON(ModificationLevel, modificationLevel_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductDesc, productDesc_);
      DARABONBA_PTR_FROM_JSON(ProductGroup, productGroup_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SkuList, skuList_);
    };
    GetProductListResponseBodyDisplayInfoProductList() = default ;
    GetProductListResponseBodyDisplayInfoProductList(const GetProductListResponseBodyDisplayInfoProductList &) = default ;
    GetProductListResponseBodyDisplayInfoProductList(GetProductListResponseBodyDisplayInfoProductList &&) = default ;
    GetProductListResponseBodyDisplayInfoProductList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductListResponseBodyDisplayInfoProductList() = default ;
    GetProductListResponseBodyDisplayInfoProductList& operator=(const GetProductListResponseBodyDisplayInfoProductList &) = default ;
    GetProductListResponseBodyDisplayInfoProductList& operator=(GetProductListResponseBodyDisplayInfoProductList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayAttribute_ == nullptr
        && return this->displayConfig_ == nullptr && return this->dynamicAttribute_ == nullptr && return this->isEnable_ == nullptr && return this->modificationLevel_ == nullptr && return this->productCode_ == nullptr
        && return this->productDesc_ == nullptr && return this->productGroup_ == nullptr && return this->productName_ == nullptr && return this->productType_ == nullptr && return this->skuList_ == nullptr; };
    // displayAttribute Field Functions 
    bool hasDisplayAttribute() const { return this->displayAttribute_ != nullptr;};
    void deleteDisplayAttribute() { this->displayAttribute_ = nullptr;};
    inline string displayAttribute() const { DARABONBA_PTR_GET_DEFAULT(displayAttribute_, "") };
    inline GetProductListResponseBodyDisplayInfoProductList& setDisplayAttribute(string displayAttribute) { DARABONBA_PTR_SET_VALUE(displayAttribute_, displayAttribute) };


    // displayConfig Field Functions 
    bool hasDisplayConfig() const { return this->displayConfig_ != nullptr;};
    void deleteDisplayConfig() { this->displayConfig_ = nullptr;};
    inline string displayConfig() const { DARABONBA_PTR_GET_DEFAULT(displayConfig_, "") };
    inline GetProductListResponseBodyDisplayInfoProductList& setDisplayConfig(string displayConfig) { DARABONBA_PTR_SET_VALUE(displayConfig_, displayConfig) };


    // dynamicAttribute Field Functions 
    bool hasDynamicAttribute() const { return this->dynamicAttribute_ != nullptr;};
    void deleteDynamicAttribute() { this->dynamicAttribute_ = nullptr;};
    inline string dynamicAttribute() const { DARABONBA_PTR_GET_DEFAULT(dynamicAttribute_, "") };
    inline GetProductListResponseBodyDisplayInfoProductList& setDynamicAttribute(string dynamicAttribute) { DARABONBA_PTR_SET_VALUE(dynamicAttribute_, dynamicAttribute) };


    // isEnable Field Functions 
    bool hasIsEnable() const { return this->isEnable_ != nullptr;};
    void deleteIsEnable() { this->isEnable_ = nullptr;};
    inline bool isEnable() const { DARABONBA_PTR_GET_DEFAULT(isEnable_, false) };
    inline GetProductListResponseBodyDisplayInfoProductList& setIsEnable(bool isEnable) { DARABONBA_PTR_SET_VALUE(isEnable_, isEnable) };


    // modificationLevel Field Functions 
    bool hasModificationLevel() const { return this->modificationLevel_ != nullptr;};
    void deleteModificationLevel() { this->modificationLevel_ = nullptr;};
    inline int32_t modificationLevel() const { DARABONBA_PTR_GET_DEFAULT(modificationLevel_, 0) };
    inline GetProductListResponseBodyDisplayInfoProductList& setModificationLevel(int32_t modificationLevel) { DARABONBA_PTR_SET_VALUE(modificationLevel_, modificationLevel) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetProductListResponseBodyDisplayInfoProductList& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productDesc Field Functions 
    bool hasProductDesc() const { return this->productDesc_ != nullptr;};
    void deleteProductDesc() { this->productDesc_ = nullptr;};
    inline string productDesc() const { DARABONBA_PTR_GET_DEFAULT(productDesc_, "") };
    inline GetProductListResponseBodyDisplayInfoProductList& setProductDesc(string productDesc) { DARABONBA_PTR_SET_VALUE(productDesc_, productDesc) };


    // productGroup Field Functions 
    bool hasProductGroup() const { return this->productGroup_ != nullptr;};
    void deleteProductGroup() { this->productGroup_ = nullptr;};
    inline string productGroup() const { DARABONBA_PTR_GET_DEFAULT(productGroup_, "") };
    inline GetProductListResponseBodyDisplayInfoProductList& setProductGroup(string productGroup) { DARABONBA_PTR_SET_VALUE(productGroup_, productGroup) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline GetProductListResponseBodyDisplayInfoProductList& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetProductListResponseBodyDisplayInfoProductList& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // skuList Field Functions 
    bool hasSkuList() const { return this->skuList_ != nullptr;};
    void deleteSkuList() { this->skuList_ = nullptr;};
    inline const vector<Models::GetProductListResponseBodyDisplayInfoProductListSkuList> & skuList() const { DARABONBA_PTR_GET_CONST(skuList_, vector<Models::GetProductListResponseBodyDisplayInfoProductListSkuList>) };
    inline vector<Models::GetProductListResponseBodyDisplayInfoProductListSkuList> skuList() { DARABONBA_PTR_GET(skuList_, vector<Models::GetProductListResponseBodyDisplayInfoProductListSkuList>) };
    inline GetProductListResponseBodyDisplayInfoProductList& setSkuList(const vector<Models::GetProductListResponseBodyDisplayInfoProductListSkuList> & skuList) { DARABONBA_PTR_SET_VALUE(skuList_, skuList) };
    inline GetProductListResponseBodyDisplayInfoProductList& setSkuList(vector<Models::GetProductListResponseBodyDisplayInfoProductListSkuList> && skuList) { DARABONBA_PTR_SET_RVALUE(skuList_, skuList) };


  protected:
    std::shared_ptr<string> displayAttribute_ = nullptr;
    std::shared_ptr<string> displayConfig_ = nullptr;
    std::shared_ptr<string> dynamicAttribute_ = nullptr;
    std::shared_ptr<bool> isEnable_ = nullptr;
    std::shared_ptr<int32_t> modificationLevel_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productDesc_ = nullptr;
    std::shared_ptr<string> productGroup_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<vector<Models::GetProductListResponseBodyDisplayInfoProductListSkuList>> skuList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingPersonalPc20251111
#endif
