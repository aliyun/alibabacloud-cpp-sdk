// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListPipelinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(ListCommand, listCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(ListCommand, listCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ListPipelinesRequest() = default ;
    ListPipelinesRequest(const ListPipelinesRequest &) = default ;
    ListPipelinesRequest(ListPipelinesRequest &&) = default ;
    ListPipelinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelinesRequest() = default ;
    ListPipelinesRequest& operator=(const ListPipelinesRequest &) = default ;
    ListPipelinesRequest& operator=(ListPipelinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListCommand& obj) { 
        DARABONBA_PTR_TO_JSON(CreatorList, creatorList_);
        DARABONBA_PTR_TO_JSON(DevelopOwnerList, developOwnerList_);
        DARABONBA_PTR_TO_JSON(Directories, directories_);
        DARABONBA_PTR_TO_JSON(ExactMatch, exactMatch_);
        DARABONBA_PTR_TO_JSON(Keywords, keywords_);
        DARABONBA_PTR_TO_JSON(NextCursor, nextCursor_);
        DARABONBA_PTR_TO_JSON(OpsOwnerList, opsOwnerList_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(PipelineTypeList, pipelineTypeList_);
        DARABONBA_PTR_TO_JSON(Recursive, recursive_);
        DARABONBA_PTR_TO_JSON(ScheduleTypeList, scheduleTypeList_);
        DARABONBA_PTR_TO_JSON(SubmitStatusList, submitStatusList_);
        DARABONBA_PTR_TO_JSON(TagList, tagList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ListCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatorList, creatorList_);
        DARABONBA_PTR_FROM_JSON(DevelopOwnerList, developOwnerList_);
        DARABONBA_PTR_FROM_JSON(Directories, directories_);
        DARABONBA_PTR_FROM_JSON(ExactMatch, exactMatch_);
        DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
        DARABONBA_PTR_FROM_JSON(NextCursor, nextCursor_);
        DARABONBA_PTR_FROM_JSON(OpsOwnerList, opsOwnerList_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(PipelineTypeList, pipelineTypeList_);
        DARABONBA_PTR_FROM_JSON(Recursive, recursive_);
        DARABONBA_PTR_FROM_JSON(ScheduleTypeList, scheduleTypeList_);
        DARABONBA_PTR_FROM_JSON(SubmitStatusList, submitStatusList_);
        DARABONBA_PTR_FROM_JSON(TagList, tagList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ListCommand() = default ;
      ListCommand(const ListCommand &) = default ;
      ListCommand(ListCommand &&) = default ;
      ListCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListCommand() = default ;
      ListCommand& operator=(const ListCommand &) = default ;
      ListCommand& operator=(ListCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creatorList_ == nullptr
        && this->developOwnerList_ == nullptr && this->directories_ == nullptr && this->exactMatch_ == nullptr && this->keywords_ == nullptr && this->nextCursor_ == nullptr
        && this->opsOwnerList_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->pipelineTypeList_ == nullptr && this->recursive_ == nullptr
        && this->scheduleTypeList_ == nullptr && this->submitStatusList_ == nullptr && this->tagList_ == nullptr && this->totalCount_ == nullptr; };
      // creatorList Field Functions 
      bool hasCreatorList() const { return this->creatorList_ != nullptr;};
      void deleteCreatorList() { this->creatorList_ = nullptr;};
      inline const vector<string> & getCreatorList() const { DARABONBA_PTR_GET_CONST(creatorList_, vector<string>) };
      inline vector<string> getCreatorList() { DARABONBA_PTR_GET(creatorList_, vector<string>) };
      inline ListCommand& setCreatorList(const vector<string> & creatorList) { DARABONBA_PTR_SET_VALUE(creatorList_, creatorList) };
      inline ListCommand& setCreatorList(vector<string> && creatorList) { DARABONBA_PTR_SET_RVALUE(creatorList_, creatorList) };


      // developOwnerList Field Functions 
      bool hasDevelopOwnerList() const { return this->developOwnerList_ != nullptr;};
      void deleteDevelopOwnerList() { this->developOwnerList_ = nullptr;};
      inline const vector<string> & getDevelopOwnerList() const { DARABONBA_PTR_GET_CONST(developOwnerList_, vector<string>) };
      inline vector<string> getDevelopOwnerList() { DARABONBA_PTR_GET(developOwnerList_, vector<string>) };
      inline ListCommand& setDevelopOwnerList(const vector<string> & developOwnerList) { DARABONBA_PTR_SET_VALUE(developOwnerList_, developOwnerList) };
      inline ListCommand& setDevelopOwnerList(vector<string> && developOwnerList) { DARABONBA_PTR_SET_RVALUE(developOwnerList_, developOwnerList) };


      // directories Field Functions 
      bool hasDirectories() const { return this->directories_ != nullptr;};
      void deleteDirectories() { this->directories_ = nullptr;};
      inline const vector<string> & getDirectories() const { DARABONBA_PTR_GET_CONST(directories_, vector<string>) };
      inline vector<string> getDirectories() { DARABONBA_PTR_GET(directories_, vector<string>) };
      inline ListCommand& setDirectories(const vector<string> & directories) { DARABONBA_PTR_SET_VALUE(directories_, directories) };
      inline ListCommand& setDirectories(vector<string> && directories) { DARABONBA_PTR_SET_RVALUE(directories_, directories) };


      // exactMatch Field Functions 
      bool hasExactMatch() const { return this->exactMatch_ != nullptr;};
      void deleteExactMatch() { this->exactMatch_ = nullptr;};
      inline bool getExactMatch() const { DARABONBA_PTR_GET_DEFAULT(exactMatch_, false) };
      inline ListCommand& setExactMatch(bool exactMatch) { DARABONBA_PTR_SET_VALUE(exactMatch_, exactMatch) };


      // keywords Field Functions 
      bool hasKeywords() const { return this->keywords_ != nullptr;};
      void deleteKeywords() { this->keywords_ = nullptr;};
      inline const vector<string> & getKeywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
      inline vector<string> getKeywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
      inline ListCommand& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
      inline ListCommand& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


      // nextCursor Field Functions 
      bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
      void deleteNextCursor() { this->nextCursor_ = nullptr;};
      inline int64_t getNextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, 0L) };
      inline ListCommand& setNextCursor(int64_t nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


      // opsOwnerList Field Functions 
      bool hasOpsOwnerList() const { return this->opsOwnerList_ != nullptr;};
      void deleteOpsOwnerList() { this->opsOwnerList_ = nullptr;};
      inline const vector<string> & getOpsOwnerList() const { DARABONBA_PTR_GET_CONST(opsOwnerList_, vector<string>) };
      inline vector<string> getOpsOwnerList() { DARABONBA_PTR_GET(opsOwnerList_, vector<string>) };
      inline ListCommand& setOpsOwnerList(const vector<string> & opsOwnerList) { DARABONBA_PTR_SET_VALUE(opsOwnerList_, opsOwnerList) };
      inline ListCommand& setOpsOwnerList(vector<string> && opsOwnerList) { DARABONBA_PTR_SET_RVALUE(opsOwnerList_, opsOwnerList) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline ListCommand& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListCommand& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // pipelineTypeList Field Functions 
      bool hasPipelineTypeList() const { return this->pipelineTypeList_ != nullptr;};
      void deletePipelineTypeList() { this->pipelineTypeList_ = nullptr;};
      inline const vector<int32_t> & getPipelineTypeList() const { DARABONBA_PTR_GET_CONST(pipelineTypeList_, vector<int32_t>) };
      inline vector<int32_t> getPipelineTypeList() { DARABONBA_PTR_GET(pipelineTypeList_, vector<int32_t>) };
      inline ListCommand& setPipelineTypeList(const vector<int32_t> & pipelineTypeList) { DARABONBA_PTR_SET_VALUE(pipelineTypeList_, pipelineTypeList) };
      inline ListCommand& setPipelineTypeList(vector<int32_t> && pipelineTypeList) { DARABONBA_PTR_SET_RVALUE(pipelineTypeList_, pipelineTypeList) };


      // recursive Field Functions 
      bool hasRecursive() const { return this->recursive_ != nullptr;};
      void deleteRecursive() { this->recursive_ = nullptr;};
      inline bool getRecursive() const { DARABONBA_PTR_GET_DEFAULT(recursive_, false) };
      inline ListCommand& setRecursive(bool recursive) { DARABONBA_PTR_SET_VALUE(recursive_, recursive) };


      // scheduleTypeList Field Functions 
      bool hasScheduleTypeList() const { return this->scheduleTypeList_ != nullptr;};
      void deleteScheduleTypeList() { this->scheduleTypeList_ = nullptr;};
      inline const vector<int32_t> & getScheduleTypeList() const { DARABONBA_PTR_GET_CONST(scheduleTypeList_, vector<int32_t>) };
      inline vector<int32_t> getScheduleTypeList() { DARABONBA_PTR_GET(scheduleTypeList_, vector<int32_t>) };
      inline ListCommand& setScheduleTypeList(const vector<int32_t> & scheduleTypeList) { DARABONBA_PTR_SET_VALUE(scheduleTypeList_, scheduleTypeList) };
      inline ListCommand& setScheduleTypeList(vector<int32_t> && scheduleTypeList) { DARABONBA_PTR_SET_RVALUE(scheduleTypeList_, scheduleTypeList) };


      // submitStatusList Field Functions 
      bool hasSubmitStatusList() const { return this->submitStatusList_ != nullptr;};
      void deleteSubmitStatusList() { this->submitStatusList_ = nullptr;};
      inline const vector<string> & getSubmitStatusList() const { DARABONBA_PTR_GET_CONST(submitStatusList_, vector<string>) };
      inline vector<string> getSubmitStatusList() { DARABONBA_PTR_GET(submitStatusList_, vector<string>) };
      inline ListCommand& setSubmitStatusList(const vector<string> & submitStatusList) { DARABONBA_PTR_SET_VALUE(submitStatusList_, submitStatusList) };
      inline ListCommand& setSubmitStatusList(vector<string> && submitStatusList) { DARABONBA_PTR_SET_RVALUE(submitStatusList_, submitStatusList) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<string> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<string>) };
      inline vector<string> getTagList() { DARABONBA_PTR_GET(tagList_, vector<string>) };
      inline ListCommand& setTagList(const vector<string> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline ListCommand& setTagList(vector<string> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline ListCommand& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of creator user IDs for filtering. If left empty, no filtering is applied. Multiple values are evaluated with an OR relationship.
      shared_ptr<vector<string>> creatorList_ {};
      // The list of development owner user IDs for filtering. If left empty, no filtering is applied. Multiple values are evaluated with an OR relationship.
      shared_ptr<vector<string>> developOwnerList_ {};
      // The list of full folder paths to query. If left empty, the root folder is queried.
      shared_ptr<vector<string>> directories_ {};
      // Specifies whether to use exact match for node names. Default value: false.
      shared_ptr<bool> exactMatch_ {};
      // The list of node name keywords. This parameter is optional. If left empty, no filtering by name is applied. For exact match, specify full names. For fuzzy match, specify keywords. Multiple values are evaluated with an OR relationship.
      shared_ptr<vector<string>> keywords_ {};
      // The cursor-based pagination parameter (an opaque cursor that callers do not need to interpret). This parameter is optional. If not specified, the request is treated as a first-page request and returns the actual total count. If specified, the request is treated as a subsequent-page request. Pass the NextCursor value returned from the previous page as-is. The SQL layer automatically filters by incrementing ID to query the next page without re-querying the total count. No OFFSET is used throughout, which avoids performance degradation in deep paging scenarios.
      shared_ptr<int64_t> nextCursor_ {};
      // The list of O&M owner user IDs for filtering. If left empty, no filtering is applied. Multiple values are evaluated with an OR relationship.
      shared_ptr<vector<string>> opsOwnerList_ {};
      // The page number. Default value: 1. Pages start from 1.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries per page. Default value: 10. Maximum value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The list of node types. Default value: [0] (batch integration). Valid values:
      // 
      // - 0: batch integration.
      // - 1: real-time integration.
      // - 13: data aggregation.
      // - 14: offline unstructured workflow.
      // - 15: real-time unstructured workflow.
      // - 16: online unstructured workflow.
      // 
      // If null or an empty list is passed, the default value [0] is used.
      shared_ptr<vector<int32_t>> pipelineTypeList_ {};
      // Specifies whether to recursively query subfolders. Default value: false.
      shared_ptr<bool> recursive_ {};
      // The list of scheduling types for filtering. If left empty, no filtering is applied. Valid values:
      // 
      // - 1: periodic scheduling.
      // - 3: manual scheduling.
      // - 5: real-time scheduling.
      // - 7: online workflow.
      shared_ptr<vector<int32_t>> scheduleTypeList_ {};
      // The list of submit statuses for filtering. If left empty, no filtering is applied. Valid values:
      // 
      // - DRAFT: draft.
      // - SUBMITTING: submitting.
      // - SUBMITTED: submitted.
      // - PUBLISHED: published.
      shared_ptr<vector<string>> submitStatusList_ {};
      // The list of label names for filtering. If left empty, no filtering is applied. Multiple values are evaluated with an OR relationship.
      shared_ptr<vector<string>> tagList_ {};
      // The total number of records for cursor-based pagination. This parameter is optional and takes effect only when NextCursor is not empty. After the first-page request returns the actual total count, pass this value back as-is for subsequent pages. The server does not re-query the total count and directly echoes the value, which avoids redundant count overhead. If not specified, the system falls back to querying one extra record to determine whether a next page exists.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Context : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Context& obj) { 
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, Context& obj) { 
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      Context() = default ;
      Context(const Context &) = default ;
      Context(Context &&) = default ;
      Context(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Context() = default ;
      Context& operator=(const Context &) = default ;
      Context& operator=(Context &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->env_ == nullptr
        && this->projectId_ == nullptr; };
      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline Context& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Context& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // The environment identifier. Valid values:
      // 
      // - DEV: development environment.
      // - PROD: production environment.
      // 
      // Default value: PROD.
      shared_ptr<string> env_ {};
      // The project ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->context_ == nullptr
        && this->listCommand_ == nullptr && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const ListPipelinesRequest::Context & getContext() const { DARABONBA_PTR_GET_CONST(context_, ListPipelinesRequest::Context) };
    inline ListPipelinesRequest::Context getContext() { DARABONBA_PTR_GET(context_, ListPipelinesRequest::Context) };
    inline ListPipelinesRequest& setContext(const ListPipelinesRequest::Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline ListPipelinesRequest& setContext(ListPipelinesRequest::Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // listCommand Field Functions 
    bool hasListCommand() const { return this->listCommand_ != nullptr;};
    void deleteListCommand() { this->listCommand_ = nullptr;};
    inline const ListPipelinesRequest::ListCommand & getListCommand() const { DARABONBA_PTR_GET_CONST(listCommand_, ListPipelinesRequest::ListCommand) };
    inline ListPipelinesRequest::ListCommand getListCommand() { DARABONBA_PTR_GET(listCommand_, ListPipelinesRequest::ListCommand) };
    inline ListPipelinesRequest& setListCommand(const ListPipelinesRequest::ListCommand & listCommand) { DARABONBA_PTR_SET_VALUE(listCommand_, listCommand) };
    inline ListPipelinesRequest& setListCommand(ListPipelinesRequest::ListCommand && listCommand) { DARABONBA_PTR_SET_RVALUE(listCommand_, listCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListPipelinesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListPipelinesRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The request context.
    // 
    // This parameter is required.
    shared_ptr<ListPipelinesRequest::Context> context_ {};
    // The query parameters.
    // 
    // This parameter is required.
    shared_ptr<ListPipelinesRequest::ListCommand> listCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The user ID of the operator.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
