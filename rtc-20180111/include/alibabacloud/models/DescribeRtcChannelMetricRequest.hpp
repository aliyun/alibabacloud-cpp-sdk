// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCCHANNELMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcChannelMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcChannelMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(TimePoint, timePoint_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcChannelMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(TimePoint, timePoint_);
    };
    DescribeRtcChannelMetricRequest() = default ;
    DescribeRtcChannelMetricRequest(const DescribeRtcChannelMetricRequest &) = default ;
    DescribeRtcChannelMetricRequest(DescribeRtcChannelMetricRequest &&) = default ;
    DescribeRtcChannelMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcChannelMetricRequest() = default ;
    DescribeRtcChannelMetricRequest& operator=(const DescribeRtcChannelMetricRequest &) = default ;
    DescribeRtcChannelMetricRequest& operator=(DescribeRtcChannelMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->channelId_ != nullptr && this->ownerId_ != nullptr && this->timePoint_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeRtcChannelMetricRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeRtcChannelMetricRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeRtcChannelMetricRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // timePoint Field Functions 
    bool hasTimePoint() const { return this->timePoint_ != nullptr;};
    void deleteTimePoint() { this->timePoint_ = nullptr;};
    inline string timePoint() const { DARABONBA_PTR_GET_DEFAULT(timePoint_, "") };
    inline DescribeRtcChannelMetricRequest& setTimePoint(string timePoint) { DARABONBA_PTR_SET_VALUE(timePoint_, timePoint) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> timePoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
