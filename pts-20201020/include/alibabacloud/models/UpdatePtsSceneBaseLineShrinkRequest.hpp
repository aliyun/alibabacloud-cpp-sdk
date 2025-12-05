// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPTSSCENEBASELINESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPTSSCENEBASELINESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class UpdatePtsSceneBaseLineShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePtsSceneBaseLineShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiBaselines, apiBaselinesShrink_);
      DARABONBA_PTR_TO_JSON(SceneBaseline, sceneBaselineShrink_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePtsSceneBaseLineShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiBaselines, apiBaselinesShrink_);
      DARABONBA_PTR_FROM_JSON(SceneBaseline, sceneBaselineShrink_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    UpdatePtsSceneBaseLineShrinkRequest() = default ;
    UpdatePtsSceneBaseLineShrinkRequest(const UpdatePtsSceneBaseLineShrinkRequest &) = default ;
    UpdatePtsSceneBaseLineShrinkRequest(UpdatePtsSceneBaseLineShrinkRequest &&) = default ;
    UpdatePtsSceneBaseLineShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePtsSceneBaseLineShrinkRequest() = default ;
    UpdatePtsSceneBaseLineShrinkRequest& operator=(const UpdatePtsSceneBaseLineShrinkRequest &) = default ;
    UpdatePtsSceneBaseLineShrinkRequest& operator=(UpdatePtsSceneBaseLineShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiBaselinesShrink_ == nullptr
        && return this->sceneBaselineShrink_ == nullptr && return this->sceneId_ == nullptr; };
    // apiBaselinesShrink Field Functions 
    bool hasApiBaselinesShrink() const { return this->apiBaselinesShrink_ != nullptr;};
    void deleteApiBaselinesShrink() { this->apiBaselinesShrink_ = nullptr;};
    inline string apiBaselinesShrink() const { DARABONBA_PTR_GET_DEFAULT(apiBaselinesShrink_, "") };
    inline UpdatePtsSceneBaseLineShrinkRequest& setApiBaselinesShrink(string apiBaselinesShrink) { DARABONBA_PTR_SET_VALUE(apiBaselinesShrink_, apiBaselinesShrink) };


    // sceneBaselineShrink Field Functions 
    bool hasSceneBaselineShrink() const { return this->sceneBaselineShrink_ != nullptr;};
    void deleteSceneBaselineShrink() { this->sceneBaselineShrink_ = nullptr;};
    inline string sceneBaselineShrink() const { DARABONBA_PTR_GET_DEFAULT(sceneBaselineShrink_, "") };
    inline UpdatePtsSceneBaseLineShrinkRequest& setSceneBaselineShrink(string sceneBaselineShrink) { DARABONBA_PTR_SET_VALUE(sceneBaselineShrink_, sceneBaselineShrink) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline UpdatePtsSceneBaseLineShrinkRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // null null
    std::shared_ptr<string> apiBaselinesShrink_ = nullptr;
    // null null
    std::shared_ptr<string> sceneBaselineShrink_ = nullptr;
    // The ID of the scene. For more information, see the [table](https://help.aliyun.com/document_detail/201321.html) provided in this topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
