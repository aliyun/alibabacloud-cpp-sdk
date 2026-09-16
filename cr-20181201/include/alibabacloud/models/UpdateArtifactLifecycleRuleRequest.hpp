// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEARTIFACTLIFECYCLERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEARTIFACTLIFECYCLERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class UpdateArtifactLifecycleRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateArtifactLifecycleRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Auto, auto_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnableDeleteTag, enableDeleteTag_);
      DARABONBA_PTR_TO_JSON(EnableDeleteUntaggedManifest, enableDeleteUntaggedManifest_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RetentionTagCount, retentionTagCount_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(TagRegexp, tagRegexp_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateArtifactLifecycleRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Auto, auto_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnableDeleteTag, enableDeleteTag_);
      DARABONBA_PTR_FROM_JSON(EnableDeleteUntaggedManifest, enableDeleteUntaggedManifest_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RetentionTagCount, retentionTagCount_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(TagRegexp, tagRegexp_);
    };
    UpdateArtifactLifecycleRuleRequest() = default ;
    UpdateArtifactLifecycleRuleRequest(const UpdateArtifactLifecycleRuleRequest &) = default ;
    UpdateArtifactLifecycleRuleRequest(UpdateArtifactLifecycleRuleRequest &&) = default ;
    UpdateArtifactLifecycleRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateArtifactLifecycleRuleRequest() = default ;
    UpdateArtifactLifecycleRuleRequest& operator=(const UpdateArtifactLifecycleRuleRequest &) = default ;
    UpdateArtifactLifecycleRuleRequest& operator=(UpdateArtifactLifecycleRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auto_ == nullptr
        && this->dryRun_ == nullptr && this->enableDeleteTag_ == nullptr && this->enableDeleteUntaggedManifest_ == nullptr && this->instanceId_ == nullptr && this->namespaceName_ == nullptr
        && this->repoName_ == nullptr && this->retentionTagCount_ == nullptr && this->ruleId_ == nullptr && this->scheduleTime_ == nullptr && this->scope_ == nullptr
        && this->tagRegexp_ == nullptr; };
    // auto Field Functions 
    bool hasAuto() const { return this->auto_ != nullptr;};
    void deleteAuto() { this->auto_ = nullptr;};
    inline bool getAuto() const { DARABONBA_PTR_GET_DEFAULT(auto_, false) };
    inline UpdateArtifactLifecycleRuleRequest& setAuto(bool _auto) { DARABONBA_PTR_SET_VALUE(auto_, _auto) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateArtifactLifecycleRuleRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableDeleteTag Field Functions 
    bool hasEnableDeleteTag() const { return this->enableDeleteTag_ != nullptr;};
    void deleteEnableDeleteTag() { this->enableDeleteTag_ = nullptr;};
    inline bool getEnableDeleteTag() const { DARABONBA_PTR_GET_DEFAULT(enableDeleteTag_, false) };
    inline UpdateArtifactLifecycleRuleRequest& setEnableDeleteTag(bool enableDeleteTag) { DARABONBA_PTR_SET_VALUE(enableDeleteTag_, enableDeleteTag) };


    // enableDeleteUntaggedManifest Field Functions 
    bool hasEnableDeleteUntaggedManifest() const { return this->enableDeleteUntaggedManifest_ != nullptr;};
    void deleteEnableDeleteUntaggedManifest() { this->enableDeleteUntaggedManifest_ = nullptr;};
    inline bool getEnableDeleteUntaggedManifest() const { DARABONBA_PTR_GET_DEFAULT(enableDeleteUntaggedManifest_, false) };
    inline UpdateArtifactLifecycleRuleRequest& setEnableDeleteUntaggedManifest(bool enableDeleteUntaggedManifest) { DARABONBA_PTR_SET_VALUE(enableDeleteUntaggedManifest_, enableDeleteUntaggedManifest) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateArtifactLifecycleRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline UpdateArtifactLifecycleRuleRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline UpdateArtifactLifecycleRuleRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // retentionTagCount Field Functions 
    bool hasRetentionTagCount() const { return this->retentionTagCount_ != nullptr;};
    void deleteRetentionTagCount() { this->retentionTagCount_ = nullptr;};
    inline int64_t getRetentionTagCount() const { DARABONBA_PTR_GET_DEFAULT(retentionTagCount_, 0L) };
    inline UpdateArtifactLifecycleRuleRequest& setRetentionTagCount(int64_t retentionTagCount) { DARABONBA_PTR_SET_VALUE(retentionTagCount_, retentionTagCount) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline UpdateArtifactLifecycleRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline UpdateArtifactLifecycleRuleRequest& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline UpdateArtifactLifecycleRuleRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // tagRegexp Field Functions 
    bool hasTagRegexp() const { return this->tagRegexp_ != nullptr;};
    void deleteTagRegexp() { this->tagRegexp_ = nullptr;};
    inline string getTagRegexp() const { DARABONBA_PTR_GET_DEFAULT(tagRegexp_, "") };
    inline UpdateArtifactLifecycleRuleRequest& setTagRegexp(string tagRegexp) { DARABONBA_PTR_SET_VALUE(tagRegexp_, tagRegexp) };


  protected:
    // Specifies whether to automatically execute the rule.
    shared_ptr<bool> auto_ {};
    // Specifies whether to enable DryRun mode. If DryRun mode is enabled, only the lifecycle task scan is performed and no actual data cleanup is performed. DryRun mode is disabled by default.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to enable lifecycle management.
    // 
    // Only one of this parameter and EnableDeleteUntaggedManifest can be set to true.
    shared_ptr<bool> enableDeleteTag_ {};
    // Specifies whether to enable artifact cleanup.
    // 
    // Only one of this parameter and EnableDeleteTag can be set to true.
    shared_ptr<bool> enableDeleteUntaggedManifest_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The namespace name.
    shared_ptr<string> namespaceName_ {};
    // The image repository name.
    shared_ptr<string> repoName_ {};
    // The number of images to retain.
    shared_ptr<int64_t> retentionTagCount_ {};
    // The rule ID.
    // 
    // This parameter is required.
    shared_ptr<string> ruleId_ {};
    // The execution cycle.
    shared_ptr<string> scheduleTime_ {};
    // The cleanup scope.
    shared_ptr<string> scope_ {};
    // The regular expression used to retain image versions.
    shared_ptr<string> tagRegexp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
