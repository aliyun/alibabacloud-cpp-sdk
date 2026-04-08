// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINNERNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINNERNODESRESPONSEBODY_HPP_
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
  class ListInnerNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInnerNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Paging, paging_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListInnerNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Paging, paging_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListInnerNodesResponseBody() = default ;
    ListInnerNodesResponseBody(const ListInnerNodesResponseBody &) = default ;
    ListInnerNodesResponseBody(ListInnerNodesResponseBody &&) = default ;
    ListInnerNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInnerNodesResponseBody() = default ;
    ListInnerNodesResponseBody& operator=(const ListInnerNodesResponseBody &) = default ;
    ListInnerNodesResponseBody& operator=(ListInnerNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Paging : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Paging& obj) { 
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Paging& obj) { 
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Paging() = default ;
      Paging(const Paging &) = default ;
      Paging(Paging &&) = default ;
      Paging(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Paging() = default ;
      Paging& operator=(const Paging &) = default ;
      Paging& operator=(Paging &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
          DARABONBA_PTR_TO_JSON(Connection, connection_);
          DARABONBA_PTR_TO_JSON(CronExpress, cronExpress_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DqcDescription, dqcDescription_);
          DARABONBA_PTR_TO_JSON(DqcType, dqcType_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(ParamValues, paramValues_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(ProgramType, programType_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(RepeatInterval, repeatInterval_);
          DARABONBA_PTR_TO_JSON(Repeatability, repeatability_);
          DARABONBA_PTR_TO_JSON(ResGroupName, resGroupName_);
          DARABONBA_PTR_TO_JSON(SchedulerType, schedulerType_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
          DARABONBA_PTR_FROM_JSON(Connection, connection_);
          DARABONBA_PTR_FROM_JSON(CronExpress, cronExpress_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DqcDescription, dqcDescription_);
          DARABONBA_PTR_FROM_JSON(DqcType, dqcType_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(ParamValues, paramValues_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(ProgramType, programType_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(RepeatInterval, repeatInterval_);
          DARABONBA_PTR_FROM_JSON(Repeatability, repeatability_);
          DARABONBA_PTR_FROM_JSON(ResGroupName, resGroupName_);
          DARABONBA_PTR_FROM_JSON(SchedulerType, schedulerType_);
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
        virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->businessId_ == nullptr && this->connection_ == nullptr && this->cronExpress_ == nullptr && this->description_ == nullptr && this->dqcDescription_ == nullptr
        && this->dqcType_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->ownerId_ == nullptr && this->paramValues_ == nullptr
        && this->priority_ == nullptr && this->programType_ == nullptr && this->projectId_ == nullptr && this->repeatInterval_ == nullptr && this->repeatability_ == nullptr
        && this->resGroupName_ == nullptr && this->schedulerType_ == nullptr; };
        // baselineId Field Functions 
        bool hasBaselineId() const { return this->baselineId_ != nullptr;};
        void deleteBaselineId() { this->baselineId_ = nullptr;};
        inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
        inline Nodes& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


        // businessId Field Functions 
        bool hasBusinessId() const { return this->businessId_ != nullptr;};
        void deleteBusinessId() { this->businessId_ = nullptr;};
        inline int64_t getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
        inline Nodes& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


        // connection Field Functions 
        bool hasConnection() const { return this->connection_ != nullptr;};
        void deleteConnection() { this->connection_ = nullptr;};
        inline string getConnection() const { DARABONBA_PTR_GET_DEFAULT(connection_, "") };
        inline Nodes& setConnection(string connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };


        // cronExpress Field Functions 
        bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
        void deleteCronExpress() { this->cronExpress_ = nullptr;};
        inline string getCronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
        inline Nodes& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Nodes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // dqcDescription Field Functions 
        bool hasDqcDescription() const { return this->dqcDescription_ != nullptr;};
        void deleteDqcDescription() { this->dqcDescription_ = nullptr;};
        inline string getDqcDescription() const { DARABONBA_PTR_GET_DEFAULT(dqcDescription_, "") };
        inline Nodes& setDqcDescription(string dqcDescription) { DARABONBA_PTR_SET_VALUE(dqcDescription_, dqcDescription) };


        // dqcType Field Functions 
        bool hasDqcType() const { return this->dqcType_ != nullptr;};
        void deleteDqcType() { this->dqcType_ = nullptr;};
        inline string getDqcType() const { DARABONBA_PTR_GET_DEFAULT(dqcType_, "") };
        inline Nodes& setDqcType(string dqcType) { DARABONBA_PTR_SET_VALUE(dqcType_, dqcType) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline Nodes& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline Nodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
        inline Nodes& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // paramValues Field Functions 
        bool hasParamValues() const { return this->paramValues_ != nullptr;};
        void deleteParamValues() { this->paramValues_ = nullptr;};
        inline string getParamValues() const { DARABONBA_PTR_GET_DEFAULT(paramValues_, "") };
        inline Nodes& setParamValues(string paramValues) { DARABONBA_PTR_SET_VALUE(paramValues_, paramValues) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Nodes& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // programType Field Functions 
        bool hasProgramType() const { return this->programType_ != nullptr;};
        void deleteProgramType() { this->programType_ = nullptr;};
        inline string getProgramType() const { DARABONBA_PTR_GET_DEFAULT(programType_, "") };
        inline Nodes& setProgramType(string programType) { DARABONBA_PTR_SET_VALUE(programType_, programType) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Nodes& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // repeatInterval Field Functions 
        bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
        void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
        inline int64_t getRepeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0L) };
        inline Nodes& setRepeatInterval(int64_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


        // repeatability Field Functions 
        bool hasRepeatability() const { return this->repeatability_ != nullptr;};
        void deleteRepeatability() { this->repeatability_ = nullptr;};
        inline bool getRepeatability() const { DARABONBA_PTR_GET_DEFAULT(repeatability_, false) };
        inline Nodes& setRepeatability(bool repeatability) { DARABONBA_PTR_SET_VALUE(repeatability_, repeatability) };


        // resGroupName Field Functions 
        bool hasResGroupName() const { return this->resGroupName_ != nullptr;};
        void deleteResGroupName() { this->resGroupName_ = nullptr;};
        inline string getResGroupName() const { DARABONBA_PTR_GET_DEFAULT(resGroupName_, "") };
        inline Nodes& setResGroupName(string resGroupName) { DARABONBA_PTR_SET_VALUE(resGroupName_, resGroupName) };


        // schedulerType Field Functions 
        bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
        void deleteSchedulerType() { this->schedulerType_ = nullptr;};
        inline string getSchedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
        inline Nodes& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


      protected:
        // The baseline ID.
        shared_ptr<int64_t> baselineId_ {};
        // The workflow ID.
        shared_ptr<int64_t> businessId_ {};
        // The connection string.
        shared_ptr<string> connection_ {};
        // The CRON expression.
        shared_ptr<string> cronExpress_ {};
        // The description of the inner node.
        shared_ptr<string> description_ {};
        // The table and partition filter expression in Data Quality that are associated with the inner node.
        shared_ptr<string> dqcDescription_ {};
        // Indicates whether the inner node is associated with a monitoring rule in Data Quality. Valid values: 0 and 1. The value 0 indicates that the inner node is associated with a monitoring rule in Data Quality. The value 1 indicates that the inner node is not associated with a monitoring rule in Data Quality.
        shared_ptr<string> dqcType_ {};
        // The inner node ID.
        shared_ptr<int64_t> nodeId_ {};
        // The name of the inner node.
        shared_ptr<string> nodeName_ {};
        // The owner ID.
        shared_ptr<string> ownerId_ {};
        // The additional parameters.
        shared_ptr<string> paramValues_ {};
        // The priority of the inner node. Valid values: 1, 3, 5, 7, and 8.
        shared_ptr<int32_t> priority_ {};
        // The type of the inner node.
        shared_ptr<string> programType_ {};
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The interval at which the inner node is rerun after the inner node fails to run.
        shared_ptr<int64_t> repeatInterval_ {};
        // Indicates whether the inner node can be rerun.
        shared_ptr<bool> repeatability_ {};
        // The name of the resource group.
        shared_ptr<string> resGroupName_ {};
        // The scheduling type of the inner node. Valid values:
        // 
        // *   NORMAL: The inner node is an auto triggered node.
        // *   MANUAL: The inner node is a manually triggered node. The scheduling system does not run the node on a regular basis.
        // *   PAUSE: The inner node is a paused node.
        // *   SKIP: The inner node is a dry-run node. Dry-run nodes are started as scheduled, but the scheduling system sets the status of the nodes to successful when it starts to run them.
        shared_ptr<string> schedulerType_ {};
      };

      virtual bool empty() const override { return this->nodes_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<Paging::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Paging::Nodes>) };
      inline vector<Paging::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Paging::Nodes>) };
      inline Paging& setNodes(const vector<Paging::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Paging& setNodes(vector<Paging::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Paging& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Paging& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Paging& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of inner nodes.
      shared_ptr<vector<Paging::Nodes>> nodes_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Default value: 10. Maximum value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of inner nodes returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->paging_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // paging Field Functions 
    bool hasPaging() const { return this->paging_ != nullptr;};
    void deletePaging() { this->paging_ = nullptr;};
    inline const ListInnerNodesResponseBody::Paging & getPaging() const { DARABONBA_PTR_GET_CONST(paging_, ListInnerNodesResponseBody::Paging) };
    inline ListInnerNodesResponseBody::Paging getPaging() { DARABONBA_PTR_GET(paging_, ListInnerNodesResponseBody::Paging) };
    inline ListInnerNodesResponseBody& setPaging(const ListInnerNodesResponseBody::Paging & paging) { DARABONBA_PTR_SET_VALUE(paging_, paging) };
    inline ListInnerNodesResponseBody& setPaging(ListInnerNodesResponseBody::Paging && paging) { DARABONBA_PTR_SET_RVALUE(paging_, paging) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInnerNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListInnerNodesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The pagination information.
    shared_ptr<ListInnerNodesResponseBody::Paging> paging_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
