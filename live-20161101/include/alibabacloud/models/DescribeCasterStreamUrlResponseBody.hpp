// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSTREAMURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSTREAMURLRESPONSEBODY_HPP_
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
  class DescribeCasterStreamUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterStreamUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(CasterStreams, casterStreams_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterStreamUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(CasterStreams, casterStreams_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeCasterStreamUrlResponseBody() = default ;
    DescribeCasterStreamUrlResponseBody(const DescribeCasterStreamUrlResponseBody &) = default ;
    DescribeCasterStreamUrlResponseBody(DescribeCasterStreamUrlResponseBody &&) = default ;
    DescribeCasterStreamUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterStreamUrlResponseBody() = default ;
    DescribeCasterStreamUrlResponseBody& operator=(const DescribeCasterStreamUrlResponseBody &) = default ;
    DescribeCasterStreamUrlResponseBody& operator=(DescribeCasterStreamUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CasterStreams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CasterStreams& obj) { 
        DARABONBA_PTR_TO_JSON(CasterStream, casterStream_);
      };
      friend void from_json(const Darabonba::Json& j, CasterStreams& obj) { 
        DARABONBA_PTR_FROM_JSON(CasterStream, casterStream_);
      };
      CasterStreams() = default ;
      CasterStreams(const CasterStreams &) = default ;
      CasterStreams(CasterStreams &&) = default ;
      CasterStreams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CasterStreams() = default ;
      CasterStreams& operator=(const CasterStreams &) = default ;
      CasterStreams& operator=(CasterStreams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CasterStream : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CasterStream& obj) { 
          DARABONBA_PTR_TO_JSON(OutputType, outputType_);
          DARABONBA_PTR_TO_JSON(RtmpUrl, rtmpUrl_);
          DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
          DARABONBA_PTR_TO_JSON(StreamInfos, streamInfos_);
          DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
        };
        friend void from_json(const Darabonba::Json& j, CasterStream& obj) { 
          DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
          DARABONBA_PTR_FROM_JSON(RtmpUrl, rtmpUrl_);
          DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
          DARABONBA_PTR_FROM_JSON(StreamInfos, streamInfos_);
          DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
        };
        CasterStream() = default ;
        CasterStream(const CasterStream &) = default ;
        CasterStream(CasterStream &&) = default ;
        CasterStream(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CasterStream() = default ;
        CasterStream& operator=(const CasterStream &) = default ;
        CasterStream& operator=(CasterStream &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StreamInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StreamInfos& obj) { 
            DARABONBA_PTR_TO_JSON(StreamInfo, streamInfo_);
          };
          friend void from_json(const Darabonba::Json& j, StreamInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(StreamInfo, streamInfo_);
          };
          StreamInfos() = default ;
          StreamInfos(const StreamInfos &) = default ;
          StreamInfos(StreamInfos &&) = default ;
          StreamInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StreamInfos() = default ;
          StreamInfos& operator=(const StreamInfos &) = default ;
          StreamInfos& operator=(StreamInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class StreamInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const StreamInfo& obj) { 
              DARABONBA_PTR_TO_JSON(OutputStreamUrl, outputStreamUrl_);
              DARABONBA_PTR_TO_JSON(TranscodeConfig, transcodeConfig_);
              DARABONBA_PTR_TO_JSON(VideoFormat, videoFormat_);
            };
            friend void from_json(const Darabonba::Json& j, StreamInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(OutputStreamUrl, outputStreamUrl_);
              DARABONBA_PTR_FROM_JSON(TranscodeConfig, transcodeConfig_);
              DARABONBA_PTR_FROM_JSON(VideoFormat, videoFormat_);
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
            virtual bool empty() const override { return this->outputStreamUrl_ == nullptr
        && this->transcodeConfig_ == nullptr && this->videoFormat_ == nullptr; };
            // outputStreamUrl Field Functions 
            bool hasOutputStreamUrl() const { return this->outputStreamUrl_ != nullptr;};
            void deleteOutputStreamUrl() { this->outputStreamUrl_ = nullptr;};
            inline string getOutputStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(outputStreamUrl_, "") };
            inline StreamInfo& setOutputStreamUrl(string outputStreamUrl) { DARABONBA_PTR_SET_VALUE(outputStreamUrl_, outputStreamUrl) };


            // transcodeConfig Field Functions 
            bool hasTranscodeConfig() const { return this->transcodeConfig_ != nullptr;};
            void deleteTranscodeConfig() { this->transcodeConfig_ = nullptr;};
            inline string getTranscodeConfig() const { DARABONBA_PTR_GET_DEFAULT(transcodeConfig_, "") };
            inline StreamInfo& setTranscodeConfig(string transcodeConfig) { DARABONBA_PTR_SET_VALUE(transcodeConfig_, transcodeConfig) };


            // videoFormat Field Functions 
            bool hasVideoFormat() const { return this->videoFormat_ != nullptr;};
            void deleteVideoFormat() { this->videoFormat_ = nullptr;};
            inline string getVideoFormat() const { DARABONBA_PTR_GET_DEFAULT(videoFormat_, "") };
            inline StreamInfo& setVideoFormat(string videoFormat) { DARABONBA_PTR_SET_VALUE(videoFormat_, videoFormat) };


          protected:
            // The streaming URL.
            shared_ptr<string> outputStreamUrl_ {};
            // The resolution to which the scene transcodes the stream for playback. Valid values:
            // 
            // *   **lsd**: standard definition.
            // *   **lld**: low definition.
            // *   **lud**: ultra high definition.
            // *   **lhd**: high definition.
            shared_ptr<string> transcodeConfig_ {};
            // The format to which the scene transcodes the stream for playback. Valid values:
            // 
            // *   **flv**.
            // *   **rtmp**.
            // *   **m3u8**.
            shared_ptr<string> videoFormat_ {};
          };

          virtual bool empty() const override { return this->streamInfo_ == nullptr; };
          // streamInfo Field Functions 
          bool hasStreamInfo() const { return this->streamInfo_ != nullptr;};
          void deleteStreamInfo() { this->streamInfo_ = nullptr;};
          inline const vector<StreamInfos::StreamInfo> & getStreamInfo() const { DARABONBA_PTR_GET_CONST(streamInfo_, vector<StreamInfos::StreamInfo>) };
          inline vector<StreamInfos::StreamInfo> getStreamInfo() { DARABONBA_PTR_GET(streamInfo_, vector<StreamInfos::StreamInfo>) };
          inline StreamInfos& setStreamInfo(const vector<StreamInfos::StreamInfo> & streamInfo) { DARABONBA_PTR_SET_VALUE(streamInfo_, streamInfo) };
          inline StreamInfos& setStreamInfo(vector<StreamInfos::StreamInfo> && streamInfo) { DARABONBA_PTR_SET_RVALUE(streamInfo_, streamInfo) };


        protected:
          shared_ptr<vector<StreamInfos::StreamInfo>> streamInfo_ {};
        };

        virtual bool empty() const override { return this->outputType_ == nullptr
        && this->rtmpUrl_ == nullptr && this->sceneId_ == nullptr && this->streamInfos_ == nullptr && this->streamUrl_ == nullptr; };
        // outputType Field Functions 
        bool hasOutputType() const { return this->outputType_ != nullptr;};
        void deleteOutputType() { this->outputType_ = nullptr;};
        inline int32_t getOutputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, 0) };
        inline CasterStream& setOutputType(int32_t outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


        // rtmpUrl Field Functions 
        bool hasRtmpUrl() const { return this->rtmpUrl_ != nullptr;};
        void deleteRtmpUrl() { this->rtmpUrl_ = nullptr;};
        inline string getRtmpUrl() const { DARABONBA_PTR_GET_DEFAULT(rtmpUrl_, "") };
        inline CasterStream& setRtmpUrl(string rtmpUrl) { DARABONBA_PTR_SET_VALUE(rtmpUrl_, rtmpUrl) };


        // sceneId Field Functions 
        bool hasSceneId() const { return this->sceneId_ != nullptr;};
        void deleteSceneId() { this->sceneId_ = nullptr;};
        inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
        inline CasterStream& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


        // streamInfos Field Functions 
        bool hasStreamInfos() const { return this->streamInfos_ != nullptr;};
        void deleteStreamInfos() { this->streamInfos_ = nullptr;};
        inline const CasterStream::StreamInfos & getStreamInfos() const { DARABONBA_PTR_GET_CONST(streamInfos_, CasterStream::StreamInfos) };
        inline CasterStream::StreamInfos getStreamInfos() { DARABONBA_PTR_GET(streamInfos_, CasterStream::StreamInfos) };
        inline CasterStream& setStreamInfos(const CasterStream::StreamInfos & streamInfos) { DARABONBA_PTR_SET_VALUE(streamInfos_, streamInfos) };
        inline CasterStream& setStreamInfos(CasterStream::StreamInfos && streamInfos) { DARABONBA_PTR_SET_RVALUE(streamInfos_, streamInfos) };


        // streamUrl Field Functions 
        bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
        void deleteStreamUrl() { this->streamUrl_ = nullptr;};
        inline string getStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
        inline CasterStream& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


      protected:
        // Indicates whether the output stream is in preview mode or program mode.
        // 
        // *   **0**: indicates that the output videos of the scene are in preview mode.
        // *   **1**: indicates that the output videos of the scene are in program mode.
        shared_ptr<int32_t> outputType_ {};
        // The Real Time Messaging Protocol (RTMP) URL.
        shared_ptr<string> rtmpUrl_ {};
        // The ID of the scene.
        shared_ptr<string> sceneId_ {};
        // The information about the stream.
        shared_ptr<CasterStream::StreamInfos> streamInfos_ {};
        // The streaming URL.
        shared_ptr<string> streamUrl_ {};
      };

      virtual bool empty() const override { return this->casterStream_ == nullptr; };
      // casterStream Field Functions 
      bool hasCasterStream() const { return this->casterStream_ != nullptr;};
      void deleteCasterStream() { this->casterStream_ = nullptr;};
      inline const vector<CasterStreams::CasterStream> & getCasterStream() const { DARABONBA_PTR_GET_CONST(casterStream_, vector<CasterStreams::CasterStream>) };
      inline vector<CasterStreams::CasterStream> getCasterStream() { DARABONBA_PTR_GET(casterStream_, vector<CasterStreams::CasterStream>) };
      inline CasterStreams& setCasterStream(const vector<CasterStreams::CasterStream> & casterStream) { DARABONBA_PTR_SET_VALUE(casterStream_, casterStream) };
      inline CasterStreams& setCasterStream(vector<CasterStreams::CasterStream> && casterStream) { DARABONBA_PTR_SET_RVALUE(casterStream_, casterStream) };


    protected:
      shared_ptr<vector<CasterStreams::CasterStream>> casterStream_ {};
    };

    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->casterStreams_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline DescribeCasterStreamUrlResponseBody& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // casterStreams Field Functions 
    bool hasCasterStreams() const { return this->casterStreams_ != nullptr;};
    void deleteCasterStreams() { this->casterStreams_ = nullptr;};
    inline const DescribeCasterStreamUrlResponseBody::CasterStreams & getCasterStreams() const { DARABONBA_PTR_GET_CONST(casterStreams_, DescribeCasterStreamUrlResponseBody::CasterStreams) };
    inline DescribeCasterStreamUrlResponseBody::CasterStreams getCasterStreams() { DARABONBA_PTR_GET(casterStreams_, DescribeCasterStreamUrlResponseBody::CasterStreams) };
    inline DescribeCasterStreamUrlResponseBody& setCasterStreams(const DescribeCasterStreamUrlResponseBody::CasterStreams & casterStreams) { DARABONBA_PTR_SET_VALUE(casterStreams_, casterStreams) };
    inline DescribeCasterStreamUrlResponseBody& setCasterStreams(DescribeCasterStreamUrlResponseBody::CasterStreams && casterStreams) { DARABONBA_PTR_SET_RVALUE(casterStreams_, casterStreams) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterStreamUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCasterStreamUrlResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The ID of the production studio.
    shared_ptr<string> casterId_ {};
    // The information about the streams of the production studio.
    shared_ptr<DescribeCasterStreamUrlResponseBody::CasterStreams> casterStreams_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of streams that were returned.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
