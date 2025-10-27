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
      DARABONBA_PTR_TO_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_TO_JSON(ScanType, scanType_);
      DARABONBA_PTR_TO_JSON(VulName, vulName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEmgVulItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
        && return this->currentPage_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->riskStatus_ == nullptr && return this->scanType_ == nullptr
        && return this->vulName_ == nullptr; };
    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline DescribeEmgVulItemRequest& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeEmgVulItemRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeEmgVulItemRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEmgVulItemRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskStatus Field Functions 
    bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
    void deleteRiskStatus() { this->riskStatus_ = nullptr;};
    inline string riskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, "") };
    inline DescribeEmgVulItemRequest& setRiskStatus(string riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


    // scanType Field Functions 
    bool hasScanType() const { return this->scanType_ != nullptr;};
    void deleteScanType() { this->scanType_ = nullptr;};
    inline string scanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
    inline DescribeEmgVulItemRequest& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


    // vulName Field Functions 
    bool hasVulName() const { return this->vulName_ != nullptr;};
    void deleteVulName() { this->vulName_ = nullptr;};
    inline string vulName() const { DARABONBA_PTR_GET_DEFAULT(vulName_, "") };
    inline DescribeEmgVulItemRequest& setVulName(string vulName) { DARABONBA_PTR_SET_VALUE(vulName_, vulName) };


  protected:
    // The check method. Valid values:
    // *   **0**: proof of concept (POC) verification
    // *   **1**: version comparison
    std::shared_ptr<int32_t> checkType_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries to return on each page. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Specifies whether the vulnerability poses risks.\\
    // If you do not specify this parameter, all vulnerabilities are queried regardless of whether the vulnerabilities pose risks. Valid values:
    // 
    // *   **y**: yes
    // *   **n**: no
    std::shared_ptr<string> riskStatus_ = nullptr;
    // The method that is used to detect the vulnerability.\\
    // If you do not specify this parameter, all vulnerabilities are queried regardless of which method is used. Valid values:
    // 
    // *   **python**: The Version method is used. Security Center checks the software versions of your server to check whether disclosed vulnerabilities exist on your server.
    // *   **scan**: The Network Scan method is used. Security Center analyzes the access traffic to your server over the Internet to check whether vulnerabilities exist on your server.
    std::shared_ptr<string> scanType_ = nullptr;
    // The name of the urgent vulnerability.
    std::shared_ptr<string> vulName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
