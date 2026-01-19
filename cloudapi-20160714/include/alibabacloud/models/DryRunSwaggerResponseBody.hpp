// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DRYRUNSWAGGERRESPONSEBODY_HPP_
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
  class DryRunSwaggerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DryRunSwaggerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Failed, failed_);
      DARABONBA_PTR_TO_JSON(GlobalCondition, globalCondition_);
      DARABONBA_PTR_TO_JSON(ModelFailed, modelFailed_);
      DARABONBA_PTR_TO_JSON(ModelSuccess, modelSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DryRunSwaggerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Failed, failed_);
      DARABONBA_PTR_FROM_JSON(GlobalCondition, globalCondition_);
      DARABONBA_PTR_FROM_JSON(ModelFailed, modelFailed_);
      DARABONBA_PTR_FROM_JSON(ModelSuccess, modelSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DryRunSwaggerResponseBody() = default ;
    DryRunSwaggerResponseBody(const DryRunSwaggerResponseBody &) = default ;
    DryRunSwaggerResponseBody(DryRunSwaggerResponseBody &&) = default ;
    DryRunSwaggerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DryRunSwaggerResponseBody() = default ;
    DryRunSwaggerResponseBody& operator=(const DryRunSwaggerResponseBody &) = default ;
    DryRunSwaggerResponseBody& operator=(DryRunSwaggerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Success : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Success& obj) { 
        DARABONBA_PTR_TO_JSON(ApiDryRunSwaggerSuccess, apiDryRunSwaggerSuccess_);
      };
      friend void from_json(const Darabonba::Json& j, Success& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiDryRunSwaggerSuccess, apiDryRunSwaggerSuccess_);
      };
      Success() = default ;
      Success(const Success &) = default ;
      Success(Success &&) = default ;
      Success(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Success() = default ;
      Success& operator=(const Success &) = default ;
      Success& operator=(Success &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiDryRunSwaggerSuccess : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiDryRunSwaggerSuccess& obj) { 
          DARABONBA_PTR_TO_JSON(ApiOperation, apiOperation_);
          DARABONBA_PTR_TO_JSON(ApiSwagger, apiSwagger_);
          DARABONBA_PTR_TO_JSON(ApiUid, apiUid_);
          DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
          DARABONBA_PTR_TO_JSON(Path, path_);
        };
        friend void from_json(const Darabonba::Json& j, ApiDryRunSwaggerSuccess& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiOperation, apiOperation_);
          DARABONBA_PTR_FROM_JSON(ApiSwagger, apiSwagger_);
          DARABONBA_PTR_FROM_JSON(ApiUid, apiUid_);
          DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
        };
        ApiDryRunSwaggerSuccess() = default ;
        ApiDryRunSwaggerSuccess(const ApiDryRunSwaggerSuccess &) = default ;
        ApiDryRunSwaggerSuccess(ApiDryRunSwaggerSuccess &&) = default ;
        ApiDryRunSwaggerSuccess(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiDryRunSwaggerSuccess() = default ;
        ApiDryRunSwaggerSuccess& operator=(const ApiDryRunSwaggerSuccess &) = default ;
        ApiDryRunSwaggerSuccess& operator=(ApiDryRunSwaggerSuccess &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiOperation_ == nullptr
        && this->apiSwagger_ == nullptr && this->apiUid_ == nullptr && this->httpMethod_ == nullptr && this->path_ == nullptr; };
        // apiOperation Field Functions 
        bool hasApiOperation() const { return this->apiOperation_ != nullptr;};
        void deleteApiOperation() { this->apiOperation_ = nullptr;};
        inline string getApiOperation() const { DARABONBA_PTR_GET_DEFAULT(apiOperation_, "") };
        inline ApiDryRunSwaggerSuccess& setApiOperation(string apiOperation) { DARABONBA_PTR_SET_VALUE(apiOperation_, apiOperation) };


        // apiSwagger Field Functions 
        bool hasApiSwagger() const { return this->apiSwagger_ != nullptr;};
        void deleteApiSwagger() { this->apiSwagger_ = nullptr;};
        inline string getApiSwagger() const { DARABONBA_PTR_GET_DEFAULT(apiSwagger_, "") };
        inline ApiDryRunSwaggerSuccess& setApiSwagger(string apiSwagger) { DARABONBA_PTR_SET_VALUE(apiSwagger_, apiSwagger) };


        // apiUid Field Functions 
        bool hasApiUid() const { return this->apiUid_ != nullptr;};
        void deleteApiUid() { this->apiUid_ = nullptr;};
        inline string getApiUid() const { DARABONBA_PTR_GET_DEFAULT(apiUid_, "") };
        inline ApiDryRunSwaggerSuccess& setApiUid(string apiUid) { DARABONBA_PTR_SET_VALUE(apiUid_, apiUid) };


        // httpMethod Field Functions 
        bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
        void deleteHttpMethod() { this->httpMethod_ = nullptr;};
        inline string getHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
        inline ApiDryRunSwaggerSuccess& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline ApiDryRunSwaggerSuccess& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      protected:
        // Specifies whether the operation is CREATE or MODIFY.
        shared_ptr<string> apiOperation_ {};
        // The API definition that complies with the Swagger specification.
        shared_ptr<string> apiSwagger_ {};
        // The UID of the successfully imported API.
        shared_ptr<string> apiUid_ {};
        // The HTTP method configured when the API is created.
        shared_ptr<string> httpMethod_ {};
        // The request path configured when the API is created.
        shared_ptr<string> path_ {};
      };

      virtual bool empty() const override { return this->apiDryRunSwaggerSuccess_ == nullptr; };
      // apiDryRunSwaggerSuccess Field Functions 
      bool hasApiDryRunSwaggerSuccess() const { return this->apiDryRunSwaggerSuccess_ != nullptr;};
      void deleteApiDryRunSwaggerSuccess() { this->apiDryRunSwaggerSuccess_ = nullptr;};
      inline const vector<Success::ApiDryRunSwaggerSuccess> & getApiDryRunSwaggerSuccess() const { DARABONBA_PTR_GET_CONST(apiDryRunSwaggerSuccess_, vector<Success::ApiDryRunSwaggerSuccess>) };
      inline vector<Success::ApiDryRunSwaggerSuccess> getApiDryRunSwaggerSuccess() { DARABONBA_PTR_GET(apiDryRunSwaggerSuccess_, vector<Success::ApiDryRunSwaggerSuccess>) };
      inline Success& setApiDryRunSwaggerSuccess(const vector<Success::ApiDryRunSwaggerSuccess> & apiDryRunSwaggerSuccess) { DARABONBA_PTR_SET_VALUE(apiDryRunSwaggerSuccess_, apiDryRunSwaggerSuccess) };
      inline Success& setApiDryRunSwaggerSuccess(vector<Success::ApiDryRunSwaggerSuccess> && apiDryRunSwaggerSuccess) { DARABONBA_PTR_SET_RVALUE(apiDryRunSwaggerSuccess_, apiDryRunSwaggerSuccess) };


    protected:
      shared_ptr<vector<Success::ApiDryRunSwaggerSuccess>> apiDryRunSwaggerSuccess_ {};
    };

    class ModelSuccess : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelSuccess& obj) { 
        DARABONBA_PTR_TO_JSON(ApiImportModelSuccess, apiImportModelSuccess_);
      };
      friend void from_json(const Darabonba::Json& j, ModelSuccess& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiImportModelSuccess, apiImportModelSuccess_);
      };
      ModelSuccess() = default ;
      ModelSuccess(const ModelSuccess &) = default ;
      ModelSuccess(ModelSuccess &&) = default ;
      ModelSuccess(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelSuccess() = default ;
      ModelSuccess& operator=(const ModelSuccess &) = default ;
      ModelSuccess& operator=(ModelSuccess &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiImportModelSuccess : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiImportModelSuccess& obj) { 
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(ModelName, modelName_);
          DARABONBA_PTR_TO_JSON(ModelOperation, modelOperation_);
          DARABONBA_PTR_TO_JSON(ModelUid, modelUid_);
        };
        friend void from_json(const Darabonba::Json& j, ApiImportModelSuccess& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
          DARABONBA_PTR_FROM_JSON(ModelOperation, modelOperation_);
          DARABONBA_PTR_FROM_JSON(ModelUid, modelUid_);
        };
        ApiImportModelSuccess() = default ;
        ApiImportModelSuccess(const ApiImportModelSuccess &) = default ;
        ApiImportModelSuccess(ApiImportModelSuccess &&) = default ;
        ApiImportModelSuccess(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiImportModelSuccess() = default ;
        ApiImportModelSuccess& operator=(const ApiImportModelSuccess &) = default ;
        ApiImportModelSuccess& operator=(ApiImportModelSuccess &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupId_ == nullptr
        && this->modelName_ == nullptr && this->modelOperation_ == nullptr && this->modelUid_ == nullptr; };
        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ApiImportModelSuccess& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline ApiImportModelSuccess& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


        // modelOperation Field Functions 
        bool hasModelOperation() const { return this->modelOperation_ != nullptr;};
        void deleteModelOperation() { this->modelOperation_ = nullptr;};
        inline string getModelOperation() const { DARABONBA_PTR_GET_DEFAULT(modelOperation_, "") };
        inline ApiImportModelSuccess& setModelOperation(string modelOperation) { DARABONBA_PTR_SET_VALUE(modelOperation_, modelOperation) };


        // modelUid Field Functions 
        bool hasModelUid() const { return this->modelUid_ != nullptr;};
        void deleteModelUid() { this->modelUid_ = nullptr;};
        inline string getModelUid() const { DARABONBA_PTR_GET_DEFAULT(modelUid_, "") };
        inline ApiImportModelSuccess& setModelUid(string modelUid) { DARABONBA_PTR_SET_VALUE(modelUid_, modelUid) };


      protected:
        // The ID of the API group.
        shared_ptr<string> groupId_ {};
        // The name of the model.
        shared_ptr<string> modelName_ {};
        // The model operation.
        shared_ptr<string> modelOperation_ {};
        // The UID of the model.
        shared_ptr<string> modelUid_ {};
      };

      virtual bool empty() const override { return this->apiImportModelSuccess_ == nullptr; };
      // apiImportModelSuccess Field Functions 
      bool hasApiImportModelSuccess() const { return this->apiImportModelSuccess_ != nullptr;};
      void deleteApiImportModelSuccess() { this->apiImportModelSuccess_ = nullptr;};
      inline const vector<ModelSuccess::ApiImportModelSuccess> & getApiImportModelSuccess() const { DARABONBA_PTR_GET_CONST(apiImportModelSuccess_, vector<ModelSuccess::ApiImportModelSuccess>) };
      inline vector<ModelSuccess::ApiImportModelSuccess> getApiImportModelSuccess() { DARABONBA_PTR_GET(apiImportModelSuccess_, vector<ModelSuccess::ApiImportModelSuccess>) };
      inline ModelSuccess& setApiImportModelSuccess(const vector<ModelSuccess::ApiImportModelSuccess> & apiImportModelSuccess) { DARABONBA_PTR_SET_VALUE(apiImportModelSuccess_, apiImportModelSuccess) };
      inline ModelSuccess& setApiImportModelSuccess(vector<ModelSuccess::ApiImportModelSuccess> && apiImportModelSuccess) { DARABONBA_PTR_SET_RVALUE(apiImportModelSuccess_, apiImportModelSuccess) };


    protected:
      shared_ptr<vector<ModelSuccess::ApiImportModelSuccess>> apiImportModelSuccess_ {};
    };

    class ModelFailed : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelFailed& obj) { 
        DARABONBA_PTR_TO_JSON(ApiImportModelFailed, apiImportModelFailed_);
      };
      friend void from_json(const Darabonba::Json& j, ModelFailed& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiImportModelFailed, apiImportModelFailed_);
      };
      ModelFailed() = default ;
      ModelFailed(const ModelFailed &) = default ;
      ModelFailed(ModelFailed &&) = default ;
      ModelFailed(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelFailed() = default ;
      ModelFailed& operator=(const ModelFailed &) = default ;
      ModelFailed& operator=(ModelFailed &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiImportModelFailed : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiImportModelFailed& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        };
        friend void from_json(const Darabonba::Json& j, ApiImportModelFailed& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
        };
        ApiImportModelFailed() = default ;
        ApiImportModelFailed(const ApiImportModelFailed &) = default ;
        ApiImportModelFailed(ApiImportModelFailed &&) = default ;
        ApiImportModelFailed(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiImportModelFailed() = default ;
        ApiImportModelFailed& operator=(const ApiImportModelFailed &) = default ;
        ApiImportModelFailed& operator=(ApiImportModelFailed &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMsg_ == nullptr
        && this->groupId_ == nullptr && this->modelName_ == nullptr; };
        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline ApiImportModelFailed& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ApiImportModelFailed& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline ApiImportModelFailed& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      protected:
        // The error message.
        shared_ptr<string> errorMsg_ {};
        // The ID of the API group.
        shared_ptr<string> groupId_ {};
        // The name of the model.
        shared_ptr<string> modelName_ {};
      };

      virtual bool empty() const override { return this->apiImportModelFailed_ == nullptr; };
      // apiImportModelFailed Field Functions 
      bool hasApiImportModelFailed() const { return this->apiImportModelFailed_ != nullptr;};
      void deleteApiImportModelFailed() { this->apiImportModelFailed_ = nullptr;};
      inline const vector<ModelFailed::ApiImportModelFailed> & getApiImportModelFailed() const { DARABONBA_PTR_GET_CONST(apiImportModelFailed_, vector<ModelFailed::ApiImportModelFailed>) };
      inline vector<ModelFailed::ApiImportModelFailed> getApiImportModelFailed() { DARABONBA_PTR_GET(apiImportModelFailed_, vector<ModelFailed::ApiImportModelFailed>) };
      inline ModelFailed& setApiImportModelFailed(const vector<ModelFailed::ApiImportModelFailed> & apiImportModelFailed) { DARABONBA_PTR_SET_VALUE(apiImportModelFailed_, apiImportModelFailed) };
      inline ModelFailed& setApiImportModelFailed(vector<ModelFailed::ApiImportModelFailed> && apiImportModelFailed) { DARABONBA_PTR_SET_RVALUE(apiImportModelFailed_, apiImportModelFailed) };


    protected:
      shared_ptr<vector<ModelFailed::ApiImportModelFailed>> apiImportModelFailed_ {};
    };

    class Failed : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Failed& obj) { 
        DARABONBA_PTR_TO_JSON(ApiImportSwaggerFailed, apiImportSwaggerFailed_);
      };
      friend void from_json(const Darabonba::Json& j, Failed& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiImportSwaggerFailed, apiImportSwaggerFailed_);
      };
      Failed() = default ;
      Failed(const Failed &) = default ;
      Failed(Failed &&) = default ;
      Failed(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Failed() = default ;
      Failed& operator=(const Failed &) = default ;
      Failed& operator=(Failed &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiImportSwaggerFailed : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiImportSwaggerFailed& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
          DARABONBA_PTR_TO_JSON(Path, path_);
        };
        friend void from_json(const Darabonba::Json& j, ApiImportSwaggerFailed& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
        };
        ApiImportSwaggerFailed() = default ;
        ApiImportSwaggerFailed(const ApiImportSwaggerFailed &) = default ;
        ApiImportSwaggerFailed(ApiImportSwaggerFailed &&) = default ;
        ApiImportSwaggerFailed(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiImportSwaggerFailed() = default ;
        ApiImportSwaggerFailed& operator=(const ApiImportSwaggerFailed &) = default ;
        ApiImportSwaggerFailed& operator=(ApiImportSwaggerFailed &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorMsg_ == nullptr
        && this->httpMethod_ == nullptr && this->path_ == nullptr; };
        // errorMsg Field Functions 
        bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
        void deleteErrorMsg() { this->errorMsg_ = nullptr;};
        inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
        inline ApiImportSwaggerFailed& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // httpMethod Field Functions 
        bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
        void deleteHttpMethod() { this->httpMethod_ = nullptr;};
        inline string getHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
        inline ApiImportSwaggerFailed& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline ApiImportSwaggerFailed& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      protected:
        // The error message returned when the API is created.
        shared_ptr<string> errorMsg_ {};
        // The HTTP method configured when the API is created.
        shared_ptr<string> httpMethod_ {};
        // The request path configured when the API is created.
        shared_ptr<string> path_ {};
      };

      virtual bool empty() const override { return this->apiImportSwaggerFailed_ == nullptr; };
      // apiImportSwaggerFailed Field Functions 
      bool hasApiImportSwaggerFailed() const { return this->apiImportSwaggerFailed_ != nullptr;};
      void deleteApiImportSwaggerFailed() { this->apiImportSwaggerFailed_ = nullptr;};
      inline const vector<Failed::ApiImportSwaggerFailed> & getApiImportSwaggerFailed() const { DARABONBA_PTR_GET_CONST(apiImportSwaggerFailed_, vector<Failed::ApiImportSwaggerFailed>) };
      inline vector<Failed::ApiImportSwaggerFailed> getApiImportSwaggerFailed() { DARABONBA_PTR_GET(apiImportSwaggerFailed_, vector<Failed::ApiImportSwaggerFailed>) };
      inline Failed& setApiImportSwaggerFailed(const vector<Failed::ApiImportSwaggerFailed> & apiImportSwaggerFailed) { DARABONBA_PTR_SET_VALUE(apiImportSwaggerFailed_, apiImportSwaggerFailed) };
      inline Failed& setApiImportSwaggerFailed(vector<Failed::ApiImportSwaggerFailed> && apiImportSwaggerFailed) { DARABONBA_PTR_SET_RVALUE(apiImportSwaggerFailed_, apiImportSwaggerFailed) };


    protected:
      shared_ptr<vector<Failed::ApiImportSwaggerFailed>> apiImportSwaggerFailed_ {};
    };

    virtual bool empty() const override { return this->failed_ == nullptr
        && this->globalCondition_ == nullptr && this->modelFailed_ == nullptr && this->modelSuccess_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline const DryRunSwaggerResponseBody::Failed & getFailed() const { DARABONBA_PTR_GET_CONST(failed_, DryRunSwaggerResponseBody::Failed) };
    inline DryRunSwaggerResponseBody::Failed getFailed() { DARABONBA_PTR_GET(failed_, DryRunSwaggerResponseBody::Failed) };
    inline DryRunSwaggerResponseBody& setFailed(const DryRunSwaggerResponseBody::Failed & failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };
    inline DryRunSwaggerResponseBody& setFailed(DryRunSwaggerResponseBody::Failed && failed) { DARABONBA_PTR_SET_RVALUE(failed_, failed) };


    // globalCondition Field Functions 
    bool hasGlobalCondition() const { return this->globalCondition_ != nullptr;};
    void deleteGlobalCondition() { this->globalCondition_ = nullptr;};
    inline string getGlobalCondition() const { DARABONBA_PTR_GET_DEFAULT(globalCondition_, "") };
    inline DryRunSwaggerResponseBody& setGlobalCondition(string globalCondition) { DARABONBA_PTR_SET_VALUE(globalCondition_, globalCondition) };


    // modelFailed Field Functions 
    bool hasModelFailed() const { return this->modelFailed_ != nullptr;};
    void deleteModelFailed() { this->modelFailed_ = nullptr;};
    inline const DryRunSwaggerResponseBody::ModelFailed & getModelFailed() const { DARABONBA_PTR_GET_CONST(modelFailed_, DryRunSwaggerResponseBody::ModelFailed) };
    inline DryRunSwaggerResponseBody::ModelFailed getModelFailed() { DARABONBA_PTR_GET(modelFailed_, DryRunSwaggerResponseBody::ModelFailed) };
    inline DryRunSwaggerResponseBody& setModelFailed(const DryRunSwaggerResponseBody::ModelFailed & modelFailed) { DARABONBA_PTR_SET_VALUE(modelFailed_, modelFailed) };
    inline DryRunSwaggerResponseBody& setModelFailed(DryRunSwaggerResponseBody::ModelFailed && modelFailed) { DARABONBA_PTR_SET_RVALUE(modelFailed_, modelFailed) };


    // modelSuccess Field Functions 
    bool hasModelSuccess() const { return this->modelSuccess_ != nullptr;};
    void deleteModelSuccess() { this->modelSuccess_ = nullptr;};
    inline const DryRunSwaggerResponseBody::ModelSuccess & getModelSuccess() const { DARABONBA_PTR_GET_CONST(modelSuccess_, DryRunSwaggerResponseBody::ModelSuccess) };
    inline DryRunSwaggerResponseBody::ModelSuccess getModelSuccess() { DARABONBA_PTR_GET(modelSuccess_, DryRunSwaggerResponseBody::ModelSuccess) };
    inline DryRunSwaggerResponseBody& setModelSuccess(const DryRunSwaggerResponseBody::ModelSuccess & modelSuccess) { DARABONBA_PTR_SET_VALUE(modelSuccess_, modelSuccess) };
    inline DryRunSwaggerResponseBody& setModelSuccess(DryRunSwaggerResponseBody::ModelSuccess && modelSuccess) { DARABONBA_PTR_SET_RVALUE(modelSuccess_, modelSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DryRunSwaggerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline const DryRunSwaggerResponseBody::Success & getSuccess() const { DARABONBA_PTR_GET_CONST(success_, DryRunSwaggerResponseBody::Success) };
    inline DryRunSwaggerResponseBody::Success getSuccess() { DARABONBA_PTR_GET(success_, DryRunSwaggerResponseBody::Success) };
    inline DryRunSwaggerResponseBody& setSuccess(const DryRunSwaggerResponseBody::Success & success) { DARABONBA_PTR_SET_VALUE(success_, success) };
    inline DryRunSwaggerResponseBody& setSuccess(DryRunSwaggerResponseBody::Success && success) { DARABONBA_PTR_SET_RVALUE(success_, success) };


  protected:
    // The APIs that failed to be created based on the Swagger-compliant data imported this time.
    shared_ptr<DryRunSwaggerResponseBody::Failed> failed_ {};
    // The global condition.
    shared_ptr<string> globalCondition_ {};
    // The models that failed to be imported through the Swagger-compliant data this time.
    shared_ptr<DryRunSwaggerResponseBody::ModelFailed> modelFailed_ {};
    // The models that failed to be imported through the Swagger-compliant data this time.
    shared_ptr<DryRunSwaggerResponseBody::ModelSuccess> modelSuccess_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The APIs that are created based on the Swagger-compliant data imported this time.
    shared_ptr<DryRunSwaggerResponseBody::Success> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
