// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINBYPARAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINBYPARAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryDomainByParamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainByParamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(data, data_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainByParamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(data, data_);
    };
    QueryDomainByParamResponseBody() = default ;
    QueryDomainByParamResponseBody(const QueryDomainByParamResponseBody &) = default ;
    QueryDomainByParamResponseBody(QueryDomainByParamResponseBody &&) = default ;
    QueryDomainByParamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainByParamResponseBody() = default ;
    QueryDomainByParamResponseBody& operator=(const QueryDomainByParamResponseBody &) = default ;
    QueryDomainByParamResponseBody& operator=(QueryDomainByParamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(domain, domain_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(domain, domain_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Domain : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Domain& obj) { 
          DARABONBA_PTR_TO_JSON(CnameAuthStatus, cnameAuthStatus_);
          DARABONBA_PTR_TO_JSON(ConfirmStatus, confirmStatus_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DomainId, domainId_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(DomainRecord, domainRecord_);
          DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
          DARABONBA_PTR_TO_JSON(IcpStatus, icpStatus_);
          DARABONBA_PTR_TO_JSON(MxAuthStatus, mxAuthStatus_);
          DARABONBA_PTR_TO_JSON(SpfAuthStatus, spfAuthStatus_);
          DARABONBA_PTR_TO_JSON(UtcCreateTime, utcCreateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Domain& obj) { 
          DARABONBA_PTR_FROM_JSON(CnameAuthStatus, cnameAuthStatus_);
          DARABONBA_PTR_FROM_JSON(ConfirmStatus, confirmStatus_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(DomainRecord, domainRecord_);
          DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
          DARABONBA_PTR_FROM_JSON(IcpStatus, icpStatus_);
          DARABONBA_PTR_FROM_JSON(MxAuthStatus, mxAuthStatus_);
          DARABONBA_PTR_FROM_JSON(SpfAuthStatus, spfAuthStatus_);
          DARABONBA_PTR_FROM_JSON(UtcCreateTime, utcCreateTime_);
        };
        Domain() = default ;
        Domain(const Domain &) = default ;
        Domain(Domain &&) = default ;
        Domain(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Domain() = default ;
        Domain& operator=(const Domain &) = default ;
        Domain& operator=(Domain &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cnameAuthStatus_ == nullptr
        && this->confirmStatus_ == nullptr && this->createTime_ == nullptr && this->domainId_ == nullptr && this->domainName_ == nullptr && this->domainRecord_ == nullptr
        && this->domainStatus_ == nullptr && this->icpStatus_ == nullptr && this->mxAuthStatus_ == nullptr && this->spfAuthStatus_ == nullptr && this->utcCreateTime_ == nullptr; };
        // cnameAuthStatus Field Functions 
        bool hasCnameAuthStatus() const { return this->cnameAuthStatus_ != nullptr;};
        void deleteCnameAuthStatus() { this->cnameAuthStatus_ = nullptr;};
        inline string getCnameAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(cnameAuthStatus_, "") };
        inline Domain& setCnameAuthStatus(string cnameAuthStatus) { DARABONBA_PTR_SET_VALUE(cnameAuthStatus_, cnameAuthStatus) };


        // confirmStatus Field Functions 
        bool hasConfirmStatus() const { return this->confirmStatus_ != nullptr;};
        void deleteConfirmStatus() { this->confirmStatus_ = nullptr;};
        inline string getConfirmStatus() const { DARABONBA_PTR_GET_DEFAULT(confirmStatus_, "") };
        inline Domain& setConfirmStatus(string confirmStatus) { DARABONBA_PTR_SET_VALUE(confirmStatus_, confirmStatus) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Domain& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // domainId Field Functions 
        bool hasDomainId() const { return this->domainId_ != nullptr;};
        void deleteDomainId() { this->domainId_ = nullptr;};
        inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
        inline Domain& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Domain& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // domainRecord Field Functions 
        bool hasDomainRecord() const { return this->domainRecord_ != nullptr;};
        void deleteDomainRecord() { this->domainRecord_ = nullptr;};
        inline string getDomainRecord() const { DARABONBA_PTR_GET_DEFAULT(domainRecord_, "") };
        inline Domain& setDomainRecord(string domainRecord) { DARABONBA_PTR_SET_VALUE(domainRecord_, domainRecord) };


        // domainStatus Field Functions 
        bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
        void deleteDomainStatus() { this->domainStatus_ = nullptr;};
        inline string getDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
        inline Domain& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


        // icpStatus Field Functions 
        bool hasIcpStatus() const { return this->icpStatus_ != nullptr;};
        void deleteIcpStatus() { this->icpStatus_ = nullptr;};
        inline string getIcpStatus() const { DARABONBA_PTR_GET_DEFAULT(icpStatus_, "") };
        inline Domain& setIcpStatus(string icpStatus) { DARABONBA_PTR_SET_VALUE(icpStatus_, icpStatus) };


        // mxAuthStatus Field Functions 
        bool hasMxAuthStatus() const { return this->mxAuthStatus_ != nullptr;};
        void deleteMxAuthStatus() { this->mxAuthStatus_ = nullptr;};
        inline string getMxAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(mxAuthStatus_, "") };
        inline Domain& setMxAuthStatus(string mxAuthStatus) { DARABONBA_PTR_SET_VALUE(mxAuthStatus_, mxAuthStatus) };


        // spfAuthStatus Field Functions 
        bool hasSpfAuthStatus() const { return this->spfAuthStatus_ != nullptr;};
        void deleteSpfAuthStatus() { this->spfAuthStatus_ = nullptr;};
        inline string getSpfAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(spfAuthStatus_, "") };
        inline Domain& setSpfAuthStatus(string spfAuthStatus) { DARABONBA_PTR_SET_VALUE(spfAuthStatus_, spfAuthStatus) };


        // utcCreateTime Field Functions 
        bool hasUtcCreateTime() const { return this->utcCreateTime_ != nullptr;};
        void deleteUtcCreateTime() { this->utcCreateTime_ = nullptr;};
        inline int64_t getUtcCreateTime() const { DARABONBA_PTR_GET_DEFAULT(utcCreateTime_, 0L) };
        inline Domain& setUtcCreateTime(int64_t utcCreateTime) { DARABONBA_PTR_SET_VALUE(utcCreateTime_, utcCreateTime) };


      protected:
        // Track verification
        shared_ptr<string> cnameAuthStatus_ {};
        // CName verification status, success: 0; failure: 1
        shared_ptr<string> confirmStatus_ {};
        // Creation time
        shared_ptr<string> createTime_ {};
        // Domain ID
        shared_ptr<string> domainId_ {};
        // Domain name
        shared_ptr<string> domainName_ {};
        // Domain record
        shared_ptr<string> domainRecord_ {};
        // Domain status.
        // 
        // - 0: Available, verified
        // - 1: Unavailable, verification failed
        shared_ptr<string> domainStatus_ {};
        // ICP filing status.
        // 
        // - 1 indicates filed
        // - 0 indicates not filed
        shared_ptr<string> icpStatus_ {};
        // MX authentication status, success: 0, failure: 1.
        shared_ptr<string> mxAuthStatus_ {};
        // SPF authentication status, success: 0, failure: 1.
        shared_ptr<string> spfAuthStatus_ {};
        // Creation time in UTC format.
        shared_ptr<int64_t> utcCreateTime_ {};
      };

      virtual bool empty() const override { return this->domain_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline const vector<Data::Domain> & getDomain() const { DARABONBA_PTR_GET_CONST(domain_, vector<Data::Domain>) };
      inline vector<Data::Domain> getDomain() { DARABONBA_PTR_GET(domain_, vector<Data::Domain>) };
      inline Data& setDomain(const vector<Data::Domain> & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
      inline Data& setDomain(vector<Data::Domain> && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


    protected:
      shared_ptr<vector<Data::Domain>> domain_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->data_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryDomainByParamResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryDomainByParamResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDomainByParamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryDomainByParamResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryDomainByParamResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryDomainByParamResponseBody::Data) };
    inline QueryDomainByParamResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryDomainByParamResponseBody::Data) };
    inline QueryDomainByParamResponseBody& setData(const QueryDomainByParamResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryDomainByParamResponseBody& setData(QueryDomainByParamResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    // Current page number
    shared_ptr<int32_t> pageNumber_ {};
    // Page size
    shared_ptr<int32_t> pageSize_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Total count
    shared_ptr<int32_t> totalCount_ {};
    // List of domains
    shared_ptr<QueryDomainByParamResponseBody::Data> data_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
