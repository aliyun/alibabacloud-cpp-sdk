// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHFAQREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHFAQREQUEST_HPP_
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
  class SearchFaqRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchFaqRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(SearchScope, searchScope_);
      DARABONBA_PTR_TO_JSON(StartTimeBegin, startTimeBegin_);
      DARABONBA_PTR_TO_JSON(StartTimeEnd, startTimeEnd_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, SearchFaqRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(SearchScope, searchScope_);
      DARABONBA_PTR_FROM_JSON(StartTimeBegin, startTimeBegin_);
      DARABONBA_PTR_FROM_JSON(StartTimeEnd, startTimeEnd_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    SearchFaqRequest() = default ;
    SearchFaqRequest(const SearchFaqRequest &) = default ;
    SearchFaqRequest(SearchFaqRequest &&) = default ;
    SearchFaqRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchFaqRequest() = default ;
    SearchFaqRequest& operator=(const SearchFaqRequest &) = default ;
    SearchFaqRequest& operator=(SearchFaqRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->categoryIds_ == nullptr && return this->createTimeBegin_ == nullptr && return this->createTimeEnd_ == nullptr && return this->createUserName_ == nullptr && return this->endTimeBegin_ == nullptr
        && return this->endTimeEnd_ == nullptr && return this->keyword_ == nullptr && return this->modifyTimeBegin_ == nullptr && return this->modifyTimeEnd_ == nullptr && return this->modifyUserName_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->searchScope_ == nullptr && return this->startTimeBegin_ == nullptr && return this->startTimeEnd_ == nullptr
        && return this->status_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SearchFaqRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // categoryIds Field Functions 
    bool hasCategoryIds() const { return this->categoryIds_ != nullptr;};
    void deleteCategoryIds() { this->categoryIds_ = nullptr;};
    inline const vector<int64_t> & categoryIds() const { DARABONBA_PTR_GET_CONST(categoryIds_, vector<int64_t>) };
    inline vector<int64_t> categoryIds() { DARABONBA_PTR_GET(categoryIds_, vector<int64_t>) };
    inline SearchFaqRequest& setCategoryIds(const vector<int64_t> & categoryIds) { DARABONBA_PTR_SET_VALUE(categoryIds_, categoryIds) };
    inline SearchFaqRequest& setCategoryIds(vector<int64_t> && categoryIds) { DARABONBA_PTR_SET_RVALUE(categoryIds_, categoryIds) };


    // createTimeBegin Field Functions 
    bool hasCreateTimeBegin() const { return this->createTimeBegin_ != nullptr;};
    void deleteCreateTimeBegin() { this->createTimeBegin_ = nullptr;};
    inline string createTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(createTimeBegin_, "") };
    inline SearchFaqRequest& setCreateTimeBegin(string createTimeBegin) { DARABONBA_PTR_SET_VALUE(createTimeBegin_, createTimeBegin) };


    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline string createTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, "") };
    inline SearchFaqRequest& setCreateTimeEnd(string createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline SearchFaqRequest& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // endTimeBegin Field Functions 
    bool hasEndTimeBegin() const { return this->endTimeBegin_ != nullptr;};
    void deleteEndTimeBegin() { this->endTimeBegin_ = nullptr;};
    inline string endTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(endTimeBegin_, "") };
    inline SearchFaqRequest& setEndTimeBegin(string endTimeBegin) { DARABONBA_PTR_SET_VALUE(endTimeBegin_, endTimeBegin) };


    // endTimeEnd Field Functions 
    bool hasEndTimeEnd() const { return this->endTimeEnd_ != nullptr;};
    void deleteEndTimeEnd() { this->endTimeEnd_ = nullptr;};
    inline string endTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(endTimeEnd_, "") };
    inline SearchFaqRequest& setEndTimeEnd(string endTimeEnd) { DARABONBA_PTR_SET_VALUE(endTimeEnd_, endTimeEnd) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline SearchFaqRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // modifyTimeBegin Field Functions 
    bool hasModifyTimeBegin() const { return this->modifyTimeBegin_ != nullptr;};
    void deleteModifyTimeBegin() { this->modifyTimeBegin_ = nullptr;};
    inline string modifyTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeBegin_, "") };
    inline SearchFaqRequest& setModifyTimeBegin(string modifyTimeBegin) { DARABONBA_PTR_SET_VALUE(modifyTimeBegin_, modifyTimeBegin) };


    // modifyTimeEnd Field Functions 
    bool hasModifyTimeEnd() const { return this->modifyTimeEnd_ != nullptr;};
    void deleteModifyTimeEnd() { this->modifyTimeEnd_ = nullptr;};
    inline string modifyTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeEnd_, "") };
    inline SearchFaqRequest& setModifyTimeEnd(string modifyTimeEnd) { DARABONBA_PTR_SET_VALUE(modifyTimeEnd_, modifyTimeEnd) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string modifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline SearchFaqRequest& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchFaqRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchFaqRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchScope Field Functions 
    bool hasSearchScope() const { return this->searchScope_ != nullptr;};
    void deleteSearchScope() { this->searchScope_ = nullptr;};
    inline int32_t searchScope() const { DARABONBA_PTR_GET_DEFAULT(searchScope_, 0) };
    inline SearchFaqRequest& setSearchScope(int32_t searchScope) { DARABONBA_PTR_SET_VALUE(searchScope_, searchScope) };


    // startTimeBegin Field Functions 
    bool hasStartTimeBegin() const { return this->startTimeBegin_ != nullptr;};
    void deleteStartTimeBegin() { this->startTimeBegin_ = nullptr;};
    inline string startTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(startTimeBegin_, "") };
    inline SearchFaqRequest& setStartTimeBegin(string startTimeBegin) { DARABONBA_PTR_SET_VALUE(startTimeBegin_, startTimeBegin) };


    // startTimeEnd Field Functions 
    bool hasStartTimeEnd() const { return this->startTimeEnd_ != nullptr;};
    void deleteStartTimeEnd() { this->startTimeEnd_ = nullptr;};
    inline string startTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(startTimeEnd_, "") };
    inline SearchFaqRequest& setStartTimeEnd(string startTimeEnd) { DARABONBA_PTR_SET_VALUE(startTimeEnd_, startTimeEnd) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline SearchFaqRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<vector<int64_t>> categoryIds_ = nullptr;
    std::shared_ptr<string> createTimeBegin_ = nullptr;
    std::shared_ptr<string> createTimeEnd_ = nullptr;
    std::shared_ptr<string> createUserName_ = nullptr;
    std::shared_ptr<string> endTimeBegin_ = nullptr;
    std::shared_ptr<string> endTimeEnd_ = nullptr;
    std::shared_ptr<string> keyword_ = nullptr;
    std::shared_ptr<string> modifyTimeBegin_ = nullptr;
    std::shared_ptr<string> modifyTimeEnd_ = nullptr;
    std::shared_ptr<string> modifyUserName_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> searchScope_ = nullptr;
    std::shared_ptr<string> startTimeBegin_ = nullptr;
    std::shared_ptr<string> startTimeEnd_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
