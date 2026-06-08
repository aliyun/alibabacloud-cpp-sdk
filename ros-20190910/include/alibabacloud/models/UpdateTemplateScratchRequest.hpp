// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATESCRATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATESCRATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class SourceTag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceTag& obj) { 
        DARABONBA_ANY_TO_JSON(ResourceTags, resourceTags_);
        DARABONBA_PTR_TO_JSON(ResourceTypeFilter, resourceTypeFilter_);
      };
      friend void from_json(const Darabonba::Json& j, SourceTag& obj) { 
        DARABONBA_ANY_FROM_JSON(ResourceTags, resourceTags_);
        DARABONBA_PTR_FROM_JSON(ResourceTypeFilter, resourceTypeFilter_);
      };
      SourceTag() = default ;
      SourceTag(const SourceTag &) = default ;
      SourceTag(SourceTag &&) = default ;
      SourceTag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceTag() = default ;
      SourceTag& operator=(const SourceTag &) = default ;
      SourceTag& operator=(SourceTag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceTags_ == nullptr
        && this->resourceTypeFilter_ == nullptr; };
      // resourceTags Field Functions 
      bool hasResourceTags() const { return this->resourceTags_ != nullptr;};
      void deleteResourceTags() { this->resourceTags_ = nullptr;};
      inline       const Darabonba::Json & getResourceTags() const { DARABONBA_GET(resourceTags_) };
      Darabonba::Json & getResourceTags() { DARABONBA_GET(resourceTags_) };
      inline SourceTag& setResourceTags(const Darabonba::Json & resourceTags) { DARABONBA_SET_VALUE(resourceTags_, resourceTags) };
      inline SourceTag& setResourceTags(Darabonba::Json && resourceTags) { DARABONBA_SET_RVALUE(resourceTags_, resourceTags) };


      // resourceTypeFilter Field Functions 
      bool hasResourceTypeFilter() const { return this->resourceTypeFilter_ != nullptr;};
      void deleteResourceTypeFilter() { this->resourceTypeFilter_ = nullptr;};
      inline const vector<string> & getResourceTypeFilter() const { DARABONBA_PTR_GET_CONST(resourceTypeFilter_, vector<string>) };
      inline vector<string> getResourceTypeFilter() { DARABONBA_PTR_GET(resourceTypeFilter_, vector<string>) };
      inline SourceTag& setResourceTypeFilter(const vector<string> & resourceTypeFilter) { DARABONBA_PTR_SET_VALUE(resourceTypeFilter_, resourceTypeFilter) };
      inline SourceTag& setResourceTypeFilter(vector<string> && resourceTypeFilter) { DARABONBA_PTR_SET_RVALUE(resourceTypeFilter_, resourceTypeFilter) };


    protected:
      // The source tags. A tag contains a tag key and a tag value.
      // 
      // If you want to specify only the tag key, you must leave the tag value empty. Example: {"TagKey": ""}.
      // 
      // If you set TemplateScratchType to ArchitectureDetection, you can add up to 5 source tags. In other cases, you can add up to 10 source tags.
      // 
      // This parameter is required.
      Darabonba::Json resourceTags_ {};
      // The resource types for filtering resources.
      shared_ptr<vector<string>> resourceTypeFilter_ {};
    };

    class SourceResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceResources& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, SourceResources& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      SourceResources() = default ;
      SourceResources(const SourceResources &) = default ;
      SourceResources(SourceResources &&) = default ;
      SourceResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceResources() = default ;
      SourceResources& operator=(const SourceResources &) = default ;
      SourceResources& operator=(SourceResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr; };
      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline SourceResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline SourceResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The resource ID.
      // 
      // This parameter is required.
      shared_ptr<string> resourceId_ {};
      // The resource type.
      // 
      // This parameter is required.
      shared_ptr<string> resourceType_ {};
    };

    class SourceResourceGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceResourceGroup& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceTypeFilter, resourceTypeFilter_);
      };
      friend void from_json(const Darabonba::Json& j, SourceResourceGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceTypeFilter, resourceTypeFilter_);
      };
      SourceResourceGroup() = default ;
      SourceResourceGroup(const SourceResourceGroup &) = default ;
      SourceResourceGroup(SourceResourceGroup &&) = default ;
      SourceResourceGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceResourceGroup() = default ;
      SourceResourceGroup& operator=(const SourceResourceGroup &) = default ;
      SourceResourceGroup& operator=(SourceResourceGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceGroupId_ == nullptr
        && this->resourceTypeFilter_ == nullptr; };
      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline SourceResourceGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceTypeFilter Field Functions 
      bool hasResourceTypeFilter() const { return this->resourceTypeFilter_ != nullptr;};
      void deleteResourceTypeFilter() { this->resourceTypeFilter_ = nullptr;};
      inline const vector<string> & getResourceTypeFilter() const { DARABONBA_PTR_GET_CONST(resourceTypeFilter_, vector<string>) };
      inline vector<string> getResourceTypeFilter() { DARABONBA_PTR_GET(resourceTypeFilter_, vector<string>) };
      inline SourceResourceGroup& setResourceTypeFilter(const vector<string> & resourceTypeFilter) { DARABONBA_PTR_SET_VALUE(resourceTypeFilter_, resourceTypeFilter) };
      inline SourceResourceGroup& setResourceTypeFilter(vector<string> && resourceTypeFilter) { DARABONBA_PTR_SET_RVALUE(resourceTypeFilter_, resourceTypeFilter) };


    protected:
      // The ID of the source resource group.
      // 
      // This parameter is required.
      shared_ptr<string> resourceGroupId_ {};
      // The resource types for filtering resources.
      shared_ptr<vector<string>> resourceTypeFilter_ {};
    };

    class PreferenceParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PreferenceParameters& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      };
      friend void from_json(const Darabonba::Json& j, PreferenceParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      };
      PreferenceParameters() = default ;
      PreferenceParameters(const PreferenceParameters &) = default ;
      PreferenceParameters(PreferenceParameters &&) = default ;
      PreferenceParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PreferenceParameters() = default ;
      PreferenceParameters& operator=(const PreferenceParameters &) = default ;
      PreferenceParameters& operator=(PreferenceParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parameterKey_ == nullptr
        && this->parameterValue_ == nullptr; };
      // parameterKey Field Functions 
      bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
      void deleteParameterKey() { this->parameterKey_ = nullptr;};
      inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
      inline PreferenceParameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


      // parameterValue Field Functions 
      bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
      void deleteParameterValue() { this->parameterValue_ = nullptr;};
      inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
      inline PreferenceParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    protected:
      // The parameter name.
      // 
      // For more information about the valid values of ParameterKey, see the "**Additional information about request parameters**" section of this topic.
      // 
      // >- PreferenceParameters is optional. If you specify PreferenceParameters, you must specify both ParameterKey and ParameterValue.
      // > - If you set TemplateScratchType to ResourceImport, you must set ParameterKey to DeletionPolicy.
      // 
      // This parameter is required.
      shared_ptr<string> parameterKey_ {};
      // The parameter value. The value of ParameterValue varies based on the value of ParameterKey.
      // 
      // For more information about the valid values of ParameterKey, see the "**Additional information about request parameters**" section of this topic.
      // 
      // >  PreferenceParameters is optional. If you specify PreferenceParameters, you must specify both ParameterKey and ParameterValue.
      // 
      // This parameter is required.
      shared_ptr<string> parameterValue_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->executionMode_ == nullptr && this->logicalIdStrategy_ == nullptr && this->preferenceParameters_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->sourceResourceGroup_ == nullptr && this->sourceResources_ == nullptr && this->sourceTag_ == nullptr && this->templateScratchId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTemplateScratchRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTemplateScratchRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string getExecutionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline UpdateTemplateScratchRequest& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // logicalIdStrategy Field Functions 
    bool hasLogicalIdStrategy() const { return this->logicalIdStrategy_ != nullptr;};
    void deleteLogicalIdStrategy() { this->logicalIdStrategy_ = nullptr;};
    inline string getLogicalIdStrategy() const { DARABONBA_PTR_GET_DEFAULT(logicalIdStrategy_, "") };
    inline UpdateTemplateScratchRequest& setLogicalIdStrategy(string logicalIdStrategy) { DARABONBA_PTR_SET_VALUE(logicalIdStrategy_, logicalIdStrategy) };


    // preferenceParameters Field Functions 
    bool hasPreferenceParameters() const { return this->preferenceParameters_ != nullptr;};
    void deletePreferenceParameters() { this->preferenceParameters_ = nullptr;};
    inline const vector<UpdateTemplateScratchRequest::PreferenceParameters> & getPreferenceParameters() const { DARABONBA_PTR_GET_CONST(preferenceParameters_, vector<UpdateTemplateScratchRequest::PreferenceParameters>) };
    inline vector<UpdateTemplateScratchRequest::PreferenceParameters> getPreferenceParameters() { DARABONBA_PTR_GET(preferenceParameters_, vector<UpdateTemplateScratchRequest::PreferenceParameters>) };
    inline UpdateTemplateScratchRequest& setPreferenceParameters(const vector<UpdateTemplateScratchRequest::PreferenceParameters> & preferenceParameters) { DARABONBA_PTR_SET_VALUE(preferenceParameters_, preferenceParameters) };
    inline UpdateTemplateScratchRequest& setPreferenceParameters(vector<UpdateTemplateScratchRequest::PreferenceParameters> && preferenceParameters) { DARABONBA_PTR_SET_RVALUE(preferenceParameters_, preferenceParameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateTemplateScratchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateTemplateScratchRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceResourceGroup Field Functions 
    bool hasSourceResourceGroup() const { return this->sourceResourceGroup_ != nullptr;};
    void deleteSourceResourceGroup() { this->sourceResourceGroup_ = nullptr;};
    inline const UpdateTemplateScratchRequest::SourceResourceGroup & getSourceResourceGroup() const { DARABONBA_PTR_GET_CONST(sourceResourceGroup_, UpdateTemplateScratchRequest::SourceResourceGroup) };
    inline UpdateTemplateScratchRequest::SourceResourceGroup getSourceResourceGroup() { DARABONBA_PTR_GET(sourceResourceGroup_, UpdateTemplateScratchRequest::SourceResourceGroup) };
    inline UpdateTemplateScratchRequest& setSourceResourceGroup(const UpdateTemplateScratchRequest::SourceResourceGroup & sourceResourceGroup) { DARABONBA_PTR_SET_VALUE(sourceResourceGroup_, sourceResourceGroup) };
    inline UpdateTemplateScratchRequest& setSourceResourceGroup(UpdateTemplateScratchRequest::SourceResourceGroup && sourceResourceGroup) { DARABONBA_PTR_SET_RVALUE(sourceResourceGroup_, sourceResourceGroup) };


    // sourceResources Field Functions 
    bool hasSourceResources() const { return this->sourceResources_ != nullptr;};
    void deleteSourceResources() { this->sourceResources_ = nullptr;};
    inline const vector<UpdateTemplateScratchRequest::SourceResources> & getSourceResources() const { DARABONBA_PTR_GET_CONST(sourceResources_, vector<UpdateTemplateScratchRequest::SourceResources>) };
    inline vector<UpdateTemplateScratchRequest::SourceResources> getSourceResources() { DARABONBA_PTR_GET(sourceResources_, vector<UpdateTemplateScratchRequest::SourceResources>) };
    inline UpdateTemplateScratchRequest& setSourceResources(const vector<UpdateTemplateScratchRequest::SourceResources> & sourceResources) { DARABONBA_PTR_SET_VALUE(sourceResources_, sourceResources) };
    inline UpdateTemplateScratchRequest& setSourceResources(vector<UpdateTemplateScratchRequest::SourceResources> && sourceResources) { DARABONBA_PTR_SET_RVALUE(sourceResources_, sourceResources) };


    // sourceTag Field Functions 
    bool hasSourceTag() const { return this->sourceTag_ != nullptr;};
    void deleteSourceTag() { this->sourceTag_ = nullptr;};
    inline const UpdateTemplateScratchRequest::SourceTag & getSourceTag() const { DARABONBA_PTR_GET_CONST(sourceTag_, UpdateTemplateScratchRequest::SourceTag) };
    inline UpdateTemplateScratchRequest::SourceTag getSourceTag() { DARABONBA_PTR_GET(sourceTag_, UpdateTemplateScratchRequest::SourceTag) };
    inline UpdateTemplateScratchRequest& setSourceTag(const UpdateTemplateScratchRequest::SourceTag & sourceTag) { DARABONBA_PTR_SET_VALUE(sourceTag_, sourceTag) };
    inline UpdateTemplateScratchRequest& setSourceTag(UpdateTemplateScratchRequest::SourceTag && sourceTag) { DARABONBA_PTR_SET_RVALUE(sourceTag_, sourceTag) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string getTemplateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline UpdateTemplateScratchRequest& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    shared_ptr<string> clientToken_ {};
    // The description of the scenario.
    shared_ptr<string> description_ {};
    // The execution mode. Valid values:
    // 
    // *   Async (default)
    // *   Sync
    // 
    // > If you have a wide scope of resources, Sync takes longer. If you set ExecutionMode to Sync, we recommend that you specify ClientToken to prevent the execution timeout.
    shared_ptr<string> executionMode_ {};
    // The policy based on which the logical ID is generated. Valid values:
    // 
    // *   LongTypePrefixAndIndexSuffix: long-type prefix + index-type suffix
    // *   LongTypePrefixAndHashSuffix: long-type prefix + hash-type suffix
    // *   ShortTypePrefixAndHashSuffix: short-type prefix + hash-type suffix
    // 
    // >  If you set TemplateScratchType to ArchitectureDetection, the default value of LogicalIdStrategy is LongTypePrefixAndHashSuffix. In other cases, the default value of LogicalIdStrategy is LongTypePrefixAndIndexSuffix.
    shared_ptr<string> logicalIdStrategy_ {};
    // The preference parameters of the resource scenario.
    shared_ptr<vector<UpdateTemplateScratchRequest::PreferenceParameters>> preferenceParameters_ {};
    // The region ID of the scenario.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The source resource group.
    // 
    // >  You must specify only one of the following parameters: SourceResources, SourceTag, and SourceResourceGroup.
    shared_ptr<UpdateTemplateScratchRequest::SourceResourceGroup> sourceResourceGroup_ {};
    // The source resources.
    // 
    // >  You must specify only one of the following parameters: SourceResources, SourceTag, and SourceResourceGroup.
    shared_ptr<vector<UpdateTemplateScratchRequest::SourceResources>> sourceResources_ {};
    // The source tag.
    // 
    // >  You must specify only one of the following parameters: SourceResources, SourceTag, and SourceResourceGroup.
    shared_ptr<UpdateTemplateScratchRequest::SourceTag> sourceTag_ {};
    // The ID of the resource scenario.
    // 
    // The valid values of the ParameterKey and ParameterValue request parameters vary based on the IDs of different types of resource scenarios. For more information, see the "Additional information about request parameters" section of this topic.
    // 
    // >  You can call the [ListTemplateScratches](https://help.aliyun.com/document_detail/610832.html) operation to query the ID of a resource scenario.
    // 
    // This parameter is required.
    shared_ptr<string> templateScratchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
