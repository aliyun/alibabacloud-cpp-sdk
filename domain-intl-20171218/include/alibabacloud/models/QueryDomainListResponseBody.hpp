// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DomainIntl20171218
{
namespace Models
{
  class QueryDomainListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    QueryDomainListResponseBody() = default ;
    QueryDomainListResponseBody(const QueryDomainListResponseBody &) = default ;
    QueryDomainListResponseBody(QueryDomainListResponseBody &&) = default ;
    QueryDomainListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainListResponseBody() = default ;
    QueryDomainListResponseBody& operator=(const QueryDomainListResponseBody &) = default ;
    QueryDomainListResponseBody& operator=(QueryDomainListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
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
          DARABONBA_PTR_TO_JSON(DomainAuditStatus, domainAuditStatus_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
          DARABONBA_PTR_TO_JSON(DomainType, domainType_);
          DARABONBA_PTR_TO_JSON(ExpirationCurrDateDiff, expirationCurrDateDiff_);
          DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
          DARABONBA_PTR_TO_JSON(ExpirationDateLong, expirationDateLong_);
          DARABONBA_PTR_TO_JSON(ExpirationDateStatus, expirationDateStatus_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Premium, premium_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(RegistrantType, registrantType_);
          DARABONBA_PTR_TO_JSON(RegistrationDate, registrationDate_);
          DARABONBA_PTR_TO_JSON(RegistrationDateLong, registrationDateLong_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
        };
        friend void from_json(const Darabonba::Json& j, Domain& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainAuditStatus, domainAuditStatus_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
          DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
          DARABONBA_PTR_FROM_JSON(ExpirationCurrDateDiff, expirationCurrDateDiff_);
          DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
          DARABONBA_PTR_FROM_JSON(ExpirationDateLong, expirationDateLong_);
          DARABONBA_PTR_FROM_JSON(ExpirationDateStatus, expirationDateStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Premium, premium_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(RegistrantType, registrantType_);
          DARABONBA_PTR_FROM_JSON(RegistrationDate, registrationDate_);
          DARABONBA_PTR_FROM_JSON(RegistrationDateLong, registrationDateLong_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
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
        virtual bool empty() const override { return this->domainAuditStatus_ == nullptr
        && this->domainName_ == nullptr && this->domainStatus_ == nullptr && this->domainType_ == nullptr && this->expirationCurrDateDiff_ == nullptr && this->expirationDate_ == nullptr
        && this->expirationDateLong_ == nullptr && this->expirationDateStatus_ == nullptr && this->instanceId_ == nullptr && this->premium_ == nullptr && this->productId_ == nullptr
        && this->registrantType_ == nullptr && this->registrationDate_ == nullptr && this->registrationDateLong_ == nullptr && this->remark_ == nullptr; };
        // domainAuditStatus Field Functions 
        bool hasDomainAuditStatus() const { return this->domainAuditStatus_ != nullptr;};
        void deleteDomainAuditStatus() { this->domainAuditStatus_ = nullptr;};
        inline string getDomainAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(domainAuditStatus_, "") };
        inline Domain& setDomainAuditStatus(string domainAuditStatus) { DARABONBA_PTR_SET_VALUE(domainAuditStatus_, domainAuditStatus) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Domain& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // domainStatus Field Functions 
        bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
        void deleteDomainStatus() { this->domainStatus_ = nullptr;};
        inline string getDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
        inline Domain& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


        // domainType Field Functions 
        bool hasDomainType() const { return this->domainType_ != nullptr;};
        void deleteDomainType() { this->domainType_ = nullptr;};
        inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
        inline Domain& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


        // expirationCurrDateDiff Field Functions 
        bool hasExpirationCurrDateDiff() const { return this->expirationCurrDateDiff_ != nullptr;};
        void deleteExpirationCurrDateDiff() { this->expirationCurrDateDiff_ = nullptr;};
        inline int32_t getExpirationCurrDateDiff() const { DARABONBA_PTR_GET_DEFAULT(expirationCurrDateDiff_, 0) };
        inline Domain& setExpirationCurrDateDiff(int32_t expirationCurrDateDiff) { DARABONBA_PTR_SET_VALUE(expirationCurrDateDiff_, expirationCurrDateDiff) };


        // expirationDate Field Functions 
        bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
        void deleteExpirationDate() { this->expirationDate_ = nullptr;};
        inline string getExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
        inline Domain& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


        // expirationDateLong Field Functions 
        bool hasExpirationDateLong() const { return this->expirationDateLong_ != nullptr;};
        void deleteExpirationDateLong() { this->expirationDateLong_ = nullptr;};
        inline int64_t getExpirationDateLong() const { DARABONBA_PTR_GET_DEFAULT(expirationDateLong_, 0L) };
        inline Domain& setExpirationDateLong(int64_t expirationDateLong) { DARABONBA_PTR_SET_VALUE(expirationDateLong_, expirationDateLong) };


        // expirationDateStatus Field Functions 
        bool hasExpirationDateStatus() const { return this->expirationDateStatus_ != nullptr;};
        void deleteExpirationDateStatus() { this->expirationDateStatus_ = nullptr;};
        inline string getExpirationDateStatus() const { DARABONBA_PTR_GET_DEFAULT(expirationDateStatus_, "") };
        inline Domain& setExpirationDateStatus(string expirationDateStatus) { DARABONBA_PTR_SET_VALUE(expirationDateStatus_, expirationDateStatus) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Domain& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // premium Field Functions 
        bool hasPremium() const { return this->premium_ != nullptr;};
        void deletePremium() { this->premium_ = nullptr;};
        inline bool getPremium() const { DARABONBA_PTR_GET_DEFAULT(premium_, false) };
        inline Domain& setPremium(bool premium) { DARABONBA_PTR_SET_VALUE(premium_, premium) };


        // productId Field Functions 
        bool hasProductId() const { return this->productId_ != nullptr;};
        void deleteProductId() { this->productId_ = nullptr;};
        inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
        inline Domain& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


        // registrantType Field Functions 
        bool hasRegistrantType() const { return this->registrantType_ != nullptr;};
        void deleteRegistrantType() { this->registrantType_ = nullptr;};
        inline string getRegistrantType() const { DARABONBA_PTR_GET_DEFAULT(registrantType_, "") };
        inline Domain& setRegistrantType(string registrantType) { DARABONBA_PTR_SET_VALUE(registrantType_, registrantType) };


        // registrationDate Field Functions 
        bool hasRegistrationDate() const { return this->registrationDate_ != nullptr;};
        void deleteRegistrationDate() { this->registrationDate_ = nullptr;};
        inline string getRegistrationDate() const { DARABONBA_PTR_GET_DEFAULT(registrationDate_, "") };
        inline Domain& setRegistrationDate(string registrationDate) { DARABONBA_PTR_SET_VALUE(registrationDate_, registrationDate) };


        // registrationDateLong Field Functions 
        bool hasRegistrationDateLong() const { return this->registrationDateLong_ != nullptr;};
        void deleteRegistrationDateLong() { this->registrationDateLong_ = nullptr;};
        inline int64_t getRegistrationDateLong() const { DARABONBA_PTR_GET_DEFAULT(registrationDateLong_, 0L) };
        inline Domain& setRegistrationDateLong(int64_t registrationDateLong) { DARABONBA_PTR_SET_VALUE(registrationDateLong_, registrationDateLong) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Domain& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      protected:
        shared_ptr<string> domainAuditStatus_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> domainStatus_ {};
        shared_ptr<string> domainType_ {};
        shared_ptr<int32_t> expirationCurrDateDiff_ {};
        shared_ptr<string> expirationDate_ {};
        shared_ptr<int64_t> expirationDateLong_ {};
        shared_ptr<string> expirationDateStatus_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<bool> premium_ {};
        shared_ptr<string> productId_ {};
        shared_ptr<string> registrantType_ {};
        shared_ptr<string> registrationDate_ {};
        shared_ptr<int64_t> registrationDateLong_ {};
        shared_ptr<string> remark_ {};
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

    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->nextPage_ == nullptr && this->pageSize_ == nullptr && this->prePage_ == nullptr && this->requestId_ == nullptr
        && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline QueryDomainListResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryDomainListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryDomainListResponseBody::Data) };
    inline QueryDomainListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryDomainListResponseBody::Data) };
    inline QueryDomainListResponseBody& setData(const QueryDomainListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryDomainListResponseBody& setData(QueryDomainListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline bool getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
    inline QueryDomainListResponseBody& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryDomainListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline bool getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
    inline QueryDomainListResponseBody& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDomainListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline QueryDomainListResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline QueryDomainListResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<QueryDomainListResponseBody::Data> data_ {};
    shared_ptr<bool> nextPage_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<bool> prePage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItemNum_ {};
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DomainIntl20171218
#endif
