// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKEXECUTIONINVOCATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKEXECUTIONINVOCATIONSRESPONSEBODY_HPP_
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
  class ListTaskExecutionInvocationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskExecutionInvocationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskExecutionInvocations, taskExecutionInvocations_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskExecutionInvocationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskExecutionInvocations, taskExecutionInvocations_);
    };
    ListTaskExecutionInvocationsResponseBody() = default ;
    ListTaskExecutionInvocationsResponseBody(const ListTaskExecutionInvocationsResponseBody &) = default ;
    ListTaskExecutionInvocationsResponseBody(ListTaskExecutionInvocationsResponseBody &&) = default ;
    ListTaskExecutionInvocationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskExecutionInvocationsResponseBody() = default ;
    ListTaskExecutionInvocationsResponseBody& operator=(const ListTaskExecutionInvocationsResponseBody &) = default ;
    ListTaskExecutionInvocationsResponseBody& operator=(ListTaskExecutionInvocationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskExecutionInvocations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskExecutionInvocations& obj) { 
        DARABONBA_PTR_TO_JSON(InvocationId, invocationId_);
        DARABONBA_PTR_TO_JSON(InvocationTaskExecutionId, invocationTaskExecutionId_);
        DARABONBA_PTR_TO_JSON(InvocationTaskName, invocationTaskName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, TaskExecutionInvocations& obj) { 
        DARABONBA_PTR_FROM_JSON(InvocationId, invocationId_);
        DARABONBA_PTR_FROM_JSON(InvocationTaskExecutionId, invocationTaskExecutionId_);
        DARABONBA_PTR_FROM_JSON(InvocationTaskName, invocationTaskName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      TaskExecutionInvocations() = default ;
      TaskExecutionInvocations(const TaskExecutionInvocations &) = default ;
      TaskExecutionInvocations(TaskExecutionInvocations &&) = default ;
      TaskExecutionInvocations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskExecutionInvocations() = default ;
      TaskExecutionInvocations& operator=(const TaskExecutionInvocations &) = default ;
      TaskExecutionInvocations& operator=(TaskExecutionInvocations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->invocationId_ == nullptr
        && this->invocationTaskExecutionId_ == nullptr && this->invocationTaskName_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
      // invocationId Field Functions 
      bool hasInvocationId() const { return this->invocationId_ != nullptr;};
      void deleteInvocationId() { this->invocationId_ = nullptr;};
      inline string getInvocationId() const { DARABONBA_PTR_GET_DEFAULT(invocationId_, "") };
      inline TaskExecutionInvocations& setInvocationId(string invocationId) { DARABONBA_PTR_SET_VALUE(invocationId_, invocationId) };


      // invocationTaskExecutionId Field Functions 
      bool hasInvocationTaskExecutionId() const { return this->invocationTaskExecutionId_ != nullptr;};
      void deleteInvocationTaskExecutionId() { this->invocationTaskExecutionId_ = nullptr;};
      inline string getInvocationTaskExecutionId() const { DARABONBA_PTR_GET_DEFAULT(invocationTaskExecutionId_, "") };
      inline TaskExecutionInvocations& setInvocationTaskExecutionId(string invocationTaskExecutionId) { DARABONBA_PTR_SET_VALUE(invocationTaskExecutionId_, invocationTaskExecutionId) };


      // invocationTaskName Field Functions 
      bool hasInvocationTaskName() const { return this->invocationTaskName_ != nullptr;};
      void deleteInvocationTaskName() { this->invocationTaskName_ = nullptr;};
      inline string getInvocationTaskName() const { DARABONBA_PTR_GET_DEFAULT(invocationTaskName_, "") };
      inline TaskExecutionInvocations& setInvocationTaskName(string invocationTaskName) { DARABONBA_PTR_SET_VALUE(invocationTaskName_, invocationTaskName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline TaskExecutionInvocations& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TaskExecutionInvocations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> invocationId_ {};
      shared_ptr<string> invocationTaskExecutionId_ {};
      shared_ptr<string> invocationTaskName_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskExecutionInvocations_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskExecutionInvocationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskExecutionInvocations Field Functions 
    bool hasTaskExecutionInvocations() const { return this->taskExecutionInvocations_ != nullptr;};
    void deleteTaskExecutionInvocations() { this->taskExecutionInvocations_ = nullptr;};
    inline const vector<ListTaskExecutionInvocationsResponseBody::TaskExecutionInvocations> & getTaskExecutionInvocations() const { DARABONBA_PTR_GET_CONST(taskExecutionInvocations_, vector<ListTaskExecutionInvocationsResponseBody::TaskExecutionInvocations>) };
    inline vector<ListTaskExecutionInvocationsResponseBody::TaskExecutionInvocations> getTaskExecutionInvocations() { DARABONBA_PTR_GET(taskExecutionInvocations_, vector<ListTaskExecutionInvocationsResponseBody::TaskExecutionInvocations>) };
    inline ListTaskExecutionInvocationsResponseBody& setTaskExecutionInvocations(const vector<ListTaskExecutionInvocationsResponseBody::TaskExecutionInvocations> & taskExecutionInvocations) { DARABONBA_PTR_SET_VALUE(taskExecutionInvocations_, taskExecutionInvocations) };
    inline ListTaskExecutionInvocationsResponseBody& setTaskExecutionInvocations(vector<ListTaskExecutionInvocationsResponseBody::TaskExecutionInvocations> && taskExecutionInvocations) { DARABONBA_PTR_SET_RVALUE(taskExecutionInvocations_, taskExecutionInvocations) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListTaskExecutionInvocationsResponseBody::TaskExecutionInvocations>> taskExecutionInvocations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
