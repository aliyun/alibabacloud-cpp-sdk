// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTECONFLICTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTECONFLICTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRouteConflictResponseBodyRouteConflicts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeRouteConflictResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteConflictResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteConflicts, routeConflicts_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteConflictResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteConflicts, routeConflicts_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRouteConflictResponseBody() = default ;
    DescribeRouteConflictResponseBody(const DescribeRouteConflictResponseBody &) = default ;
    DescribeRouteConflictResponseBody(DescribeRouteConflictResponseBody &&) = default ;
    DescribeRouteConflictResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteConflictResponseBody() = default ;
    DescribeRouteConflictResponseBody& operator=(const DescribeRouteConflictResponseBody &) = default ;
    DescribeRouteConflictResponseBody& operator=(DescribeRouteConflictResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->routeConflicts_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRouteConflictResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRouteConflictResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouteConflictResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeConflicts Field Functions 
    bool hasRouteConflicts() const { return this->routeConflicts_ != nullptr;};
    void deleteRouteConflicts() { this->routeConflicts_ = nullptr;};
    inline const DescribeRouteConflictResponseBodyRouteConflicts & routeConflicts() const { DARABONBA_PTR_GET_CONST(routeConflicts_, DescribeRouteConflictResponseBodyRouteConflicts) };
    inline DescribeRouteConflictResponseBodyRouteConflicts routeConflicts() { DARABONBA_PTR_GET(routeConflicts_, DescribeRouteConflictResponseBodyRouteConflicts) };
    inline DescribeRouteConflictResponseBody& setRouteConflicts(const DescribeRouteConflictResponseBodyRouteConflicts & routeConflicts) { DARABONBA_PTR_SET_VALUE(routeConflicts_, routeConflicts) };
    inline DescribeRouteConflictResponseBody& setRouteConflicts(DescribeRouteConflictResponseBodyRouteConflicts && routeConflicts) { DARABONBA_PTR_SET_RVALUE(routeConflicts_, routeConflicts) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRouteConflictResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // A list of overlapping routes.
    std::shared_ptr<DescribeRouteConflictResponseBodyRouteConflicts> routeConflicts_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
