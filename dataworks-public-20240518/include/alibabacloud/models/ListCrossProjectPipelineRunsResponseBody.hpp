// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCROSSPROJECTPIPELINERUNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCROSSPROJECTPIPELINERUNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCrossProjectPipelineRunsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrossProjectPipelineRunsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrossProjectPipelineRunsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCrossProjectPipelineRunsResponseBody() = default ;
    ListCrossProjectPipelineRunsResponseBody(const ListCrossProjectPipelineRunsResponseBody &) = default ;
    ListCrossProjectPipelineRunsResponseBody(ListCrossProjectPipelineRunsResponseBody &&) = default ;
    ListCrossProjectPipelineRunsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrossProjectPipelineRunsResponseBody() = default ;
    ListCrossProjectPipelineRunsResponseBody& operator=(const ListCrossProjectPipelineRunsResponseBody &) = default ;
    ListCrossProjectPipelineRunsResponseBody& operator=(ListCrossProjectPipelineRunsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(PipelineRuns, pipelineRuns_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(PipelineRuns, pipelineRuns_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
      class PipelineRuns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PipelineRuns& obj) { 
          DARABONBA_PTR_TO_JSON(AbolishTime, abolishTime_);
          DARABONBA_PTR_TO_JSON(Abolisher, abolisher_);
          DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(DeploymentEnvironmentId, deploymentEnvironmentId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
          DARABONBA_PTR_TO_JSON(Executor, executor_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
          DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
          DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
          DARABONBA_PTR_TO_JSON(ObjectVersion, objectVersion_);
          DARABONBA_PTR_TO_JSON(PipelineRunId, pipelineRunId_);
          DARABONBA_PTR_TO_JSON(RequestId, requestId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PipelineRuns& obj) { 
          DARABONBA_PTR_FROM_JSON(AbolishTime, abolishTime_);
          DARABONBA_PTR_FROM_JSON(Abolisher, abolisher_);
          DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(DeploymentEnvironmentId, deploymentEnvironmentId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
          DARABONBA_PTR_FROM_JSON(Executor, executor_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
          DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
          DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
          DARABONBA_PTR_FROM_JSON(ObjectVersion, objectVersion_);
          DARABONBA_PTR_FROM_JSON(PipelineRunId, pipelineRunId_);
          DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        PipelineRuns() = default ;
        PipelineRuns(const PipelineRuns &) = default ;
        PipelineRuns(PipelineRuns &&) = default ;
        PipelineRuns(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PipelineRuns() = default ;
        PipelineRuns& operator=(const PipelineRuns &) = default ;
        PipelineRuns& operator=(PipelineRuns &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->abolishTime_ == nullptr
        && this->abolisher_ == nullptr && this->changeType_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->deploymentEnvironmentId_ == nullptr
        && this->description_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->executeTime_ == nullptr && this->executor_ == nullptr
        && this->finishTime_ == nullptr && this->objectId_ == nullptr && this->objectName_ == nullptr && this->objectType_ == nullptr && this->objectVersion_ == nullptr
        && this->pipelineRunId_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
        // abolishTime Field Functions 
        bool hasAbolishTime() const { return this->abolishTime_ != nullptr;};
        void deleteAbolishTime() { this->abolishTime_ = nullptr;};
        inline int64_t getAbolishTime() const { DARABONBA_PTR_GET_DEFAULT(abolishTime_, 0L) };
        inline PipelineRuns& setAbolishTime(int64_t abolishTime) { DARABONBA_PTR_SET_VALUE(abolishTime_, abolishTime) };


        // abolisher Field Functions 
        bool hasAbolisher() const { return this->abolisher_ != nullptr;};
        void deleteAbolisher() { this->abolisher_ = nullptr;};
        inline string getAbolisher() const { DARABONBA_PTR_GET_DEFAULT(abolisher_, "") };
        inline PipelineRuns& setAbolisher(string abolisher) { DARABONBA_PTR_SET_VALUE(abolisher_, abolisher) };


        // changeType Field Functions 
        bool hasChangeType() const { return this->changeType_ != nullptr;};
        void deleteChangeType() { this->changeType_ = nullptr;};
        inline string getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
        inline PipelineRuns& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline PipelineRuns& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline PipelineRuns& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // deploymentEnvironmentId Field Functions 
        bool hasDeploymentEnvironmentId() const { return this->deploymentEnvironmentId_ != nullptr;};
        void deleteDeploymentEnvironmentId() { this->deploymentEnvironmentId_ = nullptr;};
        inline int64_t getDeploymentEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentEnvironmentId_, 0L) };
        inline PipelineRuns& setDeploymentEnvironmentId(int64_t deploymentEnvironmentId) { DARABONBA_PTR_SET_VALUE(deploymentEnvironmentId_, deploymentEnvironmentId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PipelineRuns& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline PipelineRuns& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline PipelineRuns& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // executeTime Field Functions 
        bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
        void deleteExecuteTime() { this->executeTime_ = nullptr;};
        inline int64_t getExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, 0L) };
        inline PipelineRuns& setExecuteTime(int64_t executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


        // executor Field Functions 
        bool hasExecutor() const { return this->executor_ != nullptr;};
        void deleteExecutor() { this->executor_ = nullptr;};
        inline string getExecutor() const { DARABONBA_PTR_GET_DEFAULT(executor_, "") };
        inline PipelineRuns& setExecutor(string executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
        inline PipelineRuns& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // objectId Field Functions 
        bool hasObjectId() const { return this->objectId_ != nullptr;};
        void deleteObjectId() { this->objectId_ = nullptr;};
        inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
        inline PipelineRuns& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


        // objectName Field Functions 
        bool hasObjectName() const { return this->objectName_ != nullptr;};
        void deleteObjectName() { this->objectName_ = nullptr;};
        inline string getObjectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
        inline PipelineRuns& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


        // objectType Field Functions 
        bool hasObjectType() const { return this->objectType_ != nullptr;};
        void deleteObjectType() { this->objectType_ = nullptr;};
        inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
        inline PipelineRuns& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


        // objectVersion Field Functions 
        bool hasObjectVersion() const { return this->objectVersion_ != nullptr;};
        void deleteObjectVersion() { this->objectVersion_ = nullptr;};
        inline string getObjectVersion() const { DARABONBA_PTR_GET_DEFAULT(objectVersion_, "") };
        inline PipelineRuns& setObjectVersion(string objectVersion) { DARABONBA_PTR_SET_VALUE(objectVersion_, objectVersion) };


        // pipelineRunId Field Functions 
        bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
        void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
        inline string getPipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, "") };
        inline PipelineRuns& setPipelineRunId(string pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline PipelineRuns& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PipelineRuns& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The termination time. This value is a UNIX timestamp in milliseconds. This parameter is returned only after the pipeline is terminated.
        shared_ptr<int64_t> abolishTime_ {};
        // The user who terminated the pipeline.
        shared_ptr<string> abolisher_ {};
        // The change type.
        shared_ptr<string> changeType_ {};
        // The creation time. This value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> createTime_ {};
        // The creator.
        shared_ptr<string> creator_ {};
        // The cross-workspace publish environment ID.
        shared_ptr<int64_t> deploymentEnvironmentId_ {};
        // The description of the publish operation.
        shared_ptr<string> description_ {};
        // The error code.
        shared_ptr<string> errorCode_ {};
        // The error message.
        shared_ptr<string> errorMessage_ {};
        // The execution time. This value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> executeTime_ {};
        // The executor.
        shared_ptr<string> executor_ {};
        // The completion time. This value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> finishTime_ {};
        // The publish object ID.
        shared_ptr<string> objectId_ {};
        // The name of the published object.
        shared_ptr<string> objectName_ {};
        // The publish object type.
        shared_ptr<string> objectType_ {};
        // The version of the published object.
        shared_ptr<string> objectVersion_ {};
        // The ID of the cross-workspace publish pipeline.
        shared_ptr<string> pipelineRunId_ {};
        // The request ID.
        shared_ptr<string> requestId_ {};
        // The publish flow status. Valid values:
        // - Building: Building.
        // - Ready: Ready and waiting for execution.
        // - Running: Running.
        // - Termination: Terminated.
        // - Success: Succeeded.
        // - Fail: Failed.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->pipelineRuns_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
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


      // pipelineRuns Field Functions 
      bool hasPipelineRuns() const { return this->pipelineRuns_ != nullptr;};
      void deletePipelineRuns() { this->pipelineRuns_ = nullptr;};
      inline const vector<Data::PipelineRuns> & getPipelineRuns() const { DARABONBA_PTR_GET_CONST(pipelineRuns_, vector<Data::PipelineRuns>) };
      inline vector<Data::PipelineRuns> getPipelineRuns() { DARABONBA_PTR_GET(pipelineRuns_, vector<Data::PipelineRuns>) };
      inline Data& setPipelineRuns(const vector<Data::PipelineRuns> & pipelineRuns) { DARABONBA_PTR_SET_VALUE(pipelineRuns_, pipelineRuns) };
      inline Data& setPipelineRuns(vector<Data::PipelineRuns> && pipelineRuns) { DARABONBA_PTR_SET_RVALUE(pipelineRuns_, pipelineRuns) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The list of cross-workspace publish pipelines that match the query conditions.
      shared_ptr<vector<Data::PipelineRuns>> pipelineRuns_ {};
      // The request ID.
      shared_ptr<string> requestId_ {};
      // The total number of records.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCrossProjectPipelineRunsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCrossProjectPipelineRunsResponseBody::Data) };
    inline ListCrossProjectPipelineRunsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCrossProjectPipelineRunsResponseBody::Data) };
    inline ListCrossProjectPipelineRunsResponseBody& setData(const ListCrossProjectPipelineRunsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCrossProjectPipelineRunsResponseBody& setData(ListCrossProjectPipelineRunsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCrossProjectPipelineRunsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCrossProjectPipelineRunsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business response data.
    shared_ptr<ListCrossProjectPipelineRunsResponseBody::Data> data_ {};
    // The request ID, which is used to locate and troubleshoot this API call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
