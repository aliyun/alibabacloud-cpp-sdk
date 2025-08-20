// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEARTIFACTLIFECYCLERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEARTIFACTLIFECYCLERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateArtifactLifecycleRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateArtifactLifecycleRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Auto, auto_);
      DARABONBA_PTR_TO_JSON(EnableDeleteTag, enableDeleteTag_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RetentionTagCount, retentionTagCount_);
      DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(TagRegexp, tagRegexp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateArtifactLifecycleRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Auto, auto_);
      DARABONBA_PTR_FROM_JSON(EnableDeleteTag, enableDeleteTag_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RetentionTagCount, retentionTagCount_);
      DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(TagRegexp, tagRegexp_);
    };
    CreateArtifactLifecycleRuleRequest() = default ;
    CreateArtifactLifecycleRuleRequest(const CreateArtifactLifecycleRuleRequest &) = default ;
    CreateArtifactLifecycleRuleRequest(CreateArtifactLifecycleRuleRequest &&) = default ;
    CreateArtifactLifecycleRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateArtifactLifecycleRuleRequest() = default ;
    CreateArtifactLifecycleRuleRequest& operator=(const CreateArtifactLifecycleRuleRequest &) = default ;
    CreateArtifactLifecycleRuleRequest& operator=(CreateArtifactLifecycleRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->auto_ != nullptr
        && this->enableDeleteTag_ != nullptr && this->instanceId_ != nullptr && this->namespaceName_ != nullptr && this->repoName_ != nullptr && this->retentionTagCount_ != nullptr
        && this->scheduleTime_ != nullptr && this->scope_ != nullptr && this->tagRegexp_ != nullptr; };
    // auto Field Functions 
    bool hasAuto() const { return this->auto_ != nullptr;};
    void deleteAuto() { this->auto_ = nullptr;};
    inline bool _auto() const { DARABONBA_PTR_GET_DEFAULT(auto_, false) };
    inline CreateArtifactLifecycleRuleRequest& setAuto(bool _auto) { DARABONBA_PTR_SET_VALUE(auto_, _auto) };


    // enableDeleteTag Field Functions 
    bool hasEnableDeleteTag() const { return this->enableDeleteTag_ != nullptr;};
    void deleteEnableDeleteTag() { this->enableDeleteTag_ = nullptr;};
    inline bool enableDeleteTag() const { DARABONBA_PTR_GET_DEFAULT(enableDeleteTag_, false) };
    inline CreateArtifactLifecycleRuleRequest& setEnableDeleteTag(bool enableDeleteTag) { DARABONBA_PTR_SET_VALUE(enableDeleteTag_, enableDeleteTag) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateArtifactLifecycleRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline CreateArtifactLifecycleRuleRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline CreateArtifactLifecycleRuleRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // retentionTagCount Field Functions 
    bool hasRetentionTagCount() const { return this->retentionTagCount_ != nullptr;};
    void deleteRetentionTagCount() { this->retentionTagCount_ = nullptr;};
    inline int64_t retentionTagCount() const { DARABONBA_PTR_GET_DEFAULT(retentionTagCount_, 0L) };
    inline CreateArtifactLifecycleRuleRequest& setRetentionTagCount(int64_t retentionTagCount) { DARABONBA_PTR_SET_VALUE(retentionTagCount_, retentionTagCount) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string scheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline CreateArtifactLifecycleRuleRequest& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline CreateArtifactLifecycleRuleRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // tagRegexp Field Functions 
    bool hasTagRegexp() const { return this->tagRegexp_ != nullptr;};
    void deleteTagRegexp() { this->tagRegexp_ = nullptr;};
    inline string tagRegexp() const { DARABONBA_PTR_GET_DEFAULT(tagRegexp_, "") };
    inline CreateArtifactLifecycleRuleRequest& setTagRegexp(string tagRegexp) { DARABONBA_PTR_SET_VALUE(tagRegexp_, tagRegexp) };


  protected:
    // Specify whether to automatically execute the lifecycle management rule.
    std::shared_ptr<bool> auto_ = nullptr;
    // Specify whether to enable lifecycle management for the artifact.
    std::shared_ptr<bool> enableDeleteTag_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The number of images that you want to retain.
    std::shared_ptr<int64_t> retentionTagCount_ = nullptr;
    // The execution cycle of the lifecycle management rule.
    std::shared_ptr<string> scheduleTime_ = nullptr;
    // The deletion scope.
    std::shared_ptr<string> scope_ = nullptr;
    // The regular expression that is used to indicate which image tags are retained.
    std::shared_ptr<string> tagRegexp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
