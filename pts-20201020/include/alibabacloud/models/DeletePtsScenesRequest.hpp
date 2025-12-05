// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPTSSCENESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPTSSCENESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class DeletePtsScenesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePtsScenesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SceneIds, sceneIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePtsScenesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneIds, sceneIds_);
    };
    DeletePtsScenesRequest() = default ;
    DeletePtsScenesRequest(const DeletePtsScenesRequest &) = default ;
    DeletePtsScenesRequest(DeletePtsScenesRequest &&) = default ;
    DeletePtsScenesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePtsScenesRequest() = default ;
    DeletePtsScenesRequest& operator=(const DeletePtsScenesRequest &) = default ;
    DeletePtsScenesRequest& operator=(DeletePtsScenesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sceneIds_ == nullptr; };
    // sceneIds Field Functions 
    bool hasSceneIds() const { return this->sceneIds_ != nullptr;};
    void deleteSceneIds() { this->sceneIds_ = nullptr;};
    inline const vector<string> & sceneIds() const { DARABONBA_PTR_GET_CONST(sceneIds_, vector<string>) };
    inline vector<string> sceneIds() { DARABONBA_PTR_GET(sceneIds_, vector<string>) };
    inline DeletePtsScenesRequest& setSceneIds(const vector<string> & sceneIds) { DARABONBA_PTR_SET_VALUE(sceneIds_, sceneIds) };
    inline DeletePtsScenesRequest& setSceneIds(vector<string> && sceneIds) { DARABONBA_PTR_SET_RVALUE(sceneIds_, sceneIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> sceneIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
