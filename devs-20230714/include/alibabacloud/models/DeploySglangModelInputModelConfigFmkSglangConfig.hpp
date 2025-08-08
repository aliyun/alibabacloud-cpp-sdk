// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYSGLANGMODELINPUTMODELCONFIGFMKSGLANGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYSGLANGMODELINPUTMODELCONFIGFMKSGLANGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeploySGLangModelInputModelConfigFmkSGLangConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploySGLangModelInputModelConfigFmkSGLangConfig& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(chatTemplate, chatTemplate_);
      DARABONBA_PTR_TO_JSON(dtype, dtype_);
      DARABONBA_PTR_TO_JSON(fullTextPostfix, fullTextPostfix_);
      DARABONBA_PTR_TO_JSON(loadFormat, loadFormat_);
      DARABONBA_PTR_TO_JSON(maxRunningRequests, maxRunningRequests_);
      DARABONBA_PTR_TO_JSON(maxTotalTokens, maxTotalTokens_);
      DARABONBA_PTR_TO_JSON(memFractionStatic, memFractionStatic_);
      DARABONBA_PTR_TO_JSON(quantization, quantization_);
      DARABONBA_PTR_TO_JSON(servedModelName, servedModelName_);
    };
    friend void from_json(const Darabonba::Json& j, DeploySGLangModelInputModelConfigFmkSGLangConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(chatTemplate, chatTemplate_);
      DARABONBA_PTR_FROM_JSON(dtype, dtype_);
      DARABONBA_PTR_FROM_JSON(fullTextPostfix, fullTextPostfix_);
      DARABONBA_PTR_FROM_JSON(loadFormat, loadFormat_);
      DARABONBA_PTR_FROM_JSON(maxRunningRequests, maxRunningRequests_);
      DARABONBA_PTR_FROM_JSON(maxTotalTokens, maxTotalTokens_);
      DARABONBA_PTR_FROM_JSON(memFractionStatic, memFractionStatic_);
      DARABONBA_PTR_FROM_JSON(quantization, quantization_);
      DARABONBA_PTR_FROM_JSON(servedModelName, servedModelName_);
    };
    DeploySGLangModelInputModelConfigFmkSGLangConfig() = default ;
    DeploySGLangModelInputModelConfigFmkSGLangConfig(const DeploySGLangModelInputModelConfigFmkSGLangConfig &) = default ;
    DeploySGLangModelInputModelConfigFmkSGLangConfig(DeploySGLangModelInputModelConfigFmkSGLangConfig &&) = default ;
    DeploySGLangModelInputModelConfigFmkSGLangConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploySGLangModelInputModelConfigFmkSGLangConfig() = default ;
    DeploySGLangModelInputModelConfigFmkSGLangConfig& operator=(const DeploySGLangModelInputModelConfigFmkSGLangConfig &) = default ;
    DeploySGLangModelInputModelConfigFmkSGLangConfig& operator=(DeploySGLangModelInputModelConfigFmkSGLangConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiKey_ != nullptr
        && this->chatTemplate_ != nullptr && this->dtype_ != nullptr && this->fullTextPostfix_ != nullptr && this->loadFormat_ != nullptr && this->maxRunningRequests_ != nullptr
        && this->maxTotalTokens_ != nullptr && this->memFractionStatic_ != nullptr && this->quantization_ != nullptr && this->servedModelName_ != nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DeploySGLangModelInputModelConfigFmkSGLangConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // chatTemplate Field Functions 
    bool hasChatTemplate() const { return this->chatTemplate_ != nullptr;};
    void deleteChatTemplate() { this->chatTemplate_ = nullptr;};
    inline string chatTemplate() const { DARABONBA_PTR_GET_DEFAULT(chatTemplate_, "") };
    inline DeploySGLangModelInputModelConfigFmkSGLangConfig& setChatTemplate(string chatTemplate) { DARABONBA_PTR_SET_VALUE(chatTemplate_, chatTemplate) };


    // dtype Field Functions 
    bool hasDtype() const { return this->dtype_ != nullptr;};
    void deleteDtype() { this->dtype_ = nullptr;};
    inline string dtype() const { DARABONBA_PTR_GET_DEFAULT(dtype_, "") };
    inline DeploySGLangModelInputModelConfigFmkSGLangConfig& setDtype(string dtype) { DARABONBA_PTR_SET_VALUE(dtype_, dtype) };


    // fullTextPostfix Field Functions 
    bool hasFullTextPostfix() const { return this->fullTextPostfix_ != nullptr;};
    void deleteFullTextPostfix() { this->fullTextPostfix_ = nullptr;};
    inline string fullTextPostfix() const { DARABONBA_PTR_GET_DEFAULT(fullTextPostfix_, "") };
    inline DeploySGLangModelInputModelConfigFmkSGLangConfig& setFullTextPostfix(string fullTextPostfix) { DARABONBA_PTR_SET_VALUE(fullTextPostfix_, fullTextPostfix) };


    // loadFormat Field Functions 
    bool hasLoadFormat() const { return this->loadFormat_ != nullptr;};
    void deleteLoadFormat() { this->loadFormat_ = nullptr;};
    inline string loadFormat() const { DARABONBA_PTR_GET_DEFAULT(loadFormat_, "") };
    inline DeploySGLangModelInputModelConfigFmkSGLangConfig& setLoadFormat(string loadFormat) { DARABONBA_PTR_SET_VALUE(loadFormat_, loadFormat) };


    // maxRunningRequests Field Functions 
    bool hasMaxRunningRequests() const { return this->maxRunningRequests_ != nullptr;};
    void deleteMaxRunningRequests() { this->maxRunningRequests_ = nullptr;};
    inline int32_t maxRunningRequests() const { DARABONBA_PTR_GET_DEFAULT(maxRunningRequests_, 0) };
    inline DeploySGLangModelInputModelConfigFmkSGLangConfig& setMaxRunningRequests(int32_t maxRunningRequests) { DARABONBA_PTR_SET_VALUE(maxRunningRequests_, maxRunningRequests) };


    // maxTotalTokens Field Functions 
    bool hasMaxTotalTokens() const { return this->maxTotalTokens_ != nullptr;};
    void deleteMaxTotalTokens() { this->maxTotalTokens_ = nullptr;};
    inline int32_t maxTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTotalTokens_, 0) };
    inline DeploySGLangModelInputModelConfigFmkSGLangConfig& setMaxTotalTokens(int32_t maxTotalTokens) { DARABONBA_PTR_SET_VALUE(maxTotalTokens_, maxTotalTokens) };


    // memFractionStatic Field Functions 
    bool hasMemFractionStatic() const { return this->memFractionStatic_ != nullptr;};
    void deleteMemFractionStatic() { this->memFractionStatic_ = nullptr;};
    inline float memFractionStatic() const { DARABONBA_PTR_GET_DEFAULT(memFractionStatic_, 0.0) };
    inline DeploySGLangModelInputModelConfigFmkSGLangConfig& setMemFractionStatic(float memFractionStatic) { DARABONBA_PTR_SET_VALUE(memFractionStatic_, memFractionStatic) };


    // quantization Field Functions 
    bool hasQuantization() const { return this->quantization_ != nullptr;};
    void deleteQuantization() { this->quantization_ = nullptr;};
    inline string quantization() const { DARABONBA_PTR_GET_DEFAULT(quantization_, "") };
    inline DeploySGLangModelInputModelConfigFmkSGLangConfig& setQuantization(string quantization) { DARABONBA_PTR_SET_VALUE(quantization_, quantization) };


    // servedModelName Field Functions 
    bool hasServedModelName() const { return this->servedModelName_ != nullptr;};
    void deleteServedModelName() { this->servedModelName_ = nullptr;};
    inline string servedModelName() const { DARABONBA_PTR_GET_DEFAULT(servedModelName_, "") };
    inline DeploySGLangModelInputModelConfigFmkSGLangConfig& setServedModelName(string servedModelName) { DARABONBA_PTR_SET_VALUE(servedModelName_, servedModelName) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> chatTemplate_ = nullptr;
    std::shared_ptr<string> dtype_ = nullptr;
    std::shared_ptr<string> fullTextPostfix_ = nullptr;
    std::shared_ptr<string> loadFormat_ = nullptr;
    std::shared_ptr<int32_t> maxRunningRequests_ = nullptr;
    std::shared_ptr<int32_t> maxTotalTokens_ = nullptr;
    std::shared_ptr<float> memFractionStatic_ = nullptr;
    std::shared_ptr<string> quantization_ = nullptr;
    std::shared_ptr<string> servedModelName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
