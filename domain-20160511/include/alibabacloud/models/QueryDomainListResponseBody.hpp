// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
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
          DARABONBA_PTR_TO_JSON(DeadDate, deadDate_);
          DARABONBA_PTR_TO_JSON(DeadDateLong, deadDateLong_);
          DARABONBA_PTR_TO_JSON(DeadDateStatus, deadDateStatus_);
          DARABONBA_PTR_TO_JSON(DomainAuditStatus, domainAuditStatus_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(DomainRegType, domainRegType_);
          DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
          DARABONBA_PTR_TO_JSON(DomainType, domainType_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(Premium, premium_);
          DARABONBA_PTR_TO_JSON(ProductId, productId_);
          DARABONBA_PTR_TO_JSON(RegDate, regDate_);
          DARABONBA_PTR_TO_JSON(RegDateLong, regDateLong_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(SaleId, saleId_);
        };
        friend void from_json(const Darabonba::Json& j, Domain& obj) { 
          DARABONBA_PTR_FROM_JSON(DeadDate, deadDate_);
          DARABONBA_PTR_FROM_JSON(DeadDateLong, deadDateLong_);
          DARABONBA_PTR_FROM_JSON(DeadDateStatus, deadDateStatus_);
          DARABONBA_PTR_FROM_JSON(DomainAuditStatus, domainAuditStatus_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(DomainRegType, domainRegType_);
          DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
          DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(Premium, premium_);
          DARABONBA_PTR_FROM_JSON(ProductId, productId_);
          DARABONBA_PTR_FROM_JSON(RegDate, regDate_);
          DARABONBA_PTR_FROM_JSON(RegDateLong, regDateLong_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(SaleId, saleId_);
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
        virtual bool empty() const override { return this->deadDate_ == nullptr
        && this->deadDateLong_ == nullptr && this->deadDateStatus_ == nullptr && this->domainAuditStatus_ == nullptr && this->domainName_ == nullptr && this->domainRegType_ == nullptr
        && this->domainStatus_ == nullptr && this->domainType_ == nullptr && this->groupId_ == nullptr && this->premium_ == nullptr && this->productId_ == nullptr
        && this->regDate_ == nullptr && this->regDateLong_ == nullptr && this->remark_ == nullptr && this->saleId_ == nullptr; };
        // deadDate Field Functions 
        bool hasDeadDate() const { return this->deadDate_ != nullptr;};
        void deleteDeadDate() { this->deadDate_ = nullptr;};
        inline string getDeadDate() const { DARABONBA_PTR_GET_DEFAULT(deadDate_, "") };
        inline Domain& setDeadDate(string deadDate) { DARABONBA_PTR_SET_VALUE(deadDate_, deadDate) };


        // deadDateLong Field Functions 
        bool hasDeadDateLong() const { return this->deadDateLong_ != nullptr;};
        void deleteDeadDateLong() { this->deadDateLong_ = nullptr;};
        inline int64_t getDeadDateLong() const { DARABONBA_PTR_GET_DEFAULT(deadDateLong_, 0L) };
        inline Domain& setDeadDateLong(int64_t deadDateLong) { DARABONBA_PTR_SET_VALUE(deadDateLong_, deadDateLong) };


        // deadDateStatus Field Functions 
        bool hasDeadDateStatus() const { return this->deadDateStatus_ != nullptr;};
        void deleteDeadDateStatus() { this->deadDateStatus_ = nullptr;};
        inline string getDeadDateStatus() const { DARABONBA_PTR_GET_DEFAULT(deadDateStatus_, "") };
        inline Domain& setDeadDateStatus(string deadDateStatus) { DARABONBA_PTR_SET_VALUE(deadDateStatus_, deadDateStatus) };


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


        // domainRegType Field Functions 
        bool hasDomainRegType() const { return this->domainRegType_ != nullptr;};
        void deleteDomainRegType() { this->domainRegType_ = nullptr;};
        inline string getDomainRegType() const { DARABONBA_PTR_GET_DEFAULT(domainRegType_, "") };
        inline Domain& setDomainRegType(string domainRegType) { DARABONBA_PTR_SET_VALUE(domainRegType_, domainRegType) };


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


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Domain& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


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


        // regDate Field Functions 
        bool hasRegDate() const { return this->regDate_ != nullptr;};
        void deleteRegDate() { this->regDate_ = nullptr;};
        inline string getRegDate() const { DARABONBA_PTR_GET_DEFAULT(regDate_, "") };
        inline Domain& setRegDate(string regDate) { DARABONBA_PTR_SET_VALUE(regDate_, regDate) };


        // regDateLong Field Functions 
        bool hasRegDateLong() const { return this->regDateLong_ != nullptr;};
        void deleteRegDateLong() { this->regDateLong_ = nullptr;};
        inline int64_t getRegDateLong() const { DARABONBA_PTR_GET_DEFAULT(regDateLong_, 0L) };
        inline Domain& setRegDateLong(int64_t regDateLong) { DARABONBA_PTR_SET_VALUE(regDateLong_, regDateLong) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Domain& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // saleId Field Functions 
        bool hasSaleId() const { return this->saleId_ != nullptr;};
        void deleteSaleId() { this->saleId_ = nullptr;};
        inline string getSaleId() const { DARABONBA_PTR_GET_DEFAULT(saleId_, "") };
        inline Domain& setSaleId(string saleId) { DARABONBA_PTR_SET_VALUE(saleId_, saleId) };


      protected:
        shared_ptr<string> deadDate_ {};
        shared_ptr<int64_t> deadDateLong_ {};
        shared_ptr<string> deadDateStatus_ {};
        shared_ptr<string> domainAuditStatus_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> domainRegType_ {};
        shared_ptr<string> domainStatus_ {};
        shared_ptr<string> domainType_ {};
        shared_ptr<string> groupId_ {};
        shared_ptr<bool> premium_ {};
        shared_ptr<string> productId_ {};
        shared_ptr<string> regDate_ {};
        shared_ptr<int64_t> regDateLong_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<string> saleId_ {};
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
    // The page number.
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<QueryDomainListResponseBody::Data> data_ {};
    // Indicates whether the current page is followed by a page.
    shared_ptr<bool> nextPage_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // Indicates whether the current page follows another page.
    shared_ptr<bool> prePage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalItemNum_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
