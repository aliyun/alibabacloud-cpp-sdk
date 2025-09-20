// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETAUDIO_HPP_
#define ALIBABACLOUD_MODELS_TARGETAUDIO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TargetAudioFilterAudio.hpp>
#include <vector>
#include <alibabacloud/models/TargetAudioTranscodeAudio.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetAudio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetAudio& obj) { 
      DARABONBA_PTR_TO_JSON(DisableAudio, disableAudio_);
      DARABONBA_PTR_TO_JSON(FilterAudio, filterAudio_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(TranscodeAudio, transcodeAudio_);
    };
    friend void from_json(const Darabonba::Json& j, TargetAudio& obj) { 
      DARABONBA_PTR_FROM_JSON(DisableAudio, disableAudio_);
      DARABONBA_PTR_FROM_JSON(FilterAudio, filterAudio_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(TranscodeAudio, transcodeAudio_);
    };
    TargetAudio() = default ;
    TargetAudio(const TargetAudio &) = default ;
    TargetAudio(TargetAudio &&) = default ;
    TargetAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetAudio() = default ;
    TargetAudio& operator=(const TargetAudio &) = default ;
    TargetAudio& operator=(TargetAudio &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disableAudio_ != nullptr
        && this->filterAudio_ != nullptr && this->stream_ != nullptr && this->transcodeAudio_ != nullptr; };
    // disableAudio Field Functions 
    bool hasDisableAudio() const { return this->disableAudio_ != nullptr;};
    void deleteDisableAudio() { this->disableAudio_ = nullptr;};
    inline bool disableAudio() const { DARABONBA_PTR_GET_DEFAULT(disableAudio_, false) };
    inline TargetAudio& setDisableAudio(bool disableAudio) { DARABONBA_PTR_SET_VALUE(disableAudio_, disableAudio) };


    // filterAudio Field Functions 
    bool hasFilterAudio() const { return this->filterAudio_ != nullptr;};
    void deleteFilterAudio() { this->filterAudio_ = nullptr;};
    inline const TargetAudioFilterAudio & filterAudio() const { DARABONBA_PTR_GET_CONST(filterAudio_, TargetAudioFilterAudio) };
    inline TargetAudioFilterAudio filterAudio() { DARABONBA_PTR_GET(filterAudio_, TargetAudioFilterAudio) };
    inline TargetAudio& setFilterAudio(const TargetAudioFilterAudio & filterAudio) { DARABONBA_PTR_SET_VALUE(filterAudio_, filterAudio) };
    inline TargetAudio& setFilterAudio(TargetAudioFilterAudio && filterAudio) { DARABONBA_PTR_SET_RVALUE(filterAudio_, filterAudio) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline const vector<int64_t> & stream() const { DARABONBA_PTR_GET_CONST(stream_, vector<int64_t>) };
    inline vector<int64_t> stream() { DARABONBA_PTR_GET(stream_, vector<int64_t>) };
    inline TargetAudio& setStream(const vector<int64_t> & stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };
    inline TargetAudio& setStream(vector<int64_t> && stream) { DARABONBA_PTR_SET_RVALUE(stream_, stream) };


    // transcodeAudio Field Functions 
    bool hasTranscodeAudio() const { return this->transcodeAudio_ != nullptr;};
    void deleteTranscodeAudio() { this->transcodeAudio_ = nullptr;};
    inline const TargetAudioTranscodeAudio & transcodeAudio() const { DARABONBA_PTR_GET_CONST(transcodeAudio_, TargetAudioTranscodeAudio) };
    inline TargetAudioTranscodeAudio transcodeAudio() { DARABONBA_PTR_GET(transcodeAudio_, TargetAudioTranscodeAudio) };
    inline TargetAudio& setTranscodeAudio(const TargetAudioTranscodeAudio & transcodeAudio) { DARABONBA_PTR_SET_VALUE(transcodeAudio_, transcodeAudio) };
    inline TargetAudio& setTranscodeAudio(TargetAudioTranscodeAudio && transcodeAudio) { DARABONBA_PTR_SET_RVALUE(transcodeAudio_, transcodeAudio) };


  protected:
    std::shared_ptr<bool> disableAudio_ = nullptr;
    std::shared_ptr<TargetAudioFilterAudio> filterAudio_ = nullptr;
    std::shared_ptr<vector<int64_t>> stream_ = nullptr;
    std::shared_ptr<TargetAudioTranscodeAudio> transcodeAudio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
