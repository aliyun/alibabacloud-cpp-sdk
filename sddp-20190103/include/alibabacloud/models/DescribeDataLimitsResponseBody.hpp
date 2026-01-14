// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSRESPONSEBODY_HPP_
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
  class DescribeDataLimitsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataLimitsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataLimitsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDataLimitsResponseBody() = default ;
    DescribeDataLimitsResponseBody(const DescribeDataLimitsResponseBody &) = default ;
    DescribeDataLimitsResponseBody(DescribeDataLimitsResponseBody &&) = default ;
    DescribeDataLimitsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataLimitsResponseBody() = default ;
    DescribeDataLimitsResponseBody& operator=(const DescribeDataLimitsResponseBody &) = default ;
    DescribeDataLimitsResponseBody& operator=(DescribeDataLimitsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auditStatus_ == nullptr
        && this->autoScan_ == nullptr && this->checkStatus_ == nullptr && this->checkStatusName_ == nullptr && this->datamaskStatus_ == nullptr && this->dbVersion_ == nullptr
        && this->enable_ == nullptr && this->engineType_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->eventStatus_ == nullptr
        && this->gmtCreate_ == nullptr && this->id_ == nullptr && this->instanceDescription_ == nullptr && this->instanceId_ == nullptr && this->lastFinishedTime_ == nullptr
        && this->lastStartTime_ == nullptr && this->localName_ == nullptr && this->logStoreDay_ == nullptr && this->memberAccount_ == nullptr && this->nextStartTime_ == nullptr
        && this->ocrStatus_ == nullptr && this->parentId_ == nullptr && this->port_ == nullptr && this->processStatus_ == nullptr && this->processTotalCount_ == nullptr
        && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->resourceTypeCode_ == nullptr && this->samplingSize_ == nullptr && this->securityGroupIdList_ == nullptr
        && this->supportAudit_ == nullptr && this->supportDatamask_ == nullptr && this->supportEvent_ == nullptr && this->supportOcr_ == nullptr && this->supportScan_ == nullptr
        && this->tenantName_ == nullptr && this->totalCount_ == nullptr && this->userName_ == nullptr && this->vSwitchIdList_ == nullptr && this->vpcId_ == nullptr; };
      // auditStatus Field Functions 
      bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
      void deleteAuditStatus() { this->auditStatus_ = nullptr;};
      inline int32_t getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, 0) };
      inline Items& setAuditStatus(int32_t auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


      // autoScan Field Functions 
      bool hasAutoScan() const { return this->autoScan_ != nullptr;};
      void deleteAutoScan() { this->autoScan_ = nullptr;};
      inline int32_t getAutoScan() const { DARABONBA_PTR_GET_DEFAULT(autoScan_, 0) };
      inline Items& setAutoScan(int32_t autoScan) { DARABONBA_PTR_SET_VALUE(autoScan_, autoScan) };


      // checkStatus Field Functions 
      bool hasCheckStatus() const { return this->checkStatus_ != nullptr;};
      void deleteCheckStatus() { this->checkStatus_ = nullptr;};
      inline int32_t getCheckStatus() const { DARABONBA_PTR_GET_DEFAULT(checkStatus_, 0) };
      inline Items& setCheckStatus(int32_t checkStatus) { DARABONBA_PTR_SET_VALUE(checkStatus_, checkStatus) };


      // checkStatusName Field Functions 
      bool hasCheckStatusName() const { return this->checkStatusName_ != nullptr;};
      void deleteCheckStatusName() { this->checkStatusName_ = nullptr;};
      inline string getCheckStatusName() const { DARABONBA_PTR_GET_DEFAULT(checkStatusName_, "") };
      inline Items& setCheckStatusName(string checkStatusName) { DARABONBA_PTR_SET_VALUE(checkStatusName_, checkStatusName) };


      // datamaskStatus Field Functions 
      bool hasDatamaskStatus() const { return this->datamaskStatus_ != nullptr;};
      void deleteDatamaskStatus() { this->datamaskStatus_ = nullptr;};
      inline int32_t getDatamaskStatus() const { DARABONBA_PTR_GET_DEFAULT(datamaskStatus_, 0) };
      inline Items& setDatamaskStatus(int32_t datamaskStatus) { DARABONBA_PTR_SET_VALUE(datamaskStatus_, datamaskStatus) };


      // dbVersion Field Functions 
      bool hasDbVersion() const { return this->dbVersion_ != nullptr;};
      void deleteDbVersion() { this->dbVersion_ = nullptr;};
      inline string getDbVersion() const { DARABONBA_PTR_GET_DEFAULT(dbVersion_, "") };
      inline Items& setDbVersion(string dbVersion) { DARABONBA_PTR_SET_VALUE(dbVersion_, dbVersion) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline int32_t getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, 0) };
      inline Items& setEnable(int32_t enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // engineType Field Functions 
      bool hasEngineType() const { return this->engineType_ != nullptr;};
      void deleteEngineType() { this->engineType_ = nullptr;};
      inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
      inline Items& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Items& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Items& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // eventStatus Field Functions 
      bool hasEventStatus() const { return this->eventStatus_ != nullptr;};
      void deleteEventStatus() { this->eventStatus_ = nullptr;};
      inline int32_t getEventStatus() const { DARABONBA_PTR_GET_DEFAULT(eventStatus_, 0) };
      inline Items& setEventStatus(int32_t eventStatus) { DARABONBA_PTR_SET_VALUE(eventStatus_, eventStatus) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Items& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceDescription Field Functions 
      bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
      void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
      inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
      inline Items& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Items& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastFinishedTime Field Functions 
      bool hasLastFinishedTime() const { return this->lastFinishedTime_ != nullptr;};
      void deleteLastFinishedTime() { this->lastFinishedTime_ = nullptr;};
      inline int64_t getLastFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(lastFinishedTime_, 0L) };
      inline Items& setLastFinishedTime(int64_t lastFinishedTime) { DARABONBA_PTR_SET_VALUE(lastFinishedTime_, lastFinishedTime) };


      // lastStartTime Field Functions 
      bool hasLastStartTime() const { return this->lastStartTime_ != nullptr;};
      void deleteLastStartTime() { this->lastStartTime_ = nullptr;};
      inline int64_t getLastStartTime() const { DARABONBA_PTR_GET_DEFAULT(lastStartTime_, 0L) };
      inline Items& setLastStartTime(int64_t lastStartTime) { DARABONBA_PTR_SET_VALUE(lastStartTime_, lastStartTime) };


      // localName Field Functions 
      bool hasLocalName() const { return this->localName_ != nullptr;};
      void deleteLocalName() { this->localName_ = nullptr;};
      inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
      inline Items& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


      // logStoreDay Field Functions 
      bool hasLogStoreDay() const { return this->logStoreDay_ != nullptr;};
      void deleteLogStoreDay() { this->logStoreDay_ = nullptr;};
      inline int32_t getLogStoreDay() const { DARABONBA_PTR_GET_DEFAULT(logStoreDay_, 0) };
      inline Items& setLogStoreDay(int32_t logStoreDay) { DARABONBA_PTR_SET_VALUE(logStoreDay_, logStoreDay) };


      // memberAccount Field Functions 
      bool hasMemberAccount() const { return this->memberAccount_ != nullptr;};
      void deleteMemberAccount() { this->memberAccount_ = nullptr;};
      inline int64_t getMemberAccount() const { DARABONBA_PTR_GET_DEFAULT(memberAccount_, 0L) };
      inline Items& setMemberAccount(int64_t memberAccount) { DARABONBA_PTR_SET_VALUE(memberAccount_, memberAccount) };


      // nextStartTime Field Functions 
      bool hasNextStartTime() const { return this->nextStartTime_ != nullptr;};
      void deleteNextStartTime() { this->nextStartTime_ = nullptr;};
      inline int64_t getNextStartTime() const { DARABONBA_PTR_GET_DEFAULT(nextStartTime_, 0L) };
      inline Items& setNextStartTime(int64_t nextStartTime) { DARABONBA_PTR_SET_VALUE(nextStartTime_, nextStartTime) };


      // ocrStatus Field Functions 
      bool hasOcrStatus() const { return this->ocrStatus_ != nullptr;};
      void deleteOcrStatus() { this->ocrStatus_ = nullptr;};
      inline int32_t getOcrStatus() const { DARABONBA_PTR_GET_DEFAULT(ocrStatus_, 0) };
      inline Items& setOcrStatus(int32_t ocrStatus) { DARABONBA_PTR_SET_VALUE(ocrStatus_, ocrStatus) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline Items& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Items& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // processStatus Field Functions 
      bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
      void deleteProcessStatus() { this->processStatus_ = nullptr;};
      inline int32_t getProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, 0) };
      inline Items& setProcessStatus(int32_t processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


      // processTotalCount Field Functions 
      bool hasProcessTotalCount() const { return this->processTotalCount_ != nullptr;};
      void deleteProcessTotalCount() { this->processTotalCount_ = nullptr;};
      inline int32_t getProcessTotalCount() const { DARABONBA_PTR_GET_DEFAULT(processTotalCount_, 0) };
      inline Items& setProcessTotalCount(int32_t processTotalCount) { DARABONBA_PTR_SET_VALUE(processTotalCount_, processTotalCount) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Items& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline int64_t getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, 0L) };
      inline Items& setResourceType(int64_t resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // resourceTypeCode Field Functions 
      bool hasResourceTypeCode() const { return this->resourceTypeCode_ != nullptr;};
      void deleteResourceTypeCode() { this->resourceTypeCode_ = nullptr;};
      inline string getResourceTypeCode() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeCode_, "") };
      inline Items& setResourceTypeCode(string resourceTypeCode) { DARABONBA_PTR_SET_VALUE(resourceTypeCode_, resourceTypeCode) };


      // samplingSize Field Functions 
      bool hasSamplingSize() const { return this->samplingSize_ != nullptr;};
      void deleteSamplingSize() { this->samplingSize_ = nullptr;};
      inline int32_t getSamplingSize() const { DARABONBA_PTR_GET_DEFAULT(samplingSize_, 0) };
      inline Items& setSamplingSize(int32_t samplingSize) { DARABONBA_PTR_SET_VALUE(samplingSize_, samplingSize) };


      // securityGroupIdList Field Functions 
      bool hasSecurityGroupIdList() const { return this->securityGroupIdList_ != nullptr;};
      void deleteSecurityGroupIdList() { this->securityGroupIdList_ = nullptr;};
      inline const vector<string> & getSecurityGroupIdList() const { DARABONBA_PTR_GET_CONST(securityGroupIdList_, vector<string>) };
      inline vector<string> getSecurityGroupIdList() { DARABONBA_PTR_GET(securityGroupIdList_, vector<string>) };
      inline Items& setSecurityGroupIdList(const vector<string> & securityGroupIdList) { DARABONBA_PTR_SET_VALUE(securityGroupIdList_, securityGroupIdList) };
      inline Items& setSecurityGroupIdList(vector<string> && securityGroupIdList) { DARABONBA_PTR_SET_RVALUE(securityGroupIdList_, securityGroupIdList) };


      // supportAudit Field Functions 
      bool hasSupportAudit() const { return this->supportAudit_ != nullptr;};
      void deleteSupportAudit() { this->supportAudit_ = nullptr;};
      inline bool getSupportAudit() const { DARABONBA_PTR_GET_DEFAULT(supportAudit_, false) };
      inline Items& setSupportAudit(bool supportAudit) { DARABONBA_PTR_SET_VALUE(supportAudit_, supportAudit) };


      // supportDatamask Field Functions 
      bool hasSupportDatamask() const { return this->supportDatamask_ != nullptr;};
      void deleteSupportDatamask() { this->supportDatamask_ = nullptr;};
      inline bool getSupportDatamask() const { DARABONBA_PTR_GET_DEFAULT(supportDatamask_, false) };
      inline Items& setSupportDatamask(bool supportDatamask) { DARABONBA_PTR_SET_VALUE(supportDatamask_, supportDatamask) };


      // supportEvent Field Functions 
      bool hasSupportEvent() const { return this->supportEvent_ != nullptr;};
      void deleteSupportEvent() { this->supportEvent_ = nullptr;};
      inline bool getSupportEvent() const { DARABONBA_PTR_GET_DEFAULT(supportEvent_, false) };
      inline Items& setSupportEvent(bool supportEvent) { DARABONBA_PTR_SET_VALUE(supportEvent_, supportEvent) };


      // supportOcr Field Functions 
      bool hasSupportOcr() const { return this->supportOcr_ != nullptr;};
      void deleteSupportOcr() { this->supportOcr_ = nullptr;};
      inline bool getSupportOcr() const { DARABONBA_PTR_GET_DEFAULT(supportOcr_, false) };
      inline Items& setSupportOcr(bool supportOcr) { DARABONBA_PTR_SET_VALUE(supportOcr_, supportOcr) };


      // supportScan Field Functions 
      bool hasSupportScan() const { return this->supportScan_ != nullptr;};
      void deleteSupportScan() { this->supportScan_ = nullptr;};
      inline bool getSupportScan() const { DARABONBA_PTR_GET_DEFAULT(supportScan_, false) };
      inline Items& setSupportScan(bool supportScan) { DARABONBA_PTR_SET_VALUE(supportScan_, supportScan) };


      // tenantName Field Functions 
      bool hasTenantName() const { return this->tenantName_ != nullptr;};
      void deleteTenantName() { this->tenantName_ = nullptr;};
      inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
      inline Items& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Items& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Items& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // vSwitchIdList Field Functions 
      bool hasVSwitchIdList() const { return this->vSwitchIdList_ != nullptr;};
      void deleteVSwitchIdList() { this->vSwitchIdList_ = nullptr;};
      inline const vector<string> & getVSwitchIdList() const { DARABONBA_PTR_GET_CONST(vSwitchIdList_, vector<string>) };
      inline vector<string> getVSwitchIdList() { DARABONBA_PTR_GET(vSwitchIdList_, vector<string>) };
      inline Items& setVSwitchIdList(const vector<string> & vSwitchIdList) { DARABONBA_PTR_SET_VALUE(vSwitchIdList_, vSwitchIdList) };
      inline Items& setVSwitchIdList(vector<string> && vSwitchIdList) { DARABONBA_PTR_SET_RVALUE(vSwitchIdList_, vSwitchIdList) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Items& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // Indicates whether the security audit feature is enabled. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      shared_ptr<int32_t> auditStatus_ {};
      // Indicates whether the data asset can be automatically scanned. Valid values:
      // 
      // *   **0**: no
      // *   **1**: yes
      shared_ptr<int32_t> autoScan_ {};
      // The data detection status. Valid values:
      // 
      // *   **0**: The data detection is ready.
      // *   **1**: The data detection is running.
      // *   **2**: The connectivity test is in progress.
      // *   **3**: The connectivity test is passed.
      // *   **4**: The connectivity test failed.
      shared_ptr<int32_t> checkStatus_ {};
      // The name of the data detection status.
      shared_ptr<string> checkStatusName_ {};
      // Indicates whether DSC has the data de-identification permissions on the data asset. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      shared_ptr<int32_t> datamaskStatus_ {};
      // The database engine version.
      shared_ptr<string> dbVersion_ {};
      // Indicates whether DSC has the data identification permissions on the data asset. Valid values:
      // 
      // *   **1**: yes
      // *   **0**: no
      shared_ptr<int32_t> enable_ {};
      // The type of the database engine. Valid values include **MySQL**, **SQLServer**, **Oracle**, **PostgreSQL**, and **MongoDB**.
      shared_ptr<string> engineType_ {};
      // The error code.
      shared_ptr<string> errorCode_ {};
      // The reason for the failure.
      shared_ptr<string> errorMessage_ {};
      // Indicates whether the data leak prevention feature is enabled. Valid values:
      // 
      // *   **0**: no
      // *   **1**: yes (default)
      shared_ptr<int32_t> eventStatus_ {};
      // The time when the data asset was created. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The unique ID of the data asset.
      shared_ptr<int64_t> id_ {};
      // The description of the instance.
      shared_ptr<string> instanceDescription_ {};
      // The ID of the data asset to which the table belongs.
      shared_ptr<string> instanceId_ {};
      // The time when the last scan is performed.
      // 
      // *   The value is a UNIX timestamp.
      // *   Unit: milliseconds.
      shared_ptr<int64_t> lastFinishedTime_ {};
      // The last scan start time of data assets, in milliseconds.
      shared_ptr<int64_t> lastStartTime_ {};
      // The region in which the data asset resides.
      shared_ptr<string> localName_ {};
      // The retention period of raw logs. Unit: days.
      shared_ptr<int32_t> logStoreDay_ {};
      // The ID of the member.
      shared_ptr<int64_t> memberAccount_ {};
      // The next time when the data asset is scanned. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> nextStartTime_ {};
      // Indicates whether the optical character recognition (OCR) feature is enabled. Valid values:
      // 
      // *   **0**: no
      // *   **1**: yes
      shared_ptr<int32_t> ocrStatus_ {};
      // The parent ID of the data asset that you want to query. Valid values include **bucket, db, and project**.
      shared_ptr<string> parentId_ {};
      // The port number of the self-managed database.
      shared_ptr<int32_t> port_ {};
      // The status of the data asset scan. Valid values:
      // 
      // *   **-1**: invalid
      // *   **0**: waiting
      // *   **1**: being scanned
      // *   **2**: suspended
      // *   **3**: completed
      shared_ptr<int32_t> processStatus_ {};
      // The total number of data tables or files.
      shared_ptr<int32_t> processTotalCount_ {};
      // The region in which the asset resides.
      shared_ptr<string> regionId_ {};
      // The type of the service to which the data asset belongs. Valid values:
      // 
      // *   **1**: MaxCompute
      // *   **2**: OSS
      // *   **3**: AnalyticDB for MySQL
      // *   **4**: Tablestore
      // *   **5**: ApsaraDB RDS
      // *   **6**: self-managed database
      shared_ptr<int64_t> resourceType_ {};
      // The code of the service to which the data asset belongs. Valid values: **MaxCompute, OSS, ADS, OTS, and RDS**.
      shared_ptr<string> resourceTypeCode_ {};
      // The number of sensitive data samples. Valid values: **0**, **5**, and **10**. Unit: data entries.
      shared_ptr<int32_t> samplingSize_ {};
      // A list of the IDs of the security groups that are used by PrivateLink when you install the DSC agent.
      shared_ptr<vector<string>> securityGroupIdList_ {};
      // Indicates whether the security audit feature is supported. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> supportAudit_ {};
      // Indicates whether the data de-identification feature is supported. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> supportDatamask_ {};
      // Indicates whether anomalous event detection is supported. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> supportEvent_ {};
      // Indicates whether OCR is supported. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> supportOcr_ {};
      // Indicates whether the data asset scan feature is supported. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> supportScan_ {};
      // The alias of the tenant.
      shared_ptr<string> tenantName_ {};
      // The total number of fields in the table.
      shared_ptr<int32_t> totalCount_ {};
      // The username that is used to access the data asset.
      shared_ptr<string> userName_ {};
      // A list of the IDs of the vSwitches that are used by PrivateLink when you install the DSC agent.
      shared_ptr<vector<string>> vSwitchIdList_ {};
      // The ID of the virtual private cloud (VPC) to which the data asset belongs.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDataLimitsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDataLimitsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDataLimitsResponseBody::Items>) };
    inline vector<DescribeDataLimitsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDataLimitsResponseBody::Items>) };
    inline DescribeDataLimitsResponseBody& setItems(const vector<DescribeDataLimitsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDataLimitsResponseBody& setItems(vector<DescribeDataLimitsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDataLimitsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataLimitsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDataLimitsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The data assets.
    shared_ptr<vector<DescribeDataLimitsResponseBody::Items>> items_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
