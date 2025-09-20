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
    virtual bool empty() const override { this->audio_ != nullptr
        && this->container_ != nullptr && this->image_ != nullptr && this->segment_ != nullptr && this->speed_ != nullptr && this->stripMetadata_ != nullptr
        && this->subtitle_ != nullptr && this->URI_ != nullptr && this->video_ != nullptr; };
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
    // The audio processing settings.
    // 
    // >  If you leave Audio empty and the first audio stream exists, the first audio stream is directly copied to the output file.
    std::shared_ptr<Models::TargetAudio> audio_ = nullptr;
    // The type of the media container.
    // 
    // *   Valid values for audio and video containers: mp4, mkv, mov, asf, avi, mxf, ts, and flv.
    // 
    // *   Valid values only for audio containers: mp3, aac, flac, oga, ac3, and opus.
    // 
    //     **
    // 
    //     **Note** Specify Container and URI at the same time. If you want to extract subtitles, capture frames, capture image sprites, or rotate media images, set Container and URI to null. In this case, Segment, Video, Audio, and Speed do not take effect.
    std::shared_ptr<string> container_ = nullptr;
    // The frame capturing, sprite capturing, and media rotation settings.
    std::shared_ptr<Models::TargetImage> image_ = nullptr;
    // The media segmentation settings. By default, no segmentation is performed.
    std::shared_ptr<Models::CreateMediaConvertTaskRequestTargetsSegment> segment_ = nullptr;
    // The playback speed of the media. Valid values: 0.5 to 2. Default value: 1.0.
    // 
    // >  This parameter specifies the ratio of the non-regular playback speed of the transcoded media file to the default playback speed of the source media file.
    std::shared_ptr<float> speed_ = nullptr;
    // Specifies whether to remove the metadata, such as `title` and `album`, from the media file. Default value: false.
    std::shared_ptr<bool> stripMetadata_ = nullptr;
    // The subtitle processing settings.
    // 
    // >  If you leave Subtitle empty and the first subtitle stream exists, the first subtitle stream is directly copied to the output file.
    std::shared_ptr<Models::TargetSubtitle> subtitle_ = nullptr;
    // The URI of the OSS bucket in which you want to store the media transcoding output file.
    // 
    // Specify the value in the `oss://${Bucket}/${Object}` format. `${Bucket}` specifies the name of the OSS bucket that resides in the same region with the current project. `${Object}` specifies the complete path to the file whose name contains an extension.
    // 
    // *   If the value of **URI** contains an extension, the endpoint of the OSS bucket matches the URI. If multiple media transcoding output files exist, the endpoints of the correspodning OSS buckets may be overwritten.****
    // 
    // *   If the value of **URI** does not contain an extension, the endpoint of the OSS bucket consists of the following parameters: **URI**, **Container**, and **Segment**. In the following examples, the value of **URI** is `oss://examplebucket/outputVideo`.
    // 
    //     *   If the value of **Container** is `mp4` and the value of **Segment** is null, the endpoint of the OSS bucket is `oss://examplebucket/outputVideo.mp4`.
    //     *   If the value of **Container** is `ts` and the value of **Format** in **Segment** is `hls`, the endpoint of the OSS bucket is `oss://examplebucket/outputVideo.m3u8`. In addition, multiple ts files prefixed with `oss://examplebucket/outputVideo` are generated.
    std::shared_ptr<string> URI_ = nullptr;
    // The video processing settings.
    // 
    // >  If you leave Video empty and the first video stream exists, the first video stream is directly copied to the output file.
    std::shared_ptr<Models::TargetVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
