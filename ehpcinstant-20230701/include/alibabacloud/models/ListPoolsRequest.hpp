// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOOLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPOOLSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPoolsRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListPoolsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPoolsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListPoolsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListPoolsRequest() = default ;
    ListPoolsRequest(const ListPoolsRequest &) = default ;
    ListPoolsRequest(ListPoolsRequest &&) = default ;
    ListPoolsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPoolsRequest() = default ;
    ListPoolsRequest& operator=(const ListPoolsRequest &) = default ;
    ListPoolsRequest& operator=(ListPoolsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const ListPoolsRequestFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, ListPoolsRequestFilter) };
    inline ListPoolsRequestFilter filter() { DARABONBA_PTR_GET(filter_, ListPoolsRequestFilter) };
    inline ListPoolsRequest& setFilter(const ListPoolsRequestFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListPoolsRequest& setFilter(ListPoolsRequestFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPoolsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPoolsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Queries the filter conditions of a resource pool.
    std::shared_ptr<ListPoolsRequestFilter> filter_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries on each page. Maximum value: 50. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
