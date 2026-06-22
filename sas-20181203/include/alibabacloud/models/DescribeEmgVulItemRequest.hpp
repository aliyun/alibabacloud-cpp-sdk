// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEMGVULITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEMGVULITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeEmgVulItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEmgVulItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_TO_JSON(ScanType, scanType_);
      DARABONBA_PTR_TO_JSON(VulName, vulName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEmgVulItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
      DARABONBA_PTR_FROM_JSON(VulName, vulName_);
    };
    DescribeEmgVulItemRequest() = default ;
    DescribeEmgVulItemRequest(const DescribeEmgVulItemRequest &) = default ;
    DescribeEmgVulItemRequest(DescribeEmgVulItemRequest &&) = default ;
    DescribeEmgVulItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEmgVulItemRequest() = default ;
    DescribeEmgVulItemRequest& operator=(const DescribeEmgVulItemRequest &) = default ;
    DescribeEmgVulItemRequest& operator=(DescribeEmgVulItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkType_ == nullptr
        && this->currentPage_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->riskStatus_ == nullptr
        && this->scanType_ == nullptr && this->vulName_ == nullptr; };
    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline DescribeEmgVulItemRequest& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeEmgVulItemRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeEmgVulItemRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEmgVulItemRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeEmgVulItemRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // riskStatus Field Functions 
    bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
    void deleteRiskStatus() { this->riskStatus_ = nullptr;};
    inline string getRiskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
    inline DescribeEmgVulItemRequest& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


    // scanType Field Functions 
    bool hasScanType() const { return this->scanType_ != nullptr;};
    void deleteScanType() { this->scanType_ = nullptr;};
    inline string getScanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
    inline DescribeEmgVulItemRequest& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


    // vulName Field Functions 
    bool hasVulName() const { return this->vulName_ != nullptr;};
    void deleteVulName() { this->vulName_ = nullptr;};
    inline string getVulName() const { DARABONBA_PTR_GET_DEFAULT(vulName_, "") };
    inline DescribeEmgVulItemRequest& setVulName(string vulName) { DARABONBA_PTR_SET_VALUE(vulName_, vulName) };


  protected:
    // The check type. Valid values:
    // 
    // - **0**: POC verification
    // - **1**: version comparison.
    shared_ptr<int32_t> checkType_ {};
    // The page number of the first page to return. Default value: **1**, which indicates that query results are displayed starting from page 1.
    shared_ptr<int32_t> currentPage_ {};
    // The language type for the request and response messages. Default value: **zh**. Valid values:
    // - **zh**: Chinese
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The number of entries per page in a paged query. Default value: **10**, which indicates that 10 emergency vulnerability entries are displayed per page. Maximum value: 50.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the member accounts in the resource directory (Alibaba Cloud account).
    // > Invoke the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The risk status of the vulnerabilities to query. If this parameter is not specified, vulnerabilities of all risk statuses are returned, including those with risks and those without risks. Valid values:
    // - **y**: at risk
    // - **n**: not at risk.
    shared_ptr<string> riskStatus_ {};
    // The detection method of the vulnerabilities to query. If this parameter is not specified, vulnerabilities detected by all methods are returned by default, including version detection and network scanning. Valid values:
    // - **python**: version detection (server software version detection). Detects whether your server has disclosed software vulnerabilities.
    // - **scan**: network scanning (network traffic detection). Detects whether your public assets (Internet-accessible servers) have vulnerabilities.
    shared_ptr<string> scanType_ {};
    // The name of the emergency vulnerability to query.
    shared_ptr<string> vulName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
