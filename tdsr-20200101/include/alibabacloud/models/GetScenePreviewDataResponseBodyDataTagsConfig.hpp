// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATARESPONSEBODYDATATAGSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEPREVIEWDATARESPONSEBODYDATATAGSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetScenePreviewDataResponseBodyDataTagsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenePreviewDataResponseBodyDataTagsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_TO_JSON(ButtonConfig, buttonConfig_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(FormImgSize, formImgSize_);
      DARABONBA_PTR_TO_JSON(FormJumpType, formJumpType_);
      DARABONBA_PTR_TO_JSON(FormSelectImgType, formSelectImgType_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(IsTagVisibleBy3d, isTagVisibleBy3d_);
      DARABONBA_PTR_TO_JSON(Link, link_);
      DARABONBA_PTR_TO_JSON(PanoId, panoId_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(PositionPanoCube, positionPanoCube_);
      DARABONBA_PTR_TO_JSON(RelatedPanoIds, relatedPanoIds_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenePreviewDataResponseBodyDataTagsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BackgroundColor, backgroundColor_);
      DARABONBA_PTR_FROM_JSON(ButtonConfig, buttonConfig_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(FormImgSize, formImgSize_);
      DARABONBA_PTR_FROM_JSON(FormJumpType, formJumpType_);
      DARABONBA_PTR_FROM_JSON(FormSelectImgType, formSelectImgType_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(IsTagVisibleBy3d, isTagVisibleBy3d_);
      DARABONBA_PTR_FROM_JSON(Link, link_);
      DARABONBA_PTR_FROM_JSON(PanoId, panoId_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(PositionPanoCube, positionPanoCube_);
      DARABONBA_PTR_FROM_JSON(RelatedPanoIds, relatedPanoIds_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    GetScenePreviewDataResponseBodyDataTagsConfig() = default ;
    GetScenePreviewDataResponseBodyDataTagsConfig(const GetScenePreviewDataResponseBodyDataTagsConfig &) = default ;
    GetScenePreviewDataResponseBodyDataTagsConfig(GetScenePreviewDataResponseBodyDataTagsConfig &&) = default ;
    GetScenePreviewDataResponseBodyDataTagsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenePreviewDataResponseBodyDataTagsConfig() = default ;
    GetScenePreviewDataResponseBodyDataTagsConfig& operator=(const GetScenePreviewDataResponseBodyDataTagsConfig &) = default ;
    GetScenePreviewDataResponseBodyDataTagsConfig& operator=(GetScenePreviewDataResponseBodyDataTagsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backgroundColor_ == nullptr
        && return this->buttonConfig_ == nullptr && return this->content_ == nullptr && return this->formImgSize_ == nullptr && return this->formJumpType_ == nullptr && return this->formSelectImgType_ == nullptr
        && return this->images_ == nullptr && return this->isTagVisibleBy3d_ == nullptr && return this->link_ == nullptr && return this->panoId_ == nullptr && return this->position_ == nullptr
        && return this->positionPanoCube_ == nullptr && return this->relatedPanoIds_ == nullptr && return this->sceneId_ == nullptr && return this->title_ == nullptr && return this->video_ == nullptr; };
    // backgroundColor Field Functions 
    bool hasBackgroundColor() const { return this->backgroundColor_ != nullptr;};
    void deleteBackgroundColor() { this->backgroundColor_ = nullptr;};
    inline string backgroundColor() const { DARABONBA_PTR_GET_DEFAULT(backgroundColor_, "") };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setBackgroundColor(string backgroundColor) { DARABONBA_PTR_SET_VALUE(backgroundColor_, backgroundColor) };


    // buttonConfig Field Functions 
    bool hasButtonConfig() const { return this->buttonConfig_ != nullptr;};
    void deleteButtonConfig() { this->buttonConfig_ = nullptr;};
    inline const Models::GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig & buttonConfig() const { DARABONBA_PTR_GET_CONST(buttonConfig_, Models::GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig) };
    inline Models::GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig buttonConfig() { DARABONBA_PTR_GET(buttonConfig_, Models::GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig) };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setButtonConfig(const Models::GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig & buttonConfig) { DARABONBA_PTR_SET_VALUE(buttonConfig_, buttonConfig) };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setButtonConfig(Models::GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig && buttonConfig) { DARABONBA_PTR_SET_RVALUE(buttonConfig_, buttonConfig) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // formImgSize Field Functions 
    bool hasFormImgSize() const { return this->formImgSize_ != nullptr;};
    void deleteFormImgSize() { this->formImgSize_ = nullptr;};
    inline const vector<int64_t> & formImgSize() const { DARABONBA_PTR_GET_CONST(formImgSize_, vector<int64_t>) };
    inline vector<int64_t> formImgSize() { DARABONBA_PTR_GET(formImgSize_, vector<int64_t>) };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setFormImgSize(const vector<int64_t> & formImgSize) { DARABONBA_PTR_SET_VALUE(formImgSize_, formImgSize) };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setFormImgSize(vector<int64_t> && formImgSize) { DARABONBA_PTR_SET_RVALUE(formImgSize_, formImgSize) };


    // formJumpType Field Functions 
    bool hasFormJumpType() const { return this->formJumpType_ != nullptr;};
    void deleteFormJumpType() { this->formJumpType_ = nullptr;};
    inline bool formJumpType() const { DARABONBA_PTR_GET_DEFAULT(formJumpType_, false) };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setFormJumpType(bool formJumpType) { DARABONBA_PTR_SET_VALUE(formJumpType_, formJumpType) };


    // formSelectImgType Field Functions 
    bool hasFormSelectImgType() const { return this->formSelectImgType_ != nullptr;};
    void deleteFormSelectImgType() { this->formSelectImgType_ = nullptr;};
    inline string formSelectImgType() const { DARABONBA_PTR_GET_DEFAULT(formSelectImgType_, "") };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setFormSelectImgType(string formSelectImgType) { DARABONBA_PTR_SET_VALUE(formSelectImgType_, formSelectImgType) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<string> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
    inline vector<string> images() { DARABONBA_PTR_GET(images_, vector<string>) };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // isTagVisibleBy3d Field Functions 
    bool hasIsTagVisibleBy3d() const { return this->isTagVisibleBy3d_ != nullptr;};
    void deleteIsTagVisibleBy3d() { this->isTagVisibleBy3d_ = nullptr;};
    inline bool isTagVisibleBy3d() const { DARABONBA_PTR_GET_DEFAULT(isTagVisibleBy3d_, false) };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setIsTagVisibleBy3d(bool isTagVisibleBy3d) { DARABONBA_PTR_SET_VALUE(isTagVisibleBy3d_, isTagVisibleBy3d) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // panoId Field Functions 
    bool hasPanoId() const { return this->panoId_ != nullptr;};
    void deletePanoId() { this->panoId_ = nullptr;};
    inline string panoId() const { DARABONBA_PTR_GET_DEFAULT(panoId_, "") };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setPanoId(string panoId) { DARABONBA_PTR_SET_VALUE(panoId_, panoId) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline const vector<double> & position() const { DARABONBA_PTR_GET_CONST(position_, vector<double>) };
    inline vector<double> position() { DARABONBA_PTR_GET(position_, vector<double>) };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setPosition(const vector<double> & position) { DARABONBA_PTR_SET_VALUE(position_, position) };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setPosition(vector<double> && position) { DARABONBA_PTR_SET_RVALUE(position_, position) };


    // positionPanoCube Field Functions 
    bool hasPositionPanoCube() const { return this->positionPanoCube_ != nullptr;};
    void deletePositionPanoCube() { this->positionPanoCube_ = nullptr;};
    inline const vector<double> & positionPanoCube() const { DARABONBA_PTR_GET_CONST(positionPanoCube_, vector<double>) };
    inline vector<double> positionPanoCube() { DARABONBA_PTR_GET(positionPanoCube_, vector<double>) };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setPositionPanoCube(const vector<double> & positionPanoCube) { DARABONBA_PTR_SET_VALUE(positionPanoCube_, positionPanoCube) };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setPositionPanoCube(vector<double> && positionPanoCube) { DARABONBA_PTR_SET_RVALUE(positionPanoCube_, positionPanoCube) };


    // relatedPanoIds Field Functions 
    bool hasRelatedPanoIds() const { return this->relatedPanoIds_ != nullptr;};
    void deleteRelatedPanoIds() { this->relatedPanoIds_ = nullptr;};
    inline const vector<string> & relatedPanoIds() const { DARABONBA_PTR_GET_CONST(relatedPanoIds_, vector<string>) };
    inline vector<string> relatedPanoIds() { DARABONBA_PTR_GET(relatedPanoIds_, vector<string>) };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setRelatedPanoIds(const vector<string> & relatedPanoIds) { DARABONBA_PTR_SET_VALUE(relatedPanoIds_, relatedPanoIds) };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setRelatedPanoIds(vector<string> && relatedPanoIds) { DARABONBA_PTR_SET_RVALUE(relatedPanoIds_, relatedPanoIds) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline string video() const { DARABONBA_PTR_GET_DEFAULT(video_, "") };
    inline GetScenePreviewDataResponseBodyDataTagsConfig& setVideo(string video) { DARABONBA_PTR_SET_VALUE(video_, video) };


  protected:
    std::shared_ptr<string> backgroundColor_ = nullptr;
    std::shared_ptr<Models::GetScenePreviewDataResponseBodyDataTagsConfigButtonConfig> buttonConfig_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<vector<int64_t>> formImgSize_ = nullptr;
    std::shared_ptr<bool> formJumpType_ = nullptr;
    std::shared_ptr<string> formSelectImgType_ = nullptr;
    std::shared_ptr<vector<string>> images_ = nullptr;
    std::shared_ptr<bool> isTagVisibleBy3d_ = nullptr;
    std::shared_ptr<string> link_ = nullptr;
    std::shared_ptr<string> panoId_ = nullptr;
    std::shared_ptr<vector<double>> position_ = nullptr;
    std::shared_ptr<vector<double>> positionPanoCube_ = nullptr;
    std::shared_ptr<vector<string>> relatedPanoIds_ = nullptr;
    std::shared_ptr<int64_t> sceneId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
