// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERQUERYBILLINGRULELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERQUERYBILLINGRULELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterQueryBillingRuleListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterQueryBillingRuleListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(activeOnly, activeOnly_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterQueryBillingRuleListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(activeOnly, activeOnly_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    ModelRouterQueryBillingRuleListRequest() = default ;
    ModelRouterQueryBillingRuleListRequest(const ModelRouterQueryBillingRuleListRequest &) = default ;
    ModelRouterQueryBillingRuleListRequest(ModelRouterQueryBillingRuleListRequest &&) = default ;
    ModelRouterQueryBillingRuleListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterQueryBillingRuleListRequest() = default ;
    ModelRouterQueryBillingRuleListRequest& operator=(const ModelRouterQueryBillingRuleListRequest &) = default ;
    ModelRouterQueryBillingRuleListRequest& operator=(ModelRouterQueryBillingRuleListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeOnly_ == nullptr
        && this->maxResults_ == nullptr && this->modelCode_ == nullptr && this->modelId_ == nullptr && this->modelType_ == nullptr && this->nextToken_ == nullptr
        && this->page_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr; };
    // activeOnly Field Functions 
    bool hasActiveOnly() const { return this->activeOnly_ != nullptr;};
    void deleteActiveOnly() { this->activeOnly_ = nullptr;};
    inline bool getActiveOnly() const { DARABONBA_PTR_GET_DEFAULT(activeOnly_, false) };
    inline ModelRouterQueryBillingRuleListRequest& setActiveOnly(bool activeOnly) { DARABONBA_PTR_SET_VALUE(activeOnly_, activeOnly) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ModelRouterQueryBillingRuleListRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline ModelRouterQueryBillingRuleListRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int32_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0) };
    inline ModelRouterQueryBillingRuleListRequest& setModelId(int32_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ModelRouterQueryBillingRuleListRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ModelRouterQueryBillingRuleListRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ModelRouterQueryBillingRuleListRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ModelRouterQueryBillingRuleListRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ModelRouterQueryBillingRuleListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<bool> activeOnly_ {};
    // maxResults
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> modelCode_ {};
    shared_ptr<int32_t> modelId_ {};
    shared_ptr<string> modelType_ {};
    // nextToken
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> pageIndex_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
