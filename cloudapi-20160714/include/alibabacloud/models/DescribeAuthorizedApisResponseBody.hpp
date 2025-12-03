// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAuthorizedApisResponseBodyAuthorizedApis.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAuthorizedApisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuthorizedApisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedApis, authorizedApis_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuthorizedApisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedApis, authorizedApis_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAuthorizedApisResponseBody() = default ;
    DescribeAuthorizedApisResponseBody(const DescribeAuthorizedApisResponseBody &) = default ;
    DescribeAuthorizedApisResponseBody(DescribeAuthorizedApisResponseBody &&) = default ;
    DescribeAuthorizedApisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuthorizedApisResponseBody() = default ;
    DescribeAuthorizedApisResponseBody& operator=(const DescribeAuthorizedApisResponseBody &) = default ;
    DescribeAuthorizedApisResponseBody& operator=(DescribeAuthorizedApisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedApis_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // authorizedApis Field Functions 
    bool hasAuthorizedApis() const { return this->authorizedApis_ != nullptr;};
    void deleteAuthorizedApis() { this->authorizedApis_ = nullptr;};
    inline const DescribeAuthorizedApisResponseBodyAuthorizedApis & authorizedApis() const { DARABONBA_PTR_GET_CONST(authorizedApis_, DescribeAuthorizedApisResponseBodyAuthorizedApis) };
    inline DescribeAuthorizedApisResponseBodyAuthorizedApis authorizedApis() { DARABONBA_PTR_GET(authorizedApis_, DescribeAuthorizedApisResponseBodyAuthorizedApis) };
    inline DescribeAuthorizedApisResponseBody& setAuthorizedApis(const DescribeAuthorizedApisResponseBodyAuthorizedApis & authorizedApis) { DARABONBA_PTR_SET_VALUE(authorizedApis_, authorizedApis) };
    inline DescribeAuthorizedApisResponseBody& setAuthorizedApis(DescribeAuthorizedApisResponseBodyAuthorizedApis && authorizedApis) { DARABONBA_PTR_SET_RVALUE(authorizedApis_, authorizedApis) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAuthorizedApisResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAuthorizedApisResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAuthorizedApisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAuthorizedApisResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The authorized API set.
    std::shared_ptr<DescribeAuthorizedApisResponseBodyAuthorizedApis> authorizedApis_ = nullptr;
    // The page number of the returned page.
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
