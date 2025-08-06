// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATESTEMPLATETRANSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATESTEMPLATETRANSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig& obj) { 
      DARABONBA_PTR_TO_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
      DARABONBA_PTR_TO_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
      DARABONBA_PTR_TO_JSON(IsCheckReso, isCheckReso_);
      DARABONBA_PTR_TO_JSON(IsCheckResoFail, isCheckResoFail_);
      DARABONBA_PTR_TO_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
      DARABONBA_PTR_TO_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
      DARABONBA_PTR_TO_JSON(TransMode, transMode_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrate, isCheckAudioBitrate_);
      DARABONBA_PTR_FROM_JSON(IsCheckAudioBitrateFail, isCheckAudioBitrateFail_);
      DARABONBA_PTR_FROM_JSON(IsCheckReso, isCheckReso_);
      DARABONBA_PTR_FROM_JSON(IsCheckResoFail, isCheckResoFail_);
      DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrate, isCheckVideoBitrate_);
      DARABONBA_PTR_FROM_JSON(IsCheckVideoBitrateFail, isCheckVideoBitrateFail_);
      DARABONBA_PTR_FROM_JSON(TransMode, transMode_);
    };
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig &&) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig& operator=(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig& operator=(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isCheckAudioBitrate_ != nullptr
        && this->isCheckAudioBitrateFail_ != nullptr && this->isCheckReso_ != nullptr && this->isCheckResoFail_ != nullptr && this->isCheckVideoBitrate_ != nullptr && this->isCheckVideoBitrateFail_ != nullptr
        && this->transMode_ != nullptr; };
    // isCheckAudioBitrate Field Functions 
    bool hasIsCheckAudioBitrate() const { return this->isCheckAudioBitrate_ != nullptr;};
    void deleteIsCheckAudioBitrate() { this->isCheckAudioBitrate_ = nullptr;};
    inline string isCheckAudioBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrate_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig& setIsCheckAudioBitrate(string isCheckAudioBitrate) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrate_, isCheckAudioBitrate) };


    // isCheckAudioBitrateFail Field Functions 
    bool hasIsCheckAudioBitrateFail() const { return this->isCheckAudioBitrateFail_ != nullptr;};
    void deleteIsCheckAudioBitrateFail() { this->isCheckAudioBitrateFail_ = nullptr;};
    inline string isCheckAudioBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckAudioBitrateFail_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig& setIsCheckAudioBitrateFail(string isCheckAudioBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckAudioBitrateFail_, isCheckAudioBitrateFail) };


    // isCheckReso Field Functions 
    bool hasIsCheckReso() const { return this->isCheckReso_ != nullptr;};
    void deleteIsCheckReso() { this->isCheckReso_ = nullptr;};
    inline string isCheckReso() const { DARABONBA_PTR_GET_DEFAULT(isCheckReso_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig& setIsCheckReso(string isCheckReso) { DARABONBA_PTR_SET_VALUE(isCheckReso_, isCheckReso) };


    // isCheckResoFail Field Functions 
    bool hasIsCheckResoFail() const { return this->isCheckResoFail_ != nullptr;};
    void deleteIsCheckResoFail() { this->isCheckResoFail_ = nullptr;};
    inline string isCheckResoFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckResoFail_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig& setIsCheckResoFail(string isCheckResoFail) { DARABONBA_PTR_SET_VALUE(isCheckResoFail_, isCheckResoFail) };


    // isCheckVideoBitrate Field Functions 
    bool hasIsCheckVideoBitrate() const { return this->isCheckVideoBitrate_ != nullptr;};
    void deleteIsCheckVideoBitrate() { this->isCheckVideoBitrate_ = nullptr;};
    inline string isCheckVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrate_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig& setIsCheckVideoBitrate(string isCheckVideoBitrate) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrate_, isCheckVideoBitrate) };


    // isCheckVideoBitrateFail Field Functions 
    bool hasIsCheckVideoBitrateFail() const { return this->isCheckVideoBitrateFail_ != nullptr;};
    void deleteIsCheckVideoBitrateFail() { this->isCheckVideoBitrateFail_ = nullptr;};
    inline string isCheckVideoBitrateFail() const { DARABONBA_PTR_GET_DEFAULT(isCheckVideoBitrateFail_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig& setIsCheckVideoBitrateFail(string isCheckVideoBitrateFail) { DARABONBA_PTR_SET_VALUE(isCheckVideoBitrateFail_, isCheckVideoBitrateFail) };


    // transMode Field Functions 
    bool hasTransMode() const { return this->transMode_ != nullptr;};
    void deleteTransMode() { this->transMode_ = nullptr;};
    inline string transMode() const { DARABONBA_PTR_GET_DEFAULT(transMode_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateTransConfig& setTransMode(string transMode) { DARABONBA_PTR_SET_VALUE(transMode_, transMode) };


  protected:
    std::shared_ptr<string> isCheckAudioBitrate_ = nullptr;
    std::shared_ptr<string> isCheckAudioBitrateFail_ = nullptr;
    std::shared_ptr<string> isCheckReso_ = nullptr;
    std::shared_ptr<string> isCheckResoFail_ = nullptr;
    std::shared_ptr<string> isCheckVideoBitrate_ = nullptr;
    std::shared_ptr<string> isCheckVideoBitrateFail_ = nullptr;
    std::shared_ptr<string> transMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
