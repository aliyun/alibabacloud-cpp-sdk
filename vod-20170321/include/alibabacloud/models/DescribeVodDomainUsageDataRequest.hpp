// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINUSAGEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINUSAGEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainUsageDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainUsageDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainUsageDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeVodDomainUsageDataRequest() = default ;
    DescribeVodDomainUsageDataRequest(const DescribeVodDomainUsageDataRequest &) = default ;
    DescribeVodDomainUsageDataRequest(DescribeVodDomainUsageDataRequest &&) = default ;
    DescribeVodDomainUsageDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainUsageDataRequest() = default ;
    DescribeVodDomainUsageDataRequest& operator=(const DescribeVodDomainUsageDataRequest &) = default ;
    DescribeVodDomainUsageDataRequest& operator=(DescribeVodDomainUsageDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->area_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->field_ == nullptr && this->interval_ == nullptr && this->ownerId_ == nullptr
        && this->startTime_ == nullptr && this->type_ == nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeVodDomainUsageDataRequest& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainUsageDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodDomainUsageDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline DescribeVodDomainUsageDataRequest& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeVodDomainUsageDataRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVodDomainUsageDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodDomainUsageDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVodDomainUsageDataRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The region code. Default value: CN (the Chinese mainland). Valid values:
    // - **CN**: the Chinese mainland.
    // - **OverSeas**: outside the Chinese mainland.
    shared_ptr<string> area_ {};
    // The accelerated domain name. If this parameter is left empty, the merged data of all accelerated domain names is returned by default. Batch queries are supported. Separate multiple domain names with commas (,).
    shared_ptr<string> domainName_ {};
    // The end of the time range to query. The end time must be later than the start time. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The data type. Valid values:
    // - **bps**: bandwidth.
    // - **traf**: traffic.
    // 
    // This parameter is required.
    shared_ptr<string> field_ {};
    // Forces the retrieval of data at the specified time granularity, in seconds. Valid values: **300** (5 minutes), **3600** (1 hour), and **86400** (1 day).
    // - **Interval**=**300**: You can query data for up to the last half year. The maximum time span for a single query is 3 days.
    // - **Interval**=**3600** or **86400**: You can query data for up to the last year.
    // - If **Interval** is not specified: The maximum time span for a single query is 1 month. If the query time range is 1 to 3 days, data is returned at hourly granularity. If the query time range is 4 days or more, data is returned at daily granularity.
    shared_ptr<string> interval_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The beginning of the time range to query. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z format (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The type of usage data to retrieve. Valid values:
    // 
    //  - **static**: static content.
    // - **dynamic**: dynamic content.
    // - **all**: all content.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
