// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSREQUEST_HPP_
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
  class DescribeSuspEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_TO_JSON(AssetsTypeList, assetsTypeList_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_TO_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(DetectSource, detectSource_);
      DARABONBA_PTR_TO_JSON(EventNames, eventNames_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Levels, levels_);
      DARABONBA_PTR_TO_JSON(MultiAccountActionType, multiAccountActionType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperateErrorCodeList, operateErrorCodeList_);
      DARABONBA_PTR_TO_JSON(OperateTimeEnd, operateTimeEnd_);
      DARABONBA_PTR_TO_JSON(OperateTimeStart, operateTimeStart_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentEventTypes, parentEventTypes_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(SortColumn, sortColumn_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceAliUids, sourceAliUids_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrictMode, strictMode_);
      DARABONBA_PTR_TO_JSON(SupportOperateCodeList, supportOperateCodeList_);
      DARABONBA_PTR_TO_JSON(TacticId, tacticId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TimeEnd, timeEnd_);
      DARABONBA_PTR_TO_JSON(TimeStart, timeStart_);
      DARABONBA_PTR_TO_JSON(UniqueInfo, uniqueInfo_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_FROM_JSON(AssetsTypeList, assetsTypeList_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(DetectSource, detectSource_);
      DARABONBA_PTR_FROM_JSON(EventNames, eventNames_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Levels, levels_);
      DARABONBA_PTR_FROM_JSON(MultiAccountActionType, multiAccountActionType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperateErrorCodeList, operateErrorCodeList_);
      DARABONBA_PTR_FROM_JSON(OperateTimeEnd, operateTimeEnd_);
      DARABONBA_PTR_FROM_JSON(OperateTimeStart, operateTimeStart_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentEventTypes, parentEventTypes_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(SortColumn, sortColumn_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceAliUids, sourceAliUids_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrictMode, strictMode_);
      DARABONBA_PTR_FROM_JSON(SupportOperateCodeList, supportOperateCodeList_);
      DARABONBA_PTR_FROM_JSON(TacticId, tacticId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TimeEnd, timeEnd_);
      DARABONBA_PTR_FROM_JSON(TimeStart, timeStart_);
      DARABONBA_PTR_FROM_JSON(UniqueInfo, uniqueInfo_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    DescribeSuspEventsRequest() = default ;
    DescribeSuspEventsRequest(const DescribeSuspEventsRequest &) = default ;
    DescribeSuspEventsRequest(DescribeSuspEventsRequest &&) = default ;
    DescribeSuspEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventsRequest() = default ;
    DescribeSuspEventsRequest& operator=(const DescribeSuspEventsRequest &) = default ;
    DescribeSuspEventsRequest& operator=(DescribeSuspEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmUniqueInfo_ == nullptr
        && this->assetsTypeList_ == nullptr && this->clusterId_ == nullptr && this->containerFieldName_ == nullptr && this->containerFieldValue_ == nullptr && this->currentPage_ == nullptr
        && this->dealed_ == nullptr && this->detectSource_ == nullptr && this->eventNames_ == nullptr && this->from_ == nullptr && this->groupId_ == nullptr
        && this->id_ == nullptr && this->lang_ == nullptr && this->levels_ == nullptr && this->multiAccountActionType_ == nullptr && this->name_ == nullptr
        && this->operateErrorCodeList_ == nullptr && this->operateTimeEnd_ == nullptr && this->operateTimeStart_ == nullptr && this->pageSize_ == nullptr && this->parentEventTypes_ == nullptr
        && this->remark_ == nullptr && this->resourceDirectoryAccountId_ == nullptr && this->sortColumn_ == nullptr && this->sortType_ == nullptr && this->source_ == nullptr
        && this->sourceAliUids_ == nullptr && this->sourceIp_ == nullptr && this->status_ == nullptr && this->strictMode_ == nullptr && this->supportOperateCodeList_ == nullptr
        && this->tacticId_ == nullptr && this->targetType_ == nullptr && this->timeEnd_ == nullptr && this->timeStart_ == nullptr && this->uniqueInfo_ == nullptr
        && this->uuids_ == nullptr; };
    // alarmUniqueInfo Field Functions 
    bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
    void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
    inline string getAlarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
    inline DescribeSuspEventsRequest& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


    // assetsTypeList Field Functions 
    bool hasAssetsTypeList() const { return this->assetsTypeList_ != nullptr;};
    void deleteAssetsTypeList() { this->assetsTypeList_ = nullptr;};
    inline const vector<string> & getAssetsTypeList() const { DARABONBA_PTR_GET_CONST(assetsTypeList_, vector<string>) };
    inline vector<string> getAssetsTypeList() { DARABONBA_PTR_GET(assetsTypeList_, vector<string>) };
    inline DescribeSuspEventsRequest& setAssetsTypeList(const vector<string> & assetsTypeList) { DARABONBA_PTR_SET_VALUE(assetsTypeList_, assetsTypeList) };
    inline DescribeSuspEventsRequest& setAssetsTypeList(vector<string> && assetsTypeList) { DARABONBA_PTR_SET_RVALUE(assetsTypeList_, assetsTypeList) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeSuspEventsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // containerFieldName Field Functions 
    bool hasContainerFieldName() const { return this->containerFieldName_ != nullptr;};
    void deleteContainerFieldName() { this->containerFieldName_ = nullptr;};
    inline string getContainerFieldName() const { DARABONBA_PTR_GET_DEFAULT(containerFieldName_, "") };
    inline DescribeSuspEventsRequest& setContainerFieldName(string containerFieldName) { DARABONBA_PTR_SET_VALUE(containerFieldName_, containerFieldName) };


    // containerFieldValue Field Functions 
    bool hasContainerFieldValue() const { return this->containerFieldValue_ != nullptr;};
    void deleteContainerFieldValue() { this->containerFieldValue_ = nullptr;};
    inline string getContainerFieldValue() const { DARABONBA_PTR_GET_DEFAULT(containerFieldValue_, "") };
    inline DescribeSuspEventsRequest& setContainerFieldValue(string containerFieldValue) { DARABONBA_PTR_SET_VALUE(containerFieldValue_, containerFieldValue) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeSuspEventsRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string getDealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline DescribeSuspEventsRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // detectSource Field Functions 
    bool hasDetectSource() const { return this->detectSource_ != nullptr;};
    void deleteDetectSource() { this->detectSource_ = nullptr;};
    inline string getDetectSource() const { DARABONBA_PTR_GET_DEFAULT(detectSource_, "") };
    inline DescribeSuspEventsRequest& setDetectSource(string detectSource) { DARABONBA_PTR_SET_VALUE(detectSource_, detectSource) };


    // eventNames Field Functions 
    bool hasEventNames() const { return this->eventNames_ != nullptr;};
    void deleteEventNames() { this->eventNames_ = nullptr;};
    inline string getEventNames() const { DARABONBA_PTR_GET_DEFAULT(eventNames_, "") };
    inline DescribeSuspEventsRequest& setEventNames(string eventNames) { DARABONBA_PTR_SET_VALUE(eventNames_, eventNames) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeSuspEventsRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeSuspEventsRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeSuspEventsRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSuspEventsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // levels Field Functions 
    bool hasLevels() const { return this->levels_ != nullptr;};
    void deleteLevels() { this->levels_ = nullptr;};
    inline string getLevels() const { DARABONBA_PTR_GET_DEFAULT(levels_, "") };
    inline DescribeSuspEventsRequest& setLevels(string levels) { DARABONBA_PTR_SET_VALUE(levels_, levels) };


    // multiAccountActionType Field Functions 
    bool hasMultiAccountActionType() const { return this->multiAccountActionType_ != nullptr;};
    void deleteMultiAccountActionType() { this->multiAccountActionType_ = nullptr;};
    inline int32_t getMultiAccountActionType() const { DARABONBA_PTR_GET_DEFAULT(multiAccountActionType_, 0) };
    inline DescribeSuspEventsRequest& setMultiAccountActionType(int32_t multiAccountActionType) { DARABONBA_PTR_SET_VALUE(multiAccountActionType_, multiAccountActionType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSuspEventsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operateErrorCodeList Field Functions 
    bool hasOperateErrorCodeList() const { return this->operateErrorCodeList_ != nullptr;};
    void deleteOperateErrorCodeList() { this->operateErrorCodeList_ = nullptr;};
    inline const vector<string> & getOperateErrorCodeList() const { DARABONBA_PTR_GET_CONST(operateErrorCodeList_, vector<string>) };
    inline vector<string> getOperateErrorCodeList() { DARABONBA_PTR_GET(operateErrorCodeList_, vector<string>) };
    inline DescribeSuspEventsRequest& setOperateErrorCodeList(const vector<string> & operateErrorCodeList) { DARABONBA_PTR_SET_VALUE(operateErrorCodeList_, operateErrorCodeList) };
    inline DescribeSuspEventsRequest& setOperateErrorCodeList(vector<string> && operateErrorCodeList) { DARABONBA_PTR_SET_RVALUE(operateErrorCodeList_, operateErrorCodeList) };


    // operateTimeEnd Field Functions 
    bool hasOperateTimeEnd() const { return this->operateTimeEnd_ != nullptr;};
    void deleteOperateTimeEnd() { this->operateTimeEnd_ = nullptr;};
    inline string getOperateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(operateTimeEnd_, "") };
    inline DescribeSuspEventsRequest& setOperateTimeEnd(string operateTimeEnd) { DARABONBA_PTR_SET_VALUE(operateTimeEnd_, operateTimeEnd) };


    // operateTimeStart Field Functions 
    bool hasOperateTimeStart() const { return this->operateTimeStart_ != nullptr;};
    void deleteOperateTimeStart() { this->operateTimeStart_ = nullptr;};
    inline string getOperateTimeStart() const { DARABONBA_PTR_GET_DEFAULT(operateTimeStart_, "") };
    inline DescribeSuspEventsRequest& setOperateTimeStart(string operateTimeStart) { DARABONBA_PTR_SET_VALUE(operateTimeStart_, operateTimeStart) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeSuspEventsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentEventTypes Field Functions 
    bool hasParentEventTypes() const { return this->parentEventTypes_ != nullptr;};
    void deleteParentEventTypes() { this->parentEventTypes_ = nullptr;};
    inline string getParentEventTypes() const { DARABONBA_PTR_GET_DEFAULT(parentEventTypes_, "") };
    inline DescribeSuspEventsRequest& setParentEventTypes(string parentEventTypes) { DARABONBA_PTR_SET_VALUE(parentEventTypes_, parentEventTypes) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeSuspEventsRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeSuspEventsRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // sortColumn Field Functions 
    bool hasSortColumn() const { return this->sortColumn_ != nullptr;};
    void deleteSortColumn() { this->sortColumn_ = nullptr;};
    inline string getSortColumn() const { DARABONBA_PTR_GET_DEFAULT(sortColumn_, "") };
    inline DescribeSuspEventsRequest& setSortColumn(string sortColumn) { DARABONBA_PTR_SET_VALUE(sortColumn_, sortColumn) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline string getSortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, "") };
    inline DescribeSuspEventsRequest& setSortType(string sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeSuspEventsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceAliUids Field Functions 
    bool hasSourceAliUids() const { return this->sourceAliUids_ != nullptr;};
    void deleteSourceAliUids() { this->sourceAliUids_ = nullptr;};
    inline const vector<int64_t> & getSourceAliUids() const { DARABONBA_PTR_GET_CONST(sourceAliUids_, vector<int64_t>) };
    inline vector<int64_t> getSourceAliUids() { DARABONBA_PTR_GET(sourceAliUids_, vector<int64_t>) };
    inline DescribeSuspEventsRequest& setSourceAliUids(const vector<int64_t> & sourceAliUids) { DARABONBA_PTR_SET_VALUE(sourceAliUids_, sourceAliUids) };
    inline DescribeSuspEventsRequest& setSourceAliUids(vector<int64_t> && sourceAliUids) { DARABONBA_PTR_SET_RVALUE(sourceAliUids_, sourceAliUids) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeSuspEventsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSuspEventsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strictMode Field Functions 
    bool hasStrictMode() const { return this->strictMode_ != nullptr;};
    void deleteStrictMode() { this->strictMode_ = nullptr;};
    inline string getStrictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, "") };
    inline DescribeSuspEventsRequest& setStrictMode(string strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


    // supportOperateCodeList Field Functions 
    bool hasSupportOperateCodeList() const { return this->supportOperateCodeList_ != nullptr;};
    void deleteSupportOperateCodeList() { this->supportOperateCodeList_ = nullptr;};
    inline const vector<string> & getSupportOperateCodeList() const { DARABONBA_PTR_GET_CONST(supportOperateCodeList_, vector<string>) };
    inline vector<string> getSupportOperateCodeList() { DARABONBA_PTR_GET(supportOperateCodeList_, vector<string>) };
    inline DescribeSuspEventsRequest& setSupportOperateCodeList(const vector<string> & supportOperateCodeList) { DARABONBA_PTR_SET_VALUE(supportOperateCodeList_, supportOperateCodeList) };
    inline DescribeSuspEventsRequest& setSupportOperateCodeList(vector<string> && supportOperateCodeList) { DARABONBA_PTR_SET_RVALUE(supportOperateCodeList_, supportOperateCodeList) };


    // tacticId Field Functions 
    bool hasTacticId() const { return this->tacticId_ != nullptr;};
    void deleteTacticId() { this->tacticId_ = nullptr;};
    inline string getTacticId() const { DARABONBA_PTR_GET_DEFAULT(tacticId_, "") };
    inline DescribeSuspEventsRequest& setTacticId(string tacticId) { DARABONBA_PTR_SET_VALUE(tacticId_, tacticId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeSuspEventsRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // timeEnd Field Functions 
    bool hasTimeEnd() const { return this->timeEnd_ != nullptr;};
    void deleteTimeEnd() { this->timeEnd_ = nullptr;};
    inline string getTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(timeEnd_, "") };
    inline DescribeSuspEventsRequest& setTimeEnd(string timeEnd) { DARABONBA_PTR_SET_VALUE(timeEnd_, timeEnd) };


    // timeStart Field Functions 
    bool hasTimeStart() const { return this->timeStart_ != nullptr;};
    void deleteTimeStart() { this->timeStart_ = nullptr;};
    inline string getTimeStart() const { DARABONBA_PTR_GET_DEFAULT(timeStart_, "") };
    inline DescribeSuspEventsRequest& setTimeStart(string timeStart) { DARABONBA_PTR_SET_VALUE(timeStart_, timeStart) };


    // uniqueInfo Field Functions 
    bool hasUniqueInfo() const { return this->uniqueInfo_ != nullptr;};
    void deleteUniqueInfo() { this->uniqueInfo_ = nullptr;};
    inline string getUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(uniqueInfo_, "") };
    inline DescribeSuspEventsRequest& setUniqueInfo(string uniqueInfo) { DARABONBA_PTR_SET_VALUE(uniqueInfo_, uniqueInfo) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeSuspEventsRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The unique ID of the alert event.
    // 
    // > To query the exception information of a single alert event, provide the unique ID of the alert event. You can call the [DescribeSuspEvents](~~DescribeSuspEvents~~) operation to obtain the ID.
    shared_ptr<string> alarmUniqueInfo_ {};
    // The collection of asset types.
    shared_ptr<vector<string>> assetsTypeList_ {};
    // The ID of the cluster for which you want to query alert events.
    shared_ptr<string> clusterId_ {};
    // The container search field. Valid values:
    // 
    // - **instanceId**: instance ID
    // - **appName**: application name
    // - **clusterId**: cluster ID
    // - **regionId**: region
    // - **nodeName**: node name
    // - **namespace**: namespace
    // - **clusterName**: cluster name
    // - **image**: image name
    // - **imageRepoName**: image repository name
    // - **imageRepoNamespace**: image repository namespace
    // - **imageRepoTag**: image tag
    // - **imageDigest**: image digest
    shared_ptr<string> containerFieldName_ {};
    // The value of the container search field.
    shared_ptr<string> containerFieldValue_ {};
    // The page number of the results to return. Default value: **1**.
    shared_ptr<string> currentPage_ {};
    // Specifies whether the alert events to query have been handled. Valid values:
    shared_ptr<string> dealed_ {};
    // The discovery source. This parameter is invalid.
    shared_ptr<string> detectSource_ {};
    // The subtypes of the alert events. Separate multiple subtypes with commas (,).
    shared_ptr<string> eventNames_ {};
    // The data source identifier of the alert event. The value is fixed as sas.
    shared_ptr<string> from_ {};
    // The group ID of the asset affected by the alert event.
    shared_ptr<int64_t> groupId_ {};
    // The unique ID that identifies the alert event record.
    shared_ptr<int64_t> id_ {};
    // The language of the request and response. Default value: **zh**. Valid values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The severity levels of the security alerts that you want to query. Separate multiple severity levels with commas (,). The severity levels are listed in descending order. Valid values:
    // 
    // - **serious**: Critical.
    // - **suspicious**: Suspicious.
    // - **remind**: Informational.
    shared_ptr<string> levels_ {};
    // The multi-account query type. Default value: **0**. Valid values:
    // - **0**: Queries data of the current account.
    // - **1**: Queries data of all accounts.
    shared_ptr<int32_t> multiAccountActionType_ {};
    // The name of the asset affected by the alert event.
    shared_ptr<string> name_ {};
    // The collection of alert event handling result codes.
    shared_ptr<vector<string>> operateErrorCodeList_ {};
    // The end timestamp of the handling time.
    shared_ptr<string> operateTimeEnd_ {};
    // The start timestamp of the handling time.
    shared_ptr<string> operateTimeStart_ {};
    // The number of alert events to display on each page in a paged query. Default value: **20**. Maximum value: 100.
    shared_ptr<string> pageSize_ {};
    // The Alarm Metric of the alerting events to query. Valid values:
    shared_ptr<string> parentEventTypes_ {};
    // The alert name or asset information to query.
    shared_ptr<string> remark_ {};
    // The China site (Chinese mainland) account ID of the member account in the resource directory.
    // >Call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The custom sort field. Default value: **operateTime**. Valid values:
    // 
    // - **lastTime**: the most recent occurrence time.
    // - **operateTime**: the processing time.
    // 
    // > This field takes effect only when **Dealed** is set to Y.
    shared_ptr<string> sortColumn_ {};
    // The custom sort type. Default value: **desc**. Valid values:
    // 
    // - **asc**: ascending order.
    // - **desc**: descending order.
    // 
    // > This parameter takes effect only when **Dealed** is set to Y.
    shared_ptr<string> sortType_ {};
    // The alert source.
    shared_ptr<string> source_ {};
    // The list of Alibaba Cloud account IDs that generated the alerts.
    shared_ptr<vector<int64_t>> sourceAliUids_ {};
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
    // The status of the alert events to query. Valid values:
    shared_ptr<string> status_ {};
    // Specifies whether the alert is identified in strict mode.
    shared_ptr<string> strictMode_ {};
    // The list of operation types supported by the alert.
    shared_ptr<vector<string>> supportOperateCodeList_ {};
    // The tactic ID in ATT&CK.
    shared_ptr<string> tacticId_ {};
    // The type of the container search target. Valid values:
    // 
    // - **containerId**: container ID.
    // - **uuid**: server UUID.
    // - **imageUuid**: image UUID.
    shared_ptr<string> targetType_ {};
    // The end time of the latest occurrence time range.
    shared_ptr<string> timeEnd_ {};
    // The start time of the latest occurrence time range.
    shared_ptr<string> timeStart_ {};
    // The unique key of the security alert.
    shared_ptr<string> uniqueInfo_ {};
    // The UUIDs of the servers for which you want to query alerts. Separate multiple UUIDs with commas (,).
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
