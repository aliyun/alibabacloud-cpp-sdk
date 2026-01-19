// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTOASRESPONSEBODY_HPP_
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
  class ImportOASResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportOASResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessages, errorMessages_);
      DARABONBA_PTR_TO_JSON(FailedApis, failedApis_);
      DARABONBA_PTR_TO_JSON(FailedModels, failedModels_);
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessApis, successApis_);
      DARABONBA_PTR_TO_JSON(SuccessModels, successModels_);
      DARABONBA_PTR_TO_JSON(WarningMessages, warningMessages_);
    };
    friend void from_json(const Darabonba::Json& j, ImportOASResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessages, errorMessages_);
      DARABONBA_PTR_FROM_JSON(FailedApis, failedApis_);
      DARABONBA_PTR_FROM_JSON(FailedModels, failedModels_);
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessApis, successApis_);
      DARABONBA_PTR_FROM_JSON(SuccessModels, successModels_);
      DARABONBA_PTR_FROM_JSON(WarningMessages, warningMessages_);
    };
    ImportOASResponseBody() = default ;
    ImportOASResponseBody(const ImportOASResponseBody &) = default ;
    ImportOASResponseBody(ImportOASResponseBody &&) = default ;
    ImportOASResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportOASResponseBody() = default ;
    ImportOASResponseBody& operator=(const ImportOASResponseBody &) = default ;
    ImportOASResponseBody& operator=(ImportOASResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WarningMessages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WarningMessages& obj) { 
        DARABONBA_PTR_TO_JSON(WarningMessage, warningMessage_);
      };
      friend void from_json(const Darabonba::Json& j, WarningMessages& obj) { 
        DARABONBA_PTR_FROM_JSON(WarningMessage, warningMessage_);
      };
      WarningMessages() = default ;
      WarningMessages(const WarningMessages &) = default ;
      WarningMessages(WarningMessages &&) = default ;
      WarningMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WarningMessages() = default ;
      WarningMessages& operator=(const WarningMessages &) = default ;
      WarningMessages& operator=(WarningMessages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->warningMessage_ == nullptr; };
      // warningMessage Field Functions 
      bool hasWarningMessage() const { return this->warningMessage_ != nullptr;};
      void deleteWarningMessage() { this->warningMessage_ = nullptr;};
      inline const vector<string> & getWarningMessage() const { DARABONBA_PTR_GET_CONST(warningMessage_, vector<string>) };
      inline vector<string> getWarningMessage() { DARABONBA_PTR_GET(warningMessage_, vector<string>) };
      inline WarningMessages& setWarningMessage(const vector<string> & warningMessage) { DARABONBA_PTR_SET_VALUE(warningMessage_, warningMessage) };
      inline WarningMessages& setWarningMessage(vector<string> && warningMessage) { DARABONBA_PTR_SET_RVALUE(warningMessage_, warningMessage) };


    protected:
      shared_ptr<vector<string>> warningMessage_ {};
    };

    class SuccessModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuccessModels& obj) { 
        DARABONBA_PTR_TO_JSON(SuccessModel, successModel_);
      };
      friend void from_json(const Darabonba::Json& j, SuccessModels& obj) { 
        DARABONBA_PTR_FROM_JSON(SuccessModel, successModel_);
      };
      SuccessModels() = default ;
      SuccessModels(const SuccessModels &) = default ;
      SuccessModels(SuccessModels &&) = default ;
      SuccessModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SuccessModels() = default ;
      SuccessModels& operator=(const SuccessModels &) = default ;
      SuccessModels& operator=(SuccessModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SuccessModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SuccessModel& obj) { 
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(ModelName, modelName_);
          DARABONBA_PTR_TO_JSON(ModelOperation, modelOperation_);
          DARABONBA_PTR_TO_JSON(ModelUid, modelUid_);
        };
        friend void from_json(const Darabonba::Json& j, SuccessModel& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
          DARABONBA_PTR_FROM_JSON(ModelOperation, modelOperation_);
          DARABONBA_PTR_FROM_JSON(ModelUid, modelUid_);
        };
        SuccessModel() = default ;
        SuccessModel(const SuccessModel &) = default ;
        SuccessModel(SuccessModel &&) = default ;
        SuccessModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SuccessModel() = default ;
        SuccessModel& operator=(const SuccessModel &) = default ;
        SuccessModel& operator=(SuccessModel &&) = default ;
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
        inline SuccessModel& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline SuccessModel& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


        // modelOperation Field Functions 
        bool hasModelOperation() const { return this->modelOperation_ != nullptr;};
        void deleteModelOperation() { this->modelOperation_ = nullptr;};
        inline string getModelOperation() const { DARABONBA_PTR_GET_DEFAULT(modelOperation_, "") };
        inline SuccessModel& setModelOperation(string modelOperation) { DARABONBA_PTR_SET_VALUE(modelOperation_, modelOperation) };


        // modelUid Field Functions 
        bool hasModelUid() const { return this->modelUid_ != nullptr;};
        void deleteModelUid() { this->modelUid_ = nullptr;};
        inline string getModelUid() const { DARABONBA_PTR_GET_DEFAULT(modelUid_, "") };
        inline SuccessModel& setModelUid(string modelUid) { DARABONBA_PTR_SET_VALUE(modelUid_, modelUid) };


      protected:
        // The ID of the API group.
        shared_ptr<string> groupId_ {};
        // The name of the model.
        shared_ptr<string> modelName_ {};
        // The operation of the model. Valid values: CREATE and MODIFY.
        shared_ptr<string> modelOperation_ {};
        // The UID of the model.
        shared_ptr<string> modelUid_ {};
      };

      virtual bool empty() const override { return this->successModel_ == nullptr; };
      // successModel Field Functions 
      bool hasSuccessModel() const { return this->successModel_ != nullptr;};
      void deleteSuccessModel() { this->successModel_ = nullptr;};
      inline const vector<SuccessModels::SuccessModel> & getSuccessModel() const { DARABONBA_PTR_GET_CONST(successModel_, vector<SuccessModels::SuccessModel>) };
      inline vector<SuccessModels::SuccessModel> getSuccessModel() { DARABONBA_PTR_GET(successModel_, vector<SuccessModels::SuccessModel>) };
      inline SuccessModels& setSuccessModel(const vector<SuccessModels::SuccessModel> & successModel) { DARABONBA_PTR_SET_VALUE(successModel_, successModel) };
      inline SuccessModels& setSuccessModel(vector<SuccessModels::SuccessModel> && successModel) { DARABONBA_PTR_SET_RVALUE(successModel_, successModel) };


    protected:
      shared_ptr<vector<SuccessModels::SuccessModel>> successModel_ {};
    };

    class SuccessApis : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuccessApis& obj) { 
        DARABONBA_PTR_TO_JSON(SuccessApi, successApi_);
      };
      friend void from_json(const Darabonba::Json& j, SuccessApis& obj) { 
        DARABONBA_PTR_FROM_JSON(SuccessApi, successApi_);
      };
      SuccessApis() = default ;
      SuccessApis(const SuccessApis &) = default ;
      SuccessApis(SuccessApis &&) = default ;
      SuccessApis(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SuccessApis() = default ;
      SuccessApis& operator=(const SuccessApis &) = default ;
      SuccessApis& operator=(SuccessApis &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SuccessApi : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SuccessApi& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(ApiOperation, apiOperation_);
          DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
          DARABONBA_PTR_TO_JSON(Path, path_);
        };
        friend void from_json(const Darabonba::Json& j, SuccessApi& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(ApiOperation, apiOperation_);
          DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
        };
        SuccessApi() = default ;
        SuccessApi(const SuccessApi &) = default ;
        SuccessApi(SuccessApi &&) = default ;
        SuccessApi(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SuccessApi() = default ;
        SuccessApi& operator=(const SuccessApi &) = default ;
        SuccessApi& operator=(SuccessApi &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->apiOperation_ == nullptr && this->httpMethod_ == nullptr && this->path_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
        inline SuccessApi& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // apiOperation Field Functions 
        bool hasApiOperation() const { return this->apiOperation_ != nullptr;};
        void deleteApiOperation() { this->apiOperation_ = nullptr;};
        inline string getApiOperation() const { DARABONBA_PTR_GET_DEFAULT(apiOperation_, "") };
        inline SuccessApi& setApiOperation(string apiOperation) { DARABONBA_PTR_SET_VALUE(apiOperation_, apiOperation) };


        // httpMethod Field Functions 
        bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
        void deleteHttpMethod() { this->httpMethod_ = nullptr;};
        inline string getHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
        inline SuccessApi& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline SuccessApi& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      protected:
        // The ID of the API.
        shared_ptr<string> apiId_ {};
        // Indicates that the operation is CREATE or MODIFY.
        shared_ptr<string> apiOperation_ {};
        // The HTTP method configured when you created the API.
        shared_ptr<string> httpMethod_ {};
        // The request path configured when you created the API.
        shared_ptr<string> path_ {};
      };

      virtual bool empty() const override { return this->successApi_ == nullptr; };
      // successApi Field Functions 
      bool hasSuccessApi() const { return this->successApi_ != nullptr;};
      void deleteSuccessApi() { this->successApi_ = nullptr;};
      inline const vector<SuccessApis::SuccessApi> & getSuccessApi() const { DARABONBA_PTR_GET_CONST(successApi_, vector<SuccessApis::SuccessApi>) };
      inline vector<SuccessApis::SuccessApi> getSuccessApi() { DARABONBA_PTR_GET(successApi_, vector<SuccessApis::SuccessApi>) };
      inline SuccessApis& setSuccessApi(const vector<SuccessApis::SuccessApi> & successApi) { DARABONBA_PTR_SET_VALUE(successApi_, successApi) };
      inline SuccessApis& setSuccessApi(vector<SuccessApis::SuccessApi> && successApi) { DARABONBA_PTR_SET_RVALUE(successApi_, successApi) };


    protected:
      shared_ptr<vector<SuccessApis::SuccessApi>> successApi_ {};
    };

    class FailedModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedModels& obj) { 
        DARABONBA_PTR_TO_JSON(FailedModel, failedModel_);
      };
      friend void from_json(const Darabonba::Json& j, FailedModels& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedModel, failedModel_);
      };
      FailedModels() = default ;
      FailedModels(const FailedModels &) = default ;
      FailedModels(FailedModels &&) = default ;
      FailedModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedModels() = default ;
      FailedModels& operator=(const FailedModels &) = default ;
      FailedModels& operator=(FailedModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FailedModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailedModel& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(ModelName, modelName_);
        };
        friend void from_json(const Darabonba::Json& j, FailedModel& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
        };
        FailedModel() = default ;
        FailedModel(const FailedModel &) = default ;
        FailedModel(FailedModel &&) = default ;
        FailedModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailedModel() = default ;
        FailedModel& operator=(const FailedModel &) = default ;
        FailedModel& operator=(FailedModel &&) = default ;
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
        inline FailedModel& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline FailedModel& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // modelName Field Functions 
        bool hasModelName() const { return this->modelName_ != nullptr;};
        void deleteModelName() { this->modelName_ = nullptr;};
        inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
        inline FailedModel& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


      protected:
        // The error message.
        shared_ptr<string> errorMsg_ {};
        // The ID of the API group.
        shared_ptr<string> groupId_ {};
        // The name of the model.
        shared_ptr<string> modelName_ {};
      };

      virtual bool empty() const override { return this->failedModel_ == nullptr; };
      // failedModel Field Functions 
      bool hasFailedModel() const { return this->failedModel_ != nullptr;};
      void deleteFailedModel() { this->failedModel_ = nullptr;};
      inline const vector<FailedModels::FailedModel> & getFailedModel() const { DARABONBA_PTR_GET_CONST(failedModel_, vector<FailedModels::FailedModel>) };
      inline vector<FailedModels::FailedModel> getFailedModel() { DARABONBA_PTR_GET(failedModel_, vector<FailedModels::FailedModel>) };
      inline FailedModels& setFailedModel(const vector<FailedModels::FailedModel> & failedModel) { DARABONBA_PTR_SET_VALUE(failedModel_, failedModel) };
      inline FailedModels& setFailedModel(vector<FailedModels::FailedModel> && failedModel) { DARABONBA_PTR_SET_RVALUE(failedModel_, failedModel) };


    protected:
      shared_ptr<vector<FailedModels::FailedModel>> failedModel_ {};
    };

    class FailedApis : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailedApis& obj) { 
        DARABONBA_PTR_TO_JSON(FailedApi, failedApi_);
      };
      friend void from_json(const Darabonba::Json& j, FailedApis& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedApi, failedApi_);
      };
      FailedApis() = default ;
      FailedApis(const FailedApis &) = default ;
      FailedApis(FailedApis &&) = default ;
      FailedApis(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailedApis() = default ;
      FailedApis& operator=(const FailedApis &) = default ;
      FailedApis& operator=(FailedApis &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FailedApi : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FailedApi& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
          DARABONBA_PTR_TO_JSON(Path, path_);
        };
        friend void from_json(const Darabonba::Json& j, FailedApi& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
          DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
          DARABONBA_PTR_FROM_JSON(Path, path_);
        };
        FailedApi() = default ;
        FailedApi(const FailedApi &) = default ;
        FailedApi(FailedApi &&) = default ;
        FailedApi(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FailedApi() = default ;
        FailedApi& operator=(const FailedApi &) = default ;
        FailedApi& operator=(FailedApi &&) = default ;
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
        inline FailedApi& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


        // httpMethod Field Functions 
        bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
        void deleteHttpMethod() { this->httpMethod_ = nullptr;};
        inline string getHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
        inline FailedApi& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline FailedApi& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      protected:
        // The error message.
        shared_ptr<string> errorMsg_ {};
        // The HTTP method configured when you created the API.
        shared_ptr<string> httpMethod_ {};
        // The request path configured when you created the API.
        shared_ptr<string> path_ {};
      };

      virtual bool empty() const override { return this->failedApi_ == nullptr; };
      // failedApi Field Functions 
      bool hasFailedApi() const { return this->failedApi_ != nullptr;};
      void deleteFailedApi() { this->failedApi_ = nullptr;};
      inline const vector<FailedApis::FailedApi> & getFailedApi() const { DARABONBA_PTR_GET_CONST(failedApi_, vector<FailedApis::FailedApi>) };
      inline vector<FailedApis::FailedApi> getFailedApi() { DARABONBA_PTR_GET(failedApi_, vector<FailedApis::FailedApi>) };
      inline FailedApis& setFailedApi(const vector<FailedApis::FailedApi> & failedApi) { DARABONBA_PTR_SET_VALUE(failedApi_, failedApi) };
      inline FailedApis& setFailedApi(vector<FailedApis::FailedApi> && failedApi) { DARABONBA_PTR_SET_RVALUE(failedApi_, failedApi) };


    protected:
      shared_ptr<vector<FailedApis::FailedApi>> failedApi_ {};
    };

    class ErrorMessages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ErrorMessages& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      };
      friend void from_json(const Darabonba::Json& j, ErrorMessages& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      };
      ErrorMessages() = default ;
      ErrorMessages(const ErrorMessages &) = default ;
      ErrorMessages(ErrorMessages &&) = default ;
      ErrorMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ErrorMessages() = default ;
      ErrorMessages& operator=(const ErrorMessages &) = default ;
      ErrorMessages& operator=(ErrorMessages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorMessage_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline const vector<string> & getErrorMessage() const { DARABONBA_PTR_GET_CONST(errorMessage_, vector<string>) };
      inline vector<string> getErrorMessage() { DARABONBA_PTR_GET(errorMessage_, vector<string>) };
      inline ErrorMessages& setErrorMessage(const vector<string> & errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };
      inline ErrorMessages& setErrorMessage(vector<string> && errorMessage) { DARABONBA_PTR_SET_RVALUE(errorMessage_, errorMessage) };


    protected:
      shared_ptr<vector<string>> errorMessage_ {};
    };

    virtual bool empty() const override { return this->errorMessages_ == nullptr
        && this->failedApis_ == nullptr && this->failedModels_ == nullptr && this->operationId_ == nullptr && this->requestId_ == nullptr && this->successApis_ == nullptr
        && this->successModels_ == nullptr && this->warningMessages_ == nullptr; };
    // errorMessages Field Functions 
    bool hasErrorMessages() const { return this->errorMessages_ != nullptr;};
    void deleteErrorMessages() { this->errorMessages_ = nullptr;};
    inline const ImportOASResponseBody::ErrorMessages & getErrorMessages() const { DARABONBA_PTR_GET_CONST(errorMessages_, ImportOASResponseBody::ErrorMessages) };
    inline ImportOASResponseBody::ErrorMessages getErrorMessages() { DARABONBA_PTR_GET(errorMessages_, ImportOASResponseBody::ErrorMessages) };
    inline ImportOASResponseBody& setErrorMessages(const ImportOASResponseBody::ErrorMessages & errorMessages) { DARABONBA_PTR_SET_VALUE(errorMessages_, errorMessages) };
    inline ImportOASResponseBody& setErrorMessages(ImportOASResponseBody::ErrorMessages && errorMessages) { DARABONBA_PTR_SET_RVALUE(errorMessages_, errorMessages) };


    // failedApis Field Functions 
    bool hasFailedApis() const { return this->failedApis_ != nullptr;};
    void deleteFailedApis() { this->failedApis_ = nullptr;};
    inline const ImportOASResponseBody::FailedApis & getFailedApis() const { DARABONBA_PTR_GET_CONST(failedApis_, ImportOASResponseBody::FailedApis) };
    inline ImportOASResponseBody::FailedApis getFailedApis() { DARABONBA_PTR_GET(failedApis_, ImportOASResponseBody::FailedApis) };
    inline ImportOASResponseBody& setFailedApis(const ImportOASResponseBody::FailedApis & failedApis) { DARABONBA_PTR_SET_VALUE(failedApis_, failedApis) };
    inline ImportOASResponseBody& setFailedApis(ImportOASResponseBody::FailedApis && failedApis) { DARABONBA_PTR_SET_RVALUE(failedApis_, failedApis) };


    // failedModels Field Functions 
    bool hasFailedModels() const { return this->failedModels_ != nullptr;};
    void deleteFailedModels() { this->failedModels_ = nullptr;};
    inline const ImportOASResponseBody::FailedModels & getFailedModels() const { DARABONBA_PTR_GET_CONST(failedModels_, ImportOASResponseBody::FailedModels) };
    inline ImportOASResponseBody::FailedModels getFailedModels() { DARABONBA_PTR_GET(failedModels_, ImportOASResponseBody::FailedModels) };
    inline ImportOASResponseBody& setFailedModels(const ImportOASResponseBody::FailedModels & failedModels) { DARABONBA_PTR_SET_VALUE(failedModels_, failedModels) };
    inline ImportOASResponseBody& setFailedModels(ImportOASResponseBody::FailedModels && failedModels) { DARABONBA_PTR_SET_RVALUE(failedModels_, failedModels) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline ImportOASResponseBody& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportOASResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successApis Field Functions 
    bool hasSuccessApis() const { return this->successApis_ != nullptr;};
    void deleteSuccessApis() { this->successApis_ = nullptr;};
    inline const ImportOASResponseBody::SuccessApis & getSuccessApis() const { DARABONBA_PTR_GET_CONST(successApis_, ImportOASResponseBody::SuccessApis) };
    inline ImportOASResponseBody::SuccessApis getSuccessApis() { DARABONBA_PTR_GET(successApis_, ImportOASResponseBody::SuccessApis) };
    inline ImportOASResponseBody& setSuccessApis(const ImportOASResponseBody::SuccessApis & successApis) { DARABONBA_PTR_SET_VALUE(successApis_, successApis) };
    inline ImportOASResponseBody& setSuccessApis(ImportOASResponseBody::SuccessApis && successApis) { DARABONBA_PTR_SET_RVALUE(successApis_, successApis) };


    // successModels Field Functions 
    bool hasSuccessModels() const { return this->successModels_ != nullptr;};
    void deleteSuccessModels() { this->successModels_ = nullptr;};
    inline const ImportOASResponseBody::SuccessModels & getSuccessModels() const { DARABONBA_PTR_GET_CONST(successModels_, ImportOASResponseBody::SuccessModels) };
    inline ImportOASResponseBody::SuccessModels getSuccessModels() { DARABONBA_PTR_GET(successModels_, ImportOASResponseBody::SuccessModels) };
    inline ImportOASResponseBody& setSuccessModels(const ImportOASResponseBody::SuccessModels & successModels) { DARABONBA_PTR_SET_VALUE(successModels_, successModels) };
    inline ImportOASResponseBody& setSuccessModels(ImportOASResponseBody::SuccessModels && successModels) { DARABONBA_PTR_SET_RVALUE(successModels_, successModels) };


    // warningMessages Field Functions 
    bool hasWarningMessages() const { return this->warningMessages_ != nullptr;};
    void deleteWarningMessages() { this->warningMessages_ = nullptr;};
    inline const ImportOASResponseBody::WarningMessages & getWarningMessages() const { DARABONBA_PTR_GET_CONST(warningMessages_, ImportOASResponseBody::WarningMessages) };
    inline ImportOASResponseBody::WarningMessages getWarningMessages() { DARABONBA_PTR_GET(warningMessages_, ImportOASResponseBody::WarningMessages) };
    inline ImportOASResponseBody& setWarningMessages(const ImportOASResponseBody::WarningMessages & warningMessages) { DARABONBA_PTR_SET_VALUE(warningMessages_, warningMessages) };
    inline ImportOASResponseBody& setWarningMessages(ImportOASResponseBody::WarningMessages && warningMessages) { DARABONBA_PTR_SET_RVALUE(warningMessages_, warningMessages) };


  protected:
    // The error messages that appear due to the invalid data in the imported file.
    shared_ptr<ImportOASResponseBody::ErrorMessages> errorMessages_ {};
    // The APIs that failed to pass the precheck.
    shared_ptr<ImportOASResponseBody::FailedApis> failedApis_ {};
    // The information about the models that failed to pass the precheck.
    shared_ptr<ImportOASResponseBody::FailedModels> failedModels_ {};
    // The ID of the asynchronous API import task that was generated during the import operation. This ID is used to query the execution status of the API import task.
    shared_ptr<string> operationId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the APIs that have passed the precheck.
    shared_ptr<ImportOASResponseBody::SuccessApis> successApis_ {};
    // The information about the models that have passed the precheck.
    shared_ptr<ImportOASResponseBody::SuccessModels> successModels_ {};
    // The warning messages that appear due to the invalid data in the imported file.
    shared_ptr<ImportOASResponseBody::WarningMessages> warningMessages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
