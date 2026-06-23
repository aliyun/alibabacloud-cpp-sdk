// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTODOOPSTASKAPPROVALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTODOOPSTASKAPPROVALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListTodoOpsTaskApprovalsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTodoOpsTaskApprovalsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Approves, approves_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTodoOpsTaskApprovalsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Approves, approves_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTodoOpsTaskApprovalsResponseBody() = default ;
    ListTodoOpsTaskApprovalsResponseBody(const ListTodoOpsTaskApprovalsResponseBody &) = default ;
    ListTodoOpsTaskApprovalsResponseBody(ListTodoOpsTaskApprovalsResponseBody &&) = default ;
    ListTodoOpsTaskApprovalsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTodoOpsTaskApprovalsResponseBody() = default ;
    ListTodoOpsTaskApprovalsResponseBody& operator=(const ListTodoOpsTaskApprovalsResponseBody &) = default ;
    ListTodoOpsTaskApprovalsResponseBody& operator=(ListTodoOpsTaskApprovalsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Approves : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Approves& obj) { 
        DARABONBA_PTR_TO_JSON(ApplyAt, applyAt_);
        DARABONBA_PTR_TO_JSON(ApproveId, approveId_);
        DARABONBA_PTR_TO_JSON(ClientName, clientName_);
        DARABONBA_PTR_TO_JSON(ClientUid, clientUid_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Approves& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplyAt, applyAt_);
        DARABONBA_PTR_FROM_JSON(ApproveId, approveId_);
        DARABONBA_PTR_FROM_JSON(ClientName, clientName_);
        DARABONBA_PTR_FROM_JSON(ClientUid, clientUid_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      Approves() = default ;
      Approves(const Approves &) = default ;
      Approves(Approves &&) = default ;
      Approves(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Approves() = default ;
      Approves& operator=(const Approves &) = default ;
      Approves& operator=(Approves &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applyAt_ == nullptr
        && this->approveId_ == nullptr && this->clientName_ == nullptr && this->clientUid_ == nullptr && this->comment_ == nullptr && this->name_ == nullptr
        && this->scheduleType_ == nullptr && this->taskId_ == nullptr; };
      // applyAt Field Functions 
      bool hasApplyAt() const { return this->applyAt_ != nullptr;};
      void deleteApplyAt() { this->applyAt_ = nullptr;};
      inline int64_t getApplyAt() const { DARABONBA_PTR_GET_DEFAULT(applyAt_, 0L) };
      inline Approves& setApplyAt(int64_t applyAt) { DARABONBA_PTR_SET_VALUE(applyAt_, applyAt) };


      // approveId Field Functions 
      bool hasApproveId() const { return this->approveId_ != nullptr;};
      void deleteApproveId() { this->approveId_ = nullptr;};
      inline string getApproveId() const { DARABONBA_PTR_GET_DEFAULT(approveId_, "") };
      inline Approves& setApproveId(string approveId) { DARABONBA_PTR_SET_VALUE(approveId_, approveId) };


      // clientName Field Functions 
      bool hasClientName() const { return this->clientName_ != nullptr;};
      void deleteClientName() { this->clientName_ = nullptr;};
      inline string getClientName() const { DARABONBA_PTR_GET_DEFAULT(clientName_, "") };
      inline Approves& setClientName(string clientName) { DARABONBA_PTR_SET_VALUE(clientName_, clientName) };


      // clientUid Field Functions 
      bool hasClientUid() const { return this->clientUid_ != nullptr;};
      void deleteClientUid() { this->clientUid_ = nullptr;};
      inline int64_t getClientUid() const { DARABONBA_PTR_GET_DEFAULT(clientUid_, 0L) };
      inline Approves& setClientUid(int64_t clientUid) { DARABONBA_PTR_SET_VALUE(clientUid_, clientUid) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Approves& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Approves& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
      inline Approves& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline Approves& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The time when the request was submitted, in seconds (UNIX timestamp).
      shared_ptr<int64_t> applyAt_ {};
      // The approval ID of the O&M task.
      shared_ptr<string> approveId_ {};
      // The username of the O&M task applicant.
      shared_ptr<string> clientName_ {};
      // The bastion host user ID of the applicant.
      shared_ptr<int64_t> clientUid_ {};
      // The remarks of the O&M task.
      shared_ptr<string> comment_ {};
      // The name of the O&M task.
      shared_ptr<string> name_ {};
      // The scheduling type of the task.
      // - **FixTime**: scheduled execution.
      // - **CycleInterval**: periodic execution.
      // - **Manual**: manually triggered by a user.
      shared_ptr<string> scheduleType_ {};
      // The ID of the O&M task.
      shared_ptr<int64_t> taskId_ {};
    };

    virtual bool empty() const override { return this->approves_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // approves Field Functions 
    bool hasApproves() const { return this->approves_ != nullptr;};
    void deleteApproves() { this->approves_ = nullptr;};
    inline const vector<ListTodoOpsTaskApprovalsResponseBody::Approves> & getApproves() const { DARABONBA_PTR_GET_CONST(approves_, vector<ListTodoOpsTaskApprovalsResponseBody::Approves>) };
    inline vector<ListTodoOpsTaskApprovalsResponseBody::Approves> getApproves() { DARABONBA_PTR_GET(approves_, vector<ListTodoOpsTaskApprovalsResponseBody::Approves>) };
    inline ListTodoOpsTaskApprovalsResponseBody& setApproves(const vector<ListTodoOpsTaskApprovalsResponseBody::Approves> & approves) { DARABONBA_PTR_SET_VALUE(approves_, approves) };
    inline ListTodoOpsTaskApprovalsResponseBody& setApproves(vector<ListTodoOpsTaskApprovalsResponseBody::Approves> && approves) { DARABONBA_PTR_SET_RVALUE(approves_, approves) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTodoOpsTaskApprovalsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListTodoOpsTaskApprovalsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned data.
    shared_ptr<vector<ListTodoOpsTaskApprovalsResponseBody::Approves>> approves_ {};
    // The unique request ID generated by Alibaba Cloud for this request.
    shared_ptr<string> requestId_ {};
    // The total number of approval records returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
