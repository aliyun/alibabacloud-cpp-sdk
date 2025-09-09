// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceDomainsResponseBodyInstanceDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeInstanceDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceDomains, instanceDomains_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceDomains, instanceDomains_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeInstanceDomainsResponseBody() = default ;
    DescribeInstanceDomainsResponseBody(const DescribeInstanceDomainsResponseBody &) = default ;
    DescribeInstanceDomainsResponseBody(DescribeInstanceDomainsResponseBody &&) = default ;
    DescribeInstanceDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceDomainsResponseBody() = default ;
    DescribeInstanceDomainsResponseBody& operator=(const DescribeInstanceDomainsResponseBody &) = default ;
    DescribeInstanceDomainsResponseBody& operator=(DescribeInstanceDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceDomains_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalItems_ != nullptr && this->totalPages_ != nullptr; };
    // instanceDomains Field Functions 
    bool hasInstanceDomains() const { return this->instanceDomains_ != nullptr;};
    void deleteInstanceDomains() { this->instanceDomains_ = nullptr;};
    inline const vector<DescribeInstanceDomainsResponseBodyInstanceDomains> & instanceDomains() const { DARABONBA_PTR_GET_CONST(instanceDomains_, vector<DescribeInstanceDomainsResponseBodyInstanceDomains>) };
    inline vector<DescribeInstanceDomainsResponseBodyInstanceDomains> instanceDomains() { DARABONBA_PTR_GET(instanceDomains_, vector<DescribeInstanceDomainsResponseBodyInstanceDomains>) };
    inline DescribeInstanceDomainsResponseBody& setInstanceDomains(const vector<DescribeInstanceDomainsResponseBodyInstanceDomains> & instanceDomains) { DARABONBA_PTR_SET_VALUE(instanceDomains_, instanceDomains) };
    inline DescribeInstanceDomainsResponseBody& setInstanceDomains(vector<DescribeInstanceDomainsResponseBodyInstanceDomains> && instanceDomains) { DARABONBA_PTR_SET_RVALUE(instanceDomains_, instanceDomains) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceDomainsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceDomainsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t totalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeInstanceDomainsResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeInstanceDomainsResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The domain names that are bound to the DNS instance.
    std::shared_ptr<vector<DescribeInstanceDomainsResponseBodyInstanceDomains>> instanceDomains_ = nullptr;
    // The page number. Pages start from page **1**. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: **1 to 100**. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned on all pages.
    std::shared_ptr<int32_t> totalItems_ = nullptr;
    // The total number of pages returned.
    std::shared_ptr<int32_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
