// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEPTSSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEPTSSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SavePtsSceneRequestScene.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class SavePtsSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SavePtsSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, SavePtsSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
    };
    SavePtsSceneRequest() = default ;
    SavePtsSceneRequest(const SavePtsSceneRequest &) = default ;
    SavePtsSceneRequest(SavePtsSceneRequest &&) = default ;
    SavePtsSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SavePtsSceneRequest() = default ;
    SavePtsSceneRequest& operator=(const SavePtsSceneRequest &) = default ;
    SavePtsSceneRequest& operator=(SavePtsSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scene_ == nullptr; };
    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline const SavePtsSceneRequestScene & scene() const { DARABONBA_PTR_GET_CONST(scene_, SavePtsSceneRequestScene) };
    inline SavePtsSceneRequestScene scene() { DARABONBA_PTR_GET(scene_, SavePtsSceneRequestScene) };
    inline SavePtsSceneRequest& setScene(const SavePtsSceneRequestScene & scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };
    inline SavePtsSceneRequest& setScene(SavePtsSceneRequestScene && scene) { DARABONBA_PTR_SET_RVALUE(scene_, scene) };


  protected:
    // The information about the scenario.
    // 
    // This parameter is required.
    std::shared_ptr<SavePtsSceneRequestScene> scene_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
