// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELMETRICSDTO_HPP_
#define ALIBABACLOUD_MODELS_MODELMETRICSDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelMetricsDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelMetricsDTO& obj) { 
      DARABONBA_PTR_TO_JSON(avgResponseTime, avgResponseTime_);
      DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_TO_JSON(successRate, successRate_);
      DARABONBA_PTR_TO_JSON(totalCalls, totalCalls_);
    };
    friend void from_json(const Darabonba::Json& j, ModelMetricsDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(avgResponseTime, avgResponseTime_);
      DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_FROM_JSON(successRate, successRate_);
      DARABONBA_PTR_FROM_JSON(totalCalls, totalCalls_);
    };
    ModelMetricsDTO() = default ;
    ModelMetricsDTO(const ModelMetricsDTO &) = default ;
    ModelMetricsDTO(ModelMetricsDTO &&) = default ;
    ModelMetricsDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelMetricsDTO() = default ;
    ModelMetricsDTO& operator=(const ModelMetricsDTO &) = default ;
    ModelMetricsDTO& operator=(ModelMetricsDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avgResponseTime_ == nullptr
        && this->inputTokens_ == nullptr && this->outputTokens_ == nullptr && this->successRate_ == nullptr && this->totalCalls_ == nullptr; };
    // avgResponseTime Field Functions 
    bool hasAvgResponseTime() const { return this->avgResponseTime_ != nullptr;};
    void deleteAvgResponseTime() { this->avgResponseTime_ = nullptr;};
    inline double getAvgResponseTime() const { DARABONBA_PTR_GET_DEFAULT(avgResponseTime_, 0.0) };
    inline ModelMetricsDTO& setAvgResponseTime(double avgResponseTime) { DARABONBA_PTR_SET_VALUE(avgResponseTime_, avgResponseTime) };


    // inputTokens Field Functions 
    bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
    void deleteInputTokens() { this->inputTokens_ = nullptr;};
    inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
    inline ModelMetricsDTO& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


    // outputTokens Field Functions 
    bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
    void deleteOutputTokens() { this->outputTokens_ = nullptr;};
    inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
    inline ModelMetricsDTO& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


    // successRate Field Functions 
    bool hasSuccessRate() const { return this->successRate_ != nullptr;};
    void deleteSuccessRate() { this->successRate_ = nullptr;};
    inline double getSuccessRate() const { DARABONBA_PTR_GET_DEFAULT(successRate_, 0.0) };
    inline ModelMetricsDTO& setSuccessRate(double successRate) { DARABONBA_PTR_SET_VALUE(successRate_, successRate) };


    // totalCalls Field Functions 
    bool hasTotalCalls() const { return this->totalCalls_ != nullptr;};
    void deleteTotalCalls() { this->totalCalls_ = nullptr;};
    inline int64_t getTotalCalls() const { DARABONBA_PTR_GET_DEFAULT(totalCalls_, 0L) };
    inline ModelMetricsDTO& setTotalCalls(int64_t totalCalls) { DARABONBA_PTR_SET_VALUE(totalCalls_, totalCalls) };


  protected:
    shared_ptr<double> avgResponseTime_ {};
    shared_ptr<int64_t> inputTokens_ {};
    shared_ptr<int64_t> outputTokens_ {};
    shared_ptr<double> successRate_ {};
    shared_ptr<int64_t> totalCalls_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
