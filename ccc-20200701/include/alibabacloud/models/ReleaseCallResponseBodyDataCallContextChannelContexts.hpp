// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASECALLRESPONSEBODYDATACALLCONTEXTCHANNELCONTEXTS_HPP_
#define ALIBABACLOUD_MODELS_RELEASECALLRESPONSEBODYDATACALLCONTEXTCHANNELCONTEXTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ReleaseCallResponseBodyDataCallContextChannelContexts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseCallResponseBodyDataCallContextChannelContexts& obj) { 
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ChannelState, channelState_);
      DARABONBA_PTR_TO_JSON(ChannelVariables, channelVariables_);
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Originator, originator_);
      DARABONBA_PTR_TO_JSON(ReleaseInitiator, releaseInitiator_);
      DARABONBA_PTR_TO_JSON(ReleaseReason, releaseReason_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(UserExtension, userExtension_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseCallResponseBodyDataCallContextChannelContexts& obj) { 
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ChannelState, channelState_);
      DARABONBA_PTR_FROM_JSON(ChannelVariables, channelVariables_);
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Originator, originator_);
      DARABONBA_PTR_FROM_JSON(ReleaseInitiator, releaseInitiator_);
      DARABONBA_PTR_FROM_JSON(ReleaseReason, releaseReason_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(UserExtension, userExtension_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ReleaseCallResponseBodyDataCallContextChannelContexts() = default ;
    ReleaseCallResponseBodyDataCallContextChannelContexts(const ReleaseCallResponseBodyDataCallContextChannelContexts &) = default ;
    ReleaseCallResponseBodyDataCallContextChannelContexts(ReleaseCallResponseBodyDataCallContextChannelContexts &&) = default ;
    ReleaseCallResponseBodyDataCallContextChannelContexts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseCallResponseBodyDataCallContextChannelContexts() = default ;
    ReleaseCallResponseBodyDataCallContextChannelContexts& operator=(const ReleaseCallResponseBodyDataCallContextChannelContexts &) = default ;
    ReleaseCallResponseBodyDataCallContextChannelContexts& operator=(ReleaseCallResponseBodyDataCallContextChannelContexts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callType_ != nullptr
        && this->channelId_ != nullptr && this->channelState_ != nullptr && this->channelVariables_ != nullptr && this->destination_ != nullptr && this->jobId_ != nullptr
        && this->originator_ != nullptr && this->releaseInitiator_ != nullptr && this->releaseReason_ != nullptr && this->timestamp_ != nullptr && this->userExtension_ != nullptr
        && this->userId_ != nullptr; };
    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline string callType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
    inline ReleaseCallResponseBodyDataCallContextChannelContexts& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline ReleaseCallResponseBodyDataCallContextChannelContexts& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // channelState Field Functions 
    bool hasChannelState() const { return this->channelState_ != nullptr;};
    void deleteChannelState() { this->channelState_ = nullptr;};
    inline string channelState() const { DARABONBA_PTR_GET_DEFAULT(channelState_, "") };
    inline ReleaseCallResponseBodyDataCallContextChannelContexts& setChannelState(string channelState) { DARABONBA_PTR_SET_VALUE(channelState_, channelState) };


    // channelVariables Field Functions 
    bool hasChannelVariables() const { return this->channelVariables_ != nullptr;};
    void deleteChannelVariables() { this->channelVariables_ = nullptr;};
    inline string channelVariables() const { DARABONBA_PTR_GET_DEFAULT(channelVariables_, "") };
    inline ReleaseCallResponseBodyDataCallContextChannelContexts& setChannelVariables(string channelVariables) { DARABONBA_PTR_SET_VALUE(channelVariables_, channelVariables) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string destination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline ReleaseCallResponseBodyDataCallContextChannelContexts& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ReleaseCallResponseBodyDataCallContextChannelContexts& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // originator Field Functions 
    bool hasOriginator() const { return this->originator_ != nullptr;};
    void deleteOriginator() { this->originator_ = nullptr;};
    inline string originator() const { DARABONBA_PTR_GET_DEFAULT(originator_, "") };
    inline ReleaseCallResponseBodyDataCallContextChannelContexts& setOriginator(string originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };


    // releaseInitiator Field Functions 
    bool hasReleaseInitiator() const { return this->releaseInitiator_ != nullptr;};
    void deleteReleaseInitiator() { this->releaseInitiator_ = nullptr;};
    inline string releaseInitiator() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiator_, "") };
    inline ReleaseCallResponseBodyDataCallContextChannelContexts& setReleaseInitiator(string releaseInitiator) { DARABONBA_PTR_SET_VALUE(releaseInitiator_, releaseInitiator) };


    // releaseReason Field Functions 
    bool hasReleaseReason() const { return this->releaseReason_ != nullptr;};
    void deleteReleaseReason() { this->releaseReason_ = nullptr;};
    inline string releaseReason() const { DARABONBA_PTR_GET_DEFAULT(releaseReason_, "") };
    inline ReleaseCallResponseBodyDataCallContextChannelContexts& setReleaseReason(string releaseReason) { DARABONBA_PTR_SET_VALUE(releaseReason_, releaseReason) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline ReleaseCallResponseBodyDataCallContextChannelContexts& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // userExtension Field Functions 
    bool hasUserExtension() const { return this->userExtension_ != nullptr;};
    void deleteUserExtension() { this->userExtension_ = nullptr;};
    inline string userExtension() const { DARABONBA_PTR_GET_DEFAULT(userExtension_, "") };
    inline ReleaseCallResponseBodyDataCallContextChannelContexts& setUserExtension(string userExtension) { DARABONBA_PTR_SET_VALUE(userExtension_, userExtension) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ReleaseCallResponseBodyDataCallContextChannelContexts& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> callType_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> channelState_ = nullptr;
    std::shared_ptr<string> channelVariables_ = nullptr;
    std::shared_ptr<string> destination_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> originator_ = nullptr;
    std::shared_ptr<string> releaseInitiator_ = nullptr;
    std::shared_ptr<string> releaseReason_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<string> userExtension_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
