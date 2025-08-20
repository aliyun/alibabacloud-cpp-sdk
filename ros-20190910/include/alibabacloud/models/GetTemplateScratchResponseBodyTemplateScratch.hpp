// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHRESPONSEBODYTEMPLATESCRATCH_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHRESPONSEBODYTEMPLATESCRATCH_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters.hpp>
#include <alibabacloud/models/GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup.hpp>
#include <alibabacloud/models/GetTemplateScratchResponseBodyTemplateScratchSourceResources.hpp>
#include <alibabacloud/models/GetTemplateScratchResponseBodyTemplateScratchSourceTag.hpp>
#include <alibabacloud/models/GetTemplateScratchResponseBodyTemplateScratchStackProvision.hpp>
#include <alibabacloud/models/GetTemplateScratchResponseBodyTemplateScratchStacks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateScratchResponseBodyTemplateScratch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateScratchResponseBodyTemplateScratch& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FailedCode, failedCode_);
      DARABONBA_PTR_TO_JSON(LogicalIdStrategy, logicalIdStrategy_);
      DARABONBA_PTR_TO_JSON(PreferenceParameters, preferenceParameters_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceResourceGroup, sourceResourceGroup_);
      DARABONBA_PTR_TO_JSON(SourceResources, sourceResources_);
      DARABONBA_PTR_TO_JSON(SourceTag, sourceTag_);
      DARABONBA_PTR_TO_JSON(StackProvision, stackProvision_);
      DARABONBA_PTR_TO_JSON(Stacks, stacks_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
      DARABONBA_ANY_TO_JSON(TemplateScratchData, templateScratchData_);
      DARABONBA_PTR_TO_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_TO_JSON(TemplateScratchType, templateScratchType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateScratchResponseBodyTemplateScratch& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FailedCode, failedCode_);
      DARABONBA_PTR_FROM_JSON(LogicalIdStrategy, logicalIdStrategy_);
      DARABONBA_PTR_FROM_JSON(PreferenceParameters, preferenceParameters_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceResourceGroup, sourceResourceGroup_);
      DARABONBA_PTR_FROM_JSON(SourceResources, sourceResources_);
      DARABONBA_PTR_FROM_JSON(SourceTag, sourceTag_);
      DARABONBA_PTR_FROM_JSON(StackProvision, stackProvision_);
      DARABONBA_PTR_FROM_JSON(Stacks, stacks_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
      DARABONBA_ANY_FROM_JSON(TemplateScratchData, templateScratchData_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchId, templateScratchId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchType, templateScratchType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetTemplateScratchResponseBodyTemplateScratch() = default ;
    GetTemplateScratchResponseBodyTemplateScratch(const GetTemplateScratchResponseBodyTemplateScratch &) = default ;
    GetTemplateScratchResponseBodyTemplateScratch(GetTemplateScratchResponseBodyTemplateScratch &&) = default ;
    GetTemplateScratchResponseBodyTemplateScratch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateScratchResponseBodyTemplateScratch() = default ;
    GetTemplateScratchResponseBodyTemplateScratch& operator=(const GetTemplateScratchResponseBodyTemplateScratch &) = default ;
    GetTemplateScratchResponseBodyTemplateScratch& operator=(GetTemplateScratchResponseBodyTemplateScratch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->failedCode_ != nullptr && this->logicalIdStrategy_ != nullptr && this->preferenceParameters_ != nullptr && this->resourceGroupId_ != nullptr
        && this->sourceResourceGroup_ != nullptr && this->sourceResources_ != nullptr && this->sourceTag_ != nullptr && this->stackProvision_ != nullptr && this->stacks_ != nullptr
        && this->status_ != nullptr && this->statusReason_ != nullptr && this->templateScratchData_ != nullptr && this->templateScratchId_ != nullptr && this->templateScratchType_ != nullptr
        && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratch& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratch& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // failedCode Field Functions 
    bool hasFailedCode() const { return this->failedCode_ != nullptr;};
    void deleteFailedCode() { this->failedCode_ = nullptr;};
    inline string failedCode() const { DARABONBA_PTR_GET_DEFAULT(failedCode_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratch& setFailedCode(string failedCode) { DARABONBA_PTR_SET_VALUE(failedCode_, failedCode) };


    // logicalIdStrategy Field Functions 
    bool hasLogicalIdStrategy() const { return this->logicalIdStrategy_ != nullptr;};
    void deleteLogicalIdStrategy() { this->logicalIdStrategy_ = nullptr;};
    inline string logicalIdStrategy() const { DARABONBA_PTR_GET_DEFAULT(logicalIdStrategy_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratch& setLogicalIdStrategy(string logicalIdStrategy) { DARABONBA_PTR_SET_VALUE(logicalIdStrategy_, logicalIdStrategy) };


    // preferenceParameters Field Functions 
    bool hasPreferenceParameters() const { return this->preferenceParameters_ != nullptr;};
    void deletePreferenceParameters() { this->preferenceParameters_ = nullptr;};
    inline const vector<Models::GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters> & preferenceParameters() const { DARABONBA_PTR_GET_CONST(preferenceParameters_, vector<Models::GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters>) };
    inline vector<Models::GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters> preferenceParameters() { DARABONBA_PTR_GET(preferenceParameters_, vector<Models::GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters>) };
    inline GetTemplateScratchResponseBodyTemplateScratch& setPreferenceParameters(const vector<Models::GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters> & preferenceParameters) { DARABONBA_PTR_SET_VALUE(preferenceParameters_, preferenceParameters) };
    inline GetTemplateScratchResponseBodyTemplateScratch& setPreferenceParameters(vector<Models::GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters> && preferenceParameters) { DARABONBA_PTR_SET_RVALUE(preferenceParameters_, preferenceParameters) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratch& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceResourceGroup Field Functions 
    bool hasSourceResourceGroup() const { return this->sourceResourceGroup_ != nullptr;};
    void deleteSourceResourceGroup() { this->sourceResourceGroup_ = nullptr;};
    inline const Models::GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup & sourceResourceGroup() const { DARABONBA_PTR_GET_CONST(sourceResourceGroup_, Models::GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup) };
    inline Models::GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup sourceResourceGroup() { DARABONBA_PTR_GET(sourceResourceGroup_, Models::GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup) };
    inline GetTemplateScratchResponseBodyTemplateScratch& setSourceResourceGroup(const Models::GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup & sourceResourceGroup) { DARABONBA_PTR_SET_VALUE(sourceResourceGroup_, sourceResourceGroup) };
    inline GetTemplateScratchResponseBodyTemplateScratch& setSourceResourceGroup(Models::GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup && sourceResourceGroup) { DARABONBA_PTR_SET_RVALUE(sourceResourceGroup_, sourceResourceGroup) };


    // sourceResources Field Functions 
    bool hasSourceResources() const { return this->sourceResources_ != nullptr;};
    void deleteSourceResources() { this->sourceResources_ = nullptr;};
    inline const vector<Models::GetTemplateScratchResponseBodyTemplateScratchSourceResources> & sourceResources() const { DARABONBA_PTR_GET_CONST(sourceResources_, vector<Models::GetTemplateScratchResponseBodyTemplateScratchSourceResources>) };
    inline vector<Models::GetTemplateScratchResponseBodyTemplateScratchSourceResources> sourceResources() { DARABONBA_PTR_GET(sourceResources_, vector<Models::GetTemplateScratchResponseBodyTemplateScratchSourceResources>) };
    inline GetTemplateScratchResponseBodyTemplateScratch& setSourceResources(const vector<Models::GetTemplateScratchResponseBodyTemplateScratchSourceResources> & sourceResources) { DARABONBA_PTR_SET_VALUE(sourceResources_, sourceResources) };
    inline GetTemplateScratchResponseBodyTemplateScratch& setSourceResources(vector<Models::GetTemplateScratchResponseBodyTemplateScratchSourceResources> && sourceResources) { DARABONBA_PTR_SET_RVALUE(sourceResources_, sourceResources) };


    // sourceTag Field Functions 
    bool hasSourceTag() const { return this->sourceTag_ != nullptr;};
    void deleteSourceTag() { this->sourceTag_ = nullptr;};
    inline const Models::GetTemplateScratchResponseBodyTemplateScratchSourceTag & sourceTag() const { DARABONBA_PTR_GET_CONST(sourceTag_, Models::GetTemplateScratchResponseBodyTemplateScratchSourceTag) };
    inline Models::GetTemplateScratchResponseBodyTemplateScratchSourceTag sourceTag() { DARABONBA_PTR_GET(sourceTag_, Models::GetTemplateScratchResponseBodyTemplateScratchSourceTag) };
    inline GetTemplateScratchResponseBodyTemplateScratch& setSourceTag(const Models::GetTemplateScratchResponseBodyTemplateScratchSourceTag & sourceTag) { DARABONBA_PTR_SET_VALUE(sourceTag_, sourceTag) };
    inline GetTemplateScratchResponseBodyTemplateScratch& setSourceTag(Models::GetTemplateScratchResponseBodyTemplateScratchSourceTag && sourceTag) { DARABONBA_PTR_SET_RVALUE(sourceTag_, sourceTag) };


    // stackProvision Field Functions 
    bool hasStackProvision() const { return this->stackProvision_ != nullptr;};
    void deleteStackProvision() { this->stackProvision_ = nullptr;};
    inline const Models::GetTemplateScratchResponseBodyTemplateScratchStackProvision & stackProvision() const { DARABONBA_PTR_GET_CONST(stackProvision_, Models::GetTemplateScratchResponseBodyTemplateScratchStackProvision) };
    inline Models::GetTemplateScratchResponseBodyTemplateScratchStackProvision stackProvision() { DARABONBA_PTR_GET(stackProvision_, Models::GetTemplateScratchResponseBodyTemplateScratchStackProvision) };
    inline GetTemplateScratchResponseBodyTemplateScratch& setStackProvision(const Models::GetTemplateScratchResponseBodyTemplateScratchStackProvision & stackProvision) { DARABONBA_PTR_SET_VALUE(stackProvision_, stackProvision) };
    inline GetTemplateScratchResponseBodyTemplateScratch& setStackProvision(Models::GetTemplateScratchResponseBodyTemplateScratchStackProvision && stackProvision) { DARABONBA_PTR_SET_RVALUE(stackProvision_, stackProvision) };


    // stacks Field Functions 
    bool hasStacks() const { return this->stacks_ != nullptr;};
    void deleteStacks() { this->stacks_ = nullptr;};
    inline const vector<Models::GetTemplateScratchResponseBodyTemplateScratchStacks> & stacks() const { DARABONBA_PTR_GET_CONST(stacks_, vector<Models::GetTemplateScratchResponseBodyTemplateScratchStacks>) };
    inline vector<Models::GetTemplateScratchResponseBodyTemplateScratchStacks> stacks() { DARABONBA_PTR_GET(stacks_, vector<Models::GetTemplateScratchResponseBodyTemplateScratchStacks>) };
    inline GetTemplateScratchResponseBodyTemplateScratch& setStacks(const vector<Models::GetTemplateScratchResponseBodyTemplateScratchStacks> & stacks) { DARABONBA_PTR_SET_VALUE(stacks_, stacks) };
    inline GetTemplateScratchResponseBodyTemplateScratch& setStacks(vector<Models::GetTemplateScratchResponseBodyTemplateScratchStacks> && stacks) { DARABONBA_PTR_SET_RVALUE(stacks_, stacks) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratch& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratch& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // templateScratchData Field Functions 
    bool hasTemplateScratchData() const { return this->templateScratchData_ != nullptr;};
    void deleteTemplateScratchData() { this->templateScratchData_ = nullptr;};
    inline     const Darabonba::Json & templateScratchData() const { DARABONBA_GET(templateScratchData_) };
    Darabonba::Json & templateScratchData() { DARABONBA_GET(templateScratchData_) };
    inline GetTemplateScratchResponseBodyTemplateScratch& setTemplateScratchData(const Darabonba::Json & templateScratchData) { DARABONBA_SET_VALUE(templateScratchData_, templateScratchData) };
    inline GetTemplateScratchResponseBodyTemplateScratch& setTemplateScratchData(Darabonba::Json & templateScratchData) { DARABONBA_SET_RVALUE(templateScratchData_, templateScratchData) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string templateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratch& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


    // templateScratchType Field Functions 
    bool hasTemplateScratchType() const { return this->templateScratchType_ != nullptr;};
    void deleteTemplateScratchType() { this->templateScratchType_ = nullptr;};
    inline string templateScratchType() const { DARABONBA_PTR_GET_DEFAULT(templateScratchType_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratch& setTemplateScratchType(string templateScratchType) { DARABONBA_PTR_SET_VALUE(templateScratchType_, templateScratchType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratch& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time at which the resource scenario was created.
    // 
    // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the resource scenario.
    std::shared_ptr<string> description_ = nullptr;
    // The status code of the resource scenario that fails to be created.
    // 
    // > This parameter is returned only if you set Status to GENERATE_FAILED.
    std::shared_ptr<string> failedCode_ = nullptr;
    // The policy based on which the logical ID is generated. Valid values:
    // 
    // *   LongTypePrefixAndIndexSuffix (default): long-type prefix + index-type suffix
    // *   LongTypePrefixAndHashSuffix: long-type prefix + hash-type suffix
    // *   ShortTypePrefixAndHashSuffix: short-type prefix + hash-type suffix
    std::shared_ptr<string> logicalIdStrategy_ = nullptr;
    // The preference parameters of the resource scenario.
    std::shared_ptr<vector<Models::GetTemplateScratchResponseBodyTemplateScratchPreferenceParameters>> preferenceParameters_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The source resource group.
    std::shared_ptr<Models::GetTemplateScratchResponseBodyTemplateScratchSourceResourceGroup> sourceResourceGroup_ = nullptr;
    // The source resources.
    std::shared_ptr<vector<Models::GetTemplateScratchResponseBodyTemplateScratchSourceResources>> sourceResources_ = nullptr;
    // The source tag.
    std::shared_ptr<Models::GetTemplateScratchResponseBodyTemplateScratchSourceTag> sourceTag_ = nullptr;
    // The preset information of the stack.
    std::shared_ptr<Models::GetTemplateScratchResponseBodyTemplateScratchStackProvision> stackProvision_ = nullptr;
    // The stacks that are associated with the resource scenario.
    std::shared_ptr<vector<Models::GetTemplateScratchResponseBodyTemplateScratchStacks>> stacks_ = nullptr;
    // The state of the resource scenario. Valid values:
    // 
    // *   GENERATE_IN_PROGRESS: The resource scenario is being created.
    // *   GENERATE_COMPLETE: The resource scenario is created.
    // *   GENERATE_FAILED: The resource scenario fails to be created.
    std::shared_ptr<string> status_ = nullptr;
    // The reason why the resource scenario fails to be created.
    // 
    // > This parameter is returned only if you set Status to GENERATE_FAILED.
    std::shared_ptr<string> statusReason_ = nullptr;
    // The resource scenario data.
    Darabonba::Json templateScratchData_ = nullptr;
    // The ID of the resource scenario.
    std::shared_ptr<string> templateScratchId_ = nullptr;
    // The type of the resource scenario. Valid values:
    // 
    // *   ResourceImport: resource management
    // *   ArchitectureReplication: resource replication
    std::shared_ptr<string> templateScratchType_ = nullptr;
    // The time at which the resource scenario was updated.
    // 
    // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
