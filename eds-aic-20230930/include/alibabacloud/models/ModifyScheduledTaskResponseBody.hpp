// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCHEDULEDTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCHEDULEDTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyScheduledTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScheduledTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScheduledTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ModifyScheduledTaskResponseBody() = default ;
    ModifyScheduledTaskResponseBody(const ModifyScheduledTaskResponseBody &) = default ;
    ModifyScheduledTaskResponseBody(ModifyScheduledTaskResponseBody &&) = default ;
    ModifyScheduledTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScheduledTaskResponseBody() = default ;
    ModifyScheduledTaskResponseBody& operator=(const ModifyScheduledTaskResponseBody &) = default ;
    ModifyScheduledTaskResponseBody& operator=(ModifyScheduledTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tasks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceResults, instanceResults_);
        DARABONBA_PTR_TO_JSON(NewVersion, newVersion_);
        DARABONBA_PTR_TO_JSON(ScheduledId, scheduledId_);
      };
      friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceResults, instanceResults_);
        DARABONBA_PTR_FROM_JSON(NewVersion, newVersion_);
        DARABONBA_PTR_FROM_JSON(ScheduledId, scheduledId_);
      };
      Tasks() = default ;
      Tasks(const Tasks &) = default ;
      Tasks(Tasks &&) = default ;
      Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tasks() = default ;
      Tasks& operator=(const Tasks &) = default ;
      Tasks& operator=(Tasks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceResults& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Success, success_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceResults& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Success, success_);
        };
        InstanceResults() = default ;
        InstanceResults(const InstanceResults &) = default ;
        InstanceResults(InstanceResults &&) = default ;
        InstanceResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceResults() = default ;
        InstanceResults& operator=(const InstanceResults &) = default ;
        InstanceResults& operator=(InstanceResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->instanceId_ == nullptr && this->success_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline InstanceResults& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceResults& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline InstanceResults& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        // The error message.
        shared_ptr<string> errorMessage_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // Indicates whether the operation is successful.
        shared_ptr<bool> success_ {};
      };

      virtual bool empty() const override { return this->instanceResults_ == nullptr
        && this->newVersion_ == nullptr && this->scheduledId_ == nullptr; };
      // instanceResults Field Functions 
      bool hasInstanceResults() const { return this->instanceResults_ != nullptr;};
      void deleteInstanceResults() { this->instanceResults_ = nullptr;};
      inline const vector<Tasks::InstanceResults> & getInstanceResults() const { DARABONBA_PTR_GET_CONST(instanceResults_, vector<Tasks::InstanceResults>) };
      inline vector<Tasks::InstanceResults> getInstanceResults() { DARABONBA_PTR_GET(instanceResults_, vector<Tasks::InstanceResults>) };
      inline Tasks& setInstanceResults(const vector<Tasks::InstanceResults> & instanceResults) { DARABONBA_PTR_SET_VALUE(instanceResults_, instanceResults) };
      inline Tasks& setInstanceResults(vector<Tasks::InstanceResults> && instanceResults) { DARABONBA_PTR_SET_RVALUE(instanceResults_, instanceResults) };


      // newVersion Field Functions 
      bool hasNewVersion() const { return this->newVersion_ != nullptr;};
      void deleteNewVersion() { this->newVersion_ = nullptr;};
      inline int32_t getNewVersion() const { DARABONBA_PTR_GET_DEFAULT(newVersion_, 0) };
      inline Tasks& setNewVersion(int32_t newVersion) { DARABONBA_PTR_SET_VALUE(newVersion_, newVersion) };


      // scheduledId Field Functions 
      bool hasScheduledId() const { return this->scheduledId_ != nullptr;};
      void deleteScheduledId() { this->scheduledId_ = nullptr;};
      inline string getScheduledId() const { DARABONBA_PTR_GET_DEFAULT(scheduledId_, "") };
      inline Tasks& setScheduledId(string scheduledId) { DARABONBA_PTR_SET_VALUE(scheduledId_, scheduledId) };


    protected:
      // The list of batch delivery results for instance scheduled tasks.
      shared_ptr<vector<Tasks::InstanceResults>> instanceResults_ {};
      // The updated CAS version number.
      shared_ptr<int32_t> newVersion_ {};
      // The scheduled task ID.
      shared_ptr<string> scheduledId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->tasks_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifyScheduledTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyScheduledTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyScheduledTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<ModifyScheduledTaskResponseBody::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<ModifyScheduledTaskResponseBody::Tasks>) };
    inline vector<ModifyScheduledTaskResponseBody::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<ModifyScheduledTaskResponseBody::Tasks>) };
    inline ModifyScheduledTaskResponseBody& setTasks(const vector<ModifyScheduledTaskResponseBody::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ModifyScheduledTaskResponseBody& setTasks(vector<ModifyScheduledTaskResponseBody::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ModifyScheduledTaskResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The API status code.
    shared_ptr<string> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of modification results.
    shared_ptr<vector<ModifyScheduledTaskResponseBody::Tasks>> tasks_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
