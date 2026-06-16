// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSETOPTIMIZELITEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSETOPTIMIZELITEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class AssetOptimizeLiteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssetOptimizeLiteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Glossary, glossary_);
      DARABONBA_PTR_TO_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_TO_JSON(NeedTrans, needTrans_);
      DARABONBA_PTR_TO_JSON(ProductUrl, productUrl_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(SourcePlatform, sourcePlatform_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(TargetPlatform, targetPlatform_);
      DARABONBA_PTR_TO_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
    };
    friend void from_json(const Darabonba::Json& j, AssetOptimizeLiteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Glossary, glossary_);
      DARABONBA_PTR_FROM_JSON(IncludingProductArea, includingProductArea_);
      DARABONBA_PTR_FROM_JSON(NeedTrans, needTrans_);
      DARABONBA_PTR_FROM_JSON(ProductUrl, productUrl_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(SourcePlatform, sourcePlatform_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(TargetPlatform, targetPlatform_);
      DARABONBA_PTR_FROM_JSON(TranslatingBrandInTheProduct, translatingBrandInTheProduct_);
    };
    AssetOptimizeLiteRequest() = default ;
    AssetOptimizeLiteRequest(const AssetOptimizeLiteRequest &) = default ;
    AssetOptimizeLiteRequest(AssetOptimizeLiteRequest &&) = default ;
    AssetOptimizeLiteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssetOptimizeLiteRequest() = default ;
    AssetOptimizeLiteRequest& operator=(const AssetOptimizeLiteRequest &) = default ;
    AssetOptimizeLiteRequest& operator=(AssetOptimizeLiteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->glossary_ == nullptr
        && this->includingProductArea_ == nullptr && this->needTrans_ == nullptr && this->productUrl_ == nullptr && this->sourceLanguage_ == nullptr && this->sourcePlatform_ == nullptr
        && this->targetLanguage_ == nullptr && this->targetPlatform_ == nullptr && this->translatingBrandInTheProduct_ == nullptr; };
    // glossary Field Functions 
    bool hasGlossary() const { return this->glossary_ != nullptr;};
    void deleteGlossary() { this->glossary_ = nullptr;};
    inline string getGlossary() const { DARABONBA_PTR_GET_DEFAULT(glossary_, "") };
    inline AssetOptimizeLiteRequest& setGlossary(string glossary) { DARABONBA_PTR_SET_VALUE(glossary_, glossary) };


    // includingProductArea Field Functions 
    bool hasIncludingProductArea() const { return this->includingProductArea_ != nullptr;};
    void deleteIncludingProductArea() { this->includingProductArea_ = nullptr;};
    inline bool getIncludingProductArea() const { DARABONBA_PTR_GET_DEFAULT(includingProductArea_, false) };
    inline AssetOptimizeLiteRequest& setIncludingProductArea(bool includingProductArea) { DARABONBA_PTR_SET_VALUE(includingProductArea_, includingProductArea) };


    // needTrans Field Functions 
    bool hasNeedTrans() const { return this->needTrans_ != nullptr;};
    void deleteNeedTrans() { this->needTrans_ = nullptr;};
    inline bool getNeedTrans() const { DARABONBA_PTR_GET_DEFAULT(needTrans_, false) };
    inline AssetOptimizeLiteRequest& setNeedTrans(bool needTrans) { DARABONBA_PTR_SET_VALUE(needTrans_, needTrans) };


    // productUrl Field Functions 
    bool hasProductUrl() const { return this->productUrl_ != nullptr;};
    void deleteProductUrl() { this->productUrl_ = nullptr;};
    inline string getProductUrl() const { DARABONBA_PTR_GET_DEFAULT(productUrl_, "") };
    inline AssetOptimizeLiteRequest& setProductUrl(string productUrl) { DARABONBA_PTR_SET_VALUE(productUrl_, productUrl) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline AssetOptimizeLiteRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // sourcePlatform Field Functions 
    bool hasSourcePlatform() const { return this->sourcePlatform_ != nullptr;};
    void deleteSourcePlatform() { this->sourcePlatform_ = nullptr;};
    inline string getSourcePlatform() const { DARABONBA_PTR_GET_DEFAULT(sourcePlatform_, "") };
    inline AssetOptimizeLiteRequest& setSourcePlatform(string sourcePlatform) { DARABONBA_PTR_SET_VALUE(sourcePlatform_, sourcePlatform) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline AssetOptimizeLiteRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // targetPlatform Field Functions 
    bool hasTargetPlatform() const { return this->targetPlatform_ != nullptr;};
    void deleteTargetPlatform() { this->targetPlatform_ = nullptr;};
    inline string getTargetPlatform() const { DARABONBA_PTR_GET_DEFAULT(targetPlatform_, "") };
    inline AssetOptimizeLiteRequest& setTargetPlatform(string targetPlatform) { DARABONBA_PTR_SET_VALUE(targetPlatform_, targetPlatform) };


    // translatingBrandInTheProduct Field Functions 
    bool hasTranslatingBrandInTheProduct() const { return this->translatingBrandInTheProduct_ != nullptr;};
    void deleteTranslatingBrandInTheProduct() { this->translatingBrandInTheProduct_ = nullptr;};
    inline bool getTranslatingBrandInTheProduct() const { DARABONBA_PTR_GET_DEFAULT(translatingBrandInTheProduct_, false) };
    inline AssetOptimizeLiteRequest& setTranslatingBrandInTheProduct(bool translatingBrandInTheProduct) { DARABONBA_PTR_SET_VALUE(translatingBrandInTheProduct_, translatingBrandInTheProduct) };


  protected:
    // Custom glossary
    shared_ptr<string> glossary_ {};
    // Whether to include product region translation
    shared_ptr<bool> includingProductArea_ {};
    // Whether translation is required
    // 
    // This parameter is required.
    shared_ptr<bool> needTrans_ {};
    // Product Link URL
    // 
    // This parameter is required.
    shared_ptr<string> productUrl_ {};
    // Source language code, e.g., zh
    shared_ptr<string> sourceLanguage_ {};
    // Source platform, e.g., 1688
    // 
    // This parameter is required.
    shared_ptr<string> sourcePlatform_ {};
    // Target language code, e.g., en
    shared_ptr<string> targetLanguage_ {};
    // Target platform, e.g., temu
    // 
    // This parameter is required.
    shared_ptr<string> targetPlatform_ {};
    // Whether to translate brand names in images, default false
    shared_ptr<bool> translatingBrandInTheProduct_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
