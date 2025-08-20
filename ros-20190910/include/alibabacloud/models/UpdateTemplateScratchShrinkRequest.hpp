// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATESCRATCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATESCRATCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class UpdateTemplateScratchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateScratchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_TO_JSON(LogicalIdStrategy, logicalIdStrategy_);
      DARABONBA_PTR_TO_JSON(PreferenceParameters, preferenceParametersShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceResourceGroup, sourceResourceGroupShrink_);
      DARABONBA_PTR_TO_JSON(SourceResources, sourceResourcesShrink_);
      DARABONBA_PTR_TO_JSON(SourceTag, sourceTagShrink_);
      DARABONBA_PTR_TO_JSON(TemplateScratchId, templateScratchId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateScratchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_FROM_JSON(LogicalIdStrategy, logicalIdStrategy_);
      DARABONBA_PTR_FROM_JSON(PreferenceParameters, preferenceParametersShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceResourceGroup, sourceResourceGroupShrink_);
      DARABONBA_PTR_FROM_JSON(SourceResources, sourceResourcesShrink_);
      DARABONBA_PTR_FROM_JSON(SourceTag, sourceTagShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchId, templateScratchId_);
    };
    UpdateTemplateScratchShrinkRequest() = default ;
    UpdateTemplateScratchShrinkRequest(const UpdateTemplateScratchShrinkRequest &) = default ;
    UpdateTemplateScratchShrinkRequest(UpdateTemplateScratchShrinkRequest &&) = default ;
    UpdateTemplateScratchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateScratchShrinkRequest() = default ;
    UpdateTemplateScratchShrinkRequest& operator=(const UpdateTemplateScratchShrinkRequest &) = default ;
    UpdateTemplateScratchShrinkRequest& operator=(UpdateTemplateScratchShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->description_ != nullptr && this->executionMode_ != nullptr && this->logicalIdStrategy_ != nullptr && this->preferenceParametersShrink_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->sourceResourceGroupShrink_ != nullptr && this->sourceResourcesShrink_ != nullptr && this->sourceTagShrink_ != nullptr && this->templateScratchId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTemplateScratchShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTemplateScratchShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string executionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline UpdateTemplateScratchShrinkRequest& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // logicalIdStrategy Field Functions 
    bool hasLogicalIdStrategy() const { return this->logicalIdStrategy_ != nullptr;};
    void deleteLogicalIdStrategy() { this->logicalIdStrategy_ = nullptr;};
    inline string logicalIdStrategy() const { DARABONBA_PTR_GET_DEFAULT(logicalIdStrategy_, "") };
    inline UpdateTemplateScratchShrinkRequest& setLogicalIdStrategy(string logicalIdStrategy) { DARABONBA_PTR_SET_VALUE(logicalIdStrategy_, logicalIdStrategy) };


    // preferenceParametersShrink Field Functions 
    bool hasPreferenceParametersShrink() const { return this->preferenceParametersShrink_ != nullptr;};
    void deletePreferenceParametersShrink() { this->preferenceParametersShrink_ = nullptr;};
    inline string preferenceParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(preferenceParametersShrink_, "") };
    inline UpdateTemplateScratchShrinkRequest& setPreferenceParametersShrink(string preferenceParametersShrink) { DARABONBA_PTR_SET_VALUE(preferenceParametersShrink_, preferenceParametersShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateTemplateScratchShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateTemplateScratchShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceResourceGroupShrink Field Functions 
    bool hasSourceResourceGroupShrink() const { return this->sourceResourceGroupShrink_ != nullptr;};
    void deleteSourceResourceGroupShrink() { this->sourceResourceGroupShrink_ = nullptr;};
    inline string sourceResourceGroupShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceResourceGroupShrink_, "") };
    inline UpdateTemplateScratchShrinkRequest& setSourceResourceGroupShrink(string sourceResourceGroupShrink) { DARABONBA_PTR_SET_VALUE(sourceResourceGroupShrink_, sourceResourceGroupShrink) };


    // sourceResourcesShrink Field Functions 
    bool hasSourceResourcesShrink() const { return this->sourceResourcesShrink_ != nullptr;};
    void deleteSourceResourcesShrink() { this->sourceResourcesShrink_ = nullptr;};
    inline string sourceResourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceResourcesShrink_, "") };
    inline UpdateTemplateScratchShrinkRequest& setSourceResourcesShrink(string sourceResourcesShrink) { DARABONBA_PTR_SET_VALUE(sourceResourcesShrink_, sourceResourcesShrink) };


    // sourceTagShrink Field Functions 
    bool hasSourceTagShrink() const { return this->sourceTagShrink_ != nullptr;};
    void deleteSourceTagShrink() { this->sourceTagShrink_ = nullptr;};
    inline string sourceTagShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceTagShrink_, "") };
    inline UpdateTemplateScratchShrinkRequest& setSourceTagShrink(string sourceTagShrink) { DARABONBA_PTR_SET_VALUE(sourceTagShrink_, sourceTagShrink) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string templateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline UpdateTemplateScratchShrinkRequest& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the scenario.
    std::shared_ptr<string> description_ = nullptr;
    // The execution mode. Valid values:
    // 
    // *   Async (default)
    // *   Sync
    // 
    // > If you have a wide scope of resources, Sync takes longer. If you set ExecutionMode to Sync, we recommend that you specify ClientToken to prevent the execution timeout.
    std::shared_ptr<string> executionMode_ = nullptr;
    // The policy based on which the logical ID is generated. Valid values:
    // 
    // *   LongTypePrefixAndIndexSuffix: long-type prefix + index-type suffix
    // *   LongTypePrefixAndHashSuffix: long-type prefix + hash-type suffix
    // *   ShortTypePrefixAndHashSuffix: short-type prefix + hash-type suffix
    // 
    // >  If you set TemplateScratchType to ArchitectureDetection, the default value of LogicalIdStrategy is LongTypePrefixAndHashSuffix. In other cases, the default value of LogicalIdStrategy is LongTypePrefixAndIndexSuffix.
    std::shared_ptr<string> logicalIdStrategy_ = nullptr;
    // The preference parameters of the resource scenario.
    std::shared_ptr<string> preferenceParametersShrink_ = nullptr;
    // The region ID of the scenario.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The source resource group.
    // 
    // >  You must specify only one of the following parameters: SourceResources, SourceTag, and SourceResourceGroup.
    std::shared_ptr<string> sourceResourceGroupShrink_ = nullptr;
    // The source resources.
    // 
    // >  You must specify only one of the following parameters: SourceResources, SourceTag, and SourceResourceGroup.
    std::shared_ptr<string> sourceResourcesShrink_ = nullptr;
    // The source tag.
    // 
    // >  You must specify only one of the following parameters: SourceResources, SourceTag, and SourceResourceGroup.
    std::shared_ptr<string> sourceTagShrink_ = nullptr;
    // The ID of the resource scenario.
    // 
    // The valid values of the ParameterKey and ParameterValue request parameters vary based on the IDs of different types of resource scenarios. For more information, see the "Additional information about request parameters" section of this topic.
    // 
    // >  You can call the [ListTemplateScratches](https://help.aliyun.com/document_detail/610832.html) operation to query the ID of a resource scenario.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateScratchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
