// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPPEAKPUBLISHSTREAMDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPPEAKPUBLISHSTREAMDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeUpPeakPublishStreamDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpPeakPublishStreamDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainSwitch, domainSwitch_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpPeakPublishStreamDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainSwitch, domainSwitch_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeUpPeakPublishStreamDataRequest() = default ;
    DescribeUpPeakPublishStreamDataRequest(const DescribeUpPeakPublishStreamDataRequest &) = default ;
    DescribeUpPeakPublishStreamDataRequest(DescribeUpPeakPublishStreamDataRequest &&) = default ;
    DescribeUpPeakPublishStreamDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpPeakPublishStreamDataRequest() = default ;
    DescribeUpPeakPublishStreamDataRequest& operator=(const DescribeUpPeakPublishStreamDataRequest &) = default ;
    DescribeUpPeakPublishStreamDataRequest& operator=(DescribeUpPeakPublishStreamDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->domainSwitch_ == nullptr && this->endTime_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeUpPeakPublishStreamDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainSwitch Field Functions 
    bool hasDomainSwitch() const { return this->domainSwitch_ != nullptr;};
    void deleteDomainSwitch() { this->domainSwitch_ = nullptr;};
    inline string getDomainSwitch() const { DARABONBA_PTR_GET_DEFAULT(domainSwitch_, "") };
    inline DescribeUpPeakPublishStreamDataRequest& setDomainSwitch(string domainSwitch) { DARABONBA_PTR_SET_VALUE(domainSwitch_, domainSwitch) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeUpPeakPublishStreamDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeUpPeakPublishStreamDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeUpPeakPublishStreamDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeUpPeakPublishStreamDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The domain name statistics switch. Valid values:
    // 
    // - on: enables domain name-level statistics.
    // - off: user-level data. User-level data is collected by default.
    shared_ptr<string> domainSwitch_ {};
    // The end time of stream pulling in UTC. The interval between StartTime and EndTime must be within 30 days, and EndTime must be later than the current time.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The start time of stream pulling in UTC. The interval between StartTime and EndTime must be within 30 days.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
