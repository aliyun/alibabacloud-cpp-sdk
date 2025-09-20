// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETVIDEOFILTERVIDEODESENSITIZATIONLICENSEPLATE_HPP_
#define ALIBABACLOUD_MODELS_TARGETVIDEOFILTERVIDEODESENSITIZATIONLICENSEPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetVideoFilterVideoDesensitizationLicensePlate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetVideoFilterVideoDesensitizationLicensePlate& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(MinSize, minSize_);
    };
    friend void from_json(const Darabonba::Json& j, TargetVideoFilterVideoDesensitizationLicensePlate& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(MinSize, minSize_);
    };
    TargetVideoFilterVideoDesensitizationLicensePlate() = default ;
    TargetVideoFilterVideoDesensitizationLicensePlate(const TargetVideoFilterVideoDesensitizationLicensePlate &) = default ;
    TargetVideoFilterVideoDesensitizationLicensePlate(TargetVideoFilterVideoDesensitizationLicensePlate &&) = default ;
    TargetVideoFilterVideoDesensitizationLicensePlate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetVideoFilterVideoDesensitizationLicensePlate() = default ;
    TargetVideoFilterVideoDesensitizationLicensePlate& operator=(const TargetVideoFilterVideoDesensitizationLicensePlate &) = default ;
    TargetVideoFilterVideoDesensitizationLicensePlate& operator=(TargetVideoFilterVideoDesensitizationLicensePlate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confidence_ != nullptr
        && this->minSize_ != nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline TargetVideoFilterVideoDesensitizationLicensePlate& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // minSize Field Functions 
    bool hasMinSize() const { return this->minSize_ != nullptr;};
    void deleteMinSize() { this->minSize_ = nullptr;};
    inline int32_t minSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
    inline TargetVideoFilterVideoDesensitizationLicensePlate& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


  protected:
    std::shared_ptr<float> confidence_ = nullptr;
    std::shared_ptr<int32_t> minSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
