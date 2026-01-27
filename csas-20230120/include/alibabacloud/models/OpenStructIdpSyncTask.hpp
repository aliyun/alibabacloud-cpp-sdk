// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTIDPSYNCTASK_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTIDPSYNCTASK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class OpenStructIdpSyncTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructIdpSyncTask& obj) { 
      DARABONBA_PTR_TO_JSON(DepartmentFailed, departmentFailed_);
      DARABONBA_PTR_TO_JSON(DepartmentTotal, departmentTotal_);
      DARABONBA_PTR_TO_JSON(EndTimeUnix, endTimeUnix_);
      DARABONBA_PTR_TO_JSON(FailType, failType_);
      DARABONBA_TO_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_TO_JSON(StartTimeUnix, startTimeUnix_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SyncTaskId, syncTaskId_);
      DARABONBA_PTR_TO_JSON(UpdateTimeUnix, updateTimeUnix_);
      DARABONBA_PTR_TO_JSON(UserFailed, userFailed_);
      DARABONBA_PTR_TO_JSON(UserTotal, userTotal_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructIdpSyncTask& obj) { 
      DARABONBA_PTR_FROM_JSON(DepartmentFailed, departmentFailed_);
      DARABONBA_PTR_FROM_JSON(DepartmentTotal, departmentTotal_);
      DARABONBA_PTR_FROM_JSON(EndTimeUnix, endTimeUnix_);
      DARABONBA_PTR_FROM_JSON(FailType, failType_);
      DARABONBA_FROM_JSON(IdpConfigId, idpConfigId_);
      DARABONBA_PTR_FROM_JSON(StartTimeUnix, startTimeUnix_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SyncTaskId, syncTaskId_);
      DARABONBA_PTR_FROM_JSON(UpdateTimeUnix, updateTimeUnix_);
      DARABONBA_PTR_FROM_JSON(UserFailed, userFailed_);
      DARABONBA_PTR_FROM_JSON(UserTotal, userTotal_);
    };
    OpenStructIdpSyncTask() = default ;
    OpenStructIdpSyncTask(const OpenStructIdpSyncTask &) = default ;
    OpenStructIdpSyncTask(OpenStructIdpSyncTask &&) = default ;
    OpenStructIdpSyncTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructIdpSyncTask() = default ;
    OpenStructIdpSyncTask& operator=(const OpenStructIdpSyncTask &) = default ;
    OpenStructIdpSyncTask& operator=(OpenStructIdpSyncTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->departmentFailed_ == nullptr
        && this->departmentTotal_ == nullptr && this->endTimeUnix_ == nullptr && this->failType_ == nullptr && this->idpConfigId_.empty() && this->startTimeUnix_ == nullptr
        && this->status_ == nullptr && this->syncTaskId_ == nullptr && this->updateTimeUnix_ == nullptr && this->userFailed_ == nullptr && this->userTotal_ == nullptr; };
    // departmentFailed Field Functions 
    bool hasDepartmentFailed() const { return this->departmentFailed_ != nullptr;};
    void deleteDepartmentFailed() { this->departmentFailed_ = nullptr;};
    inline int64_t getDepartmentFailed() const { DARABONBA_PTR_GET_DEFAULT(departmentFailed_, 0L) };
    inline OpenStructIdpSyncTask& setDepartmentFailed(int64_t departmentFailed) { DARABONBA_PTR_SET_VALUE(departmentFailed_, departmentFailed) };


    // departmentTotal Field Functions 
    bool hasDepartmentTotal() const { return this->departmentTotal_ != nullptr;};
    void deleteDepartmentTotal() { this->departmentTotal_ = nullptr;};
    inline int64_t getDepartmentTotal() const { DARABONBA_PTR_GET_DEFAULT(departmentTotal_, 0L) };
    inline OpenStructIdpSyncTask& setDepartmentTotal(int64_t departmentTotal) { DARABONBA_PTR_SET_VALUE(departmentTotal_, departmentTotal) };


    // endTimeUnix Field Functions 
    bool hasEndTimeUnix() const { return this->endTimeUnix_ != nullptr;};
    void deleteEndTimeUnix() { this->endTimeUnix_ = nullptr;};
    inline int64_t getEndTimeUnix() const { DARABONBA_PTR_GET_DEFAULT(endTimeUnix_, 0L) };
    inline OpenStructIdpSyncTask& setEndTimeUnix(int64_t endTimeUnix) { DARABONBA_PTR_SET_VALUE(endTimeUnix_, endTimeUnix) };


    // failType Field Functions 
    bool hasFailType() const { return this->failType_ != nullptr;};
    void deleteFailType() { this->failType_ = nullptr;};
    inline string getFailType() const { DARABONBA_PTR_GET_DEFAULT(failType_, "") };
    inline OpenStructIdpSyncTask& setFailType(string failType) { DARABONBA_PTR_SET_VALUE(failType_, failType) };


    // idpConfigId Field Functions 
    bool hasIdpConfigId() const { return !this->idpConfigId_.empty();};
    void deleteIdpConfigId() { this->idpConfigId_.clear();};
    inline Darabonba::Bytes getIdpConfigId() const { DARABONBA_GET(idpConfigId_) };
    inline OpenStructIdpSyncTask& setIdpConfigId(Darabonba::Bytes idpConfigId) { DARABONBA_SET_VALUE(idpConfigId_, idpConfigId) };


    // startTimeUnix Field Functions 
    bool hasStartTimeUnix() const { return this->startTimeUnix_ != nullptr;};
    void deleteStartTimeUnix() { this->startTimeUnix_ = nullptr;};
    inline int64_t getStartTimeUnix() const { DARABONBA_PTR_GET_DEFAULT(startTimeUnix_, 0L) };
    inline OpenStructIdpSyncTask& setStartTimeUnix(int64_t startTimeUnix) { DARABONBA_PTR_SET_VALUE(startTimeUnix_, startTimeUnix) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline OpenStructIdpSyncTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // syncTaskId Field Functions 
    bool hasSyncTaskId() const { return this->syncTaskId_ != nullptr;};
    void deleteSyncTaskId() { this->syncTaskId_ = nullptr;};
    inline string getSyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(syncTaskId_, "") };
    inline OpenStructIdpSyncTask& setSyncTaskId(string syncTaskId) { DARABONBA_PTR_SET_VALUE(syncTaskId_, syncTaskId) };


    // updateTimeUnix Field Functions 
    bool hasUpdateTimeUnix() const { return this->updateTimeUnix_ != nullptr;};
    void deleteUpdateTimeUnix() { this->updateTimeUnix_ = nullptr;};
    inline int64_t getUpdateTimeUnix() const { DARABONBA_PTR_GET_DEFAULT(updateTimeUnix_, 0L) };
    inline OpenStructIdpSyncTask& setUpdateTimeUnix(int64_t updateTimeUnix) { DARABONBA_PTR_SET_VALUE(updateTimeUnix_, updateTimeUnix) };


    // userFailed Field Functions 
    bool hasUserFailed() const { return this->userFailed_ != nullptr;};
    void deleteUserFailed() { this->userFailed_ = nullptr;};
    inline int64_t getUserFailed() const { DARABONBA_PTR_GET_DEFAULT(userFailed_, 0L) };
    inline OpenStructIdpSyncTask& setUserFailed(int64_t userFailed) { DARABONBA_PTR_SET_VALUE(userFailed_, userFailed) };


    // userTotal Field Functions 
    bool hasUserTotal() const { return this->userTotal_ != nullptr;};
    void deleteUserTotal() { this->userTotal_ = nullptr;};
    inline int64_t getUserTotal() const { DARABONBA_PTR_GET_DEFAULT(userTotal_, 0L) };
    inline OpenStructIdpSyncTask& setUserTotal(int64_t userTotal) { DARABONBA_PTR_SET_VALUE(userTotal_, userTotal) };


  protected:
    shared_ptr<int64_t> departmentFailed_ {};
    shared_ptr<int64_t> departmentTotal_ {};
    shared_ptr<int64_t> endTimeUnix_ {};
    shared_ptr<string> failType_ {};
    Darabonba::Bytes idpConfigId_ {};
    shared_ptr<int64_t> startTimeUnix_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> syncTaskId_ {};
    shared_ptr<int64_t> updateTimeUnix_ {};
    shared_ptr<int64_t> userFailed_ {};
    shared_ptr<int64_t> userTotal_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
