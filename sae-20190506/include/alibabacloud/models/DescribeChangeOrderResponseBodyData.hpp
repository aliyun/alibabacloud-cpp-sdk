// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHANGEORDERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHANGEORDERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeChangeOrderResponseBodyDataPipelines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeChangeOrderResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChangeOrderResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ApplicationEnableGreyTagRoute, applicationEnableGreyTagRoute_);
      DARABONBA_PTR_TO_JSON(ApplicationUpdateStrategy, applicationUpdateStrategy_);
      DARABONBA_PTR_TO_JSON(ApprovalId, approvalId_);
      DARABONBA_PTR_TO_JSON(Auto, auto_);
      DARABONBA_PTR_TO_JSON(BatchCount, batchCount_);
      DARABONBA_PTR_TO_JSON(BatchType, batchType_);
      DARABONBA_PTR_TO_JSON(BatchWaitTime, batchWaitTime_);
      DARABONBA_PTR_TO_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_TO_JSON(CoType, coType_);
      DARABONBA_PTR_TO_JSON(CoTypeCode, coTypeCode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CurrentPipelineId, currentPipelineId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Pipelines, pipelines_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_TO_JSON(SupportRollback, supportRollback_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChangeOrderResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ApplicationEnableGreyTagRoute, applicationEnableGreyTagRoute_);
      DARABONBA_PTR_FROM_JSON(ApplicationUpdateStrategy, applicationUpdateStrategy_);
      DARABONBA_PTR_FROM_JSON(ApprovalId, approvalId_);
      DARABONBA_PTR_FROM_JSON(Auto, auto_);
      DARABONBA_PTR_FROM_JSON(BatchCount, batchCount_);
      DARABONBA_PTR_FROM_JSON(BatchType, batchType_);
      DARABONBA_PTR_FROM_JSON(BatchWaitTime, batchWaitTime_);
      DARABONBA_PTR_FROM_JSON(ChangeOrderId, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(CoType, coType_);
      DARABONBA_PTR_FROM_JSON(CoTypeCode, coTypeCode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CurrentPipelineId, currentPipelineId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Pipelines, pipelines_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_FROM_JSON(SupportRollback, supportRollback_);
    };
    DescribeChangeOrderResponseBodyData() = default ;
    DescribeChangeOrderResponseBodyData(const DescribeChangeOrderResponseBodyData &) = default ;
    DescribeChangeOrderResponseBodyData(DescribeChangeOrderResponseBodyData &&) = default ;
    DescribeChangeOrderResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChangeOrderResponseBodyData() = default ;
    DescribeChangeOrderResponseBodyData& operator=(const DescribeChangeOrderResponseBodyData &) = default ;
    DescribeChangeOrderResponseBodyData& operator=(DescribeChangeOrderResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->applicationEnableGreyTagRoute_ != nullptr && this->applicationUpdateStrategy_ != nullptr && this->approvalId_ != nullptr && this->auto_ != nullptr
        && this->batchCount_ != nullptr && this->batchType_ != nullptr && this->batchWaitTime_ != nullptr && this->changeOrderId_ != nullptr && this->coType_ != nullptr
        && this->coTypeCode_ != nullptr && this->createTime_ != nullptr && this->currentPipelineId_ != nullptr && this->description_ != nullptr && this->errorMessage_ != nullptr
        && this->pipelines_ != nullptr && this->status_ != nullptr && this->subStatus_ != nullptr && this->supportRollback_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeChangeOrderResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeChangeOrderResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // applicationEnableGreyTagRoute Field Functions 
    bool hasApplicationEnableGreyTagRoute() const { return this->applicationEnableGreyTagRoute_ != nullptr;};
    void deleteApplicationEnableGreyTagRoute() { this->applicationEnableGreyTagRoute_ = nullptr;};
    inline bool applicationEnableGreyTagRoute() const { DARABONBA_PTR_GET_DEFAULT(applicationEnableGreyTagRoute_, false) };
    inline DescribeChangeOrderResponseBodyData& setApplicationEnableGreyTagRoute(bool applicationEnableGreyTagRoute) { DARABONBA_PTR_SET_VALUE(applicationEnableGreyTagRoute_, applicationEnableGreyTagRoute) };


    // applicationUpdateStrategy Field Functions 
    bool hasApplicationUpdateStrategy() const { return this->applicationUpdateStrategy_ != nullptr;};
    void deleteApplicationUpdateStrategy() { this->applicationUpdateStrategy_ = nullptr;};
    inline string applicationUpdateStrategy() const { DARABONBA_PTR_GET_DEFAULT(applicationUpdateStrategy_, "") };
    inline DescribeChangeOrderResponseBodyData& setApplicationUpdateStrategy(string applicationUpdateStrategy) { DARABONBA_PTR_SET_VALUE(applicationUpdateStrategy_, applicationUpdateStrategy) };


    // approvalId Field Functions 
    bool hasApprovalId() const { return this->approvalId_ != nullptr;};
    void deleteApprovalId() { this->approvalId_ = nullptr;};
    inline string approvalId() const { DARABONBA_PTR_GET_DEFAULT(approvalId_, "") };
    inline DescribeChangeOrderResponseBodyData& setApprovalId(string approvalId) { DARABONBA_PTR_SET_VALUE(approvalId_, approvalId) };


    // auto Field Functions 
    bool hasAuto() const { return this->auto_ != nullptr;};
    void deleteAuto() { this->auto_ = nullptr;};
    inline bool _auto() const { DARABONBA_PTR_GET_DEFAULT(auto_, false) };
    inline DescribeChangeOrderResponseBodyData& setAuto(bool _auto) { DARABONBA_PTR_SET_VALUE(auto_, _auto) };


    // batchCount Field Functions 
    bool hasBatchCount() const { return this->batchCount_ != nullptr;};
    void deleteBatchCount() { this->batchCount_ = nullptr;};
    inline int32_t batchCount() const { DARABONBA_PTR_GET_DEFAULT(batchCount_, 0) };
    inline DescribeChangeOrderResponseBodyData& setBatchCount(int32_t batchCount) { DARABONBA_PTR_SET_VALUE(batchCount_, batchCount) };


    // batchType Field Functions 
    bool hasBatchType() const { return this->batchType_ != nullptr;};
    void deleteBatchType() { this->batchType_ = nullptr;};
    inline string batchType() const { DARABONBA_PTR_GET_DEFAULT(batchType_, "") };
    inline DescribeChangeOrderResponseBodyData& setBatchType(string batchType) { DARABONBA_PTR_SET_VALUE(batchType_, batchType) };


    // batchWaitTime Field Functions 
    bool hasBatchWaitTime() const { return this->batchWaitTime_ != nullptr;};
    void deleteBatchWaitTime() { this->batchWaitTime_ = nullptr;};
    inline int32_t batchWaitTime() const { DARABONBA_PTR_GET_DEFAULT(batchWaitTime_, 0) };
    inline DescribeChangeOrderResponseBodyData& setBatchWaitTime(int32_t batchWaitTime) { DARABONBA_PTR_SET_VALUE(batchWaitTime_, batchWaitTime) };


    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline DescribeChangeOrderResponseBodyData& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // coType Field Functions 
    bool hasCoType() const { return this->coType_ != nullptr;};
    void deleteCoType() { this->coType_ = nullptr;};
    inline string coType() const { DARABONBA_PTR_GET_DEFAULT(coType_, "") };
    inline DescribeChangeOrderResponseBodyData& setCoType(string coType) { DARABONBA_PTR_SET_VALUE(coType_, coType) };


    // coTypeCode Field Functions 
    bool hasCoTypeCode() const { return this->coTypeCode_ != nullptr;};
    void deleteCoTypeCode() { this->coTypeCode_ = nullptr;};
    inline string coTypeCode() const { DARABONBA_PTR_GET_DEFAULT(coTypeCode_, "") };
    inline DescribeChangeOrderResponseBodyData& setCoTypeCode(string coTypeCode) { DARABONBA_PTR_SET_VALUE(coTypeCode_, coTypeCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeChangeOrderResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // currentPipelineId Field Functions 
    bool hasCurrentPipelineId() const { return this->currentPipelineId_ != nullptr;};
    void deleteCurrentPipelineId() { this->currentPipelineId_ = nullptr;};
    inline string currentPipelineId() const { DARABONBA_PTR_GET_DEFAULT(currentPipelineId_, "") };
    inline DescribeChangeOrderResponseBodyData& setCurrentPipelineId(string currentPipelineId) { DARABONBA_PTR_SET_VALUE(currentPipelineId_, currentPipelineId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeChangeOrderResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeChangeOrderResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // pipelines Field Functions 
    bool hasPipelines() const { return this->pipelines_ != nullptr;};
    void deletePipelines() { this->pipelines_ = nullptr;};
    inline const vector<Models::DescribeChangeOrderResponseBodyDataPipelines> & pipelines() const { DARABONBA_PTR_GET_CONST(pipelines_, vector<Models::DescribeChangeOrderResponseBodyDataPipelines>) };
    inline vector<Models::DescribeChangeOrderResponseBodyDataPipelines> pipelines() { DARABONBA_PTR_GET(pipelines_, vector<Models::DescribeChangeOrderResponseBodyDataPipelines>) };
    inline DescribeChangeOrderResponseBodyData& setPipelines(const vector<Models::DescribeChangeOrderResponseBodyDataPipelines> & pipelines) { DARABONBA_PTR_SET_VALUE(pipelines_, pipelines) };
    inline DescribeChangeOrderResponseBodyData& setPipelines(vector<Models::DescribeChangeOrderResponseBodyDataPipelines> && pipelines) { DARABONBA_PTR_SET_RVALUE(pipelines_, pipelines) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeChangeOrderResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline int32_t subStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, 0) };
    inline DescribeChangeOrderResponseBodyData& setSubStatus(int32_t subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


    // supportRollback Field Functions 
    bool hasSupportRollback() const { return this->supportRollback_ != nullptr;};
    void deleteSupportRollback() { this->supportRollback_ = nullptr;};
    inline bool supportRollback() const { DARABONBA_PTR_GET_DEFAULT(supportRollback_, false) };
    inline DescribeChangeOrderResponseBodyData& setSupportRollback(bool supportRollback) { DARABONBA_PTR_SET_VALUE(supportRollback_, supportRollback) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<bool> applicationEnableGreyTagRoute_ = nullptr;
    std::shared_ptr<string> applicationUpdateStrategy_ = nullptr;
    // The approval ID of the change order.
    std::shared_ptr<string> approvalId_ = nullptr;
    // Indicates whether SAE automatically releases the batches. Valid values:
    // 
    // *   **true**: SAE automatically releases the batches.
    // *   **false**: SAE does not automatically release the batches.
    std::shared_ptr<bool> auto_ = nullptr;
    // The number of release batches.
    std::shared_ptr<int32_t> batchCount_ = nullptr;
    // The processing method for the batches. Valid values:
    // 
    // *   **auto**: SAE automatically releases the batches.
    // *   **Manual**: You must manually release the batches.
    std::shared_ptr<string> batchType_ = nullptr;
    // The interval between batches in a phased release. SAE automatically releases batches at the specified interval. Unit: minutes.
    std::shared_ptr<int32_t> batchWaitTime_ = nullptr;
    // The ID of the change order.
    std::shared_ptr<string> changeOrderId_ = nullptr;
    // The change type, which corresponds to the **CoTypeCode** parameter.
    std::shared_ptr<string> coType_ = nullptr;
    // The code of the change type. Valid values:
    // 
    // *   **CoBindSlb**: associates a Sever Load Balancer (SLB) instance with the application.
    // *   **CoUnbindSlb**: disassociates the SLB instance from the application.
    // *   **CoCreateApp**: creates the application.
    // *   **CoDeleteApp**: deletes the application.
    // *   **CoDeploy**: deploys the application.
    // *   **CoRestartApplication**: restarts the application.
    // *   **CoRollback**: rolls back the application.
    // *   **CoScaleIn**: scales in the application.
    // *   **CoScaleOut**: scales out the application.
    // *   **CoStart**: starts the application.
    // *   **CoStop**: stops the application.
    // *   **CoRescaleApplicationVertically**: modifies the instance type.
    // *   **CoDeployHistroy**: rolls back the application to a historical version.
    // *   **CoBindNas**: associates a NAS file system with the application.
    // *   **CoUnbindNas**: disassociates the NAS file system from the application.
    // *   **CoBatchStartApplication**: starts multiple applications concurrently.
    // *   **CoBatchStopApplication**: stops multiple applications concurrently.
    // *   **CoRestartInstances**: restarts the instances.
    // *   **CoDeleteInstances**: deletes the instances.
    // *   **CoScaleInAppWithInstances**: reduces the specified number of application instances.
    std::shared_ptr<string> coTypeCode_ = nullptr;
    // The time when the change order was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the current batch.
    std::shared_ptr<string> currentPipelineId_ = nullptr;
    // The description of the change order.
    std::shared_ptr<string> description_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The batch information.
    std::shared_ptr<vector<Models::DescribeChangeOrderResponseBodyDataPipelines>> pipelines_ = nullptr;
    // The status of the change order. Valid values:
    // 
    // *   **0**: The change order is being prepared.
    // *   **1**: The change order is being executed.
    // *   **2**: The change order was executed.
    // *   **3**: The change order failed to be executed.
    // *   **6**: The change order was terminated.
    // *   **8**: The execution process is pending. You must manually release the batches.
    // *   **9**: The execution process is pending. SAE will automatically release the batches.
    // *   **10**: The execution failed due to a system exception.
    // *   **11**: The change order is pending approval.
    // *   **12**: The change order is approved and is pending execution.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The substatus of the change order. This parameter indicates whether an exception occurred while the change order was being executed. Valid values:
    // 
    // *   **0**: No exception occurred.
    // *   **1**: An exception occurred. For example, if an error occurs during a phased release, you must manually roll back the application. In this case, the change order cannot be completed, so the Status parameter is still displayed as "1", which indicates that the change order is being executed. You can check the value of this parameter to determine whether an exception occurs.
    std::shared_ptr<int32_t> subStatus_ = nullptr;
    // Indicates whether the application can be rolled back. Valid values:
    // 
    // *   **true**: The application can be rolled back.
    // *   **false**: The application cannot be rolled back.
    std::shared_ptr<bool> supportRollback_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
