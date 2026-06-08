// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESCRATCHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESCRATCHESRESPONSEBODY_HPP_
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
  class ListTemplateScratchesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateScratchesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateScratches, templateScratches_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateScratchesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateScratches, templateScratches_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTemplateScratchesResponseBody() = default ;
    ListTemplateScratchesResponseBody(const ListTemplateScratchesResponseBody &) = default ;
    ListTemplateScratchesResponseBody(ListTemplateScratchesResponseBody &&) = default ;
    ListTemplateScratchesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateScratchesResponseBody() = default ;
    ListTemplateScratchesResponseBody& operator=(const ListTemplateScratchesResponseBody &) = default ;
    ListTemplateScratchesResponseBody& operator=(ListTemplateScratchesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateScratches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateScratches& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FailedCode, failedCode_);
        DARABONBA_PTR_TO_JSON(LogicalIdStrategy, logicalIdStrategy_);
        DARABONBA_PTR_TO_JSON(PreferenceParameters, preferenceParameters_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SourceResourceGroup, sourceResourceGroup_);
        DARABONBA_PTR_TO_JSON(SourceResources, sourceResources_);
        DARABONBA_PTR_TO_JSON(SourceTag, sourceTag_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TemplateScratchId, templateScratchId_);
        DARABONBA_PTR_TO_JSON(TemplateScratchType, templateScratchType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateScratches& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FailedCode, failedCode_);
        DARABONBA_PTR_FROM_JSON(LogicalIdStrategy, logicalIdStrategy_);
        DARABONBA_PTR_FROM_JSON(PreferenceParameters, preferenceParameters_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SourceResourceGroup, sourceResourceGroup_);
        DARABONBA_PTR_FROM_JSON(SourceResources, sourceResources_);
        DARABONBA_PTR_FROM_JSON(SourceTag, sourceTag_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TemplateScratchId, templateScratchId_);
        DARABONBA_PTR_FROM_JSON(TemplateScratchType, templateScratchType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      TemplateScratches() = default ;
      TemplateScratches(const TemplateScratches &) = default ;
      TemplateScratches(TemplateScratches &&) = default ;
      TemplateScratches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateScratches() = default ;
      TemplateScratches& operator=(const TemplateScratches &) = default ;
      TemplateScratches& operator=(TemplateScratches &&) = default ;
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
        shared_ptr<string> parameterKey_ {};
        // The parameter value.
        shared_ptr<string> parameterValue_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->failedCode_ == nullptr && this->logicalIdStrategy_ == nullptr && this->preferenceParameters_ == nullptr && this->resourceGroupId_ == nullptr
        && this->sourceResourceGroup_ == nullptr && this->sourceResources_ == nullptr && this->sourceTag_ == nullptr && this->status_ == nullptr && this->statusReason_ == nullptr
        && this->tags_ == nullptr && this->templateScratchId_ == nullptr && this->templateScratchType_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TemplateScratches& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline TemplateScratches& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // failedCode Field Functions 
      bool hasFailedCode() const { return this->failedCode_ != nullptr;};
      void deleteFailedCode() { this->failedCode_ = nullptr;};
      inline string getFailedCode() const { DARABONBA_PTR_GET_DEFAULT(failedCode_, "") };
      inline TemplateScratches& setFailedCode(string failedCode) { DARABONBA_PTR_SET_VALUE(failedCode_, failedCode) };


      // logicalIdStrategy Field Functions 
      bool hasLogicalIdStrategy() const { return this->logicalIdStrategy_ != nullptr;};
      void deleteLogicalIdStrategy() { this->logicalIdStrategy_ = nullptr;};
      inline string getLogicalIdStrategy() const { DARABONBA_PTR_GET_DEFAULT(logicalIdStrategy_, "") };
      inline TemplateScratches& setLogicalIdStrategy(string logicalIdStrategy) { DARABONBA_PTR_SET_VALUE(logicalIdStrategy_, logicalIdStrategy) };


      // preferenceParameters Field Functions 
      bool hasPreferenceParameters() const { return this->preferenceParameters_ != nullptr;};
      void deletePreferenceParameters() { this->preferenceParameters_ = nullptr;};
      inline const vector<TemplateScratches::PreferenceParameters> & getPreferenceParameters() const { DARABONBA_PTR_GET_CONST(preferenceParameters_, vector<TemplateScratches::PreferenceParameters>) };
      inline vector<TemplateScratches::PreferenceParameters> getPreferenceParameters() { DARABONBA_PTR_GET(preferenceParameters_, vector<TemplateScratches::PreferenceParameters>) };
      inline TemplateScratches& setPreferenceParameters(const vector<TemplateScratches::PreferenceParameters> & preferenceParameters) { DARABONBA_PTR_SET_VALUE(preferenceParameters_, preferenceParameters) };
      inline TemplateScratches& setPreferenceParameters(vector<TemplateScratches::PreferenceParameters> && preferenceParameters) { DARABONBA_PTR_SET_RVALUE(preferenceParameters_, preferenceParameters) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline TemplateScratches& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // sourceResourceGroup Field Functions 
      bool hasSourceResourceGroup() const { return this->sourceResourceGroup_ != nullptr;};
      void deleteSourceResourceGroup() { this->sourceResourceGroup_ = nullptr;};
      inline const TemplateScratches::SourceResourceGroup & getSourceResourceGroup() const { DARABONBA_PTR_GET_CONST(sourceResourceGroup_, TemplateScratches::SourceResourceGroup) };
      inline TemplateScratches::SourceResourceGroup getSourceResourceGroup() { DARABONBA_PTR_GET(sourceResourceGroup_, TemplateScratches::SourceResourceGroup) };
      inline TemplateScratches& setSourceResourceGroup(const TemplateScratches::SourceResourceGroup & sourceResourceGroup) { DARABONBA_PTR_SET_VALUE(sourceResourceGroup_, sourceResourceGroup) };
      inline TemplateScratches& setSourceResourceGroup(TemplateScratches::SourceResourceGroup && sourceResourceGroup) { DARABONBA_PTR_SET_RVALUE(sourceResourceGroup_, sourceResourceGroup) };


      // sourceResources Field Functions 
      bool hasSourceResources() const { return this->sourceResources_ != nullptr;};
      void deleteSourceResources() { this->sourceResources_ = nullptr;};
      inline const vector<TemplateScratches::SourceResources> & getSourceResources() const { DARABONBA_PTR_GET_CONST(sourceResources_, vector<TemplateScratches::SourceResources>) };
      inline vector<TemplateScratches::SourceResources> getSourceResources() { DARABONBA_PTR_GET(sourceResources_, vector<TemplateScratches::SourceResources>) };
      inline TemplateScratches& setSourceResources(const vector<TemplateScratches::SourceResources> & sourceResources) { DARABONBA_PTR_SET_VALUE(sourceResources_, sourceResources) };
      inline TemplateScratches& setSourceResources(vector<TemplateScratches::SourceResources> && sourceResources) { DARABONBA_PTR_SET_RVALUE(sourceResources_, sourceResources) };


      // sourceTag Field Functions 
      bool hasSourceTag() const { return this->sourceTag_ != nullptr;};
      void deleteSourceTag() { this->sourceTag_ = nullptr;};
      inline const TemplateScratches::SourceTag & getSourceTag() const { DARABONBA_PTR_GET_CONST(sourceTag_, TemplateScratches::SourceTag) };
      inline TemplateScratches::SourceTag getSourceTag() { DARABONBA_PTR_GET(sourceTag_, TemplateScratches::SourceTag) };
      inline TemplateScratches& setSourceTag(const TemplateScratches::SourceTag & sourceTag) { DARABONBA_PTR_SET_VALUE(sourceTag_, sourceTag) };
      inline TemplateScratches& setSourceTag(TemplateScratches::SourceTag && sourceTag) { DARABONBA_PTR_SET_RVALUE(sourceTag_, sourceTag) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TemplateScratches& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusReason Field Functions 
      bool hasStatusReason() const { return this->statusReason_ != nullptr;};
      void deleteStatusReason() { this->statusReason_ = nullptr;};
      inline string getStatusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
      inline TemplateScratches& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<TemplateScratches::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TemplateScratches::Tags>) };
      inline vector<TemplateScratches::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<TemplateScratches::Tags>) };
      inline TemplateScratches& setTags(const vector<TemplateScratches::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline TemplateScratches& setTags(vector<TemplateScratches::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // templateScratchId Field Functions 
      bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
      void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
      inline string getTemplateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
      inline TemplateScratches& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


      // templateScratchType Field Functions 
      bool hasTemplateScratchType() const { return this->templateScratchType_ != nullptr;};
      void deleteTemplateScratchType() { this->templateScratchType_ = nullptr;};
      inline string getTemplateScratchType() const { DARABONBA_PTR_GET_DEFAULT(templateScratchType_, "") };
      inline TemplateScratches& setTemplateScratchType(string templateScratchType) { DARABONBA_PTR_SET_VALUE(templateScratchType_, templateScratchType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline TemplateScratches& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the resource scenario was created.
      // 
      // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the resource scenario.
      shared_ptr<string> description_ {};
      // The status code of the resource scenario that failed to be generated.
      // 
      // >  This parameter is returned only if the value of Status is GENERATE_FAILED.
      shared_ptr<string> failedCode_ {};
      // The policy based on which the logical ID is generated. Valid values:
      // 
      // *   LongTypePrefixAndIndexSuffix (default): long-type prefix + index-type suffix
      // *   LongTypePrefixAndHashSuffix: long-type prefix + hash-type suffix
      // *   ShortTypePrefixAndHashSuffix: short-type prefix + hash-type suffix
      shared_ptr<string> logicalIdStrategy_ {};
      // The preference parameters of the resource scenario.
      shared_ptr<vector<TemplateScratches::PreferenceParameters>> preferenceParameters_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The source resource group.
      shared_ptr<TemplateScratches::SourceResourceGroup> sourceResourceGroup_ {};
      // The source resources.
      shared_ptr<vector<TemplateScratches::SourceResources>> sourceResources_ {};
      // The source tag.
      shared_ptr<TemplateScratches::SourceTag> sourceTag_ {};
      // The state of the resource scenario.
      shared_ptr<string> status_ {};
      // The reason why the resource scenario failed to be generated.
      // 
      // >  This parameter is returned only if the value of Status is GENERATE_FAILED.
      shared_ptr<string> statusReason_ {};
      // The tags of the resource scenario.
      shared_ptr<vector<TemplateScratches::Tags>> tags_ {};
      // The ID of the resource scenario.
      shared_ptr<string> templateScratchId_ {};
      // The type of the resource scenario. Valid values:
      // 
      // *   ResourceImport: resource management
      // *   ArchitectureReplication: resource replication
      shared_ptr<string> templateScratchType_ {};
      // The time when the resource scenario was updated.
      // 
      // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->templateScratches_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTemplateScratchesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTemplateScratchesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTemplateScratchesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateScratches Field Functions 
    bool hasTemplateScratches() const { return this->templateScratches_ != nullptr;};
    void deleteTemplateScratches() { this->templateScratches_ = nullptr;};
    inline const vector<ListTemplateScratchesResponseBody::TemplateScratches> & getTemplateScratches() const { DARABONBA_PTR_GET_CONST(templateScratches_, vector<ListTemplateScratchesResponseBody::TemplateScratches>) };
    inline vector<ListTemplateScratchesResponseBody::TemplateScratches> getTemplateScratches() { DARABONBA_PTR_GET(templateScratches_, vector<ListTemplateScratchesResponseBody::TemplateScratches>) };
    inline ListTemplateScratchesResponseBody& setTemplateScratches(const vector<ListTemplateScratchesResponseBody::TemplateScratches> & templateScratches) { DARABONBA_PTR_SET_VALUE(templateScratches_, templateScratches) };
    inline ListTemplateScratchesResponseBody& setTemplateScratches(vector<ListTemplateScratchesResponseBody::TemplateScratches> && templateScratches) { DARABONBA_PTR_SET_RVALUE(templateScratches_, templateScratches) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTemplateScratchesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The resource scenarios.
    shared_ptr<vector<ListTemplateScratchesResponseBody::TemplateScratches>> templateScratches_ {};
    // The total number of scenarios.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
