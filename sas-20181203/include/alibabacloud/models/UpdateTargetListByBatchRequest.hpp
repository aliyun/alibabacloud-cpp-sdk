// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETARGETLISTBYBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETARGETLISTBYBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTargetListByBatchRequestOperationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateTargetListByBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTargetListByBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(OperationList, operationList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTargetListByBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(OperationList, operationList_);
    };
    UpdateTargetListByBatchRequest() = default ;
    UpdateTargetListByBatchRequest(const UpdateTargetListByBatchRequest &) = default ;
    UpdateTargetListByBatchRequest(UpdateTargetListByBatchRequest &&) = default ;
    UpdateTargetListByBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTargetListByBatchRequest() = default ;
    UpdateTargetListByBatchRequest& operator=(const UpdateTargetListByBatchRequest &) = default ;
    UpdateTargetListByBatchRequest& operator=(UpdateTargetListByBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchId_ != nullptr
        && this->operationList_ != nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline int64_t batchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
    inline UpdateTargetListByBatchRequest& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // operationList Field Functions 
    bool hasOperationList() const { return this->operationList_ != nullptr;};
    void deleteOperationList() { this->operationList_ = nullptr;};
    inline const vector<UpdateTargetListByBatchRequestOperationList> & operationList() const { DARABONBA_PTR_GET_CONST(operationList_, vector<UpdateTargetListByBatchRequestOperationList>) };
    inline vector<UpdateTargetListByBatchRequestOperationList> operationList() { DARABONBA_PTR_GET(operationList_, vector<UpdateTargetListByBatchRequestOperationList>) };
    inline UpdateTargetListByBatchRequest& setOperationList(const vector<UpdateTargetListByBatchRequestOperationList> & operationList) { DARABONBA_PTR_SET_VALUE(operationList_, operationList) };
    inline UpdateTargetListByBatchRequest& setOperationList(vector<UpdateTargetListByBatchRequestOperationList> && operationList) { DARABONBA_PTR_SET_RVALUE(operationList_, operationList) };


  protected:
    // The ID of the release batch.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> batchId_ = nullptr;
    // The operations on assets.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateTargetListByBatchRequestOperationList>> operationList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
