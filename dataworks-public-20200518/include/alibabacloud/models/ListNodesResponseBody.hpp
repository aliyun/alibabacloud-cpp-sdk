// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
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
  class ListNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListNodesResponseBody() = default ;
    ListNodesResponseBody(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody(ListNodesResponseBody &&) = default ;
    ListNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBody() = default ;
    ListNodesResponseBody& operator=(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody& operator=(ListNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
          DARABONBA_PTR_TO_JSON(Connection, connection_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CronExpress, cronExpress_);
          DARABONBA_PTR_TO_JSON(DeployDate, deployDate_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DqcDescription, dqcDescription_);
          DARABONBA_PTR_TO_JSON(DqcType, dqcType_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(FileType, fileType_);
          DARABONBA_PTR_TO_JSON(FileVersion, fileVersion_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(ParamValues, paramValues_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(ProgramType, programType_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(RelatedFlowId, relatedFlowId_);
          DARABONBA_PTR_TO_JSON(RepeatInterval, repeatInterval_);
          DARABONBA_PTR_TO_JSON(RepeatMode, repeatMode_);
          DARABONBA_PTR_TO_JSON(Repeatability, repeatability_);
          DARABONBA_PTR_TO_JSON(ResGroupIdentifier, resGroupIdentifier_);
          DARABONBA_PTR_TO_JSON(ResGroupName, resGroupName_);
          DARABONBA_PTR_TO_JSON(SchedulerType, schedulerType_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
          DARABONBA_PTR_FROM_JSON(Connection, connection_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CronExpress, cronExpress_);
          DARABONBA_PTR_FROM_JSON(DeployDate, deployDate_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DqcDescription, dqcDescription_);
          DARABONBA_PTR_FROM_JSON(DqcType, dqcType_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(FileType, fileType_);
          DARABONBA_PTR_FROM_JSON(FileVersion, fileVersion_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(ParamValues, paramValues_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(ProgramType, programType_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(RelatedFlowId, relatedFlowId_);
          DARABONBA_PTR_FROM_JSON(RepeatInterval, repeatInterval_);
          DARABONBA_PTR_FROM_JSON(RepeatMode, repeatMode_);
          DARABONBA_PTR_FROM_JSON(Repeatability, repeatability_);
          DARABONBA_PTR_FROM_JSON(ResGroupIdentifier, resGroupIdentifier_);
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
        && this->businessId_ == nullptr && this->connection_ == nullptr && this->createTime_ == nullptr && this->cronExpress_ == nullptr && this->deployDate_ == nullptr
        && this->description_ == nullptr && this->dqcDescription_ == nullptr && this->dqcType_ == nullptr && this->fileId_ == nullptr && this->fileType_ == nullptr
        && this->fileVersion_ == nullptr && this->modifyTime_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->ownerId_ == nullptr
        && this->paramValues_ == nullptr && this->priority_ == nullptr && this->programType_ == nullptr && this->projectId_ == nullptr && this->relatedFlowId_ == nullptr
        && this->repeatInterval_ == nullptr && this->repeatMode_ == nullptr && this->repeatability_ == nullptr && this->resGroupIdentifier_ == nullptr && this->resGroupName_ == nullptr
        && this->schedulerType_ == nullptr; };
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


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Nodes& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // cronExpress Field Functions 
        bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
        void deleteCronExpress() { this->cronExpress_ = nullptr;};
        inline string getCronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
        inline Nodes& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


        // deployDate Field Functions 
        bool hasDeployDate() const { return this->deployDate_ != nullptr;};
        void deleteDeployDate() { this->deployDate_ = nullptr;};
        inline int64_t getDeployDate() const { DARABONBA_PTR_GET_DEFAULT(deployDate_, 0L) };
        inline Nodes& setDeployDate(int64_t deployDate) { DARABONBA_PTR_SET_VALUE(deployDate_, deployDate) };


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
        inline int32_t getDqcType() const { DARABONBA_PTR_GET_DEFAULT(dqcType_, 0) };
        inline Nodes& setDqcType(int32_t dqcType) { DARABONBA_PTR_SET_VALUE(dqcType_, dqcType) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
        inline Nodes& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
        inline Nodes& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // fileVersion Field Functions 
        bool hasFileVersion() const { return this->fileVersion_ != nullptr;};
        void deleteFileVersion() { this->fileVersion_ = nullptr;};
        inline int32_t getFileVersion() const { DARABONBA_PTR_GET_DEFAULT(fileVersion_, 0) };
        inline Nodes& setFileVersion(int32_t fileVersion) { DARABONBA_PTR_SET_VALUE(fileVersion_, fileVersion) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline Nodes& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


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


        // relatedFlowId Field Functions 
        bool hasRelatedFlowId() const { return this->relatedFlowId_ != nullptr;};
        void deleteRelatedFlowId() { this->relatedFlowId_ = nullptr;};
        inline int64_t getRelatedFlowId() const { DARABONBA_PTR_GET_DEFAULT(relatedFlowId_, 0L) };
        inline Nodes& setRelatedFlowId(int64_t relatedFlowId) { DARABONBA_PTR_SET_VALUE(relatedFlowId_, relatedFlowId) };


        // repeatInterval Field Functions 
        bool hasRepeatInterval() const { return this->repeatInterval_ != nullptr;};
        void deleteRepeatInterval() { this->repeatInterval_ = nullptr;};
        inline int64_t getRepeatInterval() const { DARABONBA_PTR_GET_DEFAULT(repeatInterval_, 0L) };
        inline Nodes& setRepeatInterval(int64_t repeatInterval) { DARABONBA_PTR_SET_VALUE(repeatInterval_, repeatInterval) };


        // repeatMode Field Functions 
        bool hasRepeatMode() const { return this->repeatMode_ != nullptr;};
        void deleteRepeatMode() { this->repeatMode_ = nullptr;};
        inline int32_t getRepeatMode() const { DARABONBA_PTR_GET_DEFAULT(repeatMode_, 0) };
        inline Nodes& setRepeatMode(int32_t repeatMode) { DARABONBA_PTR_SET_VALUE(repeatMode_, repeatMode) };


        // repeatability Field Functions 
        bool hasRepeatability() const { return this->repeatability_ != nullptr;};
        void deleteRepeatability() { this->repeatability_ = nullptr;};
        inline bool getRepeatability() const { DARABONBA_PTR_GET_DEFAULT(repeatability_, false) };
        inline Nodes& setRepeatability(bool repeatability) { DARABONBA_PTR_SET_VALUE(repeatability_, repeatability) };


        // resGroupIdentifier Field Functions 
        bool hasResGroupIdentifier() const { return this->resGroupIdentifier_ != nullptr;};
        void deleteResGroupIdentifier() { this->resGroupIdentifier_ = nullptr;};
        inline string getResGroupIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resGroupIdentifier_, "") };
        inline Nodes& setResGroupIdentifier(string resGroupIdentifier) { DARABONBA_PTR_SET_VALUE(resGroupIdentifier_, resGroupIdentifier) };


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
        // The number of the page to return. Minimum value: 1. Maximum value: 100.
        shared_ptr<int64_t> baselineId_ {};
        // The operation that you want to perform. Set the value to **ListNodes**.
        shared_ptr<int64_t> businessId_ {};
        // The name of the resource group.
        shared_ptr<string> connection_ {};
        // The timestamp when the node was created. Unit: milliseconds.
        shared_ptr<int64_t> createTime_ {};
        // The name of the workflow.
        shared_ptr<string> cronExpress_ {};
        // The timestamp when the node was deployed. Unit: milliseconds.
        shared_ptr<int64_t> deployDate_ {};
        // The priority for running the node. Valid values: 1, 3, 5, 7, and 8.
        shared_ptr<string> description_ {};
        // The ID of the owner.
        shared_ptr<string> dqcDescription_ {};
        // The connection string.
        shared_ptr<int32_t> dqcType_ {};
        // The file ID. You can call the ListFiles operation to query the ID.
        // 
        // **
        // 
        // **Warning** This field is deprecated.
        shared_ptr<int64_t> fileId_ {};
        // Different file types have different codes. For more information, see [DataWorks node collection](https://help.aliyun.com/document_detail/600169.html).
        // You can also call the [ListFileType](https://help.aliyun.com/document_detail/212428.html) interface to query the code type of the file.
        shared_ptr<int32_t> fileType_ {};
        // The latest version number of the file.
        shared_ptr<int32_t> fileVersion_ {};
        // The timestamp when the node was modified. Unit: milliseconds.
        shared_ptr<int64_t> modifyTime_ {};
        // The types of the nodes. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the type of the node.
        shared_ptr<int64_t> nodeId_ {};
        // The total number of nodes returned.
        shared_ptr<string> nodeName_ {};
        // The additional parameters.
        shared_ptr<string> ownerId_ {};
        // The type of the node.
        shared_ptr<string> paramValues_ {};
        // The ID of the owner.
        shared_ptr<int32_t> priority_ {};
        // The error message returned.
        shared_ptr<string> programType_ {};
        // The information about the nodes.
        shared_ptr<int64_t> projectId_ {};
        // The table and partition filter expression in Data Quality that are associated with the node.
        shared_ptr<int64_t> relatedFlowId_ {};
        // The environment of the workspace. Valid values: PROD and DEV.
        shared_ptr<int64_t> repeatInterval_ {};
        // The rerun mode. The value 0 indicates that rerun can be performed only if a failure occurs. The value 1 indicates that rerun can be performed in all cases. The value 2 indicates that rerun cannot be performed in all cases.
        shared_ptr<int32_t> repeatMode_ {};
        // The name of the node.
        shared_ptr<bool> repeatability_ {};
        // The identifier of the resource group.
        shared_ptr<string> resGroupIdentifier_ {};
        // The ID of the workflow.
        shared_ptr<string> resGroupName_ {};
        // The types of the nodes. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the type of the node.
        shared_ptr<string> schedulerType_ {};
      };

      virtual bool empty() const override { return this->nodes_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<Data::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Data::Nodes>) };
      inline vector<Data::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Data::Nodes>) };
      inline Data& setNodes(const vector<Data::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Data& setNodes(vector<Data::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The information about the nodes.
      shared_ptr<vector<Data::Nodes>> nodes_ {};
      // The name of the node.
      shared_ptr<int32_t> pageNumber_ {};
      // The cron expression returned.
      shared_ptr<int32_t> pageSize_ {};
      // The name of the workflow.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListNodesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListNodesResponseBody::Data) };
    inline ListNodesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListNodesResponseBody::Data) };
    inline ListNodesResponseBody& setData(const ListNodesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListNodesResponseBody& setData(ListNodesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListNodesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListNodesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListNodesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListNodesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The nodes.
    shared_ptr<ListNodesResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<string> errorCode_ {};
    // The page number of the returned page.
    shared_ptr<string> errorMessage_ {};
    // The interval at which the node is rerun after the node fails to run.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list of nodes.
    shared_ptr<string> requestId_ {};
    // Indicates whether the node can be rerun.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
