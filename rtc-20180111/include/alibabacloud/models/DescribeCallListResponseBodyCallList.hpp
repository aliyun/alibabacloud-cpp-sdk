// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECALLLISTRESPONSEBODYCALLLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECALLLISTRESPONSEBODYCALLLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeCallListResponseBodyCallList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCallListResponseBodyCallList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BadExpUserCnt, badExpUserCnt_);
      DARABONBA_PTR_TO_JSON(CallStatus, callStatus_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_TO_JSON(DestroyedTs, destroyedTs_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(UserCnt, userCnt_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCallListResponseBodyCallList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BadExpUserCnt, badExpUserCnt_);
      DARABONBA_PTR_FROM_JSON(CallStatus, callStatus_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(CreatedTs, createdTs_);
      DARABONBA_PTR_FROM_JSON(DestroyedTs, destroyedTs_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(UserCnt, userCnt_);
    };
    DescribeCallListResponseBodyCallList() = default ;
    DescribeCallListResponseBodyCallList(const DescribeCallListResponseBodyCallList &) = default ;
    DescribeCallListResponseBodyCallList(DescribeCallListResponseBodyCallList &&) = default ;
    DescribeCallListResponseBodyCallList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCallListResponseBodyCallList() = default ;
    DescribeCallListResponseBodyCallList& operator=(const DescribeCallListResponseBodyCallList &) = default ;
    DescribeCallListResponseBodyCallList& operator=(DescribeCallListResponseBodyCallList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->badExpUserCnt_ == nullptr && return this->callStatus_ == nullptr && return this->channelId_ == nullptr && return this->createdTs_ == nullptr && return this->destroyedTs_ == nullptr
        && return this->duration_ == nullptr && return this->userCnt_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeCallListResponseBodyCallList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // badExpUserCnt Field Functions 
    bool hasBadExpUserCnt() const { return this->badExpUserCnt_ != nullptr;};
    void deleteBadExpUserCnt() { this->badExpUserCnt_ = nullptr;};
    inline int32_t badExpUserCnt() const { DARABONBA_PTR_GET_DEFAULT(badExpUserCnt_, 0) };
    inline DescribeCallListResponseBodyCallList& setBadExpUserCnt(int32_t badExpUserCnt) { DARABONBA_PTR_SET_VALUE(badExpUserCnt_, badExpUserCnt) };


    // callStatus Field Functions 
    bool hasCallStatus() const { return this->callStatus_ != nullptr;};
    void deleteCallStatus() { this->callStatus_ = nullptr;};
    inline string callStatus() const { DARABONBA_PTR_GET_DEFAULT(callStatus_, "") };
    inline DescribeCallListResponseBodyCallList& setCallStatus(string callStatus) { DARABONBA_PTR_SET_VALUE(callStatus_, callStatus) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeCallListResponseBodyCallList& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // createdTs Field Functions 
    bool hasCreatedTs() const { return this->createdTs_ != nullptr;};
    void deleteCreatedTs() { this->createdTs_ = nullptr;};
    inline int64_t createdTs() const { DARABONBA_PTR_GET_DEFAULT(createdTs_, 0L) };
    inline DescribeCallListResponseBodyCallList& setCreatedTs(int64_t createdTs) { DARABONBA_PTR_SET_VALUE(createdTs_, createdTs) };


    // destroyedTs Field Functions 
    bool hasDestroyedTs() const { return this->destroyedTs_ != nullptr;};
    void deleteDestroyedTs() { this->destroyedTs_ = nullptr;};
    inline int64_t destroyedTs() const { DARABONBA_PTR_GET_DEFAULT(destroyedTs_, 0L) };
    inline DescribeCallListResponseBodyCallList& setDestroyedTs(int64_t destroyedTs) { DARABONBA_PTR_SET_VALUE(destroyedTs_, destroyedTs) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeCallListResponseBodyCallList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // userCnt Field Functions 
    bool hasUserCnt() const { return this->userCnt_ != nullptr;};
    void deleteUserCnt() { this->userCnt_ = nullptr;};
    inline int32_t userCnt() const { DARABONBA_PTR_GET_DEFAULT(userCnt_, 0) };
    inline DescribeCallListResponseBodyCallList& setUserCnt(int32_t userCnt) { DARABONBA_PTR_SET_VALUE(userCnt_, userCnt) };


  protected:
    // App ID。
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<int32_t> badExpUserCnt_ = nullptr;
    std::shared_ptr<string> callStatus_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<int64_t> createdTs_ = nullptr;
    std::shared_ptr<int64_t> destroyedTs_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<int32_t> userCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
