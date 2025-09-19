// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHBATCHRESPONSEBODYBATCHLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHBATCHRESPONSEBODYBATCHLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListPublishBatchResponseBodyBatchList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishBatchResponseBodyBatchList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListPublishBatchResponseBodyBatchList& obj) { 
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
    ListPublishBatchResponseBodyBatchList() = default ;
    ListPublishBatchResponseBodyBatchList(const ListPublishBatchResponseBodyBatchList &) = default ;
    ListPublishBatchResponseBodyBatchList(ListPublishBatchResponseBodyBatchList &&) = default ;
    ListPublishBatchResponseBodyBatchList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishBatchResponseBodyBatchList() = default ;
    ListPublishBatchResponseBodyBatchList& operator=(const ListPublishBatchResponseBodyBatchList &) = default ;
    ListPublishBatchResponseBodyBatchList& operator=(ListPublishBatchResponseBodyBatchList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchId_ != nullptr
        && this->batchInterval_ != nullptr && this->batchName_ != nullptr && this->batchNo_ != nullptr && this->batchProcess_ != nullptr && this->batchTotal_ != nullptr
        && this->operationBase_ != nullptr && this->status_ != nullptr && this->version_ != nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline int64_t batchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
    inline ListPublishBatchResponseBodyBatchList& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // batchInterval Field Functions 
    bool hasBatchInterval() const { return this->batchInterval_ != nullptr;};
    void deleteBatchInterval() { this->batchInterval_ = nullptr;};
    inline int32_t batchInterval() const { DARABONBA_PTR_GET_DEFAULT(batchInterval_, 0) };
    inline ListPublishBatchResponseBodyBatchList& setBatchInterval(int32_t batchInterval) { DARABONBA_PTR_SET_VALUE(batchInterval_, batchInterval) };


    // batchName Field Functions 
    bool hasBatchName() const { return this->batchName_ != nullptr;};
    void deleteBatchName() { this->batchName_ = nullptr;};
    inline string batchName() const { DARABONBA_PTR_GET_DEFAULT(batchName_, "") };
    inline ListPublishBatchResponseBodyBatchList& setBatchName(string batchName) { DARABONBA_PTR_SET_VALUE(batchName_, batchName) };


    // batchNo Field Functions 
    bool hasBatchNo() const { return this->batchNo_ != nullptr;};
    void deleteBatchNo() { this->batchNo_ = nullptr;};
    inline int32_t batchNo() const { DARABONBA_PTR_GET_DEFAULT(batchNo_, 0) };
    inline ListPublishBatchResponseBodyBatchList& setBatchNo(int32_t batchNo) { DARABONBA_PTR_SET_VALUE(batchNo_, batchNo) };


    // batchProcess Field Functions 
    bool hasBatchProcess() const { return this->batchProcess_ != nullptr;};
    void deleteBatchProcess() { this->batchProcess_ = nullptr;};
    inline int32_t batchProcess() const { DARABONBA_PTR_GET_DEFAULT(batchProcess_, 0) };
    inline ListPublishBatchResponseBodyBatchList& setBatchProcess(int32_t batchProcess) { DARABONBA_PTR_SET_VALUE(batchProcess_, batchProcess) };


    // batchTotal Field Functions 
    bool hasBatchTotal() const { return this->batchTotal_ != nullptr;};
    void deleteBatchTotal() { this->batchTotal_ = nullptr;};
    inline int32_t batchTotal() const { DARABONBA_PTR_GET_DEFAULT(batchTotal_, 0) };
    inline ListPublishBatchResponseBodyBatchList& setBatchTotal(int32_t batchTotal) { DARABONBA_PTR_SET_VALUE(batchTotal_, batchTotal) };


    // operationBase Field Functions 
    bool hasOperationBase() const { return this->operationBase_ != nullptr;};
    void deleteOperationBase() { this->operationBase_ = nullptr;};
    inline int32_t operationBase() const { DARABONBA_PTR_GET_DEFAULT(operationBase_, 0) };
    inline ListPublishBatchResponseBodyBatchList& setOperationBase(int32_t operationBase) { DARABONBA_PTR_SET_VALUE(operationBase_, operationBase) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListPublishBatchResponseBodyBatchList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListPublishBatchResponseBodyBatchList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID of the release batch.
    std::shared_ptr<int64_t> batchId_ = nullptr;
    // The interval between two release batches. Unit: hours.
    std::shared_ptr<int32_t> batchInterval_ = nullptr;
    // The name of the release batch.
    std::shared_ptr<string> batchName_ = nullptr;
    // The current batch number during a batch release.
    std::shared_ptr<int32_t> batchNo_ = nullptr;
    // The progress of the release batch. This parameter indicates the number of servers that are upgraded in the release batch.
    std::shared_ptr<int32_t> batchProcess_ = nullptr;
    // The total number of batches.
    std::shared_ptr<int32_t> batchTotal_ = nullptr;
    // The asset selection dimension. Valid values:
    // 
    // *   **0**: instance.
    // *   **1**: machine group.
    // *   **2**: Virtual Private Cloud (VPC) ID.
    std::shared_ptr<int32_t> operationBase_ = nullptr;
    // The publish status of the Security Center agent. Valid values:
    // 
    // *   **0**: not started.
    // *   **1**: publishing.
    // *   **2**: published.
    // *   **3**: publish suspended.
    // *   **4**: forcibly upgrading.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The destination version of the Security Center agent.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
