// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBREPORTTOPIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBREPORTTOPIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebReportTopIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebReportTopIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Top, top_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebReportTopIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Top, top_);
    };
    DescribeWebReportTopIpRequest() = default ;
    DescribeWebReportTopIpRequest(const DescribeWebReportTopIpRequest &) = default ;
    DescribeWebReportTopIpRequest(DescribeWebReportTopIpRequest &&) = default ;
    DescribeWebReportTopIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebReportTopIpRequest() = default ;
    DescribeWebReportTopIpRequest& operator=(const DescribeWebReportTopIpRequest &) = default ;
    DescribeWebReportTopIpRequest& operator=(DescribeWebReportTopIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->endTime_ != nullptr && this->interval_ != nullptr && this->queryType_ != nullptr && this->startTime_ != nullptr && this->top_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeWebReportTopIpRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeWebReportTopIpRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeWebReportTopIpRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline DescribeWebReportTopIpRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeWebReportTopIpRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // top Field Functions 
    bool hasTop() const { return this->top_ != nullptr;};
    void deleteTop() { this->top_ = nullptr;};
    inline int32_t top() const { DARABONBA_PTR_GET_DEFAULT(top_, 0) };
    inline DescribeWebReportTopIpRequest& setTop(int32_t top) { DARABONBA_PTR_SET_VALUE(top_, top) };


  protected:
    // The domain name of the website.
    // 
    // >  A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query the domain names for which forwarding rules are configured.
    std::shared_ptr<string> domain_ = nullptr;
    // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // >  This UNIX timestamp must indicate a point in time that is accurate to the minute.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The interval at which data is collected. Unit: seconds. Valid values are 300, 3600, and 86400.
    // 
    // *   If the time span between StartTime and EndTime is less than 3 days (3 days excluded), valid values are 300, 3600, and 86400.
    // *   If the time span between StartTime and EndTime is from 3 to 31 days (31 days excluded), valid values are 3600 and 86400.
    // *   If the time span between StartTime and EndTime is 31 days or longer, the valid value is 86400.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The source of the statistics. Valid values:
    // 
    // *   **visit**: indicates all IP addresses.
    // *   **block**: indicates blocked IP addresses.
    // 
    // This parameter is required.
    std::shared_ptr<string> queryType_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // >  This UNIX timestamp must indicate a point in time that is accurate to the minute.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The maximum number of entries to return.
    std::shared_ptr<int32_t> top_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
