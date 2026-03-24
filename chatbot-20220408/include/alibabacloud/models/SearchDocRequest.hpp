// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDOCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDOCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class SearchDocRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDocRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(CategoryIds, categoryIds_);
      DARABONBA_PTR_TO_JSON(CreateTimeBegin, createTimeBegin_);
      DARABONBA_PTR_TO_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_TO_JSON(EndTimeBegin, endTimeBegin_);
      DARABONBA_PTR_TO_JSON(EndTimeEnd, endTimeEnd_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(ModifyTimeBegin, modifyTimeBegin_);
      DARABONBA_PTR_TO_JSON(ModifyTimeEnd, modifyTimeEnd_);
      DARABONBA_PTR_TO_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProcessStatus, processStatus_);
      DARABONBA_PTR_TO_JSON(SearchScope, searchScope_);
      DARABONBA_PTR_TO_JSON(StartTimeBegin, startTimeBegin_);
      DARABONBA_PTR_TO_JSON(StartTimeEnd, startTimeEnd_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDocRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(CategoryIds, categoryIds_);
      DARABONBA_PTR_FROM_JSON(CreateTimeBegin, createTimeBegin_);
      DARABONBA_PTR_FROM_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
      DARABONBA_PTR_FROM_JSON(EndTimeBegin, endTimeBegin_);
      DARABONBA_PTR_FROM_JSON(EndTimeEnd, endTimeEnd_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(ModifyTimeBegin, modifyTimeBegin_);
      DARABONBA_PTR_FROM_JSON(ModifyTimeEnd, modifyTimeEnd_);
      DARABONBA_PTR_FROM_JSON(ModifyUserName, modifyUserName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProcessStatus, processStatus_);
      DARABONBA_PTR_FROM_JSON(SearchScope, searchScope_);
      DARABONBA_PTR_FROM_JSON(StartTimeBegin, startTimeBegin_);
      DARABONBA_PTR_FROM_JSON(StartTimeEnd, startTimeEnd_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
    };
    SearchDocRequest() = default ;
    SearchDocRequest(const SearchDocRequest &) = default ;
    SearchDocRequest(SearchDocRequest &&) = default ;
    SearchDocRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDocRequest() = default ;
    SearchDocRequest& operator=(const SearchDocRequest &) = default ;
    SearchDocRequest& operator=(SearchDocRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->categoryIds_ == nullptr && this->createTimeBegin_ == nullptr && this->createTimeEnd_ == nullptr && this->createUserName_ == nullptr && this->endTimeBegin_ == nullptr
        && this->endTimeEnd_ == nullptr && this->keyword_ == nullptr && this->modifyTimeBegin_ == nullptr && this->modifyTimeEnd_ == nullptr && this->modifyUserName_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->processStatus_ == nullptr && this->searchScope_ == nullptr && this->startTimeBegin_ == nullptr
        && this->startTimeEnd_ == nullptr && this->status_ == nullptr && this->tagIds_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SearchDocRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // categoryIds Field Functions 
    bool hasCategoryIds() const { return this->categoryIds_ != nullptr;};
    void deleteCategoryIds() { this->categoryIds_ = nullptr;};
    inline const vector<int64_t> & getCategoryIds() const { DARABONBA_PTR_GET_CONST(categoryIds_, vector<int64_t>) };
    inline vector<int64_t> getCategoryIds() { DARABONBA_PTR_GET(categoryIds_, vector<int64_t>) };
    inline SearchDocRequest& setCategoryIds(const vector<int64_t> & categoryIds) { DARABONBA_PTR_SET_VALUE(categoryIds_, categoryIds) };
    inline SearchDocRequest& setCategoryIds(vector<int64_t> && categoryIds) { DARABONBA_PTR_SET_RVALUE(categoryIds_, categoryIds) };


    // createTimeBegin Field Functions 
    bool hasCreateTimeBegin() const { return this->createTimeBegin_ != nullptr;};
    void deleteCreateTimeBegin() { this->createTimeBegin_ = nullptr;};
    inline string getCreateTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(createTimeBegin_, "") };
    inline SearchDocRequest& setCreateTimeBegin(string createTimeBegin) { DARABONBA_PTR_SET_VALUE(createTimeBegin_, createTimeBegin) };


    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline string getCreateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, "") };
    inline SearchDocRequest& setCreateTimeEnd(string createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline SearchDocRequest& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // endTimeBegin Field Functions 
    bool hasEndTimeBegin() const { return this->endTimeBegin_ != nullptr;};
    void deleteEndTimeBegin() { this->endTimeBegin_ = nullptr;};
    inline string getEndTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(endTimeBegin_, "") };
    inline SearchDocRequest& setEndTimeBegin(string endTimeBegin) { DARABONBA_PTR_SET_VALUE(endTimeBegin_, endTimeBegin) };


    // endTimeEnd Field Functions 
    bool hasEndTimeEnd() const { return this->endTimeEnd_ != nullptr;};
    void deleteEndTimeEnd() { this->endTimeEnd_ = nullptr;};
    inline string getEndTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(endTimeEnd_, "") };
    inline SearchDocRequest& setEndTimeEnd(string endTimeEnd) { DARABONBA_PTR_SET_VALUE(endTimeEnd_, endTimeEnd) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline SearchDocRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // modifyTimeBegin Field Functions 
    bool hasModifyTimeBegin() const { return this->modifyTimeBegin_ != nullptr;};
    void deleteModifyTimeBegin() { this->modifyTimeBegin_ = nullptr;};
    inline string getModifyTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeBegin_, "") };
    inline SearchDocRequest& setModifyTimeBegin(string modifyTimeBegin) { DARABONBA_PTR_SET_VALUE(modifyTimeBegin_, modifyTimeBegin) };


    // modifyTimeEnd Field Functions 
    bool hasModifyTimeEnd() const { return this->modifyTimeEnd_ != nullptr;};
    void deleteModifyTimeEnd() { this->modifyTimeEnd_ = nullptr;};
    inline string getModifyTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeEnd_, "") };
    inline SearchDocRequest& setModifyTimeEnd(string modifyTimeEnd) { DARABONBA_PTR_SET_VALUE(modifyTimeEnd_, modifyTimeEnd) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string getModifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline SearchDocRequest& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchDocRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchDocRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // processStatus Field Functions 
    bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
    void deleteProcessStatus() { this->processStatus_ = nullptr;};
    inline int32_t getProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, 0) };
    inline SearchDocRequest& setProcessStatus(int32_t processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


    // searchScope Field Functions 
    bool hasSearchScope() const { return this->searchScope_ != nullptr;};
    void deleteSearchScope() { this->searchScope_ = nullptr;};
    inline int32_t getSearchScope() const { DARABONBA_PTR_GET_DEFAULT(searchScope_, 0) };
    inline SearchDocRequest& setSearchScope(int32_t searchScope) { DARABONBA_PTR_SET_VALUE(searchScope_, searchScope) };


    // startTimeBegin Field Functions 
    bool hasStartTimeBegin() const { return this->startTimeBegin_ != nullptr;};
    void deleteStartTimeBegin() { this->startTimeBegin_ = nullptr;};
    inline string getStartTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(startTimeBegin_, "") };
    inline SearchDocRequest& setStartTimeBegin(string startTimeBegin) { DARABONBA_PTR_SET_VALUE(startTimeBegin_, startTimeBegin) };


    // startTimeEnd Field Functions 
    bool hasStartTimeEnd() const { return this->startTimeEnd_ != nullptr;};
    void deleteStartTimeEnd() { this->startTimeEnd_ = nullptr;};
    inline string getStartTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(startTimeEnd_, "") };
    inline SearchDocRequest& setStartTimeEnd(string startTimeEnd) { DARABONBA_PTR_SET_VALUE(startTimeEnd_, startTimeEnd) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline SearchDocRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<int64_t> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<int64_t>) };
    inline vector<int64_t> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<int64_t>) };
    inline SearchDocRequest& setTagIds(const vector<int64_t> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline SearchDocRequest& setTagIds(vector<int64_t> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


  protected:
    shared_ptr<string> agentKey_ {};
    shared_ptr<vector<int64_t>> categoryIds_ {};
    shared_ptr<string> createTimeBegin_ {};
    shared_ptr<string> createTimeEnd_ {};
    shared_ptr<string> createUserName_ {};
    shared_ptr<string> endTimeBegin_ {};
    shared_ptr<string> endTimeEnd_ {};
    shared_ptr<string> keyword_ {};
    shared_ptr<string> modifyTimeBegin_ {};
    shared_ptr<string> modifyTimeEnd_ {};
    shared_ptr<string> modifyUserName_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int32_t> processStatus_ {};
    shared_ptr<int32_t> searchScope_ {};
    shared_ptr<string> startTimeBegin_ {};
    shared_ptr<string> startTimeEnd_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<vector<int64_t>> tagIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
