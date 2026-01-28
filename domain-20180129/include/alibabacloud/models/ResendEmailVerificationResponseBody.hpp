// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESENDEMAILVERIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESENDEMAILVERIFICATIONRESPONSEBODY_HPP_
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
  class ResendEmailVerificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResendEmailVerificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailList, failList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessList, successList_);
    };
    friend void from_json(const Darabonba::Json& j, ResendEmailVerificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailList, failList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessList, successList_);
    };
    ResendEmailVerificationResponseBody() = default ;
    ResendEmailVerificationResponseBody(const ResendEmailVerificationResponseBody &) = default ;
    ResendEmailVerificationResponseBody(ResendEmailVerificationResponseBody &&) = default ;
    ResendEmailVerificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResendEmailVerificationResponseBody() = default ;
    ResendEmailVerificationResponseBody& operator=(const ResendEmailVerificationResponseBody &) = default ;
    ResendEmailVerificationResponseBody& operator=(ResendEmailVerificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SuccessList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SuccessList& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, SuccessList& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      SuccessList() = default ;
      SuccessList(const SuccessList &) = default ;
      SuccessList(SuccessList &&) = default ;
      SuccessList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SuccessList() = default ;
      SuccessList& operator=(const SuccessList &) = default ;
      SuccessList& operator=(SuccessList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->email_ == nullptr && this->message_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline SuccessList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline SuccessList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline SuccessList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> message_ {};
    };

    class FailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FailList& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, FailList& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      FailList() = default ;
      FailList(const FailList &) = default ;
      FailList(FailList &&) = default ;
      FailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FailList() = default ;
      FailList& operator=(const FailList &) = default ;
      FailList& operator=(FailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->email_ == nullptr && this->message_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline FailList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline FailList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline FailList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->failList_ == nullptr
        && this->requestId_ == nullptr && this->successList_ == nullptr; };
    // failList Field Functions 
    bool hasFailList() const { return this->failList_ != nullptr;};
    void deleteFailList() { this->failList_ = nullptr;};
    inline const vector<ResendEmailVerificationResponseBody::FailList> & getFailList() const { DARABONBA_PTR_GET_CONST(failList_, vector<ResendEmailVerificationResponseBody::FailList>) };
    inline vector<ResendEmailVerificationResponseBody::FailList> getFailList() { DARABONBA_PTR_GET(failList_, vector<ResendEmailVerificationResponseBody::FailList>) };
    inline ResendEmailVerificationResponseBody& setFailList(const vector<ResendEmailVerificationResponseBody::FailList> & failList) { DARABONBA_PTR_SET_VALUE(failList_, failList) };
    inline ResendEmailVerificationResponseBody& setFailList(vector<ResendEmailVerificationResponseBody::FailList> && failList) { DARABONBA_PTR_SET_RVALUE(failList_, failList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResendEmailVerificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successList Field Functions 
    bool hasSuccessList() const { return this->successList_ != nullptr;};
    void deleteSuccessList() { this->successList_ = nullptr;};
    inline const vector<ResendEmailVerificationResponseBody::SuccessList> & getSuccessList() const { DARABONBA_PTR_GET_CONST(successList_, vector<ResendEmailVerificationResponseBody::SuccessList>) };
    inline vector<ResendEmailVerificationResponseBody::SuccessList> getSuccessList() { DARABONBA_PTR_GET(successList_, vector<ResendEmailVerificationResponseBody::SuccessList>) };
    inline ResendEmailVerificationResponseBody& setSuccessList(const vector<ResendEmailVerificationResponseBody::SuccessList> & successList) { DARABONBA_PTR_SET_VALUE(successList_, successList) };
    inline ResendEmailVerificationResponseBody& setSuccessList(vector<ResendEmailVerificationResponseBody::SuccessList> && successList) { DARABONBA_PTR_SET_RVALUE(successList_, successList) };


  protected:
    shared_ptr<vector<ResendEmailVerificationResponseBody::FailList>> failList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ResendEmailVerificationResponseBody::SuccessList>> successList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
