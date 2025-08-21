// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCTOPURLVISITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCTOPURLVISITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainSrcTopUrlVisitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSrcTopUrlVisitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSrcTopUrlVisitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainSrcTopUrlVisitRequest() = default ;
    DescribeDomainSrcTopUrlVisitRequest(const DescribeDomainSrcTopUrlVisitRequest &) = default ;
    DescribeDomainSrcTopUrlVisitRequest(DescribeDomainSrcTopUrlVisitRequest &&) = default ;
    DescribeDomainSrcTopUrlVisitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSrcTopUrlVisitRequest() = default ;
    DescribeDomainSrcTopUrlVisitRequest& operator=(const DescribeDomainSrcTopUrlVisitRequest &) = default ;
    DescribeDomainSrcTopUrlVisitRequest& operator=(DescribeDomainSrcTopUrlVisitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->endTime_ != nullptr && this->sortBy_ != nullptr && this->startTime_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainSrcTopUrlVisitRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainSrcTopUrlVisitRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline DescribeDomainSrcTopUrlVisitRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainSrcTopUrlVisitRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The accelerated domain name. Separate multiple accelerated domain names with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > The end time must be later than the start time. The duration between the end time and the start time cannot exceed seven days.
    std::shared_ptr<string> endTime_ = nullptr;
    // The method that is used to sort the returned URLs. Default value: **pv**. Valid values:
    // 
    // *   **traf**: by network traffic
    // *   **pv**: by the number of visits
    std::shared_ptr<string> sortBy_ = nullptr;
    // The beginning of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > If you leave this parameter empty, data within the previous day is queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
