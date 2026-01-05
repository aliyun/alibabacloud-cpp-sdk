// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEINTERACTIONMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEINTERACTIONMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveInteractionMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveInteractionMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SummaryData, summaryData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveInteractionMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SummaryData, summaryData_);
    };
    DescribeLiveInteractionMetricDataResponseBody() = default ;
    DescribeLiveInteractionMetricDataResponseBody(const DescribeLiveInteractionMetricDataResponseBody &) = default ;
    DescribeLiveInteractionMetricDataResponseBody(DescribeLiveInteractionMetricDataResponseBody &&) = default ;
    DescribeLiveInteractionMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveInteractionMetricDataResponseBody() = default ;
    DescribeLiveInteractionMetricDataResponseBody& operator=(const DescribeLiveInteractionMetricDataResponseBody &) = default ;
    DescribeLiveInteractionMetricDataResponseBody& operator=(DescribeLiveInteractionMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Nodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Nodes() = default ;
      Nodes(const Nodes &) = default ;
      Nodes(Nodes &&) = default ;
      Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Nodes() = default ;
      Nodes& operator=(const Nodes &) = default ;
      Nodes& operator=(Nodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->timestamp_ == nullptr
        && this->value_ == nullptr; };
      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
      inline Nodes& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Nodes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The time when the metric was queried. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<string> timestamp_ {};
      // The value of the metric.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->nodes_ == nullptr
        && this->requestId_ == nullptr && this->summaryData_ == nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<DescribeLiveInteractionMetricDataResponseBody::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<DescribeLiveInteractionMetricDataResponseBody::Nodes>) };
    inline vector<DescribeLiveInteractionMetricDataResponseBody::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<DescribeLiveInteractionMetricDataResponseBody::Nodes>) };
    inline DescribeLiveInteractionMetricDataResponseBody& setNodes(const vector<DescribeLiveInteractionMetricDataResponseBody::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeLiveInteractionMetricDataResponseBody& setNodes(vector<DescribeLiveInteractionMetricDataResponseBody::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveInteractionMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // summaryData Field Functions 
    bool hasSummaryData() const { return this->summaryData_ != nullptr;};
    void deleteSummaryData() { this->summaryData_ = nullptr;};
    inline string getSummaryData() const { DARABONBA_PTR_GET_DEFAULT(summaryData_, "") };
    inline DescribeLiveInteractionMetricDataResponseBody& setSummaryData(string summaryData) { DARABONBA_PTR_SET_VALUE(summaryData_, summaryData) };


  protected:
    // The node data.
    shared_ptr<vector<DescribeLiveInteractionMetricDataResponseBody::Nodes>> nodes_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The summary data.
    shared_ptr<string> summaryData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
