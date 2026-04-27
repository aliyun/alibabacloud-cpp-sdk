// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BILLINGCOSTBREAKDOWNROWDTO_HPP_
#define ALIBABACLOUD_MODELS_BILLINGCOSTBREAKDOWNROWDTO_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(billingType, billingType_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(clientName, clientName_);
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(payableAmount, payableAmount_);
      DARABONBA_PTR_TO_JSON(summaryTime, summaryTime_);
    };
    friend void from_json(const Darabonba::Json& j, BillingCostBreakdownRowDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(billingType, billingType_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(clientName, clientName_);
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(payableAmount, payableAmount_);
      DARABONBA_PTR_FROM_JSON(summaryTime, summaryTime_);
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
    virtual bool empty() const override { return this->billingType_ == nullptr
        && this->clientId_ == nullptr && this->clientName_ == nullptr && this->modelCode_ == nullptr && this->modelId_ == nullptr && this->modelName_ == nullptr
        && this->modelType_ == nullptr && this->payableAmount_ == nullptr && this->summaryTime_ == nullptr; };
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


  protected:
    shared_ptr<string> billingType_ {};
    shared_ptr<int64_t> clientId_ {};
    shared_ptr<string> clientName_ {};
    shared_ptr<string> modelCode_ {};
    shared_ptr<int64_t> modelId_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<string> modelType_ {};
    shared_ptr<float> payableAmount_ {};
    shared_ptr<int64_t> summaryTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
