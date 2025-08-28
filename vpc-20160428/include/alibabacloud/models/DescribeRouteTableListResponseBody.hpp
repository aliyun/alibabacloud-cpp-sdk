// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRouteTableListResponseBodyRouterTableList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteTableListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTableListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouterTableList, routerTableList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTableListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouterTableList, routerTableList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRouteTableListResponseBody() = default ;
    DescribeRouteTableListResponseBody(const DescribeRouteTableListResponseBody &) = default ;
    DescribeRouteTableListResponseBody(DescribeRouteTableListResponseBody &&) = default ;
    DescribeRouteTableListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTableListResponseBody() = default ;
    DescribeRouteTableListResponseBody& operator=(const DescribeRouteTableListResponseBody &) = default ;
    DescribeRouteTableListResponseBody& operator=(DescribeRouteTableListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->routerTableList_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRouteTableListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRouteTableListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouteTableListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routerTableList Field Functions 
    bool hasRouterTableList() const { return this->routerTableList_ != nullptr;};
    void deleteRouterTableList() { this->routerTableList_ = nullptr;};
    inline const DescribeRouteTableListResponseBodyRouterTableList & routerTableList() const { DARABONBA_PTR_GET_CONST(routerTableList_, DescribeRouteTableListResponseBodyRouterTableList) };
    inline DescribeRouteTableListResponseBodyRouterTableList routerTableList() { DARABONBA_PTR_GET(routerTableList_, DescribeRouteTableListResponseBodyRouterTableList) };
    inline DescribeRouteTableListResponseBody& setRouterTableList(const DescribeRouteTableListResponseBodyRouterTableList & routerTableList) { DARABONBA_PTR_SET_VALUE(routerTableList_, routerTableList) };
    inline DescribeRouteTableListResponseBody& setRouterTableList(DescribeRouteTableListResponseBodyRouterTableList && routerTableList) { DARABONBA_PTR_SET_RVALUE(routerTableList_, routerTableList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRouteTableListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The detailed information about the route tables.
    std::shared_ptr<DescribeRouteTableListResponseBodyRouterTableList> routerTableList_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
