// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRENDERINGSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRENDERINGSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class ClientParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClientParams& obj) { 
        DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      };
      friend void from_json(const Darabonba::Json& j, ClientParams& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      };
      ClientParams() = default ;
      ClientParams(const ClientParams &) = default ;
      ClientParams(ClientParams &&) = default ;
      ClientParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClientParams() = default ;
      ClientParams& operator=(const ClientParams &) = default ;
      ClientParams& operator=(ClientParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientIp_ == nullptr; };
      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline ClientParams& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    protected:
      shared_ptr<string> clientIp_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->clientId_ == nullptr && this->clientParams_ == nullptr && this->patchId_ == nullptr && this->projectId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartRenderingSessionRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline StartRenderingSessionRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientParams Field Functions 
    bool hasClientParams() const { return this->clientParams_ != nullptr;};
    void deleteClientParams() { this->clientParams_ = nullptr;};
    inline const StartRenderingSessionRequest::ClientParams & getClientParams() const { DARABONBA_PTR_GET_CONST(clientParams_, StartRenderingSessionRequest::ClientParams) };
    inline StartRenderingSessionRequest::ClientParams getClientParams() { DARABONBA_PTR_GET(clientParams_, StartRenderingSessionRequest::ClientParams) };
    inline StartRenderingSessionRequest& setClientParams(const StartRenderingSessionRequest::ClientParams & clientParams) { DARABONBA_PTR_SET_VALUE(clientParams_, clientParams) };
    inline StartRenderingSessionRequest& setClientParams(StartRenderingSessionRequest::ClientParams && clientParams) { DARABONBA_PTR_SET_RVALUE(clientParams_, clientParams) };


    // patchId Field Functions 
    bool hasPatchId() const { return this->patchId_ != nullptr;};
    void deletePatchId() { this->patchId_ = nullptr;};
    inline string getPatchId() const { DARABONBA_PTR_GET_DEFAULT(patchId_, "") };
    inline StartRenderingSessionRequest& setPatchId(string patchId) { DARABONBA_PTR_SET_VALUE(patchId_, patchId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline StartRenderingSessionRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    shared_ptr<StartRenderingSessionRequest::ClientParams> clientParams_ {};
    shared_ptr<string> patchId_ {};
    // This parameter is required.
    shared_ptr<string> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
