// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeChannelResponseBodyChannel.hpp>
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
    virtual bool empty() const override { this->channel_ != nullptr
        && this->channelExist_ != nullptr && this->requestId_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline const DescribeChannelResponseBodyChannel & channel() const { DARABONBA_PTR_GET_CONST(channel_, DescribeChannelResponseBodyChannel) };
    inline DescribeChannelResponseBodyChannel channel() { DARABONBA_PTR_GET(channel_, DescribeChannelResponseBodyChannel) };
    inline DescribeChannelResponseBody& setChannel(const DescribeChannelResponseBodyChannel & channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };
    inline DescribeChannelResponseBody& setChannel(DescribeChannelResponseBodyChannel && channel) { DARABONBA_PTR_SET_RVALUE(channel_, channel) };


    // channelExist Field Functions 
    bool hasChannelExist() const { return this->channelExist_ != nullptr;};
    void deleteChannelExist() { this->channelExist_ = nullptr;};
    inline bool channelExist() const { DARABONBA_PTR_GET_DEFAULT(channelExist_, false) };
    inline DescribeChannelResponseBody& setChannelExist(bool channelExist) { DARABONBA_PTR_SET_VALUE(channelExist_, channelExist) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChannelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // channel
    std::shared_ptr<DescribeChannelResponseBodyChannel> channel_ = nullptr;
    std::shared_ptr<bool> channelExist_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
