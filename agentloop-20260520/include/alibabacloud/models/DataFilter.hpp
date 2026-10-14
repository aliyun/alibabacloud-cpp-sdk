// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAFILTER_HPP_
#define ALIBABACLOUD_MODELS_DATAFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(maxRecords, maxRecords_);
      DARABONBA_ANY_TO_JSON(provided, provided_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(samplingRate, samplingRate_);
      DARABONBA_PTR_TO_JSON(serviceNames, serviceNames_);
    };
    friend void from_json(const Darabonba::Json& j, DataFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(maxRecords, maxRecords_);
      DARABONBA_ANY_FROM_JSON(provided, provided_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(samplingRate, samplingRate_);
      DARABONBA_PTR_FROM_JSON(serviceNames, serviceNames_);
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
    virtual bool empty() const override { return this->maxRecords_ == nullptr
        && this->provided_ == nullptr && this->query_ == nullptr && this->samplingRate_ == nullptr && this->serviceNames_ == nullptr; };
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


    // serviceNames Field Functions 
    bool hasServiceNames() const { return this->serviceNames_ != nullptr;};
    void deleteServiceNames() { this->serviceNames_ = nullptr;};
    inline const vector<string> & getServiceNames() const { DARABONBA_PTR_GET_CONST(serviceNames_, vector<string>) };
    inline vector<string> getServiceNames() { DARABONBA_PTR_GET(serviceNames_, vector<string>) };
    inline DataFilter& setServiceNames(const vector<string> & serviceNames) { DARABONBA_PTR_SET_VALUE(serviceNames_, serviceNames) };
    inline DataFilter& setServiceNames(vector<string> && serviceNames) { DARABONBA_PTR_SET_RVALUE(serviceNames_, serviceNames) };


  protected:
    // The maximum number of evaluation records. This parameter takes effect for both backfill and continuous runs. If this parameter is not specified, the backend does not apply an additional default value.
    shared_ptr<int32_t> maxRecords_ {};
    // The single-shot input content for temporary evaluation, which is primarily used for one-shot tasks. Values are saved as strings. Object or array values are serialized into JSON strings.
    Darabonba::Json provided_ {};
    // The data query filter conditions that take effect together with the evaluator-level filters.query. For trace scenarios, you can specify filter expressions such as service name, environment, and tags.
    shared_ptr<string> query_ {};
    // The sampling rate percentage. Valid values: 0 to 100. A value of 0 or an unspecified value indicates no sampling. A value of 100 indicates full sampling. If the value is less than 100, random sampling is performed first, and then the maxRecords limit is applied.
    shared_ptr<int32_t> samplingRate_ {};
    // The list of service names used to restrict the services involved in data filtering.
    shared_ptr<vector<string>> serviceNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
