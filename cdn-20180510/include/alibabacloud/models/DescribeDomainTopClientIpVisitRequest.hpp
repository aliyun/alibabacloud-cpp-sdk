// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPCLIENTIPVISITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPCLIENTIPVISITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainTopClientIpVisitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopClientIpVisitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopClientIpVisitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(LocationNameEn, locationNameEn_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainTopClientIpVisitRequest() = default ;
    DescribeDomainTopClientIpVisitRequest(const DescribeDomainTopClientIpVisitRequest &) = default ;
    DescribeDomainTopClientIpVisitRequest(DescribeDomainTopClientIpVisitRequest &&) = default ;
    DescribeDomainTopClientIpVisitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopClientIpVisitRequest() = default ;
    DescribeDomainTopClientIpVisitRequest& operator=(const DescribeDomainTopClientIpVisitRequest &) = default ;
    DescribeDomainTopClientIpVisitRequest& operator=(DescribeDomainTopClientIpVisitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->endTime_ != nullptr && this->limit_ != nullptr && this->locationNameEn_ != nullptr && this->sortBy_ != nullptr && this->startTime_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainTopClientIpVisitRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainTopClientIpVisitRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline DescribeDomainTopClientIpVisitRequest& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // locationNameEn Field Functions 
    bool hasLocationNameEn() const { return this->locationNameEn_ != nullptr;};
    void deleteLocationNameEn() { this->locationNameEn_ = nullptr;};
    inline string locationNameEn() const { DARABONBA_PTR_GET_DEFAULT(locationNameEn_, "") };
    inline DescribeDomainTopClientIpVisitRequest& setLocationNameEn(string locationNameEn) { DARABONBA_PTR_SET_VALUE(locationNameEn_, locationNameEn) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline DescribeDomainTopClientIpVisitRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainTopClientIpVisitRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The accelerated domain name. Separate multiple accelerated domain names with commas (,).
    // 
    // By default, this operation queries client IP addresses for all accelerated domain names.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // The end time must be later than the start time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The maximum number of entries to return. Maximum value: 100.
    // 
    // Default value: 20. The default value specifies that the top 20 IP addresses are returned.
    std::shared_ptr<string> limit_ = nullptr;
    // The name of the region. Separate multiple region names with commas (,).
    // 
    // You can call the [DescribeCdnRegionAndIsp](https://help.aliyun.com/document_detail/91077.html) operation to query regions.
    std::shared_ptr<string> locationNameEn_ = nullptr;
    // The criterion by which you want to sort client IP addresses. Valid values:
    // 
    // *   **traf**: by network traffic. This is the default value.
    // *   **acc**: by the number of requests.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The beginning of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
