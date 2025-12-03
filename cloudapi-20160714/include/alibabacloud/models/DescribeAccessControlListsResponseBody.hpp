// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccessControlListsResponseBodyAcls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAccessControlListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Acls, acls_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Acls, acls_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAccessControlListsResponseBody() = default ;
    DescribeAccessControlListsResponseBody(const DescribeAccessControlListsResponseBody &) = default ;
    DescribeAccessControlListsResponseBody(DescribeAccessControlListsResponseBody &&) = default ;
    DescribeAccessControlListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListsResponseBody() = default ;
    DescribeAccessControlListsResponseBody& operator=(const DescribeAccessControlListsResponseBody &) = default ;
    DescribeAccessControlListsResponseBody& operator=(DescribeAccessControlListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acls_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // acls Field Functions 
    bool hasAcls() const { return this->acls_ != nullptr;};
    void deleteAcls() { this->acls_ = nullptr;};
    inline const DescribeAccessControlListsResponseBodyAcls & acls() const { DARABONBA_PTR_GET_CONST(acls_, DescribeAccessControlListsResponseBodyAcls) };
    inline DescribeAccessControlListsResponseBodyAcls acls() { DARABONBA_PTR_GET(acls_, DescribeAccessControlListsResponseBodyAcls) };
    inline DescribeAccessControlListsResponseBody& setAcls(const DescribeAccessControlListsResponseBodyAcls & acls) { DARABONBA_PTR_SET_VALUE(acls_, acls) };
    inline DescribeAccessControlListsResponseBody& setAcls(DescribeAccessControlListsResponseBodyAcls && acls) { DARABONBA_PTR_SET_RVALUE(acls_, acls) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAccessControlListsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAccessControlListsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessControlListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAccessControlListsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ACLs.
    std::shared_ptr<DescribeAccessControlListsResponseBodyAcls> acls_ = nullptr;
    // The page number of the current page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
