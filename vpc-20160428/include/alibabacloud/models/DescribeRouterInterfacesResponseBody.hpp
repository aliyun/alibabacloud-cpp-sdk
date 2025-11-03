// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTERINTERFACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRouterInterfacesResponseBodyRouterInterfaceSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouterInterfacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouterInterfacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouterInterfaceSet, routerInterfaceSet_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouterInterfacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouterInterfaceSet, routerInterfaceSet_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRouterInterfacesResponseBody() = default ;
    DescribeRouterInterfacesResponseBody(const DescribeRouterInterfacesResponseBody &) = default ;
    DescribeRouterInterfacesResponseBody(DescribeRouterInterfacesResponseBody &&) = default ;
    DescribeRouterInterfacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouterInterfacesResponseBody() = default ;
    DescribeRouterInterfacesResponseBody& operator=(const DescribeRouterInterfacesResponseBody &) = default ;
    DescribeRouterInterfacesResponseBody& operator=(DescribeRouterInterfacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->routerInterfaceSet_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRouterInterfacesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRouterInterfacesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouterInterfacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routerInterfaceSet Field Functions 
    bool hasRouterInterfaceSet() const { return this->routerInterfaceSet_ != nullptr;};
    void deleteRouterInterfaceSet() { this->routerInterfaceSet_ = nullptr;};
    inline const DescribeRouterInterfacesResponseBodyRouterInterfaceSet & routerInterfaceSet() const { DARABONBA_PTR_GET_CONST(routerInterfaceSet_, DescribeRouterInterfacesResponseBodyRouterInterfaceSet) };
    inline DescribeRouterInterfacesResponseBodyRouterInterfaceSet routerInterfaceSet() { DARABONBA_PTR_GET(routerInterfaceSet_, DescribeRouterInterfacesResponseBodyRouterInterfaceSet) };
    inline DescribeRouterInterfacesResponseBody& setRouterInterfaceSet(const DescribeRouterInterfacesResponseBodyRouterInterfaceSet & routerInterfaceSet) { DARABONBA_PTR_SET_VALUE(routerInterfaceSet_, routerInterfaceSet) };
    inline DescribeRouterInterfacesResponseBody& setRouterInterfaceSet(DescribeRouterInterfacesResponseBodyRouterInterfaceSet && routerInterfaceSet) { DARABONBA_PTR_SET_RVALUE(routerInterfaceSet_, routerInterfaceSet) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRouterInterfacesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Maximum value: **50**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the router interface.
    std::shared_ptr<DescribeRouterInterfacesResponseBodyRouterInterfaceSet> routerInterfaceSet_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
