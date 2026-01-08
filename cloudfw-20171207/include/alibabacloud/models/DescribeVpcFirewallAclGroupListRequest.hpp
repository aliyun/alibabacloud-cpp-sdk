// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACLGROUPLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLACLGROUPLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallAclGroupListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallAclGroupListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FirewallConfigureStatus, firewallConfigureStatus_);
      DARABONBA_PTR_TO_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallAclGroupListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FirewallConfigureStatus, firewallConfigureStatus_);
      DARABONBA_PTR_FROM_JSON(FirewallId, firewallId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeVpcFirewallAclGroupListRequest() = default ;
    DescribeVpcFirewallAclGroupListRequest(const DescribeVpcFirewallAclGroupListRequest &) = default ;
    DescribeVpcFirewallAclGroupListRequest(DescribeVpcFirewallAclGroupListRequest &&) = default ;
    DescribeVpcFirewallAclGroupListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallAclGroupListRequest() = default ;
    DescribeVpcFirewallAclGroupListRequest& operator=(const DescribeVpcFirewallAclGroupListRequest &) = default ;
    DescribeVpcFirewallAclGroupListRequest& operator=(DescribeVpcFirewallAclGroupListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->firewallConfigureStatus_ == nullptr && this->firewallId_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeVpcFirewallAclGroupListRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // firewallConfigureStatus Field Functions 
    bool hasFirewallConfigureStatus() const { return this->firewallConfigureStatus_ != nullptr;};
    void deleteFirewallConfigureStatus() { this->firewallConfigureStatus_ = nullptr;};
    inline string getFirewallConfigureStatus() const { DARABONBA_PTR_GET_DEFAULT(firewallConfigureStatus_, "") };
    inline DescribeVpcFirewallAclGroupListRequest& setFirewallConfigureStatus(string firewallConfigureStatus) { DARABONBA_PTR_SET_VALUE(firewallConfigureStatus_, firewallConfigureStatus) };


    // firewallId Field Functions 
    bool hasFirewallId() const { return this->firewallId_ != nullptr;};
    void deleteFirewallId() { this->firewallId_ = nullptr;};
    inline string getFirewallId() const { DARABONBA_PTR_GET_DEFAULT(firewallId_, "") };
    inline DescribeVpcFirewallAclGroupListRequest& setFirewallId(string firewallId) { DARABONBA_PTR_SET_VALUE(firewallId_, firewallId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVpcFirewallAclGroupListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeVpcFirewallAclGroupListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The number of the page to return. Default value: 1.
    shared_ptr<string> currentPage_ {};
    // Specifies whether VPC firewalls are configured. Valid values:
    // 
    // *   **notconfigured**: VPC firewalls are not configured.
    // *   **configured**: VPC firewalls are configured.
    // *   If you do not specify this parameter, the access control policies of all VPC firewalls are queried.
    shared_ptr<string> firewallConfigureStatus_ {};
    // The instance ID of the VPC firewall.
    shared_ptr<string> firewallId_ {};
    // The language of the content within the response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries to return on each page. Maximum value: 50.
    shared_ptr<string> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
