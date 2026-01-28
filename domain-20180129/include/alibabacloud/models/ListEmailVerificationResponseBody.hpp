// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEMAILVERIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEMAILVERIFICATIONRESPONSEBODY_HPP_
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
  class ListEmailVerificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEmailVerificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrePage, prePage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_TO_JSON(TotalPageNum, totalPageNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListEmailVerificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPageNum, currentPageNum_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrePage, prePage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItemNum, totalItemNum_);
      DARABONBA_PTR_FROM_JSON(TotalPageNum, totalPageNum_);
    };
    ListEmailVerificationResponseBody() = default ;
    ListEmailVerificationResponseBody(const ListEmailVerificationResponseBody &) = default ;
    ListEmailVerificationResponseBody(ListEmailVerificationResponseBody &&) = default ;
    ListEmailVerificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEmailVerificationResponseBody() = default ;
    ListEmailVerificationResponseBody& operator=(const ListEmailVerificationResponseBody &) = default ;
    ListEmailVerificationResponseBody& operator=(ListEmailVerificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConfirmIp, confirmIp_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(EmailVerificationNo, emailVerificationNo_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(SendIp, sendIp_);
        DARABONBA_PTR_TO_JSON(TokenSendTime, tokenSendTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(VerificationStatus, verificationStatus_);
        DARABONBA_PTR_TO_JSON(VerificationTime, verificationTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfirmIp, confirmIp_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(EmailVerificationNo, emailVerificationNo_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(SendIp, sendIp_);
        DARABONBA_PTR_FROM_JSON(TokenSendTime, tokenSendTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(VerificationStatus, verificationStatus_);
        DARABONBA_PTR_FROM_JSON(VerificationTime, verificationTime_);
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
      virtual bool empty() const override { return this->confirmIp_ == nullptr
        && this->email_ == nullptr && this->emailVerificationNo_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->sendIp_ == nullptr
        && this->tokenSendTime_ == nullptr && this->userId_ == nullptr && this->verificationStatus_ == nullptr && this->verificationTime_ == nullptr; };
      // confirmIp Field Functions 
      bool hasConfirmIp() const { return this->confirmIp_ != nullptr;};
      void deleteConfirmIp() { this->confirmIp_ = nullptr;};
      inline string getConfirmIp() const { DARABONBA_PTR_GET_DEFAULT(confirmIp_, "") };
      inline Data& setConfirmIp(string confirmIp) { DARABONBA_PTR_SET_VALUE(confirmIp_, confirmIp) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // emailVerificationNo Field Functions 
      bool hasEmailVerificationNo() const { return this->emailVerificationNo_ != nullptr;};
      void deleteEmailVerificationNo() { this->emailVerificationNo_ = nullptr;};
      inline string getEmailVerificationNo() const { DARABONBA_PTR_GET_DEFAULT(emailVerificationNo_, "") };
      inline Data& setEmailVerificationNo(string emailVerificationNo) { DARABONBA_PTR_SET_VALUE(emailVerificationNo_, emailVerificationNo) };


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


      // sendIp Field Functions 
      bool hasSendIp() const { return this->sendIp_ != nullptr;};
      void deleteSendIp() { this->sendIp_ = nullptr;};
      inline string getSendIp() const { DARABONBA_PTR_GET_DEFAULT(sendIp_, "") };
      inline Data& setSendIp(string sendIp) { DARABONBA_PTR_SET_VALUE(sendIp_, sendIp) };


      // tokenSendTime Field Functions 
      bool hasTokenSendTime() const { return this->tokenSendTime_ != nullptr;};
      void deleteTokenSendTime() { this->tokenSendTime_ = nullptr;};
      inline string getTokenSendTime() const { DARABONBA_PTR_GET_DEFAULT(tokenSendTime_, "") };
      inline Data& setTokenSendTime(string tokenSendTime) { DARABONBA_PTR_SET_VALUE(tokenSendTime_, tokenSendTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // verificationStatus Field Functions 
      bool hasVerificationStatus() const { return this->verificationStatus_ != nullptr;};
      void deleteVerificationStatus() { this->verificationStatus_ = nullptr;};
      inline int32_t getVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(verificationStatus_, 0) };
      inline Data& setVerificationStatus(int32_t verificationStatus) { DARABONBA_PTR_SET_VALUE(verificationStatus_, verificationStatus) };


      // verificationTime Field Functions 
      bool hasVerificationTime() const { return this->verificationTime_ != nullptr;};
      void deleteVerificationTime() { this->verificationTime_ = nullptr;};
      inline string getVerificationTime() const { DARABONBA_PTR_GET_DEFAULT(verificationTime_, "") };
      inline Data& setVerificationTime(string verificationTime) { DARABONBA_PTR_SET_VALUE(verificationTime_, verificationTime) };


    protected:
      shared_ptr<string> confirmIp_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> emailVerificationNo_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> sendIp_ {};
      shared_ptr<string> tokenSendTime_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<int32_t> verificationStatus_ {};
      shared_ptr<string> verificationTime_ {};
    };

    virtual bool empty() const override { return this->currentPageNum_ == nullptr
        && this->data_ == nullptr && this->nextPage_ == nullptr && this->pageSize_ == nullptr && this->prePage_ == nullptr && this->requestId_ == nullptr
        && this->totalItemNum_ == nullptr && this->totalPageNum_ == nullptr; };
    // currentPageNum Field Functions 
    bool hasCurrentPageNum() const { return this->currentPageNum_ != nullptr;};
    void deleteCurrentPageNum() { this->currentPageNum_ = nullptr;};
    inline int32_t getCurrentPageNum() const { DARABONBA_PTR_GET_DEFAULT(currentPageNum_, 0) };
    inline ListEmailVerificationResponseBody& setCurrentPageNum(int32_t currentPageNum) { DARABONBA_PTR_SET_VALUE(currentPageNum_, currentPageNum) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListEmailVerificationResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListEmailVerificationResponseBody::Data>) };
    inline vector<ListEmailVerificationResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListEmailVerificationResponseBody::Data>) };
    inline ListEmailVerificationResponseBody& setData(const vector<ListEmailVerificationResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEmailVerificationResponseBody& setData(vector<ListEmailVerificationResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline bool getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, false) };
    inline ListEmailVerificationResponseBody& setNextPage(bool nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEmailVerificationResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // prePage Field Functions 
    bool hasPrePage() const { return this->prePage_ != nullptr;};
    void deletePrePage() { this->prePage_ = nullptr;};
    inline bool getPrePage() const { DARABONBA_PTR_GET_DEFAULT(prePage_, false) };
    inline ListEmailVerificationResponseBody& setPrePage(bool prePage) { DARABONBA_PTR_SET_VALUE(prePage_, prePage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEmailVerificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItemNum Field Functions 
    bool hasTotalItemNum() const { return this->totalItemNum_ != nullptr;};
    void deleteTotalItemNum() { this->totalItemNum_ = nullptr;};
    inline int32_t getTotalItemNum() const { DARABONBA_PTR_GET_DEFAULT(totalItemNum_, 0) };
    inline ListEmailVerificationResponseBody& setTotalItemNum(int32_t totalItemNum) { DARABONBA_PTR_SET_VALUE(totalItemNum_, totalItemNum) };


    // totalPageNum Field Functions 
    bool hasTotalPageNum() const { return this->totalPageNum_ != nullptr;};
    void deleteTotalPageNum() { this->totalPageNum_ = nullptr;};
    inline int32_t getTotalPageNum() const { DARABONBA_PTR_GET_DEFAULT(totalPageNum_, 0) };
    inline ListEmailVerificationResponseBody& setTotalPageNum(int32_t totalPageNum) { DARABONBA_PTR_SET_VALUE(totalPageNum_, totalPageNum) };


  protected:
    shared_ptr<int32_t> currentPageNum_ {};
    shared_ptr<vector<ListEmailVerificationResponseBody::Data>> data_ {};
    shared_ptr<bool> nextPage_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<bool> prePage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItemNum_ {};
    shared_ptr<int32_t> totalPageNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
