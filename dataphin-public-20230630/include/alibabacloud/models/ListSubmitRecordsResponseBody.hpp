// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBMITRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBMITRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListSubmitRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubmitRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(ListResult, listResult_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubmitRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(ListResult, listResult_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSubmitRecordsResponseBody() = default ;
    ListSubmitRecordsResponseBody(const ListSubmitRecordsResponseBody &) = default ;
    ListSubmitRecordsResponseBody(ListSubmitRecordsResponseBody &&) = default ;
    ListSubmitRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubmitRecordsResponseBody() = default ;
    ListSubmitRecordsResponseBody& operator=(const ListSubmitRecordsResponseBody &) = default ;
    ListSubmitRecordsResponseBody& operator=(ListSubmitRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListResult& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ListResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ListResult() = default ;
      ListResult(const ListResult &) = default ;
      ListResult(ListResult &&) = default ;
      ListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListResult() = default ;
      ListResult& operator=(const ListResult &) = default ;
      ListResult& operator=(ListResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModify, gmtModify_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
          DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          DARABONBA_PTR_TO_JSON(ObjectVersion, objectVersion_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(SubmitComment, submitComment_);
          DARABONBA_PTR_TO_JSON(Submitter, submitter_);
          DARABONBA_PTR_TO_JSON(SubmitterName, submitterName_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModify, gmtModify_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
          DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
          DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          DARABONBA_PTR_FROM_JSON(ObjectVersion, objectVersion_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(SubmitComment, submitComment_);
          DARABONBA_PTR_FROM_JSON(Submitter, submitter_);
          DARABONBA_PTR_FROM_JSON(SubmitterName, submitterName_);
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
        virtual bool empty() const override { return this->changeType_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModify_ == nullptr && this->id_ == nullptr && this->nodeId_ == nullptr && this->objectId_ == nullptr
        && this->objectName_ == nullptr && this->objectType_ == nullptr && this->objectVersion_ == nullptr && this->projectId_ == nullptr && this->submitComment_ == nullptr
        && this->submitter_ == nullptr && this->submitterName_ == nullptr; };
        // changeType Field Functions 
        bool hasChangeType() const { return this->changeType_ != nullptr;};
        void deleteChangeType() { this->changeType_ = nullptr;};
        inline int32_t getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, 0) };
        inline Data& setChangeType(int32_t changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModify Field Functions 
        bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
        void deleteGmtModify() { this->gmtModify_ = nullptr;};
        inline string getGmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
        inline Data& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Data& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // objectId Field Functions 
        bool hasObjectId() const { return this->objectId_ != nullptr;};
        void deleteObjectId() { this->objectId_ = nullptr;};
        inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
        inline Data& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


        // objectName Field Functions 
        bool hasObjectName() const { return this->objectName_ != nullptr;};
        void deleteObjectName() { this->objectName_ = nullptr;};
        inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
        inline Data& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline Data& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // objectVersion Field Functions 
        bool hasObjectVersion() const { return this->objectVersion_ != nullptr;};
        void deleteObjectVersion() { this->objectVersion_ = nullptr;};
        inline string getObjectVersion() const { DARABONBA_PTR_GET_DEFAULT(objectVersion_, "") };
        inline Data& setObjectVersion(string objectVersion) { DARABONBA_PTR_SET_VALUE(objectVersion_, objectVersion) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
        inline Data& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // submitComment Field Functions 
        bool hasSubmitComment() const { return this->submitComment_ != nullptr;};
        void deleteSubmitComment() { this->submitComment_ = nullptr;};
        inline string getSubmitComment() const { DARABONBA_PTR_GET_DEFAULT(submitComment_, "") };
        inline Data& setSubmitComment(string submitComment) { DARABONBA_PTR_SET_VALUE(submitComment_, submitComment) };


        // submitter Field Functions 
        bool hasSubmitter() const { return this->submitter_ != nullptr;};
        void deleteSubmitter() { this->submitter_ = nullptr;};
        inline string getSubmitter() const { DARABONBA_PTR_GET_DEFAULT(submitter_, "") };
        inline Data& setSubmitter(string submitter) { DARABONBA_PTR_SET_VALUE(submitter_, submitter) };


        // submitterName Field Functions 
        bool hasSubmitterName() const { return this->submitterName_ != nullptr;};
        void deleteSubmitterName() { this->submitterName_ = nullptr;};
        inline string getSubmitterName() const { DARABONBA_PTR_GET_DEFAULT(submitterName_, "") };
        inline Data& setSubmitterName(string submitterName) { DARABONBA_PTR_SET_VALUE(submitterName_, submitterName) };


      protected:
        // Change type. 0: Create / 1: Update / 2: Delete.
        shared_ptr<int32_t> changeType_ {};
        // Creation time in the yyyy-MM-dd HH:mm:ss format.
        shared_ptr<string> gmtCreate_ {};
        // Modification time in the yyyy-MM-dd HH:mm:ss format.
        shared_ptr<string> gmtModify_ {};
        // Pending deployment record ID.
        shared_ptr<int64_t> id_ {};
        // Node ID.
        shared_ptr<string> nodeId_ {};
        // Object ID.
        shared_ptr<string> objectId_ {};
        // Object name.
        shared_ptr<string> objectName_ {};
        // Object type. Valid values:
        // - MaxCompute SQL task: MAX_COMPUTE_SQL
        // - MaxCompute MR task: MAX_COMPUTE_MR
        // - Spark JAR on MaxCompute: SPARK_JAR_ON_MAX_COMPUTE
        // - Shell task: SHELL
        // - Python task: PYTHON
        // - Perl script: PERL
        // - Check: CHECK
        // - Sync task: DATA_X
        // - Virtual node: VIRTUAL
        // - Resource: IDE_RESOURCE
        // - Function: UDF
        // - Hive SQL task: HIVE_SQL
        // - Hadoop MR task: HADOOP_MR
        // - Spark JAR on Hive task: SPARK_JAR_ON_HIVE
        // - Flink SQL task: FLINK_SQL
        // - Flink SQL template task: FLINK_TEMPLATE_SQL
        // - Stream computing template: STREAM_TEMPLATE
        // - Metatable: META_TABLE
        // - Stream computing function: STREAM_UDF
        // - Real-time Flink DataStream: FLINK_DATASTREAM
        // - Real-time custom data source: STREAM_CUSTOM_DATASOURCE
        // - AnalyticDB for PostgreSQL task: ADB_FOR_PG
        // - TDH SQL task: INCEPTOR_SQL
        // - Mirror table: MIRROR_TABLE
        // - Intermediate table: MIDDLE_TABLE
        // - Application table: APPLICATION_TABLE
        // - Impala SQL task: IMPALA_SQL
        // - Offline pipeline task: OFFLINE_PIPELINE
        // - Real-time pipeline task: REAL_TIME_PIPELINE
        // - Dimension logical table: DIM_LOGICAL_TABLE
        // - Fact logical table: FCT_LOGICAL_TABLE
        // - Business condition: BIZ_CONDITION
        // - Atomic metric: ATOM_INDEX
        // - Derived metric: DERIVED_INDEX
        // - Calculated derived metric: CALC_DERIVED_INDEX
        // - PAI task: PAI_DESIGNER
        // - ArgoDB SQL task: ARGODB_SQL
        // - Hologres SQL task: HOLOGRES_SQL
        // - Impala SQL task: IMPALA_SQL
        // - StarRocks SQL task: STARROCKS_SQL
        // - Database SQL task: DATABASE_SQL
        // - Spark SQL task: SPARK_SQL
        // - Compute template: TASK_TEMPLATE
        // - External trigger node: EXTERNAL_TRIGGER
        // - Gauss SQL task: GAUSS_SQL
        shared_ptr<string> objectType_ {};
        // Object version.
        shared_ptr<string> objectVersion_ {};
        // Project ID.
        shared_ptr<string> projectId_ {};
        // Submission comment.
        shared_ptr<string> submitComment_ {};
        // Submitter ID.
        shared_ptr<string> submitter_ {};
        // Submitter name.
        shared_ptr<string> submitterName_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->totalCount_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<ListResult::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListResult::Data>) };
      inline vector<ListResult::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListResult::Data>) };
      inline ListResult& setData(const vector<ListResult::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline ListResult& setData(vector<ListResult::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline ListResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // List of pending deployment records.
      shared_ptr<vector<ListResult::Data>> data_ {};
      // Total count.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->listResult_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSubmitRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSubmitRecordsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // listResult Field Functions 
    bool hasListResult() const { return this->listResult_ != nullptr;};
    void deleteListResult() { this->listResult_ = nullptr;};
    inline const ListSubmitRecordsResponseBody::ListResult & getListResult() const { DARABONBA_PTR_GET_CONST(listResult_, ListSubmitRecordsResponseBody::ListResult) };
    inline ListSubmitRecordsResponseBody::ListResult getListResult() { DARABONBA_PTR_GET(listResult_, ListSubmitRecordsResponseBody::ListResult) };
    inline ListSubmitRecordsResponseBody& setListResult(const ListSubmitRecordsResponseBody::ListResult & listResult) { DARABONBA_PTR_SET_VALUE(listResult_, listResult) };
    inline ListSubmitRecordsResponseBody& setListResult(ListSubmitRecordsResponseBody::ListResult && listResult) { DARABONBA_PTR_SET_RVALUE(listResult_, listResult) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSubmitRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSubmitRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSubmitRecordsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error code. OK indicates a successful request.
    shared_ptr<string> code_ {};
    // HTTP status code returned by the backend.
    shared_ptr<int32_t> httpStatusCode_ {};
    // Query result.
    shared_ptr<ListSubmitRecordsResponseBody::ListResult> listResult_ {};
    // Error message.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
