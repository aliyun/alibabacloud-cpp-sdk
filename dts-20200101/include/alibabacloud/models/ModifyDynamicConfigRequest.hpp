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
    virtual bool empty() const override { return this->configList_ == nullptr
        && this->dtsJobId_ == nullptr && this->enableLimit_ == nullptr && this->jobCode_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline string getConfigList() const { DARABONBA_PTR_GET_DEFAULT(configList_, "") };
    inline ModifyDynamicConfigRequest& setConfigList(string configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline ModifyDynamicConfigRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // enableLimit Field Functions 
    bool hasEnableLimit() const { return this->enableLimit_ != nullptr;};
    void deleteEnableLimit() { this->enableLimit_ = nullptr;};
    inline bool getEnableLimit() const { DARABONBA_PTR_GET_DEFAULT(enableLimit_, false) };
    inline ModifyDynamicConfigRequest& setEnableLimit(bool enableLimit) { DARABONBA_PTR_SET_VALUE(enableLimit_, enableLimit) };


    // jobCode Field Functions 
    bool hasJobCode() const { return this->jobCode_ != nullptr;};
    void deleteJobCode() { this->jobCode_ = nullptr;};
    inline string getJobCode() const { DARABONBA_PTR_GET_DEFAULT(jobCode_, "") };
    inline ModifyDynamicConfigRequest& setJobCode(string jobCode) { DARABONBA_PTR_SET_VALUE(jobCode_, jobCode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDynamicConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyDynamicConfigRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The rate limit configurations.
    // 
    // - **dts.datamove.blaster.qps.max**: the queries per second (QPS) for querying the source database.
    // - **dts.datamove.source.rps.max**: the records per second (RPS) for full data synchronization or migration.
    // - **dts.datamove.source.bps.max**: the data volume per second for full data synchronization or migration. Unit: bytes per second.
    // 
    // > - If **JobCode** is set to **03**, you must set **EnableLimit** to **true** for the three parameters to take effect.
    // - If **JobCode** is set to **04** or **07**, you only need to configure **dts.datamove.source.rps.max** and **dts.datamove.source.bps.max**.
    // - A value of **-1** indicates that no rate limit is applied.
    shared_ptr<string> configList_ {};
    // The ID of the data synchronization or migration task.
    // 
    // > You can call [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) to obtain the task ID.
    // 
    // This parameter is required.
    shared_ptr<string> dtsJobId_ {};
    // Specifies whether to limit the migration rate of the full data synchronization or migration task. Valid values: **true** and **false**.
    // 
    // > This parameter is required only when **JobCode** is set to **03**.
    shared_ptr<bool> enableLimit_ {};
    // The task code. Valid values:
    // 
    // - **03**: full data synchronization or migration task.
    // - **04**: incremental data migration task.
    // - **07**: incremental data synchronization task.
    // 
    // This parameter is required.
    shared_ptr<string> jobCode_ {};
    // The ID of the region where the DTS instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
