// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSERVERLOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSERVERLOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryServerLockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryServerLockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainInstanceId, domainInstanceId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(LockInstanceId, lockInstanceId_);
      DARABONBA_PTR_TO_JSON(LockProductId, lockProductId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServerLockStatus, serverLockStatus_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryServerLockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainInstanceId, domainInstanceId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(LockInstanceId, lockInstanceId_);
      DARABONBA_PTR_FROM_JSON(LockProductId, lockProductId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServerLockStatus, serverLockStatus_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryServerLockResponseBody() = default ;
    QueryServerLockResponseBody(const QueryServerLockResponseBody &) = default ;
    QueryServerLockResponseBody(QueryServerLockResponseBody &&) = default ;
    QueryServerLockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryServerLockResponseBody() = default ;
    QueryServerLockResponseBody& operator=(const QueryServerLockResponseBody &) = default ;
    QueryServerLockResponseBody& operator=(QueryServerLockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainInstanceId_ == nullptr
        && this->domainName_ == nullptr && this->expireDate_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->lockInstanceId_ == nullptr
        && this->lockProductId_ == nullptr && this->requestId_ == nullptr && this->serverLockStatus_ == nullptr && this->startDate_ == nullptr && this->userId_ == nullptr; };
    // domainInstanceId Field Functions 
    bool hasDomainInstanceId() const { return this->domainInstanceId_ != nullptr;};
    void deleteDomainInstanceId() { this->domainInstanceId_ = nullptr;};
    inline string getDomainInstanceId() const { DARABONBA_PTR_GET_DEFAULT(domainInstanceId_, "") };
    inline QueryServerLockResponseBody& setDomainInstanceId(string domainInstanceId) { DARABONBA_PTR_SET_VALUE(domainInstanceId_, domainInstanceId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryServerLockResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline QueryServerLockResponseBody& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryServerLockResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryServerLockResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // lockInstanceId Field Functions 
    bool hasLockInstanceId() const { return this->lockInstanceId_ != nullptr;};
    void deleteLockInstanceId() { this->lockInstanceId_ = nullptr;};
    inline string getLockInstanceId() const { DARABONBA_PTR_GET_DEFAULT(lockInstanceId_, "") };
    inline QueryServerLockResponseBody& setLockInstanceId(string lockInstanceId) { DARABONBA_PTR_SET_VALUE(lockInstanceId_, lockInstanceId) };


    // lockProductId Field Functions 
    bool hasLockProductId() const { return this->lockProductId_ != nullptr;};
    void deleteLockProductId() { this->lockProductId_ = nullptr;};
    inline string getLockProductId() const { DARABONBA_PTR_GET_DEFAULT(lockProductId_, "") };
    inline QueryServerLockResponseBody& setLockProductId(string lockProductId) { DARABONBA_PTR_SET_VALUE(lockProductId_, lockProductId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryServerLockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serverLockStatus Field Functions 
    bool hasServerLockStatus() const { return this->serverLockStatus_ != nullptr;};
    void deleteServerLockStatus() { this->serverLockStatus_ = nullptr;};
    inline int32_t getServerLockStatus() const { DARABONBA_PTR_GET_DEFAULT(serverLockStatus_, 0) };
    inline QueryServerLockResponseBody& setServerLockStatus(int32_t serverLockStatus) { DARABONBA_PTR_SET_VALUE(serverLockStatus_, serverLockStatus) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryServerLockResponseBody& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryServerLockResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> domainInstanceId_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<string> expireDate_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> lockInstanceId_ {};
    shared_ptr<string> lockProductId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> serverLockStatus_ {};
    shared_ptr<string> startDate_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
