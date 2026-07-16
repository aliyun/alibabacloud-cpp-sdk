// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEINSIGHTSCAPTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_IMAGEINSIGHTSCAPTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ImageInsightsCaptionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageInsightsCaptionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
    };
    friend void from_json(const Darabonba::Json& j, ImageInsightsCaptionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
    };
    ImageInsightsCaptionConfig() = default ;
    ImageInsightsCaptionConfig(const ImageInsightsCaptionConfig &) = default ;
    ImageInsightsCaptionConfig(ImageInsightsCaptionConfig &&) = default ;
    ImageInsightsCaptionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageInsightsCaptionConfig() = default ;
    ImageInsightsCaptionConfig& operator=(const ImageInsightsCaptionConfig &) = default ;
    ImageInsightsCaptionConfig& operator=(ImageInsightsCaptionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->prompt_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ImageInsightsCaptionConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline ImageInsightsCaptionConfig& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


  protected:
    // Specifies whether to enable this feature.
    shared_ptr<bool> enable_ {};
    // The prompt.
    shared_ptr<string> prompt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
