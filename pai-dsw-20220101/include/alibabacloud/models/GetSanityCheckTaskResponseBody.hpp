// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSANITYCHECKTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSANITYCHECKTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetSanityCheckTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSanityCheckTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckDetails, checkDetails_);
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Issues, issues_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSanityCheckTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckDetails, checkDetails_);
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Issues, issues_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetSanityCheckTaskResponseBody() = default ;
    GetSanityCheckTaskResponseBody(const GetSanityCheckTaskResponseBody &) = default ;
    GetSanityCheckTaskResponseBody(GetSanityCheckTaskResponseBody &&) = default ;
    GetSanityCheckTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSanityCheckTaskResponseBody() = default ;
    GetSanityCheckTaskResponseBody& operator=(const GetSanityCheckTaskResponseBody &) = default ;
    GetSanityCheckTaskResponseBody& operator=(GetSanityCheckTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckDetails& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, CheckDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
      };
      CheckDetails() = default ;
      CheckDetails(const CheckDetails &) = default ;
      CheckDetails(CheckDetails &&) = default ;
      CheckDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckDetails() = default ;
      CheckDetails& operator=(const CheckDetails &) = default ;
      CheckDetails& operator=(CheckDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->reason_ == nullptr && this->result_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CheckDetails& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CheckDetails& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline CheckDetails& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline CheckDetails& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> result_ {};
    };

    virtual bool empty() const override { return this->checkDetails_ == nullptr
        && this->checkType_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->issues_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->requestId_ == nullptr; };
    // checkDetails Field Functions 
    bool hasCheckDetails() const { return this->checkDetails_ != nullptr;};
    void deleteCheckDetails() { this->checkDetails_ = nullptr;};
    inline const vector<GetSanityCheckTaskResponseBody::CheckDetails> & getCheckDetails() const { DARABONBA_PTR_GET_CONST(checkDetails_, vector<GetSanityCheckTaskResponseBody::CheckDetails>) };
    inline vector<GetSanityCheckTaskResponseBody::CheckDetails> getCheckDetails() { DARABONBA_PTR_GET(checkDetails_, vector<GetSanityCheckTaskResponseBody::CheckDetails>) };
    inline GetSanityCheckTaskResponseBody& setCheckDetails(const vector<GetSanityCheckTaskResponseBody::CheckDetails> & checkDetails) { DARABONBA_PTR_SET_VALUE(checkDetails_, checkDetails) };
    inline GetSanityCheckTaskResponseBody& setCheckDetails(vector<GetSanityCheckTaskResponseBody::CheckDetails> && checkDetails) { DARABONBA_PTR_SET_RVALUE(checkDetails_, checkDetails) };


    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline string getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
    inline GetSanityCheckTaskResponseBody& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetSanityCheckTaskResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSanityCheckTaskResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // issues Field Functions 
    bool hasIssues() const { return this->issues_ != nullptr;};
    void deleteIssues() { this->issues_ = nullptr;};
    inline const vector<string> & getIssues() const { DARABONBA_PTR_GET_CONST(issues_, vector<string>) };
    inline vector<string> getIssues() { DARABONBA_PTR_GET(issues_, vector<string>) };
    inline GetSanityCheckTaskResponseBody& setIssues(const vector<string> & issues) { DARABONBA_PTR_SET_VALUE(issues_, issues) };
    inline GetSanityCheckTaskResponseBody& setIssues(vector<string> && issues) { DARABONBA_PTR_SET_RVALUE(issues_, issues) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetSanityCheckTaskResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSanityCheckTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetSanityCheckTaskResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSanityCheckTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetSanityCheckTaskResponseBody::CheckDetails>> checkDetails_ {};
    shared_ptr<string> checkType_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<string>> issues_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> taskId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
