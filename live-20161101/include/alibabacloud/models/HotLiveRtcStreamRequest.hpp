// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTLIVERTCSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTLIVERTCSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class HotLiveRtcStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotLiveRtcStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AudioMsid, audioMsid_);
      DARABONBA_PTR_TO_JSON(ConnectionTimeout, connectionTimeout_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(MediaTimeout, mediaTimeout_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(VideoMsid, videoMsid_);
    };
    friend void from_json(const Darabonba::Json& j, HotLiveRtcStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AudioMsid, audioMsid_);
      DARABONBA_PTR_FROM_JSON(ConnectionTimeout, connectionTimeout_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(MediaTimeout, mediaTimeout_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(VideoMsid, videoMsid_);
    };
    HotLiveRtcStreamRequest() = default ;
    HotLiveRtcStreamRequest(const HotLiveRtcStreamRequest &) = default ;
    HotLiveRtcStreamRequest(HotLiveRtcStreamRequest &&) = default ;
    HotLiveRtcStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotLiveRtcStreamRequest() = default ;
    HotLiveRtcStreamRequest& operator=(const HotLiveRtcStreamRequest &) = default ;
    HotLiveRtcStreamRequest& operator=(HotLiveRtcStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && return this->audioMsid_ == nullptr && return this->connectionTimeout_ == nullptr && return this->domainName_ == nullptr && return this->mediaTimeout_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionCode_ == nullptr && return this->regionId_ == nullptr && return this->streamName_ == nullptr && return this->videoMsid_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline HotLiveRtcStreamRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // audioMsid Field Functions 
    bool hasAudioMsid() const { return this->audioMsid_ != nullptr;};
    void deleteAudioMsid() { this->audioMsid_ = nullptr;};
    inline string audioMsid() const { DARABONBA_PTR_GET_DEFAULT(audioMsid_, "") };
    inline HotLiveRtcStreamRequest& setAudioMsid(string audioMsid) { DARABONBA_PTR_SET_VALUE(audioMsid_, audioMsid) };


    // connectionTimeout Field Functions 
    bool hasConnectionTimeout() const { return this->connectionTimeout_ != nullptr;};
    void deleteConnectionTimeout() { this->connectionTimeout_ = nullptr;};
    inline string connectionTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionTimeout_, "") };
    inline HotLiveRtcStreamRequest& setConnectionTimeout(string connectionTimeout) { DARABONBA_PTR_SET_VALUE(connectionTimeout_, connectionTimeout) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline HotLiveRtcStreamRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // mediaTimeout Field Functions 
    bool hasMediaTimeout() const { return this->mediaTimeout_ != nullptr;};
    void deleteMediaTimeout() { this->mediaTimeout_ = nullptr;};
    inline string mediaTimeout() const { DARABONBA_PTR_GET_DEFAULT(mediaTimeout_, "") };
    inline HotLiveRtcStreamRequest& setMediaTimeout(string mediaTimeout) { DARABONBA_PTR_SET_VALUE(mediaTimeout_, mediaTimeout) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline HotLiveRtcStreamRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string regionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline HotLiveRtcStreamRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline HotLiveRtcStreamRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline HotLiveRtcStreamRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // videoMsid Field Functions 
    bool hasVideoMsid() const { return this->videoMsid_ != nullptr;};
    void deleteVideoMsid() { this->videoMsid_ = nullptr;};
    inline string videoMsid() const { DARABONBA_PTR_GET_DEFAULT(videoMsid_, "") };
    inline HotLiveRtcStreamRequest& setVideoMsid(string videoMsid) { DARABONBA_PTR_SET_VALUE(videoMsid_, videoMsid) };


  protected:
    // The name of the application to which the live stream belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The audio MSID.
    // 
    // This parameter is required.
    std::shared_ptr<string> audioMsid_ = nullptr;
    // The duration for which the prefetch connection is maintained. Unit: milliseconds. Default value: 0, which specifies that the prefetch connection is always maintained.
    std::shared_ptr<string> connectionTimeout_ = nullptr;
    // The streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The custom period after which a timeout event is triggered. Unit: milliseconds.
    std::shared_ptr<string> mediaTimeout_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The code of the region in which the live stream is prefetched. For more information, see the following tables that list available region codes.
    // 
    // >  Region codes include provincial codes for China and country codes for all countries.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionCode_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the live stream that you want to prefetch.
    // 
    // This parameter is required.
    std::shared_ptr<string> streamName_ = nullptr;
    // The video MSID.
    // 
    // This parameter is required.
    std::shared_ptr<string> videoMsid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
