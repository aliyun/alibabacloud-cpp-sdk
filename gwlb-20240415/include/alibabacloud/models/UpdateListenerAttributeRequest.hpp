// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gwlb20240415
{
namespace Models
{
  class UpdateListenerAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateListenerAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(TcpIdleTimeout, tcpIdleTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateListenerAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(TcpIdleTimeout, tcpIdleTimeout_);
    };
    UpdateListenerAttributeRequest() = default ;
    UpdateListenerAttributeRequest(const UpdateListenerAttributeRequest &) = default ;
    UpdateListenerAttributeRequest(UpdateListenerAttributeRequest &&) = default ;
    UpdateListenerAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateListenerAttributeRequest() = default ;
    UpdateListenerAttributeRequest& operator=(const UpdateListenerAttributeRequest &) = default ;
    UpdateListenerAttributeRequest& operator=(UpdateListenerAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->listenerDescription_ == nullptr && this->listenerId_ == nullptr && this->serverGroupId_ == nullptr && this->tcpIdleTimeout_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateListenerAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateListenerAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // listenerDescription Field Functions 
    bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
    void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
    inline string getListenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
    inline UpdateListenerAttributeRequest& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline UpdateListenerAttributeRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline UpdateListenerAttributeRequest& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // tcpIdleTimeout Field Functions 
    bool hasTcpIdleTimeout() const { return this->tcpIdleTimeout_ != nullptr;};
    void deleteTcpIdleTimeout() { this->tcpIdleTimeout_ = nullptr;};
    inline int32_t getTcpIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(tcpIdleTimeout_, 0) };
    inline UpdateListenerAttributeRequest& setTcpIdleTimeout(int32_t tcpIdleTimeout) { DARABONBA_PTR_SET_VALUE(tcpIdleTimeout_, tcpIdleTimeout) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters. If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The listener description.
    // 
    // The description must be 2 to 256 characters in length, and can contain letters, digits, commas (,), periods (.), semicolons (;), forward slashes (/), at signs (@), underscores (_), and hyphens (-).
    shared_ptr<string> listenerDescription_ {};
    // The listener ID.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The server group ID.
    shared_ptr<string> serverGroupId_ {};
    // The timeout period of an idle TCP connection. Unit: seconds.
    // 
    // Valid values: **60** to **6000**.
    shared_ptr<int32_t> tcpIdleTimeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gwlb20240415
#endif
