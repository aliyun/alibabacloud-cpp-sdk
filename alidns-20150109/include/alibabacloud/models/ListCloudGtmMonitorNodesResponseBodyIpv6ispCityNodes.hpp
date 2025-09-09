// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORNODESRESPONSEBODYIPV6ISPCITYNODES_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMMONITORNODESRESPONSEBODYIPV6ISPCITYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6IspCityNode, ipv6IspCityNode_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6IspCityNode, ipv6IspCityNode_);
    };
    ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes() = default ;
    ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes(const ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes &) = default ;
    ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes(ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes &&) = default ;
    ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes() = default ;
    ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes& operator=(const ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes &) = default ;
    ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes& operator=(ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6IspCityNode_ != nullptr; };
    // ipv6IspCityNode Field Functions 
    bool hasIpv6IspCityNode() const { return this->ipv6IspCityNode_ != nullptr;};
    void deleteIpv6IspCityNode() { this->ipv6IspCityNode_ = nullptr;};
    inline const vector<Models::ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode> & ipv6IspCityNode() const { DARABONBA_PTR_GET_CONST(ipv6IspCityNode_, vector<Models::ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode>) };
    inline vector<Models::ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode> ipv6IspCityNode() { DARABONBA_PTR_GET(ipv6IspCityNode_, vector<Models::ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode>) };
    inline ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes& setIpv6IspCityNode(const vector<Models::ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode> & ipv6IspCityNode) { DARABONBA_PTR_SET_VALUE(ipv6IspCityNode_, ipv6IspCityNode) };
    inline ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodes& setIpv6IspCityNode(vector<Models::ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode> && ipv6IspCityNode) { DARABONBA_PTR_SET_RVALUE(ipv6IspCityNode_, ipv6IspCityNode) };


  protected:
    std::shared_ptr<vector<Models::ListCloudGtmMonitorNodesResponseBodyIpv6IspCityNodesIpv6IspCityNode>> ipv6IspCityNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
