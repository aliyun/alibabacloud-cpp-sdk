// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGMACHINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGMACHINESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckWarningMachinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckWarningMachinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FilterUuid, filterUuid_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(RiskId, riskId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckWarningMachinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FilterUuid, filterUuid_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCheckWarningMachinesRequest() = default ;
    DescribeCheckWarningMachinesRequest(const DescribeCheckWarningMachinesRequest &) = default ;
    DescribeCheckWarningMachinesRequest(DescribeCheckWarningMachinesRequest &&) = default ;
    DescribeCheckWarningMachinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckWarningMachinesRequest() = default ;
    DescribeCheckWarningMachinesRequest& operator=(const DescribeCheckWarningMachinesRequest &) = default ;
    DescribeCheckWarningMachinesRequest& operator=(DescribeCheckWarningMachinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->currentPage_ == nullptr && return this->filterUuid_ == nullptr && return this->instanceId_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr
        && return this->remark_ == nullptr && return this->resourceDirectoryAccountId_ == nullptr && return this->riskId_ == nullptr && return this->status_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline DescribeCheckWarningMachinesRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCheckWarningMachinesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // filterUuid Field Functions 
    bool hasFilterUuid() const { return this->filterUuid_ != nullptr;};
    void deleteFilterUuid() { this->filterUuid_ = nullptr;};
    inline string filterUuid() const { DARABONBA_PTR_GET_DEFAULT(filterUuid_, "") };
    inline DescribeCheckWarningMachinesRequest& setFilterUuid(string filterUuid) { DARABONBA_PTR_SET_VALUE(filterUuid_, filterUuid) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCheckWarningMachinesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeCheckWarningMachinesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCheckWarningMachinesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeCheckWarningMachinesRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeCheckWarningMachinesRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // riskId Field Functions 
    bool hasRiskId() const { return this->riskId_ != nullptr;};
    void deleteRiskId() { this->riskId_ = nullptr;};
    inline int64_t riskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, 0L) };
    inline DescribeCheckWarningMachinesRequest& setRiskId(int64_t riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCheckWarningMachinesRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the check item.
    // 
    // > You can call the [DescribeCheckWarningSummary](~~DescribeCheckWarningSummary~~) operation to query the IDs of check items.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The instance ID of the asset that you don\\"t want to query.
    std::shared_ptr<string> filterUuid_ = nullptr;
    // The instance ID of the asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The information about the server that you want to query. The value can be the name or the public IP address of the server.
    std::shared_ptr<string> remark_ = nullptr;
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain the IDs.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
    // The ID of the baseline.
    // 
    // > You can call the [DescribeCheckWarningSummary](~~DescribeCheckWarningSummary~~) operation to query the IDs of baselines.
    std::shared_ptr<int64_t> riskId_ = nullptr;
    // The risk status of the check item. Valid values:
    // 
    // *   **1**: failed
    // *   **3**: passed
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
