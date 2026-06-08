// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATESCRATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATESCRATCHREQUEST_HPP_
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the resource scenario.
      // 
      // > Tags is optional. If you want to specify Tags, you must specify Key.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value of the resource scenario.
      shared_ptr<string> value_ {};
    };

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
      // The source tags that consist of key-value pairs. If you want to specify only the tag key, you must leave the tag value empty. Example: `{"TagKey": ""}`.
      // 
      // You can add up to 10 source tags.
      // 
      // This parameter is required.
      Darabonba::Json resourceTags_ {};
      // The resource types for filtering resources.
      shared_ptr<vector<string>> resourceTypeFilter_ {};
    };

    class SourceResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceResources& obj) { 
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RelatedResourceTypeFilter, relatedResourceTypeFilter_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, SourceResources& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RelatedResourceTypeFilter, relatedResourceTypeFilter_);
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
      virtual bool empty() const override { return this->regionId_ == nullptr
        && this->relatedResourceTypeFilter_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr; };
      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline SourceResources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // relatedResourceTypeFilter Field Functions 
      bool hasRelatedResourceTypeFilter() const { return this->relatedResourceTypeFilter_ != nullptr;};
      void deleteRelatedResourceTypeFilter() { this->relatedResourceTypeFilter_ = nullptr;};
      inline const vector<string> & getRelatedResourceTypeFilter() const { DARABONBA_PTR_GET_CONST(relatedResourceTypeFilter_, vector<string>) };
      inline vector<string> getRelatedResourceTypeFilter() { DARABONBA_PTR_GET(relatedResourceTypeFilter_, vector<string>) };
      inline SourceResources& setRelatedResourceTypeFilter(const vector<string> & relatedResourceTypeFilter) { DARABONBA_PTR_SET_VALUE(relatedResourceTypeFilter_, relatedResourceTypeFilter) };
      inline SourceResources& setRelatedResourceTypeFilter(vector<string> && relatedResourceTypeFilter) { DARABONBA_PTR_SET_RVALUE(relatedResourceTypeFilter_, relatedResourceTypeFilter) };


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
      // The region ID of the resource.
      // 
      // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
      // 
      // > 
      // 
      // *   This parameter takes effect only when TemplateScratchType is set to ArchitectureDetection.
      // 
      // *   The region ID of a global resource is `global`. For example, the region ID of the ALIYUN::CDN::Domain global resource is `global`.
      shared_ptr<string> regionId_ {};
      // The related resource type filters.
      shared_ptr<vector<string>> relatedResourceTypeFilter_ {};
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
      // > 
      // 
      // *   PreferenceParameters is optional. If you specify PreferenceParameters, you must specify ParameterKey and ParameterValue.
      // 
      // *   You must set ParameterKey to DeletionPolicy when TemplateScratchType is set to ResourceImport.
      // 
      // This parameter is required.
      shared_ptr<string> parameterKey_ {};
      // The parameter value. The value is an assignment to the parameter key.
      // 
      // For more information about the valid values of ParameterValue, see the "**Additional information about request parameters**" section of this topic.
      // 
      // >  PreferenceParameters is optional. If you specify PreferenceParameters, you must specify ParameterKey and ParameterValue.
      // 
      // This parameter is required.
      shared_ptr<string> parameterValue_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->executionMode_ == nullptr && this->logicalIdStrategy_ == nullptr && this->preferenceParameters_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->sourceResourceGroup_ == nullptr && this->sourceResources_ == nullptr && this->sourceTag_ == nullptr && this->tags_ == nullptr
        && this->templateScratchType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTemplateScratchRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTemplateScratchRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string getExecutionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline CreateTemplateScratchRequest& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // logicalIdStrategy Field Functions 
    bool hasLogicalIdStrategy() const { return this->logicalIdStrategy_ != nullptr;};
    void deleteLogicalIdStrategy() { this->logicalIdStrategy_ = nullptr;};
    inline string getLogicalIdStrategy() const { DARABONBA_PTR_GET_DEFAULT(logicalIdStrategy_, "") };
    inline CreateTemplateScratchRequest& setLogicalIdStrategy(string logicalIdStrategy) { DARABONBA_PTR_SET_VALUE(logicalIdStrategy_, logicalIdStrategy) };


    // preferenceParameters Field Functions 
    bool hasPreferenceParameters() const { return this->preferenceParameters_ != nullptr;};
    void deletePreferenceParameters() { this->preferenceParameters_ = nullptr;};
    inline const vector<CreateTemplateScratchRequest::PreferenceParameters> & getPreferenceParameters() const { DARABONBA_PTR_GET_CONST(preferenceParameters_, vector<CreateTemplateScratchRequest::PreferenceParameters>) };
    inline vector<CreateTemplateScratchRequest::PreferenceParameters> getPreferenceParameters() { DARABONBA_PTR_GET(preferenceParameters_, vector<CreateTemplateScratchRequest::PreferenceParameters>) };
    inline CreateTemplateScratchRequest& setPreferenceParameters(const vector<CreateTemplateScratchRequest::PreferenceParameters> & preferenceParameters) { DARABONBA_PTR_SET_VALUE(preferenceParameters_, preferenceParameters) };
    inline CreateTemplateScratchRequest& setPreferenceParameters(vector<CreateTemplateScratchRequest::PreferenceParameters> && preferenceParameters) { DARABONBA_PTR_SET_RVALUE(preferenceParameters_, preferenceParameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTemplateScratchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateTemplateScratchRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceResourceGroup Field Functions 
    bool hasSourceResourceGroup() const { return this->sourceResourceGroup_ != nullptr;};
    void deleteSourceResourceGroup() { this->sourceResourceGroup_ = nullptr;};
    inline const CreateTemplateScratchRequest::SourceResourceGroup & getSourceResourceGroup() const { DARABONBA_PTR_GET_CONST(sourceResourceGroup_, CreateTemplateScratchRequest::SourceResourceGroup) };
    inline CreateTemplateScratchRequest::SourceResourceGroup getSourceResourceGroup() { DARABONBA_PTR_GET(sourceResourceGroup_, CreateTemplateScratchRequest::SourceResourceGroup) };
    inline CreateTemplateScratchRequest& setSourceResourceGroup(const CreateTemplateScratchRequest::SourceResourceGroup & sourceResourceGroup) { DARABONBA_PTR_SET_VALUE(sourceResourceGroup_, sourceResourceGroup) };
    inline CreateTemplateScratchRequest& setSourceResourceGroup(CreateTemplateScratchRequest::SourceResourceGroup && sourceResourceGroup) { DARABONBA_PTR_SET_RVALUE(sourceResourceGroup_, sourceResourceGroup) };


    // sourceResources Field Functions 
    bool hasSourceResources() const { return this->sourceResources_ != nullptr;};
    void deleteSourceResources() { this->sourceResources_ = nullptr;};
    inline const vector<CreateTemplateScratchRequest::SourceResources> & getSourceResources() const { DARABONBA_PTR_GET_CONST(sourceResources_, vector<CreateTemplateScratchRequest::SourceResources>) };
    inline vector<CreateTemplateScratchRequest::SourceResources> getSourceResources() { DARABONBA_PTR_GET(sourceResources_, vector<CreateTemplateScratchRequest::SourceResources>) };
    inline CreateTemplateScratchRequest& setSourceResources(const vector<CreateTemplateScratchRequest::SourceResources> & sourceResources) { DARABONBA_PTR_SET_VALUE(sourceResources_, sourceResources) };
    inline CreateTemplateScratchRequest& setSourceResources(vector<CreateTemplateScratchRequest::SourceResources> && sourceResources) { DARABONBA_PTR_SET_RVALUE(sourceResources_, sourceResources) };


    // sourceTag Field Functions 
    bool hasSourceTag() const { return this->sourceTag_ != nullptr;};
    void deleteSourceTag() { this->sourceTag_ = nullptr;};
    inline const CreateTemplateScratchRequest::SourceTag & getSourceTag() const { DARABONBA_PTR_GET_CONST(sourceTag_, CreateTemplateScratchRequest::SourceTag) };
    inline CreateTemplateScratchRequest::SourceTag getSourceTag() { DARABONBA_PTR_GET(sourceTag_, CreateTemplateScratchRequest::SourceTag) };
    inline CreateTemplateScratchRequest& setSourceTag(const CreateTemplateScratchRequest::SourceTag & sourceTag) { DARABONBA_PTR_SET_VALUE(sourceTag_, sourceTag) };
    inline CreateTemplateScratchRequest& setSourceTag(CreateTemplateScratchRequest::SourceTag && sourceTag) { DARABONBA_PTR_SET_RVALUE(sourceTag_, sourceTag) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateTemplateScratchRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateTemplateScratchRequest::Tags>) };
    inline vector<CreateTemplateScratchRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateTemplateScratchRequest::Tags>) };
    inline CreateTemplateScratchRequest& setTags(const vector<CreateTemplateScratchRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateTemplateScratchRequest& setTags(vector<CreateTemplateScratchRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateScratchType Field Functions 
    bool hasTemplateScratchType() const { return this->templateScratchType_ != nullptr;};
    void deleteTemplateScratchType() { this->templateScratchType_ = nullptr;};
    inline string getTemplateScratchType() const { DARABONBA_PTR_GET_DEFAULT(templateScratchType_, "") };
    inline CreateTemplateScratchRequest& setTemplateScratchType(string templateScratchType) { DARABONBA_PTR_SET_VALUE(templateScratchType_, templateScratchType) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    shared_ptr<string> clientToken_ {};
    // The description of the resource scenario.
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
    // *   LongTypePrefixAndIndexSuffix (default): long-type prefix + index-type suffix
    // *   LongTypePrefixAndHashSuffix: long-type prefix + hash-type suffix
    // *   ShortTypePrefixAndHashSuffix: short-type prefix + hash-type suffix
    shared_ptr<string> logicalIdStrategy_ {};
    // The preference parameters of the resource scenario.
    shared_ptr<vector<CreateTemplateScratchRequest::PreferenceParameters>> preferenceParameters_ {};
    // The region ID of the resource scenario.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The source resource group.
    shared_ptr<CreateTemplateScratchRequest::SourceResourceGroup> sourceResourceGroup_ {};
    // The source resources.
    // 
    // When you set TemplateScratchType to ArchitectureDetection, you can specify SourceResources to detect the architecture data of all resources associated with the specified source resources. For example, if you set SourceResources to the ID of a Classic Load Balancer (CLB) instance, the architecture data of all resources, such as the Elastic Compute Service (ECS) instance, vSwitch, and VPC, associated with the CLB instance is detected.
    // 
    // If you set TemplateScratchType to ArchitectureDetection, you can specify up to 20 source resources. In other cases, you can specify up to 200 source resources.
    shared_ptr<vector<CreateTemplateScratchRequest::SourceResources>> sourceResources_ {};
    // The source tag.
    shared_ptr<CreateTemplateScratchRequest::SourceTag> sourceTag_ {};
    // The tags of the resource scenario.
    shared_ptr<vector<CreateTemplateScratchRequest::Tags>> tags_ {};
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
    shared_ptr<string> templateScratchType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
