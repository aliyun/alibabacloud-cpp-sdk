// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryMediaCensorJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaCensorJobDetail, mediaCensorJobDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaCensorJobDetail, mediaCensorJobDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryMediaCensorJobDetailResponseBody() = default ;
    QueryMediaCensorJobDetailResponseBody(const QueryMediaCensorJobDetailResponseBody &) = default ;
    QueryMediaCensorJobDetailResponseBody(QueryMediaCensorJobDetailResponseBody &&) = default ;
    QueryMediaCensorJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobDetailResponseBody() = default ;
    QueryMediaCensorJobDetailResponseBody& operator=(const QueryMediaCensorJobDetailResponseBody &) = default ;
    QueryMediaCensorJobDetailResponseBody& operator=(QueryMediaCensorJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MediaCensorJobDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaCensorJobDetail& obj) { 
        DARABONBA_PTR_TO_JSON(BarrageCensorResult, barrageCensorResult_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(CoverImageCensorResults, coverImageCensorResults_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DescCensorResult, descCensorResult_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(Input, input_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
        DARABONBA_PTR_TO_JSON(TitleCensorResult, titleCensorResult_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
        DARABONBA_PTR_TO_JSON(VensorCensorResult, vensorCensorResult_);
        DARABONBA_PTR_TO_JSON(VideoCensorConfig, videoCensorConfig_);
      };
      friend void from_json(const Darabonba::Json& j, MediaCensorJobDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(BarrageCensorResult, barrageCensorResult_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(CoverImageCensorResults, coverImageCensorResults_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DescCensorResult, descCensorResult_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(Input, input_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
        DARABONBA_PTR_FROM_JSON(TitleCensorResult, titleCensorResult_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
        DARABONBA_PTR_FROM_JSON(VensorCensorResult, vensorCensorResult_);
        DARABONBA_PTR_FROM_JSON(VideoCensorConfig, videoCensorConfig_);
      };
      MediaCensorJobDetail() = default ;
      MediaCensorJobDetail(const MediaCensorJobDetail &) = default ;
      MediaCensorJobDetail(MediaCensorJobDetail &&) = default ;
      MediaCensorJobDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaCensorJobDetail() = default ;
      MediaCensorJobDetail& operator=(const MediaCensorJobDetail &) = default ;
      MediaCensorJobDetail& operator=(MediaCensorJobDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VideoCensorConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoCensorConfig& obj) { 
          DARABONBA_PTR_TO_JSON(BizType, bizType_);
          DARABONBA_PTR_TO_JSON(OutputFile, outputFile_);
          DARABONBA_PTR_TO_JSON(VideoCensor, videoCensor_);
        };
        friend void from_json(const Darabonba::Json& j, VideoCensorConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(BizType, bizType_);
          DARABONBA_PTR_FROM_JSON(OutputFile, outputFile_);
          DARABONBA_PTR_FROM_JSON(VideoCensor, videoCensor_);
        };
        VideoCensorConfig() = default ;
        VideoCensorConfig(const VideoCensorConfig &) = default ;
        VideoCensorConfig(VideoCensorConfig &&) = default ;
        VideoCensorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoCensorConfig() = default ;
        VideoCensorConfig& operator=(const VideoCensorConfig &) = default ;
        VideoCensorConfig& operator=(VideoCensorConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OutputFile : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputFile& obj) { 
            DARABONBA_PTR_TO_JSON(Bucket, bucket_);
            DARABONBA_PTR_TO_JSON(Location, location_);
            DARABONBA_PTR_TO_JSON(Object, object_);
          };
          friend void from_json(const Darabonba::Json& j, OutputFile& obj) { 
            DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
            DARABONBA_PTR_FROM_JSON(Location, location_);
            DARABONBA_PTR_FROM_JSON(Object, object_);
          };
          OutputFile() = default ;
          OutputFile(const OutputFile &) = default ;
          OutputFile(OutputFile &&) = default ;
          OutputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputFile() = default ;
          OutputFile& operator=(const OutputFile &) = default ;
          OutputFile& operator=(OutputFile &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bucket_ == nullptr
        && this->location_ == nullptr && this->object_ == nullptr; };
          // bucket Field Functions 
          bool hasBucket() const { return this->bucket_ != nullptr;};
          void deleteBucket() { this->bucket_ = nullptr;};
          inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
          inline OutputFile& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


          // location Field Functions 
          bool hasLocation() const { return this->location_ != nullptr;};
          void deleteLocation() { this->location_ = nullptr;};
          inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
          inline OutputFile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


          // object Field Functions 
          bool hasObject() const { return this->object_ != nullptr;};
          void deleteObject() { this->object_ = nullptr;};
          inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
          inline OutputFile& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


        protected:
          // The OSS bucket in which the output snapshot is stored.
          shared_ptr<string> bucket_ {};
          // The OSS region in which the output snapshot resides.
          shared_ptr<string> location_ {};
          // The OSS object that is generated as the output snapshot.
          // 
          // >  In the example, {Count} is a placeholder. The OSS objects that are generated as output snapshots are named `output00001-****.jpg`, `output00002-****.jpg`, and so on.
          shared_ptr<string> object_ {};
        };

        virtual bool empty() const override { return this->bizType_ == nullptr
        && this->outputFile_ == nullptr && this->videoCensor_ == nullptr; };
        // bizType Field Functions 
        bool hasBizType() const { return this->bizType_ != nullptr;};
        void deleteBizType() { this->bizType_ = nullptr;};
        inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
        inline VideoCensorConfig& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


        // outputFile Field Functions 
        bool hasOutputFile() const { return this->outputFile_ != nullptr;};
        void deleteOutputFile() { this->outputFile_ = nullptr;};
        inline const VideoCensorConfig::OutputFile & getOutputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, VideoCensorConfig::OutputFile) };
        inline VideoCensorConfig::OutputFile getOutputFile() { DARABONBA_PTR_GET(outputFile_, VideoCensorConfig::OutputFile) };
        inline VideoCensorConfig& setOutputFile(const VideoCensorConfig::OutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
        inline VideoCensorConfig& setOutputFile(VideoCensorConfig::OutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


        // videoCensor Field Functions 
        bool hasVideoCensor() const { return this->videoCensor_ != nullptr;};
        void deleteVideoCensor() { this->videoCensor_ = nullptr;};
        inline string getVideoCensor() const { DARABONBA_PTR_GET_DEFAULT(videoCensor_, "") };
        inline VideoCensorConfig& setVideoCensor(string videoCensor) { DARABONBA_PTR_SET_VALUE(videoCensor_, videoCensor) };


      protected:
        // The custom business type. Default value: common.
        shared_ptr<string> bizType_ {};
        // The information about output snapshots.
        shared_ptr<VideoCensorConfig::OutputFile> outputFile_ {};
        // Indicates whether the video content needs to be moderated. Default value: **true**. Valid values:
        // 
        // *   **true**: The video content needs to be moderated.
        // *   **false**: The video content does not need to be moderated.
        shared_ptr<string> videoCensor_ {};
      };

      class VensorCensorResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VensorCensorResult& obj) { 
          DARABONBA_PTR_TO_JSON(CensorResults, censorResults_);
          DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
          DARABONBA_PTR_TO_JSON(VideoTimelines, videoTimelines_);
        };
        friend void from_json(const Darabonba::Json& j, VensorCensorResult& obj) { 
          DARABONBA_PTR_FROM_JSON(CensorResults, censorResults_);
          DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
          DARABONBA_PTR_FROM_JSON(VideoTimelines, videoTimelines_);
        };
        VensorCensorResult() = default ;
        VensorCensorResult(const VensorCensorResult &) = default ;
        VensorCensorResult(VensorCensorResult &&) = default ;
        VensorCensorResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VensorCensorResult() = default ;
        VensorCensorResult& operator=(const VensorCensorResult &) = default ;
        VensorCensorResult& operator=(VensorCensorResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VideoTimelines : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VideoTimelines& obj) { 
            DARABONBA_PTR_TO_JSON(VideoTimeline, videoTimeline_);
          };
          friend void from_json(const Darabonba::Json& j, VideoTimelines& obj) { 
            DARABONBA_PTR_FROM_JSON(VideoTimeline, videoTimeline_);
          };
          VideoTimelines() = default ;
          VideoTimelines(const VideoTimelines &) = default ;
          VideoTimelines(VideoTimelines &&) = default ;
          VideoTimelines(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VideoTimelines() = default ;
          VideoTimelines& operator=(const VideoTimelines &) = default ;
          VideoTimelines& operator=(VideoTimelines &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class VideoTimeline : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoTimeline& obj) { 
              DARABONBA_PTR_TO_JSON(CensorResults, censorResults_);
              DARABONBA_PTR_TO_JSON(Object, object_);
              DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
            };
            friend void from_json(const Darabonba::Json& j, VideoTimeline& obj) { 
              DARABONBA_PTR_FROM_JSON(CensorResults, censorResults_);
              DARABONBA_PTR_FROM_JSON(Object, object_);
              DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
            };
            VideoTimeline() = default ;
            VideoTimeline(const VideoTimeline &) = default ;
            VideoTimeline(VideoTimeline &&) = default ;
            VideoTimeline(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoTimeline() = default ;
            VideoTimeline& operator=(const VideoTimeline &) = default ;
            VideoTimeline& operator=(VideoTimeline &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class CensorResults : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const CensorResults& obj) { 
                DARABONBA_PTR_TO_JSON(CensorResult, censorResult_);
              };
              friend void from_json(const Darabonba::Json& j, CensorResults& obj) { 
                DARABONBA_PTR_FROM_JSON(CensorResult, censorResult_);
              };
              CensorResults() = default ;
              CensorResults(const CensorResults &) = default ;
              CensorResults(CensorResults &&) = default ;
              CensorResults(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~CensorResults() = default ;
              CensorResults& operator=(const CensorResults &) = default ;
              CensorResults& operator=(CensorResults &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class CensorResult : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const CensorResult& obj) { 
                  DARABONBA_PTR_TO_JSON(Label, label_);
                  DARABONBA_PTR_TO_JSON(Rate, rate_);
                  DARABONBA_PTR_TO_JSON(Scene, scene_);
                  DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
                };
                friend void from_json(const Darabonba::Json& j, CensorResult& obj) { 
                  DARABONBA_PTR_FROM_JSON(Label, label_);
                  DARABONBA_PTR_FROM_JSON(Rate, rate_);
                  DARABONBA_PTR_FROM_JSON(Scene, scene_);
                  DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
                };
                CensorResult() = default ;
                CensorResult(const CensorResult &) = default ;
                CensorResult(CensorResult &&) = default ;
                CensorResult(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~CensorResult() = default ;
                CensorResult& operator=(const CensorResult &) = default ;
                CensorResult& operator=(CensorResult &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->label_ == nullptr
        && this->rate_ == nullptr && this->scene_ == nullptr && this->suggestion_ == nullptr; };
                // label Field Functions 
                bool hasLabel() const { return this->label_ != nullptr;};
                void deleteLabel() { this->label_ = nullptr;};
                inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
                inline CensorResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


                // rate Field Functions 
                bool hasRate() const { return this->rate_ != nullptr;};
                void deleteRate() { this->rate_ = nullptr;};
                inline string getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, "") };
                inline CensorResult& setRate(string rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


                // scene Field Functions 
                bool hasScene() const { return this->scene_ != nullptr;};
                void deleteScene() { this->scene_ = nullptr;};
                inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
                inline CensorResult& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


                // suggestion Field Functions 
                bool hasSuggestion() const { return this->suggestion_ != nullptr;};
                void deleteSuggestion() { this->suggestion_ = nullptr;};
                inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
                inline CensorResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


              protected:
                // The label of the moderation result.
                // 
                // *   Valid values in the pornographic content moderation scenario:
                // 
                //     *   **normal**: normal content.
                //     *   **sexy**: sexy content.
                //     *   **porn**: pornographic content.
                // 
                // *   Valid values in the terrorist content moderation scenario:
                // 
                //     *   **normal**: normal content.
                //     *   **bloody**: bloody content.
                //     *   **explosion**: explosion and smoke.
                //     *   **outfit**: special costume.
                //     *   **logo**: special logo.
                //     *   **weapon**: weapon.
                //     *   **politics**: political content.
                //     *   **violence**: violence.
                //     *   **crowd**: crowd.
                //     *   **parade**: parade.
                //     *   **carcrash**: car accident.
                //     *   **flag**: flag.
                //     *   **location**: landmark.
                //     *   **others**: other content.
                // 
                // *   Valid values in the ad moderation scenario:
                // 
                //     *   **normal**: normal content.
                //     *   **ad**: other ads.
                //     *   **politics**: political content in text.
                //     *   **porn**: pornographic content in text.
                //     *   **abuse**: abuse in text.
                //     *   **terrorism**: terrorist content in text.
                //     *   **contraband**: prohibited content in text.
                //     *   **spam**: spam in text.
                //     *   **npx**: illegal ad.
                //     *   **qrcode**: QR code.
                //     *   **programCode**: mini program code.
                // 
                // *   Valid values in the undesirable scene moderation scenario:
                // 
                //     *   **normal**: normal content.
                //     *   **meaningless**: meaningless content, such as a black or white screen.
                //     *   **PIP**: picture-in-picture.
                //     *   **smoking**: smoking.
                //     *   **drivelive**: live broadcasting in a running vehicle.
                // 
                // *   Valid values in the logo moderation scenario:
                // 
                //     *   **normal**: normal content.
                //     *   **TV**: controlled logo.
                //     *   **trademark**: trademark.
                shared_ptr<string> label_ {};
                // The score.
                shared_ptr<string> rate_ {};
                // The moderation scenario. Valid values:
                // 
                // *   **porn**: pornographic content moderation.
                // *   **terrorism**: terrorist content moderation.
                // *   **ad**: ad moderation.
                // *   **live**: undesirable scene moderation.
                // *   **logo**: logo moderation.
                shared_ptr<string> scene_ {};
                // The recommended subsequent operation. Valid values:
                // 
                // *   **pass**: The content passes the moderation.
                // *   **review**: The content needs to be manually reviewed.
                // *   **block**: The content needs to be blocked.
                shared_ptr<string> suggestion_ {};
              };

              virtual bool empty() const override { return this->censorResult_ == nullptr; };
              // censorResult Field Functions 
              bool hasCensorResult() const { return this->censorResult_ != nullptr;};
              void deleteCensorResult() { this->censorResult_ = nullptr;};
              inline const vector<CensorResults::CensorResult> & getCensorResult() const { DARABONBA_PTR_GET_CONST(censorResult_, vector<CensorResults::CensorResult>) };
              inline vector<CensorResults::CensorResult> getCensorResult() { DARABONBA_PTR_GET(censorResult_, vector<CensorResults::CensorResult>) };
              inline CensorResults& setCensorResult(const vector<CensorResults::CensorResult> & censorResult) { DARABONBA_PTR_SET_VALUE(censorResult_, censorResult) };
              inline CensorResults& setCensorResult(vector<CensorResults::CensorResult> && censorResult) { DARABONBA_PTR_SET_RVALUE(censorResult_, censorResult) };


            protected:
              shared_ptr<vector<CensorResults::CensorResult>> censorResult_ {};
            };

            virtual bool empty() const override { return this->censorResults_ == nullptr
        && this->object_ == nullptr && this->timestamp_ == nullptr; };
            // censorResults Field Functions 
            bool hasCensorResults() const { return this->censorResults_ != nullptr;};
            void deleteCensorResults() { this->censorResults_ = nullptr;};
            inline const VideoTimeline::CensorResults & getCensorResults() const { DARABONBA_PTR_GET_CONST(censorResults_, VideoTimeline::CensorResults) };
            inline VideoTimeline::CensorResults getCensorResults() { DARABONBA_PTR_GET(censorResults_, VideoTimeline::CensorResults) };
            inline VideoTimeline& setCensorResults(const VideoTimeline::CensorResults & censorResults) { DARABONBA_PTR_SET_VALUE(censorResults_, censorResults) };
            inline VideoTimeline& setCensorResults(VideoTimeline::CensorResults && censorResults) { DARABONBA_PTR_SET_RVALUE(censorResults_, censorResults) };


            // object Field Functions 
            bool hasObject() const { return this->object_ != nullptr;};
            void deleteObject() { this->object_ = nullptr;};
            inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
            inline VideoTimeline& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


            // timestamp Field Functions 
            bool hasTimestamp() const { return this->timestamp_ != nullptr;};
            void deleteTimestamp() { this->timestamp_ = nullptr;};
            inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
            inline VideoTimeline& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


          protected:
            // The moderation results that include information such as labels and scores.
            shared_ptr<VideoTimeline::CensorResults> censorResults_ {};
            // The OSS object that is generated as the output snapshot.
            // 
            // >  In the example, {Count} is a placeholder. The OSS objects that are generated as output snapshots are named `output00001-****.jpg`, `output00002-****.jpg`, and so on.
            shared_ptr<string> object_ {};
            // The position in the video. Format: `hh:mm:ss[.SSS]`.
            shared_ptr<string> timestamp_ {};
          };

          virtual bool empty() const override { return this->videoTimeline_ == nullptr; };
          // videoTimeline Field Functions 
          bool hasVideoTimeline() const { return this->videoTimeline_ != nullptr;};
          void deleteVideoTimeline() { this->videoTimeline_ = nullptr;};
          inline const vector<VideoTimelines::VideoTimeline> & getVideoTimeline() const { DARABONBA_PTR_GET_CONST(videoTimeline_, vector<VideoTimelines::VideoTimeline>) };
          inline vector<VideoTimelines::VideoTimeline> getVideoTimeline() { DARABONBA_PTR_GET(videoTimeline_, vector<VideoTimelines::VideoTimeline>) };
          inline VideoTimelines& setVideoTimeline(const vector<VideoTimelines::VideoTimeline> & videoTimeline) { DARABONBA_PTR_SET_VALUE(videoTimeline_, videoTimeline) };
          inline VideoTimelines& setVideoTimeline(vector<VideoTimelines::VideoTimeline> && videoTimeline) { DARABONBA_PTR_SET_RVALUE(videoTimeline_, videoTimeline) };


        protected:
          shared_ptr<vector<VideoTimelines::VideoTimeline>> videoTimeline_ {};
        };

        class CensorResults : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CensorResults& obj) { 
            DARABONBA_PTR_TO_JSON(CensorResult, censorResult_);
          };
          friend void from_json(const Darabonba::Json& j, CensorResults& obj) { 
            DARABONBA_PTR_FROM_JSON(CensorResult, censorResult_);
          };
          CensorResults() = default ;
          CensorResults(const CensorResults &) = default ;
          CensorResults(CensorResults &&) = default ;
          CensorResults(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CensorResults() = default ;
          CensorResults& operator=(const CensorResults &) = default ;
          CensorResults& operator=(CensorResults &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class CensorResult : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CensorResult& obj) { 
              DARABONBA_PTR_TO_JSON(Label, label_);
              DARABONBA_PTR_TO_JSON(Rate, rate_);
              DARABONBA_PTR_TO_JSON(Scene, scene_);
              DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
            };
            friend void from_json(const Darabonba::Json& j, CensorResult& obj) { 
              DARABONBA_PTR_FROM_JSON(Label, label_);
              DARABONBA_PTR_FROM_JSON(Rate, rate_);
              DARABONBA_PTR_FROM_JSON(Scene, scene_);
              DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
            };
            CensorResult() = default ;
            CensorResult(const CensorResult &) = default ;
            CensorResult(CensorResult &&) = default ;
            CensorResult(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CensorResult() = default ;
            CensorResult& operator=(const CensorResult &) = default ;
            CensorResult& operator=(CensorResult &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->label_ == nullptr
        && this->rate_ == nullptr && this->scene_ == nullptr && this->suggestion_ == nullptr; };
            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline CensorResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


            // rate Field Functions 
            bool hasRate() const { return this->rate_ != nullptr;};
            void deleteRate() { this->rate_ = nullptr;};
            inline string getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, "") };
            inline CensorResult& setRate(string rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


            // scene Field Functions 
            bool hasScene() const { return this->scene_ != nullptr;};
            void deleteScene() { this->scene_ = nullptr;};
            inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
            inline CensorResult& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


            // suggestion Field Functions 
            bool hasSuggestion() const { return this->suggestion_ != nullptr;};
            void deleteSuggestion() { this->suggestion_ = nullptr;};
            inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
            inline CensorResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


          protected:
            // The label of the moderation result.
            // 
            // *   Valid values in the pornographic content moderation scenario:
            // 
            //     *   **normal**: normal content.
            //     *   **sexy**: sexy content.
            //     *   **porn**: pornographic content.
            // 
            // *   Valid values in the terrorist content moderation scenario:
            // 
            //     *   **normal**: normal content.
            //     *   **bloody**: bloody content.
            //     *   **explosion**: explosion and smoke.
            //     *   **outfit**: special costume.
            //     *   **logo**: special logo.
            //     *   **weapon**: weapon.
            //     *   **politics**: political content.
            //     *   **violence**: violence.
            //     *   **crowd**: crowd.
            //     *   **parade**: parade.
            //     *   **carcrash**: car accident.
            //     *   **flag**: flag.
            //     *   **location**: landmark.
            //     *   **others**: other content.
            // 
            // *   Valid values in the ad moderation scenario:
            // 
            //     *   **normal**: normal content.
            //     *   **ad**: other ads.
            //     *   **politics**: political content in text.
            //     *   **porn**: pornographic content in text.
            //     *   **abuse**: abuse in text.
            //     *   **terrorism**: terrorist content in text.
            //     *   **contraband**: prohibited content in text.
            //     *   **spam**: spam in text.
            //     *   **npx**: illegal ad.
            //     *   **qrcode**: QR code.
            //     *   **programCode**: mini program code.
            // 
            // *   Valid values in the undesirable scene moderation scenario:
            // 
            //     *   **normal**: normal content.
            //     *   **meaningless**: meaningless content, such as a black or white screen.
            //     *   **PIP**: picture-in-picture.
            //     *   **smoking**: smoking.
            //     *   **drivelive**: live broadcasting in a running vehicle.
            // 
            // *   Valid values in the logo moderation scenario:
            // 
            //     *   **normal**: normal content.
            //     *   **TV**: controlled logo.
            //     *   **trademark**: trademark.
            shared_ptr<string> label_ {};
            // The score.
            shared_ptr<string> rate_ {};
            // The moderation scenario. Valid values:
            // 
            // *   **porn**: pornographic content moderation.
            // *   **terrorism**: terrorist content moderation.
            // *   **ad**: ad moderation.
            // *   **live**: undesirable scene moderation.
            // *   **logo**: logo moderation.
            shared_ptr<string> scene_ {};
            // The recommended subsequent operation. Valid values:
            // 
            // *   **pass**: The content passes the moderation.
            // *   **review**: The content needs to be manually reviewed.
            // *   **block**: The content needs to be blocked.
            shared_ptr<string> suggestion_ {};
          };

          virtual bool empty() const override { return this->censorResult_ == nullptr; };
          // censorResult Field Functions 
          bool hasCensorResult() const { return this->censorResult_ != nullptr;};
          void deleteCensorResult() { this->censorResult_ = nullptr;};
          inline const vector<CensorResults::CensorResult> & getCensorResult() const { DARABONBA_PTR_GET_CONST(censorResult_, vector<CensorResults::CensorResult>) };
          inline vector<CensorResults::CensorResult> getCensorResult() { DARABONBA_PTR_GET(censorResult_, vector<CensorResults::CensorResult>) };
          inline CensorResults& setCensorResult(const vector<CensorResults::CensorResult> & censorResult) { DARABONBA_PTR_SET_VALUE(censorResult_, censorResult) };
          inline CensorResults& setCensorResult(vector<CensorResults::CensorResult> && censorResult) { DARABONBA_PTR_SET_RVALUE(censorResult_, censorResult) };


        protected:
          shared_ptr<vector<CensorResults::CensorResult>> censorResult_ {};
        };

        virtual bool empty() const override { return this->censorResults_ == nullptr
        && this->nextPageToken_ == nullptr && this->videoTimelines_ == nullptr; };
        // censorResults Field Functions 
        bool hasCensorResults() const { return this->censorResults_ != nullptr;};
        void deleteCensorResults() { this->censorResults_ = nullptr;};
        inline const VensorCensorResult::CensorResults & getCensorResults() const { DARABONBA_PTR_GET_CONST(censorResults_, VensorCensorResult::CensorResults) };
        inline VensorCensorResult::CensorResults getCensorResults() { DARABONBA_PTR_GET(censorResults_, VensorCensorResult::CensorResults) };
        inline VensorCensorResult& setCensorResults(const VensorCensorResult::CensorResults & censorResults) { DARABONBA_PTR_SET_VALUE(censorResults_, censorResults) };
        inline VensorCensorResult& setCensorResults(VensorCensorResult::CensorResults && censorResults) { DARABONBA_PTR_SET_RVALUE(censorResults_, censorResults) };


        // nextPageToken Field Functions 
        bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
        void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
        inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
        inline VensorCensorResult& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


        // videoTimelines Field Functions 
        bool hasVideoTimelines() const { return this->videoTimelines_ != nullptr;};
        void deleteVideoTimelines() { this->videoTimelines_ = nullptr;};
        inline const VensorCensorResult::VideoTimelines & getVideoTimelines() const { DARABONBA_PTR_GET_CONST(videoTimelines_, VensorCensorResult::VideoTimelines) };
        inline VensorCensorResult::VideoTimelines getVideoTimelines() { DARABONBA_PTR_GET(videoTimelines_, VensorCensorResult::VideoTimelines) };
        inline VensorCensorResult& setVideoTimelines(const VensorCensorResult::VideoTimelines & videoTimelines) { DARABONBA_PTR_SET_VALUE(videoTimelines_, videoTimelines) };
        inline VensorCensorResult& setVideoTimelines(VensorCensorResult::VideoTimelines && videoTimelines) { DARABONBA_PTR_SET_RVALUE(videoTimelines_, videoTimelines) };


      protected:
        // A collection of moderation results. The information includes the summary about various scenarios such as pornographic content moderation and terrorist content moderation.
        shared_ptr<VensorCensorResult::CensorResults> censorResults_ {};
        // A pagination token. It can be used in the next request to retrieve a new page of results.
        shared_ptr<string> nextPageToken_ {};
        // The moderation results that are sorted in ascending order by time.
        shared_ptr<VensorCensorResult::VideoTimelines> videoTimelines_ {};
      };

      class TitleCensorResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TitleCensorResult& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Rate, rate_);
          DARABONBA_PTR_TO_JSON(Scene, scene_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
        };
        friend void from_json(const Darabonba::Json& j, TitleCensorResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Rate, rate_);
          DARABONBA_PTR_FROM_JSON(Scene, scene_);
          DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
        };
        TitleCensorResult() = default ;
        TitleCensorResult(const TitleCensorResult &) = default ;
        TitleCensorResult(TitleCensorResult &&) = default ;
        TitleCensorResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TitleCensorResult() = default ;
        TitleCensorResult& operator=(const TitleCensorResult &) = default ;
        TitleCensorResult& operator=(TitleCensorResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->label_ == nullptr
        && this->rate_ == nullptr && this->scene_ == nullptr && this->suggestion_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline TitleCensorResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // rate Field Functions 
        bool hasRate() const { return this->rate_ != nullptr;};
        void deleteRate() { this->rate_ = nullptr;};
        inline string getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, "") };
        inline TitleCensorResult& setRate(string rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


        // scene Field Functions 
        bool hasScene() const { return this->scene_ != nullptr;};
        void deleteScene() { this->scene_ = nullptr;};
        inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
        inline TitleCensorResult& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline TitleCensorResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      protected:
        // The label of the moderation result. Valid values:
        // 
        // *   **normal**: normal content.
        // *   **spam**: spam.
        // *   **ad**: ads.
        // *   **abuse**: abuse content.
        // *   **flood**: excessive junk content.
        // *   **contraband**: prohibited content.
        // *   **meaningless**: meaningless content.
        shared_ptr<string> label_ {};
        // The score.
        shared_ptr<string> rate_ {};
        // The moderation scenario. The value is **antispam**.
        shared_ptr<string> scene_ {};
        // The recommended subsequent operation. Valid values:
        // 
        // *   **pass**: The content passes the moderation.
        // *   **review**: The content needs to be manually reviewed.
        // *   **block**: The content needs to be blocked.
        shared_ptr<string> suggestion_ {};
      };

      class Input : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Input& obj) { 
          DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          DARABONBA_PTR_TO_JSON(Location, location_);
          DARABONBA_PTR_TO_JSON(Object, object_);
        };
        friend void from_json(const Darabonba::Json& j, Input& obj) { 
          DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          DARABONBA_PTR_FROM_JSON(Location, location_);
          DARABONBA_PTR_FROM_JSON(Object, object_);
        };
        Input() = default ;
        Input(const Input &) = default ;
        Input(Input &&) = default ;
        Input(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Input() = default ;
        Input& operator=(const Input &) = default ;
        Input& operator=(Input &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucket_ == nullptr
        && this->location_ == nullptr && this->object_ == nullptr; };
        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline Input& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline Input& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // object Field Functions 
        bool hasObject() const { return this->object_ != nullptr;};
        void deleteObject() { this->object_ = nullptr;};
        inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
        inline Input& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


      protected:
        // The name of the OSS bucket in which the input file is stored.
        shared_ptr<string> bucket_ {};
        // The OSS region in which the input file resides.
        shared_ptr<string> location_ {};
        // The name of the OSS object that is used as the input file.
        shared_ptr<string> object_ {};
      };

      class DescCensorResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DescCensorResult& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Rate, rate_);
          DARABONBA_PTR_TO_JSON(Scene, scene_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
        };
        friend void from_json(const Darabonba::Json& j, DescCensorResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Rate, rate_);
          DARABONBA_PTR_FROM_JSON(Scene, scene_);
          DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
        };
        DescCensorResult() = default ;
        DescCensorResult(const DescCensorResult &) = default ;
        DescCensorResult(DescCensorResult &&) = default ;
        DescCensorResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DescCensorResult() = default ;
        DescCensorResult& operator=(const DescCensorResult &) = default ;
        DescCensorResult& operator=(DescCensorResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->label_ == nullptr
        && this->rate_ == nullptr && this->scene_ == nullptr && this->suggestion_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline DescCensorResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // rate Field Functions 
        bool hasRate() const { return this->rate_ != nullptr;};
        void deleteRate() { this->rate_ = nullptr;};
        inline string getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, "") };
        inline DescCensorResult& setRate(string rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


        // scene Field Functions 
        bool hasScene() const { return this->scene_ != nullptr;};
        void deleteScene() { this->scene_ = nullptr;};
        inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
        inline DescCensorResult& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline DescCensorResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      protected:
        // The label of the moderation result. Valid values:
        // 
        // *   **normal**: normal content.
        // *   **spam**: spam.
        // *   **ad**: ads.
        // *   **abuse**: abuse content.
        // *   **flood**: excessive junk content.
        // *   **contraband**: prohibited content.
        // *   **meaningless**: meaningless content.
        shared_ptr<string> label_ {};
        // The score.
        shared_ptr<string> rate_ {};
        // The moderation scenario. The value is **antispam**.
        shared_ptr<string> scene_ {};
        // The recommended subsequent operation. Valid values:
        // 
        // *   **pass**: The content passes the moderation.
        // *   **review**: The content needs to be manually reviewed.
        // *   **block**: The content needs to be blocked.
        shared_ptr<string> suggestion_ {};
      };

      class CoverImageCensorResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CoverImageCensorResults& obj) { 
          DARABONBA_PTR_TO_JSON(CoverImageCensorResult, coverImageCensorResult_);
        };
        friend void from_json(const Darabonba::Json& j, CoverImageCensorResults& obj) { 
          DARABONBA_PTR_FROM_JSON(CoverImageCensorResult, coverImageCensorResult_);
        };
        CoverImageCensorResults() = default ;
        CoverImageCensorResults(const CoverImageCensorResults &) = default ;
        CoverImageCensorResults(CoverImageCensorResults &&) = default ;
        CoverImageCensorResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CoverImageCensorResults() = default ;
        CoverImageCensorResults& operator=(const CoverImageCensorResults &) = default ;
        CoverImageCensorResults& operator=(CoverImageCensorResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CoverImageCensorResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CoverImageCensorResult& obj) { 
            DARABONBA_PTR_TO_JSON(Bucket, bucket_);
            DARABONBA_PTR_TO_JSON(Location, location_);
            DARABONBA_PTR_TO_JSON(Object, object_);
            DARABONBA_PTR_TO_JSON(Results, results_);
          };
          friend void from_json(const Darabonba::Json& j, CoverImageCensorResult& obj) { 
            DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
            DARABONBA_PTR_FROM_JSON(Location, location_);
            DARABONBA_PTR_FROM_JSON(Object, object_);
            DARABONBA_PTR_FROM_JSON(Results, results_);
          };
          CoverImageCensorResult() = default ;
          CoverImageCensorResult(const CoverImageCensorResult &) = default ;
          CoverImageCensorResult(CoverImageCensorResult &&) = default ;
          CoverImageCensorResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CoverImageCensorResult() = default ;
          CoverImageCensorResult& operator=(const CoverImageCensorResult &) = default ;
          CoverImageCensorResult& operator=(CoverImageCensorResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Results : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Results& obj) { 
              DARABONBA_PTR_TO_JSON(Result, result_);
            };
            friend void from_json(const Darabonba::Json& j, Results& obj) { 
              DARABONBA_PTR_FROM_JSON(Result, result_);
            };
            Results() = default ;
            Results(const Results &) = default ;
            Results(Results &&) = default ;
            Results(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Results() = default ;
            Results& operator=(const Results &) = default ;
            Results& operator=(Results &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Result : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Result& obj) { 
                DARABONBA_PTR_TO_JSON(Label, label_);
                DARABONBA_PTR_TO_JSON(Rate, rate_);
                DARABONBA_PTR_TO_JSON(Scene, scene_);
                DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
              };
              friend void from_json(const Darabonba::Json& j, Result& obj) { 
                DARABONBA_PTR_FROM_JSON(Label, label_);
                DARABONBA_PTR_FROM_JSON(Rate, rate_);
                DARABONBA_PTR_FROM_JSON(Scene, scene_);
                DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
              };
              Result() = default ;
              Result(const Result &) = default ;
              Result(Result &&) = default ;
              Result(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Result() = default ;
              Result& operator=(const Result &) = default ;
              Result& operator=(Result &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->label_ == nullptr
        && this->rate_ == nullptr && this->scene_ == nullptr && this->suggestion_ == nullptr; };
              // label Field Functions 
              bool hasLabel() const { return this->label_ != nullptr;};
              void deleteLabel() { this->label_ = nullptr;};
              inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
              inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


              // rate Field Functions 
              bool hasRate() const { return this->rate_ != nullptr;};
              void deleteRate() { this->rate_ = nullptr;};
              inline string getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, "") };
              inline Result& setRate(string rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


              // scene Field Functions 
              bool hasScene() const { return this->scene_ != nullptr;};
              void deleteScene() { this->scene_ = nullptr;};
              inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
              inline Result& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


              // suggestion Field Functions 
              bool hasSuggestion() const { return this->suggestion_ != nullptr;};
              void deleteSuggestion() { this->suggestion_ = nullptr;};
              inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
              inline Result& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


            protected:
              // The label of the moderation result.
              // 
              // *   Valid values in the pornographic content moderation scenario:
              // 
              //     *   **normal**: normal content.
              //     *   **sexy**: sexy content.
              //     *   **porn**: pornographic content.
              // 
              // *   Valid values in the terrorist content moderation scenario:
              // 
              //     *   **normal**: normal content.
              //     *   **bloody**: bloody content.
              //     *   **explosion**: explosion and smoke.
              //     *   **outfit**: special costume.
              //     *   **logo**: special logo.
              //     *   **weapon**: weapon.
              //     *   **politics**: political content.
              //     *   **violence**: violence.
              //     *   **crowd**: crowd.
              //     *   **parade**: parade.
              //     *   **carcrash**: car accident.
              //     *   **flag**: flag.
              //     *   **location**: landmark.
              //     *   **others**: other content.
              // 
              // *   Valid values in the ad moderation scenario:
              // 
              //     *   **normal**: normal content.
              //     *   **ad**: other ads.
              //     *   **politics**: political content in text.
              //     *   **porn**: pornographic content in text.
              //     *   **abuse**: abuse in text.
              //     *   **terrorism**: terrorist content in text.
              //     *   **contraband**: prohibited content in text.
              //     *   **spam**: spam in text.
              //     *   **npx**: illegal ad.
              //     *   **qrcode**: QR code.
              //     *   **programCode**: mini program code.
              // 
              // *   Valid values in the undesirable scene moderation scenario:
              // 
              //     *   **normal**: normal content.
              //     *   **meaningless**: meaningless content, such as a black or white screen.
              //     *   **PIP**: picture-in-picture.
              //     *   **smoking**: smoking.
              //     *   **drivelive**: live broadcasting in a running vehicle.
              // 
              // *   Valid values in the logo moderation scenario:
              // 
              //     *   **normal**: normal content.
              //     *   **TV**: controlled logo.
              //     *   **trademark**: trademark.
              shared_ptr<string> label_ {};
              // The score. Valid values: 0 to 100.
              shared_ptr<string> rate_ {};
              // The moderation scenario. Valid values:
              // 
              // *   **porn**: pornographic content moderation.
              // *   **terrorism**: terrorist content moderation.
              // *   **ad**: ad moderation.
              // *   **live**: undesirable scene moderation.
              // *   **logo**: logo moderation.
              shared_ptr<string> scene_ {};
              // The recommended subsequent operation. Valid values:
              // 
              // *   **pass**: The content passes the moderation.
              // *   **review**: The content needs to be manually reviewed.
              // *   **block**: The content needs to be blocked.
              shared_ptr<string> suggestion_ {};
            };

            virtual bool empty() const override { return this->result_ == nullptr; };
            // result Field Functions 
            bool hasResult() const { return this->result_ != nullptr;};
            void deleteResult() { this->result_ = nullptr;};
            inline const vector<Results::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Results::Result>) };
            inline vector<Results::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Results::Result>) };
            inline Results& setResult(const vector<Results::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
            inline Results& setResult(vector<Results::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


          protected:
            shared_ptr<vector<Results::Result>> result_ {};
          };

          virtual bool empty() const override { return this->bucket_ == nullptr
        && this->location_ == nullptr && this->object_ == nullptr && this->results_ == nullptr; };
          // bucket Field Functions 
          bool hasBucket() const { return this->bucket_ != nullptr;};
          void deleteBucket() { this->bucket_ = nullptr;};
          inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
          inline CoverImageCensorResult& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


          // location Field Functions 
          bool hasLocation() const { return this->location_ != nullptr;};
          void deleteLocation() { this->location_ = nullptr;};
          inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
          inline CoverImageCensorResult& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


          // object Field Functions 
          bool hasObject() const { return this->object_ != nullptr;};
          void deleteObject() { this->object_ = nullptr;};
          inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
          inline CoverImageCensorResult& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


          // results Field Functions 
          bool hasResults() const { return this->results_ != nullptr;};
          void deleteResults() { this->results_ = nullptr;};
          inline const CoverImageCensorResult::Results & getResults() const { DARABONBA_PTR_GET_CONST(results_, CoverImageCensorResult::Results) };
          inline CoverImageCensorResult::Results getResults() { DARABONBA_PTR_GET(results_, CoverImageCensorResult::Results) };
          inline CoverImageCensorResult& setResults(const CoverImageCensorResult::Results & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
          inline CoverImageCensorResult& setResults(CoverImageCensorResult::Results && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


        protected:
          // The OSS bucket in which the thumbnail is stored.
          shared_ptr<string> bucket_ {};
          // The OSS region in which the thumbnail resides.
          shared_ptr<string> location_ {};
          // The Object Storage Service (OSS) object that is used as the thumbnail.
          shared_ptr<string> object_ {};
          // The moderation results.
          shared_ptr<CoverImageCensorResult::Results> results_ {};
        };

        virtual bool empty() const override { return this->coverImageCensorResult_ == nullptr; };
        // coverImageCensorResult Field Functions 
        bool hasCoverImageCensorResult() const { return this->coverImageCensorResult_ != nullptr;};
        void deleteCoverImageCensorResult() { this->coverImageCensorResult_ = nullptr;};
        inline const vector<CoverImageCensorResults::CoverImageCensorResult> & getCoverImageCensorResult() const { DARABONBA_PTR_GET_CONST(coverImageCensorResult_, vector<CoverImageCensorResults::CoverImageCensorResult>) };
        inline vector<CoverImageCensorResults::CoverImageCensorResult> getCoverImageCensorResult() { DARABONBA_PTR_GET(coverImageCensorResult_, vector<CoverImageCensorResults::CoverImageCensorResult>) };
        inline CoverImageCensorResults& setCoverImageCensorResult(const vector<CoverImageCensorResults::CoverImageCensorResult> & coverImageCensorResult) { DARABONBA_PTR_SET_VALUE(coverImageCensorResult_, coverImageCensorResult) };
        inline CoverImageCensorResults& setCoverImageCensorResult(vector<CoverImageCensorResults::CoverImageCensorResult> && coverImageCensorResult) { DARABONBA_PTR_SET_RVALUE(coverImageCensorResult_, coverImageCensorResult) };


      protected:
        shared_ptr<vector<CoverImageCensorResults::CoverImageCensorResult>> coverImageCensorResult_ {};
      };

      class BarrageCensorResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BarrageCensorResult& obj) { 
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Rate, rate_);
          DARABONBA_PTR_TO_JSON(Scene, scene_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
        };
        friend void from_json(const Darabonba::Json& j, BarrageCensorResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Rate, rate_);
          DARABONBA_PTR_FROM_JSON(Scene, scene_);
          DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
        };
        BarrageCensorResult() = default ;
        BarrageCensorResult(const BarrageCensorResult &) = default ;
        BarrageCensorResult(BarrageCensorResult &&) = default ;
        BarrageCensorResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BarrageCensorResult() = default ;
        BarrageCensorResult& operator=(const BarrageCensorResult &) = default ;
        BarrageCensorResult& operator=(BarrageCensorResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->label_ == nullptr
        && this->rate_ == nullptr && this->scene_ == nullptr && this->suggestion_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline BarrageCensorResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // rate Field Functions 
        bool hasRate() const { return this->rate_ != nullptr;};
        void deleteRate() { this->rate_ = nullptr;};
        inline string getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, "") };
        inline BarrageCensorResult& setRate(string rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


        // scene Field Functions 
        bool hasScene() const { return this->scene_ != nullptr;};
        void deleteScene() { this->scene_ = nullptr;};
        inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
        inline BarrageCensorResult& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline BarrageCensorResult& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      protected:
        // The label of the moderation result. Valid values:
        // 
        // *   **normal**: normal content.
        // *   **spam**: spam.
        // *   **ad**: ads.
        // *   **abuse**: abuse content.
        // *   **flood**: excessive junk content.
        // *   **contraband**: prohibited content.
        // *   **meaningless**: meaningless content.
        shared_ptr<string> label_ {};
        // The score.
        shared_ptr<string> rate_ {};
        // The moderation scenario. The value is **antispam**.
        shared_ptr<string> scene_ {};
        // The recommended subsequent operation. Valid values:
        // 
        // *   **pass**: The content passes the moderation.
        // *   **review**: The content needs to be manually reviewed.
        // *   **block**: The content needs to be blocked.
        shared_ptr<string> suggestion_ {};
      };

      virtual bool empty() const override { return this->barrageCensorResult_ == nullptr
        && this->code_ == nullptr && this->coverImageCensorResults_ == nullptr && this->creationTime_ == nullptr && this->descCensorResult_ == nullptr && this->finishTime_ == nullptr
        && this->input_ == nullptr && this->jobId_ == nullptr && this->message_ == nullptr && this->pipelineId_ == nullptr && this->state_ == nullptr
        && this->suggestion_ == nullptr && this->titleCensorResult_ == nullptr && this->userData_ == nullptr && this->vensorCensorResult_ == nullptr && this->videoCensorConfig_ == nullptr; };
      // barrageCensorResult Field Functions 
      bool hasBarrageCensorResult() const { return this->barrageCensorResult_ != nullptr;};
      void deleteBarrageCensorResult() { this->barrageCensorResult_ = nullptr;};
      inline const MediaCensorJobDetail::BarrageCensorResult & getBarrageCensorResult() const { DARABONBA_PTR_GET_CONST(barrageCensorResult_, MediaCensorJobDetail::BarrageCensorResult) };
      inline MediaCensorJobDetail::BarrageCensorResult getBarrageCensorResult() { DARABONBA_PTR_GET(barrageCensorResult_, MediaCensorJobDetail::BarrageCensorResult) };
      inline MediaCensorJobDetail& setBarrageCensorResult(const MediaCensorJobDetail::BarrageCensorResult & barrageCensorResult) { DARABONBA_PTR_SET_VALUE(barrageCensorResult_, barrageCensorResult) };
      inline MediaCensorJobDetail& setBarrageCensorResult(MediaCensorJobDetail::BarrageCensorResult && barrageCensorResult) { DARABONBA_PTR_SET_RVALUE(barrageCensorResult_, barrageCensorResult) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline MediaCensorJobDetail& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // coverImageCensorResults Field Functions 
      bool hasCoverImageCensorResults() const { return this->coverImageCensorResults_ != nullptr;};
      void deleteCoverImageCensorResults() { this->coverImageCensorResults_ = nullptr;};
      inline const MediaCensorJobDetail::CoverImageCensorResults & getCoverImageCensorResults() const { DARABONBA_PTR_GET_CONST(coverImageCensorResults_, MediaCensorJobDetail::CoverImageCensorResults) };
      inline MediaCensorJobDetail::CoverImageCensorResults getCoverImageCensorResults() { DARABONBA_PTR_GET(coverImageCensorResults_, MediaCensorJobDetail::CoverImageCensorResults) };
      inline MediaCensorJobDetail& setCoverImageCensorResults(const MediaCensorJobDetail::CoverImageCensorResults & coverImageCensorResults) { DARABONBA_PTR_SET_VALUE(coverImageCensorResults_, coverImageCensorResults) };
      inline MediaCensorJobDetail& setCoverImageCensorResults(MediaCensorJobDetail::CoverImageCensorResults && coverImageCensorResults) { DARABONBA_PTR_SET_RVALUE(coverImageCensorResults_, coverImageCensorResults) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline MediaCensorJobDetail& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // descCensorResult Field Functions 
      bool hasDescCensorResult() const { return this->descCensorResult_ != nullptr;};
      void deleteDescCensorResult() { this->descCensorResult_ = nullptr;};
      inline const MediaCensorJobDetail::DescCensorResult & getDescCensorResult() const { DARABONBA_PTR_GET_CONST(descCensorResult_, MediaCensorJobDetail::DescCensorResult) };
      inline MediaCensorJobDetail::DescCensorResult getDescCensorResult() { DARABONBA_PTR_GET(descCensorResult_, MediaCensorJobDetail::DescCensorResult) };
      inline MediaCensorJobDetail& setDescCensorResult(const MediaCensorJobDetail::DescCensorResult & descCensorResult) { DARABONBA_PTR_SET_VALUE(descCensorResult_, descCensorResult) };
      inline MediaCensorJobDetail& setDescCensorResult(MediaCensorJobDetail::DescCensorResult && descCensorResult) { DARABONBA_PTR_SET_RVALUE(descCensorResult_, descCensorResult) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline MediaCensorJobDetail& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline const MediaCensorJobDetail::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, MediaCensorJobDetail::Input) };
      inline MediaCensorJobDetail::Input getInput() { DARABONBA_PTR_GET(input_, MediaCensorJobDetail::Input) };
      inline MediaCensorJobDetail& setInput(const MediaCensorJobDetail::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
      inline MediaCensorJobDetail& setInput(MediaCensorJobDetail::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline MediaCensorJobDetail& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline MediaCensorJobDetail& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline MediaCensorJobDetail& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline MediaCensorJobDetail& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // suggestion Field Functions 
      bool hasSuggestion() const { return this->suggestion_ != nullptr;};
      void deleteSuggestion() { this->suggestion_ = nullptr;};
      inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
      inline MediaCensorJobDetail& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      // titleCensorResult Field Functions 
      bool hasTitleCensorResult() const { return this->titleCensorResult_ != nullptr;};
      void deleteTitleCensorResult() { this->titleCensorResult_ = nullptr;};
      inline const MediaCensorJobDetail::TitleCensorResult & getTitleCensorResult() const { DARABONBA_PTR_GET_CONST(titleCensorResult_, MediaCensorJobDetail::TitleCensorResult) };
      inline MediaCensorJobDetail::TitleCensorResult getTitleCensorResult() { DARABONBA_PTR_GET(titleCensorResult_, MediaCensorJobDetail::TitleCensorResult) };
      inline MediaCensorJobDetail& setTitleCensorResult(const MediaCensorJobDetail::TitleCensorResult & titleCensorResult) { DARABONBA_PTR_SET_VALUE(titleCensorResult_, titleCensorResult) };
      inline MediaCensorJobDetail& setTitleCensorResult(MediaCensorJobDetail::TitleCensorResult && titleCensorResult) { DARABONBA_PTR_SET_RVALUE(titleCensorResult_, titleCensorResult) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline MediaCensorJobDetail& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // vensorCensorResult Field Functions 
      bool hasVensorCensorResult() const { return this->vensorCensorResult_ != nullptr;};
      void deleteVensorCensorResult() { this->vensorCensorResult_ = nullptr;};
      inline const MediaCensorJobDetail::VensorCensorResult & getVensorCensorResult() const { DARABONBA_PTR_GET_CONST(vensorCensorResult_, MediaCensorJobDetail::VensorCensorResult) };
      inline MediaCensorJobDetail::VensorCensorResult getVensorCensorResult() { DARABONBA_PTR_GET(vensorCensorResult_, MediaCensorJobDetail::VensorCensorResult) };
      inline MediaCensorJobDetail& setVensorCensorResult(const MediaCensorJobDetail::VensorCensorResult & vensorCensorResult) { DARABONBA_PTR_SET_VALUE(vensorCensorResult_, vensorCensorResult) };
      inline MediaCensorJobDetail& setVensorCensorResult(MediaCensorJobDetail::VensorCensorResult && vensorCensorResult) { DARABONBA_PTR_SET_RVALUE(vensorCensorResult_, vensorCensorResult) };


      // videoCensorConfig Field Functions 
      bool hasVideoCensorConfig() const { return this->videoCensorConfig_ != nullptr;};
      void deleteVideoCensorConfig() { this->videoCensorConfig_ = nullptr;};
      inline const MediaCensorJobDetail::VideoCensorConfig & getVideoCensorConfig() const { DARABONBA_PTR_GET_CONST(videoCensorConfig_, MediaCensorJobDetail::VideoCensorConfig) };
      inline MediaCensorJobDetail::VideoCensorConfig getVideoCensorConfig() { DARABONBA_PTR_GET(videoCensorConfig_, MediaCensorJobDetail::VideoCensorConfig) };
      inline MediaCensorJobDetail& setVideoCensorConfig(const MediaCensorJobDetail::VideoCensorConfig & videoCensorConfig) { DARABONBA_PTR_SET_VALUE(videoCensorConfig_, videoCensorConfig) };
      inline MediaCensorJobDetail& setVideoCensorConfig(MediaCensorJobDetail::VideoCensorConfig && videoCensorConfig) { DARABONBA_PTR_SET_RVALUE(videoCensorConfig_, videoCensorConfig) };


    protected:
      // The moderation results of live comments.
      shared_ptr<MediaCensorJobDetail::BarrageCensorResult> barrageCensorResult_ {};
      // The error code returned if the job failed. This parameter is not returned if the job is successful.
      shared_ptr<string> code_ {};
      // The moderation results of thumbnails.
      shared_ptr<MediaCensorJobDetail::CoverImageCensorResults> coverImageCensorResults_ {};
      // The time when the content moderation job was created.
      shared_ptr<string> creationTime_ {};
      // The moderation results of descriptions.
      shared_ptr<MediaCensorJobDetail::DescCensorResult> descCensorResult_ {};
      // The time when the content moderation job was complete.
      shared_ptr<string> finishTime_ {};
      // The information about the job input.
      shared_ptr<MediaCensorJobDetail::Input> input_ {};
      // The ID of the content moderation job.
      shared_ptr<string> jobId_ {};
      // The error message returned if the job failed. This parameter is not returned if the job is successful.
      shared_ptr<string> message_ {};
      // The ID of the ApsaraVideo Media Processing (MPS) queue to which the job was submitted.
      shared_ptr<string> pipelineId_ {};
      // The job state.
      shared_ptr<string> state_ {};
      // The overall result of the content moderation job. Valid values:
      // 
      // *   **pass**: The content passes the moderation.
      // *   **review**: The content needs to be manually reviewed.
      // *   **block**: The content needs to be blocked.
      // 
      // >  If the moderation result of any type of content is review, the overall result is review. If the moderation result of any type of content is block, the overall result is block.
      shared_ptr<string> suggestion_ {};
      // The moderation results of titles.
      shared_ptr<MediaCensorJobDetail::TitleCensorResult> titleCensorResult_ {};
      // The user-defined data.
      shared_ptr<string> userData_ {};
      // The moderation results of videos.
      shared_ptr<MediaCensorJobDetail::VensorCensorResult> vensorCensorResult_ {};
      // The video moderation configurations.
      shared_ptr<MediaCensorJobDetail::VideoCensorConfig> videoCensorConfig_ {};
    };

    virtual bool empty() const override { return this->mediaCensorJobDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // mediaCensorJobDetail Field Functions 
    bool hasMediaCensorJobDetail() const { return this->mediaCensorJobDetail_ != nullptr;};
    void deleteMediaCensorJobDetail() { this->mediaCensorJobDetail_ = nullptr;};
    inline const QueryMediaCensorJobDetailResponseBody::MediaCensorJobDetail & getMediaCensorJobDetail() const { DARABONBA_PTR_GET_CONST(mediaCensorJobDetail_, QueryMediaCensorJobDetailResponseBody::MediaCensorJobDetail) };
    inline QueryMediaCensorJobDetailResponseBody::MediaCensorJobDetail getMediaCensorJobDetail() { DARABONBA_PTR_GET(mediaCensorJobDetail_, QueryMediaCensorJobDetailResponseBody::MediaCensorJobDetail) };
    inline QueryMediaCensorJobDetailResponseBody& setMediaCensorJobDetail(const QueryMediaCensorJobDetailResponseBody::MediaCensorJobDetail & mediaCensorJobDetail) { DARABONBA_PTR_SET_VALUE(mediaCensorJobDetail_, mediaCensorJobDetail) };
    inline QueryMediaCensorJobDetailResponseBody& setMediaCensorJobDetail(QueryMediaCensorJobDetailResponseBody::MediaCensorJobDetail && mediaCensorJobDetail) { DARABONBA_PTR_SET_RVALUE(mediaCensorJobDetail_, mediaCensorJobDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMediaCensorJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The results of the content moderation job.
    shared_ptr<QueryMediaCensorJobDetailResponseBody::MediaCensorJobDetail> mediaCensorJobDetail_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
