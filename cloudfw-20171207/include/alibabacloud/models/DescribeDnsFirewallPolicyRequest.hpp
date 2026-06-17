// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSFIREWALLPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSFIREWALLPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeDnsFirewallPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsFirewallPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclAction, aclAction_);
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Release, release_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsFirewallPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclAction, aclAction_);
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Release, release_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeDnsFirewallPolicyRequest() = default ;
    DescribeDnsFirewallPolicyRequest(const DescribeDnsFirewallPolicyRequest &) = default ;
    DescribeDnsFirewallPolicyRequest(DescribeDnsFirewallPolicyRequest &&) = default ;
    DescribeDnsFirewallPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsFirewallPolicyRequest() = default ;
    DescribeDnsFirewallPolicyRequest& operator=(const DescribeDnsFirewallPolicyRequest &) = default ;
    DescribeDnsFirewallPolicyRequest& operator=(DescribeDnsFirewallPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclAction_ == nullptr
        && this->aclUuid_ == nullptr && this->currentPage_ == nullptr && this->description_ == nullptr && this->destination_ == nullptr && this->ipVersion_ == nullptr
        && this->lang_ == nullptr && this->pageSize_ == nullptr && this->release_ == nullptr && this->source_ == nullptr && this->sourceIp_ == nullptr; };
    // aclAction Field Functions 
    bool hasAclAction() const { return this->aclAction_ != nullptr;};
    void deleteAclAction() { this->aclAction_ = nullptr;};
    inline string getAclAction() const { DARABONBA_PTR_GET_DEFAULT(aclAction_, "") };
    inline DescribeDnsFirewallPolicyRequest& setAclAction(string aclAction) { DARABONBA_PTR_SET_VALUE(aclAction_, aclAction) };


    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string getAclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline DescribeDnsFirewallPolicyRequest& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeDnsFirewallPolicyRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDnsFirewallPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string getDestination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline DescribeDnsFirewallPolicyRequest& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeDnsFirewallPolicyRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDnsFirewallPolicyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeDnsFirewallPolicyRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // release Field Functions 
    bool hasRelease() const { return this->release_ != nullptr;};
    void deleteRelease() { this->release_ = nullptr;};
    inline string getRelease() const { DARABONBA_PTR_GET_DEFAULT(release_, "") };
    inline DescribeDnsFirewallPolicyRequest& setRelease(string release) { DARABONBA_PTR_SET_VALUE(release_, release) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeDnsFirewallPolicyRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeDnsFirewallPolicyRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The action that is performed on traffic that hits the DNS firewall policy. Valid values:
    // 
    // - **accept**: allows the traffic.
    // 
    // - **drop**: denies the traffic.
    // 
    // - **log**: monitors the traffic.
    // 
    // > If you do not specify this parameter, policies of all action types are queried.
    shared_ptr<string> aclAction_ {};
    // The unique ID of the firewall rule.
    shared_ptr<string> aclUuid_ {};
    // The page number to return. Default value: 1.
    // 
    // This parameter is required.
    shared_ptr<string> currentPage_ {};
    // The description of the DNS firewall policy.
    shared_ptr<string> description_ {};
    // The destination address in the DNS firewall policy. Fuzzy match is supported.
    // 
    // > The value of Destination can be a CIDR block, a domain name, or an address book.
    shared_ptr<string> destination_ {};
    // The IP version that is supported. Valid values:
    // 
    // - **4**: IPv4
    // 
    // - **6**: IPv6
    shared_ptr<string> ipVersion_ {};
    // The language of the response messages. Valid values: **zh** (Chinese) and **en** (English).
    shared_ptr<string> lang_ {};
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    shared_ptr<string> pageSize_ {};
    // The status of the access control policy. The policy is enabled by default after it is created. Valid values:
    // 
    // - **true**: enables the access control policy.
    // 
    // - **false**: disables the access control policy.
    shared_ptr<string> release_ {};
    // The source address in the DNS firewall policy. Fuzzy match is supported.
    // 
    // > The value of Source can be a CIDR block or an address book.
    shared_ptr<string> source_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
