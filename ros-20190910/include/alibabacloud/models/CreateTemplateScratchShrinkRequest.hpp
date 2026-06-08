// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATESCRATCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATESCRATCHSHRINKREQUEST_HPP_
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
  class CreateTemplateScratchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateScratchShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateScratchType, templateScratchType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateScratchShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateScratchType, templateScratchType_);
    };
    CreateTemplateScratchShrinkRequest() = default ;
    CreateTemplateScratchShrinkRequest(const CreateTemplateScratchShrinkRequest &) = default ;
    CreateTemplateScratchShrinkRequest(CreateTemplateScratchShrinkRequest &&) = default ;
    CreateTemplateScratchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateScratchShrinkRequest() = default ;
    CreateTemplateScratchShrinkRequest& operator=(const CreateTemplateScratchShrinkRequest &) = default ;
    CreateTemplateScratchShrinkRequest& operator=(CreateTemplateScratchShrinkRequest &&) = default ;
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

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->executionMode_ == nullptr && this->logicalIdStrategy_ == nullptr && this->preferenceParametersShrink_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->sourceResourceGroupShrink_ == nullptr && this->sourceResourcesShrink_ == nullptr && this->sourceTagShrink_ == nullptr && this->tags_ == nullptr
        && this->templateScratchType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTemplateScratchShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTemplateScratchShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string getExecutionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline CreateTemplateScratchShrinkRequest& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // logicalIdStrategy Field Functions 
    bool hasLogicalIdStrategy() const { return this->logicalIdStrategy_ != nullptr;};
    void deleteLogicalIdStrategy() { this->logicalIdStrategy_ = nullptr;};
    inline string getLogicalIdStrategy() const { DARABONBA_PTR_GET_DEFAULT(logicalIdStrategy_, "") };
    inline CreateTemplateScratchShrinkRequest& setLogicalIdStrategy(string logicalIdStrategy) { DARABONBA_PTR_SET_VALUE(logicalIdStrategy_, logicalIdStrategy) };


    // preferenceParametersShrink Field Functions 
    bool hasPreferenceParametersShrink() const { return this->preferenceParametersShrink_ != nullptr;};
    void deletePreferenceParametersShrink() { this->preferenceParametersShrink_ = nullptr;};
    inline string getPreferenceParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(preferenceParametersShrink_, "") };
    inline CreateTemplateScratchShrinkRequest& setPreferenceParametersShrink(string preferenceParametersShrink) { DARABONBA_PTR_SET_VALUE(preferenceParametersShrink_, preferenceParametersShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTemplateScratchShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateTemplateScratchShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceResourceGroupShrink Field Functions 
    bool hasSourceResourceGroupShrink() const { return this->sourceResourceGroupShrink_ != nullptr;};
    void deleteSourceResourceGroupShrink() { this->sourceResourceGroupShrink_ = nullptr;};
    inline string getSourceResourceGroupShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceResourceGroupShrink_, "") };
    inline CreateTemplateScratchShrinkRequest& setSourceResourceGroupShrink(string sourceResourceGroupShrink) { DARABONBA_PTR_SET_VALUE(sourceResourceGroupShrink_, sourceResourceGroupShrink) };


    // sourceResourcesShrink Field Functions 
    bool hasSourceResourcesShrink() const { return this->sourceResourcesShrink_ != nullptr;};
    void deleteSourceResourcesShrink() { this->sourceResourcesShrink_ = nullptr;};
    inline string getSourceResourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceResourcesShrink_, "") };
    inline CreateTemplateScratchShrinkRequest& setSourceResourcesShrink(string sourceResourcesShrink) { DARABONBA_PTR_SET_VALUE(sourceResourcesShrink_, sourceResourcesShrink) };


    // sourceTagShrink Field Functions 
    bool hasSourceTagShrink() const { return this->sourceTagShrink_ != nullptr;};
    void deleteSourceTagShrink() { this->sourceTagShrink_ = nullptr;};
    inline string getSourceTagShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceTagShrink_, "") };
    inline CreateTemplateScratchShrinkRequest& setSourceTagShrink(string sourceTagShrink) { DARABONBA_PTR_SET_VALUE(sourceTagShrink_, sourceTagShrink) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateTemplateScratchShrinkRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateTemplateScratchShrinkRequest::Tags>) };
    inline vector<CreateTemplateScratchShrinkRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateTemplateScratchShrinkRequest::Tags>) };
    inline CreateTemplateScratchShrinkRequest& setTags(const vector<CreateTemplateScratchShrinkRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateTemplateScratchShrinkRequest& setTags(vector<CreateTemplateScratchShrinkRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateScratchType Field Functions 
    bool hasTemplateScratchType() const { return this->templateScratchType_ != nullptr;};
    void deleteTemplateScratchType() { this->templateScratchType_ = nullptr;};
    inline string getTemplateScratchType() const { DARABONBA_PTR_GET_DEFAULT(templateScratchType_, "") };
    inline CreateTemplateScratchShrinkRequest& setTemplateScratchType(string templateScratchType) { DARABONBA_PTR_SET_VALUE(templateScratchType_, templateScratchType) };


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
    shared_ptr<string> preferenceParametersShrink_ {};
    // The region ID of the resource scenario.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The source resource group.
    shared_ptr<string> sourceResourceGroupShrink_ {};
    // The source resources.
    // 
    // When you set TemplateScratchType to ArchitectureDetection, you can specify SourceResources to detect the architecture data of all resources associated with the specified source resources. For example, if you set SourceResources to the ID of a Classic Load Balancer (CLB) instance, the architecture data of all resources, such as the Elastic Compute Service (ECS) instance, vSwitch, and VPC, associated with the CLB instance is detected.
    // 
    // If you set TemplateScratchType to ArchitectureDetection, you can specify up to 20 source resources. In other cases, you can specify up to 200 source resources.
    shared_ptr<string> sourceResourcesShrink_ {};
    // The source tag.
    shared_ptr<string> sourceTagShrink_ {};
    // The tags of the resource scenario.
    shared_ptr<vector<CreateTemplateScratchShrinkRequest::Tags>> tags_ {};
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
