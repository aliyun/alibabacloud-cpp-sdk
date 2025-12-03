// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTHORIZEDAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAuthorizedAppsResponseBodyAuthorizedApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAuthorizedAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuthorizedAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedApps, authorizedApps_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuthorizedAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedApps, authorizedApps_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAuthorizedAppsResponseBody() = default ;
    DescribeAuthorizedAppsResponseBody(const DescribeAuthorizedAppsResponseBody &) = default ;
    DescribeAuthorizedAppsResponseBody(DescribeAuthorizedAppsResponseBody &&) = default ;
    DescribeAuthorizedAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuthorizedAppsResponseBody() = default ;
    DescribeAuthorizedAppsResponseBody& operator=(const DescribeAuthorizedAppsResponseBody &) = default ;
    DescribeAuthorizedAppsResponseBody& operator=(DescribeAuthorizedAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizedApps_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // authorizedApps Field Functions 
    bool hasAuthorizedApps() const { return this->authorizedApps_ != nullptr;};
    void deleteAuthorizedApps() { this->authorizedApps_ = nullptr;};
    inline const DescribeAuthorizedAppsResponseBodyAuthorizedApps & authorizedApps() const { DARABONBA_PTR_GET_CONST(authorizedApps_, DescribeAuthorizedAppsResponseBodyAuthorizedApps) };
    inline DescribeAuthorizedAppsResponseBodyAuthorizedApps authorizedApps() { DARABONBA_PTR_GET(authorizedApps_, DescribeAuthorizedAppsResponseBodyAuthorizedApps) };
    inline DescribeAuthorizedAppsResponseBody& setAuthorizedApps(const DescribeAuthorizedAppsResponseBodyAuthorizedApps & authorizedApps) { DARABONBA_PTR_SET_VALUE(authorizedApps_, authorizedApps) };
    inline DescribeAuthorizedAppsResponseBody& setAuthorizedApps(DescribeAuthorizedAppsResponseBodyAuthorizedApps && authorizedApps) { DARABONBA_PTR_SET_RVALUE(authorizedApps_, authorizedApps) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAuthorizedAppsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAuthorizedAppsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAuthorizedAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAuthorizedAppsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The authorized applications.
    std::shared_ptr<DescribeAuthorizedAppsResponseBodyAuthorizedApps> authorizedApps_ = nullptr;
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
