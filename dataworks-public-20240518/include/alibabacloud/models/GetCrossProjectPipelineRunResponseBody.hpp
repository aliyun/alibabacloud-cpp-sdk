// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCROSSPROJECTPIPELINERUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCROSSPROJECTPIPELINERUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetCrossProjectPipelineRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCrossProjectPipelineRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCrossProjectPipelineRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCrossProjectPipelineRunResponseBody() = default ;
    GetCrossProjectPipelineRunResponseBody(const GetCrossProjectPipelineRunResponseBody &) = default ;
    GetCrossProjectPipelineRunResponseBody(GetCrossProjectPipelineRunResponseBody &&) = default ;
    GetCrossProjectPipelineRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCrossProjectPipelineRunResponseBody() = default ;
    GetCrossProjectPipelineRunResponseBody& operator=(const GetCrossProjectPipelineRunResponseBody &) = default ;
    GetCrossProjectPipelineRunResponseBody& operator=(GetCrossProjectPipelineRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      virtual bool empty() const override { return this->abolishTime_ == nullptr
        && this->abolisher_ == nullptr && this->changeType_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->deploymentEnvironmentId_ == nullptr
        && this->description_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->executeTime_ == nullptr && this->executor_ == nullptr
        && this->finishTime_ == nullptr && this->objectId_ == nullptr && this->objectName_ == nullptr && this->objectType_ == nullptr && this->objectVersion_ == nullptr
        && this->pipelineRunId_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
      // abolishTime Field Functions 
      bool hasAbolishTime() const { return this->abolishTime_ != nullptr;};
      void deleteAbolishTime() { this->abolishTime_ = nullptr;};
      inline int64_t getAbolishTime() const { DARABONBA_PTR_GET_DEFAULT(abolishTime_, 0L) };
      inline Data& setAbolishTime(int64_t abolishTime) { DARABONBA_PTR_SET_VALUE(abolishTime_, abolishTime) };


      // abolisher Field Functions 
      bool hasAbolisher() const { return this->abolisher_ != nullptr;};
      void deleteAbolisher() { this->abolisher_ = nullptr;};
      inline string getAbolisher() const { DARABONBA_PTR_GET_DEFAULT(abolisher_, "") };
      inline Data& setAbolisher(string abolisher) { DARABONBA_PTR_SET_VALUE(abolisher_, abolisher) };


      // changeType Field Functions 
      bool hasChangeType() const { return this->changeType_ != nullptr;};
      void deleteChangeType() { this->changeType_ = nullptr;};
      inline string getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
      inline Data& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Data& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // deploymentEnvironmentId Field Functions 
      bool hasDeploymentEnvironmentId() const { return this->deploymentEnvironmentId_ != nullptr;};
      void deleteDeploymentEnvironmentId() { this->deploymentEnvironmentId_ = nullptr;};
      inline int64_t getDeploymentEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentEnvironmentId_, 0L) };
      inline Data& setDeploymentEnvironmentId(int64_t deploymentEnvironmentId) { DARABONBA_PTR_SET_VALUE(deploymentEnvironmentId_, deploymentEnvironmentId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // executeTime Field Functions 
      bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
      void deleteExecuteTime() { this->executeTime_ = nullptr;};
      inline int64_t getExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, 0L) };
      inline Data& setExecuteTime(int64_t executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


      // executor Field Functions 
      bool hasExecutor() const { return this->executor_ != nullptr;};
      void deleteExecutor() { this->executor_ = nullptr;};
      inline string getExecutor() const { DARABONBA_PTR_GET_DEFAULT(executor_, "") };
      inline Data& setExecutor(string executor) { DARABONBA_PTR_SET_VALUE(executor_, executor) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
      inline Data& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


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


      // pipelineRunId Field Functions 
      bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
      void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
      inline string getPipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, "") };
      inline Data& setPipelineRunId(string pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The termination time. This value is a UNIX timestamp in milliseconds. This parameter is returned only after the flow is terminated.
      shared_ptr<int64_t> abolishTime_ {};
      // The user who terminated the flow.
      shared_ptr<string> abolisher_ {};
      // The change type.
      shared_ptr<string> changeType_ {};
      // The creation time. This value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The creator.
      shared_ptr<string> creator_ {};
      // The cross-workspace deployment environment ID.
      shared_ptr<int64_t> deploymentEnvironmentId_ {};
      // The deployment description.
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
      // The ID of the deployment object.
      shared_ptr<string> objectId_ {};
      // The name of the deployment object.
      shared_ptr<string> objectName_ {};
      // The object type of the publish object.
      shared_ptr<string> objectType_ {};
      // The version of the deployment object.
      shared_ptr<string> objectVersion_ {};
      // The cross-workspace deployment flow ID.
      shared_ptr<string> pipelineRunId_ {};
      // The request ID.
      shared_ptr<string> requestId_ {};
      // The status of the deployment flow. Valid values:
      // - Building: Building.
      // - Ready: Ready and waiting for execution.
      // - Running: Running.
      // - Termination: Terminated.
      // - Success: Execution succeeded.
      // - Fail: Execution failed.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCrossProjectPipelineRunResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCrossProjectPipelineRunResponseBody::Data) };
    inline GetCrossProjectPipelineRunResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCrossProjectPipelineRunResponseBody::Data) };
    inline GetCrossProjectPipelineRunResponseBody& setData(const GetCrossProjectPipelineRunResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCrossProjectPipelineRunResponseBody& setData(GetCrossProjectPipelineRunResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCrossProjectPipelineRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCrossProjectPipelineRunResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business response.
    shared_ptr<GetCrossProjectPipelineRunResponseBody::Data> data_ {};
    // The request ID, which is used to locate and troubleshoot this API call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
