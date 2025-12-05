// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPTSSCENESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPTSSCENESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class DeletePtsScenesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePtsScenesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SceneIds, sceneIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePtsScenesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneIds, sceneIdsShrink_);
    };
    DeletePtsScenesShrinkRequest() = default ;
    DeletePtsScenesShrinkRequest(const DeletePtsScenesShrinkRequest &) = default ;
    DeletePtsScenesShrinkRequest(DeletePtsScenesShrinkRequest &&) = default ;
    DeletePtsScenesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePtsScenesShrinkRequest() = default ;
    DeletePtsScenesShrinkRequest& operator=(const DeletePtsScenesShrinkRequest &) = default ;
    DeletePtsScenesShrinkRequest& operator=(DeletePtsScenesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sceneIdsShrink_ == nullptr; };
    // sceneIdsShrink Field Functions 
    bool hasSceneIdsShrink() const { return this->sceneIdsShrink_ != nullptr;};
    void deleteSceneIdsShrink() { this->sceneIdsShrink_ = nullptr;};
    inline string sceneIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(sceneIdsShrink_, "") };
    inline DeletePtsScenesShrinkRequest& setSceneIdsShrink(string sceneIdsShrink) { DARABONBA_PTR_SET_VALUE(sceneIdsShrink_, sceneIdsShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> sceneIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
