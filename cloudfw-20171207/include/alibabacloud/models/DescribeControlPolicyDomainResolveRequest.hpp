// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTROLPOLICYDOMAINRESOLVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTROLPOLICYDOMAINRESOLVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeControlPolicyDomainResolveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeControlPolicyDomainResolveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeControlPolicyDomainResolveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(FirewallType, firewallType_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    DescribeControlPolicyDomainResolveRequest() = default ;
    DescribeControlPolicyDomainResolveRequest(const DescribeControlPolicyDomainResolveRequest &) = default ;
    DescribeControlPolicyDomainResolveRequest(DescribeControlPolicyDomainResolveRequest &&) = default ;
    DescribeControlPolicyDomainResolveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeControlPolicyDomainResolveRequest() = default ;
    DescribeControlPolicyDomainResolveRequest& operator=(const DescribeControlPolicyDomainResolveRequest &) = default ;
    DescribeControlPolicyDomainResolveRequest& operator=(DescribeControlPolicyDomainResolveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->firewallType_ == nullptr && return this->ipVersion_ == nullptr && return this->lang_ == nullptr && return this->regionNo_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeControlPolicyDomainResolveRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // firewallType Field Functions 
    bool hasFirewallType() const { return this->firewallType_ != nullptr;};
    void deleteFirewallType() { this->firewallType_ = nullptr;};
    inline string firewallType() const { DARABONBA_PTR_GET_DEFAULT(firewallType_, "") };
    inline DescribeControlPolicyDomainResolveRequest& setFirewallType(string firewallType) { DARABONBA_PTR_SET_VALUE(firewallType_, firewallType) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline int32_t ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, 0) };
    inline DescribeControlPolicyDomainResolveRequest& setIpVersion(int32_t ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeControlPolicyDomainResolveRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeControlPolicyDomainResolveRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> firewallType_ = nullptr;
    std::shared_ptr<int32_t> ipVersion_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
