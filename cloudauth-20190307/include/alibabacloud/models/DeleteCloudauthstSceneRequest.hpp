// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLOUDAUTHSTSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLOUDAUTHSTSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DeleteCloudauthstSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCloudauthstSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCloudauthstSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    DeleteCloudauthstSceneRequest() = default ;
    DeleteCloudauthstSceneRequest(const DeleteCloudauthstSceneRequest &) = default ;
    DeleteCloudauthstSceneRequest(DeleteCloudauthstSceneRequest &&) = default ;
    DeleteCloudauthstSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCloudauthstSceneRequest() = default ;
    DeleteCloudauthstSceneRequest& operator=(const DeleteCloudauthstSceneRequest &) = default ;
    DeleteCloudauthstSceneRequest& operator=(DeleteCloudauthstSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sceneId_ == nullptr; };
    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline DeleteCloudauthstSceneRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // ID of the scene to be deleted.
    // 
    // This parameter is required.
    shared_ptr<string> sceneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
