// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKGROUPOPERATIONRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKGROUPOPERATIONRESULTSRESPONSEBODY_HPP_
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
  class ListStackGroupOperationResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackGroupOperationResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackGroupOperationResults, stackGroupOperationResults_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackGroupOperationResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackGroupOperationResults, stackGroupOperationResults_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListStackGroupOperationResultsResponseBody() = default ;
    ListStackGroupOperationResultsResponseBody(const ListStackGroupOperationResultsResponseBody &) = default ;
    ListStackGroupOperationResultsResponseBody(ListStackGroupOperationResultsResponseBody &&) = default ;
    ListStackGroupOperationResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackGroupOperationResultsResponseBody() = default ;
    ListStackGroupOperationResultsResponseBody& operator=(const ListStackGroupOperationResultsResponseBody &) = default ;
    ListStackGroupOperationResultsResponseBody& operator=(ListStackGroupOperationResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StackGroupOperationResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StackGroupOperationResults& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(RdFolderId, rdFolderId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      };
      friend void from_json(const Darabonba::Json& j, StackGroupOperationResults& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(RdFolderId, rdFolderId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      };
      StackGroupOperationResults() = default ;
      StackGroupOperationResults(const StackGroupOperationResults &) = default ;
      StackGroupOperationResults(StackGroupOperationResults &&) = default ;
      StackGroupOperationResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StackGroupOperationResults() = default ;
      StackGroupOperationResults& operator=(const StackGroupOperationResults &) = default ;
      StackGroupOperationResults& operator=(StackGroupOperationResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->rdFolderId_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline StackGroupOperationResults& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // rdFolderId Field Functions 
      bool hasRdFolderId() const { return this->rdFolderId_ != nullptr;};
      void deleteRdFolderId() { this->rdFolderId_ = nullptr;};
      inline string getRdFolderId() const { DARABONBA_PTR_GET_DEFAULT(rdFolderId_, "") };
      inline StackGroupOperationResults& setRdFolderId(string rdFolderId) { DARABONBA_PTR_SET_VALUE(rdFolderId_, rdFolderId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline StackGroupOperationResults& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline StackGroupOperationResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline StackGroupOperationResults& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    protected:
      // The ID of the account to which the stack instance belongs.
      // 
      // *   If the stack group has self-managed permissions, the stack instance belongs to an Alibaba Cloud account.
      // *   If the stack group has service-managed permissions, the stack instance belongs to a member account in the resource directory.
      // 
      // >  For more information about the account, see [Overview](https://help.aliyun.com/document_detail/154578.html).
      shared_ptr<string> accountId_ {};
      // The folder ID of the resource directory.
      // 
      // >  This parameter is returned only when the stack group is granted service-managed permissions.
      shared_ptr<string> rdFolderId_ {};
      // The region ID of the stack instance.
      shared_ptr<string> regionId_ {};
      // The status of the operation.
      // 
      // Valid values:
      // 
      // *   RUNNING: The operation is being performed.
      // *   SUCCEEDED: The operation succeeded.
      // *   FAILED: The operation failed.
      // *   STOPPING: The operation is being stopped.
      // *   STOPPED: The operation is stopped.
      shared_ptr<string> status_ {};
      // The reason why the operation is in a specific state.
      // 
      // >  This parameter is returned only when stack instances are in the OUTDATED state.
      shared_ptr<string> statusReason_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->stackGroupOperationResults_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListStackGroupOperationResultsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListStackGroupOperationResultsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStackGroupOperationResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackGroupOperationResults Field Functions 
    bool hasStackGroupOperationResults() const { return this->stackGroupOperationResults_ != nullptr;};
    void deleteStackGroupOperationResults() { this->stackGroupOperationResults_ = nullptr;};
    inline const vector<ListStackGroupOperationResultsResponseBody::StackGroupOperationResults> & getStackGroupOperationResults() const { DARABONBA_PTR_GET_CONST(stackGroupOperationResults_, vector<ListStackGroupOperationResultsResponseBody::StackGroupOperationResults>) };
    inline vector<ListStackGroupOperationResultsResponseBody::StackGroupOperationResults> getStackGroupOperationResults() { DARABONBA_PTR_GET(stackGroupOperationResults_, vector<ListStackGroupOperationResultsResponseBody::StackGroupOperationResults>) };
    inline ListStackGroupOperationResultsResponseBody& setStackGroupOperationResults(const vector<ListStackGroupOperationResultsResponseBody::StackGroupOperationResults> & stackGroupOperationResults) { DARABONBA_PTR_SET_VALUE(stackGroupOperationResults_, stackGroupOperationResults) };
    inline ListStackGroupOperationResultsResponseBody& setStackGroupOperationResults(vector<ListStackGroupOperationResultsResponseBody::StackGroupOperationResults> && stackGroupOperationResults) { DARABONBA_PTR_SET_RVALUE(stackGroupOperationResults_, stackGroupOperationResults) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListStackGroupOperationResultsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the results of the operation.
    shared_ptr<vector<ListStackGroupOperationResultsResponseBody::StackGroupOperationResults>> stackGroupOperationResults_ {};
    // The total number of results.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
