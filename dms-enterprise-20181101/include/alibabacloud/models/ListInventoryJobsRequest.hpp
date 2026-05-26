// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINVENTORYJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINVENTORYJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListInventoryJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInventoryJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInventoryJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListInventoryJobsRequest() = default ;
    ListInventoryJobsRequest(const ListInventoryJobsRequest &) = default ;
    ListInventoryJobsRequest(ListInventoryJobsRequest &&) = default ;
    ListInventoryJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInventoryJobsRequest() = default ;
    ListInventoryJobsRequest& operator=(const ListInventoryJobsRequest &) = default ;
    ListInventoryJobsRequest& operator=(ListInventoryJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->offset_ == nullptr
        && this->query_ == nullptr && this->size_ == nullptr && this->sortBy_ == nullptr && this->sortOrder_ == nullptr && this->status_ == nullptr; };
    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline ListInventoryJobsRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListInventoryJobsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListInventoryJobsRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListInventoryJobsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListInventoryJobsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListInventoryJobsRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<int32_t> offset_ {};
    shared_ptr<string> query_ {};
    shared_ptr<int32_t> size_ {};
    shared_ptr<string> sortBy_ {};
    shared_ptr<string> sortOrder_ {};
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
