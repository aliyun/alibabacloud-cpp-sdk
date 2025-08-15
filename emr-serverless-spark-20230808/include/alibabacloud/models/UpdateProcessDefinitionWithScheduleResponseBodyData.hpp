// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class UpdateProcessDefinitionWithScheduleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProcessDefinitionWithScheduleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(alertEmailAddress, alertEmailAddress_);
      DARABONBA_PTR_TO_JSON(bizId, bizId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(crontab, crontab_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(executionType, executionType_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
      DARABONBA_PTR_TO_JSON(releaseState, releaseState_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(timezoneId, timezoneId_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(versionHashCode, versionHashCode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProcessDefinitionWithScheduleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(alertEmailAddress, alertEmailAddress_);
      DARABONBA_PTR_FROM_JSON(bizId, bizId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(crontab, crontab_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(executionType, executionType_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
      DARABONBA_PTR_FROM_JSON(releaseState, releaseState_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(timezoneId, timezoneId_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(versionHashCode, versionHashCode_);
    };
    UpdateProcessDefinitionWithScheduleResponseBodyData() = default ;
    UpdateProcessDefinitionWithScheduleResponseBodyData(const UpdateProcessDefinitionWithScheduleResponseBodyData &) = default ;
    UpdateProcessDefinitionWithScheduleResponseBodyData(UpdateProcessDefinitionWithScheduleResponseBodyData &&) = default ;
    UpdateProcessDefinitionWithScheduleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProcessDefinitionWithScheduleResponseBodyData() = default ;
    UpdateProcessDefinitionWithScheduleResponseBodyData& operator=(const UpdateProcessDefinitionWithScheduleResponseBodyData &) = default ;
    UpdateProcessDefinitionWithScheduleResponseBodyData& operator=(UpdateProcessDefinitionWithScheduleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertEmailAddress_ != nullptr
        && this->bizId_ != nullptr && this->code_ != nullptr && this->createTime_ != nullptr && this->crontab_ != nullptr && this->description_ != nullptr
        && this->endTime_ != nullptr && this->executionType_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->projectName_ != nullptr
        && this->releaseState_ != nullptr && this->startTime_ != nullptr && this->timezoneId_ != nullptr && this->updateTime_ != nullptr && this->userId_ != nullptr
        && this->userName_ != nullptr && this->version_ != nullptr && this->versionHashCode_ != nullptr; };
    // alertEmailAddress Field Functions 
    bool hasAlertEmailAddress() const { return this->alertEmailAddress_ != nullptr;};
    void deleteAlertEmailAddress() { this->alertEmailAddress_ = nullptr;};
    inline string alertEmailAddress() const { DARABONBA_PTR_GET_DEFAULT(alertEmailAddress_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setAlertEmailAddress(string alertEmailAddress) { DARABONBA_PTR_SET_VALUE(alertEmailAddress_, alertEmailAddress) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crontab Field Functions 
    bool hasCrontab() const { return this->crontab_ != nullptr;};
    void deleteCrontab() { this->crontab_ = nullptr;};
    inline string crontab() const { DARABONBA_PTR_GET_DEFAULT(crontab_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setCrontab(string crontab) { DARABONBA_PTR_SET_VALUE(crontab_, crontab) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executionType Field Functions 
    bool hasExecutionType() const { return this->executionType_ != nullptr;};
    void deleteExecutionType() { this->executionType_ = nullptr;};
    inline string executionType() const { DARABONBA_PTR_GET_DEFAULT(executionType_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setExecutionType(string executionType) { DARABONBA_PTR_SET_VALUE(executionType_, executionType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // releaseState Field Functions 
    bool hasReleaseState() const { return this->releaseState_ != nullptr;};
    void deleteReleaseState() { this->releaseState_ = nullptr;};
    inline string releaseState() const { DARABONBA_PTR_GET_DEFAULT(releaseState_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setReleaseState(string releaseState) { DARABONBA_PTR_SET_VALUE(releaseState_, releaseState) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timezoneId Field Functions 
    bool hasTimezoneId() const { return this->timezoneId_ != nullptr;};
    void deleteTimezoneId() { this->timezoneId_ = nullptr;};
    inline string timezoneId() const { DARABONBA_PTR_GET_DEFAULT(timezoneId_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setTimezoneId(string timezoneId) { DARABONBA_PTR_SET_VALUE(timezoneId_, timezoneId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionHashCode Field Functions 
    bool hasVersionHashCode() const { return this->versionHashCode_ != nullptr;};
    void deleteVersionHashCode() { this->versionHashCode_ = nullptr;};
    inline string versionHashCode() const { DARABONBA_PTR_GET_DEFAULT(versionHashCode_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBodyData& setVersionHashCode(string versionHashCode) { DARABONBA_PTR_SET_VALUE(versionHashCode_, versionHashCode) };


  protected:
    // The email address to receive alerts.
    std::shared_ptr<string> alertEmailAddress_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> bizId_ = nullptr;
    // The workflow ID.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the workflow was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The CRON expression that is used for scheduling.
    std::shared_ptr<string> crontab_ = nullptr;
    // The node description.
    std::shared_ptr<string> description_ = nullptr;
    // The end of the end time range.
    std::shared_ptr<string> endTime_ = nullptr;
    // The execution policy.
    std::shared_ptr<string> executionType_ = nullptr;
    // The serial number of the workflow.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the workflow.
    std::shared_ptr<string> name_ = nullptr;
    // The name of the project to which the workflow belongs.
    std::shared_ptr<string> projectName_ = nullptr;
    // The status of the workflow.
    std::shared_ptr<string> releaseState_ = nullptr;
    // The start time of the scheduling.
    std::shared_ptr<string> startTime_ = nullptr;
    // The ID of the time zone.
    std::shared_ptr<string> timezoneId_ = nullptr;
    // The time when the workflow was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The ID of the user that is used to initiate a scheduling.
    std::shared_ptr<string> userId_ = nullptr;
    // The name of the user that is used to initiate a scheduling.
    std::shared_ptr<string> userName_ = nullptr;
    // The version number.
    std::shared_ptr<int32_t> version_ = nullptr;
    // The hash code of the version.
    std::shared_ptr<string> versionHashCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
