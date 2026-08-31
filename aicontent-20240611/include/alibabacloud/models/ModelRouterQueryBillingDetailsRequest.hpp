// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERQUERYBILLINGDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERQUERYBILLINGDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterQueryBillingDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterQueryBillingDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeyId, apiKeyId_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(clientIds, clientIds_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(modelCodes, modelCodes_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelTypes, modelTypes_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterQueryBillingDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeyId, apiKeyId_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(clientIds, clientIds_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(modelCodes, modelCodes_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelTypes, modelTypes_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    ModelRouterQueryBillingDetailsRequest() = default ;
    ModelRouterQueryBillingDetailsRequest(const ModelRouterQueryBillingDetailsRequest &) = default ;
    ModelRouterQueryBillingDetailsRequest(ModelRouterQueryBillingDetailsRequest &&) = default ;
    ModelRouterQueryBillingDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterQueryBillingDetailsRequest() = default ;
    ModelRouterQueryBillingDetailsRequest& operator=(const ModelRouterQueryBillingDetailsRequest &) = default ;
    ModelRouterQueryBillingDetailsRequest& operator=(ModelRouterQueryBillingDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyId_ == nullptr
        && this->clientId_ == nullptr && this->clientIds_ == nullptr && this->endTime_ == nullptr && this->modelCodes_ == nullptr && this->modelId_ == nullptr
        && this->modelTypes_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // apiKeyId Field Functions 
    bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
    void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
    inline int64_t getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, 0L) };
    inline ModelRouterQueryBillingDetailsRequest& setApiKeyId(int64_t apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline ModelRouterQueryBillingDetailsRequest& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientIds Field Functions 
    bool hasClientIds() const { return this->clientIds_ != nullptr;};
    void deleteClientIds() { this->clientIds_ = nullptr;};
    inline string getClientIds() const { DARABONBA_PTR_GET_DEFAULT(clientIds_, "") };
    inline ModelRouterQueryBillingDetailsRequest& setClientIds(string clientIds) { DARABONBA_PTR_SET_VALUE(clientIds_, clientIds) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ModelRouterQueryBillingDetailsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // modelCodes Field Functions 
    bool hasModelCodes() const { return this->modelCodes_ != nullptr;};
    void deleteModelCodes() { this->modelCodes_ = nullptr;};
    inline string getModelCodes() const { DARABONBA_PTR_GET_DEFAULT(modelCodes_, "") };
    inline ModelRouterQueryBillingDetailsRequest& setModelCodes(string modelCodes) { DARABONBA_PTR_SET_VALUE(modelCodes_, modelCodes) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
    inline ModelRouterQueryBillingDetailsRequest& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelTypes Field Functions 
    bool hasModelTypes() const { return this->modelTypes_ != nullptr;};
    void deleteModelTypes() { this->modelTypes_ = nullptr;};
    inline string getModelTypes() const { DARABONBA_PTR_GET_DEFAULT(modelTypes_, "") };
    inline ModelRouterQueryBillingDetailsRequest& setModelTypes(string modelTypes) { DARABONBA_PTR_SET_VALUE(modelTypes_, modelTypes) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ModelRouterQueryBillingDetailsRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ModelRouterQueryBillingDetailsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModelRouterQueryBillingDetailsRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ModelRouterQueryBillingDetailsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Optional. Filters results by API Key ID.
    shared_ptr<int64_t> apiKeyId_ {};
    // Optional. Filters results by department ID (single value).
    shared_ptr<int64_t> clientId_ {};
    // The list of department IDs, separated by commas. Supports querying data for multiple departments. This parameter is mutually exclusive with clientId.
    shared_ptr<string> clientIds_ {};
    // The query end time, in UNIX timestamp (seconds).
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // Optional. Filters results by model code. Separate multiple values with commas.
    shared_ptr<string> modelCodes_ {};
    // Optional. Filters results by model ID.
    shared_ptr<int64_t> modelId_ {};
    // Optional. Filters results by model type. Separate multiple values with commas.
    shared_ptr<string> modelTypes_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> page_ {};
    // The number of entries per page. Default value: 20. Maximum value: 500.
    shared_ptr<int32_t> pageSize_ {};
    // Optional. Filters results by exact match of the request ID.
    shared_ptr<string> requestId_ {};
    // The query start time, in UNIX timestamp (seconds).
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
