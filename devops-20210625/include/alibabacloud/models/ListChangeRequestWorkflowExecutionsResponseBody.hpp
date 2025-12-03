// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANGEREQUESTWORKFLOWEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANGEREQUESTWORKFLOWEXECUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListChangeRequestWorkflowExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChangeRequestWorkflowExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(current, current_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(pages, pages_);
      DARABONBA_PTR_TO_JSON(records, records_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListChangeRequestWorkflowExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(current, current_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(pages, pages_);
      DARABONBA_PTR_FROM_JSON(records, records_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListChangeRequestWorkflowExecutionsResponseBody() = default ;
    ListChangeRequestWorkflowExecutionsResponseBody(const ListChangeRequestWorkflowExecutionsResponseBody &) = default ;
    ListChangeRequestWorkflowExecutionsResponseBody(ListChangeRequestWorkflowExecutionsResponseBody &&) = default ;
    ListChangeRequestWorkflowExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChangeRequestWorkflowExecutionsResponseBody() = default ;
    ListChangeRequestWorkflowExecutionsResponseBody& operator=(const ListChangeRequestWorkflowExecutionsResponseBody &) = default ;
    ListChangeRequestWorkflowExecutionsResponseBody& operator=(ListChangeRequestWorkflowExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->current_ == nullptr
        && return this->pageSize_ == nullptr && return this->pages_ == nullptr && return this->records_ == nullptr && return this->total_ == nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int64_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0L) };
    inline ListChangeRequestWorkflowExecutionsResponseBody& setCurrent(int64_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListChangeRequestWorkflowExecutionsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline int64_t pages() const { DARABONBA_PTR_GET_DEFAULT(pages_, 0L) };
    inline ListChangeRequestWorkflowExecutionsResponseBody& setPages(int64_t pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Darabonba::Json> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> records() { DARABONBA_PTR_GET(records_, vector<Darabonba::Json>) };
    inline ListChangeRequestWorkflowExecutionsResponseBody& setRecords(const vector<Darabonba::Json> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ListChangeRequestWorkflowExecutionsResponseBody& setRecords(vector<Darabonba::Json> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListChangeRequestWorkflowExecutionsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int64_t> current_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> pages_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> records_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
