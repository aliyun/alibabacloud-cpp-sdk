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
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
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
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
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
        && this->instanceId_ == nullptr && this->namespaceName_ == nullptr && this->override_ == nullptr && this->platform_ == nullptr && this->repoName_ == nullptr
        && this->sourceNamespaceName_ == nullptr && this->sourceProvider_ == nullptr && this->sourceRepoName_ == nullptr && this->tagCount_ == nullptr && this->tagList_ == nullptr
        && this->tagRegexp_ == nullptr; };
    // accelerate Field Functions 
    bool hasAccelerate() const { return this->accelerate_ != nullptr;};
    void deleteAccelerate() { this->accelerate_ = nullptr;};
    inline bool getAccelerate() const { DARABONBA_PTR_GET_DEFAULT(accelerate_, false) };
    inline CreateArtifactSubscriptionRuleRequest& setAccelerate(bool accelerate) { DARABONBA_PTR_SET_VALUE(accelerate_, accelerate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateArtifactSubscriptionRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline CreateArtifactSubscriptionRuleRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // override Field Functions 
    bool hasOverride() const { return this->override_ != nullptr;};
    void deleteOverride() { this->override_ = nullptr;};
    inline bool getOverride() const { DARABONBA_PTR_GET_DEFAULT(override_, false) };
    inline CreateArtifactSubscriptionRuleRequest& setOverride(bool override) { DARABONBA_PTR_SET_VALUE(override_, override) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline const vector<string> & getPlatform() const { DARABONBA_PTR_GET_CONST(platform_, vector<string>) };
    inline vector<string> getPlatform() { DARABONBA_PTR_GET(platform_, vector<string>) };
    inline CreateArtifactSubscriptionRuleRequest& setPlatform(const vector<string> & platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };
    inline CreateArtifactSubscriptionRuleRequest& setPlatform(vector<string> && platform) { DARABONBA_PTR_SET_RVALUE(platform_, platform) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline CreateArtifactSubscriptionRuleRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // sourceNamespaceName Field Functions 
    bool hasSourceNamespaceName() const { return this->sourceNamespaceName_ != nullptr;};
    void deleteSourceNamespaceName() { this->sourceNamespaceName_ = nullptr;};
    inline string getSourceNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(sourceNamespaceName_, "") };
    inline CreateArtifactSubscriptionRuleRequest& setSourceNamespaceName(string sourceNamespaceName) { DARABONBA_PTR_SET_VALUE(sourceNamespaceName_, sourceNamespaceName) };


    // sourceProvider Field Functions 
    bool hasSourceProvider() const { return this->sourceProvider_ != nullptr;};
    void deleteSourceProvider() { this->sourceProvider_ = nullptr;};
    inline string getSourceProvider() const { DARABONBA_PTR_GET_DEFAULT(sourceProvider_, "") };
    inline CreateArtifactSubscriptionRuleRequest& setSourceProvider(string sourceProvider) { DARABONBA_PTR_SET_VALUE(sourceProvider_, sourceProvider) };


    // sourceRepoName Field Functions 
    bool hasSourceRepoName() const { return this->sourceRepoName_ != nullptr;};
    void deleteSourceRepoName() { this->sourceRepoName_ = nullptr;};
    inline string getSourceRepoName() const { DARABONBA_PTR_GET_DEFAULT(sourceRepoName_, "") };
    inline CreateArtifactSubscriptionRuleRequest& setSourceRepoName(string sourceRepoName) { DARABONBA_PTR_SET_VALUE(sourceRepoName_, sourceRepoName) };


    // tagCount Field Functions 
    bool hasTagCount() const { return this->tagCount_ != nullptr;};
    void deleteTagCount() { this->tagCount_ = nullptr;};
    inline int64_t getTagCount() const { DARABONBA_PTR_GET_DEFAULT(tagCount_, 0L) };
    inline CreateArtifactSubscriptionRuleRequest& setTagCount(int64_t tagCount) { DARABONBA_PTR_SET_VALUE(tagCount_, tagCount) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<string> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<string>) };
    inline vector<string> getTagList() { DARABONBA_PTR_GET(tagList_, vector<string>) };
    inline CreateArtifactSubscriptionRuleRequest& setTagList(const vector<string> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline CreateArtifactSubscriptionRuleRequest& setTagList(vector<string> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // tagRegexp Field Functions 
    bool hasTagRegexp() const { return this->tagRegexp_ != nullptr;};
    void deleteTagRegexp() { this->tagRegexp_ = nullptr;};
    inline string getTagRegexp() const { DARABONBA_PTR_GET_DEFAULT(tagRegexp_, "") };
    inline CreateArtifactSubscriptionRuleRequest& setTagRegexp(string tagRegexp) { DARABONBA_PTR_SET_VALUE(tagRegexp_, tagRegexp) };


  protected:
    // Specifies whether to enable the acceleration link. The subscription acceleration feature is in public preview. Based on scheduling policies and network link optimization, it can improve the image subscription speed.
    shared_ptr<bool> accelerate_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ACR namespace.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceName_ {};
    // Specifies whether to overwrite images.
    shared_ptr<bool> override_ {};
    // The operating system or architecture. If the source repository contains multi-architecture images, only images with the specified operating system or architecture are subscribed to the destination repository of the Enterprise instance.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> platform_ {};
    // The ACR repository.
    // 
    // This parameter is required.
    shared_ptr<string> repoName_ {};
    // The source namespace. If `SourceProvider` is set to `DOCKER_HUB`, the default value is `library`. This parameter is required in other scenarios.
    shared_ptr<string> sourceNamespaceName_ {};
    // The artifact source.
    // 
    // This parameter is required.
    shared_ptr<string> sourceProvider_ {};
    // The source repository.
    // 
    // This parameter is required.
    shared_ptr<string> sourceRepoName_ {};
    // The number of images to subscribe to.
    shared_ptr<int64_t> tagCount_ {};
    // - The image tags to subscribe to when matching by tag list. A maximum of 10 tags are supported.
    // - If TagList is specified, these tags are queried one by one. TagRegexp and TagCount cannot be specified at the same time. If TagList is not specified, TagRegexp and TagCount are used for matching, and both must be specified.
    // - The matching method cannot be changed after the rule is created. To change the matching method, delete the rule and create a new one.
    shared_ptr<vector<string>> tagList_ {};
    // The image versions to subscribe to from the source repository. Regular expressions are supported.
    shared_ptr<string> tagRegexp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
