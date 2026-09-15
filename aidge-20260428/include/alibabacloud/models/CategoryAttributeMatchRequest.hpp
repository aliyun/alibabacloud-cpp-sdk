// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATEGORYATTRIBUTEMATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CATEGORYATTRIBUTEMATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class CategoryAttributeMatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CategoryAttributeMatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(ItemSpec, itemSpec_);
      DARABONBA_PTR_TO_JSON(Sku, sku_);
      DARABONBA_PTR_TO_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_TO_JSON(SourcePlatform, sourcePlatform_);
      DARABONBA_PTR_TO_JSON(TargetPlatform, targetPlatform_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CategoryAttributeMatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(ItemSpec, itemSpec_);
      DARABONBA_PTR_FROM_JSON(Sku, sku_);
      DARABONBA_PTR_FROM_JSON(SourceCategory, sourceCategory_);
      DARABONBA_PTR_FROM_JSON(SourcePlatform, sourcePlatform_);
      DARABONBA_PTR_FROM_JSON(TargetPlatform, targetPlatform_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    CategoryAttributeMatchRequest() = default ;
    CategoryAttributeMatchRequest(const CategoryAttributeMatchRequest &) = default ;
    CategoryAttributeMatchRequest(CategoryAttributeMatchRequest &&) = default ;
    CategoryAttributeMatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CategoryAttributeMatchRequest() = default ;
    CategoryAttributeMatchRequest& operator=(const CategoryAttributeMatchRequest &) = default ;
    CategoryAttributeMatchRequest& operator=(CategoryAttributeMatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->imageUrl_ == nullptr && this->itemSpec_ == nullptr && this->sku_ == nullptr && this->sourceCategory_ == nullptr && this->sourcePlatform_ == nullptr
        && this->targetPlatform_ == nullptr && this->title_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CategoryAttributeMatchRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline const vector<string> & getImageUrl() const { DARABONBA_PTR_GET_CONST(imageUrl_, vector<string>) };
    inline vector<string> getImageUrl() { DARABONBA_PTR_GET(imageUrl_, vector<string>) };
    inline CategoryAttributeMatchRequest& setImageUrl(const vector<string> & imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };
    inline CategoryAttributeMatchRequest& setImageUrl(vector<string> && imageUrl) { DARABONBA_PTR_SET_RVALUE(imageUrl_, imageUrl) };


    // itemSpec Field Functions 
    bool hasItemSpec() const { return this->itemSpec_ != nullptr;};
    void deleteItemSpec() { this->itemSpec_ = nullptr;};
    inline string getItemSpec() const { DARABONBA_PTR_GET_DEFAULT(itemSpec_, "") };
    inline CategoryAttributeMatchRequest& setItemSpec(string itemSpec) { DARABONBA_PTR_SET_VALUE(itemSpec_, itemSpec) };


    // sku Field Functions 
    bool hasSku() const { return this->sku_ != nullptr;};
    void deleteSku() { this->sku_ = nullptr;};
    inline string getSku() const { DARABONBA_PTR_GET_DEFAULT(sku_, "") };
    inline CategoryAttributeMatchRequest& setSku(string sku) { DARABONBA_PTR_SET_VALUE(sku_, sku) };


    // sourceCategory Field Functions 
    bool hasSourceCategory() const { return this->sourceCategory_ != nullptr;};
    void deleteSourceCategory() { this->sourceCategory_ = nullptr;};
    inline string getSourceCategory() const { DARABONBA_PTR_GET_DEFAULT(sourceCategory_, "") };
    inline CategoryAttributeMatchRequest& setSourceCategory(string sourceCategory) { DARABONBA_PTR_SET_VALUE(sourceCategory_, sourceCategory) };


    // sourcePlatform Field Functions 
    bool hasSourcePlatform() const { return this->sourcePlatform_ != nullptr;};
    void deleteSourcePlatform() { this->sourcePlatform_ = nullptr;};
    inline string getSourcePlatform() const { DARABONBA_PTR_GET_DEFAULT(sourcePlatform_, "") };
    inline CategoryAttributeMatchRequest& setSourcePlatform(string sourcePlatform) { DARABONBA_PTR_SET_VALUE(sourcePlatform_, sourcePlatform) };


    // targetPlatform Field Functions 
    bool hasTargetPlatform() const { return this->targetPlatform_ != nullptr;};
    void deleteTargetPlatform() { this->targetPlatform_ = nullptr;};
    inline string getTargetPlatform() const { DARABONBA_PTR_GET_DEFAULT(targetPlatform_, "") };
    inline CategoryAttributeMatchRequest& setTargetPlatform(string targetPlatform) { DARABONBA_PTR_SET_VALUE(targetPlatform_, targetPlatform) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CategoryAttributeMatchRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The product details.
    shared_ptr<string> description_ {};
    // The product image URLs. A maximum of 10 images are supported.
    shared_ptr<vector<string>> imageUrl_ {};
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
