// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDVIDEORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDVIDEORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListLiveRecordVideoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordVideoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LiveRecordVideoList, liveRecordVideoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRecordVideoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveRecordVideoList, liveRecordVideoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListLiveRecordVideoResponseBody() = default ;
    ListLiveRecordVideoResponseBody(const ListLiveRecordVideoResponseBody &) = default ;
    ListLiveRecordVideoResponseBody(ListLiveRecordVideoResponseBody &&) = default ;
    ListLiveRecordVideoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordVideoResponseBody() = default ;
    ListLiveRecordVideoResponseBody& operator=(const ListLiveRecordVideoResponseBody &) = default ;
    ListLiveRecordVideoResponseBody& operator=(ListLiveRecordVideoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LiveRecordVideoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LiveRecordVideoList& obj) { 
        DARABONBA_PTR_TO_JSON(LiveRecordVideo, liveRecordVideo_);
      };
      friend void from_json(const Darabonba::Json& j, LiveRecordVideoList& obj) { 
        DARABONBA_PTR_FROM_JSON(LiveRecordVideo, liveRecordVideo_);
      };
      LiveRecordVideoList() = default ;
      LiveRecordVideoList(const LiveRecordVideoList &) = default ;
      LiveRecordVideoList(LiveRecordVideoList &&) = default ;
      LiveRecordVideoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LiveRecordVideoList() = default ;
      LiveRecordVideoList& operator=(const LiveRecordVideoList &) = default ;
      LiveRecordVideoList& operator=(LiveRecordVideoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveRecordVideo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveRecordVideo& obj) { 
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(PlaylistId, playlistId_);
          DARABONBA_PTR_TO_JSON(RecordEndTime, recordEndTime_);
          DARABONBA_PTR_TO_JSON(RecordStartTime, recordStartTime_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(Video, video_);
        };
        friend void from_json(const Darabonba::Json& j, LiveRecordVideo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(PlaylistId, playlistId_);
          DARABONBA_PTR_FROM_JSON(RecordEndTime, recordEndTime_);
          DARABONBA_PTR_FROM_JSON(RecordStartTime, recordStartTime_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(Video, video_);
        };
        LiveRecordVideo() = default ;
        LiveRecordVideo(const LiveRecordVideo &) = default ;
        LiveRecordVideo(LiveRecordVideo &&) = default ;
        LiveRecordVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveRecordVideo() = default ;
        LiveRecordVideo& operator=(const LiveRecordVideo &) = default ;
        LiveRecordVideo& operator=(LiveRecordVideo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Video : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Video& obj) { 
            DARABONBA_PTR_TO_JSON(CateId, cateId_);
            DARABONBA_PTR_TO_JSON(CateName, cateName_);
            DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
            DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
            DARABONBA_PTR_TO_JSON(Size, size_);
            DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Tags, tags_);
            DARABONBA_PTR_TO_JSON(TemplateGroupId, templateGroupId_);
            DARABONBA_PTR_TO_JSON(Title, title_);
            DARABONBA_PTR_TO_JSON(VideoId, videoId_);
          };
          friend void from_json(const Darabonba::Json& j, Video& obj) { 
            DARABONBA_PTR_FROM_JSON(CateId, cateId_);
            DARABONBA_PTR_FROM_JSON(CateName, cateName_);
            DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
            DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
            DARABONBA_PTR_FROM_JSON(Size, size_);
            DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Tags, tags_);
            DARABONBA_PTR_FROM_JSON(TemplateGroupId, templateGroupId_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
            DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
          };
          Video() = default ;
          Video(const Video &) = default ;
          Video(Video &&) = default ;
          Video(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Video() = default ;
          Video& operator=(const Video &) = default ;
          Video& operator=(Video &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Snapshots : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Snapshots& obj) { 
              DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
            };
            friend void from_json(const Darabonba::Json& j, Snapshots& obj) { 
              DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
            };
            Snapshots() = default ;
            Snapshots(const Snapshots &) = default ;
            Snapshots(Snapshots &&) = default ;
            Snapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Snapshots() = default ;
            Snapshots& operator=(const Snapshots &) = default ;
            Snapshots& operator=(Snapshots &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->snapshot_ == nullptr; };
            // snapshot Field Functions 
            bool hasSnapshot() const { return this->snapshot_ != nullptr;};
            void deleteSnapshot() { this->snapshot_ = nullptr;};
            inline const vector<string> & getSnapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, vector<string>) };
            inline vector<string> getSnapshot() { DARABONBA_PTR_GET(snapshot_, vector<string>) };
            inline Snapshots& setSnapshot(const vector<string> & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
            inline Snapshots& setSnapshot(vector<string> && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


          protected:
            shared_ptr<vector<string>> snapshot_ {};
          };

          virtual bool empty() const override { return this->cateId_ == nullptr
        && this->cateName_ == nullptr && this->coverURL_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->duration_ == nullptr
        && this->modifyTime_ == nullptr && this->size_ == nullptr && this->snapshots_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->templateGroupId_ == nullptr && this->title_ == nullptr && this->videoId_ == nullptr; };
          // cateId Field Functions 
          bool hasCateId() const { return this->cateId_ != nullptr;};
          void deleteCateId() { this->cateId_ = nullptr;};
          inline int32_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0) };
          inline Video& setCateId(int32_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


          // cateName Field Functions 
          bool hasCateName() const { return this->cateName_ != nullptr;};
          void deleteCateName() { this->cateName_ = nullptr;};
          inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
          inline Video& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


          // coverURL Field Functions 
          bool hasCoverURL() const { return this->coverURL_ != nullptr;};
          void deleteCoverURL() { this->coverURL_ = nullptr;};
          inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
          inline Video& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


          // creationTime Field Functions 
          bool hasCreationTime() const { return this->creationTime_ != nullptr;};
          void deleteCreationTime() { this->creationTime_ = nullptr;};
          inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
          inline Video& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Video& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline float getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
          inline Video& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // modifyTime Field Functions 
          bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
          void deleteModifyTime() { this->modifyTime_ = nullptr;};
          inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
          inline Video& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


          // size Field Functions 
          bool hasSize() const { return this->size_ != nullptr;};
          void deleteSize() { this->size_ = nullptr;};
          inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
          inline Video& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


          // snapshots Field Functions 
          bool hasSnapshots() const { return this->snapshots_ != nullptr;};
          void deleteSnapshots() { this->snapshots_ = nullptr;};
          inline const Video::Snapshots & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, Video::Snapshots) };
          inline Video::Snapshots getSnapshots() { DARABONBA_PTR_GET(snapshots_, Video::Snapshots) };
          inline Video& setSnapshots(const Video::Snapshots & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
          inline Video& setSnapshots(Video::Snapshots && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Video& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // tags Field Functions 
          bool hasTags() const { return this->tags_ != nullptr;};
          void deleteTags() { this->tags_ = nullptr;};
          inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
          inline Video& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


          // templateGroupId Field Functions 
          bool hasTemplateGroupId() const { return this->templateGroupId_ != nullptr;};
          void deleteTemplateGroupId() { this->templateGroupId_ = nullptr;};
          inline string getTemplateGroupId() const { DARABONBA_PTR_GET_DEFAULT(templateGroupId_, "") };
          inline Video& setTemplateGroupId(string templateGroupId) { DARABONBA_PTR_SET_VALUE(templateGroupId_, templateGroupId) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Video& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          // videoId Field Functions 
          bool hasVideoId() const { return this->videoId_ != nullptr;};
          void deleteVideoId() { this->videoId_ = nullptr;};
          inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
          inline Video& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


        protected:
          // The ID of the video category.
          shared_ptr<int32_t> cateId_ {};
          // The category of the video.
          shared_ptr<string> cateName_ {};
          // The URL of the video thumbnail.
          shared_ptr<string> coverURL_ {};
          // The time when the audio or video file was created. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
          shared_ptr<string> creationTime_ {};
          // The description of the video file.
          shared_ptr<string> description_ {};
          // The duration of the video file. Unit: seconds.
          shared_ptr<float> duration_ {};
          // The time when the video was updated. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
          shared_ptr<string> modifyTime_ {};
          // The size of the source video file. Unit: bytes.
          shared_ptr<int64_t> size_ {};
          // The array of video snapshot URLs.
          shared_ptr<Video::Snapshots> snapshots_ {};
          // The status of the video. Valid values:
          // 
          // *   **Uploading**
          // *   **UploadFail**
          // *   **UploadSuccess**
          // *   **Transcoding**
          // *   **TranscodeFail**
          // *   **Blocked**
          // *   **Normal**: The video is normal.
          shared_ptr<string> status_ {};
          // The tags of the video. Multiple tags are separated with commas (,).
          shared_ptr<string> tags_ {};
          // The ID of the transcoding template group.
          shared_ptr<string> templateGroupId_ {};
          // The title of the video.
          shared_ptr<string> title_ {};
          // The ID of the video.
          shared_ptr<string> videoId_ {};
        };

        virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->playlistId_ == nullptr && this->recordEndTime_ == nullptr && this->recordStartTime_ == nullptr && this->streamName_ == nullptr
        && this->video_ == nullptr; };
        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline LiveRecordVideo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline LiveRecordVideo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // playlistId Field Functions 
        bool hasPlaylistId() const { return this->playlistId_ != nullptr;};
        void deletePlaylistId() { this->playlistId_ = nullptr;};
        inline string getPlaylistId() const { DARABONBA_PTR_GET_DEFAULT(playlistId_, "") };
        inline LiveRecordVideo& setPlaylistId(string playlistId) { DARABONBA_PTR_SET_VALUE(playlistId_, playlistId) };


        // recordEndTime Field Functions 
        bool hasRecordEndTime() const { return this->recordEndTime_ != nullptr;};
        void deleteRecordEndTime() { this->recordEndTime_ = nullptr;};
        inline string getRecordEndTime() const { DARABONBA_PTR_GET_DEFAULT(recordEndTime_, "") };
        inline LiveRecordVideo& setRecordEndTime(string recordEndTime) { DARABONBA_PTR_SET_VALUE(recordEndTime_, recordEndTime) };


        // recordStartTime Field Functions 
        bool hasRecordStartTime() const { return this->recordStartTime_ != nullptr;};
        void deleteRecordStartTime() { this->recordStartTime_ = nullptr;};
        inline string getRecordStartTime() const { DARABONBA_PTR_GET_DEFAULT(recordStartTime_, "") };
        inline LiveRecordVideo& setRecordStartTime(string recordStartTime) { DARABONBA_PTR_SET_VALUE(recordStartTime_, recordStartTime) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline LiveRecordVideo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // video Field Functions 
        bool hasVideo() const { return this->video_ != nullptr;};
        void deleteVideo() { this->video_ = nullptr;};
        inline const LiveRecordVideo::Video & getVideo() const { DARABONBA_PTR_GET_CONST(video_, LiveRecordVideo::Video) };
        inline LiveRecordVideo::Video getVideo() { DARABONBA_PTR_GET(video_, LiveRecordVideo::Video) };
        inline LiveRecordVideo& setVideo(const LiveRecordVideo::Video & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
        inline LiveRecordVideo& setVideo(LiveRecordVideo::Video && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


      protected:
        // The name of the app.
        shared_ptr<string> appName_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        // The ID of the playlist.
        shared_ptr<string> playlistId_ {};
        // The recording end time. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> recordEndTime_ {};
        // The recording start time. The time is in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> recordStartTime_ {};
        // The name of the live-to-VOD file.
        shared_ptr<string> streamName_ {};
        // The information about the live-to-VOD file.
        shared_ptr<LiveRecordVideo::Video> video_ {};
      };

      virtual bool empty() const override { return this->liveRecordVideo_ == nullptr; };
      // liveRecordVideo Field Functions 
      bool hasLiveRecordVideo() const { return this->liveRecordVideo_ != nullptr;};
      void deleteLiveRecordVideo() { this->liveRecordVideo_ = nullptr;};
      inline const vector<LiveRecordVideoList::LiveRecordVideo> & getLiveRecordVideo() const { DARABONBA_PTR_GET_CONST(liveRecordVideo_, vector<LiveRecordVideoList::LiveRecordVideo>) };
      inline vector<LiveRecordVideoList::LiveRecordVideo> getLiveRecordVideo() { DARABONBA_PTR_GET(liveRecordVideo_, vector<LiveRecordVideoList::LiveRecordVideo>) };
      inline LiveRecordVideoList& setLiveRecordVideo(const vector<LiveRecordVideoList::LiveRecordVideo> & liveRecordVideo) { DARABONBA_PTR_SET_VALUE(liveRecordVideo_, liveRecordVideo) };
      inline LiveRecordVideoList& setLiveRecordVideo(vector<LiveRecordVideoList::LiveRecordVideo> && liveRecordVideo) { DARABONBA_PTR_SET_RVALUE(liveRecordVideo_, liveRecordVideo) };


    protected:
      shared_ptr<vector<LiveRecordVideoList::LiveRecordVideo>> liveRecordVideo_ {};
    };

    virtual bool empty() const override { return this->liveRecordVideoList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // liveRecordVideoList Field Functions 
    bool hasLiveRecordVideoList() const { return this->liveRecordVideoList_ != nullptr;};
    void deleteLiveRecordVideoList() { this->liveRecordVideoList_ = nullptr;};
    inline const ListLiveRecordVideoResponseBody::LiveRecordVideoList & getLiveRecordVideoList() const { DARABONBA_PTR_GET_CONST(liveRecordVideoList_, ListLiveRecordVideoResponseBody::LiveRecordVideoList) };
    inline ListLiveRecordVideoResponseBody::LiveRecordVideoList getLiveRecordVideoList() { DARABONBA_PTR_GET(liveRecordVideoList_, ListLiveRecordVideoResponseBody::LiveRecordVideoList) };
    inline ListLiveRecordVideoResponseBody& setLiveRecordVideoList(const ListLiveRecordVideoResponseBody::LiveRecordVideoList & liveRecordVideoList) { DARABONBA_PTR_SET_VALUE(liveRecordVideoList_, liveRecordVideoList) };
    inline ListLiveRecordVideoResponseBody& setLiveRecordVideoList(ListLiveRecordVideoResponseBody::LiveRecordVideoList && liveRecordVideoList) { DARABONBA_PTR_SET_RVALUE(liveRecordVideoList_, liveRecordVideoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveRecordVideoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListLiveRecordVideoResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The list of videos.
    shared_ptr<ListLiveRecordVideoResponseBody::LiveRecordVideoList> liveRecordVideoList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of videos.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
