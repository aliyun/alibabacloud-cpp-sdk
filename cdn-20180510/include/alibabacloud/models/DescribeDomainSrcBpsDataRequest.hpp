// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCBPSDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCBPSDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainSrcBpsDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSrcBpsDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSrcBpsDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainSrcBpsDataRequest() = default ;
    DescribeDomainSrcBpsDataRequest(const DescribeDomainSrcBpsDataRequest &) = default ;
    DescribeDomainSrcBpsDataRequest(DescribeDomainSrcBpsDataRequest &&) = default ;
    DescribeDomainSrcBpsDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSrcBpsDataRequest() = default ;
    DescribeDomainSrcBpsDataRequest& operator=(const DescribeDomainSrcBpsDataRequest &) = default ;
    DescribeDomainSrcBpsDataRequest& operator=(DescribeDomainSrcBpsDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->endTime_ != nullptr && this->interval_ != nullptr && this->startTime_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainSrcBpsDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainSrcBpsDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeDomainSrcBpsDataRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainSrcBpsDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The accelerated domain name. You can specify up to 500 domain names in each call. Separate multiple domain names with commas (,).
    // 
    // By default, this operation queries the geographic distribution of users for all accelerated domain names.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > The end time must be later than the start time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The time interval between the data entries. Unit: seconds.
    // 
    // The time granularity varies with the maximum time range per query. Valid values: 300 (5 minutes), 3600 (1 hour), and 86400 (1 day). For more information, see **Description**.
    std::shared_ptr<string> interval_ = nullptr;
    // The beginning of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
