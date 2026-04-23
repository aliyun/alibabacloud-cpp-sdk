// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINVENTORYKNOWLEDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINVENTORYKNOWLEDGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchInventoryKnowledgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInventoryKnowledgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(ShowType, showType_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInventoryKnowledgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(ShowType, showType_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
    };
    SearchInventoryKnowledgeRequest() = default ;
    SearchInventoryKnowledgeRequest(const SearchInventoryKnowledgeRequest &) = default ;
    SearchInventoryKnowledgeRequest(SearchInventoryKnowledgeRequest &&) = default ;
    SearchInventoryKnowledgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInventoryKnowledgeRequest() = default ;
    SearchInventoryKnowledgeRequest& operator=(const SearchInventoryKnowledgeRequest &) = default ;
    SearchInventoryKnowledgeRequest& operator=(SearchInventoryKnowledgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->offset_ == nullptr && this->query_ == nullptr && this->showType_ == nullptr && this->size_ == nullptr && this->sortBy_ == nullptr
        && this->sortOrder_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline SearchInventoryKnowledgeRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline SearchInventoryKnowledgeRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SearchInventoryKnowledgeRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // showType Field Functions 
    bool hasShowType() const { return this->showType_ != nullptr;};
    void deleteShowType() { this->showType_ = nullptr;};
    inline string getShowType() const { DARABONBA_PTR_GET_DEFAULT(showType_, "") };
    inline SearchInventoryKnowledgeRequest& setShowType(string showType) { DARABONBA_PTR_SET_VALUE(showType_, showType) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline SearchInventoryKnowledgeRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline SearchInventoryKnowledgeRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline SearchInventoryKnowledgeRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> jobId_ {};
    shared_ptr<int32_t> offset_ {};
    shared_ptr<string> query_ {};
    shared_ptr<string> showType_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<string> sortBy_ {};
    shared_ptr<string> sortOrder_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
