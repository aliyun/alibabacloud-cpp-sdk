// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGICALMODELDEPLOYMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGICALMODELDEPLOYMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetLogicalModelDeploymentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogicalModelDeploymentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogicalModelDeploymentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetLogicalModelDeploymentResponseBody() = default ;
    GetLogicalModelDeploymentResponseBody(const GetLogicalModelDeploymentResponseBody &) = default ;
    GetLogicalModelDeploymentResponseBody(GetLogicalModelDeploymentResponseBody &&) = default ;
    GetLogicalModelDeploymentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogicalModelDeploymentResponseBody() = default ;
    GetLogicalModelDeploymentResponseBody& operator=(const GetLogicalModelDeploymentResponseBody &) = default ;
    GetLogicalModelDeploymentResponseBody& operator=(GetLogicalModelDeploymentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(logicalModelId, logicalModelId_);
        DARABONBA_PTR_TO_JSON(operationId, operationId_);
        DARABONBA_PTR_TO_JSON(revision, revision_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(targets, targets_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(logicalModelId, logicalModelId_);
        DARABONBA_PTR_FROM_JSON(operationId, operationId_);
        DARABONBA_PTR_FROM_JSON(revision, revision_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(targets, targets_);
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
      class Targets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Targets& obj) { 
          DARABONBA_PTR_TO_JSON(configRevision, configRevision_);
          DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
          DARABONBA_PTR_TO_JSON(error, error_);
          DARABONBA_PTR_TO_JSON(httpApiId, httpApiId_);
          DARABONBA_ANY_TO_JSON(stages, stages_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Targets& obj) { 
          DARABONBA_PTR_FROM_JSON(configRevision, configRevision_);
          DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
          DARABONBA_PTR_FROM_JSON(error, error_);
          DARABONBA_PTR_FROM_JSON(httpApiId, httpApiId_);
          DARABONBA_ANY_FROM_JSON(stages, stages_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        Targets() = default ;
        Targets(const Targets &) = default ;
        Targets(Targets &&) = default ;
        Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Targets() = default ;
        Targets& operator=(const Targets &) = default ;
        Targets& operator=(Targets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configRevision_ == nullptr
        && this->environmentId_ == nullptr && this->error_ == nullptr && this->httpApiId_ == nullptr && this->stages_ == nullptr && this->status_ == nullptr; };
        // configRevision Field Functions 
        bool hasConfigRevision() const { return this->configRevision_ != nullptr;};
        void deleteConfigRevision() { this->configRevision_ = nullptr;};
        inline string getConfigRevision() const { DARABONBA_PTR_GET_DEFAULT(configRevision_, "") };
        inline Targets& setConfigRevision(string configRevision) { DARABONBA_PTR_SET_VALUE(configRevision_, configRevision) };


        // environmentId Field Functions 
        bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
        void deleteEnvironmentId() { this->environmentId_ = nullptr;};
        inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
        inline Targets& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


        // error Field Functions 
        bool hasError() const { return this->error_ != nullptr;};
        void deleteError() { this->error_ = nullptr;};
        inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
        inline Targets& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


        // httpApiId Field Functions 
        bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
        void deleteHttpApiId() { this->httpApiId_ = nullptr;};
        inline string getHttpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
        inline Targets& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


        // stages Field Functions 
        bool hasStages() const { return this->stages_ != nullptr;};
        void deleteStages() { this->stages_ = nullptr;};
        inline         const Darabonba::Json & getStages() const { DARABONBA_GET(stages_) };
        Darabonba::Json & getStages() { DARABONBA_GET(stages_) };
        inline Targets& setStages(const Darabonba::Json & stages) { DARABONBA_SET_VALUE(stages_, stages) };
        inline Targets& setStages(Darabonba::Json && stages) { DARABONBA_SET_RVALUE(stages_, stages) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Targets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The semantic version of the target configuration. It is used only for delivery recovery and does not record the API release time.
        shared_ptr<string> configRevision_ {};
        // The related configuration environment.
        shared_ptr<string> environmentId_ {};
        // The configuration error summary.
        shared_ptr<string> error_ {};
        // The related API configuration target.
        shared_ptr<string> httpApiId_ {};
        // The plugin stage results.
        Darabonba::Json stages_ {};
        // The status of the configuration target.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->logicalModelId_ == nullptr
        && this->operationId_ == nullptr && this->revision_ == nullptr && this->status_ == nullptr && this->targets_ == nullptr; };
      // logicalModelId Field Functions 
      bool hasLogicalModelId() const { return this->logicalModelId_ != nullptr;};
      void deleteLogicalModelId() { this->logicalModelId_ = nullptr;};
      inline string getLogicalModelId() const { DARABONBA_PTR_GET_DEFAULT(logicalModelId_, "") };
      inline Data& setLogicalModelId(string logicalModelId) { DARABONBA_PTR_SET_VALUE(logicalModelId_, logicalModelId) };


      // operationId Field Functions 
      bool hasOperationId() const { return this->operationId_ != nullptr;};
      void deleteOperationId() { this->operationId_ = nullptr;};
      inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
      inline Data& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


      // revision Field Functions 
      bool hasRevision() const { return this->revision_ != nullptr;};
      void deleteRevision() { this->revision_ = nullptr;};
      inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
      inline Data& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targets Field Functions 
      bool hasTargets() const { return this->targets_ != nullptr;};
      void deleteTargets() { this->targets_ = nullptr;};
      inline const vector<Data::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<Data::Targets>) };
      inline vector<Data::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<Data::Targets>) };
      inline Data& setTargets(const vector<Data::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
      inline Data& setTargets(vector<Data::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    protected:
      // The logical model ID.
      shared_ptr<string> logicalModelId_ {};
      // The persistent delivery ID.
      shared_ptr<string> operationId_ {};
      // The configuration version.
      shared_ptr<int64_t> revision_ {};
      // The current processing status.
      shared_ptr<string> status_ {};
      // The configuration targets and stage results.
      shared_ptr<vector<Data::Targets>> targets_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetLogicalModelDeploymentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetLogicalModelDeploymentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetLogicalModelDeploymentResponseBody::Data) };
    inline GetLogicalModelDeploymentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetLogicalModelDeploymentResponseBody::Data) };
    inline GetLogicalModelDeploymentResponseBody& setData(const GetLogicalModelDeploymentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetLogicalModelDeploymentResponseBody& setData(GetLogicalModelDeploymentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetLogicalModelDeploymentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLogicalModelDeploymentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code. Ok is returned upon success, and a specific business error code is returned upon failure.
    shared_ptr<string> code_ {};
    // The business result returned by the logical model operation.
    shared_ptr<GetLogicalModelDeploymentResponseBody::Data> data_ {};
    // The response message that describes the result of the request.
    shared_ptr<string> message_ {};
    // The request ID, which is generated by the system and used to trace the call.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
