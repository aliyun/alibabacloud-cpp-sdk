// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAININGJOBMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAININGJOBMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ListTrainingJobMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrainingJobMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrainingJobMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTrainingJobMetricsResponseBody() = default ;
    ListTrainingJobMetricsResponseBody(const ListTrainingJobMetricsResponseBody &) = default ;
    ListTrainingJobMetricsResponseBody(ListTrainingJobMetricsResponseBody &&) = default ;
    ListTrainingJobMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrainingJobMetricsResponseBody() = default ;
    ListTrainingJobMetricsResponseBody& operator=(const ListTrainingJobMetricsResponseBody &) = default ;
    ListTrainingJobMetricsResponseBody& operator=(ListTrainingJobMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Metrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Metrics() = default ;
      Metrics(const Metrics &) = default ;
      Metrics(Metrics &&) = default ;
      Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Metrics() = default ;
      Metrics& operator=(const Metrics &) = default ;
      Metrics& operator=(Metrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->timestamp_ == nullptr && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Metrics& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline Metrics& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
      inline Metrics& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> timestamp_ {};
      shared_ptr<double> value_ {};
    };

    virtual bool empty() const override { return this->metrics_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<ListTrainingJobMetricsResponseBody::Metrics> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<ListTrainingJobMetricsResponseBody::Metrics>) };
    inline vector<ListTrainingJobMetricsResponseBody::Metrics> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<ListTrainingJobMetricsResponseBody::Metrics>) };
    inline ListTrainingJobMetricsResponseBody& setMetrics(const vector<ListTrainingJobMetricsResponseBody::Metrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline ListTrainingJobMetricsResponseBody& setMetrics(vector<ListTrainingJobMetricsResponseBody::Metrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrainingJobMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTrainingJobMetricsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListTrainingJobMetricsResponseBody::Metrics>> metrics_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
