// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEARTIFACTSUBSCRIPTIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEARTIFACTSUBSCRIPTIONRULEREQUEST_HPP_
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
  class CreateArtifactSubscriptionRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateArtifactSubscriptionRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accelerate, accelerate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(Override, override_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(SourceNamespaceName, sourceNamespaceName_);
      DARABONBA_PTR_TO_JSON(SourceProvider, sourceProvider_);
      DARABONBA_PTR_TO_JSON(SourceRepoName, sourceRepoName_);
      DARABONBA_PTR_TO_JSON(TagCount, tagCount_);
      DARABONBA_PTR_TO_JSON(TagRegexp, tagRegexp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateArtifactSubscriptionRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accelerate, accelerate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(Override, override_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(SourceNamespaceName, sourceNamespaceName_);
      DARABONBA_PTR_FROM_JSON(SourceProvider, sourceProvider_);
      DARABONBA_PTR_FROM_JSON(SourceRepoName, sourceRepoName_);
      DARABONBA_PTR_FROM_JSON(TagCount, tagCount_);
      DARABONBA_PTR_FROM_JSON(TagRegexp, tagRegexp_);
    };
    CreateArtifactSubscriptionRuleRequest() = default ;
    CreateArtifactSubscriptionRuleRequest(const CreateArtifactSubscriptionRuleRequest &) = default ;
    CreateArtifactSubscriptionRuleRequest(CreateArtifactSubscriptionRuleRequest &&) = default ;
    CreateArtifactSubscriptionRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateArtifactSubscriptionRuleRequest() = default ;
    CreateArtifactSubscriptionRuleRequest& operator=(const CreateArtifactSubscriptionRuleRequest &) = default ;
    CreateArtifactSubscriptionRuleRequest& operator=(CreateArtifactSubscriptionRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accelerate_ == nullptr
        && return this->instanceId_ == nullptr && return this->namespaceName_ == nullptr && return this->override_ == nullptr && return this->platform_ == nullptr && return this->repoName_ == nullptr
        && return this->sourceNamespaceName_ == nullptr && return this->sourceProvider_ == nullptr && return this->sourceRepoName_ == nullptr && return this->tagCount_ == nullptr && return this->tagRegexp_ == nullptr; };
    // accelerate Field Functions 
    bool hasAccelerate() const { return this->accelerate_ != nullptr;};
    void deleteAccelerate() { this->accelerate_ = nullptr;};
    inline bool accelerate() const { DARABONBA_PTR_GET_DEFAULT(accelerate_, false) };
    inline CreateArtifactSubscriptionRuleRequest& setAccelerate(bool accelerate) { DARABONBA_PTR_SET_VALUE(accelerate_, accelerate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateArtifactSubscriptionRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline CreateArtifactSubscriptionRuleRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // override Field Functions 
    bool hasOverride() const { return this->override_ != nullptr;};
    void deleteOverride() { this->override_ = nullptr;};
    inline bool override() const { DARABONBA_PTR_GET_DEFAULT(override_, false) };
    inline CreateArtifactSubscriptionRuleRequest& setOverride(bool override) { DARABONBA_PTR_SET_VALUE(override_, override) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline const vector<string> & platform() const { DARABONBA_PTR_GET_CONST(platform_, vector<string>) };
    inline vector<string> platform() { DARABONBA_PTR_GET(platform_, vector<string>) };
    inline CreateArtifactSubscriptionRuleRequest& setPlatform(const vector<string> & platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };
    inline CreateArtifactSubscriptionRuleRequest& setPlatform(vector<string> && platform) { DARABONBA_PTR_SET_RVALUE(platform_, platform) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline CreateArtifactSubscriptionRuleRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // sourceNamespaceName Field Functions 
    bool hasSourceNamespaceName() const { return this->sourceNamespaceName_ != nullptr;};
    void deleteSourceNamespaceName() { this->sourceNamespaceName_ = nullptr;};
    inline string sourceNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(sourceNamespaceName_, "") };
    inline CreateArtifactSubscriptionRuleRequest& setSourceNamespaceName(string sourceNamespaceName) { DARABONBA_PTR_SET_VALUE(sourceNamespaceName_, sourceNamespaceName) };


    // sourceProvider Field Functions 
    bool hasSourceProvider() const { return this->sourceProvider_ != nullptr;};
    void deleteSourceProvider() { this->sourceProvider_ = nullptr;};
    inline string sourceProvider() const { DARABONBA_PTR_GET_DEFAULT(sourceProvider_, "") };
    inline CreateArtifactSubscriptionRuleRequest& setSourceProvider(string sourceProvider) { DARABONBA_PTR_SET_VALUE(sourceProvider_, sourceProvider) };


    // sourceRepoName Field Functions 
    bool hasSourceRepoName() const { return this->sourceRepoName_ != nullptr;};
    void deleteSourceRepoName() { this->sourceRepoName_ = nullptr;};
    inline string sourceRepoName() const { DARABONBA_PTR_GET_DEFAULT(sourceRepoName_, "") };
    inline CreateArtifactSubscriptionRuleRequest& setSourceRepoName(string sourceRepoName) { DARABONBA_PTR_SET_VALUE(sourceRepoName_, sourceRepoName) };


    // tagCount Field Functions 
    bool hasTagCount() const { return this->tagCount_ != nullptr;};
    void deleteTagCount() { this->tagCount_ = nullptr;};
    inline int64_t tagCount() const { DARABONBA_PTR_GET_DEFAULT(tagCount_, 0L) };
    inline CreateArtifactSubscriptionRuleRequest& setTagCount(int64_t tagCount) { DARABONBA_PTR_SET_VALUE(tagCount_, tagCount) };


    // tagRegexp Field Functions 
    bool hasTagRegexp() const { return this->tagRegexp_ != nullptr;};
    void deleteTagRegexp() { this->tagRegexp_ = nullptr;};
    inline string tagRegexp() const { DARABONBA_PTR_GET_DEFAULT(tagRegexp_, "") };
    inline CreateArtifactSubscriptionRuleRequest& setTagRegexp(string tagRegexp) { DARABONBA_PTR_SET_VALUE(tagRegexp_, tagRegexp) };


  protected:
    // Indicates whether an acceleration link is enabled for image subscription. The subscription acceleration feature is in public preview. The feature is optimized based on scheduling policies and network links to accelerate image subscription.
    std::shared_ptr<bool> accelerate_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the Container Registry namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // Indicates whether the original image is overwritten.
    std::shared_ptr<bool> override_ = nullptr;
    // The operating system and architecture. If the source repository contains a multi-arch image, only the specified operating system and architecture are subscribed to the destination repository of the Enterprise Edition instance. Subscribe to the destination repository of an Enterprise Edition instance
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> platform_ = nullptr;
    // The name of the Container Registry repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> repoName_ = nullptr;
    // The source namespace.
    std::shared_ptr<string> sourceNamespaceName_ = nullptr;
    // The source of the artifact.
    // 
    // Valid values:
    // 
    // *   DOCKER_HUB: Docker Hub
    // *   GCR: GCR
    // *   QUAY: Quay.io
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceProvider_ = nullptr;
    // The source repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceRepoName_ = nullptr;
    // The number of subscribed images.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> tagCount_ = nullptr;
    // The image tag in the subscription source repository. Regular expressions are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> tagRegexp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
