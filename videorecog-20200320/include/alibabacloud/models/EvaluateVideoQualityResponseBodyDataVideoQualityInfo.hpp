// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEVIDEOQUALITYRESPONSEBODYDATAVIDEOQUALITYINFO_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEVIDEOQUALITYRESPONSEBODYDATAVIDEOQUALITYINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class EvaluateVideoQualityResponseBodyDataVideoQualityInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateVideoQualityResponseBodyDataVideoQualityInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Blurriness, blurriness_);
      DARABONBA_PTR_TO_JSON(ColorContrast, colorContrast_);
      DARABONBA_PTR_TO_JSON(ColorSaturation, colorSaturation_);
      DARABONBA_PTR_TO_JSON(Colorfulness, colorfulness_);
      DARABONBA_PTR_TO_JSON(CompressiveStrength, compressiveStrength_);
      DARABONBA_PTR_TO_JSON(Luminance, luminance_);
      DARABONBA_PTR_TO_JSON(MosScore, mosScore_);
      DARABONBA_PTR_TO_JSON(NoiseIntensity, noiseIntensity_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateVideoQualityResponseBodyDataVideoQualityInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Blurriness, blurriness_);
      DARABONBA_PTR_FROM_JSON(ColorContrast, colorContrast_);
      DARABONBA_PTR_FROM_JSON(ColorSaturation, colorSaturation_);
      DARABONBA_PTR_FROM_JSON(Colorfulness, colorfulness_);
      DARABONBA_PTR_FROM_JSON(CompressiveStrength, compressiveStrength_);
      DARABONBA_PTR_FROM_JSON(Luminance, luminance_);
      DARABONBA_PTR_FROM_JSON(MosScore, mosScore_);
      DARABONBA_PTR_FROM_JSON(NoiseIntensity, noiseIntensity_);
    };
    EvaluateVideoQualityResponseBodyDataVideoQualityInfo() = default ;
    EvaluateVideoQualityResponseBodyDataVideoQualityInfo(const EvaluateVideoQualityResponseBodyDataVideoQualityInfo &) = default ;
    EvaluateVideoQualityResponseBodyDataVideoQualityInfo(EvaluateVideoQualityResponseBodyDataVideoQualityInfo &&) = default ;
    EvaluateVideoQualityResponseBodyDataVideoQualityInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateVideoQualityResponseBodyDataVideoQualityInfo() = default ;
    EvaluateVideoQualityResponseBodyDataVideoQualityInfo& operator=(const EvaluateVideoQualityResponseBodyDataVideoQualityInfo &) = default ;
    EvaluateVideoQualityResponseBodyDataVideoQualityInfo& operator=(EvaluateVideoQualityResponseBodyDataVideoQualityInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blurriness_ != nullptr
        && this->colorContrast_ != nullptr && this->colorSaturation_ != nullptr && this->colorfulness_ != nullptr && this->compressiveStrength_ != nullptr && this->luminance_ != nullptr
        && this->mosScore_ != nullptr && this->noiseIntensity_ != nullptr; };
    // blurriness Field Functions 
    bool hasBlurriness() const { return this->blurriness_ != nullptr;};
    void deleteBlurriness() { this->blurriness_ = nullptr;};
    inline float blurriness() const { DARABONBA_PTR_GET_DEFAULT(blurriness_, 0.0) };
    inline EvaluateVideoQualityResponseBodyDataVideoQualityInfo& setBlurriness(float blurriness) { DARABONBA_PTR_SET_VALUE(blurriness_, blurriness) };


    // colorContrast Field Functions 
    bool hasColorContrast() const { return this->colorContrast_ != nullptr;};
    void deleteColorContrast() { this->colorContrast_ = nullptr;};
    inline float colorContrast() const { DARABONBA_PTR_GET_DEFAULT(colorContrast_, 0.0) };
    inline EvaluateVideoQualityResponseBodyDataVideoQualityInfo& setColorContrast(float colorContrast) { DARABONBA_PTR_SET_VALUE(colorContrast_, colorContrast) };


    // colorSaturation Field Functions 
    bool hasColorSaturation() const { return this->colorSaturation_ != nullptr;};
    void deleteColorSaturation() { this->colorSaturation_ = nullptr;};
    inline float colorSaturation() const { DARABONBA_PTR_GET_DEFAULT(colorSaturation_, 0.0) };
    inline EvaluateVideoQualityResponseBodyDataVideoQualityInfo& setColorSaturation(float colorSaturation) { DARABONBA_PTR_SET_VALUE(colorSaturation_, colorSaturation) };


    // colorfulness Field Functions 
    bool hasColorfulness() const { return this->colorfulness_ != nullptr;};
    void deleteColorfulness() { this->colorfulness_ = nullptr;};
    inline float colorfulness() const { DARABONBA_PTR_GET_DEFAULT(colorfulness_, 0.0) };
    inline EvaluateVideoQualityResponseBodyDataVideoQualityInfo& setColorfulness(float colorfulness) { DARABONBA_PTR_SET_VALUE(colorfulness_, colorfulness) };


    // compressiveStrength Field Functions 
    bool hasCompressiveStrength() const { return this->compressiveStrength_ != nullptr;};
    void deleteCompressiveStrength() { this->compressiveStrength_ = nullptr;};
    inline float compressiveStrength() const { DARABONBA_PTR_GET_DEFAULT(compressiveStrength_, 0.0) };
    inline EvaluateVideoQualityResponseBodyDataVideoQualityInfo& setCompressiveStrength(float compressiveStrength) { DARABONBA_PTR_SET_VALUE(compressiveStrength_, compressiveStrength) };


    // luminance Field Functions 
    bool hasLuminance() const { return this->luminance_ != nullptr;};
    void deleteLuminance() { this->luminance_ = nullptr;};
    inline float luminance() const { DARABONBA_PTR_GET_DEFAULT(luminance_, 0.0) };
    inline EvaluateVideoQualityResponseBodyDataVideoQualityInfo& setLuminance(float luminance) { DARABONBA_PTR_SET_VALUE(luminance_, luminance) };


    // mosScore Field Functions 
    bool hasMosScore() const { return this->mosScore_ != nullptr;};
    void deleteMosScore() { this->mosScore_ = nullptr;};
    inline float mosScore() const { DARABONBA_PTR_GET_DEFAULT(mosScore_, 0.0) };
    inline EvaluateVideoQualityResponseBodyDataVideoQualityInfo& setMosScore(float mosScore) { DARABONBA_PTR_SET_VALUE(mosScore_, mosScore) };


    // noiseIntensity Field Functions 
    bool hasNoiseIntensity() const { return this->noiseIntensity_ != nullptr;};
    void deleteNoiseIntensity() { this->noiseIntensity_ = nullptr;};
    inline float noiseIntensity() const { DARABONBA_PTR_GET_DEFAULT(noiseIntensity_, 0.0) };
    inline EvaluateVideoQualityResponseBodyDataVideoQualityInfo& setNoiseIntensity(float noiseIntensity) { DARABONBA_PTR_SET_VALUE(noiseIntensity_, noiseIntensity) };


  protected:
    std::shared_ptr<float> blurriness_ = nullptr;
    std::shared_ptr<float> colorContrast_ = nullptr;
    std::shared_ptr<float> colorSaturation_ = nullptr;
    std::shared_ptr<float> colorfulness_ = nullptr;
    std::shared_ptr<float> compressiveStrength_ = nullptr;
    std::shared_ptr<float> luminance_ = nullptr;
    std::shared_ptr<float> mosScore_ = nullptr;
    std::shared_ptr<float> noiseIntensity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
