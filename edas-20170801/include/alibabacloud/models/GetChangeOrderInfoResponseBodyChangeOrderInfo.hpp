// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODYCHANGEORDERINFO_HPP_
#define ALIBABACLOUD_MODELS_GETCHANGEORDERINFORESPONSEBODYCHANGEORDERINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList.hpp>
#include <alibabacloud/models/GetChangeOrderInfoResponseBodyChangeOrderInfoTargets.hpp>
#include <alibabacloud/models/GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetChangeOrderInfoResponseBodyChangeOrderInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChangeOrderInfoResponseBodyChangeOrderInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BatchCount, batchCount_);
      DARABONBA_PTR_TO_JSON(BatchType, batchType_);
      DARABONBA_PTR_TO_JSON(ChangeOrderDescription, changeOrderDescription_);
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_TO_JSON(CoType, coType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(PipelineInfoList, pipelineInfoList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportRollback, supportRollback_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(TrafficControl, trafficControl_);
    };
    friend void from_json(const Darabonba::Json& j, GetChangeOrderInfoResponseBodyChangeOrderInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchCount, batchCount_);
      DARABONBA_PTR_FROM_JSON(BatchType, batchType_);
      DARABONBA_PTR_FROM_JSON(ChangeOrderDescription, changeOrderDescription_);
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(CoType, coType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUserId, createUserId_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(PipelineInfoList, pipelineInfoList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportRollback, supportRollback_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(TrafficControl, trafficControl_);
    };
    GetChangeOrderInfoResponseBodyChangeOrderInfo() = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfo(const GetChangeOrderInfoResponseBodyChangeOrderInfo &) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfo(GetChangeOrderInfoResponseBodyChangeOrderInfo &&) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChangeOrderInfoResponseBodyChangeOrderInfo() = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfo& operator=(const GetChangeOrderInfoResponseBodyChangeOrderInfo &) = default ;
    GetChangeOrderInfoResponseBodyChangeOrderInfo& operator=(GetChangeOrderInfoResponseBodyChangeOrderInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchCount_ == nullptr
        && return this->batchType_ == nullptr && return this->changeOrderDescription_ == nullptr && return this->changeOrderId_ == nullptr && return this->coType_ == nullptr && return this->createTime_ == nullptr
        && return this->createUserId_ == nullptr && return this->desc_ == nullptr && return this->pipelineInfoList_ == nullptr && return this->status_ == nullptr && return this->supportRollback_ == nullptr
        && return this->targets_ == nullptr && return this->trafficControl_ == nullptr; };
    // batchCount Field Functions 
    bool hasBatchCount() const { return this->batchCount_ != nullptr;};
    void deleteBatchCount() { this->batchCount_ = nullptr;};
    inline int32_t batchCount() const { DARABONBA_PTR_GET_DEFAULT(batchCount_, 0) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setBatchCount(int32_t batchCount) { DARABONBA_PTR_SET_VALUE(batchCount_, batchCount) };


    // batchType Field Functions 
    bool hasBatchType() const { return this->batchType_ != nullptr;};
    void deleteBatchType() { this->batchType_ = nullptr;};
    inline string batchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setBatchType(string batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


    // changeOrderDescription Field Functions 
    bool hasChangeOrderDescription() const { return this->changeOrderDescription_ != nullptr;};
    void deleteChangeOrderDescription() { this->changeOrderDescription_ = nullptr;};
    inline string changeOrderDescription() const { DARABONBA_PTR_GET_DEFAULT(changeOrderDescription_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setChangeOrderDescription(string changeOrderDescription) { DARABONBA_PTR_SET_VALUE(changeOrderDescription_, changeOrderDescription) };


    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // coType Field Functions 
    bool hasCoType() const { return this->coType_ != nullptr;};
    void deleteCoType() { this->coType_ = nullptr;};
    inline string coType() const { DARABONBA_PTR_GET_DEFAULT(coType_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setCoType(string coType) { DARABONBA_PTR_SET_VALUE(coType_, coType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUserId Field Functions 
    bool hasCreateUserId() const { return this->createUserId_ != nullptr;};
    void deleteCreateUserId() { this->createUserId_ = nullptr;};
    inline string createUserId() const { DARABONBA_PTR_GET_DEFAULT(createUserId_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setCreateUserId(string createUserId) { DARABONBA_PTR_SET_VALUE(createUserId_, createUserId) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // pipelineInfoList Field Functions 
    bool hasPipelineInfoList() const { return this->pipelineInfoList_ != nullptr;};
    void deletePipelineInfoList() { this->pipelineInfoList_ = nullptr;};
    inline const Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList & pipelineInfoList() const { DARABONBA_PTR_GET_CONST(pipelineInfoList_, Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList) };
    inline Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList pipelineInfoList() { DARABONBA_PTR_GET(pipelineInfoList_, Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setPipelineInfoList(const Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList & pipelineInfoList) { DARABONBA_PTR_SET_VALUE(pipelineInfoList_, pipelineInfoList) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setPipelineInfoList(Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList && pipelineInfoList) { DARABONBA_PTR_SET_RVALUE(pipelineInfoList_, pipelineInfoList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportRollback Field Functions 
    bool hasSupportRollback() const { return this->supportRollback_ != nullptr;};
    void deleteSupportRollback() { this->supportRollback_ = nullptr;};
    inline bool supportRollback() const { DARABONBA_PTR_GET_DEFAULT(supportRollback_, false) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setSupportRollback(bool supportRollback) { DARABONBA_PTR_SET_VALUE(supportRollback_, supportRollback) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const Models::GetChangeOrderInfoResponseBodyChangeOrderInfoTargets & targets() const { DARABONBA_PTR_GET_CONST(targets_, Models::GetChangeOrderInfoResponseBodyChangeOrderInfoTargets) };
    inline Models::GetChangeOrderInfoResponseBodyChangeOrderInfoTargets targets() { DARABONBA_PTR_GET(targets_, Models::GetChangeOrderInfoResponseBodyChangeOrderInfoTargets) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setTargets(const Models::GetChangeOrderInfoResponseBodyChangeOrderInfoTargets & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setTargets(Models::GetChangeOrderInfoResponseBodyChangeOrderInfoTargets && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    // trafficControl Field Functions 
    bool hasTrafficControl() const { return this->trafficControl_ != nullptr;};
    void deleteTrafficControl() { this->trafficControl_ = nullptr;};
    inline const Models::GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl & trafficControl() const { DARABONBA_PTR_GET_CONST(trafficControl_, Models::GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl) };
    inline Models::GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl trafficControl() { DARABONBA_PTR_GET(trafficControl_, Models::GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setTrafficControl(const Models::GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl & trafficControl) { DARABONBA_PTR_SET_VALUE(trafficControl_, trafficControl) };
    inline GetChangeOrderInfoResponseBodyChangeOrderInfo& setTrafficControl(Models::GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl && trafficControl) { DARABONBA_PTR_SET_RVALUE(trafficControl_, trafficControl) };


  protected:
    // The number of batches for the change.
    std::shared_ptr<int32_t> batchCount_ = nullptr;
    // Indicates whether the change for the next batch is automatically or manually triggered when phased release is performed. Valid values:
    // 
    // *   Automatic: The change for the next batch is automatically triggered.
    // *   Manual: The change for the next batch is manually triggered.
    std::shared_ptr<string> batchType_ = nullptr;
    // The description of the change process.
    std::shared_ptr<string> changeOrderDescription_ = nullptr;
    // The ID of the change process.
    std::shared_ptr<string> changeOrderId_ = nullptr;
    // The type of the change process.
    std::shared_ptr<string> coType_ = nullptr;
    // The time when the change process is created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The person in charge of the change process.
    std::shared_ptr<string> createUserId_ = nullptr;
    // The description of the change process.
    std::shared_ptr<string> desc_ = nullptr;
    // The information about the batches of the change task.
    std::shared_ptr<Models::GetChangeOrderInfoResponseBodyChangeOrderInfoPipelineInfoList> pipelineInfoList_ = nullptr;
    // The state of the change process. Valid values:
    // 
    // *   0: ready
    // *   1: in progress
    // *   2: successful
    // *   3: failed
    // *   6: terminated
    // *   7: partially executed
    // *   8: wait for manual confirmation to trigger the next batch during a manual phased release
    // *   9: wait to trigger the next batch during an automatic phased release
    // *   10: failed due to a system exception
    std::shared_ptr<int32_t> status_ = nullptr;
    // Indicates whether rollbacks are allowed. Valid values:
    // 
    // *   true: Rollbacks are allowed.
    // *   false: Rollbacks are not allowed.
    std::shared_ptr<bool> supportRollback_ = nullptr;
    std::shared_ptr<Models::GetChangeOrderInfoResponseBodyChangeOrderInfoTargets> targets_ = nullptr;
    // The throttling rules.
    std::shared_ptr<Models::GetChangeOrderInfoResponseBodyChangeOrderInfoTrafficControl> trafficControl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
