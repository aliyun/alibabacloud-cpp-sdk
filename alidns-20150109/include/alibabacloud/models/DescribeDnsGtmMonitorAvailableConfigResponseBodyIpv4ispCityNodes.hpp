// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESPONSEBODYIPV4ISPCITYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESPONSEBODYIPV4ISPCITYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodesIpv4IspCityNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4IspCityNode, ipv4IspCityNode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4IspCityNode, ipv4IspCityNode_);
    };
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes() = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes(const DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes &) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes(DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes &&) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes() = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes& operator=(const DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes &) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes& operator=(DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv4IspCityNode_ != nullptr; };
    // ipv4IspCityNode Field Functions 
    bool hasIpv4IspCityNode() const { return this->ipv4IspCityNode_ != nullptr;};
    void deleteIpv4IspCityNode() { this->ipv4IspCityNode_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodesIpv4IspCityNode> & ipv4IspCityNode() const { DARABONBA_PTR_GET_CONST(ipv4IspCityNode_, vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodesIpv4IspCityNode>) };
    inline vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodesIpv4IspCityNode> ipv4IspCityNode() { DARABONBA_PTR_GET(ipv4IspCityNode_, vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodesIpv4IspCityNode>) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes& setIpv4IspCityNode(const vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodesIpv4IspCityNode> & ipv4IspCityNode) { DARABONBA_PTR_SET_VALUE(ipv4IspCityNode_, ipv4IspCityNode) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodes& setIpv4IspCityNode(vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodesIpv4IspCityNode> && ipv4IspCityNode) { DARABONBA_PTR_SET_RVALUE(ipv4IspCityNode_, ipv4IspCityNode) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyIpv4IspCityNodesIpv4IspCityNode>> ipv4IspCityNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
