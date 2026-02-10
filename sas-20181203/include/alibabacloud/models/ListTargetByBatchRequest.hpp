// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTARGETBYBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTARGETBYBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListTargetByBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTargetByBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(OperationBase, operationBase_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListTargetByBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(OperationBase, operationBase_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListTargetByBatchRequest() = default ;
    ListTargetByBatchRequest(const ListTargetByBatchRequest &) = default ;
    ListTargetByBatchRequest(ListTargetByBatchRequest &&) = default ;
    ListTargetByBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTargetByBatchRequest() = default ;
    ListTargetByBatchRequest& operator=(const ListTargetByBatchRequest &) = default ;
    ListTargetByBatchRequest& operator=(ListTargetByBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && this->currentPage_ == nullptr && this->operationBase_ == nullptr && this->pageSize_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
    inline ListTargetByBatchRequest& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListTargetByBatchRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // operationBase Field Functions 
    bool hasOperationBase() const { return this->operationBase_ != nullptr;};
    void deleteOperationBase() { this->operationBase_ = nullptr;};
    inline int32_t getOperationBase() const { DARABONBA_PTR_GET_DEFAULT(operationBase_, 0) };
    inline ListTargetByBatchRequest& setOperationBase(int32_t operationBase) { DARABONBA_PTR_SET_VALUE(operationBase_, operationBase) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTargetByBatchRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the release batch.
    shared_ptr<int64_t> batchId_ {};
    // The page number of the current page in a paginated query.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // Asset selection dimension. Values:
    // 
    // - **0**: Machine instance
    // - **1**: Machine group
    // - **2**: VPC instance ID
    shared_ptr<int32_t> operationBase_ {};
    // The maximum number of items to return per page in a paginated query.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
