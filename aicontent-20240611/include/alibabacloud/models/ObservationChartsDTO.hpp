// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBSERVATIONCHARTSDTO_HPP_
#define ALIBABACLOUD_MODELS_OBSERVATIONCHARTSDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TimeSeriesPointDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ObservationChartsDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObservationChartsDTO& obj) { 
      DARABONBA_PTR_TO_JSON(callVolume, callVolume_);
      DARABONBA_PTR_TO_JSON(concurrency, concurrency_);
      DARABONBA_PTR_TO_JSON(qpm, qpm_);
      DARABONBA_PTR_TO_JSON(responseTime, responseTime_);
      DARABONBA_PTR_TO_JSON(successRate, successRate_);
      DARABONBA_PTR_TO_JSON(tpm, tpm_);
    };
    friend void from_json(const Darabonba::Json& j, ObservationChartsDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(callVolume, callVolume_);
      DARABONBA_PTR_FROM_JSON(concurrency, concurrency_);
      DARABONBA_PTR_FROM_JSON(qpm, qpm_);
      DARABONBA_PTR_FROM_JSON(responseTime, responseTime_);
      DARABONBA_PTR_FROM_JSON(successRate, successRate_);
      DARABONBA_PTR_FROM_JSON(tpm, tpm_);
    };
    ObservationChartsDTO() = default ;
    ObservationChartsDTO(const ObservationChartsDTO &) = default ;
    ObservationChartsDTO(ObservationChartsDTO &&) = default ;
    ObservationChartsDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObservationChartsDTO() = default ;
    ObservationChartsDTO& operator=(const ObservationChartsDTO &) = default ;
    ObservationChartsDTO& operator=(ObservationChartsDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callVolume_ == nullptr
        && this->concurrency_ == nullptr && this->qpm_ == nullptr && this->responseTime_ == nullptr && this->successRate_ == nullptr && this->tpm_ == nullptr; };
    // callVolume Field Functions 
    bool hasCallVolume() const { return this->callVolume_ != nullptr;};
    void deleteCallVolume() { this->callVolume_ = nullptr;};
    inline const vector<TimeSeriesPointDTO> & getCallVolume() const { DARABONBA_PTR_GET_CONST(callVolume_, vector<TimeSeriesPointDTO>) };
    inline vector<TimeSeriesPointDTO> getCallVolume() { DARABONBA_PTR_GET(callVolume_, vector<TimeSeriesPointDTO>) };
    inline ObservationChartsDTO& setCallVolume(const vector<TimeSeriesPointDTO> & callVolume) { DARABONBA_PTR_SET_VALUE(callVolume_, callVolume) };
    inline ObservationChartsDTO& setCallVolume(vector<TimeSeriesPointDTO> && callVolume) { DARABONBA_PTR_SET_RVALUE(callVolume_, callVolume) };


    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline const vector<TimeSeriesPointDTO> & getConcurrency() const { DARABONBA_PTR_GET_CONST(concurrency_, vector<TimeSeriesPointDTO>) };
    inline vector<TimeSeriesPointDTO> getConcurrency() { DARABONBA_PTR_GET(concurrency_, vector<TimeSeriesPointDTO>) };
    inline ObservationChartsDTO& setConcurrency(const vector<TimeSeriesPointDTO> & concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };
    inline ObservationChartsDTO& setConcurrency(vector<TimeSeriesPointDTO> && concurrency) { DARABONBA_PTR_SET_RVALUE(concurrency_, concurrency) };


    // qpm Field Functions 
    bool hasQpm() const { return this->qpm_ != nullptr;};
    void deleteQpm() { this->qpm_ = nullptr;};
    inline const vector<TimeSeriesPointDTO> & getQpm() const { DARABONBA_PTR_GET_CONST(qpm_, vector<TimeSeriesPointDTO>) };
    inline vector<TimeSeriesPointDTO> getQpm() { DARABONBA_PTR_GET(qpm_, vector<TimeSeriesPointDTO>) };
    inline ObservationChartsDTO& setQpm(const vector<TimeSeriesPointDTO> & qpm) { DARABONBA_PTR_SET_VALUE(qpm_, qpm) };
    inline ObservationChartsDTO& setQpm(vector<TimeSeriesPointDTO> && qpm) { DARABONBA_PTR_SET_RVALUE(qpm_, qpm) };


    // responseTime Field Functions 
    bool hasResponseTime() const { return this->responseTime_ != nullptr;};
    void deleteResponseTime() { this->responseTime_ = nullptr;};
    inline const vector<TimeSeriesPointDTO> & getResponseTime() const { DARABONBA_PTR_GET_CONST(responseTime_, vector<TimeSeriesPointDTO>) };
    inline vector<TimeSeriesPointDTO> getResponseTime() { DARABONBA_PTR_GET(responseTime_, vector<TimeSeriesPointDTO>) };
    inline ObservationChartsDTO& setResponseTime(const vector<TimeSeriesPointDTO> & responseTime) { DARABONBA_PTR_SET_VALUE(responseTime_, responseTime) };
    inline ObservationChartsDTO& setResponseTime(vector<TimeSeriesPointDTO> && responseTime) { DARABONBA_PTR_SET_RVALUE(responseTime_, responseTime) };


    // successRate Field Functions 
    bool hasSuccessRate() const { return this->successRate_ != nullptr;};
    void deleteSuccessRate() { this->successRate_ = nullptr;};
    inline const vector<TimeSeriesPointDTO> & getSuccessRate() const { DARABONBA_PTR_GET_CONST(successRate_, vector<TimeSeriesPointDTO>) };
    inline vector<TimeSeriesPointDTO> getSuccessRate() { DARABONBA_PTR_GET(successRate_, vector<TimeSeriesPointDTO>) };
    inline ObservationChartsDTO& setSuccessRate(const vector<TimeSeriesPointDTO> & successRate) { DARABONBA_PTR_SET_VALUE(successRate_, successRate) };
    inline ObservationChartsDTO& setSuccessRate(vector<TimeSeriesPointDTO> && successRate) { DARABONBA_PTR_SET_RVALUE(successRate_, successRate) };


    // tpm Field Functions 
    bool hasTpm() const { return this->tpm_ != nullptr;};
    void deleteTpm() { this->tpm_ = nullptr;};
    inline const vector<TimeSeriesPointDTO> & getTpm() const { DARABONBA_PTR_GET_CONST(tpm_, vector<TimeSeriesPointDTO>) };
    inline vector<TimeSeriesPointDTO> getTpm() { DARABONBA_PTR_GET(tpm_, vector<TimeSeriesPointDTO>) };
    inline ObservationChartsDTO& setTpm(const vector<TimeSeriesPointDTO> & tpm) { DARABONBA_PTR_SET_VALUE(tpm_, tpm) };
    inline ObservationChartsDTO& setTpm(vector<TimeSeriesPointDTO> && tpm) { DARABONBA_PTR_SET_RVALUE(tpm_, tpm) };


  protected:
    shared_ptr<vector<TimeSeriesPointDTO>> callVolume_ {};
    shared_ptr<vector<TimeSeriesPointDTO>> concurrency_ {};
    shared_ptr<vector<TimeSeriesPointDTO>> qpm_ {};
    shared_ptr<vector<TimeSeriesPointDTO>> responseTime_ {};
    shared_ptr<vector<TimeSeriesPointDTO>> successRate_ {};
    shared_ptr<vector<TimeSeriesPointDTO>> tpm_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
