// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataLimitsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataLimitsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(AutoScan, autoScan_);
      DARABONBA_PTR_TO_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_TO_JSON(CheckStatusName, checkStatusName_);
      DARABONBA_PTR_TO_JSON(DatamaskStatus, datamaskStatus_);
      DARABONBA_PTR_TO_JSON(DbVersion, dbVersion_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LastFinishedTime, lastFinishedTime_);
      DARABONBA_PTR_TO_JSON(LastStartTime, lastStartTime_);
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(LogStoreDay, logStoreDay_);
      DARABONBA_PTR_TO_JSON(MemberAccount, memberAccount_);
      DARABONBA_PTR_TO_JSON(NextStartTime, nextStartTime_);
      DARABONBA_PTR_TO_JSON(OcrStatus, ocrStatus_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ProcessStatus, processStatus_);
      DARABONBA_PTR_TO_JSON(ProcessTotalCount, processTotalCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ResourceTypeCode, resourceTypeCode_);
      DARABONBA_PTR_TO_JSON(SamplingSize, samplingSize_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIdList, securityGroupIdList_);
      DARABONBA_PTR_TO_JSON(SupportAudit, supportAudit_);
      DARABONBA_PTR_TO_JSON(SupportDatamask, supportDatamask_);
      DARABONBA_PTR_TO_JSON(SupportEvent, supportEvent_);
      DARABONBA_PTR_TO_JSON(SupportOcr, supportOcr_);
      DARABONBA_PTR_TO_JSON(SupportScan, supportScan_);
      DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(VSwitchIdList, vSwitchIdList_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataLimitsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(AutoScan, autoScan_);
      DARABONBA_PTR_FROM_JSON(CheckStatus, checkStatus_);
      DARABONBA_PTR_FROM_JSON(CheckStatusName, checkStatusName_);
      DARABONBA_PTR_FROM_JSON(DatamaskStatus, datamaskStatus_);
      DARABONBA_PTR_FROM_JSON(DbVersion, dbVersion_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(EventStatus, eventStatus_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LastFinishedTime, lastFinishedTime_);
      DARABONBA_PTR_FROM_JSON(LastStartTime, lastStartTime_);
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(LogStoreDay, logStoreDay_);
      DARABONBA_PTR_FROM_JSON(MemberAccount, memberAccount_);
      DARABONBA_PTR_FROM_JSON(NextStartTime, nextStartTime_);
      DARABONBA_PTR_FROM_JSON(OcrStatus, ocrStatus_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ProcessStatus, processStatus_);
      DARABONBA_PTR_FROM_JSON(ProcessTotalCount, processTotalCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeCode, resourceTypeCode_);
      DARABONBA_PTR_FROM_JSON(SamplingSize, samplingSize_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIdList, securityGroupIdList_);
      DARABONBA_PTR_FROM_JSON(SupportAudit, supportAudit_);
      DARABONBA_PTR_FROM_JSON(SupportDatamask, supportDatamask_);
      DARABONBA_PTR_FROM_JSON(SupportEvent, supportEvent_);
      DARABONBA_PTR_FROM_JSON(SupportOcr, supportOcr_);
      DARABONBA_PTR_FROM_JSON(SupportScan, supportScan_);
      DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(VSwitchIdList, vSwitchIdList_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeDataLimitsResponseBodyItems() = default ;
    DescribeDataLimitsResponseBodyItems(const DescribeDataLimitsResponseBodyItems &) = default ;
    DescribeDataLimitsResponseBodyItems(DescribeDataLimitsResponseBodyItems &&) = default ;
    DescribeDataLimitsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataLimitsResponseBodyItems() = default ;
    DescribeDataLimitsResponseBodyItems& operator=(const DescribeDataLimitsResponseBodyItems &) = default ;
    DescribeDataLimitsResponseBodyItems& operator=(DescribeDataLimitsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditStatus_ == nullptr
        && return this->autoScan_ == nullptr && return this->checkStatus_ == nullptr && return this->checkStatusName_ == nullptr && return this->datamaskStatus_ == nullptr && return this->dbVersion_ == nullptr
        && return this->enable_ == nullptr && return this->engineType_ == nullptr && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->eventStatus_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->id_ == nullptr && return this->instanceDescription_ == nullptr && return this->instanceId_ == nullptr && return this->lastFinishedTime_ == nullptr
        && return this->lastStartTime_ == nullptr && return this->localName_ == nullptr && return this->logStoreDay_ == nullptr && return this->memberAccount_ == nullptr && return this->nextStartTime_ == nullptr
        && return this->ocrStatus_ == nullptr && return this->parentId_ == nullptr && return this->port_ == nullptr && return this->processStatus_ == nullptr && return this->processTotalCount_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceType_ == nullptr && return this->resourceTypeCode_ == nullptr && return this->samplingSize_ == nullptr && return this->securityGroupIdList_ == nullptr
        && return this->supportAudit_ == nullptr && return this->supportDatamask_ == nullptr && return this->supportEvent_ == nullptr && return this->supportOcr_ == nullptr && return this->supportScan_ == nullptr
        && return this->tenantName_ == nullptr && return this->totalCount_ == nullptr && return this->userName_ == nullptr && return this->vSwitchIdList_ == nullptr && return this->vpcId_ == nullptr; };
    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline int32_t auditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, 0) };
    inline DescribeDataLimitsResponseBodyItems& setAuditStatus(int32_t auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // autoScan Field Functions 
    bool hasAutoScan() const { return this->autoScan_ != nullptr;};
    void deleteAutoScan() { this->autoScan_ = nullptr;};
    inline int32_t autoScan() const { DARABONBA_PTR_GET_DEFAULT(autoScan_, 0) };
    inline DescribeDataLimitsResponseBodyItems& setAutoScan(int32_t autoScan) { DARABONBA_PTR_SET_VALUE(autoScan_, autoScan) };


    // checkStatus Field Functions 
    bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
    void deleteCheckStatus() { this->checkStatus_ = nullptr;};
    inline int32_t checkStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, 0) };
    inline DescribeDataLimitsResponseBodyItems& setCheckStatus(int32_t checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


    // checkStatusName Field Functions 
    bool hasCheckStatusName() const { return this->checkStatusName_ != nullptr;};
    void deleteCheckStatusName() { this->checkStatusName_ = nullptr;};
    inline string checkStatusName() const { DARABONBA_PTR_GET_DEFAULT(checkStatusName_, "") };
    inline DescribeDataLimitsResponseBodyItems& setCheckStatusName(string checkStatusName) { DARABONBA_PTR_SET_VALUE(checkStatusName_, checkStatusName) };


    // datamaskStatus Field Functions 
    bool hasDatamaskStatus() const { return this->datamaskStatus_ != nullptr;};
    void deleteDatamaskStatus() { this->datamaskStatus_ = nullptr;};
    inline int32_t datamaskStatus() const { DARABONBA_PTR_GET_DEFAULT(datamaskStatus_, 0) };
    inline DescribeDataLimitsResponseBodyItems& setDatamaskStatus(int32_t datamaskStatus) { DARABONBA_PTR_SET_VALUE(datamaskStatus_, datamaskStatus) };


    // dbVersion Field Functions 
    bool hasDbVersion() const { return this->dbVersion_ != nullptr;};
    void deleteDbVersion() { this->dbVersion_ = nullptr;};
    inline string dbVersion() const { DARABONBA_PTR_GET_DEFAULT(dbVersion_, "") };
    inline DescribeDataLimitsResponseBodyItems& setDbVersion(string dbVersion) { DARABONBA_PTR_SET_VALUE(dbVersion_, dbVersion) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline int32_t enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
    inline DescribeDataLimitsResponseBodyItems& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline DescribeDataLimitsResponseBodyItems& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeDataLimitsResponseBodyItems& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDataLimitsResponseBodyItems& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // eventStatus Field Functions 
    bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
    void deleteEventStatus() { this->eventStatus_ = nullptr;};
    inline int32_t eventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, 0) };
    inline DescribeDataLimitsResponseBodyItems& setEventStatus(int32_t eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeDataLimitsResponseBodyItems& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDataLimitsResponseBodyItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string instanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline DescribeDataLimitsResponseBodyItems& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDataLimitsResponseBodyItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastFinishedTime Field Functions 
    bool hasLastFinishedTime() const { return this->lastFinishedTime_ != nullptr;};
    void deleteLastFinishedTime() { this->lastFinishedTime_ = nullptr;};
    inline int64_t lastFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(lastFinishedTime_, 0L) };
    inline DescribeDataLimitsResponseBodyItems& setLastFinishedTime(int64_t lastFinishedTime) { DARABONBA_PTR_SET_VALUE(lastFinishedTime_, lastFinishedTime) };


    // lastStartTime Field Functions 
    bool hasLastStartTime() const { return this->lastStartTime_ != nullptr;};
    void deleteLastStartTime() { this->lastStartTime_ = nullptr;};
    inline int64_t lastStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastStartTime_, 0L) };
    inline DescribeDataLimitsResponseBodyItems& setLastStartTime(int64_t lastStartTime) { DARABONBA_PTR_SET_VALUE(lastStartTime_, lastStartTime) };


    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeDataLimitsResponseBodyItems& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // logStoreDay Field Functions 
    bool hasLogStoreDay() const { return this->logStoreDay_ != nullptr;};
    void deleteLogStoreDay() { this->logStoreDay_ = nullptr;};
    inline int32_t logStoreDay() const { DARABONBA_PTR_GET_DEFAULT(logStoreDay_, 0) };
    inline DescribeDataLimitsResponseBodyItems& setLogStoreDay(int32_t logStoreDay) { DARABONBA_PTR_SET_VALUE(logStoreDay_, logStoreDay) };


    // memberAccount Field Functions 
    bool hasMemberAccount() const { return this->memberAccount_ != nullptr;};
    void deleteMemberAccount() { this->memberAccount_ = nullptr;};
    inline int64_t memberAccount() const { DARABONBA_PTR_GET_DEFAULT(memberAccount_, 0L) };
    inline DescribeDataLimitsResponseBodyItems& setMemberAccount(int64_t memberAccount) { DARABONBA_PTR_SET_VALUE(memberAccount_, memberAccount) };


    // nextStartTime Field Functions 
    bool hasNextStartTime() const { return this->nextStartTime_ != nullptr;};
    void deleteNextStartTime() { this->nextStartTime_ = nullptr;};
    inline int64_t nextStartTime() const { DARABONBA_PTR_GET_DEFAULT(nextStartTime_, 0L) };
    inline DescribeDataLimitsResponseBodyItems& setNextStartTime(int64_t nextStartTime) { DARABONBA_PTR_SET_VALUE(nextStartTime_, nextStartTime) };


    // ocrStatus Field Functions 
    bool hasOcrStatus() const { return this->ocrStatus_ != nullptr;};
    void deleteOcrStatus() { this->ocrStatus_ = nullptr;};
    inline int32_t ocrStatus() const { DARABONBA_PTR_GET_DEFAULT(ocrStatus_, 0) };
    inline DescribeDataLimitsResponseBodyItems& setOcrStatus(int32_t ocrStatus) { DARABONBA_PTR_SET_VALUE(ocrStatus_, ocrStatus) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline DescribeDataLimitsResponseBodyItems& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeDataLimitsResponseBodyItems& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // processStatus Field Functions 
    bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
    void deleteProcessStatus() { this->processStatus_ = nullptr;};
    inline int32_t processStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, 0) };
    inline DescribeDataLimitsResponseBodyItems& setProcessStatus(int32_t processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


    // processTotalCount Field Functions 
    bool hasProcessTotalCount() const { return this->processTotalCount_ != nullptr;};
    void deleteProcessTotalCount() { this->processTotalCount_ = nullptr;};
    inline int32_t processTotalCount() const { DARABONBA_PTR_GET_DEFAULT(processTotalCount_, 0) };
    inline DescribeDataLimitsResponseBodyItems& setProcessTotalCount(int32_t processTotalCount) { DARABONBA_PTR_SET_VALUE(processTotalCount_, processTotalCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDataLimitsResponseBodyItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline int64_t resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0L) };
    inline DescribeDataLimitsResponseBodyItems& setResourceType(int64_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceTypeCode Field Functions 
    bool hasResourceTypeCode() const { return this->resourceTypeCode_ != nullptr;};
    void deleteResourceTypeCode() { this->resourceTypeCode_ = nullptr;};
    inline string resourceTypeCode() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeCode_, "") };
    inline DescribeDataLimitsResponseBodyItems& setResourceTypeCode(string resourceTypeCode) { DARABONBA_PTR_SET_VALUE(resourceTypeCode_, resourceTypeCode) };


    // samplingSize Field Functions 
    bool hasSamplingSize() const { return this->samplingSize_ != nullptr;};
    void deleteSamplingSize() { this->samplingSize_ = nullptr;};
    inline int32_t samplingSize() const { DARABONBA_PTR_GET_DEFAULT(samplingSize_, 0) };
    inline DescribeDataLimitsResponseBodyItems& setSamplingSize(int32_t samplingSize) { DARABONBA_PTR_SET_VALUE(samplingSize_, samplingSize) };


    // securityGroupIdList Field Functions 
    bool hasSecurityGroupIdList() const { return this->securityGroupIdList_ != nullptr;};
    void deleteSecurityGroupIdList() { this->securityGroupIdList_ = nullptr;};
    inline const vector<string> & securityGroupIdList() const { DARABONBA_PTR_GET_CONST(securityGroupIdList_, vector<string>) };
    inline vector<string> securityGroupIdList() { DARABONBA_PTR_GET(securityGroupIdList_, vector<string>) };
    inline DescribeDataLimitsResponseBodyItems& setSecurityGroupIdList(const vector<string> & securityGroupIdList) { DARABONBA_PTR_SET_VALUE(securityGroupIdList_, securityGroupIdList) };
    inline DescribeDataLimitsResponseBodyItems& setSecurityGroupIdList(vector<string> && securityGroupIdList) { DARABONBA_PTR_SET_RVALUE(securityGroupIdList_, securityGroupIdList) };


    // supportAudit Field Functions 
    bool hasSupportAudit() const { return this->supportAudit_ != nullptr;};
    void deleteSupportAudit() { this->supportAudit_ = nullptr;};
    inline bool supportAudit() const { DARABONBA_PTR_GET_DEFAULT(supportAudit_, false) };
    inline DescribeDataLimitsResponseBodyItems& setSupportAudit(bool supportAudit) { DARABONBA_PTR_SET_VALUE(supportAudit_, supportAudit) };


    // supportDatamask Field Functions 
    bool hasSupportDatamask() const { return this->supportDatamask_ != nullptr;};
    void deleteSupportDatamask() { this->supportDatamask_ = nullptr;};
    inline bool supportDatamask() const { DARABONBA_PTR_GET_DEFAULT(supportDatamask_, false) };
    inline DescribeDataLimitsResponseBodyItems& setSupportDatamask(bool supportDatamask) { DARABONBA_PTR_SET_VALUE(supportDatamask_, supportDatamask) };


    // supportEvent Field Functions 
    bool hasSupportEvent() const { return this->supportEvent_ != nullptr;};
    void deleteSupportEvent() { this->supportEvent_ = nullptr;};
    inline bool supportEvent() const { DARABONBA_PTR_GET_DEFAULT(supportEvent_, false) };
    inline DescribeDataLimitsResponseBodyItems& setSupportEvent(bool supportEvent) { DARABONBA_PTR_SET_VALUE(supportEvent_, supportEvent) };


    // supportOcr Field Functions 
    bool hasSupportOcr() const { return this->supportOcr_ != nullptr;};
    void deleteSupportOcr() { this->supportOcr_ = nullptr;};
    inline bool supportOcr() const { DARABONBA_PTR_GET_DEFAULT(supportOcr_, false) };
    inline DescribeDataLimitsResponseBodyItems& setSupportOcr(bool supportOcr) { DARABONBA_PTR_SET_VALUE(supportOcr_, supportOcr) };


    // supportScan Field Functions 
    bool hasSupportScan() const { return this->supportScan_ != nullptr;};
    void deleteSupportScan() { this->supportScan_ = nullptr;};
    inline bool supportScan() const { DARABONBA_PTR_GET_DEFAULT(supportScan_, false) };
    inline DescribeDataLimitsResponseBodyItems& setSupportScan(bool supportScan) { DARABONBA_PTR_SET_VALUE(supportScan_, supportScan) };


    // tenantName Field Functions 
    bool hasTenantName() const { return this->tenantName_ != nullptr;};
    void deleteTenantName() { this->tenantName_ = nullptr;};
    inline string tenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
    inline DescribeDataLimitsResponseBodyItems& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDataLimitsResponseBodyItems& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeDataLimitsResponseBodyItems& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vSwitchIdList Field Functions 
    bool hasVSwitchIdList() const { return this->vSwitchIdList_ != nullptr;};
    void deleteVSwitchIdList() { this->vSwitchIdList_ = nullptr;};
    inline const vector<string> & vSwitchIdList() const { DARABONBA_PTR_GET_CONST(vSwitchIdList_, vector<string>) };
    inline vector<string> vSwitchIdList() { DARABONBA_PTR_GET(vSwitchIdList_, vector<string>) };
    inline DescribeDataLimitsResponseBodyItems& setVSwitchIdList(const vector<string> & vSwitchIdList) { DARABONBA_PTR_SET_VALUE(vSwitchIdList_, vSwitchIdList) };
    inline DescribeDataLimitsResponseBodyItems& setVSwitchIdList(vector<string> && vSwitchIdList) { DARABONBA_PTR_SET_RVALUE(vSwitchIdList_, vSwitchIdList) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDataLimitsResponseBodyItems& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Indicates whether the security audit feature is enabled. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> auditStatus_ = nullptr;
    // Indicates whether the data asset can be automatically scanned. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> autoScan_ = nullptr;
    // The data detection status. Valid values:
    // 
    // *   **0**: The data detection is ready.
    // *   **1**: The data detection is running.
    // *   **2**: The connectivity test is in progress.
    // *   **3**: The connectivity test is passed.
    // *   **4**: The connectivity test failed.
    std::shared_ptr<int32_t> checkStatus_ = nullptr;
    // The name of the data detection status.
    std::shared_ptr<string> checkStatusName_ = nullptr;
    // Indicates whether DSC has the data de-identification permissions on the data asset. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> datamaskStatus_ = nullptr;
    // The database engine version.
    std::shared_ptr<string> dbVersion_ = nullptr;
    // Indicates whether DSC has the data identification permissions on the data asset. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> enable_ = nullptr;
    // The type of the database engine. Valid values include **MySQL**, **SQLServer**, **Oracle**, **PostgreSQL**, and **MongoDB**.
    std::shared_ptr<string> engineType_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The reason for the failure.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // Indicates whether the data leak prevention feature is enabled. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes (default)
    std::shared_ptr<int32_t> eventStatus_ = nullptr;
    // The time when the data asset was created. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The unique ID of the data asset.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> instanceDescription_ = nullptr;
    // The ID of the data asset to which the table belongs.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The time when the last scan is performed.
    // 
    // *   The value is a UNIX timestamp.
    // *   Unit: milliseconds.
    std::shared_ptr<int64_t> lastFinishedTime_ = nullptr;
    // The last scan start time of data assets, in milliseconds.
    std::shared_ptr<int64_t> lastStartTime_ = nullptr;
    // The region in which the data asset resides.
    std::shared_ptr<string> localName_ = nullptr;
    // The retention period of raw logs. Unit: days.
    std::shared_ptr<int32_t> logStoreDay_ = nullptr;
    // The ID of the member.
    std::shared_ptr<int64_t> memberAccount_ = nullptr;
    // The next time when the data asset is scanned. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> nextStartTime_ = nullptr;
    // Indicates whether the optical character recognition (OCR) feature is enabled. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> ocrStatus_ = nullptr;
    // The parent ID of the data asset that you want to query. Valid values include **bucket, db, and project**.
    std::shared_ptr<string> parentId_ = nullptr;
    // The port number of the self-managed database.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The status of the data asset scan. Valid values:
    // 
    // *   **-1**: invalid
    // *   **0**: waiting
    // *   **1**: being scanned
    // *   **2**: suspended
    // *   **3**: completed
    std::shared_ptr<int32_t> processStatus_ = nullptr;
    // The total number of data tables or files.
    std::shared_ptr<int32_t> processTotalCount_ = nullptr;
    // The region in which the asset resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the service to which the data asset belongs. Valid values:
    // 
    // *   **1**: MaxCompute
    // *   **2**: OSS
    // *   **3**: AnalyticDB for MySQL
    // *   **4**: Tablestore
    // *   **5**: ApsaraDB RDS
    // *   **6**: self-managed database
    std::shared_ptr<int64_t> resourceType_ = nullptr;
    // The code of the service to which the data asset belongs. Valid values: **MaxCompute, OSS, ADS, OTS, and RDS**.
    std::shared_ptr<string> resourceTypeCode_ = nullptr;
    // The number of sensitive data samples. Valid values: **0**, **5**, and **10**. Unit: data entries.
    std::shared_ptr<int32_t> samplingSize_ = nullptr;
    // A list of the IDs of the security groups that are used by PrivateLink when you install the DSC agent.
    std::shared_ptr<vector<string>> securityGroupIdList_ = nullptr;
    // Indicates whether the security audit feature is supported. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> supportAudit_ = nullptr;
    // Indicates whether the data de-identification feature is supported. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> supportDatamask_ = nullptr;
    // Indicates whether anomalous event detection is supported. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> supportEvent_ = nullptr;
    // Indicates whether OCR is supported. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> supportOcr_ = nullptr;
    // Indicates whether the data asset scan feature is supported. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> supportScan_ = nullptr;
    // The alias of the tenant.
    std::shared_ptr<string> tenantName_ = nullptr;
    // The total number of fields in the table.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The username that is used to access the data asset.
    std::shared_ptr<string> userName_ = nullptr;
    // A list of the IDs of the vSwitches that are used by PrivateLink when you install the DSC agent.
    std::shared_ptr<vector<string>> vSwitchIdList_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the data asset belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
