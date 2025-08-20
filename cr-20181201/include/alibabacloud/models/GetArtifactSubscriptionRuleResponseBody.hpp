// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTSUBSCRIPTIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTSUBSCRIPTIONRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetArtifactSubscriptionRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactSubscriptionRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accelerate, accelerate_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(Override, override_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(SourceNamespaceName, sourceNamespaceName_);
      DARABONBA_PTR_TO_JSON(SourceProvider, sourceProvider_);
      DARABONBA_PTR_TO_JSON(SourceRepoName, sourceRepoName_);
      DARABONBA_PTR_TO_JSON(TagCount, tagCount_);
      DARABONBA_PTR_TO_JSON(TagRegexp, tagRegexp_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactSubscriptionRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accelerate, accelerate_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(Override, override_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(SourceNamespaceName, sourceNamespaceName_);
      DARABONBA_PTR_FROM_JSON(SourceProvider, sourceProvider_);
      DARABONBA_PTR_FROM_JSON(SourceRepoName, sourceRepoName_);
      DARABONBA_PTR_FROM_JSON(TagCount, tagCount_);
      DARABONBA_PTR_FROM_JSON(TagRegexp, tagRegexp_);
    };
    GetArtifactSubscriptionRuleResponseBody() = default ;
    GetArtifactSubscriptionRuleResponseBody(const GetArtifactSubscriptionRuleResponseBody &) = default ;
    GetArtifactSubscriptionRuleResponseBody(GetArtifactSubscriptionRuleResponseBody &&) = default ;
    GetArtifactSubscriptionRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactSubscriptionRuleResponseBody() = default ;
    GetArtifactSubscriptionRuleResponseBody& operator=(const GetArtifactSubscriptionRuleResponseBody &) = default ;
    GetArtifactSubscriptionRuleResponseBody& operator=(GetArtifactSubscriptionRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accelerate_ != nullptr
        && this->code_ != nullptr && this->createTime_ != nullptr && this->instanceId_ != nullptr && this->isSuccess_ != nullptr && this->modifiedTime_ != nullptr
        && this->namespaceName_ != nullptr && this->override_ != nullptr && this->platform_ != nullptr && this->repoName_ != nullptr && this->requestId_ != nullptr
        && this->ruleId_ != nullptr && this->sourceNamespaceName_ != nullptr && this->sourceProvider_ != nullptr && this->sourceRepoName_ != nullptr && this->tagCount_ != nullptr
        && this->tagRegexp_ != nullptr; };
    // accelerate Field Functions 
    bool hasAccelerate() const { return this->accelerate_ != nullptr;};
    void deleteAccelerate() { this->accelerate_ = nullptr;};
    inline bool accelerate() const { DARABONBA_PTR_GET_DEFAULT(accelerate_, false) };
    inline GetArtifactSubscriptionRuleResponseBody& setAccelerate(bool accelerate) { DARABONBA_PTR_SET_VALUE(accelerate_, accelerate) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetArtifactSubscriptionRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetArtifactSubscriptionRuleResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetArtifactSubscriptionRuleResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetArtifactSubscriptionRuleResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline GetArtifactSubscriptionRuleResponseBody& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline GetArtifactSubscriptionRuleResponseBody& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // override Field Functions 
    bool hasOverride() const { return this->override_ != nullptr;};
    void deleteOverride() { this->override_ = nullptr;};
    inline bool override() const { DARABONBA_PTR_GET_DEFAULT(override_, false) };
    inline GetArtifactSubscriptionRuleResponseBody& setOverride(bool override) { DARABONBA_PTR_SET_VALUE(override_, override) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline const vector<string> & platform() const { DARABONBA_PTR_GET_CONST(platform_, vector<string>) };
    inline vector<string> platform() { DARABONBA_PTR_GET(platform_, vector<string>) };
    inline GetArtifactSubscriptionRuleResponseBody& setPlatform(const vector<string> & platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };
    inline GetArtifactSubscriptionRuleResponseBody& setPlatform(vector<string> && platform) { DARABONBA_PTR_SET_RVALUE(platform_, platform) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline GetArtifactSubscriptionRuleResponseBody& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArtifactSubscriptionRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline GetArtifactSubscriptionRuleResponseBody& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // sourceNamespaceName Field Functions 
    bool hasSourceNamespaceName() const { return this->sourceNamespaceName_ != nullptr;};
    void deleteSourceNamespaceName() { this->sourceNamespaceName_ = nullptr;};
    inline string sourceNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(sourceNamespaceName_, "") };
    inline GetArtifactSubscriptionRuleResponseBody& setSourceNamespaceName(string sourceNamespaceName) { DARABONBA_PTR_SET_VALUE(sourceNamespaceName_, sourceNamespaceName) };


    // sourceProvider Field Functions 
    bool hasSourceProvider() const { return this->sourceProvider_ != nullptr;};
    void deleteSourceProvider() { this->sourceProvider_ = nullptr;};
    inline string sourceProvider() const { DARABONBA_PTR_GET_DEFAULT(sourceProvider_, "") };
    inline GetArtifactSubscriptionRuleResponseBody& setSourceProvider(string sourceProvider) { DARABONBA_PTR_SET_VALUE(sourceProvider_, sourceProvider) };


    // sourceRepoName Field Functions 
    bool hasSourceRepoName() const { return this->sourceRepoName_ != nullptr;};
    void deleteSourceRepoName() { this->sourceRepoName_ = nullptr;};
    inline string sourceRepoName() const { DARABONBA_PTR_GET_DEFAULT(sourceRepoName_, "") };
    inline GetArtifactSubscriptionRuleResponseBody& setSourceRepoName(string sourceRepoName) { DARABONBA_PTR_SET_VALUE(sourceRepoName_, sourceRepoName) };


    // tagCount Field Functions 
    bool hasTagCount() const { return this->tagCount_ != nullptr;};
    void deleteTagCount() { this->tagCount_ = nullptr;};
    inline int64_t tagCount() const { DARABONBA_PTR_GET_DEFAULT(tagCount_, 0L) };
    inline GetArtifactSubscriptionRuleResponseBody& setTagCount(int64_t tagCount) { DARABONBA_PTR_SET_VALUE(tagCount_, tagCount) };


    // tagRegexp Field Functions 
    bool hasTagRegexp() const { return this->tagRegexp_ != nullptr;};
    void deleteTagRegexp() { this->tagRegexp_ = nullptr;};
    inline string tagRegexp() const { DARABONBA_PTR_GET_DEFAULT(tagRegexp_, "") };
    inline GetArtifactSubscriptionRuleResponseBody& setTagRegexp(string tagRegexp) { DARABONBA_PTR_SET_VALUE(tagRegexp_, tagRegexp) };


  protected:
    // Indicates whether an acceleration link is enabled for image subscription. The subscription acceleration feature is in public preview. The feature is optimized based on scheduling policies and network links to accelerate image subscription.
    std::shared_ptr<bool> accelerate_ = nullptr;
    // The return value.
    std::shared_ptr<string> code_ = nullptr;
    // The time when the subscription rule was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the API request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The time when the subscription rule was modified.
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    // The name of the Container Registry namespace.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // Indicates whether the original image is overwritten.
    std::shared_ptr<bool> override_ = nullptr;
    // The operating system and architecture. If the source repository contains multi-arch images, only the images with the specified operating system and architecture are subscribed to the destination repository of the Enterprise Edition instance.
    std::shared_ptr<vector<string>> platform_ = nullptr;
    // The name of the Container Registry repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The rule ID.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the source namespace.
    std::shared_ptr<string> sourceNamespaceName_ = nullptr;
    // The source of the artifact.
    // 
    // Valid values:
    // 
    // *   DOCKER_HUB: Docker Hub
    // *   GCR: GCR
    // *   QUAY: Quay.io
    std::shared_ptr<string> sourceProvider_ = nullptr;
    // The source repository.
    std::shared_ptr<string> sourceRepoName_ = nullptr;
    // The number of subscribed images.
    std::shared_ptr<int64_t> tagCount_ = nullptr;
    // The image tag in the subscription source repository. Regular expressions are supported.
    std::shared_ptr<string> tagRegexp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
