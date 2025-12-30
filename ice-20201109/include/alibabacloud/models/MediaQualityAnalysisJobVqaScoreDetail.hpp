// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIAQUALITYANALYSISJOBVQASCOREDETAIL_HPP_
#define ALIBABACLOUD_MODELS_MEDIAQUALITYANALYSISJOBVQASCOREDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaQualityAnalysisJobVqaScoreDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaQualityAnalysisJobVqaScoreDetail& obj) { 
      DARABONBA_PTR_TO_JSON(IntensityValue, intensityValue_);
      DARABONBA_PTR_TO_JSON(PerceptualScore, perceptualScore_);
    };
    friend void from_json(const Darabonba::Json& j, MediaQualityAnalysisJobVqaScoreDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(IntensityValue, intensityValue_);
      DARABONBA_PTR_FROM_JSON(PerceptualScore, perceptualScore_);
    };
    MediaQualityAnalysisJobVqaScoreDetail() = default ;
    MediaQualityAnalysisJobVqaScoreDetail(const MediaQualityAnalysisJobVqaScoreDetail &) = default ;
    MediaQualityAnalysisJobVqaScoreDetail(MediaQualityAnalysisJobVqaScoreDetail &&) = default ;
    MediaQualityAnalysisJobVqaScoreDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaQualityAnalysisJobVqaScoreDetail() = default ;
    MediaQualityAnalysisJobVqaScoreDetail& operator=(const MediaQualityAnalysisJobVqaScoreDetail &) = default ;
    MediaQualityAnalysisJobVqaScoreDetail& operator=(MediaQualityAnalysisJobVqaScoreDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->intensityValue_ == nullptr
        && this->perceptualScore_ == nullptr; };
    // intensityValue Field Functions 
    bool hasIntensityValue() const { return this->intensityValue_ != nullptr;};
    void deleteIntensityValue() { this->intensityValue_ = nullptr;};
    inline double getIntensityValue() const { DARABONBA_PTR_GET_DEFAULT(intensityValue_, 0.0) };
    inline MediaQualityAnalysisJobVqaScoreDetail& setIntensityValue(double intensityValue) { DARABONBA_PTR_SET_VALUE(intensityValue_, intensityValue) };


    // perceptualScore Field Functions 
    bool hasPerceptualScore() const { return this->perceptualScore_ != nullptr;};
    void deletePerceptualScore() { this->perceptualScore_ = nullptr;};
    inline double getPerceptualScore() const { DARABONBA_PTR_GET_DEFAULT(perceptualScore_, 0.0) };
    inline MediaQualityAnalysisJobVqaScoreDetail& setPerceptualScore(double perceptualScore) { DARABONBA_PTR_SET_VALUE(perceptualScore_, perceptualScore) };


  protected:
    shared_ptr<double> intensityValue_ {};
    shared_ptr<double> perceptualScore_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
