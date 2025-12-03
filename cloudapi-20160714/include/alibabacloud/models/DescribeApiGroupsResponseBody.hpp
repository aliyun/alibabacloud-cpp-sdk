// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApiGroupsResponseBodyApiGroupAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiGroupAttributes, apiGroupAttributes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiGroupAttributes, apiGroupAttributes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApiGroupsResponseBody() = default ;
    DescribeApiGroupsResponseBody(const DescribeApiGroupsResponseBody &) = default ;
    DescribeApiGroupsResponseBody(DescribeApiGroupsResponseBody &&) = default ;
    DescribeApiGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiGroupsResponseBody() = default ;
    DescribeApiGroupsResponseBody& operator=(const DescribeApiGroupsResponseBody &) = default ;
    DescribeApiGroupsResponseBody& operator=(DescribeApiGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiGroupAttributes_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // apiGroupAttributes Field Functions 
    bool hasApiGroupAttributes() const { return this->apiGroupAttributes_ != nullptr;};
    void deleteApiGroupAttributes() { this->apiGroupAttributes_ = nullptr;};
    inline const DescribeApiGroupsResponseBodyApiGroupAttributes & apiGroupAttributes() const { DARABONBA_PTR_GET_CONST(apiGroupAttributes_, DescribeApiGroupsResponseBodyApiGroupAttributes) };
    inline DescribeApiGroupsResponseBodyApiGroupAttributes apiGroupAttributes() { DARABONBA_PTR_GET(apiGroupAttributes_, DescribeApiGroupsResponseBodyApiGroupAttributes) };
    inline DescribeApiGroupsResponseBody& setApiGroupAttributes(const DescribeApiGroupsResponseBodyApiGroupAttributes & apiGroupAttributes) { DARABONBA_PTR_SET_VALUE(apiGroupAttributes_, apiGroupAttributes) };
    inline DescribeApiGroupsResponseBody& setApiGroupAttributes(DescribeApiGroupsResponseBodyApiGroupAttributes && apiGroupAttributes) { DARABONBA_PTR_SET_RVALUE(apiGroupAttributes_, apiGroupAttributes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApiGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApiGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApiGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned group set.
    std::shared_ptr<DescribeApiGroupsResponseBodyApiGroupAttributes> apiGroupAttributes_ = nullptr;
    // The number of pages to return the results on.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
