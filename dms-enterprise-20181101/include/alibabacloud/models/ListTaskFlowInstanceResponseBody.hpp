// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWINSTANCERESPONSEBODY_HPP_
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
  class ListTaskFlowInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DAGInstanceList, DAGInstanceList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DAGInstanceList, DAGInstanceList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTaskFlowInstanceResponseBody() = default ;
    ListTaskFlowInstanceResponseBody(const ListTaskFlowInstanceResponseBody &) = default ;
    ListTaskFlowInstanceResponseBody(ListTaskFlowInstanceResponseBody &&) = default ;
    ListTaskFlowInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowInstanceResponseBody() = default ;
    ListTaskFlowInstanceResponseBody& operator=(const ListTaskFlowInstanceResponseBody &) = default ;
    ListTaskFlowInstanceResponseBody& operator=(ListTaskFlowInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DAGInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DAGInstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(DAGInstance, DAGInstance_);
      };
      friend void from_json(const Darabonba::Json& j, DAGInstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(DAGInstance, DAGInstance_);
      };
      DAGInstanceList() = default ;
      DAGInstanceList(const DAGInstanceList &) = default ;
      DAGInstanceList(DAGInstanceList &&) = default ;
      DAGInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DAGInstanceList() = default ;
      DAGInstanceList& operator=(const DAGInstanceList &) = default ;
      DAGInstanceList& operator=(DAGInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DAGInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DAGInstance& obj) { 
          DARABONBA_PTR_TO_JSON(BusinessTime, businessTime_);
          DARABONBA_PTR_TO_JSON(DagId, dagId_);
          DARABONBA_PTR_TO_JSON(DagName, dagName_);
          DARABONBA_PTR_TO_JSON(DagVersion, dagVersion_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(HistoryDagId, historyDagId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
          DARABONBA_PTR_TO_JSON(startTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, DAGInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(BusinessTime, businessTime_);
          DARABONBA_PTR_FROM_JSON(DagId, dagId_);
          DARABONBA_PTR_FROM_JSON(DagName, dagName_);
          DARABONBA_PTR_FROM_JSON(DagVersion, dagVersion_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(HistoryDagId, historyDagId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
          DARABONBA_PTR_FROM_JSON(startTime, startTime_);
        };
        DAGInstance() = default ;
        DAGInstance(const DAGInstance &) = default ;
        DAGInstance(DAGInstance &&) = default ;
        DAGInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DAGInstance() = default ;
        DAGInstance& operator=(const DAGInstance &) = default ;
        DAGInstance& operator=(DAGInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->businessTime_ == nullptr
        && this->dagId_ == nullptr && this->dagName_ == nullptr && this->dagVersion_ == nullptr && this->endTime_ == nullptr && this->historyDagId_ == nullptr
        && this->id_ == nullptr && this->message_ == nullptr && this->ownerName_ == nullptr && this->status_ == nullptr && this->triggerType_ == nullptr
        && this->startTime_ == nullptr; };
        // businessTime Field Functions 
        bool hasBusinessTime() const { return this->businessTime_ != nullptr;};
        void deleteBusinessTime() { this->businessTime_ = nullptr;};
        inline string getBusinessTime() const { DARABONBA_PTR_GET_DEFAULT(businessTime_, "") };
        inline DAGInstance& setBusinessTime(string businessTime) { DARABONBA_PTR_SET_VALUE(businessTime_, businessTime) };


        // dagId Field Functions 
        bool hasDagId() const { return this->dagId_ != nullptr;};
        void deleteDagId() { this->dagId_ = nullptr;};
        inline string getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, "") };
        inline DAGInstance& setDagId(string dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


        // dagName Field Functions 
        bool hasDagName() const { return this->dagName_ != nullptr;};
        void deleteDagName() { this->dagName_ = nullptr;};
        inline string getDagName() const { DARABONBA_PTR_GET_DEFAULT(dagName_, "") };
        inline DAGInstance& setDagName(string dagName) { DARABONBA_PTR_SET_VALUE(dagName_, dagName) };


        // dagVersion Field Functions 
        bool hasDagVersion() const { return this->dagVersion_ != nullptr;};
        void deleteDagVersion() { this->dagVersion_ = nullptr;};
        inline string getDagVersion() const { DARABONBA_PTR_GET_DEFAULT(dagVersion_, "") };
        inline DAGInstance& setDagVersion(string dagVersion) { DARABONBA_PTR_SET_VALUE(dagVersion_, dagVersion) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline DAGInstance& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // historyDagId Field Functions 
        bool hasHistoryDagId() const { return this->historyDagId_ != nullptr;};
        void deleteHistoryDagId() { this->historyDagId_ = nullptr;};
        inline int64_t getHistoryDagId() const { DARABONBA_PTR_GET_DEFAULT(historyDagId_, 0L) };
        inline DAGInstance& setHistoryDagId(int64_t historyDagId) { DARABONBA_PTR_SET_VALUE(historyDagId_, historyDagId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DAGInstance& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline DAGInstance& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // ownerName Field Functions 
        bool hasOwnerName() const { return this->ownerName_ != nullptr;};
        void deleteOwnerName() { this->ownerName_ = nullptr;};
        inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
        inline DAGInstance& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline DAGInstance& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // triggerType Field Functions 
        bool hasTriggerType() const { return this->triggerType_ != nullptr;};
        void deleteTriggerType() { this->triggerType_ = nullptr;};
        inline int32_t getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, 0) };
        inline DAGInstance& setTriggerType(int32_t triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline DAGInstance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The business time of the task flow. The time is displayed in the yyyy-MM-DD HH:mm:ss format.
        shared_ptr<string> businessTime_ {};
        // The ID of the task flow.
        shared_ptr<string> dagId_ {};
        // The name of the task flow.
        shared_ptr<string> dagName_ {};
        // The version of the task flow.
        shared_ptr<string> dagVersion_ {};
        // The time when the execution of the task flow was complete. The time is displayed in the yyyy-MM-DD HH:mm:ss format.
        shared_ptr<string> endTime_ {};
        // The ID of the previously published version of the task flow.
        shared_ptr<int64_t> historyDagId_ {};
        // The ID of the execution record.
        shared_ptr<int64_t> id_ {};
        // The description of the task.
        shared_ptr<string> message_ {};
        // The name of the task flow owner.
        shared_ptr<string> ownerName_ {};
        // The status of the task flow. Valid values:
        // 
        // *   **0**: The task flow is waiting to be scheduled.
        // *   **1**: The task flow is being executed.
        // *   **2**: The task flow is paused.
        // *   **3**: The task flow failed.
        // *   **4**: The task flow is executed.
        // *   **5**: The task flow is complete.
        shared_ptr<int32_t> status_ {};
        // The mode in which the task flow is triggered. Valid values:
        // 
        // *   **0**: The task flow is automatically triggered based on periodic scheduling.
        // *   **1**: The task flow is manually triggered.
        shared_ptr<int32_t> triggerType_ {};
        // The time when the execution of the task flow was start. The time is displayed in the yyyy-MM-DD HH:mm:ss format.
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->DAGInstance_ == nullptr; };
      // DAGInstance Field Functions 
      bool hasDAGInstance() const { return this->DAGInstance_ != nullptr;};
      void deleteDAGInstance() { this->DAGInstance_ = nullptr;};
      inline const vector<DAGInstanceList::DAGInstance> & getDAGInstance() const { DARABONBA_PTR_GET_CONST(DAGInstance_, vector<DAGInstanceList::DAGInstance>) };
      inline vector<DAGInstanceList::DAGInstance> getDAGInstance() { DARABONBA_PTR_GET(DAGInstance_, vector<DAGInstanceList::DAGInstance>) };
      inline DAGInstanceList& setDAGInstance(const vector<DAGInstanceList::DAGInstance> & dAGInstance) { DARABONBA_PTR_SET_VALUE(DAGInstance_, dAGInstance) };
      inline DAGInstanceList& setDAGInstance(vector<DAGInstanceList::DAGInstance> && dAGInstance) { DARABONBA_PTR_SET_RVALUE(DAGInstance_, dAGInstance) };


    protected:
      shared_ptr<vector<DAGInstanceList::DAGInstance>> DAGInstance_ {};
    };

    virtual bool empty() const override { return this->DAGInstanceList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // DAGInstanceList Field Functions 
    bool hasDAGInstanceList() const { return this->DAGInstanceList_ != nullptr;};
    void deleteDAGInstanceList() { this->DAGInstanceList_ = nullptr;};
    inline const ListTaskFlowInstanceResponseBody::DAGInstanceList & getDAGInstanceList() const { DARABONBA_PTR_GET_CONST(DAGInstanceList_, ListTaskFlowInstanceResponseBody::DAGInstanceList) };
    inline ListTaskFlowInstanceResponseBody::DAGInstanceList getDAGInstanceList() { DARABONBA_PTR_GET(DAGInstanceList_, ListTaskFlowInstanceResponseBody::DAGInstanceList) };
    inline ListTaskFlowInstanceResponseBody& setDAGInstanceList(const ListTaskFlowInstanceResponseBody::DAGInstanceList & dAGInstanceList) { DARABONBA_PTR_SET_VALUE(DAGInstanceList_, dAGInstanceList) };
    inline ListTaskFlowInstanceResponseBody& setDAGInstanceList(ListTaskFlowInstanceResponseBody::DAGInstanceList && dAGInstanceList) { DARABONBA_PTR_SET_RVALUE(DAGInstanceList_, dAGInstanceList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTaskFlowInstanceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTaskFlowInstanceResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskFlowInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTaskFlowInstanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTaskFlowInstanceResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the execution records returned.
    shared_ptr<ListTaskFlowInstanceResponseBody::DAGInstanceList> DAGInstanceList_ {};
    // The error code returned if the request fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request fails.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    shared_ptr<bool> success_ {};
    // The total number of execution records returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
