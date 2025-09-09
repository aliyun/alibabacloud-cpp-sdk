// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESPONSEBODYIPV6ISPCITYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESPONSEBODYIPV6ISPCITYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6IspCityNode, ipv6IspCityNode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6IspCityNode, ipv6IspCityNode_);
    };
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes() = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes(const DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes &) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes(DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes &&) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes() = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes& operator=(const DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes &) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes& operator=(DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6IspCityNode_ != nullptr; };
    // ipv6IspCityNode Field Functions 
    bool hasIpv6IspCityNode() const { return this->ipv6IspCityNode_ != nullptr;};
    void deleteIpv6IspCityNode() { this->ipv6IspCityNode_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode> & ipv6IspCityNode() const { DARABONBA_PTR_GET_CONST(ipv6IspCityNode_, vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode>) };
    inline vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode> ipv6IspCityNode() { DARABONBA_PTR_GET(ipv6IspCityNode_, vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode>) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes& setIpv6IspCityNode(const vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode> & ipv6IspCityNode) { DARABONBA_PTR_SET_VALUE(ipv6IspCityNode_, ipv6IspCityNode) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodes& setIpv6IspCityNode(vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode> && ipv6IspCityNode) { DARABONBA_PTR_SET_RVALUE(ipv6IspCityNode_, ipv6IspCityNode) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv6IspCityNodesIpv6IspCityNode>> ipv6IspCityNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
