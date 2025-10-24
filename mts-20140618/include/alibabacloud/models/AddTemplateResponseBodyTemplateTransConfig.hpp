// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODYTEMPLATETRANSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODYTEMPLATETRANSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddTemplateResponseBodyTemplateTransConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTemplateResponseBodyTemplateTransConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AdjDarMethod, adjDarMethod_);
      DARABONBA_PTR_TO_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
      DARABONBA_PTR_TO_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
      DARABONBA_PTR_TO_JSON(IsCheckReso, isCheckReso_);
      DARABONBA_PTR_TO_JSON(IsCheckResoFail, isCheckResoFail_);
      DARABONBA_PTR_TO_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
      DARABONBA_PTR_TO_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
      DARABONBA_PTR_TO_JSON(TransMode, transMode_);
    };
    friend void from_json(const Darabonba::Json& j, AddTemplateResponseBodyTemplateTransConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AdjDarMethod, adjDarMethod_);
      DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
      DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
      DARABONBA_PTR_FROM_JSON(IsCheckReso, isCheckReso_);
      DARABONBA_PTR_FROM_JSON(IsCheckResoFail, isCheckResoFail_);
      DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
      DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
      DARABONBA_PTR_FROM_JSON(TransMode, transMode_);
    };
    AddTemplateResponseBodyTemplateTransConfig() = default ;
    AddTemplateResponseBodyTemplateTransConfig(const AddTemplateResponseBodyTemplateTransConfig &) = default ;
    AddTemplateResponseBodyTemplateTransConfig(AddTemplateResponseBodyTemplateTransConfig &&) = default ;
    AddTemplateResponseBodyTemplateTransConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTemplateResponseBodyTemplateTransConfig() = default ;
    AddTemplateResponseBodyTemplateTransConfig& operator=(const AddTemplateResponseBodyTemplateTransConfig &) = default ;
    AddTemplateResponseBodyTemplateTransConfig& operator=(AddTemplateResponseBodyTemplateTransConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adjDarMethod_ == nullptr
        && return this->isCheckAudioBitrate_ == nullptr && return this->isCheckAudioBitrateFail_ == nullptr && return this->isCheckReso_ == nullptr && return this->isCheckResoFail_ == nullptr && return this->isCheckVideoBitrate_ == nullptr
        && return this->isCheckVideoBitrateFail_ == nullptr && return this->transMode_ == nullptr; };
    // adjDarMethod Field Functions 
    bool hasAdjDarMethod() const { return this->adjDarMethod_ != nullptr;};
    void deleteAdjDarMethod() { this->adjDarMethod_ = nullptr;};
    inline string adjDarMethod() const { DARABONBA_PTR_GET_DEFAULT(adjDarMethod_, "") };
    inline AddTemplateResponseBodyTemplateTransConfig& setAdjDarMethod(string adjDarMethod) { DARABONBA_PTR_SET_VALUE(adjDarMethod_, adjDarMethod) };


    // isCheckAudioBitrate Field Functions 
    bool hasIsCheckAudioBitrate() const { return this->isCheckAudioBitrate_ != nullptr;};
    void deleteIsCheckAudioBitrate() { this->isCheckAudioBitrate_ = nullptr;};
    inline string isCheckAudioBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrate_, "") };
    inline AddTemplateResponseBodyTemplateTransConfig& setIsCheckAudioBitrate(string isCheckAudioBitrate) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrate_, isCheckAudioBitrate) };


    // isCheckAudioBitrateFail Field Functions 
    bool hasIsCheckAudioBitrateFail() const { return this->isCheckAudioBitrateFail_ != nullptr;};
    void deleteIsCheckAudioBitrateFail() { this->isCheckAudioBitrateFail_ = nullptr;};
    inline string isCheckAudioBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrateFail_, "") };
    inline AddTemplateResponseBodyTemplateTransConfig& setIsCheckAudioBitrateFail(string isCheckAudioBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrateFail_, isCheckAudioBitrateFail) };


    // isCheckReso Field Functions 
    bool hasIsCheckReso() const { return this->isCheckReso_ != nullptr;};
    void deleteIsCheckReso() { this->isCheckReso_ = nullptr;};
    inline string isCheckReso() const { DARABONBA_PTR_GET_DEFAULT(isCheckReso_, "") };
    inline AddTemplateResponseBodyTemplateTransConfig& setIsCheckReso(string isCheckReso) { DARABONBA_PTR_SET_VALUE(isCheckReso_, isCheckReso) };


    // isCheckResoFail Field Functions 
    bool hasIsCheckResoFail() const { return this->isCheckResoFail_ != nullptr;};
    void deleteIsCheckResoFail() { this->isCheckResoFail_ = nullptr;};
    inline string isCheckResoFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckResoFail_, "") };
    inline AddTemplateResponseBodyTemplateTransConfig& setIsCheckResoFail(string isCheckResoFail) { DARABONBA_PTR_SET_VALUE(isCheckResoFail_, isCheckResoFail) };


    // isCheckVideoBitrate Field Functions 
    bool hasIsCheckVideoBitrate() const { return this->isCheckVideoBitrate_ != nullptr;};
    void deleteIsCheckVideoBitrate() { this->isCheckVideoBitrate_ = nullptr;};
    inline string isCheckVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrate_, "") };
    inline AddTemplateResponseBodyTemplateTransConfig& setIsCheckVideoBitrate(string isCheckVideoBitrate) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrate_, isCheckVideoBitrate) };


    // isCheckVideoBitrateFail Field Functions 
    bool hasIsCheckVideoBitrateFail() const { return this->isCheckVideoBitrateFail_ != nullptr;};
    void deleteIsCheckVideoBitrateFail() { this->isCheckVideoBitrateFail_ = nullptr;};
    inline string isCheckVideoBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrateFail_, "") };
    inline AddTemplateResponseBodyTemplateTransConfig& setIsCheckVideoBitrateFail(string isCheckVideoBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrateFail_, isCheckVideoBitrateFail) };


    // transMode Field Functions 
    bool hasTransMode() const { return this->transMode_ != nullptr;};
    void deleteTransMode() { this->transMode_ = nullptr;};
    inline string transMode() const { DARABONBA_PTR_GET_DEFAULT(transMode_, "") };
    inline AddTemplateResponseBodyTemplateTransConfig& setTransMode(string transMode) { DARABONBA_PTR_SET_VALUE(transMode_, transMode) };


  protected:
    // The method of resolution adjustment. Default value: **none**. Valid values:
    // 
    // *   **rescale**: The input video is rescaled.
    // *   **crop**: The input video is cropped.
    // *   **none**: No change is made.
    std::shared_ptr<string> adjDarMethod_ = nullptr;
    // Indicates whether the audio bitrate is checked.
    // 
    // If this feature is enabled and the system detects that the audio bitrate of the output file is greater than that of the input file, the audio bitrate of the input file is retained after transcoding.
    // 
    // *   **true**: The audio bitrate is checked.
    // *   **false**: The audio bitrate is not checked.
    // *   Default value: **false**.
    std::shared_ptr<string> isCheckAudioBitrate_ = nullptr;
    // Indicates whether the audio bitrate is checked. If this feature is enabled and the system detects that the audio bitrate of the output file is higher than that of the input file, the input file is not transcoded. This parameter has a higher priority than the **IsCheckAudioBitrate** parameter. Valid values:
    // 
    // *   **true**: The audio bitrate is checked. In this case, if the audio bitrate of the output file is higher than that of the input file, the input file is not transcoded.
    // *   **false**: The audio bitrate is not checked.
    // *   Default value: **false**.
    std::shared_ptr<string> isCheckAudioBitrateFail_ = nullptr;
    // Indicates whether the resolution is checked.
    // 
    // *   **true**: The resolution is checked.
    // *   **false**: The resolution is not checked.
    // *   Default value: **false**.
    // 
    // > If this feature is enabled and the system detects that the resolution of the output file is higher than that of the input file based on the width or height, the resolution of the input file is retained after transcoding.
    std::shared_ptr<string> isCheckReso_ = nullptr;
    // Indicates whether the resolution is checked.
    // 
    // *   **true**: The resolution is checked.
    // *   **false**: The resolution is not checked.
    // *   Default value: **false**.
    // 
    // > If this feature is enabled and the system detects that the resolution of the output file is higher than that of the input file based on the width or height, an error that indicates a transcoding failure is returned.
    std::shared_ptr<string> isCheckResoFail_ = nullptr;
    // Indicates whether the video bitrate is checked.
    // 
    // *   **true**: The video bitrate is checked.
    // *   **false**: The video bitrate is not checked.
    // *   Default value: **false**.
    // 
    // > If this feature is enabled and the system detects that the video bitrate of the output file is greater than that of the input file, the video bitrate of the input file is retained after transcoding.
    std::shared_ptr<string> isCheckVideoBitrate_ = nullptr;
    // Indicates whether the video bitrate is checked. If this feature is enabled and the system detects that the video bitrate of the output file is higher than that of the input file, the input file is not transcoded. This parameter has a higher priority than the IsCheckVideoBitrate parameter.
    // 
    // *   **true**: The video bitrate is checked. In this case, if the video bitrate of the output file is higher than that of the input file, the input file is not transcoded.
    // *   **false**: The video bitrate is not checked.
    // *   Default value: **false**.
    std::shared_ptr<string> isCheckVideoBitrateFail_ = nullptr;
    // The transcoding mode. Valid values:
    // 
    // *   **onepass**
    // *   **twopass**
    // *   **CBR**
    // *   Default value: **onepass**.
    std::shared_ptr<string> transMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
