// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREATEWORKFLOWINSTANCESRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCREATEWORKFLOWINSTANCESRESULTRESPONSEBODY_HPP_
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
  class GetCreateWorkflowInstancesResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCreateWorkflowInstancesResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetCreateWorkflowInstancesResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetCreateWorkflowInstancesResultResponseBody() = default ;
    GetCreateWorkflowInstancesResultResponseBody(const GetCreateWorkflowInstancesResultResponseBody &) = default ;
    GetCreateWorkflowInstancesResultResponseBody(GetCreateWorkflowInstancesResultResponseBody &&) = default ;
    GetCreateWorkflowInstancesResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCreateWorkflowInstancesResultResponseBody() = default ;
    GetCreateWorkflowInstancesResultResponseBody& operator=(const GetCreateWorkflowInstancesResultResponseBody &) = default ;
    GetCreateWorkflowInstancesResultResponseBody& operator=(GetCreateWorkflowInstancesResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(FailureMessage, failureMessage_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UnifiedWorkflowInstanceIds, unifiedWorkflowInstanceIds_);
        DARABONBA_PTR_TO_JSON(WorkflowInstanceIds, workflowInstanceIds_);
        DARABONBA_PTR_TO_JSON(WorkflowTaskInstanceIds, workflowTaskInstanceIds_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(FailureMessage, failureMessage_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UnifiedWorkflowInstanceIds, unifiedWorkflowInstanceIds_);
        DARABONBA_PTR_FROM_JSON(WorkflowInstanceIds, workflowInstanceIds_);
        DARABONBA_PTR_FROM_JSON(WorkflowTaskInstanceIds, workflowTaskInstanceIds_);
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
        && this->status_ == nullptr && this->unifiedWorkflowInstanceIds_ == nullptr && this->workflowInstanceIds_ == nullptr && this->workflowTaskInstanceIds_ == nullptr; };
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


      // unifiedWorkflowInstanceIds Field Functions 
      bool hasUnifiedWorkflowInstanceIds() const { return this->unifiedWorkflowInstanceIds_ != nullptr;};
      void deleteUnifiedWorkflowInstanceIds() { this->unifiedWorkflowInstanceIds_ = nullptr;};
      inline const vector<int64_t> & getUnifiedWorkflowInstanceIds() const { DARABONBA_PTR_GET_CONST(unifiedWorkflowInstanceIds_, vector<int64_t>) };
      inline vector<int64_t> getUnifiedWorkflowInstanceIds() { DARABONBA_PTR_GET(unifiedWorkflowInstanceIds_, vector<int64_t>) };
      inline Result& setUnifiedWorkflowInstanceIds(const vector<int64_t> & unifiedWorkflowInstanceIds) { DARABONBA_PTR_SET_VALUE(unifiedWorkflowInstanceIds_, unifiedWorkflowInstanceIds) };
      inline Result& setUnifiedWorkflowInstanceIds(vector<int64_t> && unifiedWorkflowInstanceIds) { DARABONBA_PTR_SET_RVALUE(unifiedWorkflowInstanceIds_, unifiedWorkflowInstanceIds) };


      // workflowInstanceIds Field Functions 
      bool hasWorkflowInstanceIds() const { return this->workflowInstanceIds_ != nullptr;};
      void deleteWorkflowInstanceIds() { this->workflowInstanceIds_ = nullptr;};
      inline const vector<int64_t> & getWorkflowInstanceIds() const { DARABONBA_PTR_GET_CONST(workflowInstanceIds_, vector<int64_t>) };
      inline vector<int64_t> getWorkflowInstanceIds() { DARABONBA_PTR_GET(workflowInstanceIds_, vector<int64_t>) };
      inline Result& setWorkflowInstanceIds(const vector<int64_t> & workflowInstanceIds) { DARABONBA_PTR_SET_VALUE(workflowInstanceIds_, workflowInstanceIds) };
      inline Result& setWorkflowInstanceIds(vector<int64_t> && workflowInstanceIds) { DARABONBA_PTR_SET_RVALUE(workflowInstanceIds_, workflowInstanceIds) };


      // workflowTaskInstanceIds Field Functions 
      bool hasWorkflowTaskInstanceIds() const { return this->workflowTaskInstanceIds_ != nullptr;};
      void deleteWorkflowTaskInstanceIds() { this->workflowTaskInstanceIds_ = nullptr;};
      inline const vector<int64_t> & getWorkflowTaskInstanceIds() const { DARABONBA_PTR_GET_CONST(workflowTaskInstanceIds_, vector<int64_t>) };
      inline vector<int64_t> getWorkflowTaskInstanceIds() { DARABONBA_PTR_GET(workflowTaskInstanceIds_, vector<int64_t>) };
      inline Result& setWorkflowTaskInstanceIds(const vector<int64_t> & workflowTaskInstanceIds) { DARABONBA_PTR_SET_VALUE(workflowTaskInstanceIds_, workflowTaskInstanceIds) };
      inline Result& setWorkflowTaskInstanceIds(vector<int64_t> && workflowTaskInstanceIds) { DARABONBA_PTR_SET_RVALUE(workflowTaskInstanceIds_, workflowTaskInstanceIds) };


    protected:
      // The error message. This parameter is returned only if the creation fails.
      shared_ptr<string> failureMessage_ {};
      // The creation status. Valid values:
      // 
      // *   Creating
      // *   Created
      // *   CreateFailure
      shared_ptr<string> status_ {};
      shared_ptr<vector<int64_t>> unifiedWorkflowInstanceIds_ {};
      // The workflow instance IDs. This parameter is returned only if the creation is successful.
      shared_ptr<vector<int64_t>> workflowInstanceIds_ {};
      // The list of task instance IDs corresponding to the workflow instance. This field is returned after successful creation.
      shared_ptr<vector<int64_t>> workflowTaskInstanceIds_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCreateWorkflowInstancesResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetCreateWorkflowInstancesResultResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetCreateWorkflowInstancesResultResponseBody::Result) };
    inline GetCreateWorkflowInstancesResultResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetCreateWorkflowInstancesResultResponseBody::Result) };
    inline GetCreateWorkflowInstancesResultResponseBody& setResult(const GetCreateWorkflowInstancesResultResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetCreateWorkflowInstancesResultResponseBody& setResult(GetCreateWorkflowInstancesResultResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The creation result of the workflow instance.
    shared_ptr<GetCreateWorkflowInstancesResultResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
