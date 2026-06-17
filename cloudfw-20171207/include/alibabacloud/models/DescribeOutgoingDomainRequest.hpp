// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IsAITraffic, isAITraffic_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TagIdNew, tagIdNew_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IsAITraffic, isAITraffic_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TagIdNew, tagIdNew_);
    };
    DescribeOutgoingDomainRequest() = default ;
    DescribeOutgoingDomainRequest(const DescribeOutgoingDomainRequest &) = default ;
    DescribeOutgoingDomainRequest(DescribeOutgoingDomainRequest &&) = default ;
    DescribeOutgoingDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDomainRequest() = default ;
    DescribeOutgoingDomainRequest& operator=(const DescribeOutgoingDomainRequest &) = default ;
    DescribeOutgoingDomainRequest& operator=(DescribeOutgoingDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->currentPage_ == nullptr && this->dataType_ == nullptr && this->domain_ == nullptr && this->endTime_ == nullptr && this->isAITraffic_ == nullptr
        && this->lang_ == nullptr && this->order_ == nullptr && this->pageSize_ == nullptr && this->publicIP_ == nullptr && this->sort_ == nullptr
        && this->startTime_ == nullptr && this->tagIdNew_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline DescribeOutgoingDomainRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeOutgoingDomainRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeOutgoingDomainRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeOutgoingDomainRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeOutgoingDomainRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isAITraffic Field Functions 
    bool hasIsAITraffic() const { return this->isAITraffic_ != nullptr;};
    void deleteIsAITraffic() { this->isAITraffic_ = nullptr;};
    inline string getIsAITraffic() const { DARABONBA_PTR_GET_DEFAULT(isAITraffic_, "") };
    inline DescribeOutgoingDomainRequest& setIsAITraffic(string isAITraffic) { DARABONBA_PTR_SET_VALUE(isAITraffic_, isAITraffic) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeOutgoingDomainRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeOutgoingDomainRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeOutgoingDomainRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // publicIP Field Functions 
    bool hasPublicIP() const { return this->publicIP_ != nullptr;};
    void deletePublicIP() { this->publicIP_ = nullptr;};
    inline string getPublicIP() const { DARABONBA_PTR_GET_DEFAULT(publicIP_, "") };
    inline DescribeOutgoingDomainRequest& setPublicIP(string publicIP) { DARABONBA_PTR_SET_VALUE(publicIP_, publicIP) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeOutgoingDomainRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeOutgoingDomainRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tagIdNew Field Functions 
    bool hasTagIdNew() const { return this->tagIdNew_ != nullptr;};
    void deleteTagIdNew() { this->tagIdNew_ = nullptr;};
    inline string getTagIdNew() const { DARABONBA_PTR_GET_DEFAULT(tagIdNew_, "") };
    inline DescribeOutgoingDomainRequest& setTagIdNew(string tagIdNew) { DARABONBA_PTR_SET_VALUE(tagIdNew_, tagIdNew) };


  protected:
    // The asset category. If you leave this parameter empty, assets in all categories are queried. Valid values:
    // 
    // - **All**: all categories
    // 
    // - **RiskDomain**: risky domain names
    // 
    // - **RiskIP**: risky IP addresses
    // 
    // - **AliYun**: Alibaba Cloud services
    // 
    // - **NotAliYun**: third-party services
    shared_ptr<string> categoryId_ {};
    // The page number to return.
    // 
    // Default value: 1.
    shared_ptr<string> currentPage_ {};
    // The source of traffic statistics. The default value is \\`internet\\`, which indicates Internet Firewall. Valid values:
    // 
    // - **internet**: Internet Firewall
    // 
    // - **nat**: NAT Firewall
    shared_ptr<string> dataType_ {};
    // The outbound domain name.
    shared_ptr<string> domain_ {};
    // The end of the time range to query. This is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // Specifies whether to count only traffic from accessing AI services. The default value is \\`false\\`. Valid values:
    // 
    // - **true**: yes
    // 
    // - **false**: no
    shared_ptr<string> isAITraffic_ {};
    // The language of the request and response. Valid values:
    // 
    // - **zh** (default): Chinese
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The sorting order. Valid values:
    // 
    // - **asc**: ascending
    // 
    // - **desc** (default): descending
    shared_ptr<string> order_ {};
    // The number of entries to return on each page.
    // 
    // Default value: 6. Maximum value: 100.
    shared_ptr<string> pageSize_ {};
    // The public IP address of the Elastic Compute Service (ECS) instance that initiates the outbound connections.
    shared_ptr<string> publicIP_ {};
    // The field to sort by. Valid values:
    // 
    // - **SessionCount** (default): the number of requests
    // 
    // - **TotalBytes**: the total traffic
    shared_ptr<string> sort_ {};
    // The beginning of the time range to query. This is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The ID of the intelligence tag. Valid values:
    // 
    // - **AliYun**: Alibaba Cloud service
    // 
    // - **RiskDomain**: Risky domain name
    // 
    // - **RiskIP**: Risky IP address
    // 
    // - **TrustedDomain**: Trusted website
    // 
    // - **AliPay**: Alipay
    // 
    // - **DingDing**: DingTalk
    // 
    // - **WeChat**: WeChat
    // 
    // - **QQ**: Tencent QQ
    // 
    // - **SecurityService**: Security service
    // 
    // - **Microsoft**: Microsoft
    // 
    // - **Amazon**: Amazon
    // 
    // - **Pan**: Cloud storage service
    // 
    // - **Map**: Map service
    // 
    // - **Code**: Code hosting service
    // 
    // - **SystemService**: System service
    // 
    // - **Taobao**: Taobao
    // 
    // - **Google**: Google
    // 
    // - **ThirdPartyService**: Third-party service
    // 
    // - **FirstFlow**: First-time access
    // 
    // - **Downloader**: Malicious downloader
    // 
    // - **Alexa Top 1M**: Popular website
    // 
    // - **Miner**: Mining pool
    // 
    // - **Intelligence**: Threat intelligence
    // 
    // - **DDoS**: DDoS trojan
    // 
    // - **Ransomware**: Ransomware
    // 
    // - **Spyware**: Spyware
    // 
    // - **Rogue**: Rogue software
    // 
    // - **Botnet**: Botnet
    // 
    // - **Suspicious**: Suspicious website
    // 
    // - **C\\&C**: Command and control (C\\&C)
    // 
    // - **Gang**: Gang-related activity
    // 
    // - **CVE**: CVE vulnerability
    // 
    // - **Backdoor**: Backdoor
    // 
    // - **Phishing**: Phishing website
    // 
    // - **APT**: Advanced Persistent Threat (APT) attack
    // 
    // - **Supply Chain Attack**: Supply chain attack
    // 
    // - **Malware**: Malicious software
    shared_ptr<string> tagIdNew_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
