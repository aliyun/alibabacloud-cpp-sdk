// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPLAYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTPLAYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartPlaylistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPlaylistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProgramId, programId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamInfo, streamInfo_);
    };
    friend void from_json(const Darabonba::Json& j, StartPlaylistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProgramId, programId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamInfo, streamInfo_);
    };
    StartPlaylistResponseBody() = default ;
    StartPlaylistResponseBody(const StartPlaylistResponseBody &) = default ;
    StartPlaylistResponseBody(StartPlaylistResponseBody &&) = default ;
    StartPlaylistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPlaylistResponseBody() = default ;
    StartPlaylistResponseBody& operator=(const StartPlaylistResponseBody &) = default ;
    StartPlaylistResponseBody& operator=(StartPlaylistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StreamInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StreamInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(StreamName, streamName_);
        DARABONBA_PTR_TO_JSON(Streams, streams_);
      };
      friend void from_json(const Darabonba::Json& j, StreamInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
        DARABONBA_PTR_FROM_JSON(Streams, streams_);
      };
      StreamInfo() = default ;
      StreamInfo(const StreamInfo &) = default ;
      StreamInfo(StreamInfo &&) = default ;
      StreamInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StreamInfo() = default ;
      StreamInfo& operator=(const StreamInfo &) = default ;
      StreamInfo& operator=(StreamInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Streams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Streams& obj) { 
          DARABONBA_PTR_TO_JSON(Stream, stream_);
        };
        friend void from_json(const Darabonba::Json& j, Streams& obj) { 
          DARABONBA_PTR_FROM_JSON(Stream, stream_);
        };
        Streams() = default ;
        Streams(const Streams &) = default ;
        Streams(Streams &&) = default ;
        Streams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Streams() = default ;
        Streams& operator=(const Streams &) = default ;
        Streams& operator=(Streams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Stream : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Stream& obj) { 
            DARABONBA_PTR_TO_JSON(PullFlvUrl, pullFlvUrl_);
            DARABONBA_PTR_TO_JSON(PullM3U8Url, pullM3U8Url_);
            DARABONBA_PTR_TO_JSON(PullRtmpUrl, pullRtmpUrl_);
            DARABONBA_PTR_TO_JSON(Quality, quality_);
          };
          friend void from_json(const Darabonba::Json& j, Stream& obj) { 
            DARABONBA_PTR_FROM_JSON(PullFlvUrl, pullFlvUrl_);
            DARABONBA_PTR_FROM_JSON(PullM3U8Url, pullM3U8Url_);
            DARABONBA_PTR_FROM_JSON(PullRtmpUrl, pullRtmpUrl_);
            DARABONBA_PTR_FROM_JSON(Quality, quality_);
          };
          Stream() = default ;
          Stream(const Stream &) = default ;
          Stream(Stream &&) = default ;
          Stream(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Stream() = default ;
          Stream& operator=(const Stream &) = default ;
          Stream& operator=(Stream &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->pullFlvUrl_ == nullptr
        && this->pullM3U8Url_ == nullptr && this->pullRtmpUrl_ == nullptr && this->quality_ == nullptr; };
          // pullFlvUrl Field Functions 
          bool hasPullFlvUrl() const { return this->pullFlvUrl_ != nullptr;};
          void deletePullFlvUrl() { this->pullFlvUrl_ = nullptr;};
          inline string getPullFlvUrl() const { DARABONBA_PTR_GET_DEFAULT(pullFlvUrl_, "") };
          inline Stream& setPullFlvUrl(string pullFlvUrl) { DARABONBA_PTR_SET_VALUE(pullFlvUrl_, pullFlvUrl) };


          // pullM3U8Url Field Functions 
          bool hasPullM3U8Url() const { return this->pullM3U8Url_ != nullptr;};
          void deletePullM3U8Url() { this->pullM3U8Url_ = nullptr;};
          inline string getPullM3U8Url() const { DARABONBA_PTR_GET_DEFAULT(pullM3U8Url_, "") };
          inline Stream& setPullM3U8Url(string pullM3U8Url) { DARABONBA_PTR_SET_VALUE(pullM3U8Url_, pullM3U8Url) };


          // pullRtmpUrl Field Functions 
          bool hasPullRtmpUrl() const { return this->pullRtmpUrl_ != nullptr;};
          void deletePullRtmpUrl() { this->pullRtmpUrl_ = nullptr;};
          inline string getPullRtmpUrl() const { DARABONBA_PTR_GET_DEFAULT(pullRtmpUrl_, "") };
          inline Stream& setPullRtmpUrl(string pullRtmpUrl) { DARABONBA_PTR_SET_VALUE(pullRtmpUrl_, pullRtmpUrl) };


          // quality Field Functions 
          bool hasQuality() const { return this->quality_ != nullptr;};
          void deleteQuality() { this->quality_ = nullptr;};
          inline string getQuality() const { DARABONBA_PTR_GET_DEFAULT(quality_, "") };
          inline Stream& setQuality(string quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


        protected:
          shared_ptr<string> pullFlvUrl_ {};
          shared_ptr<string> pullM3U8Url_ {};
          shared_ptr<string> pullRtmpUrl_ {};
          shared_ptr<string> quality_ {};
        };

        virtual bool empty() const override { return this->stream_ == nullptr; };
        // stream Field Functions 
        bool hasStream() const { return this->stream_ != nullptr;};
        void deleteStream() { this->stream_ = nullptr;};
        inline const vector<Streams::Stream> & getStream() const { DARABONBA_PTR_GET_CONST(stream_, vector<Streams::Stream>) };
        inline vector<Streams::Stream> getStream() { DARABONBA_PTR_GET(stream_, vector<Streams::Stream>) };
        inline Streams& setStream(const vector<Streams::Stream> & stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };
        inline Streams& setStream(vector<Streams::Stream> && stream) { DARABONBA_PTR_SET_RVALUE(stream_, stream) };


      protected:
        shared_ptr<vector<Streams::Stream>> stream_ {};
      };

      virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->streamName_ == nullptr && this->streams_ == nullptr; };
      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline StreamInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline StreamInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // streamName Field Functions 
      bool hasStreamName() const { return this->streamName_ != nullptr;};
      void deleteStreamName() { this->streamName_ = nullptr;};
      inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
      inline StreamInfo& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


      // streams Field Functions 
      bool hasStreams() const { return this->streams_ != nullptr;};
      void deleteStreams() { this->streams_ = nullptr;};
      inline const StreamInfo::Streams & getStreams() const { DARABONBA_PTR_GET_CONST(streams_, StreamInfo::Streams) };
      inline StreamInfo::Streams getStreams() { DARABONBA_PTR_GET(streams_, StreamInfo::Streams) };
      inline StreamInfo& setStreams(const StreamInfo::Streams & streams) { DARABONBA_PTR_SET_VALUE(streams_, streams) };
      inline StreamInfo& setStreams(StreamInfo::Streams && streams) { DARABONBA_PTR_SET_RVALUE(streams_, streams) };


    protected:
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The main streaming domain.
      shared_ptr<string> domainName_ {};
      // The name of the live stream.
      shared_ptr<string> streamName_ {};
      shared_ptr<StreamInfo::Streams> streams_ {};
    };

    virtual bool empty() const override { return this->programId_ == nullptr
        && this->requestId_ == nullptr && this->streamInfo_ == nullptr; };
    // programId Field Functions 
    bool hasProgramId() const { return this->programId_ != nullptr;};
    void deleteProgramId() { this->programId_ = nullptr;};
    inline string getProgramId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
    inline StartPlaylistResponseBody& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartPlaylistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamInfo Field Functions 
    bool hasStreamInfo() const { return this->streamInfo_ != nullptr;};
    void deleteStreamInfo() { this->streamInfo_ = nullptr;};
    inline const StartPlaylistResponseBody::StreamInfo & getStreamInfo() const { DARABONBA_PTR_GET_CONST(streamInfo_, StartPlaylistResponseBody::StreamInfo) };
    inline StartPlaylistResponseBody::StreamInfo getStreamInfo() { DARABONBA_PTR_GET(streamInfo_, StartPlaylistResponseBody::StreamInfo) };
    inline StartPlaylistResponseBody& setStreamInfo(const StartPlaylistResponseBody::StreamInfo & streamInfo) { DARABONBA_PTR_SET_VALUE(streamInfo_, streamInfo) };
    inline StartPlaylistResponseBody& setStreamInfo(StartPlaylistResponseBody::StreamInfo && streamInfo) { DARABONBA_PTR_SET_RVALUE(streamInfo_, streamInfo) };


  protected:
    // The ID of the episode list. You can use the ID as a request parameter in the API operation that is used to stop playing the episode list.
    shared_ptr<string> programId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the live stream.
    shared_ptr<StartPlaylistResponseBody::StreamInfo> streamInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
