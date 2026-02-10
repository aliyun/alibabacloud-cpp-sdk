// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFILEPROTECTEVENTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFILEPROTECTEVENTSTATUSREQUEST_HPP_
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
  class UpdateFileProtectEventStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFileProtectEventStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLevels, alertLevels_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SelectAllAcrossPages, selectAllAcrossPages_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFileProtectEventStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLevels, alertLevels_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SelectAllAcrossPages, selectAllAcrossPages_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    UpdateFileProtectEventStatusRequest() = default ;
    UpdateFileProtectEventStatusRequest(const UpdateFileProtectEventStatusRequest &) = default ;
    UpdateFileProtectEventStatusRequest(UpdateFileProtectEventStatusRequest &&) = default ;
    UpdateFileProtectEventStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFileProtectEventStatusRequest() = default ;
    UpdateFileProtectEventStatusRequest& operator=(const UpdateFileProtectEventStatusRequest &) = default ;
    UpdateFileProtectEventStatusRequest& operator=(UpdateFileProtectEventStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertLevels_ == nullptr
        && this->endTime_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->operation_ == nullptr && this->ruleName_ == nullptr && this->selectAllAcrossPages_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->uuid_ == nullptr; };
    // alertLevels Field Functions 
    bool hasAlertLevels() const { return this->alertLevels_ != nullptr;};
    void deleteAlertLevels() { this->alertLevels_ = nullptr;};
    inline const vector<int32_t> & getAlertLevels() const { DARABONBA_PTR_GET_CONST(alertLevels_, vector<int32_t>) };
    inline vector<int32_t> getAlertLevels() { DARABONBA_PTR_GET(alertLevels_, vector<int32_t>) };
    inline UpdateFileProtectEventStatusRequest& setAlertLevels(const vector<int32_t> & alertLevels) { DARABONBA_PTR_SET_VALUE(alertLevels_, alertLevels) };
    inline UpdateFileProtectEventStatusRequest& setAlertLevels(vector<int32_t> && alertLevels) { DARABONBA_PTR_SET_RVALUE(alertLevels_, alertLevels) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline UpdateFileProtectEventStatusRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline const vector<int64_t> & getId() const { DARABONBA_PTR_GET_CONST(id_, vector<int64_t>) };
    inline vector<int64_t> getId() { DARABONBA_PTR_GET(id_, vector<int64_t>) };
    inline UpdateFileProtectEventStatusRequest& setId(const vector<int64_t> & id) { DARABONBA_PTR_SET_VALUE(id_, id) };
    inline UpdateFileProtectEventStatusRequest& setId(vector<int64_t> && id) { DARABONBA_PTR_SET_RVALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateFileProtectEventStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateFileProtectEventStatusRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline UpdateFileProtectEventStatusRequest& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline UpdateFileProtectEventStatusRequest& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline UpdateFileProtectEventStatusRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateFileProtectEventStatusRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // selectAllAcrossPages Field Functions 
    bool hasSelectAllAcrossPages() const { return this->selectAllAcrossPages_ != nullptr;};
    void deleteSelectAllAcrossPages() { this->selectAllAcrossPages_ = nullptr;};
    inline bool getSelectAllAcrossPages() const { DARABONBA_PTR_GET_DEFAULT(selectAllAcrossPages_, false) };
    inline UpdateFileProtectEventStatusRequest& setSelectAllAcrossPages(bool selectAllAcrossPages) { DARABONBA_PTR_SET_VALUE(selectAllAcrossPages_, selectAllAcrossPages) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline UpdateFileProtectEventStatusRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline UpdateFileProtectEventStatusRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline UpdateFileProtectEventStatusRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The severities of alerts.
    shared_ptr<vector<int32_t>> alertLevels_ {};
    // The end of the time range to query. Unit: milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // The IDs of the events.
    shared_ptr<vector<int64_t>> id_ {};
    // The instance ID of the asset.
    shared_ptr<string> instanceId_ {};
    // The name of the server.
    shared_ptr<string> instanceName_ {};
    // The public IP address of the server.
    shared_ptr<string> internetIp_ {};
    // The private IP address of the server.
    shared_ptr<string> intranetIp_ {};
    // Type of operation on a file. eg:
    // 
    // - **DELETE**: delete the file.
    // - **WRITE**: write the file.
    // - **READ**: read the file.
    // - **RENAME**: rename the file.
    // - **CHOWN**: set the file owner and file association group operations.
    shared_ptr<string> operation_ {};
    // The name of the defense rule.
    shared_ptr<string> ruleName_ {};
    // Whether to choose all fields across industries.
    // 
    // - **true**: yes
    // - **false**: no
    shared_ptr<bool> selectAllAcrossPages_ {};
    // The beginning of the time range to query. Unit: milliseconds.
    shared_ptr<int64_t> startTime_ {};
    // The handling status of the event. Valid values:
    // 
    // *   **0**: unhandled
    // *   **1**: handled
    // *   **2**: added to the whitelist
    shared_ptr<int32_t> status_ {};
    // The UUID of the server.
    // 
    // > You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
