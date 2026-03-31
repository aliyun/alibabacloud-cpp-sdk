// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTLOGSRESPONSEBODY_HPP_
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
  class DescribeSecurityEventLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventLogs, securityEventLogs_);
      DARABONBA_PTR_TO_JSON(SecurityEventLogsTotalCount, securityEventLogsTotalCount_);
      DARABONBA_PTR_TO_JSON(SecurityEventMetaData, securityEventMetaData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventLogs, securityEventLogs_);
      DARABONBA_PTR_FROM_JSON(SecurityEventLogsTotalCount, securityEventLogsTotalCount_);
      DARABONBA_PTR_FROM_JSON(SecurityEventMetaData, securityEventMetaData_);
    };
    DescribeSecurityEventLogsResponseBody() = default ;
    DescribeSecurityEventLogsResponseBody(const DescribeSecurityEventLogsResponseBody &) = default ;
    DescribeSecurityEventLogsResponseBody(DescribeSecurityEventLogsResponseBody &&) = default ;
    DescribeSecurityEventLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventLogsResponseBody() = default ;
    DescribeSecurityEventLogsResponseBody& operator=(const DescribeSecurityEventLogsResponseBody &) = default ;
    DescribeSecurityEventLogsResponseBody& operator=(DescribeSecurityEventLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityEventMetaData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityEventMetaData& obj) { 
        DARABONBA_PTR_TO_JSON(DateRange, dateRange_);
        DARABONBA_PTR_TO_JSON(Units, units_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityEventMetaData& obj) { 
        DARABONBA_PTR_FROM_JSON(DateRange, dateRange_);
        DARABONBA_PTR_FROM_JSON(Units, units_);
      };
      SecurityEventMetaData() = default ;
      SecurityEventMetaData(const SecurityEventMetaData &) = default ;
      SecurityEventMetaData(SecurityEventMetaData &&) = default ;
      SecurityEventMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityEventMetaData() = default ;
      SecurityEventMetaData& operator=(const SecurityEventMetaData &) = default ;
      SecurityEventMetaData& operator=(SecurityEventMetaData &&) = default ;
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
        // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds. This value is the same as the value of EndDate in the request parameters.
        shared_ptr<int64_t> endDate_ {};
        // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds. This value is the same as the value of StartDate in the request parameters.
        shared_ptr<int64_t> startDate_ {};
      };

      virtual bool empty() const override { return this->dateRange_ == nullptr
        && this->units_ == nullptr; };
      // dateRange Field Functions 
      bool hasDateRange() const { return this->dateRange_ != nullptr;};
      void deleteDateRange() { this->dateRange_ = nullptr;};
      inline const SecurityEventMetaData::DateRange & getDateRange() const { DARABONBA_PTR_GET_CONST(dateRange_, SecurityEventMetaData::DateRange) };
      inline SecurityEventMetaData::DateRange getDateRange() { DARABONBA_PTR_GET(dateRange_, SecurityEventMetaData::DateRange) };
      inline SecurityEventMetaData& setDateRange(const SecurityEventMetaData::DateRange & dateRange) { DARABONBA_PTR_SET_VALUE(dateRange_, dateRange) };
      inline SecurityEventMetaData& setDateRange(SecurityEventMetaData::DateRange && dateRange) { DARABONBA_PTR_SET_RVALUE(dateRange_, dateRange) };


      // units Field Functions 
      bool hasUnits() const { return this->units_ != nullptr;};
      void deleteUnits() { this->units_ = nullptr;};
      inline string getUnits() const { DARABONBA_PTR_GET_DEFAULT(units_, "") };
      inline SecurityEventMetaData& setUnits(string units) { DARABONBA_PTR_SET_VALUE(units_, units) };


    protected:
      // The time range that is used for the query.
      shared_ptr<SecurityEventMetaData::DateRange> dateRange_ {};
      // The unit of the statistics returned. The value is fixed as requests.
      shared_ptr<string> units_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityEventLogs_ == nullptr && this->securityEventLogsTotalCount_ == nullptr && this->securityEventMetaData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityEventLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventLogs Field Functions 
    bool hasSecurityEventLogs() const { return this->securityEventLogs_ != nullptr;};
    void deleteSecurityEventLogs() { this->securityEventLogs_ = nullptr;};
    inline const vector<Darabonba::Json> & getSecurityEventLogs() const { DARABONBA_PTR_GET_CONST(securityEventLogs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getSecurityEventLogs() { DARABONBA_PTR_GET(securityEventLogs_, vector<Darabonba::Json>) };
    inline DescribeSecurityEventLogsResponseBody& setSecurityEventLogs(const vector<Darabonba::Json> & securityEventLogs) { DARABONBA_PTR_SET_VALUE(securityEventLogs_, securityEventLogs) };
    inline DescribeSecurityEventLogsResponseBody& setSecurityEventLogs(vector<Darabonba::Json> && securityEventLogs) { DARABONBA_PTR_SET_RVALUE(securityEventLogs_, securityEventLogs) };


    // securityEventLogsTotalCount Field Functions 
    bool hasSecurityEventLogsTotalCount() const { return this->securityEventLogsTotalCount_ != nullptr;};
    void deleteSecurityEventLogsTotalCount() { this->securityEventLogsTotalCount_ = nullptr;};
    inline int64_t getSecurityEventLogsTotalCount() const { DARABONBA_PTR_GET_DEFAULT(securityEventLogsTotalCount_, 0L) };
    inline DescribeSecurityEventLogsResponseBody& setSecurityEventLogsTotalCount(int64_t securityEventLogsTotalCount) { DARABONBA_PTR_SET_VALUE(securityEventLogsTotalCount_, securityEventLogsTotalCount) };


    // securityEventMetaData Field Functions 
    bool hasSecurityEventMetaData() const { return this->securityEventMetaData_ != nullptr;};
    void deleteSecurityEventMetaData() { this->securityEventMetaData_ = nullptr;};
    inline const DescribeSecurityEventLogsResponseBody::SecurityEventMetaData & getSecurityEventMetaData() const { DARABONBA_PTR_GET_CONST(securityEventMetaData_, DescribeSecurityEventLogsResponseBody::SecurityEventMetaData) };
    inline DescribeSecurityEventLogsResponseBody::SecurityEventMetaData getSecurityEventMetaData() { DARABONBA_PTR_GET(securityEventMetaData_, DescribeSecurityEventLogsResponseBody::SecurityEventMetaData) };
    inline DescribeSecurityEventLogsResponseBody& setSecurityEventMetaData(const DescribeSecurityEventLogsResponseBody::SecurityEventMetaData & securityEventMetaData) { DARABONBA_PTR_SET_VALUE(securityEventMetaData_, securityEventMetaData) };
    inline DescribeSecurityEventLogsResponseBody& setSecurityEventMetaData(DescribeSecurityEventLogsResponseBody::SecurityEventMetaData && securityEventMetaData) { DARABONBA_PTR_SET_RVALUE(securityEventMetaData_, securityEventMetaData) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The attack logs returned.
    shared_ptr<vector<Darabonba::Json>> securityEventLogs_ {};
    // The total number of logs returned.
    shared_ptr<int64_t> securityEventLogsTotalCount_ {};
    // The metadata of the time series data returned.
    shared_ptr<DescribeSecurityEventLogsResponseBody::SecurityEventMetaData> securityEventMetaData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
