// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHECKWARNINGSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCheckWarningSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCheckWarningSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_TO_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskName, riskName_);
      DARABONBA_PTR_TO_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCheckWarningSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
      DARABONBA_PTR_FROM_JSON(RiskStatus, riskStatus_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    DescribeCheckWarningSummaryRequest() = default ;
    DescribeCheckWarningSummaryRequest(const DescribeCheckWarningSummaryRequest &) = default ;
    DescribeCheckWarningSummaryRequest(DescribeCheckWarningSummaryRequest &&) = default ;
    DescribeCheckWarningSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCheckWarningSummaryRequest() = default ;
    DescribeCheckWarningSummaryRequest& operator=(const DescribeCheckWarningSummaryRequest &) = default ;
    DescribeCheckWarningSummaryRequest& operator=(DescribeCheckWarningSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->containerFieldName_ == nullptr && this->containerFieldValue_ == nullptr && this->currentPage_ == nullptr && this->groupId_ == nullptr && this->lang_ == nullptr
        && this->pageSize_ == nullptr && this->riskName_ == nullptr && this->riskStatus_ == nullptr && this->sourceIp_ == nullptr && this->status_ == nullptr
        && this->strategyId_ == nullptr && this->targetType_ == nullptr && this->typeName_ == nullptr && this->uuids_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeCheckWarningSummaryRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // containerFieldName Field Functions 
    bool hasContainerFieldName() const { return this->containerFieldName_ != nullptr;};
    void deleteContainerFieldName() { this->containerFieldName_ = nullptr;};
    inline string getContainerFieldName() const { DARABONBA_PTR_GET_DEFAULT(containerFieldName_, "") };
    inline DescribeCheckWarningSummaryRequest& setContainerFieldName(string containerFieldName) { DARABONBA_PTR_SET_VALUE(containerFieldName_, containerFieldName) };


    // containerFieldValue Field Functions 
    bool hasContainerFieldValue() const { return this->containerFieldValue_ != nullptr;};
    void deleteContainerFieldValue() { this->containerFieldValue_ = nullptr;};
    inline string getContainerFieldValue() const { DARABONBA_PTR_GET_DEFAULT(containerFieldValue_, "") };
    inline DescribeCheckWarningSummaryRequest& setContainerFieldValue(string containerFieldValue) { DARABONBA_PTR_SET_VALUE(containerFieldValue_, containerFieldValue) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCheckWarningSummaryRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeCheckWarningSummaryRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeCheckWarningSummaryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCheckWarningSummaryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskName Field Functions 
    bool hasRiskName() const { return this->riskName_ != nullptr;};
    void deleteRiskName() { this->riskName_ = nullptr;};
    inline string getRiskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
    inline DescribeCheckWarningSummaryRequest& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


    // riskStatus Field Functions 
    bool hasRiskStatus() const { return this->riskStatus_ != nullptr;};
    void deleteRiskStatus() { this->riskStatus_ = nullptr;};
    inline int32_t getRiskStatus() const { DARABONBA_PTR_GET_DEFAULT(riskStatus_, 0) };
    inline DescribeCheckWarningSummaryRequest& setRiskStatus(int32_t riskStatus) { DARABONBA_PTR_SET_VALUE(riskStatus_, riskStatus) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeCheckWarningSummaryRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCheckWarningSummaryRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline DescribeCheckWarningSummaryRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeCheckWarningSummaryRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline DescribeCheckWarningSummaryRequest& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeCheckWarningSummaryRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The ID of the container cluster.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of container clusters.
    shared_ptr<string> clusterId_ {};
    // The name of the container field. Valid values:
    // 
    // *   **clusterId**: the ID of the cluster
    // *   **image**: the name of the image
    // *   **imageId**: the ID of the image
    // *   **namespace**: the namespace
    shared_ptr<string> containerFieldName_ {};
    // The value of the container field.
    shared_ptr<string> containerFieldValue_ {};
    // The number of the page to return.
    shared_ptr<int32_t> currentPage_ {};
    // The ID of the asset group.
    // 
    // > You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to query the IDs of asset groups.
    shared_ptr<int64_t> groupId_ {};
    // The language of the content within the request and the response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the risk item.
    shared_ptr<string> riskName_ {};
    // The status of the baseline check. Valid values:
    // 
    // *   **1**: failed
    // *   **3**: passed
    shared_ptr<int32_t> riskStatus_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The status of the check item. Valid values:
    // 
    // *   **1**: failed
    // *   **2**: verifying
    // *   **3**: passed
    // *   **5**: expired
    // *   **6**: ignored
    shared_ptr<string> status_ {};
    // The ID of the baseline check policy.
    shared_ptr<int64_t> strategyId_ {};
    // The type of the query condition. Valid values:
    // 
    // *   **uuid**: the ID of an asset
    shared_ptr<string> targetType_ {};
    // The level-1 type of check items.
    // 
    // >  You can call the [DescribeRiskType](~~DescribeRiskType~~) operation to query the level-1 types of check items.
    shared_ptr<string> typeName_ {};
    // The UUID of the asset.
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of assets.
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
