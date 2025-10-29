// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSTRANSCODEPARAMSLAYOUTUSERPANES_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSTRANSCODEPARAMSLAYOUTUSERPANES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanesUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes& obj) { 
      DARABONBA_PTR_TO_JSON(BackgroundImageUrl, backgroundImageUrl_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(RenderMode, renderMode_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
      DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
    };
    friend void from_json(const Darabonba::Json& j, ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes& obj) { 
      DARABONBA_PTR_FROM_JSON(BackgroundImageUrl, backgroundImageUrl_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(RenderMode, renderMode_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
      DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
    };
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes(const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes(ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes &&) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes& operator=(const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes& operator=(ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes &&) = default ;
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
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes& setBackgroundImageUrl(string backgroundImageUrl) { DARABONBA_PTR_SET_VALUE(backgroundImageUrl_, backgroundImageUrl) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // renderMode Field Functions 
    bool hasRenderMode() const { return this->renderMode_ != nullptr;};
    void deleteRenderMode() { this->renderMode_ = nullptr;};
    inline string renderMode() const { DARABONBA_PTR_GET_DEFAULT(renderMode_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes& setRenderMode(string renderMode) { DARABONBA_PTR_SET_VALUE(renderMode_, renderMode) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanesUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanesUserInfo) };
    inline Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanesUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanesUserInfo) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes& setUserInfo(const Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanesUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes& setUserInfo(Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanesUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline string x() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline string y() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    // ZOrder Field Functions 
    bool hasZOrder() const { return this->ZOrder_ != nullptr;};
    void deleteZOrder() { this->ZOrder_ = nullptr;};
    inline string ZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanes& setZOrder(string ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


  protected:
    // The URL of the background image of the pane. This image is displayed if the user turns off the camera or is not present in the channel.
    std::shared_ptr<string> backgroundImageUrl_ = nullptr;
    // The height of the pane. The value is normalized.
    std::shared_ptr<string> height_ = nullptr;
    // The display mode. Valid values:
    // 
    // *   0: proportionally scales the video or background image to fit the pane. Black bars are added to fill the extra space.
    // *   1 (default): crops the video or background image to fit the pane.
    std::shared_ptr<string> renderMode_ = nullptr;
    // The information about the user whose stream is played in the pane.
    std::shared_ptr<Models::ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsLayoutUserPanesUserInfo> userInfo_ = nullptr;
    // The width of the pane. The value is normalized.
    std::shared_ptr<string> width_ = nullptr;
    // The x-coordinate of the pane. The value is normalized.
    std::shared_ptr<string> x_ = nullptr;
    // The y-coordinate of the pane. The value is normalized.
    std::shared_ptr<string> y_ = nullptr;
    // The layer of the pane. A value of 0 indicates that the pane is placed at the bottom layer. A larger value indicates a higher layer.
    std::shared_ptr<string> ZOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
