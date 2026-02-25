// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTRESPONSEBODY_HPP_
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
  class QueryAnalysisJobListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAnalysisJobListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisJobList, analysisJobList_);
      DARABONBA_PTR_TO_JSON(NonExistAnalysisJobIds, nonExistAnalysisJobIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAnalysisJobListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisJobList, analysisJobList_);
      DARABONBA_PTR_FROM_JSON(NonExistAnalysisJobIds, nonExistAnalysisJobIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryAnalysisJobListResponseBody() = default ;
    QueryAnalysisJobListResponseBody(const QueryAnalysisJobListResponseBody &) = default ;
    QueryAnalysisJobListResponseBody(QueryAnalysisJobListResponseBody &&) = default ;
    QueryAnalysisJobListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAnalysisJobListResponseBody() = default ;
    QueryAnalysisJobListResponseBody& operator=(const QueryAnalysisJobListResponseBody &) = default ;
    QueryAnalysisJobListResponseBody& operator=(QueryAnalysisJobListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NonExistAnalysisJobIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NonExistAnalysisJobIds& obj) { 
        DARABONBA_PTR_TO_JSON(String, string_);
      };
      friend void from_json(const Darabonba::Json& j, NonExistAnalysisJobIds& obj) { 
        DARABONBA_PTR_FROM_JSON(String, string_);
      };
      NonExistAnalysisJobIds() = default ;
      NonExistAnalysisJobIds(const NonExistAnalysisJobIds &) = default ;
      NonExistAnalysisJobIds(NonExistAnalysisJobIds &&) = default ;
      NonExistAnalysisJobIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NonExistAnalysisJobIds() = default ;
      NonExistAnalysisJobIds& operator=(const NonExistAnalysisJobIds &) = default ;
      NonExistAnalysisJobIds& operator=(NonExistAnalysisJobIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->string_ == nullptr; };
      // string Field Functions 
      bool hasString() const { return this->string_ != nullptr;};
      void deleteString() { this->string_ = nullptr;};
      inline const vector<string> & getString() const { DARABONBA_PTR_GET_CONST(string_, vector<string>) };
      inline vector<string> getString() { DARABONBA_PTR_GET(string_, vector<string>) };
      inline NonExistAnalysisJobIds& setString(const vector<string> & string) { DARABONBA_PTR_SET_VALUE(string_, string) };
      inline NonExistAnalysisJobIds& setString(vector<string> && string) { DARABONBA_PTR_SET_RVALUE(string_, string) };


    protected:
      shared_ptr<vector<string>> string_ {};
    };

    class AnalysisJobList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AnalysisJobList& obj) { 
        DARABONBA_PTR_TO_JSON(AnalysisJob, analysisJob_);
      };
      friend void from_json(const Darabonba::Json& j, AnalysisJobList& obj) { 
        DARABONBA_PTR_FROM_JSON(AnalysisJob, analysisJob_);
      };
      AnalysisJobList() = default ;
      AnalysisJobList(const AnalysisJobList &) = default ;
      AnalysisJobList(AnalysisJobList &&) = default ;
      AnalysisJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AnalysisJobList() = default ;
      AnalysisJobList& operator=(const AnalysisJobList &) = default ;
      AnalysisJobList& operator=(AnalysisJobList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AnalysisJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AnalysisJob& obj) { 
          DARABONBA_PTR_TO_JSON(AnalysisConfig, analysisConfig_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(InputFile, inputFile_);
          DARABONBA_PTR_TO_JSON(MNSMessageResult, MNSMessageResult_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Percent, percent_);
          DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(TemplateList, templateList_);
          DARABONBA_PTR_TO_JSON(UserData, userData_);
        };
        friend void from_json(const Darabonba::Json& j, AnalysisJob& obj) { 
          DARABONBA_PTR_FROM_JSON(AnalysisConfig, analysisConfig_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(InputFile, inputFile_);
          DARABONBA_PTR_FROM_JSON(MNSMessageResult, MNSMessageResult_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Percent, percent_);
          DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(TemplateList, templateList_);
          DARABONBA_PTR_FROM_JSON(UserData, userData_);
        };
        AnalysisJob() = default ;
        AnalysisJob(const AnalysisJob &) = default ;
        AnalysisJob(AnalysisJob &&) = default ;
        AnalysisJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AnalysisJob() = default ;
        AnalysisJob& operator=(const AnalysisJob &) = default ;
        AnalysisJob& operator=(AnalysisJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TemplateList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TemplateList& obj) { 
            DARABONBA_PTR_TO_JSON(Template, template_);
          };
          friend void from_json(const Darabonba::Json& j, TemplateList& obj) { 
            DARABONBA_PTR_FROM_JSON(Template, template_);
          };
          TemplateList() = default ;
          TemplateList(const TemplateList &) = default ;
          TemplateList(TemplateList &&) = default ;
          TemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TemplateList() = default ;
          TemplateList& operator=(const TemplateList &) = default ;
          TemplateList& operator=(TemplateList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Template : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Template& obj) { 
              DARABONBA_PTR_TO_JSON(Audio, audio_);
              DARABONBA_PTR_TO_JSON(Container, container_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(State, state_);
              DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
              DARABONBA_PTR_TO_JSON(Video, video_);
            };
            friend void from_json(const Darabonba::Json& j, Template& obj) { 
              DARABONBA_PTR_FROM_JSON(Audio, audio_);
              DARABONBA_PTR_FROM_JSON(Container, container_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(State, state_);
              DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
              DARABONBA_PTR_FROM_JSON(Video, video_);
            };
            Template() = default ;
            Template(const Template &) = default ;
            Template(Template &&) = default ;
            Template(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Template() = default ;
            Template& operator=(const Template &) = default ;
            Template& operator=(Template &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Video : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Video& obj) { 
                DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
                DARABONBA_PTR_TO_JSON(BitrateBnd, bitrateBnd_);
                DARABONBA_PTR_TO_JSON(Bufsize, bufsize_);
                DARABONBA_PTR_TO_JSON(Codec, codec_);
                DARABONBA_PTR_TO_JSON(Crf, crf_);
                DARABONBA_PTR_TO_JSON(Degrain, degrain_);
                DARABONBA_PTR_TO_JSON(Fps, fps_);
                DARABONBA_PTR_TO_JSON(Gop, gop_);
                DARABONBA_PTR_TO_JSON(Height, height_);
                DARABONBA_PTR_TO_JSON(Maxrate, maxrate_);
                DARABONBA_PTR_TO_JSON(PixFmt, pixFmt_);
                DARABONBA_PTR_TO_JSON(Preset, preset_);
                DARABONBA_PTR_TO_JSON(Profile, profile_);
                DARABONBA_PTR_TO_JSON(Qscale, qscale_);
                DARABONBA_PTR_TO_JSON(ScanMode, scanMode_);
                DARABONBA_PTR_TO_JSON(Width, width_);
              };
              friend void from_json(const Darabonba::Json& j, Video& obj) { 
                DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
                DARABONBA_PTR_FROM_JSON(BitrateBnd, bitrateBnd_);
                DARABONBA_PTR_FROM_JSON(Bufsize, bufsize_);
                DARABONBA_PTR_FROM_JSON(Codec, codec_);
                DARABONBA_PTR_FROM_JSON(Crf, crf_);
                DARABONBA_PTR_FROM_JSON(Degrain, degrain_);
                DARABONBA_PTR_FROM_JSON(Fps, fps_);
                DARABONBA_PTR_FROM_JSON(Gop, gop_);
                DARABONBA_PTR_FROM_JSON(Height, height_);
                DARABONBA_PTR_FROM_JSON(Maxrate, maxrate_);
                DARABONBA_PTR_FROM_JSON(PixFmt, pixFmt_);
                DARABONBA_PTR_FROM_JSON(Preset, preset_);
                DARABONBA_PTR_FROM_JSON(Profile, profile_);
                DARABONBA_PTR_FROM_JSON(Qscale, qscale_);
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
        && this->bitrateBnd_ == nullptr && this->bufsize_ == nullptr && this->codec_ == nullptr && this->crf_ == nullptr && this->degrain_ == nullptr
        && this->fps_ == nullptr && this->gop_ == nullptr && this->height_ == nullptr && this->maxrate_ == nullptr && this->pixFmt_ == nullptr
        && this->preset_ == nullptr && this->profile_ == nullptr && this->qscale_ == nullptr && this->scanMode_ == nullptr && this->width_ == nullptr; };
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


              // maxrate Field Functions 
              bool hasMaxrate() const { return this->maxrate_ != nullptr;};
              void deleteMaxrate() { this->maxrate_ = nullptr;};
              inline string getMaxrate() const { DARABONBA_PTR_GET_DEFAULT(maxrate_, "") };
              inline Video& setMaxrate(string maxrate) { DARABONBA_PTR_SET_VALUE(maxrate_, maxrate) };


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
              shared_ptr<string> degrain_ {};
              shared_ptr<string> fps_ {};
              shared_ptr<string> gop_ {};
              shared_ptr<string> height_ {};
              shared_ptr<string> maxrate_ {};
              shared_ptr<string> pixFmt_ {};
              shared_ptr<string> preset_ {};
              shared_ptr<string> profile_ {};
              shared_ptr<string> qscale_ {};
              shared_ptr<string> scanMode_ {};
              shared_ptr<string> width_ {};
            };

            class TransConfig : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const TransConfig& obj) { 
                DARABONBA_PTR_TO_JSON(TransMode, transMode_);
              };
              friend void from_json(const Darabonba::Json& j, TransConfig& obj) { 
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
              virtual bool empty() const override { return this->transMode_ == nullptr; };
              // transMode Field Functions 
              bool hasTransMode() const { return this->transMode_ != nullptr;};
              void deleteTransMode() { this->transMode_ = nullptr;};
              inline string getTransMode() const { DARABONBA_PTR_GET_DEFAULT(transMode_, "") };
              inline TransConfig& setTransMode(string transMode) { DARABONBA_PTR_SET_VALUE(transMode_, transMode) };


            protected:
              shared_ptr<string> transMode_ {};
            };

            class MuxConfig : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const MuxConfig& obj) { 
                DARABONBA_PTR_TO_JSON(Gif, gif_);
                DARABONBA_PTR_TO_JSON(Segment, segment_);
              };
              friend void from_json(const Darabonba::Json& j, MuxConfig& obj) { 
                DARABONBA_PTR_FROM_JSON(Gif, gif_);
                DARABONBA_PTR_FROM_JSON(Segment, segment_);
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
                  DARABONBA_PTR_TO_JSON(FinalDelay, finalDelay_);
                  DARABONBA_PTR_TO_JSON(Loop, loop_);
                };
                friend void from_json(const Darabonba::Json& j, Gif& obj) { 
                  DARABONBA_PTR_FROM_JSON(FinalDelay, finalDelay_);
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
                virtual bool empty() const override { return this->finalDelay_ == nullptr
        && this->loop_ == nullptr; };
                // finalDelay Field Functions 
                bool hasFinalDelay() const { return this->finalDelay_ != nullptr;};
                void deleteFinalDelay() { this->finalDelay_ = nullptr;};
                inline string getFinalDelay() const { DARABONBA_PTR_GET_DEFAULT(finalDelay_, "") };
                inline Gif& setFinalDelay(string finalDelay) { DARABONBA_PTR_SET_VALUE(finalDelay_, finalDelay) };


                // loop Field Functions 
                bool hasLoop() const { return this->loop_ != nullptr;};
                void deleteLoop() { this->loop_ = nullptr;};
                inline string getLoop() const { DARABONBA_PTR_GET_DEFAULT(loop_, "") };
                inline Gif& setLoop(string loop) { DARABONBA_PTR_SET_VALUE(loop_, loop) };


              protected:
                shared_ptr<string> finalDelay_ {};
                shared_ptr<string> loop_ {};
              };

              virtual bool empty() const override { return this->gif_ == nullptr
        && this->segment_ == nullptr; };
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


            protected:
              shared_ptr<MuxConfig::Gif> gif_ {};
              shared_ptr<MuxConfig::Segment> segment_ {};
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

            class Audio : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Audio& obj) { 
                DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
                DARABONBA_PTR_TO_JSON(Channels, channels_);
                DARABONBA_PTR_TO_JSON(Codec, codec_);
                DARABONBA_PTR_TO_JSON(Profile, profile_);
                DARABONBA_PTR_TO_JSON(Qscale, qscale_);
                DARABONBA_PTR_TO_JSON(Samplerate, samplerate_);
              };
              friend void from_json(const Darabonba::Json& j, Audio& obj) { 
                DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
                DARABONBA_PTR_FROM_JSON(Channels, channels_);
                DARABONBA_PTR_FROM_JSON(Codec, codec_);
                DARABONBA_PTR_FROM_JSON(Profile, profile_);
                DARABONBA_PTR_FROM_JSON(Qscale, qscale_);
                DARABONBA_PTR_FROM_JSON(Samplerate, samplerate_);
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
              virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->channels_ == nullptr && this->codec_ == nullptr && this->profile_ == nullptr && this->qscale_ == nullptr && this->samplerate_ == nullptr; };
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


            protected:
              shared_ptr<string> bitrate_ {};
              shared_ptr<string> channels_ {};
              shared_ptr<string> codec_ {};
              shared_ptr<string> profile_ {};
              shared_ptr<string> qscale_ {};
              shared_ptr<string> samplerate_ {};
            };

            virtual bool empty() const override { return this->audio_ == nullptr
        && this->container_ == nullptr && this->id_ == nullptr && this->muxConfig_ == nullptr && this->name_ == nullptr && this->state_ == nullptr
        && this->transConfig_ == nullptr && this->video_ == nullptr; };
            // audio Field Functions 
            bool hasAudio() const { return this->audio_ != nullptr;};
            void deleteAudio() { this->audio_ = nullptr;};
            inline const Template::Audio & getAudio() const { DARABONBA_PTR_GET_CONST(audio_, Template::Audio) };
            inline Template::Audio getAudio() { DARABONBA_PTR_GET(audio_, Template::Audio) };
            inline Template& setAudio(const Template::Audio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
            inline Template& setAudio(Template::Audio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


            // container Field Functions 
            bool hasContainer() const { return this->container_ != nullptr;};
            void deleteContainer() { this->container_ = nullptr;};
            inline const Template::Container & getContainer() const { DARABONBA_PTR_GET_CONST(container_, Template::Container) };
            inline Template::Container getContainer() { DARABONBA_PTR_GET(container_, Template::Container) };
            inline Template& setContainer(const Template::Container & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
            inline Template& setContainer(Template::Container && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline Template& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // muxConfig Field Functions 
            bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
            void deleteMuxConfig() { this->muxConfig_ = nullptr;};
            inline const Template::MuxConfig & getMuxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Template::MuxConfig) };
            inline Template::MuxConfig getMuxConfig() { DARABONBA_PTR_GET(muxConfig_, Template::MuxConfig) };
            inline Template& setMuxConfig(const Template::MuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
            inline Template& setMuxConfig(Template::MuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Template& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // state Field Functions 
            bool hasState() const { return this->state_ != nullptr;};
            void deleteState() { this->state_ = nullptr;};
            inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
            inline Template& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


            // transConfig Field Functions 
            bool hasTransConfig() const { return this->transConfig_ != nullptr;};
            void deleteTransConfig() { this->transConfig_ = nullptr;};
            inline const Template::TransConfig & getTransConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Template::TransConfig) };
            inline Template::TransConfig getTransConfig() { DARABONBA_PTR_GET(transConfig_, Template::TransConfig) };
            inline Template& setTransConfig(const Template::TransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
            inline Template& setTransConfig(Template::TransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


            // video Field Functions 
            bool hasVideo() const { return this->video_ != nullptr;};
            void deleteVideo() { this->video_ = nullptr;};
            inline const Template::Video & getVideo() const { DARABONBA_PTR_GET_CONST(video_, Template::Video) };
            inline Template::Video getVideo() { DARABONBA_PTR_GET(video_, Template::Video) };
            inline Template& setVideo(const Template::Video & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
            inline Template& setVideo(Template::Video && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


          protected:
            shared_ptr<Template::Audio> audio_ {};
            shared_ptr<Template::Container> container_ {};
            shared_ptr<string> id_ {};
            shared_ptr<Template::MuxConfig> muxConfig_ {};
            shared_ptr<string> name_ {};
            shared_ptr<string> state_ {};
            shared_ptr<Template::TransConfig> transConfig_ {};
            shared_ptr<Template::Video> video_ {};
          };

          virtual bool empty() const override { return this->template_ == nullptr; };
          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline const vector<TemplateList::Template> & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, vector<TemplateList::Template>) };
          inline vector<TemplateList::Template> getTemplate() { DARABONBA_PTR_GET(template_, vector<TemplateList::Template>) };
          inline TemplateList& setTemplate(const vector<TemplateList::Template> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
          inline TemplateList& setTemplate(vector<TemplateList::Template> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


        protected:
          shared_ptr<vector<TemplateList::Template>> template_ {};
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

        class AnalysisConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AnalysisConfig& obj) { 
            DARABONBA_PTR_TO_JSON(PropertiesControl, propertiesControl_);
            DARABONBA_PTR_TO_JSON(QualityControl, qualityControl_);
          };
          friend void from_json(const Darabonba::Json& j, AnalysisConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(PropertiesControl, propertiesControl_);
            DARABONBA_PTR_FROM_JSON(QualityControl, qualityControl_);
          };
          AnalysisConfig() = default ;
          AnalysisConfig(const AnalysisConfig &) = default ;
          AnalysisConfig(AnalysisConfig &&) = default ;
          AnalysisConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AnalysisConfig() = default ;
          AnalysisConfig& operator=(const AnalysisConfig &) = default ;
          AnalysisConfig& operator=(AnalysisConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class QualityControl : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const QualityControl& obj) { 
              DARABONBA_PTR_TO_JSON(MethodStreaming, methodStreaming_);
              DARABONBA_PTR_TO_JSON(RateQuality, rateQuality_);
            };
            friend void from_json(const Darabonba::Json& j, QualityControl& obj) { 
              DARABONBA_PTR_FROM_JSON(MethodStreaming, methodStreaming_);
              DARABONBA_PTR_FROM_JSON(RateQuality, rateQuality_);
            };
            QualityControl() = default ;
            QualityControl(const QualityControl &) = default ;
            QualityControl(QualityControl &&) = default ;
            QualityControl(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~QualityControl() = default ;
            QualityControl& operator=(const QualityControl &) = default ;
            QualityControl& operator=(QualityControl &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->methodStreaming_ == nullptr
        && this->rateQuality_ == nullptr; };
            // methodStreaming Field Functions 
            bool hasMethodStreaming() const { return this->methodStreaming_ != nullptr;};
            void deleteMethodStreaming() { this->methodStreaming_ = nullptr;};
            inline string getMethodStreaming() const { DARABONBA_PTR_GET_DEFAULT(methodStreaming_, "") };
            inline QualityControl& setMethodStreaming(string methodStreaming) { DARABONBA_PTR_SET_VALUE(methodStreaming_, methodStreaming) };


            // rateQuality Field Functions 
            bool hasRateQuality() const { return this->rateQuality_ != nullptr;};
            void deleteRateQuality() { this->rateQuality_ = nullptr;};
            inline string getRateQuality() const { DARABONBA_PTR_GET_DEFAULT(rateQuality_, "") };
            inline QualityControl& setRateQuality(string rateQuality) { DARABONBA_PTR_SET_VALUE(rateQuality_, rateQuality) };


          protected:
            shared_ptr<string> methodStreaming_ {};
            shared_ptr<string> rateQuality_ {};
          };

          class PropertiesControl : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PropertiesControl& obj) { 
              DARABONBA_PTR_TO_JSON(Crop, crop_);
              DARABONBA_PTR_TO_JSON(Deinterlace, deinterlace_);
            };
            friend void from_json(const Darabonba::Json& j, PropertiesControl& obj) { 
              DARABONBA_PTR_FROM_JSON(Crop, crop_);
              DARABONBA_PTR_FROM_JSON(Deinterlace, deinterlace_);
            };
            PropertiesControl() = default ;
            PropertiesControl(const PropertiesControl &) = default ;
            PropertiesControl(PropertiesControl &&) = default ;
            PropertiesControl(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PropertiesControl() = default ;
            PropertiesControl& operator=(const PropertiesControl &) = default ;
            PropertiesControl& operator=(PropertiesControl &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Crop : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Crop& obj) { 
                DARABONBA_PTR_TO_JSON(Height, height_);
                DARABONBA_PTR_TO_JSON(Left, left_);
                DARABONBA_PTR_TO_JSON(Mode, mode_);
                DARABONBA_PTR_TO_JSON(Top, top_);
                DARABONBA_PTR_TO_JSON(Width, width_);
              };
              friend void from_json(const Darabonba::Json& j, Crop& obj) { 
                DARABONBA_PTR_FROM_JSON(Height, height_);
                DARABONBA_PTR_FROM_JSON(Left, left_);
                DARABONBA_PTR_FROM_JSON(Mode, mode_);
                DARABONBA_PTR_FROM_JSON(Top, top_);
                DARABONBA_PTR_FROM_JSON(Width, width_);
              };
              Crop() = default ;
              Crop(const Crop &) = default ;
              Crop(Crop &&) = default ;
              Crop(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Crop() = default ;
              Crop& operator=(const Crop &) = default ;
              Crop& operator=(Crop &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->height_ == nullptr
        && this->left_ == nullptr && this->mode_ == nullptr && this->top_ == nullptr && this->width_ == nullptr; };
              // height Field Functions 
              bool hasHeight() const { return this->height_ != nullptr;};
              void deleteHeight() { this->height_ = nullptr;};
              inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
              inline Crop& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


              // left Field Functions 
              bool hasLeft() const { return this->left_ != nullptr;};
              void deleteLeft() { this->left_ = nullptr;};
              inline string getLeft() const { DARABONBA_PTR_GET_DEFAULT(left_, "") };
              inline Crop& setLeft(string left) { DARABONBA_PTR_SET_VALUE(left_, left) };


              // mode Field Functions 
              bool hasMode() const { return this->mode_ != nullptr;};
              void deleteMode() { this->mode_ = nullptr;};
              inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
              inline Crop& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


              // top Field Functions 
              bool hasTop() const { return this->top_ != nullptr;};
              void deleteTop() { this->top_ = nullptr;};
              inline string getTop() const { DARABONBA_PTR_GET_DEFAULT(top_, "") };
              inline Crop& setTop(string top) { DARABONBA_PTR_SET_VALUE(top_, top) };


              // width Field Functions 
              bool hasWidth() const { return this->width_ != nullptr;};
              void deleteWidth() { this->width_ = nullptr;};
              inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
              inline Crop& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


            protected:
              shared_ptr<string> height_ {};
              shared_ptr<string> left_ {};
              shared_ptr<string> mode_ {};
              shared_ptr<string> top_ {};
              shared_ptr<string> width_ {};
            };

            virtual bool empty() const override { return this->crop_ == nullptr
        && this->deinterlace_ == nullptr; };
            // crop Field Functions 
            bool hasCrop() const { return this->crop_ != nullptr;};
            void deleteCrop() { this->crop_ = nullptr;};
            inline const PropertiesControl::Crop & getCrop() const { DARABONBA_PTR_GET_CONST(crop_, PropertiesControl::Crop) };
            inline PropertiesControl::Crop getCrop() { DARABONBA_PTR_GET(crop_, PropertiesControl::Crop) };
            inline PropertiesControl& setCrop(const PropertiesControl::Crop & crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };
            inline PropertiesControl& setCrop(PropertiesControl::Crop && crop) { DARABONBA_PTR_SET_RVALUE(crop_, crop) };


            // deinterlace Field Functions 
            bool hasDeinterlace() const { return this->deinterlace_ != nullptr;};
            void deleteDeinterlace() { this->deinterlace_ = nullptr;};
            inline string getDeinterlace() const { DARABONBA_PTR_GET_DEFAULT(deinterlace_, "") };
            inline PropertiesControl& setDeinterlace(string deinterlace) { DARABONBA_PTR_SET_VALUE(deinterlace_, deinterlace) };


          protected:
            shared_ptr<PropertiesControl::Crop> crop_ {};
            shared_ptr<string> deinterlace_ {};
          };

          virtual bool empty() const override { return this->propertiesControl_ == nullptr
        && this->qualityControl_ == nullptr; };
          // propertiesControl Field Functions 
          bool hasPropertiesControl() const { return this->propertiesControl_ != nullptr;};
          void deletePropertiesControl() { this->propertiesControl_ = nullptr;};
          inline const AnalysisConfig::PropertiesControl & getPropertiesControl() const { DARABONBA_PTR_GET_CONST(propertiesControl_, AnalysisConfig::PropertiesControl) };
          inline AnalysisConfig::PropertiesControl getPropertiesControl() { DARABONBA_PTR_GET(propertiesControl_, AnalysisConfig::PropertiesControl) };
          inline AnalysisConfig& setPropertiesControl(const AnalysisConfig::PropertiesControl & propertiesControl) { DARABONBA_PTR_SET_VALUE(propertiesControl_, propertiesControl) };
          inline AnalysisConfig& setPropertiesControl(AnalysisConfig::PropertiesControl && propertiesControl) { DARABONBA_PTR_SET_RVALUE(propertiesControl_, propertiesControl) };


          // qualityControl Field Functions 
          bool hasQualityControl() const { return this->qualityControl_ != nullptr;};
          void deleteQualityControl() { this->qualityControl_ = nullptr;};
          inline const AnalysisConfig::QualityControl & getQualityControl() const { DARABONBA_PTR_GET_CONST(qualityControl_, AnalysisConfig::QualityControl) };
          inline AnalysisConfig::QualityControl getQualityControl() { DARABONBA_PTR_GET(qualityControl_, AnalysisConfig::QualityControl) };
          inline AnalysisConfig& setQualityControl(const AnalysisConfig::QualityControl & qualityControl) { DARABONBA_PTR_SET_VALUE(qualityControl_, qualityControl) };
          inline AnalysisConfig& setQualityControl(AnalysisConfig::QualityControl && qualityControl) { DARABONBA_PTR_SET_RVALUE(qualityControl_, qualityControl) };


        protected:
          shared_ptr<AnalysisConfig::PropertiesControl> propertiesControl_ {};
          shared_ptr<AnalysisConfig::QualityControl> qualityControl_ {};
        };

        virtual bool empty() const override { return this->analysisConfig_ == nullptr
        && this->code_ == nullptr && this->creationTime_ == nullptr && this->id_ == nullptr && this->inputFile_ == nullptr && this->MNSMessageResult_ == nullptr
        && this->message_ == nullptr && this->percent_ == nullptr && this->pipelineId_ == nullptr && this->priority_ == nullptr && this->state_ == nullptr
        && this->templateList_ == nullptr && this->userData_ == nullptr; };
        // analysisConfig Field Functions 
        bool hasAnalysisConfig() const { return this->analysisConfig_ != nullptr;};
        void deleteAnalysisConfig() { this->analysisConfig_ = nullptr;};
        inline const AnalysisJob::AnalysisConfig & getAnalysisConfig() const { DARABONBA_PTR_GET_CONST(analysisConfig_, AnalysisJob::AnalysisConfig) };
        inline AnalysisJob::AnalysisConfig getAnalysisConfig() { DARABONBA_PTR_GET(analysisConfig_, AnalysisJob::AnalysisConfig) };
        inline AnalysisJob& setAnalysisConfig(const AnalysisJob::AnalysisConfig & analysisConfig) { DARABONBA_PTR_SET_VALUE(analysisConfig_, analysisConfig) };
        inline AnalysisJob& setAnalysisConfig(AnalysisJob::AnalysisConfig && analysisConfig) { DARABONBA_PTR_SET_RVALUE(analysisConfig_, analysisConfig) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline AnalysisJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline AnalysisJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline AnalysisJob& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // inputFile Field Functions 
        bool hasInputFile() const { return this->inputFile_ != nullptr;};
        void deleteInputFile() { this->inputFile_ = nullptr;};
        inline const AnalysisJob::InputFile & getInputFile() const { DARABONBA_PTR_GET_CONST(inputFile_, AnalysisJob::InputFile) };
        inline AnalysisJob::InputFile getInputFile() { DARABONBA_PTR_GET(inputFile_, AnalysisJob::InputFile) };
        inline AnalysisJob& setInputFile(const AnalysisJob::InputFile & inputFile) { DARABONBA_PTR_SET_VALUE(inputFile_, inputFile) };
        inline AnalysisJob& setInputFile(AnalysisJob::InputFile && inputFile) { DARABONBA_PTR_SET_RVALUE(inputFile_, inputFile) };


        // MNSMessageResult Field Functions 
        bool hasMNSMessageResult() const { return this->MNSMessageResult_ != nullptr;};
        void deleteMNSMessageResult() { this->MNSMessageResult_ = nullptr;};
        inline const AnalysisJob::MNSMessageResult & getMNSMessageResult() const { DARABONBA_PTR_GET_CONST(MNSMessageResult_, AnalysisJob::MNSMessageResult) };
        inline AnalysisJob::MNSMessageResult getMNSMessageResult() { DARABONBA_PTR_GET(MNSMessageResult_, AnalysisJob::MNSMessageResult) };
        inline AnalysisJob& setMNSMessageResult(const AnalysisJob::MNSMessageResult & mNSMessageResult) { DARABONBA_PTR_SET_VALUE(MNSMessageResult_, mNSMessageResult) };
        inline AnalysisJob& setMNSMessageResult(AnalysisJob::MNSMessageResult && mNSMessageResult) { DARABONBA_PTR_SET_RVALUE(MNSMessageResult_, mNSMessageResult) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline AnalysisJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // percent Field Functions 
        bool hasPercent() const { return this->percent_ != nullptr;};
        void deletePercent() { this->percent_ = nullptr;};
        inline int64_t getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0L) };
        inline AnalysisJob& setPercent(int64_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


        // pipelineId Field Functions 
        bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
        void deletePipelineId() { this->pipelineId_ = nullptr;};
        inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
        inline AnalysisJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
        inline AnalysisJob& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline AnalysisJob& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // templateList Field Functions 
        bool hasTemplateList() const { return this->templateList_ != nullptr;};
        void deleteTemplateList() { this->templateList_ = nullptr;};
        inline const AnalysisJob::TemplateList & getTemplateList() const { DARABONBA_PTR_GET_CONST(templateList_, AnalysisJob::TemplateList) };
        inline AnalysisJob::TemplateList getTemplateList() { DARABONBA_PTR_GET(templateList_, AnalysisJob::TemplateList) };
        inline AnalysisJob& setTemplateList(const AnalysisJob::TemplateList & templateList) { DARABONBA_PTR_SET_VALUE(templateList_, templateList) };
        inline AnalysisJob& setTemplateList(AnalysisJob::TemplateList && templateList) { DARABONBA_PTR_SET_RVALUE(templateList_, templateList) };


        // userData Field Functions 
        bool hasUserData() const { return this->userData_ != nullptr;};
        void deleteUserData() { this->userData_ = nullptr;};
        inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
        inline AnalysisJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      protected:
        shared_ptr<AnalysisJob::AnalysisConfig> analysisConfig_ {};
        shared_ptr<string> code_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> id_ {};
        shared_ptr<AnalysisJob::InputFile> inputFile_ {};
        shared_ptr<AnalysisJob::MNSMessageResult> MNSMessageResult_ {};
        shared_ptr<string> message_ {};
        shared_ptr<int64_t> percent_ {};
        shared_ptr<string> pipelineId_ {};
        shared_ptr<string> priority_ {};
        shared_ptr<string> state_ {};
        shared_ptr<AnalysisJob::TemplateList> templateList_ {};
        shared_ptr<string> userData_ {};
      };

      virtual bool empty() const override { return this->analysisJob_ == nullptr; };
      // analysisJob Field Functions 
      bool hasAnalysisJob() const { return this->analysisJob_ != nullptr;};
      void deleteAnalysisJob() { this->analysisJob_ = nullptr;};
      inline const vector<AnalysisJobList::AnalysisJob> & getAnalysisJob() const { DARABONBA_PTR_GET_CONST(analysisJob_, vector<AnalysisJobList::AnalysisJob>) };
      inline vector<AnalysisJobList::AnalysisJob> getAnalysisJob() { DARABONBA_PTR_GET(analysisJob_, vector<AnalysisJobList::AnalysisJob>) };
      inline AnalysisJobList& setAnalysisJob(const vector<AnalysisJobList::AnalysisJob> & analysisJob) { DARABONBA_PTR_SET_VALUE(analysisJob_, analysisJob) };
      inline AnalysisJobList& setAnalysisJob(vector<AnalysisJobList::AnalysisJob> && analysisJob) { DARABONBA_PTR_SET_RVALUE(analysisJob_, analysisJob) };


    protected:
      shared_ptr<vector<AnalysisJobList::AnalysisJob>> analysisJob_ {};
    };

    virtual bool empty() const override { return this->analysisJobList_ == nullptr
        && this->nonExistAnalysisJobIds_ == nullptr && this->requestId_ == nullptr; };
    // analysisJobList Field Functions 
    bool hasAnalysisJobList() const { return this->analysisJobList_ != nullptr;};
    void deleteAnalysisJobList() { this->analysisJobList_ = nullptr;};
    inline const QueryAnalysisJobListResponseBody::AnalysisJobList & getAnalysisJobList() const { DARABONBA_PTR_GET_CONST(analysisJobList_, QueryAnalysisJobListResponseBody::AnalysisJobList) };
    inline QueryAnalysisJobListResponseBody::AnalysisJobList getAnalysisJobList() { DARABONBA_PTR_GET(analysisJobList_, QueryAnalysisJobListResponseBody::AnalysisJobList) };
    inline QueryAnalysisJobListResponseBody& setAnalysisJobList(const QueryAnalysisJobListResponseBody::AnalysisJobList & analysisJobList) { DARABONBA_PTR_SET_VALUE(analysisJobList_, analysisJobList) };
    inline QueryAnalysisJobListResponseBody& setAnalysisJobList(QueryAnalysisJobListResponseBody::AnalysisJobList && analysisJobList) { DARABONBA_PTR_SET_RVALUE(analysisJobList_, analysisJobList) };


    // nonExistAnalysisJobIds Field Functions 
    bool hasNonExistAnalysisJobIds() const { return this->nonExistAnalysisJobIds_ != nullptr;};
    void deleteNonExistAnalysisJobIds() { this->nonExistAnalysisJobIds_ = nullptr;};
    inline const QueryAnalysisJobListResponseBody::NonExistAnalysisJobIds & getNonExistAnalysisJobIds() const { DARABONBA_PTR_GET_CONST(nonExistAnalysisJobIds_, QueryAnalysisJobListResponseBody::NonExistAnalysisJobIds) };
    inline QueryAnalysisJobListResponseBody::NonExistAnalysisJobIds getNonExistAnalysisJobIds() { DARABONBA_PTR_GET(nonExistAnalysisJobIds_, QueryAnalysisJobListResponseBody::NonExistAnalysisJobIds) };
    inline QueryAnalysisJobListResponseBody& setNonExistAnalysisJobIds(const QueryAnalysisJobListResponseBody::NonExistAnalysisJobIds & nonExistAnalysisJobIds) { DARABONBA_PTR_SET_VALUE(nonExistAnalysisJobIds_, nonExistAnalysisJobIds) };
    inline QueryAnalysisJobListResponseBody& setNonExistAnalysisJobIds(QueryAnalysisJobListResponseBody::NonExistAnalysisJobIds && nonExistAnalysisJobIds) { DARABONBA_PTR_SET_RVALUE(nonExistAnalysisJobIds_, nonExistAnalysisJobIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAnalysisJobListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryAnalysisJobListResponseBody::AnalysisJobList> analysisJobList_ {};
    shared_ptr<QueryAnalysisJobListResponseBody::NonExistAnalysisJobIds> nonExistAnalysisJobIds_ {};
    // The status of the job. Valid values:
    // 
    // *   **Submitted**: The job has been submitted.
    // *   **Analyzing**: The job is being run.
    // *   **Success**: The job is successful.
    // *   **Fail**: The job fails.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
