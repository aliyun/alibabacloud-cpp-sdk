// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTEMPLATELISTRESPONSEBODYTEMPLATELISTTEMPLATEAUDIOVOLUME_HPP_
#define ALIBABACLOUD_MODELS_QUERYTEMPLATELISTRESPONSEBODYTEMPLATELISTTEMPLATEAUDIOVOLUME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryTemplateListResponseBodyTemplateListTemplateAudioVolume : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTemplateListResponseBodyTemplateListTemplateAudioVolume& obj) { 
      DARABONBA_PTR_TO_JSON(IntegratedLoudnessTarget, integratedLoudnessTarget_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(LoudnessRangeTarget, loudnessRangeTarget_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(PeakLevel, peakLevel_);
      DARABONBA_PTR_TO_JSON(TruePeak, truePeak_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTemplateListResponseBodyTemplateListTemplateAudioVolume& obj) { 
      DARABONBA_PTR_FROM_JSON(IntegratedLoudnessTarget, integratedLoudnessTarget_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(LoudnessRangeTarget, loudnessRangeTarget_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(PeakLevel, peakLevel_);
      DARABONBA_PTR_FROM_JSON(TruePeak, truePeak_);
    };
    QueryTemplateListResponseBodyTemplateListTemplateAudioVolume() = default ;
    QueryTemplateListResponseBodyTemplateListTemplateAudioVolume(const QueryTemplateListResponseBodyTemplateListTemplateAudioVolume &) = default ;
    QueryTemplateListResponseBodyTemplateListTemplateAudioVolume(QueryTemplateListResponseBodyTemplateListTemplateAudioVolume &&) = default ;
    QueryTemplateListResponseBodyTemplateListTemplateAudioVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTemplateListResponseBodyTemplateListTemplateAudioVolume() = default ;
    QueryTemplateListResponseBodyTemplateListTemplateAudioVolume& operator=(const QueryTemplateListResponseBodyTemplateListTemplateAudioVolume &) = default ;
    QueryTemplateListResponseBodyTemplateListTemplateAudioVolume& operator=(QueryTemplateListResponseBodyTemplateListTemplateAudioVolume &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->integratedLoudnessTarget_ == nullptr
        && return this->level_ == nullptr && return this->loudnessRangeTarget_ == nullptr && return this->method_ == nullptr && return this->peakLevel_ == nullptr && return this->truePeak_ == nullptr; };
    // integratedLoudnessTarget Field Functions 
    bool hasIntegratedLoudnessTarget() const { return this->integratedLoudnessTarget_ != nullptr;};
    void deleteIntegratedLoudnessTarget() { this->integratedLoudnessTarget_ = nullptr;};
    inline string integratedLoudnessTarget() const { DARABONBA_PTR_GET_DEFAULT(integratedLoudnessTarget_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplateAudioVolume& setIntegratedLoudnessTarget(string integratedLoudnessTarget) { DARABONBA_PTR_SET_VALUE(integratedLoudnessTarget_, integratedLoudnessTarget) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplateAudioVolume& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // loudnessRangeTarget Field Functions 
    bool hasLoudnessRangeTarget() const { return this->loudnessRangeTarget_ != nullptr;};
    void deleteLoudnessRangeTarget() { this->loudnessRangeTarget_ = nullptr;};
    inline string loudnessRangeTarget() const { DARABONBA_PTR_GET_DEFAULT(loudnessRangeTarget_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplateAudioVolume& setLoudnessRangeTarget(string loudnessRangeTarget) { DARABONBA_PTR_SET_VALUE(loudnessRangeTarget_, loudnessRangeTarget) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplateAudioVolume& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // peakLevel Field Functions 
    bool hasPeakLevel() const { return this->peakLevel_ != nullptr;};
    void deletePeakLevel() { this->peakLevel_ = nullptr;};
    inline string peakLevel() const { DARABONBA_PTR_GET_DEFAULT(peakLevel_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplateAudioVolume& setPeakLevel(string peakLevel) { DARABONBA_PTR_SET_VALUE(peakLevel_, peakLevel) };


    // truePeak Field Functions 
    bool hasTruePeak() const { return this->truePeak_ != nullptr;};
    void deleteTruePeak() { this->truePeak_ = nullptr;};
    inline string truePeak() const { DARABONBA_PTR_GET_DEFAULT(truePeak_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplateAudioVolume& setTruePeak(string truePeak) { DARABONBA_PTR_SET_VALUE(truePeak_, truePeak) };


  protected:
    // The output volume.
    // 
    // *   This parameter takes effect only if the value of Method is dynamic.
    // *   Unit: dB.
    // *   Valid values: [-70,-5].
    // *   Default value: -6.
    std::shared_ptr<string> integratedLoudnessTarget_ = nullptr;
    // The increased volume relative to the volume of the input audio.
    // 
    // *   This parameter takes effect only if the value of Method is linear.
    // *   Unit: dB.
    // *   Valid values: less than or equal to 20.
    // *   Default value: -20.
    std::shared_ptr<string> level_ = nullptr;
    // The range of the volume relative to the output volume.
    // 
    // *   This parameter takes effect only if the value of Method is dynamic.
    // *   Unit: dB.
    // *   Valid values: [1,20].
    // *   Default value: 8.
    std::shared_ptr<string> loudnessRangeTarget_ = nullptr;
    // The method that is used to adjust the volume. Valid values:
    // 
    // *   **auto**
    // *   **dynamic**
    // *   **linear**
    // *   Default value: dynamic.
    std::shared_ptr<string> method_ = nullptr;
    // The volume adjustment coefficient.
    // 
    // This parameter takes effect only if the value of Method is adaptive.
    // 
    // Valid values: [0,1].
    // 
    // Default value: 0.9.
    std::shared_ptr<string> peakLevel_ = nullptr;
    // The peak volume.
    // 
    // *   This parameter takes effect only if the value of Method is dynamic.
    // *   Unit: dB.
    // *   Valid values: [-9,0].
    // *   Default value: -1.
    std::shared_ptr<string> truePeak_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
