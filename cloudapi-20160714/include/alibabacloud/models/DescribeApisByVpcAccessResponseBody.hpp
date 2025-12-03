// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISBYVPCACCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISBYVPCACCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisByVpcAccessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisByVpcAccessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiVpcAccessInfos, apiVpcAccessInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisByVpcAccessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiVpcAccessInfos, apiVpcAccessInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisByVpcAccessResponseBody() = default ;
    DescribeApisByVpcAccessResponseBody(const DescribeApisByVpcAccessResponseBody &) = default ;
    DescribeApisByVpcAccessResponseBody(DescribeApisByVpcAccessResponseBody &&) = default ;
    DescribeApisByVpcAccessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisByVpcAccessResponseBody() = default ;
    DescribeApisByVpcAccessResponseBody& operator=(const DescribeApisByVpcAccessResponseBody &) = default ;
    DescribeApisByVpcAccessResponseBody& operator=(DescribeApisByVpcAccessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiVpcAccessInfos_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // apiVpcAccessInfos Field Functions 
    bool hasApiVpcAccessInfos() const { return this->apiVpcAccessInfos_ != nullptr;};
    void deleteApiVpcAccessInfos() { this->apiVpcAccessInfos_ = nullptr;};
    inline const DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos & apiVpcAccessInfos() const { DARABONBA_PTR_GET_CONST(apiVpcAccessInfos_, DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos) };
    inline DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos apiVpcAccessInfos() { DARABONBA_PTR_GET(apiVpcAccessInfos_, DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos) };
    inline DescribeApisByVpcAccessResponseBody& setApiVpcAccessInfos(const DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos & apiVpcAccessInfos) { DARABONBA_PTR_SET_VALUE(apiVpcAccessInfos_, apiVpcAccessInfos) };
    inline DescribeApisByVpcAccessResponseBody& setApiVpcAccessInfos(DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos && apiVpcAccessInfos) { DARABONBA_PTR_SET_RVALUE(apiVpcAccessInfos_, apiVpcAccessInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApisByVpcAccessResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApisByVpcAccessResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisByVpcAccessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApisByVpcAccessResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned API information. It is an array consisting of ApiInfo data.
    std::shared_ptr<DescribeApisByVpcAccessResponseBodyApiVpcAccessInfos> apiVpcAccessInfos_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
