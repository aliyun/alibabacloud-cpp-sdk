// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDOMAINLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDOMAINLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20160511
{
namespace Models
{
  class QueryDomainListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDomainListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeadEndDate, deadEndDate_);
      DARABONBA_PTR_TO_JSON(DeadStartDate, deadStartDate_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OrderByType, orderByType_);
      DARABONBA_PTR_TO_JSON(OrderKeyType, orderKeyType_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductDomainType, productDomainType_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(RegEndDate, regEndDate_);
      DARABONBA_PTR_TO_JSON(RegStartDate, regStartDate_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDomainListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeadEndDate, deadEndDate_);
      DARABONBA_PTR_FROM_JSON(DeadStartDate, deadStartDate_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OrderByType, orderByType_);
      DARABONBA_PTR_FROM_JSON(OrderKeyType, orderKeyType_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductDomainType, productDomainType_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(RegEndDate, regEndDate_);
      DARABONBA_PTR_FROM_JSON(RegStartDate, regStartDate_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
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
    virtual bool empty() const override { return this->deadEndDate_ == nullptr
        && this->deadStartDate_ == nullptr && this->domainName_ == nullptr && this->domainType_ == nullptr && this->endDate_ == nullptr && this->groupId_ == nullptr
        && this->lang_ == nullptr && this->orderByType_ == nullptr && this->orderKeyType_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
        && this->productDomainType_ == nullptr && this->queryType_ == nullptr && this->regEndDate_ == nullptr && this->regStartDate_ == nullptr && this->startDate_ == nullptr
        && this->userClientIp_ == nullptr; };
    // deadEndDate Field Functions 
    bool hasDeadEndDate() const { return this->deadEndDate_ != nullptr;};
    void deleteDeadEndDate() { this->deadEndDate_ = nullptr;};
    inline int64_t getDeadEndDate() const { DARABONBA_PTR_GET_DEFAULT(deadEndDate_, 0L) };
    inline QueryDomainListRequest& setDeadEndDate(int64_t deadEndDate) { DARABONBA_PTR_SET_VALUE(deadEndDate_, deadEndDate) };


    // deadStartDate Field Functions 
    bool hasDeadStartDate() const { return this->deadStartDate_ != nullptr;};
    void deleteDeadStartDate() { this->deadStartDate_ = nullptr;};
    inline int64_t getDeadStartDate() const { DARABONBA_PTR_GET_DEFAULT(deadStartDate_, 0L) };
    inline QueryDomainListRequest& setDeadStartDate(int64_t deadStartDate) { DARABONBA_PTR_SET_VALUE(deadStartDate_, deadStartDate) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryDomainListRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline QueryDomainListRequest& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryDomainListRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline QueryDomainListRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


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


    // regEndDate Field Functions 
    bool hasRegEndDate() const { return this->regEndDate_ != nullptr;};
    void deleteRegEndDate() { this->regEndDate_ = nullptr;};
    inline int64_t getRegEndDate() const { DARABONBA_PTR_GET_DEFAULT(regEndDate_, 0L) };
    inline QueryDomainListRequest& setRegEndDate(int64_t regEndDate) { DARABONBA_PTR_SET_VALUE(regEndDate_, regEndDate) };


    // regStartDate Field Functions 
    bool hasRegStartDate() const { return this->regStartDate_ != nullptr;};
    void deleteRegStartDate() { this->regStartDate_ = nullptr;};
    inline int64_t getRegStartDate() const { DARABONBA_PTR_GET_DEFAULT(regStartDate_, 0L) };
    inline QueryDomainListRequest& setRegStartDate(int64_t regStartDate) { DARABONBA_PTR_SET_VALUE(regStartDate_, regStartDate) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryDomainListRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryDomainListRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // The end of the time range to query based on the time when domain names expire.
    shared_ptr<int64_t> deadEndDate_ {};
    // The beginning of the time range to query based on the time when domain names expire.
    shared_ptr<int64_t> deadStartDate_ {};
    // The domain name.
    shared_ptr<string> domainName_ {};
    // The type of the domain name. Valid values:
    // 
    // GUOJI, TONGYONG, GUONEI, NAME, and WEIBO.
    shared_ptr<string> domainType_ {};
    // The end of the time range to query based on the time when domain names expire.
    shared_ptr<string> endDate_ {};
    // The group ID.
    shared_ptr<string> groupId_ {};
    // The language of the error message to return if the request fails. Valid values:
    // 
    // zh: Chinese. en: English.
    shared_ptr<string> lang_ {};
    // The order in which you want to sort the queried domain names. Valid values:
    // 
    // ASC: ascending order. DESC: descending order.
    shared_ptr<string> orderByType_ {};
    // The field by which domain names to be queried are sorted. Valid values:
    // 
    // REGDATE: registration time. DEADDATE: expiration time. CREATEDATE: creation time.
    shared_ptr<string> orderKeyType_ {};
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The product type of the domain name. Valid values:
    // 
    // New gTLD, gTLD, ccTLD, and other.
    shared_ptr<string> productDomainType_ {};
    // The type of the query. Valid values:
    // 
    // 1: renewal. 2: redemption. 4: transfer.
    shared_ptr<string> queryType_ {};
    // The end of the time range to query based on the time when domain names were registered.
    shared_ptr<int64_t> regEndDate_ {};
    // The beginning of the time range to query based on the time when domain names were registered.
    shared_ptr<int64_t> regStartDate_ {};
    // The beginning of the time range to query based on the time when domain names expire.
    shared_ptr<string> startDate_ {};
    // The IP address of the client. Set the value to 127.0.0.1.
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20160511
#endif
