// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTLIFECYCLERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTLIFECYCLERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetArtifactLifecycleRuleResponseBodyPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetArtifactLifecycleRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactLifecycleRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Auto, auto_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EnableDeleteTag, enableDeleteTag_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(NextTime, nextTime_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetentionTagCount, retentionTagCount_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(TagRegexp, tagRegexp_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactLifecycleRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Auto, auto_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EnableDeleteTag, enableDeleteTag_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(NextTime, nextTime_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetentionTagCount, retentionTagCount_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(TagRegexp, tagRegexp_);
    };
    GetArtifactLifecycleRuleResponseBody() = default ;
    GetArtifactLifecycleRuleResponseBody(const GetArtifactLifecycleRuleResponseBody &) = default ;
    GetArtifactLifecycleRuleResponseBody(GetArtifactLifecycleRuleResponseBody &&) = default ;
    GetArtifactLifecycleRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactLifecycleRuleResponseBody() = default ;
    GetArtifactLifecycleRuleResponseBody& operator=(const GetArtifactLifecycleRuleResponseBody &) = default ;
    GetArtifactLifecycleRuleResponseBody& operator=(GetArtifactLifecycleRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->auto_ != nullptr
        && this->code_ != nullptr && this->createTime_ != nullptr && this->enableDeleteTag_ != nullptr && this->instanceId_ != nullptr && this->isSuccess_ != nullptr
        && this->modifiedTime_ != nullptr && this->namespaceName_ != nullptr && this->nextTime_ != nullptr && this->policies_ != nullptr && this->repoName_ != nullptr
        && this->requestId_ != nullptr && this->retentionTagCount_ != nullptr && this->ruleId_ != nullptr && this->scheduleTime_ != nullptr && this->scope_ != nullptr
        && this->tagRegexp_ != nullptr; };
    // auto Field Functions 
    bool hasAuto() const { return this->auto_ != nullptr;};
    void deleteAuto() { this->auto_ = nullptr;};
    inline bool _auto() const { DARABONBA_PTR_GET_DEFAULT(auto_, false) };
    inline GetArtifactLifecycleRuleResponseBody& setAuto(bool _auto) { DARABONBA_PTR_SET_VALUE(auto_, _auto) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetArtifactLifecycleRuleResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enableDeleteTag Field Functions 
    bool hasEnableDeleteTag() const { return this->enableDeleteTag_ != nullptr;};
    void deleteEnableDeleteTag() { this->enableDeleteTag_ = nullptr;};
    inline bool enableDeleteTag() const { DARABONBA_PTR_GET_DEFAULT(enableDeleteTag_, false) };
    inline GetArtifactLifecycleRuleResponseBody& setEnableDeleteTag(bool enableDeleteTag) { DARABONBA_PTR_SET_VALUE(enableDeleteTag_, enableDeleteTag) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetArtifactLifecycleRuleResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline GetArtifactLifecycleRuleResponseBody& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // nextTime Field Functions 
    bool hasNextTime() const { return this->nextTime_ != nullptr;};
    void deleteNextTime() { this->nextTime_ = nullptr;};
    inline int64_t nextTime() const { DARABONBA_PTR_GET_DEFAULT(nextTime_, 0L) };
    inline GetArtifactLifecycleRuleResponseBody& setNextTime(int64_t nextTime) { DARABONBA_PTR_SET_VALUE(nextTime_, nextTime) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<GetArtifactLifecycleRuleResponseBodyPolicies> & policies() const { DARABONBA_PTR_GET_CONST(policies_, vector<GetArtifactLifecycleRuleResponseBodyPolicies>) };
    inline vector<GetArtifactLifecycleRuleResponseBodyPolicies> policies() { DARABONBA_PTR_GET(policies_, vector<GetArtifactLifecycleRuleResponseBodyPolicies>) };
    inline GetArtifactLifecycleRuleResponseBody& setPolicies(const vector<GetArtifactLifecycleRuleResponseBodyPolicies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline GetArtifactLifecycleRuleResponseBody& setPolicies(vector<GetArtifactLifecycleRuleResponseBodyPolicies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retentionTagCount Field Functions 
    bool hasRetentionTagCount() const { return this->retentionTagCount_ != nullptr;};
    void deleteRetentionTagCount() { this->retentionTagCount_ = nullptr;};
    inline int64_t retentionTagCount() const { DARABONBA_PTR_GET_DEFAULT(retentionTagCount_, 0L) };
    inline GetArtifactLifecycleRuleResponseBody& setRetentionTagCount(int64_t retentionTagCount) { DARABONBA_PTR_SET_VALUE(retentionTagCount_, retentionTagCount) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string scheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // tagRegexp Field Functions 
    bool hasTagRegexp() const { return this->tagRegexp_ != nullptr;};
    void deleteTagRegexp() { this->tagRegexp_ = nullptr;};
    inline string tagRegexp() const { DARABONBA_PTR_GET_DEFAULT(tagRegexp_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setTagRegexp(string tagRegexp) { DARABONBA_PTR_SET_VALUE(tagRegexp_, tagRegexp) };


  protected:
    // Indicates whether the lifecycle management rule is automatically executed.
    std::shared_ptr<bool> auto_ = nullptr;
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the lifecycle management rule was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Indicates whether lifecycle management is enabled for the artifact.
    std::shared_ptr<bool> enableDeleteTag_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the API request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The time when the lifecycle management rule was last modified.
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // The time when the lifecycle management rule is next executed.
    std::shared_ptr<int64_t> nextTime_ = nullptr;
    std::shared_ptr<vector<GetArtifactLifecycleRuleResponseBodyPolicies>> policies_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of retained images.
    std::shared_ptr<int64_t> retentionTagCount_ = nullptr;
    // The rule ID.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The execution cycle of the lifecycle management rule.
    std::shared_ptr<string> scheduleTime_ = nullptr;
    // The deletion scope of artifacts.
    std::shared_ptr<string> scope_ = nullptr;
    // The regular expression that indicates which image tags are retained.
    std::shared_ptr<string> tagRegexp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
