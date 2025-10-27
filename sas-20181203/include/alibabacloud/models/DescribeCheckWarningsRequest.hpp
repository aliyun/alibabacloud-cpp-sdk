// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckWarningsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckWarningsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(RiskId, riskId_);
      DARABONBA_PTR_TO_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckWarningsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
      DARABONBA_PTR_FROM_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeCheckWarningsRequest() = default ;
    DescribeCheckWarningsRequest(const DescribeCheckWarningsRequest &) = default ;
    DescribeCheckWarningsRequest(DescribeCheckWarningsRequest &&) = default ;
    DescribeCheckWarningsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckWarningsRequest() = default ;
    DescribeCheckWarningsRequest& operator=(const DescribeCheckWarningsRequest &) = default ;
    DescribeCheckWarningsRequest& operator=(DescribeCheckWarningsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkId_ == nullptr
        && return this->checkType_ == nullptr && return this->containerName_ == nullptr && return this->currentPage_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr
        && return this->resourceDirectoryAccountId_ == nullptr && return this->riskId_ == nullptr && return this->riskStatus_ == nullptr && return this->sourceIp_ == nullptr && return this->uuid_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline DescribeCheckWarningsRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline string checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
    inline DescribeCheckWarningsRequest& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline DescribeCheckWarningsRequest& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCheckWarningsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeCheckWarningsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCheckWarningsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t resourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeCheckWarningsRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // riskId Field Functions 
    bool hasRiskId() const { return this->riskId_ != nullptr;};
    void deleteRiskId() { this->riskId_ = nullptr;};
    inline int64_t riskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, 0L) };
    inline DescribeCheckWarningsRequest& setRiskId(int64_t riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


    // riskStatus Field Functions 
    bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
    void deleteRiskStatus() { this->riskStatus_ = nullptr;};
    inline int32_t riskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, 0) };
    inline DescribeCheckWarningsRequest& setRiskStatus(int32_t riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeCheckWarningsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeCheckWarningsRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the check item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The type of the check item. Valid values:
    // 
    // *   **hc.check.type.identity_auth**: identity authentication
    // *   **hc.check.type.access_control**: access control
    // *   **hc.check.type.network_service**: network and service
    // *   **hc.check.type.service_conf**: service configuration
    // *   **hc.check.type.file_rights**: file permission
    // *   **hc.check.type.security_audit**: security audit
    // *   **hc.check.type.attack_defense**: intrusion prevention
    // *   **hc.check.type.others**: others
    std::shared_ptr<string> checkType_ = nullptr;
    // The name of the container.
    std::shared_ptr<string> containerName_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  To obtain the Alibaba Cloud account ID, call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation.
    std::shared_ptr<int64_t> resourceDirectoryAccountId_ = nullptr;
    // The ID of the risk item. This parameter is required.
    // 
    // >  To query the information about the risk items and check items of a server, you must specify the IDs of the risk items. You can call the [DescribeCheckWarningSummary](~~DescribeCheckWarningSummary~~) operation to query the IDs of risk items.
    std::shared_ptr<int64_t> riskId_ = nullptr;
    // The status of the check item. Valid values:
    // 
    // *   **1**: failed
    // *   **2**: verifying
    // *   **3**: passed
    // *   **5**: expired
    // *   **6**: ignored
    std::shared_ptr<int32_t> riskStatus_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The UUID of the server on which the baseline check is performed.
    // 
    // > To query specified risk items and the check items of a specified server, you must provide the ID of the server on which the baseline check is performed. You can call the [DescribeWarningMachines](~~DescribeWarningMachines~~) operation to query the IDs of servers.
    // 
    // This parameter is required.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
