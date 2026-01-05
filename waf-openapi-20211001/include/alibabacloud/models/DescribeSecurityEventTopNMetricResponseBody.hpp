// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICRESPONSEBODY_HPP_
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
  class DescribeSecurityEventTopNMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventTopNMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventTopNValues, securityEventTopNValues_);
      DARABONBA_PTR_TO_JSON(TopNMetaData, topNMetaData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventTopNMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventTopNValues, securityEventTopNValues_);
      DARABONBA_PTR_FROM_JSON(TopNMetaData, topNMetaData_);
    };
    DescribeSecurityEventTopNMetricResponseBody() = default ;
    DescribeSecurityEventTopNMetricResponseBody(const DescribeSecurityEventTopNMetricResponseBody &) = default ;
    DescribeSecurityEventTopNMetricResponseBody(DescribeSecurityEventTopNMetricResponseBody &&) = default ;
    DescribeSecurityEventTopNMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventTopNMetricResponseBody() = default ;
    DescribeSecurityEventTopNMetricResponseBody& operator=(const DescribeSecurityEventTopNMetricResponseBody &) = default ;
    DescribeSecurityEventTopNMetricResponseBody& operator=(DescribeSecurityEventTopNMetricResponseBody &&) = default ;
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
        // The end of the time range to query. The value is a Unix timestamp. Unit: seconds. This value is the same as the value of EndDate in the request parameters.
        shared_ptr<int64_t> endDate_ {};
        // The beginning of the time range to query. The value is a Unix timestamp. Unit: seconds. This value is the same as the value of StartDate in the request parameters.
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
      // The time range that is used for the query.
      shared_ptr<TopNMetaData::DateRange> dateRange_ {};
      // The unit of the statistics returned. It is fixed as requests.
      shared_ptr<string> units_ {};
    };

    class SecurityEventTopNValues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityEventTopNValues& obj) { 
        DARABONBA_PTR_TO_JSON(Attribute, attribute_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityEventTopNValues& obj) { 
        DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      SecurityEventTopNValues() = default ;
      SecurityEventTopNValues(const SecurityEventTopNValues &) = default ;
      SecurityEventTopNValues(SecurityEventTopNValues &&) = default ;
      SecurityEventTopNValues(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityEventTopNValues() = default ;
      SecurityEventTopNValues& operator=(const SecurityEventTopNValues &) = default ;
      SecurityEventTopNValues& operator=(SecurityEventTopNValues &&) = default ;
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
      inline SecurityEventTopNValues& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SecurityEventTopNValues& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
      inline SecurityEventTopNValues& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The additional information, such as the protection module for a protection rule whose ID is returned.
      shared_ptr<string> attribute_ {};
      // The field value, which varies based on the metric.
      shared_ptr<string> name_ {};
      // The count for the data entry.
      shared_ptr<int64_t> value_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityEventTopNValues_ == nullptr && this->topNMetaData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityEventTopNMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventTopNValues Field Functions 
    bool hasSecurityEventTopNValues() const { return this->securityEventTopNValues_ != nullptr;};
    void deleteSecurityEventTopNValues() { this->securityEventTopNValues_ = nullptr;};
    inline const vector<DescribeSecurityEventTopNMetricResponseBody::SecurityEventTopNValues> & getSecurityEventTopNValues() const { DARABONBA_PTR_GET_CONST(securityEventTopNValues_, vector<DescribeSecurityEventTopNMetricResponseBody::SecurityEventTopNValues>) };
    inline vector<DescribeSecurityEventTopNMetricResponseBody::SecurityEventTopNValues> getSecurityEventTopNValues() { DARABONBA_PTR_GET(securityEventTopNValues_, vector<DescribeSecurityEventTopNMetricResponseBody::SecurityEventTopNValues>) };
    inline DescribeSecurityEventTopNMetricResponseBody& setSecurityEventTopNValues(const vector<DescribeSecurityEventTopNMetricResponseBody::SecurityEventTopNValues> & securityEventTopNValues) { DARABONBA_PTR_SET_VALUE(securityEventTopNValues_, securityEventTopNValues) };
    inline DescribeSecurityEventTopNMetricResponseBody& setSecurityEventTopNValues(vector<DescribeSecurityEventTopNMetricResponseBody::SecurityEventTopNValues> && securityEventTopNValues) { DARABONBA_PTR_SET_RVALUE(securityEventTopNValues_, securityEventTopNValues) };


    // topNMetaData Field Functions 
    bool hasTopNMetaData() const { return this->topNMetaData_ != nullptr;};
    void deleteTopNMetaData() { this->topNMetaData_ = nullptr;};
    inline const DescribeSecurityEventTopNMetricResponseBody::TopNMetaData & getTopNMetaData() const { DARABONBA_PTR_GET_CONST(topNMetaData_, DescribeSecurityEventTopNMetricResponseBody::TopNMetaData) };
    inline DescribeSecurityEventTopNMetricResponseBody::TopNMetaData getTopNMetaData() { DARABONBA_PTR_GET(topNMetaData_, DescribeSecurityEventTopNMetricResponseBody::TopNMetaData) };
    inline DescribeSecurityEventTopNMetricResponseBody& setTopNMetaData(const DescribeSecurityEventTopNMetricResponseBody::TopNMetaData & topNMetaData) { DARABONBA_PTR_SET_VALUE(topNMetaData_, topNMetaData) };
    inline DescribeSecurityEventTopNMetricResponseBody& setTopNMetaData(DescribeSecurityEventTopNMetricResponseBody::TopNMetaData && topNMetaData) { DARABONBA_PTR_SET_RVALUE(topNMetaData_, topNMetaData) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The top N data entries returned.
    shared_ptr<vector<DescribeSecurityEventTopNMetricResponseBody::SecurityEventTopNValues>> securityEventTopNValues_ {};
    // The metadata of the data entries returned.
    shared_ptr<DescribeSecurityEventTopNMetricResponseBody::TopNMetaData> topNMetaData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
