// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ArmsAdvancedEnabled, armsAdvancedEnabled_);
      DARABONBA_PTR_TO_JSON(ArmsApmInfo, armsApmInfo_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CurrentStatus, currentStatus_);
      DARABONBA_PTR_TO_JSON(EnableAgent, enableAgent_);
      DARABONBA_PTR_TO_JSON(FileSizeLimit, fileSizeLimit_);
      DARABONBA_PTR_TO_JSON(LastChangeOrderId, lastChangeOrderId_);
      DARABONBA_PTR_TO_JSON(LastChangeOrderRunning, lastChangeOrderRunning_);
      DARABONBA_PTR_TO_JSON(LastChangeOrderStatus, lastChangeOrderStatus_);
      DARABONBA_PTR_TO_JSON(RunningInstances, runningInstances_);
      DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ArmsAdvancedEnabled, armsAdvancedEnabled_);
      DARABONBA_PTR_FROM_JSON(ArmsApmInfo, armsApmInfo_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CurrentStatus, currentStatus_);
      DARABONBA_PTR_FROM_JSON(EnableAgent, enableAgent_);
      DARABONBA_PTR_FROM_JSON(FileSizeLimit, fileSizeLimit_);
      DARABONBA_PTR_FROM_JSON(LastChangeOrderId, lastChangeOrderId_);
      DARABONBA_PTR_FROM_JSON(LastChangeOrderRunning, lastChangeOrderRunning_);
      DARABONBA_PTR_FROM_JSON(LastChangeOrderStatus, lastChangeOrderStatus_);
      DARABONBA_PTR_FROM_JSON(RunningInstances, runningInstances_);
      DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
    };
    DescribeApplicationStatusResponseBodyData() = default ;
    DescribeApplicationStatusResponseBodyData(const DescribeApplicationStatusResponseBodyData &) = default ;
    DescribeApplicationStatusResponseBodyData(DescribeApplicationStatusResponseBodyData &&) = default ;
    DescribeApplicationStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationStatusResponseBodyData() = default ;
    DescribeApplicationStatusResponseBodyData& operator=(const DescribeApplicationStatusResponseBodyData &) = default ;
    DescribeApplicationStatusResponseBodyData& operator=(DescribeApplicationStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->armsAdvancedEnabled_ != nullptr && this->armsApmInfo_ != nullptr && this->createTime_ != nullptr && this->currentStatus_ != nullptr && this->enableAgent_ != nullptr
        && this->fileSizeLimit_ != nullptr && this->lastChangeOrderId_ != nullptr && this->lastChangeOrderRunning_ != nullptr && this->lastChangeOrderStatus_ != nullptr && this->runningInstances_ != nullptr
        && this->subStatus_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeApplicationStatusResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // armsAdvancedEnabled Field Functions 
    bool hasArmsAdvancedEnabled() const { return this->armsAdvancedEnabled_ != nullptr;};
    void deleteArmsAdvancedEnabled() { this->armsAdvancedEnabled_ = nullptr;};
    inline string armsAdvancedEnabled() const { DARABONBA_PTR_GET_DEFAULT(armsAdvancedEnabled_, "") };
    inline DescribeApplicationStatusResponseBodyData& setArmsAdvancedEnabled(string armsAdvancedEnabled) { DARABONBA_PTR_SET_VALUE(armsAdvancedEnabled_, armsAdvancedEnabled) };


    // armsApmInfo Field Functions 
    bool hasArmsApmInfo() const { return this->armsApmInfo_ != nullptr;};
    void deleteArmsApmInfo() { this->armsApmInfo_ = nullptr;};
    inline string armsApmInfo() const { DARABONBA_PTR_GET_DEFAULT(armsApmInfo_, "") };
    inline DescribeApplicationStatusResponseBodyData& setArmsApmInfo(string armsApmInfo) { DARABONBA_PTR_SET_VALUE(armsApmInfo_, armsApmInfo) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeApplicationStatusResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // currentStatus Field Functions 
    bool hasCurrentStatus() const { return this->currentStatus_ != nullptr;};
    void deleteCurrentStatus() { this->currentStatus_ = nullptr;};
    inline string currentStatus() const { DARABONBA_PTR_GET_DEFAULT(currentStatus_, "") };
    inline DescribeApplicationStatusResponseBodyData& setCurrentStatus(string currentStatus) { DARABONBA_PTR_SET_VALUE(currentStatus_, currentStatus) };


    // enableAgent Field Functions 
    bool hasEnableAgent() const { return this->enableAgent_ != nullptr;};
    void deleteEnableAgent() { this->enableAgent_ = nullptr;};
    inline bool enableAgent() const { DARABONBA_PTR_GET_DEFAULT(enableAgent_, false) };
    inline DescribeApplicationStatusResponseBodyData& setEnableAgent(bool enableAgent) { DARABONBA_PTR_SET_VALUE(enableAgent_, enableAgent) };


    // fileSizeLimit Field Functions 
    bool hasFileSizeLimit() const { return this->fileSizeLimit_ != nullptr;};
    void deleteFileSizeLimit() { this->fileSizeLimit_ = nullptr;};
    inline int64_t fileSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(fileSizeLimit_, 0L) };
    inline DescribeApplicationStatusResponseBodyData& setFileSizeLimit(int64_t fileSizeLimit) { DARABONBA_PTR_SET_VALUE(fileSizeLimit_, fileSizeLimit) };


    // lastChangeOrderId Field Functions 
    bool hasLastChangeOrderId() const { return this->lastChangeOrderId_ != nullptr;};
    void deleteLastChangeOrderId() { this->lastChangeOrderId_ = nullptr;};
    inline string lastChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(lastChangeOrderId_, "") };
    inline DescribeApplicationStatusResponseBodyData& setLastChangeOrderId(string lastChangeOrderId) { DARABONBA_PTR_SET_VALUE(lastChangeOrderId_, lastChangeOrderId) };


    // lastChangeOrderRunning Field Functions 
    bool hasLastChangeOrderRunning() const { return this->lastChangeOrderRunning_ != nullptr;};
    void deleteLastChangeOrderRunning() { this->lastChangeOrderRunning_ = nullptr;};
    inline bool lastChangeOrderRunning() const { DARABONBA_PTR_GET_DEFAULT(lastChangeOrderRunning_, false) };
    inline DescribeApplicationStatusResponseBodyData& setLastChangeOrderRunning(bool lastChangeOrderRunning) { DARABONBA_PTR_SET_VALUE(lastChangeOrderRunning_, lastChangeOrderRunning) };


    // lastChangeOrderStatus Field Functions 
    bool hasLastChangeOrderStatus() const { return this->lastChangeOrderStatus_ != nullptr;};
    void deleteLastChangeOrderStatus() { this->lastChangeOrderStatus_ = nullptr;};
    inline string lastChangeOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(lastChangeOrderStatus_, "") };
    inline DescribeApplicationStatusResponseBodyData& setLastChangeOrderStatus(string lastChangeOrderStatus) { DARABONBA_PTR_SET_VALUE(lastChangeOrderStatus_, lastChangeOrderStatus) };


    // runningInstances Field Functions 
    bool hasRunningInstances() const { return this->runningInstances_ != nullptr;};
    void deleteRunningInstances() { this->runningInstances_ = nullptr;};
    inline int32_t runningInstances() const { DARABONBA_PTR_GET_DEFAULT(runningInstances_, 0) };
    inline DescribeApplicationStatusResponseBodyData& setRunningInstances(int32_t runningInstances) { DARABONBA_PTR_SET_VALUE(runningInstances_, runningInstances) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline string subStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
    inline DescribeApplicationStatusResponseBodyData& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // Indicates whether Application Real-Time Monitoring Service (ARMS) advanced monitoring is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> armsAdvancedEnabled_ = nullptr;
    // The metadata of the application in ARMS.
    std::shared_ptr<string> armsApmInfo_ = nullptr;
    // The time when the application was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The current status of the application. Valid values:
    // 
    // *   **RUNNING**
    // *   **STOPPED**
    // *   **UNKNOWN**
    std::shared_ptr<string> currentStatus_ = nullptr;
    // Indicates whether SAE agent is enabled.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableAgent_ = nullptr;
    // The file size limit. Unit: KB. Valid values: 0 to 10240.
    std::shared_ptr<int64_t> fileSizeLimit_ = nullptr;
    // The ID of the latest change order that is executed. If no change orders are executed or if change orders expire, this parameter is left empty.
    std::shared_ptr<string> lastChangeOrderId_ = nullptr;
    // Indicates whether the latest change order is being executed. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> lastChangeOrderRunning_ = nullptr;
    // The status of the latest change order. Valid values:
    // 
    // *   **READY**: The change order is ready.
    // *   **RUNNING**: The change order is being executed.
    // *   **SUCCESS**: The change order was executed.
    // *   **FAIL**: The change order failed to be executed.
    // *   **ABORT**: The change order is stopped.
    // *   **WAIT_BATCH_CONFIRM**: The change order is pending execution. You must manually confirm the release batch.
    // *   **AUTO_BATCH_WAIT**: The change order is pending execution. SAE will automatically confirm the release batch.
    // *   **SYSTEM_FAIL**: A system exception occurred.
    // *   **WAIT_APPROVAL**: The change order is pending approval.
    // *   **APPROVED**: The change order is approved and is pending execution.
    std::shared_ptr<string> lastChangeOrderStatus_ = nullptr;
    // The number of running instances of the application.
    std::shared_ptr<int32_t> runningInstances_ = nullptr;
    // The substatus of the change order. This parameter indicates whether an exception occurred while the change order was being executed. Valid values:
    // 
    // *   **NORMAL**
    // *   **RUNNING_BUT_HAS_ERROR**: For example, if an error occurs during a phased release, you must manually roll back the application. In this case, the change order cannot be completed because the change order is still being executed.
    std::shared_ptr<string> subStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
