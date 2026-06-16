// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGETRANSLATIONPROREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGETRANSLATIONPROREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageTranslationProRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageTranslationProRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Glossary, glossary_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
      DARABONBA_PTR_TO_JSON(UseImageEditor, useImageEditor_);
      DARABONBA_PTR_TO_JSON(callType, callType_);
    };
    friend void from_json(const Darabonba::Json& j, ImageTranslationProRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Glossary, glossary_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
      DARABONBA_PTR_FROM_JSON(UseImageEditor, useImageEditor_);
      DARABONBA_PTR_FROM_JSON(callType, callType_);
    };
    ImageTranslationProRequest() = default ;
    ImageTranslationProRequest(const ImageTranslationProRequest &) = default ;
    ImageTranslationProRequest(ImageTranslationProRequest &&) = default ;
    ImageTranslationProRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageTranslationProRequest() = default ;
    ImageTranslationProRequest& operator=(const ImageTranslationProRequest &) = default ;
    ImageTranslationProRequest& operator=(ImageTranslationProRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->glossary_ == nullptr
        && this->imageUrl_ == nullptr && this->includingProductArea_ == nullptr && this->sourceLanguage_ == nullptr && this->targetLanguage_ == nullptr && this->translatingBrandInTheProduct_ == nullptr
        && this->useImageEditor_ == nullptr && this->callType_ == nullptr; };
    // glossary Field Functions 
    bool hasGlossary() const { return this->glossary_ != nullptr;};
    void deleteGlossary() { this->glossary_ = nullptr;};
    inline string getGlossary() const { DARABONBA_PTR_GET_DEFAULT(glossary_, "") };
    inline ImageTranslationProRequest& setGlossary(string glossary) { DARABONBA_PTR_SET_VALUE(glossary_, glossary) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageTranslationProRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // includingProductArea Field Functions 
    bool hasIncludingProductArea() const { return this->includingProductArea_ != nullptr;};
    void deleteIncludingProductArea() { this->includingProductArea_ = nullptr;};
    inline bool getIncludingProductArea() const { DARABONBA_PTR_GET_DEFAULT(includingProductArea_, false) };
    inline ImageTranslationProRequest& setIncludingProductArea(bool includingProductArea) { DARABONBA_PTR_SET_VALUE(includingProductArea_, includingProductArea) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline ImageTranslationProRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline ImageTranslationProRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // translatingBrandInTheProduct Field Functions 
    bool hasTranslatingBrandInTheProduct() const { return this->translatingBrandInTheProduct_ != nullptr;};
    void deleteTranslatingBrandInTheProduct() { this->translatingBrandInTheProduct_ = nullptr;};
    inline bool getTranslatingBrandInTheProduct() const { DARABONBA_PTR_GET_DEFAULT(translatingBrandInTheProduct_, false) };
    inline ImageTranslationProRequest& setTranslatingBrandInTheProduct(bool translatingBrandInTheProduct) { DARABONBA_PTR_SET_VALUE(translatingBrandInTheProduct_, translatingBrandInTheProduct) };


    // useImageEditor Field Functions 
    bool hasUseImageEditor() const { return this->useImageEditor_ != nullptr;};
    void deleteUseImageEditor() { this->useImageEditor_ = nullptr;};
    inline bool getUseImageEditor() const { DARABONBA_PTR_GET_DEFAULT(useImageEditor_, false) };
    inline ImageTranslationProRequest& setUseImageEditor(bool useImageEditor) { DARABONBA_PTR_SET_VALUE(useImageEditor_, useImageEditor) };


    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline string getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
    inline ImageTranslationProRequest& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


  protected:
    // The ID of the intervention glossary. Optional. Create the glossary in the console and provide its ID. If the glossary ID is empty, the translation results are not modified.
    shared_ptr<string> glossary_ {};
    // The URL of the original image. Required. Image requirements: width and height must not exceed 4000 × 4000. File size must not exceed 10 MB. Supported formats: png, jpeg, jpg, bmp, and webp.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // Specifies whether to translate text on the image subject. Optional. Default value: false. This helps protect information such as embedded product names from being translated.
    shared_ptr<bool> includingProductArea_ {};
    // The source language code. Required. For supported language directions, see the supported language direction list.
    // 
    // This parameter is required.
    shared_ptr<string> sourceLanguage_ {};
    // The target language code. Required. For supported language directions, see the supported language direction list.
    // 
    // This parameter is required.
    shared_ptr<string> targetLanguage_ {};
    // Specifies whether to translate brand names on images. Optional. Default value: false. This helps protect brand name information from being translated.
    shared_ptr<bool> translatingBrandInTheProduct_ {};
    // Specifies whether to return layout information such as text position, font, and color. Optional. Default value: false. This can be used for secondary editing when integrated with an image editor.
    shared_ptr<bool> useImageEditor_ {};
    // The call type. This is an internal system parameter. Optional.
    shared_ptr<string> callType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
