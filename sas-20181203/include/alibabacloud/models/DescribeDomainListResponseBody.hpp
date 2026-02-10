// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeDomainListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainListResponseList, domainListResponseList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainListResponseList, domainListResponseList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainListResponseBody() = default ;
    DescribeDomainListResponseBody(const DescribeDomainListResponseBody &) = default ;
    DescribeDomainListResponseBody(DescribeDomainListResponseBody &&) = default ;
    DescribeDomainListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainListResponseBody() = default ;
    DescribeDomainListResponseBody& operator=(const DescribeDomainListResponseBody &) = default ;
    DescribeDomainListResponseBody& operator=(DescribeDomainListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page. Default value: **10**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class DomainListResponseList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainListResponseList& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(IpList, ipList_);
      };
      friend void from_json(const Darabonba::Json& j, DomainListResponseList& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      };
      DomainListResponseList() = default ;
      DomainListResponseList(const DomainListResponseList &) = default ;
      DomainListResponseList(DomainListResponseList &&) = default ;
      DomainListResponseList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainListResponseList() = default ;
      DomainListResponseList& operator=(const DomainListResponseList &) = default ;
      DomainListResponseList& operator=(DomainListResponseList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->ipList_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DomainListResponseList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // ipList Field Functions 
      bool hasIpList() const { return this->ipList_ != nullptr;};
      void deleteIpList() { this->ipList_ = nullptr;};
      inline string getIpList() const { DARABONBA_PTR_GET_DEFAULT(ipList_, "") };
      inline DomainListResponseList& setIpList(string ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };


    protected:
      // The name of the domain or website.
      shared_ptr<string> domain_ {};
      // The IP addresses of the domain name.
      shared_ptr<string> ipList_ {};
    };

    virtual bool empty() const override { return this->domainListResponseList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // domainListResponseList Field Functions 
    bool hasDomainListResponseList() const { return this->domainListResponseList_ != nullptr;};
    void deleteDomainListResponseList() { this->domainListResponseList_ = nullptr;};
    inline const vector<DescribeDomainListResponseBody::DomainListResponseList> & getDomainListResponseList() const { DARABONBA_PTR_GET_CONST(domainListResponseList_, vector<DescribeDomainListResponseBody::DomainListResponseList>) };
    inline vector<DescribeDomainListResponseBody::DomainListResponseList> getDomainListResponseList() { DARABONBA_PTR_GET(domainListResponseList_, vector<DescribeDomainListResponseBody::DomainListResponseList>) };
    inline DescribeDomainListResponseBody& setDomainListResponseList(const vector<DescribeDomainListResponseBody::DomainListResponseList> & domainListResponseList) { DARABONBA_PTR_SET_VALUE(domainListResponseList_, domainListResponseList) };
    inline DescribeDomainListResponseBody& setDomainListResponseList(vector<DescribeDomainListResponseBody::DomainListResponseList> && domainListResponseList) { DARABONBA_PTR_SET_RVALUE(domainListResponseList_, domainListResponseList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeDomainListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeDomainListResponseBody::PageInfo) };
    inline DescribeDomainListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeDomainListResponseBody::PageInfo) };
    inline DescribeDomainListResponseBody& setPageInfo(const DescribeDomainListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeDomainListResponseBody& setPageInfo(DescribeDomainListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about domain names.
    shared_ptr<vector<DescribeDomainListResponseBody::DomainListResponseList>> domainListResponseList_ {};
    // The pagination information.
    shared_ptr<DescribeDomainListResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
