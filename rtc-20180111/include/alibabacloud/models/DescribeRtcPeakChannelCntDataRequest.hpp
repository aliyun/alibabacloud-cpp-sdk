// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCPEAKCHANNELCNTDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCPEAKCHANNELCNTDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcPeakChannelCntDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcPeakChannelCntDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ServiceArea, serviceArea_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcPeakChannelCntDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ServiceArea, serviceArea_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeRtcPeakChannelCntDataRequest() = default ;
    DescribeRtcPeakChannelCntDataRequest(const DescribeRtcPeakChannelCntDataRequest &) = default ;
    DescribeRtcPeakChannelCntDataRequest(DescribeRtcPeakChannelCntDataRequest &&) = default ;
    DescribeRtcPeakChannelCntDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcPeakChannelCntDataRequest() = default ;
    DescribeRtcPeakChannelCntDataRequest& operator=(const DescribeRtcPeakChannelCntDataRequest &) = default ;
    DescribeRtcPeakChannelCntDataRequest& operator=(DescribeRtcPeakChannelCntDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->endTime_ == nullptr && return this->interval_ == nullptr && return this->ownerId_ == nullptr && return this->serviceArea_ == nullptr && return this->startTime_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeRtcPeakChannelCntDataRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeRtcPeakChannelCntDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeRtcPeakChannelCntDataRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeRtcPeakChannelCntDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // serviceArea Field Functions 
    bool hasServiceArea() const { return this->serviceArea_ != nullptr;};
    void deleteServiceArea() { this->serviceArea_ = nullptr;};
    inline string serviceArea() const { DARABONBA_PTR_GET_DEFAULT(serviceArea_, "") };
    inline DescribeRtcPeakChannelCntDataRequest& setServiceArea(string serviceArea) { DARABONBA_PTR_SET_VALUE(serviceArea_, serviceArea) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRtcPeakChannelCntDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> interval_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> serviceArea_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
