// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGCOMBINECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGCOMBINECONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(AudioIndex, audioIndex_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(VideoIndex, videoIndex_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioIndex, audioIndex_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(VideoIndex, videoIndex_);
    };
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs &&) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs& operator=(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs& operator=(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioIndex_ != nullptr
        && this->duration_ != nullptr && this->start_ != nullptr && this->videoIndex_ != nullptr; };
    // audioIndex Field Functions 
    bool hasAudioIndex() const { return this->audioIndex_ != nullptr;};
    void deleteAudioIndex() { this->audioIndex_ = nullptr;};
    inline string audioIndex() const { DARABONBA_PTR_GET_DEFAULT(audioIndex_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs& setAudioIndex(string audioIndex) { DARABONBA_PTR_SET_VALUE(audioIndex_, audioIndex) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline double duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline double start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0.0) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs& setStart(double start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // videoIndex Field Functions 
    bool hasVideoIndex() const { return this->videoIndex_ != nullptr;};
    void deleteVideoIndex() { this->videoIndex_ = nullptr;};
    inline string videoIndex() const { DARABONBA_PTR_GET_DEFAULT(videoIndex_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigCombineConfigs& setVideoIndex(string videoIndex) { DARABONBA_PTR_SET_VALUE(videoIndex_, videoIndex) };


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
