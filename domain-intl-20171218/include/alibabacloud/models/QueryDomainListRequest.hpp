// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DomainIntl20171218
{
namespace Models
{
  class QueryDomainListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ccompany, ccompany_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndExpirationDate, endExpirationDate_);
      DARABONBA_PTR_TO_JSON(EndRegistrationDate, endRegistrationDate_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OrderByType, orderByType_);
      DARABONBA_PTR_TO_JSON(OrderKeyType, orderKeyType_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductDomainType, productDomainType_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(StartExpirationDate, startExpirationDate_);
      DARABONBA_PTR_TO_JSON(StartRegistrationDate, startRegistrationDate_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ccompany, ccompany_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndExpirationDate, endExpirationDate_);
      DARABONBA_PTR_FROM_JSON(EndRegistrationDate, endRegistrationDate_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OrderByType, orderByType_);
      DARABONBA_PTR_FROM_JSON(OrderKeyType, orderKeyType_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductDomainType, productDomainType_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(StartExpirationDate, startExpirationDate_);
      DARABONBA_PTR_FROM_JSON(StartRegistrationDate, startRegistrationDate_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryDomainListRequest() = default ;
    QueryDomainListRequest(const QueryDomainListRequest &) = default ;
    QueryDomainListRequest(QueryDomainListRequest &&) = default ;
    QueryDomainListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDomainListRequest() = default ;
    QueryDomainListRequest& operator=(const QueryDomainListRequest &) = default ;
    QueryDomainListRequest& operator=(QueryDomainListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ccompany_ == nullptr
        && this->domainName_ == nullptr && this->endExpirationDate_ == nullptr && this->endRegistrationDate_ == nullptr && this->lang_ == nullptr && this->orderByType_ == nullptr
        && this->orderKeyType_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->productDomainType_ == nullptr && this->queryType_ == nullptr
        && this->startExpirationDate_ == nullptr && this->startRegistrationDate_ == nullptr && this->userClientIp_ == nullptr; };
    // ccompany Field Functions 
    bool hasCcompany() const { return this->ccompany_ != nullptr;};
    void deleteCcompany() { this->ccompany_ = nullptr;};
    inline string getCcompany() const { DARABONBA_PTR_GET_DEFAULT(ccompany_, "") };
    inline QueryDomainListRequest& setCcompany(string ccompany) { DARABONBA_PTR_SET_VALUE(ccompany_, ccompany) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainListRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endExpirationDate Field Functions 
    bool hasEndExpirationDate() const { return this->endExpirationDate_ != nullptr;};
    void deleteEndExpirationDate() { this->endExpirationDate_ = nullptr;};
    inline int64_t getEndExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(endExpirationDate_, 0L) };
    inline QueryDomainListRequest& setEndExpirationDate(int64_t endExpirationDate) { DARABONBA_PTR_SET_VALUE(endExpirationDate_, endExpirationDate) };


    // endRegistrationDate Field Functions 
    bool hasEndRegistrationDate() const { return this->endRegistrationDate_ != nullptr;};
    void deleteEndRegistrationDate() { this->endRegistrationDate_ = nullptr;};
    inline int64_t getEndRegistrationDate() const { DARABONBA_PTR_GET_DEFAULT(endRegistrationDate_, 0L) };
    inline QueryDomainListRequest& setEndRegistrationDate(int64_t endRegistrationDate) { DARABONBA_PTR_SET_VALUE(endRegistrationDate_, endRegistrationDate) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryDomainListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // orderByType Field Functions 
    bool hasOrderByType() const { return this->orderByType_ != nullptr;};
    void deleteOrderByType() { this->orderByType_ = nullptr;};
    inline string getOrderByType() const { DARABONBA_PTR_GET_DEFAULT(orderByType_, "") };
    inline QueryDomainListRequest& setOrderByType(string orderByType) { DARABONBA_PTR_SET_VALUE(orderByType_, orderByType) };


    // orderKeyType Field Functions 
    bool hasOrderKeyType() const { return this->orderKeyType_ != nullptr;};
    void deleteOrderKeyType() { this->orderKeyType_ = nullptr;};
    inline string getOrderKeyType() const { DARABONBA_PTR_GET_DEFAULT(orderKeyType_, "") };
    inline QueryDomainListRequest& setOrderKeyType(string orderKeyType) { DARABONBA_PTR_SET_VALUE(orderKeyType_, orderKeyType) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryDomainListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryDomainListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productDomainType Field Functions 
    bool hasProductDomainType() const { return this->productDomainType_ != nullptr;};
    void deleteProductDomainType() { this->productDomainType_ = nullptr;};
    inline string getProductDomainType() const { DARABONBA_PTR_GET_DEFAULT(productDomainType_, "") };
    inline QueryDomainListRequest& setProductDomainType(string productDomainType) { DARABONBA_PTR_SET_VALUE(productDomainType_, productDomainType) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline QueryDomainListRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // startExpirationDate Field Functions 
    bool hasStartExpirationDate() const { return this->startExpirationDate_ != nullptr;};
    void deleteStartExpirationDate() { this->startExpirationDate_ = nullptr;};
    inline int64_t getStartExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(startExpirationDate_, 0L) };
    inline QueryDomainListRequest& setStartExpirationDate(int64_t startExpirationDate) { DARABONBA_PTR_SET_VALUE(startExpirationDate_, startExpirationDate) };


    // startRegistrationDate Field Functions 
    bool hasStartRegistrationDate() const { return this->startRegistrationDate_ != nullptr;};
    void deleteStartRegistrationDate() { this->startRegistrationDate_ = nullptr;};
    inline int64_t getStartRegistrationDate() const { DARABONBA_PTR_GET_DEFAULT(startRegistrationDate_, 0L) };
    inline QueryDomainListRequest& setStartRegistrationDate(int64_t startRegistrationDate) { DARABONBA_PTR_SET_VALUE(startRegistrationDate_, startRegistrationDate) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryDomainListRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    shared_ptr<string> ccompany_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<int64_t> endExpirationDate_ {};
    shared_ptr<int64_t> endRegistrationDate_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> orderByType_ {};
    shared_ptr<string> orderKeyType_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNum_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> productDomainType_ {};
    shared_ptr<string> queryType_ {};
    shared_ptr<int64_t> startExpirationDate_ {};
    shared_ptr<int64_t> startRegistrationDate_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DomainIntl20171218
#endif
