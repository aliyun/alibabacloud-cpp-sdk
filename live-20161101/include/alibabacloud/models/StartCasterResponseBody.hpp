// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCASTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTCASTERRESPONSEBODY_HPP_
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
  class StartCasterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCasterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PgmSceneInfos, pgmSceneInfos_);
      DARABONBA_PTR_TO_JSON(PvwSceneInfos, pvwSceneInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartCasterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PgmSceneInfos, pgmSceneInfos_);
      DARABONBA_PTR_FROM_JSON(PvwSceneInfos, pvwSceneInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartCasterResponseBody() = default ;
    StartCasterResponseBody(const StartCasterResponseBody &) = default ;
    StartCasterResponseBody(StartCasterResponseBody &&) = default ;
    StartCasterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCasterResponseBody() = default ;
    StartCasterResponseBody& operator=(const StartCasterResponseBody &) = default ;
    StartCasterResponseBody& operator=(StartCasterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PvwSceneInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PvwSceneInfos& obj) { 
        DARABONBA_PTR_TO_JSON(SceneInfo, sceneInfo_);
      };
      friend void from_json(const Darabonba::Json& j, PvwSceneInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(SceneInfo, sceneInfo_);
      };
      PvwSceneInfos() = default ;
      PvwSceneInfos(const PvwSceneInfos &) = default ;
      PvwSceneInfos(PvwSceneInfos &&) = default ;
      PvwSceneInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PvwSceneInfos() = default ;
      PvwSceneInfos& operator=(const PvwSceneInfos &) = default ;
      PvwSceneInfos& operator=(PvwSceneInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SceneInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SceneInfo& obj) { 
          DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
          DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
        };
        friend void from_json(const Darabonba::Json& j, SceneInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
          DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
        };
        SceneInfo() = default ;
        SceneInfo(const SceneInfo &) = default ;
        SceneInfo(SceneInfo &&) = default ;
        SceneInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SceneInfo() = default ;
        SceneInfo& operator=(const SceneInfo &) = default ;
        SceneInfo& operator=(SceneInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sceneId_ == nullptr
        && this->streamUrl_ == nullptr; };
        // sceneId Field Functions 
        bool hasSceneId() const { return this->sceneId_ != nullptr;};
        void deleteSceneId() { this->sceneId_ = nullptr;};
        inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
        inline SceneInfo& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


        // streamUrl Field Functions 
        bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
        void deleteStreamUrl() { this->streamUrl_ = nullptr;};
        inline string getStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
        inline SceneInfo& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


      protected:
        // The ID of the scene.
        shared_ptr<string> sceneId_ {};
        // The streaming URL of the PVW scene in the production studio. The value is not a stream relay URL.
        shared_ptr<string> streamUrl_ {};
      };

      virtual bool empty() const override { return this->sceneInfo_ == nullptr; };
      // sceneInfo Field Functions 
      bool hasSceneInfo() const { return this->sceneInfo_ != nullptr;};
      void deleteSceneInfo() { this->sceneInfo_ = nullptr;};
      inline const vector<PvwSceneInfos::SceneInfo> & getSceneInfo() const { DARABONBA_PTR_GET_CONST(sceneInfo_, vector<PvwSceneInfos::SceneInfo>) };
      inline vector<PvwSceneInfos::SceneInfo> getSceneInfo() { DARABONBA_PTR_GET(sceneInfo_, vector<PvwSceneInfos::SceneInfo>) };
      inline PvwSceneInfos& setSceneInfo(const vector<PvwSceneInfos::SceneInfo> & sceneInfo) { DARABONBA_PTR_SET_VALUE(sceneInfo_, sceneInfo) };
      inline PvwSceneInfos& setSceneInfo(vector<PvwSceneInfos::SceneInfo> && sceneInfo) { DARABONBA_PTR_SET_RVALUE(sceneInfo_, sceneInfo) };


    protected:
      shared_ptr<vector<PvwSceneInfos::SceneInfo>> sceneInfo_ {};
    };

    class PgmSceneInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PgmSceneInfos& obj) { 
        DARABONBA_PTR_TO_JSON(SceneInfo, sceneInfo_);
      };
      friend void from_json(const Darabonba::Json& j, PgmSceneInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(SceneInfo, sceneInfo_);
      };
      PgmSceneInfos() = default ;
      PgmSceneInfos(const PgmSceneInfos &) = default ;
      PgmSceneInfos(PgmSceneInfos &&) = default ;
      PgmSceneInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PgmSceneInfos() = default ;
      PgmSceneInfos& operator=(const PgmSceneInfos &) = default ;
      PgmSceneInfos& operator=(PgmSceneInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SceneInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SceneInfo& obj) { 
          DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
          DARABONBA_PTR_TO_JSON(StreamInfos, streamInfos_);
          DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
        };
        friend void from_json(const Darabonba::Json& j, SceneInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
          DARABONBA_PTR_FROM_JSON(StreamInfos, streamInfos_);
          DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
        };
        SceneInfo() = default ;
        SceneInfo(const SceneInfo &) = default ;
        SceneInfo(SceneInfo &&) = default ;
        SceneInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SceneInfo() = default ;
        SceneInfo& operator=(const SceneInfo &) = default ;
        SceneInfo& operator=(SceneInfo &&) = default ;
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
            // The URL.
            shared_ptr<string> outputStreamUrl_ {};
            // The transcoding configuration. Valid values:
            // 
            // *   **lsd**: standard definition
            // *   **lld**: low definition
            // *   **lud**: ultra-high definition
            // *   **lhd**: high definition
            shared_ptr<string> transcodeConfig_ {};
            // The format. Valid values:
            // 
            // *   **flv**
            // *   **rtmp**
            // *   **m3u8**
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

        virtual bool empty() const override { return this->sceneId_ == nullptr
        && this->streamInfos_ == nullptr && this->streamUrl_ == nullptr; };
        // sceneId Field Functions 
        bool hasSceneId() const { return this->sceneId_ != nullptr;};
        void deleteSceneId() { this->sceneId_ = nullptr;};
        inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
        inline SceneInfo& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


        // streamInfos Field Functions 
        bool hasStreamInfos() const { return this->streamInfos_ != nullptr;};
        void deleteStreamInfos() { this->streamInfos_ = nullptr;};
        inline const SceneInfo::StreamInfos & getStreamInfos() const { DARABONBA_PTR_GET_CONST(streamInfos_, SceneInfo::StreamInfos) };
        inline SceneInfo::StreamInfos getStreamInfos() { DARABONBA_PTR_GET(streamInfos_, SceneInfo::StreamInfos) };
        inline SceneInfo& setStreamInfos(const SceneInfo::StreamInfos & streamInfos) { DARABONBA_PTR_SET_VALUE(streamInfos_, streamInfos) };
        inline SceneInfo& setStreamInfos(SceneInfo::StreamInfos && streamInfos) { DARABONBA_PTR_SET_RVALUE(streamInfos_, streamInfos) };


        // streamUrl Field Functions 
        bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
        void deleteStreamUrl() { this->streamUrl_ = nullptr;};
        inline string getStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
        inline SceneInfo& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


      protected:
        // The ID of the scene.
        shared_ptr<string> sceneId_ {};
        // The stream relay URLs.
        shared_ptr<SceneInfo::StreamInfos> streamInfos_ {};
        // The streaming URL of the PGM scene in the production studio. The value is not a stream relay URL.
        shared_ptr<string> streamUrl_ {};
      };

      virtual bool empty() const override { return this->sceneInfo_ == nullptr; };
      // sceneInfo Field Functions 
      bool hasSceneInfo() const { return this->sceneInfo_ != nullptr;};
      void deleteSceneInfo() { this->sceneInfo_ = nullptr;};
      inline const vector<PgmSceneInfos::SceneInfo> & getSceneInfo() const { DARABONBA_PTR_GET_CONST(sceneInfo_, vector<PgmSceneInfos::SceneInfo>) };
      inline vector<PgmSceneInfos::SceneInfo> getSceneInfo() { DARABONBA_PTR_GET(sceneInfo_, vector<PgmSceneInfos::SceneInfo>) };
      inline PgmSceneInfos& setSceneInfo(const vector<PgmSceneInfos::SceneInfo> & sceneInfo) { DARABONBA_PTR_SET_VALUE(sceneInfo_, sceneInfo) };
      inline PgmSceneInfos& setSceneInfo(vector<PgmSceneInfos::SceneInfo> && sceneInfo) { DARABONBA_PTR_SET_RVALUE(sceneInfo_, sceneInfo) };


    protected:
      shared_ptr<vector<PgmSceneInfos::SceneInfo>> sceneInfo_ {};
    };

    virtual bool empty() const override { return this->pgmSceneInfos_ == nullptr
        && this->pvwSceneInfos_ == nullptr && this->requestId_ == nullptr; };
    // pgmSceneInfos Field Functions 
    bool hasPgmSceneInfos() const { return this->pgmSceneInfos_ != nullptr;};
    void deletePgmSceneInfos() { this->pgmSceneInfos_ = nullptr;};
    inline const StartCasterResponseBody::PgmSceneInfos & getPgmSceneInfos() const { DARABONBA_PTR_GET_CONST(pgmSceneInfos_, StartCasterResponseBody::PgmSceneInfos) };
    inline StartCasterResponseBody::PgmSceneInfos getPgmSceneInfos() { DARABONBA_PTR_GET(pgmSceneInfos_, StartCasterResponseBody::PgmSceneInfos) };
    inline StartCasterResponseBody& setPgmSceneInfos(const StartCasterResponseBody::PgmSceneInfos & pgmSceneInfos) { DARABONBA_PTR_SET_VALUE(pgmSceneInfos_, pgmSceneInfos) };
    inline StartCasterResponseBody& setPgmSceneInfos(StartCasterResponseBody::PgmSceneInfos && pgmSceneInfos) { DARABONBA_PTR_SET_RVALUE(pgmSceneInfos_, pgmSceneInfos) };


    // pvwSceneInfos Field Functions 
    bool hasPvwSceneInfos() const { return this->pvwSceneInfos_ != nullptr;};
    void deletePvwSceneInfos() { this->pvwSceneInfos_ = nullptr;};
    inline const StartCasterResponseBody::PvwSceneInfos & getPvwSceneInfos() const { DARABONBA_PTR_GET_CONST(pvwSceneInfos_, StartCasterResponseBody::PvwSceneInfos) };
    inline StartCasterResponseBody::PvwSceneInfos getPvwSceneInfos() { DARABONBA_PTR_GET(pvwSceneInfos_, StartCasterResponseBody::PvwSceneInfos) };
    inline StartCasterResponseBody& setPvwSceneInfos(const StartCasterResponseBody::PvwSceneInfos & pvwSceneInfos) { DARABONBA_PTR_SET_VALUE(pvwSceneInfos_, pvwSceneInfos) };
    inline StartCasterResponseBody& setPvwSceneInfos(StartCasterResponseBody::PvwSceneInfos && pvwSceneInfos) { DARABONBA_PTR_SET_RVALUE(pvwSceneInfos_, pvwSceneInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartCasterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The PGM scenes.
    shared_ptr<StartCasterResponseBody::PgmSceneInfos> pgmSceneInfos_ {};
    // The PVW scenes.
    shared_ptr<StartCasterResponseBody::PvwSceneInfos> pvwSceneInfos_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
