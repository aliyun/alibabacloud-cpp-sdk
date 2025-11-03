// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSFORPHYSICALCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSFORPHYSICALCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VirtualBorderRouterForPhysicalConnectionSet, virtualBorderRouterForPhysicalConnectionSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VirtualBorderRouterForPhysicalConnectionSet, virtualBorderRouterForPhysicalConnectionSet_);
    };
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody() = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody(const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody &) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody(DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody &&) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody() = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& operator=(const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody &) = default ;
    DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& operator=(DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->virtualBorderRouterForPhysicalConnectionSet_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // virtualBorderRouterForPhysicalConnectionSet Field Functions 
    bool hasVirtualBorderRouterForPhysicalConnectionSet() const { return this->virtualBorderRouterForPhysicalConnectionSet_ != nullptr;};
    void deleteVirtualBorderRouterForPhysicalConnectionSet() { this->virtualBorderRouterForPhysicalConnectionSet_ = nullptr;};
    inline const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet & virtualBorderRouterForPhysicalConnectionSet() const { DARABONBA_PTR_GET_CONST(virtualBorderRouterForPhysicalConnectionSet_, DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet virtualBorderRouterForPhysicalConnectionSet() { DARABONBA_PTR_GET(virtualBorderRouterForPhysicalConnectionSet_, DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setVirtualBorderRouterForPhysicalConnectionSet(const DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet & virtualBorderRouterForPhysicalConnectionSet) { DARABONBA_PTR_SET_VALUE(virtualBorderRouterForPhysicalConnectionSet_, virtualBorderRouterForPhysicalConnectionSet) };
    inline DescribeVirtualBorderRoutersForPhysicalConnectionResponseBody& setVirtualBorderRouterForPhysicalConnectionSet(DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet && virtualBorderRouterForPhysicalConnectionSet) { DARABONBA_PTR_SET_RVALUE(virtualBorderRouterForPhysicalConnectionSet_, virtualBorderRouterForPhysicalConnectionSet) };


  protected:
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Maximum value: **50**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The information about VBRs.
    std::shared_ptr<DescribeVirtualBorderRoutersForPhysicalConnectionResponseBodyVirtualBorderRouterForPhysicalConnectionSet> virtualBorderRouterForPhysicalConnectionSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
