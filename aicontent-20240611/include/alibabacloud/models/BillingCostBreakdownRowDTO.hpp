// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BILLINGCOSTBREAKDOWNROWDTO_HPP_
#define ALIBABACLOUD_MODELS_BILLINGCOSTBREAKDOWNROWDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BillingBillTierDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class BillingCostBreakdownRowDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BillingCostBreakdownRowDTO& obj) { 
      DARABONBA_PTR_TO_JSON(apiKeyId, apiKeyId_);
      DARABONBA_PTR_TO_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_TO_JSON(billingType, billingType_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(clientName, clientName_);
      DARABONBA_PTR_TO_JSON(dimValues, dimValues_);
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(payableAmount, payableAmount_);
      DARABONBA_PTR_TO_JSON(summaryTime, summaryTime_);
      DARABONBA_PTR_TO_JSON(tiers, tiers_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, BillingCostBreakdownRowDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKeyId, apiKeyId_);
      DARABONBA_PTR_FROM_JSON(apiKeyName, apiKeyName_);
      DARABONBA_PTR_FROM_JSON(billingType, billingType_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(clientName, clientName_);
      DARABONBA_PTR_FROM_JSON(dimValues, dimValues_);
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(payableAmount, payableAmount_);
      DARABONBA_PTR_FROM_JSON(summaryTime, summaryTime_);
      DARABONBA_PTR_FROM_JSON(tiers, tiers_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    BillingCostBreakdownRowDTO() = default ;
    BillingCostBreakdownRowDTO(const BillingCostBreakdownRowDTO &) = default ;
    BillingCostBreakdownRowDTO(BillingCostBreakdownRowDTO &&) = default ;
    BillingCostBreakdownRowDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BillingCostBreakdownRowDTO() = default ;
    BillingCostBreakdownRowDTO& operator=(const BillingCostBreakdownRowDTO &) = default ;
    BillingCostBreakdownRowDTO& operator=(BillingCostBreakdownRowDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyId_ == nullptr
        && this->apiKeyName_ == nullptr && this->billingType_ == nullptr && this->clientId_ == nullptr && this->clientName_ == nullptr && this->dimValues_ == nullptr
        && this->modelCode_ == nullptr && this->modelId_ == nullptr && this->modelName_ == nullptr && this->modelType_ == nullptr && this->payableAmount_ == nullptr
        && this->summaryTime_ == nullptr && this->tiers_ == nullptr && this->values_ == nullptr; };
    // apiKeyId Field Functions 
    bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
    void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
    inline int64_t getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, 0L) };
    inline BillingCostBreakdownRowDTO& setApiKeyId(int64_t apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


    // apiKeyName Field Functions 
    bool hasApiKeyName() const { return this->apiKeyName_ != nullptr;};
    void deleteApiKeyName() { this->apiKeyName_ = nullptr;};
    inline string getApiKeyName() const { DARABONBA_PTR_GET_DEFAULT(apiKeyName_, "") };
    inline BillingCostBreakdownRowDTO& setApiKeyName(string apiKeyName) { DARABONBA_PTR_SET_VALUE(apiKeyName_, apiKeyName) };


    // billingType Field Functions 
    bool hasBillingType() const { return this->billingType_ != nullptr;};
    void deleteBillingType() { this->billingType_ = nullptr;};
    inline string getBillingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
    inline BillingCostBreakdownRowDTO& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline BillingCostBreakdownRowDTO& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientName Field Functions 
    bool hasClientName() const { return this->clientName_ != nullptr;};
    void deleteClientName() { this->clientName_ = nullptr;};
    inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
    inline BillingCostBreakdownRowDTO& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


    // dimValues Field Functions 
    bool hasDimValues() const { return this->dimValues_ != nullptr;};
    void deleteDimValues() { this->dimValues_ = nullptr;};
    inline string getDimValues() const { DARABONBA_PTR_GET_DEFAULT(dimValues_, "") };
    inline BillingCostBreakdownRowDTO& setDimValues(string dimValues) { DARABONBA_PTR_SET_VALUE(dimValues_, dimValues) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline BillingCostBreakdownRowDTO& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
    inline BillingCostBreakdownRowDTO& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline BillingCostBreakdownRowDTO& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline BillingCostBreakdownRowDTO& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // payableAmount Field Functions 
    bool hasPayableAmount() const { return this->payableAmount_ != nullptr;};
    void deletePayableAmount() { this->payableAmount_ = nullptr;};
    inline float getPayableAmount() const { DARABONBA_PTR_GET_DEFAULT(payableAmount_, 0.0) };
    inline BillingCostBreakdownRowDTO& setPayableAmount(float payableAmount) { DARABONBA_PTR_SET_VALUE(payableAmount_, payableAmount) };


    // summaryTime Field Functions 
    bool hasSummaryTime() const { return this->summaryTime_ != nullptr;};
    void deleteSummaryTime() { this->summaryTime_ = nullptr;};
    inline int64_t getSummaryTime() const { DARABONBA_PTR_GET_DEFAULT(summaryTime_, 0L) };
    inline BillingCostBreakdownRowDTO& setSummaryTime(int64_t summaryTime) { DARABONBA_PTR_SET_VALUE(summaryTime_, summaryTime) };


    // tiers Field Functions 
    bool hasTiers() const { return this->tiers_ != nullptr;};
    void deleteTiers() { this->tiers_ = nullptr;};
    inline const vector<BillingBillTierDTO> & getTiers() const { DARABONBA_PTR_GET_CONST(tiers_, vector<BillingBillTierDTO>) };
    inline vector<BillingBillTierDTO> getTiers() { DARABONBA_PTR_GET(tiers_, vector<BillingBillTierDTO>) };
    inline BillingCostBreakdownRowDTO& setTiers(const vector<BillingBillTierDTO> & tiers) { DARABONBA_PTR_SET_VALUE(tiers_, tiers) };
    inline BillingCostBreakdownRowDTO& setTiers(vector<BillingBillTierDTO> && tiers) { DARABONBA_PTR_SET_RVALUE(tiers_, tiers) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string getValues() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline BillingCostBreakdownRowDTO& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


  protected:
    shared_ptr<int64_t> apiKeyId_ {};
    shared_ptr<string> apiKeyName_ {};
    shared_ptr<string> billingType_ {};
    shared_ptr<int64_t> clientId_ {};
    shared_ptr<string> clientName_ {};
    shared_ptr<string> dimValues_ {};
    shared_ptr<string> modelCode_ {};
    shared_ptr<int64_t> modelId_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<string> modelType_ {};
    shared_ptr<float> payableAmount_ {};
    shared_ptr<int64_t> summaryTime_ {};
    shared_ptr<vector<BillingBillTierDTO>> tiers_ {};
    shared_ptr<string> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
