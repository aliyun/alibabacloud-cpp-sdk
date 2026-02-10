// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHBATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHBATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPublishBatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishBatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BatchList, batchList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishBatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchList, batchList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPublishBatchResponseBody() = default ;
    ListPublishBatchResponseBody(const ListPublishBatchResponseBody &) = default ;
    ListPublishBatchResponseBody(ListPublishBatchResponseBody &&) = default ;
    ListPublishBatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishBatchResponseBody() = default ;
    ListPublishBatchResponseBody& operator=(const ListPublishBatchResponseBody &) = default ;
    ListPublishBatchResponseBody& operator=(ListPublishBatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class BatchList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BatchList& obj) { 
        DARABONBA_PTR_TO_JSON(BatchId, batchId_);
        DARABONBA_PTR_TO_JSON(BatchInterval, batchInterval_);
        DARABONBA_PTR_TO_JSON(BatchName, batchName_);
        DARABONBA_PTR_TO_JSON(BatchNo, batchNo_);
        DARABONBA_PTR_TO_JSON(BatchProcess, batchProcess_);
        DARABONBA_PTR_TO_JSON(BatchTotal, batchTotal_);
        DARABONBA_PTR_TO_JSON(OperationBase, operationBase_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, BatchList& obj) { 
        DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
        DARABONBA_PTR_FROM_JSON(BatchInterval, batchInterval_);
        DARABONBA_PTR_FROM_JSON(BatchName, batchName_);
        DARABONBA_PTR_FROM_JSON(BatchNo, batchNo_);
        DARABONBA_PTR_FROM_JSON(BatchProcess, batchProcess_);
        DARABONBA_PTR_FROM_JSON(BatchTotal, batchTotal_);
        DARABONBA_PTR_FROM_JSON(OperationBase, operationBase_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      BatchList() = default ;
      BatchList(const BatchList &) = default ;
      BatchList(BatchList &&) = default ;
      BatchList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BatchList() = default ;
      BatchList& operator=(const BatchList &) = default ;
      BatchList& operator=(BatchList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->batchId_ == nullptr
        && this->batchInterval_ == nullptr && this->batchName_ == nullptr && this->batchNo_ == nullptr && this->batchProcess_ == nullptr && this->batchTotal_ == nullptr
        && this->operationBase_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
      // batchId Field Functions 
      bool hasBatchId() const { return this->batchId_ != nullptr;};
      void deleteBatchId() { this->batchId_ = nullptr;};
      inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
      inline BatchList& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


      // batchInterval Field Functions 
      bool hasBatchInterval() const { return this->batchInterval_ != nullptr;};
      void deleteBatchInterval() { this->batchInterval_ = nullptr;};
      inline int32_t getBatchInterval() const { DARABONBA_PTR_GET_DEFAULT(batchInterval_, 0) };
      inline BatchList& setBatchInterval(int32_t batchInterval) { DARABONBA_PTR_SET_VALUE(batchInterval_, batchInterval) };


      // batchName Field Functions 
      bool hasBatchName() const { return this->batchName_ != nullptr;};
      void deleteBatchName() { this->batchName_ = nullptr;};
      inline string getBatchName() const { DARABONBA_PTR_GET_DEFAULT(batchName_, "") };
      inline BatchList& setBatchName(string batchName) { DARABONBA_PTR_SET_VALUE(batchName_, batchName) };


      // batchNo Field Functions 
      bool hasBatchNo() const { return this->batchNo_ != nullptr;};
      void deleteBatchNo() { this->batchNo_ = nullptr;};
      inline int32_t getBatchNo() const { DARABONBA_PTR_GET_DEFAULT(batchNo_, 0) };
      inline BatchList& setBatchNo(int32_t batchNo) { DARABONBA_PTR_SET_VALUE(batchNo_, batchNo) };


      // batchProcess Field Functions 
      bool hasBatchProcess() const { return this->batchProcess_ != nullptr;};
      void deleteBatchProcess() { this->batchProcess_ = nullptr;};
      inline int32_t getBatchProcess() const { DARABONBA_PTR_GET_DEFAULT(batchProcess_, 0) };
      inline BatchList& setBatchProcess(int32_t batchProcess) { DARABONBA_PTR_SET_VALUE(batchProcess_, batchProcess) };


      // batchTotal Field Functions 
      bool hasBatchTotal() const { return this->batchTotal_ != nullptr;};
      void deleteBatchTotal() { this->batchTotal_ = nullptr;};
      inline int32_t getBatchTotal() const { DARABONBA_PTR_GET_DEFAULT(batchTotal_, 0) };
      inline BatchList& setBatchTotal(int32_t batchTotal) { DARABONBA_PTR_SET_VALUE(batchTotal_, batchTotal) };


      // operationBase Field Functions 
      bool hasOperationBase() const { return this->operationBase_ != nullptr;};
      void deleteOperationBase() { this->operationBase_ = nullptr;};
      inline int32_t getOperationBase() const { DARABONBA_PTR_GET_DEFAULT(operationBase_, 0) };
      inline BatchList& setOperationBase(int32_t operationBase) { DARABONBA_PTR_SET_VALUE(operationBase_, operationBase) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline BatchList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline BatchList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The ID of the release batch.
      shared_ptr<int64_t> batchId_ {};
      // The interval between two release batches. Unit: hours.
      shared_ptr<int32_t> batchInterval_ {};
      // The name of the release batch.
      shared_ptr<string> batchName_ {};
      // The current batch number during a batch release.
      shared_ptr<int32_t> batchNo_ {};
      // The progress of the release batch. This parameter indicates the number of servers that are upgraded in the release batch.
      shared_ptr<int32_t> batchProcess_ {};
      // The total number of batches.
      shared_ptr<int32_t> batchTotal_ {};
      // The asset selection dimension. Valid values:
      // 
      // *   **0**: instance.
      // *   **1**: machine group.
      // *   **2**: Virtual Private Cloud (VPC) ID.
      shared_ptr<int32_t> operationBase_ {};
      // The publish status of the Security Center agent. Valid values:
      // 
      // *   **0**: not started.
      // *   **1**: publishing.
      // *   **2**: published.
      // *   **3**: publish suspended.
      // *   **4**: forcibly upgrading.
      shared_ptr<int32_t> status_ {};
      // The destination version of the Security Center agent.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->batchList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // batchList Field Functions 
    bool hasBatchList() const { return this->batchList_ != nullptr;};
    void deleteBatchList() { this->batchList_ = nullptr;};
    inline const vector<ListPublishBatchResponseBody::BatchList> & getBatchList() const { DARABONBA_PTR_GET_CONST(batchList_, vector<ListPublishBatchResponseBody::BatchList>) };
    inline vector<ListPublishBatchResponseBody::BatchList> getBatchList() { DARABONBA_PTR_GET(batchList_, vector<ListPublishBatchResponseBody::BatchList>) };
    inline ListPublishBatchResponseBody& setBatchList(const vector<ListPublishBatchResponseBody::BatchList> & batchList) { DARABONBA_PTR_SET_VALUE(batchList_, batchList) };
    inline ListPublishBatchResponseBody& setBatchList(vector<ListPublishBatchResponseBody::BatchList> && batchList) { DARABONBA_PTR_SET_RVALUE(batchList_, batchList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListPublishBatchResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListPublishBatchResponseBody::PageInfo) };
    inline ListPublishBatchResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListPublishBatchResponseBody::PageInfo) };
    inline ListPublishBatchResponseBody& setPageInfo(const ListPublishBatchResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListPublishBatchResponseBody& setPageInfo(ListPublishBatchResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublishBatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the release batches.
    shared_ptr<vector<ListPublishBatchResponseBody::BatchList>> batchList_ {};
    // The page information.
    shared_ptr<ListPublishBatchResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
