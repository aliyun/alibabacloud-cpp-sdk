// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENSUMMARYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLCENSUMMARYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallCenSummaryListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallCenSummaryListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TransitRouterType, transitRouterType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallCenSummaryListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TransitRouterType, transitRouterType_);
    };
    DescribeVpcFirewallCenSummaryListRequest() = default ;
    DescribeVpcFirewallCenSummaryListRequest(const DescribeVpcFirewallCenSummaryListRequest &) = default ;
    DescribeVpcFirewallCenSummaryListRequest(DescribeVpcFirewallCenSummaryListRequest &&) = default ;
    DescribeVpcFirewallCenSummaryListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallCenSummaryListRequest() = default ;
    DescribeVpcFirewallCenSummaryListRequest& operator=(const DescribeVpcFirewallCenSummaryListRequest &) = default ;
    DescribeVpcFirewallCenSummaryListRequest& operator=(DescribeVpcFirewallCenSummaryListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->lang_ == nullptr && this->memberUid_ == nullptr && this->pageSize_ == nullptr && this->transitRouterType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeVpcFirewallCenSummaryListRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVpcFirewallCenSummaryListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
    inline DescribeVpcFirewallCenSummaryListRequest& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeVpcFirewallCenSummaryListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // transitRouterType Field Functions 
    bool hasTransitRouterType() const { return this->transitRouterType_ != nullptr;};
    void deleteTransitRouterType() { this->transitRouterType_ = nullptr;};
    inline string getTransitRouterType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterType_, "") };
    inline DescribeVpcFirewallCenSummaryListRequest& setTransitRouterType(string transitRouterType) { DARABONBA_PTR_SET_VALUE(transitRouterType_, transitRouterType) };


  protected:
    shared_ptr<string> currentPage_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> memberUid_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> transitRouterType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
