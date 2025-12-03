// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINAPISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePluginApisResponseBodyApiSummarys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiSummarys, apiSummarys_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiSummarys, apiSummarys_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePluginApisResponseBody() = default ;
    DescribePluginApisResponseBody(const DescribePluginApisResponseBody &) = default ;
    DescribePluginApisResponseBody(DescribePluginApisResponseBody &&) = default ;
    DescribePluginApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginApisResponseBody() = default ;
    DescribePluginApisResponseBody& operator=(const DescribePluginApisResponseBody &) = default ;
    DescribePluginApisResponseBody& operator=(DescribePluginApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiSummarys_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // apiSummarys Field Functions 
    bool hasApiSummarys() const { return this->apiSummarys_ != nullptr;};
    void deleteApiSummarys() { this->apiSummarys_ = nullptr;};
    inline const DescribePluginApisResponseBodyApiSummarys & apiSummarys() const { DARABONBA_PTR_GET_CONST(apiSummarys_, DescribePluginApisResponseBodyApiSummarys) };
    inline DescribePluginApisResponseBodyApiSummarys apiSummarys() { DARABONBA_PTR_GET(apiSummarys_, DescribePluginApisResponseBodyApiSummarys) };
    inline DescribePluginApisResponseBody& setApiSummarys(const DescribePluginApisResponseBodyApiSummarys & apiSummarys) { DARABONBA_PTR_SET_VALUE(apiSummarys_, apiSummarys) };
    inline DescribePluginApisResponseBody& setApiSummarys(DescribePluginApisResponseBodyApiSummarys && apiSummarys) { DARABONBA_PTR_SET_RVALUE(apiSummarys_, apiSummarys) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePluginApisResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePluginApisResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePluginApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePluginApisResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about APIs.
    std::shared_ptr<DescribePluginApisResponseBodyApiSummarys> apiSummarys_ = nullptr;
    // The page number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
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
