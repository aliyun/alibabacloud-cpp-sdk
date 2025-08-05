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
    virtual bool empty() const override { this->applicationName_ != nullptr
        && this->categoryId_ != nullptr && this->currentPage_ != nullptr && this->dstIP_ != nullptr && this->endTime_ != nullptr && this->lang_ != nullptr
        && this->order_ != nullptr && this->pageSize_ != nullptr && this->port_ != nullptr && this->privateIP_ != nullptr && this->publicIP_ != nullptr
        && this->sort_ != nullptr && this->startTime_ != nullptr && this->tagIdNew_ != nullptr; };
    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline DescribeOutgoingDestinationIPRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline DescribeOutgoingDestinationIPRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeOutgoingDestinationIPRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dstIP Field Functions 
    bool hasDstIP() const { return this->dstIP_ != nullptr;};
    void deleteDstIP() { this->dstIP_ = nullptr;};
    inline string dstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
    inline DescribeOutgoingDestinationIPRequest& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeOutgoingDestinationIPRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeOutgoingDestinationIPRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeOutgoingDestinationIPRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeOutgoingDestinationIPRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeOutgoingDestinationIPRequest& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // privateIP Field Functions 
    bool hasPrivateIP() const { return this->privateIP_ != nullptr;};
    void deletePrivateIP() { this->privateIP_ = nullptr;};
    inline string privateIP() const { DARABONBA_PTR_GET_DEFAULT(privateIP_, "") };
    inline DescribeOutgoingDestinationIPRequest& setPrivateIP(string privateIP) { DARABONBA_PTR_SET_VALUE(privateIP_, privateIP) };


    // publicIP Field Functions 
    bool hasPublicIP() const { return this->publicIP_ != nullptr;};
    void deletePublicIP() { this->publicIP_ = nullptr;};
    inline string publicIP() const { DARABONBA_PTR_GET_DEFAULT(publicIP_, "") };
    inline DescribeOutgoingDestinationIPRequest& setPublicIP(string publicIP) { DARABONBA_PTR_SET_VALUE(publicIP_, publicIP) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline DescribeOutgoingDestinationIPRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeOutgoingDestinationIPRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tagIdNew Field Functions 
    bool hasTagIdNew() const { return this->tagIdNew_ != nullptr;};
    void deleteTagIdNew() { this->tagIdNew_ = nullptr;};
    inline string tagIdNew() const { DARABONBA_PTR_GET_DEFAULT(tagIdNew_, "") };
    inline DescribeOutgoingDestinationIPRequest& setTagIdNew(string tagIdNew) { DARABONBA_PTR_SET_VALUE(tagIdNew_, tagIdNew) };


  protected:
    // The application type in the access control policy. Valid values:
    // 
    // *   **FTP**
    // *   **HTTP**
    // *   **HTTPS**
    // *   **Memcache**
    // *   **MongoDB**
    // *   **MQTT**
    // *   **MySQL**
    // *   **RDP**
    // *   **Redis**
    // *   **SMTP**
    // *   **SMTPS**
    // *   **SSH**
    // *   **SSL_No_Cert**
    // *   **SSL**
    // *   **VNC**
    // 
    // >  The value of this parameter depends on the value of Proto. If you set Proto to TCP, you can set ApplicationNameList to any valid value. If you specify both ApplicationNameList and ApplicationName, only the value of ApplicationNameList is used.
    std::shared_ptr<string> applicationName_ = nullptr;
    // The ID of the service to which the destination IP address belongs. This parameter is left empty by default. Valid values:
    // 
    // *   **All**: all services
    // *   **RiskDomain**: risky domain names
    // *   **RiskIP**: risky IP addresses
    // *   **AliYun**: Alibaba Cloud services
    // *   **NotAliYun**: third-party services
    std::shared_ptr<string> categoryId_ = nullptr;
    // The number of the page to return.
    // 
    // Default value: 1.
    std::shared_ptr<string> currentPage_ = nullptr;
    // The destination IP address in the outbound connection that is initiated to access a domain name.
    std::shared_ptr<string> dstIP_ = nullptr;
    // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default)
    // *   **en**
    std::shared_ptr<string> lang_ = nullptr;
    // The method that you want to use to sort the query results. Valid values:
    // 
    // *   **asc**
    // *   **desc** (default)
    std::shared_ptr<string> order_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Default value: 6. Maximum value: 10.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The port number.
    std::shared_ptr<string> port_ = nullptr;
    // The private IP address of the ECS instance that initiates the outbound connection.
    std::shared_ptr<string> privateIP_ = nullptr;
    // The public IP address of the Elastic Compute Service (ECS) instance that initiates the outbound connection.
    std::shared_ptr<string> publicIP_ = nullptr;
    // The field based on which you want to sort the query results. Valid values:
    // 
    // *   **SessionCount** (default): the number of requests.
    // *   **TotalBytes**: the total volume of traffic.
    std::shared_ptr<string> sort_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The ID of the tag. Valid values:
    // 
    // *   **AliYun**: Alibaba Cloud service
    // *   **RiskDomain**: risky domain name
    // *   **RiskIP**: risky IP address
    // *   **TrustedDomain**: trusted website
    // *   **AliPay**: Alipay
    // *   **DingDing**: DingTalk
    // *   **WeChat**: WeChat
    // *   **QQ**: Tencent QQ
    // *   **SecurityService**: security service
    // *   **Microsoft**: Microsoft
    // *   **Amazon**: Amazon Web Services (AWS)
    // *   **Pan**: cloud disk
    // *   **Map**: map
    // *   **Code**: code hosting
    // *   **SystemService**: system service
    // *   **Taobao**: Taobao
    // *   **Google**: Google
    // *   **ThirdPartyService**: third-party service
    // *   **FirstFlow**: the first time
    // *   **Downloader**: malicious download
    // *   **Alexa Top1M**: popular website
    // *   **Miner**: mining pool
    // *   **Intelligence**: threat intelligence
    // *   **DDoS**: DDoS trojan
    // *   **Ransomware**: ransomware
    // *   **Spyware**: spyware
    // *   **Rogue**: rogue software
    // *   **Botnet**: botnet
    // *   **Suspicious**: suspicious website
    // *   **C\\&C**: command and control (C\\&C)
    // *   **Gang**: gang
    // *   **CVE**: Common Vulnerabilities and Exposures (CVE)
    // *   **Backdoor**: webshell
    // *   **Phishing**: phishing website
    // *   **APT**: advanced persistent threat (APT) attack
    // *   **Supply Chain Attack**: supply chain attack
    // *   **Malicious software**: malware
    std::shared_ptr<string> tagIdNew_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
