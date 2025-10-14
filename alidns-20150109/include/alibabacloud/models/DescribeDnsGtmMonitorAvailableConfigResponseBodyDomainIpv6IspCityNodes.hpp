// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESPONSEBODYDOMAINIPV6ISPCITYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESPONSEBODYDOMAINIPV6ISPCITYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodesDomainIpv6IspCityNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes& obj) { 
      DARABONBA_PTR_TO_JSON(DomainIpv6IspCityNode, domainIpv6IspCityNode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainIpv6IspCityNode, domainIpv6IspCityNode_);
    };
    DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes() = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes(const DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes &) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes(DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes &&) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes() = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes& operator=(const DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes &) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes& operator=(DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainIpv6IspCityNode_ == nullptr; };
    // domainIpv6IspCityNode Field Functions 
    bool hasDomainIpv6IspCityNode() const { return this->domainIpv6IspCityNode_ != nullptr;};
    void deleteDomainIpv6IspCityNode() { this->domainIpv6IspCityNode_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodesDomainIpv6IspCityNode> & domainIpv6IspCityNode() const { DARABONBA_PTR_GET_CONST(domainIpv6IspCityNode_, vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodesDomainIpv6IspCityNode>) };
    inline vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodesDomainIpv6IspCityNode> domainIpv6IspCityNode() { DARABONBA_PTR_GET(domainIpv6IspCityNode_, vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodesDomainIpv6IspCityNode>) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes& setDomainIpv6IspCityNode(const vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodesDomainIpv6IspCityNode> & domainIpv6IspCityNode) { DARABONBA_PTR_SET_VALUE(domainIpv6IspCityNode_, domainIpv6IspCityNode) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodes& setDomainIpv6IspCityNode(vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodesDomainIpv6IspCityNode> && domainIpv6IspCityNode) { DARABONBA_PTR_SET_RVALUE(domainIpv6IspCityNode_, domainIpv6IspCityNode) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv6IspCityNodesDomainIpv6IspCityNode>> domainIpv6IspCityNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
