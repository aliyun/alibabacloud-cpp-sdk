// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRENDERINGSESSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRENDERINGSESSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class StartRenderingSessionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRenderingSessionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientParams, clientParamsShrink_);
      DARABONBA_PTR_TO_JSON(PatchId, patchId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, StartRenderingSessionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientParams, clientParamsShrink_);
      DARABONBA_PTR_FROM_JSON(PatchId, patchId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    StartRenderingSessionShrinkRequest() = default ;
    StartRenderingSessionShrinkRequest(const StartRenderingSessionShrinkRequest &) = default ;
    StartRenderingSessionShrinkRequest(StartRenderingSessionShrinkRequest &&) = default ;
    StartRenderingSessionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRenderingSessionShrinkRequest() = default ;
    StartRenderingSessionShrinkRequest& operator=(const StartRenderingSessionShrinkRequest &) = default ;
    StartRenderingSessionShrinkRequest& operator=(StartRenderingSessionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->clientId_ == nullptr && this->clientParamsShrink_ == nullptr && this->patchId_ == nullptr && this->projectId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartRenderingSessionShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline StartRenderingSessionShrinkRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientParamsShrink Field Functions 
    bool hasClientParamsShrink() const { return this->clientParamsShrink_ != nullptr;};
    void deleteClientParamsShrink() { this->clientParamsShrink_ = nullptr;};
    inline string getClientParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(clientParamsShrink_, "") };
    inline StartRenderingSessionShrinkRequest& setClientParamsShrink(string clientParamsShrink) { DARABONBA_PTR_SET_VALUE(clientParamsShrink_, clientParamsShrink) };


    // patchId Field Functions 
    bool hasPatchId() const { return this->patchId_ != nullptr;};
    void deletePatchId() { this->patchId_ = nullptr;};
    inline string getPatchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, "") };
    inline StartRenderingSessionShrinkRequest& setPatchId(string patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline StartRenderingSessionShrinkRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    shared_ptr<string> clientParamsShrink_ {};
    shared_ptr<string> patchId_ {};
    // This parameter is required.
    shared_ptr<string> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
