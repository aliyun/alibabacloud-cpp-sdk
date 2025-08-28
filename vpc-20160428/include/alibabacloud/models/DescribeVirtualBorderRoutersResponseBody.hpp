// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALBORDERROUTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVirtualBorderRoutersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualBorderRoutersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VirtualBorderRouterSet, virtualBorderRouterSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualBorderRoutersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VirtualBorderRouterSet, virtualBorderRouterSet_);
    };
    DescribeVirtualBorderRoutersResponseBody() = default ;
    DescribeVirtualBorderRoutersResponseBody(const DescribeVirtualBorderRoutersResponseBody &) = default ;
    DescribeVirtualBorderRoutersResponseBody(DescribeVirtualBorderRoutersResponseBody &&) = default ;
    DescribeVirtualBorderRoutersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualBorderRoutersResponseBody() = default ;
    DescribeVirtualBorderRoutersResponseBody& operator=(const DescribeVirtualBorderRoutersResponseBody &) = default ;
    DescribeVirtualBorderRoutersResponseBody& operator=(DescribeVirtualBorderRoutersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->virtualBorderRouterSet_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVirtualBorderRoutersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVirtualBorderRoutersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVirtualBorderRoutersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVirtualBorderRoutersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // virtualBorderRouterSet Field Functions 
    bool hasVirtualBorderRouterSet() const { return this->virtualBorderRouterSet_ != nullptr;};
    void deleteVirtualBorderRouterSet() { this->virtualBorderRouterSet_ = nullptr;};
    inline const DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet & virtualBorderRouterSet() const { DARABONBA_PTR_GET_CONST(virtualBorderRouterSet_, DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet) };
    inline DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet virtualBorderRouterSet() { DARABONBA_PTR_GET(virtualBorderRouterSet_, DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet) };
    inline DescribeVirtualBorderRoutersResponseBody& setVirtualBorderRouterSet(const DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet & virtualBorderRouterSet) { DARABONBA_PTR_SET_VALUE(virtualBorderRouterSet_, virtualBorderRouterSet) };
    inline DescribeVirtualBorderRoutersResponseBody& setVirtualBorderRouterSet(DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet && virtualBorderRouterSet) { DARABONBA_PTR_SET_RVALUE(virtualBorderRouterSet_, virtualBorderRouterSet) };


  protected:
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: **1 to 50**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The information about the VBR.
    std::shared_ptr<DescribeVirtualBorderRoutersResponseBodyVirtualBorderRouterSet> virtualBorderRouterSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
