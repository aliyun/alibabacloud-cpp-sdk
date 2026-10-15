// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGETRANSLATIONSTANDARDASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGETRANSLATIONSTANDARDASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageTranslationStandardAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageTranslationStandardAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Glossary, glossary_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
      DARABONBA_PTR_TO_JSON(UseImageEditor, useImageEditor_);
    };
    friend void from_json(const Darabonba::Json& j, ImageTranslationStandardAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Glossary, glossary_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
      DARABONBA_PTR_FROM_JSON(UseImageEditor, useImageEditor_);
    };
    ImageTranslationStandardAsyncRequest() = default ;
    ImageTranslationStandardAsyncRequest(const ImageTranslationStandardAsyncRequest &) = default ;
    ImageTranslationStandardAsyncRequest(ImageTranslationStandardAsyncRequest &&) = default ;
    ImageTranslationStandardAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageTranslationStandardAsyncRequest() = default ;
    ImageTranslationStandardAsyncRequest& operator=(const ImageTranslationStandardAsyncRequest &) = default ;
    ImageTranslationStandardAsyncRequest& operator=(ImageTranslationStandardAsyncRequest &&) = default ;
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
    inline ImageTranslationStandardAsyncRequest& setGlossary(string glossary) { DARABONBA_PTR_SET_VALUE(glossary_, glossary) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageTranslationStandardAsyncRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // includingProductArea Field Functions 
    bool hasIncludingProductArea() const { return this->includingProductArea_ != nullptr;};
    void deleteIncludingProductArea() { this->includingProductArea_ = nullptr;};
    inline bool getIncludingProductArea() const { DARABONBA_PTR_GET_DEFAULT(includingProductArea_, false) };
    inline ImageTranslationStandardAsyncRequest& setIncludingProductArea(bool includingProductArea) { DARABONBA_PTR_SET_VALUE(includingProductArea_, includingProductArea) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline ImageTranslationStandardAsyncRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline ImageTranslationStandardAsyncRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // translatingBrandInTheProduct Field Functions 
    bool hasTranslatingBrandInTheProduct() const { return this->translatingBrandInTheProduct_ != nullptr;};
    void deleteTranslatingBrandInTheProduct() { this->translatingBrandInTheProduct_ = nullptr;};
    inline bool getTranslatingBrandInTheProduct() const { DARABONBA_PTR_GET_DEFAULT(translatingBrandInTheProduct_, false) };
    inline ImageTranslationStandardAsyncRequest& setTranslatingBrandInTheProduct(bool translatingBrandInTheProduct) { DARABONBA_PTR_SET_VALUE(translatingBrandInTheProduct_, translatingBrandInTheProduct) };


    // useImageEditor Field Functions 
    bool hasUseImageEditor() const { return this->useImageEditor_ != nullptr;};
    void deleteUseImageEditor() { this->useImageEditor_ = nullptr;};
    inline bool getUseImageEditor() const { DARABONBA_PTR_GET_DEFAULT(useImageEditor_, false) };
    inline ImageTranslationStandardAsyncRequest& setUseImageEditor(bool useImageEditor) { DARABONBA_PTR_SET_VALUE(useImageEditor_, useImageEditor) };


  protected:
    // The intervention glossary.
    shared_ptr<string> glossary_ {};
    // The URL of the image to be translated.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // Specifies whether to include the product area in the translation.
    shared_ptr<bool> includingProductArea_ {};
    // The source language.
    // 
    // This parameter is required.
    shared_ptr<string> sourceLanguage_ {};
    // The target language.
    // 
    // This parameter is required.
    shared_ptr<string> targetLanguage_ {};
    // Specifies whether to translate brand text in the product area.
    shared_ptr<bool> translatingBrandInTheProduct_ {};
    // Specifies whether to use the image editor protocol.
    shared_ptr<bool> useImageEditor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
