// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGETRANSLATIONPLUSASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGETRANSLATIONPLUSASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageTranslationPlusAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageTranslationPlusAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Glossary, glossary_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
      DARABONBA_PTR_TO_JSON(UseImageEditor, useImageEditor_);
    };
    friend void from_json(const Darabonba::Json& j, ImageTranslationPlusAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Glossary, glossary_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
      DARABONBA_PTR_FROM_JSON(UseImageEditor, useImageEditor_);
    };
    ImageTranslationPlusAsyncRequest() = default ;
    ImageTranslationPlusAsyncRequest(const ImageTranslationPlusAsyncRequest &) = default ;
    ImageTranslationPlusAsyncRequest(ImageTranslationPlusAsyncRequest &&) = default ;
    ImageTranslationPlusAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageTranslationPlusAsyncRequest() = default ;
    ImageTranslationPlusAsyncRequest& operator=(const ImageTranslationPlusAsyncRequest &) = default ;
    ImageTranslationPlusAsyncRequest& operator=(ImageTranslationPlusAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->glossary_ == nullptr && this->imageUrl_ == nullptr && this->includingProductArea_ == nullptr && this->sourceLanguage_ == nullptr && this->targetLanguage_ == nullptr
        && this->translatingBrandInTheProduct_ == nullptr && this->useImageEditor_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ImageTranslationPlusAsyncRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // glossary Field Functions 
    bool hasGlossary() const { return this->glossary_ != nullptr;};
    void deleteGlossary() { this->glossary_ = nullptr;};
    inline string getGlossary() const { DARABONBA_PTR_GET_DEFAULT(glossary_, "") };
    inline ImageTranslationPlusAsyncRequest& setGlossary(string glossary) { DARABONBA_PTR_SET_VALUE(glossary_, glossary) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageTranslationPlusAsyncRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // includingProductArea Field Functions 
    bool hasIncludingProductArea() const { return this->includingProductArea_ != nullptr;};
    void deleteIncludingProductArea() { this->includingProductArea_ = nullptr;};
    inline bool getIncludingProductArea() const { DARABONBA_PTR_GET_DEFAULT(includingProductArea_, false) };
    inline ImageTranslationPlusAsyncRequest& setIncludingProductArea(bool includingProductArea) { DARABONBA_PTR_SET_VALUE(includingProductArea_, includingProductArea) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline ImageTranslationPlusAsyncRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline ImageTranslationPlusAsyncRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // translatingBrandInTheProduct Field Functions 
    bool hasTranslatingBrandInTheProduct() const { return this->translatingBrandInTheProduct_ != nullptr;};
    void deleteTranslatingBrandInTheProduct() { this->translatingBrandInTheProduct_ = nullptr;};
    inline bool getTranslatingBrandInTheProduct() const { DARABONBA_PTR_GET_DEFAULT(translatingBrandInTheProduct_, false) };
    inline ImageTranslationPlusAsyncRequest& setTranslatingBrandInTheProduct(bool translatingBrandInTheProduct) { DARABONBA_PTR_SET_VALUE(translatingBrandInTheProduct_, translatingBrandInTheProduct) };


    // useImageEditor Field Functions 
    bool hasUseImageEditor() const { return this->useImageEditor_ != nullptr;};
    void deleteUseImageEditor() { this->useImageEditor_ = nullptr;};
    inline bool getUseImageEditor() const { DARABONBA_PTR_GET_DEFAULT(useImageEditor_, false) };
    inline ImageTranslationPlusAsyncRequest& setUseImageEditor(bool useImageEditor) { DARABONBA_PTR_SET_VALUE(useImageEditor_, useImageEditor) };


  protected:
    // The business order ID of the caller. This ID is recorded when the request is accepted and returned as is when you query the asynchronous task result.
    shared_ptr<string> bizId_ {};
    // The intervention glossary ID. You must create the intervention glossary separately and provide its ID in the input parameters. If the provided intervention glossary ID is empty, the translation results are not modified.
    shared_ptr<string> glossary_ {};
    // * Image URL: The image must be accessible over the Internet.    
    // * Format: PNG, JPEG, JPG, BMP, or WEBP.    
    // * Resolution: The width and height cannot exceed 4,000 pixels.   
    // * File size: The original file size cannot exceed 10 MB.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // Specifies whether to translate the text on the image subject. This helps you protect information and prevent embedded information, such as the product name, from being translated. In the example image, the text in the red box represents the text on the subject, and the text in the blue box represents the text not on the subject.
    shared_ptr<bool> includingProductArea_ {};
    // The source language code. The value auto is supported for automatic detection.
    // 
    // This parameter is required.
    shared_ptr<string> sourceLanguage_ {};
    // The target language code. We recommend that you use the 12 minor language pairs listed above.
    // 
    // This parameter is required.
    shared_ptr<string> targetLanguage_ {};
    // Specifies whether to translate the brand name in the image. This prevents the brand name from being translated. Default value: false. In the example image, \\"懒角落\\" represents the brand name.
    shared_ptr<bool> translatingBrandInTheProduct_ {};
    // Specifies whether to return layout information such as the position, font, and color of the text. This can be used to obtain data when you integrate the image editor for secondary editing. You can call the image translation result data query API operation to obtain the complete parameter information.
    shared_ptr<bool> useImageEditor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
