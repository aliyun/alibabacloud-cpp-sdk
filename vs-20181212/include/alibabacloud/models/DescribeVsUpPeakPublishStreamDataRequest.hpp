// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSUPPEAKPUBLISHSTREAMDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSUPPEAKPUBLISHSTREAMDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsUpPeakPublishStreamDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsUpPeakPublishStreamDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainSwitch, domainSwitch_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsUpPeakPublishStreamDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainSwitch, domainSwitch_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeVsUpPeakPublishStreamDataRequest() = default ;
    DescribeVsUpPeakPublishStreamDataRequest(const DescribeVsUpPeakPublishStreamDataRequest &) = default ;
    DescribeVsUpPeakPublishStreamDataRequest(DescribeVsUpPeakPublishStreamDataRequest &&) = default ;
    DescribeVsUpPeakPublishStreamDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsUpPeakPublishStreamDataRequest() = default ;
    DescribeVsUpPeakPublishStreamDataRequest& operator=(const DescribeVsUpPeakPublishStreamDataRequest &) = default ;
    DescribeVsUpPeakPublishStreamDataRequest& operator=(DescribeVsUpPeakPublishStreamDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->domainSwitch_ == nullptr && return this->endTime_ == nullptr && return this->ownerId_ == nullptr && return this->startTime_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVsUpPeakPublishStreamDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainSwitch Field Functions 
    bool hasDomainSwitch() const { return this->domainSwitch_ != nullptr;};
    void deleteDomainSwitch() { this->domainSwitch_ = nullptr;};
    inline string domainSwitch() const { DARABONBA_PTR_GET_DEFAULT(domainSwitch_, "") };
    inline DescribeVsUpPeakPublishStreamDataRequest& setDomainSwitch(string domainSwitch) { DARABONBA_PTR_SET_VALUE(domainSwitch_, domainSwitch) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVsUpPeakPublishStreamDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVsUpPeakPublishStreamDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVsUpPeakPublishStreamDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> domainSwitch_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
