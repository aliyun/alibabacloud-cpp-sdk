// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDRECORDREQUESTPANES_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDRECORDREQUESTPANES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateCloudRecordRequestPanesBackgrounds.hpp>
#include <alibabacloud/models/UpdateCloudRecordRequestPanesImages.hpp>
#include <alibabacloud/models/UpdateCloudRecordRequestPanesTexts.hpp>
#include <alibabacloud/models/UpdateCloudRecordRequestPanesWhiteboard.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class UpdateCloudRecordRequestPanes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudRecordRequestPanes& obj) { 
      DARABONBA_PTR_TO_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(PaneCropMode, paneCropMode_);
      DARABONBA_PTR_TO_JSON(PaneId, paneId_);
      DARABONBA_PTR_TO_JSON(ReservePaneForOfflineUser, reservePaneForOfflineUser_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Texts, texts_);
      DARABONBA_PTR_TO_JSON(VideoOrder, videoOrder_);
      DARABONBA_PTR_TO_JSON(Whiteboard, whiteboard_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudRecordRequestPanes& obj) { 
      DARABONBA_PTR_FROM_JSON(Backgrounds, backgrounds_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(PaneCropMode, paneCropMode_);
      DARABONBA_PTR_FROM_JSON(PaneId, paneId_);
      DARABONBA_PTR_FROM_JSON(ReservePaneForOfflineUser, reservePaneForOfflineUser_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Texts, texts_);
      DARABONBA_PTR_FROM_JSON(VideoOrder, videoOrder_);
      DARABONBA_PTR_FROM_JSON(Whiteboard, whiteboard_);
    };
    UpdateCloudRecordRequestPanes() = default ;
    UpdateCloudRecordRequestPanes(const UpdateCloudRecordRequestPanes &) = default ;
    UpdateCloudRecordRequestPanes(UpdateCloudRecordRequestPanes &&) = default ;
    UpdateCloudRecordRequestPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudRecordRequestPanes() = default ;
    UpdateCloudRecordRequestPanes& operator=(const UpdateCloudRecordRequestPanes &) = default ;
    UpdateCloudRecordRequestPanes& operator=(UpdateCloudRecordRequestPanes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backgrounds_ == nullptr
        && return this->images_ == nullptr && return this->paneCropMode_ == nullptr && return this->paneId_ == nullptr && return this->reservePaneForOfflineUser_ == nullptr && return this->source_ == nullptr
        && return this->sourceType_ == nullptr && return this->texts_ == nullptr && return this->videoOrder_ == nullptr && return this->whiteboard_ == nullptr; };
    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<Models::UpdateCloudRecordRequestPanesBackgrounds> & backgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<Models::UpdateCloudRecordRequestPanesBackgrounds>) };
    inline vector<Models::UpdateCloudRecordRequestPanesBackgrounds> backgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<Models::UpdateCloudRecordRequestPanesBackgrounds>) };
    inline UpdateCloudRecordRequestPanes& setBackgrounds(const vector<Models::UpdateCloudRecordRequestPanesBackgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline UpdateCloudRecordRequestPanes& setBackgrounds(vector<Models::UpdateCloudRecordRequestPanesBackgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<Models::UpdateCloudRecordRequestPanesImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<Models::UpdateCloudRecordRequestPanesImages>) };
    inline vector<Models::UpdateCloudRecordRequestPanesImages> images() { DARABONBA_PTR_GET(images_, vector<Models::UpdateCloudRecordRequestPanesImages>) };
    inline UpdateCloudRecordRequestPanes& setImages(const vector<Models::UpdateCloudRecordRequestPanesImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline UpdateCloudRecordRequestPanes& setImages(vector<Models::UpdateCloudRecordRequestPanesImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // paneCropMode Field Functions 
    bool hasPaneCropMode() const { return this->paneCropMode_ != nullptr;};
    void deletePaneCropMode() { this->paneCropMode_ = nullptr;};
    inline int32_t paneCropMode() const { DARABONBA_PTR_GET_DEFAULT(paneCropMode_, 0) };
    inline UpdateCloudRecordRequestPanes& setPaneCropMode(int32_t paneCropMode) { DARABONBA_PTR_SET_VALUE(paneCropMode_, paneCropMode) };


    // paneId Field Functions 
    bool hasPaneId() const { return this->paneId_ != nullptr;};
    void deletePaneId() { this->paneId_ = nullptr;};
    inline int32_t paneId() const { DARABONBA_PTR_GET_DEFAULT(paneId_, 0) };
    inline UpdateCloudRecordRequestPanes& setPaneId(int32_t paneId) { DARABONBA_PTR_SET_VALUE(paneId_, paneId) };


    // reservePaneForOfflineUser Field Functions 
    bool hasReservePaneForOfflineUser() const { return this->reservePaneForOfflineUser_ != nullptr;};
    void deleteReservePaneForOfflineUser() { this->reservePaneForOfflineUser_ = nullptr;};
    inline bool reservePaneForOfflineUser() const { DARABONBA_PTR_GET_DEFAULT(reservePaneForOfflineUser_, false) };
    inline UpdateCloudRecordRequestPanes& setReservePaneForOfflineUser(bool reservePaneForOfflineUser) { DARABONBA_PTR_SET_VALUE(reservePaneForOfflineUser_, reservePaneForOfflineUser) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateCloudRecordRequestPanes& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateCloudRecordRequestPanes& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<Models::UpdateCloudRecordRequestPanesTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<Models::UpdateCloudRecordRequestPanesTexts>) };
    inline vector<Models::UpdateCloudRecordRequestPanesTexts> texts() { DARABONBA_PTR_GET(texts_, vector<Models::UpdateCloudRecordRequestPanesTexts>) };
    inline UpdateCloudRecordRequestPanes& setTexts(const vector<Models::UpdateCloudRecordRequestPanesTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline UpdateCloudRecordRequestPanes& setTexts(vector<Models::UpdateCloudRecordRequestPanesTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


    // videoOrder Field Functions 
    bool hasVideoOrder() const { return this->videoOrder_ != nullptr;};
    void deleteVideoOrder() { this->videoOrder_ = nullptr;};
    inline string videoOrder() const { DARABONBA_PTR_GET_DEFAULT(videoOrder_, "") };
    inline UpdateCloudRecordRequestPanes& setVideoOrder(string videoOrder) { DARABONBA_PTR_SET_VALUE(videoOrder_, videoOrder) };


    // whiteboard Field Functions 
    bool hasWhiteboard() const { return this->whiteboard_ != nullptr;};
    void deleteWhiteboard() { this->whiteboard_ = nullptr;};
    inline const Models::UpdateCloudRecordRequestPanesWhiteboard & whiteboard() const { DARABONBA_PTR_GET_CONST(whiteboard_, Models::UpdateCloudRecordRequestPanesWhiteboard) };
    inline Models::UpdateCloudRecordRequestPanesWhiteboard whiteboard() { DARABONBA_PTR_GET(whiteboard_, Models::UpdateCloudRecordRequestPanesWhiteboard) };
    inline UpdateCloudRecordRequestPanes& setWhiteboard(const Models::UpdateCloudRecordRequestPanesWhiteboard & whiteboard) { DARABONBA_PTR_SET_VALUE(whiteboard_, whiteboard) };
    inline UpdateCloudRecordRequestPanes& setWhiteboard(Models::UpdateCloudRecordRequestPanesWhiteboard && whiteboard) { DARABONBA_PTR_SET_RVALUE(whiteboard_, whiteboard) };


  protected:
    std::shared_ptr<vector<Models::UpdateCloudRecordRequestPanesBackgrounds>> backgrounds_ = nullptr;
    std::shared_ptr<vector<Models::UpdateCloudRecordRequestPanesImages>> images_ = nullptr;
    std::shared_ptr<int32_t> paneCropMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> paneId_ = nullptr;
    std::shared_ptr<bool> reservePaneForOfflineUser_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<vector<Models::UpdateCloudRecordRequestPanesTexts>> texts_ = nullptr;
    std::shared_ptr<string> videoOrder_ = nullptr;
    std::shared_ptr<Models::UpdateCloudRecordRequestPanesWhiteboard> whiteboard_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
