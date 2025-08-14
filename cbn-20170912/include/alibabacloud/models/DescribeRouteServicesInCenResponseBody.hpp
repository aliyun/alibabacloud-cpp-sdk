// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTESERVICESINCENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTESERVICESINCENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRouteServicesInCenResponseBodyRouteServiceEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeRouteServicesInCenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteServicesInCenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteServiceEntries, routeServiceEntries_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteServicesInCenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteServiceEntries, routeServiceEntries_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRouteServicesInCenResponseBody() = default ;
    DescribeRouteServicesInCenResponseBody(const DescribeRouteServicesInCenResponseBody &) = default ;
    DescribeRouteServicesInCenResponseBody(DescribeRouteServicesInCenResponseBody &&) = default ;
    DescribeRouteServicesInCenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteServicesInCenResponseBody() = default ;
    DescribeRouteServicesInCenResponseBody& operator=(const DescribeRouteServicesInCenResponseBody &) = default ;
    DescribeRouteServicesInCenResponseBody& operator=(DescribeRouteServicesInCenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->routeServiceEntries_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRouteServicesInCenResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRouteServicesInCenResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouteServicesInCenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeServiceEntries Field Functions 
    bool hasRouteServiceEntries() const { return this->routeServiceEntries_ != nullptr;};
    void deleteRouteServiceEntries() { this->routeServiceEntries_ = nullptr;};
    inline const DescribeRouteServicesInCenResponseBodyRouteServiceEntries & routeServiceEntries() const { DARABONBA_PTR_GET_CONST(routeServiceEntries_, DescribeRouteServicesInCenResponseBodyRouteServiceEntries) };
    inline DescribeRouteServicesInCenResponseBodyRouteServiceEntries routeServiceEntries() { DARABONBA_PTR_GET(routeServiceEntries_, DescribeRouteServicesInCenResponseBodyRouteServiceEntries) };
    inline DescribeRouteServicesInCenResponseBody& setRouteServiceEntries(const DescribeRouteServicesInCenResponseBodyRouteServiceEntries & routeServiceEntries) { DARABONBA_PTR_SET_VALUE(routeServiceEntries_, routeServiceEntries) };
    inline DescribeRouteServicesInCenResponseBody& setRouteServiceEntries(DescribeRouteServicesInCenResponseBodyRouteServiceEntries && routeServiceEntries) { DARABONBA_PTR_SET_RVALUE(routeServiceEntries_, routeServiceEntries) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRouteServicesInCenResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the cloud services.
    std::shared_ptr<DescribeRouteServicesInCenResponseBodyRouteServiceEntries> routeServiceEntries_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
