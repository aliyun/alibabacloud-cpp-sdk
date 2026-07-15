// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetWorkFlowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkFlowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkFlowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetWorkFlowResponseBody() = default ;
    GetWorkFlowResponseBody(const GetWorkFlowResponseBody &) = default ;
    GetWorkFlowResponseBody(GetWorkFlowResponseBody &&) = default ;
    GetWorkFlowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkFlowResponseBody() = default ;
    GetWorkFlowResponseBody& operator=(const GetWorkFlowResponseBody &) = default ;
    GetWorkFlowResponseBody& operator=(GetWorkFlowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(WorkFlowInfo, workFlowInfo_);
        DARABONBA_PTR_TO_JSON(WorkFlowNodeInfo, workFlowNodeInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(WorkFlowInfo, workFlowInfo_);
        DARABONBA_PTR_FROM_JSON(WorkFlowNodeInfo, workFlowNodeInfo_);
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
      class WorkFlowNodeInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WorkFlowNodeInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Edges, edges_);
          DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        };
        friend void from_json(const Darabonba::Json& j, WorkFlowNodeInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Edges, edges_);
          DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        };
        WorkFlowNodeInfo() = default ;
        WorkFlowNodeInfo(const WorkFlowNodeInfo &) = default ;
        WorkFlowNodeInfo(WorkFlowNodeInfo &&) = default ;
        WorkFlowNodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WorkFlowNodeInfo() = default ;
        WorkFlowNodeInfo& operator=(const WorkFlowNodeInfo &) = default ;
        WorkFlowNodeInfo& operator=(WorkFlowNodeInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Nodes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Label, label_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Label, label_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          Nodes() = default ;
          Nodes(const Nodes &) = default ;
          Nodes(Nodes &&) = default ;
          Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Nodes() = default ;
          Nodes& operator=(const Nodes &) = default ;
          Nodes& operator=(Nodes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->label_ == nullptr && this->status_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Nodes& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline Nodes& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline Nodes& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The job ID.
          shared_ptr<int64_t> id_ {};
          // The job name.
          shared_ptr<string> label_ {};
          // The job status.
          shared_ptr<int32_t> status_ {};
        };

        class Edges : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Edges& obj) { 
            DARABONBA_PTR_TO_JSON(Source, source_);
            DARABONBA_PTR_TO_JSON(Target, target_);
          };
          friend void from_json(const Darabonba::Json& j, Edges& obj) { 
            DARABONBA_PTR_FROM_JSON(Source, source_);
            DARABONBA_PTR_FROM_JSON(Target, target_);
          };
          Edges() = default ;
          Edges(const Edges &) = default ;
          Edges(Edges &&) = default ;
          Edges(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Edges() = default ;
          Edges& operator=(const Edges &) = default ;
          Edges& operator=(Edges &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->source_ == nullptr
        && this->target_ == nullptr; };
          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline int64_t getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, 0L) };
          inline Edges& setSource(int64_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          // target Field Functions 
          bool hasTarget() const { return this->target_ != nullptr;};
          void deleteTarget() { this->target_ = nullptr;};
          inline int64_t getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, 0L) };
          inline Edges& setTarget(int64_t target) { DARABONBA_PTR_SET_VALUE(target_, target) };


        protected:
          // The source job ID.
          shared_ptr<int64_t> source_ {};
          // The target job ID.
          shared_ptr<int64_t> target_ {};
        };

        virtual bool empty() const override { return this->edges_ == nullptr
        && this->nodes_ == nullptr; };
        // edges Field Functions 
        bool hasEdges() const { return this->edges_ != nullptr;};
        void deleteEdges() { this->edges_ = nullptr;};
        inline const vector<WorkFlowNodeInfo::Edges> & getEdges() const { DARABONBA_PTR_GET_CONST(edges_, vector<WorkFlowNodeInfo::Edges>) };
        inline vector<WorkFlowNodeInfo::Edges> getEdges() { DARABONBA_PTR_GET(edges_, vector<WorkFlowNodeInfo::Edges>) };
        inline WorkFlowNodeInfo& setEdges(const vector<WorkFlowNodeInfo::Edges> & edges) { DARABONBA_PTR_SET_VALUE(edges_, edges) };
        inline WorkFlowNodeInfo& setEdges(vector<WorkFlowNodeInfo::Edges> && edges) { DARABONBA_PTR_SET_RVALUE(edges_, edges) };


        // nodes Field Functions 
        bool hasNodes() const { return this->nodes_ != nullptr;};
        void deleteNodes() { this->nodes_ = nullptr;};
        inline const vector<WorkFlowNodeInfo::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<WorkFlowNodeInfo::Nodes>) };
        inline vector<WorkFlowNodeInfo::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<WorkFlowNodeInfo::Nodes>) };
        inline WorkFlowNodeInfo& setNodes(const vector<WorkFlowNodeInfo::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
        inline WorkFlowNodeInfo& setNodes(vector<WorkFlowNodeInfo::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      protected:
        // The list of workflow edges.
        shared_ptr<vector<WorkFlowNodeInfo::Edges>> edges_ {};
        // The list of workflow nodes.
        shared_ptr<vector<WorkFlowNodeInfo::Nodes>> nodes_ {};
      };

      class WorkFlowInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WorkFlowInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TimeExpression, timeExpression_);
          DARABONBA_PTR_TO_JSON(TimeType, timeType_);
          DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
        };
        friend void from_json(const Darabonba::Json& j, WorkFlowInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TimeExpression, timeExpression_);
          DARABONBA_PTR_FROM_JSON(TimeType, timeType_);
          DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
        };
        WorkFlowInfo() = default ;
        WorkFlowInfo(const WorkFlowInfo &) = default ;
        WorkFlowInfo(WorkFlowInfo &&) = default ;
        WorkFlowInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WorkFlowInfo() = default ;
        WorkFlowInfo& operator=(const WorkFlowInfo &) = default ;
        WorkFlowInfo& operator=(WorkFlowInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->groupId_ == nullptr && this->maxConcurrency_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->status_ == nullptr
        && this->timeExpression_ == nullptr && this->timeType_ == nullptr && this->workflowId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline WorkFlowInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline WorkFlowInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // maxConcurrency Field Functions 
        bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
        void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
        inline string getMaxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, "") };
        inline WorkFlowInfo& setMaxConcurrency(string maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline WorkFlowInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline WorkFlowInfo& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline WorkFlowInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // timeExpression Field Functions 
        bool hasTimeExpression() const { return this->timeExpression_ != nullptr;};
        void deleteTimeExpression() { this->timeExpression_ = nullptr;};
        inline string getTimeExpression() const { DARABONBA_PTR_GET_DEFAULT(timeExpression_, "") };
        inline WorkFlowInfo& setTimeExpression(string timeExpression) { DARABONBA_PTR_SET_VALUE(timeExpression_, timeExpression) };


        // timeType Field Functions 
        bool hasTimeType() const { return this->timeType_ != nullptr;};
        void deleteTimeType() { this->timeType_ = nullptr;};
        inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
        inline WorkFlowInfo& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


        // workflowId Field Functions 
        bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
        void deleteWorkflowId() { this->workflowId_ = nullptr;};
        inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
        inline WorkFlowInfo& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


      protected:
        // The description of the workflow.
        shared_ptr<string> description_ {};
        // The ID of the application group.
        shared_ptr<string> groupId_ {};
        // The maximum number of concurrent instances.
        shared_ptr<string> maxConcurrency_ {};
        // The workflow name.
        shared_ptr<string> name_ {};
        // The ID of the namespace.
        shared_ptr<string> namespace_ {};
        // The workflow status.
        shared_ptr<string> status_ {};
        // The time expression for the workflow.
        shared_ptr<string> timeExpression_ {};
        // The time type of the workflow.
        shared_ptr<string> timeType_ {};
        // The workflow ID.
        shared_ptr<int64_t> workflowId_ {};
      };

      virtual bool empty() const override { return this->workFlowInfo_ == nullptr
        && this->workFlowNodeInfo_ == nullptr; };
      // workFlowInfo Field Functions 
      bool hasWorkFlowInfo() const { return this->workFlowInfo_ != nullptr;};
      void deleteWorkFlowInfo() { this->workFlowInfo_ = nullptr;};
      inline const Data::WorkFlowInfo & getWorkFlowInfo() const { DARABONBA_PTR_GET_CONST(workFlowInfo_, Data::WorkFlowInfo) };
      inline Data::WorkFlowInfo getWorkFlowInfo() { DARABONBA_PTR_GET(workFlowInfo_, Data::WorkFlowInfo) };
      inline Data& setWorkFlowInfo(const Data::WorkFlowInfo & workFlowInfo) { DARABONBA_PTR_SET_VALUE(workFlowInfo_, workFlowInfo) };
      inline Data& setWorkFlowInfo(Data::WorkFlowInfo && workFlowInfo) { DARABONBA_PTR_SET_RVALUE(workFlowInfo_, workFlowInfo) };


      // workFlowNodeInfo Field Functions 
      bool hasWorkFlowNodeInfo() const { return this->workFlowNodeInfo_ != nullptr;};
      void deleteWorkFlowNodeInfo() { this->workFlowNodeInfo_ = nullptr;};
      inline const Data::WorkFlowNodeInfo & getWorkFlowNodeInfo() const { DARABONBA_PTR_GET_CONST(workFlowNodeInfo_, Data::WorkFlowNodeInfo) };
      inline Data::WorkFlowNodeInfo getWorkFlowNodeInfo() { DARABONBA_PTR_GET(workFlowNodeInfo_, Data::WorkFlowNodeInfo) };
      inline Data& setWorkFlowNodeInfo(const Data::WorkFlowNodeInfo & workFlowNodeInfo) { DARABONBA_PTR_SET_VALUE(workFlowNodeInfo_, workFlowNodeInfo) };
      inline Data& setWorkFlowNodeInfo(Data::WorkFlowNodeInfo && workFlowNodeInfo) { DARABONBA_PTR_SET_RVALUE(workFlowNodeInfo_, workFlowNodeInfo) };


    protected:
      // The basic information about the workflow.
      shared_ptr<Data::WorkFlowInfo> workFlowInfo_ {};
      // The workflow node information.
      shared_ptr<Data::WorkFlowNodeInfo> workFlowNodeInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetWorkFlowResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetWorkFlowResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetWorkFlowResponseBody::Data) };
    inline GetWorkFlowResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetWorkFlowResponseBody::Data) };
    inline GetWorkFlowResponseBody& setData(const GetWorkFlowResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWorkFlowResponseBody& setData(GetWorkFlowResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWorkFlowResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkFlowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWorkFlowResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<int32_t> code_ {};
    // The workflow data.
    shared_ptr<GetWorkFlowResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request succeeded.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
