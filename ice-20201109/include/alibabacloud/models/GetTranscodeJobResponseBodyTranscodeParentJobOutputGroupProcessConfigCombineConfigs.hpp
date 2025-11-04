// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIGCOMBINECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIGCOMBINECONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(AudioIndex, audioIndex_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(VideoIndex, videoIndex_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioIndex, audioIndex_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(VideoIndex, videoIndex_);
    };
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs(const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs(GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs &&) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs& operator=(const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs& operator=(GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioIndex_ == nullptr
        && return this->duration_ == nullptr && return this->start_ == nullptr && return this->videoIndex_ == nullptr; };
    // audioIndex Field Functions 
    bool hasAudioIndex() const { return this->audioIndex_ != nullptr;};
    void deleteAudioIndex() { this->audioIndex_ = nullptr;};
    inline string audioIndex() const { DARABONBA_PTR_GET_DEFAULT(audioIndex_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs& setAudioIndex(string audioIndex) { DARABONBA_PTR_SET_VALUE(audioIndex_, audioIndex) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline double duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline double start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0.0) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs& setStart(double start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // videoIndex Field Functions 
    bool hasVideoIndex() const { return this->videoIndex_ != nullptr;};
    void deleteVideoIndex() { this->videoIndex_ = nullptr;};
    inline string videoIndex() const { DARABONBA_PTR_GET_DEFAULT(videoIndex_, "") };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigCombineConfigs& setVideoIndex(string videoIndex) { DARABONBA_PTR_SET_VALUE(videoIndex_, videoIndex) };


  protected:
    // The audio stream index.
    // 
    // This parameter is required.
    std::shared_ptr<string> audioIndex_ = nullptr;
    // The duration of the input stream. The default value is the duration of the video.
    std::shared_ptr<double> duration_ = nullptr;
    // The start time of the input stream. Default value: 0.
    std::shared_ptr<double> start_ = nullptr;
    // The video stream index.
    // 
    // This parameter is required.
    std::shared_ptr<string> videoIndex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
