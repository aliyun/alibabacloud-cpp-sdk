// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANNELOVERALLDATARESPONSEBODYCALLINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANNELOVERALLDATARESPONSEBODYCALLINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeChannelOverallDataResponseBodyCallInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChannelOverallDataResponseBodyCallInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CallStatus, callStatus_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChannelOverallDataResponseBodyCallInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CallStatus, callStatus_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
    };
    DescribeChannelOverallDataResponseBodyCallInfo() = default ;
    DescribeChannelOverallDataResponseBodyCallInfo(const DescribeChannelOverallDataResponseBodyCallInfo &) = default ;
    DescribeChannelOverallDataResponseBodyCallInfo(DescribeChannelOverallDataResponseBodyCallInfo &&) = default ;
    DescribeChannelOverallDataResponseBodyCallInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChannelOverallDataResponseBodyCallInfo() = default ;
    DescribeChannelOverallDataResponseBodyCallInfo& operator=(const DescribeChannelOverallDataResponseBodyCallInfo &) = default ;
    DescribeChannelOverallDataResponseBodyCallInfo& operator=(DescribeChannelOverallDataResponseBodyCallInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->callStatus_ == nullptr && return this->channelId_ == nullptr && return this->createdTs_ == nullptr && return this->destroyedTs_ == nullptr && return this->duration_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeChannelOverallDataResponseBodyCallInfo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callStatus Field Functions 
    bool hasCallStatus() const { return this->callStatus_ != nullptr;};
    void deleteCallStatus() { this->callStatus_ = nullptr;};
    inline string callStatus() const { DARABONBA_PTR_GET_DEFAULT(callStatus_, "") };
    inline DescribeChannelOverallDataResponseBodyCallInfo& setCallStatus(string callStatus) { DARABONBA_PTR_SET_VALUE(callStatus_, callStatus) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeChannelOverallDataResponseBodyCallInfo& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // createdTs Field Functions 
    bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
    void deleteCreatedTs() { this->createdTs_ = nullptr;};
    inline int64_t createdTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
    inline DescribeChannelOverallDataResponseBodyCallInfo& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


    // destroyedTs Field Functions 
    bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
    void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
    inline int64_t destroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
    inline DescribeChannelOverallDataResponseBodyCallInfo& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeChannelOverallDataResponseBodyCallInfo& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> callStatus_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<int64_t> createdTs_ = nullptr;
    std::shared_ptr<int64_t> destroyedTs_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
