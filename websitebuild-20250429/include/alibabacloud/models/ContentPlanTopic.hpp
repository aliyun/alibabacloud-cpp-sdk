// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTENTPLANTOPIC_HPP_
#define ALIBABACLOUD_MODELS_CONTENTPLANTOPIC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ContentPlanTopic : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContentPlanTopic& obj) { 
      DARABONBA_PTR_TO_JSON(ArticleConversationId, articleConversationId_);
      DARABONBA_PTR_TO_JSON(ArticleId, articleId_);
      DARABONBA_PTR_TO_JSON(ArticleStatus, articleStatus_);
      DARABONBA_PTR_TO_JSON(DiagnosisReferences, diagnosisReferences_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(FailReason, failReason_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Rationale, rationale_);
      DARABONBA_PTR_TO_JSON(RecommendedChannels, recommendedChannels_);
      DARABONBA_PTR_TO_JSON(ScheduledAt, scheduledAt_);
      DARABONBA_PTR_TO_JSON(SkipReason, skipReason_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
      DARABONBA_PTR_TO_JSON(WritingDirection, writingDirection_);
    };
    friend void from_json(const Darabonba::Json& j, ContentPlanTopic& obj) { 
      DARABONBA_PTR_FROM_JSON(ArticleConversationId, articleConversationId_);
      DARABONBA_PTR_FROM_JSON(ArticleId, articleId_);
      DARABONBA_PTR_FROM_JSON(ArticleStatus, articleStatus_);
      DARABONBA_PTR_FROM_JSON(DiagnosisReferences, diagnosisReferences_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Rationale, rationale_);
      DARABONBA_PTR_FROM_JSON(RecommendedChannels, recommendedChannels_);
      DARABONBA_PTR_FROM_JSON(ScheduledAt, scheduledAt_);
      DARABONBA_PTR_FROM_JSON(SkipReason, skipReason_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
      DARABONBA_PTR_FROM_JSON(WritingDirection, writingDirection_);
    };
    ContentPlanTopic() = default ;
    ContentPlanTopic(const ContentPlanTopic &) = default ;
    ContentPlanTopic(ContentPlanTopic &&) = default ;
    ContentPlanTopic(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContentPlanTopic() = default ;
    ContentPlanTopic& operator=(const ContentPlanTopic &) = default ;
    ContentPlanTopic& operator=(ContentPlanTopic &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articleConversationId_ == nullptr
        && this->articleId_ == nullptr && this->articleStatus_ == nullptr && this->diagnosisReferences_ == nullptr && this->direction_ == nullptr && this->failReason_ == nullptr
        && this->planId_ == nullptr && this->projectId_ == nullptr && this->rationale_ == nullptr && this->recommendedChannels_ == nullptr && this->scheduledAt_ == nullptr
        && this->skipReason_ == nullptr && this->status_ == nullptr && this->title_ == nullptr && this->topicId_ == nullptr && this->writingDirection_ == nullptr; };
    // articleConversationId Field Functions 
    bool hasArticleConversationId() const { return this->articleConversationId_ != nullptr;};
    void deleteArticleConversationId() { this->articleConversationId_ = nullptr;};
    inline string getArticleConversationId() const { DARABONBA_PTR_GET_DEFAULT(articleConversationId_, "") };
    inline ContentPlanTopic& setArticleConversationId(string articleConversationId) { DARABONBA_PTR_SET_VALUE(articleConversationId_, articleConversationId) };


    // articleId Field Functions 
    bool hasArticleId() const { return this->articleId_ != nullptr;};
    void deleteArticleId() { this->articleId_ = nullptr;};
    inline string getArticleId() const { DARABONBA_PTR_GET_DEFAULT(articleId_, "") };
    inline ContentPlanTopic& setArticleId(string articleId) { DARABONBA_PTR_SET_VALUE(articleId_, articleId) };


    // articleStatus Field Functions 
    bool hasArticleStatus() const { return this->articleStatus_ != nullptr;};
    void deleteArticleStatus() { this->articleStatus_ = nullptr;};
    inline string getArticleStatus() const { DARABONBA_PTR_GET_DEFAULT(articleStatus_, "") };
    inline ContentPlanTopic& setArticleStatus(string articleStatus) { DARABONBA_PTR_SET_VALUE(articleStatus_, articleStatus) };


    // diagnosisReferences Field Functions 
    bool hasDiagnosisReferences() const { return this->diagnosisReferences_ != nullptr;};
    void deleteDiagnosisReferences() { this->diagnosisReferences_ = nullptr;};
    inline const vector<string> & getDiagnosisReferences() const { DARABONBA_PTR_GET_CONST(diagnosisReferences_, vector<string>) };
    inline vector<string> getDiagnosisReferences() { DARABONBA_PTR_GET(diagnosisReferences_, vector<string>) };
    inline ContentPlanTopic& setDiagnosisReferences(const vector<string> & diagnosisReferences) { DARABONBA_PTR_SET_VALUE(diagnosisReferences_, diagnosisReferences) };
    inline ContentPlanTopic& setDiagnosisReferences(vector<string> && diagnosisReferences) { DARABONBA_PTR_SET_RVALUE(diagnosisReferences_, diagnosisReferences) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ContentPlanTopic& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline ContentPlanTopic& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline ContentPlanTopic& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ContentPlanTopic& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // rationale Field Functions 
    bool hasRationale() const { return this->rationale_ != nullptr;};
    void deleteRationale() { this->rationale_ = nullptr;};
    inline string getRationale() const { DARABONBA_PTR_GET_DEFAULT(rationale_, "") };
    inline ContentPlanTopic& setRationale(string rationale) { DARABONBA_PTR_SET_VALUE(rationale_, rationale) };


    // recommendedChannels Field Functions 
    bool hasRecommendedChannels() const { return this->recommendedChannels_ != nullptr;};
    void deleteRecommendedChannels() { this->recommendedChannels_ = nullptr;};
    inline const vector<string> & getRecommendedChannels() const { DARABONBA_PTR_GET_CONST(recommendedChannels_, vector<string>) };
    inline vector<string> getRecommendedChannels() { DARABONBA_PTR_GET(recommendedChannels_, vector<string>) };
    inline ContentPlanTopic& setRecommendedChannels(const vector<string> & recommendedChannels) { DARABONBA_PTR_SET_VALUE(recommendedChannels_, recommendedChannels) };
    inline ContentPlanTopic& setRecommendedChannels(vector<string> && recommendedChannels) { DARABONBA_PTR_SET_RVALUE(recommendedChannels_, recommendedChannels) };


    // scheduledAt Field Functions 
    bool hasScheduledAt() const { return this->scheduledAt_ != nullptr;};
    void deleteScheduledAt() { this->scheduledAt_ = nullptr;};
    inline string getScheduledAt() const { DARABONBA_PTR_GET_DEFAULT(scheduledAt_, "") };
    inline ContentPlanTopic& setScheduledAt(string scheduledAt) { DARABONBA_PTR_SET_VALUE(scheduledAt_, scheduledAt) };


    // skipReason Field Functions 
    bool hasSkipReason() const { return this->skipReason_ != nullptr;};
    void deleteSkipReason() { this->skipReason_ = nullptr;};
    inline string getSkipReason() const { DARABONBA_PTR_GET_DEFAULT(skipReason_, "") };
    inline ContentPlanTopic& setSkipReason(string skipReason) { DARABONBA_PTR_SET_VALUE(skipReason_, skipReason) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ContentPlanTopic& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ContentPlanTopic& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline string getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, "") };
    inline ContentPlanTopic& setTopicId(string topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


    // writingDirection Field Functions 
    bool hasWritingDirection() const { return this->writingDirection_ != nullptr;};
    void deleteWritingDirection() { this->writingDirection_ = nullptr;};
    inline string getWritingDirection() const { DARABONBA_PTR_GET_DEFAULT(writingDirection_, "") };
    inline ContentPlanTopic& setWritingDirection(string writingDirection) { DARABONBA_PTR_SET_VALUE(writingDirection_, writingDirection) };


  protected:
    // The article generation session ID.
    shared_ptr<string> articleConversationId_ {};
    // The generated article ID.
    shared_ptr<string> articleId_ {};
    // The status of the associated article. Valid values: DRAFT, PUBLISHED, and PUBLISH_FAILED. This parameter is empty if the article is not generated.
    shared_ptr<string> articleStatus_ {};
    // The GEO diagnostic item references.
    shared_ptr<vector<string>> diagnosisReferences_ {};
    // The content direction.
    shared_ptr<string> direction_ {};
    // The reason for the execution failure.
    shared_ptr<string> failReason_ {};
    // The content plan ID.
    shared_ptr<string> planId_ {};
    // The workspace ID. This refers to the GEO workspace for brand marketing, which is the appWorkspaceId.
    shared_ptr<string> projectId_ {};
    // The rationale for topic selection.
    shared_ptr<string> rationale_ {};
    // The recommended publishing channels.
    shared_ptr<vector<string>> recommendedChannels_ {};
    // The scheduled publish date in the yyyy-MM-dd format.
    shared_ptr<string> scheduledAt_ {};
    // The reason for skipping.
    shared_ptr<string> skipReason_ {};
    // The topic status.
    shared_ptr<string> status_ {};
    // The content title.
    shared_ptr<string> title_ {};
    // The topic ID.
    shared_ptr<string> topicId_ {};
    // The writing direction, which only describes the structure and perspective.
    shared_ptr<string> writingDirection_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
