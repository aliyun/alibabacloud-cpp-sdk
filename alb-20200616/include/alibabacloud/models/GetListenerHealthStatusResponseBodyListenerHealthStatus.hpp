// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODYLISTENERHEALTHSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODYLISTENERHEALTHSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerHealthStatusResponseBodyListenerHealthStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerHealthStatusResponseBodyListenerHealthStatus& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(ServerGroupInfos, serverGroupInfos_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerHealthStatusResponseBodyListenerHealthStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(ServerGroupInfos, serverGroupInfos_);
    };
    GetListenerHealthStatusResponseBodyListenerHealthStatus() = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatus(const GetListenerHealthStatusResponseBodyListenerHealthStatus &) = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatus(GetListenerHealthStatusResponseBodyListenerHealthStatus &&) = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatus() = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatus& operator=(const GetListenerHealthStatusResponseBodyListenerHealthStatus &) = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatus& operator=(GetListenerHealthStatusResponseBodyListenerHealthStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listenerId_ != nullptr
        && this->listenerPort_ != nullptr && this->listenerProtocol_ != nullptr && this->serverGroupInfos_ != nullptr; };
    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string listenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatus& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatus& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string listenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatus& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // serverGroupInfos Field Functions 
    bool hasServerGroupInfos() const { return this->serverGroupInfos_ != nullptr;};
    void deleteServerGroupInfos() { this->serverGroupInfos_ = nullptr;};
    inline const vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos> & serverGroupInfos() const { DARABONBA_PTR_GET_CONST(serverGroupInfos_, vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos>) };
    inline vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos> serverGroupInfos() { DARABONBA_PTR_GET(serverGroupInfos_, vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos>) };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatus& setServerGroupInfos(const vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos> & serverGroupInfos) { DARABONBA_PTR_SET_VALUE(serverGroupInfos_, serverGroupInfos) };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatus& setServerGroupInfos(vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos> && serverGroupInfos) { DARABONBA_PTR_SET_RVALUE(serverGroupInfos_, serverGroupInfos) };


  protected:
    // The listener ID.
    std::shared_ptr<string> listenerId_ = nullptr;
    // The listener port.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The listener protocol.
    std::shared_ptr<string> listenerProtocol_ = nullptr;
    // The information about the server group.
    std::shared_ptr<vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos>> serverGroupInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
