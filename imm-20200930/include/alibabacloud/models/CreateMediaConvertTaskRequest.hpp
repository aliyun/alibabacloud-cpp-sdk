// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TargetAudio.hpp>
#include <alibabacloud/models/TargetImage.hpp>
#include <alibabacloud/models/TargetSubtitle.hpp>
#include <alibabacloud/models/TargetVideo.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/Notification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateMediaConvertTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaConvertTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlignmentIndex, alignmentIndex_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TargetGroups, targetGroups_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaConvertTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlignmentIndex, alignmentIndex_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TargetGroups, targetGroups_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateMediaConvertTaskRequest() = default ;
    CreateMediaConvertTaskRequest(const CreateMediaConvertTaskRequest &) = default ;
    CreateMediaConvertTaskRequest(CreateMediaConvertTaskRequest &&) = default ;
    CreateMediaConvertTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaConvertTaskRequest() = default ;
    CreateMediaConvertTaskRequest& operator=(const CreateMediaConvertTaskRequest &) = default ;
    CreateMediaConvertTaskRequest& operator=(CreateMediaConvertTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Targets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Targets& obj) { 
        DARABONBA_PTR_TO_JSON(AttachedPicture, attachedPicture_);
        DARABONBA_PTR_TO_JSON(Audio, audio_);
        DARABONBA_PTR_TO_JSON(Container, container_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(Segment, segment_);
        DARABONBA_PTR_TO_JSON(Speed, speed_);
        DARABONBA_PTR_TO_JSON(StripMetadata, stripMetadata_);
        DARABONBA_PTR_TO_JSON(Subtitle, subtitle_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
        DARABONBA_PTR_TO_JSON(Video, video_);
      };
      friend void from_json(const Darabonba::Json& j, Targets& obj) { 
        DARABONBA_PTR_FROM_JSON(AttachedPicture, attachedPicture_);
        DARABONBA_PTR_FROM_JSON(Audio, audio_);
        DARABONBA_PTR_FROM_JSON(Container, container_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(Segment, segment_);
        DARABONBA_PTR_FROM_JSON(Speed, speed_);
        DARABONBA_PTR_FROM_JSON(StripMetadata, stripMetadata_);
        DARABONBA_PTR_FROM_JSON(Subtitle, subtitle_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
        DARABONBA_PTR_FROM_JSON(Video, video_);
      };
      Targets() = default ;
      Targets(const Targets &) = default ;
      Targets(Targets &&) = default ;
      Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Targets() = default ;
      Targets& operator=(const Targets &) = default ;
      Targets& operator=(Targets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Segment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Segment& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Format, format_);
          DARABONBA_PTR_TO_JSON(StartNumber, startNumber_);
        };
        friend void from_json(const Darabonba::Json& j, Segment& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Format, format_);
          DARABONBA_PTR_FROM_JSON(StartNumber, startNumber_);
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
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->format_ == nullptr && this->startNumber_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
        inline Segment& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // format Field Functions 
        bool hasFormat() const { return this->format_ != nullptr;};
        void deleteFormat() { this->format_ = nullptr;};
        inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
        inline Segment& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


        // startNumber Field Functions 
        bool hasStartNumber() const { return this->startNumber_ != nullptr;};
        void deleteStartNumber() { this->startNumber_ = nullptr;};
        inline int32_t getStartNumber() const { DARABONBA_PTR_GET_DEFAULT(startNumber_, 0) };
        inline Segment& setStartNumber(int32_t startNumber) { DARABONBA_PTR_SET_VALUE(startNumber_, startNumber) };


      protected:
        // The duration of each segment, in seconds.
        shared_ptr<double> duration_ {};
        // The segmentation method. Valid values include:
        // 
        // - hls
        // 
        // - dash
        shared_ptr<string> format_ {};
        // The starting sequence number. This parameter is supported only for HLS. The default value is 0.
        shared_ptr<int32_t> startNumber_ {};
      };

      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Stream, stream_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Stream, stream_);
        };
        Data() = default ;
        Data(const Data &) = default ;
        Data(Data &&) = default ;
        Data(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Data() = default ;
        Data& operator=(const Data &) = default ;
        Data& operator=(Data &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->stream_ == nullptr; };
        // stream Field Functions 
        bool hasStream() const { return this->stream_ != nullptr;};
        void deleteStream() { this->stream_ = nullptr;};
        inline const vector<int32_t> & getStream() const { DARABONBA_PTR_GET_CONST(stream_, vector<int32_t>) };
        inline vector<int32_t> getStream() { DARABONBA_PTR_GET(stream_, vector<int32_t>) };
        inline Data& setStream(const vector<int32_t> & stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };
        inline Data& setStream(vector<int32_t> && stream) { DARABONBA_PTR_SET_RVALUE(stream_, stream) };


      protected:
        // A list of indexes of the data streams in the source file to process. An empty list (default) indicates that no data streams are retained. An index of -1 indicates that all data streams are retained.
        // 
        // - Example: `[0,1]` processes the data streams with index 0 and 1; `[1]` processes the data stream with index 1; `[-1]` processes all data streams.
        // 
        // > If a specified index does not correspond to an existing data stream, it is ignored.
        shared_ptr<vector<int32_t>> stream_ {};
      };

      class AttachedPicture : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttachedPicture& obj) { 
          DARABONBA_PTR_TO_JSON(Stream, stream_);
        };
        friend void from_json(const Darabonba::Json& j, AttachedPicture& obj) { 
          DARABONBA_PTR_FROM_JSON(Stream, stream_);
        };
        AttachedPicture() = default ;
        AttachedPicture(const AttachedPicture &) = default ;
        AttachedPicture(AttachedPicture &&) = default ;
        AttachedPicture(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttachedPicture() = default ;
        AttachedPicture& operator=(const AttachedPicture &) = default ;
        AttachedPicture& operator=(AttachedPicture &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->stream_ == nullptr; };
        // stream Field Functions 
        bool hasStream() const { return this->stream_ != nullptr;};
        void deleteStream() { this->stream_ = nullptr;};
        inline const vector<int32_t> & getStream() const { DARABONBA_PTR_GET_CONST(stream_, vector<int32_t>) };
        inline vector<int32_t> getStream() { DARABONBA_PTR_GET(stream_, vector<int32_t>) };
        inline AttachedPicture& setStream(const vector<int32_t> & stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };
        inline AttachedPicture& setStream(vector<int32_t> && stream) { DARABONBA_PTR_SET_RVALUE(stream_, stream) };


      protected:
        // A list of indexes of the attached pictures in the source file to process. An empty list (default) indicates that no attached pictures are retained. An index of -1 indicates that all attached pictures are retained.
        // 
        // - Example: `[0,1]` processes the attached pictures with index 0 and 1; `[1]` processes the attached picture with index 1; `[-1]` processes all attached pictures.
        // 
        // > If a specified index does not correspond to an existing attached picture, it is ignored.
        shared_ptr<vector<int32_t>> stream_ {};
      };

      virtual bool empty() const override { return this->attachedPicture_ == nullptr
        && this->audio_ == nullptr && this->container_ == nullptr && this->data_ == nullptr && this->image_ == nullptr && this->segment_ == nullptr
        && this->speed_ == nullptr && this->stripMetadata_ == nullptr && this->subtitle_ == nullptr && this->URI_ == nullptr && this->video_ == nullptr; };
      // attachedPicture Field Functions 
      bool hasAttachedPicture() const { return this->attachedPicture_ != nullptr;};
      void deleteAttachedPicture() { this->attachedPicture_ = nullptr;};
      inline const Targets::AttachedPicture & getAttachedPicture() const { DARABONBA_PTR_GET_CONST(attachedPicture_, Targets::AttachedPicture) };
      inline Targets::AttachedPicture getAttachedPicture() { DARABONBA_PTR_GET(attachedPicture_, Targets::AttachedPicture) };
      inline Targets& setAttachedPicture(const Targets::AttachedPicture & attachedPicture) { DARABONBA_PTR_SET_VALUE(attachedPicture_, attachedPicture) };
      inline Targets& setAttachedPicture(Targets::AttachedPicture && attachedPicture) { DARABONBA_PTR_SET_RVALUE(attachedPicture_, attachedPicture) };


      // audio Field Functions 
      bool hasAudio() const { return this->audio_ != nullptr;};
      void deleteAudio() { this->audio_ = nullptr;};
      inline const TargetAudio & getAudio() const { DARABONBA_PTR_GET_CONST(audio_, TargetAudio) };
      inline TargetAudio getAudio() { DARABONBA_PTR_GET(audio_, TargetAudio) };
      inline Targets& setAudio(const TargetAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
      inline Targets& setAudio(TargetAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


      // container Field Functions 
      bool hasContainer() const { return this->container_ != nullptr;};
      void deleteContainer() { this->container_ = nullptr;};
      inline string getContainer() const { DARABONBA_PTR_GET_DEFAULT(container_, "") };
      inline Targets& setContainer(string container) { DARABONBA_PTR_SET_VALUE(container_, container) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const Targets::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Targets::Data) };
      inline Targets::Data getData() { DARABONBA_PTR_GET(data_, Targets::Data) };
      inline Targets& setData(const Targets::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Targets& setData(Targets::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline const TargetImage & getImage() const { DARABONBA_PTR_GET_CONST(image_, TargetImage) };
      inline TargetImage getImage() { DARABONBA_PTR_GET(image_, TargetImage) };
      inline Targets& setImage(const TargetImage & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
      inline Targets& setImage(TargetImage && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


      // segment Field Functions 
      bool hasSegment() const { return this->segment_ != nullptr;};
      void deleteSegment() { this->segment_ = nullptr;};
      inline const Targets::Segment & getSegment() const { DARABONBA_PTR_GET_CONST(segment_, Targets::Segment) };
      inline Targets::Segment getSegment() { DARABONBA_PTR_GET(segment_, Targets::Segment) };
      inline Targets& setSegment(const Targets::Segment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
      inline Targets& setSegment(Targets::Segment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


      // speed Field Functions 
      bool hasSpeed() const { return this->speed_ != nullptr;};
      void deleteSpeed() { this->speed_ = nullptr;};
      inline float getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0.0) };
      inline Targets& setSpeed(float speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


      // stripMetadata Field Functions 
      bool hasStripMetadata() const { return this->stripMetadata_ != nullptr;};
      void deleteStripMetadata() { this->stripMetadata_ = nullptr;};
      inline bool getStripMetadata() const { DARABONBA_PTR_GET_DEFAULT(stripMetadata_, false) };
      inline Targets& setStripMetadata(bool stripMetadata) { DARABONBA_PTR_SET_VALUE(stripMetadata_, stripMetadata) };


      // subtitle Field Functions 
      bool hasSubtitle() const { return this->subtitle_ != nullptr;};
      void deleteSubtitle() { this->subtitle_ = nullptr;};
      inline const TargetSubtitle & getSubtitle() const { DARABONBA_PTR_GET_CONST(subtitle_, TargetSubtitle) };
      inline TargetSubtitle getSubtitle() { DARABONBA_PTR_GET(subtitle_, TargetSubtitle) };
      inline Targets& setSubtitle(const TargetSubtitle & subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };
      inline Targets& setSubtitle(TargetSubtitle && subtitle) { DARABONBA_PTR_SET_RVALUE(subtitle_, subtitle) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Targets& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


      // video Field Functions 
      bool hasVideo() const { return this->video_ != nullptr;};
      void deleteVideo() { this->video_ = nullptr;};
      inline const TargetVideo & getVideo() const { DARABONBA_PTR_GET_CONST(video_, TargetVideo) };
      inline TargetVideo getVideo() { DARABONBA_PTR_GET(video_, TargetVideo) };
      inline Targets& setVideo(const TargetVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
      inline Targets& setVideo(TargetVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


    protected:
      // Settings for retaining attached pictures.
      // >Notice: Retaining attached pictures is supported only when the `Container` parameter is set to `mp4` or `mkv`.
      shared_ptr<Targets::AttachedPicture> attachedPicture_ {};
      // The audio processing parameters.
      // >Notice: If this parameter is left empty, the first audio stream, if it exists, is copied directly to the output file.
      shared_ptr<TargetAudio> audio_ {};
      // The media container type. Valid container types include:
      // 
      // - Audio/video containers: mp4, mkv, mov, asf, avi, mxf, ts, flv
      // 
      // - Audio-only containers: mp3, aac, flac, oga, ac3, opus
      // 
      // 
      //   >Notice: 
      // 
      //   The `Container` and `URI` parameters must be set together. To perform only subtitle extraction, frame capture, sprite generation, or animated image generation, leave both `Container` and `URI` empty. In this case, parameters such as `Segment`, `Video`, `Audio`, and `Speed` are ignored.
      shared_ptr<string> container_ {};
      // Settings for retaining data streams.
      // >Notice: Retaining data streams is supported only when the `Container` parameter is set to `mp4`.
      shared_ptr<Targets::Data> data_ {};
      // The parameters for frame capture, sprite generation, and animated image generation.
      shared_ptr<TargetImage> image_ {};
      // Settings for media segmentation.
      shared_ptr<Targets::Segment> segment_ {};
      // The playback speed of the output media. The value must be between 0.5 and 1.0, inclusive. The default value is 1.0.
      // 
      // > This parameter specifies the default playback speed of the output file as a ratio of the source file\\"s speed. It does not perform speed-up transcoding.
      shared_ptr<float> speed_ {};
      // If true, removes metadata such as `title` and `album` from the media file. The default is false.
      shared_ptr<bool> stripMetadata_ {};
      // The subtitle processing parameters.
      // >Notice: If this parameter is left empty, the first subtitle stream, if it exists, is copied directly to the output file.
      shared_ptr<TargetSubtitle> subtitle_ {};
      // The OSS URI of the output file for media transcoding.
      // 
      // The URI must be in the `oss://${Bucket}/${Object}` format. In this format, `${Bucket}` is the name of the OSS bucket, which must be in the same region as the project, and `${Object}` is the full path to the object, including the file extension.
      // 
      // - If the **URI** has a file extension, all output media files are saved to this **URI**. If multiple files are generated, they will overwrite each other.
      // 
      // - If the **URI** does not have a file extension, the final output URI is generated based on the **URI**, **Container**, and **Segment** parameters. For example, if the **URI** is `oss://examplebucket/outputVideo`:
      // 
      //   - If **Container** is `mp4` and **Segment** is empty, the OSS URI of the generated media file is `oss://examplebucket/outputVideo.mp4`.
      // 
      //   - If **Container** is `ts` and **Format** in **Segment** is `hls`, the process generates an m3u8 file with the OSS URI `oss://examplebucket/outputVideo.m3u8` and multiple TS files prefixed with `oss://examplebucket/outputVideo`.
      shared_ptr<string> URI_ {};
      // The video processing parameters.
      // >Notice: If this parameter is left empty, the first video stream, if it exists, is copied directly to the output file.
      shared_ptr<TargetVideo> video_ {};
    };

    class TargetGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TargetGroups& obj) { 
        DARABONBA_PTR_TO_JSON(Targets, targets_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, TargetGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(Targets, targets_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
      };
      TargetGroups() = default ;
      TargetGroups(const TargetGroups &) = default ;
      TargetGroups(TargetGroups &&) = default ;
      TargetGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TargetGroups() = default ;
      TargetGroups& operator=(const TargetGroups &) = default ;
      TargetGroups& operator=(TargetGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Targets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Targets& obj) { 
          DARABONBA_PTR_TO_JSON(Audio, audio_);
          DARABONBA_PTR_TO_JSON(Container, container_);
          DARABONBA_PTR_TO_JSON(Segment, segment_);
          DARABONBA_PTR_TO_JSON(Speed, speed_);
          DARABONBA_PTR_TO_JSON(StripMetadata, stripMetadata_);
          DARABONBA_PTR_TO_JSON(Subtitle, subtitle_);
          DARABONBA_PTR_TO_JSON(URI, URI_);
          DARABONBA_PTR_TO_JSON(Video, video_);
        };
        friend void from_json(const Darabonba::Json& j, Targets& obj) { 
          DARABONBA_PTR_FROM_JSON(Audio, audio_);
          DARABONBA_PTR_FROM_JSON(Container, container_);
          DARABONBA_PTR_FROM_JSON(Segment, segment_);
          DARABONBA_PTR_FROM_JSON(Speed, speed_);
          DARABONBA_PTR_FROM_JSON(StripMetadata, stripMetadata_);
          DARABONBA_PTR_FROM_JSON(Subtitle, subtitle_);
          DARABONBA_PTR_FROM_JSON(URI, URI_);
          DARABONBA_PTR_FROM_JSON(Video, video_);
        };
        Targets() = default ;
        Targets(const Targets &) = default ;
        Targets(Targets &&) = default ;
        Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Targets() = default ;
        Targets& operator=(const Targets &) = default ;
        Targets& operator=(Targets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Segment : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Segment& obj) { 
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(Format, format_);
            DARABONBA_PTR_TO_JSON(StartNumber, startNumber_);
          };
          friend void from_json(const Darabonba::Json& j, Segment& obj) { 
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(Format, format_);
            DARABONBA_PTR_FROM_JSON(StartNumber, startNumber_);
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
          virtual bool empty() const override { return this->duration_ == nullptr
        && this->format_ == nullptr && this->startNumber_ == nullptr; };
          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
          inline Segment& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // format Field Functions 
          bool hasFormat() const { return this->format_ != nullptr;};
          void deleteFormat() { this->format_ = nullptr;};
          inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
          inline Segment& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


          // startNumber Field Functions 
          bool hasStartNumber() const { return this->startNumber_ != nullptr;};
          void deleteStartNumber() { this->startNumber_ = nullptr;};
          inline int32_t getStartNumber() const { DARABONBA_PTR_GET_DEFAULT(startNumber_, 0) };
          inline Segment& setStartNumber(int32_t startNumber) { DARABONBA_PTR_SET_VALUE(startNumber_, startNumber) };


        protected:
          // The duration of each segment, in seconds.
          shared_ptr<double> duration_ {};
          // The media packaging format. Only `hls` is supported.
          shared_ptr<string> format_ {};
          // The starting sequence number for segments. The default is 0.
          shared_ptr<int32_t> startNumber_ {};
        };

        virtual bool empty() const override { return this->audio_ == nullptr
        && this->container_ == nullptr && this->segment_ == nullptr && this->speed_ == nullptr && this->stripMetadata_ == nullptr && this->subtitle_ == nullptr
        && this->URI_ == nullptr && this->video_ == nullptr; };
        // audio Field Functions 
        bool hasAudio() const { return this->audio_ != nullptr;};
        void deleteAudio() { this->audio_ = nullptr;};
        inline const TargetAudio & getAudio() const { DARABONBA_PTR_GET_CONST(audio_, TargetAudio) };
        inline TargetAudio getAudio() { DARABONBA_PTR_GET(audio_, TargetAudio) };
        inline Targets& setAudio(const TargetAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
        inline Targets& setAudio(TargetAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


        // container Field Functions 
        bool hasContainer() const { return this->container_ != nullptr;};
        void deleteContainer() { this->container_ = nullptr;};
        inline string getContainer() const { DARABONBA_PTR_GET_DEFAULT(container_, "") };
        inline Targets& setContainer(string container) { DARABONBA_PTR_SET_VALUE(container_, container) };


        // segment Field Functions 
        bool hasSegment() const { return this->segment_ != nullptr;};
        void deleteSegment() { this->segment_ = nullptr;};
        inline const Targets::Segment & getSegment() const { DARABONBA_PTR_GET_CONST(segment_, Targets::Segment) };
        inline Targets::Segment getSegment() { DARABONBA_PTR_GET(segment_, Targets::Segment) };
        inline Targets& setSegment(const Targets::Segment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
        inline Targets& setSegment(Targets::Segment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


        // speed Field Functions 
        bool hasSpeed() const { return this->speed_ != nullptr;};
        void deleteSpeed() { this->speed_ = nullptr;};
        inline float getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0.0) };
        inline Targets& setSpeed(float speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


        // stripMetadata Field Functions 
        bool hasStripMetadata() const { return this->stripMetadata_ != nullptr;};
        void deleteStripMetadata() { this->stripMetadata_ = nullptr;};
        inline bool getStripMetadata() const { DARABONBA_PTR_GET_DEFAULT(stripMetadata_, false) };
        inline Targets& setStripMetadata(bool stripMetadata) { DARABONBA_PTR_SET_VALUE(stripMetadata_, stripMetadata) };


        // subtitle Field Functions 
        bool hasSubtitle() const { return this->subtitle_ != nullptr;};
        void deleteSubtitle() { this->subtitle_ = nullptr;};
        inline const TargetSubtitle & getSubtitle() const { DARABONBA_PTR_GET_CONST(subtitle_, TargetSubtitle) };
        inline TargetSubtitle getSubtitle() { DARABONBA_PTR_GET(subtitle_, TargetSubtitle) };
        inline Targets& setSubtitle(const TargetSubtitle & subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };
        inline Targets& setSubtitle(TargetSubtitle && subtitle) { DARABONBA_PTR_SET_RVALUE(subtitle_, subtitle) };


        // URI Field Functions 
        bool hasURI() const { return this->URI_ != nullptr;};
        void deleteURI() { this->URI_ = nullptr;};
        inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
        inline Targets& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


        // video Field Functions 
        bool hasVideo() const { return this->video_ != nullptr;};
        void deleteVideo() { this->video_ = nullptr;};
        inline const TargetVideo & getVideo() const { DARABONBA_PTR_GET_CONST(video_, TargetVideo) };
        inline TargetVideo getVideo() { DARABONBA_PTR_GET(video_, TargetVideo) };
        inline Targets& setVideo(const TargetVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
        inline Targets& setVideo(TargetVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


      protected:
        // The audio processing parameters.
        // >Notice: If this parameter is left empty, the first audio stream, if it exists, is copied directly to the output file.
        shared_ptr<TargetAudio> audio_ {};
        // The packaging container type. Only `mp4` and `ts` are supported.
        shared_ptr<string> container_ {};
        // The media packaging settings.
        shared_ptr<Targets::Segment> segment_ {};
        // The playback speed of the output media. The value must be between 0.5 and 1.0, inclusive. The default value is 1.0.
        // 
        // > This parameter specifies the default playback speed of the output file as a ratio of the source file\\"s speed. It does not perform speed-up transcoding.
        shared_ptr<float> speed_ {};
        // If true, removes metadata from the output file. The default is false.
        shared_ptr<bool> stripMetadata_ {};
        // The subtitle processing parameters.
        // >Notice: You must use the `Subtitle.ExtractSubtitle` parameter to package subtitle streams. The `URI` in `Subtitle.ExtractSubtitle` must be in the same directory as or a subdirectory of `TargetGroups.URI`. The `Format` in `Subtitle.ExtractSubtitle` must be `vtt`. You only need to configure this parameter in one `Target` to package all subtitle streams.
        shared_ptr<TargetSubtitle> subtitle_ {};
        // The OSS URI of the output HLS media playlist file for the subtask.
        // >Notice: This URI must be in the same directory as or a subdirectory of `TargetGroups.URI`.
        shared_ptr<string> URI_ {};
        // The video processing parameters.
        // >Notice: If this parameter is left empty, the first video stream, if it exists, is copied directly to the output file.
        shared_ptr<TargetVideo> video_ {};
      };

      virtual bool empty() const override { return this->targets_ == nullptr
        && this->URI_ == nullptr; };
      // targets Field Functions 
      bool hasTargets() const { return this->targets_ != nullptr;};
      void deleteTargets() { this->targets_ = nullptr;};
      inline const vector<TargetGroups::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<TargetGroups::Targets>) };
      inline vector<TargetGroups::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<TargetGroups::Targets>) };
      inline TargetGroups& setTargets(const vector<TargetGroups::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
      inline TargetGroups& setTargets(vector<TargetGroups::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline TargetGroups& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // A list of media packaging subtasks. Each `Target` corresponds to a variant stream (`#EXT-X-STREAM-INF`) in the HLS master playlist and generates a corresponding HLS media playlist.
      shared_ptr<vector<TargetGroups::Targets>> targets_ {};
      // The OSS URI of the output HLS master playlist file for the packaging task.
      shared_ptr<string> URI_ {};
    };

    class Sources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sources& obj) { 
        DARABONBA_PTR_TO_JSON(AlignMode, alignMode_);
        DARABONBA_PTR_TO_JSON(Attached, attached_);
        DARABONBA_PTR_TO_JSON(DisableAudio, disableAudio_);
        DARABONBA_PTR_TO_JSON(DisableVideo, disableVideo_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Subtitles, subtitles_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, Sources& obj) { 
        DARABONBA_PTR_FROM_JSON(AlignMode, alignMode_);
        DARABONBA_PTR_FROM_JSON(Attached, attached_);
        DARABONBA_PTR_FROM_JSON(DisableAudio, disableAudio_);
        DARABONBA_PTR_FROM_JSON(DisableVideo, disableVideo_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Subtitles, subtitles_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
      };
      Sources() = default ;
      Sources(const Sources &) = default ;
      Sources(Sources &&) = default ;
      Sources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sources() = default ;
      Sources& operator=(const Sources &) = default ;
      Sources& operator=(Sources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Subtitles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Subtitles& obj) { 
          DARABONBA_PTR_TO_JSON(Language, language_);
          DARABONBA_PTR_TO_JSON(TimeOffset, timeOffset_);
          DARABONBA_PTR_TO_JSON(URI, URI_);
        };
        friend void from_json(const Darabonba::Json& j, Subtitles& obj) { 
          DARABONBA_PTR_FROM_JSON(Language, language_);
          DARABONBA_PTR_FROM_JSON(TimeOffset, timeOffset_);
          DARABONBA_PTR_FROM_JSON(URI, URI_);
        };
        Subtitles() = default ;
        Subtitles(const Subtitles &) = default ;
        Subtitles(Subtitles &&) = default ;
        Subtitles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Subtitles() = default ;
        Subtitles& operator=(const Subtitles &) = default ;
        Subtitles& operator=(Subtitles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->language_ == nullptr
        && this->timeOffset_ == nullptr && this->URI_ == nullptr; };
        // language Field Functions 
        bool hasLanguage() const { return this->language_ != nullptr;};
        void deleteLanguage() { this->language_ = nullptr;};
        inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
        inline Subtitles& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


        // timeOffset Field Functions 
        bool hasTimeOffset() const { return this->timeOffset_ != nullptr;};
        void deleteTimeOffset() { this->timeOffset_ = nullptr;};
        inline double getTimeOffset() const { DARABONBA_PTR_GET_DEFAULT(timeOffset_, 0.0) };
        inline Subtitles& setTimeOffset(double timeOffset) { DARABONBA_PTR_SET_VALUE(timeOffset_, timeOffset) };


        // URI Field Functions 
        bool hasURI() const { return this->URI_ != nullptr;};
        void deleteURI() { this->URI_ = nullptr;};
        inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
        inline Subtitles& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


      protected:
        // The language of the subtitle. The value must comply with the ISO 639-2 standard.
        shared_ptr<string> language_ {};
        // The subtitle delay, in seconds. The default value is 0.
        shared_ptr<double> timeOffset_ {};
        // The OSS URI of the object. The URI must use the `oss://${Bucket}/${Object}` format, where `${Bucket}` is the name of an OSS bucket in the same region as the project, and `${Object}` is the full path to the object, including its file extension.
        // Supported subtitle formats include: srt, vtt, mov_text, ass, dvd_sub, and pgs.
        shared_ptr<string> URI_ {};
      };

      virtual bool empty() const override { return this->alignMode_ == nullptr
        && this->attached_ == nullptr && this->disableAudio_ == nullptr && this->disableVideo_ == nullptr && this->duration_ == nullptr && this->startTime_ == nullptr
        && this->subtitles_ == nullptr && this->URI_ == nullptr; };
      // alignMode Field Functions 
      bool hasAlignMode() const { return this->alignMode_ != nullptr;};
      void deleteAlignMode() { this->alignMode_ = nullptr;};
      inline string getAlignMode() const { DARABONBA_PTR_GET_DEFAULT(alignMode_, "") };
      inline Sources& setAlignMode(string alignMode) { DARABONBA_PTR_SET_VALUE(alignMode_, alignMode) };


      // attached Field Functions 
      bool hasAttached() const { return this->attached_ != nullptr;};
      void deleteAttached() { this->attached_ = nullptr;};
      inline bool getAttached() const { DARABONBA_PTR_GET_DEFAULT(attached_, false) };
      inline Sources& setAttached(bool attached) { DARABONBA_PTR_SET_VALUE(attached_, attached) };


      // disableAudio Field Functions 
      bool hasDisableAudio() const { return this->disableAudio_ != nullptr;};
      void deleteDisableAudio() { this->disableAudio_ = nullptr;};
      inline bool getDisableAudio() const { DARABONBA_PTR_GET_DEFAULT(disableAudio_, false) };
      inline Sources& setDisableAudio(bool disableAudio) { DARABONBA_PTR_SET_VALUE(disableAudio_, disableAudio) };


      // disableVideo Field Functions 
      bool hasDisableVideo() const { return this->disableVideo_ != nullptr;};
      void deleteDisableVideo() { this->disableVideo_ = nullptr;};
      inline bool getDisableVideo() const { DARABONBA_PTR_GET_DEFAULT(disableVideo_, false) };
      inline Sources& setDisableVideo(bool disableVideo) { DARABONBA_PTR_SET_VALUE(disableVideo_, disableVideo) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
      inline Sources& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline double getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
      inline Sources& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // subtitles Field Functions 
      bool hasSubtitles() const { return this->subtitles_ != nullptr;};
      void deleteSubtitles() { this->subtitles_ = nullptr;};
      inline const vector<Sources::Subtitles> & getSubtitles() const { DARABONBA_PTR_GET_CONST(subtitles_, vector<Sources::Subtitles>) };
      inline vector<Sources::Subtitles> getSubtitles() { DARABONBA_PTR_GET(subtitles_, vector<Sources::Subtitles>) };
      inline Sources& setSubtitles(const vector<Sources::Subtitles> & subtitles) { DARABONBA_PTR_SET_VALUE(subtitles_, subtitles) };
      inline Sources& setSubtitles(vector<Sources::Subtitles> && subtitles) { DARABONBA_PTR_SET_RVALUE(subtitles_, subtitles) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Sources& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The alignment mode for the added audio and video streams. Valid values include:
      // 
      // - false (default): No alignment is performed.
      // 
      // - loop: Aligns content by looping the audio or video.
      // 
      // - pad: Aligns content by padding with silent frames or black frames.
      // 
      // > * This parameter only takes effect if Attached is set to true.
      shared_ptr<string> alignMode_ {};
      // If true, adds the current source media file to the output as a synchronized audio stream or video stream. The default is false.
      // 
      // > - You cannot set Attached to true for the source media file referenced by AlignmentIndex.
      shared_ptr<bool> attached_ {};
      // Specifies whether to disable the audio from the source media file. Valid values include:
      // 
      // - true: Disables the audio.
      // 
      // - false (default): Includes the audio.
      shared_ptr<bool> disableAudio_ {};
      // Specifies whether to disable the video from the source media file. Valid values include:
      // 
      // - true: Disables the video.
      // 
      // - false (default): Includes the video.
      shared_ptr<bool> disableVideo_ {};
      // The duration of media transcoding in seconds. The default value, 0, transcodes the media until its end.
      shared_ptr<double> duration_ {};
      // The start time of media transcoding, in seconds. Valid values include:
      // 
      // - 0 (default): Transcoding starts from the beginning of the media file.
      // 
      // - n (a value greater than 0): Transcoding starts n seconds into the media file.
      shared_ptr<double> startTime_ {};
      // A list of subtitles to add.
      shared_ptr<vector<Sources::Subtitles>> subtitles_ {};
      // The OSS URI of the object. The URI must use the `oss://${Bucket}/${Object}` format, where `${Bucket}` is the name of an OSS bucket in the same region as the project, and `${Object}` is the full path to the object, including its file extension.
      shared_ptr<string> URI_ {};
    };

    virtual bool empty() const override { return this->alignmentIndex_ == nullptr
        && this->credentialConfig_ == nullptr && this->notification_ == nullptr && this->projectName_ == nullptr && this->sources_ == nullptr && this->tags_ == nullptr
        && this->targetGroups_ == nullptr && this->targets_ == nullptr && this->userData_ == nullptr; };
    // alignmentIndex Field Functions 
    bool hasAlignmentIndex() const { return this->alignmentIndex_ != nullptr;};
    void deleteAlignmentIndex() { this->alignmentIndex_ = nullptr;};
    inline int32_t getAlignmentIndex() const { DARABONBA_PTR_GET_DEFAULT(alignmentIndex_, 0) };
    inline CreateMediaConvertTaskRequest& setAlignmentIndex(int32_t alignmentIndex) { DARABONBA_PTR_SET_VALUE(alignmentIndex_, alignmentIndex) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CreateMediaConvertTaskRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CreateMediaConvertTaskRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification getNotification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateMediaConvertTaskRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateMediaConvertTaskRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateMediaConvertTaskRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<CreateMediaConvertTaskRequest::Sources> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<CreateMediaConvertTaskRequest::Sources>) };
    inline vector<CreateMediaConvertTaskRequest::Sources> getSources() { DARABONBA_PTR_GET(sources_, vector<CreateMediaConvertTaskRequest::Sources>) };
    inline CreateMediaConvertTaskRequest& setSources(const vector<CreateMediaConvertTaskRequest::Sources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline CreateMediaConvertTaskRequest& setSources(vector<CreateMediaConvertTaskRequest::Sources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline CreateMediaConvertTaskRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateMediaConvertTaskRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // targetGroups Field Functions 
    bool hasTargetGroups() const { return this->targetGroups_ != nullptr;};
    void deleteTargetGroups() { this->targetGroups_ = nullptr;};
    inline const vector<CreateMediaConvertTaskRequest::TargetGroups> & getTargetGroups() const { DARABONBA_PTR_GET_CONST(targetGroups_, vector<CreateMediaConvertTaskRequest::TargetGroups>) };
    inline vector<CreateMediaConvertTaskRequest::TargetGroups> getTargetGroups() { DARABONBA_PTR_GET(targetGroups_, vector<CreateMediaConvertTaskRequest::TargetGroups>) };
    inline CreateMediaConvertTaskRequest& setTargetGroups(const vector<CreateMediaConvertTaskRequest::TargetGroups> & targetGroups) { DARABONBA_PTR_SET_VALUE(targetGroups_, targetGroups) };
    inline CreateMediaConvertTaskRequest& setTargetGroups(vector<CreateMediaConvertTaskRequest::TargetGroups> && targetGroups) { DARABONBA_PTR_SET_RVALUE(targetGroups_, targetGroups) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<CreateMediaConvertTaskRequest::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<CreateMediaConvertTaskRequest::Targets>) };
    inline vector<CreateMediaConvertTaskRequest::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<CreateMediaConvertTaskRequest::Targets>) };
    inline CreateMediaConvertTaskRequest& setTargets(const vector<CreateMediaConvertTaskRequest::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline CreateMediaConvertTaskRequest& setTargets(vector<CreateMediaConvertTaskRequest::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateMediaConvertTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // When concatenating media files, this specifies the index of the primary file in the Sources list. The default transcoding parameters (such as resolution and frame rate from the `Video` and `Audio` objects) are taken from this primary file. The default index is 0.
    shared_ptr<int32_t> alignmentIndex_ {};
    // **You can leave this parameter empty if you do not have special requirements.**
    // 
    // The chained authorization configuration. For more information, see [Use chained authorization to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // The message notification settings. For more information, click Notification. For information about the format of asynchronous notifications, see [Asynchronous notification format](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<Notification> notification_ {};
    // The name of the project. For more information about how to obtain the project name, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // A list of media files. If you provide more than one file, they are concatenated in the order of their URIs.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateMediaConvertTaskRequest::Sources>> sources_ {};
    // Custom tags for searching and filtering asynchronous tasks.
    Darabonba::Json tags_ {};
    // A list of media packaging tasks to convert and package the input media into HLS outputs. Each TargetGroup corresponds to one HLS master playlist.
    shared_ptr<vector<CreateMediaConvertTaskRequest::TargetGroups>> targetGroups_ {};
    // A list of media processing tasks.
    shared_ptr<vector<CreateMediaConvertTaskRequest::Targets>> targets_ {};
    // The custom user data. This data is returned in the asynchronous notification, allowing you to associate the notification with your internal system. The maximum length is 2,048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
