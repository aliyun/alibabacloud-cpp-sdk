// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTLIFECYCLERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTLIFECYCLERULERESPONSEBODY_HPP_
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
    class Policies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policies& obj) { 
        DARABONBA_PTR_TO_JSON(Condition, condition_);
        DARABONBA_PTR_TO_JSON(Filter, filter_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Policies& obj) { 
        DARABONBA_PTR_FROM_JSON(Condition, condition_);
        DARABONBA_PTR_FROM_JSON(Filter, filter_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Policies() = default ;
      Policies(const Policies &) = default ;
      Policies(Policies &&) = default ;
      Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policies() = default ;
      Policies& operator=(const Policies &) = default ;
      Policies& operator=(Policies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Filter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Filter& obj) { 
          DARABONBA_PTR_TO_JSON(TagWildcard, tagWildcard_);
        };
        friend void from_json(const Darabonba::Json& j, Filter& obj) { 
          DARABONBA_PTR_FROM_JSON(TagWildcard, tagWildcard_);
        };
        Filter() = default ;
        Filter(const Filter &) = default ;
        Filter(Filter &&) = default ;
        Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Filter() = default ;
        Filter& operator=(const Filter &) = default ;
        Filter& operator=(Filter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagWildcard_ == nullptr; };
        // tagWildcard Field Functions 
        bool hasTagWildcard() const { return this->tagWildcard_ != nullptr;};
        void deleteTagWildcard() { this->tagWildcard_ = nullptr;};
        inline string getTagWildcard() const { DARABONBA_PTR_GET_DEFAULT(tagWildcard_, "") };
        inline Filter& setTagWildcard(string tagWildcard) { DARABONBA_PTR_SET_VALUE(tagWildcard_, tagWildcard) };


      protected:
        shared_ptr<string> tagWildcard_ {};
      };

      class Condition : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Condition& obj) { 
          DARABONBA_PTR_TO_JSON(LastPullOlderThanDays, lastPullOlderThanDays_);
          DARABONBA_PTR_TO_JSON(LastPushOlderThanDays, lastPushOlderThanDays_);
          DARABONBA_PTR_TO_JSON(LatestTagCount, latestTagCount_);
        };
        friend void from_json(const Darabonba::Json& j, Condition& obj) { 
          DARABONBA_PTR_FROM_JSON(LastPullOlderThanDays, lastPullOlderThanDays_);
          DARABONBA_PTR_FROM_JSON(LastPushOlderThanDays, lastPushOlderThanDays_);
          DARABONBA_PTR_FROM_JSON(LatestTagCount, latestTagCount_);
        };
        Condition() = default ;
        Condition(const Condition &) = default ;
        Condition(Condition &&) = default ;
        Condition(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Condition() = default ;
        Condition& operator=(const Condition &) = default ;
        Condition& operator=(Condition &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->lastPullOlderThanDays_ == nullptr
        && this->lastPushOlderThanDays_ == nullptr && this->latestTagCount_ == nullptr; };
        // lastPullOlderThanDays Field Functions 
        bool hasLastPullOlderThanDays() const { return this->lastPullOlderThanDays_ != nullptr;};
        void deleteLastPullOlderThanDays() { this->lastPullOlderThanDays_ = nullptr;};
        inline int32_t getLastPullOlderThanDays() const { DARABONBA_PTR_GET_DEFAULT(lastPullOlderThanDays_, 0) };
        inline Condition& setLastPullOlderThanDays(int32_t lastPullOlderThanDays) { DARABONBA_PTR_SET_VALUE(lastPullOlderThanDays_, lastPullOlderThanDays) };


        // lastPushOlderThanDays Field Functions 
        bool hasLastPushOlderThanDays() const { return this->lastPushOlderThanDays_ != nullptr;};
        void deleteLastPushOlderThanDays() { this->lastPushOlderThanDays_ = nullptr;};
        inline int32_t getLastPushOlderThanDays() const { DARABONBA_PTR_GET_DEFAULT(lastPushOlderThanDays_, 0) };
        inline Condition& setLastPushOlderThanDays(int32_t lastPushOlderThanDays) { DARABONBA_PTR_SET_VALUE(lastPushOlderThanDays_, lastPushOlderThanDays) };


        // latestTagCount Field Functions 
        bool hasLatestTagCount() const { return this->latestTagCount_ != nullptr;};
        void deleteLatestTagCount() { this->latestTagCount_ = nullptr;};
        inline int32_t getLatestTagCount() const { DARABONBA_PTR_GET_DEFAULT(latestTagCount_, 0) };
        inline Condition& setLatestTagCount(int32_t latestTagCount) { DARABONBA_PTR_SET_VALUE(latestTagCount_, latestTagCount) };


      protected:
        shared_ptr<int32_t> lastPullOlderThanDays_ {};
        shared_ptr<int32_t> lastPushOlderThanDays_ {};
        shared_ptr<int32_t> latestTagCount_ {};
      };

      virtual bool empty() const override { return this->condition_ == nullptr
        && this->filter_ == nullptr && this->type_ == nullptr; };
      // condition Field Functions 
      bool hasCondition() const { return this->condition_ != nullptr;};
      void deleteCondition() { this->condition_ = nullptr;};
      inline const Policies::Condition & getCondition() const { DARABONBA_PTR_GET_CONST(condition_, Policies::Condition) };
      inline Policies::Condition getCondition() { DARABONBA_PTR_GET(condition_, Policies::Condition) };
      inline Policies& setCondition(const Policies::Condition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
      inline Policies& setCondition(Policies::Condition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


      // filter Field Functions 
      bool hasFilter() const { return this->filter_ != nullptr;};
      void deleteFilter() { this->filter_ = nullptr;};
      inline const Policies::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, Policies::Filter) };
      inline Policies::Filter getFilter() { DARABONBA_PTR_GET(filter_, Policies::Filter) };
      inline Policies& setFilter(const Policies::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
      inline Policies& setFilter(Policies::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Policies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<Policies::Condition> condition_ {};
      shared_ptr<Policies::Filter> filter_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->auto_ == nullptr
        && this->code_ == nullptr && this->createTime_ == nullptr && this->enableDeleteTag_ == nullptr && this->instanceId_ == nullptr && this->isSuccess_ == nullptr
        && this->modifiedTime_ == nullptr && this->namespaceName_ == nullptr && this->nextTime_ == nullptr && this->policies_ == nullptr && this->repoName_ == nullptr
        && this->requestId_ == nullptr && this->retentionTagCount_ == nullptr && this->ruleId_ == nullptr && this->scheduleTime_ == nullptr && this->scope_ == nullptr
        && this->tagRegexp_ == nullptr; };
    // auto Field Functions 
    bool hasAuto() const { return this->auto_ != nullptr;};
    void deleteAuto() { this->auto_ = nullptr;};
    inline bool getAuto() const { DARABONBA_PTR_GET_DEFAULT(auto_, false) };
    inline GetArtifactLifecycleRuleResponseBody& setAuto(bool _auto) { DARABONBA_PTR_SET_VALUE(auto_, _auto) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetArtifactLifecycleRuleResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // enableDeleteTag Field Functions 
    bool hasEnableDeleteTag() const { return this->enableDeleteTag_ != nullptr;};
    void deleteEnableDeleteTag() { this->enableDeleteTag_ = nullptr;};
    inline bool getEnableDeleteTag() const { DARABONBA_PTR_GET_DEFAULT(enableDeleteTag_, false) };
    inline GetArtifactLifecycleRuleResponseBody& setEnableDeleteTag(bool enableDeleteTag) { DARABONBA_PTR_SET_VALUE(enableDeleteTag_, enableDeleteTag) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetArtifactLifecycleRuleResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline GetArtifactLifecycleRuleResponseBody& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // nextTime Field Functions 
    bool hasNextTime() const { return this->nextTime_ != nullptr;};
    void deleteNextTime() { this->nextTime_ = nullptr;};
    inline int64_t getNextTime() const { DARABONBA_PTR_GET_DEFAULT(nextTime_, 0L) };
    inline GetArtifactLifecycleRuleResponseBody& setNextTime(int64_t nextTime) { DARABONBA_PTR_SET_VALUE(nextTime_, nextTime) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<GetArtifactLifecycleRuleResponseBody::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<GetArtifactLifecycleRuleResponseBody::Policies>) };
    inline vector<GetArtifactLifecycleRuleResponseBody::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<GetArtifactLifecycleRuleResponseBody::Policies>) };
    inline GetArtifactLifecycleRuleResponseBody& setPolicies(const vector<GetArtifactLifecycleRuleResponseBody::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline GetArtifactLifecycleRuleResponseBody& setPolicies(vector<GetArtifactLifecycleRuleResponseBody::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retentionTagCount Field Functions 
    bool hasRetentionTagCount() const { return this->retentionTagCount_ != nullptr;};
    void deleteRetentionTagCount() { this->retentionTagCount_ = nullptr;};
    inline int64_t getRetentionTagCount() const { DARABONBA_PTR_GET_DEFAULT(retentionTagCount_, 0L) };
    inline GetArtifactLifecycleRuleResponseBody& setRetentionTagCount(int64_t retentionTagCount) { DARABONBA_PTR_SET_VALUE(retentionTagCount_, retentionTagCount) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline string getScheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setScheduleTime(string scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // tagRegexp Field Functions 
    bool hasTagRegexp() const { return this->tagRegexp_ != nullptr;};
    void deleteTagRegexp() { this->tagRegexp_ = nullptr;};
    inline string getTagRegexp() const { DARABONBA_PTR_GET_DEFAULT(tagRegexp_, "") };
    inline GetArtifactLifecycleRuleResponseBody& setTagRegexp(string tagRegexp) { DARABONBA_PTR_SET_VALUE(tagRegexp_, tagRegexp) };


  protected:
    // Indicates whether the lifecycle management rule is automatically executed.
    shared_ptr<bool> auto_ {};
    // The return value.
    shared_ptr<string> code_ {};
    // The time when the lifecycle management rule was created.
    shared_ptr<int64_t> createTime_ {};
    // Indicates whether lifecycle management is enabled for the artifact.
    shared_ptr<bool> enableDeleteTag_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // Indicates whether the API request is successful. Valid values:
    // 
    // *   `true`: The request is successful.
    // *   `false`: The request fails.
    shared_ptr<bool> isSuccess_ {};
    // The time when the lifecycle management rule was last modified.
    shared_ptr<int64_t> modifiedTime_ {};
    // The name of the namespace.
    shared_ptr<string> namespaceName_ {};
    // The time when the lifecycle management rule is next executed.
    shared_ptr<int64_t> nextTime_ {};
    shared_ptr<vector<GetArtifactLifecycleRuleResponseBody::Policies>> policies_ {};
    // The name of the image repository.
    shared_ptr<string> repoName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of retained images.
    shared_ptr<int64_t> retentionTagCount_ {};
    // The rule ID.
    shared_ptr<string> ruleId_ {};
    // The execution cycle of the lifecycle management rule.
    shared_ptr<string> scheduleTime_ {};
    // The deletion scope of artifacts.
    shared_ptr<string> scope_ {};
    // The regular expression that indicates which image tags are retained.
    shared_ptr<string> tagRegexp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
