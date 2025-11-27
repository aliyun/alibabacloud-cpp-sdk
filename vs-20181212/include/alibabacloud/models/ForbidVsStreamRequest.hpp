// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORBIDVSSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FORBIDVSSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ForbidVsStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForbidVsStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ControlStreamAction, controlStreamAction_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(LiveStreamType, liveStreamType_);
      DARABONBA_PTR_TO_JSON(Oneshot, oneshot_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResumeTime, resumeTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, ForbidVsStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ControlStreamAction, controlStreamAction_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(LiveStreamType, liveStreamType_);
      DARABONBA_PTR_FROM_JSON(Oneshot, oneshot_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResumeTime, resumeTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    ForbidVsStreamRequest() = default ;
    ForbidVsStreamRequest(const ForbidVsStreamRequest &) = default ;
    ForbidVsStreamRequest(ForbidVsStreamRequest &&) = default ;
    ForbidVsStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForbidVsStreamRequest() = default ;
    ForbidVsStreamRequest& operator=(const ForbidVsStreamRequest &) = default ;
    ForbidVsStreamRequest& operator=(ForbidVsStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->controlStreamAction_ == nullptr && return this->domainName_ == nullptr && return this->liveStreamType_ == nullptr && return this->oneshot_ == nullptr && return this->ownerId_ == nullptr
        && return this->resumeTime_ == nullptr && return this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ForbidVsStreamRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // controlStreamAction Field Functions 
    bool hasControlStreamAction() const { return this->controlStreamAction_ != nullptr;};
    void deleteControlStreamAction() { this->controlStreamAction_ = nullptr;};
    inline string controlStreamAction() const { DARABONBA_PTR_GET_DEFAULT(controlStreamAction_, "") };
    inline ForbidVsStreamRequest& setControlStreamAction(string controlStreamAction) { DARABONBA_PTR_SET_VALUE(controlStreamAction_, controlStreamAction) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ForbidVsStreamRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // liveStreamType Field Functions 
    bool hasLiveStreamType() const { return this->liveStreamType_ != nullptr;};
    void deleteLiveStreamType() { this->liveStreamType_ = nullptr;};
    inline string liveStreamType() const { DARABONBA_PTR_GET_DEFAULT(liveStreamType_, "") };
    inline ForbidVsStreamRequest& setLiveStreamType(string liveStreamType) { DARABONBA_PTR_SET_VALUE(liveStreamType_, liveStreamType) };


    // oneshot Field Functions 
    bool hasOneshot() const { return this->oneshot_ != nullptr;};
    void deleteOneshot() { this->oneshot_ = nullptr;};
    inline string oneshot() const { DARABONBA_PTR_GET_DEFAULT(oneshot_, "") };
    inline ForbidVsStreamRequest& setOneshot(string oneshot) { DARABONBA_PTR_SET_VALUE(oneshot_, oneshot) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ForbidVsStreamRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resumeTime Field Functions 
    bool hasResumeTime() const { return this->resumeTime_ != nullptr;};
    void deleteResumeTime() { this->resumeTime_ = nullptr;};
    inline string resumeTime() const { DARABONBA_PTR_GET_DEFAULT(resumeTime_, "") };
    inline ForbidVsStreamRequest& setResumeTime(string resumeTime) { DARABONBA_PTR_SET_VALUE(resumeTime_, resumeTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline ForbidVsStreamRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> controlStreamAction_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> liveStreamType_ = nullptr;
    std::shared_ptr<string> oneshot_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resumeTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
