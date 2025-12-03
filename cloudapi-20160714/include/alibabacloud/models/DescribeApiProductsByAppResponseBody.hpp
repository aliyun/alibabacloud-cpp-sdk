// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIPRODUCTSBYAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIPRODUCTSBYAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApiProductsByAppResponseBodyApiProductInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiProductsByAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiProductsByAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiProductInfoList, apiProductInfoList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiProductsByAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiProductInfoList, apiProductInfoList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApiProductsByAppResponseBody() = default ;
    DescribeApiProductsByAppResponseBody(const DescribeApiProductsByAppResponseBody &) = default ;
    DescribeApiProductsByAppResponseBody(DescribeApiProductsByAppResponseBody &&) = default ;
    DescribeApiProductsByAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiProductsByAppResponseBody() = default ;
    DescribeApiProductsByAppResponseBody& operator=(const DescribeApiProductsByAppResponseBody &) = default ;
    DescribeApiProductsByAppResponseBody& operator=(DescribeApiProductsByAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiProductInfoList_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // apiProductInfoList Field Functions 
    bool hasApiProductInfoList() const { return this->apiProductInfoList_ != nullptr;};
    void deleteApiProductInfoList() { this->apiProductInfoList_ = nullptr;};
    inline const DescribeApiProductsByAppResponseBodyApiProductInfoList & apiProductInfoList() const { DARABONBA_PTR_GET_CONST(apiProductInfoList_, DescribeApiProductsByAppResponseBodyApiProductInfoList) };
    inline DescribeApiProductsByAppResponseBodyApiProductInfoList apiProductInfoList() { DARABONBA_PTR_GET(apiProductInfoList_, DescribeApiProductsByAppResponseBodyApiProductInfoList) };
    inline DescribeApiProductsByAppResponseBody& setApiProductInfoList(const DescribeApiProductsByAppResponseBodyApiProductInfoList & apiProductInfoList) { DARABONBA_PTR_SET_VALUE(apiProductInfoList_, apiProductInfoList) };
    inline DescribeApiProductsByAppResponseBody& setApiProductInfoList(DescribeApiProductsByAppResponseBodyApiProductInfoList && apiProductInfoList) { DARABONBA_PTR_SET_RVALUE(apiProductInfoList_, apiProductInfoList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApiProductsByAppResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApiProductsByAppResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiProductsByAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApiProductsByAppResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about API products.
    std::shared_ptr<DescribeApiProductsByAppResponseBodyApiProductInfoList> apiProductInfoList_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
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
