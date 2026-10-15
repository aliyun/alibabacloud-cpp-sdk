// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGETRANSLATIONPROASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGETRANSLATIONPROASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageTranslationProAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageTranslationProAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Glossary, glossary_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
      DARABONBA_PTR_TO_JSON(UseImageEditor, useImageEditor_);
    };
    friend void from_json(const Darabonba::Json& j, ImageTranslationProAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Glossary, glossary_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
      DARABONBA_PTR_FROM_JSON(UseImageEditor, useImageEditor_);
    };
    ImageTranslationProAsyncRequest() = default ;
    ImageTranslationProAsyncRequest(const ImageTranslationProAsyncRequest &) = default ;
    ImageTranslationProAsyncRequest(ImageTranslationProAsyncRequest &&) = default ;
    ImageTranslationProAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageTranslationProAsyncRequest() = default ;
    ImageTranslationProAsyncRequest& operator=(const ImageTranslationProAsyncRequest &) = default ;
    ImageTranslationProAsyncRequest& operator=(ImageTranslationProAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->glossary_ == nullptr
        && this->imageUrl_ == nullptr && this->includingProductArea_ == nullptr && this->sourceLanguage_ == nullptr && this->targetLanguage_ == nullptr && this->translatingBrandInTheProduct_ == nullptr
        && this->useImageEditor_ == nullptr; };
    // glossary Field Functions 
    bool hasGlossary() const { return this->glossary_ != nullptr;};
    void deleteGlossary() { this->glossary_ = nullptr;};
    inline string getGlossary() const { DARABONBA_PTR_GET_DEFAULT(glossary_, "") };
    inline ImageTranslationProAsyncRequest& setGlossary(string glossary) { DARABONBA_PTR_SET_VALUE(glossary_, glossary) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageTranslationProAsyncRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // includingProductArea Field Functions 
    bool hasIncludingProductArea() const { return this->includingProductArea_ != nullptr;};
    void deleteIncludingProductArea() { this->includingProductArea_ = nullptr;};
    inline bool getIncludingProductArea() const { DARABONBA_PTR_GET_DEFAULT(includingProductArea_, false) };
    inline ImageTranslationProAsyncRequest& setIncludingProductArea(bool includingProductArea) { DARABONBA_PTR_SET_VALUE(includingProductArea_, includingProductArea) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline ImageTranslationProAsyncRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline ImageTranslationProAsyncRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // translatingBrandInTheProduct Field Functions 
    bool hasTranslatingBrandInTheProduct() const { return this->translatingBrandInTheProduct_ != nullptr;};
    void deleteTranslatingBrandInTheProduct() { this->translatingBrandInTheProduct_ = nullptr;};
    inline bool getTranslatingBrandInTheProduct() const { DARABONBA_PTR_GET_DEFAULT(translatingBrandInTheProduct_, false) };
    inline ImageTranslationProAsyncRequest& setTranslatingBrandInTheProduct(bool translatingBrandInTheProduct) { DARABONBA_PTR_SET_VALUE(translatingBrandInTheProduct_, translatingBrandInTheProduct) };


    // useImageEditor Field Functions 
    bool hasUseImageEditor() const { return this->useImageEditor_ != nullptr;};
    void deleteUseImageEditor() { this->useImageEditor_ = nullptr;};
    inline bool getUseImageEditor() const { DARABONBA_PTR_GET_DEFAULT(useImageEditor_, false) };
    inline ImageTranslationProAsyncRequest& setUseImageEditor(bool useImageEditor) { DARABONBA_PTR_SET_VALUE(useImageEditor_, useImageEditor) };


  protected:
    // The ID of the intervention glossary. You must create the glossary in the console and provide its ID. If this parameter is left empty, the translation results are not modified.
    shared_ptr<string> glossary_ {};
    // • Image URL: Must be accessible over the Internet.   
    // • Format: PNG, JPEG, JPG, BMP, or WEBP.   
    // • Pixels: Both the width and height must not exceed 4,000.  
    // • File size: The original file size must be less than or equal to 10 MB.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // Specifies whether to translate the text on the product subject in the image. Set this parameter to false to protect the subject information, such as the product name, from being translated. Default value: false.
    shared_ptr<bool> includingProductArea_ {};
    // The source language code. The value auto is supported for automatic detection.
    // 
    // This parameter is required.
    shared_ptr<string> sourceLanguage_ {};
    // The target language code. For supported language pairs, see the appendix.
    // 
    // This parameter is required.
    shared_ptr<string> targetLanguage_ {};
    // Specifies whether to translate the brand names in the image. Default value: false, which indicates that brand names are not translated.
    shared_ptr<bool> translatingBrandInTheProduct_ {};
    // Specifies whether to return layout information such as the position, font, and color of the text. If you set this parameter to true, layer information is returned, which can be used for secondary editing in an image editor. Default value: false.
    shared_ptr<bool> useImageEditor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
