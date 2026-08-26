// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORBIDLIVESTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FORBIDLIVESTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ForbidLiveStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForbidLiveStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(LiveStreamType, liveStreamType_);
      DARABONBA_PTR_TO_JSON(Oneshot, oneshot_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResumeTime, resumeTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, ForbidLiveStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(LiveStreamType, liveStreamType_);
      DARABONBA_PTR_FROM_JSON(Oneshot, oneshot_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResumeTime, resumeTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    ForbidLiveStreamRequest() = default ;
    ForbidLiveStreamRequest(const ForbidLiveStreamRequest &) = default ;
    ForbidLiveStreamRequest(ForbidLiveStreamRequest &&) = default ;
    ForbidLiveStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForbidLiveStreamRequest() = default ;
    ForbidLiveStreamRequest& operator=(const ForbidLiveStreamRequest &) = default ;
    ForbidLiveStreamRequest& operator=(ForbidLiveStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->liveStreamType_ == nullptr && this->oneshot_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resumeTime_ == nullptr && this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ForbidLiveStreamRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ForbidLiveStreamRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // liveStreamType Field Functions 
    bool hasLiveStreamType() const { return this->liveStreamType_ != nullptr;};
    void deleteLiveStreamType() { this->liveStreamType_ = nullptr;};
    inline string getLiveStreamType() const { DARABONBA_PTR_GET_DEFAULT(liveStreamType_, "") };
    inline ForbidLiveStreamRequest& setLiveStreamType(string liveStreamType) { DARABONBA_PTR_SET_VALUE(liveStreamType_, liveStreamType) };


    // oneshot Field Functions 
    bool hasOneshot() const { return this->oneshot_ != nullptr;};
    void deleteOneshot() { this->oneshot_ = nullptr;};
    inline string getOneshot() const { DARABONBA_PTR_GET_DEFAULT(oneshot_, "") };
    inline ForbidLiveStreamRequest& setOneshot(string oneshot) { DARABONBA_PTR_SET_VALUE(oneshot_, oneshot) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ForbidLiveStreamRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ForbidLiveStreamRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resumeTime Field Functions 
    bool hasResumeTime() const { return this->resumeTime_ != nullptr;};
    void deleteResumeTime() { this->resumeTime_ = nullptr;};
    inline string getResumeTime() const { DARABONBA_PTR_GET_DEFAULT(resumeTime_, "") };
    inline ForbidLiveStreamRequest& setResumeTime(string resumeTime) { DARABONBA_PTR_SET_VALUE(resumeTime_, resumeTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline ForbidLiveStreamRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The name of the application to which the ingest stream belongs. You can view the AppName on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The ingest domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // Specifies whether to disable stream ingest or streaming. Currently, only disabling stream ingest is supported: **publisher**.
    // 
    // This parameter is required.
    shared_ptr<string> liveStreamType_ {};
    // Specifies whether to only interrupt the stream without adding it to the blacklist. Valid values:
    // 
    // - **yes**: Only interrupts the stream without adding it to the blacklist (supports upstream ingest or upstream streaming).
    // 
    // - **no**: Interrupts the stream and adds it to the blacklist.
    // 
    // > Default value: no.
    shared_ptr<string> oneshot_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The time to resume the stream. Format: yyyy-MM-ddTHH:mm:ssZ (UTC).
    // 
    // > - If the **Oneshot** parameter is set to **no** and ResumeTime is not specified, the live stream is disabled for 6 months by default.
    // > - If a value is specified, the restriction is lifted at the time specified by ResumeTime and the live stream is resumed.
    shared_ptr<string> resumeTime_ {};
    // The name of the ingest stream. You can view the StreamName on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page.
    // 
    // This parameter is required.
    shared_ptr<string> streamName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
