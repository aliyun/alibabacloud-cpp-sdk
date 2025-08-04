// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTREAMINGOUTREQUESTPANES_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTREAMINGOUTREQUESTPANES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateStreamingOutRequestPanesBackgrounds.hpp>
#include <alibabacloud/models/UpdateStreamingOutRequestPanesImages.hpp>
#include <alibabacloud/models/UpdateStreamingOutRequestPanesTexts.hpp>
#include <alibabacloud/models/UpdateStreamingOutRequestPanesWhiteboard.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class UpdateStreamingOutRequestPanes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStreamingOutRequestPanes& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateStreamingOutRequestPanes& obj) { 
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
    UpdateStreamingOutRequestPanes() = default ;
    UpdateStreamingOutRequestPanes(const UpdateStreamingOutRequestPanes &) = default ;
    UpdateStreamingOutRequestPanes(UpdateStreamingOutRequestPanes &&) = default ;
    UpdateStreamingOutRequestPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStreamingOutRequestPanes() = default ;
    UpdateStreamingOutRequestPanes& operator=(const UpdateStreamingOutRequestPanes &) = default ;
    UpdateStreamingOutRequestPanes& operator=(UpdateStreamingOutRequestPanes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backgrounds_ != nullptr
        && this->images_ != nullptr && this->paneCropMode_ != nullptr && this->paneId_ != nullptr && this->reservePaneForOfflineUser_ != nullptr && this->source_ != nullptr
        && this->sourceType_ != nullptr && this->texts_ != nullptr && this->videoOrder_ != nullptr && this->whiteboard_ != nullptr; };
    // backgrounds Field Functions 
    bool hasBackgrounds() const { return this->backgrounds_ != nullptr;};
    void deleteBackgrounds() { this->backgrounds_ = nullptr;};
    inline const vector<Models::UpdateStreamingOutRequestPanesBackgrounds> & backgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<Models::UpdateStreamingOutRequestPanesBackgrounds>) };
    inline vector<Models::UpdateStreamingOutRequestPanesBackgrounds> backgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<Models::UpdateStreamingOutRequestPanesBackgrounds>) };
    inline UpdateStreamingOutRequestPanes& setBackgrounds(const vector<Models::UpdateStreamingOutRequestPanesBackgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline UpdateStreamingOutRequestPanes& setBackgrounds(vector<Models::UpdateStreamingOutRequestPanesBackgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<Models::UpdateStreamingOutRequestPanesImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<Models::UpdateStreamingOutRequestPanesImages>) };
    inline vector<Models::UpdateStreamingOutRequestPanesImages> images() { DARABONBA_PTR_GET(images_, vector<Models::UpdateStreamingOutRequestPanesImages>) };
    inline UpdateStreamingOutRequestPanes& setImages(const vector<Models::UpdateStreamingOutRequestPanesImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline UpdateStreamingOutRequestPanes& setImages(vector<Models::UpdateStreamingOutRequestPanesImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // paneCropMode Field Functions 
    bool hasPaneCropMode() const { return this->paneCropMode_ != nullptr;};
    void deletePaneCropMode() { this->paneCropMode_ = nullptr;};
    inline int32_t paneCropMode() const { DARABONBA_PTR_GET_DEFAULT(paneCropMode_, 0) };
    inline UpdateStreamingOutRequestPanes& setPaneCropMode(int32_t paneCropMode) { DARABONBA_PTR_SET_VALUE(paneCropMode_, paneCropMode) };


    // paneId Field Functions 
    bool hasPaneId() const { return this->paneId_ != nullptr;};
    void deletePaneId() { this->paneId_ = nullptr;};
    inline int32_t paneId() const { DARABONBA_PTR_GET_DEFAULT(paneId_, 0) };
    inline UpdateStreamingOutRequestPanes& setPaneId(int32_t paneId) { DARABONBA_PTR_SET_VALUE(paneId_, paneId) };


    // reservePaneForOfflineUser Field Functions 
    bool hasReservePaneForOfflineUser() const { return this->reservePaneForOfflineUser_ != nullptr;};
    void deleteReservePaneForOfflineUser() { this->reservePaneForOfflineUser_ = nullptr;};
    inline bool reservePaneForOfflineUser() const { DARABONBA_PTR_GET_DEFAULT(reservePaneForOfflineUser_, false) };
    inline UpdateStreamingOutRequestPanes& setReservePaneForOfflineUser(bool reservePaneForOfflineUser) { DARABONBA_PTR_SET_VALUE(reservePaneForOfflineUser_, reservePaneForOfflineUser) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateStreamingOutRequestPanes& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateStreamingOutRequestPanes& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<Models::UpdateStreamingOutRequestPanesTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<Models::UpdateStreamingOutRequestPanesTexts>) };
    inline vector<Models::UpdateStreamingOutRequestPanesTexts> texts() { DARABONBA_PTR_GET(texts_, vector<Models::UpdateStreamingOutRequestPanesTexts>) };
    inline UpdateStreamingOutRequestPanes& setTexts(const vector<Models::UpdateStreamingOutRequestPanesTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline UpdateStreamingOutRequestPanes& setTexts(vector<Models::UpdateStreamingOutRequestPanesTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


    // videoOrder Field Functions 
    bool hasVideoOrder() const { return this->videoOrder_ != nullptr;};
    void deleteVideoOrder() { this->videoOrder_ = nullptr;};
    inline string videoOrder() const { DARABONBA_PTR_GET_DEFAULT(videoOrder_, "") };
    inline UpdateStreamingOutRequestPanes& setVideoOrder(string videoOrder) { DARABONBA_PTR_SET_VALUE(videoOrder_, videoOrder) };


    // whiteboard Field Functions 
    bool hasWhiteboard() const { return this->whiteboard_ != nullptr;};
    void deleteWhiteboard() { this->whiteboard_ = nullptr;};
    inline const Models::UpdateStreamingOutRequestPanesWhiteboard & whiteboard() const { DARABONBA_PTR_GET_CONST(whiteboard_, Models::UpdateStreamingOutRequestPanesWhiteboard) };
    inline Models::UpdateStreamingOutRequestPanesWhiteboard whiteboard() { DARABONBA_PTR_GET(whiteboard_, Models::UpdateStreamingOutRequestPanesWhiteboard) };
    inline UpdateStreamingOutRequestPanes& setWhiteboard(const Models::UpdateStreamingOutRequestPanesWhiteboard & whiteboard) { DARABONBA_PTR_SET_VALUE(whiteboard_, whiteboard) };
    inline UpdateStreamingOutRequestPanes& setWhiteboard(Models::UpdateStreamingOutRequestPanesWhiteboard && whiteboard) { DARABONBA_PTR_SET_RVALUE(whiteboard_, whiteboard) };


  protected:
    std::shared_ptr<vector<Models::UpdateStreamingOutRequestPanesBackgrounds>> backgrounds_ = nullptr;
    std::shared_ptr<vector<Models::UpdateStreamingOutRequestPanesImages>> images_ = nullptr;
    std::shared_ptr<int32_t> paneCropMode_ = nullptr;
    std::shared_ptr<int32_t> paneId_ = nullptr;
    std::shared_ptr<bool> reservePaneForOfflineUser_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<vector<Models::UpdateStreamingOutRequestPanesTexts>> texts_ = nullptr;
    std::shared_ptr<string> videoOrder_ = nullptr;
    std::shared_ptr<Models::UpdateStreamingOutRequestPanesWhiteboard> whiteboard_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
