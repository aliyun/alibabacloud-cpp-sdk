// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTSUBSCRIPTIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTSUBSCRIPTIONRULERESPONSEBODY_HPP_
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
  class ListArtifactSubscriptionRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactSubscriptionRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactSubscriptionRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListArtifactSubscriptionRuleResponseBody() = default ;
    ListArtifactSubscriptionRuleResponseBody(const ListArtifactSubscriptionRuleResponseBody &) = default ;
    ListArtifactSubscriptionRuleResponseBody(ListArtifactSubscriptionRuleResponseBody &&) = default ;
    ListArtifactSubscriptionRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactSubscriptionRuleResponseBody() = default ;
    ListArtifactSubscriptionRuleResponseBody& operator=(const ListArtifactSubscriptionRuleResponseBody &) = default ;
    ListArtifactSubscriptionRuleResponseBody& operator=(ListArtifactSubscriptionRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(Accelerate, accelerate_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_TO_JSON(Override, override_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(SourceDomain, sourceDomain_);
        DARABONBA_PTR_TO_JSON(SourceNamespaceName, sourceNamespaceName_);
        DARABONBA_PTR_TO_JSON(SourceProvider, sourceProvider_);
        DARABONBA_PTR_TO_JSON(SourceRepoName, sourceRepoName_);
        DARABONBA_PTR_TO_JSON(TagCount, tagCount_);
        DARABONBA_PTR_TO_JSON(TagRegexp, tagRegexp_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(Accelerate, accelerate_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
        DARABONBA_PTR_FROM_JSON(Override, override_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(SourceDomain, sourceDomain_);
        DARABONBA_PTR_FROM_JSON(SourceNamespaceName, sourceNamespaceName_);
        DARABONBA_PTR_FROM_JSON(SourceProvider, sourceProvider_);
        DARABONBA_PTR_FROM_JSON(SourceRepoName, sourceRepoName_);
        DARABONBA_PTR_FROM_JSON(TagCount, tagCount_);
        DARABONBA_PTR_FROM_JSON(TagRegexp, tagRegexp_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accelerate_ == nullptr
        && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->modifiedTime_ == nullptr && this->namespaceName_ == nullptr && this->override_ == nullptr
        && this->platform_ == nullptr && this->repoName_ == nullptr && this->ruleId_ == nullptr && this->sourceDomain_ == nullptr && this->sourceNamespaceName_ == nullptr
        && this->sourceProvider_ == nullptr && this->sourceRepoName_ == nullptr && this->tagCount_ == nullptr && this->tagRegexp_ == nullptr; };
      // accelerate Field Functions 
      bool hasAccelerate() const { return this->accelerate_ != nullptr;};
      void deleteAccelerate() { this->accelerate_ = nullptr;};
      inline bool getAccelerate() const { DARABONBA_PTR_GET_DEFAULT(accelerate_, false) };
      inline Rules& setAccelerate(bool accelerate) { DARABONBA_PTR_SET_VALUE(accelerate_, accelerate) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Rules& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Rules& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
      inline Rules& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // namespaceName Field Functions 
      bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
      void deleteNamespaceName() { this->namespaceName_ = nullptr;};
      inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
      inline Rules& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      // override Field Functions 
      bool hasOverride() const { return this->override_ != nullptr;};
      void deleteOverride() { this->override_ = nullptr;};
      inline bool getOverride() const { DARABONBA_PTR_GET_DEFAULT(override_, false) };
      inline Rules& setOverride(bool override) { DARABONBA_PTR_SET_VALUE(override_, override) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline const vector<string> & getPlatform() const { DARABONBA_PTR_GET_CONST(platform_, vector<string>) };
      inline vector<string> getPlatform() { DARABONBA_PTR_GET(platform_, vector<string>) };
      inline Rules& setPlatform(const vector<string> & platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };
      inline Rules& setPlatform(vector<string> && platform) { DARABONBA_PTR_SET_RVALUE(platform_, platform) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline Rules& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Rules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // sourceDomain Field Functions 
      bool hasSourceDomain() const { return this->sourceDomain_ != nullptr;};
      void deleteSourceDomain() { this->sourceDomain_ = nullptr;};
      inline string getSourceDomain() const { DARABONBA_PTR_GET_DEFAULT(sourceDomain_, "") };
      inline Rules& setSourceDomain(string sourceDomain) { DARABONBA_PTR_SET_VALUE(sourceDomain_, sourceDomain) };


      // sourceNamespaceName Field Functions 
      bool hasSourceNamespaceName() const { return this->sourceNamespaceName_ != nullptr;};
      void deleteSourceNamespaceName() { this->sourceNamespaceName_ = nullptr;};
      inline string getSourceNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(sourceNamespaceName_, "") };
      inline Rules& setSourceNamespaceName(string sourceNamespaceName) { DARABONBA_PTR_SET_VALUE(sourceNamespaceName_, sourceNamespaceName) };


      // sourceProvider Field Functions 
      bool hasSourceProvider() const { return this->sourceProvider_ != nullptr;};
      void deleteSourceProvider() { this->sourceProvider_ = nullptr;};
      inline string getSourceProvider() const { DARABONBA_PTR_GET_DEFAULT(sourceProvider_, "") };
      inline Rules& setSourceProvider(string sourceProvider) { DARABONBA_PTR_SET_VALUE(sourceProvider_, sourceProvider) };


      // sourceRepoName Field Functions 
      bool hasSourceRepoName() const { return this->sourceRepoName_ != nullptr;};
      void deleteSourceRepoName() { this->sourceRepoName_ = nullptr;};
      inline string getSourceRepoName() const { DARABONBA_PTR_GET_DEFAULT(sourceRepoName_, "") };
      inline Rules& setSourceRepoName(string sourceRepoName) { DARABONBA_PTR_SET_VALUE(sourceRepoName_, sourceRepoName) };


      // tagCount Field Functions 
      bool hasTagCount() const { return this->tagCount_ != nullptr;};
      void deleteTagCount() { this->tagCount_ = nullptr;};
      inline int64_t getTagCount() const { DARABONBA_PTR_GET_DEFAULT(tagCount_, 0L) };
      inline Rules& setTagCount(int64_t tagCount) { DARABONBA_PTR_SET_VALUE(tagCount_, tagCount) };


      // tagRegexp Field Functions 
      bool hasTagRegexp() const { return this->tagRegexp_ != nullptr;};
      void deleteTagRegexp() { this->tagRegexp_ = nullptr;};
      inline string getTagRegexp() const { DARABONBA_PTR_GET_DEFAULT(tagRegexp_, "") };
      inline Rules& setTagRegexp(string tagRegexp) { DARABONBA_PTR_SET_VALUE(tagRegexp_, tagRegexp) };


    protected:
      // Indicates whether an acceleration link is enabled for image subscription. The subscription acceleration feature is in public preview. The feature is optimized based on scheduling policies and network links to accelerate image subscription.
      shared_ptr<bool> accelerate_ {};
      // The time when the subscription rule was created.
      shared_ptr<int64_t> createTime_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The time when the subscription rule was modified.
      shared_ptr<int64_t> modifiedTime_ {};
      // The name of the source namespace.
      shared_ptr<string> namespaceName_ {};
      // Indicates whether the original image is overwritten.
      shared_ptr<bool> override_ {};
      // The operating system and architecture. If the source repository contains a multi-arch image, only the images with the specified operating system and architecture are subscribed to the destination repository of the Enterprise Edition instance.
      shared_ptr<vector<string>> platform_ {};
      // The name of the source repository.
      shared_ptr<string> repoName_ {};
      // The rule ID.
      shared_ptr<string> ruleId_ {};
      shared_ptr<string> sourceDomain_ {};
      // The source namespace.
      shared_ptr<string> sourceNamespaceName_ {};
      // The source of the artifact.
      // 
      // Valid values:
      // 
      // *   DOCKER_HUB: Docker Hub
      // *   GCR: GCR
      // *   QUAY: Quay.io
      shared_ptr<string> sourceProvider_ {};
      // The source repository.
      shared_ptr<string> sourceRepoName_ {};
      // The number of subscribed images.
      shared_ptr<int64_t> tagCount_ {};
      // The image tag in the subscription source repository. Regular expressions are supported.
      shared_ptr<string> tagRegexp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->isSuccess_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->rules_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListArtifactSubscriptionRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline ListArtifactSubscriptionRuleResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListArtifactSubscriptionRuleResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListArtifactSubscriptionRuleResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListArtifactSubscriptionRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<ListArtifactSubscriptionRuleResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<ListArtifactSubscriptionRuleResponseBody::Rules>) };
    inline vector<ListArtifactSubscriptionRuleResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<ListArtifactSubscriptionRuleResponseBody::Rules>) };
    inline ListArtifactSubscriptionRuleResponseBody& setRules(const vector<ListArtifactSubscriptionRuleResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListArtifactSubscriptionRuleResponseBody& setRules(vector<ListArtifactSubscriptionRuleResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListArtifactSubscriptionRuleResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The return value.
    shared_ptr<string> code_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    shared_ptr<bool> isSuccess_ {};
    // The page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried artifact subscription rules.
    shared_ptr<vector<ListArtifactSubscriptionRuleResponseBody::Rules>> rules_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
