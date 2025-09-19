// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_TO_JSON(CheckKey, checkKey_);
      DARABONBA_PTR_TO_JSON(CheckTypes, checkTypes_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(CustomParam, customParam_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OperationTypes, operationTypes_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequirementIds, requirementIds_);
      DARABONBA_PTR_TO_JSON(RiskLevels, riskLevels_);
      DARABONBA_PTR_TO_JSON(SortTypes, sortTypes_);
      DARABONBA_PTR_TO_JSON(StandardIds, standardIds_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
      DARABONBA_PTR_TO_JSON(TaskSources, taskSources_);
      DARABONBA_PTR_TO_JSON(Types, types_);
      DARABONBA_PTR_TO_JSON(Vendors, vendors_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_FROM_JSON(CheckKey, checkKey_);
      DARABONBA_PTR_FROM_JSON(CheckTypes, checkTypes_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(CustomParam, customParam_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OperationTypes, operationTypes_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequirementIds, requirementIds_);
      DARABONBA_PTR_FROM_JSON(RiskLevels, riskLevels_);
      DARABONBA_PTR_FROM_JSON(SortTypes, sortTypes_);
      DARABONBA_PTR_FROM_JSON(StandardIds, standardIds_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
      DARABONBA_PTR_FROM_JSON(TaskSources, taskSources_);
      DARABONBA_PTR_FROM_JSON(Types, types_);
      DARABONBA_PTR_FROM_JSON(Vendors, vendors_);
    };
    ListCheckResultRequest() = default ;
    ListCheckResultRequest(const ListCheckResultRequest &) = default ;
    ListCheckResultRequest(ListCheckResultRequest &&) = default ;
    ListCheckResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckResultRequest() = default ;
    ListCheckResultRequest& operator=(const ListCheckResultRequest &) = default ;
    ListCheckResultRequest& operator=(ListCheckResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkIds_ != nullptr
        && this->checkKey_ != nullptr && this->checkTypes_ != nullptr && this->currentPage_ != nullptr && this->customParam_ != nullptr && this->instanceIds_ != nullptr
        && this->instanceTypes_ != nullptr && this->lang_ != nullptr && this->operationTypes_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr
        && this->requirementIds_ != nullptr && this->riskLevels_ != nullptr && this->sortTypes_ != nullptr && this->standardIds_ != nullptr && this->statuses_ != nullptr
        && this->taskSources_ != nullptr && this->types_ != nullptr && this->vendors_ != nullptr; };
    // checkIds Field Functions 
    bool hasCheckIds() const { return this->checkIds_ != nullptr;};
    void deleteCheckIds() { this->checkIds_ = nullptr;};
    inline const vector<int64_t> & checkIds() const { DARABONBA_PTR_GET_CONST(checkIds_, vector<int64_t>) };
    inline vector<int64_t> checkIds() { DARABONBA_PTR_GET(checkIds_, vector<int64_t>) };
    inline ListCheckResultRequest& setCheckIds(const vector<int64_t> & checkIds) { DARABONBA_PTR_SET_VALUE(checkIds_, checkIds) };
    inline ListCheckResultRequest& setCheckIds(vector<int64_t> && checkIds) { DARABONBA_PTR_SET_RVALUE(checkIds_, checkIds) };


    // checkKey Field Functions 
    bool hasCheckKey() const { return this->checkKey_ != nullptr;};
    void deleteCheckKey() { this->checkKey_ = nullptr;};
    inline string checkKey() const { DARABONBA_PTR_GET_DEFAULT(checkKey_, "") };
    inline ListCheckResultRequest& setCheckKey(string checkKey) { DARABONBA_PTR_SET_VALUE(checkKey_, checkKey) };


    // checkTypes Field Functions 
    bool hasCheckTypes() const { return this->checkTypes_ != nullptr;};
    void deleteCheckTypes() { this->checkTypes_ = nullptr;};
    inline const vector<string> & checkTypes() const { DARABONBA_PTR_GET_CONST(checkTypes_, vector<string>) };
    inline vector<string> checkTypes() { DARABONBA_PTR_GET(checkTypes_, vector<string>) };
    inline ListCheckResultRequest& setCheckTypes(const vector<string> & checkTypes) { DARABONBA_PTR_SET_VALUE(checkTypes_, checkTypes) };
    inline ListCheckResultRequest& setCheckTypes(vector<string> && checkTypes) { DARABONBA_PTR_SET_RVALUE(checkTypes_, checkTypes) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListCheckResultRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // customParam Field Functions 
    bool hasCustomParam() const { return this->customParam_ != nullptr;};
    void deleteCustomParam() { this->customParam_ = nullptr;};
    inline bool customParam() const { DARABONBA_PTR_GET_DEFAULT(customParam_, false) };
    inline ListCheckResultRequest& setCustomParam(bool customParam) { DARABONBA_PTR_SET_VALUE(customParam_, customParam) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ListCheckResultRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ListCheckResultRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline ListCheckResultRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline ListCheckResultRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListCheckResultRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // operationTypes Field Functions 
    bool hasOperationTypes() const { return this->operationTypes_ != nullptr;};
    void deleteOperationTypes() { this->operationTypes_ = nullptr;};
    inline const vector<string> & operationTypes() const { DARABONBA_PTR_GET_CONST(operationTypes_, vector<string>) };
    inline vector<string> operationTypes() { DARABONBA_PTR_GET(operationTypes_, vector<string>) };
    inline ListCheckResultRequest& setOperationTypes(const vector<string> & operationTypes) { DARABONBA_PTR_SET_VALUE(operationTypes_, operationTypes) };
    inline ListCheckResultRequest& setOperationTypes(vector<string> && operationTypes) { DARABONBA_PTR_SET_RVALUE(operationTypes_, operationTypes) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCheckResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCheckResultRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requirementIds Field Functions 
    bool hasRequirementIds() const { return this->requirementIds_ != nullptr;};
    void deleteRequirementIds() { this->requirementIds_ = nullptr;};
    inline const vector<int64_t> & requirementIds() const { DARABONBA_PTR_GET_CONST(requirementIds_, vector<int64_t>) };
    inline vector<int64_t> requirementIds() { DARABONBA_PTR_GET(requirementIds_, vector<int64_t>) };
    inline ListCheckResultRequest& setRequirementIds(const vector<int64_t> & requirementIds) { DARABONBA_PTR_SET_VALUE(requirementIds_, requirementIds) };
    inline ListCheckResultRequest& setRequirementIds(vector<int64_t> && requirementIds) { DARABONBA_PTR_SET_RVALUE(requirementIds_, requirementIds) };


    // riskLevels Field Functions 
    bool hasRiskLevels() const { return this->riskLevels_ != nullptr;};
    void deleteRiskLevels() { this->riskLevels_ = nullptr;};
    inline const vector<string> & riskLevels() const { DARABONBA_PTR_GET_CONST(riskLevels_, vector<string>) };
    inline vector<string> riskLevels() { DARABONBA_PTR_GET(riskLevels_, vector<string>) };
    inline ListCheckResultRequest& setRiskLevels(const vector<string> & riskLevels) { DARABONBA_PTR_SET_VALUE(riskLevels_, riskLevels) };
    inline ListCheckResultRequest& setRiskLevels(vector<string> && riskLevels) { DARABONBA_PTR_SET_RVALUE(riskLevels_, riskLevels) };


    // sortTypes Field Functions 
    bool hasSortTypes() const { return this->sortTypes_ != nullptr;};
    void deleteSortTypes() { this->sortTypes_ = nullptr;};
    inline const vector<string> & sortTypes() const { DARABONBA_PTR_GET_CONST(sortTypes_, vector<string>) };
    inline vector<string> sortTypes() { DARABONBA_PTR_GET(sortTypes_, vector<string>) };
    inline ListCheckResultRequest& setSortTypes(const vector<string> & sortTypes) { DARABONBA_PTR_SET_VALUE(sortTypes_, sortTypes) };
    inline ListCheckResultRequest& setSortTypes(vector<string> && sortTypes) { DARABONBA_PTR_SET_RVALUE(sortTypes_, sortTypes) };


    // standardIds Field Functions 
    bool hasStandardIds() const { return this->standardIds_ != nullptr;};
    void deleteStandardIds() { this->standardIds_ = nullptr;};
    inline const vector<int64_t> & standardIds() const { DARABONBA_PTR_GET_CONST(standardIds_, vector<int64_t>) };
    inline vector<int64_t> standardIds() { DARABONBA_PTR_GET(standardIds_, vector<int64_t>) };
    inline ListCheckResultRequest& setStandardIds(const vector<int64_t> & standardIds) { DARABONBA_PTR_SET_VALUE(standardIds_, standardIds) };
    inline ListCheckResultRequest& setStandardIds(vector<int64_t> && standardIds) { DARABONBA_PTR_SET_RVALUE(standardIds_, standardIds) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & statuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> statuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListCheckResultRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListCheckResultRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


    // taskSources Field Functions 
    bool hasTaskSources() const { return this->taskSources_ != nullptr;};
    void deleteTaskSources() { this->taskSources_ = nullptr;};
    inline const vector<string> & taskSources() const { DARABONBA_PTR_GET_CONST(taskSources_, vector<string>) };
    inline vector<string> taskSources() { DARABONBA_PTR_GET(taskSources_, vector<string>) };
    inline ListCheckResultRequest& setTaskSources(const vector<string> & taskSources) { DARABONBA_PTR_SET_VALUE(taskSources_, taskSources) };
    inline ListCheckResultRequest& setTaskSources(vector<string> && taskSources) { DARABONBA_PTR_SET_RVALUE(taskSources_, taskSources) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & types() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> types() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline ListCheckResultRequest& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline ListCheckResultRequest& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


    // vendors Field Functions 
    bool hasVendors() const { return this->vendors_ != nullptr;};
    void deleteVendors() { this->vendors_ = nullptr;};
    inline const vector<string> & vendors() const { DARABONBA_PTR_GET_CONST(vendors_, vector<string>) };
    inline vector<string> vendors() { DARABONBA_PTR_GET(vendors_, vector<string>) };
    inline ListCheckResultRequest& setVendors(const vector<string> & vendors) { DARABONBA_PTR_SET_VALUE(vendors_, vendors) };
    inline ListCheckResultRequest& setVendors(vector<string> && vendors) { DARABONBA_PTR_SET_RVALUE(vendors_, vendors) };


  protected:
    // The IDs of the check items.
    std::shared_ptr<vector<int64_t>> checkIds_ = nullptr;
    // The key that you want to use to search for check items in fuzzy match mode.
    std::shared_ptr<string> checkKey_ = nullptr;
    // Source type of the situation awareness check item.
    std::shared_ptr<vector<string>> checkTypes_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Specifies whether the check item supports custom parameters. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> customParam_ = nullptr;
    // The instance IDs of the cloud services that you want to query. Separate multiple IDs with commas (,).
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The asset type of the cloud services. Valid values:
    // 
    // *   **ECS**: Elastic Compute Service (ECS)
    // *   **SLB**: Server Load Balancer (SLB)
    // *   **RDS**: ApsaraDB RDS
    // *   **MONGODB**: ApsaraDB for MongoDB (MongoDB)
    // *   **KVSTORE**: ApsaraDB for Redis (Redis)
    // *   **ACR**: Container Registry
    // *   **CSK**: Container Service for Kubernetes (ACK)
    // *   **VPC**: Virtual Private Cloud (VPC)
    // *   **ACTIONTRAIL**: ActionTrail
    // *   **CDN**: Alibaba Cloud CDN (CDN)
    // *   **CAS**: Certificate Management Service (formerly SSL Certificates Service)
    // *   **RDC**: Apsara Devops
    // *   **RAM**: Resource Access Management (RAM)
    // *   **DDOS**: Anti-DDoS
    // *   **WAF**: Web Application Firewall (WAF)
    // *   **OSS**: Object Storage Service (OSS)
    // *   **POLARDB**: PolarDB
    // *   **POSTGRESQL**: ApsaraDB RDS for PostgreSQL
    // *   **MSE**: Microservices Engine (MSE)
    // *   **NAS**: File Storage NAS (NAS)
    // *   **SDDP**: Sensitive Data Discovery and Protection (SDDP)
    // *   **EIP**: Elastic IP Address (EIP)
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Specifies whether fixing is supported. Valid values:
    // 
    // *   **SUPPORT_REPAIR**
    // *   **NOT_SUPPORT_REPAIR**
    std::shared_ptr<vector<string>> operationTypes_ = nullptr;
    // The number of entries per page. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the instance. Valid values:
    // 
    // *   **cn-hangzhou**: International
    // *   **ap-southeast-1**: Singapore
    std::shared_ptr<string> regionId_ = nullptr;
    // The IDs of the requirements.
    std::shared_ptr<vector<int64_t>> requirementIds_ = nullptr;
    // The risk levels of check items. Separate multiple risk levels with commas (,). Valid values:
    // 
    // *   **HIGH**
    // *   **MEDIUM**
    // *   **LOW**
    std::shared_ptr<vector<string>> riskLevels_ = nullptr;
    // The types of the conditions based on which check items are sorted. Valid values:
    // 
    // *   **RISK_LEVEL**: risk level
    // *   **STATUS**: status
    std::shared_ptr<vector<string>> sortTypes_ = nullptr;
    // The standard IDs.
    std::shared_ptr<vector<int64_t>> standardIds_ = nullptr;
    // The statuses of check items. Separate multiple statuses with commas (,). Valid values:
    // 
    // *   **PASS**
    // *   **NOT_PASS**
    // *   **CHECKING**
    // *   **NOT_CHECK**
    // *   **WHITELIST**
    std::shared_ptr<vector<string>> statuses_ = nullptr;
    // Delete the custom category in a custom inspection item.
    std::shared_ptr<vector<string>> taskSources_ = nullptr;
    // The types of check standards.
    std::shared_ptr<vector<string>> types_ = nullptr;
    // The cloud service providers. Valid values:
    // 
    // *   **ALIYUN**: Alibaba Cloud
    // *   **TENCENT**: Tencent Cloud
    // *   **AWS**: Amazon Web Services (AWS)
    // *   **MICROSOFT**: Microsoft Azure
    std::shared_ptr<vector<string>> vendors_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
