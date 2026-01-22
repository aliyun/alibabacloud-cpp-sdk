// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHRENDERINGINSTANCESTREAMINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHRENDERINGINSTANCESTREAMINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class RefreshRenderingInstanceStreamingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshRenderingInstanceStreamingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientInfo, clientInfo_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshRenderingInstanceStreamingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientInfo, clientInfo_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
    };
    RefreshRenderingInstanceStreamingRequest() = default ;
    RefreshRenderingInstanceStreamingRequest(const RefreshRenderingInstanceStreamingRequest &) = default ;
    RefreshRenderingInstanceStreamingRequest(RefreshRenderingInstanceStreamingRequest &&) = default ;
    RefreshRenderingInstanceStreamingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshRenderingInstanceStreamingRequest() = default ;
    RefreshRenderingInstanceStreamingRequest& operator=(const RefreshRenderingInstanceStreamingRequest &) = default ;
    RefreshRenderingInstanceStreamingRequest& operator=(RefreshRenderingInstanceStreamingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClientInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClientInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_TO_JSON(NewClient, newClient_);
      };
      friend void from_json(const Darabonba::Json& j, ClientInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_FROM_JSON(NewClient, newClient_);
      };
      ClientInfo() = default ;
      ClientInfo(const ClientInfo &) = default ;
      ClientInfo(ClientInfo &&) = default ;
      ClientInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClientInfo() = default ;
      ClientInfo& operator=(const ClientInfo &) = default ;
      ClientInfo& operator=(ClientInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientIp_ == nullptr
        && this->newClient_ == nullptr; };
      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline ClientInfo& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // newClient Field Functions 
      bool hasNewClient() const { return this->newClient_ != nullptr;};
      void deleteNewClient() { this->newClient_ = nullptr;};
      inline bool getNewClient() const { DARABONBA_PTR_GET_DEFAULT(newClient_, false) };
      inline ClientInfo& setNewClient(bool newClient) { DARABONBA_PTR_SET_VALUE(newClient_, newClient) };


    protected:
      shared_ptr<string> clientIp_ {};
      shared_ptr<bool> newClient_ {};
    };

    virtual bool empty() const override { return this->clientInfo_ == nullptr
        && this->renderingInstanceId_ == nullptr; };
    // clientInfo Field Functions 
    bool hasClientInfo() const { return this->clientInfo_ != nullptr;};
    void deleteClientInfo() { this->clientInfo_ = nullptr;};
    inline const RefreshRenderingInstanceStreamingRequest::ClientInfo & getClientInfo() const { DARABONBA_PTR_GET_CONST(clientInfo_, RefreshRenderingInstanceStreamingRequest::ClientInfo) };
    inline RefreshRenderingInstanceStreamingRequest::ClientInfo getClientInfo() { DARABONBA_PTR_GET(clientInfo_, RefreshRenderingInstanceStreamingRequest::ClientInfo) };
    inline RefreshRenderingInstanceStreamingRequest& setClientInfo(const RefreshRenderingInstanceStreamingRequest::ClientInfo & clientInfo) { DARABONBA_PTR_SET_VALUE(clientInfo_, clientInfo) };
    inline RefreshRenderingInstanceStreamingRequest& setClientInfo(RefreshRenderingInstanceStreamingRequest::ClientInfo && clientInfo) { DARABONBA_PTR_SET_RVALUE(clientInfo_, clientInfo) };


    // renderingInstanceId Field Functions 
    bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
    void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
    inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
    inline RefreshRenderingInstanceStreamingRequest& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


  protected:
    shared_ptr<RefreshRenderingInstanceStreamingRequest::ClientInfo> clientInfo_ {};
    // This parameter is required.
    shared_ptr<string> renderingInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
