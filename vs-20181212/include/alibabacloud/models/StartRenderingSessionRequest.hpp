// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRENDERINGSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRENDERINGSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartRenderingSessionRequestClientParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class StartRenderingSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRenderingSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientParams, clientParams_);
      DARABONBA_PTR_TO_JSON(PatchId, patchId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, StartRenderingSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientParams, clientParams_);
      DARABONBA_PTR_FROM_JSON(PatchId, patchId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    StartRenderingSessionRequest() = default ;
    StartRenderingSessionRequest(const StartRenderingSessionRequest &) = default ;
    StartRenderingSessionRequest(StartRenderingSessionRequest &&) = default ;
    StartRenderingSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRenderingSessionRequest() = default ;
    StartRenderingSessionRequest& operator=(const StartRenderingSessionRequest &) = default ;
    StartRenderingSessionRequest& operator=(StartRenderingSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->clientId_ != nullptr && this->clientParams_ != nullptr && this->patchId_ != nullptr && this->projectId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartRenderingSessionRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline StartRenderingSessionRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientParams Field Functions 
    bool hasClientParams() const { return this->clientParams_ != nullptr;};
    void deleteClientParams() { this->clientParams_ = nullptr;};
    inline const StartRenderingSessionRequestClientParams & clientParams() const { DARABONBA_PTR_GET_CONST(clientParams_, StartRenderingSessionRequestClientParams) };
    inline StartRenderingSessionRequestClientParams clientParams() { DARABONBA_PTR_GET(clientParams_, StartRenderingSessionRequestClientParams) };
    inline StartRenderingSessionRequest& setClientParams(const StartRenderingSessionRequestClientParams & clientParams) { DARABONBA_PTR_SET_VALUE(clientParams_, clientParams) };
    inline StartRenderingSessionRequest& setClientParams(StartRenderingSessionRequestClientParams && clientParams) { DARABONBA_PTR_SET_RVALUE(clientParams_, clientParams) };


    // patchId Field Functions 
    bool hasPatchId() const { return this->patchId_ != nullptr;};
    void deletePatchId() { this->patchId_ = nullptr;};
    inline string patchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, "") };
    inline StartRenderingSessionRequest& setPatchId(string patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline StartRenderingSessionRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<StartRenderingSessionRequestClientParams> clientParams_ = nullptr;
    std::shared_ptr<string> patchId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
