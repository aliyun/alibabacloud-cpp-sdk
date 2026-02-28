// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(ChannelExist, channelExist_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(ChannelExist, channelExist_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeChannelResponseBody() = default ;
    DescribeChannelResponseBody(const DescribeChannelResponseBody &) = default ;
    DescribeChannelResponseBody(DescribeChannelResponseBody &&) = default ;
    DescribeChannelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelResponseBody() = default ;
    DescribeChannelResponseBody& operator=(const DescribeChannelResponseBody &) = default ;
    DescribeChannelResponseBody& operator=(DescribeChannelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Channel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Channel& obj) { 
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Channel& obj) { 
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      Channel() = default ;
      Channel(const Channel &) = default ;
      Channel(Channel &&) = default ;
      Channel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Channel() = default ;
      Channel& operator=(const Channel &) = default ;
      Channel& operator=(Channel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channelId_ == nullptr
        && this->startTime_ == nullptr; };
      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline Channel& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Channel& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<string> channelId_ {};
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->channel_ == nullptr
        && this->channelExist_ == nullptr && this->requestId_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline const DescribeChannelResponseBody::Channel & getChannel() const { DARABONBA_PTR_GET_CONST(channel_, DescribeChannelResponseBody::Channel) };
    inline DescribeChannelResponseBody::Channel getChannel() { DARABONBA_PTR_GET(channel_, DescribeChannelResponseBody::Channel) };
    inline DescribeChannelResponseBody& setChannel(const DescribeChannelResponseBody::Channel & channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };
    inline DescribeChannelResponseBody& setChannel(DescribeChannelResponseBody::Channel && channel) { DARABONBA_PTR_SET_RVALUE(channel_, channel) };


    // channelExist Field Functions 
    bool hasChannelExist() const { return this->channelExist_ != nullptr;};
    void deleteChannelExist() { this->channelExist_ = nullptr;};
    inline bool getChannelExist() const { DARABONBA_PTR_GET_DEFAULT(channelExist_, false) };
    inline DescribeChannelResponseBody& setChannelExist(bool channelExist) { DARABONBA_PTR_SET_VALUE(channelExist_, channelExist) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // channel
    shared_ptr<DescribeChannelResponseBody::Channel> channel_ {};
    shared_ptr<bool> channelExist_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
