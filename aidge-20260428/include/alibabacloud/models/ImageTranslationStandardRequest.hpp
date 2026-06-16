// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGETRANSLATIONSTANDARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGETRANSLATIONSTANDARDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageTranslationStandardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageTranslationStandardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Glossary, glossary_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
    };
    friend void from_json(const Darabonba::Json& j, ImageTranslationStandardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Glossary, glossary_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
    };
    ImageTranslationStandardRequest() = default ;
    ImageTranslationStandardRequest(const ImageTranslationStandardRequest &) = default ;
    ImageTranslationStandardRequest(ImageTranslationStandardRequest &&) = default ;
    ImageTranslationStandardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageTranslationStandardRequest() = default ;
    ImageTranslationStandardRequest& operator=(const ImageTranslationStandardRequest &) = default ;
    ImageTranslationStandardRequest& operator=(ImageTranslationStandardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->glossary_ == nullptr
        && this->imageUrl_ == nullptr && this->includingProductArea_ == nullptr && this->sourceLanguage_ == nullptr && this->targetLanguage_ == nullptr && this->translatingBrandInTheProduct_ == nullptr; };
    // glossary Field Functions 
    bool hasGlossary() const { return this->glossary_ != nullptr;};
    void deleteGlossary() { this->glossary_ = nullptr;};
    inline string getGlossary() const { DARABONBA_PTR_GET_DEFAULT(glossary_, "") };
    inline ImageTranslationStandardRequest& setGlossary(string glossary) { DARABONBA_PTR_SET_VALUE(glossary_, glossary) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageTranslationStandardRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // includingProductArea Field Functions 
    bool hasIncludingProductArea() const { return this->includingProductArea_ != nullptr;};
    void deleteIncludingProductArea() { this->includingProductArea_ = nullptr;};
    inline bool getIncludingProductArea() const { DARABONBA_PTR_GET_DEFAULT(includingProductArea_, false) };
    inline ImageTranslationStandardRequest& setIncludingProductArea(bool includingProductArea) { DARABONBA_PTR_SET_VALUE(includingProductArea_, includingProductArea) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline ImageTranslationStandardRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline ImageTranslationStandardRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // translatingBrandInTheProduct Field Functions 
    bool hasTranslatingBrandInTheProduct() const { return this->translatingBrandInTheProduct_ != nullptr;};
    void deleteTranslatingBrandInTheProduct() { this->translatingBrandInTheProduct_ = nullptr;};
    inline bool getTranslatingBrandInTheProduct() const { DARABONBA_PTR_GET_DEFAULT(translatingBrandInTheProduct_, false) };
    inline ImageTranslationStandardRequest& setTranslatingBrandInTheProduct(bool translatingBrandInTheProduct) { DARABONBA_PTR_SET_VALUE(translatingBrandInTheProduct_, translatingBrandInTheProduct) };


  protected:
    // The ID of the intervention glossary. This parameter is optional. Create the glossary in the console and provide its ID. If the glossary ID is empty, the translation results are not modified.
    shared_ptr<string> glossary_ {};
    // The URL of the original image. This parameter is required. Image requirements: the width and height cannot exceed 4000 × 4000 pixels, the file size cannot exceed 10 MB, and the supported formats are png, jpeg, jpg, bmp, and webp.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // Specifies whether to translate text on the product subject in the image. This parameter is optional. Default value: false. This helps protect information by preventing translation of embedded information such as product names.
    shared_ptr<bool> includingProductArea_ {};
    // The source language code. This parameter is required. For supported language directions, see the supported language directions list.
    // 
    // This parameter is required.
    shared_ptr<string> sourceLanguage_ {};
    // The target language code. This parameter is required. For supported language directions, see the supported language directions list.
    // 
    // This parameter is required.
    shared_ptr<string> targetLanguage_ {};
    // Specifies whether to translate brand names on the image. This parameter is optional. Default value: false. This helps protect brand name information from being translated.
    shared_ptr<bool> translatingBrandInTheProduct_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
