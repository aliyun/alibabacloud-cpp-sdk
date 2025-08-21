// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSROUTEENTRYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSROUTEENTRYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsRouteEntryListResponseBodyRouteEntrys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsRouteEntryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRouteEntryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntrys, routeEntrys_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRouteEntryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntrys, routeEntrys_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEnsRouteEntryListResponseBody() = default ;
    DescribeEnsRouteEntryListResponseBody(const DescribeEnsRouteEntryListResponseBody &) = default ;
    DescribeEnsRouteEntryListResponseBody(DescribeEnsRouteEntryListResponseBody &&) = default ;
    DescribeEnsRouteEntryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRouteEntryListResponseBody() = default ;
    DescribeEnsRouteEntryListResponseBody& operator=(const DescribeEnsRouteEntryListResponseBody &) = default ;
    DescribeEnsRouteEntryListResponseBody& operator=(DescribeEnsRouteEntryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->routeEntrys_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEnsRouteEntryListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEnsRouteEntryListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsRouteEntryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntrys Field Functions 
    bool hasRouteEntrys() const { return this->routeEntrys_ != nullptr;};
    void deleteRouteEntrys() { this->routeEntrys_ = nullptr;};
    inline const vector<DescribeEnsRouteEntryListResponseBodyRouteEntrys> & routeEntrys() const { DARABONBA_PTR_GET_CONST(routeEntrys_, vector<DescribeEnsRouteEntryListResponseBodyRouteEntrys>) };
    inline vector<DescribeEnsRouteEntryListResponseBodyRouteEntrys> routeEntrys() { DARABONBA_PTR_GET(routeEntrys_, vector<DescribeEnsRouteEntryListResponseBodyRouteEntrys>) };
    inline DescribeEnsRouteEntryListResponseBody& setRouteEntrys(const vector<DescribeEnsRouteEntryListResponseBodyRouteEntrys> & routeEntrys) { DARABONBA_PTR_SET_VALUE(routeEntrys_, routeEntrys) };
    inline DescribeEnsRouteEntryListResponseBody& setRouteEntrys(vector<DescribeEnsRouteEntryListResponseBodyRouteEntrys> && routeEntrys) { DARABONBA_PTR_SET_RVALUE(routeEntrys_, routeEntrys) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEnsRouteEntryListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the routes.
    std::shared_ptr<vector<DescribeEnsRouteEntryListResponseBodyRouteEntrys>> routeEntrys_ = nullptr;
    // The number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
