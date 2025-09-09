// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESPONSEBODYDOMAINIPV4ISPCITYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMMONITORAVAILABLECONFIGRESPONSEBODYDOMAINIPV4ISPCITYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodesDomainIpv4IspCityNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes& obj) { 
      DARABONBA_PTR_TO_JSON(DomainIpv4IspCityNode, domainIpv4IspCityNode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainIpv4IspCityNode, domainIpv4IspCityNode_);
    };
    DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes() = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes(const DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes &) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes(DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes &&) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes() = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes& operator=(const DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes &) = default ;
    DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes& operator=(DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainIpv4IspCityNode_ != nullptr; };
    // domainIpv4IspCityNode Field Functions 
    bool hasDomainIpv4IspCityNode() const { return this->domainIpv4IspCityNode_ != nullptr;};
    void deleteDomainIpv4IspCityNode() { this->domainIpv4IspCityNode_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodesDomainIpv4IspCityNode> & domainIpv4IspCityNode() const { DARABONBA_PTR_GET_CONST(domainIpv4IspCityNode_, vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodesDomainIpv4IspCityNode>) };
    inline vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodesDomainIpv4IspCityNode> domainIpv4IspCityNode() { DARABONBA_PTR_GET(domainIpv4IspCityNode_, vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodesDomainIpv4IspCityNode>) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes& setDomainIpv4IspCityNode(const vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodesDomainIpv4IspCityNode> & domainIpv4IspCityNode) { DARABONBA_PTR_SET_VALUE(domainIpv4IspCityNode_, domainIpv4IspCityNode) };
    inline DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodes& setDomainIpv4IspCityNode(vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodesDomainIpv4IspCityNode> && domainIpv4IspCityNode) { DARABONBA_PTR_SET_RVALUE(domainIpv4IspCityNode_, domainIpv4IspCityNode) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmMonitorAvailableConfigResponseBodyDomainIpv4IspCityNodesDomainIpv4IspCityNode>> domainIpv4IspCityNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
