// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIPRODUCTAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIPRODUCTAPISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApiProductApisResponseBodyApiInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiProductApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiProductApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiInfoList, apiInfoList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiProductApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiInfoList, apiInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApiProductApisResponseBody() = default ;
    DescribeApiProductApisResponseBody(const DescribeApiProductApisResponseBody &) = default ;
    DescribeApiProductApisResponseBody(DescribeApiProductApisResponseBody &&) = default ;
    DescribeApiProductApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiProductApisResponseBody() = default ;
    DescribeApiProductApisResponseBody& operator=(const DescribeApiProductApisResponseBody &) = default ;
    DescribeApiProductApisResponseBody& operator=(DescribeApiProductApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiInfoList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // apiInfoList Field Functions 
    bool hasApiInfoList() const { return this->apiInfoList_ != nullptr;};
    void deleteApiInfoList() { this->apiInfoList_ = nullptr;};
    inline const DescribeApiProductApisResponseBodyApiInfoList & apiInfoList() const { DARABONBA_PTR_GET_CONST(apiInfoList_, DescribeApiProductApisResponseBodyApiInfoList) };
    inline DescribeApiProductApisResponseBodyApiInfoList apiInfoList() { DARABONBA_PTR_GET(apiInfoList_, DescribeApiProductApisResponseBodyApiInfoList) };
    inline DescribeApiProductApisResponseBody& setApiInfoList(const DescribeApiProductApisResponseBodyApiInfoList & apiInfoList) { DARABONBA_PTR_SET_VALUE(apiInfoList_, apiInfoList) };
    inline DescribeApiProductApisResponseBody& setApiInfoList(DescribeApiProductApisResponseBodyApiInfoList && apiInfoList) { DARABONBA_PTR_SET_RVALUE(apiInfoList_, apiInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApiProductApisResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApiProductApisResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiProductApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApiProductApisResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the returned APIs.
    std::shared_ptr<DescribeApiProductApisResponseBodyApiInfoList> apiInfoList_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
