// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTORSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListExecutorsRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListExecutorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListExecutorsRequest() = default ;
    ListExecutorsRequest(const ListExecutorsRequest &) = default ;
    ListExecutorsRequest(ListExecutorsRequest &&) = default ;
    ListExecutorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorsRequest() = default ;
    ListExecutorsRequest& operator=(const ListExecutorsRequest &) = default ;
    ListExecutorsRequest& operator=(ListExecutorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const ListExecutorsRequestFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, ListExecutorsRequestFilter) };
    inline ListExecutorsRequestFilter filter() { DARABONBA_PTR_GET(filter_, ListExecutorsRequestFilter) };
    inline ListExecutorsRequest& setFilter(const ListExecutorsRequestFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListExecutorsRequest& setFilter(ListExecutorsRequestFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListExecutorsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListExecutorsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<ListExecutorsRequestFilter> filter_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
