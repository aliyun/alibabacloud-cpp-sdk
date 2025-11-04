// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOFILEINFOLISTSUBTITLESTREAMINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAINFORESPONSEBODYMEDIAINFOFILEINFOLISTSUBTITLESTREAMINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CodecLongName, codecLongName_);
      DARABONBA_PTR_TO_JSON(CodecName, codecName_);
      DARABONBA_PTR_TO_JSON(CodecTag, codecTag_);
      DARABONBA_PTR_TO_JSON(CodecTagString, codecTagString_);
      DARABONBA_PTR_TO_JSON(CodecTimeBase, codecTimeBase_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Timebase, timebase_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CodecLongName, codecLongName_);
      DARABONBA_PTR_FROM_JSON(CodecName, codecName_);
      DARABONBA_PTR_FROM_JSON(CodecTag, codecTag_);
      DARABONBA_PTR_FROM_JSON(CodecTagString, codecTagString_);
      DARABONBA_PTR_FROM_JSON(CodecTimeBase, codecTimeBase_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Timebase, timebase_);
    };
    GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList() = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList(const GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList &) = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList(GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList &&) = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList() = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList& operator=(const GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList &) = default ;
    GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList& operator=(GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codecLongName_ == nullptr
        && return this->codecName_ == nullptr && return this->codecTag_ == nullptr && return this->codecTagString_ == nullptr && return this->codecTimeBase_ == nullptr && return this->duration_ == nullptr
        && return this->index_ == nullptr && return this->lang_ == nullptr && return this->startTime_ == nullptr && return this->timebase_ == nullptr; };
    // codecLongName Field Functions 
    bool hasCodecLongName() const { return this->codecLongName_ != nullptr;};
    void deleteCodecLongName() { this->codecLongName_ = nullptr;};
    inline string codecLongName() const { DARABONBA_PTR_GET_DEFAULT(codecLongName_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList& setCodecLongName(string codecLongName) { DARABONBA_PTR_SET_VALUE(codecLongName_, codecLongName) };


    // codecName Field Functions 
    bool hasCodecName() const { return this->codecName_ != nullptr;};
    void deleteCodecName() { this->codecName_ = nullptr;};
    inline string codecName() const { DARABONBA_PTR_GET_DEFAULT(codecName_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList& setCodecName(string codecName) { DARABONBA_PTR_SET_VALUE(codecName_, codecName) };


    // codecTag Field Functions 
    bool hasCodecTag() const { return this->codecTag_ != nullptr;};
    void deleteCodecTag() { this->codecTag_ = nullptr;};
    inline string codecTag() const { DARABONBA_PTR_GET_DEFAULT(codecTag_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList& setCodecTag(string codecTag) { DARABONBA_PTR_SET_VALUE(codecTag_, codecTag) };


    // codecTagString Field Functions 
    bool hasCodecTagString() const { return this->codecTagString_ != nullptr;};
    void deleteCodecTagString() { this->codecTagString_ = nullptr;};
    inline string codecTagString() const { DARABONBA_PTR_GET_DEFAULT(codecTagString_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList& setCodecTagString(string codecTagString) { DARABONBA_PTR_SET_VALUE(codecTagString_, codecTagString) };


    // codecTimeBase Field Functions 
    bool hasCodecTimeBase() const { return this->codecTimeBase_ != nullptr;};
    void deleteCodecTimeBase() { this->codecTimeBase_ = nullptr;};
    inline string codecTimeBase() const { DARABONBA_PTR_GET_DEFAULT(codecTimeBase_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList& setCodecTimeBase(string codecTimeBase) { DARABONBA_PTR_SET_VALUE(codecTimeBase_, codecTimeBase) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline string index() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timebase Field Functions 
    bool hasTimebase() const { return this->timebase_ != nullptr;};
    void deleteTimebase() { this->timebase_ = nullptr;};
    inline string timebase() const { DARABONBA_PTR_GET_DEFAULT(timebase_, "") };
    inline GetMediaInfoResponseBodyMediaInfoFileInfoListSubtitleStreamInfoList& setTimebase(string timebase) { DARABONBA_PTR_SET_VALUE(timebase_, timebase) };


  protected:
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
    // The sequence number of the subtitle track.
    std::shared_ptr<string> index_ = nullptr;
    // The language.
    std::shared_ptr<string> lang_ = nullptr;
    // The start time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The time base.
    std::shared_ptr<string> timebase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
