// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEMAILVERIFICATIONRESPONSEBODYFAILLIST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEMAILVERIFICATIONRESPONSEBODYFAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class DeleteEmailVerificationResponseBodyFailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEmailVerificationResponseBodyFailList& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEmailVerificationResponseBodyFailList& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    DeleteEmailVerificationResponseBodyFailList() = default ;
    DeleteEmailVerificationResponseBodyFailList(const DeleteEmailVerificationResponseBodyFailList &) = default ;
    DeleteEmailVerificationResponseBodyFailList(DeleteEmailVerificationResponseBodyFailList &&) = default ;
    DeleteEmailVerificationResponseBodyFailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEmailVerificationResponseBodyFailList() = default ;
    DeleteEmailVerificationResponseBodyFailList& operator=(const DeleteEmailVerificationResponseBodyFailList &) = default ;
    DeleteEmailVerificationResponseBodyFailList& operator=(DeleteEmailVerificationResponseBodyFailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->email_ == nullptr && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteEmailVerificationResponseBodyFailList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline DeleteEmailVerificationResponseBodyFailList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteEmailVerificationResponseBodyFailList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
