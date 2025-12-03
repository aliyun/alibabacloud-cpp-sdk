// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINGROUPSRESPONSEBODYGROUPSUMMARYSGROUPPLUGINSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINGROUPSRESPONSEBODYGROUPSUMMARYSGROUPPLUGINSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary& obj) { 
      DARABONBA_PTR_TO_JSON(BasePath, basePath_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StageAlias, stageAlias_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(BasePath, basePath_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StageAlias, stageAlias_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary() = default ;
    DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary(const DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary &) = default ;
    DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary(DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary &&) = default ;
    DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary() = default ;
    DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary& operator=(const DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary &) = default ;
    DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary& operator=(DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basePath_ == nullptr
        && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->regionId_ == nullptr && return this->stageAlias_ == nullptr
        && return this->stageName_ == nullptr; };
    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string basePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stageAlias Field Functions 
    bool hasStageAlias() const { return this->stageAlias_ != nullptr;};
    void deleteStageAlias() { this->stageAlias_ = nullptr;};
    inline string stageAlias() const { DARABONBA_PTR_GET_DEFAULT(stageAlias_, "") };
    inline DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary& setStageAlias(string stageAlias) { DARABONBA_PTR_SET_VALUE(stageAlias_, stageAlias) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline DescribePluginGroupsResponseBodyGroupSummarysGroupPluginSummary& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // API root path
    std::shared_ptr<string> basePath_ = nullptr;
    // Description
    std::shared_ptr<string> description_ = nullptr;
    // API group ID
    std::shared_ptr<string> groupId_ = nullptr;
    // API group name
    std::shared_ptr<string> groupName_ = nullptr;
    // Region ID where the API group is located
    std::shared_ptr<string> regionId_ = nullptr;
    // Stage name Alias
    std::shared_ptr<string> stageAlias_ = nullptr;
    // Environment name, possible values:
    // 
    // - **RELEASE**: Production
    // - **PRE**: Pre-release
    // - **TEST**: Testing
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
