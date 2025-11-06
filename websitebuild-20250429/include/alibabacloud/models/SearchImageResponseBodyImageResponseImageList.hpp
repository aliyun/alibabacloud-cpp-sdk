// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGERESPONSEBODYIMAGERESPONSEIMAGELIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGERESPONSEBODYIMAGERESPONSEIMAGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SearchImageResponseBodyImageResponseImageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchImageResponseBodyImageResponseImageList& obj) { 
      DARABONBA_PTR_TO_JSON(DescriptiveTones, descriptiveTones_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_TO_JSON(ImageRatio, imageRatio_);
      DARABONBA_PTR_TO_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
      DARABONBA_PTR_TO_JSON(QuantitativePalette, quantitativePalette_);
      DARABONBA_PTR_TO_JSON(TagsFromImage, tagsFromImage_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, SearchImageResponseBodyImageResponseImageList& obj) { 
      DARABONBA_PTR_FROM_JSON(DescriptiveTones, descriptiveTones_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_FROM_JSON(ImageRatio, imageRatio_);
      DARABONBA_PTR_FROM_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
      DARABONBA_PTR_FROM_JSON(QuantitativePalette, quantitativePalette_);
      DARABONBA_PTR_FROM_JSON(TagsFromImage, tagsFromImage_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    SearchImageResponseBodyImageResponseImageList() = default ;
    SearchImageResponseBodyImageResponseImageList(const SearchImageResponseBodyImageResponseImageList &) = default ;
    SearchImageResponseBodyImageResponseImageList(SearchImageResponseBodyImageResponseImageList &&) = default ;
    SearchImageResponseBodyImageResponseImageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchImageResponseBodyImageResponseImageList() = default ;
    SearchImageResponseBodyImageResponseImageList& operator=(const SearchImageResponseBodyImageResponseImageList &) = default ;
    SearchImageResponseBodyImageResponseImageList& operator=(SearchImageResponseBodyImageResponseImageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->descriptiveTones_ == nullptr
        && return this->height_ == nullptr && return this->imageCategory_ == nullptr && return this->imageRatio_ == nullptr && return this->imageUuid_ == nullptr && return this->ossKey_ == nullptr
        && return this->quantitativePalette_ == nullptr && return this->tagsFromImage_ == nullptr && return this->url_ == nullptr && return this->width_ == nullptr; };
    // descriptiveTones Field Functions 
    bool hasDescriptiveTones() const { return this->descriptiveTones_ != nullptr;};
    void deleteDescriptiveTones() { this->descriptiveTones_ = nullptr;};
    inline string descriptiveTones() const { DARABONBA_PTR_GET_DEFAULT(descriptiveTones_, "") };
    inline SearchImageResponseBodyImageResponseImageList& setDescriptiveTones(string descriptiveTones) { DARABONBA_PTR_SET_VALUE(descriptiveTones_, descriptiveTones) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline SearchImageResponseBodyImageResponseImageList& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // imageCategory Field Functions 
    bool hasImageCategory() const { return this->imageCategory_ != nullptr;};
    void deleteImageCategory() { this->imageCategory_ = nullptr;};
    inline string imageCategory() const { DARABONBA_PTR_GET_DEFAULT(imageCategory_, "") };
    inline SearchImageResponseBodyImageResponseImageList& setImageCategory(string imageCategory) { DARABONBA_PTR_SET_VALUE(imageCategory_, imageCategory) };


    // imageRatio Field Functions 
    bool hasImageRatio() const { return this->imageRatio_ != nullptr;};
    void deleteImageRatio() { this->imageRatio_ = nullptr;};
    inline string imageRatio() const { DARABONBA_PTR_GET_DEFAULT(imageRatio_, "") };
    inline SearchImageResponseBodyImageResponseImageList& setImageRatio(string imageRatio) { DARABONBA_PTR_SET_VALUE(imageRatio_, imageRatio) };


    // imageUuid Field Functions 
    bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
    void deleteImageUuid() { this->imageUuid_ = nullptr;};
    inline string imageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
    inline SearchImageResponseBodyImageResponseImageList& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string ossKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline SearchImageResponseBodyImageResponseImageList& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    // quantitativePalette Field Functions 
    bool hasQuantitativePalette() const { return this->quantitativePalette_ != nullptr;};
    void deleteQuantitativePalette() { this->quantitativePalette_ = nullptr;};
    inline string quantitativePalette() const { DARABONBA_PTR_GET_DEFAULT(quantitativePalette_, "") };
    inline SearchImageResponseBodyImageResponseImageList& setQuantitativePalette(string quantitativePalette) { DARABONBA_PTR_SET_VALUE(quantitativePalette_, quantitativePalette) };


    // tagsFromImage Field Functions 
    bool hasTagsFromImage() const { return this->tagsFromImage_ != nullptr;};
    void deleteTagsFromImage() { this->tagsFromImage_ = nullptr;};
    inline string tagsFromImage() const { DARABONBA_PTR_GET_DEFAULT(tagsFromImage_, "") };
    inline SearchImageResponseBodyImageResponseImageList& setTagsFromImage(string tagsFromImage) { DARABONBA_PTR_SET_VALUE(tagsFromImage_, tagsFromImage) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SearchImageResponseBodyImageResponseImageList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline SearchImageResponseBodyImageResponseImageList& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<string> descriptiveTones_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<string> imageCategory_ = nullptr;
    std::shared_ptr<string> imageRatio_ = nullptr;
    std::shared_ptr<string> imageUuid_ = nullptr;
    // oss key
    std::shared_ptr<string> ossKey_ = nullptr;
    std::shared_ptr<string> quantitativePalette_ = nullptr;
    std::shared_ptr<string> tagsFromImage_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
