// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class ListServerLockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerLockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginStartDate, beginStartDate_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndExpireDate, endExpireDate_);
      DARABONBA_PTR_TO_JSON(EndStartDate, endStartDate_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LockProductId, lockProductId_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OrderByType, orderByType_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ServerLockStatus, serverLockStatus_);
      DARABONBA_PTR_TO_JSON(StartExpireDate, startExpireDate_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerLockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginStartDate, beginStartDate_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndExpireDate, endExpireDate_);
      DARABONBA_PTR_FROM_JSON(EndStartDate, endStartDate_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LockProductId, lockProductId_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OrderByType, orderByType_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ServerLockStatus, serverLockStatus_);
      DARABONBA_PTR_FROM_JSON(StartExpireDate, startExpireDate_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    ListServerLockRequest() = default ;
    ListServerLockRequest(const ListServerLockRequest &) = default ;
    ListServerLockRequest(ListServerLockRequest &&) = default ;
    ListServerLockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerLockRequest() = default ;
    ListServerLockRequest& operator=(const ListServerLockRequest &) = default ;
    ListServerLockRequest& operator=(ListServerLockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginStartDate_ == nullptr
        && this->domainName_ == nullptr && this->endExpireDate_ == nullptr && this->endStartDate_ == nullptr && this->lang_ == nullptr && this->lockProductId_ == nullptr
        && this->orderBy_ == nullptr && this->orderByType_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->serverLockStatus_ == nullptr
        && this->startExpireDate_ == nullptr && this->userClientIp_ == nullptr; };
    // beginStartDate Field Functions 
    bool hasBeginStartDate() const { return this->beginStartDate_ != nullptr;};
    void deleteBeginStartDate() { this->beginStartDate_ = nullptr;};
    inline int64_t getBeginStartDate() const { DARABONBA_PTR_GET_DEFAULT(beginStartDate_, 0L) };
    inline ListServerLockRequest& setBeginStartDate(int64_t beginStartDate) { DARABONBA_PTR_SET_VALUE(beginStartDate_, beginStartDate) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListServerLockRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endExpireDate Field Functions 
    bool hasEndExpireDate() const { return this->endExpireDate_ != nullptr;};
    void deleteEndExpireDate() { this->endExpireDate_ = nullptr;};
    inline int64_t getEndExpireDate() const { DARABONBA_PTR_GET_DEFAULT(endExpireDate_, 0L) };
    inline ListServerLockRequest& setEndExpireDate(int64_t endExpireDate) { DARABONBA_PTR_SET_VALUE(endExpireDate_, endExpireDate) };


    // endStartDate Field Functions 
    bool hasEndStartDate() const { return this->endStartDate_ != nullptr;};
    void deleteEndStartDate() { this->endStartDate_ = nullptr;};
    inline int64_t getEndStartDate() const { DARABONBA_PTR_GET_DEFAULT(endStartDate_, 0L) };
    inline ListServerLockRequest& setEndStartDate(int64_t endStartDate) { DARABONBA_PTR_SET_VALUE(endStartDate_, endStartDate) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListServerLockRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lockProductId Field Functions 
    bool hasLockProductId() const { return this->lockProductId_ != nullptr;};
    void deleteLockProductId() { this->lockProductId_ = nullptr;};
    inline string getLockProductId() const { DARABONBA_PTR_GET_DEFAULT(lockProductId_, "") };
    inline ListServerLockRequest& setLockProductId(string lockProductId) { DARABONBA_PTR_SET_VALUE(lockProductId_, lockProductId) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListServerLockRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderByType Field Functions 
    bool hasOrderByType() const { return this->orderByType_ != nullptr;};
    void deleteOrderByType() { this->orderByType_ = nullptr;};
    inline string getOrderByType() const { DARABONBA_PTR_GET_DEFAULT(orderByType_, "") };
    inline ListServerLockRequest& setOrderByType(string orderByType) { DARABONBA_PTR_SET_VALUE(orderByType_, orderByType) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListServerLockRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListServerLockRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // serverLockStatus Field Functions 
    bool hasServerLockStatus() const { return this->serverLockStatus_ != nullptr;};
    void deleteServerLockStatus() { this->serverLockStatus_ = nullptr;};
    inline int32_t getServerLockStatus() const { DARABONBA_PTR_GET_DEFAULT(serverLockStatus_, 0) };
    inline ListServerLockRequest& setServerLockStatus(int32_t serverLockStatus) { DARABONBA_PTR_SET_VALUE(serverLockStatus_, serverLockStatus) };


    // startExpireDate Field Functions 
    bool hasStartExpireDate() const { return this->startExpireDate_ != nullptr;};
    void deleteStartExpireDate() { this->startExpireDate_ = nullptr;};
    inline int64_t getStartExpireDate() const { DARABONBA_PTR_GET_DEFAULT(startExpireDate_, 0L) };
    inline ListServerLockRequest& setStartExpireDate(int64_t startExpireDate) { DARABONBA_PTR_SET_VALUE(startExpireDate_, startExpireDate) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline ListServerLockRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // The start of the time range to query.
    shared_ptr<int64_t> beginStartDate_ {};
    // The domain name for which you want to query the enabled registry lock.
    shared_ptr<string> domainName_ {};
    // The end of the expiration time.
    shared_ptr<int64_t> endExpireDate_ {};
    // The end of the time range to query.
    shared_ptr<int64_t> endStartDate_ {};
    // The language of the error message to return if the request fails. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: en.
    shared_ptr<string> lang_ {};
    // The ID of the product to which the domain name with the registry lock enabled belongs.
    shared_ptr<string> lockProductId_ {};
    // The field that you use to sort the query results.
    // 
    // Valid values:
    // 
    // *   EXPIRE_DATE
    shared_ptr<string> orderBy_ {};
    // The order of the information based on which you want to sort the domain names, such as the registration date and expiration date. Valid values: ASC and DESC. The value ASC specifies the ascending order. The value DESC specifies the descending order. If this parameter is not configured, the default value DESC is used.
    shared_ptr<string> orderByType_ {};
    // The page number.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The status of the registry lock. Valid values:
    // 
    // *   1: The registry lock is not enabled.
    // *   2: The registry lock is enabled.
    // *   3: The registry lock is disabled.
    shared_ptr<int32_t> serverLockStatus_ {};
    // The start of the expiration time.
    shared_ptr<int64_t> startExpireDate_ {};
    // The IP address of the client. For example, you can set the value to **127.0.0.1**.
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
