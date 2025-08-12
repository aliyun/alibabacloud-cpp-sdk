// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTMIXLAYOUTPARAMSUSERPANES_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTMIXLAYOUTPARAMSUSERPANES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartRtcCloudRecordingRequestMixLayoutParamsUserPanes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcCloudRecordingRequestMixLayoutParamsUserPanes& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SubBackground, subBackground_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
      DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcCloudRecordingRequestMixLayoutParamsUserPanes& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SubBackground, subBackground_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
      DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
    };
    StartRtcCloudRecordingRequestMixLayoutParamsUserPanes() = default ;
    StartRtcCloudRecordingRequestMixLayoutParamsUserPanes(const StartRtcCloudRecordingRequestMixLayoutParamsUserPanes &) = default ;
    StartRtcCloudRecordingRequestMixLayoutParamsUserPanes(StartRtcCloudRecordingRequestMixLayoutParamsUserPanes &&) = default ;
    StartRtcCloudRecordingRequestMixLayoutParamsUserPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcCloudRecordingRequestMixLayoutParamsUserPanes() = default ;
    StartRtcCloudRecordingRequestMixLayoutParamsUserPanes& operator=(const StartRtcCloudRecordingRequestMixLayoutParamsUserPanes &) = default ;
    StartRtcCloudRecordingRequestMixLayoutParamsUserPanes& operator=(StartRtcCloudRecordingRequestMixLayoutParamsUserPanes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->height_ != nullptr
        && this->sourceType_ != nullptr && this->subBackground_ != nullptr && this->userId_ != nullptr && this->width_ != nullptr && this->x_ != nullptr
        && this->y_ != nullptr && this->ZOrder_ != nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline StartRtcCloudRecordingRequestMixLayoutParamsUserPanes& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline int32_t sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, 0) };
    inline StartRtcCloudRecordingRequestMixLayoutParamsUserPanes& setSourceType(int32_t sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // subBackground Field Functions 
    bool hasSubBackground() const { return this->subBackground_ != nullptr;};
    void deleteSubBackground() { this->subBackground_ = nullptr;};
    inline const Models::StartRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground & subBackground() const { DARABONBA_PTR_GET_CONST(subBackground_, Models::StartRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground) };
    inline Models::StartRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground subBackground() { DARABONBA_PTR_GET(subBackground_, Models::StartRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground) };
    inline StartRtcCloudRecordingRequestMixLayoutParamsUserPanes& setSubBackground(const Models::StartRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground & subBackground) { DARABONBA_PTR_SET_VALUE(subBackground_, subBackground) };
    inline StartRtcCloudRecordingRequestMixLayoutParamsUserPanes& setSubBackground(Models::StartRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground && subBackground) { DARABONBA_PTR_SET_RVALUE(subBackground_, subBackground) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline StartRtcCloudRecordingRequestMixLayoutParamsUserPanes& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline StartRtcCloudRecordingRequestMixLayoutParamsUserPanes& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline string x() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
    inline StartRtcCloudRecordingRequestMixLayoutParamsUserPanes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline string y() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
    inline StartRtcCloudRecordingRequestMixLayoutParamsUserPanes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    // ZOrder Field Functions 
    bool hasZOrder() const { return this->ZOrder_ != nullptr;};
    void deleteZOrder() { this->ZOrder_ = nullptr;};
    inline int32_t ZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
    inline StartRtcCloudRecordingRequestMixLayoutParamsUserPanes& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


  protected:
    std::shared_ptr<string> height_ = nullptr;
    std::shared_ptr<int32_t> sourceType_ = nullptr;
    std::shared_ptr<Models::StartRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground> subBackground_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> width_ = nullptr;
    std::shared_ptr<string> x_ = nullptr;
    std::shared_ptr<string> y_ = nullptr;
    std::shared_ptr<int32_t> ZOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
