// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SearchImageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchImageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColorHex, colorHex_);
      DARABONBA_PTR_TO_JSON(HasPerson, hasPerson_);
      DARABONBA_PTR_TO_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_TO_JSON(ImageRatio, imageRatio_);
      DARABONBA_PTR_TO_JSON(MaxHeight, maxHeight_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MaxWidth, maxWidth_);
      DARABONBA_PTR_TO_JSON(MinHeight, minHeight_);
      DARABONBA_PTR_TO_JSON(MinWidth, minWidth_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, SearchImageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColorHex, colorHex_);
      DARABONBA_PTR_FROM_JSON(HasPerson, hasPerson_);
      DARABONBA_PTR_FROM_JSON(ImageCategory, imageCategory_);
      DARABONBA_PTR_FROM_JSON(ImageRatio, imageRatio_);
      DARABONBA_PTR_FROM_JSON(MaxHeight, maxHeight_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MaxWidth, maxWidth_);
      DARABONBA_PTR_FROM_JSON(MinHeight, minHeight_);
      DARABONBA_PTR_FROM_JSON(MinWidth, minWidth_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    SearchImageShrinkRequest() = default ;
    SearchImageShrinkRequest(const SearchImageShrinkRequest &) = default ;
    SearchImageShrinkRequest(SearchImageShrinkRequest &&) = default ;
    SearchImageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchImageShrinkRequest() = default ;
    SearchImageShrinkRequest& operator=(const SearchImageShrinkRequest &) = default ;
    SearchImageShrinkRequest& operator=(SearchImageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->colorHex_ != nullptr
        && this->hasPerson_ != nullptr && this->imageCategory_ != nullptr && this->imageRatio_ != nullptr && this->maxHeight_ != nullptr && this->maxResults_ != nullptr
        && this->maxWidth_ != nullptr && this->minHeight_ != nullptr && this->minWidth_ != nullptr && this->nextToken_ != nullptr && this->ossKey_ != nullptr
        && this->size_ != nullptr && this->start_ != nullptr && this->tagsShrink_ != nullptr && this->text_ != nullptr; };
    // colorHex Field Functions 
    bool hasColorHex() const { return this->colorHex_ != nullptr;};
    void deleteColorHex() { this->colorHex_ = nullptr;};
    inline string colorHex() const { DARABONBA_PTR_GET_DEFAULT(colorHex_, "") };
    inline SearchImageShrinkRequest& setColorHex(string colorHex) { DARABONBA_PTR_SET_VALUE(colorHex_, colorHex) };


    // hasPerson Field Functions 
    bool hasHasPerson() const { return this->hasPerson_ != nullptr;};
    void deleteHasPerson() { this->hasPerson_ = nullptr;};
    inline bool hasPerson() const { DARABONBA_PTR_GET_DEFAULT(hasPerson_, false) };
    inline SearchImageShrinkRequest& setHasPerson(bool hasPerson) { DARABONBA_PTR_SET_VALUE(hasPerson_, hasPerson) };


    // imageCategory Field Functions 
    bool hasImageCategory() const { return this->imageCategory_ != nullptr;};
    void deleteImageCategory() { this->imageCategory_ = nullptr;};
    inline string imageCategory() const { DARABONBA_PTR_GET_DEFAULT(imageCategory_, "") };
    inline SearchImageShrinkRequest& setImageCategory(string imageCategory) { DARABONBA_PTR_SET_VALUE(imageCategory_, imageCategory) };


    // imageRatio Field Functions 
    bool hasImageRatio() const { return this->imageRatio_ != nullptr;};
    void deleteImageRatio() { this->imageRatio_ = nullptr;};
    inline string imageRatio() const { DARABONBA_PTR_GET_DEFAULT(imageRatio_, "") };
    inline SearchImageShrinkRequest& setImageRatio(string imageRatio) { DARABONBA_PTR_SET_VALUE(imageRatio_, imageRatio) };


    // maxHeight Field Functions 
    bool hasMaxHeight() const { return this->maxHeight_ != nullptr;};
    void deleteMaxHeight() { this->maxHeight_ = nullptr;};
    inline int32_t maxHeight() const { DARABONBA_PTR_GET_DEFAULT(maxHeight_, 0) };
    inline SearchImageShrinkRequest& setMaxHeight(int32_t maxHeight) { DARABONBA_PTR_SET_VALUE(maxHeight_, maxHeight) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchImageShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // maxWidth Field Functions 
    bool hasMaxWidth() const { return this->maxWidth_ != nullptr;};
    void deleteMaxWidth() { this->maxWidth_ = nullptr;};
    inline int32_t maxWidth() const { DARABONBA_PTR_GET_DEFAULT(maxWidth_, 0) };
    inline SearchImageShrinkRequest& setMaxWidth(int32_t maxWidth) { DARABONBA_PTR_SET_VALUE(maxWidth_, maxWidth) };


    // minHeight Field Functions 
    bool hasMinHeight() const { return this->minHeight_ != nullptr;};
    void deleteMinHeight() { this->minHeight_ = nullptr;};
    inline int32_t minHeight() const { DARABONBA_PTR_GET_DEFAULT(minHeight_, 0) };
    inline SearchImageShrinkRequest& setMinHeight(int32_t minHeight) { DARABONBA_PTR_SET_VALUE(minHeight_, minHeight) };


    // minWidth Field Functions 
    bool hasMinWidth() const { return this->minWidth_ != nullptr;};
    void deleteMinWidth() { this->minWidth_ = nullptr;};
    inline int32_t minWidth() const { DARABONBA_PTR_GET_DEFAULT(minWidth_, 0) };
    inline SearchImageShrinkRequest& setMinWidth(int32_t minWidth) { DARABONBA_PTR_SET_VALUE(minWidth_, minWidth) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchImageShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ossKey Field Functions 
    bool hasOssKey() const { return this->ossKey_ != nullptr;};
    void deleteOssKey() { this->ossKey_ = nullptr;};
    inline string ossKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
    inline SearchImageShrinkRequest& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline SearchImageShrinkRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline SearchImageShrinkRequest& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline SearchImageShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SearchImageShrinkRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<string> colorHex_ = nullptr;
    std::shared_ptr<bool> hasPerson_ = nullptr;
    std::shared_ptr<string> imageCategory_ = nullptr;
    std::shared_ptr<string> imageRatio_ = nullptr;
    std::shared_ptr<int32_t> maxHeight_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<int32_t> maxWidth_ = nullptr;
    std::shared_ptr<int32_t> minHeight_ = nullptr;
    std::shared_ptr<int32_t> minWidth_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // Osskey。
    std::shared_ptr<string> ossKey_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<int32_t> start_ = nullptr;
    std::shared_ptr<string> tagsShrink_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
