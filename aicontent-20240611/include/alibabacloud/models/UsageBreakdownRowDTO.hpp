// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_USAGEBREAKDOWNROWDTO_HPP_
#define ALIBABACLOUD_MODELS_USAGEBREAKDOWNROWDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetricKVPairDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class UsageBreakdownRowDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UsageBreakdownRowDTO& obj) { 
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(clientName, clientName_);
      DARABONBA_PTR_TO_JSON(metrics, metrics_);
      DARABONBA_PTR_TO_JSON(modelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(summaryTime, summaryTime_);
    };
    friend void from_json(const Darabonba::Json& j, UsageBreakdownRowDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(clientName, clientName_);
      DARABONBA_PTR_FROM_JSON(metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(modelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(summaryTime, summaryTime_);
    };
    UsageBreakdownRowDTO() = default ;
    UsageBreakdownRowDTO(const UsageBreakdownRowDTO &) = default ;
    UsageBreakdownRowDTO(UsageBreakdownRowDTO &&) = default ;
    UsageBreakdownRowDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UsageBreakdownRowDTO() = default ;
    UsageBreakdownRowDTO& operator=(const UsageBreakdownRowDTO &) = default ;
    UsageBreakdownRowDTO& operator=(UsageBreakdownRowDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientName_ == nullptr && this->metrics_ == nullptr && this->modelCode_ == nullptr && this->modelId_ == nullptr && this->modelName_ == nullptr
        && this->modelType_ == nullptr && this->summaryTime_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline UsageBreakdownRowDTO& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientName Field Functions 
    bool hasClientName() const { return this->clientName_ != nullptr;};
    void deleteClientName() { this->clientName_ = nullptr;};
    inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
    inline UsageBreakdownRowDTO& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<MetricKVPairDTO> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<MetricKVPairDTO>) };
    inline vector<MetricKVPairDTO> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<MetricKVPairDTO>) };
    inline UsageBreakdownRowDTO& setMetrics(const vector<MetricKVPairDTO> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline UsageBreakdownRowDTO& setMetrics(vector<MetricKVPairDTO> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline UsageBreakdownRowDTO& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
    inline UsageBreakdownRowDTO& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline UsageBreakdownRowDTO& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline UsageBreakdownRowDTO& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // summaryTime Field Functions 
    bool hasSummaryTime() const { return this->summaryTime_ != nullptr;};
    void deleteSummaryTime() { this->summaryTime_ = nullptr;};
    inline int64_t getSummaryTime() const { DARABONBA_PTR_GET_DEFAULT(summaryTime_, 0L) };
    inline UsageBreakdownRowDTO& setSummaryTime(int64_t summaryTime) { DARABONBA_PTR_SET_VALUE(summaryTime_, summaryTime) };


  protected:
    shared_ptr<int64_t> clientId_ {};
    shared_ptr<string> clientName_ {};
    shared_ptr<vector<MetricKVPairDTO>> metrics_ {};
    shared_ptr<string> modelCode_ {};
    shared_ptr<int64_t> modelId_ {};
    shared_ptr<string> modelName_ {};
    shared_ptr<string> modelType_ {};
    shared_ptr<int64_t> summaryTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
