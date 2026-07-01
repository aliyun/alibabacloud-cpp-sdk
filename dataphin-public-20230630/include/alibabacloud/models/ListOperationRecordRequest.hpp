// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONRECORDREQUEST_HPP_
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
  class ListOperationRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListCommand, listCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListCommand, listCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListOperationRecordRequest() = default ;
    ListOperationRecordRequest(const ListOperationRecordRequest &) = default ;
    ListOperationRecordRequest(ListOperationRecordRequest &&) = default ;
    ListOperationRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationRecordRequest() = default ;
    ListOperationRecordRequest& operator=(const ListOperationRecordRequest &) = default ;
    ListOperationRecordRequest& operator=(ListOperationRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListCommand& obj) { 
        DARABONBA_PTR_TO_JSON(BeginTimeEnd, beginTimeEnd_);
        DARABONBA_PTR_TO_JSON(BeginTimeStart, beginTimeStart_);
        DARABONBA_PTR_TO_JSON(CodeContent, codeContent_);
        DARABONBA_PTR_TO_JSON(CodeType, codeType_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(SortType, sortType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserIds, userIds_);
      };
      friend void from_json(const Darabonba::Json& j, ListCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(BeginTimeEnd, beginTimeEnd_);
        DARABONBA_PTR_FROM_JSON(BeginTimeStart, beginTimeStart_);
        DARABONBA_PTR_FROM_JSON(CodeContent, codeContent_);
        DARABONBA_PTR_FROM_JSON(CodeType, codeType_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(SortType, sortType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
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
      virtual bool empty() const override { return this->beginTimeEnd_ == nullptr
        && this->beginTimeStart_ == nullptr && this->codeContent_ == nullptr && this->codeType_ == nullptr && this->duration_ == nullptr && this->fileName_ == nullptr
        && this->objectType_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->sortType_ == nullptr
        && this->status_ == nullptr && this->userIds_ == nullptr; };
      // beginTimeEnd Field Functions 
      bool hasBeginTimeEnd() const { return this->beginTimeEnd_ != nullptr;};
      void deleteBeginTimeEnd() { this->beginTimeEnd_ = nullptr;};
      inline string getBeginTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(beginTimeEnd_, "") };
      inline ListCommand& setBeginTimeEnd(string beginTimeEnd) { DARABONBA_PTR_SET_VALUE(beginTimeEnd_, beginTimeEnd) };


      // beginTimeStart Field Functions 
      bool hasBeginTimeStart() const { return this->beginTimeStart_ != nullptr;};
      void deleteBeginTimeStart() { this->beginTimeStart_ = nullptr;};
      inline string getBeginTimeStart() const { DARABONBA_PTR_GET_DEFAULT(beginTimeStart_, "") };
      inline ListCommand& setBeginTimeStart(string beginTimeStart) { DARABONBA_PTR_SET_VALUE(beginTimeStart_, beginTimeStart) };


      // codeContent Field Functions 
      bool hasCodeContent() const { return this->codeContent_ != nullptr;};
      void deleteCodeContent() { this->codeContent_ = nullptr;};
      inline string getCodeContent() const { DARABONBA_PTR_GET_DEFAULT(codeContent_, "") };
      inline ListCommand& setCodeContent(string codeContent) { DARABONBA_PTR_SET_VALUE(codeContent_, codeContent) };


      // codeType Field Functions 
      bool hasCodeType() const { return this->codeType_ != nullptr;};
      void deleteCodeType() { this->codeType_ = nullptr;};
      inline const vector<int32_t> & getCodeType() const { DARABONBA_PTR_GET_CONST(codeType_, vector<int32_t>) };
      inline vector<int32_t> getCodeType() { DARABONBA_PTR_GET(codeType_, vector<int32_t>) };
      inline ListCommand& setCodeType(const vector<int32_t> & codeType) { DARABONBA_PTR_SET_VALUE(codeType_, codeType) };
      inline ListCommand& setCodeType(vector<int32_t> && codeType) { DARABONBA_PTR_SET_RVALUE(codeType_, codeType) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline const vector<int32_t> & getDuration() const { DARABONBA_PTR_GET_CONST(duration_, vector<int32_t>) };
      inline vector<int32_t> getDuration() { DARABONBA_PTR_GET(duration_, vector<int32_t>) };
      inline ListCommand& setDuration(const vector<int32_t> & duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };
      inline ListCommand& setDuration(vector<int32_t> && duration) { DARABONBA_PTR_SET_RVALUE(duration_, duration) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline ListCommand& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline const vector<string> & getObjectType() const { DARABONBA_PTR_GET_CONST(objectType_, vector<string>) };
      inline vector<string> getObjectType() { DARABONBA_PTR_GET(objectType_, vector<string>) };
      inline ListCommand& setObjectType(const vector<string> & objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };
      inline ListCommand& setObjectType(vector<string> && objectType) { DARABONBA_PTR_SET_RVALUE(objectType_, objectType) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline ListCommand& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListCommand& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline ListCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // sortType Field Functions 
      bool hasSortType() const { return this->sortType_ != nullptr;};
      void deleteSortType() { this->sortType_ = nullptr;};
      inline int32_t getSortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, 0) };
      inline ListCommand& setSortType(int32_t sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline const vector<int32_t> & getStatus() const { DARABONBA_PTR_GET_CONST(status_, vector<int32_t>) };
      inline vector<int32_t> getStatus() { DARABONBA_PTR_GET(status_, vector<int32_t>) };
      inline ListCommand& setStatus(const vector<int32_t> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
      inline ListCommand& setStatus(vector<int32_t> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


      // userIds Field Functions 
      bool hasUserIds() const { return this->userIds_ != nullptr;};
      void deleteUserIds() { this->userIds_ = nullptr;};
      inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
      inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
      inline ListCommand& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
      inline ListCommand& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


    protected:
      // The end of the start time range. Format: yyyy-MM-dd HH:mm:ss.
      shared_ptr<string> beginTimeEnd_ {};
      // The beginning of the start time range. Format: yyyy-MM-dd HH:mm:ss.
      shared_ptr<string> beginTimeStart_ {};
      // The keyword for code search.
      shared_ptr<string> codeContent_ {};
      // The list of code types.
      shared_ptr<vector<int32_t>> codeType_ {};
      // The list of duration ranges.
      shared_ptr<vector<int32_t>> duration_ {};
      // The script name.
      shared_ptr<string> fileName_ {};
      // The list of object types.
      shared_ptr<vector<string>> objectType_ {};
      // The page number. Default value: 1.
      // 
      // This parameter is required.
      shared_ptr<int32_t> page_ {};
      // The number of entries per page. Default value: 20.
      // 
      // This parameter is required.
      shared_ptr<int32_t> pageSize_ {};
      // The project ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      // The sort type. Valid values: 0 (start time ascending), 1 (start time descending), 2 (object name).
      shared_ptr<int32_t> sortType_ {};
      // The list of task statuses.
      shared_ptr<vector<int32_t>> status_ {};
      // The list of executor IDs.
      shared_ptr<vector<string>> userIds_ {};
    };

    virtual bool empty() const override { return this->listCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listCommand Field Functions 
    bool hasListCommand() const { return this->listCommand_ != nullptr;};
    void deleteListCommand() { this->listCommand_ = nullptr;};
    inline const ListOperationRecordRequest::ListCommand & getListCommand() const { DARABONBA_PTR_GET_CONST(listCommand_, ListOperationRecordRequest::ListCommand) };
    inline ListOperationRecordRequest::ListCommand getListCommand() { DARABONBA_PTR_GET(listCommand_, ListOperationRecordRequest::ListCommand) };
    inline ListOperationRecordRequest& setListCommand(const ListOperationRecordRequest::ListCommand & listCommand) { DARABONBA_PTR_SET_VALUE(listCommand_, listCommand) };
    inline ListOperationRecordRequest& setListCommand(ListOperationRecordRequest::ListCommand && listCommand) { DARABONBA_PTR_SET_RVALUE(listCommand_, listCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListOperationRecordRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // The query command.
    // 
    // This parameter is required.
    shared_ptr<ListOperationRecordRequest::ListCommand> listCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
