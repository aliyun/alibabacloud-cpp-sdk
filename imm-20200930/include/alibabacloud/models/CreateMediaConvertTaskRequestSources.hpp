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
    virtual bool empty() const override { this->alignMode_ != nullptr
        && this->attached_ != nullptr && this->disableAudio_ != nullptr && this->disableVideo_ != nullptr && this->duration_ != nullptr && this->startTime_ != nullptr
        && this->subtitles_ != nullptr && this->URI_ != nullptr; };
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
    std::shared_ptr<string> alignMode_ = nullptr;
    std::shared_ptr<bool> attached_ = nullptr;
    std::shared_ptr<bool> disableAudio_ = nullptr;
    std::shared_ptr<bool> disableVideo_ = nullptr;
    // The transcoding duration of the media. Unit: seconds. Default value: 0. A value of 0 specifies that the transcoding duration lasts until the end of the video.
    std::shared_ptr<double> duration_ = nullptr;
    // The start time of the media transcoding task. Unit: seconds. Valid values:
    // 
    // *   0 (default): starts transcoding when the media starts playing.
    // *   n: starts transcoding n seconds after the media starts playing. n must be greater than 0.
    std::shared_ptr<double> startTime_ = nullptr;
    // The subtitles. By default, this parameter is left empty.
    std::shared_ptr<vector<Models::CreateMediaConvertTaskRequestSourcesSubtitles>> subtitles_ = nullptr;
    // The URI of the Object Storage Service (OSS) bucket. Specify the value in the `oss://${Bucket}/${Object}` format. `${Bucket}` specifies the name of the OSS bucket that resides in the same region with the current project. `${Object}` specifies the complete path to the file whose name contains an extension.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
