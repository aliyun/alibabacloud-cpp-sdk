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
      DARABONBA_PTR_TO_JSON(apiKeyId, apiKeyId_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(clientIds, clientIds_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(memberUserIds, memberUserIds_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterQueryCostModelDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeyId, apiKeyId_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(clientIds, clientIds_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(memberUserIds, memberUserIds_);
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
    virtual bool empty() const override { return this->apiKeyId_ == nullptr
        && this->clientId_ == nullptr && this->clientIds_ == nullptr && this->endTime_ == nullptr && this->maxResults_ == nullptr && this->memberUserIds_ == nullptr
        && this->modelId_ == nullptr && this->nextToken_ == nullptr && this->page_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr
        && this->startTime_ == nullptr; };
    // apiKeyId Field Functions 
    bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
    void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
    inline int64_t getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, 0L) };
    inline ModelRouterQueryCostModelDetailRequest& setApiKeyId(int64_t apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline ModelRouterQueryCostModelDetailRequest& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientIds Field Functions 
    bool hasClientIds() const { return this->clientIds_ != nullptr;};
    void deleteClientIds() { this->clientIds_ = nullptr;};
    inline string getClientIds() const { DARABONBA_PTR_GET_DEFAULT(clientIds_, "") };
    inline ModelRouterQueryCostModelDetailRequest& setClientIds(string clientIds) { DARABONBA_PTR_SET_VALUE(clientIds_, clientIds) };


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


    // memberUserIds Field Functions 
    bool hasMemberUserIds() const { return this->memberUserIds_ != nullptr;};
    void deleteMemberUserIds() { this->memberUserIds_ = nullptr;};
    inline string getMemberUserIds() const { DARABONBA_PTR_GET_DEFAULT(memberUserIds_, "") };
    inline ModelRouterQueryCostModelDetailRequest& setMemberUserIds(string memberUserIds) { DARABONBA_PTR_SET_VALUE(memberUserIds_, memberUserIds) };


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
    // Optional. Filters by API Key ID. This parameter is linked to the department and requires clientId to be specified first.
    shared_ptr<int64_t> apiKeyId_ {};
    // The department ID used to filter results.
    shared_ptr<int64_t> clientId_ {};
    // The list of department IDs, separated by commas. Supports querying data for multiple departments. This parameter is mutually exclusive with clientId.
    shared_ptr<string> clientIds_ {};
    // The end time, in UNIX timestamp (seconds).
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // maxResults
    shared_ptr<int32_t> maxResults_ {};
    // Optional. Filters by member IDs, separated by commas. If not specified, the department and all its members are included. If an empty value is specified, only the department is included without members.
    shared_ptr<string> memberUserIds_ {};
    // The model ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> modelId_ {};
    // nextToken
    shared_ptr<string> nextToken_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> page_ {};
    // The page number. This parameter takes priority over the page parameter.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of entries per page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The start time, in UNIX timestamp (seconds).
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
