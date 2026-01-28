// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITEMAILVERIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITEMAILVERIFICATIONRESPONSEBODY_HPP_
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
  class SubmitEmailVerificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitEmailVerificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExistList, existList_);
      DARABONBA_PTR_TO_JSON(FailList, failList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuccessList, successList_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitEmailVerificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExistList, existList_);
      DARABONBA_PTR_FROM_JSON(FailList, failList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuccessList, successList_);
    };
    SubmitEmailVerificationResponseBody() = default ;
    SubmitEmailVerificationResponseBody(const SubmitEmailVerificationResponseBody &) = default ;
    SubmitEmailVerificationResponseBody(SubmitEmailVerificationResponseBody &&) = default ;
    SubmitEmailVerificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitEmailVerificationResponseBody() = default ;
    SubmitEmailVerificationResponseBody& operator=(const SubmitEmailVerificationResponseBody &) = default ;
    SubmitEmailVerificationResponseBody& operator=(SubmitEmailVerificationResponseBody &&) = default ;
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

    class ExistList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExistList& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, ExistList& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      ExistList() = default ;
      ExistList(const ExistList &) = default ;
      ExistList(ExistList &&) = default ;
      ExistList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExistList() = default ;
      ExistList& operator=(const ExistList &) = default ;
      ExistList& operator=(ExistList &&) = default ;
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
      inline ExistList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline ExistList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ExistList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->existList_ == nullptr
        && this->failList_ == nullptr && this->requestId_ == nullptr && this->successList_ == nullptr; };
    // existList Field Functions 
    bool hasExistList() const { return this->existList_ != nullptr;};
    void deleteExistList() { this->existList_ = nullptr;};
    inline const vector<SubmitEmailVerificationResponseBody::ExistList> & getExistList() const { DARABONBA_PTR_GET_CONST(existList_, vector<SubmitEmailVerificationResponseBody::ExistList>) };
    inline vector<SubmitEmailVerificationResponseBody::ExistList> getExistList() { DARABONBA_PTR_GET(existList_, vector<SubmitEmailVerificationResponseBody::ExistList>) };
    inline SubmitEmailVerificationResponseBody& setExistList(const vector<SubmitEmailVerificationResponseBody::ExistList> & existList) { DARABONBA_PTR_SET_VALUE(existList_, existList) };
    inline SubmitEmailVerificationResponseBody& setExistList(vector<SubmitEmailVerificationResponseBody::ExistList> && existList) { DARABONBA_PTR_SET_RVALUE(existList_, existList) };


    // failList Field Functions 
    bool hasFailList() const { return this->failList_ != nullptr;};
    void deleteFailList() { this->failList_ = nullptr;};
    inline const vector<SubmitEmailVerificationResponseBody::FailList> & getFailList() const { DARABONBA_PTR_GET_CONST(failList_, vector<SubmitEmailVerificationResponseBody::FailList>) };
    inline vector<SubmitEmailVerificationResponseBody::FailList> getFailList() { DARABONBA_PTR_GET(failList_, vector<SubmitEmailVerificationResponseBody::FailList>) };
    inline SubmitEmailVerificationResponseBody& setFailList(const vector<SubmitEmailVerificationResponseBody::FailList> & failList) { DARABONBA_PTR_SET_VALUE(failList_, failList) };
    inline SubmitEmailVerificationResponseBody& setFailList(vector<SubmitEmailVerificationResponseBody::FailList> && failList) { DARABONBA_PTR_SET_RVALUE(failList_, failList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitEmailVerificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // successList Field Functions 
    bool hasSuccessList() const { return this->successList_ != nullptr;};
    void deleteSuccessList() { this->successList_ = nullptr;};
    inline const vector<SubmitEmailVerificationResponseBody::SuccessList> & getSuccessList() const { DARABONBA_PTR_GET_CONST(successList_, vector<SubmitEmailVerificationResponseBody::SuccessList>) };
    inline vector<SubmitEmailVerificationResponseBody::SuccessList> getSuccessList() { DARABONBA_PTR_GET(successList_, vector<SubmitEmailVerificationResponseBody::SuccessList>) };
    inline SubmitEmailVerificationResponseBody& setSuccessList(const vector<SubmitEmailVerificationResponseBody::SuccessList> & successList) { DARABONBA_PTR_SET_VALUE(successList_, successList) };
    inline SubmitEmailVerificationResponseBody& setSuccessList(vector<SubmitEmailVerificationResponseBody::SuccessList> && successList) { DARABONBA_PTR_SET_RVALUE(successList_, successList) };


  protected:
    shared_ptr<vector<SubmitEmailVerificationResponseBody::ExistList>> existList_ {};
    shared_ptr<vector<SubmitEmailVerificationResponseBody::FailList>> failList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<SubmitEmailVerificationResponseBody::SuccessList>> successList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
