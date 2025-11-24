// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHPROXYSTATUSRESPONSEBODYPROXYSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHPROXYSTATUSRESPONSEBODYPROXYSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshProxyStatusResponseBodyProxyStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshProxyStatusResponseBodyProxyStatus& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterSynced, clusterSynced_);
      DARABONBA_PTR_TO_JSON(EndpointPercent, endpointPercent_);
      DARABONBA_PTR_TO_JSON(EndpointSynced, endpointSynced_);
      DARABONBA_PTR_TO_JSON(IstioVersion, istioVersion_);
      DARABONBA_PTR_TO_JSON(ListenerSynced, listenerSynced_);
      DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_TO_JSON(ProxyVersion, proxyVersion_);
      DARABONBA_PTR_TO_JSON(RouteSynced, routeSynced_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshProxyStatusResponseBodyProxyStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterSynced, clusterSynced_);
      DARABONBA_PTR_FROM_JSON(EndpointPercent, endpointPercent_);
      DARABONBA_PTR_FROM_JSON(EndpointSynced, endpointSynced_);
      DARABONBA_PTR_FROM_JSON(IstioVersion, istioVersion_);
      DARABONBA_PTR_FROM_JSON(ListenerSynced, listenerSynced_);
      DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_FROM_JSON(ProxyVersion, proxyVersion_);
      DARABONBA_PTR_FROM_JSON(RouteSynced, routeSynced_);
    };
    DescribeServiceMeshProxyStatusResponseBodyProxyStatus() = default ;
    DescribeServiceMeshProxyStatusResponseBodyProxyStatus(const DescribeServiceMeshProxyStatusResponseBodyProxyStatus &) = default ;
    DescribeServiceMeshProxyStatusResponseBodyProxyStatus(DescribeServiceMeshProxyStatusResponseBodyProxyStatus &&) = default ;
    DescribeServiceMeshProxyStatusResponseBodyProxyStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshProxyStatusResponseBodyProxyStatus() = default ;
    DescribeServiceMeshProxyStatusResponseBodyProxyStatus& operator=(const DescribeServiceMeshProxyStatusResponseBodyProxyStatus &) = default ;
    DescribeServiceMeshProxyStatusResponseBodyProxyStatus& operator=(DescribeServiceMeshProxyStatusResponseBodyProxyStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterSynced_ == nullptr
        && return this->endpointPercent_ == nullptr && return this->endpointSynced_ == nullptr && return this->istioVersion_ == nullptr && return this->listenerSynced_ == nullptr && return this->proxyId_ == nullptr
        && return this->proxyVersion_ == nullptr && return this->routeSynced_ == nullptr; };
    // clusterSynced Field Functions 
    bool hasClusterSynced() const { return this->clusterSynced_ != nullptr;};
    void deleteClusterSynced() { this->clusterSynced_ = nullptr;};
    inline string clusterSynced() const { DARABONBA_PTR_GET_DEFAULT(clusterSynced_, "") };
    inline DescribeServiceMeshProxyStatusResponseBodyProxyStatus& setClusterSynced(string clusterSynced) { DARABONBA_PTR_SET_VALUE(clusterSynced_, clusterSynced) };


    // endpointPercent Field Functions 
    bool hasEndpointPercent() const { return this->endpointPercent_ != nullptr;};
    void deleteEndpointPercent() { this->endpointPercent_ = nullptr;};
    inline string endpointPercent() const { DARABONBA_PTR_GET_DEFAULT(endpointPercent_, "") };
    inline DescribeServiceMeshProxyStatusResponseBodyProxyStatus& setEndpointPercent(string endpointPercent) { DARABONBA_PTR_SET_VALUE(endpointPercent_, endpointPercent) };


    // endpointSynced Field Functions 
    bool hasEndpointSynced() const { return this->endpointSynced_ != nullptr;};
    void deleteEndpointSynced() { this->endpointSynced_ = nullptr;};
    inline string endpointSynced() const { DARABONBA_PTR_GET_DEFAULT(endpointSynced_, "") };
    inline DescribeServiceMeshProxyStatusResponseBodyProxyStatus& setEndpointSynced(string endpointSynced) { DARABONBA_PTR_SET_VALUE(endpointSynced_, endpointSynced) };


    // istioVersion Field Functions 
    bool hasIstioVersion() const { return this->istioVersion_ != nullptr;};
    void deleteIstioVersion() { this->istioVersion_ = nullptr;};
    inline string istioVersion() const { DARABONBA_PTR_GET_DEFAULT(istioVersion_, "") };
    inline DescribeServiceMeshProxyStatusResponseBodyProxyStatus& setIstioVersion(string istioVersion) { DARABONBA_PTR_SET_VALUE(istioVersion_, istioVersion) };


    // listenerSynced Field Functions 
    bool hasListenerSynced() const { return this->listenerSynced_ != nullptr;};
    void deleteListenerSynced() { this->listenerSynced_ = nullptr;};
    inline string listenerSynced() const { DARABONBA_PTR_GET_DEFAULT(listenerSynced_, "") };
    inline DescribeServiceMeshProxyStatusResponseBodyProxyStatus& setListenerSynced(string listenerSynced) { DARABONBA_PTR_SET_VALUE(listenerSynced_, listenerSynced) };


    // proxyId Field Functions 
    bool hasProxyId() const { return this->proxyId_ != nullptr;};
    void deleteProxyId() { this->proxyId_ = nullptr;};
    inline string proxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, "") };
    inline DescribeServiceMeshProxyStatusResponseBodyProxyStatus& setProxyId(string proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


    // proxyVersion Field Functions 
    bool hasProxyVersion() const { return this->proxyVersion_ != nullptr;};
    void deleteProxyVersion() { this->proxyVersion_ = nullptr;};
    inline string proxyVersion() const { DARABONBA_PTR_GET_DEFAULT(proxyVersion_, "") };
    inline DescribeServiceMeshProxyStatusResponseBodyProxyStatus& setProxyVersion(string proxyVersion) { DARABONBA_PTR_SET_VALUE(proxyVersion_, proxyVersion) };


    // routeSynced Field Functions 
    bool hasRouteSynced() const { return this->routeSynced_ != nullptr;};
    void deleteRouteSynced() { this->routeSynced_ = nullptr;};
    inline string routeSynced() const { DARABONBA_PTR_GET_DEFAULT(routeSynced_, "") };
    inline DescribeServiceMeshProxyStatusResponseBodyProxyStatus& setRouteSynced(string routeSynced) { DARABONBA_PTR_SET_VALUE(routeSynced_, routeSynced) };


  protected:
    // The update status of the proxy. Valid values:
    // 
    // *   `SYNCED`: The status of the proxy is updated.
    // *   `NOT SENT`: The status of the proxy is not updated.
    // *   `STALE (Never Acknowledged)`: Istiod has sent multiple requests to the Envoy proxy to update the status of the proxy but receives no response.
    // *   `STALE`: Istiod has sent a request to the Envoy proxy to update the status of the proxy but receives no response.
    std::shared_ptr<string> clusterSynced_ = nullptr;
    // The percentage of the updated endpoints.
    std::shared_ptr<string> endpointPercent_ = nullptr;
    // The update status of the endpoint. Valid values:
    // 
    // *   `SYNCED`: The status of the endpoint is updated.
    // *   `NOT SENT`: The status of the endpoint is not updated.
    // *   `STALE (Never Acknowledged)`: Istiod has sent multiple requests to the Envoy proxy to update the status of the endpoint but receives no response.
    // *   `STALE`: Istiod has sent a request to the Envoy proxy to update the status of the endpoint but receives no response.
    std::shared_ptr<string> endpointSynced_ = nullptr;
    // The version of Istiod.
    std::shared_ptr<string> istioVersion_ = nullptr;
    // The update status of the listener. Valid values:
    // 
    // *   `SYNCED`: The status of the listener is updated.
    // *   `NOT SENT`: The status of the listener is not updated.
    // *   `STALE (Never Acknowledged)`: Istiod has sent multiple requests to the Envoy proxy to update the status of the listener but receives no response.
    // *   `STALE`: Istiod has sent a request to the Envoy proxy to update the status of the listener but receives no response.
    std::shared_ptr<string> listenerSynced_ = nullptr;
    // The ID of the proxy on the data plane.
    std::shared_ptr<string> proxyId_ = nullptr;
    // The version number of a proxy on the data plane.
    std::shared_ptr<string> proxyVersion_ = nullptr;
    // The update status of the route. Valid values:
    // 
    // *   `SYNCED`: The status of the route is updated.
    // *   `NOT SENT`: The status of the route is not updated.
    // *   `STALE (Never Acknowledged)`: Istiod has sent multiple requests to the Envoy proxy to update the status of the route but receives no response.
    // *   `STALE`: Istiod has sent a request to the Envoy proxy to update the status of the route but receives no response.
    std::shared_ptr<string> routeSynced_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
