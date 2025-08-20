// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATESCRATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATESCRATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTemplateScratchRequestPreferenceParameters.hpp>
#include <alibabacloud/models/UpdateTemplateScratchRequestSourceResourceGroup.hpp>
#include <alibabacloud/models/UpdateTemplateScratchRequestSourceResources.hpp>
#include <alibabacloud/models/UpdateTemplateScratchRequestSourceTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class UpdateTemplateScratchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateScratchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_TO_JSON(LogicalIdStrategy, logicalIdStrategy_);
      DARABONBA_PTR_TO_JSON(PreferenceParameters, preferenceParameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceResourceGroup, sourceResourceGroup_);
      DARABONBA_PTR_TO_JSON(SourceResources, sourceResources_);
      DARABONBA_PTR_TO_JSON(SourceTag, sourceTag_);
      DARABONBA_PTR_TO_JSON(TemplateScratchId, templateScratchId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateScratchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_FROM_JSON(LogicalIdStrategy, logicalIdStrategy_);
      DARABONBA_PTR_FROM_JSON(PreferenceParameters, preferenceParameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceResourceGroup, sourceResourceGroup_);
      DARABONBA_PTR_FROM_JSON(SourceResources, sourceResources_);
      DARABONBA_PTR_FROM_JSON(SourceTag, sourceTag_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchId, templateScratchId_);
    };
    UpdateTemplateScratchRequest() = default ;
    UpdateTemplateScratchRequest(const UpdateTemplateScratchRequest &) = default ;
    UpdateTemplateScratchRequest(UpdateTemplateScratchRequest &&) = default ;
    UpdateTemplateScratchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateScratchRequest() = default ;
    UpdateTemplateScratchRequest& operator=(const UpdateTemplateScratchRequest &) = default ;
    UpdateTemplateScratchRequest& operator=(UpdateTemplateScratchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->description_ != nullptr && this->executionMode_ != nullptr && this->logicalIdStrategy_ != nullptr && this->preferenceParameters_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->sourceResourceGroup_ != nullptr && this->sourceResources_ != nullptr && this->sourceTag_ != nullptr && this->templateScratchId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTemplateScratchRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTemplateScratchRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string executionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline UpdateTemplateScratchRequest& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // logicalIdStrategy Field Functions 
    bool hasLogicalIdStrategy() const { return this->logicalIdStrategy_ != nullptr;};
    void deleteLogicalIdStrategy() { this->logicalIdStrategy_ = nullptr;};
    inline string logicalIdStrategy() const { DARABONBA_PTR_GET_DEFAULT(logicalIdStrategy_, "") };
    inline UpdateTemplateScratchRequest& setLogicalIdStrategy(string logicalIdStrategy) { DARABONBA_PTR_SET_VALUE(logicalIdStrategy_, logicalIdStrategy) };


    // preferenceParameters Field Functions 
    bool hasPreferenceParameters() const { return this->preferenceParameters_ != nullptr;};
    void deletePreferenceParameters() { this->preferenceParameters_ = nullptr;};
    inline const vector<UpdateTemplateScratchRequestPreferenceParameters> & preferenceParameters() const { DARABONBA_PTR_GET_CONST(preferenceParameters_, vector<UpdateTemplateScratchRequestPreferenceParameters>) };
    inline vector<UpdateTemplateScratchRequestPreferenceParameters> preferenceParameters() { DARABONBA_PTR_GET(preferenceParameters_, vector<UpdateTemplateScratchRequestPreferenceParameters>) };
    inline UpdateTemplateScratchRequest& setPreferenceParameters(const vector<UpdateTemplateScratchRequestPreferenceParameters> & preferenceParameters) { DARABONBA_PTR_SET_VALUE(preferenceParameters_, preferenceParameters) };
    inline UpdateTemplateScratchRequest& setPreferenceParameters(vector<UpdateTemplateScratchRequestPreferenceParameters> && preferenceParameters) { DARABONBA_PTR_SET_RVALUE(preferenceParameters_, preferenceParameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateTemplateScratchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateTemplateScratchRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceResourceGroup Field Functions 
    bool hasSourceResourceGroup() const { return this->sourceResourceGroup_ != nullptr;};
    void deleteSourceResourceGroup() { this->sourceResourceGroup_ = nullptr;};
    inline const UpdateTemplateScratchRequestSourceResourceGroup & sourceResourceGroup() const { DARABONBA_PTR_GET_CONST(sourceResourceGroup_, UpdateTemplateScratchRequestSourceResourceGroup) };
    inline UpdateTemplateScratchRequestSourceResourceGroup sourceResourceGroup() { DARABONBA_PTR_GET(sourceResourceGroup_, UpdateTemplateScratchRequestSourceResourceGroup) };
    inline UpdateTemplateScratchRequest& setSourceResourceGroup(const UpdateTemplateScratchRequestSourceResourceGroup & sourceResourceGroup) { DARABONBA_PTR_SET_VALUE(sourceResourceGroup_, sourceResourceGroup) };
    inline UpdateTemplateScratchRequest& setSourceResourceGroup(UpdateTemplateScratchRequestSourceResourceGroup && sourceResourceGroup) { DARABONBA_PTR_SET_RVALUE(sourceResourceGroup_, sourceResourceGroup) };


    // sourceResources Field Functions 
    bool hasSourceResources() const { return this->sourceResources_ != nullptr;};
    void deleteSourceResources() { this->sourceResources_ = nullptr;};
    inline const vector<UpdateTemplateScratchRequestSourceResources> & sourceResources() const { DARABONBA_PTR_GET_CONST(sourceResources_, vector<UpdateTemplateScratchRequestSourceResources>) };
    inline vector<UpdateTemplateScratchRequestSourceResources> sourceResources() { DARABONBA_PTR_GET(sourceResources_, vector<UpdateTemplateScratchRequestSourceResources>) };
    inline UpdateTemplateScratchRequest& setSourceResources(const vector<UpdateTemplateScratchRequestSourceResources> & sourceResources) { DARABONBA_PTR_SET_VALUE(sourceResources_, sourceResources) };
    inline UpdateTemplateScratchRequest& setSourceResources(vector<UpdateTemplateScratchRequestSourceResources> && sourceResources) { DARABONBA_PTR_SET_RVALUE(sourceResources_, sourceResources) };


    // sourceTag Field Functions 
    bool hasSourceTag() const { return this->sourceTag_ != nullptr;};
    void deleteSourceTag() { this->sourceTag_ = nullptr;};
    inline const UpdateTemplateScratchRequestSourceTag & sourceTag() const { DARABONBA_PTR_GET_CONST(sourceTag_, UpdateTemplateScratchRequestSourceTag) };
    inline UpdateTemplateScratchRequestSourceTag sourceTag() { DARABONBA_PTR_GET(sourceTag_, UpdateTemplateScratchRequestSourceTag) };
    inline UpdateTemplateScratchRequest& setSourceTag(const UpdateTemplateScratchRequestSourceTag & sourceTag) { DARABONBA_PTR_SET_VALUE(sourceTag_, sourceTag) };
    inline UpdateTemplateScratchRequest& setSourceTag(UpdateTemplateScratchRequestSourceTag && sourceTag) { DARABONBA_PTR_SET_RVALUE(sourceTag_, sourceTag) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string templateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline UpdateTemplateScratchRequest& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


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
    std::shared_ptr<vector<UpdateTemplateScratchRequestPreferenceParameters>> preferenceParameters_ = nullptr;
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
    std::shared_ptr<UpdateTemplateScratchRequestSourceResourceGroup> sourceResourceGroup_ = nullptr;
    // The source resources.
    // 
    // >  You must specify only one of the following parameters: SourceResources, SourceTag, and SourceResourceGroup.
    std::shared_ptr<vector<UpdateTemplateScratchRequestSourceResources>> sourceResources_ = nullptr;
    // The source tag.
    // 
    // >  You must specify only one of the following parameters: SourceResources, SourceTag, and SourceResourceGroup.
    std::shared_ptr<UpdateTemplateScratchRequestSourceTag> sourceTag_ = nullptr;
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
