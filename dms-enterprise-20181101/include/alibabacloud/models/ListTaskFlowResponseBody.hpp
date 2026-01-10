// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskFlowList, taskFlowList_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskFlowList, taskFlowList_);
    };
    ListTaskFlowResponseBody() = default ;
    ListTaskFlowResponseBody(const ListTaskFlowResponseBody &) = default ;
    ListTaskFlowResponseBody(ListTaskFlowResponseBody &&) = default ;
    ListTaskFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowResponseBody() = default ;
    ListTaskFlowResponseBody& operator=(const ListTaskFlowResponseBody &) = default ;
    ListTaskFlowResponseBody& operator=(ListTaskFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskFlowList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskFlowList& obj) { 
        DARABONBA_PTR_TO_JSON(TaskFlow, taskFlow_);
      };
      friend void from_json(const Darabonba::Json& j, TaskFlowList& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskFlow, taskFlow_);
      };
      TaskFlowList() = default ;
      TaskFlowList(const TaskFlowList &) = default ;
      TaskFlowList(TaskFlowList &&) = default ;
      TaskFlowList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskFlowList() = default ;
      TaskFlowList& operator=(const TaskFlowList &) = default ;
      TaskFlowList& operator=(TaskFlowList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskFlow : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskFlow& obj) { 
          DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(CreatorNickName, creatorNickName_);
          DARABONBA_PTR_TO_JSON(DagOwnerNickName, dagOwnerNickName_);
          DARABONBA_PTR_TO_JSON(DeployId, deployId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LatestInstanceStatus, latestInstanceStatus_);
          DARABONBA_PTR_TO_JSON(LatestInstanceTime, latestInstanceTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, TaskFlow& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(CreatorNickName, creatorNickName_);
          DARABONBA_PTR_FROM_JSON(DagOwnerNickName, dagOwnerNickName_);
          DARABONBA_PTR_FROM_JSON(DeployId, deployId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LatestInstanceStatus, latestInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(LatestInstanceTime, latestInstanceTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        TaskFlow() = default ;
        TaskFlow(const TaskFlow &) = default ;
        TaskFlow(TaskFlow &&) = default ;
        TaskFlow(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskFlow() = default ;
        TaskFlow& operator=(const TaskFlow &) = default ;
        TaskFlow& operator=(TaskFlow &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creatorId_ == nullptr
        && this->creatorNickName_ == nullptr && this->dagOwnerNickName_ == nullptr && this->deployId_ == nullptr && this->id_ == nullptr && this->latestInstanceStatus_ == nullptr
        && this->latestInstanceTime_ == nullptr && this->status_ == nullptr; };
        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline TaskFlow& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // creatorNickName Field Functions 
        bool hasCreatorNickName() const { return this->creatorNickName_ != nullptr;};
        void deleteCreatorNickName() { this->creatorNickName_ = nullptr;};
        inline string getCreatorNickName() const { DARABONBA_PTR_GET_DEFAULT(creatorNickName_, "") };
        inline TaskFlow& setCreatorNickName(string creatorNickName) { DARABONBA_PTR_SET_VALUE(creatorNickName_, creatorNickName) };


        // dagOwnerNickName Field Functions 
        bool hasDagOwnerNickName() const { return this->dagOwnerNickName_ != nullptr;};
        void deleteDagOwnerNickName() { this->dagOwnerNickName_ = nullptr;};
        inline string getDagOwnerNickName() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerNickName_, "") };
        inline TaskFlow& setDagOwnerNickName(string dagOwnerNickName) { DARABONBA_PTR_SET_VALUE(dagOwnerNickName_, dagOwnerNickName) };


        // deployId Field Functions 
        bool hasDeployId() const { return this->deployId_ != nullptr;};
        void deleteDeployId() { this->deployId_ = nullptr;};
        inline int64_t getDeployId() const { DARABONBA_PTR_GET_DEFAULT(deployId_, 0L) };
        inline TaskFlow& setDeployId(int64_t deployId) { DARABONBA_PTR_SET_VALUE(deployId_, deployId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline TaskFlow& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // latestInstanceStatus Field Functions 
        bool hasLatestInstanceStatus() const { return this->latestInstanceStatus_ != nullptr;};
        void deleteLatestInstanceStatus() { this->latestInstanceStatus_ = nullptr;};
        inline int32_t getLatestInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceStatus_, 0) };
        inline TaskFlow& setLatestInstanceStatus(int32_t latestInstanceStatus) { DARABONBA_PTR_SET_VALUE(latestInstanceStatus_, latestInstanceStatus) };


        // latestInstanceTime Field Functions 
        bool hasLatestInstanceTime() const { return this->latestInstanceTime_ != nullptr;};
        void deleteLatestInstanceTime() { this->latestInstanceTime_ = nullptr;};
        inline string getLatestInstanceTime() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceTime_, "") };
        inline TaskFlow& setLatestInstanceTime(string latestInstanceTime) { DARABONBA_PTR_SET_VALUE(latestInstanceTime_, latestInstanceTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline TaskFlow& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The ID of the user who creates the task flow.
        shared_ptr<string> creatorId_ {};
        // The name of the user who creates the task flow.
        shared_ptr<string> creatorNickName_ {};
        // The name of the task flow owner.
        shared_ptr<string> dagOwnerNickName_ {};
        // The ID of the latest deployment record.
        shared_ptr<int64_t> deployId_ {};
        // The ID of the task flow.
        shared_ptr<int64_t> id_ {};
        // The status of the latest execution. Valid values:
        // 
        // *   **0**: invalid.
        // *   **1**: scheduling disabled.
        // *   **2**: waiting to be scheduled.
        shared_ptr<int32_t> latestInstanceStatus_ {};
        // The time when the latest execution record was generated.
        shared_ptr<string> latestInstanceTime_ {};
        // The status of the task flow. Valid values:
        // 
        // *   **0**: The task flow is invalid.
        // *   **1**: Scheduling is disabled for the task flow.
        // *   **2**: The task flow is waiting to be scheduled.
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->taskFlow_ == nullptr; };
      // taskFlow Field Functions 
      bool hasTaskFlow() const { return this->taskFlow_ != nullptr;};
      void deleteTaskFlow() { this->taskFlow_ = nullptr;};
      inline const vector<TaskFlowList::TaskFlow> & getTaskFlow() const { DARABONBA_PTR_GET_CONST(taskFlow_, vector<TaskFlowList::TaskFlow>) };
      inline vector<TaskFlowList::TaskFlow> getTaskFlow() { DARABONBA_PTR_GET(taskFlow_, vector<TaskFlowList::TaskFlow>) };
      inline TaskFlowList& setTaskFlow(const vector<TaskFlowList::TaskFlow> & taskFlow) { DARABONBA_PTR_SET_VALUE(taskFlow_, taskFlow) };
      inline TaskFlowList& setTaskFlow(vector<TaskFlowList::TaskFlow> && taskFlow) { DARABONBA_PTR_SET_RVALUE(taskFlow_, taskFlow) };


    protected:
      shared_ptr<vector<TaskFlowList::TaskFlow>> taskFlow_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->taskFlowList_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTaskFlowResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTaskFlowResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTaskFlowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskFlowList Field Functions 
    bool hasTaskFlowList() const { return this->taskFlowList_ != nullptr;};
    void deleteTaskFlowList() { this->taskFlowList_ = nullptr;};
    inline const ListTaskFlowResponseBody::TaskFlowList & getTaskFlowList() const { DARABONBA_PTR_GET_CONST(taskFlowList_, ListTaskFlowResponseBody::TaskFlowList) };
    inline ListTaskFlowResponseBody::TaskFlowList getTaskFlowList() { DARABONBA_PTR_GET(taskFlowList_, ListTaskFlowResponseBody::TaskFlowList) };
    inline ListTaskFlowResponseBody& setTaskFlowList(const ListTaskFlowResponseBody::TaskFlowList & taskFlowList) { DARABONBA_PTR_SET_VALUE(taskFlowList_, taskFlowList) };
    inline ListTaskFlowResponseBody& setTaskFlowList(ListTaskFlowResponseBody::TaskFlowList && taskFlowList) { DARABONBA_PTR_SET_RVALUE(taskFlowList_, taskFlowList) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The information about the task flows returned.
    shared_ptr<ListTaskFlowResponseBody::TaskFlowList> taskFlowList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
