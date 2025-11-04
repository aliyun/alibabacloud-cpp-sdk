// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOFILEINFOLISTAUDIOSTREAMINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOFILEINFOLISTAUDIOSTREAMINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(ChannelLayout, channelLayout_);
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
      DARABONBA_PTR_TO_JSON(CodecName, codecName_);
      DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
      DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
      DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NumFrames, numFrames_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(SampleFmt, sampleFmt_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Timebase, timebase_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(ChannelLayout, channelLayout_);
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
      DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
      DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
      DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
      DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NumFrames, numFrames_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(SampleFmt, sampleFmt_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
    };
    GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList() = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList(const GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList &) = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList(GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList &&) = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList() = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& operator=(const GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList &) = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& operator=(GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && return this->channelLayout_ == nullptr && return this->channels_ == nullptr && return this->codecLongName_ == nullptr && return this->codecName_ == nullptr && return this->codecTag_ == nullptr
        && return this->codecTagString_ == nullptr && return this->codecTimeBase_ == nullptr && return this->duration_ == nullptr && return this->fps_ == nullptr && return this->index_ == nullptr
        && return this->lang_ == nullptr && return this->numFrames_ == nullptr && return this->profile_ == nullptr && return this->sampleFmt_ == nullptr && return this->sampleRate_ == nullptr
        && return this->startTime_ == nullptr && return this->timebase_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // channelLayout Field Functions 
    bool hasChannelLayout() const { return this->channelLayout_ != nullptr;};
    void deleteChannelLayout() { this->channelLayout_ = nullptr;};
    inline string channelLayout() const { DARABONBA_PTR_GET_DEFAULT(channelLayout_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setChannelLayout(string channelLayout) { DARABONBA_PTR_SET_VALUE(channelLayout_, channelLayout) };


    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline string channels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


    // codecLongName Field Functions 
    bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
    void deleteCodecLongName() { this->codecLongName_ = nullptr;};
    inline string codecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


    // codecName Field Functions 
    bool hasCodecName() const { return this->codecName_ != nullptr;};
    void deleteCodecName() { this->codecName_ = nullptr;};
    inline string codecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


    // codecTag Field Functions 
    bool hasCodecTag() const { return this->codecTag_ != nullptr;};
    void deleteCodecTag() { this->codecTag_ = nullptr;};
    inline string codecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


    // codecTagString Field Functions 
    bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
    void deleteCodecTagString() { this->codecTagString_ = nullptr;};
    inline string codecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


    // codecTimeBase Field Functions 
    bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
    void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
    inline string codecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // numFrames Field Functions 
    bool hasNumFrames() const { return this->numFrames_ != nullptr;};
    void deleteNumFrames() { this->numFrames_ = nullptr;};
    inline string numFrames() const { DARABONBA_PTR_GET_DEFAULT(numFrames_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setNumFrames(string numFrames) { DARABONBA_PTR_SET_VALUE(numFrames_, numFrames) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // sampleFmt Field Functions 
    bool hasSampleFmt() const { return this->sampleFmt_ != nullptr;};
    void deleteSampleFmt() { this->sampleFmt_ = nullptr;};
    inline string sampleFmt() const { DARABONBA_PTR_GET_DEFAULT(sampleFmt_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setSampleFmt(string sampleFmt) { DARABONBA_PTR_SET_VALUE(sampleFmt_, sampleFmt) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline string sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setSampleRate(string sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timebase Field Functions 
    bool hasTimebase() const { return this->timebase_ != nullptr;};
    void deleteTimebase() { this->timebase_ = nullptr;};
    inline string timebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListAudioStreamInfoList& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


  protected:
    // The bitrate.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The output layout of sound channels.
    std::shared_ptr<string> channelLayout_ = nullptr;
    // The number of sound channels.
    std::shared_ptr<string> channels_ = nullptr;
    // The full name of the codec.
    std::shared_ptr<string> codecLongName_ = nullptr;
    // The short name of the codec.
    std::shared_ptr<string> codecName_ = nullptr;
    // The tag of the codec.
    std::shared_ptr<string> codecTag_ = nullptr;
    // The tag string of the codec.
    std::shared_ptr<string> codecTagString_ = nullptr;
    // The time base of the codec.
    std::shared_ptr<string> codecTimeBase_ = nullptr;
    // The duration.
    std::shared_ptr<string> duration_ = nullptr;
    // The audio frame rate.
    std::shared_ptr<string> fps_ = nullptr;
    // The sequence number of the audio track.
    std::shared_ptr<string> index_ = nullptr;
    // The language.
    std::shared_ptr<string> lang_ = nullptr;
    // The number of frames.
    std::shared_ptr<string> numFrames_ = nullptr;
    // The codec profile.
    std::shared_ptr<string> profile_ = nullptr;
    // The sampling format.
    std::shared_ptr<string> sampleFmt_ = nullptr;
    // The sampling rate.
    std::shared_ptr<string> sampleRate_ = nullptr;
    // The start time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The time base.
    std::shared_ptr<string> timebase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
