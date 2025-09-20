// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGE_HPP_
#define ALIBABACLOUD_MODELS_IMAGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CroppingSuggestion.hpp>
#include <alibabacloud/models/ImageScore.hpp>
#include <alibabacloud/models/OCRContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Image : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Image& obj) { 
      DARABONBA_PTR_TO_JSON(CroppingSuggestions, croppingSuggestions_);
      DARABONBA_PTR_TO_JSON(EXIF, EXIF_);
      DARABONBA_PTR_TO_JSON(ImageHeight, imageHeight_);
      DARABONBA_PTR_TO_JSON(ImageScore, imageScore_);
      DARABONBA_PTR_TO_JSON(ImageWidth, imageWidth_);
      DARABONBA_PTR_TO_JSON(OCRContents, OCRContents_);
    };
    friend void from_json(const Darabonba::Json& j, Image& obj) { 
      DARABONBA_PTR_FROM_JSON(CroppingSuggestions, croppingSuggestions_);
      DARABONBA_PTR_FROM_JSON(EXIF, EXIF_);
      DARABONBA_PTR_FROM_JSON(ImageHeight, imageHeight_);
      DARABONBA_PTR_FROM_JSON(ImageScore, imageScore_);
      DARABONBA_PTR_FROM_JSON(ImageWidth, imageWidth_);
      DARABONBA_PTR_FROM_JSON(OCRContents, OCRContents_);
    };
    Image() = default ;
    Image(const Image &) = default ;
    Image(Image &&) = default ;
    Image(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Image() = default ;
    Image& operator=(const Image &) = default ;
    Image& operator=(Image &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->croppingSuggestions_ != nullptr
        && this->EXIF_ != nullptr && this->imageHeight_ != nullptr && this->imageScore_ != nullptr && this->imageWidth_ != nullptr && this->OCRContents_ != nullptr; };
    // croppingSuggestions Field Functions 
    bool hasCroppingSuggestions() const { return this->croppingSuggestions_ != nullptr;};
    void deleteCroppingSuggestions() { this->croppingSuggestions_ = nullptr;};
    inline const vector<CroppingSuggestion> & croppingSuggestions() const { DARABONBA_PTR_GET_CONST(croppingSuggestions_, vector<CroppingSuggestion>) };
    inline vector<CroppingSuggestion> croppingSuggestions() { DARABONBA_PTR_GET(croppingSuggestions_, vector<CroppingSuggestion>) };
    inline Image& setCroppingSuggestions(const vector<CroppingSuggestion> & croppingSuggestions) { DARABONBA_PTR_SET_VALUE(croppingSuggestions_, croppingSuggestions) };
    inline Image& setCroppingSuggestions(vector<CroppingSuggestion> && croppingSuggestions) { DARABONBA_PTR_SET_RVALUE(croppingSuggestions_, croppingSuggestions) };


    // EXIF Field Functions 
    bool hasEXIF() const { return this->EXIF_ != nullptr;};
    void deleteEXIF() { this->EXIF_ = nullptr;};
    inline string EXIF() const { DARABONBA_PTR_GET_DEFAULT(EXIF_, "") };
    inline Image& setEXIF(string EXIF) { DARABONBA_PTR_SET_VALUE(EXIF_, EXIF) };


    // imageHeight Field Functions 
    bool hasImageHeight() const { return this->imageHeight_ != nullptr;};
    void deleteImageHeight() { this->imageHeight_ = nullptr;};
    inline int64_t imageHeight() const { DARABONBA_PTR_GET_DEFAULT(imageHeight_, 0L) };
    inline Image& setImageHeight(int64_t imageHeight) { DARABONBA_PTR_SET_VALUE(imageHeight_, imageHeight) };


    // imageScore Field Functions 
    bool hasImageScore() const { return this->imageScore_ != nullptr;};
    void deleteImageScore() { this->imageScore_ = nullptr;};
    inline const ImageScore & imageScore() const { DARABONBA_PTR_GET_CONST(imageScore_, ImageScore) };
    inline ImageScore imageScore() { DARABONBA_PTR_GET(imageScore_, ImageScore) };
    inline Image& setImageScore(const ImageScore & imageScore) { DARABONBA_PTR_SET_VALUE(imageScore_, imageScore) };
    inline Image& setImageScore(ImageScore && imageScore) { DARABONBA_PTR_SET_RVALUE(imageScore_, imageScore) };


    // imageWidth Field Functions 
    bool hasImageWidth() const { return this->imageWidth_ != nullptr;};
    void deleteImageWidth() { this->imageWidth_ = nullptr;};
    inline int64_t imageWidth() const { DARABONBA_PTR_GET_DEFAULT(imageWidth_, 0L) };
    inline Image& setImageWidth(int64_t imageWidth) { DARABONBA_PTR_SET_VALUE(imageWidth_, imageWidth) };


    // OCRContents Field Functions 
    bool hasOCRContents() const { return this->OCRContents_ != nullptr;};
    void deleteOCRContents() { this->OCRContents_ = nullptr;};
    inline const vector<OCRContents> & OCRContents() const { DARABONBA_PTR_GET_CONST(OCRContents_, vector<OCRContents>) };
    inline vector<OCRContents> OCRContents() { DARABONBA_PTR_GET(OCRContents_, vector<OCRContents>) };
    inline Image& setOCRContents(const vector<OCRContents> & OCRContents) { DARABONBA_PTR_SET_VALUE(OCRContents_, OCRContents) };
    inline Image& setOCRContents(vector<OCRContents> && OCRContents) { DARABONBA_PTR_SET_RVALUE(OCRContents_, OCRContents) };


  protected:
    std::shared_ptr<vector<CroppingSuggestion>> croppingSuggestions_ = nullptr;
    std::shared_ptr<string> EXIF_ = nullptr;
    std::shared_ptr<int64_t> imageHeight_ = nullptr;
    std::shared_ptr<ImageScore> imageScore_ = nullptr;
    std::shared_ptr<int64_t> imageWidth_ = nullptr;
    std::shared_ptr<vector<OCRContents>> OCRContents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
