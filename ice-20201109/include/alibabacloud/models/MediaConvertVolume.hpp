// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTVOLUME_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTVOLUME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertVolume : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertVolume& obj) { 
      DARABONBA_PTR_TO_JSON(IntegratedLoudnessTarget, integratedLoudnessTarget_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(LoudnessRangeTarget, loudnessRangeTarget_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(TruePeak, truePeak_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertVolume& obj) { 
      DARABONBA_PTR_FROM_JSON(IntegratedLoudnessTarget, integratedLoudnessTarget_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(LoudnessRangeTarget, loudnessRangeTarget_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(TruePeak, truePeak_);
    };
    MediaConvertVolume() = default ;
    MediaConvertVolume(const MediaConvertVolume &) = default ;
    MediaConvertVolume(MediaConvertVolume &&) = default ;
    MediaConvertVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertVolume() = default ;
    MediaConvertVolume& operator=(const MediaConvertVolume &) = default ;
    MediaConvertVolume& operator=(MediaConvertVolume &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->integratedLoudnessTarget_ == nullptr
        && return this->level_ == nullptr && return this->loudnessRangeTarget_ == nullptr && return this->method_ == nullptr && return this->truePeak_ == nullptr; };
    // integratedLoudnessTarget Field Functions 
    bool hasIntegratedLoudnessTarget() const { return this->integratedLoudnessTarget_ != nullptr;};
    void deleteIntegratedLoudnessTarget() { this->integratedLoudnessTarget_ = nullptr;};
    inline int32_t integratedLoudnessTarget() const { DARABONBA_PTR_GET_DEFAULT(integratedLoudnessTarget_, 0) };
    inline MediaConvertVolume& setIntegratedLoudnessTarget(int32_t integratedLoudnessTarget) { DARABONBA_PTR_SET_VALUE(integratedLoudnessTarget_, integratedLoudnessTarget) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline MediaConvertVolume& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // loudnessRangeTarget Field Functions 
    bool hasLoudnessRangeTarget() const { return this->loudnessRangeTarget_ != nullptr;};
    void deleteLoudnessRangeTarget() { this->loudnessRangeTarget_ = nullptr;};
    inline int32_t loudnessRangeTarget() const { DARABONBA_PTR_GET_DEFAULT(loudnessRangeTarget_, 0) };
    inline MediaConvertVolume& setLoudnessRangeTarget(int32_t loudnessRangeTarget) { DARABONBA_PTR_SET_VALUE(loudnessRangeTarget_, loudnessRangeTarget) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline MediaConvertVolume& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // truePeak Field Functions 
    bool hasTruePeak() const { return this->truePeak_ != nullptr;};
    void deleteTruePeak() { this->truePeak_ = nullptr;};
    inline int32_t truePeak() const { DARABONBA_PTR_GET_DEFAULT(truePeak_, 0) };
    inline MediaConvertVolume& setTruePeak(int32_t truePeak) { DARABONBA_PTR_SET_VALUE(truePeak_, truePeak) };


  protected:
    std::shared_ptr<int32_t> integratedLoudnessTarget_ = nullptr;
    std::shared_ptr<int32_t> level_ = nullptr;
    std::shared_ptr<int32_t> loudnessRangeTarget_ = nullptr;
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<int32_t> truePeak_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
