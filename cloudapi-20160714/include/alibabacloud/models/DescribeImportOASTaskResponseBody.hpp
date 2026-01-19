// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMPORTOASTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMPORTOASTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeImportOASTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImportOASTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiResults, apiResults_);
      DARABONBA_PTR_TO_JSON(ModelResults, modelResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImportOASTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiResults, apiResults_);
      DARABONBA_PTR_FROM_JSON(ModelResults, modelResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    DescribeImportOASTaskResponseBody() = default ;
    DescribeImportOASTaskResponseBody(const DescribeImportOASTaskResponseBody &) = default ;
    DescribeImportOASTaskResponseBody(DescribeImportOASTaskResponseBody &&) = default ;
    DescribeImportOASTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImportOASTaskResponseBody() = default ;
    DescribeImportOASTaskResponseBody& operator=(const DescribeImportOASTaskResponseBody &) = default ;
    DescribeImportOASTaskResponseBody& operator=(DescribeImportOASTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelResults& obj) { 
        DARABONBA_PTR_TO_JSON(ModelResult, modelResult_);
      };
      friend void from_json(const Darabonba::Json& j, ModelResults& obj) { 
        DARABONBA_PTR_FROM_JSON(ModelResult, modelResult_);
      };
      ModelResults() = default ;
      ModelResults(const ModelResults &) = default ;
      ModelResults(ModelResults &&) = default ;
      ModelResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelResults() = default ;
      ModelResults& operator=(const ModelResults &) = default ;
      ModelResults& operator=(ModelResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ModelResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModelResult& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(ModelId, modelId_);
          DARABONBA_PTR_TO_JSON(ModelName, modelName_);
          DARABONBA_PTR_TO_JSON(UpdateStatus, updateStatus_);
        };
        friend void from_json(const Darabonba::Json& j, ModelResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
          DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
          DARABONBA_PTR_FROM_JSON(UpdateStatus, updateStatus_);
        };
        ModelResult() = default ;
        ModelResult(const ModelResult &) = default ;
        ModelResult(ModelResult &&) = default ;
        ModelResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModelResult() = default ;
        ModelResult& operator=(const ModelResult &) = default ;
        ModelResult& operator=(ModelResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->groupId_ == nullptr && this->modelId_ == nullptr && this->modelName_ == nullptr && this->updateStatus_ == nullptr; };
        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline ModelResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ModelResult& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // modelId Field Functions 
        bool hasModelId() const { return this->modelId_ != nullptr;};
        void deleteModelId() { this->modelId_ = nullptr;};
        inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
        inline ModelResult& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline ModelResult& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


        // updateStatus Field Functions 
        bool hasUpdateStatus() const { return this->updateStatus_ != nullptr;};
        void deleteUpdateStatus() { this->updateStatus_ = nullptr;};
        inline string getUpdateStatus() const { DARABONBA_PTR_GET_DEFAULT(updateStatus_, "") };
        inline ModelResult& setUpdateStatus(string updateStatus) { DARABONBA_PTR_SET_VALUE(updateStatus_, updateStatus) };


      protected:
        // The cause of the failure if the model fails to be imported.
        shared_ptr<string> errorMessage_ {};
        // The API group ID.
        shared_ptr<string> groupId_ {};
        // The ID of the imported model.
        shared_ptr<string> modelId_ {};
        // The model name.
        shared_ptr<string> modelName_ {};
        // The execution status of the subtask. Valid values:
        // 
        // *   RUNNING
        // *   WAIT
        // *   OVER
        // *   FAIL
        // *   CANCEL
        shared_ptr<string> updateStatus_ {};
      };

      virtual bool empty() const override { return this->modelResult_ == nullptr; };
      // modelResult Field Functions 
      bool hasModelResult() const { return this->modelResult_ != nullptr;};
      void deleteModelResult() { this->modelResult_ = nullptr;};
      inline const vector<ModelResults::ModelResult> & getModelResult() const { DARABONBA_PTR_GET_CONST(modelResult_, vector<ModelResults::ModelResult>) };
      inline vector<ModelResults::ModelResult> getModelResult() { DARABONBA_PTR_GET(modelResult_, vector<ModelResults::ModelResult>) };
      inline ModelResults& setModelResult(const vector<ModelResults::ModelResult> & modelResult) { DARABONBA_PTR_SET_VALUE(modelResult_, modelResult) };
      inline ModelResults& setModelResult(vector<ModelResults::ModelResult> && modelResult) { DARABONBA_PTR_SET_RVALUE(modelResult_, modelResult) };


    protected:
      shared_ptr<vector<ModelResults::ModelResult>> modelResult_ {};
    };

    class ApiResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiResults& obj) { 
        DARABONBA_PTR_TO_JSON(ApiResult, apiResult_);
      };
      friend void from_json(const Darabonba::Json& j, ApiResults& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiResult, apiResult_);
      };
      ApiResults() = default ;
      ApiResults(const ApiResults &) = default ;
      ApiResults(ApiResults &&) = default ;
      ApiResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiResults() = default ;
      ApiResults& operator=(const ApiResults &) = default ;
      ApiResults& operator=(ApiResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiResult& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(Method, method_);
          DARABONBA_PTR_TO_JSON(Path, path_);
          DARABONBA_PTR_TO_JSON(UpdateStatus, updateStatus_);
        };
        friend void from_json(const Darabonba::Json& j, ApiResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(Method, method_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
          DARABONBA_PTR_FROM_JSON(UpdateStatus, updateStatus_);
        };
        ApiResult() = default ;
        ApiResult(const ApiResult &) = default ;
        ApiResult(ApiResult &&) = default ;
        ApiResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiResult() = default ;
        ApiResult& operator=(const ApiResult &) = default ;
        ApiResult& operator=(ApiResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiName_ == nullptr && this->description_ == nullptr && this->errorMessage_ == nullptr && this->groupId_ == nullptr && this->method_ == nullptr
        && this->path_ == nullptr && this->updateStatus_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline ApiResult& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ApiResult& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ApiResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline ApiResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ApiResult& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // method Field Functions 
        bool hasMethod() const { return this->method_ != nullptr;};
        void deleteMethod() { this->method_ = nullptr;};
        inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
        inline ApiResult& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline ApiResult& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // updateStatus Field Functions 
        bool hasUpdateStatus() const { return this->updateStatus_ != nullptr;};
        void deleteUpdateStatus() { this->updateStatus_ = nullptr;};
        inline string getUpdateStatus() const { DARABONBA_PTR_GET_DEFAULT(updateStatus_, "") };
        inline ApiResult& setUpdateStatus(string updateStatus) { DARABONBA_PTR_SET_VALUE(updateStatus_, updateStatus) };


      protected:
        // The API ID.
        shared_ptr<string> apiId_ {};
        // The API name.
        shared_ptr<string> apiName_ {};
        // The API description.
        shared_ptr<string> description_ {};
        // The cause of the failure if the API fails to be imported.
        shared_ptr<string> errorMessage_ {};
        // The API group ID.
        shared_ptr<string> groupId_ {};
        // The HTTP request HTTP method of the API.
        shared_ptr<string> method_ {};
        // The request path of the API.
        shared_ptr<string> path_ {};
        // The execution status of the subtask. Valid values:
        // 
        // *   RUNNING
        // *   WAIT
        // *   OVER
        // *   FAIL
        // *   CANCEL
        shared_ptr<string> updateStatus_ {};
      };

      virtual bool empty() const override { return this->apiResult_ == nullptr; };
      // apiResult Field Functions 
      bool hasApiResult() const { return this->apiResult_ != nullptr;};
      void deleteApiResult() { this->apiResult_ = nullptr;};
      inline const vector<ApiResults::ApiResult> & getApiResult() const { DARABONBA_PTR_GET_CONST(apiResult_, vector<ApiResults::ApiResult>) };
      inline vector<ApiResults::ApiResult> getApiResult() { DARABONBA_PTR_GET(apiResult_, vector<ApiResults::ApiResult>) };
      inline ApiResults& setApiResult(const vector<ApiResults::ApiResult> & apiResult) { DARABONBA_PTR_SET_VALUE(apiResult_, apiResult) };
      inline ApiResults& setApiResult(vector<ApiResults::ApiResult> && apiResult) { DARABONBA_PTR_SET_RVALUE(apiResult_, apiResult) };


    protected:
      shared_ptr<vector<ApiResults::ApiResult>> apiResult_ {};
    };

    virtual bool empty() const override { return this->apiResults_ == nullptr
        && this->modelResults_ == nullptr && this->requestId_ == nullptr && this->taskStatus_ == nullptr; };
    // apiResults Field Functions 
    bool hasApiResults() const { return this->apiResults_ != nullptr;};
    void deleteApiResults() { this->apiResults_ = nullptr;};
    inline const DescribeImportOASTaskResponseBody::ApiResults & getApiResults() const { DARABONBA_PTR_GET_CONST(apiResults_, DescribeImportOASTaskResponseBody::ApiResults) };
    inline DescribeImportOASTaskResponseBody::ApiResults getApiResults() { DARABONBA_PTR_GET(apiResults_, DescribeImportOASTaskResponseBody::ApiResults) };
    inline DescribeImportOASTaskResponseBody& setApiResults(const DescribeImportOASTaskResponseBody::ApiResults & apiResults) { DARABONBA_PTR_SET_VALUE(apiResults_, apiResults) };
    inline DescribeImportOASTaskResponseBody& setApiResults(DescribeImportOASTaskResponseBody::ApiResults && apiResults) { DARABONBA_PTR_SET_RVALUE(apiResults_, apiResults) };


    // modelResults Field Functions 
    bool hasModelResults() const { return this->modelResults_ != nullptr;};
    void deleteModelResults() { this->modelResults_ = nullptr;};
    inline const DescribeImportOASTaskResponseBody::ModelResults & getModelResults() const { DARABONBA_PTR_GET_CONST(modelResults_, DescribeImportOASTaskResponseBody::ModelResults) };
    inline DescribeImportOASTaskResponseBody::ModelResults getModelResults() { DARABONBA_PTR_GET(modelResults_, DescribeImportOASTaskResponseBody::ModelResults) };
    inline DescribeImportOASTaskResponseBody& setModelResults(const DescribeImportOASTaskResponseBody::ModelResults & modelResults) { DARABONBA_PTR_SET_VALUE(modelResults_, modelResults) };
    inline DescribeImportOASTaskResponseBody& setModelResults(DescribeImportOASTaskResponseBody::ModelResults && modelResults) { DARABONBA_PTR_SET_RVALUE(modelResults_, modelResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImportOASTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeImportOASTaskResponseBody& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // The execution status of the subtask. Valid values:
    // 
    // *   RUNNING
    // *   WAIT
    // *   OVER
    // *   FAIL
    // *   CANCEL
    shared_ptr<DescribeImportOASTaskResponseBody::ApiResults> apiResults_ {};
    // The execution status of the subtask. Valid values:
    // 
    // *   RUNNING
    // *   WAIT
    // *   OVER
    // *   FAIL
    // *   CANCEL
    shared_ptr<DescribeImportOASTaskResponseBody::ModelResults> modelResults_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the import task. Valid values:
    // 
    // *   Running
    // *   Finished
    shared_ptr<string> taskStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
