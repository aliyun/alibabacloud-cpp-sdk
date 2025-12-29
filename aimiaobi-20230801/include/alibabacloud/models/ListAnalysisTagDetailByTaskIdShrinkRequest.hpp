// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANALYSISTAGDETAILBYTASKIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTANALYSISTAGDETAILBYTASKIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListAnalysisTagDetailByTaskIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnalysisTagDetailByTaskIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Categories, categoriesShrink_);
      DARABONBA_PTR_TO_JSON(Current, current_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnalysisTagDetailByTaskIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Categories, categoriesShrink_);
      DARABONBA_PTR_FROM_JSON(Current, current_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListAnalysisTagDetailByTaskIdShrinkRequest() = default ;
    ListAnalysisTagDetailByTaskIdShrinkRequest(const ListAnalysisTagDetailByTaskIdShrinkRequest &) = default ;
    ListAnalysisTagDetailByTaskIdShrinkRequest(ListAnalysisTagDetailByTaskIdShrinkRequest &&) = default ;
    ListAnalysisTagDetailByTaskIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnalysisTagDetailByTaskIdShrinkRequest() = default ;
    ListAnalysisTagDetailByTaskIdShrinkRequest& operator=(const ListAnalysisTagDetailByTaskIdShrinkRequest &) = default ;
    ListAnalysisTagDetailByTaskIdShrinkRequest& operator=(ListAnalysisTagDetailByTaskIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoriesShrink_ == nullptr
        && this->current_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->size_ == nullptr && this->taskId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // categoriesShrink Field Functions 
    bool hasCategoriesShrink() const { return this->categoriesShrink_ != nullptr;};
    void deleteCategoriesShrink() { this->categoriesShrink_ = nullptr;};
    inline string getCategoriesShrink() const { DARABONBA_PTR_GET_DEFAULT(categoriesShrink_, "") };
    inline ListAnalysisTagDetailByTaskIdShrinkRequest& setCategoriesShrink(string categoriesShrink) { DARABONBA_PTR_SET_VALUE(categoriesShrink_, categoriesShrink) };


    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int32_t getCurrent() const { DARABONBA_PTR_GET_DEFAULT(current_, 0) };
    inline ListAnalysisTagDetailByTaskIdShrinkRequest& setCurrent(int32_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAnalysisTagDetailByTaskIdShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAnalysisTagDetailByTaskIdShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListAnalysisTagDetailByTaskIdShrinkRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListAnalysisTagDetailByTaskIdShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListAnalysisTagDetailByTaskIdShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> categoriesShrink_ {};
    shared_ptr<int32_t> current_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> size_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
