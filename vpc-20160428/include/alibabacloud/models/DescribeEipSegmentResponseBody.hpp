// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPSEGMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPSEGMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEipSegmentResponseBodyEipSegments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEipSegmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipSegmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EipSegments, eipSegments_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipSegmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EipSegments, eipSegments_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEipSegmentResponseBody() = default ;
    DescribeEipSegmentResponseBody(const DescribeEipSegmentResponseBody &) = default ;
    DescribeEipSegmentResponseBody(DescribeEipSegmentResponseBody &&) = default ;
    DescribeEipSegmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipSegmentResponseBody() = default ;
    DescribeEipSegmentResponseBody& operator=(const DescribeEipSegmentResponseBody &) = default ;
    DescribeEipSegmentResponseBody& operator=(DescribeEipSegmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eipSegments_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // eipSegments Field Functions 
    bool hasEipSegments() const { return this->eipSegments_ != nullptr;};
    void deleteEipSegments() { this->eipSegments_ = nullptr;};
    inline const DescribeEipSegmentResponseBodyEipSegments & eipSegments() const { DARABONBA_PTR_GET_CONST(eipSegments_, DescribeEipSegmentResponseBodyEipSegments) };
    inline DescribeEipSegmentResponseBodyEipSegments eipSegments() { DARABONBA_PTR_GET(eipSegments_, DescribeEipSegmentResponseBodyEipSegments) };
    inline DescribeEipSegmentResponseBody& setEipSegments(const DescribeEipSegmentResponseBodyEipSegments & eipSegments) { DARABONBA_PTR_SET_VALUE(eipSegments_, eipSegments) };
    inline DescribeEipSegmentResponseBody& setEipSegments(DescribeEipSegmentResponseBodyEipSegments && eipSegments) { DARABONBA_PTR_SET_RVALUE(eipSegments_, eipSegments) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEipSegmentResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEipSegmentResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEipSegmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEipSegmentResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the contiguous EIP group.
    std::shared_ptr<DescribeEipSegmentResponseBodyEipSegments> eipSegments_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
