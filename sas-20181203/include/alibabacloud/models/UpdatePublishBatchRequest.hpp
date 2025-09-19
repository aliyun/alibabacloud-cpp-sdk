// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPUBLISHBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPUBLISHBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdatePublishBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePublishBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(BatchName, batchName_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OperationBase, operationBase_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePublishBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(BatchName, batchName_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OperationBase, operationBase_);
    };
    UpdatePublishBatchRequest() = default ;
    UpdatePublishBatchRequest(const UpdatePublishBatchRequest &) = default ;
    UpdatePublishBatchRequest(UpdatePublishBatchRequest &&) = default ;
    UpdatePublishBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePublishBatchRequest() = default ;
    UpdatePublishBatchRequest& operator=(const UpdatePublishBatchRequest &) = default ;
    UpdatePublishBatchRequest& operator=(UpdatePublishBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchId_ != nullptr
        && this->batchName_ != nullptr && this->interval_ != nullptr && this->operationBase_ != nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline int64_t batchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
    inline UpdatePublishBatchRequest& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // batchName Field Functions 
    bool hasBatchName() const { return this->batchName_ != nullptr;};
    void deleteBatchName() { this->batchName_ = nullptr;};
    inline string batchName() const { DARABONBA_PTR_GET_DEFAULT(batchName_, "") };
    inline UpdatePublishBatchRequest& setBatchName(string batchName) { DARABONBA_PTR_SET_VALUE(batchName_, batchName) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline UpdatePublishBatchRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // operationBase Field Functions 
    bool hasOperationBase() const { return this->operationBase_ != nullptr;};
    void deleteOperationBase() { this->operationBase_ = nullptr;};
    inline int32_t operationBase() const { DARABONBA_PTR_GET_DEFAULT(operationBase_, 0) };
    inline UpdatePublishBatchRequest& setOperationBase(int32_t operationBase) { DARABONBA_PTR_SET_VALUE(operationBase_, operationBase) };


  protected:
    // The ID of the release batch.
    std::shared_ptr<int64_t> batchId_ = nullptr;
    // The name of the release batch.
    std::shared_ptr<string> batchName_ = nullptr;
    // The interval between two release batches.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The asset selection dimension. Valid values:
    // 
    // *   **0**: instance
    // *   **1**: machine group
    // *   **2**: VPC-based instance ID
    std::shared_ptr<int32_t> operationBase_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
