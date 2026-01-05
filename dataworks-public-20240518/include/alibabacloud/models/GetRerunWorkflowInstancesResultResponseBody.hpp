// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRERUNWORKFLOWINSTANCESRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRERUNWORKFLOWINSTANCESRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetRerunWorkflowInstancesResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRerunWorkflowInstancesResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetRerunWorkflowInstancesResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetRerunWorkflowInstancesResultResponseBody() = default ;
    GetRerunWorkflowInstancesResultResponseBody(const GetRerunWorkflowInstancesResultResponseBody &) = default ;
    GetRerunWorkflowInstancesResultResponseBody(GetRerunWorkflowInstancesResultResponseBody &&) = default ;
    GetRerunWorkflowInstancesResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRerunWorkflowInstancesResultResponseBody() = default ;
    GetRerunWorkflowInstancesResultResponseBody& operator=(const GetRerunWorkflowInstancesResultResponseBody &) = default ;
    GetRerunWorkflowInstancesResultResponseBody& operator=(GetRerunWorkflowInstancesResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(FailureMessage, failureMessage_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(FailureMessage, failureMessage_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->failureMessage_ == nullptr
        && this->status_ == nullptr; };
      // failureMessage Field Functions 
      bool hasFailureMessage() const { return this->failureMessage_ != nullptr;};
      void deleteFailureMessage() { this->failureMessage_ = nullptr;};
      inline string getFailureMessage() const { DARABONBA_PTR_GET_DEFAULT(failureMessage_, "") };
      inline Result& setFailureMessage(string failureMessage) { DARABONBA_PTR_SET_VALUE(failureMessage_, failureMessage) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The failure message. Returned if the rerun fails.
      shared_ptr<string> failureMessage_ {};
      // The status. NotRun Success Failure
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRerunWorkflowInstancesResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetRerunWorkflowInstancesResultResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetRerunWorkflowInstancesResultResponseBody::Result) };
    inline GetRerunWorkflowInstancesResultResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetRerunWorkflowInstancesResultResponseBody::Result) };
    inline GetRerunWorkflowInstancesResultResponseBody& setResult(const GetRerunWorkflowInstancesResultResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetRerunWorkflowInstancesResultResponseBody& setResult(GetRerunWorkflowInstancesResultResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID, used for log tracing and troubleshooting.
    shared_ptr<string> requestId_ {};
    // The result of the workflow instance rerun.
    shared_ptr<GetRerunWorkflowInstancesResultResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
