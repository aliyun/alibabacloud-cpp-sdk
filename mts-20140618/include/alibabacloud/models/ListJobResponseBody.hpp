// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ListJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobList, jobList_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobList, jobList_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListJobResponseBody() = default ;
    ListJobResponseBody(const ListJobResponseBody &) = default ;
    ListJobResponseBody(ListJobResponseBody &&) = default ;
    ListJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobResponseBody() = default ;
    ListJobResponseBody& operator=(const ListJobResponseBody &) = default ;
    ListJobResponseBody& operator=(ListJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobList& obj) { 
        DARABONBA_PTR_TO_JSON(Job, job_);
      };
      friend void from_json(const Darabonba::Json& j, JobList& obj) { 
        DARABONBA_PTR_FROM_JSON(Job, job_);
      };
      JobList() = default ;
      JobList(const JobList &) = default ;
      JobList(JobList &&) = default ;
      JobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobList() = default ;
      JobList& operator=(const JobList &) = default ;
      JobList& operator=(JobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Job : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Job& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(Input, input_);
          DARABONBA_PTR_TO_JSON(JobId, jobId_);
          DARABONBA_PTR_TO_JSON(MNSMessageResult, MNSMessageResult_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Output, output_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_TO_JSON(State, state_);
        };
        friend void from_json(const Darabonba::Json& j, Job& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(Input, input_);
          DARABONBA_PTR_FROM_JSON(JobId, jobId_);
          DARABONBA_PTR_FROM_JSON(MNSMessageResult, MNSMessageResult_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Output, output_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_FROM_JSON(State, state_);
        };
        Job() = default ;
        Job(const Job &) = default ;
        Job(Job &&) = default ;
        Job(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Job() = default ;
        Job& operator=(const Job &) = default ;
        Job& operator=(Job &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Output : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Output& obj) { 
            DARABONBA_PTR_TO_JSON(Audio, audio_);
            DARABONBA_PTR_TO_JSON(AudioStreamMap, audioStreamMap_);
            DARABONBA_PTR_TO_JSON(Clip, clip_);
            DARABONBA_PTR_TO_JSON(Container, container_);
            DARABONBA_PTR_TO_JSON(DeWatermark, deWatermark_);
            DARABONBA_PTR_TO_JSON(Encryption, encryption_);
            DARABONBA_PTR_TO_JSON(M3U8NonStandardSupport, m3U8NonStandardSupport_);
            DARABONBA_PTR_TO_JSON(MergeConfigUrl, mergeConfigUrl_);
            DARABONBA_PTR_TO_JSON(MergeList, mergeList_);
            DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
            DARABONBA_PTR_TO_JSON(OpeningList, openingList_);
            DARABONBA_PTR_TO_JSON(OutSubtitleList, outSubtitleList_);
            DARABONBA_PTR_TO_JSON(OutputFile, outputFile_);
            DARABONBA_PTR_TO_JSON(Priority, priority_);
            DARABONBA_PTR_TO_JSON(Properties, properties_);
            DARABONBA_PTR_TO_JSON(Rotate, rotate_);
            DARABONBA_PTR_TO_JSON(SubtitleConfig, subtitleConfig_);
            DARABONBA_PTR_TO_JSON(SuperReso, superReso_);
            DARABONBA_PTR_TO_JSON(TailSlateList, tailSlateList_);
            DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
            DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
            DARABONBA_PTR_TO_JSON(UserData, userData_);
            DARABONBA_PTR_TO_JSON(Video, video_);
            DARABONBA_PTR_TO_JSON(VideoStreamMap, videoStreamMap_);
            DARABONBA_PTR_TO_JSON(WaterMarkConfigUrl, waterMarkConfigUrl_);
            DARABONBA_PTR_TO_JSON(WaterMarkList, waterMarkList_);
          };
          friend void from_json(const Darabonba::Json& j, Output& obj) { 
            DARABONBA_PTR_FROM_JSON(Audio, audio_);
            DARABONBA_PTR_FROM_JSON(AudioStreamMap, audioStreamMap_);
            DARABONBA_PTR_FROM_JSON(Clip, clip_);
            DARABONBA_PTR_FROM_JSON(Container, container_);
            DARABONBA_PTR_FROM_JSON(DeWatermark, deWatermark_);
            DARABONBA_PTR_FROM_JSON(Encryption, encryption_);
            DARABONBA_PTR_FROM_JSON(M3U8NonStandardSupport, m3U8NonStandardSupport_);
            DARABONBA_PTR_FROM_JSON(MergeConfigUrl, mergeConfigUrl_);
            DARABONBA_PTR_FROM_JSON(MergeList, mergeList_);
            DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
            DARABONBA_PTR_FROM_JSON(OpeningList, openingList_);
            DARABONBA_PTR_FROM_JSON(OutSubtitleList, outSubtitleList_);
            DARABONBA_PTR_FROM_JSON(OutputFile, outputFile_);
            DARABONBA_PTR_FROM_JSON(Priority, priority_);
            DARABONBA_PTR_FROM_JSON(Properties, properties_);
            DARABONBA_PTR_FROM_JSON(Rotate, rotate_);
            DARABONBA_PTR_FROM_JSON(SubtitleConfig, subtitleConfig_);
            DARABONBA_PTR_FROM_JSON(SuperReso, superReso_);
            DARABONBA_PTR_FROM_JSON(TailSlateList, tailSlateList_);
            DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
            DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
            DARABONBA_PTR_FROM_JSON(UserData, userData_);
            DARABONBA_PTR_FROM_JSON(Video, video_);
            DARABONBA_PTR_FROM_JSON(VideoStreamMap, videoStreamMap_);
            DARABONBA_PTR_FROM_JSON(WaterMarkConfigUrl, waterMarkConfigUrl_);
            DARABONBA_PTR_FROM_JSON(WaterMarkList, waterMarkList_);
          };
          Output() = default ;
          Output(const Output &) = default ;
          Output(Output &&) = default ;
          Output(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Output() = default ;
          Output& operator=(const Output &) = default ;
          Output& operator=(Output &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class WaterMarkList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const WaterMarkList& obj) { 
              DARABONBA_PTR_TO_JSON(WaterMark, waterMark_);
            };
            friend void from_json(const Darabonba::Json& j, WaterMarkList& obj) { 
              DARABONBA_PTR_FROM_JSON(WaterMark, waterMark_);
            };
            WaterMarkList() = default ;
            WaterMarkList(const WaterMarkList &) = default ;
            WaterMarkList(WaterMarkList &&) = default ;
            WaterMarkList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~WaterMarkList() = default ;
            WaterMarkList& operator=(const WaterMarkList &) = default ;
            WaterMarkList& operator=(WaterMarkList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class WaterMark : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const WaterMark& obj) { 
                DARABONBA_PTR_TO_JSON(Dx, dx_);
                DARABONBA_PTR_TO_JSON(Dy, dy_);
                DARABONBA_PTR_TO_JSON(Height, height_);
                DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
                DARABONBA_PTR_TO_JSON(ReferPos, referPos_);
                DARABONBA_PTR_TO_JSON(Type, type_);
                DARABONBA_PTR_TO_JSON(WaterMarkTemplateId, waterMarkTemplateId_);
                DARABONBA_PTR_TO_JSON(Width, width_);
              };
              friend void from_json(const Darabonba::Json& j, WaterMark& obj) { 
                DARABONBA_PTR_FROM_JSON(Dx, dx_);
                DARABONBA_PTR_FROM_JSON(Dy, dy_);
                DARABONBA_PTR_FROM_JSON(Height, height_);
                DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
                DARABONBA_PTR_FROM_JSON(ReferPos, referPos_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
                DARABONBA_PTR_FROM_JSON(WaterMarkTemplateId, waterMarkTemplateId_);
                DARABONBA_PTR_FROM_JSON(Width, width_);
              };
              WaterMark() = default ;
              WaterMark(const WaterMark &) = default ;
              WaterMark(WaterMark &&) = default ;
              WaterMark(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~WaterMark() = default ;
              WaterMark& operator=(const WaterMark &) = default ;
              WaterMark& operator=(WaterMark &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class InputFile : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const InputFile& obj) { 
                  DARABONBA_PTR_TO_JSON(Bucket, bucket_);
                  DARABONBA_PTR_TO_JSON(Location, location_);
                  DARABONBA_PTR_TO_JSON(Object, object_);
                };
                friend void from_json(const Darabonba::Json& j, InputFile& obj) { 
                  DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
                  DARABONBA_PTR_FROM_JSON(Location, location_);
                  DARABONBA_PTR_FROM_JSON(Object, object_);
                };
                InputFile() = default ;
                InputFile(const InputFile &) = default ;
                InputFile(InputFile &&) = default ;
                InputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~InputFile() = default ;
                InputFile& operator=(const InputFile &) = default ;
                InputFile& operator=(InputFile &&) = default ;
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
                inline InputFile& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


                // location Field Functions 
                bool hasLocation() const { return this->location_ != nullptr;};
                void deleteLocation() { this->location_ = nullptr;};
                inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
                inline InputFile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


                // object Field Functions 
                bool hasObject() const { return this->object_ != nullptr;};
                void deleteObject() { this->object_ = nullptr;};
                inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
                inline InputFile& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


              protected:
                shared_ptr<string> bucket_ {};
                shared_ptr<string> location_ {};
                shared_ptr<string> object_ {};
              };

              virtual bool empty() const override { return this->dx_ == nullptr
        && this->dy_ == nullptr && this->height_ == nullptr && this->inputFile_ == nullptr && this->referPos_ == nullptr && this->type_ == nullptr
        && this->waterMarkTemplateId_ == nullptr && this->width_ == nullptr; };
              // dx Field Functions 
              bool hasDx() const { return this->dx_ != nullptr;};
              void deleteDx() { this->dx_ = nullptr;};
              inline string getDx() const { DARABONBA_PTR_GET_DEFAULT(dx_, "") };
              inline WaterMark& setDx(string dx) { DARABONBA_PTR_SET_VALUE(dx_, dx) };


              // dy Field Functions 
              bool hasDy() const { return this->dy_ != nullptr;};
              void deleteDy() { this->dy_ = nullptr;};
              inline string getDy() const { DARABONBA_PTR_GET_DEFAULT(dy_, "") };
              inline WaterMark& setDy(string dy) { DARABONBA_PTR_SET_VALUE(dy_, dy) };


              // height Field Functions 
              bool hasHeight() const { return this->height_ != nullptr;};
              void deleteHeight() { this->height_ = nullptr;};
              inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
              inline WaterMark& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


              // inputFile Field Functions 
              bool hasInputFile() const { return this->inputFile_ != nullptr;};
              void deleteInputFile() { this->inputFile_ = nullptr;};
              inline const WaterMark::InputFile & getInputFile() const { DARABONBA_PTR_GET_CONST(inputFile_, WaterMark::InputFile) };
              inline WaterMark::InputFile getInputFile() { DARABONBA_PTR_GET(inputFile_, WaterMark::InputFile) };
              inline WaterMark& setInputFile(const WaterMark::InputFile & inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };
              inline WaterMark& setInputFile(WaterMark::InputFile && inputFile) { DARABONBA_PTR_SET_RVALUE(inputFile_, inputFile) };


              // referPos Field Functions 
              bool hasReferPos() const { return this->referPos_ != nullptr;};
              void deleteReferPos() { this->referPos_ = nullptr;};
              inline string getReferPos() const { DARABONBA_PTR_GET_DEFAULT(referPos_, "") };
              inline WaterMark& setReferPos(string referPos) { DARABONBA_PTR_SET_VALUE(referPos_, referPos) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline WaterMark& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


              // waterMarkTemplateId Field Functions 
              bool hasWaterMarkTemplateId() const { return this->waterMarkTemplateId_ != nullptr;};
              void deleteWaterMarkTemplateId() { this->waterMarkTemplateId_ = nullptr;};
              inline string getWaterMarkTemplateId() const { DARABONBA_PTR_GET_DEFAULT(waterMarkTemplateId_, "") };
              inline WaterMark& setWaterMarkTemplateId(string waterMarkTemplateId) { DARABONBA_PTR_SET_VALUE(waterMarkTemplateId_, waterMarkTemplateId) };


              // width Field Functions 
              bool hasWidth() const { return this->width_ != nullptr;};
              void deleteWidth() { this->width_ = nullptr;};
              inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
              inline WaterMark& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


            protected:
              shared_ptr<string> dx_ {};
              shared_ptr<string> dy_ {};
              shared_ptr<string> height_ {};
              shared_ptr<WaterMark::InputFile> inputFile_ {};
              shared_ptr<string> referPos_ {};
              shared_ptr<string> type_ {};
              shared_ptr<string> waterMarkTemplateId_ {};
              shared_ptr<string> width_ {};
            };

            virtual bool empty() const override { return this->waterMark_ == nullptr; };
            // waterMark Field Functions 
            bool hasWaterMark() const { return this->waterMark_ != nullptr;};
            void deleteWaterMark() { this->waterMark_ = nullptr;};
            inline const vector<WaterMarkList::WaterMark> & getWaterMark() const { DARABONBA_PTR_GET_CONST(waterMark_, vector<WaterMarkList::WaterMark>) };
            inline vector<WaterMarkList::WaterMark> getWaterMark() { DARABONBA_PTR_GET(waterMark_, vector<WaterMarkList::WaterMark>) };
            inline WaterMarkList& setWaterMark(const vector<WaterMarkList::WaterMark> & waterMark) { DARABONBA_PTR_SET_VALUE(waterMark_, waterMark) };
            inline WaterMarkList& setWaterMark(vector<WaterMarkList::WaterMark> && waterMark) { DARABONBA_PTR_SET_RVALUE(waterMark_, waterMark) };


          protected:
            shared_ptr<vector<WaterMarkList::WaterMark>> waterMark_ {};
          };

          class Video : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Video& obj) { 
              DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_TO_JSON(BitrateBnd, bitrateBnd_);
              DARABONBA_PTR_TO_JSON(Bufsize, bufsize_);
              DARABONBA_PTR_TO_JSON(Codec, codec_);
              DARABONBA_PTR_TO_JSON(Crf, crf_);
              DARABONBA_PTR_TO_JSON(Crop, crop_);
              DARABONBA_PTR_TO_JSON(Degrain, degrain_);
              DARABONBA_PTR_TO_JSON(Fps, fps_);
              DARABONBA_PTR_TO_JSON(Gop, gop_);
              DARABONBA_PTR_TO_JSON(Height, height_);
              DARABONBA_PTR_TO_JSON(MaxFps, maxFps_);
              DARABONBA_PTR_TO_JSON(Maxrate, maxrate_);
              DARABONBA_PTR_TO_JSON(Pad, pad_);
              DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
              DARABONBA_PTR_TO_JSON(Preset, preset_);
              DARABONBA_PTR_TO_JSON(Profile, profile_);
              DARABONBA_PTR_TO_JSON(Qscale, qscale_);
              DARABONBA_PTR_TO_JSON(ResoPriority, resoPriority_);
              DARABONBA_PTR_TO_JSON(ScanMode, scanMode_);
              DARABONBA_PTR_TO_JSON(Width, width_);
            };
            friend void from_json(const Darabonba::Json& j, Video& obj) { 
              DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_FROM_JSON(BitrateBnd, bitrateBnd_);
              DARABONBA_PTR_FROM_JSON(Bufsize, bufsize_);
              DARABONBA_PTR_FROM_JSON(Codec, codec_);
              DARABONBA_PTR_FROM_JSON(Crf, crf_);
              DARABONBA_PTR_FROM_JSON(Crop, crop_);
              DARABONBA_PTR_FROM_JSON(Degrain, degrain_);
              DARABONBA_PTR_FROM_JSON(Fps, fps_);
              DARABONBA_PTR_FROM_JSON(Gop, gop_);
              DARABONBA_PTR_FROM_JSON(Height, height_);
              DARABONBA_PTR_FROM_JSON(MaxFps, maxFps_);
              DARABONBA_PTR_FROM_JSON(Maxrate, maxrate_);
              DARABONBA_PTR_FROM_JSON(Pad, pad_);
              DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
              DARABONBA_PTR_FROM_JSON(Preset, preset_);
              DARABONBA_PTR_FROM_JSON(Profile, profile_);
              DARABONBA_PTR_FROM_JSON(Qscale, qscale_);
              DARABONBA_PTR_FROM_JSON(ResoPriority, resoPriority_);
              DARABONBA_PTR_FROM_JSON(ScanMode, scanMode_);
              DARABONBA_PTR_FROM_JSON(Width, width_);
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
            class BitrateBnd : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const BitrateBnd& obj) { 
                DARABONBA_PTR_TO_JSON(Max, max_);
                DARABONBA_PTR_TO_JSON(Min, min_);
              };
              friend void from_json(const Darabonba::Json& j, BitrateBnd& obj) { 
                DARABONBA_PTR_FROM_JSON(Max, max_);
                DARABONBA_PTR_FROM_JSON(Min, min_);
              };
              BitrateBnd() = default ;
              BitrateBnd(const BitrateBnd &) = default ;
              BitrateBnd(BitrateBnd &&) = default ;
              BitrateBnd(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~BitrateBnd() = default ;
              BitrateBnd& operator=(const BitrateBnd &) = default ;
              BitrateBnd& operator=(BitrateBnd &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->max_ == nullptr
        && this->min_ == nullptr; };
              // max Field Functions 
              bool hasMax() const { return this->max_ != nullptr;};
              void deleteMax() { this->max_ = nullptr;};
              inline string getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, "") };
              inline BitrateBnd& setMax(string max) { DARABONBA_PTR_SET_VALUE(max_, max) };


              // min Field Functions 
              bool hasMin() const { return this->min_ != nullptr;};
              void deleteMin() { this->min_ = nullptr;};
              inline string getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, "") };
              inline BitrateBnd& setMin(string min) { DARABONBA_PTR_SET_VALUE(min_, min) };


            protected:
              shared_ptr<string> max_ {};
              shared_ptr<string> min_ {};
            };

            virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->bitrateBnd_ == nullptr && this->bufsize_ == nullptr && this->codec_ == nullptr && this->crf_ == nullptr && this->crop_ == nullptr
        && this->degrain_ == nullptr && this->fps_ == nullptr && this->gop_ == nullptr && this->height_ == nullptr && this->maxFps_ == nullptr
        && this->maxrate_ == nullptr && this->pad_ == nullptr && this->pixFmt_ == nullptr && this->preset_ == nullptr && this->profile_ == nullptr
        && this->qscale_ == nullptr && this->resoPriority_ == nullptr && this->scanMode_ == nullptr && this->width_ == nullptr; };
            // bitrate Field Functions 
            bool hasBitrate() const { return this->bitrate_ != nullptr;};
            void deleteBitrate() { this->bitrate_ = nullptr;};
            inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
            inline Video& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


            // bitrateBnd Field Functions 
            bool hasBitrateBnd() const { return this->bitrateBnd_ != nullptr;};
            void deleteBitrateBnd() { this->bitrateBnd_ = nullptr;};
            inline const Video::BitrateBnd & getBitrateBnd() const { DARABONBA_PTR_GET_CONST(bitrateBnd_, Video::BitrateBnd) };
            inline Video::BitrateBnd getBitrateBnd() { DARABONBA_PTR_GET(bitrateBnd_, Video::BitrateBnd) };
            inline Video& setBitrateBnd(const Video::BitrateBnd & bitrateBnd) { DARABONBA_PTR_SET_VALUE(bitrateBnd_, bitrateBnd) };
            inline Video& setBitrateBnd(Video::BitrateBnd && bitrateBnd) { DARABONBA_PTR_SET_RVALUE(bitrateBnd_, bitrateBnd) };


            // bufsize Field Functions 
            bool hasBufsize() const { return this->bufsize_ != nullptr;};
            void deleteBufsize() { this->bufsize_ = nullptr;};
            inline string getBufsize() const { DARABONBA_PTR_GET_DEFAULT(bufsize_, "") };
            inline Video& setBufsize(string bufsize) { DARABONBA_PTR_SET_VALUE(bufsize_, bufsize) };


            // codec Field Functions 
            bool hasCodec() const { return this->codec_ != nullptr;};
            void deleteCodec() { this->codec_ = nullptr;};
            inline string getCodec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
            inline Video& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


            // crf Field Functions 
            bool hasCrf() const { return this->crf_ != nullptr;};
            void deleteCrf() { this->crf_ = nullptr;};
            inline string getCrf() const { DARABONBA_PTR_GET_DEFAULT(crf_, "") };
            inline Video& setCrf(string crf) { DARABONBA_PTR_SET_VALUE(crf_, crf) };


            // crop Field Functions 
            bool hasCrop() const { return this->crop_ != nullptr;};
            void deleteCrop() { this->crop_ = nullptr;};
            inline string getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
            inline Video& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


            // degrain Field Functions 
            bool hasDegrain() const { return this->degrain_ != nullptr;};
            void deleteDegrain() { this->degrain_ = nullptr;};
            inline string getDegrain() const { DARABONBA_PTR_GET_DEFAULT(degrain_, "") };
            inline Video& setDegrain(string degrain) { DARABONBA_PTR_SET_VALUE(degrain_, degrain) };


            // fps Field Functions 
            bool hasFps() const { return this->fps_ != nullptr;};
            void deleteFps() { this->fps_ = nullptr;};
            inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
            inline Video& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


            // gop Field Functions 
            bool hasGop() const { return this->gop_ != nullptr;};
            void deleteGop() { this->gop_ = nullptr;};
            inline string getGop() const { DARABONBA_PTR_GET_DEFAULT(gop_, "") };
            inline Video& setGop(string gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


            // height Field Functions 
            bool hasHeight() const { return this->height_ != nullptr;};
            void deleteHeight() { this->height_ = nullptr;};
            inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
            inline Video& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


            // maxFps Field Functions 
            bool hasMaxFps() const { return this->maxFps_ != nullptr;};
            void deleteMaxFps() { this->maxFps_ = nullptr;};
            inline string getMaxFps() const { DARABONBA_PTR_GET_DEFAULT(maxFps_, "") };
            inline Video& setMaxFps(string maxFps) { DARABONBA_PTR_SET_VALUE(maxFps_, maxFps) };


            // maxrate Field Functions 
            bool hasMaxrate() const { return this->maxrate_ != nullptr;};
            void deleteMaxrate() { this->maxrate_ = nullptr;};
            inline string getMaxrate() const { DARABONBA_PTR_GET_DEFAULT(maxrate_, "") };
            inline Video& setMaxrate(string maxrate) { DARABONBA_PTR_SET_VALUE(maxrate_, maxrate) };


            // pad Field Functions 
            bool hasPad() const { return this->pad_ != nullptr;};
            void deletePad() { this->pad_ = nullptr;};
            inline string getPad() const { DARABONBA_PTR_GET_DEFAULT(pad_, "") };
            inline Video& setPad(string pad) { DARABONBA_PTR_SET_VALUE(pad_, pad) };


            // pixFmt Field Functions 
            bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
            void deletePixFmt() { this->pixFmt_ = nullptr;};
            inline string getPixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
            inline Video& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


            // preset Field Functions 
            bool hasPreset() const { return this->preset_ != nullptr;};
            void deletePreset() { this->preset_ = nullptr;};
            inline string getPreset() const { DARABONBA_PTR_GET_DEFAULT(preset_, "") };
            inline Video& setPreset(string preset) { DARABONBA_PTR_SET_VALUE(preset_, preset) };


            // profile Field Functions 
            bool hasProfile() const { return this->profile_ != nullptr;};
            void deleteProfile() { this->profile_ = nullptr;};
            inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
            inline Video& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


            // qscale Field Functions 
            bool hasQscale() const { return this->qscale_ != nullptr;};
            void deleteQscale() { this->qscale_ = nullptr;};
            inline string getQscale() const { DARABONBA_PTR_GET_DEFAULT(qscale_, "") };
            inline Video& setQscale(string qscale) { DARABONBA_PTR_SET_VALUE(qscale_, qscale) };


            // resoPriority Field Functions 
            bool hasResoPriority() const { return this->resoPriority_ != nullptr;};
            void deleteResoPriority() { this->resoPriority_ = nullptr;};
            inline string getResoPriority() const { DARABONBA_PTR_GET_DEFAULT(resoPriority_, "") };
            inline Video& setResoPriority(string resoPriority) { DARABONBA_PTR_SET_VALUE(resoPriority_, resoPriority) };


            // scanMode Field Functions 
            bool hasScanMode() const { return this->scanMode_ != nullptr;};
            void deleteScanMode() { this->scanMode_ = nullptr;};
            inline string getScanMode() const { DARABONBA_PTR_GET_DEFAULT(scanMode_, "") };
            inline Video& setScanMode(string scanMode) { DARABONBA_PTR_SET_VALUE(scanMode_, scanMode) };


            // width Field Functions 
            bool hasWidth() const { return this->width_ != nullptr;};
            void deleteWidth() { this->width_ = nullptr;};
            inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
            inline Video& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


          protected:
            shared_ptr<string> bitrate_ {};
            shared_ptr<Video::BitrateBnd> bitrateBnd_ {};
            shared_ptr<string> bufsize_ {};
            shared_ptr<string> codec_ {};
            shared_ptr<string> crf_ {};
            shared_ptr<string> crop_ {};
            shared_ptr<string> degrain_ {};
            shared_ptr<string> fps_ {};
            shared_ptr<string> gop_ {};
            shared_ptr<string> height_ {};
            shared_ptr<string> maxFps_ {};
            shared_ptr<string> maxrate_ {};
            shared_ptr<string> pad_ {};
            shared_ptr<string> pixFmt_ {};
            shared_ptr<string> preset_ {};
            shared_ptr<string> profile_ {};
            shared_ptr<string> qscale_ {};
            shared_ptr<string> resoPriority_ {};
            shared_ptr<string> scanMode_ {};
            shared_ptr<string> width_ {};
          };

          class TransConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TransConfig& obj) { 
              DARABONBA_PTR_TO_JSON(AdjDarMethod, adjDarMethod_);
              DARABONBA_PTR_TO_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
              DARABONBA_PTR_TO_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
              DARABONBA_PTR_TO_JSON(IsCheckReso, isCheckReso_);
              DARABONBA_PTR_TO_JSON(IsCheckResoFail, isCheckResoFail_);
              DARABONBA_PTR_TO_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
              DARABONBA_PTR_TO_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
              DARABONBA_PTR_TO_JSON(TransMode, transMode_);
            };
            friend void from_json(const Darabonba::Json& j, TransConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(AdjDarMethod, adjDarMethod_);
              DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
              DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
              DARABONBA_PTR_FROM_JSON(IsCheckReso, isCheckReso_);
              DARABONBA_PTR_FROM_JSON(IsCheckResoFail, isCheckResoFail_);
              DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
              DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
              DARABONBA_PTR_FROM_JSON(TransMode, transMode_);
            };
            TransConfig() = default ;
            TransConfig(const TransConfig &) = default ;
            TransConfig(TransConfig &&) = default ;
            TransConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TransConfig() = default ;
            TransConfig& operator=(const TransConfig &) = default ;
            TransConfig& operator=(TransConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->adjDarMethod_ == nullptr
        && this->isCheckAudioBitrate_ == nullptr && this->isCheckAudioBitrateFail_ == nullptr && this->isCheckReso_ == nullptr && this->isCheckResoFail_ == nullptr && this->isCheckVideoBitrate_ == nullptr
        && this->isCheckVideoBitrateFail_ == nullptr && this->transMode_ == nullptr; };
            // adjDarMethod Field Functions 
            bool hasAdjDarMethod() const { return this->adjDarMethod_ != nullptr;};
            void deleteAdjDarMethod() { this->adjDarMethod_ = nullptr;};
            inline string getAdjDarMethod() const { DARABONBA_PTR_GET_DEFAULT(adjDarMethod_, "") };
            inline TransConfig& setAdjDarMethod(string adjDarMethod) { DARABONBA_PTR_SET_VALUE(adjDarMethod_, adjDarMethod) };


            // isCheckAudioBitrate Field Functions 
            bool hasIsCheckAudioBitrate() const { return this->isCheckAudioBitrate_ != nullptr;};
            void deleteIsCheckAudioBitrate() { this->isCheckAudioBitrate_ = nullptr;};
            inline string getIsCheckAudioBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrate_, "") };
            inline TransConfig& setIsCheckAudioBitrate(string isCheckAudioBitrate) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrate_, isCheckAudioBitrate) };


            // isCheckAudioBitrateFail Field Functions 
            bool hasIsCheckAudioBitrateFail() const { return this->isCheckAudioBitrateFail_ != nullptr;};
            void deleteIsCheckAudioBitrateFail() { this->isCheckAudioBitrateFail_ = nullptr;};
            inline string getIsCheckAudioBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrateFail_, "") };
            inline TransConfig& setIsCheckAudioBitrateFail(string isCheckAudioBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrateFail_, isCheckAudioBitrateFail) };


            // isCheckReso Field Functions 
            bool hasIsCheckReso() const { return this->isCheckReso_ != nullptr;};
            void deleteIsCheckReso() { this->isCheckReso_ = nullptr;};
            inline string getIsCheckReso() const { DARABONBA_PTR_GET_DEFAULT(isCheckReso_, "") };
            inline TransConfig& setIsCheckReso(string isCheckReso) { DARABONBA_PTR_SET_VALUE(isCheckReso_, isCheckReso) };


            // isCheckResoFail Field Functions 
            bool hasIsCheckResoFail() const { return this->isCheckResoFail_ != nullptr;};
            void deleteIsCheckResoFail() { this->isCheckResoFail_ = nullptr;};
            inline string getIsCheckResoFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckResoFail_, "") };
            inline TransConfig& setIsCheckResoFail(string isCheckResoFail) { DARABONBA_PTR_SET_VALUE(isCheckResoFail_, isCheckResoFail) };


            // isCheckVideoBitrate Field Functions 
            bool hasIsCheckVideoBitrate() const { return this->isCheckVideoBitrate_ != nullptr;};
            void deleteIsCheckVideoBitrate() { this->isCheckVideoBitrate_ = nullptr;};
            inline string getIsCheckVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrate_, "") };
            inline TransConfig& setIsCheckVideoBitrate(string isCheckVideoBitrate) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrate_, isCheckVideoBitrate) };


            // isCheckVideoBitrateFail Field Functions 
            bool hasIsCheckVideoBitrateFail() const { return this->isCheckVideoBitrateFail_ != nullptr;};
            void deleteIsCheckVideoBitrateFail() { this->isCheckVideoBitrateFail_ = nullptr;};
            inline string getIsCheckVideoBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrateFail_, "") };
            inline TransConfig& setIsCheckVideoBitrateFail(string isCheckVideoBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrateFail_, isCheckVideoBitrateFail) };


            // transMode Field Functions 
            bool hasTransMode() const { return this->transMode_ != nullptr;};
            void deleteTransMode() { this->transMode_ = nullptr;};
            inline string getTransMode() const { DARABONBA_PTR_GET_DEFAULT(transMode_, "") };
            inline TransConfig& setTransMode(string transMode) { DARABONBA_PTR_SET_VALUE(transMode_, transMode) };


          protected:
            shared_ptr<string> adjDarMethod_ {};
            shared_ptr<string> isCheckAudioBitrate_ {};
            shared_ptr<string> isCheckAudioBitrateFail_ {};
            shared_ptr<string> isCheckReso_ {};
            shared_ptr<string> isCheckResoFail_ {};
            shared_ptr<string> isCheckVideoBitrate_ {};
            shared_ptr<string> isCheckVideoBitrateFail_ {};
            shared_ptr<string> transMode_ {};
          };

          class TailSlateList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TailSlateList& obj) { 
              DARABONBA_PTR_TO_JSON(TailSlate, tailSlate_);
            };
            friend void from_json(const Darabonba::Json& j, TailSlateList& obj) { 
              DARABONBA_PTR_FROM_JSON(TailSlate, tailSlate_);
            };
            TailSlateList() = default ;
            TailSlateList(const TailSlateList &) = default ;
            TailSlateList(TailSlateList &&) = default ;
            TailSlateList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TailSlateList() = default ;
            TailSlateList& operator=(const TailSlateList &) = default ;
            TailSlateList& operator=(TailSlateList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class TailSlate : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const TailSlate& obj) { 
                DARABONBA_PTR_TO_JSON(BgColor, bgColor_);
                DARABONBA_PTR_TO_JSON(BlendDuration, blendDuration_);
                DARABONBA_PTR_TO_JSON(Height, height_);
                DARABONBA_PTR_TO_JSON(IsMergeAudio, isMergeAudio_);
                DARABONBA_PTR_TO_JSON(Start, start_);
                DARABONBA_PTR_TO_JSON(TailUrl, tailUrl_);
                DARABONBA_PTR_TO_JSON(Width, width_);
              };
              friend void from_json(const Darabonba::Json& j, TailSlate& obj) { 
                DARABONBA_PTR_FROM_JSON(BgColor, bgColor_);
                DARABONBA_PTR_FROM_JSON(BlendDuration, blendDuration_);
                DARABONBA_PTR_FROM_JSON(Height, height_);
                DARABONBA_PTR_FROM_JSON(IsMergeAudio, isMergeAudio_);
                DARABONBA_PTR_FROM_JSON(Start, start_);
                DARABONBA_PTR_FROM_JSON(TailUrl, tailUrl_);
                DARABONBA_PTR_FROM_JSON(Width, width_);
              };
              TailSlate() = default ;
              TailSlate(const TailSlate &) = default ;
              TailSlate(TailSlate &&) = default ;
              TailSlate(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~TailSlate() = default ;
              TailSlate& operator=(const TailSlate &) = default ;
              TailSlate& operator=(TailSlate &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->bgColor_ == nullptr
        && this->blendDuration_ == nullptr && this->height_ == nullptr && this->isMergeAudio_ == nullptr && this->start_ == nullptr && this->tailUrl_ == nullptr
        && this->width_ == nullptr; };
              // bgColor Field Functions 
              bool hasBgColor() const { return this->bgColor_ != nullptr;};
              void deleteBgColor() { this->bgColor_ = nullptr;};
              inline string getBgColor() const { DARABONBA_PTR_GET_DEFAULT(bgColor_, "") };
              inline TailSlate& setBgColor(string bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };


              // blendDuration Field Functions 
              bool hasBlendDuration() const { return this->blendDuration_ != nullptr;};
              void deleteBlendDuration() { this->blendDuration_ = nullptr;};
              inline string getBlendDuration() const { DARABONBA_PTR_GET_DEFAULT(blendDuration_, "") };
              inline TailSlate& setBlendDuration(string blendDuration) { DARABONBA_PTR_SET_VALUE(blendDuration_, blendDuration) };


              // height Field Functions 
              bool hasHeight() const { return this->height_ != nullptr;};
              void deleteHeight() { this->height_ = nullptr;};
              inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
              inline TailSlate& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


              // isMergeAudio Field Functions 
              bool hasIsMergeAudio() const { return this->isMergeAudio_ != nullptr;};
              void deleteIsMergeAudio() { this->isMergeAudio_ = nullptr;};
              inline bool getIsMergeAudio() const { DARABONBA_PTR_GET_DEFAULT(isMergeAudio_, false) };
              inline TailSlate& setIsMergeAudio(bool isMergeAudio) { DARABONBA_PTR_SET_VALUE(isMergeAudio_, isMergeAudio) };


              // start Field Functions 
              bool hasStart() const { return this->start_ != nullptr;};
              void deleteStart() { this->start_ = nullptr;};
              inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
              inline TailSlate& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


              // tailUrl Field Functions 
              bool hasTailUrl() const { return this->tailUrl_ != nullptr;};
              void deleteTailUrl() { this->tailUrl_ = nullptr;};
              inline string getTailUrl() const { DARABONBA_PTR_GET_DEFAULT(tailUrl_, "") };
              inline TailSlate& setTailUrl(string tailUrl) { DARABONBA_PTR_SET_VALUE(tailUrl_, tailUrl) };


              // width Field Functions 
              bool hasWidth() const { return this->width_ != nullptr;};
              void deleteWidth() { this->width_ = nullptr;};
              inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
              inline TailSlate& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


            protected:
              shared_ptr<string> bgColor_ {};
              shared_ptr<string> blendDuration_ {};
              shared_ptr<string> height_ {};
              shared_ptr<bool> isMergeAudio_ {};
              shared_ptr<string> start_ {};
              shared_ptr<string> tailUrl_ {};
              shared_ptr<string> width_ {};
            };

            virtual bool empty() const override { return this->tailSlate_ == nullptr; };
            // tailSlate Field Functions 
            bool hasTailSlate() const { return this->tailSlate_ != nullptr;};
            void deleteTailSlate() { this->tailSlate_ = nullptr;};
            inline const vector<TailSlateList::TailSlate> & getTailSlate() const { DARABONBA_PTR_GET_CONST(tailSlate_, vector<TailSlateList::TailSlate>) };
            inline vector<TailSlateList::TailSlate> getTailSlate() { DARABONBA_PTR_GET(tailSlate_, vector<TailSlateList::TailSlate>) };
            inline TailSlateList& setTailSlate(const vector<TailSlateList::TailSlate> & tailSlate) { DARABONBA_PTR_SET_VALUE(tailSlate_, tailSlate) };
            inline TailSlateList& setTailSlate(vector<TailSlateList::TailSlate> && tailSlate) { DARABONBA_PTR_SET_RVALUE(tailSlate_, tailSlate) };


          protected:
            shared_ptr<vector<TailSlateList::TailSlate>> tailSlate_ {};
          };

          class SuperReso : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SuperReso& obj) { 
              DARABONBA_PTR_TO_JSON(IsHalfSample, isHalfSample_);
            };
            friend void from_json(const Darabonba::Json& j, SuperReso& obj) { 
              DARABONBA_PTR_FROM_JSON(IsHalfSample, isHalfSample_);
            };
            SuperReso() = default ;
            SuperReso(const SuperReso &) = default ;
            SuperReso(SuperReso &&) = default ;
            SuperReso(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SuperReso() = default ;
            SuperReso& operator=(const SuperReso &) = default ;
            SuperReso& operator=(SuperReso &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->isHalfSample_ == nullptr; };
            // isHalfSample Field Functions 
            bool hasIsHalfSample() const { return this->isHalfSample_ != nullptr;};
            void deleteIsHalfSample() { this->isHalfSample_ = nullptr;};
            inline string getIsHalfSample() const { DARABONBA_PTR_GET_DEFAULT(isHalfSample_, "") };
            inline SuperReso& setIsHalfSample(string isHalfSample) { DARABONBA_PTR_SET_VALUE(isHalfSample_, isHalfSample) };


          protected:
            shared_ptr<string> isHalfSample_ {};
          };

          class SubtitleConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SubtitleConfig& obj) { 
              DARABONBA_PTR_TO_JSON(ExtSubtitleList, extSubtitleList_);
              DARABONBA_PTR_TO_JSON(SubtitleList, subtitleList_);
            };
            friend void from_json(const Darabonba::Json& j, SubtitleConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(ExtSubtitleList, extSubtitleList_);
              DARABONBA_PTR_FROM_JSON(SubtitleList, subtitleList_);
            };
            SubtitleConfig() = default ;
            SubtitleConfig(const SubtitleConfig &) = default ;
            SubtitleConfig(SubtitleConfig &&) = default ;
            SubtitleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SubtitleConfig() = default ;
            SubtitleConfig& operator=(const SubtitleConfig &) = default ;
            SubtitleConfig& operator=(SubtitleConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SubtitleList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SubtitleList& obj) { 
                DARABONBA_PTR_TO_JSON(Subtitle, subtitle_);
              };
              friend void from_json(const Darabonba::Json& j, SubtitleList& obj) { 
                DARABONBA_PTR_FROM_JSON(Subtitle, subtitle_);
              };
              SubtitleList() = default ;
              SubtitleList(const SubtitleList &) = default ;
              SubtitleList(SubtitleList &&) = default ;
              SubtitleList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SubtitleList() = default ;
              SubtitleList& operator=(const SubtitleList &) = default ;
              SubtitleList& operator=(SubtitleList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Subtitle : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Subtitle& obj) { 
                  DARABONBA_PTR_TO_JSON(Map, map_);
                };
                friend void from_json(const Darabonba::Json& j, Subtitle& obj) { 
                  DARABONBA_PTR_FROM_JSON(Map, map_);
                };
                Subtitle() = default ;
                Subtitle(const Subtitle &) = default ;
                Subtitle(Subtitle &&) = default ;
                Subtitle(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Subtitle() = default ;
                Subtitle& operator=(const Subtitle &) = default ;
                Subtitle& operator=(Subtitle &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->map_ == nullptr; };
                // map Field Functions 
                bool hasMap() const { return this->map_ != nullptr;};
                void deleteMap() { this->map_ = nullptr;};
                inline string getMap() const { DARABONBA_PTR_GET_DEFAULT(map_, "") };
                inline Subtitle& setMap(string _map) { DARABONBA_PTR_SET_VALUE(map_, _map) };


              protected:
                shared_ptr<string> map_ {};
              };

              virtual bool empty() const override { return this->subtitle_ == nullptr; };
              // subtitle Field Functions 
              bool hasSubtitle() const { return this->subtitle_ != nullptr;};
              void deleteSubtitle() { this->subtitle_ = nullptr;};
              inline const vector<SubtitleList::Subtitle> & getSubtitle() const { DARABONBA_PTR_GET_CONST(subtitle_, vector<SubtitleList::Subtitle>) };
              inline vector<SubtitleList::Subtitle> getSubtitle() { DARABONBA_PTR_GET(subtitle_, vector<SubtitleList::Subtitle>) };
              inline SubtitleList& setSubtitle(const vector<SubtitleList::Subtitle> & subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };
              inline SubtitleList& setSubtitle(vector<SubtitleList::Subtitle> && subtitle) { DARABONBA_PTR_SET_RVALUE(subtitle_, subtitle) };


            protected:
              shared_ptr<vector<SubtitleList::Subtitle>> subtitle_ {};
            };

            class ExtSubtitleList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ExtSubtitleList& obj) { 
                DARABONBA_PTR_TO_JSON(ExtSubtitle, extSubtitle_);
              };
              friend void from_json(const Darabonba::Json& j, ExtSubtitleList& obj) { 
                DARABONBA_PTR_FROM_JSON(ExtSubtitle, extSubtitle_);
              };
              ExtSubtitleList() = default ;
              ExtSubtitleList(const ExtSubtitleList &) = default ;
              ExtSubtitleList(ExtSubtitleList &&) = default ;
              ExtSubtitleList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ExtSubtitleList() = default ;
              ExtSubtitleList& operator=(const ExtSubtitleList &) = default ;
              ExtSubtitleList& operator=(ExtSubtitleList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ExtSubtitle : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ExtSubtitle& obj) { 
                  DARABONBA_PTR_TO_JSON(CharEnc, charEnc_);
                  DARABONBA_PTR_TO_JSON(FontName, fontName_);
                  DARABONBA_PTR_TO_JSON(Input, input_);
                };
                friend void from_json(const Darabonba::Json& j, ExtSubtitle& obj) { 
                  DARABONBA_PTR_FROM_JSON(CharEnc, charEnc_);
                  DARABONBA_PTR_FROM_JSON(FontName, fontName_);
                  DARABONBA_PTR_FROM_JSON(Input, input_);
                };
                ExtSubtitle() = default ;
                ExtSubtitle(const ExtSubtitle &) = default ;
                ExtSubtitle(ExtSubtitle &&) = default ;
                ExtSubtitle(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ExtSubtitle() = default ;
                ExtSubtitle& operator=(const ExtSubtitle &) = default ;
                ExtSubtitle& operator=(ExtSubtitle &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
                  shared_ptr<string> bucket_ {};
                  shared_ptr<string> location_ {};
                  shared_ptr<string> object_ {};
                };

                virtual bool empty() const override { return this->charEnc_ == nullptr
        && this->fontName_ == nullptr && this->input_ == nullptr; };
                // charEnc Field Functions 
                bool hasCharEnc() const { return this->charEnc_ != nullptr;};
                void deleteCharEnc() { this->charEnc_ = nullptr;};
                inline string getCharEnc() const { DARABONBA_PTR_GET_DEFAULT(charEnc_, "") };
                inline ExtSubtitle& setCharEnc(string charEnc) { DARABONBA_PTR_SET_VALUE(charEnc_, charEnc) };


                // fontName Field Functions 
                bool hasFontName() const { return this->fontName_ != nullptr;};
                void deleteFontName() { this->fontName_ = nullptr;};
                inline string getFontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
                inline ExtSubtitle& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


                // input Field Functions 
                bool hasInput() const { return this->input_ != nullptr;};
                void deleteInput() { this->input_ = nullptr;};
                inline const ExtSubtitle::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, ExtSubtitle::Input) };
                inline ExtSubtitle::Input getInput() { DARABONBA_PTR_GET(input_, ExtSubtitle::Input) };
                inline ExtSubtitle& setInput(const ExtSubtitle::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
                inline ExtSubtitle& setInput(ExtSubtitle::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


              protected:
                shared_ptr<string> charEnc_ {};
                shared_ptr<string> fontName_ {};
                shared_ptr<ExtSubtitle::Input> input_ {};
              };

              virtual bool empty() const override { return this->extSubtitle_ == nullptr; };
              // extSubtitle Field Functions 
              bool hasExtSubtitle() const { return this->extSubtitle_ != nullptr;};
              void deleteExtSubtitle() { this->extSubtitle_ = nullptr;};
              inline const vector<ExtSubtitleList::ExtSubtitle> & getExtSubtitle() const { DARABONBA_PTR_GET_CONST(extSubtitle_, vector<ExtSubtitleList::ExtSubtitle>) };
              inline vector<ExtSubtitleList::ExtSubtitle> getExtSubtitle() { DARABONBA_PTR_GET(extSubtitle_, vector<ExtSubtitleList::ExtSubtitle>) };
              inline ExtSubtitleList& setExtSubtitle(const vector<ExtSubtitleList::ExtSubtitle> & extSubtitle) { DARABONBA_PTR_SET_VALUE(extSubtitle_, extSubtitle) };
              inline ExtSubtitleList& setExtSubtitle(vector<ExtSubtitleList::ExtSubtitle> && extSubtitle) { DARABONBA_PTR_SET_RVALUE(extSubtitle_, extSubtitle) };


            protected:
              shared_ptr<vector<ExtSubtitleList::ExtSubtitle>> extSubtitle_ {};
            };

            virtual bool empty() const override { return this->extSubtitleList_ == nullptr
        && this->subtitleList_ == nullptr; };
            // extSubtitleList Field Functions 
            bool hasExtSubtitleList() const { return this->extSubtitleList_ != nullptr;};
            void deleteExtSubtitleList() { this->extSubtitleList_ = nullptr;};
            inline const SubtitleConfig::ExtSubtitleList & getExtSubtitleList() const { DARABONBA_PTR_GET_CONST(extSubtitleList_, SubtitleConfig::ExtSubtitleList) };
            inline SubtitleConfig::ExtSubtitleList getExtSubtitleList() { DARABONBA_PTR_GET(extSubtitleList_, SubtitleConfig::ExtSubtitleList) };
            inline SubtitleConfig& setExtSubtitleList(const SubtitleConfig::ExtSubtitleList & extSubtitleList) { DARABONBA_PTR_SET_VALUE(extSubtitleList_, extSubtitleList) };
            inline SubtitleConfig& setExtSubtitleList(SubtitleConfig::ExtSubtitleList && extSubtitleList) { DARABONBA_PTR_SET_RVALUE(extSubtitleList_, extSubtitleList) };


            // subtitleList Field Functions 
            bool hasSubtitleList() const { return this->subtitleList_ != nullptr;};
            void deleteSubtitleList() { this->subtitleList_ = nullptr;};
            inline const SubtitleConfig::SubtitleList & getSubtitleList() const { DARABONBA_PTR_GET_CONST(subtitleList_, SubtitleConfig::SubtitleList) };
            inline SubtitleConfig::SubtitleList getSubtitleList() { DARABONBA_PTR_GET(subtitleList_, SubtitleConfig::SubtitleList) };
            inline SubtitleConfig& setSubtitleList(const SubtitleConfig::SubtitleList & subtitleList) { DARABONBA_PTR_SET_VALUE(subtitleList_, subtitleList) };
            inline SubtitleConfig& setSubtitleList(SubtitleConfig::SubtitleList && subtitleList) { DARABONBA_PTR_SET_RVALUE(subtitleList_, subtitleList) };


          protected:
            shared_ptr<SubtitleConfig::ExtSubtitleList> extSubtitleList_ {};
            shared_ptr<SubtitleConfig::SubtitleList> subtitleList_ {};
          };

          class Properties : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Properties& obj) { 
              DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_TO_JSON(Duration, duration_);
              DARABONBA_PTR_TO_JSON(FileFormat, fileFormat_);
              DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
              DARABONBA_PTR_TO_JSON(Format, format_);
              DARABONBA_PTR_TO_JSON(Fps, fps_);
              DARABONBA_PTR_TO_JSON(Height, height_);
              DARABONBA_PTR_TO_JSON(Streams, streams_);
              DARABONBA_PTR_TO_JSON(Width, width_);
            };
            friend void from_json(const Darabonba::Json& j, Properties& obj) { 
              DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_FROM_JSON(Duration, duration_);
              DARABONBA_PTR_FROM_JSON(FileFormat, fileFormat_);
              DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
              DARABONBA_PTR_FROM_JSON(Format, format_);
              DARABONBA_PTR_FROM_JSON(Fps, fps_);
              DARABONBA_PTR_FROM_JSON(Height, height_);
              DARABONBA_PTR_FROM_JSON(Streams, streams_);
              DARABONBA_PTR_FROM_JSON(Width, width_);
            };
            Properties() = default ;
            Properties(const Properties &) = default ;
            Properties(Properties &&) = default ;
            Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Properties() = default ;
            Properties& operator=(const Properties &) = default ;
            Properties& operator=(Properties &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Streams : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Streams& obj) { 
                DARABONBA_PTR_TO_JSON(AudioStreamList, audioStreamList_);
                DARABONBA_PTR_TO_JSON(SubtitleStreamList, subtitleStreamList_);
                DARABONBA_PTR_TO_JSON(VideoStreamList, videoStreamList_);
              };
              friend void from_json(const Darabonba::Json& j, Streams& obj) { 
                DARABONBA_PTR_FROM_JSON(AudioStreamList, audioStreamList_);
                DARABONBA_PTR_FROM_JSON(SubtitleStreamList, subtitleStreamList_);
                DARABONBA_PTR_FROM_JSON(VideoStreamList, videoStreamList_);
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
              class VideoStreamList : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const VideoStreamList& obj) { 
                  DARABONBA_PTR_TO_JSON(VideoStream, videoStream_);
                };
                friend void from_json(const Darabonba::Json& j, VideoStreamList& obj) { 
                  DARABONBA_PTR_FROM_JSON(VideoStream, videoStream_);
                };
                VideoStreamList() = default ;
                VideoStreamList(const VideoStreamList &) = default ;
                VideoStreamList(VideoStreamList &&) = default ;
                VideoStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~VideoStreamList() = default ;
                VideoStreamList& operator=(const VideoStreamList &) = default ;
                VideoStreamList& operator=(VideoStreamList &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class VideoStream : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const VideoStream& obj) { 
                    DARABONBA_PTR_TO_JSON(AvgFPS, avgFPS_);
                    DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
                    DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
                    DARABONBA_PTR_TO_JSON(CodecName, codecName_);
                    DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
                    DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
                    DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
                    DARABONBA_PTR_TO_JSON(Dar, dar_);
                    DARABONBA_PTR_TO_JSON(Duration, duration_);
                    DARABONBA_PTR_TO_JSON(Fps, fps_);
                    DARABONBA_PTR_TO_JSON(HasBFrames, hasBFrames_);
                    DARABONBA_PTR_TO_JSON(Height, height_);
                    DARABONBA_PTR_TO_JSON(Index, index_);
                    DARABONBA_PTR_TO_JSON(Lang, lang_);
                    DARABONBA_PTR_TO_JSON(Level, level_);
                    DARABONBA_PTR_TO_JSON(NetworkCost, networkCost_);
                    DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
                    DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
                    DARABONBA_PTR_TO_JSON(Profile, profile_);
                    DARABONBA_PTR_TO_JSON(Sar, sar_);
                    DARABONBA_PTR_TO_JSON(StartTime, startTime_);
                    DARABONBA_PTR_TO_JSON(Timebase, timebase_);
                    DARABONBA_PTR_TO_JSON(Width, width_);
                  };
                  friend void from_json(const Darabonba::Json& j, VideoStream& obj) { 
                    DARABONBA_PTR_FROM_JSON(AvgFPS, avgFPS_);
                    DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
                    DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
                    DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
                    DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
                    DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
                    DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
                    DARABONBA_PTR_FROM_JSON(Dar, dar_);
                    DARABONBA_PTR_FROM_JSON(Duration, duration_);
                    DARABONBA_PTR_FROM_JSON(Fps, fps_);
                    DARABONBA_PTR_FROM_JSON(HasBFrames, hasBFrames_);
                    DARABONBA_PTR_FROM_JSON(Height, height_);
                    DARABONBA_PTR_FROM_JSON(Index, index_);
                    DARABONBA_PTR_FROM_JSON(Lang, lang_);
                    DARABONBA_PTR_FROM_JSON(Level, level_);
                    DARABONBA_PTR_FROM_JSON(NetworkCost, networkCost_);
                    DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
                    DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
                    DARABONBA_PTR_FROM_JSON(Profile, profile_);
                    DARABONBA_PTR_FROM_JSON(Sar, sar_);
                    DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
                    DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
                    DARABONBA_PTR_FROM_JSON(Width, width_);
                  };
                  VideoStream() = default ;
                  VideoStream(const VideoStream &) = default ;
                  VideoStream(VideoStream &&) = default ;
                  VideoStream(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~VideoStream() = default ;
                  VideoStream& operator=(const VideoStream &) = default ;
                  VideoStream& operator=(VideoStream &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class NetworkCost : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const NetworkCost& obj) { 
                      DARABONBA_PTR_TO_JSON(AvgBitrate, avgBitrate_);
                      DARABONBA_PTR_TO_JSON(CostBandwidth, costBandwidth_);
                      DARABONBA_PTR_TO_JSON(PreloadTime, preloadTime_);
                    };
                    friend void from_json(const Darabonba::Json& j, NetworkCost& obj) { 
                      DARABONBA_PTR_FROM_JSON(AvgBitrate, avgBitrate_);
                      DARABONBA_PTR_FROM_JSON(CostBandwidth, costBandwidth_);
                      DARABONBA_PTR_FROM_JSON(PreloadTime, preloadTime_);
                    };
                    NetworkCost() = default ;
                    NetworkCost(const NetworkCost &) = default ;
                    NetworkCost(NetworkCost &&) = default ;
                    NetworkCost(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~NetworkCost() = default ;
                    NetworkCost& operator=(const NetworkCost &) = default ;
                    NetworkCost& operator=(NetworkCost &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->avgBitrate_ == nullptr
        && this->costBandwidth_ == nullptr && this->preloadTime_ == nullptr; };
                    // avgBitrate Field Functions 
                    bool hasAvgBitrate() const { return this->avgBitrate_ != nullptr;};
                    void deleteAvgBitrate() { this->avgBitrate_ = nullptr;};
                    inline string getAvgBitrate() const { DARABONBA_PTR_GET_DEFAULT(avgBitrate_, "") };
                    inline NetworkCost& setAvgBitrate(string avgBitrate) { DARABONBA_PTR_SET_VALUE(avgBitrate_, avgBitrate) };


                    // costBandwidth Field Functions 
                    bool hasCostBandwidth() const { return this->costBandwidth_ != nullptr;};
                    void deleteCostBandwidth() { this->costBandwidth_ = nullptr;};
                    inline string getCostBandwidth() const { DARABONBA_PTR_GET_DEFAULT(costBandwidth_, "") };
                    inline NetworkCost& setCostBandwidth(string costBandwidth) { DARABONBA_PTR_SET_VALUE(costBandwidth_, costBandwidth) };


                    // preloadTime Field Functions 
                    bool hasPreloadTime() const { return this->preloadTime_ != nullptr;};
                    void deletePreloadTime() { this->preloadTime_ = nullptr;};
                    inline string getPreloadTime() const { DARABONBA_PTR_GET_DEFAULT(preloadTime_, "") };
                    inline NetworkCost& setPreloadTime(string preloadTime) { DARABONBA_PTR_SET_VALUE(preloadTime_, preloadTime) };


                  protected:
                    shared_ptr<string> avgBitrate_ {};
                    shared_ptr<string> costBandwidth_ {};
                    shared_ptr<string> preloadTime_ {};
                  };

                  virtual bool empty() const override { return this->avgFPS_ == nullptr
        && this->bitrate_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr && this->codecTagString_ == nullptr
        && this->codecTimeBase_ == nullptr && this->dar_ == nullptr && this->duration_ == nullptr && this->fps_ == nullptr && this->hasBFrames_ == nullptr
        && this->height_ == nullptr && this->index_ == nullptr && this->lang_ == nullptr && this->level_ == nullptr && this->networkCost_ == nullptr
        && this->numFrames_ == nullptr && this->pixFmt_ == nullptr && this->profile_ == nullptr && this->sar_ == nullptr && this->startTime_ == nullptr
        && this->timebase_ == nullptr && this->width_ == nullptr; };
                  // avgFPS Field Functions 
                  bool hasAvgFPS() const { return this->avgFPS_ != nullptr;};
                  void deleteAvgFPS() { this->avgFPS_ = nullptr;};
                  inline string getAvgFPS() const { DARABONBA_PTR_GET_DEFAULT(avgFPS_, "") };
                  inline VideoStream& setAvgFPS(string avgFPS) { DARABONBA_PTR_SET_VALUE(avgFPS_, avgFPS) };


                  // bitrate Field Functions 
                  bool hasBitrate() const { return this->bitrate_ != nullptr;};
                  void deleteBitrate() { this->bitrate_ = nullptr;};
                  inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
                  inline VideoStream& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


                  // codecLongName Field Functions 
                  bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
                  void deleteCodecLongName() { this->codecLongName_ = nullptr;};
                  inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
                  inline VideoStream& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


                  // codecName Field Functions 
                  bool hasCodecName() const { return this->codecName_ != nullptr;};
                  void deleteCodecName() { this->codecName_ = nullptr;};
                  inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
                  inline VideoStream& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


                  // codecTag Field Functions 
                  bool hasCodecTag() const { return this->codecTag_ != nullptr;};
                  void deleteCodecTag() { this->codecTag_ = nullptr;};
                  inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
                  inline VideoStream& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


                  // codecTagString Field Functions 
                  bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
                  void deleteCodecTagString() { this->codecTagString_ = nullptr;};
                  inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
                  inline VideoStream& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


                  // codecTimeBase Field Functions 
                  bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
                  void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
                  inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
                  inline VideoStream& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


                  // dar Field Functions 
                  bool hasDar() const { return this->dar_ != nullptr;};
                  void deleteDar() { this->dar_ = nullptr;};
                  inline string getDar() const { DARABONBA_PTR_GET_DEFAULT(dar_, "") };
                  inline VideoStream& setDar(string dar) { DARABONBA_PTR_SET_VALUE(dar_, dar) };


                  // duration Field Functions 
                  bool hasDuration() const { return this->duration_ != nullptr;};
                  void deleteDuration() { this->duration_ = nullptr;};
                  inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
                  inline VideoStream& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


                  // fps Field Functions 
                  bool hasFps() const { return this->fps_ != nullptr;};
                  void deleteFps() { this->fps_ = nullptr;};
                  inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
                  inline VideoStream& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


                  // hasBFrames Field Functions 
                  bool hasHasBFrames() const { return this->hasBFrames_ != nullptr;};
                  void deleteHasBFrames() { this->hasBFrames_ = nullptr;};
                  inline string getHasBFrames() const { DARABONBA_PTR_GET_DEFAULT(hasBFrames_, "") };
                  inline VideoStream& setHasBFrames(string hasBFrames) { DARABONBA_PTR_SET_VALUE(hasBFrames_, hasBFrames) };


                  // height Field Functions 
                  bool hasHeight() const { return this->height_ != nullptr;};
                  void deleteHeight() { this->height_ = nullptr;};
                  inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
                  inline VideoStream& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


                  // index Field Functions 
                  bool hasIndex() const { return this->index_ != nullptr;};
                  void deleteIndex() { this->index_ = nullptr;};
                  inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
                  inline VideoStream& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


                  // lang Field Functions 
                  bool hasLang() const { return this->lang_ != nullptr;};
                  void deleteLang() { this->lang_ = nullptr;};
                  inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
                  inline VideoStream& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


                  // level Field Functions 
                  bool hasLevel() const { return this->level_ != nullptr;};
                  void deleteLevel() { this->level_ = nullptr;};
                  inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
                  inline VideoStream& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


                  // networkCost Field Functions 
                  bool hasNetworkCost() const { return this->networkCost_ != nullptr;};
                  void deleteNetworkCost() { this->networkCost_ = nullptr;};
                  inline const VideoStream::NetworkCost & getNetworkCost() const { DARABONBA_PTR_GET_CONST(networkCost_, VideoStream::NetworkCost) };
                  inline VideoStream::NetworkCost getNetworkCost() { DARABONBA_PTR_GET(networkCost_, VideoStream::NetworkCost) };
                  inline VideoStream& setNetworkCost(const VideoStream::NetworkCost & networkCost) { DARABONBA_PTR_SET_VALUE(networkCost_, networkCost) };
                  inline VideoStream& setNetworkCost(VideoStream::NetworkCost && networkCost) { DARABONBA_PTR_SET_RVALUE(networkCost_, networkCost) };


                  // numFrames Field Functions 
                  bool hasNumFrames() const { return this->numFrames_ != nullptr;};
                  void deleteNumFrames() { this->numFrames_ = nullptr;};
                  inline string getNumFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
                  inline VideoStream& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


                  // pixFmt Field Functions 
                  bool hasPixFmt() const { return this->pixFmt_ != nullptr;};
                  void deletePixFmt() { this->pixFmt_ = nullptr;};
                  inline string getPixFmt() const { DARABONBA_PTR_GET_DEFAULT(pixFmt_, "") };
                  inline VideoStream& setPixFmt(string pixFmt) { DARABONBA_PTR_SET_VALUE(pixFmt_, pixFmt) };


                  // profile Field Functions 
                  bool hasProfile() const { return this->profile_ != nullptr;};
                  void deleteProfile() { this->profile_ = nullptr;};
                  inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
                  inline VideoStream& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


                  // sar Field Functions 
                  bool hasSar() const { return this->sar_ != nullptr;};
                  void deleteSar() { this->sar_ = nullptr;};
                  inline string getSar() const { DARABONBA_PTR_GET_DEFAULT(sar_, "") };
                  inline VideoStream& setSar(string sar) { DARABONBA_PTR_SET_VALUE(sar_, sar) };


                  // startTime Field Functions 
                  bool hasStartTime() const { return this->startTime_ != nullptr;};
                  void deleteStartTime() { this->startTime_ = nullptr;};
                  inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
                  inline VideoStream& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


                  // timebase Field Functions 
                  bool hasTimebase() const { return this->timebase_ != nullptr;};
                  void deleteTimebase() { this->timebase_ = nullptr;};
                  inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
                  inline VideoStream& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


                  // width Field Functions 
                  bool hasWidth() const { return this->width_ != nullptr;};
                  void deleteWidth() { this->width_ = nullptr;};
                  inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
                  inline VideoStream& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


                protected:
                  shared_ptr<string> avgFPS_ {};
                  shared_ptr<string> bitrate_ {};
                  shared_ptr<string> codecLongName_ {};
                  shared_ptr<string> codecName_ {};
                  shared_ptr<string> codecTag_ {};
                  shared_ptr<string> codecTagString_ {};
                  shared_ptr<string> codecTimeBase_ {};
                  shared_ptr<string> dar_ {};
                  shared_ptr<string> duration_ {};
                  shared_ptr<string> fps_ {};
                  shared_ptr<string> hasBFrames_ {};
                  shared_ptr<string> height_ {};
                  shared_ptr<string> index_ {};
                  shared_ptr<string> lang_ {};
                  shared_ptr<string> level_ {};
                  shared_ptr<VideoStream::NetworkCost> networkCost_ {};
                  shared_ptr<string> numFrames_ {};
                  shared_ptr<string> pixFmt_ {};
                  shared_ptr<string> profile_ {};
                  shared_ptr<string> sar_ {};
                  shared_ptr<string> startTime_ {};
                  shared_ptr<string> timebase_ {};
                  shared_ptr<string> width_ {};
                };

                virtual bool empty() const override { return this->videoStream_ == nullptr; };
                // videoStream Field Functions 
                bool hasVideoStream() const { return this->videoStream_ != nullptr;};
                void deleteVideoStream() { this->videoStream_ = nullptr;};
                inline const vector<VideoStreamList::VideoStream> & getVideoStream() const { DARABONBA_PTR_GET_CONST(videoStream_, vector<VideoStreamList::VideoStream>) };
                inline vector<VideoStreamList::VideoStream> getVideoStream() { DARABONBA_PTR_GET(videoStream_, vector<VideoStreamList::VideoStream>) };
                inline VideoStreamList& setVideoStream(const vector<VideoStreamList::VideoStream> & videoStream) { DARABONBA_PTR_SET_VALUE(videoStream_, videoStream) };
                inline VideoStreamList& setVideoStream(vector<VideoStreamList::VideoStream> && videoStream) { DARABONBA_PTR_SET_RVALUE(videoStream_, videoStream) };


              protected:
                shared_ptr<vector<VideoStreamList::VideoStream>> videoStream_ {};
              };

              class SubtitleStreamList : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const SubtitleStreamList& obj) { 
                  DARABONBA_PTR_TO_JSON(SubtitleStream, subtitleStream_);
                };
                friend void from_json(const Darabonba::Json& j, SubtitleStreamList& obj) { 
                  DARABONBA_PTR_FROM_JSON(SubtitleStream, subtitleStream_);
                };
                SubtitleStreamList() = default ;
                SubtitleStreamList(const SubtitleStreamList &) = default ;
                SubtitleStreamList(SubtitleStreamList &&) = default ;
                SubtitleStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~SubtitleStreamList() = default ;
                SubtitleStreamList& operator=(const SubtitleStreamList &) = default ;
                SubtitleStreamList& operator=(SubtitleStreamList &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class SubtitleStream : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const SubtitleStream& obj) { 
                    DARABONBA_PTR_TO_JSON(Index, index_);
                    DARABONBA_PTR_TO_JSON(Lang, lang_);
                  };
                  friend void from_json(const Darabonba::Json& j, SubtitleStream& obj) { 
                    DARABONBA_PTR_FROM_JSON(Index, index_);
                    DARABONBA_PTR_FROM_JSON(Lang, lang_);
                  };
                  SubtitleStream() = default ;
                  SubtitleStream(const SubtitleStream &) = default ;
                  SubtitleStream(SubtitleStream &&) = default ;
                  SubtitleStream(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~SubtitleStream() = default ;
                  SubtitleStream& operator=(const SubtitleStream &) = default ;
                  SubtitleStream& operator=(SubtitleStream &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->index_ == nullptr
        && this->lang_ == nullptr; };
                  // index Field Functions 
                  bool hasIndex() const { return this->index_ != nullptr;};
                  void deleteIndex() { this->index_ = nullptr;};
                  inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
                  inline SubtitleStream& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


                  // lang Field Functions 
                  bool hasLang() const { return this->lang_ != nullptr;};
                  void deleteLang() { this->lang_ = nullptr;};
                  inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
                  inline SubtitleStream& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


                protected:
                  shared_ptr<string> index_ {};
                  shared_ptr<string> lang_ {};
                };

                virtual bool empty() const override { return this->subtitleStream_ == nullptr; };
                // subtitleStream Field Functions 
                bool hasSubtitleStream() const { return this->subtitleStream_ != nullptr;};
                void deleteSubtitleStream() { this->subtitleStream_ = nullptr;};
                inline const vector<SubtitleStreamList::SubtitleStream> & getSubtitleStream() const { DARABONBA_PTR_GET_CONST(subtitleStream_, vector<SubtitleStreamList::SubtitleStream>) };
                inline vector<SubtitleStreamList::SubtitleStream> getSubtitleStream() { DARABONBA_PTR_GET(subtitleStream_, vector<SubtitleStreamList::SubtitleStream>) };
                inline SubtitleStreamList& setSubtitleStream(const vector<SubtitleStreamList::SubtitleStream> & subtitleStream) { DARABONBA_PTR_SET_VALUE(subtitleStream_, subtitleStream) };
                inline SubtitleStreamList& setSubtitleStream(vector<SubtitleStreamList::SubtitleStream> && subtitleStream) { DARABONBA_PTR_SET_RVALUE(subtitleStream_, subtitleStream) };


              protected:
                shared_ptr<vector<SubtitleStreamList::SubtitleStream>> subtitleStream_ {};
              };

              class AudioStreamList : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const AudioStreamList& obj) { 
                  DARABONBA_PTR_TO_JSON(AudioStream, audioStream_);
                };
                friend void from_json(const Darabonba::Json& j, AudioStreamList& obj) { 
                  DARABONBA_PTR_FROM_JSON(AudioStream, audioStream_);
                };
                AudioStreamList() = default ;
                AudioStreamList(const AudioStreamList &) = default ;
                AudioStreamList(AudioStreamList &&) = default ;
                AudioStreamList(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~AudioStreamList() = default ;
                AudioStreamList& operator=(const AudioStreamList &) = default ;
                AudioStreamList& operator=(AudioStreamList &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class AudioStream : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const AudioStream& obj) { 
                    DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
                    DARABONBA_PTR_TO_JSON(ChannelLayout, channelLayout_);
                    DARABONBA_PTR_TO_JSON(Channels, channels_);
                    DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
                    DARABONBA_PTR_TO_JSON(CodecName, codecName_);
                    DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
                    DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
                    DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
                    DARABONBA_PTR_TO_JSON(Duration, duration_);
                    DARABONBA_PTR_TO_JSON(Index, index_);
                    DARABONBA_PTR_TO_JSON(Lang, lang_);
                    DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
                    DARABONBA_PTR_TO_JSON(SampleFmt, sampleFmt_);
                    DARABONBA_PTR_TO_JSON(Samplerate, samplerate_);
                    DARABONBA_PTR_TO_JSON(StartTime, startTime_);
                    DARABONBA_PTR_TO_JSON(Timebase, timebase_);
                  };
                  friend void from_json(const Darabonba::Json& j, AudioStream& obj) { 
                    DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
                    DARABONBA_PTR_FROM_JSON(ChannelLayout, channelLayout_);
                    DARABONBA_PTR_FROM_JSON(Channels, channels_);
                    DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
                    DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
                    DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
                    DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
                    DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
                    DARABONBA_PTR_FROM_JSON(Duration, duration_);
                    DARABONBA_PTR_FROM_JSON(Index, index_);
                    DARABONBA_PTR_FROM_JSON(Lang, lang_);
                    DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
                    DARABONBA_PTR_FROM_JSON(SampleFmt, sampleFmt_);
                    DARABONBA_PTR_FROM_JSON(Samplerate, samplerate_);
                    DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
                    DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
                  };
                  AudioStream() = default ;
                  AudioStream(const AudioStream &) = default ;
                  AudioStream(AudioStream &&) = default ;
                  AudioStream(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~AudioStream() = default ;
                  AudioStream& operator=(const AudioStream &) = default ;
                  AudioStream& operator=(AudioStream &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->channelLayout_ == nullptr && this->channels_ == nullptr && this->codecLongName_ == nullptr && this->codecName_ == nullptr && this->codecTag_ == nullptr
        && this->codecTagString_ == nullptr && this->codecTimeBase_ == nullptr && this->duration_ == nullptr && this->index_ == nullptr && this->lang_ == nullptr
        && this->numFrames_ == nullptr && this->sampleFmt_ == nullptr && this->samplerate_ == nullptr && this->startTime_ == nullptr && this->timebase_ == nullptr; };
                  // bitrate Field Functions 
                  bool hasBitrate() const { return this->bitrate_ != nullptr;};
                  void deleteBitrate() { this->bitrate_ = nullptr;};
                  inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
                  inline AudioStream& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


                  // channelLayout Field Functions 
                  bool hasChannelLayout() const { return this->channelLayout_ != nullptr;};
                  void deleteChannelLayout() { this->channelLayout_ = nullptr;};
                  inline string getChannelLayout() const { DARABONBA_PTR_GET_DEFAULT(channelLayout_, "") };
                  inline AudioStream& setChannelLayout(string channelLayout) { DARABONBA_PTR_SET_VALUE(channelLayout_, channelLayout) };


                  // channels Field Functions 
                  bool hasChannels() const { return this->channels_ != nullptr;};
                  void deleteChannels() { this->channels_ = nullptr;};
                  inline string getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
                  inline AudioStream& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


                  // codecLongName Field Functions 
                  bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
                  void deleteCodecLongName() { this->codecLongName_ = nullptr;};
                  inline string getCodecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
                  inline AudioStream& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


                  // codecName Field Functions 
                  bool hasCodecName() const { return this->codecName_ != nullptr;};
                  void deleteCodecName() { this->codecName_ = nullptr;};
                  inline string getCodecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
                  inline AudioStream& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


                  // codecTag Field Functions 
                  bool hasCodecTag() const { return this->codecTag_ != nullptr;};
                  void deleteCodecTag() { this->codecTag_ = nullptr;};
                  inline string getCodecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
                  inline AudioStream& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


                  // codecTagString Field Functions 
                  bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
                  void deleteCodecTagString() { this->codecTagString_ = nullptr;};
                  inline string getCodecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
                  inline AudioStream& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


                  // codecTimeBase Field Functions 
                  bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
                  void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
                  inline string getCodecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
                  inline AudioStream& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


                  // duration Field Functions 
                  bool hasDuration() const { return this->duration_ != nullptr;};
                  void deleteDuration() { this->duration_ = nullptr;};
                  inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
                  inline AudioStream& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


                  // index Field Functions 
                  bool hasIndex() const { return this->index_ != nullptr;};
                  void deleteIndex() { this->index_ = nullptr;};
                  inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
                  inline AudioStream& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


                  // lang Field Functions 
                  bool hasLang() const { return this->lang_ != nullptr;};
                  void deleteLang() { this->lang_ = nullptr;};
                  inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
                  inline AudioStream& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


                  // numFrames Field Functions 
                  bool hasNumFrames() const { return this->numFrames_ != nullptr;};
                  void deleteNumFrames() { this->numFrames_ = nullptr;};
                  inline string getNumFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
                  inline AudioStream& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


                  // sampleFmt Field Functions 
                  bool hasSampleFmt() const { return this->sampleFmt_ != nullptr;};
                  void deleteSampleFmt() { this->sampleFmt_ = nullptr;};
                  inline string getSampleFmt() const { DARABONBA_PTR_GET_DEFAULT(sampleFmt_, "") };
                  inline AudioStream& setSampleFmt(string sampleFmt) { DARABONBA_PTR_SET_VALUE(sampleFmt_, sampleFmt) };


                  // samplerate Field Functions 
                  bool hasSamplerate() const { return this->samplerate_ != nullptr;};
                  void deleteSamplerate() { this->samplerate_ = nullptr;};
                  inline string getSamplerate() const { DARABONBA_PTR_GET_DEFAULT(samplerate_, "") };
                  inline AudioStream& setSamplerate(string samplerate) { DARABONBA_PTR_SET_VALUE(samplerate_, samplerate) };


                  // startTime Field Functions 
                  bool hasStartTime() const { return this->startTime_ != nullptr;};
                  void deleteStartTime() { this->startTime_ = nullptr;};
                  inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
                  inline AudioStream& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


                  // timebase Field Functions 
                  bool hasTimebase() const { return this->timebase_ != nullptr;};
                  void deleteTimebase() { this->timebase_ = nullptr;};
                  inline string getTimebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
                  inline AudioStream& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


                protected:
                  shared_ptr<string> bitrate_ {};
                  shared_ptr<string> channelLayout_ {};
                  shared_ptr<string> channels_ {};
                  shared_ptr<string> codecLongName_ {};
                  shared_ptr<string> codecName_ {};
                  shared_ptr<string> codecTag_ {};
                  shared_ptr<string> codecTagString_ {};
                  shared_ptr<string> codecTimeBase_ {};
                  shared_ptr<string> duration_ {};
                  shared_ptr<string> index_ {};
                  shared_ptr<string> lang_ {};
                  shared_ptr<string> numFrames_ {};
                  shared_ptr<string> sampleFmt_ {};
                  shared_ptr<string> samplerate_ {};
                  shared_ptr<string> startTime_ {};
                  shared_ptr<string> timebase_ {};
                };

                virtual bool empty() const override { return this->audioStream_ == nullptr; };
                // audioStream Field Functions 
                bool hasAudioStream() const { return this->audioStream_ != nullptr;};
                void deleteAudioStream() { this->audioStream_ = nullptr;};
                inline const vector<AudioStreamList::AudioStream> & getAudioStream() const { DARABONBA_PTR_GET_CONST(audioStream_, vector<AudioStreamList::AudioStream>) };
                inline vector<AudioStreamList::AudioStream> getAudioStream() { DARABONBA_PTR_GET(audioStream_, vector<AudioStreamList::AudioStream>) };
                inline AudioStreamList& setAudioStream(const vector<AudioStreamList::AudioStream> & audioStream) { DARABONBA_PTR_SET_VALUE(audioStream_, audioStream) };
                inline AudioStreamList& setAudioStream(vector<AudioStreamList::AudioStream> && audioStream) { DARABONBA_PTR_SET_RVALUE(audioStream_, audioStream) };


              protected:
                shared_ptr<vector<AudioStreamList::AudioStream>> audioStream_ {};
              };

              virtual bool empty() const override { return this->audioStreamList_ == nullptr
        && this->subtitleStreamList_ == nullptr && this->videoStreamList_ == nullptr; };
              // audioStreamList Field Functions 
              bool hasAudioStreamList() const { return this->audioStreamList_ != nullptr;};
              void deleteAudioStreamList() { this->audioStreamList_ = nullptr;};
              inline const Streams::AudioStreamList & getAudioStreamList() const { DARABONBA_PTR_GET_CONST(audioStreamList_, Streams::AudioStreamList) };
              inline Streams::AudioStreamList getAudioStreamList() { DARABONBA_PTR_GET(audioStreamList_, Streams::AudioStreamList) };
              inline Streams& setAudioStreamList(const Streams::AudioStreamList & audioStreamList) { DARABONBA_PTR_SET_VALUE(audioStreamList_, audioStreamList) };
              inline Streams& setAudioStreamList(Streams::AudioStreamList && audioStreamList) { DARABONBA_PTR_SET_RVALUE(audioStreamList_, audioStreamList) };


              // subtitleStreamList Field Functions 
              bool hasSubtitleStreamList() const { return this->subtitleStreamList_ != nullptr;};
              void deleteSubtitleStreamList() { this->subtitleStreamList_ = nullptr;};
              inline const Streams::SubtitleStreamList & getSubtitleStreamList() const { DARABONBA_PTR_GET_CONST(subtitleStreamList_, Streams::SubtitleStreamList) };
              inline Streams::SubtitleStreamList getSubtitleStreamList() { DARABONBA_PTR_GET(subtitleStreamList_, Streams::SubtitleStreamList) };
              inline Streams& setSubtitleStreamList(const Streams::SubtitleStreamList & subtitleStreamList) { DARABONBA_PTR_SET_VALUE(subtitleStreamList_, subtitleStreamList) };
              inline Streams& setSubtitleStreamList(Streams::SubtitleStreamList && subtitleStreamList) { DARABONBA_PTR_SET_RVALUE(subtitleStreamList_, subtitleStreamList) };


              // videoStreamList Field Functions 
              bool hasVideoStreamList() const { return this->videoStreamList_ != nullptr;};
              void deleteVideoStreamList() { this->videoStreamList_ = nullptr;};
              inline const Streams::VideoStreamList & getVideoStreamList() const { DARABONBA_PTR_GET_CONST(videoStreamList_, Streams::VideoStreamList) };
              inline Streams::VideoStreamList getVideoStreamList() { DARABONBA_PTR_GET(videoStreamList_, Streams::VideoStreamList) };
              inline Streams& setVideoStreamList(const Streams::VideoStreamList & videoStreamList) { DARABONBA_PTR_SET_VALUE(videoStreamList_, videoStreamList) };
              inline Streams& setVideoStreamList(Streams::VideoStreamList && videoStreamList) { DARABONBA_PTR_SET_RVALUE(videoStreamList_, videoStreamList) };


            protected:
              shared_ptr<Streams::AudioStreamList> audioStreamList_ {};
              shared_ptr<Streams::SubtitleStreamList> subtitleStreamList_ {};
              shared_ptr<Streams::VideoStreamList> videoStreamList_ {};
            };

            class Format : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Format& obj) { 
                DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
                DARABONBA_PTR_TO_JSON(Duration, duration_);
                DARABONBA_PTR_TO_JSON(FormatLongName, formatLongName_);
                DARABONBA_PTR_TO_JSON(FormatName, formatName_);
                DARABONBA_PTR_TO_JSON(NumPrograms, numPrograms_);
                DARABONBA_PTR_TO_JSON(NumStreams, numStreams_);
                DARABONBA_PTR_TO_JSON(Size, size_);
                DARABONBA_PTR_TO_JSON(StartTime, startTime_);
              };
              friend void from_json(const Darabonba::Json& j, Format& obj) { 
                DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
                DARABONBA_PTR_FROM_JSON(Duration, duration_);
                DARABONBA_PTR_FROM_JSON(FormatLongName, formatLongName_);
                DARABONBA_PTR_FROM_JSON(FormatName, formatName_);
                DARABONBA_PTR_FROM_JSON(NumPrograms, numPrograms_);
                DARABONBA_PTR_FROM_JSON(NumStreams, numStreams_);
                DARABONBA_PTR_FROM_JSON(Size, size_);
                DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
              };
              Format() = default ;
              Format(const Format &) = default ;
              Format(Format &&) = default ;
              Format(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Format() = default ;
              Format& operator=(const Format &) = default ;
              Format& operator=(Format &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->duration_ == nullptr && this->formatLongName_ == nullptr && this->formatName_ == nullptr && this->numPrograms_ == nullptr && this->numStreams_ == nullptr
        && this->size_ == nullptr && this->startTime_ == nullptr; };
              // bitrate Field Functions 
              bool hasBitrate() const { return this->bitrate_ != nullptr;};
              void deleteBitrate() { this->bitrate_ = nullptr;};
              inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
              inline Format& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


              // duration Field Functions 
              bool hasDuration() const { return this->duration_ != nullptr;};
              void deleteDuration() { this->duration_ = nullptr;};
              inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
              inline Format& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


              // formatLongName Field Functions 
              bool hasFormatLongName() const { return this->formatLongName_ != nullptr;};
              void deleteFormatLongName() { this->formatLongName_ = nullptr;};
              inline string getFormatLongName() const { DARABONBA_PTR_GET_DEFAULT(formatLongName_, "") };
              inline Format& setFormatLongName(string formatLongName) { DARABONBA_PTR_SET_VALUE(formatLongName_, formatLongName) };


              // formatName Field Functions 
              bool hasFormatName() const { return this->formatName_ != nullptr;};
              void deleteFormatName() { this->formatName_ = nullptr;};
              inline string getFormatName() const { DARABONBA_PTR_GET_DEFAULT(formatName_, "") };
              inline Format& setFormatName(string formatName) { DARABONBA_PTR_SET_VALUE(formatName_, formatName) };


              // numPrograms Field Functions 
              bool hasNumPrograms() const { return this->numPrograms_ != nullptr;};
              void deleteNumPrograms() { this->numPrograms_ = nullptr;};
              inline string getNumPrograms() const { DARABONBA_PTR_GET_DEFAULT(numPrograms_, "") };
              inline Format& setNumPrograms(string numPrograms) { DARABONBA_PTR_SET_VALUE(numPrograms_, numPrograms) };


              // numStreams Field Functions 
              bool hasNumStreams() const { return this->numStreams_ != nullptr;};
              void deleteNumStreams() { this->numStreams_ = nullptr;};
              inline string getNumStreams() const { DARABONBA_PTR_GET_DEFAULT(numStreams_, "") };
              inline Format& setNumStreams(string numStreams) { DARABONBA_PTR_SET_VALUE(numStreams_, numStreams) };


              // size Field Functions 
              bool hasSize() const { return this->size_ != nullptr;};
              void deleteSize() { this->size_ = nullptr;};
              inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
              inline Format& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


              // startTime Field Functions 
              bool hasStartTime() const { return this->startTime_ != nullptr;};
              void deleteStartTime() { this->startTime_ = nullptr;};
              inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
              inline Format& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            protected:
              shared_ptr<string> bitrate_ {};
              shared_ptr<string> duration_ {};
              shared_ptr<string> formatLongName_ {};
              shared_ptr<string> formatName_ {};
              shared_ptr<string> numPrograms_ {};
              shared_ptr<string> numStreams_ {};
              shared_ptr<string> size_ {};
              shared_ptr<string> startTime_ {};
            };

            virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->duration_ == nullptr && this->fileFormat_ == nullptr && this->fileSize_ == nullptr && this->format_ == nullptr && this->fps_ == nullptr
        && this->height_ == nullptr && this->streams_ == nullptr && this->width_ == nullptr; };
            // bitrate Field Functions 
            bool hasBitrate() const { return this->bitrate_ != nullptr;};
            void deleteBitrate() { this->bitrate_ = nullptr;};
            inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
            inline Properties& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


            // duration Field Functions 
            bool hasDuration() const { return this->duration_ != nullptr;};
            void deleteDuration() { this->duration_ = nullptr;};
            inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
            inline Properties& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


            // fileFormat Field Functions 
            bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
            void deleteFileFormat() { this->fileFormat_ = nullptr;};
            inline string getFileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
            inline Properties& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


            // fileSize Field Functions 
            bool hasFileSize() const { return this->fileSize_ != nullptr;};
            void deleteFileSize() { this->fileSize_ = nullptr;};
            inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
            inline Properties& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


            // format Field Functions 
            bool hasFormat() const { return this->format_ != nullptr;};
            void deleteFormat() { this->format_ = nullptr;};
            inline const Properties::Format & getFormat() const { DARABONBA_PTR_GET_CONST(format_, Properties::Format) };
            inline Properties::Format getFormat() { DARABONBA_PTR_GET(format_, Properties::Format) };
            inline Properties& setFormat(const Properties::Format & format) { DARABONBA_PTR_SET_VALUE(format_, format) };
            inline Properties& setFormat(Properties::Format && format) { DARABONBA_PTR_SET_RVALUE(format_, format) };


            // fps Field Functions 
            bool hasFps() const { return this->fps_ != nullptr;};
            void deleteFps() { this->fps_ = nullptr;};
            inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
            inline Properties& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


            // height Field Functions 
            bool hasHeight() const { return this->height_ != nullptr;};
            void deleteHeight() { this->height_ = nullptr;};
            inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
            inline Properties& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


            // streams Field Functions 
            bool hasStreams() const { return this->streams_ != nullptr;};
            void deleteStreams() { this->streams_ = nullptr;};
            inline const Properties::Streams & getStreams() const { DARABONBA_PTR_GET_CONST(streams_, Properties::Streams) };
            inline Properties::Streams getStreams() { DARABONBA_PTR_GET(streams_, Properties::Streams) };
            inline Properties& setStreams(const Properties::Streams & streams) { DARABONBA_PTR_SET_VALUE(streams_, streams) };
            inline Properties& setStreams(Properties::Streams && streams) { DARABONBA_PTR_SET_RVALUE(streams_, streams) };


            // width Field Functions 
            bool hasWidth() const { return this->width_ != nullptr;};
            void deleteWidth() { this->width_ = nullptr;};
            inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
            inline Properties& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


          protected:
            shared_ptr<string> bitrate_ {};
            shared_ptr<string> duration_ {};
            shared_ptr<string> fileFormat_ {};
            shared_ptr<string> fileSize_ {};
            shared_ptr<Properties::Format> format_ {};
            shared_ptr<string> fps_ {};
            shared_ptr<string> height_ {};
            shared_ptr<Properties::Streams> streams_ {};
            shared_ptr<string> width_ {};
          };

          class OutputFile : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OutputFile& obj) { 
              DARABONBA_PTR_TO_JSON(Bucket, bucket_);
              DARABONBA_PTR_TO_JSON(Location, location_);
              DARABONBA_PTR_TO_JSON(Object, object_);
              DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
            };
            friend void from_json(const Darabonba::Json& j, OutputFile& obj) { 
              DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
              DARABONBA_PTR_FROM_JSON(Location, location_);
              DARABONBA_PTR_FROM_JSON(Object, object_);
              DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
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
        && this->location_ == nullptr && this->object_ == nullptr && this->roleArn_ == nullptr; };
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


            // roleArn Field Functions 
            bool hasRoleArn() const { return this->roleArn_ != nullptr;};
            void deleteRoleArn() { this->roleArn_ = nullptr;};
            inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
            inline OutputFile& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


          protected:
            shared_ptr<string> bucket_ {};
            shared_ptr<string> location_ {};
            shared_ptr<string> object_ {};
            shared_ptr<string> roleArn_ {};
          };

          class OutSubtitleList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OutSubtitleList& obj) { 
              DARABONBA_PTR_TO_JSON(OutSubtitle, outSubtitle_);
            };
            friend void from_json(const Darabonba::Json& j, OutSubtitleList& obj) { 
              DARABONBA_PTR_FROM_JSON(OutSubtitle, outSubtitle_);
            };
            OutSubtitleList() = default ;
            OutSubtitleList(const OutSubtitleList &) = default ;
            OutSubtitleList(OutSubtitleList &&) = default ;
            OutSubtitleList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OutSubtitleList() = default ;
            OutSubtitleList& operator=(const OutSubtitleList &) = default ;
            OutSubtitleList& operator=(OutSubtitleList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class OutSubtitle : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const OutSubtitle& obj) { 
                DARABONBA_PTR_TO_JSON(Map, map_);
                DARABONBA_PTR_TO_JSON(Message, message_);
                DARABONBA_PTR_TO_JSON(OutSubtitleFile, outSubtitleFile_);
                DARABONBA_PTR_TO_JSON(Success, success_);
              };
              friend void from_json(const Darabonba::Json& j, OutSubtitle& obj) { 
                DARABONBA_PTR_FROM_JSON(Map, map_);
                DARABONBA_PTR_FROM_JSON(Message, message_);
                DARABONBA_PTR_FROM_JSON(OutSubtitleFile, outSubtitleFile_);
                DARABONBA_PTR_FROM_JSON(Success, success_);
              };
              OutSubtitle() = default ;
              OutSubtitle(const OutSubtitle &) = default ;
              OutSubtitle(OutSubtitle &&) = default ;
              OutSubtitle(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~OutSubtitle() = default ;
              OutSubtitle& operator=(const OutSubtitle &) = default ;
              OutSubtitle& operator=(OutSubtitle &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class OutSubtitleFile : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const OutSubtitleFile& obj) { 
                  DARABONBA_PTR_TO_JSON(Bucket, bucket_);
                  DARABONBA_PTR_TO_JSON(Location, location_);
                  DARABONBA_PTR_TO_JSON(Object, object_);
                  DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
                };
                friend void from_json(const Darabonba::Json& j, OutSubtitleFile& obj) { 
                  DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
                  DARABONBA_PTR_FROM_JSON(Location, location_);
                  DARABONBA_PTR_FROM_JSON(Object, object_);
                  DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
                };
                OutSubtitleFile() = default ;
                OutSubtitleFile(const OutSubtitleFile &) = default ;
                OutSubtitleFile(OutSubtitleFile &&) = default ;
                OutSubtitleFile(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~OutSubtitleFile() = default ;
                OutSubtitleFile& operator=(const OutSubtitleFile &) = default ;
                OutSubtitleFile& operator=(OutSubtitleFile &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->bucket_ == nullptr
        && this->location_ == nullptr && this->object_ == nullptr && this->roleArn_ == nullptr; };
                // bucket Field Functions 
                bool hasBucket() const { return this->bucket_ != nullptr;};
                void deleteBucket() { this->bucket_ = nullptr;};
                inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
                inline OutSubtitleFile& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


                // location Field Functions 
                bool hasLocation() const { return this->location_ != nullptr;};
                void deleteLocation() { this->location_ = nullptr;};
                inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
                inline OutSubtitleFile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


                // object Field Functions 
                bool hasObject() const { return this->object_ != nullptr;};
                void deleteObject() { this->object_ = nullptr;};
                inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
                inline OutSubtitleFile& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


                // roleArn Field Functions 
                bool hasRoleArn() const { return this->roleArn_ != nullptr;};
                void deleteRoleArn() { this->roleArn_ = nullptr;};
                inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
                inline OutSubtitleFile& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


              protected:
                shared_ptr<string> bucket_ {};
                shared_ptr<string> location_ {};
                shared_ptr<string> object_ {};
                shared_ptr<string> roleArn_ {};
              };

              virtual bool empty() const override { return this->map_ == nullptr
        && this->message_ == nullptr && this->outSubtitleFile_ == nullptr && this->success_ == nullptr; };
              // map Field Functions 
              bool hasMap() const { return this->map_ != nullptr;};
              void deleteMap() { this->map_ = nullptr;};
              inline string getMap() const { DARABONBA_PTR_GET_DEFAULT(map_, "") };
              inline OutSubtitle& setMap(string _map) { DARABONBA_PTR_SET_VALUE(map_, _map) };


              // message Field Functions 
              bool hasMessage() const { return this->message_ != nullptr;};
              void deleteMessage() { this->message_ = nullptr;};
              inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
              inline OutSubtitle& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


              // outSubtitleFile Field Functions 
              bool hasOutSubtitleFile() const { return this->outSubtitleFile_ != nullptr;};
              void deleteOutSubtitleFile() { this->outSubtitleFile_ = nullptr;};
              inline const OutSubtitle::OutSubtitleFile & getOutSubtitleFile() const { DARABONBA_PTR_GET_CONST(outSubtitleFile_, OutSubtitle::OutSubtitleFile) };
              inline OutSubtitle::OutSubtitleFile getOutSubtitleFile() { DARABONBA_PTR_GET(outSubtitleFile_, OutSubtitle::OutSubtitleFile) };
              inline OutSubtitle& setOutSubtitleFile(const OutSubtitle::OutSubtitleFile & outSubtitleFile) { DARABONBA_PTR_SET_VALUE(outSubtitleFile_, outSubtitleFile) };
              inline OutSubtitle& setOutSubtitleFile(OutSubtitle::OutSubtitleFile && outSubtitleFile) { DARABONBA_PTR_SET_RVALUE(outSubtitleFile_, outSubtitleFile) };


              // success Field Functions 
              bool hasSuccess() const { return this->success_ != nullptr;};
              void deleteSuccess() { this->success_ = nullptr;};
              inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
              inline OutSubtitle& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


            protected:
              shared_ptr<string> map_ {};
              shared_ptr<string> message_ {};
              shared_ptr<OutSubtitle::OutSubtitleFile> outSubtitleFile_ {};
              shared_ptr<bool> success_ {};
            };

            virtual bool empty() const override { return this->outSubtitle_ == nullptr; };
            // outSubtitle Field Functions 
            bool hasOutSubtitle() const { return this->outSubtitle_ != nullptr;};
            void deleteOutSubtitle() { this->outSubtitle_ = nullptr;};
            inline const vector<OutSubtitleList::OutSubtitle> & getOutSubtitle() const { DARABONBA_PTR_GET_CONST(outSubtitle_, vector<OutSubtitleList::OutSubtitle>) };
            inline vector<OutSubtitleList::OutSubtitle> getOutSubtitle() { DARABONBA_PTR_GET(outSubtitle_, vector<OutSubtitleList::OutSubtitle>) };
            inline OutSubtitleList& setOutSubtitle(const vector<OutSubtitleList::OutSubtitle> & outSubtitle) { DARABONBA_PTR_SET_VALUE(outSubtitle_, outSubtitle) };
            inline OutSubtitleList& setOutSubtitle(vector<OutSubtitleList::OutSubtitle> && outSubtitle) { DARABONBA_PTR_SET_RVALUE(outSubtitle_, outSubtitle) };


          protected:
            shared_ptr<vector<OutSubtitleList::OutSubtitle>> outSubtitle_ {};
          };

          class OpeningList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OpeningList& obj) { 
              DARABONBA_PTR_TO_JSON(Opening, opening_);
            };
            friend void from_json(const Darabonba::Json& j, OpeningList& obj) { 
              DARABONBA_PTR_FROM_JSON(Opening, opening_);
            };
            OpeningList() = default ;
            OpeningList(const OpeningList &) = default ;
            OpeningList(OpeningList &&) = default ;
            OpeningList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OpeningList() = default ;
            OpeningList& operator=(const OpeningList &) = default ;
            OpeningList& operator=(OpeningList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Opening : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Opening& obj) { 
                DARABONBA_PTR_TO_JSON(Height, height_);
                DARABONBA_PTR_TO_JSON(Start, start_);
                DARABONBA_PTR_TO_JSON(Width, width_);
                DARABONBA_PTR_TO_JSON(openUrl, openUrl_);
              };
              friend void from_json(const Darabonba::Json& j, Opening& obj) { 
                DARABONBA_PTR_FROM_JSON(Height, height_);
                DARABONBA_PTR_FROM_JSON(Start, start_);
                DARABONBA_PTR_FROM_JSON(Width, width_);
                DARABONBA_PTR_FROM_JSON(openUrl, openUrl_);
              };
              Opening() = default ;
              Opening(const Opening &) = default ;
              Opening(Opening &&) = default ;
              Opening(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Opening() = default ;
              Opening& operator=(const Opening &) = default ;
              Opening& operator=(Opening &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->height_ == nullptr
        && this->start_ == nullptr && this->width_ == nullptr && this->openUrl_ == nullptr; };
              // height Field Functions 
              bool hasHeight() const { return this->height_ != nullptr;};
              void deleteHeight() { this->height_ = nullptr;};
              inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
              inline Opening& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


              // start Field Functions 
              bool hasStart() const { return this->start_ != nullptr;};
              void deleteStart() { this->start_ = nullptr;};
              inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
              inline Opening& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


              // width Field Functions 
              bool hasWidth() const { return this->width_ != nullptr;};
              void deleteWidth() { this->width_ = nullptr;};
              inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
              inline Opening& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


              // openUrl Field Functions 
              bool hasOpenUrl() const { return this->openUrl_ != nullptr;};
              void deleteOpenUrl() { this->openUrl_ = nullptr;};
              inline string getOpenUrl() const { DARABONBA_PTR_GET_DEFAULT(openUrl_, "") };
              inline Opening& setOpenUrl(string openUrl) { DARABONBA_PTR_SET_VALUE(openUrl_, openUrl) };


            protected:
              shared_ptr<string> height_ {};
              shared_ptr<string> start_ {};
              shared_ptr<string> width_ {};
              shared_ptr<string> openUrl_ {};
            };

            virtual bool empty() const override { return this->opening_ == nullptr; };
            // opening Field Functions 
            bool hasOpening() const { return this->opening_ != nullptr;};
            void deleteOpening() { this->opening_ = nullptr;};
            inline const vector<OpeningList::Opening> & getOpening() const { DARABONBA_PTR_GET_CONST(opening_, vector<OpeningList::Opening>) };
            inline vector<OpeningList::Opening> getOpening() { DARABONBA_PTR_GET(opening_, vector<OpeningList::Opening>) };
            inline OpeningList& setOpening(const vector<OpeningList::Opening> & opening) { DARABONBA_PTR_SET_VALUE(opening_, opening) };
            inline OpeningList& setOpening(vector<OpeningList::Opening> && opening) { DARABONBA_PTR_SET_RVALUE(opening_, opening) };


          protected:
            shared_ptr<vector<OpeningList::Opening>> opening_ {};
          };

          class MuxConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MuxConfig& obj) { 
              DARABONBA_PTR_TO_JSON(Gif, gif_);
              DARABONBA_PTR_TO_JSON(Segment, segment_);
              DARABONBA_PTR_TO_JSON(Webp, webp_);
            };
            friend void from_json(const Darabonba::Json& j, MuxConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(Gif, gif_);
              DARABONBA_PTR_FROM_JSON(Segment, segment_);
              DARABONBA_PTR_FROM_JSON(Webp, webp_);
            };
            MuxConfig() = default ;
            MuxConfig(const MuxConfig &) = default ;
            MuxConfig(MuxConfig &&) = default ;
            MuxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MuxConfig() = default ;
            MuxConfig& operator=(const MuxConfig &) = default ;
            MuxConfig& operator=(MuxConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Webp : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Webp& obj) { 
                DARABONBA_PTR_TO_JSON(Loop, loop_);
              };
              friend void from_json(const Darabonba::Json& j, Webp& obj) { 
                DARABONBA_PTR_FROM_JSON(Loop, loop_);
              };
              Webp() = default ;
              Webp(const Webp &) = default ;
              Webp(Webp &&) = default ;
              Webp(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Webp() = default ;
              Webp& operator=(const Webp &) = default ;
              Webp& operator=(Webp &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->loop_ == nullptr; };
              // loop Field Functions 
              bool hasLoop() const { return this->loop_ != nullptr;};
              void deleteLoop() { this->loop_ = nullptr;};
              inline string getLoop() const { DARABONBA_PTR_GET_DEFAULT(loop_, "") };
              inline Webp& setLoop(string loop) { DARABONBA_PTR_SET_VALUE(loop_, loop) };


            protected:
              shared_ptr<string> loop_ {};
            };

            class Segment : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Segment& obj) { 
                DARABONBA_PTR_TO_JSON(Duration, duration_);
              };
              friend void from_json(const Darabonba::Json& j, Segment& obj) { 
                DARABONBA_PTR_FROM_JSON(Duration, duration_);
              };
              Segment() = default ;
              Segment(const Segment &) = default ;
              Segment(Segment &&) = default ;
              Segment(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Segment() = default ;
              Segment& operator=(const Segment &) = default ;
              Segment& operator=(Segment &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->duration_ == nullptr; };
              // duration Field Functions 
              bool hasDuration() const { return this->duration_ != nullptr;};
              void deleteDuration() { this->duration_ = nullptr;};
              inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
              inline Segment& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


            protected:
              shared_ptr<string> duration_ {};
            };

            class Gif : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Gif& obj) { 
                DARABONBA_PTR_TO_JSON(DitherMode, ditherMode_);
                DARABONBA_PTR_TO_JSON(FinalDelay, finalDelay_);
                DARABONBA_PTR_TO_JSON(IsCustomPalette, isCustomPalette_);
                DARABONBA_PTR_TO_JSON(Loop, loop_);
              };
              friend void from_json(const Darabonba::Json& j, Gif& obj) { 
                DARABONBA_PTR_FROM_JSON(DitherMode, ditherMode_);
                DARABONBA_PTR_FROM_JSON(FinalDelay, finalDelay_);
                DARABONBA_PTR_FROM_JSON(IsCustomPalette, isCustomPalette_);
                DARABONBA_PTR_FROM_JSON(Loop, loop_);
              };
              Gif() = default ;
              Gif(const Gif &) = default ;
              Gif(Gif &&) = default ;
              Gif(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Gif() = default ;
              Gif& operator=(const Gif &) = default ;
              Gif& operator=(Gif &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->ditherMode_ == nullptr
        && this->finalDelay_ == nullptr && this->isCustomPalette_ == nullptr && this->loop_ == nullptr; };
              // ditherMode Field Functions 
              bool hasDitherMode() const { return this->ditherMode_ != nullptr;};
              void deleteDitherMode() { this->ditherMode_ = nullptr;};
              inline string getDitherMode() const { DARABONBA_PTR_GET_DEFAULT(ditherMode_, "") };
              inline Gif& setDitherMode(string ditherMode) { DARABONBA_PTR_SET_VALUE(ditherMode_, ditherMode) };


              // finalDelay Field Functions 
              bool hasFinalDelay() const { return this->finalDelay_ != nullptr;};
              void deleteFinalDelay() { this->finalDelay_ = nullptr;};
              inline string getFinalDelay() const { DARABONBA_PTR_GET_DEFAULT(finalDelay_, "") };
              inline Gif& setFinalDelay(string finalDelay) { DARABONBA_PTR_SET_VALUE(finalDelay_, finalDelay) };


              // isCustomPalette Field Functions 
              bool hasIsCustomPalette() const { return this->isCustomPalette_ != nullptr;};
              void deleteIsCustomPalette() { this->isCustomPalette_ = nullptr;};
              inline string getIsCustomPalette() const { DARABONBA_PTR_GET_DEFAULT(isCustomPalette_, "") };
              inline Gif& setIsCustomPalette(string isCustomPalette) { DARABONBA_PTR_SET_VALUE(isCustomPalette_, isCustomPalette) };


              // loop Field Functions 
              bool hasLoop() const { return this->loop_ != nullptr;};
              void deleteLoop() { this->loop_ = nullptr;};
              inline string getLoop() const { DARABONBA_PTR_GET_DEFAULT(loop_, "") };
              inline Gif& setLoop(string loop) { DARABONBA_PTR_SET_VALUE(loop_, loop) };


            protected:
              shared_ptr<string> ditherMode_ {};
              shared_ptr<string> finalDelay_ {};
              shared_ptr<string> isCustomPalette_ {};
              shared_ptr<string> loop_ {};
            };

            virtual bool empty() const override { return this->gif_ == nullptr
        && this->segment_ == nullptr && this->webp_ == nullptr; };
            // gif Field Functions 
            bool hasGif() const { return this->gif_ != nullptr;};
            void deleteGif() { this->gif_ = nullptr;};
            inline const MuxConfig::Gif & getGif() const { DARABONBA_PTR_GET_CONST(gif_, MuxConfig::Gif) };
            inline MuxConfig::Gif getGif() { DARABONBA_PTR_GET(gif_, MuxConfig::Gif) };
            inline MuxConfig& setGif(const MuxConfig::Gif & gif) { DARABONBA_PTR_SET_VALUE(gif_, gif) };
            inline MuxConfig& setGif(MuxConfig::Gif && gif) { DARABONBA_PTR_SET_RVALUE(gif_, gif) };


            // segment Field Functions 
            bool hasSegment() const { return this->segment_ != nullptr;};
            void deleteSegment() { this->segment_ = nullptr;};
            inline const MuxConfig::Segment & getSegment() const { DARABONBA_PTR_GET_CONST(segment_, MuxConfig::Segment) };
            inline MuxConfig::Segment getSegment() { DARABONBA_PTR_GET(segment_, MuxConfig::Segment) };
            inline MuxConfig& setSegment(const MuxConfig::Segment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
            inline MuxConfig& setSegment(MuxConfig::Segment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


            // webp Field Functions 
            bool hasWebp() const { return this->webp_ != nullptr;};
            void deleteWebp() { this->webp_ = nullptr;};
            inline const MuxConfig::Webp & getWebp() const { DARABONBA_PTR_GET_CONST(webp_, MuxConfig::Webp) };
            inline MuxConfig::Webp getWebp() { DARABONBA_PTR_GET(webp_, MuxConfig::Webp) };
            inline MuxConfig& setWebp(const MuxConfig::Webp & webp) { DARABONBA_PTR_SET_VALUE(webp_, webp) };
            inline MuxConfig& setWebp(MuxConfig::Webp && webp) { DARABONBA_PTR_SET_RVALUE(webp_, webp) };


          protected:
            shared_ptr<MuxConfig::Gif> gif_ {};
            shared_ptr<MuxConfig::Segment> segment_ {};
            shared_ptr<MuxConfig::Webp> webp_ {};
          };

          class MergeList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MergeList& obj) { 
              DARABONBA_PTR_TO_JSON(Merge, merge_);
            };
            friend void from_json(const Darabonba::Json& j, MergeList& obj) { 
              DARABONBA_PTR_FROM_JSON(Merge, merge_);
            };
            MergeList() = default ;
            MergeList(const MergeList &) = default ;
            MergeList(MergeList &&) = default ;
            MergeList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MergeList() = default ;
            MergeList& operator=(const MergeList &) = default ;
            MergeList& operator=(MergeList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Merge : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Merge& obj) { 
                DARABONBA_PTR_TO_JSON(Duration, duration_);
                DARABONBA_PTR_TO_JSON(MergeURL, mergeURL_);
                DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
                DARABONBA_PTR_TO_JSON(Start, start_);
              };
              friend void from_json(const Darabonba::Json& j, Merge& obj) { 
                DARABONBA_PTR_FROM_JSON(Duration, duration_);
                DARABONBA_PTR_FROM_JSON(MergeURL, mergeURL_);
                DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
                DARABONBA_PTR_FROM_JSON(Start, start_);
              };
              Merge() = default ;
              Merge(const Merge &) = default ;
              Merge(Merge &&) = default ;
              Merge(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Merge() = default ;
              Merge& operator=(const Merge &) = default ;
              Merge& operator=(Merge &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->duration_ == nullptr
        && this->mergeURL_ == nullptr && this->roleArn_ == nullptr && this->start_ == nullptr; };
              // duration Field Functions 
              bool hasDuration() const { return this->duration_ != nullptr;};
              void deleteDuration() { this->duration_ = nullptr;};
              inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
              inline Merge& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


              // mergeURL Field Functions 
              bool hasMergeURL() const { return this->mergeURL_ != nullptr;};
              void deleteMergeURL() { this->mergeURL_ = nullptr;};
              inline string getMergeURL() const { DARABONBA_PTR_GET_DEFAULT(mergeURL_, "") };
              inline Merge& setMergeURL(string mergeURL) { DARABONBA_PTR_SET_VALUE(mergeURL_, mergeURL) };


              // roleArn Field Functions 
              bool hasRoleArn() const { return this->roleArn_ != nullptr;};
              void deleteRoleArn() { this->roleArn_ = nullptr;};
              inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
              inline Merge& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


              // start Field Functions 
              bool hasStart() const { return this->start_ != nullptr;};
              void deleteStart() { this->start_ = nullptr;};
              inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
              inline Merge& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


            protected:
              shared_ptr<string> duration_ {};
              shared_ptr<string> mergeURL_ {};
              shared_ptr<string> roleArn_ {};
              shared_ptr<string> start_ {};
            };

            virtual bool empty() const override { return this->merge_ == nullptr; };
            // merge Field Functions 
            bool hasMerge() const { return this->merge_ != nullptr;};
            void deleteMerge() { this->merge_ = nullptr;};
            inline const vector<MergeList::Merge> & getMerge() const { DARABONBA_PTR_GET_CONST(merge_, vector<MergeList::Merge>) };
            inline vector<MergeList::Merge> getMerge() { DARABONBA_PTR_GET(merge_, vector<MergeList::Merge>) };
            inline MergeList& setMerge(const vector<MergeList::Merge> & merge) { DARABONBA_PTR_SET_VALUE(merge_, merge) };
            inline MergeList& setMerge(vector<MergeList::Merge> && merge) { DARABONBA_PTR_SET_RVALUE(merge_, merge) };


          protected:
            shared_ptr<vector<MergeList::Merge>> merge_ {};
          };

          class M3U8NonStandardSupport : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const M3U8NonStandardSupport& obj) { 
              DARABONBA_PTR_TO_JSON(TS, TS_);
            };
            friend void from_json(const Darabonba::Json& j, M3U8NonStandardSupport& obj) { 
              DARABONBA_PTR_FROM_JSON(TS, TS_);
            };
            M3U8NonStandardSupport() = default ;
            M3U8NonStandardSupport(const M3U8NonStandardSupport &) = default ;
            M3U8NonStandardSupport(M3U8NonStandardSupport &&) = default ;
            M3U8NonStandardSupport(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~M3U8NonStandardSupport() = default ;
            M3U8NonStandardSupport& operator=(const M3U8NonStandardSupport &) = default ;
            M3U8NonStandardSupport& operator=(M3U8NonStandardSupport &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class TS : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const TS& obj) { 
                DARABONBA_PTR_TO_JSON(Md5Support, md5Support_);
                DARABONBA_PTR_TO_JSON(SizeSupport, sizeSupport_);
              };
              friend void from_json(const Darabonba::Json& j, TS& obj) { 
                DARABONBA_PTR_FROM_JSON(Md5Support, md5Support_);
                DARABONBA_PTR_FROM_JSON(SizeSupport, sizeSupport_);
              };
              TS() = default ;
              TS(const TS &) = default ;
              TS(TS &&) = default ;
              TS(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~TS() = default ;
              TS& operator=(const TS &) = default ;
              TS& operator=(TS &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->md5Support_ == nullptr
        && this->sizeSupport_ == nullptr; };
              // md5Support Field Functions 
              bool hasMd5Support() const { return this->md5Support_ != nullptr;};
              void deleteMd5Support() { this->md5Support_ = nullptr;};
              inline bool getMd5Support() const { DARABONBA_PTR_GET_DEFAULT(md5Support_, false) };
              inline TS& setMd5Support(bool md5Support) { DARABONBA_PTR_SET_VALUE(md5Support_, md5Support) };


              // sizeSupport Field Functions 
              bool hasSizeSupport() const { return this->sizeSupport_ != nullptr;};
              void deleteSizeSupport() { this->sizeSupport_ = nullptr;};
              inline bool getSizeSupport() const { DARABONBA_PTR_GET_DEFAULT(sizeSupport_, false) };
              inline TS& setSizeSupport(bool sizeSupport) { DARABONBA_PTR_SET_VALUE(sizeSupport_, sizeSupport) };


            protected:
              shared_ptr<bool> md5Support_ {};
              shared_ptr<bool> sizeSupport_ {};
            };

            virtual bool empty() const override { return this->TS_ == nullptr; };
            // TS Field Functions 
            bool hasTS() const { return this->TS_ != nullptr;};
            void deleteTS() { this->TS_ = nullptr;};
            inline const M3U8NonStandardSupport::TS & getTS() const { DARABONBA_PTR_GET_CONST(TS_, M3U8NonStandardSupport::TS) };
            inline M3U8NonStandardSupport::TS getTS() { DARABONBA_PTR_GET(TS_, M3U8NonStandardSupport::TS) };
            inline M3U8NonStandardSupport& setTS(const M3U8NonStandardSupport::TS & tS) { DARABONBA_PTR_SET_VALUE(TS_, tS) };
            inline M3U8NonStandardSupport& setTS(M3U8NonStandardSupport::TS && tS) { DARABONBA_PTR_SET_RVALUE(TS_, tS) };


          protected:
            shared_ptr<M3U8NonStandardSupport::TS> TS_ {};
          };

          class Encryption : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Encryption& obj) { 
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(KeyType, keyType_);
              DARABONBA_PTR_TO_JSON(KeyUri, keyUri_);
              DARABONBA_PTR_TO_JSON(SkipCnt, skipCnt_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Encryption& obj) { 
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
              DARABONBA_PTR_FROM_JSON(KeyUri, keyUri_);
              DARABONBA_PTR_FROM_JSON(SkipCnt, skipCnt_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Encryption() = default ;
            Encryption(const Encryption &) = default ;
            Encryption(Encryption &&) = default ;
            Encryption(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Encryption() = default ;
            Encryption& operator=(const Encryption &) = default ;
            Encryption& operator=(Encryption &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->id_ == nullptr
        && this->key_ == nullptr && this->keyType_ == nullptr && this->keyUri_ == nullptr && this->skipCnt_ == nullptr && this->type_ == nullptr; };
            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline Encryption& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Encryption& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // keyType Field Functions 
            bool hasKeyType() const { return this->keyType_ != nullptr;};
            void deleteKeyType() { this->keyType_ = nullptr;};
            inline string getKeyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
            inline Encryption& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


            // keyUri Field Functions 
            bool hasKeyUri() const { return this->keyUri_ != nullptr;};
            void deleteKeyUri() { this->keyUri_ = nullptr;};
            inline string getKeyUri() const { DARABONBA_PTR_GET_DEFAULT(keyUri_, "") };
            inline Encryption& setKeyUri(string keyUri) { DARABONBA_PTR_SET_VALUE(keyUri_, keyUri) };


            // skipCnt Field Functions 
            bool hasSkipCnt() const { return this->skipCnt_ != nullptr;};
            void deleteSkipCnt() { this->skipCnt_ = nullptr;};
            inline string getSkipCnt() const { DARABONBA_PTR_GET_DEFAULT(skipCnt_, "") };
            inline Encryption& setSkipCnt(string skipCnt) { DARABONBA_PTR_SET_VALUE(skipCnt_, skipCnt) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Encryption& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> id_ {};
            shared_ptr<string> key_ {};
            shared_ptr<string> keyType_ {};
            shared_ptr<string> keyUri_ {};
            shared_ptr<string> skipCnt_ {};
            shared_ptr<string> type_ {};
          };

          class Container : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Container& obj) { 
              DARABONBA_PTR_TO_JSON(Format, format_);
            };
            friend void from_json(const Darabonba::Json& j, Container& obj) { 
              DARABONBA_PTR_FROM_JSON(Format, format_);
            };
            Container() = default ;
            Container(const Container &) = default ;
            Container(Container &&) = default ;
            Container(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Container() = default ;
            Container& operator=(const Container &) = default ;
            Container& operator=(Container &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->format_ == nullptr; };
            // format Field Functions 
            bool hasFormat() const { return this->format_ != nullptr;};
            void deleteFormat() { this->format_ = nullptr;};
            inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
            inline Container& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


          protected:
            shared_ptr<string> format_ {};
          };

          class Clip : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Clip& obj) { 
              DARABONBA_PTR_TO_JSON(TimeSpan, timeSpan_);
            };
            friend void from_json(const Darabonba::Json& j, Clip& obj) { 
              DARABONBA_PTR_FROM_JSON(TimeSpan, timeSpan_);
            };
            Clip() = default ;
            Clip(const Clip &) = default ;
            Clip(Clip &&) = default ;
            Clip(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Clip() = default ;
            Clip& operator=(const Clip &) = default ;
            Clip& operator=(Clip &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class TimeSpan : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const TimeSpan& obj) { 
                DARABONBA_PTR_TO_JSON(Duration, duration_);
                DARABONBA_PTR_TO_JSON(Seek, seek_);
              };
              friend void from_json(const Darabonba::Json& j, TimeSpan& obj) { 
                DARABONBA_PTR_FROM_JSON(Duration, duration_);
                DARABONBA_PTR_FROM_JSON(Seek, seek_);
              };
              TimeSpan() = default ;
              TimeSpan(const TimeSpan &) = default ;
              TimeSpan(TimeSpan &&) = default ;
              TimeSpan(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~TimeSpan() = default ;
              TimeSpan& operator=(const TimeSpan &) = default ;
              TimeSpan& operator=(TimeSpan &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->duration_ == nullptr
        && this->seek_ == nullptr; };
              // duration Field Functions 
              bool hasDuration() const { return this->duration_ != nullptr;};
              void deleteDuration() { this->duration_ = nullptr;};
              inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
              inline TimeSpan& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


              // seek Field Functions 
              bool hasSeek() const { return this->seek_ != nullptr;};
              void deleteSeek() { this->seek_ = nullptr;};
              inline string getSeek() const { DARABONBA_PTR_GET_DEFAULT(seek_, "") };
              inline TimeSpan& setSeek(string seek) { DARABONBA_PTR_SET_VALUE(seek_, seek) };


            protected:
              shared_ptr<string> duration_ {};
              shared_ptr<string> seek_ {};
            };

            virtual bool empty() const override { return this->timeSpan_ == nullptr; };
            // timeSpan Field Functions 
            bool hasTimeSpan() const { return this->timeSpan_ != nullptr;};
            void deleteTimeSpan() { this->timeSpan_ = nullptr;};
            inline const Clip::TimeSpan & getTimeSpan() const { DARABONBA_PTR_GET_CONST(timeSpan_, Clip::TimeSpan) };
            inline Clip::TimeSpan getTimeSpan() { DARABONBA_PTR_GET(timeSpan_, Clip::TimeSpan) };
            inline Clip& setTimeSpan(const Clip::TimeSpan & timeSpan) { DARABONBA_PTR_SET_VALUE(timeSpan_, timeSpan) };
            inline Clip& setTimeSpan(Clip::TimeSpan && timeSpan) { DARABONBA_PTR_SET_RVALUE(timeSpan_, timeSpan) };


          protected:
            shared_ptr<Clip::TimeSpan> timeSpan_ {};
          };

          class Audio : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Audio& obj) { 
              DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_TO_JSON(Channels, channels_);
              DARABONBA_PTR_TO_JSON(Codec, codec_);
              DARABONBA_PTR_TO_JSON(Profile, profile_);
              DARABONBA_PTR_TO_JSON(Qscale, qscale_);
              DARABONBA_PTR_TO_JSON(Samplerate, samplerate_);
              DARABONBA_PTR_TO_JSON(Volume, volume_);
            };
            friend void from_json(const Darabonba::Json& j, Audio& obj) { 
              DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
              DARABONBA_PTR_FROM_JSON(Channels, channels_);
              DARABONBA_PTR_FROM_JSON(Codec, codec_);
              DARABONBA_PTR_FROM_JSON(Profile, profile_);
              DARABONBA_PTR_FROM_JSON(Qscale, qscale_);
              DARABONBA_PTR_FROM_JSON(Samplerate, samplerate_);
              DARABONBA_PTR_FROM_JSON(Volume, volume_);
            };
            Audio() = default ;
            Audio(const Audio &) = default ;
            Audio(Audio &&) = default ;
            Audio(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Audio() = default ;
            Audio& operator=(const Audio &) = default ;
            Audio& operator=(Audio &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Volume : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Volume& obj) { 
                DARABONBA_PTR_TO_JSON(Level, level_);
                DARABONBA_PTR_TO_JSON(Method, method_);
              };
              friend void from_json(const Darabonba::Json& j, Volume& obj) { 
                DARABONBA_PTR_FROM_JSON(Level, level_);
                DARABONBA_PTR_FROM_JSON(Method, method_);
              };
              Volume() = default ;
              Volume(const Volume &) = default ;
              Volume(Volume &&) = default ;
              Volume(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Volume() = default ;
              Volume& operator=(const Volume &) = default ;
              Volume& operator=(Volume &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->level_ == nullptr
        && this->method_ == nullptr; };
              // level Field Functions 
              bool hasLevel() const { return this->level_ != nullptr;};
              void deleteLevel() { this->level_ = nullptr;};
              inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
              inline Volume& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


              // method Field Functions 
              bool hasMethod() const { return this->method_ != nullptr;};
              void deleteMethod() { this->method_ = nullptr;};
              inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
              inline Volume& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


            protected:
              shared_ptr<string> level_ {};
              shared_ptr<string> method_ {};
            };

            virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->channels_ == nullptr && this->codec_ == nullptr && this->profile_ == nullptr && this->qscale_ == nullptr && this->samplerate_ == nullptr
        && this->volume_ == nullptr; };
            // bitrate Field Functions 
            bool hasBitrate() const { return this->bitrate_ != nullptr;};
            void deleteBitrate() { this->bitrate_ = nullptr;};
            inline string getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
            inline Audio& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


            // channels Field Functions 
            bool hasChannels() const { return this->channels_ != nullptr;};
            void deleteChannels() { this->channels_ = nullptr;};
            inline string getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
            inline Audio& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


            // codec Field Functions 
            bool hasCodec() const { return this->codec_ != nullptr;};
            void deleteCodec() { this->codec_ = nullptr;};
            inline string getCodec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
            inline Audio& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


            // profile Field Functions 
            bool hasProfile() const { return this->profile_ != nullptr;};
            void deleteProfile() { this->profile_ = nullptr;};
            inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
            inline Audio& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


            // qscale Field Functions 
            bool hasQscale() const { return this->qscale_ != nullptr;};
            void deleteQscale() { this->qscale_ = nullptr;};
            inline string getQscale() const { DARABONBA_PTR_GET_DEFAULT(qscale_, "") };
            inline Audio& setQscale(string qscale) { DARABONBA_PTR_SET_VALUE(qscale_, qscale) };


            // samplerate Field Functions 
            bool hasSamplerate() const { return this->samplerate_ != nullptr;};
            void deleteSamplerate() { this->samplerate_ = nullptr;};
            inline string getSamplerate() const { DARABONBA_PTR_GET_DEFAULT(samplerate_, "") };
            inline Audio& setSamplerate(string samplerate) { DARABONBA_PTR_SET_VALUE(samplerate_, samplerate) };


            // volume Field Functions 
            bool hasVolume() const { return this->volume_ != nullptr;};
            void deleteVolume() { this->volume_ = nullptr;};
            inline const Audio::Volume & getVolume() const { DARABONBA_PTR_GET_CONST(volume_, Audio::Volume) };
            inline Audio::Volume getVolume() { DARABONBA_PTR_GET(volume_, Audio::Volume) };
            inline Audio& setVolume(const Audio::Volume & volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };
            inline Audio& setVolume(Audio::Volume && volume) { DARABONBA_PTR_SET_RVALUE(volume_, volume) };


          protected:
            shared_ptr<string> bitrate_ {};
            shared_ptr<string> channels_ {};
            shared_ptr<string> codec_ {};
            shared_ptr<string> profile_ {};
            shared_ptr<string> qscale_ {};
            shared_ptr<string> samplerate_ {};
            shared_ptr<Audio::Volume> volume_ {};
          };

          virtual bool empty() const override { return this->audio_ == nullptr
        && this->audioStreamMap_ == nullptr && this->clip_ == nullptr && this->container_ == nullptr && this->deWatermark_ == nullptr && this->encryption_ == nullptr
        && this->m3U8NonStandardSupport_ == nullptr && this->mergeConfigUrl_ == nullptr && this->mergeList_ == nullptr && this->muxConfig_ == nullptr && this->openingList_ == nullptr
        && this->outSubtitleList_ == nullptr && this->outputFile_ == nullptr && this->priority_ == nullptr && this->properties_ == nullptr && this->rotate_ == nullptr
        && this->subtitleConfig_ == nullptr && this->superReso_ == nullptr && this->tailSlateList_ == nullptr && this->templateId_ == nullptr && this->transConfig_ == nullptr
        && this->userData_ == nullptr && this->video_ == nullptr && this->videoStreamMap_ == nullptr && this->waterMarkConfigUrl_ == nullptr && this->waterMarkList_ == nullptr; };
          // audio Field Functions 
          bool hasAudio() const { return this->audio_ != nullptr;};
          void deleteAudio() { this->audio_ = nullptr;};
          inline const Output::Audio & getAudio() const { DARABONBA_PTR_GET_CONST(audio_, Output::Audio) };
          inline Output::Audio getAudio() { DARABONBA_PTR_GET(audio_, Output::Audio) };
          inline Output& setAudio(const Output::Audio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
          inline Output& setAudio(Output::Audio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


          // audioStreamMap Field Functions 
          bool hasAudioStreamMap() const { return this->audioStreamMap_ != nullptr;};
          void deleteAudioStreamMap() { this->audioStreamMap_ = nullptr;};
          inline string getAudioStreamMap() const { DARABONBA_PTR_GET_DEFAULT(audioStreamMap_, "") };
          inline Output& setAudioStreamMap(string audioStreamMap) { DARABONBA_PTR_SET_VALUE(audioStreamMap_, audioStreamMap) };


          // clip Field Functions 
          bool hasClip() const { return this->clip_ != nullptr;};
          void deleteClip() { this->clip_ = nullptr;};
          inline const Output::Clip & getClip() const { DARABONBA_PTR_GET_CONST(clip_, Output::Clip) };
          inline Output::Clip getClip() { DARABONBA_PTR_GET(clip_, Output::Clip) };
          inline Output& setClip(const Output::Clip & clip) { DARABONBA_PTR_SET_VALUE(clip_, clip) };
          inline Output& setClip(Output::Clip && clip) { DARABONBA_PTR_SET_RVALUE(clip_, clip) };


          // container Field Functions 
          bool hasContainer() const { return this->container_ != nullptr;};
          void deleteContainer() { this->container_ = nullptr;};
          inline const Output::Container & getContainer() const { DARABONBA_PTR_GET_CONST(container_, Output::Container) };
          inline Output::Container getContainer() { DARABONBA_PTR_GET(container_, Output::Container) };
          inline Output& setContainer(const Output::Container & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
          inline Output& setContainer(Output::Container && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


          // deWatermark Field Functions 
          bool hasDeWatermark() const { return this->deWatermark_ != nullptr;};
          void deleteDeWatermark() { this->deWatermark_ = nullptr;};
          inline string getDeWatermark() const { DARABONBA_PTR_GET_DEFAULT(deWatermark_, "") };
          inline Output& setDeWatermark(string deWatermark) { DARABONBA_PTR_SET_VALUE(deWatermark_, deWatermark) };


          // encryption Field Functions 
          bool hasEncryption() const { return this->encryption_ != nullptr;};
          void deleteEncryption() { this->encryption_ = nullptr;};
          inline const Output::Encryption & getEncryption() const { DARABONBA_PTR_GET_CONST(encryption_, Output::Encryption) };
          inline Output::Encryption getEncryption() { DARABONBA_PTR_GET(encryption_, Output::Encryption) };
          inline Output& setEncryption(const Output::Encryption & encryption) { DARABONBA_PTR_SET_VALUE(encryption_, encryption) };
          inline Output& setEncryption(Output::Encryption && encryption) { DARABONBA_PTR_SET_RVALUE(encryption_, encryption) };


          // m3U8NonStandardSupport Field Functions 
          bool hasM3U8NonStandardSupport() const { return this->m3U8NonStandardSupport_ != nullptr;};
          void deleteM3U8NonStandardSupport() { this->m3U8NonStandardSupport_ = nullptr;};
          inline const Output::M3U8NonStandardSupport & getM3U8NonStandardSupport() const { DARABONBA_PTR_GET_CONST(m3U8NonStandardSupport_, Output::M3U8NonStandardSupport) };
          inline Output::M3U8NonStandardSupport getM3U8NonStandardSupport() { DARABONBA_PTR_GET(m3U8NonStandardSupport_, Output::M3U8NonStandardSupport) };
          inline Output& setM3U8NonStandardSupport(const Output::M3U8NonStandardSupport & m3U8NonStandardSupport) { DARABONBA_PTR_SET_VALUE(m3U8NonStandardSupport_, m3U8NonStandardSupport) };
          inline Output& setM3U8NonStandardSupport(Output::M3U8NonStandardSupport && m3U8NonStandardSupport) { DARABONBA_PTR_SET_RVALUE(m3U8NonStandardSupport_, m3U8NonStandardSupport) };


          // mergeConfigUrl Field Functions 
          bool hasMergeConfigUrl() const { return this->mergeConfigUrl_ != nullptr;};
          void deleteMergeConfigUrl() { this->mergeConfigUrl_ = nullptr;};
          inline string getMergeConfigUrl() const { DARABONBA_PTR_GET_DEFAULT(mergeConfigUrl_, "") };
          inline Output& setMergeConfigUrl(string mergeConfigUrl) { DARABONBA_PTR_SET_VALUE(mergeConfigUrl_, mergeConfigUrl) };


          // mergeList Field Functions 
          bool hasMergeList() const { return this->mergeList_ != nullptr;};
          void deleteMergeList() { this->mergeList_ = nullptr;};
          inline const Output::MergeList & getMergeList() const { DARABONBA_PTR_GET_CONST(mergeList_, Output::MergeList) };
          inline Output::MergeList getMergeList() { DARABONBA_PTR_GET(mergeList_, Output::MergeList) };
          inline Output& setMergeList(const Output::MergeList & mergeList) { DARABONBA_PTR_SET_VALUE(mergeList_, mergeList) };
          inline Output& setMergeList(Output::MergeList && mergeList) { DARABONBA_PTR_SET_RVALUE(mergeList_, mergeList) };


          // muxConfig Field Functions 
          bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
          void deleteMuxConfig() { this->muxConfig_ = nullptr;};
          inline const Output::MuxConfig & getMuxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Output::MuxConfig) };
          inline Output::MuxConfig getMuxConfig() { DARABONBA_PTR_GET(muxConfig_, Output::MuxConfig) };
          inline Output& setMuxConfig(const Output::MuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
          inline Output& setMuxConfig(Output::MuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


          // openingList Field Functions 
          bool hasOpeningList() const { return this->openingList_ != nullptr;};
          void deleteOpeningList() { this->openingList_ = nullptr;};
          inline const Output::OpeningList & getOpeningList() const { DARABONBA_PTR_GET_CONST(openingList_, Output::OpeningList) };
          inline Output::OpeningList getOpeningList() { DARABONBA_PTR_GET(openingList_, Output::OpeningList) };
          inline Output& setOpeningList(const Output::OpeningList & openingList) { DARABONBA_PTR_SET_VALUE(openingList_, openingList) };
          inline Output& setOpeningList(Output::OpeningList && openingList) { DARABONBA_PTR_SET_RVALUE(openingList_, openingList) };


          // outSubtitleList Field Functions 
          bool hasOutSubtitleList() const { return this->outSubtitleList_ != nullptr;};
          void deleteOutSubtitleList() { this->outSubtitleList_ = nullptr;};
          inline const Output::OutSubtitleList & getOutSubtitleList() const { DARABONBA_PTR_GET_CONST(outSubtitleList_, Output::OutSubtitleList) };
          inline Output::OutSubtitleList getOutSubtitleList() { DARABONBA_PTR_GET(outSubtitleList_, Output::OutSubtitleList) };
          inline Output& setOutSubtitleList(const Output::OutSubtitleList & outSubtitleList) { DARABONBA_PTR_SET_VALUE(outSubtitleList_, outSubtitleList) };
          inline Output& setOutSubtitleList(Output::OutSubtitleList && outSubtitleList) { DARABONBA_PTR_SET_RVALUE(outSubtitleList_, outSubtitleList) };


          // outputFile Field Functions 
          bool hasOutputFile() const { return this->outputFile_ != nullptr;};
          void deleteOutputFile() { this->outputFile_ = nullptr;};
          inline const Output::OutputFile & getOutputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, Output::OutputFile) };
          inline Output::OutputFile getOutputFile() { DARABONBA_PTR_GET(outputFile_, Output::OutputFile) };
          inline Output& setOutputFile(const Output::OutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
          inline Output& setOutputFile(Output::OutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


          // priority Field Functions 
          bool hasPriority() const { return this->priority_ != nullptr;};
          void deletePriority() { this->priority_ = nullptr;};
          inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
          inline Output& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


          // properties Field Functions 
          bool hasProperties() const { return this->properties_ != nullptr;};
          void deleteProperties() { this->properties_ = nullptr;};
          inline const Output::Properties & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, Output::Properties) };
          inline Output::Properties getProperties() { DARABONBA_PTR_GET(properties_, Output::Properties) };
          inline Output& setProperties(const Output::Properties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
          inline Output& setProperties(Output::Properties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


          // rotate Field Functions 
          bool hasRotate() const { return this->rotate_ != nullptr;};
          void deleteRotate() { this->rotate_ = nullptr;};
          inline string getRotate() const { DARABONBA_PTR_GET_DEFAULT(rotate_, "") };
          inline Output& setRotate(string rotate) { DARABONBA_PTR_SET_VALUE(rotate_, rotate) };


          // subtitleConfig Field Functions 
          bool hasSubtitleConfig() const { return this->subtitleConfig_ != nullptr;};
          void deleteSubtitleConfig() { this->subtitleConfig_ = nullptr;};
          inline const Output::SubtitleConfig & getSubtitleConfig() const { DARABONBA_PTR_GET_CONST(subtitleConfig_, Output::SubtitleConfig) };
          inline Output::SubtitleConfig getSubtitleConfig() { DARABONBA_PTR_GET(subtitleConfig_, Output::SubtitleConfig) };
          inline Output& setSubtitleConfig(const Output::SubtitleConfig & subtitleConfig) { DARABONBA_PTR_SET_VALUE(subtitleConfig_, subtitleConfig) };
          inline Output& setSubtitleConfig(Output::SubtitleConfig && subtitleConfig) { DARABONBA_PTR_SET_RVALUE(subtitleConfig_, subtitleConfig) };


          // superReso Field Functions 
          bool hasSuperReso() const { return this->superReso_ != nullptr;};
          void deleteSuperReso() { this->superReso_ = nullptr;};
          inline const Output::SuperReso & getSuperReso() const { DARABONBA_PTR_GET_CONST(superReso_, Output::SuperReso) };
          inline Output::SuperReso getSuperReso() { DARABONBA_PTR_GET(superReso_, Output::SuperReso) };
          inline Output& setSuperReso(const Output::SuperReso & superReso) { DARABONBA_PTR_SET_VALUE(superReso_, superReso) };
          inline Output& setSuperReso(Output::SuperReso && superReso) { DARABONBA_PTR_SET_RVALUE(superReso_, superReso) };


          // tailSlateList Field Functions 
          bool hasTailSlateList() const { return this->tailSlateList_ != nullptr;};
          void deleteTailSlateList() { this->tailSlateList_ = nullptr;};
          inline const Output::TailSlateList & getTailSlateList() const { DARABONBA_PTR_GET_CONST(tailSlateList_, Output::TailSlateList) };
          inline Output::TailSlateList getTailSlateList() { DARABONBA_PTR_GET(tailSlateList_, Output::TailSlateList) };
          inline Output& setTailSlateList(const Output::TailSlateList & tailSlateList) { DARABONBA_PTR_SET_VALUE(tailSlateList_, tailSlateList) };
          inline Output& setTailSlateList(Output::TailSlateList && tailSlateList) { DARABONBA_PTR_SET_RVALUE(tailSlateList_, tailSlateList) };


          // templateId Field Functions 
          bool hasTemplateId() const { return this->templateId_ != nullptr;};
          void deleteTemplateId() { this->templateId_ = nullptr;};
          inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
          inline Output& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


          // transConfig Field Functions 
          bool hasTransConfig() const { return this->transConfig_ != nullptr;};
          void deleteTransConfig() { this->transConfig_ = nullptr;};
          inline const Output::TransConfig & getTransConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Output::TransConfig) };
          inline Output::TransConfig getTransConfig() { DARABONBA_PTR_GET(transConfig_, Output::TransConfig) };
          inline Output& setTransConfig(const Output::TransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
          inline Output& setTransConfig(Output::TransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


          // userData Field Functions 
          bool hasUserData() const { return this->userData_ != nullptr;};
          void deleteUserData() { this->userData_ = nullptr;};
          inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
          inline Output& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


          // video Field Functions 
          bool hasVideo() const { return this->video_ != nullptr;};
          void deleteVideo() { this->video_ = nullptr;};
          inline const Output::Video & getVideo() const { DARABONBA_PTR_GET_CONST(video_, Output::Video) };
          inline Output::Video getVideo() { DARABONBA_PTR_GET(video_, Output::Video) };
          inline Output& setVideo(const Output::Video & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
          inline Output& setVideo(Output::Video && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


          // videoStreamMap Field Functions 
          bool hasVideoStreamMap() const { return this->videoStreamMap_ != nullptr;};
          void deleteVideoStreamMap() { this->videoStreamMap_ = nullptr;};
          inline string getVideoStreamMap() const { DARABONBA_PTR_GET_DEFAULT(videoStreamMap_, "") };
          inline Output& setVideoStreamMap(string videoStreamMap) { DARABONBA_PTR_SET_VALUE(videoStreamMap_, videoStreamMap) };


          // waterMarkConfigUrl Field Functions 
          bool hasWaterMarkConfigUrl() const { return this->waterMarkConfigUrl_ != nullptr;};
          void deleteWaterMarkConfigUrl() { this->waterMarkConfigUrl_ = nullptr;};
          inline string getWaterMarkConfigUrl() const { DARABONBA_PTR_GET_DEFAULT(waterMarkConfigUrl_, "") };
          inline Output& setWaterMarkConfigUrl(string waterMarkConfigUrl) { DARABONBA_PTR_SET_VALUE(waterMarkConfigUrl_, waterMarkConfigUrl) };


          // waterMarkList Field Functions 
          bool hasWaterMarkList() const { return this->waterMarkList_ != nullptr;};
          void deleteWaterMarkList() { this->waterMarkList_ = nullptr;};
          inline const Output::WaterMarkList & getWaterMarkList() const { DARABONBA_PTR_GET_CONST(waterMarkList_, Output::WaterMarkList) };
          inline Output::WaterMarkList getWaterMarkList() { DARABONBA_PTR_GET(waterMarkList_, Output::WaterMarkList) };
          inline Output& setWaterMarkList(const Output::WaterMarkList & waterMarkList) { DARABONBA_PTR_SET_VALUE(waterMarkList_, waterMarkList) };
          inline Output& setWaterMarkList(Output::WaterMarkList && waterMarkList) { DARABONBA_PTR_SET_RVALUE(waterMarkList_, waterMarkList) };


        protected:
          shared_ptr<Output::Audio> audio_ {};
          shared_ptr<string> audioStreamMap_ {};
          shared_ptr<Output::Clip> clip_ {};
          shared_ptr<Output::Container> container_ {};
          shared_ptr<string> deWatermark_ {};
          shared_ptr<Output::Encryption> encryption_ {};
          shared_ptr<Output::M3U8NonStandardSupport> m3U8NonStandardSupport_ {};
          shared_ptr<string> mergeConfigUrl_ {};
          shared_ptr<Output::MergeList> mergeList_ {};
          shared_ptr<Output::MuxConfig> muxConfig_ {};
          shared_ptr<Output::OpeningList> openingList_ {};
          shared_ptr<Output::OutSubtitleList> outSubtitleList_ {};
          shared_ptr<Output::OutputFile> outputFile_ {};
          shared_ptr<string> priority_ {};
          shared_ptr<Output::Properties> properties_ {};
          shared_ptr<string> rotate_ {};
          shared_ptr<Output::SubtitleConfig> subtitleConfig_ {};
          shared_ptr<Output::SuperReso> superReso_ {};
          shared_ptr<Output::TailSlateList> tailSlateList_ {};
          shared_ptr<string> templateId_ {};
          shared_ptr<Output::TransConfig> transConfig_ {};
          shared_ptr<string> userData_ {};
          shared_ptr<Output::Video> video_ {};
          shared_ptr<string> videoStreamMap_ {};
          shared_ptr<string> waterMarkConfigUrl_ {};
          shared_ptr<Output::WaterMarkList> waterMarkList_ {};
        };

        class MNSMessageResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MNSMessageResult& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(MessageId, messageId_);
          };
          friend void from_json(const Darabonba::Json& j, MNSMessageResult& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
          };
          MNSMessageResult() = default ;
          MNSMessageResult(const MNSMessageResult &) = default ;
          MNSMessageResult(MNSMessageResult &&) = default ;
          MNSMessageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MNSMessageResult() = default ;
          MNSMessageResult& operator=(const MNSMessageResult &) = default ;
          MNSMessageResult& operator=(MNSMessageResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->messageId_ == nullptr; };
          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
          inline MNSMessageResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


          // errorMessage Field Functions 
          bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
          void deleteErrorMessage() { this->errorMessage_ = nullptr;};
          inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
          inline MNSMessageResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


          // messageId Field Functions 
          bool hasMessageId() const { return this->messageId_ != nullptr;};
          void deleteMessageId() { this->messageId_ = nullptr;};
          inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
          inline MNSMessageResult& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


        protected:
          shared_ptr<string> errorCode_ {};
          shared_ptr<string> errorMessage_ {};
          shared_ptr<string> messageId_ {};
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
          shared_ptr<string> bucket_ {};
          shared_ptr<string> location_ {};
          shared_ptr<string> object_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->creationTime_ == nullptr && this->finishTime_ == nullptr && this->input_ == nullptr && this->jobId_ == nullptr && this->MNSMessageResult_ == nullptr
        && this->message_ == nullptr && this->output_ == nullptr && this->percent_ == nullptr && this->pipelineId_ == nullptr && this->state_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Job& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Job& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline Job& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // input Field Functions 
        bool hasInput() const { return this->input_ != nullptr;};
        void deleteInput() { this->input_ = nullptr;};
        inline const Job::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, Job::Input) };
        inline Job::Input getInput() { DARABONBA_PTR_GET(input_, Job::Input) };
        inline Job& setInput(const Job::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
        inline Job& setInput(Job::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline Job& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // MNSMessageResult Field Functions 
        bool hasMNSMessageResult() const { return this->MNSMessageResult_ != nullptr;};
        void deleteMNSMessageResult() { this->MNSMessageResult_ = nullptr;};
        inline const Job::MNSMessageResult & getMNSMessageResult() const { DARABONBA_PTR_GET_CONST(MNSMessageResult_, Job::MNSMessageResult) };
        inline Job::MNSMessageResult getMNSMessageResult() { DARABONBA_PTR_GET(MNSMessageResult_, Job::MNSMessageResult) };
        inline Job& setMNSMessageResult(const Job::MNSMessageResult & mNSMessageResult) { DARABONBA_PTR_SET_VALUE(MNSMessageResult_, mNSMessageResult) };
        inline Job& setMNSMessageResult(Job::MNSMessageResult && mNSMessageResult) { DARABONBA_PTR_SET_RVALUE(MNSMessageResult_, mNSMessageResult) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Job& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // output Field Functions 
        bool hasOutput() const { return this->output_ != nullptr;};
        void deleteOutput() { this->output_ = nullptr;};
        inline const Job::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, Job::Output) };
        inline Job::Output getOutput() { DARABONBA_PTR_GET(output_, Job::Output) };
        inline Job& setOutput(const Job::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
        inline Job& setOutput(Job::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline int64_t getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0L) };
        inline Job& setPercent(int64_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // pipelineId Field Functions 
        bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
        void deletePipelineId() { this->pipelineId_ = nullptr;};
        inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
        inline Job& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Job& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> finishTime_ {};
        shared_ptr<Job::Input> input_ {};
        shared_ptr<string> jobId_ {};
        shared_ptr<Job::MNSMessageResult> MNSMessageResult_ {};
        shared_ptr<string> message_ {};
        shared_ptr<Job::Output> output_ {};
        shared_ptr<int64_t> percent_ {};
        shared_ptr<string> pipelineId_ {};
        shared_ptr<string> state_ {};
      };

      virtual bool empty() const override { return this->job_ == nullptr; };
      // job Field Functions 
      bool hasJob() const { return this->job_ != nullptr;};
      void deleteJob() { this->job_ = nullptr;};
      inline const vector<JobList::Job> & getJob() const { DARABONBA_PTR_GET_CONST(job_, vector<JobList::Job>) };
      inline vector<JobList::Job> getJob() { DARABONBA_PTR_GET(job_, vector<JobList::Job>) };
      inline JobList& setJob(const vector<JobList::Job> & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
      inline JobList& setJob(vector<JobList::Job> && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    protected:
      shared_ptr<vector<JobList::Job>> job_ {};
    };

    virtual bool empty() const override { return this->jobList_ == nullptr
        && this->nextPageToken_ == nullptr && this->requestId_ == nullptr; };
    // jobList Field Functions 
    bool hasJobList() const { return this->jobList_ != nullptr;};
    void deleteJobList() { this->jobList_ = nullptr;};
    inline const ListJobResponseBody::JobList & getJobList() const { DARABONBA_PTR_GET_CONST(jobList_, ListJobResponseBody::JobList) };
    inline ListJobResponseBody::JobList getJobList() { DARABONBA_PTR_GET(jobList_, ListJobResponseBody::JobList) };
    inline ListJobResponseBody& setJobList(const ListJobResponseBody::JobList & jobList) { DARABONBA_PTR_SET_VALUE(jobList_, jobList) };
    inline ListJobResponseBody& setJobList(ListJobResponseBody::JobList && jobList) { DARABONBA_PTR_SET_RVALUE(jobList_, jobList) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListJobResponseBody& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListJobResponseBody::JobList> jobList_ {};
    // The pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextPageToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
