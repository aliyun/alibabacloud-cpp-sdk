// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHANDACTIVEWITHHIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_AUTHANDACTIVEWITHHIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class AuthAndActiveWithHidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthAndActiveWithHidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AuthAndActiveWithHidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AuthAndActiveWithHidResponseBody() = default ;
    AuthAndActiveWithHidResponseBody(const AuthAndActiveWithHidResponseBody &) = default ;
    AuthAndActiveWithHidResponseBody(AuthAndActiveWithHidResponseBody &&) = default ;
    AuthAndActiveWithHidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthAndActiveWithHidResponseBody() = default ;
    AuthAndActiveWithHidResponseBody& operator=(const AuthAndActiveWithHidResponseBody &) = default ;
    AuthAndActiveWithHidResponseBody& operator=(AuthAndActiveWithHidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountModel, accountModel_);
        DARABONBA_PTR_TO_JSON(SessionModel, sessionModel_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountModel, accountModel_);
        DARABONBA_PTR_FROM_JSON(SessionModel, sessionModel_);
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
      class SessionModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SessionModel& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunPK, aliyunPK_);
          DARABONBA_PTR_TO_JSON(LoginTicket, loginTicket_);
        };
        friend void from_json(const Darabonba::Json& j, SessionModel& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunPK, aliyunPK_);
          DARABONBA_PTR_FROM_JSON(LoginTicket, loginTicket_);
        };
        SessionModel() = default ;
        SessionModel(const SessionModel &) = default ;
        SessionModel(SessionModel &&) = default ;
        SessionModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SessionModel() = default ;
        SessionModel& operator=(const SessionModel &) = default ;
        SessionModel& operator=(SessionModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliyunPK_ == nullptr
        && this->loginTicket_ == nullptr; };
        // aliyunPK Field Functions 
        bool hasAliyunPK() const { return this->aliyunPK_ != nullptr;};
        void deleteAliyunPK() { this->aliyunPK_ = nullptr;};
        inline string getAliyunPK() const { DARABONBA_PTR_GET_DEFAULT(aliyunPK_, "") };
        inline SessionModel& setAliyunPK(string aliyunPK) { DARABONBA_PTR_SET_VALUE(aliyunPK_, aliyunPK) };


        // loginTicket Field Functions 
        bool hasLoginTicket() const { return this->loginTicket_ != nullptr;};
        void deleteLoginTicket() { this->loginTicket_ = nullptr;};
        inline string getLoginTicket() const { DARABONBA_PTR_GET_DEFAULT(loginTicket_, "") };
        inline SessionModel& setLoginTicket(string loginTicket) { DARABONBA_PTR_SET_VALUE(loginTicket_, loginTicket) };


      protected:
        shared_ptr<string> aliyunPK_ {};
        shared_ptr<string> loginTicket_ {};
      };

      class AccountModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccountModel& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(HavanaId, havanaId_);
          DARABONBA_PTR_TO_JSON(Mobile, mobile_);
          DARABONBA_PTR_TO_JSON(PK, PK_);
        };
        friend void from_json(const Darabonba::Json& j, AccountModel& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(HavanaId, havanaId_);
          DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
          DARABONBA_PTR_FROM_JSON(PK, PK_);
        };
        AccountModel() = default ;
        AccountModel(const AccountModel &) = default ;
        AccountModel(AccountModel &&) = default ;
        AccountModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccountModel() = default ;
        AccountModel& operator=(const AccountModel &) = default ;
        AccountModel& operator=(AccountModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliyunId_ == nullptr
        && this->createTime_ == nullptr && this->email_ == nullptr && this->havanaId_ == nullptr && this->mobile_ == nullptr && this->PK_ == nullptr; };
        // aliyunId Field Functions 
        bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
        void deleteAliyunId() { this->aliyunId_ = nullptr;};
        inline string getAliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, "") };
        inline AccountModel& setAliyunId(string aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline AccountModel& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline AccountModel& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // havanaId Field Functions 
        bool hasHavanaId() const { return this->havanaId_ != nullptr;};
        void deleteHavanaId() { this->havanaId_ = nullptr;};
        inline int64_t getHavanaId() const { DARABONBA_PTR_GET_DEFAULT(havanaId_, 0L) };
        inline AccountModel& setHavanaId(int64_t havanaId) { DARABONBA_PTR_SET_VALUE(havanaId_, havanaId) };


        // mobile Field Functions 
        bool hasMobile() const { return this->mobile_ != nullptr;};
        void deleteMobile() { this->mobile_ = nullptr;};
        inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
        inline AccountModel& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


        // PK Field Functions 
        bool hasPK() const { return this->PK_ != nullptr;};
        void deletePK() { this->PK_ = nullptr;};
        inline string getPK() const { DARABONBA_PTR_GET_DEFAULT(PK_, "") };
        inline AccountModel& setPK(string PK) { DARABONBA_PTR_SET_VALUE(PK_, PK) };


      protected:
        shared_ptr<string> aliyunId_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> email_ {};
        shared_ptr<int64_t> havanaId_ {};
        shared_ptr<string> mobile_ {};
        shared_ptr<string> PK_ {};
      };

      virtual bool empty() const override { return this->accountModel_ == nullptr
        && this->sessionModel_ == nullptr; };
      // accountModel Field Functions 
      bool hasAccountModel() const { return this->accountModel_ != nullptr;};
      void deleteAccountModel() { this->accountModel_ = nullptr;};
      inline const Data::AccountModel & getAccountModel() const { DARABONBA_PTR_GET_CONST(accountModel_, Data::AccountModel) };
      inline Data::AccountModel getAccountModel() { DARABONBA_PTR_GET(accountModel_, Data::AccountModel) };
      inline Data& setAccountModel(const Data::AccountModel & accountModel) { DARABONBA_PTR_SET_VALUE(accountModel_, accountModel) };
      inline Data& setAccountModel(Data::AccountModel && accountModel) { DARABONBA_PTR_SET_RVALUE(accountModel_, accountModel) };


      // sessionModel Field Functions 
      bool hasSessionModel() const { return this->sessionModel_ != nullptr;};
      void deleteSessionModel() { this->sessionModel_ = nullptr;};
      inline const Data::SessionModel & getSessionModel() const { DARABONBA_PTR_GET_CONST(sessionModel_, Data::SessionModel) };
      inline Data::SessionModel getSessionModel() { DARABONBA_PTR_GET(sessionModel_, Data::SessionModel) };
      inline Data& setSessionModel(const Data::SessionModel & sessionModel) { DARABONBA_PTR_SET_VALUE(sessionModel_, sessionModel) };
      inline Data& setSessionModel(Data::SessionModel && sessionModel) { DARABONBA_PTR_SET_RVALUE(sessionModel_, sessionModel) };


    protected:
      shared_ptr<Data::AccountModel> accountModel_ {};
      shared_ptr<Data::SessionModel> sessionModel_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AuthAndActiveWithHidResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AuthAndActiveWithHidResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AuthAndActiveWithHidResponseBody::Data) };
    inline AuthAndActiveWithHidResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AuthAndActiveWithHidResponseBody::Data) };
    inline AuthAndActiveWithHidResponseBody& setData(const AuthAndActiveWithHidResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AuthAndActiveWithHidResponseBody& setData(AuthAndActiveWithHidResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline AuthAndActiveWithHidResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AuthAndActiveWithHidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<AuthAndActiveWithHidResponseBody::Data> data_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
