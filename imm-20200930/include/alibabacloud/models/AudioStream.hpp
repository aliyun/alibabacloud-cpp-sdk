// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUDIOSTREAM_HPP_
#define ALIBABACLOUD_MODELS_AUDIOSTREAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
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
      DARABONBA_PTR_TO_JSON(FrameCount, frameCount_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Lyric, lyric_);
      DARABONBA_PTR_TO_JSON(SampleFormat, sampleFormat_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TimeBase, timeBase_);
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
      DARABONBA_PTR_FROM_JSON(FrameCount, frameCount_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Lyric, lyric_);
      DARABONBA_PTR_FROM_JSON(SampleFormat, sampleFormat_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TimeBase, timeBase_);
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
        && this->codecTagString_ == nullptr && this->codecTimeBase_ == nullptr && this->duration_ == nullptr && this->frameCount_ == nullptr && this->index_ == nullptr
        && this->language_ == nullptr && this->lyric_ == nullptr && this->sampleFormat_ == nullptr && this->sampleRate_ == nullptr && this->startTime_ == nullptr
        && this->timeBase_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int64_t getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0L) };
    inline AudioStream& setBitrate(int64_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // channelLayout Field Functions 
    bool hasChannelLayout() const { return this->channelLayout_ != nullptr;};
    void deleteChannelLayout() { this->channelLayout_ = nullptr;};
    inline string getChannelLayout() const { DARABONBA_PTR_GET_DEFAULT(channelLayout_, "") };
    inline AudioStream& setChannelLayout(string channelLayout) { DARABONBA_PTR_SET_VALUE(channelLayout_, channelLayout) };


    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline int64_t getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, 0L) };
    inline AudioStream& setChannels(int64_t channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


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
    inline double getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline AudioStream& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // frameCount Field Functions 
    bool hasFrameCount() const { return this->frameCount_ != nullptr;};
    void deleteFrameCount() { this->frameCount_ = nullptr;};
    inline int64_t getFrameCount() const { DARABONBA_PTR_GET_DEFAULT(frameCount_, 0L) };
    inline AudioStream& setFrameCount(int64_t frameCount) { DARABONBA_PTR_SET_VALUE(frameCount_, frameCount) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline AudioStream& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline AudioStream& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // lyric Field Functions 
    bool hasLyric() const { return this->lyric_ != nullptr;};
    void deleteLyric() { this->lyric_ = nullptr;};
    inline string getLyric() const { DARABONBA_PTR_GET_DEFAULT(lyric_, "") };
    inline AudioStream& setLyric(string lyric) { DARABONBA_PTR_SET_VALUE(lyric_, lyric) };


    // sampleFormat Field Functions 
    bool hasSampleFormat() const { return this->sampleFormat_ != nullptr;};
    void deleteSampleFormat() { this->sampleFormat_ = nullptr;};
    inline string getSampleFormat() const { DARABONBA_PTR_GET_DEFAULT(sampleFormat_, "") };
    inline AudioStream& setSampleFormat(string sampleFormat) { DARABONBA_PTR_SET_VALUE(sampleFormat_, sampleFormat) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline int64_t getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0L) };
    inline AudioStream& setSampleRate(int64_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline double getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline AudioStream& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeBase Field Functions 
    bool hasTimeBase() const { return this->timeBase_ != nullptr;};
    void deleteTimeBase() { this->timeBase_ = nullptr;};
    inline string getTimeBase() const { DARABONBA_PTR_GET_DEFAULT(timeBase_, "") };
    inline AudioStream& setTimeBase(string timeBase) { DARABONBA_PTR_SET_VALUE(timeBase_, timeBase) };


  protected:
    // The bitrate. Unit: bit/s.
    shared_ptr<int64_t> bitrate_ {};
    // The sound channel layout.
    shared_ptr<string> channelLayout_ {};
    // The number of sound channels.
    shared_ptr<int64_t> channels_ {};
    // The full name of the codec.
    shared_ptr<string> codecLongName_ {};
    // The abbreviated name of the codec.
    shared_ptr<string> codecName_ {};
    // The tag of the codec.
    shared_ptr<string> codecTag_ {};
    // The description of the codec tag.
    shared_ptr<string> codecTagString_ {};
    // The time base of the codec.
    shared_ptr<string> codecTimeBase_ {};
    // The duration of the audio stream in seconds.
    shared_ptr<double> duration_ {};
    // The number of frames.
    shared_ptr<int64_t> frameCount_ {};
    // The index number of the audio stream.
    shared_ptr<int64_t> index_ {};
    // The audio language in the BCP 47 standard.
    shared_ptr<string> language_ {};
    // The lyric.
    shared_ptr<string> lyric_ {};
    // The sample format.
    shared_ptr<string> sampleFormat_ {};
    // The sampling rate. Unit: Hz.
    shared_ptr<int64_t> sampleRate_ {};
    // The start time of the audio stream in seconds.
    shared_ptr<double> startTime_ {};
    // The time base.
    shared_ptr<string> timeBase_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
