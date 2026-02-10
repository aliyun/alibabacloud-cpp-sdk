// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFILEPROTECTREMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFILEPROTECTREMARKREQUEST_HPP_
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
  class UpdateFileProtectRemarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFileProtectRemarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLevels, alertLevels_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdList, idList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SelectAllAcrossPages, selectAllAcrossPages_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFileProtectRemarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLevels, alertLevels_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdList, idList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SelectAllAcrossPages, selectAllAcrossPages_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    UpdateFileProtectRemarkRequest() = default ;
    UpdateFileProtectRemarkRequest(const UpdateFileProtectRemarkRequest &) = default ;
    UpdateFileProtectRemarkRequest(UpdateFileProtectRemarkRequest &&) = default ;
    UpdateFileProtectRemarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFileProtectRemarkRequest() = default ;
    UpdateFileProtectRemarkRequest& operator=(const UpdateFileProtectRemarkRequest &) = default ;
    UpdateFileProtectRemarkRequest& operator=(UpdateFileProtectRemarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertLevels_ == nullptr
        && this->endTime_ == nullptr && this->id_ == nullptr && this->idList_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->operation_ == nullptr && this->remark_ == nullptr && this->ruleName_ == nullptr
        && this->selectAllAcrossPages_ == nullptr && this->startTime_ == nullptr && this->uuid_ == nullptr; };
    // alertLevels Field Functions 
    bool hasAlertLevels() const { return this->alertLevels_ != nullptr;};
    void deleteAlertLevels() { this->alertLevels_ = nullptr;};
    inline const vector<int32_t> & getAlertLevels() const { DARABONBA_PTR_GET_CONST(alertLevels_, vector<int32_t>) };
    inline vector<int32_t> getAlertLevels() { DARABONBA_PTR_GET(alertLevels_, vector<int32_t>) };
    inline UpdateFileProtectRemarkRequest& setAlertLevels(const vector<int32_t> & alertLevels) { DARABONBA_PTR_SET_VALUE(alertLevels_, alertLevels) };
    inline UpdateFileProtectRemarkRequest& setAlertLevels(vector<int32_t> && alertLevels) { DARABONBA_PTR_SET_RVALUE(alertLevels_, alertLevels) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline UpdateFileProtectRemarkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateFileProtectRemarkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idList Field Functions 
    bool hasIdList() const { return this->idList_ != nullptr;};
    void deleteIdList() { this->idList_ = nullptr;};
    inline const vector<int64_t> & getIdList() const { DARABONBA_PTR_GET_CONST(idList_, vector<int64_t>) };
    inline vector<int64_t> getIdList() { DARABONBA_PTR_GET(idList_, vector<int64_t>) };
    inline UpdateFileProtectRemarkRequest& setIdList(const vector<int64_t> & idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };
    inline UpdateFileProtectRemarkRequest& setIdList(vector<int64_t> && idList) { DARABONBA_PTR_SET_RVALUE(idList_, idList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateFileProtectRemarkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateFileProtectRemarkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline UpdateFileProtectRemarkRequest& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline UpdateFileProtectRemarkRequest& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline UpdateFileProtectRemarkRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline const vector<string> & getRemark() const { DARABONBA_PTR_GET_CONST(remark_, vector<string>) };
    inline vector<string> getRemark() { DARABONBA_PTR_GET(remark_, vector<string>) };
    inline UpdateFileProtectRemarkRequest& setRemark(const vector<string> & remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };
    inline UpdateFileProtectRemarkRequest& setRemark(vector<string> && remark) { DARABONBA_PTR_SET_RVALUE(remark_, remark) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateFileProtectRemarkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // selectAllAcrossPages Field Functions 
    bool hasSelectAllAcrossPages() const { return this->selectAllAcrossPages_ != nullptr;};
    void deleteSelectAllAcrossPages() { this->selectAllAcrossPages_ = nullptr;};
    inline bool getSelectAllAcrossPages() const { DARABONBA_PTR_GET_DEFAULT(selectAllAcrossPages_, false) };
    inline UpdateFileProtectRemarkRequest& setSelectAllAcrossPages(bool selectAllAcrossPages) { DARABONBA_PTR_SET_VALUE(selectAllAcrossPages_, selectAllAcrossPages) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline UpdateFileProtectRemarkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline UpdateFileProtectRemarkRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // Alert notification level list.
    shared_ptr<vector<int32_t>> alertLevels_ {};
    // End time timestamp.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the event.
    shared_ptr<int64_t> id_ {};
    // Event ID list.
    shared_ptr<vector<int64_t>> idList_ {};
    // Asset instance ID.
    shared_ptr<string> instanceId_ {};
    // Asset instance name.
    shared_ptr<string> instanceName_ {};
    // Public IP.
    shared_ptr<string> internetIp_ {};
    // Private IP.
    shared_ptr<string> intranetIp_ {};
    // File operation type. Values:
    // 
    // - **DELETE**: File deletion operation.
    // - **WRITE**: File write operation.
    // - **READ**: File read operation.
    // - **RENAME**: File rename operation.
    // - **CHOWN**: Set file owner and associated group operation.
    shared_ptr<string> operation_ {};
    // The remarks.
    shared_ptr<vector<string>> remark_ {};
    // Rule name.
    shared_ptr<string> ruleName_ {};
    // Cross-page select all indicator. Values:
    // - **true**: Yes
    // - **false**: No
    shared_ptr<bool> selectAllAcrossPages_ {};
    // Start time timestamp.
    shared_ptr<int64_t> startTime_ {};
    // Server UUID.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
