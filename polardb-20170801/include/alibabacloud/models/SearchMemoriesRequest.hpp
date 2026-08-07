// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEMORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEMORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class SearchMemoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMemoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(CreateTimeBegin, createTimeBegin_);
      DARABONBA_PTR_TO_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_TO_JSON(MemoryAgentId, memoryAgentId_);
      DARABONBA_PTR_TO_JSON(MemoryUserId, memoryUserId_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMemoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(CreateTimeBegin, createTimeBegin_);
      DARABONBA_PTR_FROM_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_FROM_JSON(MemoryAgentId, memoryAgentId_);
      DARABONBA_PTR_FROM_JSON(MemoryUserId, memoryUserId_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
    };
    SearchMemoriesRequest() = default ;
    SearchMemoriesRequest(const SearchMemoriesRequest &) = default ;
    SearchMemoriesRequest(SearchMemoriesRequest &&) = default ;
    SearchMemoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMemoriesRequest() = default ;
    SearchMemoriesRequest& operator=(const SearchMemoriesRequest &) = default ;
    SearchMemoriesRequest& operator=(SearchMemoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->createTimeBegin_ == nullptr && this->createTimeEnd_ == nullptr && this->memoryAgentId_ == nullptr && this->memoryUserId_ == nullptr && this->page_ == nullptr
        && this->pageSize_ == nullptr && this->query_ == nullptr && this->topK_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline SearchMemoriesRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // createTimeBegin Field Functions 
    bool hasCreateTimeBegin() const { return this->createTimeBegin_ != nullptr;};
    void deleteCreateTimeBegin() { this->createTimeBegin_ = nullptr;};
    inline string getCreateTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(createTimeBegin_, "") };
    inline SearchMemoriesRequest& setCreateTimeBegin(string createTimeBegin) { DARABONBA_PTR_SET_VALUE(createTimeBegin_, createTimeBegin) };


    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline string getCreateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, "") };
    inline SearchMemoriesRequest& setCreateTimeEnd(string createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // memoryAgentId Field Functions 
    bool hasMemoryAgentId() const { return this->memoryAgentId_ != nullptr;};
    void deleteMemoryAgentId() { this->memoryAgentId_ = nullptr;};
    inline string getMemoryAgentId() const { DARABONBA_PTR_GET_DEFAULT(memoryAgentId_, "") };
    inline SearchMemoriesRequest& setMemoryAgentId(string memoryAgentId) { DARABONBA_PTR_SET_VALUE(memoryAgentId_, memoryAgentId) };


    // memoryUserId Field Functions 
    bool hasMemoryUserId() const { return this->memoryUserId_ != nullptr;};
    void deleteMemoryUserId() { this->memoryUserId_ = nullptr;};
    inline string getMemoryUserId() const { DARABONBA_PTR_GET_DEFAULT(memoryUserId_, "") };
    inline SearchMemoriesRequest& setMemoryUserId(string memoryUserId) { DARABONBA_PTR_SET_VALUE(memoryUserId_, memoryUserId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline SearchMemoriesRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchMemoriesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SearchMemoriesRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline string getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, "") };
    inline SearchMemoriesRequest& setTopK(string topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The start time for memory creation.
    shared_ptr<string> createTimeBegin_ {};
    // The end time for memory creation.
    shared_ptr<string> createTimeEnd_ {};
    // The memory agent ID.
    shared_ptr<string> memoryAgentId_ {};
    // The memory user ID.
    // 
    // This parameter is required.
    shared_ptr<string> memoryUserId_ {};
    // The page number.
    shared_ptr<int32_t> page_ {};
    // The number of records per page.
    shared_ptr<int32_t> pageSize_ {};
    // The search query.
    shared_ptr<string> query_ {};
    // Specifies the number of top results to return.
    shared_ptr<string> topK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
