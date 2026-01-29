// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFINANCIALACCOUNTINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFINANCIALACCOUNTINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryFinancialAccountInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFinancialAccountInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFinancialAccountInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryFinancialAccountInfoResponseBody() = default ;
    QueryFinancialAccountInfoResponseBody(const QueryFinancialAccountInfoResponseBody &) = default ;
    QueryFinancialAccountInfoResponseBody(QueryFinancialAccountInfoResponseBody &&) = default ;
    QueryFinancialAccountInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFinancialAccountInfoResponseBody() = default ;
    QueryFinancialAccountInfoResponseBody& operator=(const QueryFinancialAccountInfoResponseBody &) = default ;
    QueryFinancialAccountInfoResponseBody& operator=(QueryFinancialAccountInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(IsFinancialAccount, isFinancialAccount_);
        DARABONBA_PTR_TO_JSON(MemberGroupId, memberGroupId_);
        DARABONBA_PTR_TO_JSON(MemberGroupName, memberGroupName_);
        DARABONBA_PTR_TO_JSON(MemberNickName, memberNickName_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(IsFinancialAccount, isFinancialAccount_);
        DARABONBA_PTR_FROM_JSON(MemberGroupId, memberGroupId_);
        DARABONBA_PTR_FROM_JSON(MemberGroupName, memberGroupName_);
        DARABONBA_PTR_FROM_JSON(MemberNickName, memberNickName_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
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
      virtual bool empty() const override { return this->accountType_ == nullptr
        && this->isFinancialAccount_ == nullptr && this->memberGroupId_ == nullptr && this->memberGroupName_ == nullptr && this->memberNickName_ == nullptr && this->userName_ == nullptr; };
      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline Data& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // isFinancialAccount Field Functions 
      bool hasIsFinancialAccount() const { return this->isFinancialAccount_ != nullptr;};
      void deleteIsFinancialAccount() { this->isFinancialAccount_ = nullptr;};
      inline bool getIsFinancialAccount() const { DARABONBA_PTR_GET_DEFAULT(isFinancialAccount_, false) };
      inline Data& setIsFinancialAccount(bool isFinancialAccount) { DARABONBA_PTR_SET_VALUE(isFinancialAccount_, isFinancialAccount) };


      // memberGroupId Field Functions 
      bool hasMemberGroupId() const { return this->memberGroupId_ != nullptr;};
      void deleteMemberGroupId() { this->memberGroupId_ = nullptr;};
      inline int64_t getMemberGroupId() const { DARABONBA_PTR_GET_DEFAULT(memberGroupId_, 0L) };
      inline Data& setMemberGroupId(int64_t memberGroupId) { DARABONBA_PTR_SET_VALUE(memberGroupId_, memberGroupId) };


      // memberGroupName Field Functions 
      bool hasMemberGroupName() const { return this->memberGroupName_ != nullptr;};
      void deleteMemberGroupName() { this->memberGroupName_ = nullptr;};
      inline string getMemberGroupName() const { DARABONBA_PTR_GET_DEFAULT(memberGroupName_, "") };
      inline Data& setMemberGroupName(string memberGroupName) { DARABONBA_PTR_SET_VALUE(memberGroupName_, memberGroupName) };


      // memberNickName Field Functions 
      bool hasMemberNickName() const { return this->memberNickName_ != nullptr;};
      void deleteMemberNickName() { this->memberNickName_ = nullptr;};
      inline string getMemberNickName() const { DARABONBA_PTR_GET_DEFAULT(memberNickName_, "") };
      inline Data& setMemberNickName(string memberNickName) { DARABONBA_PTR_SET_VALUE(memberNickName_, memberNickName) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Data& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The type of the financial account. A value of MASTER indicates that the account is a management account. A value of MEMBER indicates that the account is a member.
      shared_ptr<string> accountType_ {};
      // Indicates whether the account is a financial account. A value of true indicates that the account is a financial account. A value of false indicates that the account is not a financial account.
      shared_ptr<bool> isFinancialAccount_ {};
      // The ID of the group to which the member belongs.
      shared_ptr<int64_t> memberGroupId_ {};
      // The name of the group to which the member belongs.
      shared_ptr<string> memberGroupName_ {};
      // The display name of the member.
      shared_ptr<string> memberNickName_ {};
      // The username of the account.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryFinancialAccountInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryFinancialAccountInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryFinancialAccountInfoResponseBody::Data) };
    inline QueryFinancialAccountInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryFinancialAccountInfoResponseBody::Data) };
    inline QueryFinancialAccountInfoResponseBody& setData(const QueryFinancialAccountInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryFinancialAccountInfoResponseBody& setData(QueryFinancialAccountInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryFinancialAccountInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFinancialAccountInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryFinancialAccountInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryFinancialAccountInfoResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
