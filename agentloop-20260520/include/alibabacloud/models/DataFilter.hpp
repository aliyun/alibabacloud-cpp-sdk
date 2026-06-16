// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAFILTER_HPP_
#define ALIBABACLOUD_MODELS_DATAFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class DataFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataFilter& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(maxRecords, maxRecords_);
      DARABONBA_ANY_TO_JSON(provided, provided_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(samplingRate, samplingRate_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DataFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(maxRecords, maxRecords_);
      DARABONBA_ANY_FROM_JSON(provided, provided_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(samplingRate, samplingRate_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    DataFilter() = default ;
    DataFilter(const DataFilter &) = default ;
    DataFilter(DataFilter &&) = default ;
    DataFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataFilter() = default ;
    DataFilter& operator=(const DataFilter &) = default ;
    DataFilter& operator=(DataFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->maxRecords_ == nullptr && this->provided_ == nullptr && this->query_ == nullptr && this->samplingRate_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DataFilter& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxRecords Field Functions 
    bool hasMaxRecords() const { return this->maxRecords_ != nullptr;};
    void deleteMaxRecords() { this->maxRecords_ = nullptr;};
    inline int32_t getMaxRecords() const { DARABONBA_PTR_GET_DEFAULT(maxRecords_, 0) };
    inline DataFilter& setMaxRecords(int32_t maxRecords) { DARABONBA_PTR_SET_VALUE(maxRecords_, maxRecords) };


    // provided Field Functions 
    bool hasProvided() const { return this->provided_ != nullptr;};
    void deleteProvided() { this->provided_ = nullptr;};
    inline     const Darabonba::Json & getProvided() const { DARABONBA_GET(provided_) };
    Darabonba::Json & getProvided() { DARABONBA_GET(provided_) };
    inline DataFilter& setProvided(const Darabonba::Json & provided) { DARABONBA_SET_VALUE(provided_, provided) };
    inline DataFilter& setProvided(Darabonba::Json && provided) { DARABONBA_SET_RVALUE(provided_, provided) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline DataFilter& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // samplingRate Field Functions 
    bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
    void deleteSamplingRate() { this->samplingRate_ = nullptr;};
    inline int32_t getSamplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, 0) };
    inline DataFilter& setSamplingRate(int32_t samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DataFilter& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<int32_t> maxRecords_ {};
    Darabonba::Json provided_ {};
    shared_ptr<string> query_ {};
    shared_ptr<int32_t> samplingRate_ {};
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
