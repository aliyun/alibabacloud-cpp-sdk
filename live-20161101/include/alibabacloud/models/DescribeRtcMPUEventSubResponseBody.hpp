// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCMPUEVENTSUBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCMPUEVENTSUBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRtcMPUEventSubResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcMPUEventSubResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubInfo, subInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcMPUEventSubResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubInfo, subInfo_);
    };
    DescribeRtcMPUEventSubResponseBody() = default ;
    DescribeRtcMPUEventSubResponseBody(const DescribeRtcMPUEventSubResponseBody &) = default ;
    DescribeRtcMPUEventSubResponseBody(DescribeRtcMPUEventSubResponseBody &&) = default ;
    DescribeRtcMPUEventSubResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcMPUEventSubResponseBody() = default ;
    DescribeRtcMPUEventSubResponseBody& operator=(const DescribeRtcMPUEventSubResponseBody &) = default ;
    DescribeRtcMPUEventSubResponseBody& operator=(DescribeRtcMPUEventSubResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
        DARABONBA_PTR_TO_JSON(ChannelIds, channelIds_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(SubId, subId_);
      };
      friend void from_json(const Darabonba::Json& j, SubInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
        DARABONBA_PTR_FROM_JSON(ChannelIds, channelIds_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(SubId, subId_);
      };
      SubInfo() = default ;
      SubInfo(const SubInfo &) = default ;
      SubInfo(SubInfo &&) = default ;
      SubInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubInfo() = default ;
      SubInfo& operator=(const SubInfo &) = default ;
      SubInfo& operator=(SubInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->callbackUrl_ == nullptr && this->channelIds_ == nullptr && this->createTime_ == nullptr && this->subId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline SubInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // callbackUrl Field Functions 
      bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
      void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
      inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
      inline SubInfo& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


      // channelIds Field Functions 
      bool hasChannelIds() const { return this->channelIds_ != nullptr;};
      void deleteChannelIds() { this->channelIds_ = nullptr;};
      inline string getChannelIds() const { DARABONBA_PTR_GET_DEFAULT(channelIds_, "") };
      inline SubInfo& setChannelIds(string channelIds) { DARABONBA_PTR_SET_VALUE(channelIds_, channelIds) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SubInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // subId Field Functions 
      bool hasSubId() const { return this->subId_ != nullptr;};
      void deleteSubId() { this->subId_ = nullptr;};
      inline string getSubId() const { DARABONBA_PTR_GET_DEFAULT(subId_, "") };
      inline SubInfo& setSubId(string subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


    protected:
      // The application ID. You can specify only one application ID.
      shared_ptr<string> appId_ {};
      // The callback URL.
      shared_ptr<string> callbackUrl_ {};
      // The ID of the channel to which mixed-stream relay event callbacks are sent. Multiple channel IDs are separated by commas (,). If this parameter is not returned, mixed-stream relay event callbacks are sent to all channels.
      shared_ptr<string> channelIds_ {};
      // The time when the event callback was fired. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The ID of the subscription.
      shared_ptr<string> subId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->subInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcMPUEventSubResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subInfo Field Functions 
    bool hasSubInfo() const { return this->subInfo_ != nullptr;};
    void deleteSubInfo() { this->subInfo_ = nullptr;};
    inline const DescribeRtcMPUEventSubResponseBody::SubInfo & getSubInfo() const { DARABONBA_PTR_GET_CONST(subInfo_, DescribeRtcMPUEventSubResponseBody::SubInfo) };
    inline DescribeRtcMPUEventSubResponseBody::SubInfo getSubInfo() { DARABONBA_PTR_GET(subInfo_, DescribeRtcMPUEventSubResponseBody::SubInfo) };
    inline DescribeRtcMPUEventSubResponseBody& setSubInfo(const DescribeRtcMPUEventSubResponseBody::SubInfo & subInfo) { DARABONBA_PTR_SET_VALUE(subInfo_, subInfo) };
    inline DescribeRtcMPUEventSubResponseBody& setSubInfo(DescribeRtcMPUEventSubResponseBody::SubInfo && subInfo) { DARABONBA_PTR_SET_RVALUE(subInfo_, subInfo) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the subscription.
    shared_ptr<DescribeRtcMPUEventSubResponseBody::SubInfo> subInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
