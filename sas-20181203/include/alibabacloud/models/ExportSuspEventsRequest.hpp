// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTSUSPEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTSUSPEVENTSREQUEST_HPP_
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
  class ExportSuspEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportSuspEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetsTypeList, assetsTypeList_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_TO_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Levels, levels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperateErrorCodeList, operateErrorCodeList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentEventTypes, parentEventTypes_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TimeEnd, timeEnd_);
      DARABONBA_PTR_TO_JSON(TimeStart, timeStart_);
      DARABONBA_PTR_TO_JSON(UniqueInfo, uniqueInfo_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ExportSuspEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetsTypeList, assetsTypeList_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Levels, levels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperateErrorCodeList, operateErrorCodeList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentEventTypes, parentEventTypes_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TimeEnd, timeEnd_);
      DARABONBA_PTR_FROM_JSON(TimeStart, timeStart_);
      DARABONBA_PTR_FROM_JSON(UniqueInfo, uniqueInfo_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ExportSuspEventsRequest() = default ;
    ExportSuspEventsRequest(const ExportSuspEventsRequest &) = default ;
    ExportSuspEventsRequest(ExportSuspEventsRequest &&) = default ;
    ExportSuspEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportSuspEventsRequest() = default ;
    ExportSuspEventsRequest& operator=(const ExportSuspEventsRequest &) = default ;
    ExportSuspEventsRequest& operator=(ExportSuspEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assetsTypeList_ != nullptr
        && this->clusterId_ != nullptr && this->containerFieldName_ != nullptr && this->containerFieldValue_ != nullptr && this->currentPage_ != nullptr && this->dealed_ != nullptr
        && this->from_ != nullptr && this->groupId_ != nullptr && this->id_ != nullptr && this->lang_ != nullptr && this->levels_ != nullptr
        && this->name_ != nullptr && this->operateErrorCodeList_ != nullptr && this->pageSize_ != nullptr && this->parentEventTypes_ != nullptr && this->remark_ != nullptr
        && this->sourceIp_ != nullptr && this->status_ != nullptr && this->targetType_ != nullptr && this->timeEnd_ != nullptr && this->timeStart_ != nullptr
        && this->uniqueInfo_ != nullptr && this->uuid_ != nullptr; };
    // assetsTypeList Field Functions 
    bool hasAssetsTypeList() const { return this->assetsTypeList_ != nullptr;};
    void deleteAssetsTypeList() { this->assetsTypeList_ = nullptr;};
    inline const vector<string> & assetsTypeList() const { DARABONBA_PTR_GET_CONST(assetsTypeList_, vector<string>) };
    inline vector<string> assetsTypeList() { DARABONBA_PTR_GET(assetsTypeList_, vector<string>) };
    inline ExportSuspEventsRequest& setAssetsTypeList(const vector<string> & assetsTypeList) { DARABONBA_PTR_SET_VALUE(assetsTypeList_, assetsTypeList) };
    inline ExportSuspEventsRequest& setAssetsTypeList(vector<string> && assetsTypeList) { DARABONBA_PTR_SET_RVALUE(assetsTypeList_, assetsTypeList) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ExportSuspEventsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // containerFieldName Field Functions 
    bool hasContainerFieldName() const { return this->containerFieldName_ != nullptr;};
    void deleteContainerFieldName() { this->containerFieldName_ = nullptr;};
    inline string containerFieldName() const { DARABONBA_PTR_GET_DEFAULT(containerFieldName_, "") };
    inline ExportSuspEventsRequest& setContainerFieldName(string containerFieldName) { DARABONBA_PTR_SET_VALUE(containerFieldName_, containerFieldName) };


    // containerFieldValue Field Functions 
    bool hasContainerFieldValue() const { return this->containerFieldValue_ != nullptr;};
    void deleteContainerFieldValue() { this->containerFieldValue_ = nullptr;};
    inline string containerFieldValue() const { DARABONBA_PTR_GET_DEFAULT(containerFieldValue_, "") };
    inline ExportSuspEventsRequest& setContainerFieldValue(string containerFieldValue) { DARABONBA_PTR_SET_VALUE(containerFieldValue_, containerFieldValue) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline ExportSuspEventsRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string dealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline ExportSuspEventsRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline ExportSuspEventsRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ExportSuspEventsRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ExportSuspEventsRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ExportSuspEventsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // levels Field Functions 
    bool hasLevels() const { return this->levels_ != nullptr;};
    void deleteLevels() { this->levels_ = nullptr;};
    inline string levels() const { DARABONBA_PTR_GET_DEFAULT(levels_, "") };
    inline ExportSuspEventsRequest& setLevels(string levels) { DARABONBA_PTR_SET_VALUE(levels_, levels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ExportSuspEventsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operateErrorCodeList Field Functions 
    bool hasOperateErrorCodeList() const { return this->operateErrorCodeList_ != nullptr;};
    void deleteOperateErrorCodeList() { this->operateErrorCodeList_ = nullptr;};
    inline const vector<string> & operateErrorCodeList() const { DARABONBA_PTR_GET_CONST(operateErrorCodeList_, vector<string>) };
    inline vector<string> operateErrorCodeList() { DARABONBA_PTR_GET(operateErrorCodeList_, vector<string>) };
    inline ExportSuspEventsRequest& setOperateErrorCodeList(const vector<string> & operateErrorCodeList) { DARABONBA_PTR_SET_VALUE(operateErrorCodeList_, operateErrorCodeList) };
    inline ExportSuspEventsRequest& setOperateErrorCodeList(vector<string> && operateErrorCodeList) { DARABONBA_PTR_SET_RVALUE(operateErrorCodeList_, operateErrorCodeList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ExportSuspEventsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentEventTypes Field Functions 
    bool hasParentEventTypes() const { return this->parentEventTypes_ != nullptr;};
    void deleteParentEventTypes() { this->parentEventTypes_ = nullptr;};
    inline string parentEventTypes() const { DARABONBA_PTR_GET_DEFAULT(parentEventTypes_, "") };
    inline ExportSuspEventsRequest& setParentEventTypes(string parentEventTypes) { DARABONBA_PTR_SET_VALUE(parentEventTypes_, parentEventTypes) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ExportSuspEventsRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ExportSuspEventsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ExportSuspEventsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ExportSuspEventsRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // timeEnd Field Functions 
    bool hasTimeEnd() const { return this->timeEnd_ != nullptr;};
    void deleteTimeEnd() { this->timeEnd_ = nullptr;};
    inline string timeEnd() const { DARABONBA_PTR_GET_DEFAULT(timeEnd_, "") };
    inline ExportSuspEventsRequest& setTimeEnd(string timeEnd) { DARABONBA_PTR_SET_VALUE(timeEnd_, timeEnd) };


    // timeStart Field Functions 
    bool hasTimeStart() const { return this->timeStart_ != nullptr;};
    void deleteTimeStart() { this->timeStart_ = nullptr;};
    inline string timeStart() const { DARABONBA_PTR_GET_DEFAULT(timeStart_, "") };
    inline ExportSuspEventsRequest& setTimeStart(string timeStart) { DARABONBA_PTR_SET_VALUE(timeStart_, timeStart) };


    // uniqueInfo Field Functions 
    bool hasUniqueInfo() const { return this->uniqueInfo_ != nullptr;};
    void deleteUniqueInfo() { this->uniqueInfo_ = nullptr;};
    inline string uniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(uniqueInfo_, "") };
    inline ExportSuspEventsRequest& setUniqueInfo(string uniqueInfo) { DARABONBA_PTR_SET_VALUE(uniqueInfo_, uniqueInfo) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ExportSuspEventsRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The types of assets.
    std::shared_ptr<vector<string>> assetsTypeList_ = nullptr;
    // The ID of the cluster that you want to query.
    // 
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The key of the condition that is used to query alert events on containers. Valid values:
    // 
    // *   **instanceId**: the ID of the asset
    // *   **appName**: the name of the application
    // *   **clusterId**: the ID of the cluster
    // *   **regionId**: the ID of the region
    // *   **nodeName**: the name of the node
    // *   **namespace**: the namespace
    // *   **clusterName**: the name of the cluster
    // *   **image**: the name of the image
    // *   **imageRepoName**: the name of the image repository
    // *   **imageRepoNamespace**: the namespace to which the image repository belongs
    // *   **imageRepoTag**: the tag that is added to the image
    // *   **imageDigest**: the digest of the image
    std::shared_ptr<string> containerFieldName_ = nullptr;
    // The value of the condition that is used to query alert events on containers.
    std::shared_ptr<string> containerFieldValue_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<string> currentPage_ = nullptr;
    // The status of the alert event. Valid values:
    // 
    // *   **N**: unhandled
    // *   **Y**: handled
    std::shared_ptr<string> dealed_ = nullptr;
    // The data source of the exception. Set the value to sas.
    std::shared_ptr<string> from_ = nullptr;
    // The ID of the asset group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The unique ID of the alert event.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The severity of the alert event. Separate multiple severities with commas (,). Valid values:
    // 
    // *   **serious**
    // *   **suspicious**
    // *   **remind**
    std::shared_ptr<string> levels_ = nullptr;
    // The complete name of the exception.
    std::shared_ptr<string> name_ = nullptr;
    // The status codes of alert events.
    std::shared_ptr<vector<string>> operateErrorCodeList_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The alert type of the alert event. Valid values:
    // 
    // *   **Suspicious process**
    // *   **Webshell**
    // *   **Unusual logon**
    // *   **Exception**
    // *   **Sensitive file tampering**
    // *   **Malicious process (cloud threat detection)**
    // *   **Suspicious network connection**
    // *   **Suspicious account**
    // *   **Application intrusion event**
    // *   **Cloud threat detection**
    // *   **Precise defense**
    // *   **Application whitelist**
    // *   **Persistent webshell**
    // *   **Web application threat detection**
    // *   **Malicious script**
    // *   **Threat intelligence**
    // *   **Malicious network activity**
    // *   **Cluster exception**
    // *   **Webshell (on-premises threat detection)**
    // *   **Vulnerability exploitation**
    // *   **Malicious process (on-premises threat detection)**
    // *   **Trusted exception**
    // *   **Others**
    std::shared_ptr<string> parentEventTypes_ = nullptr;
    // The remarks.
    std::shared_ptr<string> remark_ = nullptr;
    // The source IP address of the request. The value of this parameter is specified by the system.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The handling status of the exception. Valid values:
    // 
    // *   **0**: all status
    // *   **1**: pending handling
    // *   **2**: ignored
    // *   **4**: confirmed
    // *   **8**: marked as false positive
    // *   **16**: handling
    // *   **32**: handled
    // *   **64**: expired
    // *   **128**: deleted
    std::shared_ptr<string> status_ = nullptr;
    // The dimension from which you want to configure the feature. Valid values:
    // 
    // *   **uuid**: the UUID of the asset
    // *   **image_repo**: the ID of the image repository
    // *   **Cluster**: the ID of the cluster
    std::shared_ptr<string> targetType_ = nullptr;
    // The end of the time range during which the exception is detected.
    std::shared_ptr<string> timeEnd_ = nullptr;
    // The beginning of the time range during which the exception is detected.
    std::shared_ptr<string> timeStart_ = nullptr;
    // The unique key of the alert event.
    std::shared_ptr<string> uniqueInfo_ = nullptr;
    // The unique ID of the associated instance.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
