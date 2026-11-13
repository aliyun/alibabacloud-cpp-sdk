// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationIPRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationIPRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_TO_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TagIdNew, tagIdNew_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationIPRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_FROM_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TagIdNew, tagIdNew_);
    };
    DescribeOutgoingDestinationIPRequest() = default ;
    DescribeOutgoingDestinationIPRequest(const DescribeOutgoingDestinationIPRequest &) = default ;
    DescribeOutgoingDestinationIPRequest(DescribeOutgoingDestinationIPRequest &&) = default ;
    DescribeOutgoingDestinationIPRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationIPRequest() = default ;
    DescribeOutgoingDestinationIPRequest& operator=(const DescribeOutgoingDestinationIPRequest &) = default ;
    DescribeOutgoingDestinationIPRequest& operator=(DescribeOutgoingDestinationIPRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->categoryId_ == nullptr && this->currentPage_ == nullptr && this->dstIP_ == nullptr && this->endTime_ == nullptr && this->lang_ == nullptr
        && this->order_ == nullptr && this->pageSize_ == nullptr && this->port_ == nullptr && this->privateIP_ == nullptr && this->publicIP_ == nullptr
        && this->sort_ == nullptr && this->startTime_ == nullptr && this->tagIdNew_ == nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline DescribeOutgoingDestinationIPRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline DescribeOutgoingDestinationIPRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeOutgoingDestinationIPRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dstIP Field Functions 
    bool hasDstIP() const { return this->dstIP_ != nullptr;};
    void deleteDstIP() { this->dstIP_ = nullptr;};
    inline string getDstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
    inline DescribeOutgoingDestinationIPRequest& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeOutgoingDestinationIPRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeOutgoingDestinationIPRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeOutgoingDestinationIPRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeOutgoingDestinationIPRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeOutgoingDestinationIPRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateIP Field Functions 
    bool hasPrivateIP() const { return this->privateIP_ != nullptr;};
    void deletePrivateIP() { this->privateIP_ = nullptr;};
    inline string getPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(privateIP_, "") };
    inline DescribeOutgoingDestinationIPRequest& setPrivateIP(string privateIP) { DARABONBA_PTR_SET_VALUE(privateIP_, privateIP) };


    // publicIP Field Functions 
    bool hasPublicIP() const { return this->publicIP_ != nullptr;};
    void deletePublicIP() { this->publicIP_ = nullptr;};
    inline string getPublicIP() const { DARABONBA_PTR_GET_DEFAULT(publicIP_, "") };
    inline DescribeOutgoingDestinationIPRequest& setPublicIP(string publicIP) { DARABONBA_PTR_SET_VALUE(publicIP_, publicIP) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeOutgoingDestinationIPRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeOutgoingDestinationIPRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tagIdNew Field Functions 
    bool hasTagIdNew() const { return this->tagIdNew_ != nullptr;};
    void deleteTagIdNew() { this->tagIdNew_ = nullptr;};
    inline string getTagIdNew() const { DARABONBA_PTR_GET_DEFAULT(tagIdNew_, "") };
    inline DescribeOutgoingDestinationIPRequest& setTagIdNew(string tagIdNew) { DARABONBA_PTR_SET_VALUE(tagIdNew_, tagIdNew) };


  protected:
    // The Protocol Type supported by the access control policy. Valid values:
    // - **FTP**
    // - **HTTP**
    // - **HTTPS**
    // - **Memcache**
    // - **MongoDB**
    // - **MQTT**
    // - **MySQL**
    // - **RDP**
    // - **Redis**
    // - **SMTP**
    // - **SMTPS**
    // - **SSH**
    // - **SSL_No_Cert**
    // - **SSL**
    // - **VNC**
    // 
    // > The valid values of this parameter depend on the value of the Proto parameter. If Proto is set to TCP, ApplicationNameList supports all the preceding Protocol Types. If both ApplicationNameList and ApplicationName are specified, ApplicationNameList takes precedence.
    shared_ptr<string> applicationName_ {};
    // The category ID. Default value: null. Valid values:
    // 
    // - **All**: All categories.
    // - **RiskDomain**: Risky domain names.
    // - **RiskIP**: Risky IP addresses.
    // - **AliYun**: Alibaba Cloud services.
    // - **NotAliYun**: Non-Alibaba Cloud services.
    shared_ptr<string> categoryId_ {};
    // Sets the paging settings to specify the page number to return for a paged query.
    // 
    // Default value: 1, which means the first page is returned.
    shared_ptr<string> currentPage_ {};
    // The destination IP address of the domain name for outbound connections.
    shared_ptr<string> dstIP_ {};
    // The end time of the query. The value is a UNIX timestamp accurate to seconds.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The language of the response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The sort order. Valid values:
    // 
    // - **asc**: Ascending order.
    // - **desc** (default): Descending order.
    shared_ptr<string> order_ {};
    // Sets the paging settings to specify the number of entries to return on each page for a paged query.
    // 
    // Default value: 6, which means 6 entries are returned on each page. Maximum value: 10.
    shared_ptr<string> pageSize_ {};
    // The port number.
    shared_ptr<string> port_ {};
    // The private IP address of the ECS instance that initiates the outbound connection.
    shared_ptr<string> privateIP_ {};
    // The public IP address of the ECS instance that initiates the outbound connection.
    shared_ptr<string> publicIP_ {};
    // The field by which to sort the results. Valid values:
    // 
    // - **SessionCount** (default): The number of requests.
    // - **TotalBytes**: The total volume of traffic.
    shared_ptr<string> sort_ {};
    // The start time of the query. The value is a UNIX timestamp accurate to seconds.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The intelligence tag ID. Valid values:
    // - **AliYun**: Alibaba Cloud services.
    // - **RiskDomain**: Risky domain names.
    // - **RiskIP**: Risky IP addresses.
    // - **TrustedDomain**: Trusted websites.
    // - **AliPay**: Alipay.
    // - **DingDing**: DingTalk.
    // - **WeChat**: WeChat.
    // - **QQ**: Tencent QQ.
    // - **SecurityService**: Security services.
    // - **Microsoft**: Microsoft.
    // - **Amazon**: Amazon.
    // - **Pan**: Cloud disks.
    // - **Map**: Maps.
    // - **Code**: Code hosting.
    // - **SystemService**: System services.
    // - **Taobao**: Taobao.
    // - **Google**: Google.
    // - **ThirdPartyService**: Third-party platform services.
    // - **FirstFlow**: First visit.
    // - **Downloader**: Malicious download.
    // - **Alexa Top1M**: Popular website.
    // - **Miner**: Miner Pool.
    // - **Intelligence**: Threat intelligence.
    // - **DDoS**: DDoS Trojan.
    // - **Ransomware**: Ransomware.
    // - **Spyware**: Spyware.
    // - **Rogue**: Rogue software.
    // - **Botnet**: Botnets.
    // - **Suspicious**: Suspicious websites.
    // - **C&C**: Remote control.
    // - **Gang**: Gangs.
    // - **CVE**: CVE vulnerabilities.
    // - **Backdoor**: Backdoor Trojans.
    // - **Phishing**: Phishing websites.
    // - **APT**: APT attacks.
    // - **Supply Chain Attack**: Supply chain attacks.
    // - **Malicious software**: Malware.
    shared_ptr<string> tagIdNew_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
