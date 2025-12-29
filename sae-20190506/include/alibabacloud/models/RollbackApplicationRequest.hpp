// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLBACKAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROLLBACKAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class RollbackApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RollbackApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AutoEnableApplicationScalingRule, autoEnableApplicationScalingRule_);
      DARABONBA_PTR_TO_JSON(BatchWaitTime, batchWaitTime_);
      DARABONBA_PTR_TO_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_TO_JSON(MinReadyInstances, minReadyInstances_);
      DARABONBA_PTR_TO_JSON(UpdateStrategy, updateStrategy_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, RollbackApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AutoEnableApplicationScalingRule, autoEnableApplicationScalingRule_);
      DARABONBA_PTR_FROM_JSON(BatchWaitTime, batchWaitTime_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstanceRatio, minReadyInstanceRatio_);
      DARABONBA_PTR_FROM_JSON(MinReadyInstances, minReadyInstances_);
      DARABONBA_PTR_FROM_JSON(UpdateStrategy, updateStrategy_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    RollbackApplicationRequest() = default ;
    RollbackApplicationRequest(const RollbackApplicationRequest &) = default ;
    RollbackApplicationRequest(RollbackApplicationRequest &&) = default ;
    RollbackApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RollbackApplicationRequest() = default ;
    RollbackApplicationRequest& operator=(const RollbackApplicationRequest &) = default ;
    RollbackApplicationRequest& operator=(RollbackApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->autoEnableApplicationScalingRule_ == nullptr && this->batchWaitTime_ == nullptr && this->minReadyInstanceRatio_ == nullptr && this->minReadyInstances_ == nullptr && this->updateStrategy_ == nullptr
        && this->versionId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RollbackApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // autoEnableApplicationScalingRule Field Functions 
    bool hasAutoEnableApplicationScalingRule() const { return this->autoEnableApplicationScalingRule_ != nullptr;};
    void deleteAutoEnableApplicationScalingRule() { this->autoEnableApplicationScalingRule_ = nullptr;};
    inline string getAutoEnableApplicationScalingRule() const { DARABONBA_PTR_GET_DEFAULT(autoEnableApplicationScalingRule_, "") };
    inline RollbackApplicationRequest& setAutoEnableApplicationScalingRule(string autoEnableApplicationScalingRule) { DARABONBA_PTR_SET_VALUE(autoEnableApplicationScalingRule_, autoEnableApplicationScalingRule) };


    // batchWaitTime Field Functions 
    bool hasBatchWaitTime() const { return this->batchWaitTime_ != nullptr;};
    void deleteBatchWaitTime() { this->batchWaitTime_ = nullptr;};
    inline int32_t getBatchWaitTime() const { DARABONBA_PTR_GET_DEFAULT(batchWaitTime_, 0) };
    inline RollbackApplicationRequest& setBatchWaitTime(int32_t batchWaitTime) { DARABONBA_PTR_SET_VALUE(batchWaitTime_, batchWaitTime) };


    // minReadyInstanceRatio Field Functions 
    bool hasMinReadyInstanceRatio() const { return this->minReadyInstanceRatio_ != nullptr;};
    void deleteMinReadyInstanceRatio() { this->minReadyInstanceRatio_ = nullptr;};
    inline int32_t getMinReadyInstanceRatio() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstanceRatio_, 0) };
    inline RollbackApplicationRequest& setMinReadyInstanceRatio(int32_t minReadyInstanceRatio) { DARABONBA_PTR_SET_VALUE(minReadyInstanceRatio_, minReadyInstanceRatio) };


    // minReadyInstances Field Functions 
    bool hasMinReadyInstances() const { return this->minReadyInstances_ != nullptr;};
    void deleteMinReadyInstances() { this->minReadyInstances_ = nullptr;};
    inline int32_t getMinReadyInstances() const { DARABONBA_PTR_GET_DEFAULT(minReadyInstances_, 0) };
    inline RollbackApplicationRequest& setMinReadyInstances(int32_t minReadyInstances) { DARABONBA_PTR_SET_VALUE(minReadyInstances_, minReadyInstances) };


    // updateStrategy Field Functions 
    bool hasUpdateStrategy() const { return this->updateStrategy_ != nullptr;};
    void deleteUpdateStrategy() { this->updateStrategy_ = nullptr;};
    inline string getUpdateStrategy() const { DARABONBA_PTR_GET_DEFAULT(updateStrategy_, "") };
    inline RollbackApplicationRequest& setUpdateStrategy(string updateStrategy) { DARABONBA_PTR_SET_VALUE(updateStrategy_, updateStrategy) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline RollbackApplicationRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // Specifies whether to automatically enable an auto scaling policy for the application. Take note of the following rules:
    // 
    // *   **true**: turns on Logon-free Sharing
    // *   **false**: turns off Logon-free Sharing
    shared_ptr<string> autoEnableApplicationScalingRule_ {};
    // The wait time between batches. Unit: seconds.
    shared_ptr<int32_t> batchWaitTime_ {};
    // The percentage of the minimum number of available instances. Take note of the following rules:
    // 
    // *   If you set the value to **-1**, the minimum number of available instances is not determined based on this parameter. Default value: -1.
    // *   If you set the value to a number **from 0 to 100**, the minimum number of available instances is calculated by using the following formula: Current number of instances × (Value of MinReadyInstanceRatio × 100%). The value is the nearest integer rounded up from the calculated result. For example, if the percentage is set to **50**% and five instances are available, the minimum number of available instances is 3.
    // 
    // > When both **MinReadyInstance** and **MinReadyInstanceRatio** are specified and **MinReadyInstanceRatio** is set to a number from 0 to 100, the value of **MinReadyInstanceRatio** takes precedence.** For example, if **MinReadyInstances** is set to **5, and **MinReadyInstanceRatio** is set to **50**, the minimum number of available instances is set to the nearest integer rounded up from the calculated result of the following formula: Current number of instances × **50%**.
    shared_ptr<int32_t> minReadyInstanceRatio_ {};
    // The minimum number of available instances. Take note of the following rules:
    // 
    // *   If you set the value to **0**, business interruptions occur when the application is updated.
    // *   If you set the value to \\*\\*-1\\*\\*, the minimum number of available instances is automatically set to a system-recommended value. The value is the nearest integer to which the calculated result of the following formula is rounded up: Current number of instances × 25%. For example, if five instances are available, the minimum number of available instances is calculated by using the following formula: 5 × 25% = 1.25. In this case, the minimum number of available instances is 2.
    // 
    // > Make sure that at least one instance is available during application deployment and rollback to prevent business interruptions.
    shared_ptr<int32_t> minReadyInstances_ {};
    // The deployment policy. If the minimum number of available instances is 1, the value of the **UpdateStrategy** parameter is an empty string (""). If the minimum number of available instances is larger than 1, specify this parameter based on your requirements. Examples:
    // 
    // *   Perform canary release for one instance and release the remaining instances in two batches automatically with a one-minute interval between the deployment of each instance:
    // 
    //     `{"type":"GrayBatchUpdate","batchUpdate":{"batch":2,"releaseType":"auto","batchWaitTime":1},"grayUpdate":{"gray":1}}`
    // 
    // *   Perform canary release for one instance and release the remaining instances in two batches manually:
    // 
    //     `{"type":"GrayBatchUpdate","batchUpdate":{"batch":2,"releaseType":"manual"},"grayUpdate":{"gray":1}}`
    // 
    // *   Release the instances in two batches automatically with no interval between the deployment of each instance:
    // 
    //     `{"type":"BatchUpdate","batchUpdate":{"batch":2,"releaseType":"auto","batchWaitTime":0}}`
    // 
    // The following table describes the parameters that are used in the preceding statements.
    // 
    // *   **type**: the type of the release policy. Valid values: **GrayBatchUpdate** and **BatchUpdate**.
    // 
    // *   **batchUpdate**: the phased release policy.
    // 
    //     *   **batch**: the number of release batches.
    //     *   **releaseType**: the processing method for the batches. Valid values: **auto** and **manual**.
    //     *   **batchWaitTime**: the interval between release batches. Unit: seconds.
    // 
    // *   **grayUpdate**: the number of release batches in the phased release after a canary release. This parameter is returned only if the **type** parameter is set to **GrayBatchUpdate**.
    shared_ptr<string> updateStrategy_ {};
    // The ID of the application version. Call the [ListAppVersions](https://help.aliyun.com/document_detail/162054.html) operation to obtain the version ID.
    // 
    // This parameter is required.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
