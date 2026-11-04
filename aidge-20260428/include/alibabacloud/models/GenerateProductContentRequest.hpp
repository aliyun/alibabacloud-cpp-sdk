// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEPRODUCTCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEPRODUCTCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class GenerateProductContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateProductContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BulletPointCount, bulletPointCount_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(EnableTranslation, enableTranslation_);
      DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_TO_JSON(MinLength, minLength_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(ProductAttributes, productAttributes_);
      DARABONBA_PTR_TO_JSON(ProductCategory, productCategory_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(SourceText, sourceText_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateProductContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BulletPointCount, bulletPointCount_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(EnableTranslation, enableTranslation_);
      DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_FROM_JSON(MinLength, minLength_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(ProductAttributes, productAttributes_);
      DARABONBA_PTR_FROM_JSON(ProductCategory, productCategory_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(SourceText, sourceText_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
    };
    GenerateProductContentRequest() = default ;
    GenerateProductContentRequest(const GenerateProductContentRequest &) = default ;
    GenerateProductContentRequest(GenerateProductContentRequest &&) = default ;
    GenerateProductContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateProductContentRequest() = default ;
    GenerateProductContentRequest& operator=(const GenerateProductContentRequest &) = default ;
    GenerateProductContentRequest& operator=(GenerateProductContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bulletPointCount_ == nullptr
        && this->contentType_ == nullptr && this->enableTranslation_ == nullptr && this->maxLength_ == nullptr && this->minLength_ == nullptr && this->operation_ == nullptr
        && this->platform_ == nullptr && this->productAttributes_ == nullptr && this->productCategory_ == nullptr && this->sourceLanguage_ == nullptr && this->sourceText_ == nullptr
        && this->targetLanguage_ == nullptr; };
    // bulletPointCount Field Functions 
    bool hasBulletPointCount() const { return this->bulletPointCount_ != nullptr;};
    void deleteBulletPointCount() { this->bulletPointCount_ = nullptr;};
    inline int32_t getBulletPointCount() const { DARABONBA_PTR_GET_DEFAULT(bulletPointCount_, 0) };
    inline GenerateProductContentRequest& setBulletPointCount(int32_t bulletPointCount) { DARABONBA_PTR_SET_VALUE(bulletPointCount_, bulletPointCount) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline GenerateProductContentRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // enableTranslation Field Functions 
    bool hasEnableTranslation() const { return this->enableTranslation_ != nullptr;};
    void deleteEnableTranslation() { this->enableTranslation_ = nullptr;};
    inline bool getEnableTranslation() const { DARABONBA_PTR_GET_DEFAULT(enableTranslation_, false) };
    inline GenerateProductContentRequest& setEnableTranslation(bool enableTranslation) { DARABONBA_PTR_SET_VALUE(enableTranslation_, enableTranslation) };


    // maxLength Field Functions 
    bool hasMaxLength() const { return this->maxLength_ != nullptr;};
    void deleteMaxLength() { this->maxLength_ = nullptr;};
    inline int32_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
    inline GenerateProductContentRequest& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


    // minLength Field Functions 
    bool hasMinLength() const { return this->minLength_ != nullptr;};
    void deleteMinLength() { this->minLength_ = nullptr;};
    inline int32_t getMinLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0) };
    inline GenerateProductContentRequest& setMinLength(int32_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline GenerateProductContentRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GenerateProductContentRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // productAttributes Field Functions 
    bool hasProductAttributes() const { return this->productAttributes_ != nullptr;};
    void deleteProductAttributes() { this->productAttributes_ = nullptr;};
    inline string getProductAttributes() const { DARABONBA_PTR_GET_DEFAULT(productAttributes_, "") };
    inline GenerateProductContentRequest& setProductAttributes(string productAttributes) { DARABONBA_PTR_SET_VALUE(productAttributes_, productAttributes) };


    // productCategory Field Functions 
    bool hasProductCategory() const { return this->productCategory_ != nullptr;};
    void deleteProductCategory() { this->productCategory_ = nullptr;};
    inline string getProductCategory() const { DARABONBA_PTR_GET_DEFAULT(productCategory_, "") };
    inline GenerateProductContentRequest& setProductCategory(string productCategory) { DARABONBA_PTR_SET_VALUE(productCategory_, productCategory) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline GenerateProductContentRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // sourceText Field Functions 
    bool hasSourceText() const { return this->sourceText_ != nullptr;};
    void deleteSourceText() { this->sourceText_ = nullptr;};
    inline string getSourceText() const { DARABONBA_PTR_GET_DEFAULT(sourceText_, "") };
    inline GenerateProductContentRequest& setSourceText(string sourceText) { DARABONBA_PTR_SET_VALUE(sourceText_, sourceText) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline GenerateProductContentRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


  protected:
    // Takes effect only when contentType is set to bulletPoint. Valid values: 1 to 5. Default value in generate mode: 1. In rewrite mode, if manually specified, the value must match the number of non-empty paragraphs in sourceText. This parameter is ignored for other copy types.
    shared_ptr<int32_t> bulletPointCount_ {};
    // The copy type. Valid values: title, highlight, keywords, bulletPoint, and description. When a platform is specified, you must select a type supported by the platform.
    // 
    // This parameter is required.
    shared_ptr<string> contentType_ {};
    // Specifies whether to enable translation. Default value: false. Valid values: true and false.
    shared_ptr<bool> enableTranslation_ {};
    // The maximum number of characters for the final output text. If specified, the value must be an integer greater than or equal to 30. If a platform is specified and this parameter is not provided, the configured upper limit for the content type on the platform is used. Example: 60.
    shared_ptr<int32_t> maxLength_ {};
    // The minimum number of characters for the final output text. If specified, the value must be an integer greater than or equal to 10. If a platform is specified and this parameter is not provided, the configured lower limit for the content type on the platform is used.
    shared_ptr<int32_t> minLength_ {};
    // The operation type. Valid values:
    // - generate: Generates copy.
    // - rewrite: Rewrites copy.
    // 
    // This parameter is required.
    shared_ptr<string> operation_ {};
    // The target platform. Valid values: amazon, temu, tiktok, shopify, Wildberries, and tmall. If this parameter is not provided, the request is processed as a general scenario. Enum values are case-sensitive.
    shared_ptr<string> platform_ {};
    // The product attribute information. Default value: empty. The length must be 0 to 500 characters.
    shared_ptr<string> productAttributes_ {};
    // The product category. Default value: an empty string. The length must be 0 to 100 characters. This parameter helps understand the category during generation and eliminates ambiguity during rewriting.
    shared_ptr<string> productCategory_ {};
    // The source language. Valid values: zh and en. Automatic language detection is not supported. Supported source languages: Chinese (zh) and English (en).
    // 
    // This parameter is required.
    shared_ptr<string> sourceLanguage_ {};
    // The product information or copy to be rewritten. The length must be 20 to 3,000 characters.
    // 
    // This parameter is required.
    shared_ptr<string> sourceText_ {};
    // Required when enableTranslation is set to true. For valid values, see the multilingual processing section. If translation is disabled, this parameter is optional. If provided, it must be the same as the source language. Supported target languages: Chinese (zh), English (en), Russian (ru), German (de), French (fr), Korean (ko), Italian (it), Thai (th), Arabic (ar), Turkish (tr), Hebrew (he), Ukrainian (uk), Polish (pl), Japanese (ja), Dutch (nl), Portuguese (pt), Spanish (es), Malay (ms), Bulgarian (bg), Indonesian (id), and Vietnamese (vi).
    shared_ptr<string> targetLanguage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
