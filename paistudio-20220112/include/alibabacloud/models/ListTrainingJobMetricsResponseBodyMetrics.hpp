// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBMETRICSRESPONSEBODYMETRICS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBMETRICSRESPONSEBODYMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobMetricsResponseBodyMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobMetricsResponseBodyMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobMetricsResponseBodyMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListTrainingJobMetricsResponseBodyMetrics() = default ;
    ListTrainingJobMetricsResponseBodyMetrics(const ListTrainingJobMetricsResponseBodyMetrics &) = default ;
    ListTrainingJobMetricsResponseBodyMetrics(ListTrainingJobMetricsResponseBodyMetrics &&) = default ;
    ListTrainingJobMetricsResponseBodyMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobMetricsResponseBodyMetrics() = default ;
    ListTrainingJobMetricsResponseBodyMetrics& operator=(const ListTrainingJobMetricsResponseBodyMetrics &) = default ;
    ListTrainingJobMetricsResponseBodyMetrics& operator=(ListTrainingJobMetricsResponseBodyMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->timestamp_ == nullptr && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTrainingJobMetricsResponseBodyMetrics& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline ListTrainingJobMetricsResponseBodyMetrics& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline ListTrainingJobMetricsResponseBodyMetrics& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> timestamp_ = nullptr;
    std::shared_ptr<double> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
