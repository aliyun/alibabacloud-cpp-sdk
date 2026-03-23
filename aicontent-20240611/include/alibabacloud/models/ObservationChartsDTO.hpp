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
    class SuccessRate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuccessRate& obj) { 
        DARABONBA_PTR_TO_JSON(label, label_);
        DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
        DARABONBA_ANY_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, SuccessRate& obj) { 
        DARABONBA_PTR_FROM_JSON(label, label_);
        DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
        DARABONBA_ANY_FROM_JSON(value, value_);
      };
      SuccessRate() = default ;
      SuccessRate(const SuccessRate &) = default ;
      SuccessRate(SuccessRate &&) = default ;
      SuccessRate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SuccessRate() = default ;
      SuccessRate& operator=(const SuccessRate &) = default ;
      SuccessRate& operator=(SuccessRate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->label_ == nullptr
        && this->timestamp_ == nullptr && this->value_ == nullptr; };
      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline SuccessRate& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline SuccessRate& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline       const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
      Darabonba::Json & getValue() { DARABONBA_GET(value_) };
      inline SuccessRate& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
      inline SuccessRate& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


    protected:
      shared_ptr<string> label_ {};
      shared_ptr<string> timestamp_ {};
      Darabonba::Json value_ {};
    };

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
    inline const vector<ObservationChartsDTO::SuccessRate> & getSuccessRate() const { DARABONBA_PTR_GET_CONST(successRate_, vector<ObservationChartsDTO::SuccessRate>) };
    inline vector<ObservationChartsDTO::SuccessRate> getSuccessRate() { DARABONBA_PTR_GET(successRate_, vector<ObservationChartsDTO::SuccessRate>) };
    inline ObservationChartsDTO& setSuccessRate(const vector<ObservationChartsDTO::SuccessRate> & successRate) { DARABONBA_PTR_SET_VALUE(successRate_, successRate) };
    inline ObservationChartsDTO& setSuccessRate(vector<ObservationChartsDTO::SuccessRate> && successRate) { DARABONBA_PTR_SET_RVALUE(successRate_, successRate) };


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
    shared_ptr<vector<ObservationChartsDTO::SuccessRate>> successRate_ {};
    shared_ptr<vector<TimeSeriesPointDTO>> tpm_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
