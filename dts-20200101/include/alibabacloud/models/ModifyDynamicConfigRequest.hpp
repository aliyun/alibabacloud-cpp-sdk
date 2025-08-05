// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDYNAMICCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDYNAMICCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ModifyDynamicConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDynamicConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(EnableLimit, enableLimit_);
      DARABONBA_PTR_TO_JSON(JobCode, jobCode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDynamicConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(EnableLimit, enableLimit_);
      DARABONBA_PTR_FROM_JSON(JobCode, jobCode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    ModifyDynamicConfigRequest() = default ;
    ModifyDynamicConfigRequest(const ModifyDynamicConfigRequest &) = default ;
    ModifyDynamicConfigRequest(ModifyDynamicConfigRequest &&) = default ;
    ModifyDynamicConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDynamicConfigRequest() = default ;
    ModifyDynamicConfigRequest& operator=(const ModifyDynamicConfigRequest &) = default ;
    ModifyDynamicConfigRequest& operator=(ModifyDynamicConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configList_ != nullptr
        && this->dtsJobId_ != nullptr && this->enableLimit_ != nullptr && this->jobCode_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline string configList() const { DARABONBA_PTR_GET_DEFAULT(configList_, "") };
    inline ModifyDynamicConfigRequest& setConfigList(string configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline ModifyDynamicConfigRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // enableLimit Field Functions 
    bool hasEnableLimit() const { return this->enableLimit_ != nullptr;};
    void deleteEnableLimit() { this->enableLimit_ = nullptr;};
    inline bool enableLimit() const { DARABONBA_PTR_GET_DEFAULT(enableLimit_, false) };
    inline ModifyDynamicConfigRequest& setEnableLimit(bool enableLimit) { DARABONBA_PTR_SET_VALUE(enableLimit_, enableLimit) };


    // jobCode Field Functions 
    bool hasJobCode() const { return this->jobCode_ != nullptr;};
    void deleteJobCode() { this->jobCode_ = nullptr;};
    inline string jobCode() const { DARABONBA_PTR_GET_DEFAULT(jobCode_, "") };
    inline ModifyDynamicConfigRequest& setJobCode(string jobCode) { DARABONBA_PTR_SET_VALUE(jobCode_, jobCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDynamicConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyDynamicConfigRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The specific throttling configuration.
    // 
    // *   **dts.datamove.blaster.qps.max**: The rate at which queries are made to the source database per second.
    // *   **dts.datamove.source.rps.max**: The number of rows that are fully synchronized or migrated per second.
    // *   **dts.datamove.source.bps.max**: the amount of data processed per second for full synchronization or migration. Unit: MB.
    // 
    // > 
    // 
    // *   If you set the **JobCode** parameter to **03**, you need to specify **true** for the **EnableLimit** parameter. Otherwise, the configuration cannot take effect.
    // 
    // *   If you set the **JobCode** parameter to **04** or **07**, you only need to specify the **dts.datamove.source.rps.max** and **dts.datamove.source.bps.max** parameters.
    // *   A value of \\*\\*-1\\*\\* indicates no rate limit.
    std::shared_ptr<string> configList_ = nullptr;
    // The ID of the data migration or synchronization task.
    // 
    // >  You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the task ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // Specifies whether to enable throttling for data synchronization or migration. Valid values: **true** and **false**.
    // 
    // >  Only needs to be configured when the **JobCode** parameter is set to **03**.
    std::shared_ptr<bool> enableLimit_ = nullptr;
    // The task type. Valid values:
    // 
    // *   **03**: a full data synchronization or full data migration task.
    // *   **04**: an incremental data migration task.
    // *   **07**: an incremental data synchronization task.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobCode_ = nullptr;
    // The region ID of the DTS instance. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
