// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUSERDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUSERDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUserDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUserDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUserDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLiveUserDomainsResponseBody() = default ;
    DescribeLiveUserDomainsResponseBody(const DescribeLiveUserDomainsResponseBody &) = default ;
    DescribeLiveUserDomainsResponseBody(DescribeLiveUserDomainsResponseBody &&) = default ;
    DescribeLiveUserDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUserDomainsResponseBody() = default ;
    DescribeLiveUserDomainsResponseBody& operator=(const DescribeLiveUserDomainsResponseBody &) = default ;
    DescribeLiveUserDomainsResponseBody& operator=(DescribeLiveUserDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Domains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Domains& obj) { 
        DARABONBA_PTR_TO_JSON(PageData, pageData_);
      };
      friend void from_json(const Darabonba::Json& j, Domains& obj) { 
        DARABONBA_PTR_FROM_JSON(PageData, pageData_);
      };
      Domains() = default ;
      Domains(const Domains &) = default ;
      Domains(Domains &&) = default ;
      Domains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Domains() = default ;
      Domains& operator=(const Domains &) = default ;
      Domains& operator=(Domains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PageData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageData& obj) { 
          DARABONBA_PTR_TO_JSON(Cname, cname_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(LiveDomainStatus, liveDomainStatus_);
          DARABONBA_PTR_TO_JSON(LiveDomainType, liveDomainType_);
          DARABONBA_PTR_TO_JSON(RegionName, regionName_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, PageData& obj) { 
          DARABONBA_PTR_FROM_JSON(Cname, cname_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(LiveDomainStatus, liveDomainStatus_);
          DARABONBA_PTR_FROM_JSON(LiveDomainType, liveDomainType_);
          DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        };
        PageData() = default ;
        PageData(const PageData &) = default ;
        PageData(PageData &&) = default ;
        PageData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageData() = default ;
        PageData& operator=(const PageData &) = default ;
        PageData& operator=(PageData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cname_ == nullptr
        && this->description_ == nullptr && this->domainName_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->liveDomainStatus_ == nullptr
        && this->liveDomainType_ == nullptr && this->regionName_ == nullptr && this->resourceGroupId_ == nullptr; };
        // cname Field Functions 
        bool hasCname() const { return this->cname_ != nullptr;};
        void deleteCname() { this->cname_ = nullptr;};
        inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
        inline PageData& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PageData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline PageData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline PageData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline PageData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // liveDomainStatus Field Functions 
        bool hasLiveDomainStatus() const { return this->liveDomainStatus_ != nullptr;};
        void deleteLiveDomainStatus() { this->liveDomainStatus_ = nullptr;};
        inline string getLiveDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(liveDomainStatus_, "") };
        inline PageData& setLiveDomainStatus(string liveDomainStatus) { DARABONBA_PTR_SET_VALUE(liveDomainStatus_, liveDomainStatus) };


        // liveDomainType Field Functions 
        bool hasLiveDomainType() const { return this->liveDomainType_ != nullptr;};
        void deleteLiveDomainType() { this->liveDomainType_ = nullptr;};
        inline string getLiveDomainType() const { DARABONBA_PTR_GET_DEFAULT(liveDomainType_, "") };
        inline PageData& setLiveDomainType(string liveDomainType) { DARABONBA_PTR_SET_VALUE(liveDomainType_, liveDomainType) };


        // regionName Field Functions 
        bool hasRegionName() const { return this->regionName_ != nullptr;};
        void deleteRegionName() { this->regionName_ = nullptr;};
        inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
        inline PageData& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline PageData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      protected:
        // The CNAME generated for the domain name.
        shared_ptr<string> cname_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        // The time when the domain name was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> gmtCreated_ {};
        // The time when the domain name was last modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> gmtModified_ {};
        // The status of the domain name. Valid values:
        // 
        // *   **online**
        // *   **offline**
        // *   **configuring**
        shared_ptr<string> liveDomainStatus_ {};
        // The type of the domain name. Valid values:
        // 
        // *   **liveVideo**: streaming domain
        // *   **liveEdge**: ingest domain
        shared_ptr<string> liveDomainType_ {};
        // The ID of the region in which the domain name resides.
        shared_ptr<string> regionName_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroupId_ {};
      };

      virtual bool empty() const override { return this->pageData_ == nullptr; };
      // pageData Field Functions 
      bool hasPageData() const { return this->pageData_ != nullptr;};
      void deletePageData() { this->pageData_ = nullptr;};
      inline const vector<Domains::PageData> & getPageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Domains::PageData>) };
      inline vector<Domains::PageData> getPageData() { DARABONBA_PTR_GET(pageData_, vector<Domains::PageData>) };
      inline Domains& setPageData(const vector<Domains::PageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
      inline Domains& setPageData(vector<Domains::PageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


    protected:
      shared_ptr<vector<Domains::PageData>> pageData_ {};
    };

    virtual bool empty() const override { return this->domains_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const DescribeLiveUserDomainsResponseBody::Domains & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, DescribeLiveUserDomainsResponseBody::Domains) };
    inline DescribeLiveUserDomainsResponseBody::Domains getDomains() { DARABONBA_PTR_GET(domains_, DescribeLiveUserDomainsResponseBody::Domains) };
    inline DescribeLiveUserDomainsResponseBody& setDomains(const DescribeLiveUserDomainsResponseBody::Domains & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeLiveUserDomainsResponseBody& setDomains(DescribeLiveUserDomainsResponseBody::Domains && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeLiveUserDomainsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeLiveUserDomainsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveUserDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeLiveUserDomainsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The domain names.
    shared_ptr<DescribeLiveUserDomainsResponseBody::Domains> domains_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
