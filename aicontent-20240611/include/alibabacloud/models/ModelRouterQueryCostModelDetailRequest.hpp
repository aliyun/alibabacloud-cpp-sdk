// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERQUERYCOSTMODELDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERQUERYCOSTMODELDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterQueryCostModelDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterQueryCostModelDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterQueryCostModelDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    ModelRouterQueryCostModelDetailRequest() = default ;
    ModelRouterQueryCostModelDetailRequest(const ModelRouterQueryCostModelDetailRequest &) = default ;
    ModelRouterQueryCostModelDetailRequest(ModelRouterQueryCostModelDetailRequest &&) = default ;
    ModelRouterQueryCostModelDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterQueryCostModelDetailRequest() = default ;
    ModelRouterQueryCostModelDetailRequest& operator=(const ModelRouterQueryCostModelDetailRequest &) = default ;
    ModelRouterQueryCostModelDetailRequest& operator=(ModelRouterQueryCostModelDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->endTime_ == nullptr && this->maxResults_ == nullptr && this->modelId_ == nullptr && this->nextToken_ == nullptr && this->page_ == nullptr
        && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline ModelRouterQueryCostModelDetailRequest& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ModelRouterQueryCostModelDetailRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ModelRouterQueryCostModelDetailRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
    inline ModelRouterQueryCostModelDetailRequest& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ModelRouterQueryCostModelDetailRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ModelRouterQueryCostModelDetailRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ModelRouterQueryCostModelDetailRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ModelRouterQueryCostModelDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ModelRouterQueryCostModelDetailRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<int64_t> clientId_ {};
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // maxResults
    shared_ptr<int32_t> maxResults_ {};
    // This parameter is required.
    shared_ptr<int64_t> modelId_ {};
    // nextToken
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> page_ {};
    shared_ptr<int32_t> pageIndex_ {};
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
