// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAKECALLRESPONSEBODYDATACALLCONTEXTCHANNELCONTEXTS_HPP_
#define ALIBABACLOUD_MODELS_MAKECALLRESPONSEBODYDATACALLCONTEXTCHANNELCONTEXTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class MakeCallResponseBodyDataCallContextChannelContexts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MakeCallResponseBodyDataCallContextChannelContexts& obj) { 
      DARABONBA_PTR_TO_JSON(CallType, callType_);
      DARABONBA_PTR_TO_JSON(ChannelFlags, channelFlags_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ChannelState, channelState_);
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(Originator, originator_);
      DARABONBA_PTR_TO_JSON(ReleaseInitiator, releaseInitiator_);
      DARABONBA_PTR_TO_JSON(ReleaseReason, releaseReason_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(UserExtension, userExtension_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, MakeCallResponseBodyDataCallContextChannelContexts& obj) { 
      DARABONBA_PTR_FROM_JSON(CallType, callType_);
      DARABONBA_PTR_FROM_JSON(ChannelFlags, channelFlags_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ChannelState, channelState_);
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(Originator, originator_);
      DARABONBA_PTR_FROM_JSON(ReleaseInitiator, releaseInitiator_);
      DARABONBA_PTR_FROM_JSON(ReleaseReason, releaseReason_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(UserExtension, userExtension_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    MakeCallResponseBodyDataCallContextChannelContexts() = default ;
    MakeCallResponseBodyDataCallContextChannelContexts(const MakeCallResponseBodyDataCallContextChannelContexts &) = default ;
    MakeCallResponseBodyDataCallContextChannelContexts(MakeCallResponseBodyDataCallContextChannelContexts &&) = default ;
    MakeCallResponseBodyDataCallContextChannelContexts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MakeCallResponseBodyDataCallContextChannelContexts() = default ;
    MakeCallResponseBodyDataCallContextChannelContexts& operator=(const MakeCallResponseBodyDataCallContextChannelContexts &) = default ;
    MakeCallResponseBodyDataCallContextChannelContexts& operator=(MakeCallResponseBodyDataCallContextChannelContexts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callType_ != nullptr
        && this->channelFlags_ != nullptr && this->channelId_ != nullptr && this->channelState_ != nullptr && this->destination_ != nullptr && this->jobId_ != nullptr
        && this->mediaType_ != nullptr && this->originator_ != nullptr && this->releaseInitiator_ != nullptr && this->releaseReason_ != nullptr && this->timestamp_ != nullptr
        && this->userExtension_ != nullptr && this->userId_ != nullptr; };
    // callType Field Functions 
    bool hasCallType() const { return this->callType_ != nullptr;};
    void deleteCallType() { this->callType_ = nullptr;};
    inline string callType() const { DARABONBA_PTR_GET_DEFAULT(callType_, "") };
    inline MakeCallResponseBodyDataCallContextChannelContexts& setCallType(string callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


    // channelFlags Field Functions 
    bool hasChannelFlags() const { return this->channelFlags_ != nullptr;};
    void deleteChannelFlags() { this->channelFlags_ = nullptr;};
    inline string channelFlags() const { DARABONBA_PTR_GET_DEFAULT(channelFlags_, "") };
    inline MakeCallResponseBodyDataCallContextChannelContexts& setChannelFlags(string channelFlags) { DARABONBA_PTR_SET_VALUE(channelFlags_, channelFlags) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline MakeCallResponseBodyDataCallContextChannelContexts& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // channelState Field Functions 
    bool hasChannelState() const { return this->channelState_ != nullptr;};
    void deleteChannelState() { this->channelState_ = nullptr;};
    inline string channelState() const { DARABONBA_PTR_GET_DEFAULT(channelState_, "") };
    inline MakeCallResponseBodyDataCallContextChannelContexts& setChannelState(string channelState) { DARABONBA_PTR_SET_VALUE(channelState_, channelState) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string destination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline MakeCallResponseBodyDataCallContextChannelContexts& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline MakeCallResponseBodyDataCallContextChannelContexts& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline MakeCallResponseBodyDataCallContextChannelContexts& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // originator Field Functions 
    bool hasOriginator() const { return this->originator_ != nullptr;};
    void deleteOriginator() { this->originator_ = nullptr;};
    inline string originator() const { DARABONBA_PTR_GET_DEFAULT(originator_, "") };
    inline MakeCallResponseBodyDataCallContextChannelContexts& setOriginator(string originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };


    // releaseInitiator Field Functions 
    bool hasReleaseInitiator() const { return this->releaseInitiator_ != nullptr;};
    void deleteReleaseInitiator() { this->releaseInitiator_ = nullptr;};
    inline string releaseInitiator() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiator_, "") };
    inline MakeCallResponseBodyDataCallContextChannelContexts& setReleaseInitiator(string releaseInitiator) { DARABONBA_PTR_SET_VALUE(releaseInitiator_, releaseInitiator) };


    // releaseReason Field Functions 
    bool hasReleaseReason() const { return this->releaseReason_ != nullptr;};
    void deleteReleaseReason() { this->releaseReason_ = nullptr;};
    inline string releaseReason() const { DARABONBA_PTR_GET_DEFAULT(releaseReason_, "") };
    inline MakeCallResponseBodyDataCallContextChannelContexts& setReleaseReason(string releaseReason) { DARABONBA_PTR_SET_VALUE(releaseReason_, releaseReason) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline MakeCallResponseBodyDataCallContextChannelContexts& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // userExtension Field Functions 
    bool hasUserExtension() const { return this->userExtension_ != nullptr;};
    void deleteUserExtension() { this->userExtension_ = nullptr;};
    inline string userExtension() const { DARABONBA_PTR_GET_DEFAULT(userExtension_, "") };
    inline MakeCallResponseBodyDataCallContextChannelContexts& setUserExtension(string userExtension) { DARABONBA_PTR_SET_VALUE(userExtension_, userExtension) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline MakeCallResponseBodyDataCallContextChannelContexts& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> callType_ = nullptr;
    std::shared_ptr<string> channelFlags_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> channelState_ = nullptr;
    std::shared_ptr<string> destination_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
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
