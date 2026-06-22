// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFILEPROTECTCLIENTEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFILEPROTECTCLIENTEVENTREQUEST_HPP_
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
  class UpdateFileProtectClientEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFileProtectClientEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLevels, alertLevels_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExcludeIdList, excludeIdList_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(IdList, idList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(NewStatus, newStatus_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(ProcPath, procPath_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SelectAll, selectAll_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFileProtectClientEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLevels, alertLevels_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExcludeIdList, excludeIdList_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(IdList, idList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(NewStatus, newStatus_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(ProcPath, procPath_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SelectAll, selectAll_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    UpdateFileProtectClientEventRequest() = default ;
    UpdateFileProtectClientEventRequest(const UpdateFileProtectClientEventRequest &) = default ;
    UpdateFileProtectClientEventRequest(UpdateFileProtectClientEventRequest &&) = default ;
    UpdateFileProtectClientEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFileProtectClientEventRequest() = default ;
    UpdateFileProtectClientEventRequest& operator=(const UpdateFileProtectClientEventRequest &) = default ;
    UpdateFileProtectClientEventRequest& operator=(UpdateFileProtectClientEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertLevels_ == nullptr
        && this->endTime_ == nullptr && this->excludeIdList_ == nullptr && this->filePath_ == nullptr && this->idList_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->newStatus_ == nullptr && this->operation_ == nullptr
        && this->procPath_ == nullptr && this->remark_ == nullptr && this->ruleName_ == nullptr && this->selectAll_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->uuid_ == nullptr; };
    // alertLevels Field Functions 
    bool hasAlertLevels() const { return this->alertLevels_ != nullptr;};
    void deleteAlertLevels() { this->alertLevels_ = nullptr;};
    inline const vector<int32_t> & getAlertLevels() const { DARABONBA_PTR_GET_CONST(alertLevels_, vector<int32_t>) };
    inline vector<int32_t> getAlertLevels() { DARABONBA_PTR_GET(alertLevels_, vector<int32_t>) };
    inline UpdateFileProtectClientEventRequest& setAlertLevels(const vector<int32_t> & alertLevels) { DARABONBA_PTR_SET_VALUE(alertLevels_, alertLevels) };
    inline UpdateFileProtectClientEventRequest& setAlertLevels(vector<int32_t> && alertLevels) { DARABONBA_PTR_SET_RVALUE(alertLevels_, alertLevels) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline UpdateFileProtectClientEventRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // excludeIdList Field Functions 
    bool hasExcludeIdList() const { return this->excludeIdList_ != nullptr;};
    void deleteExcludeIdList() { this->excludeIdList_ = nullptr;};
    inline const vector<int64_t> & getExcludeIdList() const { DARABONBA_PTR_GET_CONST(excludeIdList_, vector<int64_t>) };
    inline vector<int64_t> getExcludeIdList() { DARABONBA_PTR_GET(excludeIdList_, vector<int64_t>) };
    inline UpdateFileProtectClientEventRequest& setExcludeIdList(const vector<int64_t> & excludeIdList) { DARABONBA_PTR_SET_VALUE(excludeIdList_, excludeIdList) };
    inline UpdateFileProtectClientEventRequest& setExcludeIdList(vector<int64_t> && excludeIdList) { DARABONBA_PTR_SET_RVALUE(excludeIdList_, excludeIdList) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline UpdateFileProtectClientEventRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // idList Field Functions 
    bool hasIdList() const { return this->idList_ != nullptr;};
    void deleteIdList() { this->idList_ = nullptr;};
    inline const vector<int64_t> & getIdList() const { DARABONBA_PTR_GET_CONST(idList_, vector<int64_t>) };
    inline vector<int64_t> getIdList() { DARABONBA_PTR_GET(idList_, vector<int64_t>) };
    inline UpdateFileProtectClientEventRequest& setIdList(const vector<int64_t> & idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };
    inline UpdateFileProtectClientEventRequest& setIdList(vector<int64_t> && idList) { DARABONBA_PTR_SET_RVALUE(idList_, idList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateFileProtectClientEventRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateFileProtectClientEventRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline UpdateFileProtectClientEventRequest& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline UpdateFileProtectClientEventRequest& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // newStatus Field Functions 
    bool hasNewStatus() const { return this->newStatus_ != nullptr;};
    void deleteNewStatus() { this->newStatus_ = nullptr;};
    inline int32_t getNewStatus() const { DARABONBA_PTR_GET_DEFAULT(newStatus_, 0) };
    inline UpdateFileProtectClientEventRequest& setNewStatus(int32_t newStatus) { DARABONBA_PTR_SET_VALUE(newStatus_, newStatus) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline UpdateFileProtectClientEventRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // procPath Field Functions 
    bool hasProcPath() const { return this->procPath_ != nullptr;};
    void deleteProcPath() { this->procPath_ = nullptr;};
    inline string getProcPath() const { DARABONBA_PTR_GET_DEFAULT(procPath_, "") };
    inline UpdateFileProtectClientEventRequest& setProcPath(string procPath) { DARABONBA_PTR_SET_VALUE(procPath_, procPath) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline const vector<string> & getRemark() const { DARABONBA_PTR_GET_CONST(remark_, vector<string>) };
    inline vector<string> getRemark() { DARABONBA_PTR_GET(remark_, vector<string>) };
    inline UpdateFileProtectClientEventRequest& setRemark(const vector<string> & remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };
    inline UpdateFileProtectClientEventRequest& setRemark(vector<string> && remark) { DARABONBA_PTR_SET_RVALUE(remark_, remark) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateFileProtectClientEventRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // selectAll Field Functions 
    bool hasSelectAll() const { return this->selectAll_ != nullptr;};
    void deleteSelectAll() { this->selectAll_ = nullptr;};
    inline bool getSelectAll() const { DARABONBA_PTR_GET_DEFAULT(selectAll_, false) };
    inline UpdateFileProtectClientEventRequest& setSelectAll(bool selectAll) { DARABONBA_PTR_SET_VALUE(selectAll_, selectAll) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline UpdateFileProtectClientEventRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateFileProtectClientEventRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline UpdateFileProtectClientEventRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The list of alert notification levels.
    shared_ptr<vector<int32_t>> alertLevels_ {};
    // The timestamp of the end time.
    shared_ptr<int64_t> endTime_ {};
    // The list of excluded event IDs.
    shared_ptr<vector<int64_t>> excludeIdList_ {};
    // The file path.
    shared_ptr<string> filePath_ {};
    // The list of event IDs.
    shared_ptr<vector<int64_t>> idList_ {};
    // The ID of the asset instance.
    shared_ptr<string> instanceId_ {};
    // The name of the asset instance.
    shared_ptr<string> instanceName_ {};
    // The public IP address.
    shared_ptr<string> internetIp_ {};
    // The internal IP address.
    shared_ptr<string> intranetIp_ {};
    // The new status. Valid values:
    // 
    // - **0**: Unhandled.
    // - **1**: Handled.
    // - **2**: Whitelisted.
    // 
    // This parameter is required.
    shared_ptr<int32_t> newStatus_ {};
    // The type of the operation.
    shared_ptr<string> operation_ {};
    // The process path.
    shared_ptr<string> procPath_ {};
    // The remarks.
    shared_ptr<vector<string>> remark_ {};
    // The rule name.
    shared_ptr<string> ruleName_ {};
    // Specifies whether to select all.
    // 
    // This parameter is required.
    shared_ptr<bool> selectAll_ {};
    // The start time.
    shared_ptr<int64_t> startTime_ {};
    // The event status. Valid values:
    // - **0**: Unhandled.
    // - **1**: Handled.
    // - **2**: Whitelisted.
    shared_ptr<string> status_ {};
    // The UUID of the protected server.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
