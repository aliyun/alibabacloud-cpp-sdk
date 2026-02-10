// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSSHRINKREQUEST_HPP_
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
  class DescribeSuspEventsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_TO_JSON(AssetsTypeList, assetsTypeList_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_TO_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
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
      DARABONBA_PTR_TO_JSON(SourceAliUids, sourceAliUidsShrink_);
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
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_FROM_JSON(AssetsTypeList, assetsTypeList_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
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
      DARABONBA_PTR_FROM_JSON(SourceAliUids, sourceAliUidsShrink_);
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
    DescribeSuspEventsShrinkRequest() = default ;
    DescribeSuspEventsShrinkRequest(const DescribeSuspEventsShrinkRequest &) = default ;
    DescribeSuspEventsShrinkRequest(DescribeSuspEventsShrinkRequest &&) = default ;
    DescribeSuspEventsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspEventsShrinkRequest() = default ;
    DescribeSuspEventsShrinkRequest& operator=(const DescribeSuspEventsShrinkRequest &) = default ;
    DescribeSuspEventsShrinkRequest& operator=(DescribeSuspEventsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmUniqueInfo_ == nullptr
        && this->assetsTypeList_ == nullptr && this->clusterId_ == nullptr && this->containerFieldName_ == nullptr && this->containerFieldValue_ == nullptr && this->currentPage_ == nullptr
        && this->dealed_ == nullptr && this->eventNames_ == nullptr && this->from_ == nullptr && this->groupId_ == nullptr && this->id_ == nullptr
        && this->lang_ == nullptr && this->levels_ == nullptr && this->multiAccountActionType_ == nullptr && this->name_ == nullptr && this->operateErrorCodeList_ == nullptr
        && this->operateTimeEnd_ == nullptr && this->operateTimeStart_ == nullptr && this->pageSize_ == nullptr && this->parentEventTypes_ == nullptr && this->remark_ == nullptr
        && this->resourceDirectoryAccountId_ == nullptr && this->sortColumn_ == nullptr && this->sortType_ == nullptr && this->source_ == nullptr && this->sourceAliUidsShrink_ == nullptr
        && this->sourceIp_ == nullptr && this->status_ == nullptr && this->strictMode_ == nullptr && this->supportOperateCodeList_ == nullptr && this->tacticId_ == nullptr
        && this->targetType_ == nullptr && this->timeEnd_ == nullptr && this->timeStart_ == nullptr && this->uniqueInfo_ == nullptr && this->uuids_ == nullptr; };
    // alarmUniqueInfo Field Functions 
    bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
    void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
    inline string getAlarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
    inline DescribeSuspEventsShrinkRequest& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


    // assetsTypeList Field Functions 
    bool hasAssetsTypeList() const { return this->assetsTypeList_ != nullptr;};
    void deleteAssetsTypeList() { this->assetsTypeList_ = nullptr;};
    inline const vector<string> & getAssetsTypeList() const { DARABONBA_PTR_GET_CONST(assetsTypeList_, vector<string>) };
    inline vector<string> getAssetsTypeList() { DARABONBA_PTR_GET(assetsTypeList_, vector<string>) };
    inline DescribeSuspEventsShrinkRequest& setAssetsTypeList(const vector<string> & assetsTypeList) { DARABONBA_PTR_SET_VALUE(assetsTypeList_, assetsTypeList) };
    inline DescribeSuspEventsShrinkRequest& setAssetsTypeList(vector<string> && assetsTypeList) { DARABONBA_PTR_SET_RVALUE(assetsTypeList_, assetsTypeList) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeSuspEventsShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // containerFieldName Field Functions 
    bool hasContainerFieldName() const { return this->containerFieldName_ != nullptr;};
    void deleteContainerFieldName() { this->containerFieldName_ = nullptr;};
    inline string getContainerFieldName() const { DARABONBA_PTR_GET_DEFAULT(containerFieldName_, "") };
    inline DescribeSuspEventsShrinkRequest& setContainerFieldName(string containerFieldName) { DARABONBA_PTR_SET_VALUE(containerFieldName_, containerFieldName) };


    // containerFieldValue Field Functions 
    bool hasContainerFieldValue() const { return this->containerFieldValue_ != nullptr;};
    void deleteContainerFieldValue() { this->containerFieldValue_ = nullptr;};
    inline string getContainerFieldValue() const { DARABONBA_PTR_GET_DEFAULT(containerFieldValue_, "") };
    inline DescribeSuspEventsShrinkRequest& setContainerFieldValue(string containerFieldValue) { DARABONBA_PTR_SET_VALUE(containerFieldValue_, containerFieldValue) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeSuspEventsShrinkRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string getDealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline DescribeSuspEventsShrinkRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // eventNames Field Functions 
    bool hasEventNames() const { return this->eventNames_ != nullptr;};
    void deleteEventNames() { this->eventNames_ = nullptr;};
    inline string getEventNames() const { DARABONBA_PTR_GET_DEFAULT(eventNames_, "") };
    inline DescribeSuspEventsShrinkRequest& setEventNames(string eventNames) { DARABONBA_PTR_SET_VALUE(eventNames_, eventNames) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeSuspEventsShrinkRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeSuspEventsShrinkRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeSuspEventsShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSuspEventsShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // levels Field Functions 
    bool hasLevels() const { return this->levels_ != nullptr;};
    void deleteLevels() { this->levels_ = nullptr;};
    inline string getLevels() const { DARABONBA_PTR_GET_DEFAULT(levels_, "") };
    inline DescribeSuspEventsShrinkRequest& setLevels(string levels) { DARABONBA_PTR_SET_VALUE(levels_, levels) };


    // multiAccountActionType Field Functions 
    bool hasMultiAccountActionType() const { return this->multiAccountActionType_ != nullptr;};
    void deleteMultiAccountActionType() { this->multiAccountActionType_ = nullptr;};
    inline int32_t getMultiAccountActionType() const { DARABONBA_PTR_GET_DEFAULT(multiAccountActionType_, 0) };
    inline DescribeSuspEventsShrinkRequest& setMultiAccountActionType(int32_t multiAccountActionType) { DARABONBA_PTR_SET_VALUE(multiAccountActionType_, multiAccountActionType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSuspEventsShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operateErrorCodeList Field Functions 
    bool hasOperateErrorCodeList() const { return this->operateErrorCodeList_ != nullptr;};
    void deleteOperateErrorCodeList() { this->operateErrorCodeList_ = nullptr;};
    inline const vector<string> & getOperateErrorCodeList() const { DARABONBA_PTR_GET_CONST(operateErrorCodeList_, vector<string>) };
    inline vector<string> getOperateErrorCodeList() { DARABONBA_PTR_GET(operateErrorCodeList_, vector<string>) };
    inline DescribeSuspEventsShrinkRequest& setOperateErrorCodeList(const vector<string> & operateErrorCodeList) { DARABONBA_PTR_SET_VALUE(operateErrorCodeList_, operateErrorCodeList) };
    inline DescribeSuspEventsShrinkRequest& setOperateErrorCodeList(vector<string> && operateErrorCodeList) { DARABONBA_PTR_SET_RVALUE(operateErrorCodeList_, operateErrorCodeList) };


    // operateTimeEnd Field Functions 
    bool hasOperateTimeEnd() const { return this->operateTimeEnd_ != nullptr;};
    void deleteOperateTimeEnd() { this->operateTimeEnd_ = nullptr;};
    inline string getOperateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(operateTimeEnd_, "") };
    inline DescribeSuspEventsShrinkRequest& setOperateTimeEnd(string operateTimeEnd) { DARABONBA_PTR_SET_VALUE(operateTimeEnd_, operateTimeEnd) };


    // operateTimeStart Field Functions 
    bool hasOperateTimeStart() const { return this->operateTimeStart_ != nullptr;};
    void deleteOperateTimeStart() { this->operateTimeStart_ = nullptr;};
    inline string getOperateTimeStart() const { DARABONBA_PTR_GET_DEFAULT(operateTimeStart_, "") };
    inline DescribeSuspEventsShrinkRequest& setOperateTimeStart(string operateTimeStart) { DARABONBA_PTR_SET_VALUE(operateTimeStart_, operateTimeStart) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeSuspEventsShrinkRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentEventTypes Field Functions 
    bool hasParentEventTypes() const { return this->parentEventTypes_ != nullptr;};
    void deleteParentEventTypes() { this->parentEventTypes_ = nullptr;};
    inline string getParentEventTypes() const { DARABONBA_PTR_GET_DEFAULT(parentEventTypes_, "") };
    inline DescribeSuspEventsShrinkRequest& setParentEventTypes(string parentEventTypes) { DARABONBA_PTR_SET_VALUE(parentEventTypes_, parentEventTypes) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeSuspEventsShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline DescribeSuspEventsShrinkRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // sortColumn Field Functions 
    bool hasSortColumn() const { return this->sortColumn_ != nullptr;};
    void deleteSortColumn() { this->sortColumn_ = nullptr;};
    inline string getSortColumn() const { DARABONBA_PTR_GET_DEFAULT(sortColumn_, "") };
    inline DescribeSuspEventsShrinkRequest& setSortColumn(string sortColumn) { DARABONBA_PTR_SET_VALUE(sortColumn_, sortColumn) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline string getSortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, "") };
    inline DescribeSuspEventsShrinkRequest& setSortType(string sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeSuspEventsShrinkRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceAliUidsShrink Field Functions 
    bool hasSourceAliUidsShrink() const { return this->sourceAliUidsShrink_ != nullptr;};
    void deleteSourceAliUidsShrink() { this->sourceAliUidsShrink_ = nullptr;};
    inline string getSourceAliUidsShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceAliUidsShrink_, "") };
    inline DescribeSuspEventsShrinkRequest& setSourceAliUidsShrink(string sourceAliUidsShrink) { DARABONBA_PTR_SET_VALUE(sourceAliUidsShrink_, sourceAliUidsShrink) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeSuspEventsShrinkRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSuspEventsShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strictMode Field Functions 
    bool hasStrictMode() const { return this->strictMode_ != nullptr;};
    void deleteStrictMode() { this->strictMode_ = nullptr;};
    inline string getStrictMode() const { DARABONBA_PTR_GET_DEFAULT(strictMode_, "") };
    inline DescribeSuspEventsShrinkRequest& setStrictMode(string strictMode) { DARABONBA_PTR_SET_VALUE(strictMode_, strictMode) };


    // supportOperateCodeList Field Functions 
    bool hasSupportOperateCodeList() const { return this->supportOperateCodeList_ != nullptr;};
    void deleteSupportOperateCodeList() { this->supportOperateCodeList_ = nullptr;};
    inline const vector<string> & getSupportOperateCodeList() const { DARABONBA_PTR_GET_CONST(supportOperateCodeList_, vector<string>) };
    inline vector<string> getSupportOperateCodeList() { DARABONBA_PTR_GET(supportOperateCodeList_, vector<string>) };
    inline DescribeSuspEventsShrinkRequest& setSupportOperateCodeList(const vector<string> & supportOperateCodeList) { DARABONBA_PTR_SET_VALUE(supportOperateCodeList_, supportOperateCodeList) };
    inline DescribeSuspEventsShrinkRequest& setSupportOperateCodeList(vector<string> && supportOperateCodeList) { DARABONBA_PTR_SET_RVALUE(supportOperateCodeList_, supportOperateCodeList) };


    // tacticId Field Functions 
    bool hasTacticId() const { return this->tacticId_ != nullptr;};
    void deleteTacticId() { this->tacticId_ = nullptr;};
    inline string getTacticId() const { DARABONBA_PTR_GET_DEFAULT(tacticId_, "") };
    inline DescribeSuspEventsShrinkRequest& setTacticId(string tacticId) { DARABONBA_PTR_SET_VALUE(tacticId_, tacticId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeSuspEventsShrinkRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // timeEnd Field Functions 
    bool hasTimeEnd() const { return this->timeEnd_ != nullptr;};
    void deleteTimeEnd() { this->timeEnd_ = nullptr;};
    inline string getTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(timeEnd_, "") };
    inline DescribeSuspEventsShrinkRequest& setTimeEnd(string timeEnd) { DARABONBA_PTR_SET_VALUE(timeEnd_, timeEnd) };


    // timeStart Field Functions 
    bool hasTimeStart() const { return this->timeStart_ != nullptr;};
    void deleteTimeStart() { this->timeStart_ = nullptr;};
    inline string getTimeStart() const { DARABONBA_PTR_GET_DEFAULT(timeStart_, "") };
    inline DescribeSuspEventsShrinkRequest& setTimeStart(string timeStart) { DARABONBA_PTR_SET_VALUE(timeStart_, timeStart) };


    // uniqueInfo Field Functions 
    bool hasUniqueInfo() const { return this->uniqueInfo_ != nullptr;};
    void deleteUniqueInfo() { this->uniqueInfo_ = nullptr;};
    inline string getUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(uniqueInfo_, "") };
    inline DescribeSuspEventsShrinkRequest& setUniqueInfo(string uniqueInfo) { DARABONBA_PTR_SET_VALUE(uniqueInfo_, uniqueInfo) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeSuspEventsShrinkRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The ID of the alert event.
    // 
    // > To query the details of an alert event, you must specify the ID of the alert event. You can call the [DescribeSuspEvents](~~DescribeSuspEvents~~) operation to query the IDs of alert events.
    shared_ptr<string> alarmUniqueInfo_ {};
    // The types of the assets.
    shared_ptr<vector<string>> assetsTypeList_ {};
    // The ID of the cluster of whose alert events you want to query.
    shared_ptr<string> clusterId_ {};
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
    shared_ptr<string> containerFieldName_ {};
    // The value of the condition that is used to query alert events on containers.
    shared_ptr<string> containerFieldValue_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<string> currentPage_ {};
    // Specifies whether the alert event is handled. Valid values:
    // 
    // *   **N**: unhandled
    // *   **Y**: handled
    shared_ptr<string> dealed_ {};
    // The subtype of the alert event. Separate multiple subtypes with commas (,).
    shared_ptr<string> eventNames_ {};
    // The data source of the alert event. Set the value to sas.
    shared_ptr<string> from_ {};
    // The ID of the asset group to which the affected asset belongs.
    shared_ptr<int64_t> groupId_ {};
    // The ID of the alert event.
    shared_ptr<int64_t> id_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The severity of the alert event. Separate multiple severities with commas (,). Valid values:
    // 
    // *   **serious**
    // *   **suspicious**
    // *   **remind**
    shared_ptr<string> levels_ {};
    // The type of the accounts that you want to query. Default value: **0**. Valid values:
    // 
    // *   **0**: the current account.
    // *   **1**: all accounts.
    shared_ptr<int32_t> multiAccountActionType_ {};
    // The name of the asset that is affected by the alert event.
    shared_ptr<string> name_ {};
    // An array that consists of the handling result codes of alert events.
    shared_ptr<vector<string>> operateErrorCodeList_ {};
    // The timestamp when the handling operation ends.
    shared_ptr<string> operateTimeEnd_ {};
    // The timestamp when the handling operation starts.
    shared_ptr<string> operateTimeStart_ {};
    // The number of entries per page. Default value: **20**. Maximum value: 100.
    shared_ptr<string> pageSize_ {};
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
    shared_ptr<string> parentEventTypes_ {};
    // The name of the alert or the information about the asset.
    // 
    // >  Fuzzy search is supported. The asset information includes the name, public IP address, and private IP address of an asset.
    shared_ptr<string> remark_ {};
    // The Alibaba Cloud account ID of the member in the resource directory.
    // 
    // >  You can call the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to query the ID.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The custom sorting field. Default value: **operateTime**. Valid values:
    // 
    // *   **lastTime**: the latest occurrence time.
    // *   **operateTime**: the handling time.
    // 
    // >  This parameter takes effect if you set the **Dealed** parameter to Y.
    shared_ptr<string> sortColumn_ {};
    // The custom sorting order. Default value: **desc**. Valid values:
    // 
    // *   **asc**: the ascending order
    // *   **desc**: the descending order
    // 
    // >  This parameter takes effect if you set the **Dealed** parameter to Y.
    shared_ptr<string> sortType_ {};
    // The source of the alert.
    shared_ptr<string> source_ {};
    // The IDs of the Alibaba Cloud accounts within which alerts are generated.
    shared_ptr<string> sourceAliUidsShrink_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The status of the alert event. Valid values:
    // 
    // *   **0**: all
    // *   **1**: pending handling
    // *   **2**: ignored
    // *   **4**: confirmed
    // *   **8**: marked as a false positive
    // *   **16**: handling
    // *   **32**: handled
    // *   **64**: expired
    // *   **128**: deleted
    // *   **512**: automatically blocking
    // *   **513**: automatically blocked
    shared_ptr<string> status_ {};
    // Specifies whether to enable the strict alerting mode.
    // 
    // *   N: no
    // *   Y: Yes
    shared_ptr<string> strictMode_ {};
    // 告警支持的操作类型列表。
    shared_ptr<vector<string>> supportOperateCodeList_ {};
    // The tactic ID of ATT\\&CK.
    shared_ptr<string> tacticId_ {};
    // The item that is used to search for the container. Valid values:
    // 
    // *   **containerId**: the ID of the container
    // *   **uuid**: the UUID of the server
    // *   **imageUuid**: the UUID of the image
    shared_ptr<string> targetType_ {};
    // The end time when the alert event was last detected.
    shared_ptr<string> timeEnd_ {};
    // The start time when the alert event was last detected.
    shared_ptr<string> timeStart_ {};
    // The unique key of the alert.
    shared_ptr<string> uniqueInfo_ {};
    // The UUID of the server on which the alert is detected. Separate multiple UUIDs with commas (,).
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
