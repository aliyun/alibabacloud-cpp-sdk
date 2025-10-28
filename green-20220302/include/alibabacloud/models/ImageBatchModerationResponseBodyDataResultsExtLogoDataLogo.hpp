// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTSEXTLOGODATALOGO_HPP_
#define ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTSEXTLOGODATALOGO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo& obj) { 
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo& obj) { 
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo() = default ;
    ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo(const ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo &) = default ;
    ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo(ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo &&) = default ;
    ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo() = default ;
    ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo& operator=(const ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo &) = default ;
    ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo& operator=(ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo &&) = default ;
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
    inline ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ImageBatchModerationResponseBodyDataResultsExtLogoDataLogo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Confidence score, from 0 to 100, rounded to two decimal places.
    std::shared_ptr<float> confidence_ = nullptr;
    // Identify the category.
    std::shared_ptr<string> label_ = nullptr;
    // identifier  name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
