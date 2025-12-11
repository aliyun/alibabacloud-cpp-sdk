// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTOREVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTOREVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListExecutorEventsRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListExecutorEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListExecutorEventsRequest() = default ;
    ListExecutorEventsRequest(const ListExecutorEventsRequest &) = default ;
    ListExecutorEventsRequest(ListExecutorEventsRequest &&) = default ;
    ListExecutorEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorEventsRequest() = default ;
    ListExecutorEventsRequest& operator=(const ListExecutorEventsRequest &) = default ;
    ListExecutorEventsRequest& operator=(ListExecutorEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const ListExecutorEventsRequestFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, ListExecutorEventsRequestFilter) };
    inline ListExecutorEventsRequestFilter filter() { DARABONBA_PTR_GET(filter_, ListExecutorEventsRequestFilter) };
    inline ListExecutorEventsRequest& setFilter(const ListExecutorEventsRequestFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListExecutorEventsRequest& setFilter(ListExecutorEventsRequestFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListExecutorEventsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListExecutorEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<ListExecutorEventsRequestFilter> filter_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
