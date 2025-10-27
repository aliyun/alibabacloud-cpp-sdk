// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWARNINGMACHINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWARNINGMACHINESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWarningMachinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWarningMachinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_TO_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HaveRisk, haveRisk_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MachineName, machineName_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskId, riskId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWarningMachinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HaveRisk, haveRisk_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MachineName, machineName_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    DescribeWarningMachinesRequest() = default ;
    DescribeWarningMachinesRequest(const DescribeWarningMachinesRequest &) = default ;
    DescribeWarningMachinesRequest(DescribeWarningMachinesRequest &&) = default ;
    DescribeWarningMachinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWarningMachinesRequest() = default ;
    DescribeWarningMachinesRequest& operator=(const DescribeWarningMachinesRequest &) = default ;
    DescribeWarningMachinesRequest& operator=(DescribeWarningMachinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->containerFieldName_ == nullptr && return this->containerFieldValue_ == nullptr && return this->currentPage_ == nullptr && return this->groupId_ == nullptr && return this->haveRisk_ == nullptr
        && return this->lang_ == nullptr && return this->machineName_ == nullptr && return this->pageSize_ == nullptr && return this->riskId_ == nullptr && return this->sourceIp_ == nullptr
        && return this->strategyId_ == nullptr && return this->targetType_ == nullptr && return this->uuids_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeWarningMachinesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // containerFieldName Field Functions 
    bool hasContainerFieldName() const { return this->containerFieldName_ != nullptr;};
    void deleteContainerFieldName() { this->containerFieldName_ = nullptr;};
    inline string containerFieldName() const { DARABONBA_PTR_GET_DEFAULT(containerFieldName_, "") };
    inline DescribeWarningMachinesRequest& setContainerFieldName(string containerFieldName) { DARABONBA_PTR_SET_VALUE(containerFieldName_, containerFieldName) };


    // containerFieldValue Field Functions 
    bool hasContainerFieldValue() const { return this->containerFieldValue_ != nullptr;};
    void deleteContainerFieldValue() { this->containerFieldValue_ = nullptr;};
    inline string containerFieldValue() const { DARABONBA_PTR_GET_DEFAULT(containerFieldValue_, "") };
    inline DescribeWarningMachinesRequest& setContainerFieldValue(string containerFieldValue) { DARABONBA_PTR_SET_VALUE(containerFieldValue_, containerFieldValue) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWarningMachinesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeWarningMachinesRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // haveRisk Field Functions 
    bool hasHaveRisk() const { return this->haveRisk_ != nullptr;};
    void deleteHaveRisk() { this->haveRisk_ = nullptr;};
    inline int32_t haveRisk() const { DARABONBA_PTR_GET_DEFAULT(haveRisk_, 0) };
    inline DescribeWarningMachinesRequest& setHaveRisk(int32_t haveRisk) { DARABONBA_PTR_SET_VALUE(haveRisk_, haveRisk) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeWarningMachinesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // machineName Field Functions 
    bool hasMachineName() const { return this->machineName_ != nullptr;};
    void deleteMachineName() { this->machineName_ = nullptr;};
    inline string machineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
    inline DescribeWarningMachinesRequest& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWarningMachinesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskId Field Functions 
    bool hasRiskId() const { return this->riskId_ != nullptr;};
    void deleteRiskId() { this->riskId_ = nullptr;};
    inline int64_t riskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, 0L) };
    inline DescribeWarningMachinesRequest& setRiskId(int64_t riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeWarningMachinesRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline DescribeWarningMachinesRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeWarningMachinesRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string uuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeWarningMachinesRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The ID of the container cluster.
    // 
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of container clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the field that is used to search for the container. Valid values:
    // 
    // *   **CONTAINER_ID**: the ID of the container
    // *   **IMAGE**: the name of the image
    // *   **NAMESPACE**: the namespace
    // *   **NODE_NAME**: the name of the node
    // *   **POD_IP**: the IP address of the pod
    // *   **HOST_IP**: the IP address of the host
    // *   **INSTANCE_ID**: the ID of the instance
    std::shared_ptr<string> containerFieldName_ = nullptr;
    // The value of the field that is used to search for the container.
    std::shared_ptr<string> containerFieldValue_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The ID of the asset group.
    // 
    // > You can call the [DescribeAllGroups](https://help.aliyun.com/document_detail/130972.html) operation to query the IDs of asset groups.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // Specifies whether risks were detected. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> haveRisk_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The name of the server on which the baseline check is performed.
    std::shared_ptr<string> machineName_ = nullptr;
    // The number of entries per page. Default value: **10**, which indicates that 10 entries of server information are displayed on each page. A maximum of 100 entries can be returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the risk item.
    // 
    // > You can call the [DescribeCheckWarningSummary](~~DescribeCheckWarningSummary~~) operation to query the IDs of risk items.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> riskId_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The ID of the baseline check policy.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
    // The type of the query condition. Valid values:
    // 
    // *   **containerId**: the ID of the container
    // *   **uuid**: the UUID of the asset
    std::shared_ptr<string> targetType_ = nullptr;
    // The UUID of the server on which the baseline check is performed. Separate multiple UUIDs with commas (,).
    std::shared_ptr<string> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
