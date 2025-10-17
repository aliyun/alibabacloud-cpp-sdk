// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLASSICLINKINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLASSICLINKINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClassicLinkInstancesResponseBodyLinks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeClassicLinkInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClassicLinkInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Links, links_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClassicLinkInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Links, links_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeClassicLinkInstancesResponseBody() = default ;
    DescribeClassicLinkInstancesResponseBody(const DescribeClassicLinkInstancesResponseBody &) = default ;
    DescribeClassicLinkInstancesResponseBody(DescribeClassicLinkInstancesResponseBody &&) = default ;
    DescribeClassicLinkInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClassicLinkInstancesResponseBody() = default ;
    DescribeClassicLinkInstancesResponseBody& operator=(const DescribeClassicLinkInstancesResponseBody &) = default ;
    DescribeClassicLinkInstancesResponseBody& operator=(DescribeClassicLinkInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->links_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // links Field Functions 
    bool hasLinks() const { return this->links_ != nullptr;};
    void deleteLinks() { this->links_ = nullptr;};
    inline const DescribeClassicLinkInstancesResponseBodyLinks & links() const { DARABONBA_PTR_GET_CONST(links_, DescribeClassicLinkInstancesResponseBodyLinks) };
    inline DescribeClassicLinkInstancesResponseBodyLinks links() { DARABONBA_PTR_GET(links_, DescribeClassicLinkInstancesResponseBodyLinks) };
    inline DescribeClassicLinkInstancesResponseBody& setLinks(const DescribeClassicLinkInstancesResponseBodyLinks & links) { DARABONBA_PTR_SET_VALUE(links_, links) };
    inline DescribeClassicLinkInstancesResponseBody& setLinks(DescribeClassicLinkInstancesResponseBodyLinks && links) { DARABONBA_PTR_SET_RVALUE(links_, links) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeClassicLinkInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeClassicLinkInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClassicLinkInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeClassicLinkInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the ClassicLink connections between the instances reside in the classic network and VPCs.
    std::shared_ptr<DescribeClassicLinkInstancesResponseBodyLinks> links_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of ClassicLink connections.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
