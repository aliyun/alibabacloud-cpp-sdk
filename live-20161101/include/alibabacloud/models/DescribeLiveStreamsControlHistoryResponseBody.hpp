// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSCONTROLHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSCONTROLHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsControlHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsControlHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ControlInfo, controlInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsControlHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlInfo, controlInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveStreamsControlHistoryResponseBody() = default ;
    DescribeLiveStreamsControlHistoryResponseBody(const DescribeLiveStreamsControlHistoryResponseBody &) = default ;
    DescribeLiveStreamsControlHistoryResponseBody(DescribeLiveStreamsControlHistoryResponseBody &&) = default ;
    DescribeLiveStreamsControlHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsControlHistoryResponseBody() = default ;
    DescribeLiveStreamsControlHistoryResponseBody& operator=(const DescribeLiveStreamsControlHistoryResponseBody &) = default ;
    DescribeLiveStreamsControlHistoryResponseBody& operator=(DescribeLiveStreamsControlHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ControlInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ControlInfo& obj) { 
        DARABONBA_PTR_TO_JSON(LiveStreamControlInfo, liveStreamControlInfo_);
      };
      friend void from_json(const Darabonba::Json& j, ControlInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveStreamControlInfo, liveStreamControlInfo_);
      };
      ControlInfo() = default ;
      ControlInfo(const ControlInfo &) = default ;
      ControlInfo(ControlInfo &&) = default ;
      ControlInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ControlInfo() = default ;
      ControlInfo& operator=(const ControlInfo &) = default ;
      ControlInfo& operator=(ControlInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveStreamControlInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveStreamControlInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(ClientIP, clientIP_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, LiveStreamControlInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(ClientIP, clientIP_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        LiveStreamControlInfo() = default ;
        LiveStreamControlInfo(const LiveStreamControlInfo &) = default ;
        LiveStreamControlInfo(LiveStreamControlInfo &&) = default ;
        LiveStreamControlInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveStreamControlInfo() = default ;
        LiveStreamControlInfo& operator=(const LiveStreamControlInfo &) = default ;
        LiveStreamControlInfo& operator=(LiveStreamControlInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->clientIP_ == nullptr && this->streamName_ == nullptr && this->timeStamp_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline LiveStreamControlInfo& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // clientIP Field Functions 
        bool hasClientIP() const { return this->clientIP_ != nullptr;};
        void deleteClientIP() { this->clientIP_ = nullptr;};
        inline string getClientIP() const { DARABONBA_PTR_GET_DEFAULT(clientIP_, "") };
        inline LiveStreamControlInfo& setClientIP(string clientIP) { DARABONBA_PTR_SET_VALUE(clientIP_, clientIP) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LiveStreamControlInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline LiveStreamControlInfo& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The name of the operation performed.
        shared_ptr<string> action_ {};
        // The IP address that is used by the client for live streaming.
        shared_ptr<string> clientIP_ {};
        // The name of the live stream.
        shared_ptr<string> streamName_ {};
        // The time when the operation was performed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->liveStreamControlInfo_ == nullptr; };
      // liveStreamControlInfo Field Functions 
      bool hasLiveStreamControlInfo() const { return this->liveStreamControlInfo_ != nullptr;};
      void deleteLiveStreamControlInfo() { this->liveStreamControlInfo_ = nullptr;};
      inline const vector<ControlInfo::LiveStreamControlInfo> & getLiveStreamControlInfo() const { DARABONBA_PTR_GET_CONST(liveStreamControlInfo_, vector<ControlInfo::LiveStreamControlInfo>) };
      inline vector<ControlInfo::LiveStreamControlInfo> getLiveStreamControlInfo() { DARABONBA_PTR_GET(liveStreamControlInfo_, vector<ControlInfo::LiveStreamControlInfo>) };
      inline ControlInfo& setLiveStreamControlInfo(const vector<ControlInfo::LiveStreamControlInfo> & liveStreamControlInfo) { DARABONBA_PTR_SET_VALUE(liveStreamControlInfo_, liveStreamControlInfo) };
      inline ControlInfo& setLiveStreamControlInfo(vector<ControlInfo::LiveStreamControlInfo> && liveStreamControlInfo) { DARABONBA_PTR_SET_RVALUE(liveStreamControlInfo_, liveStreamControlInfo) };


    protected:
      shared_ptr<vector<ControlInfo::LiveStreamControlInfo>> liveStreamControlInfo_ {};
    };

    virtual bool empty() const override { return this->controlInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // controlInfo Field Functions 
    bool hasControlInfo() const { return this->controlInfo_ != nullptr;};
    void deleteControlInfo() { this->controlInfo_ = nullptr;};
    inline const DescribeLiveStreamsControlHistoryResponseBody::ControlInfo & getControlInfo() const { DARABONBA_PTR_GET_CONST(controlInfo_, DescribeLiveStreamsControlHistoryResponseBody::ControlInfo) };
    inline DescribeLiveStreamsControlHistoryResponseBody::ControlInfo getControlInfo() { DARABONBA_PTR_GET(controlInfo_, DescribeLiveStreamsControlHistoryResponseBody::ControlInfo) };
    inline DescribeLiveStreamsControlHistoryResponseBody& setControlInfo(const DescribeLiveStreamsControlHistoryResponseBody::ControlInfo & controlInfo) { DARABONBA_PTR_SET_VALUE(controlInfo_, controlInfo) };
    inline DescribeLiveStreamsControlHistoryResponseBody& setControlInfo(DescribeLiveStreamsControlHistoryResponseBody::ControlInfo && controlInfo) { DARABONBA_PTR_SET_RVALUE(controlInfo_, controlInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamsControlHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The operation records.
    shared_ptr<DescribeLiveStreamsControlHistoryResponseBody::ControlInfo> controlInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
