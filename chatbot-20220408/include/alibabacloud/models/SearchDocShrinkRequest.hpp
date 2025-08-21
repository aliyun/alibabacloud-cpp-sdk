// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDOCSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDOCSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class SearchDocShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDocShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(CategoryIds, categoryIdsShrink_);
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
      DARABONBA_PTR_TO_JSON(TagIds, tagIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDocShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(CategoryIds, categoryIdsShrink_);
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
      DARABONBA_PTR_FROM_JSON(TagIds, tagIdsShrink_);
    };
    SearchDocShrinkRequest() = default ;
    SearchDocShrinkRequest(const SearchDocShrinkRequest &) = default ;
    SearchDocShrinkRequest(SearchDocShrinkRequest &&) = default ;
    SearchDocShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDocShrinkRequest() = default ;
    SearchDocShrinkRequest& operator=(const SearchDocShrinkRequest &) = default ;
    SearchDocShrinkRequest& operator=(SearchDocShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->categoryIdsShrink_ != nullptr && this->createTimeBegin_ != nullptr && this->createTimeEnd_ != nullptr && this->createUserName_ != nullptr && this->endTimeBegin_ != nullptr
        && this->endTimeEnd_ != nullptr && this->keyword_ != nullptr && this->modifyTimeBegin_ != nullptr && this->modifyTimeEnd_ != nullptr && this->modifyUserName_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->processStatus_ != nullptr && this->searchScope_ != nullptr && this->startTimeBegin_ != nullptr
        && this->startTimeEnd_ != nullptr && this->status_ != nullptr && this->tagIdsShrink_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SearchDocShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // categoryIdsShrink Field Functions 
    bool hasCategoryIdsShrink() const { return this->categoryIdsShrink_ != nullptr;};
    void deleteCategoryIdsShrink() { this->categoryIdsShrink_ = nullptr;};
    inline string categoryIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(categoryIdsShrink_, "") };
    inline SearchDocShrinkRequest& setCategoryIdsShrink(string categoryIdsShrink) { DARABONBA_PTR_SET_VALUE(categoryIdsShrink_, categoryIdsShrink) };


    // createTimeBegin Field Functions 
    bool hasCreateTimeBegin() const { return this->createTimeBegin_ != nullptr;};
    void deleteCreateTimeBegin() { this->createTimeBegin_ = nullptr;};
    inline string createTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(createTimeBegin_, "") };
    inline SearchDocShrinkRequest& setCreateTimeBegin(string createTimeBegin) { DARABONBA_PTR_SET_VALUE(createTimeBegin_, createTimeBegin) };


    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline string createTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, "") };
    inline SearchDocShrinkRequest& setCreateTimeEnd(string createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createUserName Field Functions 
    bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
    void deleteCreateUserName() { this->createUserName_ = nullptr;};
    inline string createUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
    inline SearchDocShrinkRequest& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


    // endTimeBegin Field Functions 
    bool hasEndTimeBegin() const { return this->endTimeBegin_ != nullptr;};
    void deleteEndTimeBegin() { this->endTimeBegin_ = nullptr;};
    inline string endTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(endTimeBegin_, "") };
    inline SearchDocShrinkRequest& setEndTimeBegin(string endTimeBegin) { DARABONBA_PTR_SET_VALUE(endTimeBegin_, endTimeBegin) };


    // endTimeEnd Field Functions 
    bool hasEndTimeEnd() const { return this->endTimeEnd_ != nullptr;};
    void deleteEndTimeEnd() { this->endTimeEnd_ = nullptr;};
    inline string endTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(endTimeEnd_, "") };
    inline SearchDocShrinkRequest& setEndTimeEnd(string endTimeEnd) { DARABONBA_PTR_SET_VALUE(endTimeEnd_, endTimeEnd) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline SearchDocShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // modifyTimeBegin Field Functions 
    bool hasModifyTimeBegin() const { return this->modifyTimeBegin_ != nullptr;};
    void deleteModifyTimeBegin() { this->modifyTimeBegin_ = nullptr;};
    inline string modifyTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeBegin_, "") };
    inline SearchDocShrinkRequest& setModifyTimeBegin(string modifyTimeBegin) { DARABONBA_PTR_SET_VALUE(modifyTimeBegin_, modifyTimeBegin) };


    // modifyTimeEnd Field Functions 
    bool hasModifyTimeEnd() const { return this->modifyTimeEnd_ != nullptr;};
    void deleteModifyTimeEnd() { this->modifyTimeEnd_ = nullptr;};
    inline string modifyTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(modifyTimeEnd_, "") };
    inline SearchDocShrinkRequest& setModifyTimeEnd(string modifyTimeEnd) { DARABONBA_PTR_SET_VALUE(modifyTimeEnd_, modifyTimeEnd) };


    // modifyUserName Field Functions 
    bool hasModifyUserName() const { return this->modifyUserName_ != nullptr;};
    void deleteModifyUserName() { this->modifyUserName_ = nullptr;};
    inline string modifyUserName() const { DARABONBA_PTR_GET_DEFAULT(modifyUserName_, "") };
    inline SearchDocShrinkRequest& setModifyUserName(string modifyUserName) { DARABONBA_PTR_SET_VALUE(modifyUserName_, modifyUserName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchDocShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchDocShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // processStatus Field Functions 
    bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
    void deleteProcessStatus() { this->processStatus_ = nullptr;};
    inline int32_t processStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, 0) };
    inline SearchDocShrinkRequest& setProcessStatus(int32_t processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


    // searchScope Field Functions 
    bool hasSearchScope() const { return this->searchScope_ != nullptr;};
    void deleteSearchScope() { this->searchScope_ = nullptr;};
    inline int32_t searchScope() const { DARABONBA_PTR_GET_DEFAULT(searchScope_, 0) };
    inline SearchDocShrinkRequest& setSearchScope(int32_t searchScope) { DARABONBA_PTR_SET_VALUE(searchScope_, searchScope) };


    // startTimeBegin Field Functions 
    bool hasStartTimeBegin() const { return this->startTimeBegin_ != nullptr;};
    void deleteStartTimeBegin() { this->startTimeBegin_ = nullptr;};
    inline string startTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(startTimeBegin_, "") };
    inline SearchDocShrinkRequest& setStartTimeBegin(string startTimeBegin) { DARABONBA_PTR_SET_VALUE(startTimeBegin_, startTimeBegin) };


    // startTimeEnd Field Functions 
    bool hasStartTimeEnd() const { return this->startTimeEnd_ != nullptr;};
    void deleteStartTimeEnd() { this->startTimeEnd_ = nullptr;};
    inline string startTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(startTimeEnd_, "") };
    inline SearchDocShrinkRequest& setStartTimeEnd(string startTimeEnd) { DARABONBA_PTR_SET_VALUE(startTimeEnd_, startTimeEnd) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline SearchDocShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagIdsShrink Field Functions 
    bool hasTagIdsShrink() const { return this->tagIdsShrink_ != nullptr;};
    void deleteTagIdsShrink() { this->tagIdsShrink_ = nullptr;};
    inline string tagIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagIdsShrink_, "") };
    inline SearchDocShrinkRequest& setTagIdsShrink(string tagIdsShrink) { DARABONBA_PTR_SET_VALUE(tagIdsShrink_, tagIdsShrink) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> categoryIdsShrink_ = nullptr;
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
    std::shared_ptr<int32_t> processStatus_ = nullptr;
    std::shared_ptr<int32_t> searchScope_ = nullptr;
    std::shared_ptr<string> startTimeBegin_ = nullptr;
    std::shared_ptr<string> startTimeEnd_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> tagIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
