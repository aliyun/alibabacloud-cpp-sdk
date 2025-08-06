// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINMAX95BPSDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINMAX95BPSDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainMax95BpsDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainMax95BpsDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cycle, cycle_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimePoint, timePoint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainMax95BpsDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimePoint, timePoint_);
    };
    DescribeVodDomainMax95BpsDataRequest() = default ;
    DescribeVodDomainMax95BpsDataRequest(const DescribeVodDomainMax95BpsDataRequest &) = default ;
    DescribeVodDomainMax95BpsDataRequest(DescribeVodDomainMax95BpsDataRequest &&) = default ;
    DescribeVodDomainMax95BpsDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainMax95BpsDataRequest() = default ;
    DescribeVodDomainMax95BpsDataRequest& operator=(const DescribeVodDomainMax95BpsDataRequest &) = default ;
    DescribeVodDomainMax95BpsDataRequest& operator=(DescribeVodDomainMax95BpsDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cycle_ != nullptr
        && this->domainName_ != nullptr && this->endTime_ != nullptr && this->ownerId_ != nullptr && this->startTime_ != nullptr && this->timePoint_ != nullptr; };
    // cycle Field Functions 
    bool hasCycle() const { return this->cycle_ != nullptr;};
    void deleteCycle() { this->cycle_ = nullptr;};
    inline string cycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, "") };
    inline DescribeVodDomainMax95BpsDataRequest& setCycle(string cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainMax95BpsDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodDomainMax95BpsDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVodDomainMax95BpsDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodDomainMax95BpsDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timePoint Field Functions 
    bool hasTimePoint() const { return this->timePoint_ != nullptr;};
    void deleteTimePoint() { this->timePoint_ = nullptr;};
    inline string timePoint() const { DARABONBA_PTR_GET_DEFAULT(timePoint_, "") };
    inline DescribeVodDomainMax95BpsDataRequest& setTimePoint(string timePoint) { DARABONBA_PTR_SET_VALUE(timePoint_, timePoint) };


  protected:
    // The cycle to query the 95th percentile bandwidth data. Valid values:
    // 
    // *   day (default)
    // *   month
    std::shared_ptr<string> cycle_ = nullptr;
    // The domain name to be queried for acceleration. If the parameter is empty, the data merged from all accelerated domain names will be returned by default.
    // 
    // > Batch domain name queries are not supported.
    std::shared_ptr<string> domainName_ = nullptr;
    // End time point. The date format follows the ISO8601 representation and uses UTC time, in the format yyyy-MM-dd\\"T\\"HH:mm:ssZ.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Start time point. The date format follows the ISO8601 representation and uses UTC time, in the format yyyy-MM-dd\\"T\\"HH:mm:ssZ.
    std::shared_ptr<string> startTime_ = nullptr;
    // The start time point for getting the data. The date format follows the ISO8601 representation and uses UTC time, in the format yyyy-MM-dd\\"T\\"HH:mm:ssZ.
    std::shared_ptr<string> timePoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
