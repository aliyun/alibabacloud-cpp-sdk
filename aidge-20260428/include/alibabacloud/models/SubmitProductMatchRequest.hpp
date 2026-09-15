// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPRODUCTMATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPRODUCTMATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class SubmitProductMatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitProductMatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BrandName, brandName_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(ProductUrl, productUrl_);
      DARABONBA_PTR_TO_JSON(ShopName, shopName_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitProductMatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BrandName, brandName_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(ProductUrl, productUrl_);
      DARABONBA_PTR_FROM_JSON(ShopName, shopName_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    SubmitProductMatchRequest() = default ;
    SubmitProductMatchRequest(const SubmitProductMatchRequest &) = default ;
    SubmitProductMatchRequest(SubmitProductMatchRequest &&) = default ;
    SubmitProductMatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitProductMatchRequest() = default ;
    SubmitProductMatchRequest& operator=(const SubmitProductMatchRequest &) = default ;
    SubmitProductMatchRequest& operator=(SubmitProductMatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brandName_ == nullptr
        && this->category_ == nullptr && this->imageUrl_ == nullptr && this->itemId_ == nullptr && this->productUrl_ == nullptr && this->shopName_ == nullptr
        && this->title_ == nullptr; };
    // brandName Field Functions 
    bool hasBrandName() const { return this->brandName_ != nullptr;};
    void deleteBrandName() { this->brandName_ = nullptr;};
    inline string getBrandName() const { DARABONBA_PTR_GET_DEFAULT(brandName_, "") };
    inline SubmitProductMatchRequest& setBrandName(string brandName) { DARABONBA_PTR_SET_VALUE(brandName_, brandName) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline SubmitProductMatchRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline SubmitProductMatchRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline SubmitProductMatchRequest& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // productUrl Field Functions 
    bool hasProductUrl() const { return this->productUrl_ != nullptr;};
    void deleteProductUrl() { this->productUrl_ = nullptr;};
    inline string getProductUrl() const { DARABONBA_PTR_GET_DEFAULT(productUrl_, "") };
    inline SubmitProductMatchRequest& setProductUrl(string productUrl) { DARABONBA_PTR_SET_VALUE(productUrl_, productUrl) };


    // shopName Field Functions 
    bool hasShopName() const { return this->shopName_ != nullptr;};
    void deleteShopName() { this->shopName_ = nullptr;};
    inline string getShopName() const { DARABONBA_PTR_GET_DEFAULT(shopName_, "") };
    inline SubmitProductMatchRequest& setShopName(string shopName) { DARABONBA_PTR_SET_VALUE(shopName_, shopName) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitProductMatchRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The product brand. If this value is not specified, the system attempts to extract the brand from the shop name.
    shared_ptr<string> brandName_ {};
    // The Miaojie product category. Currently used for extension and auditing purposes.
    shared_ptr<string> category_ {};
    // The HTTP or HTTPS URL of the product main image.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The Miaojie product ID.
    // 
    // This parameter is required.
    shared_ptr<string> itemId_ {};
    // The HTTP or HTTPS URL of the product detail page.
    shared_ptr<string> productUrl_ {};
    // The shop name. This value is also used as the extraction source when the brand name is missing.
    // 
    // This parameter is required.
    shared_ptr<string> shopName_ {};
    // The product title.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
