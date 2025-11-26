// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBSRESPONSEBODYJOBSLISTSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBSRESPONSEBODYJOBSLISTSUMMARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class QueryJobsResponseBodyJobsListSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobsResponseBodyJobsListSummary& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ConversationDetailId, conversationDetailId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(SummaryId, summaryId_);
      DARABONBA_PTR_TO_JSON(SummaryName, summaryName_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobsResponseBodyJobsListSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ConversationDetailId, conversationDetailId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(SummaryId, summaryId_);
      DARABONBA_PTR_FROM_JSON(SummaryName, summaryName_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    QueryJobsResponseBodyJobsListSummary() = default ;
    QueryJobsResponseBodyJobsListSummary(const QueryJobsResponseBodyJobsListSummary &) = default ;
    QueryJobsResponseBodyJobsListSummary(QueryJobsResponseBodyJobsListSummary &&) = default ;
    QueryJobsResponseBodyJobsListSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobsResponseBodyJobsListSummary() = default ;
    QueryJobsResponseBodyJobsListSummary& operator=(const QueryJobsResponseBodyJobsListSummary &) = default ;
    QueryJobsResponseBodyJobsListSummary& operator=(QueryJobsResponseBodyJobsListSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->content_ == nullptr && return this->conversationDetailId_ == nullptr && return this->groupId_ == nullptr && return this->jobId_ == nullptr && return this->summaryId_ == nullptr
        && return this->summaryName_ == nullptr && return this->taskId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline QueryJobsResponseBodyJobsListSummary& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline QueryJobsResponseBodyJobsListSummary& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // conversationDetailId Field Functions 
    bool hasConversationDetailId() const { return this->conversationDetailId_ != nullptr;};
    void deleteConversationDetailId() { this->conversationDetailId_ = nullptr;};
    inline string conversationDetailId() const { DARABONBA_PTR_GET_DEFAULT(conversationDetailId_, "") };
    inline QueryJobsResponseBodyJobsListSummary& setConversationDetailId(string conversationDetailId) { DARABONBA_PTR_SET_VALUE(conversationDetailId_, conversationDetailId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline QueryJobsResponseBodyJobsListSummary& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline QueryJobsResponseBodyJobsListSummary& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // summaryId Field Functions 
    bool hasSummaryId() const { return this->summaryId_ != nullptr;};
    void deleteSummaryId() { this->summaryId_ = nullptr;};
    inline string summaryId() const { DARABONBA_PTR_GET_DEFAULT(summaryId_, "") };
    inline QueryJobsResponseBodyJobsListSummary& setSummaryId(string summaryId) { DARABONBA_PTR_SET_VALUE(summaryId_, summaryId) };


    // summaryName Field Functions 
    bool hasSummaryName() const { return this->summaryName_ != nullptr;};
    void deleteSummaryName() { this->summaryName_ = nullptr;};
    inline string summaryName() const { DARABONBA_PTR_GET_DEFAULT(summaryName_, "") };
    inline QueryJobsResponseBodyJobsListSummary& setSummaryName(string summaryName) { DARABONBA_PTR_SET_VALUE(summaryName_, summaryName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryJobsResponseBodyJobsListSummary& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> conversationDetailId_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> summaryId_ = nullptr;
    std::shared_ptr<string> summaryName_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
