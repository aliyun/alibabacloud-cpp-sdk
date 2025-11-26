// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBGROUPSRESPONSEBODYJOBGROUPSLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBGROUPSRESPONSEBODYJOBGROUPSLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobGroupsResponseBodyJobGroupsListExportProgress.hpp>
#include <alibabacloud/models/ListJobGroupsResponseBodyJobGroupsListProgress.hpp>
#include <alibabacloud/models/ListJobGroupsResponseBodyJobGroupsListStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListJobGroupsResponseBodyJobGroupsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobGroupsResponseBodyJobGroupsList& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ExportProgress, exportProgress_);
      DARABONBA_PTR_TO_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
      DARABONBA_PTR_TO_JSON(JobGroupDescription, jobGroupDescription_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_TO_JSON(MinConcurrency, minConcurrency_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(ScriptVersion, scriptVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      DARABONBA_PTR_TO_JSON(TotalCallNum, totalCallNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobGroupsResponseBodyJobGroupsList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ExportProgress, exportProgress_);
      DARABONBA_PTR_FROM_JSON(JobDataParsingTaskId, jobDataParsingTaskId_);
      DARABONBA_PTR_FROM_JSON(JobGroupDescription, jobGroupDescription_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_FROM_JSON(MinConcurrency, minConcurrency_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(ScriptVersion, scriptVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
      DARABONBA_PTR_FROM_JSON(TotalCallNum, totalCallNum_);
    };
    ListJobGroupsResponseBodyJobGroupsList() = default ;
    ListJobGroupsResponseBodyJobGroupsList(const ListJobGroupsResponseBodyJobGroupsList &) = default ;
    ListJobGroupsResponseBodyJobGroupsList(ListJobGroupsResponseBodyJobGroupsList &&) = default ;
    ListJobGroupsResponseBodyJobGroupsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobGroupsResponseBodyJobGroupsList() = default ;
    ListJobGroupsResponseBodyJobGroupsList& operator=(const ListJobGroupsResponseBodyJobGroupsList &) = default ;
    ListJobGroupsResponseBodyJobGroupsList& operator=(ListJobGroupsResponseBodyJobGroupsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->exportProgress_ == nullptr && return this->jobDataParsingTaskId_ == nullptr && return this->jobGroupDescription_ == nullptr && return this->jobGroupId_ == nullptr && return this->jobGroupName_ == nullptr
        && return this->minConcurrency_ == nullptr && return this->modifyTime_ == nullptr && return this->progress_ == nullptr && return this->scriptId_ == nullptr && return this->scriptName_ == nullptr
        && return this->scriptVersion_ == nullptr && return this->status_ == nullptr && return this->strategy_ == nullptr && return this->totalCallNum_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline ListJobGroupsResponseBodyJobGroupsList& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // exportProgress Field Functions 
    bool hasExportProgress() const { return this->exportProgress_ != nullptr;};
    void deleteExportProgress() { this->exportProgress_ = nullptr;};
    inline const Models::ListJobGroupsResponseBodyJobGroupsListExportProgress & exportProgress() const { DARABONBA_PTR_GET_CONST(exportProgress_, Models::ListJobGroupsResponseBodyJobGroupsListExportProgress) };
    inline Models::ListJobGroupsResponseBodyJobGroupsListExportProgress exportProgress() { DARABONBA_PTR_GET(exportProgress_, Models::ListJobGroupsResponseBodyJobGroupsListExportProgress) };
    inline ListJobGroupsResponseBodyJobGroupsList& setExportProgress(const Models::ListJobGroupsResponseBodyJobGroupsListExportProgress & exportProgress) { DARABONBA_PTR_SET_VALUE(exportProgress_, exportProgress) };
    inline ListJobGroupsResponseBodyJobGroupsList& setExportProgress(Models::ListJobGroupsResponseBodyJobGroupsListExportProgress && exportProgress) { DARABONBA_PTR_SET_RVALUE(exportProgress_, exportProgress) };


    // jobDataParsingTaskId Field Functions 
    bool hasJobDataParsingTaskId() const { return this->jobDataParsingTaskId_ != nullptr;};
    void deleteJobDataParsingTaskId() { this->jobDataParsingTaskId_ = nullptr;};
    inline string jobDataParsingTaskId() const { DARABONBA_PTR_GET_DEFAULT(jobDataParsingTaskId_, "") };
    inline ListJobGroupsResponseBodyJobGroupsList& setJobDataParsingTaskId(string jobDataParsingTaskId) { DARABONBA_PTR_SET_VALUE(jobDataParsingTaskId_, jobDataParsingTaskId) };


    // jobGroupDescription Field Functions 
    bool hasJobGroupDescription() const { return this->jobGroupDescription_ != nullptr;};
    void deleteJobGroupDescription() { this->jobGroupDescription_ = nullptr;};
    inline string jobGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(jobGroupDescription_, "") };
    inline ListJobGroupsResponseBodyJobGroupsList& setJobGroupDescription(string jobGroupDescription) { DARABONBA_PTR_SET_VALUE(jobGroupDescription_, jobGroupDescription) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline ListJobGroupsResponseBodyJobGroupsList& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobGroupName Field Functions 
    bool hasJobGroupName() const { return this->jobGroupName_ != nullptr;};
    void deleteJobGroupName() { this->jobGroupName_ = nullptr;};
    inline string jobGroupName() const { DARABONBA_PTR_GET_DEFAULT(jobGroupName_, "") };
    inline ListJobGroupsResponseBodyJobGroupsList& setJobGroupName(string jobGroupName) { DARABONBA_PTR_SET_VALUE(jobGroupName_, jobGroupName) };


    // minConcurrency Field Functions 
    bool hasMinConcurrency() const { return this->minConcurrency_ != nullptr;};
    void deleteMinConcurrency() { this->minConcurrency_ = nullptr;};
    inline int32_t minConcurrency() const { DARABONBA_PTR_GET_DEFAULT(minConcurrency_, 0) };
    inline ListJobGroupsResponseBodyJobGroupsList& setMinConcurrency(int32_t minConcurrency) { DARABONBA_PTR_SET_VALUE(minConcurrency_, minConcurrency) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListJobGroupsResponseBodyJobGroupsList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline const Models::ListJobGroupsResponseBodyJobGroupsListProgress & progress() const { DARABONBA_PTR_GET_CONST(progress_, Models::ListJobGroupsResponseBodyJobGroupsListProgress) };
    inline Models::ListJobGroupsResponseBodyJobGroupsListProgress progress() { DARABONBA_PTR_GET(progress_, Models::ListJobGroupsResponseBodyJobGroupsListProgress) };
    inline ListJobGroupsResponseBodyJobGroupsList& setProgress(const Models::ListJobGroupsResponseBodyJobGroupsListProgress & progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };
    inline ListJobGroupsResponseBodyJobGroupsList& setProgress(Models::ListJobGroupsResponseBodyJobGroupsListProgress && progress) { DARABONBA_PTR_SET_RVALUE(progress_, progress) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ListJobGroupsResponseBodyJobGroupsList& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline ListJobGroupsResponseBodyJobGroupsList& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // scriptVersion Field Functions 
    bool hasScriptVersion() const { return this->scriptVersion_ != nullptr;};
    void deleteScriptVersion() { this->scriptVersion_ = nullptr;};
    inline string scriptVersion() const { DARABONBA_PTR_GET_DEFAULT(scriptVersion_, "") };
    inline ListJobGroupsResponseBodyJobGroupsList& setScriptVersion(string scriptVersion) { DARABONBA_PTR_SET_VALUE(scriptVersion_, scriptVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobGroupsResponseBodyJobGroupsList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const Models::ListJobGroupsResponseBodyJobGroupsListStrategy & strategy() const { DARABONBA_PTR_GET_CONST(strategy_, Models::ListJobGroupsResponseBodyJobGroupsListStrategy) };
    inline Models::ListJobGroupsResponseBodyJobGroupsListStrategy strategy() { DARABONBA_PTR_GET(strategy_, Models::ListJobGroupsResponseBodyJobGroupsListStrategy) };
    inline ListJobGroupsResponseBodyJobGroupsList& setStrategy(const Models::ListJobGroupsResponseBodyJobGroupsListStrategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline ListJobGroupsResponseBodyJobGroupsList& setStrategy(Models::ListJobGroupsResponseBodyJobGroupsListStrategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


    // totalCallNum Field Functions 
    bool hasTotalCallNum() const { return this->totalCallNum_ != nullptr;};
    void deleteTotalCallNum() { this->totalCallNum_ = nullptr;};
    inline int32_t totalCallNum() const { DARABONBA_PTR_GET_DEFAULT(totalCallNum_, 0) };
    inline ListJobGroupsResponseBodyJobGroupsList& setTotalCallNum(int32_t totalCallNum) { DARABONBA_PTR_SET_VALUE(totalCallNum_, totalCallNum) };


  protected:
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    std::shared_ptr<Models::ListJobGroupsResponseBodyJobGroupsListExportProgress> exportProgress_ = nullptr;
    std::shared_ptr<string> jobDataParsingTaskId_ = nullptr;
    std::shared_ptr<string> jobGroupDescription_ = nullptr;
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<string> jobGroupName_ = nullptr;
    std::shared_ptr<int32_t> minConcurrency_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<Models::ListJobGroupsResponseBodyJobGroupsListProgress> progress_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> scriptName_ = nullptr;
    std::shared_ptr<string> scriptVersion_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::ListJobGroupsResponseBodyJobGroupsListStrategy> strategy_ = nullptr;
    std::shared_ptr<int32_t> totalCallNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
