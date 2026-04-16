// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REQUESTLOGDTO_HPP_
#define ALIBABACLOUD_MODELS_REQUESTLOGDTO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UsageInfoDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class RequestLogDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RequestLogDTO& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeyId, apiKeyId_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(clientUuid, clientUuid_);
      DARABONBA_PTR_TO_JSON(completionTokens, completionTokens_);
      DARABONBA_PTR_TO_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(promptTokens, promptTokens_);
      DARABONBA_PTR_TO_JSON(requestBody, requestBody_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(requestTime, requestTime_);
      DARABONBA_PTR_TO_JSON(responseBody, responseBody_);
      DARABONBA_PTR_TO_JSON(responseTimeMs, responseTimeMs_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(symbol, symbol_);
      DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, RequestLogDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeyId, apiKeyId_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(clientUuid, clientUuid_);
      DARABONBA_PTR_FROM_JSON(completionTokens, completionTokens_);
      DARABONBA_PTR_FROM_JSON(deleteTag, deleteTag_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(promptTokens, promptTokens_);
      DARABONBA_PTR_FROM_JSON(requestBody, requestBody_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(requestTime, requestTime_);
      DARABONBA_PTR_FROM_JSON(responseBody, responseBody_);
      DARABONBA_PTR_FROM_JSON(responseTimeMs, responseTimeMs_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(symbol, symbol_);
      DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    RequestLogDTO() = default ;
    RequestLogDTO(const RequestLogDTO &) = default ;
    RequestLogDTO(RequestLogDTO &&) = default ;
    RequestLogDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RequestLogDTO() = default ;
    RequestLogDTO& operator=(const RequestLogDTO &) = default ;
    RequestLogDTO& operator=(RequestLogDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyId_ == nullptr
        && this->clientId_ == nullptr && this->clientUuid_ == nullptr && this->completionTokens_ == nullptr && this->deleteTag_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->id_ == nullptr && this->modelCode_ == nullptr && this->modelId_ == nullptr && this->modelName_ == nullptr
        && this->modelType_ == nullptr && this->promptTokens_ == nullptr && this->requestBody_ == nullptr && this->requestId_ == nullptr && this->requestTime_ == nullptr
        && this->responseBody_ == nullptr && this->responseTimeMs_ == nullptr && this->status_ == nullptr && this->statusCode_ == nullptr && this->symbol_ == nullptr
        && this->totalTokens_ == nullptr && this->usage_ == nullptr; };
    // apiKeyId Field Functions 
    bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
    void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
    inline int64_t getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, 0L) };
    inline RequestLogDTO& setApiKeyId(int64_t apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline RequestLogDTO& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientUuid Field Functions 
    bool hasClientUuid() const { return this->clientUuid_ != nullptr;};
    void deleteClientUuid() { this->clientUuid_ = nullptr;};
    inline string getClientUuid() const { DARABONBA_PTR_GET_DEFAULT(clientUuid_, "") };
    inline RequestLogDTO& setClientUuid(string clientUuid) { DARABONBA_PTR_SET_VALUE(clientUuid_, clientUuid) };


    // completionTokens Field Functions 
    bool hasCompletionTokens() const { return this->completionTokens_ != nullptr;};
    void deleteCompletionTokens() { this->completionTokens_ = nullptr;};
    inline int32_t getCompletionTokens() const { DARABONBA_PTR_GET_DEFAULT(completionTokens_, 0) };
    inline RequestLogDTO& setCompletionTokens(int32_t completionTokens) { DARABONBA_PTR_SET_VALUE(completionTokens_, completionTokens) };


    // deleteTag Field Functions 
    bool hasDeleteTag() const { return this->deleteTag_ != nullptr;};
    void deleteDeleteTag() { this->deleteTag_ = nullptr;};
    inline int32_t getDeleteTag() const { DARABONBA_PTR_GET_DEFAULT(deleteTag_, 0) };
    inline RequestLogDTO& setDeleteTag(int32_t deleteTag) { DARABONBA_PTR_SET_VALUE(deleteTag_, deleteTag) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline RequestLogDTO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline RequestLogDTO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RequestLogDTO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline RequestLogDTO& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
    inline RequestLogDTO& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RequestLogDTO& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline RequestLogDTO& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // promptTokens Field Functions 
    bool hasPromptTokens() const { return this->promptTokens_ != nullptr;};
    void deletePromptTokens() { this->promptTokens_ = nullptr;};
    inline int32_t getPromptTokens() const { DARABONBA_PTR_GET_DEFAULT(promptTokens_, 0) };
    inline RequestLogDTO& setPromptTokens(int32_t promptTokens) { DARABONBA_PTR_SET_VALUE(promptTokens_, promptTokens) };


    // requestBody Field Functions 
    bool hasRequestBody() const { return this->requestBody_ != nullptr;};
    void deleteRequestBody() { this->requestBody_ = nullptr;};
    inline string getRequestBody() const { DARABONBA_PTR_GET_DEFAULT(requestBody_, "") };
    inline RequestLogDTO& setRequestBody(string requestBody) { DARABONBA_PTR_SET_VALUE(requestBody_, requestBody) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RequestLogDTO& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestTime Field Functions 
    bool hasRequestTime() const { return this->requestTime_ != nullptr;};
    void deleteRequestTime() { this->requestTime_ = nullptr;};
    inline string getRequestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, "") };
    inline RequestLogDTO& setRequestTime(string requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


    // responseBody Field Functions 
    bool hasResponseBody() const { return this->responseBody_ != nullptr;};
    void deleteResponseBody() { this->responseBody_ = nullptr;};
    inline string getResponseBody() const { DARABONBA_PTR_GET_DEFAULT(responseBody_, "") };
    inline RequestLogDTO& setResponseBody(string responseBody) { DARABONBA_PTR_SET_VALUE(responseBody_, responseBody) };


    // responseTimeMs Field Functions 
    bool hasResponseTimeMs() const { return this->responseTimeMs_ != nullptr;};
    void deleteResponseTimeMs() { this->responseTimeMs_ = nullptr;};
    inline int32_t getResponseTimeMs() const { DARABONBA_PTR_GET_DEFAULT(responseTimeMs_, 0) };
    inline RequestLogDTO& setResponseTimeMs(int32_t responseTimeMs) { DARABONBA_PTR_SET_VALUE(responseTimeMs_, responseTimeMs) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RequestLogDTO& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline RequestLogDTO& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // symbol Field Functions 
    bool hasSymbol() const { return this->symbol_ != nullptr;};
    void deleteSymbol() { this->symbol_ = nullptr;};
    inline string getSymbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, "") };
    inline RequestLogDTO& setSymbol(string symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int32_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0) };
    inline RequestLogDTO& setTotalTokens(int32_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline const UsageInfoDTO & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, UsageInfoDTO) };
    inline UsageInfoDTO getUsage() { DARABONBA_PTR_GET(usage_, UsageInfoDTO) };
    inline RequestLogDTO& setUsage(const UsageInfoDTO & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
    inline RequestLogDTO& setUsage(UsageInfoDTO && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


  protected:
    shared_ptr<int64_t> apiKeyId_ {};
    shared_ptr<int64_t> clientId_ {};
    shared_ptr<string> clientUuid_ {};
    shared_ptr<int32_t> completionTokens_ {};
    shared_ptr<int32_t> deleteTag_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> modelCode_ {};
    shared_ptr<int64_t> modelId_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<string> modelType_ {};
    shared_ptr<int32_t> promptTokens_ {};
    shared_ptr<string> requestBody_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> requestTime_ {};
    shared_ptr<string> responseBody_ {};
    shared_ptr<int32_t> responseTimeMs_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<string> symbol_ {};
    shared_ptr<int32_t> totalTokens_ {};
    shared_ptr<UsageInfoDTO> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
