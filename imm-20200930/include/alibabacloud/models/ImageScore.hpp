// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGESCORE_HPP_
#define ALIBABACLOUD_MODELS_IMAGESCORE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ImageScore : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageScore& obj) { 
      DARABONBA_PTR_TO_JSON(OverallQualityScore, overallQualityScore_);
    };
    friend void from_json(const Darabonba::Json& j, ImageScore& obj) { 
      DARABONBA_PTR_FROM_JSON(OverallQualityScore, overallQualityScore_);
    };
    ImageScore() = default ;
    ImageScore(const ImageScore &) = default ;
    ImageScore(ImageScore &&) = default ;
    ImageScore(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageScore() = default ;
    ImageScore& operator=(const ImageScore &) = default ;
    ImageScore& operator=(ImageScore &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->overallQualityScore_ != nullptr; };
    // overallQualityScore Field Functions 
    bool hasOverallQualityScore() const { return this->overallQualityScore_ != nullptr;};
    void deleteOverallQualityScore() { this->overallQualityScore_ = nullptr;};
    inline float overallQualityScore() const { DARABONBA_PTR_GET_DEFAULT(overallQualityScore_, 0.0) };
    inline ImageScore& setOverallQualityScore(float overallQualityScore) { DARABONBA_PTR_SET_VALUE(overallQualityScore_, overallQualityScore) };


  protected:
    std::shared_ptr<float> overallQualityScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
