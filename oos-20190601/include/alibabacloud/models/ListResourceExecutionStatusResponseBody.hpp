// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEEXECUTIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEEXECUTIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListResourceExecutionStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceExecutionStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceExecutionStatus, resourceExecutionStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceExecutionStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceExecutionStatus, resourceExecutionStatus_);
    };
    ListResourceExecutionStatusResponseBody() = default ;
    ListResourceExecutionStatusResponseBody(const ListResourceExecutionStatusResponseBody &) = default ;
    ListResourceExecutionStatusResponseBody(ListResourceExecutionStatusResponseBody &&) = default ;
    ListResourceExecutionStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceExecutionStatusResponseBody() = default ;
    ListResourceExecutionStatusResponseBody& operator=(const ListResourceExecutionStatusResponseBody &) = default ;
    ListResourceExecutionStatusResponseBody& operator=(ListResourceExecutionStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceExecutionStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceExecutionStatus& obj) { 
        DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
        DARABONBA_PTR_TO_JSON(ExecutionTime, executionTime_);
        DARABONBA_PTR_TO_JSON(Outputs, outputs_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceExecutionStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
        DARABONBA_PTR_FROM_JSON(ExecutionTime, executionTime_);
        DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ResourceExecutionStatus() = default ;
      ResourceExecutionStatus(const ResourceExecutionStatus &) = default ;
      ResourceExecutionStatus(ResourceExecutionStatus &&) = default ;
      ResourceExecutionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceExecutionStatus() = default ;
      ResourceExecutionStatus& operator=(const ResourceExecutionStatus &) = default ;
      ResourceExecutionStatus& operator=(ResourceExecutionStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->executionId_ == nullptr
        && this->executionTime_ == nullptr && this->outputs_ == nullptr && this->resourceId_ == nullptr && this->status_ == nullptr; };
      // executionId Field Functions 
      bool hasExecutionId() const { return this->executionId_ != nullptr;};
      void deleteExecutionId() { this->executionId_ = nullptr;};
      inline string getExecutionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
      inline ResourceExecutionStatus& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


      // executionTime Field Functions 
      bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
      void deleteExecutionTime() { this->executionTime_ = nullptr;};
      inline string getExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, "") };
      inline ResourceExecutionStatus& setExecutionTime(string executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
      inline ResourceExecutionStatus& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ResourceExecutionStatus& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourceExecutionStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the execution.
      shared_ptr<string> executionId_ {};
      // The time when the execution started running.
      shared_ptr<string> executionTime_ {};
      // The output of the template.
      shared_ptr<string> outputs_ {};
      // The ID of the resource.
      shared_ptr<string> resourceId_ {};
      // The status of the execution.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->resourceExecutionStatus_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceExecutionStatusResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceExecutionStatusResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceExecutionStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceExecutionStatus Field Functions 
    bool hasResourceExecutionStatus() const { return this->resourceExecutionStatus_ != nullptr;};
    void deleteResourceExecutionStatus() { this->resourceExecutionStatus_ = nullptr;};
    inline const vector<ListResourceExecutionStatusResponseBody::ResourceExecutionStatus> & getResourceExecutionStatus() const { DARABONBA_PTR_GET_CONST(resourceExecutionStatus_, vector<ListResourceExecutionStatusResponseBody::ResourceExecutionStatus>) };
    inline vector<ListResourceExecutionStatusResponseBody::ResourceExecutionStatus> getResourceExecutionStatus() { DARABONBA_PTR_GET(resourceExecutionStatus_, vector<ListResourceExecutionStatusResponseBody::ResourceExecutionStatus>) };
    inline ListResourceExecutionStatusResponseBody& setResourceExecutionStatus(const vector<ListResourceExecutionStatusResponseBody::ResourceExecutionStatus> & resourceExecutionStatus) { DARABONBA_PTR_SET_VALUE(resourceExecutionStatus_, resourceExecutionStatus) };
    inline ListResourceExecutionStatusResponseBody& setResourceExecutionStatus(vector<ListResourceExecutionStatusResponseBody::ResourceExecutionStatus> && resourceExecutionStatus) { DARABONBA_PTR_SET_RVALUE(resourceExecutionStatus_, resourceExecutionStatus) };


  protected:
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The execution information of the resource.
    shared_ptr<vector<ListResourceExecutionStatusResponseBody::ResourceExecutionStatus>> resourceExecutionStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
