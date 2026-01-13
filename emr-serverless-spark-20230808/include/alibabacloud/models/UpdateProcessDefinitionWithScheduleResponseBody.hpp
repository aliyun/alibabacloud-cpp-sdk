// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROCESSDEFINITIONWITHSCHEDULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class UpdateProcessDefinitionWithScheduleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProcessDefinitionWithScheduleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(failed, failed_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProcessDefinitionWithScheduleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(failed, failed_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    UpdateProcessDefinitionWithScheduleResponseBody() = default ;
    UpdateProcessDefinitionWithScheduleResponseBody(const UpdateProcessDefinitionWithScheduleResponseBody &) = default ;
    UpdateProcessDefinitionWithScheduleResponseBody(UpdateProcessDefinitionWithScheduleResponseBody &&) = default ;
    UpdateProcessDefinitionWithScheduleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProcessDefinitionWithScheduleResponseBody() = default ;
    UpdateProcessDefinitionWithScheduleResponseBody& operator=(const UpdateProcessDefinitionWithScheduleResponseBody &) = default ;
    UpdateProcessDefinitionWithScheduleResponseBody& operator=(UpdateProcessDefinitionWithScheduleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertEmailAddress_ == nullptr
        && this->bizId_ == nullptr && this->code_ == nullptr && this->createTime_ == nullptr && this->crontab_ == nullptr && this->description_ == nullptr
        && this->endTime_ == nullptr && this->executionType_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->projectName_ == nullptr
        && this->releaseState_ == nullptr && this->startTime_ == nullptr && this->timezoneId_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr
        && this->userName_ == nullptr && this->version_ == nullptr && this->versionHashCode_ == nullptr; };
      // alertEmailAddress Field Functions 
      bool hasAlertEmailAddress() const { return this->alertEmailAddress_ != nullptr;};
      void deleteAlertEmailAddress() { this->alertEmailAddress_ = nullptr;};
      inline string getAlertEmailAddress() const { DARABONBA_PTR_GET_DEFAULT(alertEmailAddress_, "") };
      inline Data& setAlertEmailAddress(string alertEmailAddress) { DARABONBA_PTR_SET_VALUE(alertEmailAddress_, alertEmailAddress) };


      // bizId Field Functions 
      bool hasBizId() const { return this->bizId_ != nullptr;};
      void deleteBizId() { this->bizId_ = nullptr;};
      inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
      inline Data& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // crontab Field Functions 
      bool hasCrontab() const { return this->crontab_ != nullptr;};
      void deleteCrontab() { this->crontab_ = nullptr;};
      inline string getCrontab() const { DARABONBA_PTR_GET_DEFAULT(crontab_, "") };
      inline Data& setCrontab(string crontab) { DARABONBA_PTR_SET_VALUE(crontab_, crontab) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // executionType Field Functions 
      bool hasExecutionType() const { return this->executionType_ != nullptr;};
      void deleteExecutionType() { this->executionType_ = nullptr;};
      inline string getExecutionType() const { DARABONBA_PTR_GET_DEFAULT(executionType_, "") };
      inline Data& setExecutionType(string executionType) { DARABONBA_PTR_SET_VALUE(executionType_, executionType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Data& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // releaseState Field Functions 
      bool hasReleaseState() const { return this->releaseState_ != nullptr;};
      void deleteReleaseState() { this->releaseState_ = nullptr;};
      inline string getReleaseState() const { DARABONBA_PTR_GET_DEFAULT(releaseState_, "") };
      inline Data& setReleaseState(string releaseState) { DARABONBA_PTR_SET_VALUE(releaseState_, releaseState) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // timezoneId Field Functions 
      bool hasTimezoneId() const { return this->timezoneId_ != nullptr;};
      void deleteTimezoneId() { this->timezoneId_ = nullptr;};
      inline string getTimezoneId() const { DARABONBA_PTR_GET_DEFAULT(timezoneId_, "") };
      inline Data& setTimezoneId(string timezoneId) { DARABONBA_PTR_SET_VALUE(timezoneId_, timezoneId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Data& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline Data& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versionHashCode Field Functions 
      bool hasVersionHashCode() const { return this->versionHashCode_ != nullptr;};
      void deleteVersionHashCode() { this->versionHashCode_ = nullptr;};
      inline string getVersionHashCode() const { DARABONBA_PTR_GET_DEFAULT(versionHashCode_, "") };
      inline Data& setVersionHashCode(string versionHashCode) { DARABONBA_PTR_SET_VALUE(versionHashCode_, versionHashCode) };


    protected:
      // The email address to receive alerts.
      shared_ptr<string> alertEmailAddress_ {};
      // The workspace ID.
      shared_ptr<string> bizId_ {};
      // The workflow ID.
      shared_ptr<string> code_ {};
      // The time when the workflow was created.
      shared_ptr<string> createTime_ {};
      // The CRON expression that is used for scheduling.
      shared_ptr<string> crontab_ {};
      // The node description.
      shared_ptr<string> description_ {};
      // The end of the end time range.
      shared_ptr<string> endTime_ {};
      // The execution policy.
      shared_ptr<string> executionType_ {};
      // The serial number of the workflow.
      shared_ptr<string> id_ {};
      // The name of the workflow.
      shared_ptr<string> name_ {};
      // The name of the project to which the workflow belongs.
      shared_ptr<string> projectName_ {};
      // The status of the workflow.
      shared_ptr<string> releaseState_ {};
      // The start time of the scheduling.
      shared_ptr<string> startTime_ {};
      // The ID of the time zone.
      shared_ptr<string> timezoneId_ {};
      // The time when the workflow was updated.
      shared_ptr<string> updateTime_ {};
      // The ID of the user that is used to initiate a scheduling.
      shared_ptr<string> userId_ {};
      // The name of the user that is used to initiate a scheduling.
      shared_ptr<string> userName_ {};
      // The version number.
      shared_ptr<int32_t> version_ {};
      // The hash code of the version.
      shared_ptr<string> versionHashCode_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->failed_ == nullptr && this->httpStatusCode_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateProcessDefinitionWithScheduleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateProcessDefinitionWithScheduleResponseBody::Data) };
    inline UpdateProcessDefinitionWithScheduleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateProcessDefinitionWithScheduleResponseBody::Data) };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setData(const UpdateProcessDefinitionWithScheduleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setData(UpdateProcessDefinitionWithScheduleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline string getFailed() const { DARABONBA_PTR_GET_DEFAULT(failed_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setFailed(string failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline UpdateProcessDefinitionWithScheduleResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The code that is returned by the backend server.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<UpdateProcessDefinitionWithScheduleResponseBody::Data> data_ {};
    // Indicates whether the request failed.
    shared_ptr<string> failed_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The description of the returned code.
    shared_ptr<string> msg_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
