// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPTSSCENEBASELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPTSSCENEBASELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class UpdatePtsSceneBaseLineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePtsSceneBaseLineRequest& obj) { 
      DARABONBA_ANY_TO_JSON(ApiBaselines, apiBaselines_);
      DARABONBA_ANY_TO_JSON(SceneBaseline, sceneBaseline_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePtsSceneBaseLineRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(ApiBaselines, apiBaselines_);
      DARABONBA_ANY_FROM_JSON(SceneBaseline, sceneBaseline_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    UpdatePtsSceneBaseLineRequest() = default ;
    UpdatePtsSceneBaseLineRequest(const UpdatePtsSceneBaseLineRequest &) = default ;
    UpdatePtsSceneBaseLineRequest(UpdatePtsSceneBaseLineRequest &&) = default ;
    UpdatePtsSceneBaseLineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePtsSceneBaseLineRequest() = default ;
    UpdatePtsSceneBaseLineRequest& operator=(const UpdatePtsSceneBaseLineRequest &) = default ;
    UpdatePtsSceneBaseLineRequest& operator=(UpdatePtsSceneBaseLineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiBaselines_ == nullptr
        && return this->sceneBaseline_ == nullptr && return this->sceneId_ == nullptr; };
    // apiBaselines Field Functions 
    bool hasApiBaselines() const { return this->apiBaselines_ != nullptr;};
    void deleteApiBaselines() { this->apiBaselines_ = nullptr;};
    inline     const Darabonba::Json & apiBaselines() const { DARABONBA_GET(apiBaselines_) };
    Darabonba::Json & apiBaselines() { DARABONBA_GET(apiBaselines_) };
    inline UpdatePtsSceneBaseLineRequest& setApiBaselines(const Darabonba::Json & apiBaselines) { DARABONBA_SET_VALUE(apiBaselines_, apiBaselines) };
    inline UpdatePtsSceneBaseLineRequest& setApiBaselines(Darabonba::Json & apiBaselines) { DARABONBA_SET_RVALUE(apiBaselines_, apiBaselines) };


    // sceneBaseline Field Functions 
    bool hasSceneBaseline() const { return this->sceneBaseline_ != nullptr;};
    void deleteSceneBaseline() { this->sceneBaseline_ = nullptr;};
    inline     const Darabonba::Json & sceneBaseline() const { DARABONBA_GET(sceneBaseline_) };
    Darabonba::Json & sceneBaseline() { DARABONBA_GET(sceneBaseline_) };
    inline UpdatePtsSceneBaseLineRequest& setSceneBaseline(const Darabonba::Json & sceneBaseline) { DARABONBA_SET_VALUE(sceneBaseline_, sceneBaseline) };
    inline UpdatePtsSceneBaseLineRequest& setSceneBaseline(Darabonba::Json & sceneBaseline) { DARABONBA_SET_RVALUE(sceneBaseline_, sceneBaseline) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline UpdatePtsSceneBaseLineRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // null null
    Darabonba::Json apiBaselines_ = nullptr;
    // null null
    Darabonba::Json sceneBaseline_ = nullptr;
    // The ID of the scene. For more information, see the [table](https://help.aliyun.com/document_detail/201321.html) provided in this topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
