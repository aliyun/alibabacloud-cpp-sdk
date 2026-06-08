// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHRESPONSEBODY_HPP_
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
  class GetTemplateScratchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateScratchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateScratch, templateScratch_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateScratchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratch, templateScratch_);
    };
    GetTemplateScratchResponseBody() = default ;
    GetTemplateScratchResponseBody(const GetTemplateScratchResponseBody &) = default ;
    GetTemplateScratchResponseBody(GetTemplateScratchResponseBody &&) = default ;
    GetTemplateScratchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateScratchResponseBody() = default ;
    GetTemplateScratchResponseBody& operator=(const GetTemplateScratchResponseBody &) = default ;
    GetTemplateScratchResponseBody& operator=(GetTemplateScratchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateScratch : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateScratch& obj) { 
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
      friend void from_json(const Darabonba::Json& j, TemplateScratch& obj) { 
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
      TemplateScratch() = default ;
      TemplateScratch(const TemplateScratch &) = default ;
      TemplateScratch(TemplateScratch &&) = default ;
      TemplateScratch(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateScratch() = default ;
      TemplateScratch& operator=(const TemplateScratch &) = default ;
      TemplateScratch& operator=(TemplateScratch &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Stacks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Stacks& obj) { 
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(StackId, stackId_);
          DARABONBA_PTR_TO_JSON(UsageType, usageType_);
        };
        friend void from_json(const Darabonba::Json& j, Stacks& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(StackId, stackId_);
          DARABONBA_PTR_FROM_JSON(UsageType, usageType_);
        };
        Stacks() = default ;
        Stacks(const Stacks &) = default ;
        Stacks(Stacks &&) = default ;
        Stacks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Stacks() = default ;
        Stacks& operator=(const Stacks &) = default ;
        Stacks& operator=(Stacks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->regionId_ == nullptr
        && this->stackId_ == nullptr && this->usageType_ == nullptr; };
        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Stacks& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // stackId Field Functions 
        bool hasStackId() const { return this->stackId_ != nullptr;};
        void deleteStackId() { this->stackId_ = nullptr;};
        inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
        inline Stacks& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


        // usageType Field Functions 
        bool hasUsageType() const { return this->usageType_ != nullptr;};
        void deleteUsageType() { this->usageType_ = nullptr;};
        inline string getUsageType() const { DARABONBA_PTR_GET_DEFAULT(usageType_, "") };
        inline Stacks& setUsageType(string usageType) { DARABONBA_PTR_SET_VALUE(usageType_, usageType) };


      protected:
        // The region ID of the stack.
        shared_ptr<string> regionId_ {};
        // The stack ID.
        shared_ptr<string> stackId_ {};
        // The purpose of the stack. Valid values:
        // 
        // *   ResourceImport: resource management
        // *   ArchitectureReplication: resource replication
        shared_ptr<string> usageType_ {};
      };

      class StackProvision : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StackProvision& obj) { 
          DARABONBA_PTR_TO_JSON(Creatable, creatable_);
          DARABONBA_PTR_TO_JSON(Importable, importable_);
        };
        friend void from_json(const Darabonba::Json& j, StackProvision& obj) { 
          DARABONBA_PTR_FROM_JSON(Creatable, creatable_);
          DARABONBA_PTR_FROM_JSON(Importable, importable_);
        };
        StackProvision() = default ;
        StackProvision(const StackProvision &) = default ;
        StackProvision(StackProvision &&) = default ;
        StackProvision(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StackProvision() = default ;
        StackProvision& operator=(const StackProvision &) = default ;
        StackProvision& operator=(StackProvision &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creatable_ == nullptr
        && this->importable_ == nullptr; };
        // creatable Field Functions 
        bool hasCreatable() const { return this->creatable_ != nullptr;};
        void deleteCreatable() { this->creatable_ = nullptr;};
        inline bool getCreatable() const { DARABONBA_PTR_GET_DEFAULT(creatable_, false) };
        inline StackProvision& setCreatable(bool creatable) { DARABONBA_PTR_SET_VALUE(creatable_, creatable) };


        // importable Field Functions 
        bool hasImportable() const { return this->importable_ != nullptr;};
        void deleteImportable() { this->importable_ = nullptr;};
        inline bool getImportable() const { DARABONBA_PTR_GET_DEFAULT(importable_, false) };
        inline StackProvision& setImportable(bool importable) { DARABONBA_PTR_SET_VALUE(importable_, importable) };


      protected:
        // Indicates whether the resource is replicated by calling the [CreateStack](https://help.aliyun.com/document_detail/132086.html) operation. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> creatable_ {};
        // Indicates whether the resource is managed by calling the [CreateChangeSet](https://help.aliyun.com/document_detail/131051.html) operation. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> importable_ {};
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
        inline         const Darabonba::Json & getResourceTags() const { DARABONBA_GET(resourceTags_) };
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
        // The source tags.
        Darabonba::Json resourceTags_ {};
        // The resource type filters.
        shared_ptr<vector<string>> resourceTypeFilter_ {};
      };

      class SourceResources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceResources& obj) { 
          DARABONBA_PTR_TO_JSON(RelatedResourceTypeFilter, relatedResourceTypeFilter_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, SourceResources& obj) { 
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
        virtual bool empty() const override { return this->relatedResourceTypeFilter_ == nullptr
        && this->resourceId_ == nullptr && this->resourceType_ == nullptr; };
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
        // The related resource type filters.
        shared_ptr<vector<string>> relatedResourceTypeFilter_ {};
        // The resource ID.
        shared_ptr<string> resourceId_ {};
        // The resource type.
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
        shared_ptr<string> resourceGroupId_ {};
        // The resource type filters.
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
        shared_ptr<string> parameterKey_ {};
        // The parameter value.
        shared_ptr<string> parameterValue_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->failedCode_ == nullptr && this->logicalIdStrategy_ == nullptr && this->preferenceParameters_ == nullptr && this->resourceGroupId_ == nullptr
        && this->sourceResourceGroup_ == nullptr && this->sourceResources_ == nullptr && this->sourceTag_ == nullptr && this->stackProvision_ == nullptr && this->stacks_ == nullptr
        && this->status_ == nullptr && this->statusReason_ == nullptr && this->templateScratchData_ == nullptr && this->templateScratchId_ == nullptr && this->templateScratchType_ == nullptr
        && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TemplateScratch& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline TemplateScratch& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // failedCode Field Functions 
      bool hasFailedCode() const { return this->failedCode_ != nullptr;};
      void deleteFailedCode() { this->failedCode_ = nullptr;};
      inline string getFailedCode() const { DARABONBA_PTR_GET_DEFAULT(failedCode_, "") };
      inline TemplateScratch& setFailedCode(string failedCode) { DARABONBA_PTR_SET_VALUE(failedCode_, failedCode) };


      // logicalIdStrategy Field Functions 
      bool hasLogicalIdStrategy() const { return this->logicalIdStrategy_ != nullptr;};
      void deleteLogicalIdStrategy() { this->logicalIdStrategy_ = nullptr;};
      inline string getLogicalIdStrategy() const { DARABONBA_PTR_GET_DEFAULT(logicalIdStrategy_, "") };
      inline TemplateScratch& setLogicalIdStrategy(string logicalIdStrategy) { DARABONBA_PTR_SET_VALUE(logicalIdStrategy_, logicalIdStrategy) };


      // preferenceParameters Field Functions 
      bool hasPreferenceParameters() const { return this->preferenceParameters_ != nullptr;};
      void deletePreferenceParameters() { this->preferenceParameters_ = nullptr;};
      inline const vector<TemplateScratch::PreferenceParameters> & getPreferenceParameters() const { DARABONBA_PTR_GET_CONST(preferenceParameters_, vector<TemplateScratch::PreferenceParameters>) };
      inline vector<TemplateScratch::PreferenceParameters> getPreferenceParameters() { DARABONBA_PTR_GET(preferenceParameters_, vector<TemplateScratch::PreferenceParameters>) };
      inline TemplateScratch& setPreferenceParameters(const vector<TemplateScratch::PreferenceParameters> & preferenceParameters) { DARABONBA_PTR_SET_VALUE(preferenceParameters_, preferenceParameters) };
      inline TemplateScratch& setPreferenceParameters(vector<TemplateScratch::PreferenceParameters> && preferenceParameters) { DARABONBA_PTR_SET_RVALUE(preferenceParameters_, preferenceParameters) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline TemplateScratch& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // sourceResourceGroup Field Functions 
      bool hasSourceResourceGroup() const { return this->sourceResourceGroup_ != nullptr;};
      void deleteSourceResourceGroup() { this->sourceResourceGroup_ = nullptr;};
      inline const TemplateScratch::SourceResourceGroup & getSourceResourceGroup() const { DARABONBA_PTR_GET_CONST(sourceResourceGroup_, TemplateScratch::SourceResourceGroup) };
      inline TemplateScratch::SourceResourceGroup getSourceResourceGroup() { DARABONBA_PTR_GET(sourceResourceGroup_, TemplateScratch::SourceResourceGroup) };
      inline TemplateScratch& setSourceResourceGroup(const TemplateScratch::SourceResourceGroup & sourceResourceGroup) { DARABONBA_PTR_SET_VALUE(sourceResourceGroup_, sourceResourceGroup) };
      inline TemplateScratch& setSourceResourceGroup(TemplateScratch::SourceResourceGroup && sourceResourceGroup) { DARABONBA_PTR_SET_RVALUE(sourceResourceGroup_, sourceResourceGroup) };


      // sourceResources Field Functions 
      bool hasSourceResources() const { return this->sourceResources_ != nullptr;};
      void deleteSourceResources() { this->sourceResources_ = nullptr;};
      inline const vector<TemplateScratch::SourceResources> & getSourceResources() const { DARABONBA_PTR_GET_CONST(sourceResources_, vector<TemplateScratch::SourceResources>) };
      inline vector<TemplateScratch::SourceResources> getSourceResources() { DARABONBA_PTR_GET(sourceResources_, vector<TemplateScratch::SourceResources>) };
      inline TemplateScratch& setSourceResources(const vector<TemplateScratch::SourceResources> & sourceResources) { DARABONBA_PTR_SET_VALUE(sourceResources_, sourceResources) };
      inline TemplateScratch& setSourceResources(vector<TemplateScratch::SourceResources> && sourceResources) { DARABONBA_PTR_SET_RVALUE(sourceResources_, sourceResources) };


      // sourceTag Field Functions 
      bool hasSourceTag() const { return this->sourceTag_ != nullptr;};
      void deleteSourceTag() { this->sourceTag_ = nullptr;};
      inline const TemplateScratch::SourceTag & getSourceTag() const { DARABONBA_PTR_GET_CONST(sourceTag_, TemplateScratch::SourceTag) };
      inline TemplateScratch::SourceTag getSourceTag() { DARABONBA_PTR_GET(sourceTag_, TemplateScratch::SourceTag) };
      inline TemplateScratch& setSourceTag(const TemplateScratch::SourceTag & sourceTag) { DARABONBA_PTR_SET_VALUE(sourceTag_, sourceTag) };
      inline TemplateScratch& setSourceTag(TemplateScratch::SourceTag && sourceTag) { DARABONBA_PTR_SET_RVALUE(sourceTag_, sourceTag) };


      // stackProvision Field Functions 
      bool hasStackProvision() const { return this->stackProvision_ != nullptr;};
      void deleteStackProvision() { this->stackProvision_ = nullptr;};
      inline const TemplateScratch::StackProvision & getStackProvision() const { DARABONBA_PTR_GET_CONST(stackProvision_, TemplateScratch::StackProvision) };
      inline TemplateScratch::StackProvision getStackProvision() { DARABONBA_PTR_GET(stackProvision_, TemplateScratch::StackProvision) };
      inline TemplateScratch& setStackProvision(const TemplateScratch::StackProvision & stackProvision) { DARABONBA_PTR_SET_VALUE(stackProvision_, stackProvision) };
      inline TemplateScratch& setStackProvision(TemplateScratch::StackProvision && stackProvision) { DARABONBA_PTR_SET_RVALUE(stackProvision_, stackProvision) };


      // stacks Field Functions 
      bool hasStacks() const { return this->stacks_ != nullptr;};
      void deleteStacks() { this->stacks_ = nullptr;};
      inline const vector<TemplateScratch::Stacks> & getStacks() const { DARABONBA_PTR_GET_CONST(stacks_, vector<TemplateScratch::Stacks>) };
      inline vector<TemplateScratch::Stacks> getStacks() { DARABONBA_PTR_GET(stacks_, vector<TemplateScratch::Stacks>) };
      inline TemplateScratch& setStacks(const vector<TemplateScratch::Stacks> & stacks) { DARABONBA_PTR_SET_VALUE(stacks_, stacks) };
      inline TemplateScratch& setStacks(vector<TemplateScratch::Stacks> && stacks) { DARABONBA_PTR_SET_RVALUE(stacks_, stacks) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TemplateScratch& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline TemplateScratch& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // templateScratchData Field Functions 
      bool hasTemplateScratchData() const { return this->templateScratchData_ != nullptr;};
      void deleteTemplateScratchData() { this->templateScratchData_ = nullptr;};
      inline       const Darabonba::Json & getTemplateScratchData() const { DARABONBA_GET(templateScratchData_) };
      Darabonba::Json & getTemplateScratchData() { DARABONBA_GET(templateScratchData_) };
      inline TemplateScratch& setTemplateScratchData(const Darabonba::Json & templateScratchData) { DARABONBA_SET_VALUE(templateScratchData_, templateScratchData) };
      inline TemplateScratch& setTemplateScratchData(Darabonba::Json && templateScratchData) { DARABONBA_SET_RVALUE(templateScratchData_, templateScratchData) };


      // templateScratchId Field Functions 
      bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
      void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
      inline string getTemplateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
      inline TemplateScratch& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


      // templateScratchType Field Functions 
      bool hasTemplateScratchType() const { return this->templateScratchType_ != nullptr;};
      void deleteTemplateScratchType() { this->templateScratchType_ = nullptr;};
      inline string getTemplateScratchType() const { DARABONBA_PTR_GET_DEFAULT(templateScratchType_, "") };
      inline TemplateScratch& setTemplateScratchType(string templateScratchType) { DARABONBA_PTR_SET_VALUE(templateScratchType_, templateScratchType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline TemplateScratch& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time at which the resource scenario was created.
      // 
      // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the resource scenario.
      shared_ptr<string> description_ {};
      // The status code of the resource scenario that fails to be created.
      // 
      // > This parameter is returned only if you set Status to GENERATE_FAILED.
      shared_ptr<string> failedCode_ {};
      // The policy based on which the logical ID is generated. Valid values:
      // 
      // *   LongTypePrefixAndIndexSuffix (default): long-type prefix + index-type suffix
      // *   LongTypePrefixAndHashSuffix: long-type prefix + hash-type suffix
      // *   ShortTypePrefixAndHashSuffix: short-type prefix + hash-type suffix
      shared_ptr<string> logicalIdStrategy_ {};
      // The preference parameters of the resource scenario.
      shared_ptr<vector<TemplateScratch::PreferenceParameters>> preferenceParameters_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The source resource group.
      shared_ptr<TemplateScratch::SourceResourceGroup> sourceResourceGroup_ {};
      // The source resources.
      shared_ptr<vector<TemplateScratch::SourceResources>> sourceResources_ {};
      // The source tag.
      shared_ptr<TemplateScratch::SourceTag> sourceTag_ {};
      // The preset information of the stack.
      shared_ptr<TemplateScratch::StackProvision> stackProvision_ {};
      // The stacks that are associated with the resource scenario.
      shared_ptr<vector<TemplateScratch::Stacks>> stacks_ {};
      // The state of the resource scenario. Valid values:
      // 
      // *   GENERATE_IN_PROGRESS: The resource scenario is being created.
      // *   GENERATE_COMPLETE: The resource scenario is created.
      // *   GENERATE_FAILED: The resource scenario fails to be created.
      shared_ptr<string> status_ {};
      // The reason why the resource scenario fails to be created.
      // 
      // > This parameter is returned only if you set Status to GENERATE_FAILED.
      shared_ptr<string> statusReason_ {};
      // The resource scenario data.
      Darabonba::Json templateScratchData_ {};
      // The ID of the resource scenario.
      shared_ptr<string> templateScratchId_ {};
      // The type of the resource scenario. Valid values:
      // 
      // *   ResourceImport: resource management
      // *   ArchitectureReplication: resource replication
      shared_ptr<string> templateScratchType_ {};
      // The time at which the resource scenario was updated.
      // 
      // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->templateScratch_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateScratchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateScratch Field Functions 
    bool hasTemplateScratch() const { return this->templateScratch_ != nullptr;};
    void deleteTemplateScratch() { this->templateScratch_ = nullptr;};
    inline const GetTemplateScratchResponseBody::TemplateScratch & getTemplateScratch() const { DARABONBA_PTR_GET_CONST(templateScratch_, GetTemplateScratchResponseBody::TemplateScratch) };
    inline GetTemplateScratchResponseBody::TemplateScratch getTemplateScratch() { DARABONBA_PTR_GET(templateScratch_, GetTemplateScratchResponseBody::TemplateScratch) };
    inline GetTemplateScratchResponseBody& setTemplateScratch(const GetTemplateScratchResponseBody::TemplateScratch & templateScratch) { DARABONBA_PTR_SET_VALUE(templateScratch_, templateScratch) };
    inline GetTemplateScratchResponseBody& setTemplateScratch(GetTemplateScratchResponseBody::TemplateScratch && templateScratch) { DARABONBA_PTR_SET_RVALUE(templateScratch_, templateScratch) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The resource scenario.
    shared_ptr<GetTemplateScratchResponseBody::TemplateScratch> templateScratch_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
