// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATEGORYATTRIBUTEMATCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CATEGORYATTRIBUTEMATCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class CategoryAttributeMatchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CategoryAttributeMatchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrlShrink_);
      DARABONBA_PTR_TO_JSON(ItemSpec, itemSpec_);
      DARABONBA_PTR_TO_JSON(Sku, sku_);
      DARABONBA_PTR_TO_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_TO_JSON(SourcePlatform, sourcePlatform_);
      DARABONBA_PTR_TO_JSON(TargetPlatform, targetPlatform_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CategoryAttributeMatchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrlShrink_);
      DARABONBA_PTR_FROM_JSON(ItemSpec, itemSpec_);
      DARABONBA_PTR_FROM_JSON(Sku, sku_);
      DARABONBA_PTR_FROM_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_FROM_JSON(SourcePlatform, sourcePlatform_);
      DARABONBA_PTR_FROM_JSON(TargetPlatform, targetPlatform_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CategoryAttributeMatchShrinkRequest() = default ;
    CategoryAttributeMatchShrinkRequest(const CategoryAttributeMatchShrinkRequest &) = default ;
    CategoryAttributeMatchShrinkRequest(CategoryAttributeMatchShrinkRequest &&) = default ;
    CategoryAttributeMatchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CategoryAttributeMatchShrinkRequest() = default ;
    CategoryAttributeMatchShrinkRequest& operator=(const CategoryAttributeMatchShrinkRequest &) = default ;
    CategoryAttributeMatchShrinkRequest& operator=(CategoryAttributeMatchShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->imageUrlShrink_ == nullptr && this->itemSpec_ == nullptr && this->sku_ == nullptr && this->sourceCategory_ == nullptr && this->sourcePlatform_ == nullptr
        && this->targetPlatform_ == nullptr && this->title_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CategoryAttributeMatchShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageUrlShrink Field Functions 
    bool hasImageUrlShrink() const { return this->imageUrlShrink_ != nullptr;};
    void deleteImageUrlShrink() { this->imageUrlShrink_ = nullptr;};
    inline string getImageUrlShrink() const { DARABONBA_PTR_GET_DEFAULT(imageUrlShrink_, "") };
    inline CategoryAttributeMatchShrinkRequest& setImageUrlShrink(string imageUrlShrink) { DARABONBA_PTR_SET_VALUE(imageUrlShrink_, imageUrlShrink) };


    // itemSpec Field Functions 
    bool hasItemSpec() const { return this->itemSpec_ != nullptr;};
    void deleteItemSpec() { this->itemSpec_ = nullptr;};
    inline string getItemSpec() const { DARABONBA_PTR_GET_DEFAULT(itemSpec_, "") };
    inline CategoryAttributeMatchShrinkRequest& setItemSpec(string itemSpec) { DARABONBA_PTR_SET_VALUE(itemSpec_, itemSpec) };


    // sku Field Functions 
    bool hasSku() const { return this->sku_ != nullptr;};
    void deleteSku() { this->sku_ = nullptr;};
    inline string getSku() const { DARABONBA_PTR_GET_DEFAULT(sku_, "") };
    inline CategoryAttributeMatchShrinkRequest& setSku(string sku) { DARABONBA_PTR_SET_VALUE(sku_, sku) };


    // sourceCategory Field Functions 
    bool hasSourceCategory() const { return this->sourceCategory_ != nullptr;};
    void deleteSourceCategory() { this->sourceCategory_ = nullptr;};
    inline string getSourceCategory() const { DARABONBA_PTR_GET_DEFAULT(sourceCategory_, "") };
    inline CategoryAttributeMatchShrinkRequest& setSourceCategory(string sourceCategory) { DARABONBA_PTR_SET_VALUE(sourceCategory_, sourceCategory) };


    // sourcePlatform Field Functions 
    bool hasSourcePlatform() const { return this->sourcePlatform_ != nullptr;};
    void deleteSourcePlatform() { this->sourcePlatform_ = nullptr;};
    inline string getSourcePlatform() const { DARABONBA_PTR_GET_DEFAULT(sourcePlatform_, "") };
    inline CategoryAttributeMatchShrinkRequest& setSourcePlatform(string sourcePlatform) { DARABONBA_PTR_SET_VALUE(sourcePlatform_, sourcePlatform) };


    // targetPlatform Field Functions 
    bool hasTargetPlatform() const { return this->targetPlatform_ != nullptr;};
    void deleteTargetPlatform() { this->targetPlatform_ = nullptr;};
    inline string getTargetPlatform() const { DARABONBA_PTR_GET_DEFAULT(targetPlatform_, "") };
    inline CategoryAttributeMatchShrinkRequest& setTargetPlatform(string targetPlatform) { DARABONBA_PTR_SET_VALUE(targetPlatform_, targetPlatform) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CategoryAttributeMatchShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The product details.
    shared_ptr<string> description_ {};
    // The product image URLs. A maximum of 10 images are supported.
    shared_ptr<string> imageUrlShrink_ {};
    // The product attributes that describe the product characteristics.
    // 
    // This parameter is required.
    shared_ptr<string> itemSpec_ {};
    // The product SKU title.
    // 
    // This parameter is required.
    shared_ptr<string> sku_ {};
    // The product category on the source platform.
    // 
    // This parameter is required.
    shared_ptr<string> sourceCategory_ {};
    // The source platform from which the product originates.
    // 
    // This parameter is required.
    shared_ptr<string> sourcePlatform_ {};
    // The target listing platform. Currently, only temu is supported.
    // 
    // This parameter is required.
    shared_ptr<string> targetPlatform_ {};
    // The product title.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
