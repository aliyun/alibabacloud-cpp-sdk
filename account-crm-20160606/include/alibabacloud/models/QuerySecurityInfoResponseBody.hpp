// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSECURITYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSECURITYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QuerySecurityInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySecurityInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountSecurityInfoDto, accountSecurityInfoDto_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySecurityInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountSecurityInfoDto, accountSecurityInfoDto_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySecurityInfoResponseBody() = default ;
    QuerySecurityInfoResponseBody(const QuerySecurityInfoResponseBody &) = default ;
    QuerySecurityInfoResponseBody(QuerySecurityInfoResponseBody &&) = default ;
    QuerySecurityInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySecurityInfoResponseBody() = default ;
    QuerySecurityInfoResponseBody& operator=(const QuerySecurityInfoResponseBody &) = default ;
    QuerySecurityInfoResponseBody& operator=(QuerySecurityInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccountSecurityInfoDto : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccountSecurityInfoDto& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NationalityCode, nationalityCode_);
        DARABONBA_PTR_TO_JSON(Pk, pk_);
        DARABONBA_PTR_TO_JSON(ProfileType, profileType_);
        DARABONBA_PTR_TO_JSON(SecurityEmail, securityEmail_);
        DARABONBA_PTR_TO_JSON(SecurityMobile, securityMobile_);
      };
      friend void from_json(const Darabonba::Json& j, AccountSecurityInfoDto& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NationalityCode, nationalityCode_);
        DARABONBA_PTR_FROM_JSON(Pk, pk_);
        DARABONBA_PTR_FROM_JSON(ProfileType, profileType_);
        DARABONBA_PTR_FROM_JSON(SecurityEmail, securityEmail_);
        DARABONBA_PTR_FROM_JSON(SecurityMobile, securityMobile_);
      };
      AccountSecurityInfoDto() = default ;
      AccountSecurityInfoDto(const AccountSecurityInfoDto &) = default ;
      AccountSecurityInfoDto(AccountSecurityInfoDto &&) = default ;
      AccountSecurityInfoDto(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccountSecurityInfoDto() = default ;
      AccountSecurityInfoDto& operator=(const AccountSecurityInfoDto &) = default ;
      AccountSecurityInfoDto& operator=(AccountSecurityInfoDto &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliyunId_ == nullptr
        && this->name_ == nullptr && this->nationalityCode_ == nullptr && this->pk_ == nullptr && this->profileType_ == nullptr && this->securityEmail_ == nullptr
        && this->securityMobile_ == nullptr; };
      // aliyunId Field Functions 
      bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
      void deleteAliyunId() { this->aliyunId_ = nullptr;};
      inline string getAliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, "") };
      inline AccountSecurityInfoDto& setAliyunId(string aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AccountSecurityInfoDto& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nationalityCode Field Functions 
      bool hasNationalityCode() const { return this->nationalityCode_ != nullptr;};
      void deleteNationalityCode() { this->nationalityCode_ = nullptr;};
      inline string getNationalityCode() const { DARABONBA_PTR_GET_DEFAULT(nationalityCode_, "") };
      inline AccountSecurityInfoDto& setNationalityCode(string nationalityCode) { DARABONBA_PTR_SET_VALUE(nationalityCode_, nationalityCode) };


      // pk Field Functions 
      bool hasPk() const { return this->pk_ != nullptr;};
      void deletePk() { this->pk_ = nullptr;};
      inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
      inline AccountSecurityInfoDto& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


      // profileType Field Functions 
      bool hasProfileType() const { return this->profileType_ != nullptr;};
      void deleteProfileType() { this->profileType_ = nullptr;};
      inline string getProfileType() const { DARABONBA_PTR_GET_DEFAULT(profileType_, "") };
      inline AccountSecurityInfoDto& setProfileType(string profileType) { DARABONBA_PTR_SET_VALUE(profileType_, profileType) };


      // securityEmail Field Functions 
      bool hasSecurityEmail() const { return this->securityEmail_ != nullptr;};
      void deleteSecurityEmail() { this->securityEmail_ = nullptr;};
      inline string getSecurityEmail() const { DARABONBA_PTR_GET_DEFAULT(securityEmail_, "") };
      inline AccountSecurityInfoDto& setSecurityEmail(string securityEmail) { DARABONBA_PTR_SET_VALUE(securityEmail_, securityEmail) };


      // securityMobile Field Functions 
      bool hasSecurityMobile() const { return this->securityMobile_ != nullptr;};
      void deleteSecurityMobile() { this->securityMobile_ = nullptr;};
      inline string getSecurityMobile() const { DARABONBA_PTR_GET_DEFAULT(securityMobile_, "") };
      inline AccountSecurityInfoDto& setSecurityMobile(string securityMobile) { DARABONBA_PTR_SET_VALUE(securityMobile_, securityMobile) };


    protected:
      shared_ptr<string> aliyunId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> nationalityCode_ {};
      shared_ptr<string> pk_ {};
      shared_ptr<string> profileType_ {};
      shared_ptr<string> securityEmail_ {};
      shared_ptr<string> securityMobile_ {};
    };

    virtual bool empty() const override { return this->accountSecurityInfoDto_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accountSecurityInfoDto Field Functions 
    bool hasAccountSecurityInfoDto() const { return this->accountSecurityInfoDto_ != nullptr;};
    void deleteAccountSecurityInfoDto() { this->accountSecurityInfoDto_ = nullptr;};
    inline const QuerySecurityInfoResponseBody::AccountSecurityInfoDto & getAccountSecurityInfoDto() const { DARABONBA_PTR_GET_CONST(accountSecurityInfoDto_, QuerySecurityInfoResponseBody::AccountSecurityInfoDto) };
    inline QuerySecurityInfoResponseBody::AccountSecurityInfoDto getAccountSecurityInfoDto() { DARABONBA_PTR_GET(accountSecurityInfoDto_, QuerySecurityInfoResponseBody::AccountSecurityInfoDto) };
    inline QuerySecurityInfoResponseBody& setAccountSecurityInfoDto(const QuerySecurityInfoResponseBody::AccountSecurityInfoDto & accountSecurityInfoDto) { DARABONBA_PTR_SET_VALUE(accountSecurityInfoDto_, accountSecurityInfoDto) };
    inline QuerySecurityInfoResponseBody& setAccountSecurityInfoDto(QuerySecurityInfoResponseBody::AccountSecurityInfoDto && accountSecurityInfoDto) { DARABONBA_PTR_SET_RVALUE(accountSecurityInfoDto_, accountSecurityInfoDto) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySecurityInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySecurityInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySecurityInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySecurityInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<QuerySecurityInfoResponseBody::AccountSecurityInfoDto> accountSecurityInfoDto_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
