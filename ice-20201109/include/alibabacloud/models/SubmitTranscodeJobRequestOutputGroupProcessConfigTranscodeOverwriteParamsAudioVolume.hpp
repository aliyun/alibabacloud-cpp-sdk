// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMSAUDIOVOLUME_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMSAUDIOVOLUME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume& obj) { 
      DARABONBA_PTR_TO_JSON(IntegratedLoudnessTarget, integratedLoudnessTarget_);
      DARABONBA_PTR_TO_JSON(LoudnessRangeTarget, loudnessRangeTarget_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(TruePeak, truePeak_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume& obj) { 
      DARABONBA_PTR_FROM_JSON(IntegratedLoudnessTarget, integratedLoudnessTarget_);
      DARABONBA_PTR_FROM_JSON(LoudnessRangeTarget, loudnessRangeTarget_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(TruePeak, truePeak_);
    };
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume(const SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume(SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume &&) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume& operator=(const SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume& operator=(SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->integratedLoudnessTarget_ == nullptr
        && return this->loudnessRangeTarget_ == nullptr && return this->method_ == nullptr && return this->truePeak_ == nullptr; };
    // integratedLoudnessTarget Field Functions 
    bool hasIntegratedLoudnessTarget() const { return this->integratedLoudnessTarget_ != nullptr;};
    void deleteIntegratedLoudnessTarget() { this->integratedLoudnessTarget_ = nullptr;};
    inline string integratedLoudnessTarget() const { DARABONBA_PTR_GET_DEFAULT(integratedLoudnessTarget_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume& setIntegratedLoudnessTarget(string integratedLoudnessTarget) { DARABONBA_PTR_SET_VALUE(integratedLoudnessTarget_, integratedLoudnessTarget) };


    // loudnessRangeTarget Field Functions 
    bool hasLoudnessRangeTarget() const { return this->loudnessRangeTarget_ != nullptr;};
    void deleteLoudnessRangeTarget() { this->loudnessRangeTarget_ = nullptr;};
    inline string loudnessRangeTarget() const { DARABONBA_PTR_GET_DEFAULT(loudnessRangeTarget_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume& setLoudnessRangeTarget(string loudnessRangeTarget) { DARABONBA_PTR_SET_VALUE(loudnessRangeTarget_, loudnessRangeTarget) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // truePeak Field Functions 
    bool hasTruePeak() const { return this->truePeak_ != nullptr;};
    void deleteTruePeak() { this->truePeak_ = nullptr;};
    inline string truePeak() const { DARABONBA_PTR_GET_DEFAULT(truePeak_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume& setTruePeak(string truePeak) { DARABONBA_PTR_SET_VALUE(truePeak_, truePeak) };


  protected:
    // The output volume.
    std::shared_ptr<string> integratedLoudnessTarget_ = nullptr;
    // The volume range.
    std::shared_ptr<string> loudnessRangeTarget_ = nullptr;
    // The volume adjustment method. Valid values:
    std::shared_ptr<string> method_ = nullptr;
    // The peak volume.
    std::shared_ptr<string> truePeak_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
