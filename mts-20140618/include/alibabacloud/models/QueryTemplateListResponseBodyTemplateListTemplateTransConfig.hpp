// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTEMPLATELISTRESPONSEBODYTEMPLATELISTTEMPLATETRANSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYTEMPLATELISTRESPONSEBODYTEMPLATELISTTEMPLATETRANSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryTemplateListResponseBodyTemplateListTemplateTransConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTemplateListResponseBodyTemplateListTemplateTransConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AdjDarMethod, adjDarMethod_);
      DARABONBA_PTR_TO_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
      DARABONBA_PTR_TO_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
      DARABONBA_PTR_TO_JSON(IsCheckReso, isCheckReso_);
      DARABONBA_PTR_TO_JSON(IsCheckResoFail, isCheckResoFail_);
      DARABONBA_PTR_TO_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
      DARABONBA_PTR_TO_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
      DARABONBA_PTR_TO_JSON(TransMode, transMode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTemplateListResponseBodyTemplateListTemplateTransConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AdjDarMethod, adjDarMethod_);
      DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
      DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
      DARABONBA_PTR_FROM_JSON(IsCheckReso, isCheckReso_);
      DARABONBA_PTR_FROM_JSON(IsCheckResoFail, isCheckResoFail_);
      DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
      DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
      DARABONBA_PTR_FROM_JSON(TransMode, transMode_);
    };
    QueryTemplateListResponseBodyTemplateListTemplateTransConfig() = default ;
    QueryTemplateListResponseBodyTemplateListTemplateTransConfig(const QueryTemplateListResponseBodyTemplateListTemplateTransConfig &) = default ;
    QueryTemplateListResponseBodyTemplateListTemplateTransConfig(QueryTemplateListResponseBodyTemplateListTemplateTransConfig &&) = default ;
    QueryTemplateListResponseBodyTemplateListTemplateTransConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTemplateListResponseBodyTemplateListTemplateTransConfig() = default ;
    QueryTemplateListResponseBodyTemplateListTemplateTransConfig& operator=(const QueryTemplateListResponseBodyTemplateListTemplateTransConfig &) = default ;
    QueryTemplateListResponseBodyTemplateListTemplateTransConfig& operator=(QueryTemplateListResponseBodyTemplateListTemplateTransConfig &&) = default ;
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
    inline QueryTemplateListResponseBodyTemplateListTemplateTransConfig& setAdjDarMethod(string adjDarMethod) { DARABONBA_PTR_SET_VALUE(adjDarMethod_, adjDarMethod) };


    // isCheckAudioBitrate Field Functions 
    bool hasIsCheckAudioBitrate() const { return this->isCheckAudioBitrate_ != nullptr;};
    void deleteIsCheckAudioBitrate() { this->isCheckAudioBitrate_ = nullptr;};
    inline string isCheckAudioBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrate_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplateTransConfig& setIsCheckAudioBitrate(string isCheckAudioBitrate) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrate_, isCheckAudioBitrate) };


    // isCheckAudioBitrateFail Field Functions 
    bool hasIsCheckAudioBitrateFail() const { return this->isCheckAudioBitrateFail_ != nullptr;};
    void deleteIsCheckAudioBitrateFail() { this->isCheckAudioBitrateFail_ = nullptr;};
    inline string isCheckAudioBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrateFail_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplateTransConfig& setIsCheckAudioBitrateFail(string isCheckAudioBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrateFail_, isCheckAudioBitrateFail) };


    // isCheckReso Field Functions 
    bool hasIsCheckReso() const { return this->isCheckReso_ != nullptr;};
    void deleteIsCheckReso() { this->isCheckReso_ = nullptr;};
    inline string isCheckReso() const { DARABONBA_PTR_GET_DEFAULT(isCheckReso_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplateTransConfig& setIsCheckReso(string isCheckReso) { DARABONBA_PTR_SET_VALUE(isCheckReso_, isCheckReso) };


    // isCheckResoFail Field Functions 
    bool hasIsCheckResoFail() const { return this->isCheckResoFail_ != nullptr;};
    void deleteIsCheckResoFail() { this->isCheckResoFail_ = nullptr;};
    inline string isCheckResoFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckResoFail_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplateTransConfig& setIsCheckResoFail(string isCheckResoFail) { DARABONBA_PTR_SET_VALUE(isCheckResoFail_, isCheckResoFail) };


    // isCheckVideoBitrate Field Functions 
    bool hasIsCheckVideoBitrate() const { return this->isCheckVideoBitrate_ != nullptr;};
    void deleteIsCheckVideoBitrate() { this->isCheckVideoBitrate_ = nullptr;};
    inline string isCheckVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrate_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplateTransConfig& setIsCheckVideoBitrate(string isCheckVideoBitrate) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrate_, isCheckVideoBitrate) };


    // isCheckVideoBitrateFail Field Functions 
    bool hasIsCheckVideoBitrateFail() const { return this->isCheckVideoBitrateFail_ != nullptr;};
    void deleteIsCheckVideoBitrateFail() { this->isCheckVideoBitrateFail_ = nullptr;};
    inline string isCheckVideoBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrateFail_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplateTransConfig& setIsCheckVideoBitrateFail(string isCheckVideoBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrateFail_, isCheckVideoBitrateFail) };


    // transMode Field Functions 
    bool hasTransMode() const { return this->transMode_ != nullptr;};
    void deleteTransMode() { this->transMode_ = nullptr;};
    inline string transMode() const { DARABONBA_PTR_GET_DEFAULT(transMode_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplateTransConfig& setTransMode(string transMode) { DARABONBA_PTR_SET_VALUE(transMode_, transMode) };


  protected:
    // The method of resolution adjustment. Default value: **none**. Valid values:
    // 
    // *   rescale
    // *   crop
    // *   none
    std::shared_ptr<string> adjDarMethod_ = nullptr;
    // Indicates whether the audio bitrate is checked. If the bitrate of the output audio is higher than that of the input audio, the input bitrate is retained and the specified audio bitrate does not take effect. This parameter has a lower priority than IsCheckAudioBitrateFail. Valid values:
    // 
    // *   **true**
    // 
    // *   **false**
    // 
    // *   Default value:
    // 
    //     *   If this parameter is not specified and the codec of the output audio is different from that of the input audio, the default value is false.
    //     *   If this parameter is not specified and the codec of the output audio is the same as that of the input audio, the default value is true.
    std::shared_ptr<string> isCheckAudioBitrate_ = nullptr;
    // Indicates whether audio bitrate check errors are allowed. This parameter has a greater priority than IsCheckAudioBitrate. Valid values:
    // 
    // *   **true**: If the audio bitrate check fails, the input file is not transcoded.
    // *   **false**: The audio bitrate is not checked.
    // *   Default value: **false**.
    std::shared_ptr<string> isCheckAudioBitrateFail_ = nullptr;
    // Indicates whether the resolution is checked. If the output resolution is higher than the input resolution based on the width or height, the input resolution is retained. Valid values:
    // 
    // *   **true**
    // *   **false**
    // *   Default value: **false**.
    std::shared_ptr<string> isCheckReso_ = nullptr;
    // Indicates whether the resolution is checked. If the output resolution is higher than the input resolution based on the width or height, a transcoding failure is returned. Valid values:
    // 
    // *   **true**
    // *   **false**
    // *   Default value: **false**.
    std::shared_ptr<string> isCheckResoFail_ = nullptr;
    // Indicates whether the video bitrate is checked. If the bitrate of the output video is higher than that of the input video, the input bitrate is retained. Valid values:
    // 
    // *   **true**
    // *   **false**
    // *   Default value: **false**.
    std::shared_ptr<string> isCheckVideoBitrate_ = nullptr;
    // Indicates whether video bitrate check errors are allowed. This parameter has a higher priority than IsCheckVideoBitrate. Valid values:
    // 
    // *   **true**: If the video bitrate check fails, the input file is not transcoded.
    // *   **false**: The video bitrate is not checked.
    // *   Default value: **false**.
    std::shared_ptr<string> isCheckVideoBitrateFail_ = nullptr;
    // The transcoding mode. Default value: **onepass**. Valid values:
    // 
    // *   **onepass**
    // *   **twopass**
    // *   **CBR**
    std::shared_ptr<string> transMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
