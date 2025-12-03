// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISBYAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISBYAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApisByAppResponseBodyAppApiRelationInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApisByAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisByAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppApiRelationInfos, appApiRelationInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisByAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppApiRelationInfos, appApiRelationInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApisByAppResponseBody() = default ;
    DescribeApisByAppResponseBody(const DescribeApisByAppResponseBody &) = default ;
    DescribeApisByAppResponseBody(DescribeApisByAppResponseBody &&) = default ;
    DescribeApisByAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisByAppResponseBody() = default ;
    DescribeApisByAppResponseBody& operator=(const DescribeApisByAppResponseBody &) = default ;
    DescribeApisByAppResponseBody& operator=(DescribeApisByAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appApiRelationInfos_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // appApiRelationInfos Field Functions 
    bool hasAppApiRelationInfos() const { return this->appApiRelationInfos_ != nullptr;};
    void deleteAppApiRelationInfos() { this->appApiRelationInfos_ = nullptr;};
    inline const DescribeApisByAppResponseBodyAppApiRelationInfos & appApiRelationInfos() const { DARABONBA_PTR_GET_CONST(appApiRelationInfos_, DescribeApisByAppResponseBodyAppApiRelationInfos) };
    inline DescribeApisByAppResponseBodyAppApiRelationInfos appApiRelationInfos() { DARABONBA_PTR_GET(appApiRelationInfos_, DescribeApisByAppResponseBodyAppApiRelationInfos) };
    inline DescribeApisByAppResponseBody& setAppApiRelationInfos(const DescribeApisByAppResponseBodyAppApiRelationInfos & appApiRelationInfos) { DARABONBA_PTR_SET_VALUE(appApiRelationInfos_, appApiRelationInfos) };
    inline DescribeApisByAppResponseBody& setAppApiRelationInfos(DescribeApisByAppResponseBodyAppApiRelationInfos && appApiRelationInfos) { DARABONBA_PTR_SET_RVALUE(appApiRelationInfos_, appApiRelationInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApisByAppResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApisByAppResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisByAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApisByAppResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The API authorizations.
    std::shared_ptr<DescribeApisByAppResponseBodyAppApiRelationInfos> appApiRelationInfos_ = nullptr;
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
