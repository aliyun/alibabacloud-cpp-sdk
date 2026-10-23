// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class DescribeSuspEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmEventName, alarmEventName_);
      DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_TO_JSON(AssetsTypeList, assetsTypeList_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_TO_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(EventNames, eventNames_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InnerIp, innerIp_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Levels, levels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperateErrorCodeList, operateErrorCodeList_);
      DARABONBA_PTR_TO_JSON(OperateTimeEnd, operateTimeEnd_);
      DARABONBA_PTR_TO_JSON(OperateTimeStart, operateTimeStart_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentEventTypes, parentEventTypes_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SortColumn, sortColumn_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrictMode, strictMode_);
      DARABONBA_PTR_TO_JSON(TacticId, tacticId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TimeEnd, timeEnd_);
      DARABONBA_PTR_TO_JSON(TimeStart, timeStart_);
      DARABONBA_PTR_TO_JSON(UniqueInfo, uniqueInfo_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmEventName, alarmEventName_);
      DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_FROM_JSON(AssetsTypeList, assetsTypeList_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldName, containerFieldName_);
      DARABONBA_PTR_FROM_JSON(ContainerFieldValue, containerFieldValue_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(EventNames, eventNames_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InnerIp, innerIp_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Levels, levels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperateErrorCodeList, operateErrorCodeList_);
      DARABONBA_PTR_FROM_JSON(OperateTimeEnd, operateTimeEnd_);
      DARABONBA_PTR_FROM_JSON(OperateTimeStart, operateTimeStart_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentEventTypes, parentEventTypes_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SortColumn, sortColumn_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrictMode, strictMode_);
      DARABONBA_PTR_FROM_JSON(TacticId, tacticId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TimeEnd, timeEnd_);
      DARABONBA_PTR_FROM_JSON(TimeStart, timeStart_);
      DARABONBA_PTR_FROM_JSON(UniqueInfo, uniqueInfo_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
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
    virtual bool empty() const override { return this->alarmEventName_ == nullptr
        && this->alarmUniqueInfo_ == nullptr && this->assetsTypeList_ == nullptr && this->clusterId_ == nullptr && this->containerFieldName_ == nullptr && this->containerFieldValue_ == nullptr
        && this->currentPage_ == nullptr && this->dealed_ == nullptr && this->department_ == nullptr && this->eventNames_ == nullptr && this->groupId_ == nullptr
        && this->hostName_ == nullptr && this->id_ == nullptr && this->innerIp_ == nullptr && this->lang_ == nullptr && this->levels_ == nullptr
        && this->name_ == nullptr && this->operateErrorCodeList_ == nullptr && this->operateTimeEnd_ == nullptr && this->operateTimeStart_ == nullptr && this->pageSize_ == nullptr
        && this->parentEventTypes_ == nullptr && this->remark_ == nullptr && this->sortColumn_ == nullptr && this->sortType_ == nullptr && this->source_ == nullptr
        && this->sourceIp_ == nullptr && this->srcIp_ == nullptr && this->status_ == nullptr && this->strictMode_ == nullptr && this->tacticId_ == nullptr
        && this->targetType_ == nullptr && this->timeEnd_ == nullptr && this->timeStart_ == nullptr && this->uniqueInfo_ == nullptr && this->userName_ == nullptr
        && this->uuids_ == nullptr; };
    // alarmEventName Field Functions 
    bool hasAlarmEventName() const { return this->alarmEventName_ != nullptr;};
    void deleteAlarmEventName() { this->alarmEventName_ = nullptr;};
    inline string getAlarmEventName() const { DARABONBA_PTR_GET_DEFAULT(alarmEventName_, "") };
    inline DescribeSuspEventsRequest& setAlarmEventName(string alarmEventName) { DARABONBA_PTR_SET_VALUE(alarmEventName_, alarmEventName) };


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
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeSuspEventsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string getDealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline DescribeSuspEventsRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline DescribeSuspEventsRequest& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // eventNames Field Functions 
    bool hasEventNames() const { return this->eventNames_ != nullptr;};
    void deleteEventNames() { this->eventNames_ = nullptr;};
    inline string getEventNames() const { DARABONBA_PTR_GET_DEFAULT(eventNames_, "") };
    inline DescribeSuspEventsRequest& setEventNames(string eventNames) { DARABONBA_PTR_SET_VALUE(eventNames_, eventNames) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeSuspEventsRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeSuspEventsRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeSuspEventsRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // innerIp Field Functions 
    bool hasInnerIp() const { return this->innerIp_ != nullptr;};
    void deleteInnerIp() { this->innerIp_ = nullptr;};
    inline string getInnerIp() const { DARABONBA_PTR_GET_DEFAULT(innerIp_, "") };
    inline DescribeSuspEventsRequest& setInnerIp(string innerIp) { DARABONBA_PTR_SET_VALUE(innerIp_, innerIp) };


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
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSuspEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


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


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeSuspEventsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline DescribeSuspEventsRequest& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


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


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeSuspEventsRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeSuspEventsRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The name of the alert event.
    shared_ptr<string> alarmEventName_ {};
    // The unique ID of the alert event.
    // 
    // To query the exception event information of a single alert event, you must provide the unique ID of the alert event. You can call the DescribeSuspEvents operation to obtain the ID.
    shared_ptr<string> alarmUniqueInfo_ {};
    // The collection of asset types. Not supported by SASE-EDR.
    shared_ptr<vector<string>> assetsTypeList_ {};
    // The ID of the cluster for which you want to query alert events.
    shared_ptr<string> clusterId_ {};
    // The container search field. Not supported by SASE-EDR.
    shared_ptr<string> containerFieldName_ {};
    // The value of the container search field. Not supported by SASE-EDR.
    shared_ptr<string> containerFieldValue_ {};
    // The page number of the returned page. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // Filters alerts by processing group. Valid values:
    // 
    // - `N`: Pending.
    // - `Y`: Processed.
    // - `A`: All.
    // 
    // If this parameter is not specified, all groups are queried. The Status parameter further filters alerts within the selected group. If the specified status does not match the group, an empty result is returned.
    shared_ptr<string> dealed_ {};
    // The department to which the user belongs.
    shared_ptr<string> department_ {};
    // The internal subtype identifiers of the alerts. Separate multiple subtypes with commas (,). This parameter is used to match event names. The valid values must belong to the alert configurations visible to the current account and are not the alert names displayed to users.
    shared_ptr<string> eventNames_ {};
    // The ID of the group to which the asset affected by the alert event belongs.
    shared_ptr<int64_t> groupId_ {};
    // The name of the endpoint device.
    shared_ptr<string> hostName_ {};
    // The unique ID of the recorded alert event.
    shared_ptr<int64_t> id_ {};
    // The private IP address of the endpoint device.
    shared_ptr<string> innerIp_ {};
    // The language of the request and response. Default value: **zh**. Valid values:
    // - **zh**: Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The urgency levels of the alert events to query. Separate multiple urgency levels with commas (,). The urgency levels are listed in descending order. Valid values:
    // - **serious**: Urgent.
    // - **suspicious**: Suspicious.
    // - **remind**: Reminder.
    shared_ptr<string> levels_ {};
    // The name of the asset affected by the alert event.
    shared_ptr<string> name_ {};
    // The collection of alert event processing result codes.
    shared_ptr<vector<string>> operateErrorCodeList_ {};
    // The end time of the alert processing time. Specify a datetime string in the YYYY-MM-DD HH:mm:ss format.
    shared_ptr<string> operateTimeEnd_ {};
    // The start time of the alert processing time. Specify a datetime string in the YYYY-MM-DD HH:mm:ss format.
    shared_ptr<string> operateTimeStart_ {};
    // The number of alert events to return on each page in a paging query. Default value: 20. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The internal type identifiers of the alerts. Separate multiple types with commas (,). The valid values are derived from the current alert configurations. You can call the DescribeNsasSuspEventType operation to query the Type field in EventTypes. The Name field is the display name and is not used as a fixed enumeration list.
    shared_ptr<string> parentEventTypes_ {};
    // The alert name or asset information to query.
    // 
    // Note: Fuzzy match is supported. Asset information includes the asset name, public IP address, and private IP address.
    shared_ptr<string> remark_ {};
    // The custom sort field. Default value: **operateTime**. Valid values:
    // 
    // - **lastTime**: Latest occurrence time.
    // - **operateTime**: Processing time.
    // 
    // > This field takes effect only when Dealed is set to Y.
    shared_ptr<string> sortColumn_ {};
    // The custom sort order. Default value: **desc**. Valid values:
    // 
    // - **asc**: Ascending order.
    // - **desc**: Descending order.
    // 
    // > This field takes effect only when Dealed is set to Y.
    shared_ptr<string> sortType_ {};
    // The compatibility source classification parameter. This parameter is not used to specify the alert data source. You do not need to specify this parameter for common alert list queries.
    shared_ptr<string> source_ {};
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
    // The IP address of the endpoint.
    shared_ptr<string> srcIp_ {};
    // Further filters alerts by individual alert status within the processing group specified by the Dealed parameter. Status descriptions:
    // 
    // - `0`: No further status restriction. The alerts are still subject to the Dealed group.
    // - `1`: Pending.
    // - `2`: Ignored.
    // - `4`: Manually processed.
    // - `8`: Whitelisted (marked as false positive).
    // - `32`: Processed. For example, automatic defense interception succeeded.
    // - `64`: Expired.
    // 
    // Unprocessed alerts are automatically marked as expired if more than 31 days have passed since the last occurrence.
    // 
    // Deleted alerts cannot be queried. If the specified status does not belong to the group specified by Dealed, an empty result is returned.
    shared_ptr<string> status_ {};
    // Specifies whether the alert is in strict mode. Not supported by SASE-EDR.
    shared_ptr<string> strictMode_ {};
    // The ATT&CK tactic ID.
    shared_ptr<string> tacticId_ {};
    // The container search target type. Not supported by SASE-EDR.
    shared_ptr<string> targetType_ {};
    // The end time of the latest occurrence. Specify a datetime string in the YYYY-MM-DD HH:mm:ss format.
    shared_ptr<string> timeEnd_ {};
    // The start time of the latest occurrence. Specify a datetime string in the YYYY-MM-DD HH:mm:ss format.
    shared_ptr<string> timeStart_ {};
    // The unique key of the security alert.
    shared_ptr<string> uniqueInfo_ {};
    // The username of the endpoint.
    shared_ptr<string> userName_ {};
    // The UUIDs of the servers for which you want to query alerts. Separate multiple UUIDs with commas (,).
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
