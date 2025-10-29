// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCMPUEVENTSUBRESPONSEBODYSUBINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCMPUEVENTSUBRESPONSEBODYSUBINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRtcMPUEventSubResponseBodySubInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcMPUEventSubResponseBodySubInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(ChannelIds, channelIds_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(SubId, subId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcMPUEventSubResponseBodySubInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(ChannelIds, channelIds_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(SubId, subId_);
    };
    DescribeRtcMPUEventSubResponseBodySubInfo() = default ;
    DescribeRtcMPUEventSubResponseBodySubInfo(const DescribeRtcMPUEventSubResponseBodySubInfo &) = default ;
    DescribeRtcMPUEventSubResponseBodySubInfo(DescribeRtcMPUEventSubResponseBodySubInfo &&) = default ;
    DescribeRtcMPUEventSubResponseBodySubInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcMPUEventSubResponseBodySubInfo() = default ;
    DescribeRtcMPUEventSubResponseBodySubInfo& operator=(const DescribeRtcMPUEventSubResponseBodySubInfo &) = default ;
    DescribeRtcMPUEventSubResponseBodySubInfo& operator=(DescribeRtcMPUEventSubResponseBodySubInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->callbackUrl_ == nullptr && return this->channelIds_ == nullptr && return this->createTime_ == nullptr && return this->subId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeRtcMPUEventSubResponseBodySubInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline DescribeRtcMPUEventSubResponseBodySubInfo& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // channelIds Field Functions 
    bool hasChannelIds() const { return this->channelIds_ != nullptr;};
    void deleteChannelIds() { this->channelIds_ = nullptr;};
    inline string channelIds() const { DARABONBA_PTR_GET_DEFAULT(channelIds_, "") };
    inline DescribeRtcMPUEventSubResponseBodySubInfo& setChannelIds(string channelIds) { DARABONBA_PTR_SET_VALUE(channelIds_, channelIds) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeRtcMPUEventSubResponseBodySubInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // subId Field Functions 
    bool hasSubId() const { return this->subId_ != nullptr;};
    void deleteSubId() { this->subId_ = nullptr;};
    inline string subId() const { DARABONBA_PTR_GET_DEFAULT(subId_, "") };
    inline DescribeRtcMPUEventSubResponseBodySubInfo& setSubId(string subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


  protected:
    // The application ID. You can specify only one application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The callback URL.
    std::shared_ptr<string> callbackUrl_ = nullptr;
    // The ID of the channel to which mixed-stream relay event callbacks are sent. Multiple channel IDs are separated by commas (,). If this parameter is not returned, mixed-stream relay event callbacks are sent to all channels.
    std::shared_ptr<string> channelIds_ = nullptr;
    // The time when the event callback was fired. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the subscription.
    std::shared_ptr<string> subId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
