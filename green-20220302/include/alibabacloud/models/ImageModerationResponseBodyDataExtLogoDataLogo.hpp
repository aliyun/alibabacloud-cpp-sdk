// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTLOGODATALOGO_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTLOGODATALOGO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtLogoDataLogo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtLogoDataLogo& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtLogoDataLogo& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ImageModerationResponseBodyDataExtLogoDataLogo() = default ;
    ImageModerationResponseBodyDataExtLogoDataLogo(const ImageModerationResponseBodyDataExtLogoDataLogo &) = default ;
    ImageModerationResponseBodyDataExtLogoDataLogo(ImageModerationResponseBodyDataExtLogoDataLogo &&) = default ;
    ImageModerationResponseBodyDataExtLogoDataLogo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtLogoDataLogo() = default ;
    ImageModerationResponseBodyDataExtLogoDataLogo& operator=(const ImageModerationResponseBodyDataExtLogoDataLogo &) = default ;
    ImageModerationResponseBodyDataExtLogoDataLogo& operator=(ImageModerationResponseBodyDataExtLogoDataLogo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confidence_ == nullptr
        && return this->label_ == nullptr && return this->name_ == nullptr; };
    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline float confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
    inline ImageModerationResponseBodyDataExtLogoDataLogo& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ImageModerationResponseBodyDataExtLogoDataLogo& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImageModerationResponseBodyDataExtLogoDataLogo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The score of the confidence level. Valid values: 0 to 100. The value is accurate to two decimal places. Some labels do not have scores of confidence levels.
    std::shared_ptr<float> confidence_ = nullptr;
    // Logo category.
    std::shared_ptr<string> label_ = nullptr;
    // Logo name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
