// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPTSSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPTSSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class DeletePtsSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePtsSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePtsSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    DeletePtsSceneRequest() = default ;
    DeletePtsSceneRequest(const DeletePtsSceneRequest &) = default ;
    DeletePtsSceneRequest(DeletePtsSceneRequest &&) = default ;
    DeletePtsSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePtsSceneRequest() = default ;
    DeletePtsSceneRequest& operator=(const DeletePtsSceneRequest &) = default ;
    DeletePtsSceneRequest& operator=(DeletePtsSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sceneId_ == nullptr; };
    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline DeletePtsSceneRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // The ID of the PTS scenario that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
