// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELPROVIDERLLMCODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELPROVIDERLLMCODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListModelProviderLlmCodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelProviderLlmCodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(LlmCode, llmCode_);
      DARABONBA_PTR_TO_JSON(ModelBrands, modelBrands_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
      DARABONBA_PTR_TO_JSON(ProviderTemplateId, providerTemplateId_);
      DARABONBA_PTR_TO_JSON(Recommended, recommended_);
      DARABONBA_PTR_TO_JSON(RecommendedLevels, recommendedLevels_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelProviderLlmCodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(LlmCode, llmCode_);
      DARABONBA_PTR_FROM_JSON(ModelBrands, modelBrands_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
      DARABONBA_PTR_FROM_JSON(ProviderTemplateId, providerTemplateId_);
      DARABONBA_PTR_FROM_JSON(Recommended, recommended_);
      DARABONBA_PTR_FROM_JSON(RecommendedLevels, recommendedLevels_);
    };
    ListModelProviderLlmCodesRequest() = default ;
    ListModelProviderLlmCodesRequest(const ListModelProviderLlmCodesRequest &) = default ;
    ListModelProviderLlmCodesRequest(ListModelProviderLlmCodesRequest &&) = default ;
    ListModelProviderLlmCodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelProviderLlmCodesRequest() = default ;
    ListModelProviderLlmCodesRequest& operator=(const ListModelProviderLlmCodesRequest &) = default ;
    ListModelProviderLlmCodesRequest& operator=(ListModelProviderLlmCodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->language_ == nullptr
        && this->llmCode_ == nullptr && this->modelBrands_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->providerName_ == nullptr
        && this->providerTemplateId_ == nullptr && this->recommended_ == nullptr && this->recommendedLevels_ == nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListModelProviderLlmCodesRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // llmCode Field Functions 
    bool hasLlmCode() const { return this->llmCode_ != nullptr;};
    void deleteLlmCode() { this->llmCode_ = nullptr;};
    inline string getLlmCode() const { DARABONBA_PTR_GET_DEFAULT(llmCode_, "") };
    inline ListModelProviderLlmCodesRequest& setLlmCode(string llmCode) { DARABONBA_PTR_SET_VALUE(llmCode_, llmCode) };


    // modelBrands Field Functions 
    bool hasModelBrands() const { return this->modelBrands_ != nullptr;};
    void deleteModelBrands() { this->modelBrands_ = nullptr;};
    inline const vector<string> & getModelBrands() const { DARABONBA_PTR_GET_CONST(modelBrands_, vector<string>) };
    inline vector<string> getModelBrands() { DARABONBA_PTR_GET(modelBrands_, vector<string>) };
    inline ListModelProviderLlmCodesRequest& setModelBrands(const vector<string> & modelBrands) { DARABONBA_PTR_SET_VALUE(modelBrands_, modelBrands) };
    inline ListModelProviderLlmCodesRequest& setModelBrands(vector<string> && modelBrands) { DARABONBA_PTR_SET_RVALUE(modelBrands_, modelBrands) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListModelProviderLlmCodesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListModelProviderLlmCodesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // providerName Field Functions 
    bool hasProviderName() const { return this->providerName_ != nullptr;};
    void deleteProviderName() { this->providerName_ = nullptr;};
    inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
    inline ListModelProviderLlmCodesRequest& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


    // providerTemplateId Field Functions 
    bool hasProviderTemplateId() const { return this->providerTemplateId_ != nullptr;};
    void deleteProviderTemplateId() { this->providerTemplateId_ = nullptr;};
    inline string getProviderTemplateId() const { DARABONBA_PTR_GET_DEFAULT(providerTemplateId_, "") };
    inline ListModelProviderLlmCodesRequest& setProviderTemplateId(string providerTemplateId) { DARABONBA_PTR_SET_VALUE(providerTemplateId_, providerTemplateId) };


    // recommended Field Functions 
    bool hasRecommended() const { return this->recommended_ != nullptr;};
    void deleteRecommended() { this->recommended_ = nullptr;};
    inline bool getRecommended() const { DARABONBA_PTR_GET_DEFAULT(recommended_, false) };
    inline ListModelProviderLlmCodesRequest& setRecommended(bool recommended) { DARABONBA_PTR_SET_VALUE(recommended_, recommended) };


    // recommendedLevels Field Functions 
    bool hasRecommendedLevels() const { return this->recommendedLevels_ != nullptr;};
    void deleteRecommendedLevels() { this->recommendedLevels_ = nullptr;};
    inline const vector<string> & getRecommendedLevels() const { DARABONBA_PTR_GET_CONST(recommendedLevels_, vector<string>) };
    inline vector<string> getRecommendedLevels() { DARABONBA_PTR_GET(recommendedLevels_, vector<string>) };
    inline ListModelProviderLlmCodesRequest& setRecommendedLevels(const vector<string> & recommendedLevels) { DARABONBA_PTR_SET_VALUE(recommendedLevels_, recommendedLevels) };
    inline ListModelProviderLlmCodesRequest& setRecommendedLevels(vector<string> && recommendedLevels) { DARABONBA_PTR_SET_RVALUE(recommendedLevels_, recommendedLevels) };


  protected:
    // The display language for models. Valid values: zh-CN (Simplified Chinese), en-US (English), ja-JP (Japanese), and zh-TW (Traditional Chinese). Default value: zh-CN. Currently, zh-TW returns Simplified Chinese, and ja-JP returns English. If the text is not recorded in Model Studio or the English text is missing, the original source text is retained without automatic translation.
    shared_ptr<string> language_ {};
    // The LLM code for fuzzy match filtering.
    shared_ptr<string> llmCode_ {};
    // The list of model brands as a JSON array string. Supports multi-select filtering. Models matching any of the specified brands are returned.
    shared_ptr<vector<string>> modelBrands_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 1000. Maximum value: 1000.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the model provider.
    // 
    // This parameter is required.
    shared_ptr<string> providerName_ {};
    // The ID of the provider template.
    // 
    // This parameter is required.
    shared_ptr<string> providerTemplateId_ {};
    // Specifies whether to filter models by recommendation status. If this parameter is not specified, models are not filtered by recommendation status.
    shared_ptr<bool> recommended_ {};
    // The list of recommended tiers. This parameter takes effect only for wuying-plan. Models matching any of the selected tiers and meeting other filter conditions such as region and brand are returned. If this parameter is not specified or an empty array is passed, models are not filtered by tier.
    shared_ptr<vector<string>> recommendedLevels_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
