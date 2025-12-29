// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCENECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCENECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DeleteSceneConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSceneConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sceneConfigId, sceneConfigId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSceneConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sceneConfigId, sceneConfigId_);
    };
    DeleteSceneConfigRequest() = default ;
    DeleteSceneConfigRequest(const DeleteSceneConfigRequest &) = default ;
    DeleteSceneConfigRequest(DeleteSceneConfigRequest &&) = default ;
    DeleteSceneConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSceneConfigRequest() = default ;
    DeleteSceneConfigRequest& operator=(const DeleteSceneConfigRequest &) = default ;
    DeleteSceneConfigRequest& operator=(DeleteSceneConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sceneConfigId_ == nullptr; };
    // sceneConfigId Field Functions 
    bool hasSceneConfigId() const { return this->sceneConfigId_ != nullptr;};
    void deleteSceneConfigId() { this->sceneConfigId_ = nullptr;};
    inline int64_t getSceneConfigId() const { DARABONBA_PTR_GET_DEFAULT(sceneConfigId_, 0L) };
    inline DeleteSceneConfigRequest& setSceneConfigId(int64_t sceneConfigId) { DARABONBA_PTR_SET_VALUE(sceneConfigId_, sceneConfigId) };


  protected:
    // ID of the intent authentication configuration.
    // 
    // This parameter is required.
    shared_ptr<int64_t> sceneConfigId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
