// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESCRATCHESRESPONSEBODYTEMPLATESCRATCHES_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESCRATCHESRESPONSEBODYTEMPLATESCRATCHES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters.hpp>
#include <alibabacloud/models/ListTemplateScratchesResponseBodyTemplateScratchesSourceResourceGroup.hpp>
#include <alibabacloud/models/ListTemplateScratchesResponseBodyTemplateScratchesSourceResources.hpp>
#include <alibabacloud/models/ListTemplateScratchesResponseBodyTemplateScratchesSourceTag.hpp>
#include <alibabacloud/models/ListTemplateScratchesResponseBodyTemplateScratchesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListTemplateScratchesResponseBodyTemplateScratches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateScratchesResponseBodyTemplateScratches& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListTemplateScratchesResponseBodyTemplateScratches& obj) { 
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
    ListTemplateScratchesResponseBodyTemplateScratches() = default ;
    ListTemplateScratchesResponseBodyTemplateScratches(const ListTemplateScratchesResponseBodyTemplateScratches &) = default ;
    ListTemplateScratchesResponseBodyTemplateScratches(ListTemplateScratchesResponseBodyTemplateScratches &&) = default ;
    ListTemplateScratchesResponseBodyTemplateScratches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateScratchesResponseBodyTemplateScratches() = default ;
    ListTemplateScratchesResponseBodyTemplateScratches& operator=(const ListTemplateScratchesResponseBodyTemplateScratches &) = default ;
    ListTemplateScratchesResponseBodyTemplateScratches& operator=(ListTemplateScratchesResponseBodyTemplateScratches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->failedCode_ != nullptr && this->logicalIdStrategy_ != nullptr && this->preferenceParameters_ != nullptr && this->resourceGroupId_ != nullptr
        && this->sourceResourceGroup_ != nullptr && this->sourceResources_ != nullptr && this->sourceTag_ != nullptr && this->status_ != nullptr && this->statusReason_ != nullptr
        && this->tags_ != nullptr && this->templateScratchId_ != nullptr && this->templateScratchType_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // failedCode Field Functions 
    bool hasFailedCode() const { return this->failedCode_ != nullptr;};
    void deleteFailedCode() { this->failedCode_ = nullptr;};
    inline string failedCode() const { DARABONBA_PTR_GET_DEFAULT(failedCode_, "") };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setFailedCode(string failedCode) { DARABONBA_PTR_SET_VALUE(failedCode_, failedCode) };


    // logicalIdStrategy Field Functions 
    bool hasLogicalIdStrategy() const { return this->logicalIdStrategy_ != nullptr;};
    void deleteLogicalIdStrategy() { this->logicalIdStrategy_ = nullptr;};
    inline string logicalIdStrategy() const { DARABONBA_PTR_GET_DEFAULT(logicalIdStrategy_, "") };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setLogicalIdStrategy(string logicalIdStrategy) { DARABONBA_PTR_SET_VALUE(logicalIdStrategy_, logicalIdStrategy) };


    // preferenceParameters Field Functions 
    bool hasPreferenceParameters() const { return this->preferenceParameters_ != nullptr;};
    void deletePreferenceParameters() { this->preferenceParameters_ = nullptr;};
    inline const vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters> & preferenceParameters() const { DARABONBA_PTR_GET_CONST(preferenceParameters_, vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters>) };
    inline vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters> preferenceParameters() { DARABONBA_PTR_GET(preferenceParameters_, vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters>) };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setPreferenceParameters(const vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters> & preferenceParameters) { DARABONBA_PTR_SET_VALUE(preferenceParameters_, preferenceParameters) };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setPreferenceParameters(vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters> && preferenceParameters) { DARABONBA_PTR_SET_RVALUE(preferenceParameters_, preferenceParameters) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceResourceGroup Field Functions 
    bool hasSourceResourceGroup() const { return this->sourceResourceGroup_ != nullptr;};
    void deleteSourceResourceGroup() { this->sourceResourceGroup_ = nullptr;};
    inline const Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceResourceGroup & sourceResourceGroup() const { DARABONBA_PTR_GET_CONST(sourceResourceGroup_, Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceResourceGroup) };
    inline Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceResourceGroup sourceResourceGroup() { DARABONBA_PTR_GET(sourceResourceGroup_, Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceResourceGroup) };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setSourceResourceGroup(const Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceResourceGroup & sourceResourceGroup) { DARABONBA_PTR_SET_VALUE(sourceResourceGroup_, sourceResourceGroup) };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setSourceResourceGroup(Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceResourceGroup && sourceResourceGroup) { DARABONBA_PTR_SET_RVALUE(sourceResourceGroup_, sourceResourceGroup) };


    // sourceResources Field Functions 
    bool hasSourceResources() const { return this->sourceResources_ != nullptr;};
    void deleteSourceResources() { this->sourceResources_ = nullptr;};
    inline const vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceResources> & sourceResources() const { DARABONBA_PTR_GET_CONST(sourceResources_, vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceResources>) };
    inline vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceResources> sourceResources() { DARABONBA_PTR_GET(sourceResources_, vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceResources>) };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setSourceResources(const vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceResources> & sourceResources) { DARABONBA_PTR_SET_VALUE(sourceResources_, sourceResources) };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setSourceResources(vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceResources> && sourceResources) { DARABONBA_PTR_SET_RVALUE(sourceResources_, sourceResources) };


    // sourceTag Field Functions 
    bool hasSourceTag() const { return this->sourceTag_ != nullptr;};
    void deleteSourceTag() { this->sourceTag_ = nullptr;};
    inline const Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceTag & sourceTag() const { DARABONBA_PTR_GET_CONST(sourceTag_, Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceTag) };
    inline Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceTag sourceTag() { DARABONBA_PTR_GET(sourceTag_, Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceTag) };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setSourceTag(const Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceTag & sourceTag) { DARABONBA_PTR_SET_VALUE(sourceTag_, sourceTag) };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setSourceTag(Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceTag && sourceTag) { DARABONBA_PTR_SET_RVALUE(sourceTag_, sourceTag) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesTags>) };
    inline vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesTags>) };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setTags(const vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setTags(vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateScratchId Field Functions 
    bool hasTemplateScratchId() const { return this->templateScratchId_ != nullptr;};
    void deleteTemplateScratchId() { this->templateScratchId_ = nullptr;};
    inline string templateScratchId() const { DARABONBA_PTR_GET_DEFAULT(templateScratchId_, "") };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setTemplateScratchId(string templateScratchId) { DARABONBA_PTR_SET_VALUE(templateScratchId_, templateScratchId) };


    // templateScratchType Field Functions 
    bool hasTemplateScratchType() const { return this->templateScratchType_ != nullptr;};
    void deleteTemplateScratchType() { this->templateScratchType_ = nullptr;};
    inline string templateScratchType() const { DARABONBA_PTR_GET_DEFAULT(templateScratchType_, "") };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setTemplateScratchType(string templateScratchType) { DARABONBA_PTR_SET_VALUE(templateScratchType_, templateScratchType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListTemplateScratchesResponseBodyTemplateScratches& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the resource scenario was created.
    // 
    // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the resource scenario.
    std::shared_ptr<string> description_ = nullptr;
    // The status code of the resource scenario that failed to be generated.
    // 
    // >  This parameter is returned only if the value of Status is GENERATE_FAILED.
    std::shared_ptr<string> failedCode_ = nullptr;
    // The policy based on which the logical ID is generated. Valid values:
    // 
    // *   LongTypePrefixAndIndexSuffix (default): long-type prefix + index-type suffix
    // *   LongTypePrefixAndHashSuffix: long-type prefix + hash-type suffix
    // *   ShortTypePrefixAndHashSuffix: short-type prefix + hash-type suffix
    std::shared_ptr<string> logicalIdStrategy_ = nullptr;
    // The preference parameters of the resource scenario.
    std::shared_ptr<vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesPreferenceParameters>> preferenceParameters_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The source resource group.
    std::shared_ptr<Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceResourceGroup> sourceResourceGroup_ = nullptr;
    // The source resources.
    std::shared_ptr<vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceResources>> sourceResources_ = nullptr;
    // The source tag.
    std::shared_ptr<Models::ListTemplateScratchesResponseBodyTemplateScratchesSourceTag> sourceTag_ = nullptr;
    // The state of the resource scenario.
    std::shared_ptr<string> status_ = nullptr;
    // The reason why the resource scenario failed to be generated.
    // 
    // >  This parameter is returned only if the value of Status is GENERATE_FAILED.
    std::shared_ptr<string> statusReason_ = nullptr;
    // The tags of the resource scenario.
    std::shared_ptr<vector<Models::ListTemplateScratchesResponseBodyTemplateScratchesTags>> tags_ = nullptr;
    // The ID of the resource scenario.
    std::shared_ptr<string> templateScratchId_ = nullptr;
    // The type of the resource scenario. Valid values:
    // 
    // *   ResourceImport: resource management
    // *   ArchitectureReplication: resource replication
    std::shared_ptr<string> templateScratchType_ = nullptr;
    // The time when the resource scenario was updated.
    // 
    // The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
