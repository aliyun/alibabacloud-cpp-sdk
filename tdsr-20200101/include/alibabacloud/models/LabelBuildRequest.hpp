// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LABELBUILDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LABELBUILDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class LabelBuildRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LabelBuildRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(ModelStyle, modelStyle_);
      DARABONBA_PTR_TO_JSON(OptimizeWallWidth, optimizeWallWidth_);
      DARABONBA_PTR_TO_JSON(PlanStyle, planStyle_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(WallHeight, wallHeight_);
    };
    friend void from_json(const Darabonba::Json& j, LabelBuildRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(ModelStyle, modelStyle_);
      DARABONBA_PTR_FROM_JSON(OptimizeWallWidth, optimizeWallWidth_);
      DARABONBA_PTR_FROM_JSON(PlanStyle, planStyle_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(WallHeight, wallHeight_);
    };
    LabelBuildRequest() = default ;
    LabelBuildRequest(const LabelBuildRequest &) = default ;
    LabelBuildRequest(LabelBuildRequest &&) = default ;
    LabelBuildRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LabelBuildRequest() = default ;
    LabelBuildRequest& operator=(const LabelBuildRequest &) = default ;
    LabelBuildRequest& operator=(LabelBuildRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && return this->modelStyle_ == nullptr && return this->optimizeWallWidth_ == nullptr && return this->planStyle_ == nullptr && return this->sceneId_ == nullptr && return this->wallHeight_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline LabelBuildRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // modelStyle Field Functions 
    bool hasModelStyle() const { return this->modelStyle_ != nullptr;};
    void deleteModelStyle() { this->modelStyle_ = nullptr;};
    inline string modelStyle() const { DARABONBA_PTR_GET_DEFAULT(modelStyle_, "") };
    inline LabelBuildRequest& setModelStyle(string modelStyle) { DARABONBA_PTR_SET_VALUE(modelStyle_, modelStyle) };


    // optimizeWallWidth Field Functions 
    bool hasOptimizeWallWidth() const { return this->optimizeWallWidth_ != nullptr;};
    void deleteOptimizeWallWidth() { this->optimizeWallWidth_ = nullptr;};
    inline string optimizeWallWidth() const { DARABONBA_PTR_GET_DEFAULT(optimizeWallWidth_, "") };
    inline LabelBuildRequest& setOptimizeWallWidth(string optimizeWallWidth) { DARABONBA_PTR_SET_VALUE(optimizeWallWidth_, optimizeWallWidth) };


    // planStyle Field Functions 
    bool hasPlanStyle() const { return this->planStyle_ != nullptr;};
    void deletePlanStyle() { this->planStyle_ = nullptr;};
    inline string planStyle() const { DARABONBA_PTR_GET_DEFAULT(planStyle_, "") };
    inline LabelBuildRequest& setPlanStyle(string planStyle) { DARABONBA_PTR_SET_VALUE(planStyle_, planStyle) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline LabelBuildRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // wallHeight Field Functions 
    bool hasWallHeight() const { return this->wallHeight_ != nullptr;};
    void deleteWallHeight() { this->wallHeight_ = nullptr;};
    inline int64_t wallHeight() const { DARABONBA_PTR_GET_DEFAULT(wallHeight_, 0L) };
    inline LabelBuildRequest& setWallHeight(int64_t wallHeight) { DARABONBA_PTR_SET_VALUE(wallHeight_, wallHeight) };


  protected:
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> modelStyle_ = nullptr;
    std::shared_ptr<string> optimizeWallWidth_ = nullptr;
    std::shared_ptr<string> planStyle_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<int64_t> wallHeight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
