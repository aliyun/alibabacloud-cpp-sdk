// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKEXECUTIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKEXECUTIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetStackExecutionResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackExecutionResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(stackResults, stackResults_);
      DARABONBA_PTR_TO_JSON(triggerId, triggerId_);
      DARABONBA_PTR_TO_JSON(triggeredStatus, triggeredStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackExecutionResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(stackResults, stackResults_);
      DARABONBA_PTR_FROM_JSON(triggerId, triggerId_);
      DARABONBA_PTR_FROM_JSON(triggeredStatus, triggeredStatus_);
    };
    GetStackExecutionResultResponseBody() = default ;
    GetStackExecutionResultResponseBody(const GetStackExecutionResultResponseBody &) = default ;
    GetStackExecutionResultResponseBody(GetStackExecutionResultResponseBody &&) = default ;
    GetStackExecutionResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackExecutionResultResponseBody() = default ;
    GetStackExecutionResultResponseBody& operator=(const GetStackExecutionResultResponseBody &) = default ;
    GetStackExecutionResultResponseBody& operator=(GetStackExecutionResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StackResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StackResults& obj) { 
        DARABONBA_PTR_TO_JSON(deployments, deployments_);
        DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(stackId, stackId_);
        DARABONBA_PTR_TO_JSON(stackName, stackName_);
        DARABONBA_PTR_TO_JSON(stackStatus, stackStatus_);
      };
      friend void from_json(const Darabonba::Json& j, StackResults& obj) { 
        DARABONBA_PTR_FROM_JSON(deployments, deployments_);
        DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(stackId, stackId_);
        DARABONBA_PTR_FROM_JSON(stackName, stackName_);
        DARABONBA_PTR_FROM_JSON(stackStatus, stackStatus_);
      };
      StackResults() = default ;
      StackResults(const StackResults &) = default ;
      StackResults(StackResults &&) = default ;
      StackResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StackResults() = default ;
      StackResults& operator=(const StackResults &) = default ;
      StackResults& operator=(StackResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Deployments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Deployments& obj) { 
          DARABONBA_PTR_TO_JSON(deploymentName, deploymentName_);
          DARABONBA_PTR_TO_JSON(jobResult, jobResult_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Deployments& obj) { 
          DARABONBA_PTR_FROM_JSON(deploymentName, deploymentName_);
          DARABONBA_PTR_FROM_JSON(jobResult, jobResult_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(url, url_);
        };
        Deployments() = default ;
        Deployments(const Deployments &) = default ;
        Deployments(Deployments &&) = default ;
        Deployments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Deployments() = default ;
        Deployments& operator=(const Deployments &) = default ;
        Deployments& operator=(Deployments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deploymentName_ == nullptr
        && this->jobResult_ == nullptr && this->status_ == nullptr && this->url_ == nullptr; };
        // deploymentName Field Functions 
        bool hasDeploymentName() const { return this->deploymentName_ != nullptr;};
        void deleteDeploymentName() { this->deploymentName_ = nullptr;};
        inline string getDeploymentName() const { DARABONBA_PTR_GET_DEFAULT(deploymentName_, "") };
        inline Deployments& setDeploymentName(string deploymentName) { DARABONBA_PTR_SET_VALUE(deploymentName_, deploymentName) };


        // jobResult Field Functions 
        bool hasJobResult() const { return this->jobResult_ != nullptr;};
        void deleteJobResult() { this->jobResult_ = nullptr;};
        inline string getJobResult() const { DARABONBA_PTR_GET_DEFAULT(jobResult_, "") };
        inline Deployments& setJobResult(string jobResult) { DARABONBA_PTR_SET_VALUE(jobResult_, jobResult) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Deployments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Deployments& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The deployment name.
        shared_ptr<string> deploymentName_ {};
        // The result of the deployment task.
        shared_ptr<string> jobResult_ {};
        // The deployment status.
        shared_ptr<string> status_ {};
        // The URL for viewing deployment details.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->deployments_ == nullptr
        && this->errorCode_ == nullptr && this->message_ == nullptr && this->stackId_ == nullptr && this->stackName_ == nullptr && this->stackStatus_ == nullptr; };
      // deployments Field Functions 
      bool hasDeployments() const { return this->deployments_ != nullptr;};
      void deleteDeployments() { this->deployments_ = nullptr;};
      inline const vector<StackResults::Deployments> & getDeployments() const { DARABONBA_PTR_GET_CONST(deployments_, vector<StackResults::Deployments>) };
      inline vector<StackResults::Deployments> getDeployments() { DARABONBA_PTR_GET(deployments_, vector<StackResults::Deployments>) };
      inline StackResults& setDeployments(const vector<StackResults::Deployments> & deployments) { DARABONBA_PTR_SET_VALUE(deployments_, deployments) };
      inline StackResults& setDeployments(vector<StackResults::Deployments> && deployments) { DARABONBA_PTR_SET_RVALUE(deployments_, deployments) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline StackResults& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline StackResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // stackId Field Functions 
      bool hasStackId() const { return this->stackId_ != nullptr;};
      void deleteStackId() { this->stackId_ = nullptr;};
      inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
      inline StackResults& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


      // stackName Field Functions 
      bool hasStackName() const { return this->stackName_ != nullptr;};
      void deleteStackName() { this->stackName_ = nullptr;};
      inline string getStackName() const { DARABONBA_PTR_GET_DEFAULT(stackName_, "") };
      inline StackResults& setStackName(string stackName) { DARABONBA_PTR_SET_VALUE(stackName_, stackName) };


      // stackStatus Field Functions 
      bool hasStackStatus() const { return this->stackStatus_ != nullptr;};
      void deleteStackStatus() { this->stackStatus_ = nullptr;};
      inline string getStackStatus() const { DARABONBA_PTR_GET_DEFAULT(stackStatus_, "") };
      inline StackResults& setStackStatus(string stackStatus) { DARABONBA_PTR_SET_VALUE(stackStatus_, stackStatus) };


    protected:
      // The deployment results of the Stack.
      shared_ptr<vector<StackResults::Deployments>> deployments_ {};
      // Error code of the stack execution
      shared_ptr<string> errorCode_ {};
      // The error message.
      shared_ptr<string> message_ {};
      // The unique identifier of the Stack.
      shared_ptr<string> stackId_ {};
      // The Stack name.
      shared_ptr<string> stackName_ {};
      // The execution status of the Stack.
      shared_ptr<string> stackStatus_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->stackResults_ == nullptr && this->triggerId_ == nullptr && this->triggeredStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStackExecutionResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackResults Field Functions 
    bool hasStackResults() const { return this->stackResults_ != nullptr;};
    void deleteStackResults() { this->stackResults_ = nullptr;};
    inline const vector<GetStackExecutionResultResponseBody::StackResults> & getStackResults() const { DARABONBA_PTR_GET_CONST(stackResults_, vector<GetStackExecutionResultResponseBody::StackResults>) };
    inline vector<GetStackExecutionResultResponseBody::StackResults> getStackResults() { DARABONBA_PTR_GET(stackResults_, vector<GetStackExecutionResultResponseBody::StackResults>) };
    inline GetStackExecutionResultResponseBody& setStackResults(const vector<GetStackExecutionResultResponseBody::StackResults> & stackResults) { DARABONBA_PTR_SET_VALUE(stackResults_, stackResults) };
    inline GetStackExecutionResultResponseBody& setStackResults(vector<GetStackExecutionResultResponseBody::StackResults> && stackResults) { DARABONBA_PTR_SET_RVALUE(stackResults_, stackResults) };


    // triggerId Field Functions 
    bool hasTriggerId() const { return this->triggerId_ != nullptr;};
    void deleteTriggerId() { this->triggerId_ = nullptr;};
    inline string getTriggerId() const { DARABONBA_PTR_GET_DEFAULT(triggerId_, "") };
    inline GetStackExecutionResultResponseBody& setTriggerId(string triggerId) { DARABONBA_PTR_SET_VALUE(triggerId_, triggerId) };


    // triggeredStatus Field Functions 
    bool hasTriggeredStatus() const { return this->triggeredStatus_ != nullptr;};
    void deleteTriggeredStatus() { this->triggeredStatus_ = nullptr;};
    inline string getTriggeredStatus() const { DARABONBA_PTR_GET_DEFAULT(triggeredStatus_, "") };
    inline GetStackExecutionResultResponseBody& setTriggeredStatus(string triggeredStatus) { DARABONBA_PTR_SET_VALUE(triggeredStatus_, triggeredStatus) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The execution results of the triggered Stacks.
    shared_ptr<vector<GetStackExecutionResultResponseBody::StackResults>> stackResults_ {};
    // The unique ID of the trigger.
    shared_ptr<string> triggerId_ {};
    // The overall execution status of this trigger task. Valid values:
    // - Waiting: Processing.
    // - Success: Processing succeeded.
    // - Errored: Processing failed.
    shared_ptr<string> triggeredStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
