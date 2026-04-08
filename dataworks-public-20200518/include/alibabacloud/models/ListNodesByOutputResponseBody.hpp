// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESBYOUTPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESBYOUTPUTRESPONSEBODY_HPP_
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
  class ListNodesByOutputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesByOutputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesByOutputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListNodesByOutputResponseBody() = default ;
    ListNodesByOutputResponseBody(const ListNodesByOutputResponseBody &) = default ;
    ListNodesByOutputResponseBody(ListNodesByOutputResponseBody &&) = default ;
    ListNodesByOutputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesByOutputResponseBody() = default ;
    ListNodesByOutputResponseBody& operator=(const ListNodesByOutputResponseBody &) = default ;
    ListNodesByOutputResponseBody& operator=(ListNodesByOutputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NodeList, nodeList_);
        DARABONBA_PTR_TO_JSON(Output, output_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeList, nodeList_);
        DARABONBA_PTR_FROM_JSON(Output, output_);
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
      class NodeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeList& obj) { 
          DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_TO_JSON(Connection, connection_);
          DARABONBA_PTR_TO_JSON(CronExpress, cronExpress_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DqcDescription, dqcDescription_);
          DARABONBA_PTR_TO_JSON(DqcType, dqcType_);
          DARABONBA_PTR_TO_JSON(FileType, fileType_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(ParamValues, paramValues_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(ProgramType, programType_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(RelatedFlowId, relatedFlowId_);
          DARABONBA_PTR_TO_JSON(RepeatInterval, repeatInterval_);
          DARABONBA_PTR_TO_JSON(Repeatability, repeatability_);
          DARABONBA_PTR_TO_JSON(ResGroupName, resGroupName_);
          DARABONBA_PTR_TO_JSON(SchedulerType, schedulerType_);
        };
        friend void from_json(const Darabonba::Json& j, NodeList& obj) { 
          DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_FROM_JSON(Connection, connection_);
          DARABONBA_PTR_FROM_JSON(CronExpress, cronExpress_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DqcDescription, dqcDescription_);
          DARABONBA_PTR_FROM_JSON(DqcType, dqcType_);
          DARABONBA_PTR_FROM_JSON(FileType, fileType_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(ParamValues, paramValues_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(ProgramType, programType_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(RelatedFlowId, relatedFlowId_);
          DARABONBA_PTR_FROM_JSON(RepeatInterval, repeatInterval_);
          DARABONBA_PTR_FROM_JSON(Repeatability, repeatability_);
          DARABONBA_PTR_FROM_JSON(ResGroupName, resGroupName_);
          DARABONBA_PTR_FROM_JSON(SchedulerType, schedulerType_);
        };
        NodeList() = default ;
        NodeList(const NodeList &) = default ;
        NodeList(NodeList &&) = default ;
        NodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeList() = default ;
        NodeList& operator=(const NodeList &) = default ;
        NodeList& operator=(NodeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->connection_ == nullptr && this->cronExpress_ == nullptr && this->description_ == nullptr && this->dqcDescription_ == nullptr && this->dqcType_ == nullptr
        && this->fileType_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->ownerId_ == nullptr && this->paramValues_ == nullptr
        && this->priority_ == nullptr && this->programType_ == nullptr && this->projectId_ == nullptr && this->relatedFlowId_ == nullptr && this->repeatInterval_ == nullptr
        && this->repeatability_ == nullptr && this->resGroupName_ == nullptr && this->schedulerType_ == nullptr; };
        // baselineId Field Functions 
        bool hasBaselineId() const { return this->baselineId_ != nullptr;};
        void deleteBaselineId() { this->baselineId_ = nullptr;};
        inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
        inline NodeList& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


        // connection Field Functions 
        bool hasConnection() const { return this->connection_ != nullptr;};
        void deleteConnection() { this->connection_ = nullptr;};
        inline string getConnection() const { DARABONBA_PTR_GET_DEFAULT(connection_, "") };
        inline NodeList& setConnection(string connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };


        // cronExpress Field Functions 
        bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
        void deleteCronExpress() { this->cronExpress_ = nullptr;};
        inline string getCronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
        inline NodeList& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline NodeList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // dqcDescription Field Functions 
        bool hasDqcDescription() const { return this->dqcDescription_ != nullptr;};
        void deleteDqcDescription() { this->dqcDescription_ = nullptr;};
        inline string getDqcDescription() const { DARABONBA_PTR_GET_DEFAULT(dqcDescription_, "") };
        inline NodeList& setDqcDescription(string dqcDescription) { DARABONBA_PTR_SET_VALUE(dqcDescription_, dqcDescription) };


        // dqcType Field Functions 
        bool hasDqcType() const { return this->dqcType_ != nullptr;};
        void deleteDqcType() { this->dqcType_ = nullptr;};
        inline int32_t getDqcType() const { DARABONBA_PTR_GET_DEFAULT(dqcType_, 0) };
        inline NodeList& setDqcType(int32_t dqcType) { DARABONBA_PTR_SET_VALUE(dqcType_, dqcType) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
        inline NodeList& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline NodeList& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline NodeList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
        inline NodeList& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // paramValues Field Functions 
        bool hasParamValues() const { return this->paramValues_ != nullptr;};
        void deleteParamValues() { this->paramValues_ = nullptr;};
        inline string getParamValues() const { DARABONBA_PTR_GET_DEFAULT(paramValues_, "") };
        inline NodeList& setParamValues(string paramValues) { DARABONBA_PTR_SET_VALUE(paramValues_, paramValues) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline NodeList& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // programType Field Functions 
        bool hasProgramType() const { return this->programType_ != nullptr;};
        void deleteProgramType() { this->programType_ = nullptr;};
        inline string getProgramType() const { DARABONBA_PTR_GET_DEFAULT(programType_, "") };
        inline NodeList& setProgramType(string programType) { DARABONBA_PTR_SET_VALUE(programType_, programType) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline NodeList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // relatedFlowId Field Functions 
        bool hasRelatedFlowId() const { return this->relatedFlowId_ != nullptr;};
        void deleteRelatedFlowId() { this->relatedFlowId_ = nullptr;};
        inline int64_t getRelatedFlowId() const { DARABONBA_PTR_GET_DEFAULT(relatedFlowId_, 0L) };
        inline NodeList& setRelatedFlowId(int64_t relatedFlowId) { DARABONBA_PTR_SET_VALUE(relatedFlowId_, relatedFlowId) };


        // repeatInterval Field Functions 
        bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
        void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
        inline int32_t getRepeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0) };
        inline NodeList& setRepeatInterval(int32_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


        // repeatability Field Functions 
        bool hasRepeatability() const { return this->repeatability_ != nullptr;};
        void deleteRepeatability() { this->repeatability_ = nullptr;};
        inline bool getRepeatability() const { DARABONBA_PTR_GET_DEFAULT(repeatability_, false) };
        inline NodeList& setRepeatability(bool repeatability) { DARABONBA_PTR_SET_VALUE(repeatability_, repeatability) };


        // resGroupName Field Functions 
        bool hasResGroupName() const { return this->resGroupName_ != nullptr;};
        void deleteResGroupName() { this->resGroupName_ = nullptr;};
        inline string getResGroupName() const { DARABONBA_PTR_GET_DEFAULT(resGroupName_, "") };
        inline NodeList& setResGroupName(string resGroupName) { DARABONBA_PTR_SET_VALUE(resGroupName_, resGroupName) };


        // schedulerType Field Functions 
        bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
        void deleteSchedulerType() { this->schedulerType_ = nullptr;};
        inline string getSchedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
        inline NodeList& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


      protected:
        // The baseline ID.
        shared_ptr<int64_t> baselineId_ {};
        // The name of the data source.
        shared_ptr<string> connection_ {};
        // The CRON expression.
        shared_ptr<string> cronExpress_ {};
        // The description of the node.
        shared_ptr<string> description_ {};
        // The table and partition filter expression in Data Quality that are associated with the node.
        shared_ptr<string> dqcDescription_ {};
        // Indicates whether the node is associated with a monitoring rule in Data Quality. Valid values: 0 and 1. The value 0 indicates that the node is associated with a monitoring rule in Data Quality. The value 1 indicates that the node is not associated with a monitoring rule in Data Quality.
        shared_ptr<int32_t> dqcType_ {};
        // The node type. Valid values:
        // 
        // 6 (Shell), 10 (ODPS SQL), 11 (ODPS MR), 23 (Data Integration), 24 (ODPS Script), 99 (zero load), 221 (PyODPS 2), 225 (ODPS Spark), 227 (EMR Hive), 228 (EMR Spark), 229 (EMR Spark SQL), 230 (EMR MR), 239 (OSS object inspection), 257 (EMR Shell), 258 (EMR Spark Shell), 259 (EMR Presto), 260 (EMR Impala), 900 (real-time synchronization), 1089 (cross-tenant collaboration), 1091 (Hologres development), 1093 (Hologres SQL), 1100 (assignment), and 1221 (PyODPS 3)
        shared_ptr<string> fileType_ {};
        // The node ID.
        shared_ptr<int64_t> nodeId_ {};
        // The name of the node.
        shared_ptr<string> nodeName_ {};
        // The owner ID.
        shared_ptr<string> ownerId_ {};
        // The scheduling parameters of the node.
        shared_ptr<string> paramValues_ {};
        // The priority of the node. Valid values: 1, 3, 5, 7, and 8. A greater value indicates a higher priority. Default value: 1.
        shared_ptr<int32_t> priority_ {};
        // The node type. This parameter is deprecated. For more information about node types, see valid values of the FileType parameter.
        shared_ptr<string> programType_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The ID of the workflow to which the node belongs.
        shared_ptr<int64_t> relatedFlowId_ {};
        // The interval at which the node is rerun after the node fails to run.
        shared_ptr<int32_t> repeatInterval_ {};
        // Indicates whether the node can be rerun.
        shared_ptr<bool> repeatability_ {};
        // The name of the resource group.
        shared_ptr<string> resGroupName_ {};
        // The scheduling type of the node. Valid values:
        // 
        // *   NORMAL: The node is an auto triggered node. The scheduling system regularly runs the node.
        // *   MANUAL: The node is a manually triggered node. The scheduling system does not regularly run the node.
        // *   PAUSE: The node is a frozen node. The scheduling system regularly runs the node but sets the status of the node to failed when the scheduling system starts to run the node.
        // *   SKIP: The node is a dry-run node. The scheduling system regularly runs the node but sets the status of the node to successful when the scheduling system starts to run the node.
        shared_ptr<string> schedulerType_ {};
      };

      virtual bool empty() const override { return this->nodeList_ == nullptr
        && this->output_ == nullptr; };
      // nodeList Field Functions 
      bool hasNodeList() const { return this->nodeList_ != nullptr;};
      void deleteNodeList() { this->nodeList_ = nullptr;};
      inline const vector<Data::NodeList> & getNodeList() const { DARABONBA_PTR_GET_CONST(nodeList_, vector<Data::NodeList>) };
      inline vector<Data::NodeList> getNodeList() { DARABONBA_PTR_GET(nodeList_, vector<Data::NodeList>) };
      inline Data& setNodeList(const vector<Data::NodeList> & nodeList) { DARABONBA_PTR_SET_VALUE(nodeList_, nodeList) };
      inline Data& setNodeList(vector<Data::NodeList> && nodeList) { DARABONBA_PTR_SET_RVALUE(nodeList_, nodeList) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
      inline Data& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    protected:
      // The information about the nodes returned.
      shared_ptr<vector<Data::NodeList>> nodeList_ {};
      // The output name of the current node.
      shared_ptr<string> output_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListNodesByOutputResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListNodesByOutputResponseBody::Data>) };
    inline vector<ListNodesByOutputResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListNodesByOutputResponseBody::Data>) };
    inline ListNodesByOutputResponseBody& setData(const vector<ListNodesByOutputResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListNodesByOutputResponseBody& setData(vector<ListNodesByOutputResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListNodesByOutputResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListNodesByOutputResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListNodesByOutputResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodesByOutputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListNodesByOutputResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The nodes returned.
    shared_ptr<vector<ListNodesByOutputResponseBody::Data>> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
