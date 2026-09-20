// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASELINEKEYPATHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBASELINEKEYPATHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetBaselineKeyPathResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaselineKeyPathResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaselineKeyPathResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBaselineKeyPathResponseBody() = default ;
    GetBaselineKeyPathResponseBody(const GetBaselineKeyPathResponseBody &) = default ;
    GetBaselineKeyPathResponseBody(GetBaselineKeyPathResponseBody &&) = default ;
    GetBaselineKeyPathResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaselineKeyPathResponseBody() = default ;
    GetBaselineKeyPathResponseBody& operator=(const GetBaselineKeyPathResponseBody &) = default ;
    GetBaselineKeyPathResponseBody& operator=(GetBaselineKeyPathResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
        DARABONBA_PTR_TO_JSON(InGroupId, inGroupId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(PrgType, prgType_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Runs, runs_);
        DARABONBA_PTR_TO_JSON(Topics, topics_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
        DARABONBA_PTR_FROM_JSON(InGroupId, inGroupId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(PrgType, prgType_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Runs, runs_);
        DARABONBA_PTR_FROM_JSON(Topics, topics_);
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
      class Topics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Topics& obj) { 
          DARABONBA_PTR_TO_JSON(AddTime, addTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(TopicId, topicId_);
          DARABONBA_PTR_TO_JSON(TopicName, topicName_);
        };
        friend void from_json(const Darabonba::Json& j, Topics& obj) { 
          DARABONBA_PTR_FROM_JSON(AddTime, addTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
          DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
        };
        Topics() = default ;
        Topics(const Topics &) = default ;
        Topics(Topics &&) = default ;
        Topics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Topics() = default ;
        Topics& operator=(const Topics &) = default ;
        Topics& operator=(Topics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addTime_ == nullptr
        && this->instanceId_ == nullptr && this->topicId_ == nullptr && this->topicName_ == nullptr; };
        // addTime Field Functions 
        bool hasAddTime() const { return this->addTime_ != nullptr;};
        void deleteAddTime() { this->addTime_ = nullptr;};
        inline int64_t getAddTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, 0L) };
        inline Topics& setAddTime(int64_t addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
        inline Topics& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // topicId Field Functions 
        bool hasTopicId() const { return this->topicId_ != nullptr;};
        void deleteTopicId() { this->topicId_ = nullptr;};
        inline int64_t getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
        inline Topics& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


        // topicName Field Functions 
        bool hasTopicName() const { return this->topicName_ != nullptr;};
        void deleteTopicName() { this->topicName_ = nullptr;};
        inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
        inline Topics& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


      protected:
        // The timestamp when the event was detected.
        shared_ptr<int64_t> addTime_ {};
        // The ID of the instance.
        shared_ptr<int64_t> instanceId_ {};
        // The ID of the event.
        shared_ptr<int64_t> topicId_ {};
        // The name of the event.
        shared_ptr<string> topicName_ {};
      };

      class Runs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Runs& obj) { 
          DARABONBA_PTR_TO_JSON(AbsTime, absTime_);
          DARABONBA_PTR_TO_JSON(BeginCast, beginCast_);
          DARABONBA_PTR_TO_JSON(BeginRunningTime, beginRunningTime_);
          DARABONBA_PTR_TO_JSON(BeginWaitResTime, beginWaitResTime_);
          DARABONBA_PTR_TO_JSON(BeginWaitTimeTime, beginWaitTimeTime_);
          DARABONBA_PTR_TO_JSON(EndCast, endCast_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Runs& obj) { 
          DARABONBA_PTR_FROM_JSON(AbsTime, absTime_);
          DARABONBA_PTR_FROM_JSON(BeginCast, beginCast_);
          DARABONBA_PTR_FROM_JSON(BeginRunningTime, beginRunningTime_);
          DARABONBA_PTR_FROM_JSON(BeginWaitResTime, beginWaitResTime_);
          DARABONBA_PTR_FROM_JSON(BeginWaitTimeTime, beginWaitTimeTime_);
          DARABONBA_PTR_FROM_JSON(EndCast, endCast_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Runs() = default ;
        Runs(const Runs &) = default ;
        Runs(Runs &&) = default ;
        Runs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Runs() = default ;
        Runs& operator=(const Runs &) = default ;
        Runs& operator=(Runs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->absTime_ == nullptr
        && this->beginCast_ == nullptr && this->beginRunningTime_ == nullptr && this->beginWaitResTime_ == nullptr && this->beginWaitTimeTime_ == nullptr && this->endCast_ == nullptr
        && this->finishTime_ == nullptr && this->status_ == nullptr; };
        // absTime Field Functions 
        bool hasAbsTime() const { return this->absTime_ != nullptr;};
        void deleteAbsTime() { this->absTime_ = nullptr;};
        inline int64_t getAbsTime() const { DARABONBA_PTR_GET_DEFAULT(absTime_, 0L) };
        inline Runs& setAbsTime(int64_t absTime) { DARABONBA_PTR_SET_VALUE(absTime_, absTime) };


        // beginCast Field Functions 
        bool hasBeginCast() const { return this->beginCast_ != nullptr;};
        void deleteBeginCast() { this->beginCast_ = nullptr;};
        inline int64_t getBeginCast() const { DARABONBA_PTR_GET_DEFAULT(beginCast_, 0L) };
        inline Runs& setBeginCast(int64_t beginCast) { DARABONBA_PTR_SET_VALUE(beginCast_, beginCast) };


        // beginRunningTime Field Functions 
        bool hasBeginRunningTime() const { return this->beginRunningTime_ != nullptr;};
        void deleteBeginRunningTime() { this->beginRunningTime_ = nullptr;};
        inline int64_t getBeginRunningTime() const { DARABONBA_PTR_GET_DEFAULT(beginRunningTime_, 0L) };
        inline Runs& setBeginRunningTime(int64_t beginRunningTime) { DARABONBA_PTR_SET_VALUE(beginRunningTime_, beginRunningTime) };


        // beginWaitResTime Field Functions 
        bool hasBeginWaitResTime() const { return this->beginWaitResTime_ != nullptr;};
        void deleteBeginWaitResTime() { this->beginWaitResTime_ = nullptr;};
        inline int64_t getBeginWaitResTime() const { DARABONBA_PTR_GET_DEFAULT(beginWaitResTime_, 0L) };
        inline Runs& setBeginWaitResTime(int64_t beginWaitResTime) { DARABONBA_PTR_SET_VALUE(beginWaitResTime_, beginWaitResTime) };


        // beginWaitTimeTime Field Functions 
        bool hasBeginWaitTimeTime() const { return this->beginWaitTimeTime_ != nullptr;};
        void deleteBeginWaitTimeTime() { this->beginWaitTimeTime_ = nullptr;};
        inline int64_t getBeginWaitTimeTime() const { DARABONBA_PTR_GET_DEFAULT(beginWaitTimeTime_, 0L) };
        inline Runs& setBeginWaitTimeTime(int64_t beginWaitTimeTime) { DARABONBA_PTR_SET_VALUE(beginWaitTimeTime_, beginWaitTimeTime) };


        // endCast Field Functions 
        bool hasEndCast() const { return this->endCast_ != nullptr;};
        void deleteEndCast() { this->endCast_ = nullptr;};
        inline int64_t getEndCast() const { DARABONBA_PTR_GET_DEFAULT(endCast_, 0L) };
        inline Runs& setEndCast(int64_t endCast) { DARABONBA_PTR_SET_VALUE(endCast_, endCast) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
        inline Runs& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Runs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The timestamp calculated by adding the historical average run duration to the estimated start time of the instance.
        shared_ptr<int64_t> absTime_ {};
        // The estimated start time of the instance.
        shared_ptr<int64_t> beginCast_ {};
        // The timestamp when the instance actually started running.
        shared_ptr<int64_t> beginRunningTime_ {};
        // The timestamp when the instance entered the waiting-for-resources state.
        shared_ptr<int64_t> beginWaitResTime_ {};
        // The timestamp when the instance entered the waiting-for-time state.
        shared_ptr<int64_t> beginWaitTimeTime_ {};
        // The estimated end time of the instance.
        shared_ptr<int64_t> endCast_ {};
        // The timestamp when the instance actually finished running.
        shared_ptr<int64_t> finishTime_ {};
        // The status of the instance. Valid values:
        // - NOT_RUN: not run.
        // - WAIT_TIME: waiting for the scheduled time.
        // - WAIT_RESOURCE: waiting for resources.
        // - RUNNING: running.
        // - CHECKING: checking.
        // - CHECKING_CONDITION: checking conditions.
        // - FAILURE: failed.
        // - SUCCESS: succeeded.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->bizdate_ == nullptr
        && this->inGroupId_ == nullptr && this->instanceId_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->owner_ == nullptr
        && this->prgType_ == nullptr && this->projectId_ == nullptr && this->runs_ == nullptr && this->topics_ == nullptr; };
      // bizdate Field Functions 
      bool hasBizdate() const { return this->bizdate_ != nullptr;};
      void deleteBizdate() { this->bizdate_ = nullptr;};
      inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
      inline Data& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


      // inGroupId Field Functions 
      bool hasInGroupId() const { return this->inGroupId_ != nullptr;};
      void deleteInGroupId() { this->inGroupId_ = nullptr;};
      inline int32_t getInGroupId() const { DARABONBA_PTR_GET_DEFAULT(inGroupId_, 0) };
      inline Data& setInGroupId(int32_t inGroupId) { DARABONBA_PTR_SET_VALUE(inGroupId_, inGroupId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
      inline Data& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
      inline Data& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline Data& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // prgType Field Functions 
      bool hasPrgType() const { return this->prgType_ != nullptr;};
      void deletePrgType() { this->prgType_ = nullptr;};
      inline int32_t getPrgType() const { DARABONBA_PTR_GET_DEFAULT(prgType_, 0) };
      inline Data& setPrgType(int32_t prgType) { DARABONBA_PTR_SET_VALUE(prgType_, prgType) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Data& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // runs Field Functions 
      bool hasRuns() const { return this->runs_ != nullptr;};
      void deleteRuns() { this->runs_ = nullptr;};
      inline const vector<Data::Runs> & getRuns() const { DARABONBA_PTR_GET_CONST(runs_, vector<Data::Runs>) };
      inline vector<Data::Runs> getRuns() { DARABONBA_PTR_GET(runs_, vector<Data::Runs>) };
      inline Data& setRuns(const vector<Data::Runs> & runs) { DARABONBA_PTR_SET_VALUE(runs_, runs) };
      inline Data& setRuns(vector<Data::Runs> && runs) { DARABONBA_PTR_SET_RVALUE(runs_, runs) };


      // topics Field Functions 
      bool hasTopics() const { return this->topics_ != nullptr;};
      void deleteTopics() { this->topics_ = nullptr;};
      inline const vector<Data::Topics> & getTopics() const { DARABONBA_PTR_GET_CONST(topics_, vector<Data::Topics>) };
      inline vector<Data::Topics> getTopics() { DARABONBA_PTR_GET(topics_, vector<Data::Topics>) };
      inline Data& setTopics(const vector<Data::Topics> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
      inline Data& setTopics(vector<Data::Topics> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


    protected:
      // The timestamp of the business date of the instance.
      shared_ptr<int64_t> bizdate_ {};
      // The cycle number of the instance. Valid values: [1,288\\].
      shared_ptr<int32_t> inGroupId_ {};
      // The ID of the instance.
      shared_ptr<int64_t> instanceId_ {};
      // The ID of the node.
      shared_ptr<int64_t> nodeId_ {};
      // The name of the node.
      shared_ptr<string> nodeName_ {};
      // The Alibaba Cloud UID of the node owner.
      shared_ptr<string> owner_ {};
      // The node type. Common node types include Data Integration (23), MaxCompute SQL (10), Shell (6), and virtual node (99).
      shared_ptr<int32_t> prgType_ {};
      // The ID of the workspace to which the node belongs.
      shared_ptr<int64_t> projectId_ {};
      // The run records of the instance.
      shared_ptr<vector<Data::Runs>> runs_ {};
      // The event information associated with the instance.
      shared_ptr<vector<Data::Topics>> topics_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetBaselineKeyPathResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetBaselineKeyPathResponseBody::Data>) };
    inline vector<GetBaselineKeyPathResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetBaselineKeyPathResponseBody::Data>) };
    inline GetBaselineKeyPathResponseBody& setData(const vector<GetBaselineKeyPathResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBaselineKeyPathResponseBody& setData(vector<GetBaselineKeyPathResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetBaselineKeyPathResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetBaselineKeyPathResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBaselineKeyPathResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBaselineKeyPathResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBaselineKeyPathResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The critical path information.
    shared_ptr<vector<GetBaselineKeyPathResponseBody::Data>> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The unique ID of the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
