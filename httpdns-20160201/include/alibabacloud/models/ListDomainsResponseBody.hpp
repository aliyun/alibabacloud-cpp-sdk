// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class ListDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainInfos, domainInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainInfos, domainInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDomainsResponseBody() = default ;
    ListDomainsResponseBody(const ListDomainsResponseBody &) = default ;
    ListDomainsResponseBody(ListDomainsResponseBody &&) = default ;
    ListDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainsResponseBody() = default ;
    ListDomainsResponseBody& operator=(const ListDomainsResponseBody &) = default ;
    ListDomainsResponseBody& operator=(ListDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainInfos& obj) { 
        DARABONBA_PTR_TO_JSON(DomainInfo, domainInfo_);
      };
      friend void from_json(const Darabonba::Json& j, DomainInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainInfo, domainInfo_);
      };
      DomainInfos() = default ;
      DomainInfos(const DomainInfos &) = default ;
      DomainInfos(DomainInfos &&) = default ;
      DomainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainInfos() = default ;
      DomainInfos& operator=(const DomainInfos &) = default ;
      DomainInfos& operator=(DomainInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(ResolveHttpAes, resolveHttpAes_);
          DARABONBA_PTR_TO_JSON(ResolveHttpsAes, resolveHttpsAes_);
          DARABONBA_PTR_TO_JSON(Resolved, resolved_);
          DARABONBA_PTR_TO_JSON(Resolved6, resolved6_);
          DARABONBA_PTR_TO_JSON(ResolvedDoh, resolvedDoh_);
          DARABONBA_PTR_TO_JSON(ResolvedHttps, resolvedHttps_);
          DARABONBA_PTR_TO_JSON(ResolvedHttps6, resolvedHttps6_);
          DARABONBA_PTR_TO_JSON(TimeModified, timeModified_);
        };
        friend void from_json(const Darabonba::Json& j, DomainInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(ResolveHttpAes, resolveHttpAes_);
          DARABONBA_PTR_FROM_JSON(ResolveHttpsAes, resolveHttpsAes_);
          DARABONBA_PTR_FROM_JSON(Resolved, resolved_);
          DARABONBA_PTR_FROM_JSON(Resolved6, resolved6_);
          DARABONBA_PTR_FROM_JSON(ResolvedDoh, resolvedDoh_);
          DARABONBA_PTR_FROM_JSON(ResolvedHttps, resolvedHttps_);
          DARABONBA_PTR_FROM_JSON(ResolvedHttps6, resolvedHttps6_);
          DARABONBA_PTR_FROM_JSON(TimeModified, timeModified_);
        };
        DomainInfo() = default ;
        DomainInfo(const DomainInfo &) = default ;
        DomainInfo(DomainInfo &&) = default ;
        DomainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainInfo() = default ;
        DomainInfo& operator=(const DomainInfo &) = default ;
        DomainInfo& operator=(DomainInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domainName_ == nullptr
        && this->resolveHttpAes_ == nullptr && this->resolveHttpsAes_ == nullptr && this->resolved_ == nullptr && this->resolved6_ == nullptr && this->resolvedDoh_ == nullptr
        && this->resolvedHttps_ == nullptr && this->resolvedHttps6_ == nullptr && this->timeModified_ == nullptr; };
        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline DomainInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // resolveHttpAes Field Functions 
        bool hasResolveHttpAes() const { return this->resolveHttpAes_ != nullptr;};
        void deleteResolveHttpAes() { this->resolveHttpAes_ = nullptr;};
        inline int64_t getResolveHttpAes() const { DARABONBA_PTR_GET_DEFAULT(resolveHttpAes_, 0L) };
        inline DomainInfo& setResolveHttpAes(int64_t resolveHttpAes) { DARABONBA_PTR_SET_VALUE(resolveHttpAes_, resolveHttpAes) };


        // resolveHttpsAes Field Functions 
        bool hasResolveHttpsAes() const { return this->resolveHttpsAes_ != nullptr;};
        void deleteResolveHttpsAes() { this->resolveHttpsAes_ = nullptr;};
        inline int64_t getResolveHttpsAes() const { DARABONBA_PTR_GET_DEFAULT(resolveHttpsAes_, 0L) };
        inline DomainInfo& setResolveHttpsAes(int64_t resolveHttpsAes) { DARABONBA_PTR_SET_VALUE(resolveHttpsAes_, resolveHttpsAes) };


        // resolved Field Functions 
        bool hasResolved() const { return this->resolved_ != nullptr;};
        void deleteResolved() { this->resolved_ = nullptr;};
        inline int64_t getResolved() const { DARABONBA_PTR_GET_DEFAULT(resolved_, 0L) };
        inline DomainInfo& setResolved(int64_t resolved) { DARABONBA_PTR_SET_VALUE(resolved_, resolved) };


        // resolved6 Field Functions 
        bool hasResolved6() const { return this->resolved6_ != nullptr;};
        void deleteResolved6() { this->resolved6_ = nullptr;};
        inline int64_t getResolved6() const { DARABONBA_PTR_GET_DEFAULT(resolved6_, 0L) };
        inline DomainInfo& setResolved6(int64_t resolved6) { DARABONBA_PTR_SET_VALUE(resolved6_, resolved6) };


        // resolvedDoh Field Functions 
        bool hasResolvedDoh() const { return this->resolvedDoh_ != nullptr;};
        void deleteResolvedDoh() { this->resolvedDoh_ = nullptr;};
        inline int64_t getResolvedDoh() const { DARABONBA_PTR_GET_DEFAULT(resolvedDoh_, 0L) };
        inline DomainInfo& setResolvedDoh(int64_t resolvedDoh) { DARABONBA_PTR_SET_VALUE(resolvedDoh_, resolvedDoh) };


        // resolvedHttps Field Functions 
        bool hasResolvedHttps() const { return this->resolvedHttps_ != nullptr;};
        void deleteResolvedHttps() { this->resolvedHttps_ = nullptr;};
        inline int64_t getResolvedHttps() const { DARABONBA_PTR_GET_DEFAULT(resolvedHttps_, 0L) };
        inline DomainInfo& setResolvedHttps(int64_t resolvedHttps) { DARABONBA_PTR_SET_VALUE(resolvedHttps_, resolvedHttps) };


        // resolvedHttps6 Field Functions 
        bool hasResolvedHttps6() const { return this->resolvedHttps6_ != nullptr;};
        void deleteResolvedHttps6() { this->resolvedHttps6_ = nullptr;};
        inline int64_t getResolvedHttps6() const { DARABONBA_PTR_GET_DEFAULT(resolvedHttps6_, 0L) };
        inline DomainInfo& setResolvedHttps6(int64_t resolvedHttps6) { DARABONBA_PTR_SET_VALUE(resolvedHttps6_, resolvedHttps6) };


        // timeModified Field Functions 
        bool hasTimeModified() const { return this->timeModified_ != nullptr;};
        void deleteTimeModified() { this->timeModified_ = nullptr;};
        inline int64_t getTimeModified() const { DARABONBA_PTR_GET_DEFAULT(timeModified_, 0L) };
        inline DomainInfo& setTimeModified(int64_t timeModified) { DARABONBA_PTR_SET_VALUE(timeModified_, timeModified) };


      protected:
        shared_ptr<string> domainName_ {};
        shared_ptr<int64_t> resolveHttpAes_ {};
        shared_ptr<int64_t> resolveHttpsAes_ {};
        shared_ptr<int64_t> resolved_ {};
        shared_ptr<int64_t> resolved6_ {};
        shared_ptr<int64_t> resolvedDoh_ {};
        shared_ptr<int64_t> resolvedHttps_ {};
        shared_ptr<int64_t> resolvedHttps6_ {};
        shared_ptr<int64_t> timeModified_ {};
      };

      virtual bool empty() const override { return this->domainInfo_ == nullptr; };
      // domainInfo Field Functions 
      bool hasDomainInfo() const { return this->domainInfo_ != nullptr;};
      void deleteDomainInfo() { this->domainInfo_ = nullptr;};
      inline const vector<DomainInfos::DomainInfo> & getDomainInfo() const { DARABONBA_PTR_GET_CONST(domainInfo_, vector<DomainInfos::DomainInfo>) };
      inline vector<DomainInfos::DomainInfo> getDomainInfo() { DARABONBA_PTR_GET(domainInfo_, vector<DomainInfos::DomainInfo>) };
      inline DomainInfos& setDomainInfo(const vector<DomainInfos::DomainInfo> & domainInfo) { DARABONBA_PTR_SET_VALUE(domainInfo_, domainInfo) };
      inline DomainInfos& setDomainInfo(vector<DomainInfos::DomainInfo> && domainInfo) { DARABONBA_PTR_SET_RVALUE(domainInfo_, domainInfo) };


    protected:
      shared_ptr<vector<DomainInfos::DomainInfo>> domainInfo_ {};
    };

    virtual bool empty() const override { return this->domainInfos_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domainInfos Field Functions 
    bool hasDomainInfos() const { return this->domainInfos_ != nullptr;};
    void deleteDomainInfos() { this->domainInfos_ = nullptr;};
    inline const ListDomainsResponseBody::DomainInfos & getDomainInfos() const { DARABONBA_PTR_GET_CONST(domainInfos_, ListDomainsResponseBody::DomainInfos) };
    inline ListDomainsResponseBody::DomainInfos getDomainInfos() { DARABONBA_PTR_GET(domainInfos_, ListDomainsResponseBody::DomainInfos) };
    inline ListDomainsResponseBody& setDomainInfos(const ListDomainsResponseBody::DomainInfos & domainInfos) { DARABONBA_PTR_SET_VALUE(domainInfos_, domainInfos) };
    inline ListDomainsResponseBody& setDomainInfos(ListDomainsResponseBody::DomainInfos && domainInfos) { DARABONBA_PTR_SET_RVALUE(domainInfos_, domainInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListDomainsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDomainsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDomainsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ListDomainsResponseBody::DomainInfos> domainInfos_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
