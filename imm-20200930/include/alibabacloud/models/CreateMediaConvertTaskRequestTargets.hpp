// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKREQUESTTARGETS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKREQUESTTARGETS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TargetAudio.hpp>
#include <alibabacloud/models/TargetImage.hpp>
#include <alibabacloud/models/CreateMediaConvertTaskRequestTargetsSegment.hpp>
#include <alibabacloud/models/TargetSubtitle.hpp>
#include <alibabacloud/models/TargetVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateMediaConvertTaskRequestTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaConvertTaskRequestTargets& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Segment, segment_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
      DARABONBA_PTR_TO_JSON(StripMetadata, stripMetadata_);
      DARABONBA_PTR_TO_JSON(Subtitle, subtitle_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaConvertTaskRequestTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Segment, segment_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
      DARABONBA_PTR_FROM_JSON(StripMetadata, stripMetadata_);
      DARABONBA_PTR_FROM_JSON(Subtitle, subtitle_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    CreateMediaConvertTaskRequestTargets() = default ;
    CreateMediaConvertTaskRequestTargets(const CreateMediaConvertTaskRequestTargets &) = default ;
    CreateMediaConvertTaskRequestTargets(CreateMediaConvertTaskRequestTargets &&) = default ;
    CreateMediaConvertTaskRequestTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaConvertTaskRequestTargets() = default ;
    CreateMediaConvertTaskRequestTargets& operator=(const CreateMediaConvertTaskRequestTargets &) = default ;
    CreateMediaConvertTaskRequestTargets& operator=(CreateMediaConvertTaskRequestTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audio_ == nullptr
        && return this->container_ == nullptr && return this->image_ == nullptr && return this->segment_ == nullptr && return this->speed_ == nullptr && return this->stripMetadata_ == nullptr
        && return this->subtitle_ == nullptr && return this->URI_ == nullptr && return this->video_ == nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline const Models::TargetAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::TargetAudio) };
    inline Models::TargetAudio audio() { DARABONBA_PTR_GET(audio_, Models::TargetAudio) };
    inline CreateMediaConvertTaskRequestTargets& setAudio(const Models::TargetAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline CreateMediaConvertTaskRequestTargets& setAudio(Models::TargetAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline string container() const { DARABONBA_PTR_GET_DEFAULT(container_, "") };
    inline CreateMediaConvertTaskRequestTargets& setContainer(string container) { DARABONBA_PTR_SET_VALUE(container_, container) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const Models::TargetImage & image() const { DARABONBA_PTR_GET_CONST(image_, Models::TargetImage) };
    inline Models::TargetImage image() { DARABONBA_PTR_GET(image_, Models::TargetImage) };
    inline CreateMediaConvertTaskRequestTargets& setImage(const Models::TargetImage & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline CreateMediaConvertTaskRequestTargets& setImage(Models::TargetImage && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // segment Field Functions 
    bool hasSegment() const { return this->segment_ != nullptr;};
    void deleteSegment() { this->segment_ = nullptr;};
    inline const Models::CreateMediaConvertTaskRequestTargetsSegment & segment() const { DARABONBA_PTR_GET_CONST(segment_, Models::CreateMediaConvertTaskRequestTargetsSegment) };
    inline Models::CreateMediaConvertTaskRequestTargetsSegment segment() { DARABONBA_PTR_GET(segment_, Models::CreateMediaConvertTaskRequestTargetsSegment) };
    inline CreateMediaConvertTaskRequestTargets& setSegment(const Models::CreateMediaConvertTaskRequestTargetsSegment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
    inline CreateMediaConvertTaskRequestTargets& setSegment(Models::CreateMediaConvertTaskRequestTargetsSegment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline float speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0.0) };
    inline CreateMediaConvertTaskRequestTargets& setSpeed(float speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // stripMetadata Field Functions 
    bool hasStripMetadata() const { return this->stripMetadata_ != nullptr;};
    void deleteStripMetadata() { this->stripMetadata_ = nullptr;};
    inline bool stripMetadata() const { DARABONBA_PTR_GET_DEFAULT(stripMetadata_, false) };
    inline CreateMediaConvertTaskRequestTargets& setStripMetadata(bool stripMetadata) { DARABONBA_PTR_SET_VALUE(stripMetadata_, stripMetadata) };


    // subtitle Field Functions 
    bool hasSubtitle() const { return this->subtitle_ != nullptr;};
    void deleteSubtitle() { this->subtitle_ = nullptr;};
    inline const Models::TargetSubtitle & subtitle() const { DARABONBA_PTR_GET_CONST(subtitle_, Models::TargetSubtitle) };
    inline Models::TargetSubtitle subtitle() { DARABONBA_PTR_GET(subtitle_, Models::TargetSubtitle) };
    inline CreateMediaConvertTaskRequestTargets& setSubtitle(const Models::TargetSubtitle & subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };
    inline CreateMediaConvertTaskRequestTargets& setSubtitle(Models::TargetSubtitle && subtitle) { DARABONBA_PTR_SET_RVALUE(subtitle_, subtitle) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline CreateMediaConvertTaskRequestTargets& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::TargetVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::TargetVideo) };
    inline Models::TargetVideo video() { DARABONBA_PTR_GET(video_, Models::TargetVideo) };
    inline CreateMediaConvertTaskRequestTargets& setVideo(const Models::TargetVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline CreateMediaConvertTaskRequestTargets& setVideo(Models::TargetVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // Audio processing parameter configuration.
    // >Notice: If Audio is null, the first audio stream (if present) will be directly copied to the output file.</notice>
    std::shared_ptr<Models::TargetAudio> audio_ = nullptr;
    // Media container type. Available container types are as follows:
    // - Audio and video containers: mp4, mkv, mov, asf, avi, mxf, ts, flv
    // - Audio containers: mp3, aac, flac, oga, ac3, opus
    // >Notice: Both Container and URI parameters need to be set. If only subtitle extraction, frame capture, sprite image capture, or media-to-gif conversion is performed, both Container and URI should be set to null, making the Segment, Video, Audio, and Speed parameters meaningless.</notice>
    std::shared_ptr<string> container_ = nullptr;
    // Configuration for frame capture, sprite image capture, and media to animated image conversion.
    std::shared_ptr<Models::TargetImage> image_ = nullptr;
    // Media segment settings, no segmentation by default.
    std::shared_ptr<Models::CreateMediaConvertTaskRequestTargetsSegment> segment_ = nullptr;
    // Media playback speed setting, with a value range of [0.5,1.0], default is 1.0.
    // > The ratio of the playback speed of the transcoded media file to the original media file, not a speed-up transcoding.
    std::shared_ptr<float> speed_ = nullptr;
    // Removes metadata from the media file, such as `title`, `album`, etc. The default value is false.
    std::shared_ptr<bool> stripMetadata_ = nullptr;
    // Subtitle processing parameter configuration.
    // >Notice: If Subtitle is null, the first subtitle stream (if present) will be directly copied to the output file.</notice>
    std::shared_ptr<Models::TargetSubtitle> subtitle_ = nullptr;
    // OSS address for the output file of media transcoding.
    // 
    // The OSS address rule is `oss://${Bucket}/${Object}`, where `${Bucket}` is the name of the OSS Bucket in the same region (Region) as the current project, and `${Object}` is the complete path of the file including the file extension.
    // - When **URI** has an extension, the OSS address for the transcoded media file will be **URI**. If there are multiple output files, they may overwrite each other.
    // - When **URI** does not have an extension, the OSS address for the transcoded media file is determined by the **URI**, **Container**, and **Segment** parameters. For example, if **URI** is `oss://examplebucket/outputVideo`:
    //    -  When **Container** is `mp4` and **Segment** is empty, the generated media file\\"s OSS address will be `oss://examplebucket/outputVideo.mp4`.
    //    -  When **Container** is `ts` and **Segment**\\"s **Format** is `hls`, it will generate an m3u8 file with the OSS address `oss://examplebucket/outputVideo.m3u8` and multiple ts files with the prefix `oss://examplebucket/outputVideo`.
    std::shared_ptr<string> URI_ = nullptr;
    // Video processing parameter configuration.
    // >Notice: If Video is null, the first video stream (if present) will be directly copied to the output file.</notice>
    std::shared_ptr<Models::TargetVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
