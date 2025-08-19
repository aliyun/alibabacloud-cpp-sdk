// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPECREVIEWTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSPECREVIEWTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class ListSpecReviewTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSpecReviewTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListSpecReviewTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListSpecReviewTasksRequest() = default ;
    ListSpecReviewTasksRequest(const ListSpecReviewTasksRequest &) = default ;
    ListSpecReviewTasksRequest(ListSpecReviewTasksRequest &&) = default ;
    ListSpecReviewTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSpecReviewTasksRequest() = default ;
    ListSpecReviewTasksRequest& operator=(const ListSpecReviewTasksRequest &) = default ;
    ListSpecReviewTasksRequest& operator=(ListSpecReviewTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->page_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->size_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListSpecReviewTasksRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSpecReviewTasksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSpecReviewTasksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListSpecReviewTasksRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSpecReviewTasksRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListSpecReviewTasksRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
