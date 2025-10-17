// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELRESPONSEBODYCHANNEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELRESPONSEBODYCHANNEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelResponseBodyChannel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelResponseBodyChannel& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelResponseBodyChannel& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeChannelResponseBodyChannel() = default ;
    DescribeChannelResponseBodyChannel(const DescribeChannelResponseBodyChannel &) = default ;
    DescribeChannelResponseBodyChannel(DescribeChannelResponseBodyChannel &&) = default ;
    DescribeChannelResponseBodyChannel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelResponseBodyChannel() = default ;
    DescribeChannelResponseBodyChannel& operator=(const DescribeChannelResponseBodyChannel &) = default ;
    DescribeChannelResponseBodyChannel& operator=(DescribeChannelResponseBodyChannel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr
        && return this->startTime_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeChannelResponseBodyChannel& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeChannelResponseBodyChannel& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
