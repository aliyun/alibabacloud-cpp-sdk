// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDVIDEORESPONSEBODYLIVERECORDVIDEOLISTLIVERECORDVIDEO_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDVIDEORESPONSEBODYLIVERECORDVIDEOLISTLIVERECORDVIDEO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(PlaylistId, playlistId_);
      DARABONBA_PTR_TO_JSON(RecordEndTime, recordEndTime_);
      DARABONBA_PTR_TO_JSON(RecordStartTime, recordStartTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(PlaylistId, playlistId_);
      DARABONBA_PTR_FROM_JSON(RecordEndTime, recordEndTime_);
      DARABONBA_PTR_FROM_JSON(RecordStartTime, recordStartTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo() = default ;
    ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo(const ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo &) = default ;
    ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo(ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo &&) = default ;
    ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo() = default ;
    ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo& operator=(const ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo &) = default ;
    ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo& operator=(ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->domainName_ != nullptr && this->playlistId_ != nullptr && this->recordEndTime_ != nullptr && this->recordStartTime_ != nullptr && this->streamName_ != nullptr
        && this->video_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // playlistId Field Functions 
    bool hasPlaylistId() const { return this->playlistId_ != nullptr;};
    void deletePlaylistId() { this->playlistId_ = nullptr;};
    inline string playlistId() const { DARABONBA_PTR_GET_DEFAULT(playlistId_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo& setPlaylistId(string playlistId) { DARABONBA_PTR_SET_VALUE(playlistId_, playlistId) };


    // recordEndTime Field Functions 
    bool hasRecordEndTime() const { return this->recordEndTime_ != nullptr;};
    void deleteRecordEndTime() { this->recordEndTime_ = nullptr;};
    inline string recordEndTime() const { DARABONBA_PTR_GET_DEFAULT(recordEndTime_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo& setRecordEndTime(string recordEndTime) { DARABONBA_PTR_SET_VALUE(recordEndTime_, recordEndTime) };


    // recordStartTime Field Functions 
    bool hasRecordStartTime() const { return this->recordStartTime_ != nullptr;};
    void deleteRecordStartTime() { this->recordStartTime_ = nullptr;};
    inline string recordStartTime() const { DARABONBA_PTR_GET_DEFAULT(recordStartTime_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo& setRecordStartTime(string recordStartTime) { DARABONBA_PTR_SET_VALUE(recordStartTime_, recordStartTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo) };
    inline Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo video() { DARABONBA_PTR_GET(video_, Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo) };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo& setVideo(const Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideo& setVideo(Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The name of the app.
    std::shared_ptr<string> appName_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the playlist.
    std::shared_ptr<string> playlistId_ = nullptr;
    // The recording end time. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> recordEndTime_ = nullptr;
    // The recording start time. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> recordStartTime_ = nullptr;
    // The name of the live-to-VOD file.
    std::shared_ptr<string> streamName_ = nullptr;
    // The information about the live-to-VOD file.
    std::shared_ptr<Models::ListLiveRecordVideoResponseBodyLiveRecordVideoListLiveRecordVideoVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
