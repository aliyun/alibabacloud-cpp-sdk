// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELISTENERSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELISTENERSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetServiceListenersResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceListenersResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
      DARABONBA_PTR_TO_JSON(Agent, agent_);
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Cluster, cluster_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceListenersResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
      DARABONBA_PTR_FROM_JSON(Agent, agent_);
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    GetServiceListenersResponseBodyData() = default ;
    GetServiceListenersResponseBodyData(const GetServiceListenersResponseBodyData &) = default ;
    GetServiceListenersResponseBodyData(GetServiceListenersResponseBodyData &&) = default ;
    GetServiceListenersResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceListenersResponseBodyData() = default ;
    GetServiceListenersResponseBodyData& operator=(const GetServiceListenersResponseBodyData &) = default ;
    GetServiceListenersResponseBodyData& operator=(GetServiceListenersResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addr_ == nullptr
        && return this->agent_ == nullptr && return this->app_ == nullptr && return this->cluster_ == nullptr && return this->IP_ == nullptr && return this->namespaceId_ == nullptr
        && return this->port_ == nullptr && return this->serviceName_ == nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline string addr() const { DARABONBA_PTR_GET_DEFAULT(addr_, "") };
    inline GetServiceListenersResponseBodyData& setAddr(string addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };


    // agent Field Functions 
    bool hasAgent() const { return this->agent_ != nullptr;};
    void deleteAgent() { this->agent_ = nullptr;};
    inline string agent() const { DARABONBA_PTR_GET_DEFAULT(agent_, "") };
    inline GetServiceListenersResponseBodyData& setAgent(string agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };


    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline GetServiceListenersResponseBodyData& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string cluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline GetServiceListenersResponseBodyData& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline GetServiceListenersResponseBodyData& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline GetServiceListenersResponseBodyData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline GetServiceListenersResponseBodyData& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceListenersResponseBodyData& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The IP address of the listener.
    std::shared_ptr<string> addr_ = nullptr;
    // The listener client version.
    std::shared_ptr<string> agent_ = nullptr;
    // The application name of the listener.
    std::shared_ptr<string> app_ = nullptr;
    // The name of the cluster to which the monitored service belongs.
    std::shared_ptr<string> cluster_ = nullptr;
    // The IP address of the monitored service.
    std::shared_ptr<string> IP_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The port number of the monitored service.
    std::shared_ptr<string> port_ = nullptr;
    // The name of the monitored service.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
