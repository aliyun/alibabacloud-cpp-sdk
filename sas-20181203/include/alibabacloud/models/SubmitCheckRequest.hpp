// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class SubmitCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_TO_JSON(TaskSource, taskSource_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryAccountId, resourceDirectoryAccountId_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
      DARABONBA_PTR_FROM_JSON(TaskSource, taskSource_);
    };
    SubmitCheckRequest() = default ;
    SubmitCheckRequest(const SubmitCheckRequest &) = default ;
    SubmitCheckRequest(SubmitCheckRequest &&) = default ;
    SubmitCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCheckRequest() = default ;
    SubmitCheckRequest& operator=(const SubmitCheckRequest &) = default ;
    SubmitCheckRequest& operator=(SubmitCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->resourceDirectoryAccountId_ == nullptr && this->scanRange_ == nullptr && this->taskSource_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline SubmitCheckRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // resourceDirectoryAccountId Field Functions 
    bool hasResourceDirectoryAccountId() const { return this->resourceDirectoryAccountId_ != nullptr;};
    void deleteResourceDirectoryAccountId() { this->resourceDirectoryAccountId_ = nullptr;};
    inline int64_t getResourceDirectoryAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryAccountId_, 0L) };
    inline SubmitCheckRequest& setResourceDirectoryAccountId(int64_t resourceDirectoryAccountId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryAccountId_, resourceDirectoryAccountId) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline string getScanRange() const { DARABONBA_PTR_GET_DEFAULT(scanRange_, "") };
    inline SubmitCheckRequest& setScanRange(string scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };


    // taskSource Field Functions 
    bool hasTaskSource() const { return this->taskSource_ != nullptr;};
    void deleteTaskSource() { this->taskSource_ = nullptr;};
    inline string getTaskSource() const { DARABONBA_PTR_GET_DEFAULT(taskSource_, "") };
    inline SubmitCheckRequest& setTaskSource(string taskSource) { DARABONBA_PTR_SET_VALUE(taskSource_, taskSource) };


  protected:
    // The policy ID. This parameter takes effect only when ScanRange is set to POLICY. You can obtain the value by calling the ListCheckConfigs operation. If this parameter is not specified or is set to default, the scan is triggered based on the system default policy. If the default policy does not exist, NoDefaultStrategy is returned. If another value is specified, the scan is triggered based on the check items of the specified policy. If the policy does not exist or does not belong to the current account, IllegalParam is returned. This parameter is ignored when ScanRange is set to FULL or FREE.
    shared_ptr<string> configId_ {};
    // The ID of the Alibaba Cloud account to which the member accounts of the resource folder belong.
    // >You can invoke the [DescribeMonitorAccounts](~~DescribeMonitorAccounts~~) operation to obtain this parameter.
    shared_ptr<int64_t> resourceDirectoryAccountId_ {};
    // The check scope. Valid values:
    // - **FULL**: Scans all check items.
    // - **POLICY**: Scans check items of custom configurations.
    shared_ptr<string> scanRange_ {};
    // The source of the task. Valid values:
    // 
    // - **YAO_CHI**: ApsaraDB console.
    shared_ptr<string> taskSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
