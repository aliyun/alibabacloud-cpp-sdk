// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKGROUPOPERATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKGROUPOPERATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackGroupOperationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackGroupOperationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackGroupOperations, stackGroupOperations_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackGroupOperationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackGroupOperations, stackGroupOperations_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListStackGroupOperationsResponseBody() = default ;
    ListStackGroupOperationsResponseBody(const ListStackGroupOperationsResponseBody &) = default ;
    ListStackGroupOperationsResponseBody(ListStackGroupOperationsResponseBody &&) = default ;
    ListStackGroupOperationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackGroupOperationsResponseBody() = default ;
    ListStackGroupOperationsResponseBody& operator=(const ListStackGroupOperationsResponseBody &) = default ;
    ListStackGroupOperationsResponseBody& operator=(ListStackGroupOperationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StackGroupOperations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StackGroupOperations& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(OperationDescription, operationDescription_);
        DARABONBA_PTR_TO_JSON(OperationId, operationId_);
        DARABONBA_PTR_TO_JSON(StackGroupId, stackGroupId_);
        DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, StackGroupOperations& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(OperationDescription, operationDescription_);
        DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
        DARABONBA_PTR_FROM_JSON(StackGroupId, stackGroupId_);
        DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      StackGroupOperations() = default ;
      StackGroupOperations(const StackGroupOperations &) = default ;
      StackGroupOperations(StackGroupOperations &&) = default ;
      StackGroupOperations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StackGroupOperations() = default ;
      StackGroupOperations& operator=(const StackGroupOperations &) = default ;
      StackGroupOperations& operator=(StackGroupOperations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->createTime_ == nullptr && this->endTime_ == nullptr && this->operationDescription_ == nullptr && this->operationId_ == nullptr && this->stackGroupId_ == nullptr
        && this->stackGroupName_ == nullptr && this->status_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline StackGroupOperations& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline StackGroupOperations& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline StackGroupOperations& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // operationDescription Field Functions 
      bool hasOperationDescription() const { return this->operationDescription_ != nullptr;};
      void deleteOperationDescription() { this->operationDescription_ = nullptr;};
      inline string getOperationDescription() const { DARABONBA_PTR_GET_DEFAULT(operationDescription_, "") };
      inline StackGroupOperations& setOperationDescription(string operationDescription) { DARABONBA_PTR_SET_VALUE(operationDescription_, operationDescription) };


      // operationId Field Functions 
      bool hasOperationId() const { return this->operationId_ != nullptr;};
      void deleteOperationId() { this->operationId_ = nullptr;};
      inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
      inline StackGroupOperations& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


      // stackGroupId Field Functions 
      bool hasStackGroupId() const { return this->stackGroupId_ != nullptr;};
      void deleteStackGroupId() { this->stackGroupId_ = nullptr;};
      inline string getStackGroupId() const { DARABONBA_PTR_GET_DEFAULT(stackGroupId_, "") };
      inline StackGroupOperations& setStackGroupId(string stackGroupId) { DARABONBA_PTR_SET_VALUE(stackGroupId_, stackGroupId) };


      // stackGroupName Field Functions 
      bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
      void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
      inline string getStackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
      inline StackGroupOperations& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StackGroupOperations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The operation type.
      // 
      // Valid values:
      // 
      // *   CREATE
      // *   UPDATE
      // *   DELETE
      // *   DETECT_DRIFT
      shared_ptr<string> action_ {};
      // The time when the operation was initiated.
      shared_ptr<string> createTime_ {};
      // The time when the operation ended.
      shared_ptr<string> endTime_ {};
      // The description of the operation.
      shared_ptr<string> operationDescription_ {};
      // The operation ID.
      shared_ptr<string> operationId_ {};
      // The ID of the stack group.
      shared_ptr<string> stackGroupId_ {};
      // The name of the stack group.
      shared_ptr<string> stackGroupName_ {};
      // The state of the operation.
      // 
      // Valid values:
      // 
      // *   RUNNING
      // *   SUCCEEDED
      // *   FAILED
      // *   STOPPING
      // *   STOPPED
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->stackGroupOperations_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListStackGroupOperationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListStackGroupOperationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStackGroupOperationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackGroupOperations Field Functions 
    bool hasStackGroupOperations() const { return this->stackGroupOperations_ != nullptr;};
    void deleteStackGroupOperations() { this->stackGroupOperations_ = nullptr;};
    inline const vector<ListStackGroupOperationsResponseBody::StackGroupOperations> & getStackGroupOperations() const { DARABONBA_PTR_GET_CONST(stackGroupOperations_, vector<ListStackGroupOperationsResponseBody::StackGroupOperations>) };
    inline vector<ListStackGroupOperationsResponseBody::StackGroupOperations> getStackGroupOperations() { DARABONBA_PTR_GET(stackGroupOperations_, vector<ListStackGroupOperationsResponseBody::StackGroupOperations>) };
    inline ListStackGroupOperationsResponseBody& setStackGroupOperations(const vector<ListStackGroupOperationsResponseBody::StackGroupOperations> & stackGroupOperations) { DARABONBA_PTR_SET_VALUE(stackGroupOperations_, stackGroupOperations) };
    inline ListStackGroupOperationsResponseBody& setStackGroupOperations(vector<ListStackGroupOperationsResponseBody::StackGroupOperations> && stackGroupOperations) { DARABONBA_PTR_SET_RVALUE(stackGroupOperations_, stackGroupOperations) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListStackGroupOperationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The stack group operations.
    shared_ptr<vector<ListStackGroupOperationsResponseBody::StackGroupOperations>> stackGroupOperations_ {};
    // The total number of stack group operations.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
