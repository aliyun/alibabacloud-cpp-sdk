// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUESTTRANSCODEPARAMSBACKGROUND_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEMPUTASKREQUESTTRANSCODEPARAMSBACKGROUND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveMPUTaskRequestTranscodeParamsBackground : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveMPUTaskRequestTranscodeParamsBackground& obj) { 
      DARABONBA_PTR_TO_JSON(RenderMode, renderMode_);
      DARABONBA_PTR_TO_JSON(URL, URL_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveMPUTaskRequestTranscodeParamsBackground& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderMode, renderMode_);
      DARABONBA_PTR_FROM_JSON(URL, URL_);
    };
    UpdateLiveMPUTaskRequestTranscodeParamsBackground() = default ;
    UpdateLiveMPUTaskRequestTranscodeParamsBackground(const UpdateLiveMPUTaskRequestTranscodeParamsBackground &) = default ;
    UpdateLiveMPUTaskRequestTranscodeParamsBackground(UpdateLiveMPUTaskRequestTranscodeParamsBackground &&) = default ;
    UpdateLiveMPUTaskRequestTranscodeParamsBackground(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveMPUTaskRequestTranscodeParamsBackground() = default ;
    UpdateLiveMPUTaskRequestTranscodeParamsBackground& operator=(const UpdateLiveMPUTaskRequestTranscodeParamsBackground &) = default ;
    UpdateLiveMPUTaskRequestTranscodeParamsBackground& operator=(UpdateLiveMPUTaskRequestTranscodeParamsBackground &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->renderMode_ == nullptr
        && return this->URL_ == nullptr; };
    // renderMode Field Functions 
    bool hasRenderMode() const { return this->renderMode_ != nullptr;};
    void deleteRenderMode() { this->renderMode_ = nullptr;};
    inline string renderMode() const { DARABONBA_PTR_GET_DEFAULT(renderMode_, "") };
    inline UpdateLiveMPUTaskRequestTranscodeParamsBackground& setRenderMode(string renderMode) { DARABONBA_PTR_SET_VALUE(renderMode_, renderMode) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline string URL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
    inline UpdateLiveMPUTaskRequestTranscodeParamsBackground& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


  protected:
    // The display mode of the global background image.
    // 
    // *   **0**: scales the background image proportionally to fit the view, with black bars displayed.
    // *   **1** (default): crops the background image to fit the view.
    std::shared_ptr<string> renderMode_ = nullptr;
    // The URL of the global background image.
    std::shared_ptr<string> URL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
