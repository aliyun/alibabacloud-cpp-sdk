// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKFLOWTOPNMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeNetworkFlowTopNMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkFlowTopNMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkFlowTopNValues, networkFlowTopNValues_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TopNMetaData, topNMetaData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkFlowTopNMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkFlowTopNValues, networkFlowTopNValues_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TopNMetaData, topNMetaData_);
    };
    DescribeNetworkFlowTopNMetricResponseBody() = default ;
    DescribeNetworkFlowTopNMetricResponseBody(const DescribeNetworkFlowTopNMetricResponseBody &) = default ;
    DescribeNetworkFlowTopNMetricResponseBody(DescribeNetworkFlowTopNMetricResponseBody &&) = default ;
    DescribeNetworkFlowTopNMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkFlowTopNMetricResponseBody() = default ;
    DescribeNetworkFlowTopNMetricResponseBody& operator=(const DescribeNetworkFlowTopNMetricResponseBody &) = default ;
    DescribeNetworkFlowTopNMetricResponseBody& operator=(DescribeNetworkFlowTopNMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TopNMetaData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TopNMetaData& obj) { 
        DARABONBA_PTR_TO_JSON(DateRange, dateRange_);
        DARABONBA_PTR_TO_JSON(Units, units_);
      };
      friend void from_json(const Darabonba::Json& j, TopNMetaData& obj) { 
        DARABONBA_PTR_FROM_JSON(DateRange, dateRange_);
        DARABONBA_PTR_FROM_JSON(Units, units_);
      };
      TopNMetaData() = default ;
      TopNMetaData(const TopNMetaData &) = default ;
      TopNMetaData(TopNMetaData &&) = default ;
      TopNMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TopNMetaData() = default ;
      TopNMetaData& operator=(const TopNMetaData &) = default ;
      TopNMetaData& operator=(TopNMetaData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DateRange : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DateRange& obj) { 
          DARABONBA_PTR_TO_JSON(EndDate, endDate_);
          DARABONBA_PTR_TO_JSON(StartDate, startDate_);
        };
        friend void from_json(const Darabonba::Json& j, DateRange& obj) { 
          DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
          DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
        };
        DateRange() = default ;
        DateRange(const DateRange &) = default ;
        DateRange(DateRange &&) = default ;
        DateRange(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DateRange() = default ;
        DateRange& operator=(const DateRange &) = default ;
        DateRange& operator=(DateRange &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endDate_ == nullptr
        && this->startDate_ == nullptr; };
        // endDate Field Functions 
        bool hasEndDate() const { return this->endDate_ != nullptr;};
        void deleteEndDate() { this->endDate_ = nullptr;};
        inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
        inline DateRange& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


        // startDate Field Functions 
        bool hasStartDate() const { return this->startDate_ != nullptr;};
        void deleteStartDate() { this->startDate_ = nullptr;};
        inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
        inline DateRange& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      protected:
        // The end time of the query range (Unix timestamp, seconds). Same as the EndDate request parameter.
        shared_ptr<int64_t> endDate_ {};
        // The start time of the query range (Unix timestamp, seconds). Same as the StartDate request parameter.
        shared_ptr<int64_t> startDate_ {};
      };

      virtual bool empty() const override { return this->dateRange_ == nullptr
        && this->units_ == nullptr; };
      // dateRange Field Functions 
      bool hasDateRange() const { return this->dateRange_ != nullptr;};
      void deleteDateRange() { this->dateRange_ = nullptr;};
      inline const TopNMetaData::DateRange & getDateRange() const { DARABONBA_PTR_GET_CONST(dateRange_, TopNMetaData::DateRange) };
      inline TopNMetaData::DateRange getDateRange() { DARABONBA_PTR_GET(dateRange_, TopNMetaData::DateRange) };
      inline TopNMetaData& setDateRange(const TopNMetaData::DateRange & dateRange) { DARABONBA_PTR_SET_VALUE(dateRange_, dateRange) };
      inline TopNMetaData& setDateRange(TopNMetaData::DateRange && dateRange) { DARABONBA_PTR_SET_RVALUE(dateRange_, dateRange) };


      // units Field Functions 
      bool hasUnits() const { return this->units_ != nullptr;};
      void deleteUnits() { this->units_ = nullptr;};
      inline string getUnits() const { DARABONBA_PTR_GET_DEFAULT(units_, "") };
      inline TopNMetaData& setUnits(string units) { DARABONBA_PTR_SET_VALUE(units_, units) };


    protected:
      // The query time range.
      shared_ptr<TopNMetaData::DateRange> dateRange_ {};
      // The unit of the returned data. It is fixed as requests.
      shared_ptr<string> units_ {};
    };

    class NetworkFlowTopNValues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkFlowTopNValues& obj) { 
        DARABONBA_PTR_TO_JSON(Attribute, attribute_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkFlowTopNValues& obj) { 
        DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      NetworkFlowTopNValues() = default ;
      NetworkFlowTopNValues(const NetworkFlowTopNValues &) = default ;
      NetworkFlowTopNValues(NetworkFlowTopNValues &&) = default ;
      NetworkFlowTopNValues(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkFlowTopNValues() = default ;
      NetworkFlowTopNValues& operator=(const NetworkFlowTopNValues &) = default ;
      NetworkFlowTopNValues& operator=(NetworkFlowTopNValues &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attribute_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
      // attribute Field Functions 
      bool hasAttribute() const { return this->attribute_ != nullptr;};
      void deleteAttribute() { this->attribute_ = nullptr;};
      inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
      inline NetworkFlowTopNValues& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline NetworkFlowTopNValues& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
      inline NetworkFlowTopNValues& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Returns additional information, such as the country, province, or city to which an IP address belongs.
      shared_ptr<string> attribute_ {};
      // The value of this field varies depending on the queried Metric.
      shared_ptr<string> name_ {};
      // Counts for top ranking.
      shared_ptr<int64_t> value_ {};
    };

    virtual bool empty() const override { return this->networkFlowTopNValues_ == nullptr
        && this->requestId_ == nullptr && this->topNMetaData_ == nullptr; };
    // networkFlowTopNValues Field Functions 
    bool hasNetworkFlowTopNValues() const { return this->networkFlowTopNValues_ != nullptr;};
    void deleteNetworkFlowTopNValues() { this->networkFlowTopNValues_ = nullptr;};
    inline const vector<DescribeNetworkFlowTopNMetricResponseBody::NetworkFlowTopNValues> & getNetworkFlowTopNValues() const { DARABONBA_PTR_GET_CONST(networkFlowTopNValues_, vector<DescribeNetworkFlowTopNMetricResponseBody::NetworkFlowTopNValues>) };
    inline vector<DescribeNetworkFlowTopNMetricResponseBody::NetworkFlowTopNValues> getNetworkFlowTopNValues() { DARABONBA_PTR_GET(networkFlowTopNValues_, vector<DescribeNetworkFlowTopNMetricResponseBody::NetworkFlowTopNValues>) };
    inline DescribeNetworkFlowTopNMetricResponseBody& setNetworkFlowTopNValues(const vector<DescribeNetworkFlowTopNMetricResponseBody::NetworkFlowTopNValues> & networkFlowTopNValues) { DARABONBA_PTR_SET_VALUE(networkFlowTopNValues_, networkFlowTopNValues) };
    inline DescribeNetworkFlowTopNMetricResponseBody& setNetworkFlowTopNValues(vector<DescribeNetworkFlowTopNMetricResponseBody::NetworkFlowTopNValues> && networkFlowTopNValues) { DARABONBA_PTR_SET_RVALUE(networkFlowTopNValues_, networkFlowTopNValues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkFlowTopNMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topNMetaData Field Functions 
    bool hasTopNMetaData() const { return this->topNMetaData_ != nullptr;};
    void deleteTopNMetaData() { this->topNMetaData_ = nullptr;};
    inline const DescribeNetworkFlowTopNMetricResponseBody::TopNMetaData & getTopNMetaData() const { DARABONBA_PTR_GET_CONST(topNMetaData_, DescribeNetworkFlowTopNMetricResponseBody::TopNMetaData) };
    inline DescribeNetworkFlowTopNMetricResponseBody::TopNMetaData getTopNMetaData() { DARABONBA_PTR_GET(topNMetaData_, DescribeNetworkFlowTopNMetricResponseBody::TopNMetaData) };
    inline DescribeNetworkFlowTopNMetricResponseBody& setTopNMetaData(const DescribeNetworkFlowTopNMetricResponseBody::TopNMetaData & topNMetaData) { DARABONBA_PTR_SET_VALUE(topNMetaData_, topNMetaData) };
    inline DescribeNetworkFlowTopNMetricResponseBody& setTopNMetaData(DescribeNetworkFlowTopNMetricResponseBody::TopNMetaData && topNMetaData) { DARABONBA_PTR_SET_RVALUE(topNMetaData_, topNMetaData) };


  protected:
    // The top statistical data array returned.
    shared_ptr<vector<DescribeNetworkFlowTopNMetricResponseBody::NetworkFlowTopNValues>> networkFlowTopNValues_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The metadata of the returned data.
    shared_ptr<DescribeNetworkFlowTopNMetricResponseBody::TopNMetaData> topNMetaData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
