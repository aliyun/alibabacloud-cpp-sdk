// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSETOPTIMIZEPROSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSETOPTIMIZEPROSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class AssetOptimizeProShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssetOptimizeProShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnNameList, columnNameListShrink_);
      DARABONBA_PTR_TO_JSON(Glossary, glossary_);
      DARABONBA_PTR_TO_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_TO_JSON(LanguageModel, languageModel_);
      DARABONBA_PTR_TO_JSON(NeedTrans, needTrans_);
      DARABONBA_PTR_TO_JSON(ProductUrl, productUrl_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(SourcePlatform, sourcePlatform_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(TargetPlatform, targetPlatform_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
    };
    friend void from_json(const Darabonba::Json& j, AssetOptimizeProShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnNameList, columnNameListShrink_);
      DARABONBA_PTR_FROM_JSON(Glossary, glossary_);
      DARABONBA_PTR_FROM_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_FROM_JSON(LanguageModel, languageModel_);
      DARABONBA_PTR_FROM_JSON(NeedTrans, needTrans_);
      DARABONBA_PTR_FROM_JSON(ProductUrl, productUrl_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(SourcePlatform, sourcePlatform_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(TargetPlatform, targetPlatform_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
    };
    AssetOptimizeProShrinkRequest() = default ;
    AssetOptimizeProShrinkRequest(const AssetOptimizeProShrinkRequest &) = default ;
    AssetOptimizeProShrinkRequest(AssetOptimizeProShrinkRequest &&) = default ;
    AssetOptimizeProShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssetOptimizeProShrinkRequest() = default ;
    AssetOptimizeProShrinkRequest& operator=(const AssetOptimizeProShrinkRequest &) = default ;
    AssetOptimizeProShrinkRequest& operator=(AssetOptimizeProShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnNameListShrink_ == nullptr
        && this->glossary_ == nullptr && this->includingProductArea_ == nullptr && this->languageModel_ == nullptr && this->needTrans_ == nullptr && this->productUrl_ == nullptr
        && this->sourceLanguage_ == nullptr && this->sourcePlatform_ == nullptr && this->targetLanguage_ == nullptr && this->targetPlatform_ == nullptr && this->threshold_ == nullptr
        && this->translatingBrandInTheProduct_ == nullptr; };
    // columnNameListShrink Field Functions 
    bool hasColumnNameListShrink() const { return this->columnNameListShrink_ != nullptr;};
    void deleteColumnNameListShrink() { this->columnNameListShrink_ = nullptr;};
    inline string getColumnNameListShrink() const { DARABONBA_PTR_GET_DEFAULT(columnNameListShrink_, "") };
    inline AssetOptimizeProShrinkRequest& setColumnNameListShrink(string columnNameListShrink) { DARABONBA_PTR_SET_VALUE(columnNameListShrink_, columnNameListShrink) };


    // glossary Field Functions 
    bool hasGlossary() const { return this->glossary_ != nullptr;};
    void deleteGlossary() { this->glossary_ = nullptr;};
    inline string getGlossary() const { DARABONBA_PTR_GET_DEFAULT(glossary_, "") };
    inline AssetOptimizeProShrinkRequest& setGlossary(string glossary) { DARABONBA_PTR_SET_VALUE(glossary_, glossary) };


    // includingProductArea Field Functions 
    bool hasIncludingProductArea() const { return this->includingProductArea_ != nullptr;};
    void deleteIncludingProductArea() { this->includingProductArea_ = nullptr;};
    inline bool getIncludingProductArea() const { DARABONBA_PTR_GET_DEFAULT(includingProductArea_, false) };
    inline AssetOptimizeProShrinkRequest& setIncludingProductArea(bool includingProductArea) { DARABONBA_PTR_SET_VALUE(includingProductArea_, includingProductArea) };


    // languageModel Field Functions 
    bool hasLanguageModel() const { return this->languageModel_ != nullptr;};
    void deleteLanguageModel() { this->languageModel_ = nullptr;};
    inline string getLanguageModel() const { DARABONBA_PTR_GET_DEFAULT(languageModel_, "") };
    inline AssetOptimizeProShrinkRequest& setLanguageModel(string languageModel) { DARABONBA_PTR_SET_VALUE(languageModel_, languageModel) };


    // needTrans Field Functions 
    bool hasNeedTrans() const { return this->needTrans_ != nullptr;};
    void deleteNeedTrans() { this->needTrans_ = nullptr;};
    inline bool getNeedTrans() const { DARABONBA_PTR_GET_DEFAULT(needTrans_, false) };
    inline AssetOptimizeProShrinkRequest& setNeedTrans(bool needTrans) { DARABONBA_PTR_SET_VALUE(needTrans_, needTrans) };


    // productUrl Field Functions 
    bool hasProductUrl() const { return this->productUrl_ != nullptr;};
    void deleteProductUrl() { this->productUrl_ = nullptr;};
    inline string getProductUrl() const { DARABONBA_PTR_GET_DEFAULT(productUrl_, "") };
    inline AssetOptimizeProShrinkRequest& setProductUrl(string productUrl) { DARABONBA_PTR_SET_VALUE(productUrl_, productUrl) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline AssetOptimizeProShrinkRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // sourcePlatform Field Functions 
    bool hasSourcePlatform() const { return this->sourcePlatform_ != nullptr;};
    void deleteSourcePlatform() { this->sourcePlatform_ = nullptr;};
    inline string getSourcePlatform() const { DARABONBA_PTR_GET_DEFAULT(sourcePlatform_, "") };
    inline AssetOptimizeProShrinkRequest& setSourcePlatform(string sourcePlatform) { DARABONBA_PTR_SET_VALUE(sourcePlatform_, sourcePlatform) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline AssetOptimizeProShrinkRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // targetPlatform Field Functions 
    bool hasTargetPlatform() const { return this->targetPlatform_ != nullptr;};
    void deleteTargetPlatform() { this->targetPlatform_ = nullptr;};
    inline string getTargetPlatform() const { DARABONBA_PTR_GET_DEFAULT(targetPlatform_, "") };
    inline AssetOptimizeProShrinkRequest& setTargetPlatform(string targetPlatform) { DARABONBA_PTR_SET_VALUE(targetPlatform_, targetPlatform) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline AssetOptimizeProShrinkRequest& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // translatingBrandInTheProduct Field Functions 
    bool hasTranslatingBrandInTheProduct() const { return this->translatingBrandInTheProduct_ != nullptr;};
    void deleteTranslatingBrandInTheProduct() { this->translatingBrandInTheProduct_ = nullptr;};
    inline bool getTranslatingBrandInTheProduct() const { DARABONBA_PTR_GET_DEFAULT(translatingBrandInTheProduct_, false) };
    inline AssetOptimizeProShrinkRequest& setTranslatingBrandInTheProduct(bool translatingBrandInTheProduct) { DARABONBA_PTR_SET_VALUE(translatingBrandInTheProduct_, translatingBrandInTheProduct) };


  protected:
    // The list of column names to recognize in size chart images. Optional.
    shared_ptr<string> columnNameListShrink_ {};
    // The glossary ID. Optional. Create a glossary in the console and provide its ID. If left empty, translation results are not modified by any glossary.
    shared_ptr<string> glossary_ {};
    // Specifies whether to translate text on the product subject area of images. Setting this to false helps protect embedded information such as product names from being translated. Default value: false.
    shared_ptr<bool> includingProductArea_ {};
    // The output language format for size chart images. If not specified, the original format is used. Set to en for English output or cn for Chinese output.
    shared_ptr<string> languageModel_ {};
    // Specifies whether translation is required (true/false). If set to true, SourceLanguage and TargetLanguage are required.
    // 
    // This parameter is required.
    shared_ptr<bool> needTrans_ {};
    // The product URL. This parameter is required. Only 1688 product links are supported.
    // 
    // This parameter is required.
    shared_ptr<string> productUrl_ {};
    // The source language code. Optional. For supported language pairs, refer to the supported translation language list. This parameter is required if NeedTrans is set to true.
    shared_ptr<string> sourceLanguage_ {};
    // The source platform. Only 1688 is supported.
    // 
    // This parameter is required.
    shared_ptr<string> sourcePlatform_ {};
    // The target language code. Optional. For supported language pairs, refer to the supported translation language list. This parameter is required if NeedTrans is set to true.
    shared_ptr<string> targetLanguage_ {};
    // The target listing platform. Only temu is supported.
    // 
    // This parameter is required.
    shared_ptr<string> targetPlatform_ {};
    // The confidence threshold for size chart detection. Default value: 0.4. A value of 0 treats all images as size charts. A value of 1 treats no images as size charts.
    shared_ptr<double> threshold_ {};
    // Specifies whether to translate brand names on images. Optional. Default value: false. Setting this to false helps protect brand name information from being translated.
    shared_ptr<bool> translatingBrandInTheProduct_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
