// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDOMAINRELATIONLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDOMAINRELATIONLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallDomainRelationListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallDomainRelationListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DomainList, domainList_);
      DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
      DARABONBA_PTR_TO_JSON(DstVpcId, dstVpcId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_TO_JSON(SrcVpcId, srcVpcId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallDomainRelationListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
      DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
      DARABONBA_PTR_FROM_JSON(DstVpcId, dstVpcId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_FROM_JSON(SrcVpcId, srcVpcId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeVpcFirewallDomainRelationListRequest() = default ;
    DescribeVpcFirewallDomainRelationListRequest(const DescribeVpcFirewallDomainRelationListRequest &) = default ;
    DescribeVpcFirewallDomainRelationListRequest(DescribeVpcFirewallDomainRelationListRequest &&) = default ;
    DescribeVpcFirewallDomainRelationListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallDomainRelationListRequest() = default ;
    DescribeVpcFirewallDomainRelationListRequest& operator=(const DescribeVpcFirewallDomainRelationListRequest &) = default ;
    DescribeVpcFirewallDomainRelationListRequest& operator=(DescribeVpcFirewallDomainRelationListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->domainList_ == nullptr && this->dstIP_ == nullptr && this->dstVpcId_ == nullptr && this->endTime_ == nullptr && this->lang_ == nullptr
        && this->order_ == nullptr && this->pageSize_ == nullptr && this->sort_ == nullptr && this->srcIP_ == nullptr && this->srcVpcId_ == nullptr
        && this->startTime_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeVpcFirewallDomainRelationListRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // domainList Field Functions 
    bool hasDomainList() const { return this->domainList_ != nullptr;};
    void deleteDomainList() { this->domainList_ = nullptr;};
    inline const vector<string> & getDomainList() const { DARABONBA_PTR_GET_CONST(domainList_, vector<string>) };
    inline vector<string> getDomainList() { DARABONBA_PTR_GET(domainList_, vector<string>) };
    inline DescribeVpcFirewallDomainRelationListRequest& setDomainList(const vector<string> & domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };
    inline DescribeVpcFirewallDomainRelationListRequest& setDomainList(vector<string> && domainList) { DARABONBA_PTR_SET_RVALUE(domainList_, domainList) };


    // dstIP Field Functions 
    bool hasDstIP() const { return this->dstIP_ != nullptr;};
    void deleteDstIP() { this->dstIP_ = nullptr;};
    inline string getDstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
    inline DescribeVpcFirewallDomainRelationListRequest& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


    // dstVpcId Field Functions 
    bool hasDstVpcId() const { return this->dstVpcId_ != nullptr;};
    void deleteDstVpcId() { this->dstVpcId_ = nullptr;};
    inline string getDstVpcId() const { DARABONBA_PTR_GET_DEFAULT(dstVpcId_, "") };
    inline DescribeVpcFirewallDomainRelationListRequest& setDstVpcId(string dstVpcId) { DARABONBA_PTR_SET_VALUE(dstVpcId_, dstVpcId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVpcFirewallDomainRelationListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVpcFirewallDomainRelationListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeVpcFirewallDomainRelationListRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeVpcFirewallDomainRelationListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeVpcFirewallDomainRelationListRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // srcIP Field Functions 
    bool hasSrcIP() const { return this->srcIP_ != nullptr;};
    void deleteSrcIP() { this->srcIP_ = nullptr;};
    inline string getSrcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
    inline DescribeVpcFirewallDomainRelationListRequest& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


    // srcVpcId Field Functions 
    bool hasSrcVpcId() const { return this->srcVpcId_ != nullptr;};
    void deleteSrcVpcId() { this->srcVpcId_ = nullptr;};
    inline string getSrcVpcId() const { DARABONBA_PTR_GET_DEFAULT(srcVpcId_, "") };
    inline DescribeVpcFirewallDomainRelationListRequest& setSrcVpcId(string srcVpcId) { DARABONBA_PTR_SET_VALUE(srcVpcId_, srcVpcId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVpcFirewallDomainRelationListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> currentPage_ {};
    shared_ptr<vector<string>> domainList_ {};
    shared_ptr<string> dstIP_ {};
    shared_ptr<string> dstVpcId_ {};
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> order_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> sort_ {};
    shared_ptr<string> srcIP_ {};
    shared_ptr<string> srcVpcId_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
