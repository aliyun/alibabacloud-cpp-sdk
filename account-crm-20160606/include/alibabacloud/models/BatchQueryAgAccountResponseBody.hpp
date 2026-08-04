// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYAGACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYAGACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class BatchQueryAgAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryAgAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgAccounts, agAccounts_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryAgAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgAccounts, agAccounts_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchQueryAgAccountResponseBody() = default ;
    BatchQueryAgAccountResponseBody(const BatchQueryAgAccountResponseBody &) = default ;
    BatchQueryAgAccountResponseBody(BatchQueryAgAccountResponseBody &&) = default ;
    BatchQueryAgAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryAgAccountResponseBody() = default ;
    BatchQueryAgAccountResponseBody& operator=(const BatchQueryAgAccountResponseBody &) = default ;
    BatchQueryAgAccountResponseBody& operator=(BatchQueryAgAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AgAccounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgAccounts& obj) { 
        DARABONBA_PTR_TO_JSON(LoginEmail, loginEmail_);
        DARABONBA_PTR_TO_JSON(Pk, pk_);
        DARABONBA_PTR_TO_JSON(ShowNickName, showNickName_);
      };
      friend void from_json(const Darabonba::Json& j, AgAccounts& obj) { 
        DARABONBA_PTR_FROM_JSON(LoginEmail, loginEmail_);
        DARABONBA_PTR_FROM_JSON(Pk, pk_);
        DARABONBA_PTR_FROM_JSON(ShowNickName, showNickName_);
      };
      AgAccounts() = default ;
      AgAccounts(const AgAccounts &) = default ;
      AgAccounts(AgAccounts &&) = default ;
      AgAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgAccounts() = default ;
      AgAccounts& operator=(const AgAccounts &) = default ;
      AgAccounts& operator=(AgAccounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->loginEmail_ == nullptr
        && this->pk_ == nullptr && this->showNickName_ == nullptr; };
      // loginEmail Field Functions 
      bool hasLoginEmail() const { return this->loginEmail_ != nullptr;};
      void deleteLoginEmail() { this->loginEmail_ = nullptr;};
      inline string getLoginEmail() const { DARABONBA_PTR_GET_DEFAULT(loginEmail_, "") };
      inline AgAccounts& setLoginEmail(string loginEmail) { DARABONBA_PTR_SET_VALUE(loginEmail_, loginEmail) };


      // pk Field Functions 
      bool hasPk() const { return this->pk_ != nullptr;};
      void deletePk() { this->pk_ = nullptr;};
      inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
      inline AgAccounts& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


      // showNickName Field Functions 
      bool hasShowNickName() const { return this->showNickName_ != nullptr;};
      void deleteShowNickName() { this->showNickName_ = nullptr;};
      inline string getShowNickName() const { DARABONBA_PTR_GET_DEFAULT(showNickName_, "") };
      inline AgAccounts& setShowNickName(string showNickName) { DARABONBA_PTR_SET_VALUE(showNickName_, showNickName) };


    protected:
      shared_ptr<string> loginEmail_ {};
      shared_ptr<string> pk_ {};
      shared_ptr<string> showNickName_ {};
    };

    virtual bool empty() const override { return this->agAccounts_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // agAccounts Field Functions 
    bool hasAgAccounts() const { return this->agAccounts_ != nullptr;};
    void deleteAgAccounts() { this->agAccounts_ = nullptr;};
    inline const vector<BatchQueryAgAccountResponseBody::AgAccounts> & getAgAccounts() const { DARABONBA_PTR_GET_CONST(agAccounts_, vector<BatchQueryAgAccountResponseBody::AgAccounts>) };
    inline vector<BatchQueryAgAccountResponseBody::AgAccounts> getAgAccounts() { DARABONBA_PTR_GET(agAccounts_, vector<BatchQueryAgAccountResponseBody::AgAccounts>) };
    inline BatchQueryAgAccountResponseBody& setAgAccounts(const vector<BatchQueryAgAccountResponseBody::AgAccounts> & agAccounts) { DARABONBA_PTR_SET_VALUE(agAccounts_, agAccounts) };
    inline BatchQueryAgAccountResponseBody& setAgAccounts(vector<BatchQueryAgAccountResponseBody::AgAccounts> && agAccounts) { DARABONBA_PTR_SET_RVALUE(agAccounts_, agAccounts) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchQueryAgAccountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchQueryAgAccountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchQueryAgAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchQueryAgAccountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<BatchQueryAgAccountResponseBody::AgAccounts>> agAccounts_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
