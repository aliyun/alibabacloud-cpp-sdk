// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGREQUESTMIXLAYOUTPARAMSUSERPANES_HPP_
#define ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGREQUESTMIXLAYOUTPARAMSUSERPANES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SubBackground, subBackground_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
      DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SubBackground, subBackground_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
      DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
    };
    UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes() = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes(const UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes &) = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes(UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes &&) = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes() = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes& operator=(const UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes &) = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes& operator=(UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->height_ == nullptr
        && return this->sourceType_ == nullptr && return this->subBackground_ == nullptr && return this->userId_ == nullptr && return this->width_ == nullptr && return this->x_ == nullptr
        && return this->y_ == nullptr && return this->ZOrder_ == nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline int32_t sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, 0) };
    inline UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes& setSourceType(int32_t sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // subBackground Field Functions 
    bool hasSubBackground() const { return this->subBackground_ != nullptr;};
    void deleteSubBackground() { this->subBackground_ = nullptr;};
    inline const Models::UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground & subBackground() const { DARABONBA_PTR_GET_CONST(subBackground_, Models::UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground) };
    inline Models::UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground subBackground() { DARABONBA_PTR_GET(subBackground_, Models::UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground) };
    inline UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes& setSubBackground(const Models::UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground & subBackground) { DARABONBA_PTR_SET_VALUE(subBackground_, subBackground) };
    inline UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes& setSubBackground(Models::UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground && subBackground) { DARABONBA_PTR_SET_RVALUE(subBackground_, subBackground) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline string x() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
    inline UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline string y() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
    inline UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    // ZOrder Field Functions 
    bool hasZOrder() const { return this->ZOrder_ != nullptr;};
    void deleteZOrder() { this->ZOrder_ = nullptr;};
    inline int32_t ZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
    inline UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanes& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


  protected:
    std::shared_ptr<string> height_ = nullptr;
    std::shared_ptr<int32_t> sourceType_ = nullptr;
    std::shared_ptr<Models::UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground> subBackground_ = nullptr;
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
