// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSTREAMINGOUTREQUESTPANES_HPP_
#define ALIBABACLOUD_MODELS_STARTSTREAMINGOUTREQUESTPANES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartStreamingOutRequestPanesBackgrounds.hpp>
#include <alibabacloud/models/StartStreamingOutRequestPanesImages.hpp>
#include <alibabacloud/models/StartStreamingOutRequestPanesTexts.hpp>
#include <alibabacloud/models/StartStreamingOutRequestPanesWhiteboard.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartStreamingOutRequestPanes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartStreamingOutRequestPanes& obj) { 
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
    friend void from_json(const Darabonba::Json& j, StartStreamingOutRequestPanes& obj) { 
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
    StartStreamingOutRequestPanes() = default ;
    StartStreamingOutRequestPanes(const StartStreamingOutRequestPanes &) = default ;
    StartStreamingOutRequestPanes(StartStreamingOutRequestPanes &&) = default ;
    StartStreamingOutRequestPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartStreamingOutRequestPanes() = default ;
    StartStreamingOutRequestPanes& operator=(const StartStreamingOutRequestPanes &) = default ;
    StartStreamingOutRequestPanes& operator=(StartStreamingOutRequestPanes &&) = default ;
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
    inline const vector<Models::StartStreamingOutRequestPanesBackgrounds> & backgrounds() const { DARABONBA_PTR_GET_CONST(backgrounds_, vector<Models::StartStreamingOutRequestPanesBackgrounds>) };
    inline vector<Models::StartStreamingOutRequestPanesBackgrounds> backgrounds() { DARABONBA_PTR_GET(backgrounds_, vector<Models::StartStreamingOutRequestPanesBackgrounds>) };
    inline StartStreamingOutRequestPanes& setBackgrounds(const vector<Models::StartStreamingOutRequestPanesBackgrounds> & backgrounds) { DARABONBA_PTR_SET_VALUE(backgrounds_, backgrounds) };
    inline StartStreamingOutRequestPanes& setBackgrounds(vector<Models::StartStreamingOutRequestPanesBackgrounds> && backgrounds) { DARABONBA_PTR_SET_RVALUE(backgrounds_, backgrounds) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<Models::StartStreamingOutRequestPanesImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<Models::StartStreamingOutRequestPanesImages>) };
    inline vector<Models::StartStreamingOutRequestPanesImages> images() { DARABONBA_PTR_GET(images_, vector<Models::StartStreamingOutRequestPanesImages>) };
    inline StartStreamingOutRequestPanes& setImages(const vector<Models::StartStreamingOutRequestPanesImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline StartStreamingOutRequestPanes& setImages(vector<Models::StartStreamingOutRequestPanesImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // paneCropMode Field Functions 
    bool hasPaneCropMode() const { return this->paneCropMode_ != nullptr;};
    void deletePaneCropMode() { this->paneCropMode_ = nullptr;};
    inline int32_t paneCropMode() const { DARABONBA_PTR_GET_DEFAULT(paneCropMode_, 0) };
    inline StartStreamingOutRequestPanes& setPaneCropMode(int32_t paneCropMode) { DARABONBA_PTR_SET_VALUE(paneCropMode_, paneCropMode) };


    // paneId Field Functions 
    bool hasPaneId() const { return this->paneId_ != nullptr;};
    void deletePaneId() { this->paneId_ = nullptr;};
    inline string paneId() const { DARABONBA_PTR_GET_DEFAULT(paneId_, "") };
    inline StartStreamingOutRequestPanes& setPaneId(string paneId) { DARABONBA_PTR_SET_VALUE(paneId_, paneId) };


    // reservePaneForOfflineUser Field Functions 
    bool hasReservePaneForOfflineUser() const { return this->reservePaneForOfflineUser_ != nullptr;};
    void deleteReservePaneForOfflineUser() { this->reservePaneForOfflineUser_ = nullptr;};
    inline bool reservePaneForOfflineUser() const { DARABONBA_PTR_GET_DEFAULT(reservePaneForOfflineUser_, false) };
    inline StartStreamingOutRequestPanes& setReservePaneForOfflineUser(bool reservePaneForOfflineUser) { DARABONBA_PTR_SET_VALUE(reservePaneForOfflineUser_, reservePaneForOfflineUser) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline StartStreamingOutRequestPanes& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline StartStreamingOutRequestPanes& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // texts Field Functions 
    bool hasTexts() const { return this->texts_ != nullptr;};
    void deleteTexts() { this->texts_ = nullptr;};
    inline const vector<Models::StartStreamingOutRequestPanesTexts> & texts() const { DARABONBA_PTR_GET_CONST(texts_, vector<Models::StartStreamingOutRequestPanesTexts>) };
    inline vector<Models::StartStreamingOutRequestPanesTexts> texts() { DARABONBA_PTR_GET(texts_, vector<Models::StartStreamingOutRequestPanesTexts>) };
    inline StartStreamingOutRequestPanes& setTexts(const vector<Models::StartStreamingOutRequestPanesTexts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
    inline StartStreamingOutRequestPanes& setTexts(vector<Models::StartStreamingOutRequestPanesTexts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


    // videoOrder Field Functions 
    bool hasVideoOrder() const { return this->videoOrder_ != nullptr;};
    void deleteVideoOrder() { this->videoOrder_ = nullptr;};
    inline string videoOrder() const { DARABONBA_PTR_GET_DEFAULT(videoOrder_, "") };
    inline StartStreamingOutRequestPanes& setVideoOrder(string videoOrder) { DARABONBA_PTR_SET_VALUE(videoOrder_, videoOrder) };


    // whiteboard Field Functions 
    bool hasWhiteboard() const { return this->whiteboard_ != nullptr;};
    void deleteWhiteboard() { this->whiteboard_ = nullptr;};
    inline const Models::StartStreamingOutRequestPanesWhiteboard & whiteboard() const { DARABONBA_PTR_GET_CONST(whiteboard_, Models::StartStreamingOutRequestPanesWhiteboard) };
    inline Models::StartStreamingOutRequestPanesWhiteboard whiteboard() { DARABONBA_PTR_GET(whiteboard_, Models::StartStreamingOutRequestPanesWhiteboard) };
    inline StartStreamingOutRequestPanes& setWhiteboard(const Models::StartStreamingOutRequestPanesWhiteboard & whiteboard) { DARABONBA_PTR_SET_VALUE(whiteboard_, whiteboard) };
    inline StartStreamingOutRequestPanes& setWhiteboard(Models::StartStreamingOutRequestPanesWhiteboard && whiteboard) { DARABONBA_PTR_SET_RVALUE(whiteboard_, whiteboard) };


  protected:
    std::shared_ptr<vector<Models::StartStreamingOutRequestPanesBackgrounds>> backgrounds_ = nullptr;
    std::shared_ptr<vector<Models::StartStreamingOutRequestPanesImages>> images_ = nullptr;
    std::shared_ptr<int32_t> paneCropMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> paneId_ = nullptr;
    std::shared_ptr<bool> reservePaneForOfflineUser_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<vector<Models::StartStreamingOutRequestPanesTexts>> texts_ = nullptr;
    std::shared_ptr<string> videoOrder_ = nullptr;
    std::shared_ptr<Models::StartStreamingOutRequestPanesWhiteboard> whiteboard_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
