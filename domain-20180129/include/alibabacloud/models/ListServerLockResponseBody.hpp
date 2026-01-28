// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERLOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERLOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class ListServerLockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerLockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerLockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    ListServerLockResponseBody() = default ;
    ListServerLockResponseBody(const ListServerLockResponseBody &) = default ;
    ListServerLockResponseBody(ListServerLockResponseBody &&) = default ;
    ListServerLockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerLockResponseBody() = default ;
    ListServerLockResponseBody& operator=(const ListServerLockResponseBody &) = default ;
    ListServerLockResponseBody& operator=(ListServerLockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DomainInstanceId, domainInstanceId_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(LockInstanceId, lockInstanceId_);
        DARABONBA_PTR_TO_JSON(LockProductId, lockProductId_);
        DARABONBA_PTR_TO_JSON(ServerLockStatus, serverLockStatus_);
        DARABONBA_PTR_TO_JSON(StartDate, startDate_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainInstanceId, domainInstanceId_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(LockInstanceId, lockInstanceId_);
        DARABONBA_PTR_FROM_JSON(LockProductId, lockProductId_);
        DARABONBA_PTR_FROM_JSON(ServerLockStatus, serverLockStatus_);
        DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->domainInstanceId_ == nullptr
        && this->domainName_ == nullptr && this->expireDate_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->lockInstanceId_ == nullptr
        && this->lockProductId_ == nullptr && this->serverLockStatus_ == nullptr && this->startDate_ == nullptr && this->userId_ == nullptr; };
      // domainInstanceId Field Functions 
      bool hasDomainInstanceId() const { return this->domainInstanceId_ != nullptr;};
      void deleteDomainInstanceId() { this->domainInstanceId_ = nullptr;};
      inline string getDomainInstanceId() const { DARABONBA_PTR_GET_DEFAULT(domainInstanceId_, "") };
      inline Data& setDomainInstanceId(string domainInstanceId) { DARABONBA_PTR_SET_VALUE(domainInstanceId_, domainInstanceId) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Data& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
      inline Data& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // lockInstanceId Field Functions 
      bool hasLockInstanceId() const { return this->lockInstanceId_ != nullptr;};
      void deleteLockInstanceId() { this->lockInstanceId_ = nullptr;};
      inline string getLockInstanceId() const { DARABONBA_PTR_GET_DEFAULT(lockInstanceId_, "") };
      inline Data& setLockInstanceId(string lockInstanceId) { DARABONBA_PTR_SET_VALUE(lockInstanceId_, lockInstanceId) };


      // lockProductId Field Functions 
      bool hasLockProductId() const { return this->lockProductId_ != nullptr;};
      void deleteLockProductId() { this->lockProductId_ = nullptr;};
      inline string getLockProductId() const { DARABONBA_PTR_GET_DEFAULT(lockProductId_, "") };
      inline Data& setLockProductId(string lockProductId) { DARABONBA_PTR_SET_VALUE(lockProductId_, lockProductId) };


      // serverLockStatus Field Functions 
      bool hasServerLockStatus() const { return this->serverLockStatus_ != nullptr;};
      void deleteServerLockStatus() { this->serverLockStatus_ = nullptr;};
      inline string getServerLockStatus() const { DARABONBA_PTR_GET_DEFAULT(serverLockStatus_, "") };
      inline Data& setServerLockStatus(string serverLockStatus) { DARABONBA_PTR_SET_VALUE(serverLockStatus_, serverLockStatus) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
      inline Data& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The instance ID of the domain name.
      shared_ptr<string> domainInstanceId_ {};
      // The domain name that has valid registry lock information.
      shared_ptr<string> domainName_ {};
      // The expiration time.
      shared_ptr<string> expireDate_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The time when the domain name was last modified.
      shared_ptr<string> gmtModified_ {};
      // The instance ID of the domain name for which the registry lock is enabled.
      shared_ptr<string> lockInstanceId_ {};
      // The ID of the product to which the domain name with the registry lock enabled belongs.
      shared_ptr<string> lockProductId_ {};
      // The status of the registry lock.
      shared_ptr<string> serverLockStatus_ {};
      // The start time.
      shared_ptr<string> startDate_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->nextPage_ == nullptr && this->pageSize_ == nullptr && this->prePage_ == nullptr && this->requestId_ == nullptr
        && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline ListServerLockResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListServerLockResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListServerLockResponseBody::Data>) };
    inline vector<ListServerLockResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListServerLockResponseBody::Data>) };
    inline ListServerLockResponseBody& setData(const vector<ListServerLockResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListServerLockResponseBody& setData(vector<ListServerLockResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline bool getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
    inline ListServerLockResponseBody& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListServerLockResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline bool getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
    inline ListServerLockResponseBody& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServerLockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline ListServerLockResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline ListServerLockResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    // The page number.
    shared_ptr<int32_t> currentPageNum_ {};
    // The response parameters.
    shared_ptr<vector<ListServerLockResponseBody::Data>> data_ {};
    // Indicates whether the current page is followed by a page.
    shared_ptr<bool> nextPage_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // Indicates whether the current page is preceded by a page.
    shared_ptr<bool> prePage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalItemNum_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
