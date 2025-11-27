// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKREQUESTSOURCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKREQUESTSOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMediaConvertTaskRequestSourcesSubtitles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateMediaConvertTaskRequestSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaConvertTaskRequestSources& obj) { 
      DARABONBA_PTR_TO_JSON(AlignMode, alignMode_);
      DARABONBA_PTR_TO_JSON(Attached, attached_);
      DARABONBA_PTR_TO_JSON(DisableAudio, disableAudio_);
      DARABONBA_PTR_TO_JSON(DisableVideo, disableVideo_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaConvertTaskRequestSources& obj) { 
      DARABONBA_PTR_FROM_JSON(AlignMode, alignMode_);
      DARABONBA_PTR_FROM_JSON(Attached, attached_);
      DARABONBA_PTR_FROM_JSON(DisableAudio, disableAudio_);
      DARABONBA_PTR_FROM_JSON(DisableVideo, disableVideo_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    CreateMediaConvertTaskRequestSources() = default ;
    CreateMediaConvertTaskRequestSources(const CreateMediaConvertTaskRequestSources &) = default ;
    CreateMediaConvertTaskRequestSources(CreateMediaConvertTaskRequestSources &&) = default ;
    CreateMediaConvertTaskRequestSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaConvertTaskRequestSources() = default ;
    CreateMediaConvertTaskRequestSources& operator=(const CreateMediaConvertTaskRequestSources &) = default ;
    CreateMediaConvertTaskRequestSources& operator=(CreateMediaConvertTaskRequestSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alignMode_ == nullptr
        && return this->attached_ == nullptr && return this->disableAudio_ == nullptr && return this->disableVideo_ == nullptr && return this->duration_ == nullptr && return this->startTime_ == nullptr
        && return this->subtitles_ == nullptr && return this->URI_ == nullptr; };
    // alignMode Field Functions 
    bool hasAlignMode() const { return this->alignMode_ != nullptr;};
    void deleteAlignMode() { this->alignMode_ = nullptr;};
    inline string alignMode() const { DARABONBA_PTR_GET_DEFAULT(alignMode_, "") };
    inline CreateMediaConvertTaskRequestSources& setAlignMode(string alignMode) { DARABONBA_PTR_SET_VALUE(alignMode_, alignMode) };


    // attached Field Functions 
    bool hasAttached() const { return this->attached_ != nullptr;};
    void deleteAttached() { this->attached_ = nullptr;};
    inline bool attached() const { DARABONBA_PTR_GET_DEFAULT(attached_, false) };
    inline CreateMediaConvertTaskRequestSources& setAttached(bool attached) { DARABONBA_PTR_SET_VALUE(attached_, attached) };


    // disableAudio Field Functions 
    bool hasDisableAudio() const { return this->disableAudio_ != nullptr;};
    void deleteDisableAudio() { this->disableAudio_ = nullptr;};
    inline bool disableAudio() const { DARABONBA_PTR_GET_DEFAULT(disableAudio_, false) };
    inline CreateMediaConvertTaskRequestSources& setDisableAudio(bool disableAudio) { DARABONBA_PTR_SET_VALUE(disableAudio_, disableAudio) };


    // disableVideo Field Functions 
    bool hasDisableVideo() const { return this->disableVideo_ != nullptr;};
    void deleteDisableVideo() { this->disableVideo_ = nullptr;};
    inline bool disableVideo() const { DARABONBA_PTR_GET_DEFAULT(disableVideo_, false) };
    inline CreateMediaConvertTaskRequestSources& setDisableVideo(bool disableVideo) { DARABONBA_PTR_SET_VALUE(disableVideo_, disableVideo) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline double duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline CreateMediaConvertTaskRequestSources& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline double startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline CreateMediaConvertTaskRequestSources& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subtitles Field Functions 
    bool hasSubtitles() const { return this->subtitles_ != nullptr;};
    void deleteSubtitles() { this->subtitles_ = nullptr;};
    inline const vector<Models::CreateMediaConvertTaskRequestSourcesSubtitles> & subtitles() const { DARABONBA_PTR_GET_CONST(subtitles_, vector<Models::CreateMediaConvertTaskRequestSourcesSubtitles>) };
    inline vector<Models::CreateMediaConvertTaskRequestSourcesSubtitles> subtitles() { DARABONBA_PTR_GET(subtitles_, vector<Models::CreateMediaConvertTaskRequestSourcesSubtitles>) };
    inline CreateMediaConvertTaskRequestSources& setSubtitles(const vector<Models::CreateMediaConvertTaskRequestSourcesSubtitles> & subtitles) { DARABONBA_PTR_SET_VALUE(subtitles_, subtitles) };
    inline CreateMediaConvertTaskRequestSources& setSubtitles(vector<Models::CreateMediaConvertTaskRequestSourcesSubtitles> && subtitles) { DARABONBA_PTR_SET_RVALUE(subtitles_, subtitles) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline CreateMediaConvertTaskRequestSources& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The alignment strategy for adding audio and video streams, with the following value range:
    // - false (default): No alignment.
    // - loop: Loop the audio and video content to align.
    // - pad: Align by padding silent frames and black video frames.
    // > - Only valid when the Attached parameter is true.
    std::shared_ptr<string> alignMode_ = nullptr;
    // Add the current source media file as a synchronized audio or video stream to the output media file, with a default value of false.
    // 
    // > - The AlignmentIndex parameter pointing to the Attached parameter of the Source cannot be true.
    std::shared_ptr<bool> attached_ = nullptr;
    // Whether to disable the audio in the source media file. The value range is as follows:
    // 
    // - true: Disable.
    // - false (default): Do not disable.
    std::shared_ptr<bool> disableAudio_ = nullptr;
    // Whether to disable the video in the source media file. The value range is as follows:
    // 
    // - true: Disable.
    // - false (default): Do not disable.
    std::shared_ptr<bool> disableVideo_ = nullptr;
    // The duration of media transcoding, in seconds. The default value is 0, indicating until the end of the video.
    std::shared_ptr<double> duration_ = nullptr;
    // The start time for media transcoding, in seconds. The value range is as follows:
    // - 0 (default): Start transcoding from the beginning of the media.
    // - n (greater than 0): Start transcoding n seconds after the beginning of the media.
    std::shared_ptr<double> startTime_ = nullptr;
    // A list of subtitles to add, which is empty by default.
    std::shared_ptr<vector<Models::CreateMediaConvertTaskRequestSourcesSubtitles>> subtitles_ = nullptr;
    // The OSS address rule is `oss://${Bucket}/${Object}`, where `${Bucket}` is the name of the OSS Bucket in the same region (Region) as the current project, and `${Object}` is the complete path of the file including the file extension.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
