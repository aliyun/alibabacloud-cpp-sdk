// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKINSTANCESRESPONSEBODY_HPP_
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
  class ListStackInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackInstances, stackInstances_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackInstances, stackInstances_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListStackInstancesResponseBody() = default ;
    ListStackInstancesResponseBody(const ListStackInstancesResponseBody &) = default ;
    ListStackInstancesResponseBody(ListStackInstancesResponseBody &&) = default ;
    ListStackInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackInstancesResponseBody() = default ;
    ListStackInstancesResponseBody& operator=(const ListStackInstancesResponseBody &) = default ;
    ListStackInstancesResponseBody& operator=(ListStackInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StackInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StackInstances& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(DriftDetectionTime, driftDetectionTime_);
        DARABONBA_PTR_TO_JSON(RdFolderId, rdFolderId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(StackDriftStatus, stackDriftStatus_);
        DARABONBA_PTR_TO_JSON(StackGroupId, stackGroupId_);
        DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
        DARABONBA_PTR_TO_JSON(StackId, stackId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      };
      friend void from_json(const Darabonba::Json& j, StackInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(DriftDetectionTime, driftDetectionTime_);
        DARABONBA_PTR_FROM_JSON(RdFolderId, rdFolderId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(StackDriftStatus, stackDriftStatus_);
        DARABONBA_PTR_FROM_JSON(StackGroupId, stackGroupId_);
        DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
        DARABONBA_PTR_FROM_JSON(StackId, stackId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      };
      StackInstances() = default ;
      StackInstances(const StackInstances &) = default ;
      StackInstances(StackInstances &&) = default ;
      StackInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StackInstances() = default ;
      StackInstances& operator=(const StackInstances &) = default ;
      StackInstances& operator=(StackInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->driftDetectionTime_ == nullptr && this->rdFolderId_ == nullptr && this->regionId_ == nullptr && this->stackDriftStatus_ == nullptr && this->stackGroupId_ == nullptr
        && this->stackGroupName_ == nullptr && this->stackId_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline StackInstances& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // driftDetectionTime Field Functions 
      bool hasDriftDetectionTime() const { return this->driftDetectionTime_ != nullptr;};
      void deleteDriftDetectionTime() { this->driftDetectionTime_ = nullptr;};
      inline string getDriftDetectionTime() const { DARABONBA_PTR_GET_DEFAULT(driftDetectionTime_, "") };
      inline StackInstances& setDriftDetectionTime(string driftDetectionTime) { DARABONBA_PTR_SET_VALUE(driftDetectionTime_, driftDetectionTime) };


      // rdFolderId Field Functions 
      bool hasRdFolderId() const { return this->rdFolderId_ != nullptr;};
      void deleteRdFolderId() { this->rdFolderId_ = nullptr;};
      inline string getRdFolderId() const { DARABONBA_PTR_GET_DEFAULT(rdFolderId_, "") };
      inline StackInstances& setRdFolderId(string rdFolderId) { DARABONBA_PTR_SET_VALUE(rdFolderId_, rdFolderId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline StackInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // stackDriftStatus Field Functions 
      bool hasStackDriftStatus() const { return this->stackDriftStatus_ != nullptr;};
      void deleteStackDriftStatus() { this->stackDriftStatus_ = nullptr;};
      inline string getStackDriftStatus() const { DARABONBA_PTR_GET_DEFAULT(stackDriftStatus_, "") };
      inline StackInstances& setStackDriftStatus(string stackDriftStatus) { DARABONBA_PTR_SET_VALUE(stackDriftStatus_, stackDriftStatus) };


      // stackGroupId Field Functions 
      bool hasStackGroupId() const { return this->stackGroupId_ != nullptr;};
      void deleteStackGroupId() { this->stackGroupId_ = nullptr;};
      inline string getStackGroupId() const { DARABONBA_PTR_GET_DEFAULT(stackGroupId_, "") };
      inline StackInstances& setStackGroupId(string stackGroupId) { DARABONBA_PTR_SET_VALUE(stackGroupId_, stackGroupId) };


      // stackGroupName Field Functions 
      bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
      void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
      inline string getStackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
      inline StackInstances& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


      // stackId Field Functions 
      bool hasStackId() const { return this->stackId_ != nullptr;};
      void deleteStackId() { this->stackId_ = nullptr;};
      inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
      inline StackInstances& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StackInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline StackInstances& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    protected:
      // The ID of the destination account to which the stack belongs.
      shared_ptr<string> accountId_ {};
      // The time when the last successful drift detection was performed on the stack.
      // 
      // > This parameter is returned only if drift detection is performed on the stack group.
      shared_ptr<string> driftDetectionTime_ {};
      // The ID of the folder in the resource directory.
      // 
      // > This parameter is returned only if the stack group is granted service-managed permissions.
      shared_ptr<string> rdFolderId_ {};
      // The region ID of the stack.
      shared_ptr<string> regionId_ {};
      // The state of the stack when the last successful drift detection was performed on the stack group.
      // 
      // Valid values:
      // 
      // *   DRIFTED: The stack has drifted.
      // *   NOT_CHECKED: No successful drift detection is performed on the stack.
      // *   IN_SYNC: The stack is being synchronized.
      // 
      // > This parameter is returned only if drift detection is performed on the stack group.
      shared_ptr<string> stackDriftStatus_ {};
      // The ID of the stack group.
      shared_ptr<string> stackGroupId_ {};
      // The name of the stack group.
      shared_ptr<string> stackGroupName_ {};
      // The stack ID.
      // 
      // > This parameter is returned only if the stack is in the CURRENT state.
      shared_ptr<string> stackId_ {};
      // The state of the stack.
      // 
      // Valid values:
      // 
      // *   CURRENT: The stack is up-to-date with the stack group.
      // 
      // *   OUTDATED: The stack is not up-to-date with the stack group. Stacks are in the OUTDATED state due to the following possible reasons:
      // 
      //     *   When the CreateStackInstances operation is called to create stacks, the stacks fail to be created.
      //     *   When the UpdateStackInstances or UpdateStackGroup operation is called to update stacks, the stacks fail to be updated, or only specific stacks are updated.
      //     *   The creation or update operation is not complete.
      shared_ptr<string> status_ {};
      // The reason why the stack instance is in the OUTDATED state.
      // 
      // > This parameter is returned only if the stack instance is in the OUTDATED state.
      shared_ptr<string> statusReason_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->stackInstances_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListStackInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListStackInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStackInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackInstances Field Functions 
    bool hasStackInstances() const { return this->stackInstances_ != nullptr;};
    void deleteStackInstances() { this->stackInstances_ = nullptr;};
    inline const vector<ListStackInstancesResponseBody::StackInstances> & getStackInstances() const { DARABONBA_PTR_GET_CONST(stackInstances_, vector<ListStackInstancesResponseBody::StackInstances>) };
    inline vector<ListStackInstancesResponseBody::StackInstances> getStackInstances() { DARABONBA_PTR_GET(stackInstances_, vector<ListStackInstancesResponseBody::StackInstances>) };
    inline ListStackInstancesResponseBody& setStackInstances(const vector<ListStackInstancesResponseBody::StackInstances> & stackInstances) { DARABONBA_PTR_SET_VALUE(stackInstances_, stackInstances) };
    inline ListStackInstancesResponseBody& setStackInstances(vector<ListStackInstancesResponseBody::StackInstances> && stackInstances) { DARABONBA_PTR_SET_RVALUE(stackInstances_, stackInstances) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListStackInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The stacks.
    shared_ptr<vector<ListStackInstancesResponseBody::StackInstances>> stackInstances_ {};
    // The total number of stacks.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
