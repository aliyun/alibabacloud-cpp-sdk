// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BILLINGDETAILROWDTO_HPP_
#define ALIBABACLOUD_MODELS_BILLINGDETAILROWDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class BillingDetailRowDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BillingDetailRowDTO& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(apiKeyId, apiKeyId_);
      DARABONBA_PTR_TO_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_TO_JSON(cacheCreationTokens, cacheCreationTokens_);
      DARABONBA_PTR_TO_JSON(cachedTokens, cachedTokens_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(clientName, clientName_);
      DARABONBA_PTR_TO_JSON(discount, discount_);
      DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_TO_JSON(memberUserId, memberUserId_);
      DARABONBA_PTR_TO_JSON(memberUserName, memberUserName_);
      DARABONBA_PTR_TO_JSON(metrics, metrics_);
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(modelSymbol, modelSymbol_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(modelVersion, modelVersion_);
      DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_TO_JSON(reasoningTokens, reasoningTokens_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(requestTime, requestTime_);
      DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
      DARABONBA_PTR_TO_JSON(usageDetail, usageDetail_);
    };
    friend void from_json(const Darabonba::Json& j, BillingDetailRowDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(apiKeyId, apiKeyId_);
      DARABONBA_PTR_FROM_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_FROM_JSON(cacheCreationTokens, cacheCreationTokens_);
      DARABONBA_PTR_FROM_JSON(cachedTokens, cachedTokens_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(clientName, clientName_);
      DARABONBA_PTR_FROM_JSON(discount, discount_);
      DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_FROM_JSON(memberUserId, memberUserId_);
      DARABONBA_PTR_FROM_JSON(memberUserName, memberUserName_);
      DARABONBA_PTR_FROM_JSON(metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(modelSymbol, modelSymbol_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(modelVersion, modelVersion_);
      DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_FROM_JSON(reasoningTokens, reasoningTokens_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(requestTime, requestTime_);
      DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
      DARABONBA_PTR_FROM_JSON(usageDetail, usageDetail_);
    };
    BillingDetailRowDTO() = default ;
    BillingDetailRowDTO(const BillingDetailRowDTO &) = default ;
    BillingDetailRowDTO(BillingDetailRowDTO &&) = default ;
    BillingDetailRowDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BillingDetailRowDTO() = default ;
    BillingDetailRowDTO& operator=(const BillingDetailRowDTO &) = default ;
    BillingDetailRowDTO& operator=(BillingDetailRowDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->apiKeyId_ == nullptr && this->apiKeyName_ == nullptr && this->cacheCreationTokens_ == nullptr && this->cachedTokens_ == nullptr && this->clientId_ == nullptr
        && this->clientName_ == nullptr && this->discount_ == nullptr && this->inputTokens_ == nullptr && this->memberUserId_ == nullptr && this->memberUserName_ == nullptr
        && this->metrics_ == nullptr && this->modelCode_ == nullptr && this->modelId_ == nullptr && this->modelName_ == nullptr && this->modelSymbol_ == nullptr
        && this->modelType_ == nullptr && this->modelVersion_ == nullptr && this->outputTokens_ == nullptr && this->reasoningTokens_ == nullptr && this->requestId_ == nullptr
        && this->requestTime_ == nullptr && this->totalTokens_ == nullptr && this->usageDetail_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline double getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
    inline BillingDetailRowDTO& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // apiKeyId Field Functions 
    bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
    void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
    inline int64_t getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, 0L) };
    inline BillingDetailRowDTO& setApiKeyId(int64_t apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


    // apiKeyName Field Functions 
    bool hasApiKeyName() const { return this->apiKeyName_ != nullptr;};
    void deleteApiKeyName() { this->apiKeyName_ = nullptr;};
    inline string getApiKeyName() const { DARABONBA_PTR_GET_DEFAULT(apiKeyName_, "") };
    inline BillingDetailRowDTO& setApiKeyName(string apiKeyName) { DARABONBA_PTR_SET_VALUE(apiKeyName_, apiKeyName) };


    // cacheCreationTokens Field Functions 
    bool hasCacheCreationTokens() const { return this->cacheCreationTokens_ != nullptr;};
    void deleteCacheCreationTokens() { this->cacheCreationTokens_ = nullptr;};
    inline double getCacheCreationTokens() const { DARABONBA_PTR_GET_DEFAULT(cacheCreationTokens_, 0.0) };
    inline BillingDetailRowDTO& setCacheCreationTokens(double cacheCreationTokens) { DARABONBA_PTR_SET_VALUE(cacheCreationTokens_, cacheCreationTokens) };


    // cachedTokens Field Functions 
    bool hasCachedTokens() const { return this->cachedTokens_ != nullptr;};
    void deleteCachedTokens() { this->cachedTokens_ = nullptr;};
    inline double getCachedTokens() const { DARABONBA_PTR_GET_DEFAULT(cachedTokens_, 0.0) };
    inline BillingDetailRowDTO& setCachedTokens(double cachedTokens) { DARABONBA_PTR_SET_VALUE(cachedTokens_, cachedTokens) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline BillingDetailRowDTO& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientName Field Functions 
    bool hasClientName() const { return this->clientName_ != nullptr;};
    void deleteClientName() { this->clientName_ = nullptr;};
    inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
    inline BillingDetailRowDTO& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


    // discount Field Functions 
    bool hasDiscount() const { return this->discount_ != nullptr;};
    void deleteDiscount() { this->discount_ = nullptr;};
    inline double getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, 0.0) };
    inline BillingDetailRowDTO& setDiscount(double discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


    // inputTokens Field Functions 
    bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
    void deleteInputTokens() { this->inputTokens_ = nullptr;};
    inline double getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0.0) };
    inline BillingDetailRowDTO& setInputTokens(double inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


    // memberUserId Field Functions 
    bool hasMemberUserId() const { return this->memberUserId_ != nullptr;};
    void deleteMemberUserId() { this->memberUserId_ = nullptr;};
    inline int64_t getMemberUserId() const { DARABONBA_PTR_GET_DEFAULT(memberUserId_, 0L) };
    inline BillingDetailRowDTO& setMemberUserId(int64_t memberUserId) { DARABONBA_PTR_SET_VALUE(memberUserId_, memberUserId) };


    // memberUserName Field Functions 
    bool hasMemberUserName() const { return this->memberUserName_ != nullptr;};
    void deleteMemberUserName() { this->memberUserName_ = nullptr;};
    inline string getMemberUserName() const { DARABONBA_PTR_GET_DEFAULT(memberUserName_, "") };
    inline BillingDetailRowDTO& setMemberUserName(string memberUserName) { DARABONBA_PTR_SET_VALUE(memberUserName_, memberUserName) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline BillingDetailRowDTO& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline BillingDetailRowDTO& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
    inline BillingDetailRowDTO& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline BillingDetailRowDTO& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelSymbol Field Functions 
    bool hasModelSymbol() const { return this->modelSymbol_ != nullptr;};
    void deleteModelSymbol() { this->modelSymbol_ = nullptr;};
    inline string getModelSymbol() const { DARABONBA_PTR_GET_DEFAULT(modelSymbol_, "") };
    inline BillingDetailRowDTO& setModelSymbol(string modelSymbol) { DARABONBA_PTR_SET_VALUE(modelSymbol_, modelSymbol) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline BillingDetailRowDTO& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline int32_t getModelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, 0) };
    inline BillingDetailRowDTO& setModelVersion(int32_t modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // outputTokens Field Functions 
    bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
    void deleteOutputTokens() { this->outputTokens_ = nullptr;};
    inline double getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0.0) };
    inline BillingDetailRowDTO& setOutputTokens(double outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


    // reasoningTokens Field Functions 
    bool hasReasoningTokens() const { return this->reasoningTokens_ != nullptr;};
    void deleteReasoningTokens() { this->reasoningTokens_ = nullptr;};
    inline double getReasoningTokens() const { DARABONBA_PTR_GET_DEFAULT(reasoningTokens_, 0.0) };
    inline BillingDetailRowDTO& setReasoningTokens(double reasoningTokens) { DARABONBA_PTR_SET_VALUE(reasoningTokens_, reasoningTokens) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BillingDetailRowDTO& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestTime Field Functions 
    bool hasRequestTime() const { return this->requestTime_ != nullptr;};
    void deleteRequestTime() { this->requestTime_ = nullptr;};
    inline int64_t getRequestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, 0L) };
    inline BillingDetailRowDTO& setRequestTime(int64_t requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline double getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0.0) };
    inline BillingDetailRowDTO& setTotalTokens(double totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


    // usageDetail Field Functions 
    bool hasUsageDetail() const { return this->usageDetail_ != nullptr;};
    void deleteUsageDetail() { this->usageDetail_ = nullptr;};
    inline string getUsageDetail() const { DARABONBA_PTR_GET_DEFAULT(usageDetail_, "") };
    inline BillingDetailRowDTO& setUsageDetail(string usageDetail) { DARABONBA_PTR_SET_VALUE(usageDetail_, usageDetail) };


  protected:
    shared_ptr<double> amount_ {};
    shared_ptr<int64_t> apiKeyId_ {};
    shared_ptr<string> apiKeyName_ {};
    shared_ptr<double> cacheCreationTokens_ {};
    shared_ptr<double> cachedTokens_ {};
    shared_ptr<int64_t> clientId_ {};
    shared_ptr<string> clientName_ {};
    shared_ptr<double> discount_ {};
    shared_ptr<double> inputTokens_ {};
    shared_ptr<int64_t> memberUserId_ {};
    shared_ptr<string> memberUserName_ {};
    shared_ptr<string> metrics_ {};
    shared_ptr<string> modelCode_ {};
    shared_ptr<int64_t> modelId_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<string> modelSymbol_ {};
    shared_ptr<string> modelType_ {};
    shared_ptr<int32_t> modelVersion_ {};
    shared_ptr<double> outputTokens_ {};
    shared_ptr<double> reasoningTokens_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> requestTime_ {};
    shared_ptr<double> totalTokens_ {};
    shared_ptr<string> usageDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
