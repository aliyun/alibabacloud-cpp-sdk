// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSCONTROLHISTORYRESPONSEBODYCONTROLINFOLIVESTREAMCONTROLINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSCONTROLHISTORYRESPONSEBODYCONTROLINFOLIVESTREAMCONTROLINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(ClientIP, clientIP_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(ClientIP, clientIP_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo() = default ;
    DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo(const DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo &) = default ;
    DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo(DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo &&) = default ;
    DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo() = default ;
    DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo& operator=(const DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo &) = default ;
    DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo& operator=(DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->clientIP_ != nullptr && this->streamName_ != nullptr && this->timeStamp_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // clientIP Field Functions 
    bool hasClientIP() const { return this->clientIP_ != nullptr;};
    void deleteClientIP() { this->clientIP_ = nullptr;};
    inline string clientIP() const { DARABONBA_PTR_GET_DEFAULT(clientIP_, "") };
    inline DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo& setClientIP(string clientIP) { DARABONBA_PTR_SET_VALUE(clientIP_, clientIP) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveStreamsControlHistoryResponseBodyControlInfoLiveStreamControlInfo& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The name of the operation performed.
    std::shared_ptr<string> action_ = nullptr;
    // The IP address that is used by the client for live streaming.
    std::shared_ptr<string> clientIP_ = nullptr;
    // The name of the live stream.
    std::shared_ptr<string> streamName_ = nullptr;
    // The time when the operation was performed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
