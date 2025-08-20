// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATESCRATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATESCRATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateTemplateScratchRequestPreferenceParameters.hpp>
#include <alibabacloud/models/CreateTemplateScratchRequestSourceResourceGroup.hpp>
#include <alibabacloud/models/CreateTemplateScratchRequestSourceResources.hpp>
#include <alibabacloud/models/CreateTemplateScratchRequestSourceTag.hpp>
#include <alibabacloud/models/CreateTemplateScratchRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CreateTemplateScratchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateScratchRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateScratchType, templateScratchType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateScratchRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchType, templateScratchType_);
    };
    CreateTemplateScratchRequest() = default ;
    CreateTemplateScratchRequest(const CreateTemplateScratchRequest &) = default ;
    CreateTemplateScratchRequest(CreateTemplateScratchRequest &&) = default ;
    CreateTemplateScratchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateScratchRequest() = default ;
    CreateTemplateScratchRequest& operator=(const CreateTemplateScratchRequest &) = default ;
    CreateTemplateScratchRequest& operator=(CreateTemplateScratchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->description_ != nullptr && this->executionMode_ != nullptr && this->logicalIdStrategy_ != nullptr && this->preferenceParameters_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->sourceResourceGroup_ != nullptr && this->sourceResources_ != nullptr && this->sourceTag_ != nullptr && this->tags_ != nullptr
        && this->templateScratchType_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTemplateScratchRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTemplateScratchRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string executionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline CreateTemplateScratchRequest& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // logicalIdStrategy Field Functions 
    bool hasLogicalIdStrategy() const { return this->logicalIdStrategy_ != nullptr;};
    void deleteLogicalIdStrategy() { this->logicalIdStrategy_ = nullptr;};
    inline string logicalIdStrategy() const { DARABONBA_PTR_GET_DEFAULT(logicalIdStrategy_, "") };
    inline CreateTemplateScratchRequest& setLogicalIdStrategy(string logicalIdStrategy) { DARABONBA_PTR_SET_VALUE(logicalIdStrategy_, logicalIdStrategy) };


    // preferenceParameters Field Functions 
    bool hasPreferenceParameters() const { return this->preferenceParameters_ != nullptr;};
    void deletePreferenceParameters() { this->preferenceParameters_ = nullptr;};
    inline const vector<CreateTemplateScratchRequestPreferenceParameters> & preferenceParameters() const { DARABONBA_PTR_GET_CONST(preferenceParameters_, vector<CreateTemplateScratchRequestPreferenceParameters>) };
    inline vector<CreateTemplateScratchRequestPreferenceParameters> preferenceParameters() { DARABONBA_PTR_GET(preferenceParameters_, vector<CreateTemplateScratchRequestPreferenceParameters>) };
    inline CreateTemplateScratchRequest& setPreferenceParameters(const vector<CreateTemplateScratchRequestPreferenceParameters> & preferenceParameters) { DARABONBA_PTR_SET_VALUE(preferenceParameters_, preferenceParameters) };
    inline CreateTemplateScratchRequest& setPreferenceParameters(vector<CreateTemplateScratchRequestPreferenceParameters> && preferenceParameters) { DARABONBA_PTR_SET_RVALUE(preferenceParameters_, preferenceParameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTemplateScratchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateTemplateScratchRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceResourceGroup Field Functions 
    bool hasSourceResourceGroup() const { return this->sourceResourceGroup_ != nullptr;};
    void deleteSourceResourceGroup() { this->sourceResourceGroup_ = nullptr;};
    inline const CreateTemplateScratchRequestSourceResourceGroup & sourceResourceGroup() const { DARABONBA_PTR_GET_CONST(sourceResourceGroup_, CreateTemplateScratchRequestSourceResourceGroup) };
    inline CreateTemplateScratchRequestSourceResourceGroup sourceResourceGroup() { DARABONBA_PTR_GET(sourceResourceGroup_, CreateTemplateScratchRequestSourceResourceGroup) };
    inline CreateTemplateScratchRequest& setSourceResourceGroup(const CreateTemplateScratchRequestSourceResourceGroup & sourceResourceGroup) { DARABONBA_PTR_SET_VALUE(sourceResourceGroup_, sourceResourceGroup) };
    inline CreateTemplateScratchRequest& setSourceResourceGroup(CreateTemplateScratchRequestSourceResourceGroup && sourceResourceGroup) { DARABONBA_PTR_SET_RVALUE(sourceResourceGroup_, sourceResourceGroup) };


    // sourceResources Field Functions 
    bool hasSourceResources() const { return this->sourceResources_ != nullptr;};
    void deleteSourceResources() { this->sourceResources_ = nullptr;};
    inline const vector<CreateTemplateScratchRequestSourceResources> & sourceResources() const { DARABONBA_PTR_GET_CONST(sourceResources_, vector<CreateTemplateScratchRequestSourceResources>) };
    inline vector<CreateTemplateScratchRequestSourceResources> sourceResources() { DARABONBA_PTR_GET(sourceResources_, vector<CreateTemplateScratchRequestSourceResources>) };
    inline CreateTemplateScratchRequest& setSourceResources(const vector<CreateTemplateScratchRequestSourceResources> & sourceResources) { DARABONBA_PTR_SET_VALUE(sourceResources_, sourceResources) };
    inline CreateTemplateScratchRequest& setSourceResources(vector<CreateTemplateScratchRequestSourceResources> && sourceResources) { DARABONBA_PTR_SET_RVALUE(sourceResources_, sourceResources) };


    // sourceTag Field Functions 
    bool hasSourceTag() const { return this->sourceTag_ != nullptr;};
    void deleteSourceTag() { this->sourceTag_ = nullptr;};
    inline const CreateTemplateScratchRequestSourceTag & sourceTag() const { DARABONBA_PTR_GET_CONST(sourceTag_, CreateTemplateScratchRequestSourceTag) };
    inline CreateTemplateScratchRequestSourceTag sourceTag() { DARABONBA_PTR_GET(sourceTag_, CreateTemplateScratchRequestSourceTag) };
    inline CreateTemplateScratchRequest& setSourceTag(const CreateTemplateScratchRequestSourceTag & sourceTag) { DARABONBA_PTR_SET_VALUE(sourceTag_, sourceTag) };
    inline CreateTemplateScratchRequest& setSourceTag(CreateTemplateScratchRequestSourceTag && sourceTag) { DARABONBA_PTR_SET_RVALUE(sourceTag_, sourceTag) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateTemplateScratchRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateTemplateScratchRequestTags>) };
    inline vector<CreateTemplateScratchRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateTemplateScratchRequestTags>) };
    inline CreateTemplateScratchRequest& setTags(const vector<CreateTemplateScratchRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateTemplateScratchRequest& setTags(vector<CreateTemplateScratchRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateScratchType Field Functions 
    bool hasTemplateScratchType() const { return this->templateScratchType_ != nullptr;};
    void deleteTemplateScratchType() { this->templateScratchType_ = nullptr;};
    inline string templateScratchType() const { DARABONBA_PTR_GET_DEFAULT(templateScratchType_, "") };
    inline CreateTemplateScratchRequest& setTemplateScratchType(string templateScratchType) { DARABONBA_PTR_SET_VALUE(templateScratchType_, templateScratchType) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the resource scenario.
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
    // *   LongTypePrefixAndIndexSuffix (default): long-type prefix + index-type suffix
    // *   LongTypePrefixAndHashSuffix: long-type prefix + hash-type suffix
    // *   ShortTypePrefixAndHashSuffix: short-type prefix + hash-type suffix
    std::shared_ptr<string> logicalIdStrategy_ = nullptr;
    // The preference parameters of the resource scenario.
    std::shared_ptr<vector<CreateTemplateScratchRequestPreferenceParameters>> preferenceParameters_ = nullptr;
    // The region ID of the resource scenario.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The source resource group.
    std::shared_ptr<CreateTemplateScratchRequestSourceResourceGroup> sourceResourceGroup_ = nullptr;
    // The source resources.
    // 
    // When you set TemplateScratchType to ArchitectureDetection, you can specify SourceResources to detect the architecture data of all resources associated with the specified source resources. For example, if you set SourceResources to the ID of a Classic Load Balancer (CLB) instance, the architecture data of all resources, such as the Elastic Compute Service (ECS) instance, vSwitch, and VPC, associated with the CLB instance is detected.
    // 
    // If you set TemplateScratchType to ArchitectureDetection, you can specify up to 20 source resources. In other cases, you can specify up to 200 source resources.
    std::shared_ptr<vector<CreateTemplateScratchRequestSourceResources>> sourceResources_ = nullptr;
    // The source tag.
    std::shared_ptr<CreateTemplateScratchRequestSourceTag> sourceTag_ = nullptr;
    // The tags of the resource scenario.
    std::shared_ptr<vector<CreateTemplateScratchRequestTags>> tags_ = nullptr;
    // The type of the resource scenario. Valid values:
    // 
    // *   ArchitectureReplication: resource replication
    // *   ArchitectureDetection: resource detection
    // *   ResourceImport: resource management
    // *   ResourceMigration: resource migration
    // 
    // >  The valid values of the ParameterKey and ParameterValue request parameters vary based on the value of TemplateScratchType. For more information, see the "**Additional information about request parameters**" section of this topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateScratchType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
