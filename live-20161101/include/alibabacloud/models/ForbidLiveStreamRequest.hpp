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
        && return this->domainName_ == nullptr && return this->liveStreamType_ == nullptr && return this->oneshot_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->resumeTime_ == nullptr && return this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ForbidLiveStreamRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ForbidLiveStreamRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // liveStreamType Field Functions 
    bool hasLiveStreamType() const { return this->liveStreamType_ != nullptr;};
    void deleteLiveStreamType() { this->liveStreamType_ = nullptr;};
    inline string liveStreamType() const { DARABONBA_PTR_GET_DEFAULT(liveStreamType_, "") };
    inline ForbidLiveStreamRequest& setLiveStreamType(string liveStreamType) { DARABONBA_PTR_SET_VALUE(liveStreamType_, liveStreamType) };


    // oneshot Field Functions 
    bool hasOneshot() const { return this->oneshot_ != nullptr;};
    void deleteOneshot() { this->oneshot_ = nullptr;};
    inline string oneshot() const { DARABONBA_PTR_GET_DEFAULT(oneshot_, "") };
    inline ForbidLiveStreamRequest& setOneshot(string oneshot) { DARABONBA_PTR_SET_VALUE(oneshot_, oneshot) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ForbidLiveStreamRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ForbidLiveStreamRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resumeTime Field Functions 
    bool hasResumeTime() const { return this->resumeTime_ != nullptr;};
    void deleteResumeTime() { this->resumeTime_ = nullptr;};
    inline string resumeTime() const { DARABONBA_PTR_GET_DEFAULT(resumeTime_, "") };
    inline ForbidLiveStreamRequest& setResumeTime(string resumeTime) { DARABONBA_PTR_SET_VALUE(resumeTime_, resumeTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline ForbidLiveStreamRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The name of the application to which the live stream belongs. You can view the application name on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page of the ApsaraVideo Live console.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The ingest domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // Specifies whether the live stream is ingested by a streamer or played by a viewer. Set the value to **publisher**.
    // 
    // This parameter is required.
    std::shared_ptr<string> liveStreamType_ = nullptr;
    // Specifies whether to only interrupt the live stream without adding the ingest URL of the live stream to the blacklist. Valid values:
    // 
    // *   **yes**: interrupts the live stream but does not add the ingest URL of the live stream to the blacklist. This value is available only when the live stream is ingested or played in the upstream.
    // *   **no**: disables the live stream and adds the ingest URL of the live stream to the blacklist.
    // 
    // >  If you do not specify this parameter, the default value no is used.
    std::shared_ptr<string> oneshot_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The time when the live stream is resumed. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > 
    // 
    // *   If you set the **Oneshot** parameter to **no** and do not specify this parameter, the live stream is disabled for six months by default.
    // 
    // *   If you specify this parameter, the live stream is resumed at the specified point in time.
    std::shared_ptr<string> resumeTime_ = nullptr;
    // The name of the ingested stream. You can view the stream name on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page of the ApsaraVideo Live console.
    // 
    // This parameter is required.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
