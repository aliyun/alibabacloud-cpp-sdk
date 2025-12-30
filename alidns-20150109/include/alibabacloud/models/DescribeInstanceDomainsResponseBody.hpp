// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class InstanceDomains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceDomains& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceDomains& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      };
      InstanceDomains() = default ;
      InstanceDomains(const InstanceDomains &) = default ;
      InstanceDomains(InstanceDomains &&) = default ;
      InstanceDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceDomains() = default ;
      InstanceDomains& operator=(const InstanceDomains &) = default ;
      InstanceDomains& operator=(InstanceDomains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->domainName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline InstanceDomains& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline InstanceDomains& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline InstanceDomains& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    protected:
      // The time when the instance was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The time when the instance was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createTimestamp_ {};
      // The domain name.
      shared_ptr<string> domainName_ {};
    };

    virtual bool empty() const override { return this->instanceDomains_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // instanceDomains Field Functions 
    bool hasInstanceDomains() const { return this->instanceDomains_ != nullptr;};
    void deleteInstanceDomains() { this->instanceDomains_ = nullptr;};
    inline const vector<DescribeInstanceDomainsResponseBody::InstanceDomains> & getInstanceDomains() const { DARABONBA_PTR_GET_CONST(instanceDomains_, vector<DescribeInstanceDomainsResponseBody::InstanceDomains>) };
    inline vector<DescribeInstanceDomainsResponseBody::InstanceDomains> getInstanceDomains() { DARABONBA_PTR_GET(instanceDomains_, vector<DescribeInstanceDomainsResponseBody::InstanceDomains>) };
    inline DescribeInstanceDomainsResponseBody& setInstanceDomains(const vector<DescribeInstanceDomainsResponseBody::InstanceDomains> & instanceDomains) { DARABONBA_PTR_SET_VALUE(instanceDomains_, instanceDomains) };
    inline DescribeInstanceDomainsResponseBody& setInstanceDomains(vector<DescribeInstanceDomainsResponseBody::InstanceDomains> && instanceDomains) { DARABONBA_PTR_SET_RVALUE(instanceDomains_, instanceDomains) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceDomainsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceDomainsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeInstanceDomainsResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeInstanceDomainsResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The domain names that are bound to the DNS instance.
    shared_ptr<vector<DescribeInstanceDomainsResponseBody::InstanceDomains>> instanceDomains_ {};
    // The page number. Pages start from page **1**. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: **1 to 100**. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned on all pages.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
