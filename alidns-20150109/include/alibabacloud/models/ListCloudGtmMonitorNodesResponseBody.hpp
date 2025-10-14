// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCloudGtmMonitorNodesResponseBodyIpv4IspCityNodes.hpp>
#include <alibabacloud/models/ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmMonitorNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmMonitorNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4IspCityNodes, ipv4IspCityNodes_);
      DARABONBA_PTR_TO_JSON(Ipv6IspCityNodes, ipv6IspCityNodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmMonitorNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4IspCityNodes, ipv4IspCityNodes_);
      DARABONBA_PTR_FROM_JSON(Ipv6IspCityNodes, ipv6IspCityNodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCloudGtmMonitorNodesResponseBody() = default ;
    ListCloudGtmMonitorNodesResponseBody(const ListCloudGtmMonitorNodesResponseBody &) = default ;
    ListCloudGtmMonitorNodesResponseBody(ListCloudGtmMonitorNodesResponseBody &&) = default ;
    ListCloudGtmMonitorNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmMonitorNodesResponseBody() = default ;
    ListCloudGtmMonitorNodesResponseBody& operator=(const ListCloudGtmMonitorNodesResponseBody &) = default ;
    ListCloudGtmMonitorNodesResponseBody& operator=(ListCloudGtmMonitorNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv4IspCityNodes_ == nullptr
        && return this->ipv6IspCityNodes_ == nullptr && return this->requestId_ == nullptr; };
    // ipv4IspCityNodes Field Functions 
    bool hasIpv4IspCityNodes() const { return this->ipv4IspCityNodes_ != nullptr;};
    void deleteIpv4IspCityNodes() { this->ipv4IspCityNodes_ = nullptr;};
    inline const ListCloudGtmMonitorNodesResponseBodyIpv4IspCityNodes & ipv4IspCityNodes() const { DARABONBA_PTR_GET_CONST(ipv4IspCityNodes_, ListCloudGtmMonitorNodesResponseBodyIpv4IspCityNodes) };
    inline ListCloudGtmMonitorNodesResponseBodyIpv4IspCityNodes ipv4IspCityNodes() { DARABONBA_PTR_GET(ipv4IspCityNodes_, ListCloudGtmMonitorNodesResponseBodyIpv4IspCityNodes) };
    inline ListCloudGtmMonitorNodesResponseBody& setIpv4IspCityNodes(const ListCloudGtmMonitorNodesResponseBodyIpv4IspCityNodes & ipv4IspCityNodes) { DARABONBA_PTR_SET_VALUE(ipv4IspCityNodes_, ipv4IspCityNodes) };
    inline ListCloudGtmMonitorNodesResponseBody& setIpv4IspCityNodes(ListCloudGtmMonitorNodesResponseBodyIpv4IspCityNodes && ipv4IspCityNodes) { DARABONBA_PTR_SET_RVALUE(ipv4IspCityNodes_, ipv4IspCityNodes) };


    // ipv6IspCityNodes Field Functions 
    bool hasIpv6IspCityNodes() const { return this->ipv6IspCityNodes_ != nullptr;};
    void deleteIpv6IspCityNodes() { this->ipv6IspCityNodes_ = nullptr;};
    inline const ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes & ipv6IspCityNodes() const { DARABONBA_PTR_GET_CONST(ipv6IspCityNodes_, ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes) };
    inline ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes ipv6IspCityNodes() { DARABONBA_PTR_GET(ipv6IspCityNodes_, ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes) };
    inline ListCloudGtmMonitorNodesResponseBody& setIpv6IspCityNodes(const ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes & ipv6IspCityNodes) { DARABONBA_PTR_SET_VALUE(ipv6IspCityNodes_, ipv6IspCityNodes) };
    inline ListCloudGtmMonitorNodesResponseBody& setIpv6IspCityNodes(ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes && ipv6IspCityNodes) { DARABONBA_PTR_SET_RVALUE(ipv6IspCityNodes_, ipv6IspCityNodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudGtmMonitorNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Public IPv4 monitoring node list.
    std::shared_ptr<ListCloudGtmMonitorNodesResponseBodyIpv4IspCityNodes> ipv4IspCityNodes_ = nullptr;
    // List of public IPv6 monitoring nodes.
    std::shared_ptr<ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes> ipv6IspCityNodes_ = nullptr;
    // Unique request identification code.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
