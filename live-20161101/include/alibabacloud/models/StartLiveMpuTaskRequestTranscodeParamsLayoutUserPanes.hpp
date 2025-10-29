// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUESTTRANSCODEPARAMSLAYOUTUSERPANES_HPP_
#define ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUESTTRANSCODEPARAMSLAYOUTUSERPANES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes& obj) { 
      DARABONBA_PTR_TO_JSON(BackgroundImageUrl, backgroundImageUrl_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(RenderMode, renderMode_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
      DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
    };
    friend void from_json(const Darabonba::Json& j, StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes& obj) { 
      DARABONBA_PTR_FROM_JSON(BackgroundImageUrl, backgroundImageUrl_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(RenderMode, renderMode_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
      DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
    };
    StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes() = default ;
    StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes(const StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes &) = default ;
    StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes(StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes &&) = default ;
    StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes() = default ;
    StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes& operator=(const StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes &) = default ;
    StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes& operator=(StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backgroundImageUrl_ == nullptr
        && return this->height_ == nullptr && return this->renderMode_ == nullptr && return this->userInfo_ == nullptr && return this->width_ == nullptr && return this->x_ == nullptr
        && return this->y_ == nullptr && return this->ZOrder_ == nullptr; };
    // backgroundImageUrl Field Functions 
    bool hasBackgroundImageUrl() const { return this->backgroundImageUrl_ != nullptr;};
    void deleteBackgroundImageUrl() { this->backgroundImageUrl_ = nullptr;};
    inline string backgroundImageUrl() const { DARABONBA_PTR_GET_DEFAULT(backgroundImageUrl_, "") };
    inline StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes& setBackgroundImageUrl(string backgroundImageUrl) { DARABONBA_PTR_SET_VALUE(backgroundImageUrl_, backgroundImageUrl) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // renderMode Field Functions 
    bool hasRenderMode() const { return this->renderMode_ != nullptr;};
    void deleteRenderMode() { this->renderMode_ = nullptr;};
    inline string renderMode() const { DARABONBA_PTR_GET_DEFAULT(renderMode_, "") };
    inline StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes& setRenderMode(string renderMode) { DARABONBA_PTR_SET_VALUE(renderMode_, renderMode) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const Models::StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, Models::StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo) };
    inline Models::StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, Models::StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo) };
    inline StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes& setUserInfo(const Models::StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes& setUserInfo(Models::StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline string x() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
    inline StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline string y() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
    inline StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    // ZOrder Field Functions 
    bool hasZOrder() const { return this->ZOrder_ != nullptr;};
    void deleteZOrder() { this->ZOrder_ = nullptr;};
    inline string ZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, "") };
    inline StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanes& setZOrder(string ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


  protected:
    // The URL of the background image of the pane. The URL can be up to 2,048 characters in length. This image is displayed if the user turns off the camera or is not present in the channel.
    std::shared_ptr<string> backgroundImageUrl_ = nullptr;
    // The height of the pane. The value is normalized.
    std::shared_ptr<string> height_ = nullptr;
    // The display mode of the pane. Valid values:
    // 
    // *   **0**: scales the video proportionally to fit the view, with black bars displayed.
    // *   **1 (default)**: crops the video to fit the view.
    std::shared_ptr<string> renderMode_ = nullptr;
    // The information about the user whose stream is played in the pane. If you leave this parameter empty, the system automatically sets this parameter based on the order in which streamers join the channel.
    // 
    // > 
    // 
    // *   If you specify the information about a user by using this parameter, the information about the user must also be specified by using the TranscodeParams.UserInfos parameter.
    // 
    // *   This parameter is valid only when you set StreamType to 0 or 2.
    std::shared_ptr<Models::StartLiveMPUTaskRequestTranscodeParamsLayoutUserPanesUserInfo> userInfo_ = nullptr;
    // The width of the pane. The value is normalized.
    std::shared_ptr<string> width_ = nullptr;
    // The x-coordinate of the pane. The value is normalized.
    std::shared_ptr<string> x_ = nullptr;
    // The y-coordinate of the pane. The value is normalized.
    std::shared_ptr<string> y_ = nullptr;
    // The layer in which the pane resides. A value of 0 indicates the bottom layer. Each increment of the value by 1 indicates the next upper layer.
    std::shared_ptr<string> ZOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
