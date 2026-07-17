// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNCTIONCURRENTVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFUNCTIONCURRENTVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class GetFunctionCurrentVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFunctionCurrentVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Latency, latency_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetFunctionCurrentVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Latency, latency_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetFunctionCurrentVersionResponseBody() = default ;
    GetFunctionCurrentVersionResponseBody(const GetFunctionCurrentVersionResponseBody &) = default ;
    GetFunctionCurrentVersionResponseBody(GetFunctionCurrentVersionResponseBody &&) = default ;
    GetFunctionCurrentVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFunctionCurrentVersionResponseBody() = default ;
    GetFunctionCurrentVersionResponseBody& operator=(const GetFunctionCurrentVersionResponseBody &) = default ;
    GetFunctionCurrentVersionResponseBody& operator=(GetFunctionCurrentVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
        DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
        DARABONBA_PTR_TO_JSON(ModelType, modelType_);
        DARABONBA_PTR_TO_JSON(VersionConfig, versionConfig_);
        DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        DARABONBA_PTR_TO_JSON(VersionName, versionName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
        DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
        DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
        DARABONBA_PTR_FROM_JSON(VersionConfig, versionConfig_);
        DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VersionConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VersionConfig& obj) { 
          DARABONBA_PTR_TO_JSON(CreateParameters, createParameters_);
          DARABONBA_PTR_TO_JSON(Depends, depends_);
          DARABONBA_PTR_TO_JSON(UsageParameters, usageParameters_);
        };
        friend void from_json(const Darabonba::Json& j, VersionConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateParameters, createParameters_);
          DARABONBA_PTR_FROM_JSON(Depends, depends_);
          DARABONBA_PTR_FROM_JSON(UsageParameters, usageParameters_);
        };
        VersionConfig() = default ;
        VersionConfig(const VersionConfig &) = default ;
        VersionConfig(VersionConfig &&) = default ;
        VersionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VersionConfig() = default ;
        VersionConfig& operator=(const VersionConfig &) = default ;
        VersionConfig& operator=(VersionConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UsageParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UsageParameters& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Required, required_);
          };
          friend void from_json(const Darabonba::Json& j, UsageParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Required, required_);
          };
          UsageParameters() = default ;
          UsageParameters(const UsageParameters &) = default ;
          UsageParameters(UsageParameters &&) = default ;
          UsageParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UsageParameters() = default ;
          UsageParameters& operator=(const UsageParameters &) = default ;
          UsageParameters& operator=(UsageParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->required_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline UsageParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // required Field Functions 
          bool hasRequired() const { return this->required_ != nullptr;};
          void deleteRequired() { this->required_ = nullptr;};
          inline string getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, "") };
          inline UsageParameters& setRequired(string required) { DARABONBA_PTR_SET_VALUE(required_, required) };


        protected:
          // The name of the parameter.
          shared_ptr<string> name_ {};
          // Specifies whether the parameter is required.
          shared_ptr<string> required_ {};
        };

        class Depends : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Depends& obj) { 
            DARABONBA_PTR_TO_JSON(Condition, condition_);
            DARABONBA_PTR_TO_JSON(Dependency, dependency_);
            DARABONBA_PTR_TO_JSON(Description, description_);
          };
          friend void from_json(const Darabonba::Json& j, Depends& obj) { 
            DARABONBA_PTR_FROM_JSON(Condition, condition_);
            DARABONBA_PTR_FROM_JSON(Dependency, dependency_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
          };
          Depends() = default ;
          Depends(const Depends &) = default ;
          Depends(Depends &&) = default ;
          Depends(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Depends() = default ;
          Depends& operator=(const Depends &) = default ;
          Depends& operator=(Depends &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->condition_ == nullptr
        && this->dependency_ == nullptr && this->description_ == nullptr; };
          // condition Field Functions 
          bool hasCondition() const { return this->condition_ != nullptr;};
          void deleteCondition() { this->condition_ = nullptr;};
          inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
          inline Depends& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


          // dependency Field Functions 
          bool hasDependency() const { return this->dependency_ != nullptr;};
          void deleteDependency() { this->dependency_ = nullptr;};
          inline string getDependency() const { DARABONBA_PTR_GET_DEFAULT(dependency_, "") };
          inline Depends& setDependency(string dependency) { DARABONBA_PTR_SET_VALUE(dependency_, dependency) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Depends& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        protected:
          // The condition.
          shared_ptr<string> condition_ {};
          // The dependency.
          shared_ptr<string> dependency_ {};
          // The description.
          shared_ptr<string> description_ {};
        };

        class CreateParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CreateParameters& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Required, required_);
          };
          friend void from_json(const Darabonba::Json& j, CreateParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Required, required_);
          };
          CreateParameters() = default ;
          CreateParameters(const CreateParameters &) = default ;
          CreateParameters(CreateParameters &&) = default ;
          CreateParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CreateParameters() = default ;
          CreateParameters& operator=(const CreateParameters &) = default ;
          CreateParameters& operator=(CreateParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->required_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline CreateParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // required Field Functions 
          bool hasRequired() const { return this->required_ != nullptr;};
          void deleteRequired() { this->required_ = nullptr;};
          inline string getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, "") };
          inline CreateParameters& setRequired(string required) { DARABONBA_PTR_SET_VALUE(required_, required) };


        protected:
          // The name of the parameter.
          shared_ptr<string> name_ {};
          // Specifies whether the parameter is required.
          shared_ptr<string> required_ {};
        };

        virtual bool empty() const override { return this->createParameters_ == nullptr
        && this->depends_ == nullptr && this->usageParameters_ == nullptr; };
        // createParameters Field Functions 
        bool hasCreateParameters() const { return this->createParameters_ != nullptr;};
        void deleteCreateParameters() { this->createParameters_ = nullptr;};
        inline const vector<VersionConfig::CreateParameters> & getCreateParameters() const { DARABONBA_PTR_GET_CONST(createParameters_, vector<VersionConfig::CreateParameters>) };
        inline vector<VersionConfig::CreateParameters> getCreateParameters() { DARABONBA_PTR_GET(createParameters_, vector<VersionConfig::CreateParameters>) };
        inline VersionConfig& setCreateParameters(const vector<VersionConfig::CreateParameters> & createParameters) { DARABONBA_PTR_SET_VALUE(createParameters_, createParameters) };
        inline VersionConfig& setCreateParameters(vector<VersionConfig::CreateParameters> && createParameters) { DARABONBA_PTR_SET_RVALUE(createParameters_, createParameters) };


        // depends Field Functions 
        bool hasDepends() const { return this->depends_ != nullptr;};
        void deleteDepends() { this->depends_ = nullptr;};
        inline const vector<VersionConfig::Depends> & getDepends() const { DARABONBA_PTR_GET_CONST(depends_, vector<VersionConfig::Depends>) };
        inline vector<VersionConfig::Depends> getDepends() { DARABONBA_PTR_GET(depends_, vector<VersionConfig::Depends>) };
        inline VersionConfig& setDepends(const vector<VersionConfig::Depends> & depends) { DARABONBA_PTR_SET_VALUE(depends_, depends) };
        inline VersionConfig& setDepends(vector<VersionConfig::Depends> && depends) { DARABONBA_PTR_SET_RVALUE(depends_, depends) };


        // usageParameters Field Functions 
        bool hasUsageParameters() const { return this->usageParameters_ != nullptr;};
        void deleteUsageParameters() { this->usageParameters_ = nullptr;};
        inline const vector<VersionConfig::UsageParameters> & getUsageParameters() const { DARABONBA_PTR_GET_CONST(usageParameters_, vector<VersionConfig::UsageParameters>) };
        inline vector<VersionConfig::UsageParameters> getUsageParameters() { DARABONBA_PTR_GET(usageParameters_, vector<VersionConfig::UsageParameters>) };
        inline VersionConfig& setUsageParameters(const vector<VersionConfig::UsageParameters> & usageParameters) { DARABONBA_PTR_SET_VALUE(usageParameters_, usageParameters) };
        inline VersionConfig& setUsageParameters(vector<VersionConfig::UsageParameters> && usageParameters) { DARABONBA_PTR_SET_RVALUE(usageParameters_, usageParameters) };


      protected:
        // The parameters used to create an instance.
        shared_ptr<vector<VersionConfig::CreateParameters>> createParameters_ {};
        // A list of instance dependencies.
        shared_ptr<vector<VersionConfig::Depends>> depends_ {};
        // The parameters for using the instance online.
        shared_ptr<vector<VersionConfig::UsageParameters>> usageParameters_ {};
      };

      virtual bool empty() const override { return this->functionName_ == nullptr
        && this->functionType_ == nullptr && this->modelType_ == nullptr && this->versionConfig_ == nullptr && this->versionId_ == nullptr && this->versionName_ == nullptr; };
      // functionName Field Functions 
      bool hasFunctionName() const { return this->functionName_ != nullptr;};
      void deleteFunctionName() { this->functionName_ = nullptr;};
      inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
      inline Result& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


      // functionType Field Functions 
      bool hasFunctionType() const { return this->functionType_ != nullptr;};
      void deleteFunctionType() { this->functionType_ = nullptr;};
      inline string getFunctionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
      inline Result& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


      // modelType Field Functions 
      bool hasModelType() const { return this->modelType_ != nullptr;};
      void deleteModelType() { this->modelType_ = nullptr;};
      inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
      inline Result& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


      // versionConfig Field Functions 
      bool hasVersionConfig() const { return this->versionConfig_ != nullptr;};
      void deleteVersionConfig() { this->versionConfig_ = nullptr;};
      inline const Result::VersionConfig & getVersionConfig() const { DARABONBA_PTR_GET_CONST(versionConfig_, Result::VersionConfig) };
      inline Result::VersionConfig getVersionConfig() { DARABONBA_PTR_GET(versionConfig_, Result::VersionConfig) };
      inline Result& setVersionConfig(const Result::VersionConfig & versionConfig) { DARABONBA_PTR_SET_VALUE(versionConfig_, versionConfig) };
      inline Result& setVersionConfig(Result::VersionConfig && versionConfig) { DARABONBA_PTR_SET_RVALUE(versionConfig_, versionConfig) };


      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline int64_t getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0L) };
      inline Result& setVersionId(int64_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline Result& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    protected:
      // The name of the feature.
      shared_ptr<string> functionName_ {};
      // The type of the feature. Valid values:
      // 
      // - PAAS
      // 
      // - SAAS
      shared_ptr<string> functionType_ {};
      // The model type.
      shared_ptr<string> modelType_ {};
      // The configuration.
      shared_ptr<Result::VersionConfig> versionConfig_ {};
      // The version ID.
      shared_ptr<int64_t> versionId_ {};
      // The version name.
      shared_ptr<string> versionName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpCode_ == nullptr && this->latency_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr
        && this->status_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetFunctionCurrentVersionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int64_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0L) };
    inline GetFunctionCurrentVersionResponseBody& setHttpCode(int64_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // latency Field Functions 
    bool hasLatency() const { return this->latency_ != nullptr;};
    void deleteLatency() { this->latency_ = nullptr;};
    inline int64_t getLatency() const { DARABONBA_PTR_GET_DEFAULT(latency_, 0L) };
    inline GetFunctionCurrentVersionResponseBody& setLatency(int64_t latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetFunctionCurrentVersionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFunctionCurrentVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetFunctionCurrentVersionResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetFunctionCurrentVersionResponseBody::Result) };
    inline GetFunctionCurrentVersionResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetFunctionCurrentVersionResponseBody::Result) };
    inline GetFunctionCurrentVersionResponseBody& setResult(const GetFunctionCurrentVersionResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetFunctionCurrentVersionResponseBody& setResult(GetFunctionCurrentVersionResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetFunctionCurrentVersionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int64_t> httpCode_ {};
    // The request latency in milliseconds (ms).
    shared_ptr<int64_t> latency_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<GetFunctionCurrentVersionResponseBody::Result> result_ {};
    // The status of the request.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
