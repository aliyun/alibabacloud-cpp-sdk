// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLLMTEMPLATESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLLMTEMPLATESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListLlmTemplatesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLlmTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(LlmCode, llmCode_);
      DARABONBA_PTR_TO_JSON(LlmTemplateIds, llmTemplateIdsShrink_);
      DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProviderTemplateId, providerTemplateId_);
      DARABONBA_PTR_TO_JSON(SmartModel, smartModel_);
    };
    friend void from_json(const Darabonba::Json& j, ListLlmTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(LlmCode, llmCode_);
      DARABONBA_PTR_FROM_JSON(LlmTemplateIds, llmTemplateIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProviderTemplateId, providerTemplateId_);
      DARABONBA_PTR_FROM_JSON(SmartModel, smartModel_);
    };
    ListLlmTemplatesShrinkRequest() = default ;
    ListLlmTemplatesShrinkRequest(const ListLlmTemplatesShrinkRequest &) = default ;
    ListLlmTemplatesShrinkRequest(ListLlmTemplatesShrinkRequest &&) = default ;
    ListLlmTemplatesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLlmTemplatesShrinkRequest() = default ;
    ListLlmTemplatesShrinkRequest& operator=(const ListLlmTemplatesShrinkRequest &) = default ;
    ListLlmTemplatesShrinkRequest& operator=(ListLlmTemplatesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->language_ == nullptr && this->llmCode_ == nullptr && this->llmTemplateIdsShrink_ == nullptr && this->modelTemplateId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->providerTemplateId_ == nullptr && this->smartModel_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline ListLlmTemplatesShrinkRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListLlmTemplatesShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // llmCode Field Functions 
    bool hasLlmCode() const { return this->llmCode_ != nullptr;};
    void deleteLlmCode() { this->llmCode_ = nullptr;};
    inline string getLlmCode() const { DARABONBA_PTR_GET_DEFAULT(llmCode_, "") };
    inline ListLlmTemplatesShrinkRequest& setLlmCode(string llmCode) { DARABONBA_PTR_SET_VALUE(llmCode_, llmCode) };


    // llmTemplateIdsShrink Field Functions 
    bool hasLlmTemplateIdsShrink() const { return this->llmTemplateIdsShrink_ != nullptr;};
    void deleteLlmTemplateIdsShrink() { this->llmTemplateIdsShrink_ = nullptr;};
    inline string getLlmTemplateIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(llmTemplateIdsShrink_, "") };
    inline ListLlmTemplatesShrinkRequest& setLlmTemplateIdsShrink(string llmTemplateIdsShrink) { DARABONBA_PTR_SET_VALUE(llmTemplateIdsShrink_, llmTemplateIdsShrink) };


    // modelTemplateId Field Functions 
    bool hasModelTemplateId() const { return this->modelTemplateId_ != nullptr;};
    void deleteModelTemplateId() { this->modelTemplateId_ = nullptr;};
    inline string getModelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateId_, "") };
    inline ListLlmTemplatesShrinkRequest& setModelTemplateId(string modelTemplateId) { DARABONBA_PTR_SET_VALUE(modelTemplateId_, modelTemplateId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListLlmTemplatesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLlmTemplatesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // providerTemplateId Field Functions 
    bool hasProviderTemplateId() const { return this->providerTemplateId_ != nullptr;};
    void deleteProviderTemplateId() { this->providerTemplateId_ = nullptr;};
    inline string getProviderTemplateId() const { DARABONBA_PTR_GET_DEFAULT(providerTemplateId_, "") };
    inline ListLlmTemplatesShrinkRequest& setProviderTemplateId(string providerTemplateId) { DARABONBA_PTR_SET_VALUE(providerTemplateId_, providerTemplateId) };


    // smartModel Field Functions 
    bool hasSmartModel() const { return this->smartModel_ != nullptr;};
    void deleteSmartModel() { this->smartModel_ = nullptr;};
    inline bool getSmartModel() const { DARABONBA_PTR_GET_DEFAULT(smartModel_, false) };
    inline ListLlmTemplatesShrinkRequest& setSmartModel(bool smartModel) { DARABONBA_PTR_SET_VALUE(smartModel_, smartModel) };


  protected:
    // The business type. This parameter is required when SmartModel is set to true.
    shared_ptr<int32_t> bizType_ {};
    // The display language of the model. Valid values:
    // - zh-CN: Simplified Chinese.
    // - en-US: English.
    // - ja-JP: Japanese.
    // - zh-TW: Traditional Chinese.
    // Default value: zh-CN. Currently, zh-TW returns Simplified Chinese, and ja-JP returns English. If the model is not included in Alibaba Cloud Model Studio or the English text is missing, the original source text is retained without automatic translation.
    shared_ptr<string> language_ {};
    // The model code for filtering. Fuzzy match is supported.
    shared_ptr<string> llmCode_ {};
    // The model template IDs for filtering.
    shared_ptr<string> llmTemplateIdsShrink_ {};
    // The associated model group ID.
    shared_ptr<string> modelTemplateId_ {};
    // The page number. Pages start from 1. A value of 0 returns the same result as 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The model provider template ID.
    shared_ptr<string> providerTemplateId_ {};
    // Specifies whether to query smart models. Valid values:
    // - true: Only LLMs under system-preset smart models are returned. In this case, BizType is required.
    // - false: Smart models are not specifically filtered.
    // Default value: false.
    shared_ptr<bool> smartModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
